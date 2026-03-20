// Lean compiler output
// Module: Lean.DocString.Extension
// Imports: public import Lean.DeclarationRange public import Lean.DocString.Markdown public import Init.Data.String.Extra import Init.Omega
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
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_instReprDeclarationRange_repr___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Lean_Doc_instReprMathMode_repr(uint8_t, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Std_Format_nestD(lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lean_Doc_MarkdownM_push___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trim(lean_object*, lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode(lean_object*);
lean_object* l_Lean_Doc_MarkdownM_endsWith___redArg(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* l_String_Slice_slice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_State_render(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Doc_MarkdownM_endBlock___redArg(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCodeBlock(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_Doc_MarkdownM_run_x27(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instOrdOLeanLevel_ord(uint8_t, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_erase___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArray_default(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_String_removeLeadingSpaces(lean_object*);
lean_object* l_Lean_Environment_getModuleIdx_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Option_instBEq_beq___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedDeclarationRange_default;
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprElabInline___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "{ name :="};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__0 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__1 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__2 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__2_value;
static const lean_string_object l_Lean_instReprElabInline___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "val :="};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__3 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__3_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__4 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__5 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__5_value;
static const lean_string_object l_Lean_instReprElabInline___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Dynamic.mk "};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__6 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__6_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__7 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__7_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__5_value),((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__7_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__8 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__8_value;
static const lean_string_object l_Lean_instReprElabInline___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " _ }"};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__9 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__9_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__9_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__10 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_instReprElabInline___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprElabInline___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprElabInline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprElabInline___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprElabInline___closed__0 = (const lean_object*)&l_Lean_instReprElabInline___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprElabInline = (const lean_object*)&l_Lean_instReprElabInline___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instMarkdownInlineElabInline___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMarkdownInlineElabInline___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMarkdownInlineElabInline___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__0 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__0_value;
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__1 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__1_value;
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__2 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__2_value;
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__3 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__3_value;
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__4 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__4_value;
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__5 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__5_value;
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__6 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__6_value;
static const lean_ctor_object l_Lean_instMarkdownInlineElabInline___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__0_value),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__1_value)}};
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__7 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__7_value;
static const lean_ctor_object l_Lean_instMarkdownInlineElabInline___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__7_value),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__2_value),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__3_value),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__4_value),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__5_value)}};
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__8 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__8_value;
static const lean_ctor_object l_Lean_instMarkdownInlineElabInline___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__8_value),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__6_value)}};
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__9 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__9_value;
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__1, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__9_value)} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__10 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__10_value;
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__4, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__9_value)} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__11 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__11_value;
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__7, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__9_value)} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__12 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__12_value;
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__9, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__9_value)} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__13 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__13_value;
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_map, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__9_value)} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__14 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__14_value;
static const lean_ctor_object l_Lean_instMarkdownInlineElabInline___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__14_value),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__10_value)}};
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__15 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__15_value;
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_pure, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__9_value)} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__16 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__16_value;
static const lean_ctor_object l_Lean_instMarkdownInlineElabInline___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__15_value),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__16_value),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__11_value),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__12_value),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__13_value)}};
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__17 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__17_value;
static const lean_closure_object l_Lean_instMarkdownInlineElabInline___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_bind, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__9_value)} };
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__18 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__18_value;
static const lean_ctor_object l_Lean_instMarkdownInlineElabInline___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__17_value),((lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__18_value)}};
static const lean_object* l_Lean_instMarkdownInlineElabInline___closed__19 = (const lean_object*)&l_Lean_instMarkdownInlineElabInline___closed__19_value;
static lean_once_cell_t l_Lean_instMarkdownInlineElabInline___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instMarkdownInlineElabInline___closed__20;
static lean_once_cell_t l_Lean_instMarkdownInlineElabInline___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instMarkdownInlineElabInline___closed__21;
LEAN_EXPORT lean_object* l_Lean_instMarkdownInlineElabInline;
LEAN_EXPORT lean_object* l_Lean_instReprElabBlock___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprElabBlock___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprElabBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprElabBlock___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprElabBlock___closed__0 = (const lean_object*)&l_Lean_instReprElabBlock___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprElabBlock = (const lean_object*)&l_Lean_instReprElabBlock___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instMarkdownBlockElabInlineElabBlock___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMarkdownBlockElabInlineElabBlock___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMarkdownBlockElabInlineElabBlock___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instMarkdownBlockElabInlineElabBlock___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instMarkdownBlockElabInlineElabBlock___closed__0;
LEAN_EXPORT lean_object* l_Lean_instMarkdownBlockElabInlineElabBlock;
static const lean_array_object l_Lean_instInhabitedVersoDocString_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedVersoDocString_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedVersoDocString_default___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedVersoDocString_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedVersoDocString_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedVersoDocString_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedVersoDocString;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "doc"};
static const lean_object* l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "verso"};
static const lean_object* l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(146, 8, 133, 236, 68, 139, 240, 234)}};
static const lean_ctor_object l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(153, 72, 77, 160, 222, 42, 129, 126)}};
static const lean_object* l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "whether to use Verso syntax in docstrings"};
static const lean_object* l_Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value)}};
static const lean_object* l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(3, 233, 138, 33, 66, 196, 218, 104)}};
static const lean_ctor_object l_Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 198, 182, 78, 108, 58, 220, 60)}};
static const lean_object* l_Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_doc_verso;
static const lean_string_object l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(146, 8, 133, 236, 68, 139, 240, 234)}};
static const lean_ctor_object l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(153, 72, 77, 160, 222, 42, 129, 126)}};
static const lean_ctor_object l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(237, 134, 110, 210, 89, 29, 102, 103)}};
static const lean_object* l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "whether to use Verso syntax in module docstrings (falls back to `doc.verso` if not set)"};
static const lean_object* l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value)}};
static const lean_object* l_Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(3, 233, 138, 33, 66, 196, 218, 104)}};
static const lean_ctor_object l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 198, 182, 78, 108, 58, 220, 60)}};
static const lean_ctor_object l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_2),((lean_object*)&l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(228, 159, 139, 71, 221, 243, 206, 45)}};
static const lean_object* l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_doc_verso_module;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "docStringExt"};
static const lean_object* l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(220, 176, 252, 112, 223, 70, 141, 135)}};
static const lean_object* l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_docStringExt;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value),((lean_object*)&l_Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "DocString"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(205, 151, 103, 225, 164, 122, 118, 127)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Extension"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(231, 24, 255, 250, 40, 109, 111, 101)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(90, 73, 37, 46, 133, 14, 26, 13)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value),((lean_object*)&l_Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(251, 17, 71, 28, 211, 27, 155, 40)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inheritDocStringExt"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__11_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(124, 170, 221, 64, 52, 198, 31, 56)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__11_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__11_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "versoDocStringExt"};
static const lean_object* l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 29, 13, 95, 132, 33, 43, 178)}};
static const lean_object* l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringExt;
LEAN_EXPORT lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addBuiltinDocString___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeBuiltinDocString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeBuiltinDocString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBuiltinVersoDocStrings();
LEAN_EXPORT lean_object* l_Lean_getBuiltinVersoDocStrings___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addDocStringCore___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration `"};
static const lean_object* l_Lean_addDocStringCore___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_addDocStringCore___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_addDocStringCore___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addDocStringCore___redArg___lam__2___closed__1;
static const lean_string_object l_Lean_addDocStringCore___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is in an imported module"};
static const lean_object* l_Lean_addDocStringCore___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_addDocStringCore___redArg___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_addDocStringCore___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addDocStringCore___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_removeDocStringCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_removeDocStringCore___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_removeDocStringCore___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_removeDocStringCore___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "invalid doc string removal, declaration `"};
static const lean_object* l_Lean_removeDocStringCore___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_removeDocStringCore___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_removeDocStringCore___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_removeDocStringCore___redArg___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addInheritedDocString___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "invalid `[inherit_doc]` attribute, cycle detected"};
static const lean_object* l_Lean_addInheritedDocString___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_addInheritedDocString___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_addInheritedDocString___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addInheritedDocString___redArg___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addInheritedDocString___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "invalid `[inherit_doc]` attribute, declaration `"};
static const lean_object* l_Lean_addInheritedDocString___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_addInheritedDocString___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_addInheritedDocString___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addInheritedDocString___redArg___lam__3___closed__1;
static const lean_string_object l_Lean_addInheritedDocString___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "` already has an `[inherit_doc]` attribute"};
static const lean_object* l_Lean_addInheritedDocString___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_addInheritedDocString___redArg___lam__3___closed__2_value;
static lean_once_cell_t l_Lean_addInheritedDocString___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addInheritedDocString___redArg___lam__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_addInheritedDocString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addInheritedDocString___redArg___closed__0 = (const lean_object*)&l_Lean_addInheritedDocString___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_findInternalDocString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_findInternalDocString_x3f___closed__0 = (const lean_object*)&l_Lean_findInternalDocString_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_findInternalDocString_x3f(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_findInternalDocString_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__1;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__2;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__3;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__4;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__5;
static const lean_ctor_object l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__6 = (const lean_object*)&l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "**"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__2 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__2_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "​"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__3 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__3_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__4 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__4_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "$$"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__5 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__5_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__6 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]("};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__7 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__7_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__8 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__8_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 3, .m_data = "[ˆ^"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__9 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__9_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__10 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__10_value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_findInternalDocString_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__11 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__11_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__12 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__12_value;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__13;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "!["};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__14 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__14_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "* "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "  "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ". "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "> "};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown___lam__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown___boxed__const__1 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_(lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentArray_push___redArg, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "moduleDocExt"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(105, 198, 210, 20, 250, 243, 120, 74)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_moduleDocExt;
LEAN_EXPORT lean_object* l_Lean_addMainModuleDoc(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_getMainModuleDoc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getMainModuleDoc___closed__0;
LEAN_EXPORT lean_object* l_Lean_getMainModuleDoc(lean_object*);
static lean_once_cell_t l_Lean_getModuleDoc_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getModuleDoc_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_getModuleDoc_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getModuleDoc_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_getDocStringText___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___redArg___closed__0 = (const lean_object*)&l_Lean_getDocStringText___redArg___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___redArg___closed__1;
static const lean_string_object l_Lean_getDocStringText___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_getDocStringText___redArg___closed__2 = (const lean_object*)&l_Lean_getDocStringText___redArg___closed__2_value;
static const lean_string_object l_Lean_getDocStringText___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_getDocStringText___redArg___closed__3 = (const lean_object*)&l_Lean_getDocStringText___redArg___closed__3_value;
static const lean_string_object l_Lean_getDocStringText___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l_Lean_getDocStringText___redArg___closed__4 = (const lean_object*)&l_Lean_getDocStringText___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instInhabitedSnippet_default;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instInhabitedSnippet;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__2(lean_object*);
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.text"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__0_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__2 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__2_value;
static lean_once_cell_t l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3;
static lean_once_cell_t l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.emph"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__5 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__5_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__6 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__6_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__7 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__7_value;
static const lean_string_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__1 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4;
static lean_once_cell_t l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__10_value)}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7_value;
static const lean_string_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8_value)}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object*);
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.bold"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__8 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__8_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__8_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__9 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__9_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__10 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__10_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.code"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__11 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__11_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__11_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__12 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__12_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__13 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__13_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.math"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__14 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__14_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__14_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__15 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__15_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__16 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__16_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Doc.Inline.linebreak"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__17 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__17_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__17_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__18 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__18_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__19 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__19_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.link"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__20 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__20_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__20_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__21 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__21_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__21_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__22 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__22_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Doc.Inline.footnote"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__23 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__23_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__23_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__24 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__24_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__24_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__25 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__25_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Doc.Inline.image"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__26 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__26_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__26_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__27 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__27_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__27_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__28 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__28_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Doc.Inline.concat"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__29 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__29_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__29_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__30 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__30_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__30_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__31 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__31_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Doc.Inline.other"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__32 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__32_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__32_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__33 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__33_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__33_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__34 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__34_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(lean_object*);
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Doc.Block.para"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Doc.Block.code"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__3_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__3_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__4_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Doc.Block.ul"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__6_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__6_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__7_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__8_value;
static const lean_string_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__4 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__4_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value;
static const lean_string_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "contents"};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__1_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__2_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__3 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__3_value),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__6 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(lean_object*);
static const lean_string_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9;
static lean_once_cell_t l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11_value;
static const lean_string_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__8 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__8_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3(lean_object*);
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Doc.Block.ol"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__9_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__9_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__10_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__10_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__11 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__11_value;
static lean_once_cell_t l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Doc.Block.dl"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__13 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__13_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__13_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__14 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__14_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__14_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__15 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__15_value;
static const lean_string_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__1 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__1_value)}};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__2 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__2_value),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__3 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4;
static const lean_string_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "desc"};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__5 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__6 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18_spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4(lean_object*);
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Doc.Block.blockquote"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__16 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__16_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__16_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__17 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__17_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__17_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__18 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__18_value;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Doc.Block.concat"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__19 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__19_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__19_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__20 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__20_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__20_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__21 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__21_value;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Block.other"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__22 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__22_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__22_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__23 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__23_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__23_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__24 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__24_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0(lean_object*);
static const lean_string_object l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__0 = (const lean_object*)&l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__1 = (const lean_object*)&l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__1 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__1_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__2 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__2_value),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__3 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4;
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "titleString"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__5 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__6 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7;
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "metadata"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__8 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__8_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__9 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__9_value;
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "content"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__10 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__10_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__11 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__11_value;
static lean_once_cell_t l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12;
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "subParts"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__13 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__13_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__13_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__14 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34_spec__35(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3_value;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__8_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1(lean_object*);
static const lean_string_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__1 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__2 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__3 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "sections"};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__4 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__5 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__5_value;
static const lean_string_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "declarationRange"};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__6 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__6_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__6_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__7 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__7_value;
static lean_once_cell_t l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_VersoModuleDocs_instReprSnippet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_VersoModuleDocs_instReprSnippet_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_VersoModuleDocs_instReprSnippet = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_Snippet_canNestIn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_canNestIn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_terminalNesting(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_terminalNesting___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_addBlock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_addPart(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__3(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__4___closed__0___boxed__const__1;
static lean_once_cell_t l_Lean_instToMarkdownSnippet___lam__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToMarkdownSnippet___lam__4___closed__0;
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instToMarkdownSnippet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToMarkdownSnippet___closed__0;
static lean_once_cell_t l_Lean_instToMarkdownSnippet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToMarkdownSnippet___closed__1;
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet;
static lean_once_cell_t l_Lean_instInhabitedVersoModuleDocs_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedVersoModuleDocs_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedVersoModuleDocs_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedVersoModuleDocs_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedVersoModuleDocs_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedVersoModuleDocs;
static const lean_string_object l_Lean_instReprVersoModuleDocs___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "snippets := "};
static const lean_object* l_Lean_instReprVersoModuleDocs___lam__0___closed__0 = (const lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instReprVersoModuleDocs___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instReprVersoModuleDocs___lam__0___closed__1 = (const lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instReprVersoModuleDocs___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprVersoModuleDocs___lam__0___closed__2 = (const lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instReprVersoModuleDocs___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprVersoModuleDocs___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprVersoModuleDocs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprVersoModuleDocs___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet___closed__0_value)} };
static const lean_object* l_Lean_instReprVersoModuleDocs___closed__0 = (const lean_object*)&l_Lean_instReprVersoModuleDocs___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprVersoModuleDocs = (const lean_object*)&l_Lean_instReprVersoModuleDocs___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_isEmpty___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_canAdd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_canAdd___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_VersoModuleDocs_add___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Can't nest this snippet here"};
static const lean_object* l_Lean_VersoModuleDocs_add___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_add___closed__0_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_add___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_add___closed__0_value)}};
static const lean_object* l_Lean_VersoModuleDocs_add___closed__1 = (const lean_object*)&l_Lean_VersoModuleDocs_add___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_VersoModuleDocs_add_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_VersoModuleDocs_add_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.DocString.Extension"};
static const lean_object* l_Lean_VersoModuleDocs_add_x21___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_add_x21___closed__0_value;
static const lean_string_object l_Lean_VersoModuleDocs_add_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.VersoModuleDocs.add!"};
static const lean_object* l_Lean_VersoModuleDocs_add_x21___closed__1 = (const lean_object*)&l_Lean_VersoModuleDocs_add_x21___closed__1_value;
static lean_once_cell_t l_Lean_VersoModuleDocs_add_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_VersoModuleDocs_add_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_add_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level___boxed(lean_object*);
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Can't close a section: none are open"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__0 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__1 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_closeAll(lean_object*);
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Invalid nesting: expected at most "};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__0 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " but got "};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__1 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Can't add content after sub-parts"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__0 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__1 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0(lean_object*, lean_object*);
static const lean_array_object l_Lean_VersoModuleDocs_assemble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_VersoModuleDocs_assemble___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_assemble___closed__0_value;
static lean_once_cell_t l_Lean_VersoModuleDocs_assemble___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_VersoModuleDocs_assemble___closed__1;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_assemble(lean_object*);
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_VersoModuleDocs_add_x21, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "versoModuleDocExt"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(39, 74, 101, 232, 220, 166, 152, 230)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt;
LEAN_EXPORT lean_object* l_Lean_getMainVersoModuleDocs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDocs(lean_object*);
static lean_once_cell_t l_Lean_getVersoModuleDoc_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getVersoModuleDoc_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDoc_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDoc_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModuleDocSnippet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Can't add - incorrect nesting "};
static const lean_object* l_Lean_addVersoModuleDocSnippet___closed__0 = (const lean_object*)&l_Lean_addVersoModuleDocSnippet___closed__0_value;
static const lean_string_object l_Lean_addVersoModuleDocSnippet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "(expected at most "};
static const lean_object* l_Lean_addVersoModuleDocSnippet___closed__1 = (const lean_object*)&l_Lean_addVersoModuleDocSnippet___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addVersoModuleDocSnippet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprElabInline___lam__0(lean_object* v_v_22_, lean_object* v_x_23_){
_start:
{
lean_object* v_name_24_; lean_object* v_val_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_51_; 
v_name_24_ = lean_ctor_get(v_v_22_, 0);
v_val_25_ = lean_ctor_get(v_v_22_, 1);
v_isSharedCheck_51_ = !lean_is_exclusive(v_v_22_);
if (v_isSharedCheck_51_ == 0)
{
v___x_27_ = v_v_22_;
v_isShared_28_ = v_isSharedCheck_51_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_val_25_);
lean_inc(v_name_24_);
lean_dec(v_v_22_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_51_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_34_; 
v___x_29_ = lean_box(1);
v___x_30_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__2));
v___x_31_ = lean_unsigned_to_nat(0u);
v___x_32_ = l_Lean_Name_reprPrec(v_name_24_, v___x_31_);
if (v_isShared_28_ == 0)
{
lean_ctor_set_tag(v___x_27_, 5);
lean_ctor_set(v___x_27_, 1, v___x_32_);
lean_ctor_set(v___x_27_, 0, v___x_30_);
v___x_34_ = v___x_27_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v___x_30_);
lean_ctor_set(v_reuseFailAlloc_50_, 1, v___x_32_);
v___x_34_ = v_reuseFailAlloc_50_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
lean_object* v___x_35_; uint8_t v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_35_ = l_Std_Format_nestD(v___x_34_);
v___x_36_ = 0;
v___x_37_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_37_, 0, v___x_35_);
lean_ctor_set_uint8(v___x_37_, sizeof(void*)*1, v___x_36_);
v___x_38_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_29_);
v___x_39_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__8));
v___x_40_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_25_);
lean_dec(v_val_25_);
v___x_41_ = l_Lean_Name_reprPrec(v___x_40_, v___x_31_);
v___x_42_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_42_, 0, v___x_39_);
lean_ctor_set(v___x_42_, 1, v___x_41_);
v___x_43_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__10));
v___x_44_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_42_);
lean_ctor_set(v___x_44_, 1, v___x_43_);
v___x_45_ = l_Std_Format_nestD(v___x_44_);
v___x_46_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_46_, 0, v___x_45_);
lean_ctor_set_uint8(v___x_46_, sizeof(void*)*1, v___x_36_);
v___x_47_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_47_, 0, v___x_38_);
lean_ctor_set(v___x_47_, 1, v___x_46_);
v___x_48_ = l_Std_Format_nestD(v___x_47_);
v___x_49_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_49_, 0, v___x_48_);
lean_ctor_set_uint8(v___x_49_, sizeof(void*)*1, v___x_36_);
return v___x_49_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprElabInline___lam__0___boxed(lean_object* v_v_52_, lean_object* v_x_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_instReprElabInline___lam__0(v_v_52_, v_x_53_);
lean_dec(v_x_53_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMarkdownInlineElabInline___lam__0(lean_object* v_go_57_, lean_object* v_x_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = lean_apply_3(v_go_57_, v___y_59_, v___y_60_, v___y_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMarkdownInlineElabInline___lam__1(lean_object* v___x_63_, lean_object* v_go_64_, lean_object* v___i_65_, lean_object* v_content_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = lean_array_get_size(v_content_66_);
v___x_71_ = lean_box(0);
v___x_72_ = lean_nat_dec_lt(v___x_69_, v___x_70_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; 
lean_dec_ref(v___y_67_);
lean_dec_ref(v_content_66_);
lean_dec_ref(v_go_64_);
lean_dec_ref(v___x_63_);
v___x_73_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_71_);
lean_ctor_set(v___x_73_, 1, v___y_68_);
return v___x_73_;
}
else
{
lean_object* v___f_74_; uint8_t v___x_75_; 
v___f_74_ = lean_alloc_closure((void*)(l_Lean_instMarkdownInlineElabInline___lam__0), 5, 1);
lean_closure_set(v___f_74_, 0, v_go_64_);
v___x_75_ = lean_nat_dec_le(v___x_70_, v___x_70_);
if (v___x_75_ == 0)
{
if (v___x_72_ == 0)
{
lean_object* v___x_76_; 
lean_dec_ref(v___f_74_);
lean_dec_ref(v___y_67_);
lean_dec_ref(v_content_66_);
lean_dec_ref(v___x_63_);
v___x_76_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_71_);
lean_ctor_set(v___x_76_, 1, v___y_68_);
return v___x_76_;
}
else
{
size_t v___x_77_; size_t v___x_78_; lean_object* v___x_499__overap_79_; lean_object* v___x_80_; 
v___x_77_ = ((size_t)0ULL);
v___x_78_ = lean_usize_of_nat(v___x_70_);
v___x_499__overap_79_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_63_, v___f_74_, v_content_66_, v___x_77_, v___x_78_, v___x_71_);
v___x_80_ = lean_apply_2(v___x_499__overap_79_, v___y_67_, v___y_68_);
return v___x_80_;
}
}
else
{
size_t v___x_81_; size_t v___x_82_; lean_object* v___x_502__overap_83_; lean_object* v___x_84_; 
v___x_81_ = ((size_t)0ULL);
v___x_82_ = lean_usize_of_nat(v___x_70_);
v___x_502__overap_83_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_63_, v___f_74_, v_content_66_, v___x_81_, v___x_82_, v___x_71_);
v___x_84_ = lean_apply_2(v___x_502__overap_83_, v___y_67_, v___y_68_);
return v___x_84_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMarkdownInlineElabInline___lam__1___boxed(lean_object* v___x_85_, lean_object* v_go_86_, lean_object* v___i_87_, lean_object* v_content_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lean_instMarkdownInlineElabInline___lam__1(v___x_85_, v_go_86_, v___i_87_, v_content_88_, v___y_89_, v___y_90_);
lean_dec_ref(v___i_87_);
return v_res_91_;
}
}
static lean_object* _init_l_Lean_instMarkdownInlineElabInline___closed__20(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = ((lean_object*)(l_Lean_instMarkdownInlineElabInline___closed__19));
v___x_138_ = l_ReaderT_instMonad___redArg(v___x_137_);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_instMarkdownInlineElabInline___closed__21(void){
_start:
{
lean_object* v___x_139_; lean_object* v___f_140_; 
v___x_139_ = lean_obj_once(&l_Lean_instMarkdownInlineElabInline___closed__20, &l_Lean_instMarkdownInlineElabInline___closed__20_once, _init_l_Lean_instMarkdownInlineElabInline___closed__20);
v___f_140_ = lean_alloc_closure((void*)(l_Lean_instMarkdownInlineElabInline___lam__1___boxed), 6, 1);
lean_closure_set(v___f_140_, 0, v___x_139_);
return v___f_140_;
}
}
static lean_object* _init_l_Lean_instMarkdownInlineElabInline(void){
_start:
{
lean_object* v___f_141_; 
v___f_141_ = lean_obj_once(&l_Lean_instMarkdownInlineElabInline___closed__21, &l_Lean_instMarkdownInlineElabInline___closed__21_once, _init_l_Lean_instMarkdownInlineElabInline___closed__21);
return v___f_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprElabBlock___lam__0(lean_object* v_v_142_, lean_object* v_x_143_){
_start:
{
lean_object* v_name_144_; lean_object* v_val_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_171_; 
v_name_144_ = lean_ctor_get(v_v_142_, 0);
v_val_145_ = lean_ctor_get(v_v_142_, 1);
v_isSharedCheck_171_ = !lean_is_exclusive(v_v_142_);
if (v_isSharedCheck_171_ == 0)
{
v___x_147_ = v_v_142_;
v_isShared_148_ = v_isSharedCheck_171_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_val_145_);
lean_inc(v_name_144_);
lean_dec(v_v_142_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_171_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_154_; 
v___x_149_ = lean_box(1);
v___x_150_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__2));
v___x_151_ = lean_unsigned_to_nat(0u);
v___x_152_ = l_Lean_Name_reprPrec(v_name_144_, v___x_151_);
if (v_isShared_148_ == 0)
{
lean_ctor_set_tag(v___x_147_, 5);
lean_ctor_set(v___x_147_, 1, v___x_152_);
lean_ctor_set(v___x_147_, 0, v___x_150_);
v___x_154_ = v___x_147_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_150_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v___x_152_);
v___x_154_ = v_reuseFailAlloc_170_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
lean_object* v___x_155_; uint8_t v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_155_ = l_Std_Format_nestD(v___x_154_);
v___x_156_ = 0;
v___x_157_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_157_, 0, v___x_155_);
lean_ctor_set_uint8(v___x_157_, sizeof(void*)*1, v___x_156_);
v___x_158_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
lean_ctor_set(v___x_158_, 1, v___x_149_);
v___x_159_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__8));
v___x_160_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_145_);
lean_dec(v_val_145_);
v___x_161_ = l_Lean_Name_reprPrec(v___x_160_, v___x_151_);
v___x_162_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_159_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
v___x_163_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__10));
v___x_164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set(v___x_164_, 1, v___x_163_);
v___x_165_ = l_Std_Format_nestD(v___x_164_);
v___x_166_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set_uint8(v___x_166_, sizeof(void*)*1, v___x_156_);
v___x_167_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_158_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
v___x_168_ = l_Std_Format_nestD(v___x_167_);
v___x_169_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*1, v___x_156_);
return v___x_169_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprElabBlock___lam__0___boxed(lean_object* v_v_172_, lean_object* v_x_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Lean_instReprElabBlock___lam__0(v_v_172_, v_x_173_);
lean_dec(v_x_173_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMarkdownBlockElabInlineElabBlock___lam__0(lean_object* v_goB_177_, lean_object* v_x_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = lean_apply_3(v_goB_177_, v___y_179_, v___y_180_, v___y_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMarkdownBlockElabInlineElabBlock___lam__1(lean_object* v___x_183_, lean_object* v___goI_184_, lean_object* v_goB_185_, lean_object* v___b_186_, lean_object* v_content_187_, lean_object* v___y_188_, lean_object* v___y_189_){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_190_ = lean_unsigned_to_nat(0u);
v___x_191_ = lean_array_get_size(v_content_187_);
v___x_192_ = lean_box(0);
v___x_193_ = lean_nat_dec_lt(v___x_190_, v___x_191_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; 
lean_dec_ref(v___y_188_);
lean_dec_ref(v_content_187_);
lean_dec_ref(v_goB_185_);
lean_dec_ref(v___x_183_);
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_192_);
lean_ctor_set(v___x_194_, 1, v___y_189_);
return v___x_194_;
}
else
{
lean_object* v___f_195_; uint8_t v___x_196_; 
v___f_195_ = lean_alloc_closure((void*)(l_Lean_instMarkdownBlockElabInlineElabBlock___lam__0), 5, 1);
lean_closure_set(v___f_195_, 0, v_goB_185_);
v___x_196_ = lean_nat_dec_le(v___x_191_, v___x_191_);
if (v___x_196_ == 0)
{
if (v___x_193_ == 0)
{
lean_object* v___x_197_; 
lean_dec_ref(v___f_195_);
lean_dec_ref(v___y_188_);
lean_dec_ref(v_content_187_);
lean_dec_ref(v___x_183_);
v___x_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_197_, 0, v___x_192_);
lean_ctor_set(v___x_197_, 1, v___y_189_);
return v___x_197_;
}
else
{
size_t v___x_198_; size_t v___x_199_; lean_object* v___x_499__overap_200_; lean_object* v___x_201_; 
v___x_198_ = ((size_t)0ULL);
v___x_199_ = lean_usize_of_nat(v___x_191_);
v___x_499__overap_200_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_183_, v___f_195_, v_content_187_, v___x_198_, v___x_199_, v___x_192_);
v___x_201_ = lean_apply_2(v___x_499__overap_200_, v___y_188_, v___y_189_);
return v___x_201_;
}
}
else
{
size_t v___x_202_; size_t v___x_203_; lean_object* v___x_502__overap_204_; lean_object* v___x_205_; 
v___x_202_ = ((size_t)0ULL);
v___x_203_ = lean_usize_of_nat(v___x_191_);
v___x_502__overap_204_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_183_, v___f_195_, v_content_187_, v___x_202_, v___x_203_, v___x_192_);
v___x_205_ = lean_apply_2(v___x_502__overap_204_, v___y_188_, v___y_189_);
return v___x_205_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMarkdownBlockElabInlineElabBlock___lam__1___boxed(lean_object* v___x_206_, lean_object* v___goI_207_, lean_object* v_goB_208_, lean_object* v___b_209_, lean_object* v_content_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lean_instMarkdownBlockElabInlineElabBlock___lam__1(v___x_206_, v___goI_207_, v_goB_208_, v___b_209_, v_content_210_, v___y_211_, v___y_212_);
lean_dec_ref(v___b_209_);
lean_dec_ref(v___goI_207_);
return v_res_213_;
}
}
static lean_object* _init_l_Lean_instMarkdownBlockElabInlineElabBlock___closed__0(void){
_start:
{
lean_object* v___x_214_; lean_object* v___f_215_; 
v___x_214_ = lean_obj_once(&l_Lean_instMarkdownInlineElabInline___closed__20, &l_Lean_instMarkdownInlineElabInline___closed__20_once, _init_l_Lean_instMarkdownInlineElabInline___closed__20);
v___f_215_ = lean_alloc_closure((void*)(l_Lean_instMarkdownBlockElabInlineElabBlock___lam__1___boxed), 7, 1);
lean_closure_set(v___f_215_, 0, v___x_214_);
return v___f_215_;
}
}
static lean_object* _init_l_Lean_instMarkdownBlockElabInlineElabBlock(void){
_start:
{
lean_object* v___f_216_; 
v___f_216_ = lean_obj_once(&l_Lean_instMarkdownBlockElabInlineElabBlock___closed__0, &l_Lean_instMarkdownBlockElabInlineElabBlock___closed__0_once, _init_l_Lean_instMarkdownBlockElabInlineElabBlock___closed__0);
return v___f_216_;
}
}
static lean_object* _init_l_Lean_instInhabitedVersoDocString_default___closed__1(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = ((lean_object*)(l_Lean_instInhabitedVersoDocString_default___closed__0));
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
lean_ctor_set(v___x_220_, 1, v___x_219_);
return v___x_220_;
}
}
static lean_object* _init_l_Lean_instInhabitedVersoDocString_default(void){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_obj_once(&l_Lean_instInhabitedVersoDocString_default___closed__1, &l_Lean_instInhabitedVersoDocString_default___closed__1_once, _init_l_Lean_instInhabitedVersoDocString_default___closed__1);
return v___x_221_;
}
}
static lean_object* _init_l_Lean_instInhabitedVersoDocString(void){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = l_Lean_instInhabitedVersoDocString_default;
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(lean_object* v_name_223_, lean_object* v_decl_224_, lean_object* v_ref_225_){
_start:
{
lean_object* v_defValue_227_; lean_object* v_descr_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_255_; 
v_defValue_227_ = lean_ctor_get(v_decl_224_, 0);
v_descr_228_ = lean_ctor_get(v_decl_224_, 1);
v_isSharedCheck_255_ = !lean_is_exclusive(v_decl_224_);
if (v_isSharedCheck_255_ == 0)
{
v___x_230_ = v_decl_224_;
v_isShared_231_ = v_isSharedCheck_255_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_descr_228_);
lean_inc(v_defValue_227_);
lean_dec(v_decl_224_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_255_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_232_; uint8_t v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_232_ = lean_alloc_ctor(1, 0, 1);
v___x_233_ = lean_unbox(v_defValue_227_);
lean_ctor_set_uint8(v___x_232_, 0, v___x_233_);
lean_inc(v_name_223_);
v___x_234_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_234_, 0, v_name_223_);
lean_ctor_set(v___x_234_, 1, v_ref_225_);
lean_ctor_set(v___x_234_, 2, v___x_232_);
lean_ctor_set(v___x_234_, 3, v_descr_228_);
lean_inc(v_name_223_);
v___x_235_ = lean_register_option(v_name_223_, v___x_234_);
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_245_; 
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_245_ == 0)
{
lean_object* v_unused_246_; 
v_unused_246_ = lean_ctor_get(v___x_235_, 0);
lean_dec(v_unused_246_);
v___x_237_ = v___x_235_;
v_isShared_238_ = v_isSharedCheck_245_;
goto v_resetjp_236_;
}
else
{
lean_dec(v___x_235_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_245_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 1, v_defValue_227_);
lean_ctor_set(v___x_230_, 0, v_name_223_);
v___x_240_ = v___x_230_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_name_223_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_defValue_227_);
v___x_240_ = v_reuseFailAlloc_244_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_242_; 
if (v_isShared_238_ == 0)
{
lean_ctor_set(v___x_237_, 0, v___x_240_);
v___x_242_ = v___x_237_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_240_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
else
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_254_; 
lean_del_object(v___x_230_);
lean_dec(v_defValue_227_);
lean_dec(v_name_223_);
v_a_247_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_254_ == 0)
{
v___x_249_ = v___x_235_;
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_235_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_252_; 
if (v_isShared_250_ == 0)
{
v___x_252_ = v___x_249_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_247_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_256_, lean_object* v_decl_257_, lean_object* v_ref_258_, lean_object* v_a_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_Option_register___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(v_name_256_, v_decl_257_, v_ref_258_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_277_ = ((lean_object*)(l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_278_ = ((lean_object*)(l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_279_ = ((lean_object*)(l_Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_280_ = l_Lean_Option_register___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(v___x_277_, v___x_278_, v___x_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4____boxed(lean_object* v_a_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_();
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_299_ = ((lean_object*)(l_Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_));
v___x_300_ = ((lean_object*)(l_Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_));
v___x_301_ = ((lean_object*)(l_Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_));
v___x_302_ = l_Lean_Option_register___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(v___x_299_, v___x_300_, v___x_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4____boxed(lean_object* v_a_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_();
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_306_ = lean_box(1);
v___x_307_ = lean_st_mk_ref(v___x_306_);
v___x_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2____boxed(lean_object* v_a_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2_();
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_311_, lean_object* v_x_312_){
_start:
{
if (lean_obj_tag(v_x_312_) == 0)
{
lean_object* v_k_313_; lean_object* v_v_314_; lean_object* v_l_315_; lean_object* v_r_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v_k_313_ = lean_ctor_get(v_x_312_, 1);
v_v_314_ = lean_ctor_get(v_x_312_, 2);
v_l_315_ = lean_ctor_get(v_x_312_, 3);
v_r_316_ = lean_ctor_get(v_x_312_, 4);
v___x_317_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__spec__0_spec__0(v_init_311_, v_l_315_);
lean_inc(v_v_314_);
lean_inc(v_k_313_);
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v_k_313_);
lean_ctor_set(v___x_318_, 1, v_v_314_);
v___x_319_ = lean_array_push(v___x_317_, v___x_318_);
v_init_311_ = v___x_319_;
v_x_312_ = v_r_316_;
goto _start;
}
else
{
return v_init_311_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_321_, lean_object* v_x_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__spec__0_spec__0(v_init_321_, v_x_322_);
lean_dec(v_x_322_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_(lean_object* v_x_326_, lean_object* v_s_327_, uint8_t v_level_328_){
_start:
{
uint8_t v___x_329_; uint8_t v___x_330_; 
v___x_329_ = 1;
v___x_330_ = l_Lean_instOrdOLeanLevel_ord(v_level_328_, v___x_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; 
v___x_331_ = ((lean_object*)(l_Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_));
return v___x_331_;
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = ((lean_object*)(l_Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_));
v___x_333_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__spec__0_spec__0(v___x_332_, v_s_327_);
return v___x_333_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2____boxed(lean_object* v_x_334_, lean_object* v_s_335_, lean_object* v_level_336_){
_start:
{
uint8_t v_level_boxed_337_; lean_object* v_res_338_; 
v_level_boxed_337_ = lean_unbox(v_level_336_);
v_res_338_ = l_Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_(v_x_334_, v_s_335_, v_level_boxed_337_);
lean_dec(v_s_335_);
lean_dec_ref(v_x_334_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___f_347_ = ((lean_object*)(l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_));
v___x_348_ = ((lean_object*)(l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_));
v___x_349_ = ((lean_object*)(l_Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_));
v___x_350_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_348_, v___x_349_, v___f_347_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2____boxed(lean_object* v_a_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_();
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__spec__0(lean_object* v_init_353_, lean_object* v_t_354_){
_start:
{
lean_object* v___x_355_; 
v___x_355_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__spec__0_spec__0(v_init_353_, v_t_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_356_, lean_object* v_t_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2__spec__0(v_init_356_, v_t_357_);
lean_dec(v_t_357_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_359_, lean_object* v_x_360_){
_start:
{
if (lean_obj_tag(v_x_360_) == 0)
{
lean_object* v_k_361_; lean_object* v_v_362_; lean_object* v_l_363_; lean_object* v_r_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v_k_361_ = lean_ctor_get(v_x_360_, 1);
v_v_362_ = lean_ctor_get(v_x_360_, 2);
v_l_363_ = lean_ctor_get(v_x_360_, 3);
v_r_364_ = lean_ctor_get(v_x_360_, 4);
v___x_365_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__spec__0_spec__0(v_init_359_, v_l_363_);
lean_inc(v_v_362_);
lean_inc(v_k_361_);
v___x_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_366_, 0, v_k_361_);
lean_ctor_set(v___x_366_, 1, v_v_362_);
v___x_367_ = lean_array_push(v___x_365_, v___x_366_);
v_init_359_ = v___x_367_;
v_x_360_ = v_r_364_;
goto _start;
}
else
{
return v_init_359_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_369_, lean_object* v_x_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__spec__0_spec__0(v_init_369_, v_x_370_);
lean_dec(v_x_370_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_(lean_object* v_x_374_, lean_object* v_s_375_, uint8_t v_level_376_){
_start:
{
uint8_t v___x_377_; uint8_t v___x_378_; 
v___x_377_ = 1;
v___x_378_ = l_Lean_instOrdOLeanLevel_ord(v_level_376_, v___x_377_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; 
v___x_379_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_));
return v___x_379_;
}
else
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_));
v___x_381_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__spec__0_spec__0(v___x_380_, v_s_375_);
return v___x_381_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2____boxed(lean_object* v_x_382_, lean_object* v_s_383_, lean_object* v_level_384_){
_start:
{
uint8_t v_level_boxed_385_; lean_object* v_res_386_; 
v_level_boxed_385_ = lean_unbox(v_level_384_);
v_res_386_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_(v_x_382_, v_s_383_, v_level_boxed_385_);
lean_dec(v_s_383_);
lean_dec_ref(v_x_382_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___f_416_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_));
v___x_417_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__11_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_));
v___x_418_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_));
v___x_419_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_417_, v___x_418_, v___f_416_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2____boxed(lean_object* v_a_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_();
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__spec__0(lean_object* v_init_422_, lean_object* v_t_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__spec__0_spec__0(v_init_422_, v_t_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_425_, lean_object* v_t_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2__spec__0(v_init_425_, v_t_426_);
lean_dec(v_t_426_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_429_ = lean_box(1);
v___x_430_ = lean_st_mk_ref(v___x_429_);
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2____boxed(lean_object* v_a_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2_();
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_434_, lean_object* v_x_435_){
_start:
{
if (lean_obj_tag(v_x_435_) == 0)
{
lean_object* v_k_436_; lean_object* v_v_437_; lean_object* v_l_438_; lean_object* v_r_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v_k_436_ = lean_ctor_get(v_x_435_, 1);
v_v_437_ = lean_ctor_get(v_x_435_, 2);
v_l_438_ = lean_ctor_get(v_x_435_, 3);
v_r_439_ = lean_ctor_get(v_x_435_, 4);
v___x_440_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__spec__0_spec__0(v_init_434_, v_l_438_);
lean_inc(v_v_437_);
lean_inc(v_k_436_);
v___x_441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_441_, 0, v_k_436_);
lean_ctor_set(v___x_441_, 1, v_v_437_);
v___x_442_ = lean_array_push(v___x_440_, v___x_441_);
v_init_434_ = v___x_442_;
v_x_435_ = v_r_439_;
goto _start;
}
else
{
return v_init_434_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_444_, lean_object* v_x_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__spec__0_spec__0(v_init_444_, v_x_445_);
lean_dec(v_x_445_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_(lean_object* v_x_449_, lean_object* v_s_450_, uint8_t v_level_451_){
_start:
{
uint8_t v___x_452_; uint8_t v___x_453_; 
v___x_452_ = 1;
v___x_453_ = l_Lean_instOrdOLeanLevel_ord(v_level_451_, v___x_452_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; 
v___x_454_ = ((lean_object*)(l_Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_));
return v___x_454_;
}
else
{
lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_455_ = ((lean_object*)(l_Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_));
v___x_456_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__spec__0_spec__0(v___x_455_, v_s_450_);
return v___x_456_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2____boxed(lean_object* v_x_457_, lean_object* v_s_458_, lean_object* v_level_459_){
_start:
{
uint8_t v_level_boxed_460_; lean_object* v_res_461_; 
v_level_boxed_460_ = lean_unbox(v_level_459_);
v_res_461_ = l_Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_(v_x_457_, v_s_458_, v_level_boxed_460_);
lean_dec(v_s_458_);
lean_dec_ref(v_x_457_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___f_468_ = ((lean_object*)(l_Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_));
v___x_469_ = ((lean_object*)(l_Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_));
v___x_470_ = ((lean_object*)(l_Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_));
v___x_471_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_469_, v___x_470_, v___f_468_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2____boxed(lean_object* v_a_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_();
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__spec__0(lean_object* v_init_474_, lean_object* v_t_475_){
_start:
{
lean_object* v___x_476_; 
v___x_476_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__spec__0_spec__0(v_init_474_, v_t_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_477_, lean_object* v_t_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2__spec__0(v_init_477_, v_t_478_);
lean_dec(v_t_478_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_addBuiltinDocString(lean_object* v_declName_480_, lean_object* v_docString_481_){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_483_ = l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings;
v___x_484_ = lean_st_ref_take(v___x_483_);
v___x_485_ = l_String_removeLeadingSpaces(v_docString_481_);
v___x_486_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_declName_480_, v___x_485_, v___x_484_);
v___x_487_ = lean_st_ref_set(v___x_483_, v___x_486_);
v___x_488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_488_, 0, v___x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_addBuiltinDocString___boxed(lean_object* v_declName_489_, lean_object* v_docString_490_, lean_object* v_a_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Lean_addBuiltinDocString(v_declName_489_, v_docString_490_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(lean_object* v_k_493_, lean_object* v_t_494_){
_start:
{
if (lean_obj_tag(v_t_494_) == 0)
{
lean_object* v_k_495_; lean_object* v_v_496_; lean_object* v_l_497_; lean_object* v_r_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_1152_; 
v_k_495_ = lean_ctor_get(v_t_494_, 1);
v_v_496_ = lean_ctor_get(v_t_494_, 2);
v_l_497_ = lean_ctor_get(v_t_494_, 3);
v_r_498_ = lean_ctor_get(v_t_494_, 4);
v_isSharedCheck_1152_ = !lean_is_exclusive(v_t_494_);
if (v_isSharedCheck_1152_ == 0)
{
lean_object* v_unused_1153_; 
v_unused_1153_ = lean_ctor_get(v_t_494_, 0);
lean_dec(v_unused_1153_);
v___x_500_ = v_t_494_;
v_isShared_501_ = v_isSharedCheck_1152_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_r_498_);
lean_inc(v_l_497_);
lean_inc(v_v_496_);
lean_inc(v_k_495_);
lean_dec(v_t_494_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_1152_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
uint8_t v___x_502_; 
v___x_502_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_493_, v_k_495_);
switch(v___x_502_)
{
case 0:
{
lean_object* v_impl_503_; lean_object* v___x_504_; 
v_impl_503_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_k_493_, v_l_497_);
v___x_504_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_503_) == 0)
{
if (lean_obj_tag(v_r_498_) == 0)
{
lean_object* v_size_505_; lean_object* v_size_506_; lean_object* v_k_507_; lean_object* v_v_508_; lean_object* v_l_509_; lean_object* v_r_510_; lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; 
v_size_505_ = lean_ctor_get(v_impl_503_, 0);
lean_inc(v_size_505_);
v_size_506_ = lean_ctor_get(v_r_498_, 0);
v_k_507_ = lean_ctor_get(v_r_498_, 1);
v_v_508_ = lean_ctor_get(v_r_498_, 2);
v_l_509_ = lean_ctor_get(v_r_498_, 3);
lean_inc(v_l_509_);
v_r_510_ = lean_ctor_get(v_r_498_, 4);
v___x_511_ = lean_unsigned_to_nat(3u);
v___x_512_ = lean_nat_mul(v___x_511_, v_size_505_);
v___x_513_ = lean_nat_dec_lt(v___x_512_, v_size_506_);
lean_dec(v___x_512_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_517_; 
lean_dec(v_l_509_);
v___x_514_ = lean_nat_add(v___x_504_, v_size_505_);
lean_dec(v_size_505_);
v___x_515_ = lean_nat_add(v___x_514_, v_size_506_);
lean_dec(v___x_514_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 3, v_impl_503_);
lean_ctor_set(v___x_500_, 0, v___x_515_);
v___x_517_ = v___x_500_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_515_);
lean_ctor_set(v_reuseFailAlloc_518_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_518_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_518_, 3, v_impl_503_);
lean_ctor_set(v_reuseFailAlloc_518_, 4, v_r_498_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
else
{
lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_582_; 
lean_inc(v_r_510_);
lean_inc(v_v_508_);
lean_inc(v_k_507_);
lean_inc(v_size_506_);
v_isSharedCheck_582_ = !lean_is_exclusive(v_r_498_);
if (v_isSharedCheck_582_ == 0)
{
lean_object* v_unused_583_; lean_object* v_unused_584_; lean_object* v_unused_585_; lean_object* v_unused_586_; lean_object* v_unused_587_; 
v_unused_583_ = lean_ctor_get(v_r_498_, 4);
lean_dec(v_unused_583_);
v_unused_584_ = lean_ctor_get(v_r_498_, 3);
lean_dec(v_unused_584_);
v_unused_585_ = lean_ctor_get(v_r_498_, 2);
lean_dec(v_unused_585_);
v_unused_586_ = lean_ctor_get(v_r_498_, 1);
lean_dec(v_unused_586_);
v_unused_587_ = lean_ctor_get(v_r_498_, 0);
lean_dec(v_unused_587_);
v___x_520_ = v_r_498_;
v_isShared_521_ = v_isSharedCheck_582_;
goto v_resetjp_519_;
}
else
{
lean_dec(v_r_498_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_582_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v_size_522_; lean_object* v_k_523_; lean_object* v_v_524_; lean_object* v_l_525_; lean_object* v_r_526_; lean_object* v_size_527_; lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; 
v_size_522_ = lean_ctor_get(v_l_509_, 0);
v_k_523_ = lean_ctor_get(v_l_509_, 1);
v_v_524_ = lean_ctor_get(v_l_509_, 2);
v_l_525_ = lean_ctor_get(v_l_509_, 3);
v_r_526_ = lean_ctor_get(v_l_509_, 4);
v_size_527_ = lean_ctor_get(v_r_510_, 0);
v___x_528_ = lean_unsigned_to_nat(2u);
v___x_529_ = lean_nat_mul(v___x_528_, v_size_527_);
v___x_530_ = lean_nat_dec_lt(v_size_522_, v___x_529_);
lean_dec(v___x_529_);
if (v___x_530_ == 0)
{
lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_558_; 
lean_inc(v_r_526_);
lean_inc(v_l_525_);
lean_inc(v_v_524_);
lean_inc(v_k_523_);
v_isSharedCheck_558_ = !lean_is_exclusive(v_l_509_);
if (v_isSharedCheck_558_ == 0)
{
lean_object* v_unused_559_; lean_object* v_unused_560_; lean_object* v_unused_561_; lean_object* v_unused_562_; lean_object* v_unused_563_; 
v_unused_559_ = lean_ctor_get(v_l_509_, 4);
lean_dec(v_unused_559_);
v_unused_560_ = lean_ctor_get(v_l_509_, 3);
lean_dec(v_unused_560_);
v_unused_561_ = lean_ctor_get(v_l_509_, 2);
lean_dec(v_unused_561_);
v_unused_562_ = lean_ctor_get(v_l_509_, 1);
lean_dec(v_unused_562_);
v_unused_563_ = lean_ctor_get(v_l_509_, 0);
lean_dec(v_unused_563_);
v___x_532_ = v_l_509_;
v_isShared_533_ = v_isSharedCheck_558_;
goto v_resetjp_531_;
}
else
{
lean_dec(v_l_509_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_558_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_548_; 
v___x_534_ = lean_nat_add(v___x_504_, v_size_505_);
lean_dec(v_size_505_);
v___x_535_ = lean_nat_add(v___x_534_, v_size_506_);
lean_dec(v_size_506_);
if (lean_obj_tag(v_l_525_) == 0)
{
lean_object* v_size_556_; 
v_size_556_ = lean_ctor_get(v_l_525_, 0);
lean_inc(v_size_556_);
v___y_548_ = v_size_556_;
goto v___jp_547_;
}
else
{
lean_object* v___x_557_; 
v___x_557_ = lean_unsigned_to_nat(0u);
v___y_548_ = v___x_557_;
goto v___jp_547_;
}
v___jp_536_:
{
lean_object* v___x_540_; lean_object* v___x_542_; 
v___x_540_ = lean_nat_add(v___y_537_, v___y_539_);
lean_dec(v___y_539_);
lean_dec(v___y_537_);
if (v_isShared_533_ == 0)
{
lean_ctor_set(v___x_532_, 4, v_r_510_);
lean_ctor_set(v___x_532_, 3, v_r_526_);
lean_ctor_set(v___x_532_, 2, v_v_508_);
lean_ctor_set(v___x_532_, 1, v_k_507_);
lean_ctor_set(v___x_532_, 0, v___x_540_);
v___x_542_ = v___x_532_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_540_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_k_507_);
lean_ctor_set(v_reuseFailAlloc_546_, 2, v_v_508_);
lean_ctor_set(v_reuseFailAlloc_546_, 3, v_r_526_);
lean_ctor_set(v_reuseFailAlloc_546_, 4, v_r_510_);
v___x_542_ = v_reuseFailAlloc_546_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
lean_object* v___x_544_; 
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 4, v___x_542_);
lean_ctor_set(v___x_520_, 3, v___y_538_);
lean_ctor_set(v___x_520_, 2, v_v_524_);
lean_ctor_set(v___x_520_, 1, v_k_523_);
lean_ctor_set(v___x_520_, 0, v___x_535_);
v___x_544_ = v___x_520_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_535_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v_k_523_);
lean_ctor_set(v_reuseFailAlloc_545_, 2, v_v_524_);
lean_ctor_set(v_reuseFailAlloc_545_, 3, v___y_538_);
lean_ctor_set(v_reuseFailAlloc_545_, 4, v___x_542_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
v___jp_547_:
{
lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_549_ = lean_nat_add(v___x_534_, v___y_548_);
lean_dec(v___y_548_);
lean_dec(v___x_534_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 4, v_l_525_);
lean_ctor_set(v___x_500_, 3, v_impl_503_);
lean_ctor_set(v___x_500_, 0, v___x_549_);
v___x_551_ = v___x_500_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_549_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_555_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_555_, 3, v_impl_503_);
lean_ctor_set(v_reuseFailAlloc_555_, 4, v_l_525_);
v___x_551_ = v_reuseFailAlloc_555_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
lean_object* v___x_552_; 
v___x_552_ = lean_nat_add(v___x_504_, v_size_527_);
if (lean_obj_tag(v_r_526_) == 0)
{
lean_object* v_size_553_; 
v_size_553_ = lean_ctor_get(v_r_526_, 0);
lean_inc(v_size_553_);
v___y_537_ = v___x_552_;
v___y_538_ = v___x_551_;
v___y_539_ = v_size_553_;
goto v___jp_536_;
}
else
{
lean_object* v___x_554_; 
v___x_554_ = lean_unsigned_to_nat(0u);
v___y_537_ = v___x_552_;
v___y_538_ = v___x_551_;
v___y_539_ = v___x_554_;
goto v___jp_536_;
}
}
}
}
}
else
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_568_; 
lean_del_object(v___x_500_);
v___x_564_ = lean_nat_add(v___x_504_, v_size_505_);
lean_dec(v_size_505_);
v___x_565_ = lean_nat_add(v___x_564_, v_size_506_);
lean_dec(v_size_506_);
v___x_566_ = lean_nat_add(v___x_564_, v_size_522_);
lean_dec(v___x_564_);
lean_inc_ref(v_impl_503_);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 4, v_l_509_);
lean_ctor_set(v___x_520_, 3, v_impl_503_);
lean_ctor_set(v___x_520_, 2, v_v_496_);
lean_ctor_set(v___x_520_, 1, v_k_495_);
lean_ctor_set(v___x_520_, 0, v___x_566_);
v___x_568_ = v___x_520_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_566_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_581_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_581_, 3, v_impl_503_);
lean_ctor_set(v_reuseFailAlloc_581_, 4, v_l_509_);
v___x_568_ = v_reuseFailAlloc_581_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_575_; 
v_isSharedCheck_575_ = !lean_is_exclusive(v_impl_503_);
if (v_isSharedCheck_575_ == 0)
{
lean_object* v_unused_576_; lean_object* v_unused_577_; lean_object* v_unused_578_; lean_object* v_unused_579_; lean_object* v_unused_580_; 
v_unused_576_ = lean_ctor_get(v_impl_503_, 4);
lean_dec(v_unused_576_);
v_unused_577_ = lean_ctor_get(v_impl_503_, 3);
lean_dec(v_unused_577_);
v_unused_578_ = lean_ctor_get(v_impl_503_, 2);
lean_dec(v_unused_578_);
v_unused_579_ = lean_ctor_get(v_impl_503_, 1);
lean_dec(v_unused_579_);
v_unused_580_ = lean_ctor_get(v_impl_503_, 0);
lean_dec(v_unused_580_);
v___x_570_ = v_impl_503_;
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
else
{
lean_dec(v_impl_503_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_573_; 
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 4, v_r_510_);
lean_ctor_set(v___x_570_, 3, v___x_568_);
lean_ctor_set(v___x_570_, 2, v_v_508_);
lean_ctor_set(v___x_570_, 1, v_k_507_);
lean_ctor_set(v___x_570_, 0, v___x_565_);
v___x_573_ = v___x_570_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_565_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v_k_507_);
lean_ctor_set(v_reuseFailAlloc_574_, 2, v_v_508_);
lean_ctor_set(v_reuseFailAlloc_574_, 3, v___x_568_);
lean_ctor_set(v_reuseFailAlloc_574_, 4, v_r_510_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_588_; lean_object* v___x_589_; lean_object* v___x_591_; 
v_size_588_ = lean_ctor_get(v_impl_503_, 0);
lean_inc(v_size_588_);
v___x_589_ = lean_nat_add(v___x_504_, v_size_588_);
lean_dec(v_size_588_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 3, v_impl_503_);
lean_ctor_set(v___x_500_, 0, v___x_589_);
v___x_591_ = v___x_500_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_589_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_592_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_592_, 3, v_impl_503_);
lean_ctor_set(v_reuseFailAlloc_592_, 4, v_r_498_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
else
{
if (lean_obj_tag(v_r_498_) == 0)
{
lean_object* v_l_593_; 
v_l_593_ = lean_ctor_get(v_r_498_, 3);
lean_inc(v_l_593_);
if (lean_obj_tag(v_l_593_) == 0)
{
lean_object* v_r_594_; 
v_r_594_ = lean_ctor_get(v_r_498_, 4);
lean_inc(v_r_594_);
if (lean_obj_tag(v_r_594_) == 0)
{
lean_object* v_size_595_; lean_object* v_k_596_; lean_object* v_v_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_610_; 
v_size_595_ = lean_ctor_get(v_r_498_, 0);
v_k_596_ = lean_ctor_get(v_r_498_, 1);
v_v_597_ = lean_ctor_get(v_r_498_, 2);
v_isSharedCheck_610_ = !lean_is_exclusive(v_r_498_);
if (v_isSharedCheck_610_ == 0)
{
lean_object* v_unused_611_; lean_object* v_unused_612_; 
v_unused_611_ = lean_ctor_get(v_r_498_, 4);
lean_dec(v_unused_611_);
v_unused_612_ = lean_ctor_get(v_r_498_, 3);
lean_dec(v_unused_612_);
v___x_599_ = v_r_498_;
v_isShared_600_ = v_isSharedCheck_610_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_v_597_);
lean_inc(v_k_596_);
lean_inc(v_size_595_);
lean_dec(v_r_498_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_610_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v_size_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_605_; 
v_size_601_ = lean_ctor_get(v_l_593_, 0);
v___x_602_ = lean_nat_add(v___x_504_, v_size_595_);
lean_dec(v_size_595_);
v___x_603_ = lean_nat_add(v___x_504_, v_size_601_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 4, v_l_593_);
lean_ctor_set(v___x_599_, 3, v_impl_503_);
lean_ctor_set(v___x_599_, 2, v_v_496_);
lean_ctor_set(v___x_599_, 1, v_k_495_);
lean_ctor_set(v___x_599_, 0, v___x_603_);
v___x_605_ = v___x_599_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_603_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_609_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_609_, 3, v_impl_503_);
lean_ctor_set(v_reuseFailAlloc_609_, 4, v_l_593_);
v___x_605_ = v_reuseFailAlloc_609_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
lean_object* v___x_607_; 
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 4, v_r_594_);
lean_ctor_set(v___x_500_, 3, v___x_605_);
lean_ctor_set(v___x_500_, 2, v_v_597_);
lean_ctor_set(v___x_500_, 1, v_k_596_);
lean_ctor_set(v___x_500_, 0, v___x_602_);
v___x_607_ = v___x_500_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_602_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v_k_596_);
lean_ctor_set(v_reuseFailAlloc_608_, 2, v_v_597_);
lean_ctor_set(v_reuseFailAlloc_608_, 3, v___x_605_);
lean_ctor_set(v_reuseFailAlloc_608_, 4, v_r_594_);
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
else
{
lean_object* v_k_613_; lean_object* v_v_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_637_; 
v_k_613_ = lean_ctor_get(v_r_498_, 1);
v_v_614_ = lean_ctor_get(v_r_498_, 2);
v_isSharedCheck_637_ = !lean_is_exclusive(v_r_498_);
if (v_isSharedCheck_637_ == 0)
{
lean_object* v_unused_638_; lean_object* v_unused_639_; lean_object* v_unused_640_; 
v_unused_638_ = lean_ctor_get(v_r_498_, 4);
lean_dec(v_unused_638_);
v_unused_639_ = lean_ctor_get(v_r_498_, 3);
lean_dec(v_unused_639_);
v_unused_640_ = lean_ctor_get(v_r_498_, 0);
lean_dec(v_unused_640_);
v___x_616_ = v_r_498_;
v_isShared_617_ = v_isSharedCheck_637_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_v_614_);
lean_inc(v_k_613_);
lean_dec(v_r_498_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_637_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v_k_618_; lean_object* v_v_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_633_; 
v_k_618_ = lean_ctor_get(v_l_593_, 1);
v_v_619_ = lean_ctor_get(v_l_593_, 2);
v_isSharedCheck_633_ = !lean_is_exclusive(v_l_593_);
if (v_isSharedCheck_633_ == 0)
{
lean_object* v_unused_634_; lean_object* v_unused_635_; lean_object* v_unused_636_; 
v_unused_634_ = lean_ctor_get(v_l_593_, 4);
lean_dec(v_unused_634_);
v_unused_635_ = lean_ctor_get(v_l_593_, 3);
lean_dec(v_unused_635_);
v_unused_636_ = lean_ctor_get(v_l_593_, 0);
lean_dec(v_unused_636_);
v___x_621_ = v_l_593_;
v_isShared_622_ = v_isSharedCheck_633_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_v_619_);
lean_inc(v_k_618_);
lean_dec(v_l_593_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_633_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_625_; 
v___x_623_ = lean_unsigned_to_nat(3u);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 4, v_r_594_);
lean_ctor_set(v___x_621_, 3, v_r_594_);
lean_ctor_set(v___x_621_, 2, v_v_496_);
lean_ctor_set(v___x_621_, 1, v_k_495_);
lean_ctor_set(v___x_621_, 0, v___x_504_);
v___x_625_ = v___x_621_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_504_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_632_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_632_, 3, v_r_594_);
lean_ctor_set(v_reuseFailAlloc_632_, 4, v_r_594_);
v___x_625_ = v_reuseFailAlloc_632_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
lean_object* v___x_627_; 
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 3, v_r_594_);
lean_ctor_set(v___x_616_, 0, v___x_504_);
v___x_627_ = v___x_616_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_504_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v_k_613_);
lean_ctor_set(v_reuseFailAlloc_631_, 2, v_v_614_);
lean_ctor_set(v_reuseFailAlloc_631_, 3, v_r_594_);
lean_ctor_set(v_reuseFailAlloc_631_, 4, v_r_594_);
v___x_627_ = v_reuseFailAlloc_631_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
lean_object* v___x_629_; 
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 4, v___x_627_);
lean_ctor_set(v___x_500_, 3, v___x_625_);
lean_ctor_set(v___x_500_, 2, v_v_619_);
lean_ctor_set(v___x_500_, 1, v_k_618_);
lean_ctor_set(v___x_500_, 0, v___x_623_);
v___x_629_ = v___x_500_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___x_623_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v_k_618_);
lean_ctor_set(v_reuseFailAlloc_630_, 2, v_v_619_);
lean_ctor_set(v_reuseFailAlloc_630_, 3, v___x_625_);
lean_ctor_set(v_reuseFailAlloc_630_, 4, v___x_627_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_641_; 
v_r_641_ = lean_ctor_get(v_r_498_, 4);
lean_inc(v_r_641_);
if (lean_obj_tag(v_r_641_) == 0)
{
lean_object* v_k_642_; lean_object* v_v_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_654_; 
v_k_642_ = lean_ctor_get(v_r_498_, 1);
v_v_643_ = lean_ctor_get(v_r_498_, 2);
v_isSharedCheck_654_ = !lean_is_exclusive(v_r_498_);
if (v_isSharedCheck_654_ == 0)
{
lean_object* v_unused_655_; lean_object* v_unused_656_; lean_object* v_unused_657_; 
v_unused_655_ = lean_ctor_get(v_r_498_, 4);
lean_dec(v_unused_655_);
v_unused_656_ = lean_ctor_get(v_r_498_, 3);
lean_dec(v_unused_656_);
v_unused_657_ = lean_ctor_get(v_r_498_, 0);
lean_dec(v_unused_657_);
v___x_645_ = v_r_498_;
v_isShared_646_ = v_isSharedCheck_654_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_v_643_);
lean_inc(v_k_642_);
lean_dec(v_r_498_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_654_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_647_; lean_object* v___x_649_; 
v___x_647_ = lean_unsigned_to_nat(3u);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 4, v_l_593_);
lean_ctor_set(v___x_645_, 2, v_v_496_);
lean_ctor_set(v___x_645_, 1, v_k_495_);
lean_ctor_set(v___x_645_, 0, v___x_504_);
v___x_649_ = v___x_645_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_504_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_653_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_653_, 3, v_l_593_);
lean_ctor_set(v_reuseFailAlloc_653_, 4, v_l_593_);
v___x_649_ = v_reuseFailAlloc_653_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
lean_object* v___x_651_; 
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 4, v_r_641_);
lean_ctor_set(v___x_500_, 3, v___x_649_);
lean_ctor_set(v___x_500_, 2, v_v_643_);
lean_ctor_set(v___x_500_, 1, v_k_642_);
lean_ctor_set(v___x_500_, 0, v___x_647_);
v___x_651_ = v___x_500_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_647_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v_k_642_);
lean_ctor_set(v_reuseFailAlloc_652_, 2, v_v_643_);
lean_ctor_set(v_reuseFailAlloc_652_, 3, v___x_649_);
lean_ctor_set(v_reuseFailAlloc_652_, 4, v_r_641_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
else
{
lean_object* v_size_658_; lean_object* v_k_659_; lean_object* v_v_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_671_; 
v_size_658_ = lean_ctor_get(v_r_498_, 0);
v_k_659_ = lean_ctor_get(v_r_498_, 1);
v_v_660_ = lean_ctor_get(v_r_498_, 2);
v_isSharedCheck_671_ = !lean_is_exclusive(v_r_498_);
if (v_isSharedCheck_671_ == 0)
{
lean_object* v_unused_672_; lean_object* v_unused_673_; 
v_unused_672_ = lean_ctor_get(v_r_498_, 4);
lean_dec(v_unused_672_);
v_unused_673_ = lean_ctor_get(v_r_498_, 3);
lean_dec(v_unused_673_);
v___x_662_ = v_r_498_;
v_isShared_663_ = v_isSharedCheck_671_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_v_660_);
lean_inc(v_k_659_);
lean_inc(v_size_658_);
lean_dec(v_r_498_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_671_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 3, v_r_641_);
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_size_658_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v_k_659_);
lean_ctor_set(v_reuseFailAlloc_670_, 2, v_v_660_);
lean_ctor_set(v_reuseFailAlloc_670_, 3, v_r_641_);
lean_ctor_set(v_reuseFailAlloc_670_, 4, v_r_641_);
v___x_665_ = v_reuseFailAlloc_670_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v___x_666_; lean_object* v___x_668_; 
v___x_666_ = lean_unsigned_to_nat(2u);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 4, v___x_665_);
lean_ctor_set(v___x_500_, 3, v_r_641_);
lean_ctor_set(v___x_500_, 0, v___x_666_);
v___x_668_ = v___x_500_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_669_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_669_, 3, v_r_641_);
lean_ctor_set(v_reuseFailAlloc_669_, 4, v___x_665_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
}
}
else
{
lean_object* v___x_675_; 
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 3, v_r_498_);
lean_ctor_set(v___x_500_, 0, v___x_504_);
v___x_675_ = v___x_500_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v___x_504_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_676_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_676_, 3, v_r_498_);
lean_ctor_set(v_reuseFailAlloc_676_, 4, v_r_498_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
case 1:
{
lean_del_object(v___x_500_);
lean_dec(v_v_496_);
lean_dec(v_k_495_);
if (lean_obj_tag(v_l_497_) == 0)
{
if (lean_obj_tag(v_r_498_) == 0)
{
lean_object* v_size_677_; lean_object* v_k_678_; lean_object* v_v_679_; lean_object* v_l_680_; lean_object* v_r_681_; lean_object* v_size_682_; lean_object* v_k_683_; lean_object* v_v_684_; lean_object* v_l_685_; lean_object* v_r_686_; lean_object* v___x_687_; uint8_t v___x_688_; 
v_size_677_ = lean_ctor_get(v_l_497_, 0);
v_k_678_ = lean_ctor_get(v_l_497_, 1);
v_v_679_ = lean_ctor_get(v_l_497_, 2);
v_l_680_ = lean_ctor_get(v_l_497_, 3);
v_r_681_ = lean_ctor_get(v_l_497_, 4);
lean_inc(v_r_681_);
v_size_682_ = lean_ctor_get(v_r_498_, 0);
v_k_683_ = lean_ctor_get(v_r_498_, 1);
v_v_684_ = lean_ctor_get(v_r_498_, 2);
v_l_685_ = lean_ctor_get(v_r_498_, 3);
lean_inc(v_l_685_);
v_r_686_ = lean_ctor_get(v_r_498_, 4);
v___x_687_ = lean_unsigned_to_nat(1u);
v___x_688_ = lean_nat_dec_lt(v_size_677_, v_size_682_);
if (v___x_688_ == 0)
{
lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_824_; 
lean_inc(v_l_680_);
lean_inc(v_v_679_);
lean_inc(v_k_678_);
v_isSharedCheck_824_ = !lean_is_exclusive(v_l_497_);
if (v_isSharedCheck_824_ == 0)
{
lean_object* v_unused_825_; lean_object* v_unused_826_; lean_object* v_unused_827_; lean_object* v_unused_828_; lean_object* v_unused_829_; 
v_unused_825_ = lean_ctor_get(v_l_497_, 4);
lean_dec(v_unused_825_);
v_unused_826_ = lean_ctor_get(v_l_497_, 3);
lean_dec(v_unused_826_);
v_unused_827_ = lean_ctor_get(v_l_497_, 2);
lean_dec(v_unused_827_);
v_unused_828_ = lean_ctor_get(v_l_497_, 1);
lean_dec(v_unused_828_);
v_unused_829_ = lean_ctor_get(v_l_497_, 0);
lean_dec(v_unused_829_);
v___x_690_ = v_l_497_;
v_isShared_691_ = v_isSharedCheck_824_;
goto v_resetjp_689_;
}
else
{
lean_dec(v_l_497_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_824_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_692_; lean_object* v_tree_693_; 
v___x_692_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_678_, v_v_679_, v_l_680_, v_r_681_);
v_tree_693_ = lean_ctor_get(v___x_692_, 2);
lean_inc(v_tree_693_);
if (lean_obj_tag(v_tree_693_) == 0)
{
lean_object* v_k_694_; lean_object* v_v_695_; lean_object* v_size_696_; lean_object* v___x_697_; lean_object* v___x_698_; uint8_t v___x_699_; 
v_k_694_ = lean_ctor_get(v___x_692_, 0);
lean_inc(v_k_694_);
v_v_695_ = lean_ctor_get(v___x_692_, 1);
lean_inc(v_v_695_);
lean_dec_ref(v___x_692_);
v_size_696_ = lean_ctor_get(v_tree_693_, 0);
v___x_697_ = lean_unsigned_to_nat(3u);
v___x_698_ = lean_nat_mul(v___x_697_, v_size_696_);
v___x_699_ = lean_nat_dec_lt(v___x_698_, v_size_682_);
lean_dec(v___x_698_);
if (v___x_699_ == 0)
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_703_; 
lean_dec(v_l_685_);
v___x_700_ = lean_nat_add(v___x_687_, v_size_696_);
v___x_701_ = lean_nat_add(v___x_700_, v_size_682_);
lean_dec(v___x_700_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 4, v_r_498_);
lean_ctor_set(v___x_690_, 3, v_tree_693_);
lean_ctor_set(v___x_690_, 2, v_v_695_);
lean_ctor_set(v___x_690_, 1, v_k_694_);
lean_ctor_set(v___x_690_, 0, v___x_701_);
v___x_703_ = v___x_690_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v___x_701_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v_k_694_);
lean_ctor_set(v_reuseFailAlloc_704_, 2, v_v_695_);
lean_ctor_set(v_reuseFailAlloc_704_, 3, v_tree_693_);
lean_ctor_set(v_reuseFailAlloc_704_, 4, v_r_498_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
else
{
lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_759_; 
lean_inc(v_r_686_);
lean_inc(v_v_684_);
lean_inc(v_k_683_);
lean_inc(v_size_682_);
v_isSharedCheck_759_ = !lean_is_exclusive(v_r_498_);
if (v_isSharedCheck_759_ == 0)
{
lean_object* v_unused_760_; lean_object* v_unused_761_; lean_object* v_unused_762_; lean_object* v_unused_763_; lean_object* v_unused_764_; 
v_unused_760_ = lean_ctor_get(v_r_498_, 4);
lean_dec(v_unused_760_);
v_unused_761_ = lean_ctor_get(v_r_498_, 3);
lean_dec(v_unused_761_);
v_unused_762_ = lean_ctor_get(v_r_498_, 2);
lean_dec(v_unused_762_);
v_unused_763_ = lean_ctor_get(v_r_498_, 1);
lean_dec(v_unused_763_);
v_unused_764_ = lean_ctor_get(v_r_498_, 0);
lean_dec(v_unused_764_);
v___x_706_ = v_r_498_;
v_isShared_707_ = v_isSharedCheck_759_;
goto v_resetjp_705_;
}
else
{
lean_dec(v_r_498_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_759_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v_size_708_; lean_object* v_k_709_; lean_object* v_v_710_; lean_object* v_l_711_; lean_object* v_r_712_; lean_object* v_size_713_; lean_object* v___x_714_; lean_object* v___x_715_; uint8_t v___x_716_; 
v_size_708_ = lean_ctor_get(v_l_685_, 0);
v_k_709_ = lean_ctor_get(v_l_685_, 1);
v_v_710_ = lean_ctor_get(v_l_685_, 2);
v_l_711_ = lean_ctor_get(v_l_685_, 3);
v_r_712_ = lean_ctor_get(v_l_685_, 4);
v_size_713_ = lean_ctor_get(v_r_686_, 0);
v___x_714_ = lean_unsigned_to_nat(2u);
v___x_715_ = lean_nat_mul(v___x_714_, v_size_713_);
v___x_716_ = lean_nat_dec_lt(v_size_708_, v___x_715_);
lean_dec(v___x_715_);
if (v___x_716_ == 0)
{
lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_744_; 
lean_inc(v_r_712_);
lean_inc(v_l_711_);
lean_inc(v_v_710_);
lean_inc(v_k_709_);
v_isSharedCheck_744_ = !lean_is_exclusive(v_l_685_);
if (v_isSharedCheck_744_ == 0)
{
lean_object* v_unused_745_; lean_object* v_unused_746_; lean_object* v_unused_747_; lean_object* v_unused_748_; lean_object* v_unused_749_; 
v_unused_745_ = lean_ctor_get(v_l_685_, 4);
lean_dec(v_unused_745_);
v_unused_746_ = lean_ctor_get(v_l_685_, 3);
lean_dec(v_unused_746_);
v_unused_747_ = lean_ctor_get(v_l_685_, 2);
lean_dec(v_unused_747_);
v_unused_748_ = lean_ctor_get(v_l_685_, 1);
lean_dec(v_unused_748_);
v_unused_749_ = lean_ctor_get(v_l_685_, 0);
lean_dec(v_unused_749_);
v___x_718_ = v_l_685_;
v_isShared_719_ = v_isSharedCheck_744_;
goto v_resetjp_717_;
}
else
{
lean_dec(v_l_685_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_744_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___y_723_; lean_object* v___y_724_; lean_object* v___y_725_; lean_object* v___y_734_; 
v___x_720_ = lean_nat_add(v___x_687_, v_size_696_);
v___x_721_ = lean_nat_add(v___x_720_, v_size_682_);
lean_dec(v_size_682_);
if (lean_obj_tag(v_l_711_) == 0)
{
lean_object* v_size_742_; 
v_size_742_ = lean_ctor_get(v_l_711_, 0);
lean_inc(v_size_742_);
v___y_734_ = v_size_742_;
goto v___jp_733_;
}
else
{
lean_object* v___x_743_; 
v___x_743_ = lean_unsigned_to_nat(0u);
v___y_734_ = v___x_743_;
goto v___jp_733_;
}
v___jp_722_:
{
lean_object* v___x_726_; lean_object* v___x_728_; 
v___x_726_ = lean_nat_add(v___y_724_, v___y_725_);
lean_dec(v___y_725_);
lean_dec(v___y_724_);
if (v_isShared_719_ == 0)
{
lean_ctor_set(v___x_718_, 4, v_r_686_);
lean_ctor_set(v___x_718_, 3, v_r_712_);
lean_ctor_set(v___x_718_, 2, v_v_684_);
lean_ctor_set(v___x_718_, 1, v_k_683_);
lean_ctor_set(v___x_718_, 0, v___x_726_);
v___x_728_ = v___x_718_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_726_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v_k_683_);
lean_ctor_set(v_reuseFailAlloc_732_, 2, v_v_684_);
lean_ctor_set(v_reuseFailAlloc_732_, 3, v_r_712_);
lean_ctor_set(v_reuseFailAlloc_732_, 4, v_r_686_);
v___x_728_ = v_reuseFailAlloc_732_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_730_; 
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 4, v___x_728_);
lean_ctor_set(v___x_706_, 3, v___y_723_);
lean_ctor_set(v___x_706_, 2, v_v_710_);
lean_ctor_set(v___x_706_, 1, v_k_709_);
lean_ctor_set(v___x_706_, 0, v___x_721_);
v___x_730_ = v___x_706_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v___x_721_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v_k_709_);
lean_ctor_set(v_reuseFailAlloc_731_, 2, v_v_710_);
lean_ctor_set(v_reuseFailAlloc_731_, 3, v___y_723_);
lean_ctor_set(v_reuseFailAlloc_731_, 4, v___x_728_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
v___jp_733_:
{
lean_object* v___x_735_; lean_object* v___x_737_; 
v___x_735_ = lean_nat_add(v___x_720_, v___y_734_);
lean_dec(v___y_734_);
lean_dec(v___x_720_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 4, v_l_711_);
lean_ctor_set(v___x_690_, 3, v_tree_693_);
lean_ctor_set(v___x_690_, 2, v_v_695_);
lean_ctor_set(v___x_690_, 1, v_k_694_);
lean_ctor_set(v___x_690_, 0, v___x_735_);
v___x_737_ = v___x_690_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_735_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_k_694_);
lean_ctor_set(v_reuseFailAlloc_741_, 2, v_v_695_);
lean_ctor_set(v_reuseFailAlloc_741_, 3, v_tree_693_);
lean_ctor_set(v_reuseFailAlloc_741_, 4, v_l_711_);
v___x_737_ = v_reuseFailAlloc_741_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
lean_object* v___x_738_; 
v___x_738_ = lean_nat_add(v___x_687_, v_size_713_);
if (lean_obj_tag(v_r_712_) == 0)
{
lean_object* v_size_739_; 
v_size_739_ = lean_ctor_get(v_r_712_, 0);
lean_inc(v_size_739_);
v___y_723_ = v___x_737_;
v___y_724_ = v___x_738_;
v___y_725_ = v_size_739_;
goto v___jp_722_;
}
else
{
lean_object* v___x_740_; 
v___x_740_ = lean_unsigned_to_nat(0u);
v___y_723_ = v___x_737_;
v___y_724_ = v___x_738_;
v___y_725_ = v___x_740_;
goto v___jp_722_;
}
}
}
}
}
else
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_754_; 
v___x_750_ = lean_nat_add(v___x_687_, v_size_696_);
v___x_751_ = lean_nat_add(v___x_750_, v_size_682_);
lean_dec(v_size_682_);
v___x_752_ = lean_nat_add(v___x_750_, v_size_708_);
lean_dec(v___x_750_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 4, v_l_685_);
lean_ctor_set(v___x_706_, 3, v_tree_693_);
lean_ctor_set(v___x_706_, 2, v_v_695_);
lean_ctor_set(v___x_706_, 1, v_k_694_);
lean_ctor_set(v___x_706_, 0, v___x_752_);
v___x_754_ = v___x_706_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_752_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v_k_694_);
lean_ctor_set(v_reuseFailAlloc_758_, 2, v_v_695_);
lean_ctor_set(v_reuseFailAlloc_758_, 3, v_tree_693_);
lean_ctor_set(v_reuseFailAlloc_758_, 4, v_l_685_);
v___x_754_ = v_reuseFailAlloc_758_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
lean_object* v___x_756_; 
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 4, v_r_686_);
lean_ctor_set(v___x_690_, 3, v___x_754_);
lean_ctor_set(v___x_690_, 2, v_v_684_);
lean_ctor_set(v___x_690_, 1, v_k_683_);
lean_ctor_set(v___x_690_, 0, v___x_751_);
v___x_756_ = v___x_690_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_751_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_k_683_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v_v_684_);
lean_ctor_set(v_reuseFailAlloc_757_, 3, v___x_754_);
lean_ctor_set(v_reuseFailAlloc_757_, 4, v_r_686_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
}
}
else
{
lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_818_; 
lean_inc(v_r_686_);
lean_inc(v_v_684_);
lean_inc(v_k_683_);
lean_inc(v_size_682_);
v_isSharedCheck_818_ = !lean_is_exclusive(v_r_498_);
if (v_isSharedCheck_818_ == 0)
{
lean_object* v_unused_819_; lean_object* v_unused_820_; lean_object* v_unused_821_; lean_object* v_unused_822_; lean_object* v_unused_823_; 
v_unused_819_ = lean_ctor_get(v_r_498_, 4);
lean_dec(v_unused_819_);
v_unused_820_ = lean_ctor_get(v_r_498_, 3);
lean_dec(v_unused_820_);
v_unused_821_ = lean_ctor_get(v_r_498_, 2);
lean_dec(v_unused_821_);
v_unused_822_ = lean_ctor_get(v_r_498_, 1);
lean_dec(v_unused_822_);
v_unused_823_ = lean_ctor_get(v_r_498_, 0);
lean_dec(v_unused_823_);
v___x_766_ = v_r_498_;
v_isShared_767_ = v_isSharedCheck_818_;
goto v_resetjp_765_;
}
else
{
lean_dec(v_r_498_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_818_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
if (lean_obj_tag(v_l_685_) == 0)
{
if (lean_obj_tag(v_r_686_) == 0)
{
lean_object* v_k_768_; lean_object* v_v_769_; lean_object* v_size_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_774_; 
v_k_768_ = lean_ctor_get(v___x_692_, 0);
lean_inc(v_k_768_);
v_v_769_ = lean_ctor_get(v___x_692_, 1);
lean_inc(v_v_769_);
lean_dec_ref(v___x_692_);
v_size_770_ = lean_ctor_get(v_l_685_, 0);
v___x_771_ = lean_nat_add(v___x_687_, v_size_682_);
lean_dec(v_size_682_);
v___x_772_ = lean_nat_add(v___x_687_, v_size_770_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 4, v_l_685_);
lean_ctor_set(v___x_766_, 3, v_tree_693_);
lean_ctor_set(v___x_766_, 2, v_v_769_);
lean_ctor_set(v___x_766_, 1, v_k_768_);
lean_ctor_set(v___x_766_, 0, v___x_772_);
v___x_774_ = v___x_766_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v___x_772_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_k_768_);
lean_ctor_set(v_reuseFailAlloc_778_, 2, v_v_769_);
lean_ctor_set(v_reuseFailAlloc_778_, 3, v_tree_693_);
lean_ctor_set(v_reuseFailAlloc_778_, 4, v_l_685_);
v___x_774_ = v_reuseFailAlloc_778_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_776_; 
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 4, v_r_686_);
lean_ctor_set(v___x_690_, 3, v___x_774_);
lean_ctor_set(v___x_690_, 2, v_v_684_);
lean_ctor_set(v___x_690_, 1, v_k_683_);
lean_ctor_set(v___x_690_, 0, v___x_771_);
v___x_776_ = v___x_690_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_771_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v_k_683_);
lean_ctor_set(v_reuseFailAlloc_777_, 2, v_v_684_);
lean_ctor_set(v_reuseFailAlloc_777_, 3, v___x_774_);
lean_ctor_set(v_reuseFailAlloc_777_, 4, v_r_686_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
else
{
lean_object* v_k_779_; lean_object* v_v_780_; lean_object* v_k_781_; lean_object* v_v_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_796_; 
lean_dec(v_size_682_);
v_k_779_ = lean_ctor_get(v___x_692_, 0);
lean_inc(v_k_779_);
v_v_780_ = lean_ctor_get(v___x_692_, 1);
lean_inc(v_v_780_);
lean_dec_ref(v___x_692_);
v_k_781_ = lean_ctor_get(v_l_685_, 1);
v_v_782_ = lean_ctor_get(v_l_685_, 2);
v_isSharedCheck_796_ = !lean_is_exclusive(v_l_685_);
if (v_isSharedCheck_796_ == 0)
{
lean_object* v_unused_797_; lean_object* v_unused_798_; lean_object* v_unused_799_; 
v_unused_797_ = lean_ctor_get(v_l_685_, 4);
lean_dec(v_unused_797_);
v_unused_798_ = lean_ctor_get(v_l_685_, 3);
lean_dec(v_unused_798_);
v_unused_799_ = lean_ctor_get(v_l_685_, 0);
lean_dec(v_unused_799_);
v___x_784_ = v_l_685_;
v_isShared_785_ = v_isSharedCheck_796_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_v_782_);
lean_inc(v_k_781_);
lean_dec(v_l_685_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_796_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_786_; lean_object* v___x_788_; 
v___x_786_ = lean_unsigned_to_nat(3u);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 4, v_r_686_);
lean_ctor_set(v___x_784_, 3, v_r_686_);
lean_ctor_set(v___x_784_, 2, v_v_780_);
lean_ctor_set(v___x_784_, 1, v_k_779_);
lean_ctor_set(v___x_784_, 0, v___x_687_);
v___x_788_ = v___x_784_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_687_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_k_779_);
lean_ctor_set(v_reuseFailAlloc_795_, 2, v_v_780_);
lean_ctor_set(v_reuseFailAlloc_795_, 3, v_r_686_);
lean_ctor_set(v_reuseFailAlloc_795_, 4, v_r_686_);
v___x_788_ = v_reuseFailAlloc_795_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
lean_object* v___x_790_; 
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 3, v_r_686_);
lean_ctor_set(v___x_766_, 0, v___x_687_);
v___x_790_ = v___x_766_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v___x_687_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v_k_683_);
lean_ctor_set(v_reuseFailAlloc_794_, 2, v_v_684_);
lean_ctor_set(v_reuseFailAlloc_794_, 3, v_r_686_);
lean_ctor_set(v_reuseFailAlloc_794_, 4, v_r_686_);
v___x_790_ = v_reuseFailAlloc_794_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
lean_object* v___x_792_; 
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 4, v___x_790_);
lean_ctor_set(v___x_690_, 3, v___x_788_);
lean_ctor_set(v___x_690_, 2, v_v_782_);
lean_ctor_set(v___x_690_, 1, v_k_781_);
lean_ctor_set(v___x_690_, 0, v___x_786_);
v___x_792_ = v___x_690_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v_k_781_);
lean_ctor_set(v_reuseFailAlloc_793_, 2, v_v_782_);
lean_ctor_set(v_reuseFailAlloc_793_, 3, v___x_788_);
lean_ctor_set(v_reuseFailAlloc_793_, 4, v___x_790_);
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
else
{
if (lean_obj_tag(v_r_686_) == 0)
{
lean_object* v_k_800_; lean_object* v_v_801_; lean_object* v___x_802_; lean_object* v___x_804_; 
lean_dec(v_size_682_);
v_k_800_ = lean_ctor_get(v___x_692_, 0);
lean_inc(v_k_800_);
v_v_801_ = lean_ctor_get(v___x_692_, 1);
lean_inc(v_v_801_);
lean_dec_ref(v___x_692_);
v___x_802_ = lean_unsigned_to_nat(3u);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 4, v_l_685_);
lean_ctor_set(v___x_766_, 2, v_v_801_);
lean_ctor_set(v___x_766_, 1, v_k_800_);
lean_ctor_set(v___x_766_, 0, v___x_687_);
v___x_804_ = v___x_766_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_687_);
lean_ctor_set(v_reuseFailAlloc_808_, 1, v_k_800_);
lean_ctor_set(v_reuseFailAlloc_808_, 2, v_v_801_);
lean_ctor_set(v_reuseFailAlloc_808_, 3, v_l_685_);
lean_ctor_set(v_reuseFailAlloc_808_, 4, v_l_685_);
v___x_804_ = v_reuseFailAlloc_808_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
lean_object* v___x_806_; 
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 4, v_r_686_);
lean_ctor_set(v___x_690_, 3, v___x_804_);
lean_ctor_set(v___x_690_, 2, v_v_684_);
lean_ctor_set(v___x_690_, 1, v_k_683_);
lean_ctor_set(v___x_690_, 0, v___x_802_);
v___x_806_ = v___x_690_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v___x_802_);
lean_ctor_set(v_reuseFailAlloc_807_, 1, v_k_683_);
lean_ctor_set(v_reuseFailAlloc_807_, 2, v_v_684_);
lean_ctor_set(v_reuseFailAlloc_807_, 3, v___x_804_);
lean_ctor_set(v_reuseFailAlloc_807_, 4, v_r_686_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
else
{
lean_object* v_k_809_; lean_object* v_v_810_; lean_object* v___x_812_; 
v_k_809_ = lean_ctor_get(v___x_692_, 0);
lean_inc(v_k_809_);
v_v_810_ = lean_ctor_get(v___x_692_, 1);
lean_inc(v_v_810_);
lean_dec_ref(v___x_692_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 3, v_r_686_);
v___x_812_ = v___x_766_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_size_682_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v_k_683_);
lean_ctor_set(v_reuseFailAlloc_817_, 2, v_v_684_);
lean_ctor_set(v_reuseFailAlloc_817_, 3, v_r_686_);
lean_ctor_set(v_reuseFailAlloc_817_, 4, v_r_686_);
v___x_812_ = v_reuseFailAlloc_817_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
lean_object* v___x_813_; lean_object* v___x_815_; 
v___x_813_ = lean_unsigned_to_nat(2u);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 4, v___x_812_);
lean_ctor_set(v___x_690_, 3, v_r_686_);
lean_ctor_set(v___x_690_, 2, v_v_810_);
lean_ctor_set(v___x_690_, 1, v_k_809_);
lean_ctor_set(v___x_690_, 0, v___x_813_);
v___x_815_ = v___x_690_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v___x_813_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v_k_809_);
lean_ctor_set(v_reuseFailAlloc_816_, 2, v_v_810_);
lean_ctor_set(v_reuseFailAlloc_816_, 3, v_r_686_);
lean_ctor_set(v_reuseFailAlloc_816_, 4, v___x_812_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
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
lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_982_; 
lean_inc(v_r_686_);
lean_inc(v_v_684_);
lean_inc(v_k_683_);
v_isSharedCheck_982_ = !lean_is_exclusive(v_r_498_);
if (v_isSharedCheck_982_ == 0)
{
lean_object* v_unused_983_; lean_object* v_unused_984_; lean_object* v_unused_985_; lean_object* v_unused_986_; lean_object* v_unused_987_; 
v_unused_983_ = lean_ctor_get(v_r_498_, 4);
lean_dec(v_unused_983_);
v_unused_984_ = lean_ctor_get(v_r_498_, 3);
lean_dec(v_unused_984_);
v_unused_985_ = lean_ctor_get(v_r_498_, 2);
lean_dec(v_unused_985_);
v_unused_986_ = lean_ctor_get(v_r_498_, 1);
lean_dec(v_unused_986_);
v_unused_987_ = lean_ctor_get(v_r_498_, 0);
lean_dec(v_unused_987_);
v___x_831_ = v_r_498_;
v_isShared_832_ = v_isSharedCheck_982_;
goto v_resetjp_830_;
}
else
{
lean_dec(v_r_498_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_982_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_833_; lean_object* v_tree_834_; 
v___x_833_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_683_, v_v_684_, v_l_685_, v_r_686_);
v_tree_834_ = lean_ctor_get(v___x_833_, 2);
lean_inc(v_tree_834_);
if (lean_obj_tag(v_tree_834_) == 0)
{
lean_object* v_k_835_; lean_object* v_v_836_; lean_object* v_size_837_; lean_object* v___x_838_; lean_object* v___x_839_; uint8_t v___x_840_; 
v_k_835_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_k_835_);
v_v_836_ = lean_ctor_get(v___x_833_, 1);
lean_inc(v_v_836_);
lean_dec_ref(v___x_833_);
v_size_837_ = lean_ctor_get(v_tree_834_, 0);
v___x_838_ = lean_unsigned_to_nat(3u);
v___x_839_ = lean_nat_mul(v___x_838_, v_size_837_);
v___x_840_ = lean_nat_dec_lt(v___x_839_, v_size_677_);
lean_dec(v___x_839_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_844_; 
lean_dec(v_r_681_);
v___x_841_ = lean_nat_add(v___x_687_, v_size_677_);
v___x_842_ = lean_nat_add(v___x_841_, v_size_837_);
lean_dec(v___x_841_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 4, v_tree_834_);
lean_ctor_set(v___x_831_, 3, v_l_497_);
lean_ctor_set(v___x_831_, 2, v_v_836_);
lean_ctor_set(v___x_831_, 1, v_k_835_);
lean_ctor_set(v___x_831_, 0, v___x_842_);
v___x_844_ = v___x_831_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_842_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v_k_835_);
lean_ctor_set(v_reuseFailAlloc_845_, 2, v_v_836_);
lean_ctor_set(v_reuseFailAlloc_845_, 3, v_l_497_);
lean_ctor_set(v_reuseFailAlloc_845_, 4, v_tree_834_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
else
{
lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_911_; 
lean_inc(v_l_680_);
lean_inc(v_v_679_);
lean_inc(v_k_678_);
lean_inc(v_size_677_);
v_isSharedCheck_911_ = !lean_is_exclusive(v_l_497_);
if (v_isSharedCheck_911_ == 0)
{
lean_object* v_unused_912_; lean_object* v_unused_913_; lean_object* v_unused_914_; lean_object* v_unused_915_; lean_object* v_unused_916_; 
v_unused_912_ = lean_ctor_get(v_l_497_, 4);
lean_dec(v_unused_912_);
v_unused_913_ = lean_ctor_get(v_l_497_, 3);
lean_dec(v_unused_913_);
v_unused_914_ = lean_ctor_get(v_l_497_, 2);
lean_dec(v_unused_914_);
v_unused_915_ = lean_ctor_get(v_l_497_, 1);
lean_dec(v_unused_915_);
v_unused_916_ = lean_ctor_get(v_l_497_, 0);
lean_dec(v_unused_916_);
v___x_847_ = v_l_497_;
v_isShared_848_ = v_isSharedCheck_911_;
goto v_resetjp_846_;
}
else
{
lean_dec(v_l_497_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_911_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v_size_849_; lean_object* v_size_850_; lean_object* v_k_851_; lean_object* v_v_852_; lean_object* v_l_853_; lean_object* v_r_854_; lean_object* v___x_855_; lean_object* v___x_856_; uint8_t v___x_857_; 
v_size_849_ = lean_ctor_get(v_l_680_, 0);
v_size_850_ = lean_ctor_get(v_r_681_, 0);
v_k_851_ = lean_ctor_get(v_r_681_, 1);
v_v_852_ = lean_ctor_get(v_r_681_, 2);
v_l_853_ = lean_ctor_get(v_r_681_, 3);
v_r_854_ = lean_ctor_get(v_r_681_, 4);
v___x_855_ = lean_unsigned_to_nat(2u);
v___x_856_ = lean_nat_mul(v___x_855_, v_size_849_);
v___x_857_ = lean_nat_dec_lt(v_size_850_, v___x_856_);
lean_dec(v___x_856_);
if (v___x_857_ == 0)
{
lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_895_; 
lean_inc(v_r_854_);
lean_inc(v_l_853_);
lean_inc(v_v_852_);
lean_inc(v_k_851_);
lean_del_object(v___x_847_);
v_isSharedCheck_895_ = !lean_is_exclusive(v_r_681_);
if (v_isSharedCheck_895_ == 0)
{
lean_object* v_unused_896_; lean_object* v_unused_897_; lean_object* v_unused_898_; lean_object* v_unused_899_; lean_object* v_unused_900_; 
v_unused_896_ = lean_ctor_get(v_r_681_, 4);
lean_dec(v_unused_896_);
v_unused_897_ = lean_ctor_get(v_r_681_, 3);
lean_dec(v_unused_897_);
v_unused_898_ = lean_ctor_get(v_r_681_, 2);
lean_dec(v_unused_898_);
v_unused_899_ = lean_ctor_get(v_r_681_, 1);
lean_dec(v_unused_899_);
v_unused_900_ = lean_ctor_get(v_r_681_, 0);
lean_dec(v_unused_900_);
v___x_859_ = v_r_681_;
v_isShared_860_ = v_isSharedCheck_895_;
goto v_resetjp_858_;
}
else
{
lean_dec(v_r_681_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_895_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v___x_883_; lean_object* v___y_885_; 
v___x_861_ = lean_nat_add(v___x_687_, v_size_677_);
lean_dec(v_size_677_);
v___x_862_ = lean_nat_add(v___x_861_, v_size_837_);
lean_dec(v___x_861_);
v___x_883_ = lean_nat_add(v___x_687_, v_size_849_);
if (lean_obj_tag(v_l_853_) == 0)
{
lean_object* v_size_893_; 
v_size_893_ = lean_ctor_get(v_l_853_, 0);
lean_inc(v_size_893_);
v___y_885_ = v_size_893_;
goto v___jp_884_;
}
else
{
lean_object* v___x_894_; 
v___x_894_ = lean_unsigned_to_nat(0u);
v___y_885_ = v___x_894_;
goto v___jp_884_;
}
v___jp_863_:
{
lean_object* v___x_867_; lean_object* v___x_869_; 
v___x_867_ = lean_nat_add(v___y_865_, v___y_866_);
lean_dec(v___y_866_);
lean_dec(v___y_865_);
lean_inc_ref(v_tree_834_);
if (v_isShared_860_ == 0)
{
lean_ctor_set(v___x_859_, 4, v_tree_834_);
lean_ctor_set(v___x_859_, 3, v_r_854_);
lean_ctor_set(v___x_859_, 2, v_v_836_);
lean_ctor_set(v___x_859_, 1, v_k_835_);
lean_ctor_set(v___x_859_, 0, v___x_867_);
v___x_869_ = v___x_859_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_867_);
lean_ctor_set(v_reuseFailAlloc_882_, 1, v_k_835_);
lean_ctor_set(v_reuseFailAlloc_882_, 2, v_v_836_);
lean_ctor_set(v_reuseFailAlloc_882_, 3, v_r_854_);
lean_ctor_set(v_reuseFailAlloc_882_, 4, v_tree_834_);
v___x_869_ = v_reuseFailAlloc_882_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
v_isSharedCheck_876_ = !lean_is_exclusive(v_tree_834_);
if (v_isSharedCheck_876_ == 0)
{
lean_object* v_unused_877_; lean_object* v_unused_878_; lean_object* v_unused_879_; lean_object* v_unused_880_; lean_object* v_unused_881_; 
v_unused_877_ = lean_ctor_get(v_tree_834_, 4);
lean_dec(v_unused_877_);
v_unused_878_ = lean_ctor_get(v_tree_834_, 3);
lean_dec(v_unused_878_);
v_unused_879_ = lean_ctor_get(v_tree_834_, 2);
lean_dec(v_unused_879_);
v_unused_880_ = lean_ctor_get(v_tree_834_, 1);
lean_dec(v_unused_880_);
v_unused_881_ = lean_ctor_get(v_tree_834_, 0);
lean_dec(v_unused_881_);
v___x_871_ = v_tree_834_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_dec(v_tree_834_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
lean_ctor_set(v___x_871_, 4, v___x_869_);
lean_ctor_set(v___x_871_, 3, v___y_864_);
lean_ctor_set(v___x_871_, 2, v_v_852_);
lean_ctor_set(v___x_871_, 1, v_k_851_);
lean_ctor_set(v___x_871_, 0, v___x_862_);
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_862_);
lean_ctor_set(v_reuseFailAlloc_875_, 1, v_k_851_);
lean_ctor_set(v_reuseFailAlloc_875_, 2, v_v_852_);
lean_ctor_set(v_reuseFailAlloc_875_, 3, v___y_864_);
lean_ctor_set(v_reuseFailAlloc_875_, 4, v___x_869_);
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
v___jp_884_:
{
lean_object* v___x_886_; lean_object* v___x_888_; 
v___x_886_ = lean_nat_add(v___x_883_, v___y_885_);
lean_dec(v___y_885_);
lean_dec(v___x_883_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 4, v_l_853_);
lean_ctor_set(v___x_831_, 3, v_l_680_);
lean_ctor_set(v___x_831_, 2, v_v_679_);
lean_ctor_set(v___x_831_, 1, v_k_678_);
lean_ctor_set(v___x_831_, 0, v___x_886_);
v___x_888_ = v___x_831_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_886_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v_k_678_);
lean_ctor_set(v_reuseFailAlloc_892_, 2, v_v_679_);
lean_ctor_set(v_reuseFailAlloc_892_, 3, v_l_680_);
lean_ctor_set(v_reuseFailAlloc_892_, 4, v_l_853_);
v___x_888_ = v_reuseFailAlloc_892_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
lean_object* v___x_889_; 
v___x_889_ = lean_nat_add(v___x_687_, v_size_837_);
if (lean_obj_tag(v_r_854_) == 0)
{
lean_object* v_size_890_; 
v_size_890_ = lean_ctor_get(v_r_854_, 0);
lean_inc(v_size_890_);
v___y_864_ = v___x_888_;
v___y_865_ = v___x_889_;
v___y_866_ = v_size_890_;
goto v___jp_863_;
}
else
{
lean_object* v___x_891_; 
v___x_891_ = lean_unsigned_to_nat(0u);
v___y_864_ = v___x_888_;
v___y_865_ = v___x_889_;
v___y_866_ = v___x_891_;
goto v___jp_863_;
}
}
}
}
}
else
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_906_; 
v___x_901_ = lean_nat_add(v___x_687_, v_size_677_);
lean_dec(v_size_677_);
v___x_902_ = lean_nat_add(v___x_901_, v_size_837_);
lean_dec(v___x_901_);
v___x_903_ = lean_nat_add(v___x_687_, v_size_837_);
v___x_904_ = lean_nat_add(v___x_903_, v_size_850_);
lean_dec(v___x_903_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 4, v_tree_834_);
lean_ctor_set(v___x_831_, 3, v_r_681_);
lean_ctor_set(v___x_831_, 2, v_v_836_);
lean_ctor_set(v___x_831_, 1, v_k_835_);
lean_ctor_set(v___x_831_, 0, v___x_904_);
v___x_906_ = v___x_831_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v___x_904_);
lean_ctor_set(v_reuseFailAlloc_910_, 1, v_k_835_);
lean_ctor_set(v_reuseFailAlloc_910_, 2, v_v_836_);
lean_ctor_set(v_reuseFailAlloc_910_, 3, v_r_681_);
lean_ctor_set(v_reuseFailAlloc_910_, 4, v_tree_834_);
v___x_906_ = v_reuseFailAlloc_910_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
lean_object* v___x_908_; 
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 4, v___x_906_);
lean_ctor_set(v___x_847_, 0, v___x_902_);
v___x_908_ = v___x_847_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_902_);
lean_ctor_set(v_reuseFailAlloc_909_, 1, v_k_678_);
lean_ctor_set(v_reuseFailAlloc_909_, 2, v_v_679_);
lean_ctor_set(v_reuseFailAlloc_909_, 3, v_l_680_);
lean_ctor_set(v_reuseFailAlloc_909_, 4, v___x_906_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_680_) == 0)
{
lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_940_; 
lean_inc_ref(v_l_680_);
lean_inc(v_v_679_);
lean_inc(v_k_678_);
lean_inc(v_size_677_);
v_isSharedCheck_940_ = !lean_is_exclusive(v_l_497_);
if (v_isSharedCheck_940_ == 0)
{
lean_object* v_unused_941_; lean_object* v_unused_942_; lean_object* v_unused_943_; lean_object* v_unused_944_; lean_object* v_unused_945_; 
v_unused_941_ = lean_ctor_get(v_l_497_, 4);
lean_dec(v_unused_941_);
v_unused_942_ = lean_ctor_get(v_l_497_, 3);
lean_dec(v_unused_942_);
v_unused_943_ = lean_ctor_get(v_l_497_, 2);
lean_dec(v_unused_943_);
v_unused_944_ = lean_ctor_get(v_l_497_, 1);
lean_dec(v_unused_944_);
v_unused_945_ = lean_ctor_get(v_l_497_, 0);
lean_dec(v_unused_945_);
v___x_918_ = v_l_497_;
v_isShared_919_ = v_isSharedCheck_940_;
goto v_resetjp_917_;
}
else
{
lean_dec(v_l_497_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_940_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
if (lean_obj_tag(v_r_681_) == 0)
{
lean_object* v_k_920_; lean_object* v_v_921_; lean_object* v_size_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_926_; 
v_k_920_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_k_920_);
v_v_921_ = lean_ctor_get(v___x_833_, 1);
lean_inc(v_v_921_);
lean_dec_ref(v___x_833_);
v_size_922_ = lean_ctor_get(v_r_681_, 0);
v___x_923_ = lean_nat_add(v___x_687_, v_size_677_);
lean_dec(v_size_677_);
v___x_924_ = lean_nat_add(v___x_687_, v_size_922_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 4, v_tree_834_);
lean_ctor_set(v___x_831_, 3, v_r_681_);
lean_ctor_set(v___x_831_, 2, v_v_921_);
lean_ctor_set(v___x_831_, 1, v_k_920_);
lean_ctor_set(v___x_831_, 0, v___x_924_);
v___x_926_ = v___x_831_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v___x_924_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v_k_920_);
lean_ctor_set(v_reuseFailAlloc_930_, 2, v_v_921_);
lean_ctor_set(v_reuseFailAlloc_930_, 3, v_r_681_);
lean_ctor_set(v_reuseFailAlloc_930_, 4, v_tree_834_);
v___x_926_ = v_reuseFailAlloc_930_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
lean_object* v___x_928_; 
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 4, v___x_926_);
lean_ctor_set(v___x_918_, 0, v___x_923_);
v___x_928_ = v___x_918_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v_k_678_);
lean_ctor_set(v_reuseFailAlloc_929_, 2, v_v_679_);
lean_ctor_set(v_reuseFailAlloc_929_, 3, v_l_680_);
lean_ctor_set(v_reuseFailAlloc_929_, 4, v___x_926_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
else
{
lean_object* v_k_931_; lean_object* v_v_932_; lean_object* v___x_933_; lean_object* v___x_935_; 
lean_dec(v_size_677_);
v_k_931_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_k_931_);
v_v_932_ = lean_ctor_get(v___x_833_, 1);
lean_inc(v_v_932_);
lean_dec_ref(v___x_833_);
v___x_933_ = lean_unsigned_to_nat(3u);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 4, v_r_681_);
lean_ctor_set(v___x_831_, 3, v_r_681_);
lean_ctor_set(v___x_831_, 2, v_v_932_);
lean_ctor_set(v___x_831_, 1, v_k_931_);
lean_ctor_set(v___x_831_, 0, v___x_687_);
v___x_935_ = v___x_831_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v___x_687_);
lean_ctor_set(v_reuseFailAlloc_939_, 1, v_k_931_);
lean_ctor_set(v_reuseFailAlloc_939_, 2, v_v_932_);
lean_ctor_set(v_reuseFailAlloc_939_, 3, v_r_681_);
lean_ctor_set(v_reuseFailAlloc_939_, 4, v_r_681_);
v___x_935_ = v_reuseFailAlloc_939_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
lean_object* v___x_937_; 
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 4, v___x_935_);
lean_ctor_set(v___x_918_, 0, v___x_933_);
v___x_937_ = v___x_918_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_933_);
lean_ctor_set(v_reuseFailAlloc_938_, 1, v_k_678_);
lean_ctor_set(v_reuseFailAlloc_938_, 2, v_v_679_);
lean_ctor_set(v_reuseFailAlloc_938_, 3, v_l_680_);
lean_ctor_set(v_reuseFailAlloc_938_, 4, v___x_935_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_681_) == 0)
{
lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_970_; 
lean_inc(v_l_680_);
lean_inc(v_v_679_);
lean_inc(v_k_678_);
v_isSharedCheck_970_ = !lean_is_exclusive(v_l_497_);
if (v_isSharedCheck_970_ == 0)
{
lean_object* v_unused_971_; lean_object* v_unused_972_; lean_object* v_unused_973_; lean_object* v_unused_974_; lean_object* v_unused_975_; 
v_unused_971_ = lean_ctor_get(v_l_497_, 4);
lean_dec(v_unused_971_);
v_unused_972_ = lean_ctor_get(v_l_497_, 3);
lean_dec(v_unused_972_);
v_unused_973_ = lean_ctor_get(v_l_497_, 2);
lean_dec(v_unused_973_);
v_unused_974_ = lean_ctor_get(v_l_497_, 1);
lean_dec(v_unused_974_);
v_unused_975_ = lean_ctor_get(v_l_497_, 0);
lean_dec(v_unused_975_);
v___x_947_ = v_l_497_;
v_isShared_948_ = v_isSharedCheck_970_;
goto v_resetjp_946_;
}
else
{
lean_dec(v_l_497_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_970_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v_k_949_; lean_object* v_v_950_; lean_object* v_k_951_; lean_object* v_v_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_966_; 
v_k_949_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_k_949_);
v_v_950_ = lean_ctor_get(v___x_833_, 1);
lean_inc(v_v_950_);
lean_dec_ref(v___x_833_);
v_k_951_ = lean_ctor_get(v_r_681_, 1);
v_v_952_ = lean_ctor_get(v_r_681_, 2);
v_isSharedCheck_966_ = !lean_is_exclusive(v_r_681_);
if (v_isSharedCheck_966_ == 0)
{
lean_object* v_unused_967_; lean_object* v_unused_968_; lean_object* v_unused_969_; 
v_unused_967_ = lean_ctor_get(v_r_681_, 4);
lean_dec(v_unused_967_);
v_unused_968_ = lean_ctor_get(v_r_681_, 3);
lean_dec(v_unused_968_);
v_unused_969_ = lean_ctor_get(v_r_681_, 0);
lean_dec(v_unused_969_);
v___x_954_ = v_r_681_;
v_isShared_955_ = v_isSharedCheck_966_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_v_952_);
lean_inc(v_k_951_);
lean_dec(v_r_681_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_966_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_956_ = lean_unsigned_to_nat(3u);
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 4, v_l_680_);
lean_ctor_set(v___x_954_, 3, v_l_680_);
lean_ctor_set(v___x_954_, 2, v_v_679_);
lean_ctor_set(v___x_954_, 1, v_k_678_);
lean_ctor_set(v___x_954_, 0, v___x_687_);
v___x_958_ = v___x_954_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v___x_687_);
lean_ctor_set(v_reuseFailAlloc_965_, 1, v_k_678_);
lean_ctor_set(v_reuseFailAlloc_965_, 2, v_v_679_);
lean_ctor_set(v_reuseFailAlloc_965_, 3, v_l_680_);
lean_ctor_set(v_reuseFailAlloc_965_, 4, v_l_680_);
v___x_958_ = v_reuseFailAlloc_965_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
lean_object* v___x_960_; 
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 4, v_l_680_);
lean_ctor_set(v___x_831_, 3, v_l_680_);
lean_ctor_set(v___x_831_, 2, v_v_950_);
lean_ctor_set(v___x_831_, 1, v_k_949_);
lean_ctor_set(v___x_831_, 0, v___x_687_);
v___x_960_ = v___x_831_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_687_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_k_949_);
lean_ctor_set(v_reuseFailAlloc_964_, 2, v_v_950_);
lean_ctor_set(v_reuseFailAlloc_964_, 3, v_l_680_);
lean_ctor_set(v_reuseFailAlloc_964_, 4, v_l_680_);
v___x_960_ = v_reuseFailAlloc_964_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
lean_object* v___x_962_; 
if (v_isShared_948_ == 0)
{
lean_ctor_set(v___x_947_, 4, v___x_960_);
lean_ctor_set(v___x_947_, 3, v___x_958_);
lean_ctor_set(v___x_947_, 2, v_v_952_);
lean_ctor_set(v___x_947_, 1, v_k_951_);
lean_ctor_set(v___x_947_, 0, v___x_956_);
v___x_962_ = v___x_947_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v___x_956_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v_k_951_);
lean_ctor_set(v_reuseFailAlloc_963_, 2, v_v_952_);
lean_ctor_set(v_reuseFailAlloc_963_, 3, v___x_958_);
lean_ctor_set(v_reuseFailAlloc_963_, 4, v___x_960_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
}
}
}
else
{
lean_object* v_k_976_; lean_object* v_v_977_; lean_object* v___x_978_; lean_object* v___x_980_; 
v_k_976_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_k_976_);
v_v_977_ = lean_ctor_get(v___x_833_, 1);
lean_inc(v_v_977_);
lean_dec_ref(v___x_833_);
v___x_978_ = lean_unsigned_to_nat(2u);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 4, v_r_681_);
lean_ctor_set(v___x_831_, 3, v_l_497_);
lean_ctor_set(v___x_831_, 2, v_v_977_);
lean_ctor_set(v___x_831_, 1, v_k_976_);
lean_ctor_set(v___x_831_, 0, v___x_978_);
v___x_980_ = v___x_831_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v___x_978_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v_k_976_);
lean_ctor_set(v_reuseFailAlloc_981_, 2, v_v_977_);
lean_ctor_set(v_reuseFailAlloc_981_, 3, v_l_497_);
lean_ctor_set(v_reuseFailAlloc_981_, 4, v_r_681_);
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
}
else
{
return v_l_497_;
}
}
else
{
return v_r_498_;
}
}
default: 
{
lean_object* v_impl_988_; lean_object* v___x_989_; 
v_impl_988_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_k_493_, v_r_498_);
v___x_989_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_988_) == 0)
{
if (lean_obj_tag(v_l_497_) == 0)
{
lean_object* v_size_990_; lean_object* v_size_991_; lean_object* v_k_992_; lean_object* v_v_993_; lean_object* v_l_994_; lean_object* v_r_995_; lean_object* v___x_996_; lean_object* v___x_997_; uint8_t v___x_998_; 
v_size_990_ = lean_ctor_get(v_impl_988_, 0);
lean_inc(v_size_990_);
v_size_991_ = lean_ctor_get(v_l_497_, 0);
v_k_992_ = lean_ctor_get(v_l_497_, 1);
v_v_993_ = lean_ctor_get(v_l_497_, 2);
v_l_994_ = lean_ctor_get(v_l_497_, 3);
v_r_995_ = lean_ctor_get(v_l_497_, 4);
lean_inc(v_r_995_);
v___x_996_ = lean_unsigned_to_nat(3u);
v___x_997_ = lean_nat_mul(v___x_996_, v_size_990_);
v___x_998_ = lean_nat_dec_lt(v___x_997_, v_size_991_);
lean_dec(v___x_997_);
if (v___x_998_ == 0)
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1002_; 
lean_dec(v_r_995_);
v___x_999_ = lean_nat_add(v___x_989_, v_size_991_);
v___x_1000_ = lean_nat_add(v___x_999_, v_size_990_);
lean_dec(v_size_990_);
lean_dec(v___x_999_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 4, v_impl_988_);
lean_ctor_set(v___x_500_, 0, v___x_1000_);
v___x_1002_ = v___x_500_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_1000_);
lean_ctor_set(v_reuseFailAlloc_1003_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_1003_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_1003_, 3, v_l_497_);
lean_ctor_set(v_reuseFailAlloc_1003_, 4, v_impl_988_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
else
{
lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1069_; 
lean_inc(v_l_994_);
lean_inc(v_v_993_);
lean_inc(v_k_992_);
lean_inc(v_size_991_);
v_isSharedCheck_1069_ = !lean_is_exclusive(v_l_497_);
if (v_isSharedCheck_1069_ == 0)
{
lean_object* v_unused_1070_; lean_object* v_unused_1071_; lean_object* v_unused_1072_; lean_object* v_unused_1073_; lean_object* v_unused_1074_; 
v_unused_1070_ = lean_ctor_get(v_l_497_, 4);
lean_dec(v_unused_1070_);
v_unused_1071_ = lean_ctor_get(v_l_497_, 3);
lean_dec(v_unused_1071_);
v_unused_1072_ = lean_ctor_get(v_l_497_, 2);
lean_dec(v_unused_1072_);
v_unused_1073_ = lean_ctor_get(v_l_497_, 1);
lean_dec(v_unused_1073_);
v_unused_1074_ = lean_ctor_get(v_l_497_, 0);
lean_dec(v_unused_1074_);
v___x_1005_ = v_l_497_;
v_isShared_1006_ = v_isSharedCheck_1069_;
goto v_resetjp_1004_;
}
else
{
lean_dec(v_l_497_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1069_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v_size_1007_; lean_object* v_size_1008_; lean_object* v_k_1009_; lean_object* v_v_1010_; lean_object* v_l_1011_; lean_object* v_r_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; uint8_t v___x_1015_; 
v_size_1007_ = lean_ctor_get(v_l_994_, 0);
v_size_1008_ = lean_ctor_get(v_r_995_, 0);
v_k_1009_ = lean_ctor_get(v_r_995_, 1);
v_v_1010_ = lean_ctor_get(v_r_995_, 2);
v_l_1011_ = lean_ctor_get(v_r_995_, 3);
v_r_1012_ = lean_ctor_get(v_r_995_, 4);
v___x_1013_ = lean_unsigned_to_nat(2u);
v___x_1014_ = lean_nat_mul(v___x_1013_, v_size_1007_);
v___x_1015_ = lean_nat_dec_lt(v_size_1008_, v___x_1014_);
lean_dec(v___x_1014_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1044_; 
lean_inc(v_r_1012_);
lean_inc(v_l_1011_);
lean_inc(v_v_1010_);
lean_inc(v_k_1009_);
v_isSharedCheck_1044_ = !lean_is_exclusive(v_r_995_);
if (v_isSharedCheck_1044_ == 0)
{
lean_object* v_unused_1045_; lean_object* v_unused_1046_; lean_object* v_unused_1047_; lean_object* v_unused_1048_; lean_object* v_unused_1049_; 
v_unused_1045_ = lean_ctor_get(v_r_995_, 4);
lean_dec(v_unused_1045_);
v_unused_1046_ = lean_ctor_get(v_r_995_, 3);
lean_dec(v_unused_1046_);
v_unused_1047_ = lean_ctor_get(v_r_995_, 2);
lean_dec(v_unused_1047_);
v_unused_1048_ = lean_ctor_get(v_r_995_, 1);
lean_dec(v_unused_1048_);
v_unused_1049_ = lean_ctor_get(v_r_995_, 0);
lean_dec(v_unused_1049_);
v___x_1017_ = v_r_995_;
v_isShared_1018_ = v_isSharedCheck_1044_;
goto v_resetjp_1016_;
}
else
{
lean_dec(v_r_995_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1044_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___x_1032_; lean_object* v___y_1034_; 
v___x_1019_ = lean_nat_add(v___x_989_, v_size_991_);
lean_dec(v_size_991_);
v___x_1020_ = lean_nat_add(v___x_1019_, v_size_990_);
lean_dec(v___x_1019_);
v___x_1032_ = lean_nat_add(v___x_989_, v_size_1007_);
if (lean_obj_tag(v_l_1011_) == 0)
{
lean_object* v_size_1042_; 
v_size_1042_ = lean_ctor_get(v_l_1011_, 0);
lean_inc(v_size_1042_);
v___y_1034_ = v_size_1042_;
goto v___jp_1033_;
}
else
{
lean_object* v___x_1043_; 
v___x_1043_ = lean_unsigned_to_nat(0u);
v___y_1034_ = v___x_1043_;
goto v___jp_1033_;
}
v___jp_1021_:
{
lean_object* v___x_1025_; lean_object* v___x_1027_; 
v___x_1025_ = lean_nat_add(v___y_1023_, v___y_1024_);
lean_dec(v___y_1024_);
lean_dec(v___y_1023_);
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 4, v_impl_988_);
lean_ctor_set(v___x_1017_, 3, v_r_1012_);
lean_ctor_set(v___x_1017_, 2, v_v_496_);
lean_ctor_set(v___x_1017_, 1, v_k_495_);
lean_ctor_set(v___x_1017_, 0, v___x_1025_);
v___x_1027_ = v___x_1017_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v___x_1025_);
lean_ctor_set(v_reuseFailAlloc_1031_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_1031_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_1031_, 3, v_r_1012_);
lean_ctor_set(v_reuseFailAlloc_1031_, 4, v_impl_988_);
v___x_1027_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
lean_object* v___x_1029_; 
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 4, v___x_1027_);
lean_ctor_set(v___x_1005_, 3, v___y_1022_);
lean_ctor_set(v___x_1005_, 2, v_v_1010_);
lean_ctor_set(v___x_1005_, 1, v_k_1009_);
lean_ctor_set(v___x_1005_, 0, v___x_1020_);
v___x_1029_ = v___x_1005_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1020_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v_k_1009_);
lean_ctor_set(v_reuseFailAlloc_1030_, 2, v_v_1010_);
lean_ctor_set(v_reuseFailAlloc_1030_, 3, v___y_1022_);
lean_ctor_set(v_reuseFailAlloc_1030_, 4, v___x_1027_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
v___jp_1033_:
{
lean_object* v___x_1035_; lean_object* v___x_1037_; 
v___x_1035_ = lean_nat_add(v___x_1032_, v___y_1034_);
lean_dec(v___y_1034_);
lean_dec(v___x_1032_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 4, v_l_1011_);
lean_ctor_set(v___x_500_, 3, v_l_994_);
lean_ctor_set(v___x_500_, 2, v_v_993_);
lean_ctor_set(v___x_500_, 1, v_k_992_);
lean_ctor_set(v___x_500_, 0, v___x_1035_);
v___x_1037_ = v___x_500_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v___x_1035_);
lean_ctor_set(v_reuseFailAlloc_1041_, 1, v_k_992_);
lean_ctor_set(v_reuseFailAlloc_1041_, 2, v_v_993_);
lean_ctor_set(v_reuseFailAlloc_1041_, 3, v_l_994_);
lean_ctor_set(v_reuseFailAlloc_1041_, 4, v_l_1011_);
v___x_1037_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
lean_object* v___x_1038_; 
v___x_1038_ = lean_nat_add(v___x_989_, v_size_990_);
lean_dec(v_size_990_);
if (lean_obj_tag(v_r_1012_) == 0)
{
lean_object* v_size_1039_; 
v_size_1039_ = lean_ctor_get(v_r_1012_, 0);
lean_inc(v_size_1039_);
v___y_1022_ = v___x_1037_;
v___y_1023_ = v___x_1038_;
v___y_1024_ = v_size_1039_;
goto v___jp_1021_;
}
else
{
lean_object* v___x_1040_; 
v___x_1040_ = lean_unsigned_to_nat(0u);
v___y_1022_ = v___x_1037_;
v___y_1023_ = v___x_1038_;
v___y_1024_ = v___x_1040_;
goto v___jp_1021_;
}
}
}
}
}
else
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1055_; 
lean_del_object(v___x_500_);
v___x_1050_ = lean_nat_add(v___x_989_, v_size_991_);
lean_dec(v_size_991_);
v___x_1051_ = lean_nat_add(v___x_1050_, v_size_990_);
lean_dec(v___x_1050_);
v___x_1052_ = lean_nat_add(v___x_989_, v_size_990_);
lean_dec(v_size_990_);
v___x_1053_ = lean_nat_add(v___x_1052_, v_size_1008_);
lean_dec(v___x_1052_);
lean_inc_ref(v_impl_988_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 4, v_impl_988_);
lean_ctor_set(v___x_1005_, 3, v_r_995_);
lean_ctor_set(v___x_1005_, 2, v_v_496_);
lean_ctor_set(v___x_1005_, 1, v_k_495_);
lean_ctor_set(v___x_1005_, 0, v___x_1053_);
v___x_1055_ = v___x_1005_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v___x_1053_);
lean_ctor_set(v_reuseFailAlloc_1068_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_1068_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_1068_, 3, v_r_995_);
lean_ctor_set(v_reuseFailAlloc_1068_, 4, v_impl_988_);
v___x_1055_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1062_; 
v_isSharedCheck_1062_ = !lean_is_exclusive(v_impl_988_);
if (v_isSharedCheck_1062_ == 0)
{
lean_object* v_unused_1063_; lean_object* v_unused_1064_; lean_object* v_unused_1065_; lean_object* v_unused_1066_; lean_object* v_unused_1067_; 
v_unused_1063_ = lean_ctor_get(v_impl_988_, 4);
lean_dec(v_unused_1063_);
v_unused_1064_ = lean_ctor_get(v_impl_988_, 3);
lean_dec(v_unused_1064_);
v_unused_1065_ = lean_ctor_get(v_impl_988_, 2);
lean_dec(v_unused_1065_);
v_unused_1066_ = lean_ctor_get(v_impl_988_, 1);
lean_dec(v_unused_1066_);
v_unused_1067_ = lean_ctor_get(v_impl_988_, 0);
lean_dec(v_unused_1067_);
v___x_1057_ = v_impl_988_;
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
else
{
lean_dec(v_impl_988_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1060_; 
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 4, v___x_1055_);
lean_ctor_set(v___x_1057_, 3, v_l_994_);
lean_ctor_set(v___x_1057_, 2, v_v_993_);
lean_ctor_set(v___x_1057_, 1, v_k_992_);
lean_ctor_set(v___x_1057_, 0, v___x_1051_);
v___x_1060_ = v___x_1057_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1051_);
lean_ctor_set(v_reuseFailAlloc_1061_, 1, v_k_992_);
lean_ctor_set(v_reuseFailAlloc_1061_, 2, v_v_993_);
lean_ctor_set(v_reuseFailAlloc_1061_, 3, v_l_994_);
lean_ctor_set(v_reuseFailAlloc_1061_, 4, v___x_1055_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1075_; lean_object* v___x_1076_; lean_object* v___x_1078_; 
v_size_1075_ = lean_ctor_get(v_impl_988_, 0);
lean_inc(v_size_1075_);
v___x_1076_ = lean_nat_add(v___x_989_, v_size_1075_);
lean_dec(v_size_1075_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 4, v_impl_988_);
lean_ctor_set(v___x_500_, 0, v___x_1076_);
v___x_1078_ = v___x_500_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_1079_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_1079_, 3, v_l_497_);
lean_ctor_set(v_reuseFailAlloc_1079_, 4, v_impl_988_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
else
{
if (lean_obj_tag(v_l_497_) == 0)
{
lean_object* v_l_1080_; 
v_l_1080_ = lean_ctor_get(v_l_497_, 3);
if (lean_obj_tag(v_l_1080_) == 0)
{
lean_object* v_r_1081_; 
lean_inc_ref(v_l_1080_);
v_r_1081_ = lean_ctor_get(v_l_497_, 4);
lean_inc(v_r_1081_);
if (lean_obj_tag(v_r_1081_) == 0)
{
lean_object* v_size_1082_; lean_object* v_k_1083_; lean_object* v_v_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1097_; 
v_size_1082_ = lean_ctor_get(v_l_497_, 0);
v_k_1083_ = lean_ctor_get(v_l_497_, 1);
v_v_1084_ = lean_ctor_get(v_l_497_, 2);
v_isSharedCheck_1097_ = !lean_is_exclusive(v_l_497_);
if (v_isSharedCheck_1097_ == 0)
{
lean_object* v_unused_1098_; lean_object* v_unused_1099_; 
v_unused_1098_ = lean_ctor_get(v_l_497_, 4);
lean_dec(v_unused_1098_);
v_unused_1099_ = lean_ctor_get(v_l_497_, 3);
lean_dec(v_unused_1099_);
v___x_1086_ = v_l_497_;
v_isShared_1087_ = v_isSharedCheck_1097_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_v_1084_);
lean_inc(v_k_1083_);
lean_inc(v_size_1082_);
lean_dec(v_l_497_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1097_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v_size_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1092_; 
v_size_1088_ = lean_ctor_get(v_r_1081_, 0);
v___x_1089_ = lean_nat_add(v___x_989_, v_size_1082_);
lean_dec(v_size_1082_);
v___x_1090_ = lean_nat_add(v___x_989_, v_size_1088_);
if (v_isShared_1087_ == 0)
{
lean_ctor_set(v___x_1086_, 4, v_impl_988_);
lean_ctor_set(v___x_1086_, 3, v_r_1081_);
lean_ctor_set(v___x_1086_, 2, v_v_496_);
lean_ctor_set(v___x_1086_, 1, v_k_495_);
lean_ctor_set(v___x_1086_, 0, v___x_1090_);
v___x_1092_ = v___x_1086_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v___x_1090_);
lean_ctor_set(v_reuseFailAlloc_1096_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_1096_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_1096_, 3, v_r_1081_);
lean_ctor_set(v_reuseFailAlloc_1096_, 4, v_impl_988_);
v___x_1092_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
lean_object* v___x_1094_; 
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 4, v___x_1092_);
lean_ctor_set(v___x_500_, 3, v_l_1080_);
lean_ctor_set(v___x_500_, 2, v_v_1084_);
lean_ctor_set(v___x_500_, 1, v_k_1083_);
lean_ctor_set(v___x_500_, 0, v___x_1089_);
v___x_1094_ = v___x_500_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v___x_1089_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v_k_1083_);
lean_ctor_set(v_reuseFailAlloc_1095_, 2, v_v_1084_);
lean_ctor_set(v_reuseFailAlloc_1095_, 3, v_l_1080_);
lean_ctor_set(v_reuseFailAlloc_1095_, 4, v___x_1092_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
else
{
lean_object* v_k_1100_; lean_object* v_v_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1112_; 
v_k_1100_ = lean_ctor_get(v_l_497_, 1);
v_v_1101_ = lean_ctor_get(v_l_497_, 2);
v_isSharedCheck_1112_ = !lean_is_exclusive(v_l_497_);
if (v_isSharedCheck_1112_ == 0)
{
lean_object* v_unused_1113_; lean_object* v_unused_1114_; lean_object* v_unused_1115_; 
v_unused_1113_ = lean_ctor_get(v_l_497_, 4);
lean_dec(v_unused_1113_);
v_unused_1114_ = lean_ctor_get(v_l_497_, 3);
lean_dec(v_unused_1114_);
v_unused_1115_ = lean_ctor_get(v_l_497_, 0);
lean_dec(v_unused_1115_);
v___x_1103_ = v_l_497_;
v_isShared_1104_ = v_isSharedCheck_1112_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_v_1101_);
lean_inc(v_k_1100_);
lean_dec(v_l_497_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1112_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1105_; lean_object* v___x_1107_; 
v___x_1105_ = lean_unsigned_to_nat(3u);
if (v_isShared_1104_ == 0)
{
lean_ctor_set(v___x_1103_, 3, v_r_1081_);
lean_ctor_set(v___x_1103_, 2, v_v_496_);
lean_ctor_set(v___x_1103_, 1, v_k_495_);
lean_ctor_set(v___x_1103_, 0, v___x_989_);
v___x_1107_ = v___x_1103_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_989_);
lean_ctor_set(v_reuseFailAlloc_1111_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_1111_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_1111_, 3, v_r_1081_);
lean_ctor_set(v_reuseFailAlloc_1111_, 4, v_r_1081_);
v___x_1107_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1109_; 
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 4, v___x_1107_);
lean_ctor_set(v___x_500_, 3, v_l_1080_);
lean_ctor_set(v___x_500_, 2, v_v_1101_);
lean_ctor_set(v___x_500_, 1, v_k_1100_);
lean_ctor_set(v___x_500_, 0, v___x_1105_);
v___x_1109_ = v___x_500_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1105_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_k_1100_);
lean_ctor_set(v_reuseFailAlloc_1110_, 2, v_v_1101_);
lean_ctor_set(v_reuseFailAlloc_1110_, 3, v_l_1080_);
lean_ctor_set(v_reuseFailAlloc_1110_, 4, v___x_1107_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
}
else
{
lean_object* v_r_1116_; 
v_r_1116_ = lean_ctor_get(v_l_497_, 4);
lean_inc(v_r_1116_);
if (lean_obj_tag(v_r_1116_) == 0)
{
lean_object* v_k_1117_; lean_object* v_v_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1141_; 
lean_inc(v_l_1080_);
v_k_1117_ = lean_ctor_get(v_l_497_, 1);
v_v_1118_ = lean_ctor_get(v_l_497_, 2);
v_isSharedCheck_1141_ = !lean_is_exclusive(v_l_497_);
if (v_isSharedCheck_1141_ == 0)
{
lean_object* v_unused_1142_; lean_object* v_unused_1143_; lean_object* v_unused_1144_; 
v_unused_1142_ = lean_ctor_get(v_l_497_, 4);
lean_dec(v_unused_1142_);
v_unused_1143_ = lean_ctor_get(v_l_497_, 3);
lean_dec(v_unused_1143_);
v_unused_1144_ = lean_ctor_get(v_l_497_, 0);
lean_dec(v_unused_1144_);
v___x_1120_ = v_l_497_;
v_isShared_1121_ = v_isSharedCheck_1141_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_v_1118_);
lean_inc(v_k_1117_);
lean_dec(v_l_497_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1141_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v_k_1122_; lean_object* v_v_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1137_; 
v_k_1122_ = lean_ctor_get(v_r_1116_, 1);
v_v_1123_ = lean_ctor_get(v_r_1116_, 2);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_r_1116_);
if (v_isSharedCheck_1137_ == 0)
{
lean_object* v_unused_1138_; lean_object* v_unused_1139_; lean_object* v_unused_1140_; 
v_unused_1138_ = lean_ctor_get(v_r_1116_, 4);
lean_dec(v_unused_1138_);
v_unused_1139_ = lean_ctor_get(v_r_1116_, 3);
lean_dec(v_unused_1139_);
v_unused_1140_ = lean_ctor_get(v_r_1116_, 0);
lean_dec(v_unused_1140_);
v___x_1125_ = v_r_1116_;
v_isShared_1126_ = v_isSharedCheck_1137_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_v_1123_);
lean_inc(v_k_1122_);
lean_dec(v_r_1116_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1137_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1127_; lean_object* v___x_1129_; 
v___x_1127_ = lean_unsigned_to_nat(3u);
if (v_isShared_1126_ == 0)
{
lean_ctor_set(v___x_1125_, 4, v_l_1080_);
lean_ctor_set(v___x_1125_, 3, v_l_1080_);
lean_ctor_set(v___x_1125_, 2, v_v_1118_);
lean_ctor_set(v___x_1125_, 1, v_k_1117_);
lean_ctor_set(v___x_1125_, 0, v___x_989_);
v___x_1129_ = v___x_1125_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v___x_989_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v_k_1117_);
lean_ctor_set(v_reuseFailAlloc_1136_, 2, v_v_1118_);
lean_ctor_set(v_reuseFailAlloc_1136_, 3, v_l_1080_);
lean_ctor_set(v_reuseFailAlloc_1136_, 4, v_l_1080_);
v___x_1129_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
lean_object* v___x_1131_; 
if (v_isShared_1121_ == 0)
{
lean_ctor_set(v___x_1120_, 4, v_l_1080_);
lean_ctor_set(v___x_1120_, 2, v_v_496_);
lean_ctor_set(v___x_1120_, 1, v_k_495_);
lean_ctor_set(v___x_1120_, 0, v___x_989_);
v___x_1131_ = v___x_1120_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_989_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_1135_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_1135_, 3, v_l_1080_);
lean_ctor_set(v_reuseFailAlloc_1135_, 4, v_l_1080_);
v___x_1131_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
lean_object* v___x_1133_; 
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 4, v___x_1131_);
lean_ctor_set(v___x_500_, 3, v___x_1129_);
lean_ctor_set(v___x_500_, 2, v_v_1123_);
lean_ctor_set(v___x_500_, 1, v_k_1122_);
lean_ctor_set(v___x_500_, 0, v___x_1127_);
v___x_1133_ = v___x_500_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v___x_1127_);
lean_ctor_set(v_reuseFailAlloc_1134_, 1, v_k_1122_);
lean_ctor_set(v_reuseFailAlloc_1134_, 2, v_v_1123_);
lean_ctor_set(v_reuseFailAlloc_1134_, 3, v___x_1129_);
lean_ctor_set(v_reuseFailAlloc_1134_, 4, v___x_1131_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
}
}
else
{
lean_object* v___x_1145_; lean_object* v___x_1147_; 
v___x_1145_ = lean_unsigned_to_nat(2u);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 4, v_r_1116_);
lean_ctor_set(v___x_500_, 0, v___x_1145_);
v___x_1147_ = v___x_500_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v___x_1145_);
lean_ctor_set(v_reuseFailAlloc_1148_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_1148_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_1148_, 3, v_l_497_);
lean_ctor_set(v_reuseFailAlloc_1148_, 4, v_r_1116_);
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
else
{
lean_object* v___x_1150_; 
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 4, v_l_497_);
lean_ctor_set(v___x_500_, 0, v___x_989_);
v___x_1150_ = v___x_500_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v___x_989_);
lean_ctor_set(v_reuseFailAlloc_1151_, 1, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_1151_, 2, v_v_496_);
lean_ctor_set(v_reuseFailAlloc_1151_, 3, v_l_497_);
lean_ctor_set(v_reuseFailAlloc_1151_, 4, v_l_497_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
}
}
else
{
return v_t_494_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg___boxed(lean_object* v_k_1154_, lean_object* v_t_1155_){
_start:
{
lean_object* v_res_1156_; 
v_res_1156_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_k_1154_, v_t_1155_);
lean_dec(v_k_1154_);
return v_res_1156_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeBuiltinDocString(lean_object* v_declName_1157_){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1159_ = l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings;
v___x_1160_ = lean_st_ref_take(v___x_1159_);
v___x_1161_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_declName_1157_, v___x_1160_);
v___x_1162_ = lean_st_ref_set(v___x_1159_, v___x_1161_);
v___x_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1162_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeBuiltinDocString___boxed(lean_object* v_declName_1164_, lean_object* v_a_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lean_removeBuiltinDocString(v_declName_1164_);
lean_dec(v_declName_1164_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0(lean_object* v_00_u03b2_1167_, lean_object* v_k_1168_, lean_object* v_t_1169_, lean_object* v_h_1170_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_k_1168_, v_t_1169_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___boxed(lean_object* v_00_u03b2_1172_, lean_object* v_k_1173_, lean_object* v_t_1174_, lean_object* v_h_1175_){
_start:
{
lean_object* v_res_1176_; 
v_res_1176_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0(v_00_u03b2_1172_, v_k_1173_, v_t_1174_, v_h_1175_);
lean_dec(v_k_1173_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinVersoDocStrings(){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1178_ = l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings;
v___x_1179_ = lean_st_ref_get(v___x_1178_);
v___x_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinVersoDocStrings___boxed(lean_object* v_a_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_Lean_getBuiltinVersoDocStrings();
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__0(lean_object* v_docString_1183_, lean_object* v_declName_1184_, lean_object* v_env_1185_){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1186_ = l_Lean_docStringExt;
v___x_1187_ = l_String_removeLeadingSpaces(v_docString_1183_);
v___x_1188_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1186_, v_env_1185_, v_declName_1184_, v___x_1187_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__1(lean_object* v_modifyEnv_1189_, lean_object* v___f_1190_, lean_object* v_____r_1191_){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_apply_1(v_modifyEnv_1189_, v___f_1190_);
return v___x_1192_;
}
}
static lean_object* _init_l_Lean_addDocStringCore___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = ((lean_object*)(l_Lean_addDocStringCore___redArg___lam__2___closed__0));
v___x_1195_ = l_Lean_stringToMessageData(v___x_1194_);
return v___x_1195_;
}
}
static lean_object* _init_l_Lean_addDocStringCore___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = ((lean_object*)(l_Lean_addDocStringCore___redArg___lam__2___closed__2));
v___x_1198_ = l_Lean_stringToMessageData(v___x_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__2(lean_object* v_declName_1199_, lean_object* v_modifyEnv_1200_, lean_object* v___f_1201_, lean_object* v_inst_1202_, lean_object* v_inst_1203_, lean_object* v_toBind_1204_, lean_object* v___f_1205_, lean_object* v_____do__lift_1206_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_1206_, v_declName_1199_);
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v___x_1208_; 
lean_dec(v___f_1205_);
lean_dec(v_toBind_1204_);
lean_dec_ref(v_inst_1203_);
lean_dec_ref(v_inst_1202_);
lean_dec(v_declName_1199_);
v___x_1208_ = lean_apply_1(v_modifyEnv_1200_, v___f_1201_);
return v___x_1208_;
}
else
{
uint8_t v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
lean_dec_ref(v___x_1207_);
lean_dec_ref(v___f_1201_);
lean_dec(v_modifyEnv_1200_);
v___x_1209_ = 0;
v___x_1210_ = lean_obj_once(&l_Lean_addDocStringCore___redArg___lam__2___closed__1, &l_Lean_addDocStringCore___redArg___lam__2___closed__1_once, _init_l_Lean_addDocStringCore___redArg___lam__2___closed__1);
v___x_1211_ = l_Lean_MessageData_ofConstName(v_declName_1199_, v___x_1209_);
v___x_1212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1210_);
lean_ctor_set(v___x_1212_, 1, v___x_1211_);
v___x_1213_ = lean_obj_once(&l_Lean_addDocStringCore___redArg___lam__2___closed__3, &l_Lean_addDocStringCore___redArg___lam__2___closed__3_once, _init_l_Lean_addDocStringCore___redArg___lam__2___closed__3);
v___x_1214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1212_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
v___x_1215_ = l_Lean_throwError___redArg(v_inst_1202_, v_inst_1203_, v___x_1214_);
v___x_1216_ = lean_apply_4(v_toBind_1204_, lean_box(0), lean_box(0), v___x_1215_, v___f_1205_);
return v___x_1216_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__2___boxed(lean_object* v_declName_1217_, lean_object* v_modifyEnv_1218_, lean_object* v___f_1219_, lean_object* v_inst_1220_, lean_object* v_inst_1221_, lean_object* v_toBind_1222_, lean_object* v___f_1223_, lean_object* v_____do__lift_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = l_Lean_addDocStringCore___redArg___lam__2(v_declName_1217_, v_modifyEnv_1218_, v___f_1219_, v_inst_1220_, v_inst_1221_, v_toBind_1222_, v___f_1223_, v_____do__lift_1224_);
lean_dec_ref(v_____do__lift_1224_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg(lean_object* v_inst_1226_, lean_object* v_inst_1227_, lean_object* v_inst_1228_, lean_object* v_declName_1229_, lean_object* v_docString_1230_){
_start:
{
lean_object* v_toBind_1231_; lean_object* v_getEnv_1232_; lean_object* v_modifyEnv_1233_; lean_object* v___f_1234_; lean_object* v___f_1235_; lean_object* v___f_1236_; lean_object* v___x_1237_; 
v_toBind_1231_ = lean_ctor_get(v_inst_1226_, 1);
lean_inc(v_toBind_1231_);
v_getEnv_1232_ = lean_ctor_get(v_inst_1228_, 0);
lean_inc(v_getEnv_1232_);
v_modifyEnv_1233_ = lean_ctor_get(v_inst_1228_, 1);
lean_inc(v_modifyEnv_1233_);
lean_dec_ref(v_inst_1228_);
lean_inc(v_declName_1229_);
v___f_1234_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1234_, 0, v_docString_1230_);
lean_closure_set(v___f_1234_, 1, v_declName_1229_);
lean_inc_ref(v___f_1234_);
lean_inc(v_modifyEnv_1233_);
v___f_1235_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1235_, 0, v_modifyEnv_1233_);
lean_closure_set(v___f_1235_, 1, v___f_1234_);
lean_inc(v_toBind_1231_);
v___f_1236_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_1236_, 0, v_declName_1229_);
lean_closure_set(v___f_1236_, 1, v_modifyEnv_1233_);
lean_closure_set(v___f_1236_, 2, v___f_1234_);
lean_closure_set(v___f_1236_, 3, v_inst_1226_);
lean_closure_set(v___f_1236_, 4, v_inst_1227_);
lean_closure_set(v___f_1236_, 5, v_toBind_1231_);
lean_closure_set(v___f_1236_, 6, v___f_1235_);
v___x_1237_ = lean_apply_4(v_toBind_1231_, lean_box(0), lean_box(0), v_getEnv_1232_, v___f_1236_);
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore(lean_object* v_m_1238_, lean_object* v_inst_1239_, lean_object* v_inst_1240_, lean_object* v_inst_1241_, lean_object* v_inst_1242_, lean_object* v_declName_1243_, lean_object* v_docString_1244_){
_start:
{
lean_object* v___x_1245_; 
v___x_1245_ = l_Lean_addDocStringCore___redArg(v_inst_1239_, v_inst_1240_, v_inst_1241_, v_declName_1243_, v_docString_1244_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___boxed(lean_object* v_m_1246_, lean_object* v_inst_1247_, lean_object* v_inst_1248_, lean_object* v_inst_1249_, lean_object* v_inst_1250_, lean_object* v_declName_1251_, lean_object* v_docString_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l_Lean_addDocStringCore(v_m_1246_, v_inst_1247_, v_inst_1248_, v_inst_1249_, v_inst_1250_, v_declName_1251_, v_docString_1252_);
lean_dec(v_inst_1250_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__0(lean_object* v_declName_1255_, lean_object* v_x_1256_){
_start:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = ((lean_object*)(l_Lean_removeDocStringCore___redArg___lam__0___closed__0));
v___x_1258_ = l_Std_DTreeMap_Internal_Impl_erase___redArg(v___x_1257_, v_declName_1255_, v_x_1256_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__1(lean_object* v___f_1259_, lean_object* v_env_1260_){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1261_ = l_Lean_docStringExt;
v___x_1262_ = lean_box(2);
v___x_1263_ = lean_box(0);
v___x_1264_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v___x_1261_, v_env_1260_, v___f_1259_, v___x_1262_, v___x_1263_);
return v___x_1264_;
}
}
static lean_object* _init_l_Lean_removeDocStringCore___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = ((lean_object*)(l_Lean_removeDocStringCore___redArg___lam__3___closed__0));
v___x_1267_ = l_Lean_stringToMessageData(v___x_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__3(lean_object* v_declName_1268_, lean_object* v_modifyEnv_1269_, lean_object* v___f_1270_, lean_object* v_inst_1271_, lean_object* v_inst_1272_, lean_object* v_toBind_1273_, lean_object* v___f_1274_, lean_object* v_____do__lift_1275_){
_start:
{
lean_object* v___x_1276_; 
v___x_1276_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_1275_, v_declName_1268_);
if (lean_obj_tag(v___x_1276_) == 0)
{
lean_object* v___x_1277_; 
lean_dec(v___f_1274_);
lean_dec(v_toBind_1273_);
lean_dec_ref(v_inst_1272_);
lean_dec_ref(v_inst_1271_);
lean_dec(v_declName_1268_);
v___x_1277_ = lean_apply_1(v_modifyEnv_1269_, v___f_1270_);
return v___x_1277_;
}
else
{
uint8_t v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
lean_dec_ref(v___x_1276_);
lean_dec_ref(v___f_1270_);
lean_dec(v_modifyEnv_1269_);
v___x_1278_ = 0;
v___x_1279_ = lean_obj_once(&l_Lean_removeDocStringCore___redArg___lam__3___closed__1, &l_Lean_removeDocStringCore___redArg___lam__3___closed__1_once, _init_l_Lean_removeDocStringCore___redArg___lam__3___closed__1);
v___x_1280_ = l_Lean_MessageData_ofConstName(v_declName_1268_, v___x_1278_);
v___x_1281_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1279_);
lean_ctor_set(v___x_1281_, 1, v___x_1280_);
v___x_1282_ = lean_obj_once(&l_Lean_addDocStringCore___redArg___lam__2___closed__3, &l_Lean_addDocStringCore___redArg___lam__2___closed__3_once, _init_l_Lean_addDocStringCore___redArg___lam__2___closed__3);
v___x_1283_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1281_);
lean_ctor_set(v___x_1283_, 1, v___x_1282_);
v___x_1284_ = l_Lean_throwError___redArg(v_inst_1271_, v_inst_1272_, v___x_1283_);
v___x_1285_ = lean_apply_4(v_toBind_1273_, lean_box(0), lean_box(0), v___x_1284_, v___f_1274_);
return v___x_1285_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__3___boxed(lean_object* v_declName_1286_, lean_object* v_modifyEnv_1287_, lean_object* v___f_1288_, lean_object* v_inst_1289_, lean_object* v_inst_1290_, lean_object* v_toBind_1291_, lean_object* v___f_1292_, lean_object* v_____do__lift_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lean_removeDocStringCore___redArg___lam__3(v_declName_1286_, v_modifyEnv_1287_, v___f_1288_, v_inst_1289_, v_inst_1290_, v_toBind_1291_, v___f_1292_, v_____do__lift_1293_);
lean_dec_ref(v_____do__lift_1293_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg(lean_object* v_inst_1295_, lean_object* v_inst_1296_, lean_object* v_inst_1297_, lean_object* v_declName_1298_){
_start:
{
lean_object* v_toBind_1299_; lean_object* v_getEnv_1300_; lean_object* v_modifyEnv_1301_; lean_object* v___f_1302_; lean_object* v___f_1303_; lean_object* v___f_1304_; lean_object* v___f_1305_; lean_object* v___x_1306_; 
v_toBind_1299_ = lean_ctor_get(v_inst_1295_, 1);
lean_inc(v_toBind_1299_);
v_getEnv_1300_ = lean_ctor_get(v_inst_1297_, 0);
lean_inc(v_getEnv_1300_);
v_modifyEnv_1301_ = lean_ctor_get(v_inst_1297_, 1);
lean_inc(v_modifyEnv_1301_);
lean_dec_ref(v_inst_1297_);
lean_inc(v_declName_1298_);
v___f_1302_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1302_, 0, v_declName_1298_);
v___f_1303_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1303_, 0, v___f_1302_);
lean_inc_ref(v___f_1303_);
lean_inc(v_modifyEnv_1301_);
v___f_1304_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1304_, 0, v_modifyEnv_1301_);
lean_closure_set(v___f_1304_, 1, v___f_1303_);
lean_inc(v_toBind_1299_);
v___f_1305_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_1305_, 0, v_declName_1298_);
lean_closure_set(v___f_1305_, 1, v_modifyEnv_1301_);
lean_closure_set(v___f_1305_, 2, v___f_1303_);
lean_closure_set(v___f_1305_, 3, v_inst_1295_);
lean_closure_set(v___f_1305_, 4, v_inst_1296_);
lean_closure_set(v___f_1305_, 5, v_toBind_1299_);
lean_closure_set(v___f_1305_, 6, v___f_1304_);
v___x_1306_ = lean_apply_4(v_toBind_1299_, lean_box(0), lean_box(0), v_getEnv_1300_, v___f_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore(lean_object* v_m_1307_, lean_object* v_inst_1308_, lean_object* v_inst_1309_, lean_object* v_inst_1310_, lean_object* v_inst_1311_, lean_object* v_declName_1312_){
_start:
{
lean_object* v___x_1313_; 
v___x_1313_ = l_Lean_removeDocStringCore___redArg(v_inst_1308_, v_inst_1309_, v_inst_1310_, v_declName_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___boxed(lean_object* v_m_1314_, lean_object* v_inst_1315_, lean_object* v_inst_1316_, lean_object* v_inst_1317_, lean_object* v_inst_1318_, lean_object* v_declName_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l_Lean_removeDocStringCore(v_m_1314_, v_inst_1315_, v_inst_1316_, v_inst_1317_, v_inst_1318_, v_declName_1319_);
lean_dec(v_inst_1318_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27___redArg(lean_object* v_inst_1321_, lean_object* v_inst_1322_, lean_object* v_inst_1323_, lean_object* v_declName_1324_, lean_object* v_docString_x3f_1325_){
_start:
{
if (lean_obj_tag(v_docString_x3f_1325_) == 0)
{
lean_object* v_toApplicative_1326_; lean_object* v_toPure_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v_toApplicative_1326_ = lean_ctor_get(v_inst_1321_, 0);
lean_inc_ref(v_toApplicative_1326_);
lean_dec(v_declName_1324_);
lean_dec_ref(v_inst_1323_);
lean_dec_ref(v_inst_1322_);
lean_dec_ref(v_inst_1321_);
v_toPure_1327_ = lean_ctor_get(v_toApplicative_1326_, 1);
lean_inc(v_toPure_1327_);
lean_dec_ref(v_toApplicative_1326_);
v___x_1328_ = lean_box(0);
v___x_1329_ = lean_apply_2(v_toPure_1327_, lean_box(0), v___x_1328_);
return v___x_1329_;
}
else
{
lean_object* v_val_1330_; lean_object* v___x_1331_; 
v_val_1330_ = lean_ctor_get(v_docString_x3f_1325_, 0);
lean_inc(v_val_1330_);
lean_dec_ref(v_docString_x3f_1325_);
v___x_1331_ = l_Lean_addDocStringCore___redArg(v_inst_1321_, v_inst_1322_, v_inst_1323_, v_declName_1324_, v_val_1330_);
return v___x_1331_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27(lean_object* v_m_1332_, lean_object* v_inst_1333_, lean_object* v_inst_1334_, lean_object* v_inst_1335_, lean_object* v_inst_1336_, lean_object* v_declName_1337_, lean_object* v_docString_x3f_1338_){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = l_Lean_addDocStringCore_x27___redArg(v_inst_1333_, v_inst_1334_, v_inst_1335_, v_declName_1337_, v_docString_x3f_1338_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27___boxed(lean_object* v_m_1340_, lean_object* v_inst_1341_, lean_object* v_inst_1342_, lean_object* v_inst_1343_, lean_object* v_inst_1344_, lean_object* v_declName_1345_, lean_object* v_docString_x3f_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = l_Lean_addDocStringCore_x27(v_m_1340_, v_inst_1341_, v_inst_1342_, v_inst_1343_, v_inst_1344_, v_declName_1345_, v_docString_x3f_1346_);
lean_dec(v_inst_1344_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__0(lean_object* v_declName_1348_, lean_object* v_target_1349_, lean_object* v_env_1350_){
_start:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1351_ = l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
v___x_1352_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1351_, v_env_1350_, v_declName_1348_, v_target_1349_);
return v___x_1352_;
}
}
static lean_object* _init_l_Lean_addInheritedDocString___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1354_ = ((lean_object*)(l_Lean_addInheritedDocString___redArg___lam__2___closed__0));
v___x_1355_ = l_Lean_stringToMessageData(v___x_1354_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__2(lean_object* v___x_1356_, lean_object* v_target_1357_, lean_object* v_declName_1358_, lean_object* v___x_1359_, lean_object* v_modifyEnv_1360_, lean_object* v___f_1361_, lean_object* v_inst_1362_, lean_object* v_inst_1363_, lean_object* v_toBind_1364_, lean_object* v___f_1365_, lean_object* v_____do__lift_1366_){
_start:
{
lean_object* v___x_1367_; lean_object* v_toEnvExtension_1368_; lean_object* v_asyncMode_1369_; uint8_t v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; 
v___x_1367_ = l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
v_toEnvExtension_1368_ = lean_ctor_get(v___x_1367_, 0);
lean_inc_ref(v_toEnvExtension_1368_);
v_asyncMode_1369_ = lean_ctor_get(v_toEnvExtension_1368_, 2);
lean_inc(v_asyncMode_1369_);
lean_dec_ref(v_toEnvExtension_1368_);
v___x_1370_ = 1;
v___x_1371_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1356_, v___x_1367_, v_____do__lift_1366_, v_target_1357_, v_asyncMode_1369_, v___x_1370_);
lean_dec(v_asyncMode_1369_);
v___x_1372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1372_, 0, v_declName_1358_);
v___x_1373_ = l_Option_instBEq_beq___redArg(v___x_1359_, v___x_1371_, v___x_1372_);
if (v___x_1373_ == 0)
{
lean_object* v___x_1374_; 
lean_dec(v___f_1365_);
lean_dec(v_toBind_1364_);
lean_dec_ref(v_inst_1363_);
lean_dec_ref(v_inst_1362_);
v___x_1374_ = lean_apply_1(v_modifyEnv_1360_, v___f_1361_);
return v___x_1374_;
}
else
{
lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; 
lean_dec_ref(v___f_1361_);
lean_dec(v_modifyEnv_1360_);
v___x_1375_ = lean_obj_once(&l_Lean_addInheritedDocString___redArg___lam__2___closed__1, &l_Lean_addInheritedDocString___redArg___lam__2___closed__1_once, _init_l_Lean_addInheritedDocString___redArg___lam__2___closed__1);
v___x_1376_ = l_Lean_throwError___redArg(v_inst_1362_, v_inst_1363_, v___x_1375_);
v___x_1377_ = lean_apply_4(v_toBind_1364_, lean_box(0), lean_box(0), v___x_1376_, v___f_1365_);
return v___x_1377_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__1(lean_object* v_toBind_1378_, lean_object* v_getEnv_1379_, lean_object* v___f_1380_, lean_object* v_____r_1381_){
_start:
{
lean_object* v___x_1382_; 
v___x_1382_ = lean_apply_4(v_toBind_1378_, lean_box(0), lean_box(0), v_getEnv_1379_, v___f_1380_);
return v___x_1382_;
}
}
static lean_object* _init_l_Lean_addInheritedDocString___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1384_ = ((lean_object*)(l_Lean_addInheritedDocString___redArg___lam__3___closed__0));
v___x_1385_ = l_Lean_stringToMessageData(v___x_1384_);
return v___x_1385_;
}
}
static lean_object* _init_l_Lean_addInheritedDocString___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1387_ = ((lean_object*)(l_Lean_addInheritedDocString___redArg___lam__3___closed__2));
v___x_1388_ = l_Lean_stringToMessageData(v___x_1387_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__3(lean_object* v___x_1389_, lean_object* v_declName_1390_, lean_object* v_toBind_1391_, lean_object* v_getEnv_1392_, lean_object* v___f_1393_, lean_object* v_inst_1394_, lean_object* v_inst_1395_, lean_object* v___f_1396_, lean_object* v_____do__lift_1397_){
_start:
{
lean_object* v___x_1398_; lean_object* v_toEnvExtension_1399_; lean_object* v_asyncMode_1400_; uint8_t v___x_1401_; lean_object* v___x_1402_; 
v___x_1398_ = l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
v_toEnvExtension_1399_ = lean_ctor_get(v___x_1398_, 0);
lean_inc_ref(v_toEnvExtension_1399_);
v_asyncMode_1400_ = lean_ctor_get(v_toEnvExtension_1399_, 2);
lean_inc(v_asyncMode_1400_);
lean_dec_ref(v_toEnvExtension_1399_);
v___x_1401_ = 1;
lean_inc(v_declName_1390_);
v___x_1402_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1389_, v___x_1398_, v_____do__lift_1397_, v_declName_1390_, v_asyncMode_1400_, v___x_1401_);
lean_dec(v_asyncMode_1400_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v___x_1403_; 
lean_dec(v___f_1396_);
lean_dec_ref(v_inst_1395_);
lean_dec_ref(v_inst_1394_);
lean_dec(v_declName_1390_);
v___x_1403_ = lean_apply_4(v_toBind_1391_, lean_box(0), lean_box(0), v_getEnv_1392_, v___f_1393_);
return v___x_1403_;
}
else
{
lean_object* v___x_1404_; uint8_t v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
lean_dec_ref(v___x_1402_);
lean_dec(v___f_1393_);
lean_dec(v_getEnv_1392_);
v___x_1404_ = lean_obj_once(&l_Lean_addInheritedDocString___redArg___lam__3___closed__1, &l_Lean_addInheritedDocString___redArg___lam__3___closed__1_once, _init_l_Lean_addInheritedDocString___redArg___lam__3___closed__1);
v___x_1405_ = 0;
v___x_1406_ = l_Lean_MessageData_ofConstName(v_declName_1390_, v___x_1405_);
v___x_1407_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1404_);
lean_ctor_set(v___x_1407_, 1, v___x_1406_);
v___x_1408_ = lean_obj_once(&l_Lean_addInheritedDocString___redArg___lam__3___closed__3, &l_Lean_addInheritedDocString___redArg___lam__3___closed__3_once, _init_l_Lean_addInheritedDocString___redArg___lam__3___closed__3);
v___x_1409_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1407_);
lean_ctor_set(v___x_1409_, 1, v___x_1408_);
v___x_1410_ = l_Lean_throwError___redArg(v_inst_1394_, v_inst_1395_, v___x_1409_);
v___x_1411_ = lean_apply_4(v_toBind_1391_, lean_box(0), lean_box(0), v___x_1410_, v___f_1396_);
return v___x_1411_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__5(lean_object* v_declName_1412_, lean_object* v_toBind_1413_, lean_object* v_getEnv_1414_, lean_object* v___f_1415_, lean_object* v_inst_1416_, lean_object* v_inst_1417_, lean_object* v___f_1418_, lean_object* v_____do__lift_1419_){
_start:
{
lean_object* v___x_1420_; 
v___x_1420_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_1419_, v_declName_1412_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v___x_1421_; 
lean_dec(v___f_1418_);
lean_dec_ref(v_inst_1417_);
lean_dec_ref(v_inst_1416_);
lean_dec(v_declName_1412_);
v___x_1421_ = lean_apply_4(v_toBind_1413_, lean_box(0), lean_box(0), v_getEnv_1414_, v___f_1415_);
return v___x_1421_;
}
else
{
uint8_t v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; 
lean_dec_ref(v___x_1420_);
lean_dec(v___f_1415_);
lean_dec(v_getEnv_1414_);
v___x_1422_ = 0;
v___x_1423_ = lean_obj_once(&l_Lean_addInheritedDocString___redArg___lam__3___closed__1, &l_Lean_addInheritedDocString___redArg___lam__3___closed__1_once, _init_l_Lean_addInheritedDocString___redArg___lam__3___closed__1);
v___x_1424_ = l_Lean_MessageData_ofConstName(v_declName_1412_, v___x_1422_);
v___x_1425_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1423_);
lean_ctor_set(v___x_1425_, 1, v___x_1424_);
v___x_1426_ = lean_obj_once(&l_Lean_addDocStringCore___redArg___lam__2___closed__3, &l_Lean_addDocStringCore___redArg___lam__2___closed__3_once, _init_l_Lean_addDocStringCore___redArg___lam__2___closed__3);
v___x_1427_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1425_);
lean_ctor_set(v___x_1427_, 1, v___x_1426_);
v___x_1428_ = l_Lean_throwError___redArg(v_inst_1416_, v_inst_1417_, v___x_1427_);
v___x_1429_ = lean_apply_4(v_toBind_1413_, lean_box(0), lean_box(0), v___x_1428_, v___f_1418_);
return v___x_1429_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__5___boxed(lean_object* v_declName_1430_, lean_object* v_toBind_1431_, lean_object* v_getEnv_1432_, lean_object* v___f_1433_, lean_object* v_inst_1434_, lean_object* v_inst_1435_, lean_object* v___f_1436_, lean_object* v_____do__lift_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = l_Lean_addInheritedDocString___redArg___lam__5(v_declName_1430_, v_toBind_1431_, v_getEnv_1432_, v___f_1433_, v_inst_1434_, v_inst_1435_, v___f_1436_, v_____do__lift_1437_);
lean_dec_ref(v_____do__lift_1437_);
return v_res_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg(lean_object* v_inst_1440_, lean_object* v_inst_1441_, lean_object* v_inst_1442_, lean_object* v_declName_1443_, lean_object* v_target_1444_){
_start:
{
lean_object* v_toBind_1445_; lean_object* v_getEnv_1446_; lean_object* v_modifyEnv_1447_; lean_object* v___f_1448_; lean_object* v___f_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___f_1452_; lean_object* v___f_1453_; lean_object* v___f_1454_; lean_object* v___f_1455_; lean_object* v___f_1456_; lean_object* v___x_1457_; 
v_toBind_1445_ = lean_ctor_get(v_inst_1440_, 1);
lean_inc(v_toBind_1445_);
v_getEnv_1446_ = lean_ctor_get(v_inst_1442_, 0);
lean_inc(v_getEnv_1446_);
v_modifyEnv_1447_ = lean_ctor_get(v_inst_1442_, 1);
lean_inc(v_modifyEnv_1447_);
lean_dec_ref(v_inst_1442_);
lean_inc(v_target_1444_);
lean_inc(v_declName_1443_);
v___f_1448_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1448_, 0, v_declName_1443_);
lean_closure_set(v___f_1448_, 1, v_target_1444_);
lean_inc_ref(v___f_1448_);
lean_inc(v_modifyEnv_1447_);
v___f_1449_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1449_, 0, v_modifyEnv_1447_);
lean_closure_set(v___f_1449_, 1, v___f_1448_);
v___x_1450_ = ((lean_object*)(l_Lean_addInheritedDocString___redArg___closed__0));
v___x_1451_ = lean_box(0);
lean_inc(v_toBind_1445_);
lean_inc_ref(v_inst_1441_);
lean_inc_ref(v_inst_1440_);
lean_inc(v_declName_1443_);
v___f_1452_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__2), 11, 10);
lean_closure_set(v___f_1452_, 0, v___x_1451_);
lean_closure_set(v___f_1452_, 1, v_target_1444_);
lean_closure_set(v___f_1452_, 2, v_declName_1443_);
lean_closure_set(v___f_1452_, 3, v___x_1450_);
lean_closure_set(v___f_1452_, 4, v_modifyEnv_1447_);
lean_closure_set(v___f_1452_, 5, v___f_1448_);
lean_closure_set(v___f_1452_, 6, v_inst_1440_);
lean_closure_set(v___f_1452_, 7, v_inst_1441_);
lean_closure_set(v___f_1452_, 8, v_toBind_1445_);
lean_closure_set(v___f_1452_, 9, v___f_1449_);
lean_inc_ref(v___f_1452_);
lean_inc(v_getEnv_1446_);
lean_inc(v_toBind_1445_);
v___f_1453_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1453_, 0, v_toBind_1445_);
lean_closure_set(v___f_1453_, 1, v_getEnv_1446_);
lean_closure_set(v___f_1453_, 2, v___f_1452_);
lean_inc_ref(v_inst_1441_);
lean_inc_ref(v_inst_1440_);
lean_inc(v_getEnv_1446_);
lean_inc(v_toBind_1445_);
lean_inc(v_declName_1443_);
v___f_1454_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__3), 9, 8);
lean_closure_set(v___f_1454_, 0, v___x_1451_);
lean_closure_set(v___f_1454_, 1, v_declName_1443_);
lean_closure_set(v___f_1454_, 2, v_toBind_1445_);
lean_closure_set(v___f_1454_, 3, v_getEnv_1446_);
lean_closure_set(v___f_1454_, 4, v___f_1452_);
lean_closure_set(v___f_1454_, 5, v_inst_1440_);
lean_closure_set(v___f_1454_, 6, v_inst_1441_);
lean_closure_set(v___f_1454_, 7, v___f_1453_);
lean_inc_ref(v___f_1454_);
lean_inc(v_getEnv_1446_);
lean_inc(v_toBind_1445_);
v___f_1455_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1455_, 0, v_toBind_1445_);
lean_closure_set(v___f_1455_, 1, v_getEnv_1446_);
lean_closure_set(v___f_1455_, 2, v___f_1454_);
lean_inc(v_getEnv_1446_);
lean_inc(v_toBind_1445_);
v___f_1456_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_1456_, 0, v_declName_1443_);
lean_closure_set(v___f_1456_, 1, v_toBind_1445_);
lean_closure_set(v___f_1456_, 2, v_getEnv_1446_);
lean_closure_set(v___f_1456_, 3, v___f_1454_);
lean_closure_set(v___f_1456_, 4, v_inst_1440_);
lean_closure_set(v___f_1456_, 5, v_inst_1441_);
lean_closure_set(v___f_1456_, 6, v___f_1455_);
v___x_1457_ = lean_apply_4(v_toBind_1445_, lean_box(0), lean_box(0), v_getEnv_1446_, v___f_1456_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString(lean_object* v_m_1458_, lean_object* v_inst_1459_, lean_object* v_inst_1460_, lean_object* v_inst_1461_, lean_object* v_declName_1462_, lean_object* v_target_1463_){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = l_Lean_addInheritedDocString___redArg(v_inst_1459_, v_inst_1460_, v_inst_1461_, v_declName_1462_, v_target_1463_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l_Lean_findInternalDocString_x3f(lean_object* v_env_1466_, lean_object* v_declName_1467_, uint8_t v_includeBuiltin_1468_){
_start:
{
lean_object* v___x_1473_; lean_object* v_toEnvExtension_1474_; lean_object* v_asyncMode_1475_; lean_object* v___x_1476_; uint8_t v___x_1477_; lean_object* v___x_1478_; 
v___x_1473_ = l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
v_toEnvExtension_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc_ref(v_toEnvExtension_1474_);
v_asyncMode_1475_ = lean_ctor_get(v_toEnvExtension_1474_, 2);
lean_inc(v_asyncMode_1475_);
lean_dec_ref(v_toEnvExtension_1474_);
v___x_1476_ = lean_box(0);
v___x_1477_ = 1;
lean_inc(v_declName_1467_);
lean_inc_ref(v_env_1466_);
v___x_1478_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1476_, v___x_1473_, v_env_1466_, v_declName_1467_, v_asyncMode_1475_, v___x_1477_);
lean_dec(v_asyncMode_1475_);
if (lean_obj_tag(v___x_1478_) == 1)
{
lean_object* v_val_1479_; 
lean_dec(v_declName_1467_);
v_val_1479_ = lean_ctor_get(v___x_1478_, 0);
lean_inc(v_val_1479_);
lean_dec_ref(v___x_1478_);
v_declName_1467_ = v_val_1479_;
goto _start;
}
else
{
lean_object* v___x_1481_; lean_object* v_toEnvExtension_1482_; lean_object* v_asyncMode_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
lean_dec(v___x_1478_);
v___x_1481_ = l_Lean_docStringExt;
v_toEnvExtension_1482_ = lean_ctor_get(v___x_1481_, 0);
lean_inc_ref(v_toEnvExtension_1482_);
v_asyncMode_1483_ = lean_ctor_get(v_toEnvExtension_1482_, 2);
lean_inc(v_asyncMode_1483_);
lean_dec_ref(v_toEnvExtension_1482_);
v___x_1484_ = ((lean_object*)(l_Lean_findInternalDocString_x3f___closed__0));
lean_inc(v_declName_1467_);
lean_inc_ref(v_env_1466_);
v___x_1485_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1484_, v___x_1481_, v_env_1466_, v_declName_1467_, v_asyncMode_1483_, v___x_1477_);
lean_dec(v_asyncMode_1483_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v___x_1486_; lean_object* v_toEnvExtension_1487_; lean_object* v_asyncMode_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1486_ = l_Lean_versoDocStringExt;
v_toEnvExtension_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc_ref(v_toEnvExtension_1487_);
v_asyncMode_1488_ = lean_ctor_get(v_toEnvExtension_1487_, 2);
lean_inc(v_asyncMode_1488_);
lean_dec_ref(v_toEnvExtension_1487_);
v___x_1489_ = l_Lean_instInhabitedVersoDocString_default;
lean_inc(v_declName_1467_);
v___x_1490_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1489_, v___x_1486_, v_env_1466_, v_declName_1467_, v_asyncMode_1488_, v___x_1477_);
lean_dec(v_asyncMode_1488_);
if (lean_obj_tag(v___x_1490_) == 0)
{
if (v_includeBuiltin_1468_ == 0)
{
lean_dec(v_declName_1467_);
goto v___jp_1470_;
}
else
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1491_ = l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings;
v___x_1492_ = lean_st_ref_get(v___x_1491_);
v___x_1493_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1492_, v_declName_1467_);
lean_dec(v___x_1492_);
if (lean_obj_tag(v___x_1493_) == 1)
{
lean_object* v_val_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1503_; 
lean_dec(v_declName_1467_);
v_val_1494_ = lean_ctor_get(v___x_1493_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1496_ = v___x_1493_;
v_isShared_1497_ = v_isSharedCheck_1503_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_val_1494_);
lean_dec(v___x_1493_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1503_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1498_; lean_object* v___x_1500_; 
v___x_1498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1498_, 0, v_val_1494_);
if (v_isShared_1497_ == 0)
{
lean_ctor_set(v___x_1496_, 0, v___x_1498_);
v___x_1500_ = v___x_1496_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1498_);
v___x_1500_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
lean_object* v___x_1501_; 
v___x_1501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1500_);
return v___x_1501_;
}
}
}
else
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
lean_dec(v___x_1493_);
v___x_1504_ = l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings;
v___x_1505_ = lean_st_ref_get(v___x_1504_);
v___x_1506_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1505_, v_declName_1467_);
lean_dec(v_declName_1467_);
lean_dec(v___x_1505_);
if (lean_obj_tag(v___x_1506_) == 1)
{
lean_object* v_val_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1516_; 
v_val_1507_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1516_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1509_ = v___x_1506_;
v_isShared_1510_ = v_isSharedCheck_1516_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_val_1507_);
lean_dec(v___x_1506_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1516_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1511_; lean_object* v___x_1513_; 
v___x_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1511_, 0, v_val_1507_);
if (v_isShared_1510_ == 0)
{
lean_ctor_set(v___x_1509_, 0, v___x_1511_);
v___x_1513_ = v___x_1509_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1511_);
v___x_1513_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
lean_object* v___x_1514_; 
v___x_1514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1514_, 0, v___x_1513_);
return v___x_1514_;
}
}
}
else
{
lean_dec(v___x_1506_);
goto v___jp_1470_;
}
}
}
}
else
{
lean_object* v_val_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1526_; 
lean_dec(v_declName_1467_);
v_val_1517_ = lean_ctor_get(v___x_1490_, 0);
v_isSharedCheck_1526_ = !lean_is_exclusive(v___x_1490_);
if (v_isSharedCheck_1526_ == 0)
{
v___x_1519_ = v___x_1490_;
v_isShared_1520_ = v_isSharedCheck_1526_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_val_1517_);
lean_dec(v___x_1490_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1526_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1521_; lean_object* v___x_1523_; 
v___x_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1521_, 0, v_val_1517_);
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 0, v___x_1521_);
v___x_1523_ = v___x_1519_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1521_);
v___x_1523_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
lean_object* v___x_1524_; 
v___x_1524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1523_);
return v___x_1524_;
}
}
}
}
else
{
lean_object* v_val_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1536_; 
lean_dec(v_declName_1467_);
lean_dec_ref(v_env_1466_);
v_val_1527_ = lean_ctor_get(v___x_1485_, 0);
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1485_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1529_ = v___x_1485_;
v_isShared_1530_ = v_isSharedCheck_1536_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_val_1527_);
lean_dec(v___x_1485_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1536_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v___x_1531_; lean_object* v___x_1533_; 
v___x_1531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1531_, 0, v_val_1527_);
if (v_isShared_1530_ == 0)
{
lean_ctor_set(v___x_1529_, 0, v___x_1531_);
v___x_1533_ = v___x_1529_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1531_);
v___x_1533_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
lean_object* v___x_1534_; 
v___x_1534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1533_);
return v___x_1534_;
}
}
}
}
v___jp_1470_:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; 
v___x_1471_ = lean_box(0);
v___x_1472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1472_, 0, v___x_1471_);
return v___x_1472_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_findInternalDocString_x3f___boxed(lean_object* v_env_1537_, lean_object* v_declName_1538_, lean_object* v_includeBuiltin_1539_, lean_object* v_a_1540_){
_start:
{
uint8_t v_includeBuiltin_boxed_1541_; lean_object* v_res_1542_; 
v_includeBuiltin_boxed_1541_ = lean_unbox(v_includeBuiltin_1539_);
v_res_1542_ = l_Lean_findInternalDocString_x3f(v_env_1537_, v_declName_1538_, v_includeBuiltin_boxed_1541_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2_spec__6___redArg(lean_object* v_s_1543_, lean_object* v_replacement_1544_, lean_object* v_a_1545_, lean_object* v_b_1546_){
_start:
{
lean_object* v_it_1548_; lean_object* v_startPos_1549_; lean_object* v_endPos_1550_; lean_object* v_it_1559_; 
switch(lean_obj_tag(v_a_1545_))
{
case 0:
{
lean_object* v_pos_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1577_; 
v_pos_1565_ = lean_ctor_get(v_a_1545_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v_a_1545_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1567_ = v_a_1545_;
v_isShared_1568_ = v_isSharedCheck_1577_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_pos_1565_);
lean_dec(v_a_1545_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1577_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v_startInclusive_1569_; lean_object* v_endExclusive_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; 
v_startInclusive_1569_ = lean_ctor_get(v_s_1543_, 1);
v_endExclusive_1570_ = lean_ctor_get(v_s_1543_, 2);
v___x_1571_ = lean_nat_sub(v_endExclusive_1570_, v_startInclusive_1569_);
v___x_1572_ = lean_nat_dec_eq(v_pos_1565_, v___x_1571_);
lean_dec(v___x_1571_);
if (v___x_1572_ == 0)
{
lean_object* v___x_1574_; 
if (v_isShared_1568_ == 0)
{
lean_ctor_set_tag(v___x_1567_, 1);
v___x_1574_ = v___x_1567_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_pos_1565_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
v_it_1559_ = v___x_1574_;
goto v___jp_1558_;
}
}
else
{
lean_object* v___x_1576_; 
lean_del_object(v___x_1567_);
lean_dec(v_pos_1565_);
v___x_1576_ = lean_box(3);
v_it_1559_ = v___x_1576_;
goto v___jp_1558_;
}
}
}
case 1:
{
lean_object* v_pos_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1590_; 
v_pos_1578_ = lean_ctor_get(v_a_1545_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_a_1545_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1580_ = v_a_1545_;
v_isShared_1581_ = v_isSharedCheck_1590_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_pos_1578_);
lean_dec(v_a_1545_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1590_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v_str_1582_; lean_object* v_startInclusive_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1588_; 
v_str_1582_ = lean_ctor_get(v_s_1543_, 0);
v_startInclusive_1583_ = lean_ctor_get(v_s_1543_, 1);
v___x_1584_ = lean_nat_add(v_startInclusive_1583_, v_pos_1578_);
v___x_1585_ = lean_string_utf8_next_fast(v_str_1582_, v___x_1584_);
lean_dec(v___x_1584_);
v___x_1586_ = lean_nat_sub(v___x_1585_, v_startInclusive_1583_);
lean_inc(v___x_1586_);
if (v_isShared_1581_ == 0)
{
lean_ctor_set_tag(v___x_1580_, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1586_);
v___x_1588_ = v___x_1580_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1586_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
v_it_1548_ = v___x_1588_;
v_startPos_1549_ = v_pos_1578_;
v_endPos_1550_ = v___x_1586_;
goto v___jp_1547_;
}
}
}
case 2:
{
lean_object* v_needle_1591_; lean_object* v_table_1592_; lean_object* v_stackPos_1593_; lean_object* v_needlePos_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1653_; 
v_needle_1591_ = lean_ctor_get(v_a_1545_, 0);
v_table_1592_ = lean_ctor_get(v_a_1545_, 1);
v_stackPos_1593_ = lean_ctor_get(v_a_1545_, 2);
v_needlePos_1594_ = lean_ctor_get(v_a_1545_, 3);
v_isSharedCheck_1653_ = !lean_is_exclusive(v_a_1545_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1596_ = v_a_1545_;
v_isShared_1597_ = v_isSharedCheck_1653_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_needlePos_1594_);
lean_inc(v_stackPos_1593_);
lean_inc(v_table_1592_);
lean_inc(v_needle_1591_);
lean_dec(v_a_1545_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1653_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v_str_1598_; lean_object* v_startInclusive_1599_; lean_object* v_endExclusive_1600_; lean_object* v_str_1601_; lean_object* v_startInclusive_1602_; lean_object* v_endExclusive_1603_; lean_object* v_basePos_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; uint8_t v___x_1608_; 
v_str_1598_ = lean_ctor_get(v_needle_1591_, 0);
v_startInclusive_1599_ = lean_ctor_get(v_needle_1591_, 1);
v_endExclusive_1600_ = lean_ctor_get(v_needle_1591_, 2);
v_str_1601_ = lean_ctor_get(v_s_1543_, 0);
v_startInclusive_1602_ = lean_ctor_get(v_s_1543_, 1);
v_endExclusive_1603_ = lean_ctor_get(v_s_1543_, 2);
v_basePos_1604_ = lean_nat_sub(v_stackPos_1593_, v_needlePos_1594_);
v___x_1605_ = lean_nat_sub(v_endExclusive_1600_, v_startInclusive_1599_);
v___x_1606_ = lean_nat_add(v_basePos_1604_, v___x_1605_);
v___x_1607_ = lean_nat_sub(v_endExclusive_1603_, v_startInclusive_1602_);
v___x_1608_ = lean_nat_dec_le(v___x_1606_, v___x_1607_);
lean_dec(v___x_1606_);
if (v___x_1608_ == 0)
{
uint8_t v___x_1609_; 
lean_dec(v___x_1605_);
lean_del_object(v___x_1596_);
lean_dec(v_needlePos_1594_);
lean_dec(v_stackPos_1593_);
lean_dec_ref(v_table_1592_);
lean_dec_ref(v_needle_1591_);
v___x_1609_ = lean_nat_dec_lt(v_basePos_1604_, v___x_1607_);
if (v___x_1609_ == 0)
{
lean_dec(v___x_1607_);
lean_dec(v_basePos_1604_);
lean_dec_ref(v_s_1543_);
return v_b_1546_;
}
else
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = l_String_Slice_pos_x21(v_s_1543_, v_basePos_1604_);
lean_dec(v_basePos_1604_);
v___x_1611_ = lean_box(3);
v_it_1548_ = v___x_1611_;
v_startPos_1549_ = v___x_1610_;
v_endPos_1550_ = v___x_1607_;
goto v___jp_1547_;
}
}
else
{
lean_object* v___x_1612_; uint8_t v_stackByte_1613_; lean_object* v___x_1614_; uint8_t v_patByte_1615_; uint8_t v___x_1616_; 
lean_dec(v___x_1607_);
v___x_1612_ = lean_nat_add(v_startInclusive_1602_, v_stackPos_1593_);
v_stackByte_1613_ = lean_string_get_byte_fast(v_str_1601_, v___x_1612_);
v___x_1614_ = lean_nat_add(v_startInclusive_1599_, v_needlePos_1594_);
v_patByte_1615_ = lean_string_get_byte_fast(v_str_1598_, v___x_1614_);
v___x_1616_ = lean_uint8_dec_eq(v_stackByte_1613_, v_patByte_1615_);
if (v___x_1616_ == 0)
{
lean_object* v___x_1617_; uint8_t v___x_1618_; 
lean_dec(v___x_1605_);
v___x_1617_ = lean_unsigned_to_nat(0u);
v___x_1618_ = lean_nat_dec_eq(v_needlePos_1594_, v___x_1617_);
if (v___x_1618_ == 0)
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v_newNeedlePos_1621_; uint8_t v___x_1622_; 
v___x_1619_ = lean_unsigned_to_nat(1u);
v___x_1620_ = lean_nat_sub(v_needlePos_1594_, v___x_1619_);
lean_dec(v_needlePos_1594_);
v_newNeedlePos_1621_ = lean_array_fget_borrowed(v_table_1592_, v___x_1620_);
lean_dec(v___x_1620_);
v___x_1622_ = lean_nat_dec_eq(v_newNeedlePos_1621_, v___x_1617_);
if (v___x_1622_ == 0)
{
lean_object* v_oldBasePos_1623_; lean_object* v___x_1624_; lean_object* v_newBasePos_1625_; lean_object* v___x_1627_; 
lean_inc(v_newNeedlePos_1621_);
v_oldBasePos_1623_ = l_String_Slice_pos_x21(v_s_1543_, v_basePos_1604_);
lean_dec(v_basePos_1604_);
v___x_1624_ = lean_nat_sub(v_stackPos_1593_, v_newNeedlePos_1621_);
v_newBasePos_1625_ = l_String_Slice_pos_x21(v_s_1543_, v___x_1624_);
lean_dec(v___x_1624_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 3, v_newNeedlePos_1621_);
v___x_1627_ = v___x_1596_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_needle_1591_);
lean_ctor_set(v_reuseFailAlloc_1628_, 1, v_table_1592_);
lean_ctor_set(v_reuseFailAlloc_1628_, 2, v_stackPos_1593_);
lean_ctor_set(v_reuseFailAlloc_1628_, 3, v_newNeedlePos_1621_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
v_it_1548_ = v___x_1627_;
v_startPos_1549_ = v_oldBasePos_1623_;
v_endPos_1550_ = v_newBasePos_1625_;
goto v___jp_1547_;
}
}
else
{
lean_object* v_basePos_1629_; lean_object* v_nextStackPos_1630_; lean_object* v___x_1632_; 
v_basePos_1629_ = l_String_Slice_pos_x21(v_s_1543_, v_basePos_1604_);
lean_dec(v_basePos_1604_);
v_nextStackPos_1630_ = l_String_Slice_posGE___redArg(v_s_1543_, v_stackPos_1593_);
lean_inc(v_nextStackPos_1630_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 3, v___x_1617_);
lean_ctor_set(v___x_1596_, 2, v_nextStackPos_1630_);
v___x_1632_ = v___x_1596_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_needle_1591_);
lean_ctor_set(v_reuseFailAlloc_1633_, 1, v_table_1592_);
lean_ctor_set(v_reuseFailAlloc_1633_, 2, v_nextStackPos_1630_);
lean_ctor_set(v_reuseFailAlloc_1633_, 3, v___x_1617_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
v_it_1548_ = v___x_1632_;
v_startPos_1549_ = v_basePos_1629_;
v_endPos_1550_ = v_nextStackPos_1630_;
goto v___jp_1547_;
}
}
}
else
{
lean_object* v_basePos_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v_nextStackPos_1637_; lean_object* v___x_1639_; 
lean_dec(v_basePos_1604_);
lean_dec(v_needlePos_1594_);
v_basePos_1634_ = l_String_Slice_pos_x21(v_s_1543_, v_stackPos_1593_);
v___x_1635_ = lean_unsigned_to_nat(1u);
v___x_1636_ = lean_nat_add(v_stackPos_1593_, v___x_1635_);
lean_dec(v_stackPos_1593_);
v_nextStackPos_1637_ = l_String_Slice_posGE___redArg(v_s_1543_, v___x_1636_);
lean_inc(v_nextStackPos_1637_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 3, v___x_1617_);
lean_ctor_set(v___x_1596_, 2, v_nextStackPos_1637_);
v___x_1639_ = v___x_1596_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_needle_1591_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v_table_1592_);
lean_ctor_set(v_reuseFailAlloc_1640_, 2, v_nextStackPos_1637_);
lean_ctor_set(v_reuseFailAlloc_1640_, 3, v___x_1617_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
v_it_1548_ = v___x_1639_;
v_startPos_1549_ = v_basePos_1634_;
v_endPos_1550_ = v_nextStackPos_1637_;
goto v___jp_1547_;
}
}
}
else
{
lean_object* v___x_1641_; lean_object* v_nextStackPos_1642_; lean_object* v_nextNeedlePos_1643_; uint8_t v___x_1644_; 
lean_dec(v_basePos_1604_);
v___x_1641_ = lean_unsigned_to_nat(1u);
v_nextStackPos_1642_ = lean_nat_add(v_stackPos_1593_, v___x_1641_);
lean_dec(v_stackPos_1593_);
v_nextNeedlePos_1643_ = lean_nat_add(v_needlePos_1594_, v___x_1641_);
lean_dec(v_needlePos_1594_);
v___x_1644_ = lean_nat_dec_eq(v_nextNeedlePos_1643_, v___x_1605_);
lean_dec(v___x_1605_);
if (v___x_1644_ == 0)
{
lean_object* v___x_1646_; 
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 3, v_nextNeedlePos_1643_);
lean_ctor_set(v___x_1596_, 2, v_nextStackPos_1642_);
v___x_1646_ = v___x_1596_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_needle_1591_);
lean_ctor_set(v_reuseFailAlloc_1648_, 1, v_table_1592_);
lean_ctor_set(v_reuseFailAlloc_1648_, 2, v_nextStackPos_1642_);
lean_ctor_set(v_reuseFailAlloc_1648_, 3, v_nextNeedlePos_1643_);
v___x_1646_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
v_a_1545_ = v___x_1646_;
goto _start;
}
}
else
{
lean_object* v___x_1649_; lean_object* v___x_1651_; 
lean_dec(v_nextNeedlePos_1643_);
v___x_1649_ = lean_unsigned_to_nat(0u);
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 3, v___x_1649_);
lean_ctor_set(v___x_1596_, 2, v_nextStackPos_1642_);
v___x_1651_ = v___x_1596_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v_needle_1591_);
lean_ctor_set(v_reuseFailAlloc_1652_, 1, v_table_1592_);
lean_ctor_set(v_reuseFailAlloc_1652_, 2, v_nextStackPos_1642_);
lean_ctor_set(v_reuseFailAlloc_1652_, 3, v___x_1649_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
v_it_1559_ = v___x_1651_;
goto v___jp_1558_;
}
}
}
}
}
}
default: 
{
lean_dec_ref(v_s_1543_);
return v_b_1546_;
}
}
v___jp_1547_:
{
lean_object* v___x_1551_; lean_object* v_str_1552_; lean_object* v_startInclusive_1553_; lean_object* v_endExclusive_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
lean_inc_ref(v_s_1543_);
v___x_1551_ = l_String_Slice_slice_x21(v_s_1543_, v_startPos_1549_, v_endPos_1550_);
lean_dec(v_endPos_1550_);
lean_dec(v_startPos_1549_);
v_str_1552_ = lean_ctor_get(v___x_1551_, 0);
lean_inc_ref(v_str_1552_);
v_startInclusive_1553_ = lean_ctor_get(v___x_1551_, 1);
lean_inc(v_startInclusive_1553_);
v_endExclusive_1554_ = lean_ctor_get(v___x_1551_, 2);
lean_inc(v_endExclusive_1554_);
lean_dec_ref(v___x_1551_);
v___x_1555_ = lean_string_utf8_extract(v_str_1552_, v_startInclusive_1553_, v_endExclusive_1554_);
lean_dec(v_endExclusive_1554_);
lean_dec(v_startInclusive_1553_);
lean_dec_ref(v_str_1552_);
v___x_1556_ = lean_string_append(v_b_1546_, v___x_1555_);
lean_dec_ref(v___x_1555_);
v_a_1545_ = v_it_1548_;
v_b_1546_ = v___x_1556_;
goto _start;
}
v___jp_1558_:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1560_ = lean_unsigned_to_nat(0u);
v___x_1561_ = lean_string_utf8_byte_size(v_replacement_1544_);
v___x_1562_ = lean_string_utf8_extract(v_replacement_1544_, v___x_1560_, v___x_1561_);
v___x_1563_ = lean_string_append(v_b_1546_, v___x_1562_);
lean_dec_ref(v___x_1562_);
v_a_1545_ = v_it_1559_;
v_b_1546_ = v___x_1563_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_s_1654_, lean_object* v_replacement_1655_, lean_object* v_a_1656_, lean_object* v_b_1657_){
_start:
{
lean_object* v_res_1658_; 
v_res_1658_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2_spec__6___redArg(v_s_1654_, v_replacement_1655_, v_a_1656_, v_b_1657_);
lean_dec_ref(v_replacement_1655_);
return v_res_1658_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1660_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__0));
v___x_1661_ = lean_string_utf8_byte_size(v___x_1660_);
return v___x_1661_;
}
}
static uint8_t _init_l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; uint8_t v___x_1664_; 
v___x_1662_ = lean_unsigned_to_nat(0u);
v___x_1663_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__1, &l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_1664_ = lean_nat_dec_eq(v___x_1663_, v___x_1662_);
return v___x_1664_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1665_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__1, &l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_1666_ = lean_unsigned_to_nat(0u);
v___x_1667_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__0));
v___x_1668_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1667_);
lean_ctor_set(v___x_1668_, 1, v___x_1666_);
lean_ctor_set(v___x_1668_, 2, v___x_1665_);
return v___x_1668_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_1669_; lean_object* v___x_1670_; 
v___x_1669_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__3, &l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__3_once, _init_l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__3);
v___x_1670_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1669_);
return v___x_1670_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1671_ = lean_unsigned_to_nat(0u);
v___x_1672_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__4, &l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__4_once, _init_l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__4);
v___x_1673_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__3, &l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__3_once, _init_l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__3);
v___x_1674_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1673_);
lean_ctor_set(v___x_1674_, 1, v___x_1672_);
lean_ctor_set(v___x_1674_, 2, v___x_1671_);
lean_ctor_set(v___x_1674_, 3, v___x_1671_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg(lean_object* v_s_1677_, lean_object* v_replacement_1678_){
_start:
{
lean_object* v___x_1679_; uint8_t v___x_1680_; 
v___x_1679_ = ((lean_object*)(l_Lean_findInternalDocString_x3f___closed__0));
v___x_1680_ = lean_uint8_once(&l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__2, &l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__2_once, _init_l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__2);
if (v___x_1680_ == 0)
{
lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1681_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__5, &l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__5_once, _init_l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__5);
v___x_1682_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2_spec__6___redArg(v_s_1677_, v_replacement_1678_, v___x_1681_, v___x_1679_);
return v___x_1682_;
}
else
{
lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1683_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__6));
v___x_1684_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2_spec__6___redArg(v_s_1677_, v_replacement_1678_, v___x_1683_, v___x_1679_);
return v___x_1684_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_s_1685_, lean_object* v_replacement_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg(v_s_1685_, v_replacement_1686_);
lean_dec_ref(v_replacement_1686_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__2(lean_object* v_as_1695_, size_t v_sz_1696_, size_t v_i_1697_, lean_object* v_b_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_){
_start:
{
uint8_t v___x_1701_; 
v___x_1701_ = lean_usize_dec_lt(v_i_1697_, v_sz_1696_);
if (v___x_1701_ == 0)
{
lean_object* v___x_1702_; 
lean_dec_ref(v___y_1699_);
v___x_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1702_, 0, v_b_1698_);
lean_ctor_set(v___x_1702_, 1, v___y_1700_);
return v___x_1702_;
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1704_; lean_object* v_snd_1705_; lean_object* v___x_1706_; size_t v___x_1707_; size_t v___x_1708_; 
v_a_1703_ = lean_array_uget_borrowed(v_as_1695_, v_i_1697_);
lean_inc_ref(v___y_1699_);
lean_inc(v_a_1703_);
v___x_1704_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1(v_a_1703_, v___y_1699_, v___y_1700_);
v_snd_1705_ = lean_ctor_get(v___x_1704_, 1);
lean_inc(v_snd_1705_);
lean_dec_ref(v___x_1704_);
v___x_1706_ = lean_box(0);
v___x_1707_ = ((size_t)1ULL);
v___x_1708_ = lean_usize_add(v_i_1697_, v___x_1707_);
v_i_1697_ = v___x_1708_;
v_b_1698_ = v___x_1706_;
v___y_1700_ = v_snd_1705_;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__13(void){
_start:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1719_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__12));
v___x_1720_ = ((lean_object*)(l_Lean_findInternalDocString_x3f___closed__0));
v___x_1721_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1720_);
lean_ctor_set(v___x_1721_, 1, v___x_1720_);
lean_ctor_set(v___x_1721_, 2, v___x_1719_);
return v___x_1721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1(lean_object* v_x_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_){
_start:
{
switch(lean_obj_tag(v_x_1723_))
{
case 0:
{
lean_object* v_string_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
lean_dec_ref(v_a_1724_);
v_string_1726_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_string_1726_);
lean_dec_ref(v_x_1723_);
v___x_1727_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_string_1726_);
lean_dec_ref(v_string_1726_);
v___x_1728_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1727_, v_a_1725_);
lean_dec_ref(v___x_1727_);
return v___x_1728_;
}
case 1:
{
lean_object* v_content_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1770_; 
v_content_1729_ = lean_ctor_get(v_x_1723_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v_x_1723_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1731_ = v_x_1723_;
v_isShared_1732_ = v_isSharedCheck_1770_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_content_1729_);
lean_dec(v_x_1723_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1770_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1734_; 
if (v_isShared_1732_ == 0)
{
lean_ctor_set_tag(v___x_1731_, 9);
v___x_1734_ = v___x_1731_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_content_1729_);
v___x_1734_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
lean_object* v___x_1735_; lean_object* v_snd_1736_; lean_object* v_fst_1737_; lean_object* v_fst_1738_; lean_object* v_snd_1739_; uint8_t v_inEmph_1741_; uint8_t v_inBold_1742_; uint8_t v_inLink_1743_; lean_object* v_linePrefix_1744_; lean_object* v___y_1745_; lean_object* v___x_1756_; uint8_t v_inEmph_1757_; 
v___x_1735_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim(lean_box(0), v___x_1734_);
v_snd_1736_ = lean_ctor_get(v___x_1735_, 1);
lean_inc(v_snd_1736_);
v_fst_1737_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_fst_1737_);
lean_dec_ref(v___x_1735_);
v_fst_1738_ = lean_ctor_get(v_snd_1736_, 0);
lean_inc(v_fst_1738_);
v_snd_1739_ = lean_ctor_get(v_snd_1736_, 1);
lean_inc(v_snd_1739_);
lean_dec(v_snd_1736_);
v___x_1756_ = l_Lean_Doc_MarkdownM_push___redArg(v_fst_1737_, v_a_1725_);
lean_dec(v_fst_1737_);
v_inEmph_1757_ = lean_ctor_get_uint8(v_a_1724_, sizeof(void*)*1);
if (v_inEmph_1757_ == 0)
{
lean_object* v_snd_1758_; uint8_t v_inBold_1759_; uint8_t v_inLink_1760_; lean_object* v_linePrefix_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v_snd_1764_; 
v_snd_1758_ = lean_ctor_get(v___x_1756_, 1);
lean_inc(v_snd_1758_);
lean_dec_ref(v___x_1756_);
v_inBold_1759_ = lean_ctor_get_uint8(v_a_1724_, sizeof(void*)*1 + 1);
v_inLink_1760_ = lean_ctor_get_uint8(v_a_1724_, sizeof(void*)*1 + 2);
v_linePrefix_1761_ = lean_ctor_get(v_a_1724_, 0);
lean_inc_ref(v_linePrefix_1761_);
lean_dec_ref(v_a_1724_);
v___x_1762_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__0));
v___x_1763_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1762_, v_snd_1758_);
v_snd_1764_ = lean_ctor_get(v___x_1763_, 1);
lean_inc(v_snd_1764_);
lean_dec_ref(v___x_1763_);
v_inEmph_1741_ = v_inEmph_1757_;
v_inBold_1742_ = v_inBold_1759_;
v_inLink_1743_ = v_inLink_1760_;
v_linePrefix_1744_ = v_linePrefix_1761_;
v___y_1745_ = v_snd_1764_;
goto v___jp_1740_;
}
else
{
lean_object* v_snd_1765_; uint8_t v_inBold_1766_; uint8_t v_inLink_1767_; lean_object* v_linePrefix_1768_; 
v_snd_1765_ = lean_ctor_get(v___x_1756_, 1);
lean_inc(v_snd_1765_);
lean_dec_ref(v___x_1756_);
v_inBold_1766_ = lean_ctor_get_uint8(v_a_1724_, sizeof(void*)*1 + 1);
v_inLink_1767_ = lean_ctor_get_uint8(v_a_1724_, sizeof(void*)*1 + 2);
v_linePrefix_1768_ = lean_ctor_get(v_a_1724_, 0);
lean_inc_ref(v_linePrefix_1768_);
lean_dec_ref(v_a_1724_);
v_inEmph_1741_ = v_inEmph_1757_;
v_inBold_1742_ = v_inBold_1766_;
v_inLink_1743_ = v_inLink_1767_;
v_linePrefix_1744_ = v_linePrefix_1768_;
v___y_1745_ = v_snd_1765_;
goto v___jp_1740_;
}
v___jp_1740_:
{
uint8_t v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v___x_1746_ = 1;
v___x_1747_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1747_, 0, v_linePrefix_1744_);
lean_ctor_set_uint8(v___x_1747_, sizeof(void*)*1, v___x_1746_);
lean_ctor_set_uint8(v___x_1747_, sizeof(void*)*1 + 1, v_inBold_1742_);
lean_ctor_set_uint8(v___x_1747_, sizeof(void*)*1 + 2, v_inLink_1743_);
v___x_1748_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1(v_fst_1738_, v___x_1747_, v___y_1745_);
if (v_inEmph_1741_ == 0)
{
lean_object* v_snd_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v_snd_1752_; lean_object* v___x_1753_; 
v_snd_1749_ = lean_ctor_get(v___x_1748_, 1);
lean_inc(v_snd_1749_);
lean_dec_ref(v___x_1748_);
v___x_1750_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__0));
v___x_1751_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1750_, v_snd_1749_);
v_snd_1752_ = lean_ctor_get(v___x_1751_, 1);
lean_inc(v_snd_1752_);
lean_dec_ref(v___x_1751_);
v___x_1753_ = l_Lean_Doc_MarkdownM_push___redArg(v_snd_1739_, v_snd_1752_);
lean_dec(v_snd_1739_);
return v___x_1753_;
}
else
{
lean_object* v_snd_1754_; lean_object* v___x_1755_; 
v_snd_1754_ = lean_ctor_get(v___x_1748_, 1);
lean_inc(v_snd_1754_);
lean_dec_ref(v___x_1748_);
v___x_1755_ = l_Lean_Doc_MarkdownM_push___redArg(v_snd_1739_, v_snd_1754_);
lean_dec(v_snd_1739_);
return v___x_1755_;
}
}
}
}
}
case 2:
{
lean_object* v_content_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1809_; 
v_content_1771_ = lean_ctor_get(v_x_1723_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v_x_1723_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1773_ = v_x_1723_;
v_isShared_1774_ = v_isSharedCheck_1809_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_content_1771_);
lean_dec(v_x_1723_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1809_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
lean_ctor_set_tag(v___x_1773_, 9);
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_content_1771_);
v___x_1776_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
lean_object* v___x_1777_; lean_object* v_snd_1778_; lean_object* v_fst_1779_; lean_object* v_fst_1780_; lean_object* v_snd_1781_; uint8_t v_inBold_1783_; uint8_t v_inLink_1784_; lean_object* v_linePrefix_1785_; lean_object* v___y_1786_; lean_object* v___x_1797_; uint8_t v_inBold_1798_; 
v___x_1777_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim(lean_box(0), v___x_1776_);
v_snd_1778_ = lean_ctor_get(v___x_1777_, 1);
lean_inc(v_snd_1778_);
v_fst_1779_ = lean_ctor_get(v___x_1777_, 0);
lean_inc(v_fst_1779_);
lean_dec_ref(v___x_1777_);
v_fst_1780_ = lean_ctor_get(v_snd_1778_, 0);
lean_inc(v_fst_1780_);
v_snd_1781_ = lean_ctor_get(v_snd_1778_, 1);
lean_inc(v_snd_1781_);
lean_dec(v_snd_1778_);
v___x_1797_ = l_Lean_Doc_MarkdownM_push___redArg(v_fst_1779_, v_a_1725_);
lean_dec(v_fst_1779_);
v_inBold_1798_ = lean_ctor_get_uint8(v_a_1724_, sizeof(void*)*1 + 1);
if (v_inBold_1798_ == 0)
{
lean_object* v_snd_1799_; uint8_t v_inLink_1800_; lean_object* v_linePrefix_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v_snd_1804_; 
v_snd_1799_ = lean_ctor_get(v___x_1797_, 1);
lean_inc(v_snd_1799_);
lean_dec_ref(v___x_1797_);
v_inLink_1800_ = lean_ctor_get_uint8(v_a_1724_, sizeof(void*)*1 + 2);
v_linePrefix_1801_ = lean_ctor_get(v_a_1724_, 0);
lean_inc_ref(v_linePrefix_1801_);
lean_dec_ref(v_a_1724_);
v___x_1802_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__1));
v___x_1803_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1802_, v_snd_1799_);
v_snd_1804_ = lean_ctor_get(v___x_1803_, 1);
lean_inc(v_snd_1804_);
lean_dec_ref(v___x_1803_);
v_inBold_1783_ = v_inBold_1798_;
v_inLink_1784_ = v_inLink_1800_;
v_linePrefix_1785_ = v_linePrefix_1801_;
v___y_1786_ = v_snd_1804_;
goto v___jp_1782_;
}
else
{
lean_object* v_snd_1805_; uint8_t v_inLink_1806_; lean_object* v_linePrefix_1807_; 
v_snd_1805_ = lean_ctor_get(v___x_1797_, 1);
lean_inc(v_snd_1805_);
lean_dec_ref(v___x_1797_);
v_inLink_1806_ = lean_ctor_get_uint8(v_a_1724_, sizeof(void*)*1 + 2);
v_linePrefix_1807_ = lean_ctor_get(v_a_1724_, 0);
lean_inc_ref(v_linePrefix_1807_);
lean_dec_ref(v_a_1724_);
v_inBold_1783_ = v_inBold_1798_;
v_inLink_1784_ = v_inLink_1806_;
v_linePrefix_1785_ = v_linePrefix_1807_;
v___y_1786_ = v_snd_1805_;
goto v___jp_1782_;
}
v___jp_1782_:
{
uint8_t v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1787_ = 1;
v___x_1788_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1788_, 0, v_linePrefix_1785_);
lean_ctor_set_uint8(v___x_1788_, sizeof(void*)*1, v___x_1787_);
lean_ctor_set_uint8(v___x_1788_, sizeof(void*)*1 + 1, v_inBold_1783_);
lean_ctor_set_uint8(v___x_1788_, sizeof(void*)*1 + 2, v_inLink_1784_);
v___x_1789_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1(v_fst_1780_, v___x_1788_, v___y_1786_);
if (v_inBold_1783_ == 0)
{
lean_object* v_snd_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v_snd_1793_; lean_object* v___x_1794_; 
v_snd_1790_ = lean_ctor_get(v___x_1789_, 1);
lean_inc(v_snd_1790_);
lean_dec_ref(v___x_1789_);
v___x_1791_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__1));
v___x_1792_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1791_, v_snd_1790_);
v_snd_1793_ = lean_ctor_get(v___x_1792_, 1);
lean_inc(v_snd_1793_);
lean_dec_ref(v___x_1792_);
v___x_1794_ = l_Lean_Doc_MarkdownM_push___redArg(v_snd_1781_, v_snd_1793_);
lean_dec(v_snd_1781_);
return v___x_1794_;
}
else
{
lean_object* v_snd_1795_; lean_object* v___x_1796_; 
v_snd_1795_ = lean_ctor_get(v___x_1789_, 1);
lean_inc(v_snd_1795_);
lean_dec_ref(v___x_1789_);
v___x_1796_ = l_Lean_Doc_MarkdownM_push___redArg(v_snd_1781_, v_snd_1795_);
lean_dec(v_snd_1781_);
return v___x_1796_;
}
}
}
}
}
case 3:
{
lean_object* v_string_1810_; lean_object* v___y_1812_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v_fst_1817_; uint8_t v___x_1818_; 
lean_dec_ref(v_a_1724_);
v_string_1810_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_string_1810_);
lean_dec_ref(v_x_1723_);
v___x_1815_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__2));
v___x_1816_ = l_Lean_Doc_MarkdownM_endsWith___redArg(v___x_1815_, v_a_1725_);
v_fst_1817_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_fst_1817_);
v___x_1818_ = lean_unbox(v_fst_1817_);
lean_dec(v_fst_1817_);
if (v___x_1818_ == 0)
{
lean_object* v_snd_1819_; 
v_snd_1819_ = lean_ctor_get(v___x_1816_, 1);
lean_inc(v_snd_1819_);
lean_dec_ref(v___x_1816_);
v___y_1812_ = v_snd_1819_;
goto v___jp_1811_;
}
else
{
lean_object* v_snd_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v_snd_1823_; 
v_snd_1820_ = lean_ctor_get(v___x_1816_, 1);
lean_inc(v_snd_1820_);
lean_dec_ref(v___x_1816_);
v___x_1821_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__3));
v___x_1822_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1821_, v_snd_1820_);
v_snd_1823_ = lean_ctor_get(v___x_1822_, 1);
lean_inc(v_snd_1823_);
lean_dec_ref(v___x_1822_);
v___y_1812_ = v_snd_1823_;
goto v___jp_1811_;
}
v___jp_1811_:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1813_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode(v_string_1810_);
v___x_1814_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1813_, v___y_1812_);
lean_dec_ref(v___x_1813_);
return v___x_1814_;
}
}
case 4:
{
uint8_t v_mode_1824_; 
lean_dec_ref(v_a_1724_);
v_mode_1824_ = lean_ctor_get_uint8(v_x_1723_, sizeof(void*)*1);
if (v_mode_1824_ == 0)
{
lean_object* v_string_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v_string_1825_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_string_1825_);
lean_dec_ref(v_x_1723_);
v___x_1826_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__4));
v___x_1827_ = lean_string_append(v___x_1826_, v_string_1825_);
lean_dec_ref(v_string_1825_);
v___x_1828_ = lean_string_append(v___x_1827_, v___x_1826_);
v___x_1829_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1828_, v_a_1725_);
lean_dec_ref(v___x_1828_);
return v___x_1829_;
}
else
{
lean_object* v_string_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v_string_1830_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_string_1830_);
lean_dec_ref(v_x_1723_);
v___x_1831_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__5));
v___x_1832_ = lean_string_append(v___x_1831_, v_string_1830_);
lean_dec_ref(v_string_1830_);
v___x_1833_ = lean_string_append(v___x_1832_, v___x_1831_);
v___x_1834_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1833_, v_a_1725_);
lean_dec_ref(v___x_1833_);
return v___x_1834_;
}
}
case 5:
{
lean_object* v_string_1835_; lean_object* v_linePrefix_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v_string_1835_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_string_1835_);
lean_dec_ref(v_x_1723_);
v_linePrefix_1836_ = lean_ctor_get(v_a_1724_, 0);
lean_inc_ref(v_linePrefix_1836_);
lean_dec_ref(v_a_1724_);
v___x_1837_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__0));
v___x_1838_ = lean_string_append(v___x_1837_, v_linePrefix_1836_);
lean_dec_ref(v_linePrefix_1836_);
v___x_1839_ = lean_unsigned_to_nat(0u);
v___x_1840_ = lean_string_utf8_byte_size(v_string_1835_);
v___x_1841_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1841_, 0, v_string_1835_);
lean_ctor_set(v___x_1841_, 1, v___x_1839_);
lean_ctor_set(v___x_1841_, 2, v___x_1840_);
v___x_1842_ = l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg(v___x_1841_, v___x_1838_);
lean_dec_ref(v___x_1838_);
v___x_1843_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1842_, v_a_1725_);
lean_dec_ref(v___x_1842_);
return v___x_1843_;
}
case 6:
{
uint8_t v_inLink_1844_; 
v_inLink_1844_ = lean_ctor_get_uint8(v_a_1724_, sizeof(void*)*1 + 2);
if (v_inLink_1844_ == 0)
{
lean_object* v_content_1845_; lean_object* v_url_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v_snd_1849_; lean_object* v___x_1850_; size_t v_sz_1851_; size_t v___x_1852_; lean_object* v___x_1853_; lean_object* v_snd_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v_snd_1857_; lean_object* v___x_1858_; lean_object* v_snd_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; 
v_content_1845_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_content_1845_);
v_url_1846_ = lean_ctor_get(v_x_1723_, 1);
lean_inc_ref(v_url_1846_);
lean_dec_ref(v_x_1723_);
v___x_1847_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__6));
v___x_1848_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1847_, v_a_1725_);
v_snd_1849_ = lean_ctor_get(v___x_1848_, 1);
lean_inc(v_snd_1849_);
lean_dec_ref(v___x_1848_);
v___x_1850_ = lean_box(0);
v_sz_1851_ = lean_array_size(v_content_1845_);
v___x_1852_ = ((size_t)0ULL);
v___x_1853_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__2(v_content_1845_, v_sz_1851_, v___x_1852_, v___x_1850_, v_a_1724_, v_snd_1849_);
lean_dec_ref(v_content_1845_);
v_snd_1854_ = lean_ctor_get(v___x_1853_, 1);
lean_inc(v_snd_1854_);
lean_dec_ref(v___x_1853_);
v___x_1855_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__7));
v___x_1856_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1855_, v_snd_1854_);
v_snd_1857_ = lean_ctor_get(v___x_1856_, 1);
lean_inc(v_snd_1857_);
lean_dec_ref(v___x_1856_);
v___x_1858_ = l_Lean_Doc_MarkdownM_push___redArg(v_url_1846_, v_snd_1857_);
lean_dec_ref(v_url_1846_);
v_snd_1859_ = lean_ctor_get(v___x_1858_, 1);
lean_inc(v_snd_1859_);
lean_dec_ref(v___x_1858_);
v___x_1860_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__8));
v___x_1861_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1860_, v_snd_1859_);
return v___x_1861_;
}
else
{
lean_object* v_content_1862_; lean_object* v___x_1863_; size_t v_sz_1864_; size_t v___x_1865_; lean_object* v___x_1866_; lean_object* v_snd_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1874_; 
v_content_1862_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_content_1862_);
lean_dec_ref(v_x_1723_);
v___x_1863_ = lean_box(0);
v_sz_1864_ = lean_array_size(v_content_1862_);
v___x_1865_ = ((size_t)0ULL);
v___x_1866_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__2(v_content_1862_, v_sz_1864_, v___x_1865_, v___x_1863_, v_a_1724_, v_a_1725_);
lean_dec_ref(v_content_1862_);
v_snd_1867_ = lean_ctor_get(v___x_1866_, 1);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1874_ == 0)
{
lean_object* v_unused_1875_; 
v_unused_1875_ = lean_ctor_get(v___x_1866_, 0);
lean_dec(v_unused_1875_);
v___x_1869_ = v___x_1866_;
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_snd_1867_);
lean_dec(v___x_1866_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
lean_ctor_set(v___x_1869_, 0, v___x_1863_);
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v___x_1863_);
lean_ctor_set(v_reuseFailAlloc_1873_, 1, v_snd_1867_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
return v___x_1872_;
}
}
}
}
case 7:
{
lean_object* v_name_1876_; lean_object* v_content_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v_snd_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1922_; 
lean_dec_ref(v_a_1724_);
v_name_1876_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_name_1876_);
v_content_1877_ = lean_ctor_get(v_x_1723_, 1);
lean_inc_ref(v_content_1877_);
lean_dec_ref(v_x_1723_);
v___x_1878_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__9));
v___x_1879_ = lean_string_append(v___x_1878_, v_name_1876_);
v___x_1880_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__10));
v___x_1881_ = lean_string_append(v___x_1879_, v___x_1880_);
v___x_1882_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1881_, v_a_1725_);
lean_dec_ref(v___x_1881_);
v_snd_1883_ = lean_ctor_get(v___x_1882_, 1);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1922_ == 0)
{
lean_object* v_unused_1923_; 
v_unused_1923_ = lean_ctor_get(v___x_1882_, 0);
lean_dec(v_unused_1923_);
v___x_1885_ = v___x_1882_;
v_isShared_1886_ = v_isSharedCheck_1922_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_snd_1883_);
lean_dec(v___x_1882_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1922_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v_snd_1888_; lean_object* v___y_1907_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; uint8_t v___x_1913_; 
v___x_1909_ = lean_unsigned_to_nat(0u);
v___x_1910_ = lean_array_get_size(v_content_1877_);
v___x_1911_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__11));
v___x_1912_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__13, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__13_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__13);
v___x_1913_ = lean_nat_dec_lt(v___x_1909_, v___x_1910_);
if (v___x_1913_ == 0)
{
lean_dec_ref(v_content_1877_);
v_snd_1888_ = v___x_1912_;
goto v___jp_1887_;
}
else
{
lean_object* v___x_1914_; uint8_t v___x_1915_; 
v___x_1914_ = lean_box(0);
v___x_1915_ = lean_nat_dec_le(v___x_1910_, v___x_1910_);
if (v___x_1915_ == 0)
{
if (v___x_1913_ == 0)
{
lean_dec_ref(v_content_1877_);
v_snd_1888_ = v___x_1912_;
goto v___jp_1887_;
}
else
{
size_t v___x_1916_; size_t v___x_1917_; lean_object* v___x_1918_; 
v___x_1916_ = ((size_t)0ULL);
v___x_1917_ = lean_usize_of_nat(v___x_1910_);
v___x_1918_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__3(v_content_1877_, v___x_1916_, v___x_1917_, v___x_1914_, v___x_1911_, v___x_1912_);
lean_dec_ref(v_content_1877_);
v___y_1907_ = v___x_1918_;
goto v___jp_1906_;
}
}
else
{
size_t v___x_1919_; size_t v___x_1920_; lean_object* v___x_1921_; 
v___x_1919_ = ((size_t)0ULL);
v___x_1920_ = lean_usize_of_nat(v___x_1910_);
v___x_1921_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__3(v_content_1877_, v___x_1919_, v___x_1920_, v___x_1914_, v___x_1911_, v___x_1912_);
lean_dec_ref(v_content_1877_);
v___y_1907_ = v___x_1921_;
goto v___jp_1906_;
}
}
v___jp_1887_:
{
lean_object* v_priorBlocks_1889_; lean_object* v_currentBlock_1890_; lean_object* v_footnotes_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1905_; 
v_priorBlocks_1889_ = lean_ctor_get(v_snd_1883_, 0);
v_currentBlock_1890_ = lean_ctor_get(v_snd_1883_, 1);
v_footnotes_1891_ = lean_ctor_get(v_snd_1883_, 2);
v_isSharedCheck_1905_ = !lean_is_exclusive(v_snd_1883_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1893_ = v_snd_1883_;
v_isShared_1894_ = v_isSharedCheck_1905_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_footnotes_1891_);
lean_inc(v_currentBlock_1890_);
lean_inc(v_priorBlocks_1889_);
lean_dec(v_snd_1883_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1905_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1898_; 
v___x_1895_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_State_render(v_snd_1888_);
v___x_1896_ = lean_box(0);
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 1, v___x_1895_);
lean_ctor_set(v___x_1885_, 0, v_name_1876_);
v___x_1898_ = v___x_1885_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_name_1876_);
lean_ctor_set(v_reuseFailAlloc_1904_, 1, v___x_1895_);
v___x_1898_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
lean_object* v___x_1899_; lean_object* v___x_1901_; 
v___x_1899_ = lean_array_push(v_footnotes_1891_, v___x_1898_);
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 2, v___x_1899_);
v___x_1901_ = v___x_1893_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_priorBlocks_1889_);
lean_ctor_set(v_reuseFailAlloc_1903_, 1, v_currentBlock_1890_);
lean_ctor_set(v_reuseFailAlloc_1903_, 2, v___x_1899_);
v___x_1901_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
lean_object* v___x_1902_; 
v___x_1902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1896_);
lean_ctor_set(v___x_1902_, 1, v___x_1901_);
return v___x_1902_;
}
}
}
}
v___jp_1906_:
{
lean_object* v_snd_1908_; 
v_snd_1908_ = lean_ctor_get(v___y_1907_, 1);
lean_inc(v_snd_1908_);
lean_dec_ref(v___y_1907_);
v_snd_1888_ = v_snd_1908_;
goto v___jp_1887_;
}
}
}
case 8:
{
lean_object* v_alt_1924_; lean_object* v_url_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
lean_dec_ref(v_a_1724_);
v_alt_1924_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_alt_1924_);
v_url_1925_ = lean_ctor_get(v_x_1723_, 1);
lean_inc_ref(v_url_1925_);
lean_dec_ref(v_x_1723_);
v___x_1926_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__14));
v___x_1927_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_alt_1924_);
lean_dec_ref(v_alt_1924_);
v___x_1928_ = lean_string_append(v___x_1926_, v___x_1927_);
lean_dec_ref(v___x_1927_);
v___x_1929_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__7));
v___x_1930_ = lean_string_append(v___x_1928_, v___x_1929_);
v___x_1931_ = lean_string_append(v___x_1930_, v_url_1925_);
lean_dec_ref(v_url_1925_);
v___x_1932_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__8));
v___x_1933_ = lean_string_append(v___x_1931_, v___x_1932_);
v___x_1934_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_1933_, v_a_1725_);
lean_dec_ref(v___x_1933_);
return v___x_1934_;
}
case 9:
{
lean_object* v_content_1935_; lean_object* v___x_1936_; size_t v_sz_1937_; size_t v___x_1938_; lean_object* v___x_1939_; lean_object* v_snd_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1947_; 
v_content_1935_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_content_1935_);
lean_dec_ref(v_x_1723_);
v___x_1936_ = lean_box(0);
v_sz_1937_ = lean_array_size(v_content_1935_);
v___x_1938_ = ((size_t)0ULL);
v___x_1939_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__2(v_content_1935_, v_sz_1937_, v___x_1938_, v___x_1936_, v_a_1724_, v_a_1725_);
lean_dec_ref(v_content_1935_);
v_snd_1940_ = lean_ctor_get(v___x_1939_, 1);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1947_ == 0)
{
lean_object* v_unused_1948_; 
v_unused_1948_ = lean_ctor_get(v___x_1939_, 0);
lean_dec(v_unused_1948_);
v___x_1942_ = v___x_1939_;
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_snd_1940_);
lean_dec(v___x_1939_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1945_; 
if (v_isShared_1943_ == 0)
{
lean_ctor_set(v___x_1942_, 0, v___x_1936_);
v___x_1945_ = v___x_1942_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1936_);
lean_ctor_set(v_reuseFailAlloc_1946_, 1, v_snd_1940_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
default: 
{
lean_object* v_content_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; uint8_t v___x_1953_; 
v_content_1949_ = lean_ctor_get(v_x_1723_, 1);
lean_inc_ref(v_content_1949_);
lean_dec_ref(v_x_1723_);
v___x_1950_ = lean_unsigned_to_nat(0u);
v___x_1951_ = lean_array_get_size(v_content_1949_);
v___x_1952_ = lean_box(0);
v___x_1953_ = lean_nat_dec_lt(v___x_1950_, v___x_1951_);
if (v___x_1953_ == 0)
{
lean_object* v___x_1954_; 
lean_dec_ref(v_content_1949_);
lean_dec_ref(v_a_1724_);
v___x_1954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1952_);
lean_ctor_set(v___x_1954_, 1, v_a_1725_);
return v___x_1954_;
}
else
{
uint8_t v___x_1955_; 
v___x_1955_ = lean_nat_dec_le(v___x_1951_, v___x_1951_);
if (v___x_1955_ == 0)
{
if (v___x_1953_ == 0)
{
lean_object* v___x_1956_; 
lean_dec_ref(v_content_1949_);
lean_dec_ref(v_a_1724_);
v___x_1956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1952_);
lean_ctor_set(v___x_1956_, 1, v_a_1725_);
return v___x_1956_;
}
else
{
size_t v___x_1957_; size_t v___x_1958_; lean_object* v___x_1959_; 
v___x_1957_ = ((size_t)0ULL);
v___x_1958_ = lean_usize_of_nat(v___x_1951_);
v___x_1959_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__3(v_content_1949_, v___x_1957_, v___x_1958_, v___x_1952_, v_a_1724_, v_a_1725_);
lean_dec_ref(v_content_1949_);
return v___x_1959_;
}
}
else
{
size_t v___x_1960_; size_t v___x_1961_; lean_object* v___x_1962_; 
v___x_1960_ = ((size_t)0ULL);
v___x_1961_ = lean_usize_of_nat(v___x_1951_);
v___x_1962_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__3(v_content_1949_, v___x_1960_, v___x_1961_, v___x_1952_, v_a_1724_, v_a_1725_);
lean_dec_ref(v_content_1949_);
return v___x_1962_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__3(lean_object* v_as_1963_, size_t v_i_1964_, size_t v_stop_1965_, lean_object* v_b_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_){
_start:
{
uint8_t v___x_1969_; 
v___x_1969_ = lean_usize_dec_eq(v_i_1964_, v_stop_1965_);
if (v___x_1969_ == 0)
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v_fst_1972_; lean_object* v_snd_1973_; size_t v___x_1974_; size_t v___x_1975_; 
v___x_1970_ = lean_array_uget_borrowed(v_as_1963_, v_i_1964_);
lean_inc_ref(v___y_1967_);
lean_inc(v___x_1970_);
v___x_1971_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1(v___x_1970_, v___y_1967_, v___y_1968_);
v_fst_1972_ = lean_ctor_get(v___x_1971_, 0);
lean_inc(v_fst_1972_);
v_snd_1973_ = lean_ctor_get(v___x_1971_, 1);
lean_inc(v_snd_1973_);
lean_dec_ref(v___x_1971_);
v___x_1974_ = ((size_t)1ULL);
v___x_1975_ = lean_usize_add(v_i_1964_, v___x_1974_);
v_i_1964_ = v___x_1975_;
v_b_1966_ = v_fst_1972_;
v___y_1968_ = v_snd_1973_;
goto _start;
}
else
{
lean_object* v___x_1977_; 
lean_dec_ref(v___y_1967_);
v___x_1977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1977_, 0, v_b_1966_);
lean_ctor_set(v___x_1977_, 1, v___y_1968_);
return v___x_1977_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__3___boxed(lean_object* v_as_1978_, lean_object* v_i_1979_, lean_object* v_stop_1980_, lean_object* v_b_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_){
_start:
{
size_t v_i_boxed_1984_; size_t v_stop_boxed_1985_; lean_object* v_res_1986_; 
v_i_boxed_1984_ = lean_unbox_usize(v_i_1979_);
lean_dec(v_i_1979_);
v_stop_boxed_1985_ = lean_unbox_usize(v_stop_1980_);
lean_dec(v_stop_1980_);
v_res_1986_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__3(v_as_1978_, v_i_boxed_1984_, v_stop_boxed_1985_, v_b_1981_, v___y_1982_, v___y_1983_);
lean_dec_ref(v_as_1978_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__2___boxed(lean_object* v_as_1987_, lean_object* v_sz_1988_, lean_object* v_i_1989_, lean_object* v_b_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_){
_start:
{
size_t v_sz_boxed_1993_; size_t v_i_boxed_1994_; lean_object* v_res_1995_; 
v_sz_boxed_1993_ = lean_unbox_usize(v_sz_1988_);
lean_dec(v_sz_1988_);
v_i_boxed_1994_ = lean_unbox_usize(v_i_1989_);
lean_dec(v_i_1989_);
v_res_1995_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__2(v_as_1987_, v_sz_boxed_1993_, v_i_boxed_1994_, v_b_1990_, v___y_1991_, v___y_1992_);
lean_dec_ref(v_as_1987_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__2(lean_object* v_as_1998_, size_t v_sz_1999_, size_t v_i_2000_, lean_object* v_b_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_){
_start:
{
uint8_t v___x_2004_; 
v___x_2004_ = lean_usize_dec_lt(v_i_2000_, v_sz_1999_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2005_; 
lean_dec_ref(v___y_2002_);
v___x_2005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2005_, 0, v_b_2001_);
lean_ctor_set(v___x_2005_, 1, v___y_2003_);
return v___x_2005_;
}
else
{
lean_object* v_a_2006_; lean_object* v___x_2007_; lean_object* v_snd_2008_; lean_object* v___x_2009_; size_t v___x_2010_; size_t v___x_2011_; 
v_a_2006_ = lean_array_uget_borrowed(v_as_1998_, v_i_2000_);
lean_inc_ref(v___y_2002_);
lean_inc(v_a_2006_);
v___x_2007_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1(v_a_2006_, v___y_2002_, v___y_2003_);
v_snd_2008_ = lean_ctor_get(v___x_2007_, 1);
lean_inc(v_snd_2008_);
lean_dec_ref(v___x_2007_);
v___x_2009_ = lean_box(0);
v___x_2010_ = ((size_t)1ULL);
v___x_2011_ = lean_usize_add(v_i_2000_, v___x_2010_);
v_i_2000_ = v___x_2011_;
v_b_2001_ = v___x_2009_;
v___y_2003_ = v_snd_2008_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5(lean_object* v_as_2013_, size_t v_sz_2014_, size_t v_i_2015_, lean_object* v_b_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_){
_start:
{
uint8_t v___x_2019_; 
v___x_2019_ = lean_usize_dec_lt(v_i_2015_, v_sz_2014_);
if (v___x_2019_ == 0)
{
lean_object* v___x_2020_; 
lean_dec_ref(v___y_2017_);
v___x_2020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2020_, 0, v_b_2016_);
lean_ctor_set(v___x_2020_, 1, v___y_2018_);
return v___x_2020_;
}
else
{
uint8_t v_inEmph_2021_; uint8_t v_inBold_2022_; uint8_t v_inLink_2023_; lean_object* v_linePrefix_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v_snd_2028_; lean_object* v___x_2029_; lean_object* v_a_2030_; size_t v_sz_2031_; size_t v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v_snd_2037_; size_t v___x_2038_; size_t v___x_2039_; 
v_inEmph_2021_ = lean_ctor_get_uint8(v___y_2017_, sizeof(void*)*1);
v_inBold_2022_ = lean_ctor_get_uint8(v___y_2017_, sizeof(void*)*1 + 1);
v_inLink_2023_ = lean_ctor_get_uint8(v___y_2017_, sizeof(void*)*1 + 2);
v_linePrefix_2024_ = lean_ctor_get(v___y_2017_, 0);
v___x_2025_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5___closed__0));
lean_inc_ref(v_linePrefix_2024_);
v___x_2026_ = lean_string_append(v_linePrefix_2024_, v___x_2025_);
v___x_2027_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_2026_, v___y_2018_);
lean_dec_ref(v___x_2026_);
v_snd_2028_ = lean_ctor_get(v___x_2027_, 1);
lean_inc(v_snd_2028_);
lean_dec_ref(v___x_2027_);
v___x_2029_ = lean_box(0);
v_a_2030_ = lean_array_uget_borrowed(v_as_2013_, v_i_2015_);
v_sz_2031_ = lean_array_size(v_a_2030_);
v___x_2032_ = ((size_t)0ULL);
v___x_2033_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5___closed__1));
lean_inc_ref(v_linePrefix_2024_);
v___x_2034_ = lean_string_append(v_linePrefix_2024_, v___x_2033_);
v___x_2035_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_2035_, 0, v___x_2034_);
lean_ctor_set_uint8(v___x_2035_, sizeof(void*)*1, v_inEmph_2021_);
lean_ctor_set_uint8(v___x_2035_, sizeof(void*)*1 + 1, v_inBold_2022_);
lean_ctor_set_uint8(v___x_2035_, sizeof(void*)*1 + 2, v_inLink_2023_);
v___x_2036_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__2(v_a_2030_, v_sz_2031_, v___x_2032_, v___x_2029_, v___x_2035_, v_snd_2028_);
v_snd_2037_ = lean_ctor_get(v___x_2036_, 1);
lean_inc(v_snd_2037_);
lean_dec_ref(v___x_2036_);
v___x_2038_ = ((size_t)1ULL);
v___x_2039_ = lean_usize_add(v_i_2015_, v___x_2038_);
v_i_2015_ = v___x_2039_;
v_b_2016_ = v___x_2029_;
v___y_2018_ = v_snd_2037_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__6(lean_object* v_as_2042_, size_t v_sz_2043_, size_t v_i_2044_, lean_object* v_b_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
uint8_t v___x_2048_; 
v___x_2048_ = lean_usize_dec_lt(v_i_2044_, v_sz_2043_);
if (v___x_2048_ == 0)
{
lean_object* v___x_2049_; 
lean_dec_ref(v___y_2046_);
v___x_2049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2049_, 0, v_b_2045_);
lean_ctor_set(v___x_2049_, 1, v___y_2047_);
return v___x_2049_;
}
else
{
uint8_t v_inEmph_2050_; uint8_t v_inBold_2051_; uint8_t v_inLink_2052_; lean_object* v_linePrefix_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v_snd_2059_; lean_object* v_a_2060_; lean_object* v___x_2061_; size_t v_sz_2062_; size_t v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v_snd_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; size_t v___x_2071_; size_t v___x_2072_; 
v_inEmph_2050_ = lean_ctor_get_uint8(v___y_2046_, sizeof(void*)*1);
v_inBold_2051_ = lean_ctor_get_uint8(v___y_2046_, sizeof(void*)*1 + 1);
v_inLink_2052_ = lean_ctor_get_uint8(v___y_2046_, sizeof(void*)*1 + 2);
v_linePrefix_2053_ = lean_ctor_get(v___y_2046_, 0);
lean_inc(v_b_2045_);
v___x_2054_ = l_Nat_reprFast(v_b_2045_);
v___x_2055_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__6___closed__0));
v___x_2056_ = lean_string_append(v___x_2054_, v___x_2055_);
lean_inc_ref(v_linePrefix_2053_);
v___x_2057_ = lean_string_append(v_linePrefix_2053_, v___x_2056_);
lean_dec_ref(v___x_2056_);
v___x_2058_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_2057_, v___y_2047_);
lean_dec_ref(v___x_2057_);
v_snd_2059_ = lean_ctor_get(v___x_2058_, 1);
lean_inc(v_snd_2059_);
lean_dec_ref(v___x_2058_);
v_a_2060_ = lean_array_uget_borrowed(v_as_2042_, v_i_2044_);
v___x_2061_ = lean_box(0);
v_sz_2062_ = lean_array_size(v_a_2060_);
v___x_2063_ = ((size_t)0ULL);
v___x_2064_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5___closed__1));
lean_inc_ref(v_linePrefix_2053_);
v___x_2065_ = lean_string_append(v_linePrefix_2053_, v___x_2064_);
v___x_2066_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
lean_ctor_set_uint8(v___x_2066_, sizeof(void*)*1, v_inEmph_2050_);
lean_ctor_set_uint8(v___x_2066_, sizeof(void*)*1 + 1, v_inBold_2051_);
lean_ctor_set_uint8(v___x_2066_, sizeof(void*)*1 + 2, v_inLink_2052_);
v___x_2067_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__2(v_a_2060_, v_sz_2062_, v___x_2063_, v___x_2061_, v___x_2066_, v_snd_2059_);
v_snd_2068_ = lean_ctor_get(v___x_2067_, 1);
lean_inc(v_snd_2068_);
lean_dec_ref(v___x_2067_);
v___x_2069_ = lean_unsigned_to_nat(1u);
v___x_2070_ = lean_nat_add(v_b_2045_, v___x_2069_);
lean_dec(v_b_2045_);
v___x_2071_ = ((size_t)1ULL);
v___x_2072_ = lean_usize_add(v_i_2044_, v___x_2071_);
v_i_2044_ = v___x_2072_;
v_b_2045_ = v___x_2070_;
v___y_2047_ = v_snd_2068_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7(lean_object* v_as_2077_, size_t v_sz_2078_, size_t v_i_2079_, lean_object* v_b_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_){
_start:
{
uint8_t v___x_2083_; 
v___x_2083_ = lean_usize_dec_lt(v_i_2079_, v_sz_2078_);
if (v___x_2083_ == 0)
{
lean_object* v___x_2084_; 
lean_dec_ref(v___y_2081_);
v___x_2084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2084_, 0, v_b_2080_);
lean_ctor_set(v___x_2084_, 1, v___y_2082_);
return v___x_2084_;
}
else
{
uint8_t v_inEmph_2085_; uint8_t v_inBold_2086_; uint8_t v_inLink_2087_; lean_object* v_linePrefix_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v_snd_2092_; lean_object* v_a_2093_; lean_object* v_term_2094_; lean_object* v_desc_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v_snd_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v_snd_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v_snd_2107_; lean_object* v___x_2108_; lean_object* v_snd_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v_snd_2112_; lean_object* v___x_2113_; size_t v___x_2114_; size_t v___x_2115_; 
v_inEmph_2085_ = lean_ctor_get_uint8(v___y_2081_, sizeof(void*)*1);
v_inBold_2086_ = lean_ctor_get_uint8(v___y_2081_, sizeof(void*)*1 + 1);
v_inLink_2087_ = lean_ctor_get_uint8(v___y_2081_, sizeof(void*)*1 + 2);
v_linePrefix_2088_ = lean_ctor_get(v___y_2081_, 0);
v___x_2089_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5___closed__0));
lean_inc_ref(v_linePrefix_2088_);
v___x_2090_ = lean_string_append(v_linePrefix_2088_, v___x_2089_);
v___x_2091_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_2090_, v___y_2082_);
lean_dec_ref(v___x_2090_);
v_snd_2092_ = lean_ctor_get(v___x_2091_, 1);
lean_inc(v_snd_2092_);
lean_dec_ref(v___x_2091_);
v_a_2093_ = lean_array_uget_borrowed(v_as_2077_, v_i_2079_);
v_term_2094_ = lean_ctor_get(v_a_2093_, 0);
v_desc_2095_ = lean_ctor_get(v_a_2093_, 1);
lean_inc_ref(v_term_2094_);
v___x_2096_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2096_, 0, v_term_2094_);
v___x_2097_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5___closed__1));
lean_inc_ref(v_linePrefix_2088_);
v___x_2098_ = lean_string_append(v_linePrefix_2088_, v___x_2097_);
lean_inc_ref(v___x_2098_);
v___x_2099_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_2099_, 0, v___x_2098_);
lean_ctor_set_uint8(v___x_2099_, sizeof(void*)*1, v_inEmph_2085_);
lean_ctor_set_uint8(v___x_2099_, sizeof(void*)*1 + 1, v_inBold_2086_);
lean_ctor_set_uint8(v___x_2099_, sizeof(void*)*1 + 2, v_inLink_2087_);
lean_inc_ref(v___x_2099_);
v___x_2100_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1(v___x_2096_, v___x_2099_, v_snd_2092_);
v_snd_2101_ = lean_ctor_get(v___x_2100_, 1);
lean_inc(v_snd_2101_);
lean_dec_ref(v___x_2100_);
v___x_2102_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7___closed__1));
lean_inc_ref(v___x_2099_);
v___x_2103_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1(v___x_2102_, v___x_2099_, v_snd_2101_);
v_snd_2104_ = lean_ctor_get(v___x_2103_, 1);
lean_inc(v_snd_2104_);
lean_dec_ref(v___x_2103_);
v___x_2105_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__0));
v___x_2106_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_2105_, v_snd_2104_);
v_snd_2107_ = lean_ctor_get(v___x_2106_, 1);
lean_inc(v_snd_2107_);
lean_dec_ref(v___x_2106_);
v___x_2108_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_2098_, v_snd_2107_);
lean_dec_ref(v___x_2098_);
v_snd_2109_ = lean_ctor_get(v___x_2108_, 1);
lean_inc(v_snd_2109_);
lean_dec_ref(v___x_2108_);
lean_inc_ref(v_desc_2095_);
v___x_2110_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2110_, 0, v_desc_2095_);
v___x_2111_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1(v___x_2110_, v___x_2099_, v_snd_2109_);
v_snd_2112_ = lean_ctor_get(v___x_2111_, 1);
lean_inc(v_snd_2112_);
lean_dec_ref(v___x_2111_);
v___x_2113_ = lean_box(0);
v___x_2114_ = ((size_t)1ULL);
v___x_2115_ = lean_usize_add(v_i_2079_, v___x_2114_);
v_i_2079_ = v___x_2115_;
v_b_2080_ = v___x_2113_;
v___y_2082_ = v_snd_2112_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1(lean_object* v_x_2118_, lean_object* v_a_2119_, lean_object* v_a_2120_){
_start:
{
switch(lean_obj_tag(v_x_2118_))
{
case 0:
{
lean_object* v_contents_2121_; lean_object* v___x_2122_; size_t v_sz_2123_; size_t v___x_2124_; lean_object* v___x_2125_; lean_object* v_snd_2126_; lean_object* v___x_2127_; 
v_contents_2121_ = lean_ctor_get(v_x_2118_, 0);
lean_inc_ref(v_contents_2121_);
lean_dec_ref(v_x_2118_);
v___x_2122_ = lean_box(0);
v_sz_2123_ = lean_array_size(v_contents_2121_);
v___x_2124_ = ((size_t)0ULL);
v___x_2125_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__2(v_contents_2121_, v_sz_2123_, v___x_2124_, v___x_2122_, v_a_2119_, v_a_2120_);
lean_dec_ref(v_contents_2121_);
v_snd_2126_ = lean_ctor_get(v___x_2125_, 1);
lean_inc(v_snd_2126_);
lean_dec_ref(v___x_2125_);
v___x_2127_ = l_Lean_Doc_MarkdownM_endBlock___redArg(v_snd_2126_);
return v___x_2127_;
}
case 1:
{
lean_object* v_content_2128_; lean_object* v___y_2130_; lean_object* v___y_2131_; uint8_t v___y_2139_; lean_object* v_currentBlock_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; uint8_t v___x_2146_; 
v_content_2128_ = lean_ctor_get(v_x_2118_, 0);
lean_inc_ref(v_content_2128_);
lean_dec_ref(v_x_2118_);
v_currentBlock_2143_ = lean_ctor_get(v_a_2120_, 1);
v___x_2144_ = lean_string_utf8_byte_size(v_currentBlock_2143_);
v___x_2145_ = lean_unsigned_to_nat(0u);
v___x_2146_ = lean_nat_dec_eq(v___x_2144_, v___x_2145_);
if (v___x_2146_ == 0)
{
lean_object* v___x_2147_; lean_object* v___x_2148_; uint8_t v___x_2149_; 
v___x_2147_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__0));
v___x_2148_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__1, &l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_2149_ = lean_nat_dec_le(v___x_2148_, v___x_2144_);
if (v___x_2149_ == 0)
{
v___y_2139_ = v___x_2146_;
goto v___jp_2138_;
}
else
{
lean_object* v___x_2150_; uint8_t v___x_2151_; 
v___x_2150_ = lean_nat_sub(v___x_2144_, v___x_2148_);
v___x_2151_ = lean_string_memcmp(v_currentBlock_2143_, v___x_2147_, v___x_2150_, v___x_2145_, v___x_2148_);
lean_dec(v___x_2150_);
v___y_2139_ = v___x_2151_;
goto v___jp_2138_;
}
}
else
{
v___y_2139_ = v___x_2146_;
goto v___jp_2138_;
}
v___jp_2129_:
{
lean_object* v_linePrefix_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v_snd_2136_; lean_object* v___x_2137_; 
v_linePrefix_2132_ = lean_ctor_get(v___y_2130_, 0);
lean_inc_ref(v_linePrefix_2132_);
lean_dec_ref(v___y_2130_);
v___x_2133_ = lean_string_length(v_linePrefix_2132_);
lean_dec_ref(v_linePrefix_2132_);
v___x_2134_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCodeBlock(v___x_2133_, v_content_2128_);
lean_dec_ref(v_content_2128_);
v___x_2135_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_2134_, v___y_2131_);
lean_dec_ref(v___x_2134_);
v_snd_2136_ = lean_ctor_get(v___x_2135_, 1);
lean_inc(v_snd_2136_);
lean_dec_ref(v___x_2135_);
v___x_2137_ = l_Lean_Doc_MarkdownM_endBlock___redArg(v_snd_2136_);
return v___x_2137_;
}
v___jp_2138_:
{
if (v___y_2139_ == 0)
{
lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v_snd_2142_; 
v___x_2140_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg___closed__0));
v___x_2141_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_2140_, v_a_2120_);
v_snd_2142_ = lean_ctor_get(v___x_2141_, 1);
lean_inc(v_snd_2142_);
lean_dec_ref(v___x_2141_);
v___y_2130_ = v_a_2119_;
v___y_2131_ = v_snd_2142_;
goto v___jp_2129_;
}
else
{
v___y_2130_ = v_a_2119_;
v___y_2131_ = v_a_2120_;
goto v___jp_2129_;
}
}
}
case 2:
{
lean_object* v_items_2152_; lean_object* v___x_2153_; size_t v_sz_2154_; size_t v___x_2155_; lean_object* v___x_2156_; lean_object* v_snd_2157_; lean_object* v___x_2158_; 
v_items_2152_ = lean_ctor_get(v_x_2118_, 0);
lean_inc_ref(v_items_2152_);
lean_dec_ref(v_x_2118_);
v___x_2153_ = lean_box(0);
v_sz_2154_ = lean_array_size(v_items_2152_);
v___x_2155_ = ((size_t)0ULL);
v___x_2156_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5(v_items_2152_, v_sz_2154_, v___x_2155_, v___x_2153_, v_a_2119_, v_a_2120_);
lean_dec_ref(v_items_2152_);
v_snd_2157_ = lean_ctor_get(v___x_2156_, 1);
lean_inc(v_snd_2157_);
lean_dec_ref(v___x_2156_);
v___x_2158_ = l_Lean_Doc_MarkdownM_endBlock___redArg(v_snd_2157_);
return v___x_2158_;
}
case 3:
{
lean_object* v_start_2159_; lean_object* v_items_2160_; lean_object* v___y_2162_; lean_object* v___x_2168_; lean_object* v___x_2169_; uint8_t v___x_2170_; 
v_start_2159_ = lean_ctor_get(v_x_2118_, 0);
lean_inc(v_start_2159_);
v_items_2160_ = lean_ctor_get(v_x_2118_, 1);
lean_inc_ref(v_items_2160_);
lean_dec_ref(v_x_2118_);
v___x_2168_ = lean_unsigned_to_nat(1u);
v___x_2169_ = l_Int_toNat(v_start_2159_);
lean_dec(v_start_2159_);
v___x_2170_ = lean_nat_dec_le(v___x_2168_, v___x_2169_);
if (v___x_2170_ == 0)
{
lean_dec(v___x_2169_);
v___y_2162_ = v___x_2168_;
goto v___jp_2161_;
}
else
{
v___y_2162_ = v___x_2169_;
goto v___jp_2161_;
}
v___jp_2161_:
{
size_t v_sz_2163_; size_t v___x_2164_; lean_object* v___x_2165_; lean_object* v_snd_2166_; lean_object* v___x_2167_; 
v_sz_2163_ = lean_array_size(v_items_2160_);
v___x_2164_ = ((size_t)0ULL);
v___x_2165_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__6(v_items_2160_, v_sz_2163_, v___x_2164_, v___y_2162_, v_a_2119_, v_a_2120_);
lean_dec_ref(v_items_2160_);
v_snd_2166_ = lean_ctor_get(v___x_2165_, 1);
lean_inc(v_snd_2166_);
lean_dec_ref(v___x_2165_);
v___x_2167_ = l_Lean_Doc_MarkdownM_endBlock___redArg(v_snd_2166_);
return v___x_2167_;
}
}
case 4:
{
lean_object* v_items_2171_; lean_object* v___x_2172_; size_t v_sz_2173_; size_t v___x_2174_; lean_object* v___x_2175_; lean_object* v_snd_2176_; lean_object* v___x_2177_; 
v_items_2171_ = lean_ctor_get(v_x_2118_, 0);
lean_inc_ref(v_items_2171_);
lean_dec_ref(v_x_2118_);
v___x_2172_ = lean_box(0);
v_sz_2173_ = lean_array_size(v_items_2171_);
v___x_2174_ = ((size_t)0ULL);
v___x_2175_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7(v_items_2171_, v_sz_2173_, v___x_2174_, v___x_2172_, v_a_2119_, v_a_2120_);
lean_dec_ref(v_items_2171_);
v_snd_2176_ = lean_ctor_get(v___x_2175_, 1);
lean_inc(v_snd_2176_);
lean_dec_ref(v___x_2175_);
v___x_2177_ = l_Lean_Doc_MarkdownM_endBlock___redArg(v_snd_2176_);
return v___x_2177_;
}
case 5:
{
lean_object* v_items_2178_; uint8_t v_inEmph_2179_; uint8_t v_inBold_2180_; uint8_t v_inLink_2181_; lean_object* v_linePrefix_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2197_; 
v_items_2178_ = lean_ctor_get(v_x_2118_, 0);
lean_inc_ref(v_items_2178_);
lean_dec_ref(v_x_2118_);
v_inEmph_2179_ = lean_ctor_get_uint8(v_a_2119_, sizeof(void*)*1);
v_inBold_2180_ = lean_ctor_get_uint8(v_a_2119_, sizeof(void*)*1 + 1);
v_inLink_2181_ = lean_ctor_get_uint8(v_a_2119_, sizeof(void*)*1 + 2);
v_linePrefix_2182_ = lean_ctor_get(v_a_2119_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v_a_2119_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2184_ = v_a_2119_;
v_isShared_2185_ = v_isSharedCheck_2197_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_linePrefix_2182_);
lean_dec(v_a_2119_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2197_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2186_; size_t v_sz_2187_; size_t v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2192_; 
v___x_2186_ = lean_box(0);
v_sz_2187_ = lean_array_size(v_items_2178_);
v___x_2188_ = ((size_t)0ULL);
v___x_2189_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1___closed__0));
v___x_2190_ = lean_string_append(v_linePrefix_2182_, v___x_2189_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 0, v___x_2190_);
v___x_2192_ = v___x_2184_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v___x_2190_);
lean_ctor_set_uint8(v_reuseFailAlloc_2196_, sizeof(void*)*1, v_inEmph_2179_);
lean_ctor_set_uint8(v_reuseFailAlloc_2196_, sizeof(void*)*1 + 1, v_inBold_2180_);
lean_ctor_set_uint8(v_reuseFailAlloc_2196_, sizeof(void*)*1 + 2, v_inLink_2181_);
v___x_2192_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
lean_object* v___x_2193_; lean_object* v_snd_2194_; lean_object* v___x_2195_; 
v___x_2193_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__2(v_items_2178_, v_sz_2187_, v___x_2188_, v___x_2186_, v___x_2192_, v_a_2120_);
lean_dec_ref(v_items_2178_);
v_snd_2194_ = lean_ctor_get(v___x_2193_, 1);
lean_inc(v_snd_2194_);
lean_dec_ref(v___x_2193_);
v___x_2195_ = l_Lean_Doc_MarkdownM_endBlock___redArg(v_snd_2194_);
return v___x_2195_;
}
}
}
case 6:
{
lean_object* v_content_2198_; lean_object* v___x_2199_; size_t v_sz_2200_; size_t v___x_2201_; lean_object* v___x_2202_; lean_object* v_snd_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2210_; 
v_content_2198_ = lean_ctor_get(v_x_2118_, 0);
lean_inc_ref(v_content_2198_);
lean_dec_ref(v_x_2118_);
v___x_2199_ = lean_box(0);
v_sz_2200_ = lean_array_size(v_content_2198_);
v___x_2201_ = ((size_t)0ULL);
v___x_2202_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__2(v_content_2198_, v_sz_2200_, v___x_2201_, v___x_2199_, v_a_2119_, v_a_2120_);
lean_dec_ref(v_content_2198_);
v_snd_2203_ = lean_ctor_get(v___x_2202_, 1);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2202_);
if (v_isSharedCheck_2210_ == 0)
{
lean_object* v_unused_2211_; 
v_unused_2211_ = lean_ctor_get(v___x_2202_, 0);
lean_dec(v_unused_2211_);
v___x_2205_ = v___x_2202_;
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_snd_2203_);
lean_dec(v___x_2202_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2208_; 
if (v_isShared_2206_ == 0)
{
lean_ctor_set(v___x_2205_, 0, v___x_2199_);
v___x_2208_ = v___x_2205_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v___x_2199_);
lean_ctor_set(v_reuseFailAlloc_2209_, 1, v_snd_2203_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
default: 
{
lean_object* v_content_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2233_; 
v_content_2212_ = lean_ctor_get(v_x_2118_, 1);
v_isSharedCheck_2233_ = !lean_is_exclusive(v_x_2118_);
if (v_isSharedCheck_2233_ == 0)
{
lean_object* v_unused_2234_; 
v_unused_2234_ = lean_ctor_get(v_x_2118_, 0);
lean_dec(v_unused_2234_);
v___x_2214_ = v_x_2118_;
v_isShared_2215_ = v_isSharedCheck_2233_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_content_2212_);
lean_dec(v_x_2118_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2233_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; uint8_t v___x_2219_; 
v___x_2216_ = lean_unsigned_to_nat(0u);
v___x_2217_ = lean_array_get_size(v_content_2212_);
v___x_2218_ = lean_box(0);
v___x_2219_ = lean_nat_dec_lt(v___x_2216_, v___x_2217_);
if (v___x_2219_ == 0)
{
lean_object* v___x_2221_; 
lean_dec_ref(v_content_2212_);
lean_dec_ref(v_a_2119_);
if (v_isShared_2215_ == 0)
{
lean_ctor_set_tag(v___x_2214_, 0);
lean_ctor_set(v___x_2214_, 1, v_a_2120_);
lean_ctor_set(v___x_2214_, 0, v___x_2218_);
v___x_2221_ = v___x_2214_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2218_);
lean_ctor_set(v_reuseFailAlloc_2222_, 1, v_a_2120_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
else
{
uint8_t v___x_2223_; 
v___x_2223_ = lean_nat_dec_le(v___x_2217_, v___x_2217_);
if (v___x_2223_ == 0)
{
if (v___x_2219_ == 0)
{
lean_object* v___x_2225_; 
lean_dec_ref(v_content_2212_);
lean_dec_ref(v_a_2119_);
if (v_isShared_2215_ == 0)
{
lean_ctor_set_tag(v___x_2214_, 0);
lean_ctor_set(v___x_2214_, 1, v_a_2120_);
lean_ctor_set(v___x_2214_, 0, v___x_2218_);
v___x_2225_ = v___x_2214_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v___x_2218_);
lean_ctor_set(v_reuseFailAlloc_2226_, 1, v_a_2120_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
}
}
else
{
size_t v___x_2227_; size_t v___x_2228_; lean_object* v___x_2229_; 
lean_del_object(v___x_2214_);
v___x_2227_ = ((size_t)0ULL);
v___x_2228_ = lean_usize_of_nat(v___x_2217_);
v___x_2229_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__8(v_content_2212_, v___x_2227_, v___x_2228_, v___x_2218_, v_a_2119_, v_a_2120_);
lean_dec_ref(v_content_2212_);
return v___x_2229_;
}
}
else
{
size_t v___x_2230_; size_t v___x_2231_; lean_object* v___x_2232_; 
lean_del_object(v___x_2214_);
v___x_2230_ = ((size_t)0ULL);
v___x_2231_ = lean_usize_of_nat(v___x_2217_);
v___x_2232_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__8(v_content_2212_, v___x_2230_, v___x_2231_, v___x_2218_, v_a_2119_, v_a_2120_);
lean_dec_ref(v_content_2212_);
return v___x_2232_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__8(lean_object* v_as_2235_, size_t v_i_2236_, size_t v_stop_2237_, lean_object* v_b_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_){
_start:
{
uint8_t v___x_2241_; 
v___x_2241_ = lean_usize_dec_eq(v_i_2236_, v_stop_2237_);
if (v___x_2241_ == 0)
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v_fst_2244_; lean_object* v_snd_2245_; size_t v___x_2246_; size_t v___x_2247_; 
v___x_2242_ = lean_array_uget_borrowed(v_as_2235_, v_i_2236_);
lean_inc_ref(v___y_2239_);
lean_inc(v___x_2242_);
v___x_2243_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1(v___x_2242_, v___y_2239_, v___y_2240_);
v_fst_2244_ = lean_ctor_get(v___x_2243_, 0);
lean_inc(v_fst_2244_);
v_snd_2245_ = lean_ctor_get(v___x_2243_, 1);
lean_inc(v_snd_2245_);
lean_dec_ref(v___x_2243_);
v___x_2246_ = ((size_t)1ULL);
v___x_2247_ = lean_usize_add(v_i_2236_, v___x_2246_);
v_i_2236_ = v___x_2247_;
v_b_2238_ = v_fst_2244_;
v___y_2240_ = v_snd_2245_;
goto _start;
}
else
{
lean_object* v___x_2249_; 
lean_dec_ref(v___y_2239_);
v___x_2249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2249_, 0, v_b_2238_);
lean_ctor_set(v___x_2249_, 1, v___y_2240_);
return v___x_2249_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__8___boxed(lean_object* v_as_2250_, lean_object* v_i_2251_, lean_object* v_stop_2252_, lean_object* v_b_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
size_t v_i_boxed_2256_; size_t v_stop_boxed_2257_; lean_object* v_res_2258_; 
v_i_boxed_2256_ = lean_unbox_usize(v_i_2251_);
lean_dec(v_i_2251_);
v_stop_boxed_2257_ = lean_unbox_usize(v_stop_2252_);
lean_dec(v_stop_2252_);
v_res_2258_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__8(v_as_2250_, v_i_boxed_2256_, v_stop_boxed_2257_, v_b_2253_, v___y_2254_, v___y_2255_);
lean_dec_ref(v_as_2250_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__2___boxed(lean_object* v_as_2259_, lean_object* v_sz_2260_, lean_object* v_i_2261_, lean_object* v_b_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_){
_start:
{
size_t v_sz_boxed_2265_; size_t v_i_boxed_2266_; lean_object* v_res_2267_; 
v_sz_boxed_2265_ = lean_unbox_usize(v_sz_2260_);
lean_dec(v_sz_2260_);
v_i_boxed_2266_ = lean_unbox_usize(v_i_2261_);
lean_dec(v_i_2261_);
v_res_2267_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__2(v_as_2259_, v_sz_boxed_2265_, v_i_boxed_2266_, v_b_2262_, v___y_2263_, v___y_2264_);
lean_dec_ref(v_as_2259_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5___boxed(lean_object* v_as_2268_, lean_object* v_sz_2269_, lean_object* v_i_2270_, lean_object* v_b_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_){
_start:
{
size_t v_sz_boxed_2274_; size_t v_i_boxed_2275_; lean_object* v_res_2276_; 
v_sz_boxed_2274_ = lean_unbox_usize(v_sz_2269_);
lean_dec(v_sz_2269_);
v_i_boxed_2275_ = lean_unbox_usize(v_i_2270_);
lean_dec(v_i_2270_);
v_res_2276_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__5(v_as_2268_, v_sz_boxed_2274_, v_i_boxed_2275_, v_b_2271_, v___y_2272_, v___y_2273_);
lean_dec_ref(v_as_2268_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__6___boxed(lean_object* v_as_2277_, lean_object* v_sz_2278_, lean_object* v_i_2279_, lean_object* v_b_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_){
_start:
{
size_t v_sz_boxed_2283_; size_t v_i_boxed_2284_; lean_object* v_res_2285_; 
v_sz_boxed_2283_ = lean_unbox_usize(v_sz_2278_);
lean_dec(v_sz_2278_);
v_i_boxed_2284_ = lean_unbox_usize(v_i_2279_);
lean_dec(v_i_2279_);
v_res_2285_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__6(v_as_2277_, v_sz_boxed_2283_, v_i_boxed_2284_, v_b_2280_, v___y_2281_, v___y_2282_);
lean_dec_ref(v_as_2277_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7___boxed(lean_object* v_as_2286_, lean_object* v_sz_2287_, lean_object* v_i_2288_, lean_object* v_b_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_){
_start:
{
size_t v_sz_boxed_2292_; size_t v_i_boxed_2293_; lean_object* v_res_2294_; 
v_sz_boxed_2292_ = lean_unbox_usize(v_sz_2287_);
lean_dec(v_sz_2287_);
v_i_boxed_2293_ = lean_unbox_usize(v_i_2288_);
lean_dec(v_i_2288_);
v_res_2294_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__1_spec__7(v_as_2286_, v_sz_boxed_2292_, v_i_boxed_2293_, v_b_2289_, v___y_2290_, v___y_2291_);
lean_dec_ref(v_as_2286_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__0(lean_object* v_x_2295_, lean_object* v_x_2296_){
_start:
{
lean_object* v_zero_2297_; uint8_t v_isZero_2298_; 
v_zero_2297_ = lean_unsigned_to_nat(0u);
v_isZero_2298_ = lean_nat_dec_eq(v_x_2295_, v_zero_2297_);
if (v_isZero_2298_ == 1)
{
lean_dec(v_x_2295_);
return v_x_2296_;
}
else
{
uint32_t v___x_2299_; lean_object* v_one_2300_; lean_object* v_n_2301_; lean_object* v___x_2302_; 
v___x_2299_ = 35;
v_one_2300_ = lean_unsigned_to_nat(1u);
v_n_2301_ = lean_nat_sub(v_x_2295_, v_one_2300_);
lean_dec(v_x_2295_);
v___x_2302_ = lean_string_push(v_x_2296_, v___x_2299_);
v_x_2295_ = v_n_2301_;
v_x_2296_ = v___x_2302_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___redArg(lean_object* v_level_2305_, lean_object* v_part_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_){
_start:
{
lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v_snd_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v_snd_2317_; lean_object* v_title_2318_; lean_object* v_content_2319_; lean_object* v_subParts_2320_; lean_object* v___x_2321_; size_t v_sz_2322_; size_t v___x_2323_; lean_object* v___x_2324_; lean_object* v_snd_2325_; lean_object* v___x_2326_; lean_object* v_snd_2327_; size_t v_sz_2328_; lean_object* v___x_2329_; lean_object* v_snd_2330_; lean_object* v___x_2331_; lean_object* v_snd_2332_; size_t v_sz_2333_; lean_object* v___x_2334_; lean_object* v_snd_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2342_; 
v___x_2309_ = ((lean_object*)(l_Lean_findInternalDocString_x3f___closed__0));
v___x_2310_ = lean_unsigned_to_nat(1u);
v___x_2311_ = lean_nat_add(v_level_2305_, v___x_2310_);
lean_inc(v___x_2311_);
v___x_2312_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__0(v___x_2311_, v___x_2309_);
v___x_2313_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_2312_, v_a_2308_);
lean_dec_ref(v___x_2312_);
v_snd_2314_ = lean_ctor_get(v___x_2313_, 1);
lean_inc(v_snd_2314_);
lean_dec_ref(v___x_2313_);
v___x_2315_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___redArg___closed__0));
v___x_2316_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_2315_, v_snd_2314_);
v_snd_2317_ = lean_ctor_get(v___x_2316_, 1);
lean_inc(v_snd_2317_);
lean_dec_ref(v___x_2316_);
v_title_2318_ = lean_ctor_get(v_part_2306_, 0);
v_content_2319_ = lean_ctor_get(v_part_2306_, 3);
v_subParts_2320_ = lean_ctor_get(v_part_2306_, 4);
v___x_2321_ = lean_box(0);
v_sz_2322_ = lean_array_size(v_title_2318_);
v___x_2323_ = ((size_t)0ULL);
lean_inc_ref(v_a_2307_);
v___x_2324_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__2(v_title_2318_, v_sz_2322_, v___x_2323_, v___x_2321_, v_a_2307_, v_snd_2317_);
v_snd_2325_ = lean_ctor_get(v___x_2324_, 1);
lean_inc(v_snd_2325_);
lean_dec_ref(v___x_2324_);
v___x_2326_ = l_Lean_Doc_MarkdownM_endBlock___redArg(v_snd_2325_);
v_snd_2327_ = lean_ctor_get(v___x_2326_, 1);
lean_inc(v_snd_2327_);
lean_dec_ref(v___x_2326_);
v_sz_2328_ = lean_array_size(v_content_2319_);
lean_inc_ref(v_a_2307_);
v___x_2329_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__2(v_content_2319_, v_sz_2328_, v___x_2323_, v___x_2321_, v_a_2307_, v_snd_2327_);
v_snd_2330_ = lean_ctor_get(v___x_2329_, 1);
lean_inc(v_snd_2330_);
lean_dec_ref(v___x_2329_);
v___x_2331_ = l_Lean_Doc_MarkdownM_endBlock___redArg(v_snd_2330_);
v_snd_2332_ = lean_ctor_get(v___x_2331_, 1);
lean_inc(v_snd_2332_);
lean_dec_ref(v___x_2331_);
v_sz_2333_ = lean_array_size(v_subParts_2320_);
v___x_2334_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__3___redArg(v___x_2311_, v_subParts_2320_, v_sz_2333_, v___x_2323_, v___x_2321_, v_a_2307_, v_snd_2332_);
lean_dec(v___x_2311_);
v_snd_2335_ = lean_ctor_get(v___x_2334_, 1);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2342_ == 0)
{
lean_object* v_unused_2343_; 
v_unused_2343_ = lean_ctor_get(v___x_2334_, 0);
lean_dec(v_unused_2343_);
v___x_2337_ = v___x_2334_;
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_snd_2335_);
lean_dec(v___x_2334_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v___x_2340_; 
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 0, v___x_2321_);
v___x_2340_ = v___x_2337_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v___x_2321_);
lean_ctor_set(v_reuseFailAlloc_2341_, 1, v_snd_2335_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
return v___x_2340_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__3___redArg(lean_object* v___x_2344_, lean_object* v_as_2345_, size_t v_sz_2346_, size_t v_i_2347_, lean_object* v_b_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_){
_start:
{
uint8_t v___x_2351_; 
v___x_2351_ = lean_usize_dec_lt(v_i_2347_, v_sz_2346_);
if (v___x_2351_ == 0)
{
lean_object* v___x_2352_; 
lean_dec_ref(v___y_2349_);
v___x_2352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2352_, 0, v_b_2348_);
lean_ctor_set(v___x_2352_, 1, v___y_2350_);
return v___x_2352_;
}
else
{
lean_object* v_a_2353_; lean_object* v___x_2354_; lean_object* v_snd_2355_; lean_object* v___x_2356_; size_t v___x_2357_; size_t v___x_2358_; 
v_a_2353_ = lean_array_uget_borrowed(v_as_2345_, v_i_2347_);
lean_inc_ref(v___y_2349_);
v___x_2354_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___redArg(v___x_2344_, v_a_2353_, v___y_2349_, v___y_2350_);
v_snd_2355_ = lean_ctor_get(v___x_2354_, 1);
lean_inc(v_snd_2355_);
lean_dec_ref(v___x_2354_);
v___x_2356_ = lean_box(0);
v___x_2357_ = ((size_t)1ULL);
v___x_2358_ = lean_usize_add(v_i_2347_, v___x_2357_);
v_i_2347_ = v___x_2358_;
v_b_2348_ = v___x_2356_;
v___y_2350_ = v_snd_2355_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__3___redArg___boxed(lean_object* v___x_2360_, lean_object* v_as_2361_, lean_object* v_sz_2362_, lean_object* v_i_2363_, lean_object* v_b_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_){
_start:
{
size_t v_sz_boxed_2367_; size_t v_i_boxed_2368_; lean_object* v_res_2369_; 
v_sz_boxed_2367_ = lean_unbox_usize(v_sz_2362_);
lean_dec(v_sz_2362_);
v_i_boxed_2368_ = lean_unbox_usize(v_i_2363_);
lean_dec(v_i_2363_);
v_res_2369_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__3___redArg(v___x_2360_, v_as_2361_, v_sz_boxed_2367_, v_i_boxed_2368_, v_b_2364_, v___y_2365_, v___y_2366_);
lean_dec_ref(v_as_2361_);
lean_dec(v___x_2360_);
return v_res_2369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___redArg___boxed(lean_object* v_level_2370_, lean_object* v_part_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___redArg(v_level_2370_, v_part_2371_, v_a_2372_, v_a_2373_);
lean_dec_ref(v_part_2371_);
lean_dec(v_level_2370_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__3(lean_object* v_as_2375_, size_t v_sz_2376_, size_t v_i_2377_, lean_object* v_b_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_){
_start:
{
uint8_t v___x_2381_; 
v___x_2381_ = lean_usize_dec_lt(v_i_2377_, v_sz_2376_);
if (v___x_2381_ == 0)
{
lean_object* v___x_2382_; 
lean_dec_ref(v___y_2379_);
v___x_2382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2382_, 0, v_b_2378_);
lean_ctor_set(v___x_2382_, 1, v___y_2380_);
return v___x_2382_;
}
else
{
lean_object* v_a_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v_snd_2386_; lean_object* v___x_2387_; size_t v___x_2388_; size_t v___x_2389_; 
v_a_2383_ = lean_array_uget_borrowed(v_as_2375_, v_i_2377_);
v___x_2384_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___y_2379_);
v___x_2385_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___redArg(v___x_2384_, v_a_2383_, v___y_2379_, v___y_2380_);
v_snd_2386_ = lean_ctor_get(v___x_2385_, 1);
lean_inc(v_snd_2386_);
lean_dec_ref(v___x_2385_);
v___x_2387_ = lean_box(0);
v___x_2388_ = ((size_t)1ULL);
v___x_2389_ = lean_usize_add(v_i_2377_, v___x_2388_);
v_i_2377_ = v___x_2389_;
v_b_2378_ = v___x_2387_;
v___y_2380_ = v_snd_2386_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__3___boxed(lean_object* v_as_2391_, lean_object* v_sz_2392_, lean_object* v_i_2393_, lean_object* v_b_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_){
_start:
{
size_t v_sz_boxed_2397_; size_t v_i_boxed_2398_; lean_object* v_res_2399_; 
v_sz_boxed_2397_ = lean_unbox_usize(v_sz_2392_);
lean_dec(v_sz_2392_);
v_i_boxed_2398_ = lean_unbox_usize(v_i_2393_);
lean_dec(v_i_2393_);
v_res_2399_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__3(v_as_2391_, v_sz_boxed_2397_, v_i_boxed_2398_, v_b_2394_, v___y_2395_, v___y_2396_);
lean_dec_ref(v_as_2391_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown___lam__0(lean_object* v_text_2400_, size_t v_sz_2401_, size_t v___x_2402_, lean_object* v___x_2403_, lean_object* v_subsections_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_){
_start:
{
lean_object* v___x_2407_; lean_object* v_snd_2408_; size_t v_sz_2409_; lean_object* v___x_2410_; lean_object* v_snd_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2418_; 
lean_inc_ref(v___y_2405_);
v___x_2407_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__2(v_text_2400_, v_sz_2401_, v___x_2402_, v___x_2403_, v___y_2405_, v___y_2406_);
v_snd_2408_ = lean_ctor_get(v___x_2407_, 1);
lean_inc(v_snd_2408_);
lean_dec_ref(v___x_2407_);
v_sz_2409_ = lean_array_size(v_subsections_2404_);
v___x_2410_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__3(v_subsections_2404_, v_sz_2409_, v___x_2402_, v___x_2403_, v___y_2405_, v_snd_2408_);
v_snd_2411_ = lean_ctor_get(v___x_2410_, 1);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2418_ == 0)
{
lean_object* v_unused_2419_; 
v_unused_2419_ = lean_ctor_get(v___x_2410_, 0);
lean_dec(v_unused_2419_);
v___x_2413_ = v___x_2410_;
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_snd_2411_);
lean_dec(v___x_2410_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2416_; 
if (v_isShared_2414_ == 0)
{
lean_ctor_set(v___x_2413_, 0, v___x_2403_);
v___x_2416_ = v___x_2413_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v___x_2403_);
lean_ctor_set(v_reuseFailAlloc_2417_, 1, v_snd_2411_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown___lam__0___boxed(lean_object* v_text_2420_, lean_object* v_sz_2421_, lean_object* v___x_2422_, lean_object* v___x_2423_, lean_object* v_subsections_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_){
_start:
{
size_t v_sz_boxed_2427_; size_t v___x_10686__boxed_2428_; lean_object* v_res_2429_; 
v_sz_boxed_2427_ = lean_unbox_usize(v_sz_2421_);
lean_dec(v_sz_2421_);
v___x_10686__boxed_2428_ = lean_unbox_usize(v___x_2422_);
lean_dec(v___x_2422_);
v_res_2429_ = l___private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown___lam__0(v_text_2420_, v_sz_boxed_2427_, v___x_10686__boxed_2428_, v___x_2423_, v_subsections_2424_, v___y_2425_, v___y_2426_);
lean_dec_ref(v_subsections_2424_);
lean_dec_ref(v_text_2420_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown(lean_object* v_a_2432_){
_start:
{
lean_object* v_text_2433_; lean_object* v_subsections_2434_; lean_object* v___x_2435_; size_t v_sz_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___f_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; 
v_text_2433_ = lean_ctor_get(v_a_2432_, 0);
lean_inc_ref(v_text_2433_);
v_subsections_2434_ = lean_ctor_get(v_a_2432_, 1);
lean_inc_ref(v_subsections_2434_);
lean_dec_ref(v_a_2432_);
v___x_2435_ = lean_box(0);
v_sz_2436_ = lean_array_size(v_text_2433_);
v___x_2437_ = lean_box_usize(v_sz_2436_);
v___x_2438_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown___boxed__const__1));
v___f_2439_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2439_, 0, v_text_2433_);
lean_closure_set(v___f_2439_, 1, v___x_2437_);
lean_closure_set(v___f_2439_, 2, v___x_2438_);
lean_closure_set(v___f_2439_, 3, v___x_2435_);
lean_closure_set(v___f_2439_, 4, v_subsections_2434_);
v___x_2440_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__11));
v___x_2441_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__13, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__13_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__13);
v___x_2442_ = l_Lean_Doc_MarkdownM_run_x27(v___f_2439_, v___x_2440_, v___x_2441_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0(lean_object* v_p_2443_, lean_object* v_level_2444_, lean_object* v_part_2445_, lean_object* v_a_2446_, lean_object* v_a_2447_){
_start:
{
lean_object* v___x_2448_; 
v___x_2448_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___redArg(v_level_2444_, v_part_2445_, v_a_2446_, v_a_2447_);
return v___x_2448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___boxed(lean_object* v_p_2449_, lean_object* v_level_2450_, lean_object* v_part_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_){
_start:
{
lean_object* v_res_2454_; 
v_res_2454_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0(v_p_2449_, v_level_2450_, v_part_2451_, v_a_2452_, v_a_2453_);
lean_dec_ref(v_part_2451_);
lean_dec(v_level_2450_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__3(lean_object* v_p_2455_, lean_object* v___x_2456_, lean_object* v_as_2457_, size_t v_sz_2458_, size_t v_i_2459_, lean_object* v_b_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_){
_start:
{
lean_object* v___x_2463_; 
v___x_2463_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__3___redArg(v___x_2456_, v_as_2457_, v_sz_2458_, v_i_2459_, v_b_2460_, v___y_2461_, v___y_2462_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__3___boxed(lean_object* v_p_2464_, lean_object* v___x_2465_, lean_object* v_as_2466_, lean_object* v_sz_2467_, lean_object* v_i_2468_, lean_object* v_b_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_){
_start:
{
size_t v_sz_boxed_2472_; size_t v_i_boxed_2473_; lean_object* v_res_2474_; 
v_sz_boxed_2472_ = lean_unbox_usize(v_sz_2467_);
lean_dec(v_sz_2467_);
v_i_boxed_2473_ = lean_unbox_usize(v_i_2468_);
lean_dec(v_i_2468_);
v_res_2474_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__3(v_p_2464_, v___x_2465_, v_as_2466_, v_sz_boxed_2472_, v_i_boxed_2473_, v_b_2469_, v___y_2470_, v___y_2471_);
lean_dec_ref(v_as_2466_);
lean_dec(v___x_2465_);
return v_res_2474_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2(lean_object* v_s_2475_, lean_object* v_pattern_2476_, lean_object* v_replacement_2477_){
_start:
{
lean_object* v___x_2478_; 
v___x_2478_ = l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___redArg(v_s_2475_, v_replacement_2477_);
return v___x_2478_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2___boxed(lean_object* v_s_2479_, lean_object* v_pattern_2480_, lean_object* v_replacement_2481_){
_start:
{
lean_object* v_res_2482_; 
v_res_2482_ = l_String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2(v_s_2479_, v_pattern_2480_, v_replacement_2481_);
lean_dec_ref(v_replacement_2481_);
lean_dec_ref(v_pattern_2480_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2_spec__6(lean_object* v_s_2483_, lean_object* v_replacement_2484_, lean_object* v_inst_2485_, lean_object* v_R_2486_, lean_object* v_a_2487_, lean_object* v_b_2488_, lean_object* v_c_2489_){
_start:
{
lean_object* v___x_2490_; 
v___x_2490_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2_spec__6___redArg(v_s_2483_, v_replacement_2484_, v_a_2487_, v_b_2488_);
return v___x_2490_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2_spec__6___boxed(lean_object* v_s_2491_, lean_object* v_replacement_2492_, lean_object* v_inst_2493_, lean_object* v_R_2494_, lean_object* v_a_2495_, lean_object* v_b_2496_, lean_object* v_c_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1_spec__2_spec__6(v_s_2491_, v_replacement_2492_, v_inst_2493_, v_R_2494_, v_a_2495_, v_b_2496_, v_c_2497_);
lean_dec_ref(v_replacement_2492_);
return v_res_2498_;
}
}
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f(lean_object* v_env_2499_, lean_object* v_declName_2500_, uint8_t v_includeBuiltin_2501_){
_start:
{
lean_object* v___x_2503_; 
v___x_2503_ = l_Lean_findInternalDocString_x3f(v_env_2499_, v_declName_2500_, v_includeBuiltin_2501_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_object* v_a_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2532_; 
v_a_2504_ = lean_ctor_get(v___x_2503_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2503_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2506_ = v___x_2503_;
v_isShared_2507_ = v_isSharedCheck_2532_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_a_2504_);
lean_dec(v___x_2503_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2532_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
if (lean_obj_tag(v_a_2504_) == 0)
{
lean_object* v___x_2508_; lean_object* v___x_2510_; 
v___x_2508_ = lean_box(0);
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 0, v___x_2508_);
v___x_2510_ = v___x_2506_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v___x_2508_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
else
{
lean_object* v_val_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2531_; 
v_val_2512_ = lean_ctor_get(v_a_2504_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v_a_2504_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2514_ = v_a_2504_;
v_isShared_2515_ = v_isSharedCheck_2531_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_val_2512_);
lean_dec(v_a_2504_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2531_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
if (lean_obj_tag(v_val_2512_) == 0)
{
lean_object* v_val_2516_; lean_object* v___x_2518_; 
v_val_2516_ = lean_ctor_get(v_val_2512_, 0);
lean_inc(v_val_2516_);
lean_dec_ref(v_val_2512_);
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 0, v_val_2516_);
v___x_2518_ = v___x_2514_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_val_2516_);
v___x_2518_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
lean_object* v___x_2520_; 
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 0, v___x_2518_);
v___x_2520_ = v___x_2506_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v___x_2518_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
}
else
{
lean_object* v_val_2523_; lean_object* v___x_2524_; lean_object* v___x_2526_; 
v_val_2523_ = lean_ctor_get(v_val_2512_, 0);
lean_inc(v_val_2523_);
lean_dec_ref(v_val_2512_);
v___x_2524_ = l___private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown(v_val_2523_);
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 0, v___x_2524_);
v___x_2526_ = v___x_2514_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v___x_2524_);
v___x_2526_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
lean_object* v___x_2528_; 
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 0, v___x_2526_);
v___x_2528_ = v___x_2506_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v___x_2526_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2540_; 
v_a_2533_ = lean_ctor_get(v___x_2503_, 0);
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2503_);
if (v_isSharedCheck_2540_ == 0)
{
v___x_2535_ = v___x_2503_;
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2503_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2538_; 
if (v_isShared_2536_ == 0)
{
v___x_2538_ = v___x_2535_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_a_2533_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___boxed(lean_object* v_env_2541_, lean_object* v_declName_2542_, lean_object* v_includeBuiltin_2543_, lean_object* v_a_2544_){
_start:
{
uint8_t v_includeBuiltin_boxed_2545_; lean_object* v_res_2546_; 
v_includeBuiltin_boxed_2545_ = lean_unbox(v_includeBuiltin_2543_);
v_res_2546_ = l_Lean_findSimpleDocString_x3f(v_env_2541_, v_declName_2542_, v_includeBuiltin_boxed_2545_);
return v_res_2546_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_(lean_object* v_x_2549_, lean_object* v_x_2550_, lean_object* v_es_2551_, uint8_t v_level_2552_){
_start:
{
uint8_t v___x_2553_; uint8_t v___x_2554_; 
v___x_2553_ = 1;
v___x_2554_ = l_Lean_instOrdOLeanLevel_ord(v_level_2552_, v___x_2553_);
if (v___x_2554_ == 0)
{
lean_object* v___x_2555_; 
lean_dec(v_es_2551_);
v___x_2555_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_));
return v___x_2555_;
}
else
{
lean_object* v___x_2556_; 
v___x_2556_ = lean_array_mk(v_es_2551_);
return v___x_2556_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2____boxed(lean_object* v_x_2557_, lean_object* v_x_2558_, lean_object* v_es_2559_, lean_object* v_level_2560_){
_start:
{
uint8_t v_level_boxed_2561_; lean_object* v_res_2562_; 
v_level_boxed_2561_ = lean_unbox(v_level_2560_);
v_res_2562_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_(v_x_2557_, v_x_2558_, v_es_2559_, v_level_boxed_2561_);
lean_dec_ref(v_x_2558_);
lean_dec_ref(v_x_2557_);
return v_res_2562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_(lean_object* v_es_2563_){
_start:
{
lean_object* v___x_2564_; 
v___x_2564_ = lean_array_mk(v_es_2563_);
return v___x_2564_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
v___x_2565_ = lean_unsigned_to_nat(32u);
v___x_2566_ = lean_mk_empty_array_with_capacity(v___x_2565_);
v___x_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2566_);
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_(lean_object* v___x_2568_, lean_object* v_x_2569_){
_start:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; size_t v___x_2573_; lean_object* v___x_2574_; 
v___x_2570_ = lean_unsigned_to_nat(32u);
v___x_2571_ = lean_mk_empty_array_with_capacity(v___x_2570_);
v___x_2572_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_);
v___x_2573_ = ((size_t)5ULL);
lean_inc(v___x_2568_);
v___x_2574_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2574_, 0, v___x_2572_);
lean_ctor_set(v___x_2574_, 1, v___x_2571_);
lean_ctor_set(v___x_2574_, 2, v___x_2568_);
lean_ctor_set(v___x_2574_, 3, v___x_2568_);
lean_ctor_set_usize(v___x_2574_, 4, v___x_2573_);
return v___x_2574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2____boxed(lean_object* v___x_2575_, lean_object* v_x_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_(v___x_2575_, v_x_2576_);
lean_dec_ref(v_x_2576_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; 
v___x_2598_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_));
v___x_2599_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_2598_);
return v___x_2599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2____boxed(lean_object* v_a_2600_){
_start:
{
lean_object* v_res_2601_; 
v_res_2601_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_();
return v_res_2601_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMainModuleDoc(lean_object* v_env_2602_, lean_object* v_doc_2603_){
_start:
{
lean_object* v___x_2604_; lean_object* v_toEnvExtension_2605_; lean_object* v_asyncMode_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2604_ = l___private_Lean_DocString_Extension_0__Lean_moduleDocExt;
v_toEnvExtension_2605_ = lean_ctor_get(v___x_2604_, 0);
lean_inc_ref(v_toEnvExtension_2605_);
v_asyncMode_2606_ = lean_ctor_get(v_toEnvExtension_2605_, 2);
lean_inc(v_asyncMode_2606_);
lean_dec_ref(v_toEnvExtension_2605_);
v___x_2607_ = lean_box(0);
v___x_2608_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2604_, v_env_2602_, v_doc_2603_, v_asyncMode_2606_, v___x_2607_);
lean_dec(v_asyncMode_2606_);
return v___x_2608_;
}
}
static lean_object* _init_l_Lean_getMainModuleDoc___closed__0(void){
_start:
{
lean_object* v___x_2609_; 
v___x_2609_ = l_Lean_instInhabitedPersistentArray_default(lean_box(0));
return v___x_2609_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModuleDoc(lean_object* v_env_2610_){
_start:
{
lean_object* v___x_2611_; lean_object* v_toEnvExtension_2612_; lean_object* v_asyncMode_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2611_ = l___private_Lean_DocString_Extension_0__Lean_moduleDocExt;
v_toEnvExtension_2612_ = lean_ctor_get(v___x_2611_, 0);
lean_inc_ref(v_toEnvExtension_2612_);
v_asyncMode_2613_ = lean_ctor_get(v_toEnvExtension_2612_, 2);
lean_inc(v_asyncMode_2613_);
lean_dec_ref(v_toEnvExtension_2612_);
v___x_2614_ = lean_obj_once(&l_Lean_getMainModuleDoc___closed__0, &l_Lean_getMainModuleDoc___closed__0_once, _init_l_Lean_getMainModuleDoc___closed__0);
v___x_2615_ = lean_box(0);
v___x_2616_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2614_, v___x_2611_, v_env_2610_, v_asyncMode_2613_, v___x_2615_);
lean_dec(v_asyncMode_2613_);
return v___x_2616_;
}
}
static lean_object* _init_l_Lean_getModuleDoc_x3f___closed__0(void){
_start:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2617_ = lean_obj_once(&l_Lean_getMainModuleDoc___closed__0, &l_Lean_getMainModuleDoc___closed__0_once, _init_l_Lean_getMainModuleDoc___closed__0);
v___x_2618_ = lean_box(0);
v___x_2619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2618_);
lean_ctor_set(v___x_2619_, 1, v___x_2617_);
return v___x_2619_;
}
}
LEAN_EXPORT lean_object* l_Lean_getModuleDoc_x3f(lean_object* v_env_2620_, lean_object* v_moduleName_2621_){
_start:
{
lean_object* v___x_2622_; 
v___x_2622_ = l_Lean_Environment_getModuleIdx_x3f(v_env_2620_, v_moduleName_2621_);
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_object* v___x_2623_; 
v___x_2623_ = lean_box(0);
return v___x_2623_;
}
else
{
lean_object* v_val_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2635_; 
v_val_2624_ = lean_ctor_get(v___x_2622_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2626_ = v___x_2622_;
v_isShared_2627_ = v_isSharedCheck_2635_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_val_2624_);
lean_dec(v___x_2622_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2635_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; uint8_t v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2633_; 
v___x_2628_ = lean_obj_once(&l_Lean_getModuleDoc_x3f___closed__0, &l_Lean_getModuleDoc_x3f___closed__0_once, _init_l_Lean_getModuleDoc_x3f___closed__0);
v___x_2629_ = l___private_Lean_DocString_Extension_0__Lean_moduleDocExt;
v___x_2630_ = 1;
v___x_2631_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2628_, v___x_2629_, v_env_2620_, v_val_2624_, v___x_2630_);
lean_dec(v_val_2624_);
if (v_isShared_2627_ == 0)
{
lean_ctor_set(v___x_2626_, 0, v___x_2631_);
v___x_2633_ = v___x_2626_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v___x_2631_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getModuleDoc_x3f___boxed(lean_object* v_env_2636_, lean_object* v_moduleName_2637_){
_start:
{
lean_object* v_res_2638_; 
v_res_2638_ = l_Lean_getModuleDoc_x3f(v_env_2636_, v_moduleName_2637_);
lean_dec(v_moduleName_2637_);
lean_dec_ref(v_env_2636_);
return v_res_2638_;
}
}
static lean_object* _init_l_Lean_getDocStringText___redArg___closed__1(void){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2640_ = ((lean_object*)(l_Lean_getDocStringText___redArg___closed__0));
v___x_2641_ = l_Lean_stringToMessageData(v___x_2640_);
return v___x_2641_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___redArg(lean_object* v_inst_2645_, lean_object* v_inst_2646_, lean_object* v_stx_2647_){
_start:
{
lean_object* v_toApplicative_2654_; lean_object* v_toPure_2655_; lean_object* v_val_2657_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
v_toApplicative_2654_ = lean_ctor_get(v_inst_2645_, 0);
v_toPure_2655_ = lean_ctor_get(v_toApplicative_2654_, 1);
v___x_2664_ = lean_unsigned_to_nat(1u);
v___x_2665_ = l_Lean_Syntax_getArg(v_stx_2647_, v___x_2664_);
switch(lean_obj_tag(v___x_2665_))
{
case 2:
{
lean_object* v_val_2666_; 
lean_inc(v_toPure_2655_);
lean_dec(v_stx_2647_);
lean_dec_ref(v_inst_2646_);
lean_dec_ref(v_inst_2645_);
v_val_2666_ = lean_ctor_get(v___x_2665_, 1);
lean_inc_ref(v_val_2666_);
lean_dec_ref(v___x_2665_);
v_val_2657_ = v_val_2666_;
goto v___jp_2656_;
}
case 1:
{
lean_object* v_kind_2667_; 
v_kind_2667_ = lean_ctor_get(v___x_2665_, 1);
lean_inc(v_kind_2667_);
if (lean_obj_tag(v_kind_2667_) == 1)
{
lean_object* v_pre_2668_; 
v_pre_2668_ = lean_ctor_get(v_kind_2667_, 0);
lean_inc(v_pre_2668_);
if (lean_obj_tag(v_pre_2668_) == 1)
{
lean_object* v_pre_2669_; 
v_pre_2669_ = lean_ctor_get(v_pre_2668_, 0);
lean_inc(v_pre_2669_);
if (lean_obj_tag(v_pre_2669_) == 1)
{
lean_object* v_pre_2670_; 
v_pre_2670_ = lean_ctor_get(v_pre_2669_, 0);
lean_inc(v_pre_2670_);
if (lean_obj_tag(v_pre_2670_) == 1)
{
lean_object* v_pre_2671_; 
v_pre_2671_ = lean_ctor_get(v_pre_2670_, 0);
if (lean_obj_tag(v_pre_2671_) == 0)
{
lean_object* v_str_2672_; lean_object* v_str_2673_; lean_object* v_str_2674_; lean_object* v_str_2675_; lean_object* v___x_2676_; uint8_t v___x_2677_; 
v_str_2672_ = lean_ctor_get(v_kind_2667_, 1);
lean_inc_ref(v_str_2672_);
lean_dec_ref(v_kind_2667_);
v_str_2673_ = lean_ctor_get(v_pre_2668_, 1);
lean_inc_ref(v_str_2673_);
lean_dec_ref(v_pre_2668_);
v_str_2674_ = lean_ctor_get(v_pre_2669_, 1);
lean_inc_ref(v_str_2674_);
lean_dec_ref(v_pre_2669_);
v_str_2675_ = lean_ctor_get(v_pre_2670_, 1);
lean_inc_ref(v_str_2675_);
lean_dec_ref(v_pre_2670_);
v___x_2676_ = ((lean_object*)(l_Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_2677_ = lean_string_dec_eq(v_str_2675_, v___x_2676_);
lean_dec_ref(v_str_2675_);
if (v___x_2677_ == 0)
{
lean_dec_ref(v_str_2674_);
lean_dec_ref(v_str_2673_);
lean_dec_ref(v_str_2672_);
lean_dec_ref(v___x_2665_);
goto v___jp_2648_;
}
else
{
lean_object* v___x_2678_; uint8_t v___x_2679_; 
v___x_2678_ = ((lean_object*)(l_Lean_getDocStringText___redArg___closed__2));
v___x_2679_ = lean_string_dec_eq(v_str_2674_, v___x_2678_);
lean_dec_ref(v_str_2674_);
if (v___x_2679_ == 0)
{
lean_dec_ref(v_str_2673_);
lean_dec_ref(v_str_2672_);
lean_dec_ref(v___x_2665_);
goto v___jp_2648_;
}
else
{
lean_object* v___x_2680_; uint8_t v___x_2681_; 
v___x_2680_ = ((lean_object*)(l_Lean_getDocStringText___redArg___closed__3));
v___x_2681_ = lean_string_dec_eq(v_str_2673_, v___x_2680_);
lean_dec_ref(v_str_2673_);
if (v___x_2681_ == 0)
{
lean_dec_ref(v_str_2672_);
lean_dec_ref(v___x_2665_);
goto v___jp_2648_;
}
else
{
lean_object* v___x_2682_; uint8_t v___x_2683_; 
v___x_2682_ = ((lean_object*)(l_Lean_getDocStringText___redArg___closed__4));
v___x_2683_ = lean_string_dec_eq(v_str_2672_, v___x_2682_);
lean_dec_ref(v_str_2672_);
if (v___x_2683_ == 0)
{
lean_dec_ref(v___x_2665_);
goto v___jp_2648_;
}
else
{
lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2684_ = lean_unsigned_to_nat(0u);
v___x_2685_ = l_Lean_Syntax_getArg(v___x_2665_, v___x_2684_);
lean_dec_ref(v___x_2665_);
if (lean_obj_tag(v___x_2685_) == 2)
{
lean_object* v_val_2686_; 
lean_inc(v_toPure_2655_);
lean_dec(v_stx_2647_);
lean_dec_ref(v_inst_2646_);
lean_dec_ref(v_inst_2645_);
v_val_2686_ = lean_ctor_get(v___x_2685_, 1);
lean_inc_ref(v_val_2686_);
lean_dec_ref(v___x_2685_);
v_val_2657_ = v_val_2686_;
goto v___jp_2656_;
}
else
{
lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; 
lean_dec(v___x_2685_);
v___x_2687_ = lean_obj_once(&l_Lean_getDocStringText___redArg___closed__1, &l_Lean_getDocStringText___redArg___closed__1_once, _init_l_Lean_getDocStringText___redArg___closed__1);
lean_inc(v_stx_2647_);
v___x_2688_ = l_Lean_MessageData_ofSyntax(v_stx_2647_);
v___x_2689_ = l_Lean_indentD(v___x_2688_);
v___x_2690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2687_);
lean_ctor_set(v___x_2690_, 1, v___x_2689_);
v___x_2691_ = l_Lean_throwErrorAt___redArg(v_inst_2645_, v_inst_2646_, v_stx_2647_, v___x_2690_);
return v___x_2691_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_pre_2670_);
lean_dec_ref(v_pre_2669_);
lean_dec_ref(v_pre_2668_);
lean_dec_ref(v_kind_2667_);
lean_dec_ref(v___x_2665_);
goto v___jp_2648_;
}
}
else
{
lean_dec(v_pre_2670_);
lean_dec_ref(v_pre_2669_);
lean_dec_ref(v_pre_2668_);
lean_dec_ref(v_kind_2667_);
lean_dec_ref(v___x_2665_);
goto v___jp_2648_;
}
}
else
{
lean_dec_ref(v_pre_2668_);
lean_dec(v_pre_2669_);
lean_dec_ref(v_kind_2667_);
lean_dec_ref(v___x_2665_);
goto v___jp_2648_;
}
}
else
{
lean_dec(v_pre_2668_);
lean_dec_ref(v_kind_2667_);
lean_dec_ref(v___x_2665_);
goto v___jp_2648_;
}
}
else
{
lean_dec_ref(v___x_2665_);
lean_dec(v_kind_2667_);
goto v___jp_2648_;
}
}
default: 
{
lean_dec(v___x_2665_);
goto v___jp_2648_;
}
}
v___jp_2648_:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2649_ = lean_obj_once(&l_Lean_getDocStringText___redArg___closed__1, &l_Lean_getDocStringText___redArg___closed__1_once, _init_l_Lean_getDocStringText___redArg___closed__1);
lean_inc(v_stx_2647_);
v___x_2650_ = l_Lean_MessageData_ofSyntax(v_stx_2647_);
v___x_2651_ = l_Lean_indentD(v___x_2650_);
v___x_2652_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2649_);
lean_ctor_set(v___x_2652_, 1, v___x_2651_);
v___x_2653_ = l_Lean_throwErrorAt___redArg(v_inst_2645_, v_inst_2646_, v_stx_2647_, v___x_2652_);
return v___x_2653_;
}
v___jp_2656_:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
v___x_2658_ = lean_unsigned_to_nat(0u);
v___x_2659_ = lean_string_utf8_byte_size(v_val_2657_);
v___x_2660_ = lean_unsigned_to_nat(2u);
v___x_2661_ = lean_nat_sub(v___x_2659_, v___x_2660_);
v___x_2662_ = lean_string_utf8_extract(v_val_2657_, v___x_2658_, v___x_2661_);
lean_dec(v___x_2661_);
lean_dec_ref(v_val_2657_);
v___x_2663_ = lean_apply_2(v_toPure_2655_, lean_box(0), v___x_2662_);
return v___x_2663_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText(lean_object* v_m_2692_, lean_object* v_inst_2693_, lean_object* v_inst_2694_, lean_object* v_stx_2695_){
_start:
{
lean_object* v___x_2696_; 
v___x_2696_ = l_Lean_getDocStringText___redArg(v_inst_2693_, v_inst_2694_, v_stx_2695_);
return v___x_2696_;
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0(void){
_start:
{
lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
v___x_2697_ = l_Lean_instInhabitedDeclarationRange_default;
v___x_2698_ = ((lean_object*)(l_Lean_instInhabitedVersoDocString_default___closed__0));
v___x_2699_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2698_);
lean_ctor_set(v___x_2699_, 1, v___x_2698_);
lean_ctor_set(v___x_2699_, 2, v___x_2697_);
return v___x_2699_;
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_instInhabitedSnippet_default(void){
_start:
{
lean_object* v___x_2700_; 
v___x_2700_ = lean_obj_once(&l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0, &l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0_once, _init_l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0);
return v___x_2700_;
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_instInhabitedSnippet(void){
_start:
{
lean_object* v___x_2701_; 
v___x_2701_ = l_Lean_VersoModuleDocs_instInhabitedSnippet_default;
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__2(lean_object* v_a_2702_){
_start:
{
lean_object* v___x_2703_; 
v___x_2703_ = lean_nat_to_int(v_a_2702_);
return v___x_2703_;
}
}
static lean_object* _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_2710_; lean_object* v___x_2711_; 
v___x_2710_ = lean_unsigned_to_nat(2u);
v___x_2711_ = lean_nat_to_int(v___x_2710_);
return v___x_2711_;
}
}
static lean_object* _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4(void){
_start:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; 
v___x_2712_ = lean_unsigned_to_nat(1u);
v___x_2713_ = lean_nat_to_int(v___x_2712_);
return v___x_2713_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10_spec__18(lean_object* v_x_2726_, lean_object* v_x_2727_, lean_object* v_x_2728_){
_start:
{
if (lean_obj_tag(v_x_2728_) == 0)
{
lean_dec(v_x_2726_);
return v_x_2727_;
}
else
{
lean_object* v_head_2729_; lean_object* v_tail_2730_; lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2741_; 
v_head_2729_ = lean_ctor_get(v_x_2728_, 0);
v_tail_2730_ = lean_ctor_get(v_x_2728_, 1);
v_isSharedCheck_2741_ = !lean_is_exclusive(v_x_2728_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2732_ = v_x_2728_;
v_isShared_2733_ = v_isSharedCheck_2741_;
goto v_resetjp_2731_;
}
else
{
lean_inc(v_tail_2730_);
lean_inc(v_head_2729_);
lean_dec(v_x_2728_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2741_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
lean_object* v___x_2735_; 
lean_inc(v_x_2726_);
if (v_isShared_2733_ == 0)
{
lean_ctor_set_tag(v___x_2732_, 5);
lean_ctor_set(v___x_2732_, 1, v_x_2726_);
lean_ctor_set(v___x_2732_, 0, v_x_2727_);
v___x_2735_ = v___x_2732_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_x_2727_);
lean_ctor_set(v_reuseFailAlloc_2740_, 1, v_x_2726_);
v___x_2735_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
v___x_2736_ = lean_unsigned_to_nat(0u);
v___x_2737_ = l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(v_head_2729_, v___x_2736_);
v___x_2738_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2738_, 0, v___x_2735_);
lean_ctor_set(v___x_2738_, 1, v___x_2737_);
v_x_2727_ = v___x_2738_;
v_x_2728_ = v_tail_2730_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10(lean_object* v_x_2742_, lean_object* v_x_2743_, lean_object* v_x_2744_){
_start:
{
if (lean_obj_tag(v_x_2744_) == 0)
{
lean_dec(v_x_2742_);
return v_x_2743_;
}
else
{
lean_object* v_head_2745_; lean_object* v_tail_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2757_; 
v_head_2745_ = lean_ctor_get(v_x_2744_, 0);
v_tail_2746_ = lean_ctor_get(v_x_2744_, 1);
v_isSharedCheck_2757_ = !lean_is_exclusive(v_x_2744_);
if (v_isSharedCheck_2757_ == 0)
{
v___x_2748_ = v_x_2744_;
v_isShared_2749_ = v_isSharedCheck_2757_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_tail_2746_);
lean_inc(v_head_2745_);
lean_dec(v_x_2744_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2757_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2751_; 
lean_inc(v_x_2742_);
if (v_isShared_2749_ == 0)
{
lean_ctor_set_tag(v___x_2748_, 5);
lean_ctor_set(v___x_2748_, 1, v_x_2742_);
lean_ctor_set(v___x_2748_, 0, v_x_2743_);
v___x_2751_ = v___x_2748_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_x_2743_);
lean_ctor_set(v_reuseFailAlloc_2756_, 1, v_x_2742_);
v___x_2751_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; 
v___x_2752_ = lean_unsigned_to_nat(0u);
v___x_2753_ = l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(v_head_2745_, v___x_2752_);
v___x_2754_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2754_, 0, v___x_2751_);
lean_ctor_set(v___x_2754_, 1, v___x_2753_);
v___x_2755_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10_spec__18(v_x_2742_, v___x_2754_, v_tail_2746_);
return v___x_2755_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5(lean_object* v_x_2758_, lean_object* v_x_2759_){
_start:
{
if (lean_obj_tag(v_x_2758_) == 0)
{
lean_object* v___x_2760_; 
lean_dec(v_x_2759_);
v___x_2760_ = lean_box(0);
return v___x_2760_;
}
else
{
lean_object* v_tail_2761_; 
v_tail_2761_ = lean_ctor_get(v_x_2758_, 1);
if (lean_obj_tag(v_tail_2761_) == 0)
{
lean_object* v_head_2762_; lean_object* v___x_2763_; 
lean_dec(v_x_2759_);
v_head_2762_ = lean_ctor_get(v_x_2758_, 0);
lean_inc(v_head_2762_);
lean_dec_ref(v_x_2758_);
v___x_2763_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5___lam__0(v_head_2762_);
return v___x_2763_;
}
else
{
lean_object* v_head_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; 
lean_inc(v_tail_2761_);
v_head_2764_ = lean_ctor_get(v_x_2758_, 0);
lean_inc(v_head_2764_);
lean_dec_ref(v_x_2758_);
v___x_2765_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5___lam__0(v_head_2764_);
v___x_2766_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10(v_x_2759_, v___x_2765_, v_tail_2761_);
return v___x_2766_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4(void){
_start:
{
lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2768_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0));
v___x_2769_ = lean_string_length(v___x_2768_);
return v___x_2769_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5(void){
_start:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2770_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4);
v___x_2771_ = lean_nat_to_int(v___x_2770_);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_xs_2779_){
_start:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; uint8_t v___x_2782_; 
v___x_2780_ = lean_array_get_size(v_xs_2779_);
v___x_2781_ = lean_unsigned_to_nat(0u);
v___x_2782_ = lean_nat_dec_eq(v___x_2780_, v___x_2781_);
if (v___x_2782_ == 0)
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2783_ = lean_array_to_list(v_xs_2779_);
v___x_2784_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2785_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5(v___x_2783_, v___x_2784_);
v___x_2786_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5);
v___x_2787_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6));
v___x_2788_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2787_);
lean_ctor_set(v___x_2788_, 1, v___x_2785_);
v___x_2789_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2790_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2790_, 0, v___x_2788_);
lean_ctor_set(v___x_2790_, 1, v___x_2789_);
v___x_2791_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2786_);
lean_ctor_set(v___x_2791_, 1, v___x_2790_);
v___x_2792_ = l_Std_Format_fill(v___x_2791_);
return v___x_2792_;
}
else
{
lean_object* v___x_2793_; 
lean_dec_ref(v_xs_2779_);
v___x_2793_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9));
return v___x_2793_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_2848_, lean_object* v_prec_2849_){
_start:
{
switch(lean_obj_tag(v_x_2848_))
{
case 0:
{
lean_object* v_string_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2870_; 
v_string_2850_ = lean_ctor_get(v_x_2848_, 0);
v_isSharedCheck_2870_ = !lean_is_exclusive(v_x_2848_);
if (v_isSharedCheck_2870_ == 0)
{
v___x_2852_ = v_x_2848_;
v_isShared_2853_ = v_isSharedCheck_2870_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_string_2850_);
lean_dec(v_x_2848_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2870_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___y_2855_; lean_object* v___x_2866_; uint8_t v___x_2867_; 
v___x_2866_ = lean_unsigned_to_nat(1024u);
v___x_2867_ = lean_nat_dec_le(v___x_2866_, v_prec_2849_);
if (v___x_2867_ == 0)
{
lean_object* v___x_2868_; 
v___x_2868_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2855_ = v___x_2868_;
goto v___jp_2854_;
}
else
{
lean_object* v___x_2869_; 
v___x_2869_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2855_ = v___x_2869_;
goto v___jp_2854_;
}
v___jp_2854_:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2859_; 
v___x_2856_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__2));
v___x_2857_ = l_String_quote(v_string_2850_);
if (v_isShared_2853_ == 0)
{
lean_ctor_set_tag(v___x_2852_, 3);
lean_ctor_set(v___x_2852_, 0, v___x_2857_);
v___x_2859_ = v___x_2852_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v___x_2857_);
v___x_2859_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
lean_object* v___x_2860_; lean_object* v___x_2861_; uint8_t v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; 
v___x_2860_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2860_, 0, v___x_2856_);
lean_ctor_set(v___x_2860_, 1, v___x_2859_);
v___x_2861_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2861_, 0, v___y_2855_);
lean_ctor_set(v___x_2861_, 1, v___x_2860_);
v___x_2862_ = 0;
v___x_2863_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2863_, 0, v___x_2861_);
lean_ctor_set_uint8(v___x_2863_, sizeof(void*)*1, v___x_2862_);
v___x_2864_ = l_Repr_addAppParen(v___x_2863_, v_prec_2849_);
return v___x_2864_;
}
}
}
}
case 1:
{
lean_object* v_content_2871_; lean_object* v___y_2873_; lean_object* v___x_2881_; uint8_t v___x_2882_; 
v_content_2871_ = lean_ctor_get(v_x_2848_, 0);
lean_inc_ref(v_content_2871_);
lean_dec_ref(v_x_2848_);
v___x_2881_ = lean_unsigned_to_nat(1024u);
v___x_2882_ = lean_nat_dec_le(v___x_2881_, v_prec_2849_);
if (v___x_2882_ == 0)
{
lean_object* v___x_2883_; 
v___x_2883_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2873_ = v___x_2883_;
goto v___jp_2872_;
}
else
{
lean_object* v___x_2884_; 
v___x_2884_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2873_ = v___x_2884_;
goto v___jp_2872_;
}
v___jp_2872_:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; uint8_t v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2874_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__7));
v___x_2875_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_2871_);
v___x_2876_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2874_);
lean_ctor_set(v___x_2876_, 1, v___x_2875_);
v___x_2877_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2877_, 0, v___y_2873_);
lean_ctor_set(v___x_2877_, 1, v___x_2876_);
v___x_2878_ = 0;
v___x_2879_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2879_, 0, v___x_2877_);
lean_ctor_set_uint8(v___x_2879_, sizeof(void*)*1, v___x_2878_);
v___x_2880_ = l_Repr_addAppParen(v___x_2879_, v_prec_2849_);
return v___x_2880_;
}
}
case 2:
{
lean_object* v_content_2885_; lean_object* v___y_2887_; lean_object* v___x_2895_; uint8_t v___x_2896_; 
v_content_2885_ = lean_ctor_get(v_x_2848_, 0);
lean_inc_ref(v_content_2885_);
lean_dec_ref(v_x_2848_);
v___x_2895_ = lean_unsigned_to_nat(1024u);
v___x_2896_ = lean_nat_dec_le(v___x_2895_, v_prec_2849_);
if (v___x_2896_ == 0)
{
lean_object* v___x_2897_; 
v___x_2897_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2887_ = v___x_2897_;
goto v___jp_2886_;
}
else
{
lean_object* v___x_2898_; 
v___x_2898_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2887_ = v___x_2898_;
goto v___jp_2886_;
}
v___jp_2886_:
{
lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; uint8_t v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2888_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__10));
v___x_2889_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_2885_);
v___x_2890_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2888_);
lean_ctor_set(v___x_2890_, 1, v___x_2889_);
v___x_2891_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2891_, 0, v___y_2887_);
lean_ctor_set(v___x_2891_, 1, v___x_2890_);
v___x_2892_ = 0;
v___x_2893_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2893_, 0, v___x_2891_);
lean_ctor_set_uint8(v___x_2893_, sizeof(void*)*1, v___x_2892_);
v___x_2894_ = l_Repr_addAppParen(v___x_2893_, v_prec_2849_);
return v___x_2894_;
}
}
case 3:
{
lean_object* v_string_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2919_; 
v_string_2899_ = lean_ctor_get(v_x_2848_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v_x_2848_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2901_ = v_x_2848_;
v_isShared_2902_ = v_isSharedCheck_2919_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_string_2899_);
lean_dec(v_x_2848_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2919_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
lean_object* v___y_2904_; lean_object* v___x_2915_; uint8_t v___x_2916_; 
v___x_2915_ = lean_unsigned_to_nat(1024u);
v___x_2916_ = lean_nat_dec_le(v___x_2915_, v_prec_2849_);
if (v___x_2916_ == 0)
{
lean_object* v___x_2917_; 
v___x_2917_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2904_ = v___x_2917_;
goto v___jp_2903_;
}
else
{
lean_object* v___x_2918_; 
v___x_2918_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2904_ = v___x_2918_;
goto v___jp_2903_;
}
v___jp_2903_:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2908_; 
v___x_2905_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__13));
v___x_2906_ = l_String_quote(v_string_2899_);
if (v_isShared_2902_ == 0)
{
lean_ctor_set(v___x_2901_, 0, v___x_2906_);
v___x_2908_ = v___x_2901_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v___x_2906_);
v___x_2908_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; uint8_t v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
v___x_2909_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2905_);
lean_ctor_set(v___x_2909_, 1, v___x_2908_);
v___x_2910_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2910_, 0, v___y_2904_);
lean_ctor_set(v___x_2910_, 1, v___x_2909_);
v___x_2911_ = 0;
v___x_2912_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2912_, 0, v___x_2910_);
lean_ctor_set_uint8(v___x_2912_, sizeof(void*)*1, v___x_2911_);
v___x_2913_ = l_Repr_addAppParen(v___x_2912_, v_prec_2849_);
return v___x_2913_;
}
}
}
}
case 4:
{
uint8_t v_mode_2920_; lean_object* v_string_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2946_; 
v_mode_2920_ = lean_ctor_get_uint8(v_x_2848_, sizeof(void*)*1);
v_string_2921_ = lean_ctor_get(v_x_2848_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v_x_2848_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2923_ = v_x_2848_;
v_isShared_2924_ = v_isSharedCheck_2946_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_string_2921_);
lean_dec(v_x_2848_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2946_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___y_2926_; lean_object* v___x_2942_; uint8_t v___x_2943_; 
v___x_2942_ = lean_unsigned_to_nat(1024u);
v___x_2943_ = lean_nat_dec_le(v___x_2942_, v_prec_2849_);
if (v___x_2943_ == 0)
{
lean_object* v___x_2944_; 
v___x_2944_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2926_ = v___x_2944_;
goto v___jp_2925_;
}
else
{
lean_object* v___x_2945_; 
v___x_2945_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2926_ = v___x_2945_;
goto v___jp_2925_;
}
v___jp_2925_:
{
lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; uint8_t v___x_2937_; lean_object* v___x_2939_; 
v___x_2927_ = lean_box(1);
v___x_2928_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__16));
v___x_2929_ = lean_unsigned_to_nat(1024u);
v___x_2930_ = l_Lean_Doc_instReprMathMode_repr(v_mode_2920_, v___x_2929_);
v___x_2931_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2931_, 0, v___x_2928_);
lean_ctor_set(v___x_2931_, 1, v___x_2930_);
v___x_2932_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2931_);
lean_ctor_set(v___x_2932_, 1, v___x_2927_);
v___x_2933_ = l_String_quote(v_string_2921_);
v___x_2934_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2933_);
v___x_2935_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2935_, 0, v___x_2932_);
lean_ctor_set(v___x_2935_, 1, v___x_2934_);
v___x_2936_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2936_, 0, v___y_2926_);
lean_ctor_set(v___x_2936_, 1, v___x_2935_);
v___x_2937_ = 0;
if (v_isShared_2924_ == 0)
{
lean_ctor_set_tag(v___x_2923_, 6);
lean_ctor_set(v___x_2923_, 0, v___x_2936_);
v___x_2939_ = v___x_2923_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2941_; 
v_reuseFailAlloc_2941_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2941_, 0, v___x_2936_);
v___x_2939_ = v_reuseFailAlloc_2941_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
lean_object* v___x_2940_; 
lean_ctor_set_uint8(v___x_2939_, sizeof(void*)*1, v___x_2937_);
v___x_2940_ = l_Repr_addAppParen(v___x_2939_, v_prec_2849_);
return v___x_2940_;
}
}
}
}
case 5:
{
lean_object* v_string_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2967_; 
v_string_2947_ = lean_ctor_get(v_x_2848_, 0);
v_isSharedCheck_2967_ = !lean_is_exclusive(v_x_2848_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2949_ = v_x_2848_;
v_isShared_2950_ = v_isSharedCheck_2967_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_string_2947_);
lean_dec(v_x_2848_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2967_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v___y_2952_; lean_object* v___x_2963_; uint8_t v___x_2964_; 
v___x_2963_ = lean_unsigned_to_nat(1024u);
v___x_2964_ = lean_nat_dec_le(v___x_2963_, v_prec_2849_);
if (v___x_2964_ == 0)
{
lean_object* v___x_2965_; 
v___x_2965_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2952_ = v___x_2965_;
goto v___jp_2951_;
}
else
{
lean_object* v___x_2966_; 
v___x_2966_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2952_ = v___x_2966_;
goto v___jp_2951_;
}
v___jp_2951_:
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2956_; 
v___x_2953_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__19));
v___x_2954_ = l_String_quote(v_string_2947_);
if (v_isShared_2950_ == 0)
{
lean_ctor_set_tag(v___x_2949_, 3);
lean_ctor_set(v___x_2949_, 0, v___x_2954_);
v___x_2956_ = v___x_2949_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v___x_2954_);
v___x_2956_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
lean_object* v___x_2957_; lean_object* v___x_2958_; uint8_t v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v___x_2957_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2953_);
lean_ctor_set(v___x_2957_, 1, v___x_2956_);
v___x_2958_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2958_, 0, v___y_2952_);
lean_ctor_set(v___x_2958_, 1, v___x_2957_);
v___x_2959_ = 0;
v___x_2960_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2960_, 0, v___x_2958_);
lean_ctor_set_uint8(v___x_2960_, sizeof(void*)*1, v___x_2959_);
v___x_2961_ = l_Repr_addAppParen(v___x_2960_, v_prec_2849_);
return v___x_2961_;
}
}
}
}
case 6:
{
lean_object* v_content_2968_; lean_object* v_url_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2993_; 
v_content_2968_ = lean_ctor_get(v_x_2848_, 0);
v_url_2969_ = lean_ctor_get(v_x_2848_, 1);
v_isSharedCheck_2993_ = !lean_is_exclusive(v_x_2848_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2971_ = v_x_2848_;
v_isShared_2972_ = v_isSharedCheck_2993_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_url_2969_);
lean_inc(v_content_2968_);
lean_dec(v_x_2848_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2993_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___y_2974_; lean_object* v___x_2989_; uint8_t v___x_2990_; 
v___x_2989_ = lean_unsigned_to_nat(1024u);
v___x_2990_ = lean_nat_dec_le(v___x_2989_, v_prec_2849_);
if (v___x_2990_ == 0)
{
lean_object* v___x_2991_; 
v___x_2991_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2974_ = v___x_2991_;
goto v___jp_2973_;
}
else
{
lean_object* v___x_2992_; 
v___x_2992_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2974_ = v___x_2992_;
goto v___jp_2973_;
}
v___jp_2973_:
{
lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2979_; 
v___x_2975_ = lean_box(1);
v___x_2976_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__22));
v___x_2977_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_2968_);
if (v_isShared_2972_ == 0)
{
lean_ctor_set_tag(v___x_2971_, 5);
lean_ctor_set(v___x_2971_, 1, v___x_2977_);
lean_ctor_set(v___x_2971_, 0, v___x_2976_);
v___x_2979_ = v___x_2971_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v___x_2976_);
lean_ctor_set(v_reuseFailAlloc_2988_, 1, v___x_2977_);
v___x_2979_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; uint8_t v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2980_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
lean_ctor_set(v___x_2980_, 1, v___x_2975_);
v___x_2981_ = l_String_quote(v_url_2969_);
v___x_2982_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2981_);
v___x_2983_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2983_, 0, v___x_2980_);
lean_ctor_set(v___x_2983_, 1, v___x_2982_);
v___x_2984_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2984_, 0, v___y_2974_);
lean_ctor_set(v___x_2984_, 1, v___x_2983_);
v___x_2985_ = 0;
v___x_2986_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2986_, 0, v___x_2984_);
lean_ctor_set_uint8(v___x_2986_, sizeof(void*)*1, v___x_2985_);
v___x_2987_ = l_Repr_addAppParen(v___x_2986_, v_prec_2849_);
return v___x_2987_;
}
}
}
}
case 7:
{
lean_object* v_name_2994_; lean_object* v_content_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3019_; 
v_name_2994_ = lean_ctor_get(v_x_2848_, 0);
v_content_2995_ = lean_ctor_get(v_x_2848_, 1);
v_isSharedCheck_3019_ = !lean_is_exclusive(v_x_2848_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_2997_ = v_x_2848_;
v_isShared_2998_ = v_isSharedCheck_3019_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_content_2995_);
lean_inc(v_name_2994_);
lean_dec(v_x_2848_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3019_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v___y_3000_; lean_object* v___x_3015_; uint8_t v___x_3016_; 
v___x_3015_ = lean_unsigned_to_nat(1024u);
v___x_3016_ = lean_nat_dec_le(v___x_3015_, v_prec_2849_);
if (v___x_3016_ == 0)
{
lean_object* v___x_3017_; 
v___x_3017_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_3000_ = v___x_3017_;
goto v___jp_2999_;
}
else
{
lean_object* v___x_3018_; 
v___x_3018_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_3000_ = v___x_3018_;
goto v___jp_2999_;
}
v___jp_2999_:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3006_; 
v___x_3001_ = lean_box(1);
v___x_3002_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__25));
v___x_3003_ = l_String_quote(v_name_2994_);
v___x_3004_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3004_, 0, v___x_3003_);
if (v_isShared_2998_ == 0)
{
lean_ctor_set_tag(v___x_2997_, 5);
lean_ctor_set(v___x_2997_, 1, v___x_3004_);
lean_ctor_set(v___x_2997_, 0, v___x_3002_);
v___x_3006_ = v___x_2997_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v___x_3002_);
lean_ctor_set(v_reuseFailAlloc_3014_, 1, v___x_3004_);
v___x_3006_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; uint8_t v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3007_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3006_);
lean_ctor_set(v___x_3007_, 1, v___x_3001_);
v___x_3008_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_2995_);
v___x_3009_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3009_, 0, v___x_3007_);
lean_ctor_set(v___x_3009_, 1, v___x_3008_);
v___x_3010_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3010_, 0, v___y_3000_);
lean_ctor_set(v___x_3010_, 1, v___x_3009_);
v___x_3011_ = 0;
v___x_3012_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3012_, 0, v___x_3010_);
lean_ctor_set_uint8(v___x_3012_, sizeof(void*)*1, v___x_3011_);
v___x_3013_ = l_Repr_addAppParen(v___x_3012_, v_prec_2849_);
return v___x_3013_;
}
}
}
}
case 8:
{
lean_object* v_alt_3020_; lean_object* v_url_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3046_; 
v_alt_3020_ = lean_ctor_get(v_x_2848_, 0);
v_url_3021_ = lean_ctor_get(v_x_2848_, 1);
v_isSharedCheck_3046_ = !lean_is_exclusive(v_x_2848_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_3023_ = v_x_2848_;
v_isShared_3024_ = v_isSharedCheck_3046_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_url_3021_);
lean_inc(v_alt_3020_);
lean_dec(v_x_2848_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3046_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___y_3026_; lean_object* v___x_3042_; uint8_t v___x_3043_; 
v___x_3042_ = lean_unsigned_to_nat(1024u);
v___x_3043_ = lean_nat_dec_le(v___x_3042_, v_prec_2849_);
if (v___x_3043_ == 0)
{
lean_object* v___x_3044_; 
v___x_3044_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_3026_ = v___x_3044_;
goto v___jp_3025_;
}
else
{
lean_object* v___x_3045_; 
v___x_3045_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_3026_ = v___x_3045_;
goto v___jp_3025_;
}
v___jp_3025_:
{
lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3032_; 
v___x_3027_ = lean_box(1);
v___x_3028_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__28));
v___x_3029_ = l_String_quote(v_alt_3020_);
v___x_3030_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3030_, 0, v___x_3029_);
if (v_isShared_3024_ == 0)
{
lean_ctor_set_tag(v___x_3023_, 5);
lean_ctor_set(v___x_3023_, 1, v___x_3030_);
lean_ctor_set(v___x_3023_, 0, v___x_3028_);
v___x_3032_ = v___x_3023_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v___x_3028_);
lean_ctor_set(v_reuseFailAlloc_3041_, 1, v___x_3030_);
v___x_3032_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; uint8_t v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; 
v___x_3033_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3032_);
lean_ctor_set(v___x_3033_, 1, v___x_3027_);
v___x_3034_ = l_String_quote(v_url_3021_);
v___x_3035_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3034_);
v___x_3036_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3036_, 0, v___x_3033_);
lean_ctor_set(v___x_3036_, 1, v___x_3035_);
v___x_3037_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3037_, 0, v___y_3026_);
lean_ctor_set(v___x_3037_, 1, v___x_3036_);
v___x_3038_ = 0;
v___x_3039_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3039_, 0, v___x_3037_);
lean_ctor_set_uint8(v___x_3039_, sizeof(void*)*1, v___x_3038_);
v___x_3040_ = l_Repr_addAppParen(v___x_3039_, v_prec_2849_);
return v___x_3040_;
}
}
}
}
case 9:
{
lean_object* v_content_3047_; lean_object* v___y_3049_; lean_object* v___x_3057_; uint8_t v___x_3058_; 
v_content_3047_ = lean_ctor_get(v_x_2848_, 0);
lean_inc_ref(v_content_3047_);
lean_dec_ref(v_x_2848_);
v___x_3057_ = lean_unsigned_to_nat(1024u);
v___x_3058_ = lean_nat_dec_le(v___x_3057_, v_prec_2849_);
if (v___x_3058_ == 0)
{
lean_object* v___x_3059_; 
v___x_3059_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_3049_ = v___x_3059_;
goto v___jp_3048_;
}
else
{
lean_object* v___x_3060_; 
v___x_3060_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_3049_ = v___x_3060_;
goto v___jp_3048_;
}
v___jp_3048_:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; uint8_t v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3050_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__31));
v___x_3051_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_3047_);
v___x_3052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3050_);
lean_ctor_set(v___x_3052_, 1, v___x_3051_);
v___x_3053_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3053_, 0, v___y_3049_);
lean_ctor_set(v___x_3053_, 1, v___x_3052_);
v___x_3054_ = 0;
v___x_3055_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3055_, 0, v___x_3053_);
lean_ctor_set_uint8(v___x_3055_, sizeof(void*)*1, v___x_3054_);
v___x_3056_ = l_Repr_addAppParen(v___x_3055_, v_prec_2849_);
return v___x_3056_;
}
}
default: 
{
lean_object* v_container_3061_; lean_object* v_content_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3110_; 
v_container_3061_ = lean_ctor_get(v_x_2848_, 0);
v_content_3062_ = lean_ctor_get(v_x_2848_, 1);
v_isSharedCheck_3110_ = !lean_is_exclusive(v_x_2848_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3064_ = v_x_2848_;
v_isShared_3065_ = v_isSharedCheck_3110_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_content_3062_);
lean_inc(v_container_3061_);
lean_dec(v_x_2848_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3110_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
lean_object* v___y_3067_; lean_object* v___x_3106_; uint8_t v___x_3107_; 
v___x_3106_ = lean_unsigned_to_nat(1024u);
v___x_3107_ = lean_nat_dec_le(v___x_3106_, v_prec_2849_);
if (v___x_3107_ == 0)
{
lean_object* v___x_3108_; 
v___x_3108_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_3067_ = v___x_3108_;
goto v___jp_3066_;
}
else
{
lean_object* v___x_3109_; 
v___x_3109_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_3067_ = v___x_3109_;
goto v___jp_3066_;
}
v___jp_3066_:
{
lean_object* v_name_3068_; lean_object* v_val_3069_; lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3105_; 
v_name_3068_ = lean_ctor_get(v_container_3061_, 0);
v_val_3069_ = lean_ctor_get(v_container_3061_, 1);
v_isSharedCheck_3105_ = !lean_is_exclusive(v_container_3061_);
if (v_isSharedCheck_3105_ == 0)
{
v___x_3071_ = v_container_3061_;
v_isShared_3072_ = v_isSharedCheck_3105_;
goto v_resetjp_3070_;
}
else
{
lean_inc(v_val_3069_);
lean_inc(v_name_3068_);
lean_dec(v_container_3061_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3105_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3079_; 
v___x_3073_ = lean_box(1);
v___x_3074_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__34));
v___x_3075_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__2));
v___x_3076_ = lean_unsigned_to_nat(0u);
v___x_3077_ = l_Lean_Name_reprPrec(v_name_3068_, v___x_3076_);
if (v_isShared_3072_ == 0)
{
lean_ctor_set_tag(v___x_3071_, 5);
lean_ctor_set(v___x_3071_, 1, v___x_3077_);
lean_ctor_set(v___x_3071_, 0, v___x_3075_);
v___x_3079_ = v___x_3071_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v___x_3075_);
lean_ctor_set(v_reuseFailAlloc_3104_, 1, v___x_3077_);
v___x_3079_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
lean_object* v___x_3080_; uint8_t v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3084_; 
v___x_3080_ = l_Std_Format_nestD(v___x_3079_);
v___x_3081_ = 0;
v___x_3082_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3082_, 0, v___x_3080_);
lean_ctor_set_uint8(v___x_3082_, sizeof(void*)*1, v___x_3081_);
if (v_isShared_3065_ == 0)
{
lean_ctor_set_tag(v___x_3064_, 5);
lean_ctor_set(v___x_3064_, 1, v___x_3073_);
lean_ctor_set(v___x_3064_, 0, v___x_3082_);
v___x_3084_ = v___x_3064_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v___x_3082_);
lean_ctor_set(v_reuseFailAlloc_3103_, 1, v___x_3073_);
v___x_3084_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3085_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__8));
v___x_3086_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_3069_);
lean_dec(v_val_3069_);
v___x_3087_ = l_Lean_Name_reprPrec(v___x_3086_, v___x_3076_);
v___x_3088_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3088_, 0, v___x_3085_);
lean_ctor_set(v___x_3088_, 1, v___x_3087_);
v___x_3089_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__10));
v___x_3090_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3088_);
lean_ctor_set(v___x_3090_, 1, v___x_3089_);
v___x_3091_ = l_Std_Format_nestD(v___x_3090_);
v___x_3092_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3092_, 0, v___x_3091_);
lean_ctor_set_uint8(v___x_3092_, sizeof(void*)*1, v___x_3081_);
v___x_3093_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3084_);
lean_ctor_set(v___x_3093_, 1, v___x_3092_);
v___x_3094_ = l_Std_Format_nestD(v___x_3093_);
v___x_3095_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3095_, 0, v___x_3094_);
lean_ctor_set_uint8(v___x_3095_, sizeof(void*)*1, v___x_3081_);
v___x_3096_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3074_);
lean_ctor_set(v___x_3096_, 1, v___x_3095_);
v___x_3097_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3096_);
lean_ctor_set(v___x_3097_, 1, v___x_3073_);
v___x_3098_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_3062_);
v___x_3099_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3097_);
lean_ctor_set(v___x_3099_, 1, v___x_3098_);
v___x_3100_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3100_, 0, v___y_3067_);
lean_ctor_set(v___x_3100_, 1, v___x_3099_);
v___x_3101_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3101_, 0, v___x_3100_);
lean_ctor_set_uint8(v___x_3101_, sizeof(void*)*1, v___x_3081_);
v___x_3102_ = l_Repr_addAppParen(v___x_3101_, v_prec_2849_);
return v___x_3102_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5___lam__0(lean_object* v___y_3111_){
_start:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; 
v___x_3112_ = lean_unsigned_to_nat(0u);
v___x_3113_ = l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(v___y_3111_, v___x_3112_);
return v___x_3113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_x_3114_, lean_object* v_prec_3115_){
_start:
{
lean_object* v_res_3116_; 
v_res_3116_ = l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(v_x_3114_, v_prec_3115_);
lean_dec(v_prec_3115_);
return v_res_3116_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(lean_object* v_xs_3117_){
_start:
{
lean_object* v___x_3118_; lean_object* v___x_3119_; uint8_t v___x_3120_; 
v___x_3118_ = lean_array_get_size(v_xs_3117_);
v___x_3119_ = lean_unsigned_to_nat(0u);
v___x_3120_ = lean_nat_dec_eq(v___x_3118_, v___x_3119_);
if (v___x_3120_ == 0)
{
lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3121_ = lean_array_to_list(v_xs_3117_);
v___x_3122_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_3123_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5(v___x_3121_, v___x_3122_);
v___x_3124_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5);
v___x_3125_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6));
v___x_3126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3125_);
lean_ctor_set(v___x_3126_, 1, v___x_3123_);
v___x_3127_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_3128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3126_);
lean_ctor_set(v___x_3128_, 1, v___x_3127_);
v___x_3129_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3124_);
lean_ctor_set(v___x_3129_, 1, v___x_3128_);
v___x_3130_ = l_Std_Format_fill(v___x_3129_);
return v___x_3130_;
}
else
{
lean_object* v___x_3131_; 
lean_dec_ref(v_xs_3117_);
v___x_3131_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9));
return v___x_3131_;
}
}
}
static lean_object* _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7(void){
_start:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3162_ = lean_unsigned_to_nat(12u);
v___x_3163_ = lean_nat_to_int(v___x_3162_);
return v___x_3163_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7_spec__15(lean_object* v_x_3164_, lean_object* v_x_3165_, lean_object* v_x_3166_){
_start:
{
if (lean_obj_tag(v_x_3166_) == 0)
{
lean_dec(v_x_3164_);
return v_x_3165_;
}
else
{
lean_object* v_head_3167_; lean_object* v_tail_3168_; lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3179_; 
v_head_3167_ = lean_ctor_get(v_x_3166_, 0);
v_tail_3168_ = lean_ctor_get(v_x_3166_, 1);
v_isSharedCheck_3179_ = !lean_is_exclusive(v_x_3166_);
if (v_isSharedCheck_3179_ == 0)
{
v___x_3170_ = v_x_3166_;
v_isShared_3171_ = v_isSharedCheck_3179_;
goto v_resetjp_3169_;
}
else
{
lean_inc(v_tail_3168_);
lean_inc(v_head_3167_);
lean_dec(v_x_3166_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3179_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v___x_3173_; 
lean_inc(v_x_3164_);
if (v_isShared_3171_ == 0)
{
lean_ctor_set_tag(v___x_3170_, 5);
lean_ctor_set(v___x_3170_, 1, v_x_3164_);
lean_ctor_set(v___x_3170_, 0, v_x_3165_);
v___x_3173_ = v___x_3170_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v_x_3165_);
lean_ctor_set(v_reuseFailAlloc_3178_, 1, v_x_3164_);
v___x_3173_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; 
v___x_3174_ = lean_unsigned_to_nat(0u);
v___x_3175_ = l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(v_head_3167_, v___x_3174_);
v___x_3176_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3176_, 0, v___x_3173_);
lean_ctor_set(v___x_3176_, 1, v___x_3175_);
v_x_3165_ = v___x_3176_;
v_x_3166_ = v_tail_3168_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7(lean_object* v_x_3180_, lean_object* v_x_3181_, lean_object* v_x_3182_){
_start:
{
if (lean_obj_tag(v_x_3182_) == 0)
{
lean_dec(v_x_3180_);
return v_x_3181_;
}
else
{
lean_object* v_head_3183_; lean_object* v_tail_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3195_; 
v_head_3183_ = lean_ctor_get(v_x_3182_, 0);
v_tail_3184_ = lean_ctor_get(v_x_3182_, 1);
v_isSharedCheck_3195_ = !lean_is_exclusive(v_x_3182_);
if (v_isSharedCheck_3195_ == 0)
{
v___x_3186_ = v_x_3182_;
v_isShared_3187_ = v_isSharedCheck_3195_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_tail_3184_);
lean_inc(v_head_3183_);
lean_dec(v_x_3182_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3195_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___x_3189_; 
lean_inc(v_x_3180_);
if (v_isShared_3187_ == 0)
{
lean_ctor_set_tag(v___x_3186_, 5);
lean_ctor_set(v___x_3186_, 1, v_x_3180_);
lean_ctor_set(v___x_3186_, 0, v_x_3181_);
v___x_3189_ = v___x_3186_;
goto v_reusejp_3188_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v_x_3181_);
lean_ctor_set(v_reuseFailAlloc_3194_, 1, v_x_3180_);
v___x_3189_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3188_;
}
v_reusejp_3188_:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; 
v___x_3190_ = lean_unsigned_to_nat(0u);
v___x_3191_ = l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(v_head_3183_, v___x_3190_);
v___x_3192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3192_, 0, v___x_3189_);
lean_ctor_set(v___x_3192_, 1, v___x_3191_);
v___x_3193_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7_spec__15(v_x_3180_, v___x_3192_, v_tail_3184_);
return v___x_3193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1(lean_object* v_x_3196_, lean_object* v_x_3197_){
_start:
{
if (lean_obj_tag(v_x_3196_) == 0)
{
lean_object* v___x_3198_; 
lean_dec(v_x_3197_);
v___x_3198_ = lean_box(0);
return v___x_3198_;
}
else
{
lean_object* v_tail_3199_; 
v_tail_3199_ = lean_ctor_get(v_x_3196_, 1);
if (lean_obj_tag(v_tail_3199_) == 0)
{
lean_object* v_head_3200_; lean_object* v___x_3201_; 
lean_dec(v_x_3197_);
v_head_3200_ = lean_ctor_get(v_x_3196_, 0);
lean_inc(v_head_3200_);
lean_dec_ref(v_x_3196_);
v___x_3201_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1___lam__0(v_head_3200_);
return v___x_3201_;
}
else
{
lean_object* v_head_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; 
lean_inc(v_tail_3199_);
v_head_3202_ = lean_ctor_get(v_x_3196_, 0);
lean_inc(v_head_3202_);
lean_dec_ref(v_x_3196_);
v___x_3203_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1___lam__0(v_head_3202_);
v___x_3204_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7(v_x_3197_, v___x_3203_, v_tail_3199_);
return v___x_3204_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(lean_object* v_xs_3205_){
_start:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; uint8_t v___x_3208_; 
v___x_3206_ = lean_array_get_size(v_xs_3205_);
v___x_3207_ = lean_unsigned_to_nat(0u);
v___x_3208_ = lean_nat_dec_eq(v___x_3206_, v___x_3207_);
if (v___x_3208_ == 0)
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; 
v___x_3209_ = lean_array_to_list(v_xs_3205_);
v___x_3210_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_3211_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1(v___x_3209_, v___x_3210_);
v___x_3212_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5);
v___x_3213_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6));
v___x_3214_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3214_, 0, v___x_3213_);
lean_ctor_set(v___x_3214_, 1, v___x_3211_);
v___x_3215_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_3216_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3216_, 0, v___x_3214_);
lean_ctor_set(v___x_3216_, 1, v___x_3215_);
v___x_3217_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3217_, 0, v___x_3212_);
lean_ctor_set(v___x_3217_, 1, v___x_3216_);
v___x_3218_ = l_Std_Format_fill(v___x_3217_);
return v___x_3218_;
}
else
{
lean_object* v___x_3219_; 
lean_dec_ref(v_xs_3205_);
v___x_3219_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9));
return v___x_3219_;
}
}
}
static lean_object* _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9(void){
_start:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3221_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0));
v___x_3222_ = lean_string_length(v___x_3221_);
return v___x_3222_;
}
}
static lean_object* _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10(void){
_start:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; 
v___x_3223_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9);
v___x_3224_ = lean_nat_to_int(v___x_3223_);
return v___x_3224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(lean_object* v_x_3230_){
_start:
{
lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; uint8_t v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; 
v___x_3231_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__6));
v___x_3232_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7);
v___x_3233_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_x_3230_);
v___x_3234_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3234_, 0, v___x_3232_);
lean_ctor_set(v___x_3234_, 1, v___x_3233_);
v___x_3235_ = 0;
v___x_3236_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3236_, 0, v___x_3234_);
lean_ctor_set_uint8(v___x_3236_, sizeof(void*)*1, v___x_3235_);
v___x_3237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3237_, 0, v___x_3231_);
lean_ctor_set(v___x_3237_, 1, v___x_3236_);
v___x_3238_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10);
v___x_3239_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_3240_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3239_);
lean_ctor_set(v___x_3240_, 1, v___x_3237_);
v___x_3241_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_3242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3242_, 0, v___x_3240_);
lean_ctor_set(v___x_3242_, 1, v___x_3241_);
v___x_3243_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3238_);
lean_ctor_set(v___x_3243_, 1, v___x_3242_);
v___x_3244_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3244_, 0, v___x_3243_);
lean_ctor_set_uint8(v___x_3244_, sizeof(void*)*1, v___x_3235_);
return v___x_3244_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14_spec__22(lean_object* v_x_3245_, lean_object* v_x_3246_, lean_object* v_x_3247_){
_start:
{
if (lean_obj_tag(v_x_3247_) == 0)
{
lean_dec(v_x_3245_);
return v_x_3246_;
}
else
{
lean_object* v_head_3248_; lean_object* v_tail_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3259_; 
v_head_3248_ = lean_ctor_get(v_x_3247_, 0);
v_tail_3249_ = lean_ctor_get(v_x_3247_, 1);
v_isSharedCheck_3259_ = !lean_is_exclusive(v_x_3247_);
if (v_isSharedCheck_3259_ == 0)
{
v___x_3251_ = v_x_3247_;
v_isShared_3252_ = v_isSharedCheck_3259_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_tail_3249_);
lean_inc(v_head_3248_);
lean_dec(v_x_3247_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3259_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v___x_3254_; 
lean_inc(v_x_3245_);
if (v_isShared_3252_ == 0)
{
lean_ctor_set_tag(v___x_3251_, 5);
lean_ctor_set(v___x_3251_, 1, v_x_3245_);
lean_ctor_set(v___x_3251_, 0, v_x_3246_);
v___x_3254_ = v___x_3251_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v_x_3246_);
lean_ctor_set(v_reuseFailAlloc_3258_, 1, v_x_3245_);
v___x_3254_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3255_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_head_3248_);
v___x_3256_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3254_);
lean_ctor_set(v___x_3256_, 1, v___x_3255_);
v_x_3246_ = v___x_3256_;
v_x_3247_ = v_tail_3249_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14(lean_object* v_x_3260_, lean_object* v_x_3261_, lean_object* v_x_3262_){
_start:
{
if (lean_obj_tag(v_x_3262_) == 0)
{
lean_dec(v_x_3260_);
return v_x_3261_;
}
else
{
lean_object* v_head_3263_; lean_object* v_tail_3264_; lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3274_; 
v_head_3263_ = lean_ctor_get(v_x_3262_, 0);
v_tail_3264_ = lean_ctor_get(v_x_3262_, 1);
v_isSharedCheck_3274_ = !lean_is_exclusive(v_x_3262_);
if (v_isSharedCheck_3274_ == 0)
{
v___x_3266_ = v_x_3262_;
v_isShared_3267_ = v_isSharedCheck_3274_;
goto v_resetjp_3265_;
}
else
{
lean_inc(v_tail_3264_);
lean_inc(v_head_3263_);
lean_dec(v_x_3262_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3274_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v___x_3269_; 
lean_inc(v_x_3260_);
if (v_isShared_3267_ == 0)
{
lean_ctor_set_tag(v___x_3266_, 5);
lean_ctor_set(v___x_3266_, 1, v_x_3260_);
lean_ctor_set(v___x_3266_, 0, v_x_3261_);
v___x_3269_ = v___x_3266_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3273_; 
v_reuseFailAlloc_3273_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3273_, 0, v_x_3261_);
lean_ctor_set(v_reuseFailAlloc_3273_, 1, v_x_3260_);
v___x_3269_ = v_reuseFailAlloc_3273_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; 
v___x_3270_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_head_3263_);
v___x_3271_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3269_);
lean_ctor_set(v___x_3271_, 1, v___x_3270_);
v___x_3272_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14_spec__22(v_x_3260_, v___x_3271_, v_tail_3264_);
return v___x_3272_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8(lean_object* v_x_3275_, lean_object* v_x_3276_){
_start:
{
if (lean_obj_tag(v_x_3275_) == 0)
{
lean_object* v___x_3277_; 
lean_dec(v_x_3276_);
v___x_3277_ = lean_box(0);
return v___x_3277_;
}
else
{
lean_object* v_tail_3278_; 
v_tail_3278_ = lean_ctor_get(v_x_3275_, 1);
if (lean_obj_tag(v_tail_3278_) == 0)
{
lean_object* v_head_3279_; lean_object* v___x_3280_; 
lean_dec(v_x_3276_);
v_head_3279_ = lean_ctor_get(v_x_3275_, 0);
lean_inc(v_head_3279_);
lean_dec_ref(v_x_3275_);
v___x_3280_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_head_3279_);
return v___x_3280_;
}
else
{
lean_object* v_head_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; 
lean_inc(v_tail_3278_);
v_head_3281_ = lean_ctor_get(v_x_3275_, 0);
lean_inc(v_head_3281_);
lean_dec_ref(v_x_3275_);
v___x_3282_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_head_3281_);
v___x_3283_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14(v_x_3276_, v___x_3282_, v_tail_3278_);
return v___x_3283_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3(lean_object* v_xs_3284_){
_start:
{
lean_object* v___x_3285_; lean_object* v___x_3286_; uint8_t v___x_3287_; 
v___x_3285_ = lean_array_get_size(v_xs_3284_);
v___x_3286_ = lean_unsigned_to_nat(0u);
v___x_3287_ = lean_nat_dec_eq(v___x_3285_, v___x_3286_);
if (v___x_3287_ == 0)
{
lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; 
v___x_3288_ = lean_array_to_list(v_xs_3284_);
v___x_3289_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_3290_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8(v___x_3288_, v___x_3289_);
v___x_3291_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5);
v___x_3292_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6));
v___x_3293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3292_);
lean_ctor_set(v___x_3293_, 1, v___x_3290_);
v___x_3294_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_3295_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3295_, 0, v___x_3293_);
lean_ctor_set(v___x_3295_, 1, v___x_3294_);
v___x_3296_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3291_);
lean_ctor_set(v___x_3296_, 1, v___x_3295_);
v___x_3297_ = l_Std_Format_fill(v___x_3296_);
return v___x_3297_;
}
else
{
lean_object* v___x_3298_; 
lean_dec_ref(v_xs_3284_);
v___x_3298_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9));
return v___x_3298_;
}
}
}
static lean_object* _init_l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12(void){
_start:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; 
v___x_3305_ = lean_unsigned_to_nat(0u);
v___x_3306_ = lean_nat_to_int(v___x_3305_);
return v___x_3306_;
}
}
static lean_object* _init_l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4(void){
_start:
{
lean_object* v___x_3322_; lean_object* v___x_3323_; 
v___x_3322_ = lean_unsigned_to_nat(8u);
v___x_3323_ = lean_nat_to_int(v___x_3322_);
return v___x_3323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(lean_object* v_x_3327_){
_start:
{
lean_object* v_term_3328_; lean_object* v_desc_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3361_; 
v_term_3328_ = lean_ctor_get(v_x_3327_, 0);
v_desc_3329_ = lean_ctor_get(v_x_3327_, 1);
v_isSharedCheck_3361_ = !lean_is_exclusive(v_x_3327_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3331_ = v_x_3327_;
v_isShared_3332_ = v_isSharedCheck_3361_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_desc_3329_);
lean_inc(v_term_3328_);
lean_dec(v_x_3327_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3361_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3338_; 
v___x_3333_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5));
v___x_3334_ = ((lean_object*)(l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__3));
v___x_3335_ = lean_obj_once(&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4, &l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4_once, _init_l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4);
v___x_3336_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(v_term_3328_);
if (v_isShared_3332_ == 0)
{
lean_ctor_set_tag(v___x_3331_, 4);
lean_ctor_set(v___x_3331_, 1, v___x_3336_);
lean_ctor_set(v___x_3331_, 0, v___x_3335_);
v___x_3338_ = v___x_3331_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v___x_3335_);
lean_ctor_set(v_reuseFailAlloc_3360_, 1, v___x_3336_);
v___x_3338_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
uint8_t v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; 
v___x_3339_ = 0;
v___x_3340_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3340_, 0, v___x_3338_);
lean_ctor_set_uint8(v___x_3340_, sizeof(void*)*1, v___x_3339_);
v___x_3341_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3341_, 0, v___x_3334_);
lean_ctor_set(v___x_3341_, 1, v___x_3340_);
v___x_3342_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2));
v___x_3343_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3341_);
lean_ctor_set(v___x_3343_, 1, v___x_3342_);
v___x_3344_ = lean_box(1);
v___x_3345_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3345_, 0, v___x_3343_);
lean_ctor_set(v___x_3345_, 1, v___x_3344_);
v___x_3346_ = ((lean_object*)(l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__6));
v___x_3347_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3345_);
lean_ctor_set(v___x_3347_, 1, v___x_3346_);
v___x_3348_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3348_, 0, v___x_3347_);
lean_ctor_set(v___x_3348_, 1, v___x_3333_);
v___x_3349_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_desc_3329_);
v___x_3350_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3335_);
lean_ctor_set(v___x_3350_, 1, v___x_3349_);
v___x_3351_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3351_, 0, v___x_3350_);
lean_ctor_set_uint8(v___x_3351_, sizeof(void*)*1, v___x_3339_);
v___x_3352_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3348_);
lean_ctor_set(v___x_3352_, 1, v___x_3351_);
v___x_3353_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10);
v___x_3354_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_3355_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3354_);
lean_ctor_set(v___x_3355_, 1, v___x_3352_);
v___x_3356_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_3357_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3357_, 0, v___x_3355_);
lean_ctor_set(v___x_3357_, 1, v___x_3356_);
v___x_3358_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3353_);
lean_ctor_set(v___x_3358_, 1, v___x_3357_);
v___x_3359_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3359_, 0, v___x_3358_);
lean_ctor_set_uint8(v___x_3359_, sizeof(void*)*1, v___x_3339_);
return v___x_3359_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18_spec__26(lean_object* v_x_3362_, lean_object* v_x_3363_, lean_object* v_x_3364_){
_start:
{
if (lean_obj_tag(v_x_3364_) == 0)
{
lean_dec(v_x_3362_);
return v_x_3363_;
}
else
{
lean_object* v_head_3365_; lean_object* v_tail_3366_; lean_object* v___x_3368_; uint8_t v_isShared_3369_; uint8_t v_isSharedCheck_3376_; 
v_head_3365_ = lean_ctor_get(v_x_3364_, 0);
v_tail_3366_ = lean_ctor_get(v_x_3364_, 1);
v_isSharedCheck_3376_ = !lean_is_exclusive(v_x_3364_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3368_ = v_x_3364_;
v_isShared_3369_ = v_isSharedCheck_3376_;
goto v_resetjp_3367_;
}
else
{
lean_inc(v_tail_3366_);
lean_inc(v_head_3365_);
lean_dec(v_x_3364_);
v___x_3368_ = lean_box(0);
v_isShared_3369_ = v_isSharedCheck_3376_;
goto v_resetjp_3367_;
}
v_resetjp_3367_:
{
lean_object* v___x_3371_; 
lean_inc(v_x_3362_);
if (v_isShared_3369_ == 0)
{
lean_ctor_set_tag(v___x_3368_, 5);
lean_ctor_set(v___x_3368_, 1, v_x_3362_);
lean_ctor_set(v___x_3368_, 0, v_x_3363_);
v___x_3371_ = v___x_3368_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_x_3363_);
lean_ctor_set(v_reuseFailAlloc_3375_, 1, v_x_3362_);
v___x_3371_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
lean_object* v___x_3372_; lean_object* v___x_3373_; 
v___x_3372_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_head_3365_);
v___x_3373_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3373_, 0, v___x_3371_);
lean_ctor_set(v___x_3373_, 1, v___x_3372_);
v_x_3363_ = v___x_3373_;
v_x_3364_ = v_tail_3366_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18(lean_object* v_x_3377_, lean_object* v_x_3378_, lean_object* v_x_3379_){
_start:
{
if (lean_obj_tag(v_x_3379_) == 0)
{
lean_dec(v_x_3377_);
return v_x_3378_;
}
else
{
lean_object* v_head_3380_; lean_object* v_tail_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3391_; 
v_head_3380_ = lean_ctor_get(v_x_3379_, 0);
v_tail_3381_ = lean_ctor_get(v_x_3379_, 1);
v_isSharedCheck_3391_ = !lean_is_exclusive(v_x_3379_);
if (v_isSharedCheck_3391_ == 0)
{
v___x_3383_ = v_x_3379_;
v_isShared_3384_ = v_isSharedCheck_3391_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_tail_3381_);
lean_inc(v_head_3380_);
lean_dec(v_x_3379_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3391_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
lean_inc(v_x_3377_);
if (v_isShared_3384_ == 0)
{
lean_ctor_set_tag(v___x_3383_, 5);
lean_ctor_set(v___x_3383_, 1, v_x_3377_);
lean_ctor_set(v___x_3383_, 0, v_x_3378_);
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v_x_3378_);
lean_ctor_set(v_reuseFailAlloc_3390_, 1, v_x_3377_);
v___x_3386_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; 
v___x_3387_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_head_3380_);
v___x_3388_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3388_, 0, v___x_3386_);
lean_ctor_set(v___x_3388_, 1, v___x_3387_);
v___x_3389_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18_spec__26(v_x_3377_, v___x_3388_, v_tail_3381_);
return v___x_3389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11(lean_object* v_x_3392_, lean_object* v_x_3393_){
_start:
{
if (lean_obj_tag(v_x_3392_) == 0)
{
lean_object* v___x_3394_; 
lean_dec(v_x_3393_);
v___x_3394_ = lean_box(0);
return v___x_3394_;
}
else
{
lean_object* v_tail_3395_; 
v_tail_3395_ = lean_ctor_get(v_x_3392_, 1);
if (lean_obj_tag(v_tail_3395_) == 0)
{
lean_object* v_head_3396_; lean_object* v___x_3397_; 
lean_dec(v_x_3393_);
v_head_3396_ = lean_ctor_get(v_x_3392_, 0);
lean_inc(v_head_3396_);
lean_dec_ref(v_x_3392_);
v___x_3397_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_head_3396_);
return v___x_3397_;
}
else
{
lean_object* v_head_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; 
lean_inc(v_tail_3395_);
v_head_3398_ = lean_ctor_get(v_x_3392_, 0);
lean_inc(v_head_3398_);
lean_dec_ref(v_x_3392_);
v___x_3399_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_head_3398_);
v___x_3400_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18(v_x_3393_, v___x_3399_, v_tail_3395_);
return v___x_3400_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4(lean_object* v_xs_3401_){
_start:
{
lean_object* v___x_3402_; lean_object* v___x_3403_; uint8_t v___x_3404_; 
v___x_3402_ = lean_array_get_size(v_xs_3401_);
v___x_3403_ = lean_unsigned_to_nat(0u);
v___x_3404_ = lean_nat_dec_eq(v___x_3402_, v___x_3403_);
if (v___x_3404_ == 0)
{
lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3405_ = lean_array_to_list(v_xs_3401_);
v___x_3406_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_3407_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11(v___x_3405_, v___x_3406_);
v___x_3408_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5);
v___x_3409_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6));
v___x_3410_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3410_, 0, v___x_3409_);
lean_ctor_set(v___x_3410_, 1, v___x_3407_);
v___x_3411_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_3412_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3412_, 0, v___x_3410_);
lean_ctor_set(v___x_3412_, 1, v___x_3411_);
v___x_3413_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3413_, 0, v___x_3408_);
lean_ctor_set(v___x_3413_, 1, v___x_3412_);
v___x_3414_ = l_Std_Format_fill(v___x_3413_);
return v___x_3414_;
}
else
{
lean_object* v___x_3415_; 
lean_dec_ref(v_xs_3401_);
v___x_3415_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9));
return v___x_3415_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(lean_object* v_x_3434_, lean_object* v_prec_3435_){
_start:
{
switch(lean_obj_tag(v_x_3434_))
{
case 0:
{
lean_object* v_contents_3436_; lean_object* v___y_3438_; lean_object* v___x_3446_; uint8_t v___x_3447_; 
v_contents_3436_ = lean_ctor_get(v_x_3434_, 0);
lean_inc_ref(v_contents_3436_);
lean_dec_ref(v_x_3434_);
v___x_3446_ = lean_unsigned_to_nat(1024u);
v___x_3447_ = lean_nat_dec_le(v___x_3446_, v_prec_3435_);
if (v___x_3447_ == 0)
{
lean_object* v___x_3448_; 
v___x_3448_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_3438_ = v___x_3448_;
goto v___jp_3437_;
}
else
{
lean_object* v___x_3449_; 
v___x_3449_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_3438_ = v___x_3449_;
goto v___jp_3437_;
}
v___jp_3437_:
{
lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; uint8_t v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3439_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__2));
v___x_3440_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(v_contents_3436_);
v___x_3441_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3441_, 0, v___x_3439_);
lean_ctor_set(v___x_3441_, 1, v___x_3440_);
v___x_3442_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3442_, 0, v___y_3438_);
lean_ctor_set(v___x_3442_, 1, v___x_3441_);
v___x_3443_ = 0;
v___x_3444_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3444_, 0, v___x_3442_);
lean_ctor_set_uint8(v___x_3444_, sizeof(void*)*1, v___x_3443_);
v___x_3445_ = l_Repr_addAppParen(v___x_3444_, v_prec_3435_);
return v___x_3445_;
}
}
case 1:
{
lean_object* v_content_3450_; lean_object* v___x_3452_; uint8_t v_isShared_3453_; uint8_t v_isSharedCheck_3470_; 
v_content_3450_ = lean_ctor_get(v_x_3434_, 0);
v_isSharedCheck_3470_ = !lean_is_exclusive(v_x_3434_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3452_ = v_x_3434_;
v_isShared_3453_ = v_isSharedCheck_3470_;
goto v_resetjp_3451_;
}
else
{
lean_inc(v_content_3450_);
lean_dec(v_x_3434_);
v___x_3452_ = lean_box(0);
v_isShared_3453_ = v_isSharedCheck_3470_;
goto v_resetjp_3451_;
}
v_resetjp_3451_:
{
lean_object* v___y_3455_; lean_object* v___x_3466_; uint8_t v___x_3467_; 
v___x_3466_ = lean_unsigned_to_nat(1024u);
v___x_3467_ = lean_nat_dec_le(v___x_3466_, v_prec_3435_);
if (v___x_3467_ == 0)
{
lean_object* v___x_3468_; 
v___x_3468_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_3455_ = v___x_3468_;
goto v___jp_3454_;
}
else
{
lean_object* v___x_3469_; 
v___x_3469_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_3455_ = v___x_3469_;
goto v___jp_3454_;
}
v___jp_3454_:
{
lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3459_; 
v___x_3456_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__5));
v___x_3457_ = l_String_quote(v_content_3450_);
if (v_isShared_3453_ == 0)
{
lean_ctor_set_tag(v___x_3452_, 3);
lean_ctor_set(v___x_3452_, 0, v___x_3457_);
v___x_3459_ = v___x_3452_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v___x_3457_);
v___x_3459_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
lean_object* v___x_3460_; lean_object* v___x_3461_; uint8_t v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; 
v___x_3460_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3456_);
lean_ctor_set(v___x_3460_, 1, v___x_3459_);
v___x_3461_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3461_, 0, v___y_3455_);
lean_ctor_set(v___x_3461_, 1, v___x_3460_);
v___x_3462_ = 0;
v___x_3463_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3463_, 0, v___x_3461_);
lean_ctor_set_uint8(v___x_3463_, sizeof(void*)*1, v___x_3462_);
v___x_3464_ = l_Repr_addAppParen(v___x_3463_, v_prec_3435_);
return v___x_3464_;
}
}
}
}
case 2:
{
lean_object* v_items_3471_; lean_object* v___y_3473_; lean_object* v___x_3481_; uint8_t v___x_3482_; 
v_items_3471_ = lean_ctor_get(v_x_3434_, 0);
lean_inc_ref(v_items_3471_);
lean_dec_ref(v_x_3434_);
v___x_3481_ = lean_unsigned_to_nat(1024u);
v___x_3482_ = lean_nat_dec_le(v___x_3481_, v_prec_3435_);
if (v___x_3482_ == 0)
{
lean_object* v___x_3483_; 
v___x_3483_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_3473_ = v___x_3483_;
goto v___jp_3472_;
}
else
{
lean_object* v___x_3484_; 
v___x_3484_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_3473_ = v___x_3484_;
goto v___jp_3472_;
}
v___jp_3472_:
{
lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; uint8_t v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; 
v___x_3474_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__8));
v___x_3475_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3(v_items_3471_);
v___x_3476_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3476_, 0, v___x_3474_);
lean_ctor_set(v___x_3476_, 1, v___x_3475_);
v___x_3477_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3477_, 0, v___y_3473_);
lean_ctor_set(v___x_3477_, 1, v___x_3476_);
v___x_3478_ = 0;
v___x_3479_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3479_, 0, v___x_3477_);
lean_ctor_set_uint8(v___x_3479_, sizeof(void*)*1, v___x_3478_);
v___x_3480_ = l_Repr_addAppParen(v___x_3479_, v_prec_3435_);
return v___x_3480_;
}
}
case 3:
{
lean_object* v_start_3485_; lean_object* v_items_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3521_; 
v_start_3485_ = lean_ctor_get(v_x_3434_, 0);
v_items_3486_ = lean_ctor_get(v_x_3434_, 1);
v_isSharedCheck_3521_ = !lean_is_exclusive(v_x_3434_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3488_ = v_x_3434_;
v_isShared_3489_ = v_isSharedCheck_3521_;
goto v_resetjp_3487_;
}
else
{
lean_inc(v_items_3486_);
lean_inc(v_start_3485_);
lean_dec(v_x_3434_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3521_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
lean_object* v___y_3491_; lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v___y_3494_; lean_object* v___y_3506_; lean_object* v___x_3517_; uint8_t v___x_3518_; 
v___x_3517_ = lean_unsigned_to_nat(1024u);
v___x_3518_ = lean_nat_dec_le(v___x_3517_, v_prec_3435_);
if (v___x_3518_ == 0)
{
lean_object* v___x_3519_; 
v___x_3519_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_3506_ = v___x_3519_;
goto v___jp_3505_;
}
else
{
lean_object* v___x_3520_; 
v___x_3520_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_3506_ = v___x_3520_;
goto v___jp_3505_;
}
v___jp_3490_:
{
lean_object* v___x_3496_; 
if (v_isShared_3489_ == 0)
{
lean_ctor_set_tag(v___x_3488_, 5);
lean_ctor_set(v___x_3488_, 1, v___y_3494_);
lean_ctor_set(v___x_3488_, 0, v___y_3492_);
v___x_3496_ = v___x_3488_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v___y_3492_);
lean_ctor_set(v_reuseFailAlloc_3504_, 1, v___y_3494_);
v___x_3496_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; uint8_t v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3497_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3496_);
lean_ctor_set(v___x_3497_, 1, v___y_3493_);
v___x_3498_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3(v_items_3486_);
v___x_3499_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3499_, 0, v___x_3497_);
lean_ctor_set(v___x_3499_, 1, v___x_3498_);
v___x_3500_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3500_, 0, v___y_3491_);
lean_ctor_set(v___x_3500_, 1, v___x_3499_);
v___x_3501_ = 0;
v___x_3502_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3502_, 0, v___x_3500_);
lean_ctor_set_uint8(v___x_3502_, sizeof(void*)*1, v___x_3501_);
v___x_3503_ = l_Repr_addAppParen(v___x_3502_, v_prec_3435_);
return v___x_3503_;
}
}
v___jp_3505_:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; uint8_t v___x_3510_; 
v___x_3507_ = lean_box(1);
v___x_3508_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__11));
v___x_3509_ = lean_obj_once(&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12, &l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12_once, _init_l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12);
v___x_3510_ = lean_int_dec_lt(v_start_3485_, v___x_3509_);
if (v___x_3510_ == 0)
{
lean_object* v___x_3511_; lean_object* v___x_3512_; 
v___x_3511_ = l_Int_repr(v_start_3485_);
lean_dec(v_start_3485_);
v___x_3512_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3511_);
v___y_3491_ = v___y_3506_;
v___y_3492_ = v___x_3508_;
v___y_3493_ = v___x_3507_;
v___y_3494_ = v___x_3512_;
goto v___jp_3490_;
}
else
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3513_ = lean_unsigned_to_nat(1024u);
v___x_3514_ = l_Int_repr(v_start_3485_);
lean_dec(v_start_3485_);
v___x_3515_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3515_, 0, v___x_3514_);
v___x_3516_ = l_Repr_addAppParen(v___x_3515_, v___x_3513_);
v___y_3491_ = v___y_3506_;
v___y_3492_ = v___x_3508_;
v___y_3493_ = v___x_3507_;
v___y_3494_ = v___x_3516_;
goto v___jp_3490_;
}
}
}
}
case 4:
{
lean_object* v_items_3522_; lean_object* v___y_3524_; lean_object* v___x_3532_; uint8_t v___x_3533_; 
v_items_3522_ = lean_ctor_get(v_x_3434_, 0);
lean_inc_ref(v_items_3522_);
lean_dec_ref(v_x_3434_);
v___x_3532_ = lean_unsigned_to_nat(1024u);
v___x_3533_ = lean_nat_dec_le(v___x_3532_, v_prec_3435_);
if (v___x_3533_ == 0)
{
lean_object* v___x_3534_; 
v___x_3534_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_3524_ = v___x_3534_;
goto v___jp_3523_;
}
else
{
lean_object* v___x_3535_; 
v___x_3535_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_3524_ = v___x_3535_;
goto v___jp_3523_;
}
v___jp_3523_:
{
lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; uint8_t v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; 
v___x_3525_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__15));
v___x_3526_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4(v_items_3522_);
v___x_3527_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3527_, 0, v___x_3525_);
lean_ctor_set(v___x_3527_, 1, v___x_3526_);
v___x_3528_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3528_, 0, v___y_3524_);
lean_ctor_set(v___x_3528_, 1, v___x_3527_);
v___x_3529_ = 0;
v___x_3530_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3530_, 0, v___x_3528_);
lean_ctor_set_uint8(v___x_3530_, sizeof(void*)*1, v___x_3529_);
v___x_3531_ = l_Repr_addAppParen(v___x_3530_, v_prec_3435_);
return v___x_3531_;
}
}
case 5:
{
lean_object* v_items_3536_; lean_object* v___y_3538_; lean_object* v___x_3546_; uint8_t v___x_3547_; 
v_items_3536_ = lean_ctor_get(v_x_3434_, 0);
lean_inc_ref(v_items_3536_);
lean_dec_ref(v_x_3434_);
v___x_3546_ = lean_unsigned_to_nat(1024u);
v___x_3547_ = lean_nat_dec_le(v___x_3546_, v_prec_3435_);
if (v___x_3547_ == 0)
{
lean_object* v___x_3548_; 
v___x_3548_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_3538_ = v___x_3548_;
goto v___jp_3537_;
}
else
{
lean_object* v___x_3549_; 
v___x_3549_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_3538_ = v___x_3549_;
goto v___jp_3537_;
}
v___jp_3537_:
{
lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; uint8_t v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; 
v___x_3539_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__18));
v___x_3540_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_items_3536_);
v___x_3541_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3539_);
lean_ctor_set(v___x_3541_, 1, v___x_3540_);
v___x_3542_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3542_, 0, v___y_3538_);
lean_ctor_set(v___x_3542_, 1, v___x_3541_);
v___x_3543_ = 0;
v___x_3544_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3544_, 0, v___x_3542_);
lean_ctor_set_uint8(v___x_3544_, sizeof(void*)*1, v___x_3543_);
v___x_3545_ = l_Repr_addAppParen(v___x_3544_, v_prec_3435_);
return v___x_3545_;
}
}
case 6:
{
lean_object* v_content_3550_; lean_object* v___y_3552_; lean_object* v___x_3560_; uint8_t v___x_3561_; 
v_content_3550_ = lean_ctor_get(v_x_3434_, 0);
lean_inc_ref(v_content_3550_);
lean_dec_ref(v_x_3434_);
v___x_3560_ = lean_unsigned_to_nat(1024u);
v___x_3561_ = lean_nat_dec_le(v___x_3560_, v_prec_3435_);
if (v___x_3561_ == 0)
{
lean_object* v___x_3562_; 
v___x_3562_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_3552_ = v___x_3562_;
goto v___jp_3551_;
}
else
{
lean_object* v___x_3563_; 
v___x_3563_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_3552_ = v___x_3563_;
goto v___jp_3551_;
}
v___jp_3551_:
{
lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; uint8_t v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3553_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__21));
v___x_3554_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_content_3550_);
v___x_3555_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3555_, 0, v___x_3553_);
lean_ctor_set(v___x_3555_, 1, v___x_3554_);
v___x_3556_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3556_, 0, v___y_3552_);
lean_ctor_set(v___x_3556_, 1, v___x_3555_);
v___x_3557_ = 0;
v___x_3558_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3558_, 0, v___x_3556_);
lean_ctor_set_uint8(v___x_3558_, sizeof(void*)*1, v___x_3557_);
v___x_3559_ = l_Repr_addAppParen(v___x_3558_, v_prec_3435_);
return v___x_3559_;
}
}
default: 
{
lean_object* v_container_3564_; lean_object* v_content_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3613_; 
v_container_3564_ = lean_ctor_get(v_x_3434_, 0);
v_content_3565_ = lean_ctor_get(v_x_3434_, 1);
v_isSharedCheck_3613_ = !lean_is_exclusive(v_x_3434_);
if (v_isSharedCheck_3613_ == 0)
{
v___x_3567_ = v_x_3434_;
v_isShared_3568_ = v_isSharedCheck_3613_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_content_3565_);
lean_inc(v_container_3564_);
lean_dec(v_x_3434_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3613_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___y_3570_; lean_object* v___x_3609_; uint8_t v___x_3610_; 
v___x_3609_ = lean_unsigned_to_nat(1024u);
v___x_3610_ = lean_nat_dec_le(v___x_3609_, v_prec_3435_);
if (v___x_3610_ == 0)
{
lean_object* v___x_3611_; 
v___x_3611_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_3570_ = v___x_3611_;
goto v___jp_3569_;
}
else
{
lean_object* v___x_3612_; 
v___x_3612_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_3570_ = v___x_3612_;
goto v___jp_3569_;
}
v___jp_3569_:
{
lean_object* v_name_3571_; lean_object* v_val_3572_; lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3608_; 
v_name_3571_ = lean_ctor_get(v_container_3564_, 0);
v_val_3572_ = lean_ctor_get(v_container_3564_, 1);
v_isSharedCheck_3608_ = !lean_is_exclusive(v_container_3564_);
if (v_isSharedCheck_3608_ == 0)
{
v___x_3574_ = v_container_3564_;
v_isShared_3575_ = v_isSharedCheck_3608_;
goto v_resetjp_3573_;
}
else
{
lean_inc(v_val_3572_);
lean_inc(v_name_3571_);
lean_dec(v_container_3564_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3608_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3582_; 
v___x_3576_ = lean_box(1);
v___x_3577_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__24));
v___x_3578_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__2));
v___x_3579_ = lean_unsigned_to_nat(0u);
v___x_3580_ = l_Lean_Name_reprPrec(v_name_3571_, v___x_3579_);
if (v_isShared_3575_ == 0)
{
lean_ctor_set_tag(v___x_3574_, 5);
lean_ctor_set(v___x_3574_, 1, v___x_3580_);
lean_ctor_set(v___x_3574_, 0, v___x_3578_);
v___x_3582_ = v___x_3574_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v___x_3578_);
lean_ctor_set(v_reuseFailAlloc_3607_, 1, v___x_3580_);
v___x_3582_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
lean_object* v___x_3583_; uint8_t v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3587_; 
v___x_3583_ = l_Std_Format_nestD(v___x_3582_);
v___x_3584_ = 0;
v___x_3585_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3585_, 0, v___x_3583_);
lean_ctor_set_uint8(v___x_3585_, sizeof(void*)*1, v___x_3584_);
if (v_isShared_3568_ == 0)
{
lean_ctor_set_tag(v___x_3567_, 5);
lean_ctor_set(v___x_3567_, 1, v___x_3576_);
lean_ctor_set(v___x_3567_, 0, v___x_3585_);
v___x_3587_ = v___x_3567_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v___x_3585_);
lean_ctor_set(v_reuseFailAlloc_3606_, 1, v___x_3576_);
v___x_3587_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; 
v___x_3588_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__8));
v___x_3589_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_3572_);
lean_dec(v_val_3572_);
v___x_3590_ = l_Lean_Name_reprPrec(v___x_3589_, v___x_3579_);
v___x_3591_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3591_, 0, v___x_3588_);
lean_ctor_set(v___x_3591_, 1, v___x_3590_);
v___x_3592_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__10));
v___x_3593_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3593_, 0, v___x_3591_);
lean_ctor_set(v___x_3593_, 1, v___x_3592_);
v___x_3594_ = l_Std_Format_nestD(v___x_3593_);
v___x_3595_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3595_, 0, v___x_3594_);
lean_ctor_set_uint8(v___x_3595_, sizeof(void*)*1, v___x_3584_);
v___x_3596_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3596_, 0, v___x_3587_);
lean_ctor_set(v___x_3596_, 1, v___x_3595_);
v___x_3597_ = l_Std_Format_nestD(v___x_3596_);
v___x_3598_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3598_, 0, v___x_3597_);
lean_ctor_set_uint8(v___x_3598_, sizeof(void*)*1, v___x_3584_);
v___x_3599_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3599_, 0, v___x_3577_);
lean_ctor_set(v___x_3599_, 1, v___x_3598_);
v___x_3600_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3600_, 0, v___x_3599_);
lean_ctor_set(v___x_3600_, 1, v___x_3576_);
v___x_3601_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_content_3565_);
v___x_3602_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3602_, 0, v___x_3600_);
lean_ctor_set(v___x_3602_, 1, v___x_3601_);
v___x_3603_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3603_, 0, v___y_3570_);
lean_ctor_set(v___x_3603_, 1, v___x_3602_);
v___x_3604_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3604_, 0, v___x_3603_);
lean_ctor_set_uint8(v___x_3604_, sizeof(void*)*1, v___x_3584_);
v___x_3605_ = l_Repr_addAppParen(v___x_3604_, v_prec_3435_);
return v___x_3605_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1___lam__0(lean_object* v___y_3614_){
_start:
{
lean_object* v___x_3615_; lean_object* v___x_3616_; 
v___x_3615_ = lean_unsigned_to_nat(0u);
v___x_3616_ = l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(v___y_3614_, v___x_3615_);
return v___x_3616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___boxed(lean_object* v_x_3617_, lean_object* v_prec_3618_){
_start:
{
lean_object* v_res_3619_; 
v_res_3619_ = l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(v_x_3617_, v_prec_3618_);
lean_dec(v_prec_3618_);
return v_res_3619_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0(lean_object* v_xs_3620_){
_start:
{
lean_object* v___x_3621_; lean_object* v___x_3622_; uint8_t v___x_3623_; 
v___x_3621_ = lean_array_get_size(v_xs_3620_);
v___x_3622_ = lean_unsigned_to_nat(0u);
v___x_3623_ = lean_nat_dec_eq(v___x_3621_, v___x_3622_);
if (v___x_3623_ == 0)
{
lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; 
v___x_3624_ = lean_array_to_list(v_xs_3620_);
v___x_3625_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_3626_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1(v___x_3624_, v___x_3625_);
v___x_3627_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5);
v___x_3628_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6));
v___x_3629_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3629_, 0, v___x_3628_);
lean_ctor_set(v___x_3629_, 1, v___x_3626_);
v___x_3630_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_3631_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3631_, 0, v___x_3629_);
lean_ctor_set(v___x_3631_, 1, v___x_3630_);
v___x_3632_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3632_, 0, v___x_3627_);
lean_ctor_set(v___x_3632_, 1, v___x_3631_);
v___x_3633_ = l_Std_Format_fill(v___x_3632_);
return v___x_3633_;
}
else
{
lean_object* v___x_3634_; 
lean_dec_ref(v_xs_3620_);
v___x_3634_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9));
return v___x_3634_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(lean_object* v_x_3638_){
_start:
{
lean_object* v___x_3639_; 
v___x_3639_ = ((lean_object*)(l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__1));
return v___x_3639_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___boxed(lean_object* v_x_3640_){
_start:
{
lean_object* v_res_3641_; 
v_res_3641_ = l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(v_x_3640_);
lean_dec(v_x_3640_);
return v_res_3641_;
}
}
static lean_object* _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4(void){
_start:
{
lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3651_ = lean_unsigned_to_nat(9u);
v___x_3652_ = lean_nat_to_int(v___x_3651_);
return v___x_3652_;
}
}
static lean_object* _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7(void){
_start:
{
lean_object* v___x_3656_; lean_object* v___x_3657_; 
v___x_3656_ = lean_unsigned_to_nat(15u);
v___x_3657_ = lean_nat_to_int(v___x_3656_);
return v___x_3657_;
}
}
static lean_object* _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12(void){
_start:
{
lean_object* v___x_3664_; lean_object* v___x_3665_; 
v___x_3664_ = lean_unsigned_to_nat(11u);
v___x_3665_ = lean_nat_to_int(v___x_3664_);
return v___x_3665_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34(lean_object* v_x_3669_, lean_object* v_x_3670_, lean_object* v_x_3671_){
_start:
{
if (lean_obj_tag(v_x_3671_) == 0)
{
lean_dec(v_x_3669_);
return v_x_3670_;
}
else
{
lean_object* v_head_3672_; lean_object* v_tail_3673_; lean_object* v___x_3675_; uint8_t v_isShared_3676_; uint8_t v_isSharedCheck_3683_; 
v_head_3672_ = lean_ctor_get(v_x_3671_, 0);
v_tail_3673_ = lean_ctor_get(v_x_3671_, 1);
v_isSharedCheck_3683_ = !lean_is_exclusive(v_x_3671_);
if (v_isSharedCheck_3683_ == 0)
{
v___x_3675_ = v_x_3671_;
v_isShared_3676_ = v_isSharedCheck_3683_;
goto v_resetjp_3674_;
}
else
{
lean_inc(v_tail_3673_);
lean_inc(v_head_3672_);
lean_dec(v_x_3671_);
v___x_3675_ = lean_box(0);
v_isShared_3676_ = v_isSharedCheck_3683_;
goto v_resetjp_3674_;
}
v_resetjp_3674_:
{
lean_object* v___x_3678_; 
lean_inc(v_x_3669_);
if (v_isShared_3676_ == 0)
{
lean_ctor_set_tag(v___x_3675_, 5);
lean_ctor_set(v___x_3675_, 1, v_x_3669_);
lean_ctor_set(v___x_3675_, 0, v_x_3670_);
v___x_3678_ = v___x_3675_;
goto v_reusejp_3677_;
}
else
{
lean_object* v_reuseFailAlloc_3682_; 
v_reuseFailAlloc_3682_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3682_, 0, v_x_3670_);
lean_ctor_set(v_reuseFailAlloc_3682_, 1, v_x_3669_);
v___x_3678_ = v_reuseFailAlloc_3682_;
goto v_reusejp_3677_;
}
v_reusejp_3677_:
{
lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; 
v___x_3679_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_head_3672_);
v___x_3680_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3678_);
lean_ctor_set(v___x_3680_, 1, v___x_3679_);
v___x_3681_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34_spec__35(v_x_3669_, v___x_3680_, v_tail_3673_);
return v___x_3681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31(lean_object* v_x_3684_, lean_object* v_x_3685_){
_start:
{
if (lean_obj_tag(v_x_3684_) == 0)
{
lean_object* v___x_3686_; 
lean_dec(v_x_3685_);
v___x_3686_ = lean_box(0);
return v___x_3686_;
}
else
{
lean_object* v_tail_3687_; 
v_tail_3687_ = lean_ctor_get(v_x_3684_, 1);
if (lean_obj_tag(v_tail_3687_) == 0)
{
lean_object* v_head_3688_; lean_object* v___x_3689_; 
lean_dec(v_x_3685_);
v_head_3688_ = lean_ctor_get(v_x_3684_, 0);
lean_inc(v_head_3688_);
lean_dec_ref(v_x_3684_);
v___x_3689_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_head_3688_);
return v___x_3689_;
}
else
{
lean_object* v_head_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; 
lean_inc(v_tail_3687_);
v_head_3690_ = lean_ctor_get(v_x_3684_, 0);
lean_inc(v_head_3690_);
lean_dec_ref(v_x_3684_);
v___x_3691_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_head_3690_);
v___x_3692_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34(v_x_3685_, v___x_3691_, v_tail_3687_);
return v___x_3692_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25(lean_object* v_xs_3693_){
_start:
{
lean_object* v___x_3694_; lean_object* v___x_3695_; uint8_t v___x_3696_; 
v___x_3694_ = lean_array_get_size(v_xs_3693_);
v___x_3695_ = lean_unsigned_to_nat(0u);
v___x_3696_ = lean_nat_dec_eq(v___x_3694_, v___x_3695_);
if (v___x_3696_ == 0)
{
lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3697_ = lean_array_to_list(v_xs_3693_);
v___x_3698_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_3699_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31(v___x_3697_, v___x_3698_);
v___x_3700_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5);
v___x_3701_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6));
v___x_3702_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3702_, 0, v___x_3701_);
lean_ctor_set(v___x_3702_, 1, v___x_3699_);
v___x_3703_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_3704_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3704_, 0, v___x_3702_);
lean_ctor_set(v___x_3704_, 1, v___x_3703_);
v___x_3705_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3705_, 0, v___x_3700_);
lean_ctor_set(v___x_3705_, 1, v___x_3704_);
v___x_3706_ = l_Std_Format_fill(v___x_3705_);
return v___x_3706_;
}
else
{
lean_object* v___x_3707_; 
lean_dec_ref(v_xs_3693_);
v___x_3707_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9));
return v___x_3707_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(lean_object* v_x_3708_){
_start:
{
lean_object* v_title_3709_; lean_object* v_titleString_3710_; lean_object* v_metadata_3711_; lean_object* v_content_3712_; lean_object* v_subParts_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; uint8_t v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
v_title_3709_ = lean_ctor_get(v_x_3708_, 0);
lean_inc_ref(v_title_3709_);
v_titleString_3710_ = lean_ctor_get(v_x_3708_, 1);
lean_inc_ref(v_titleString_3710_);
v_metadata_3711_ = lean_ctor_get(v_x_3708_, 2);
lean_inc(v_metadata_3711_);
v_content_3712_ = lean_ctor_get(v_x_3708_, 3);
lean_inc_ref(v_content_3712_);
v_subParts_3713_ = lean_ctor_get(v_x_3708_, 4);
lean_inc_ref(v_subParts_3713_);
lean_dec_ref(v_x_3708_);
v___x_3714_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5));
v___x_3715_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__3));
v___x_3716_ = lean_obj_once(&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4, &l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4_once, _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4);
v___x_3717_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(v_title_3709_);
v___x_3718_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3718_, 0, v___x_3716_);
lean_ctor_set(v___x_3718_, 1, v___x_3717_);
v___x_3719_ = 0;
v___x_3720_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3720_, 0, v___x_3718_);
lean_ctor_set_uint8(v___x_3720_, sizeof(void*)*1, v___x_3719_);
v___x_3721_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3721_, 0, v___x_3715_);
lean_ctor_set(v___x_3721_, 1, v___x_3720_);
v___x_3722_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2));
v___x_3723_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3723_, 0, v___x_3721_);
lean_ctor_set(v___x_3723_, 1, v___x_3722_);
v___x_3724_ = lean_box(1);
v___x_3725_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3723_);
lean_ctor_set(v___x_3725_, 1, v___x_3724_);
v___x_3726_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__6));
v___x_3727_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3727_, 0, v___x_3725_);
lean_ctor_set(v___x_3727_, 1, v___x_3726_);
v___x_3728_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3728_, 0, v___x_3727_);
lean_ctor_set(v___x_3728_, 1, v___x_3714_);
v___x_3729_ = lean_obj_once(&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7, &l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7_once, _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7);
v___x_3730_ = l_String_quote(v_titleString_3710_);
v___x_3731_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3730_);
v___x_3732_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3729_);
lean_ctor_set(v___x_3732_, 1, v___x_3731_);
v___x_3733_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3733_, 0, v___x_3732_);
lean_ctor_set_uint8(v___x_3733_, sizeof(void*)*1, v___x_3719_);
v___x_3734_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3734_, 0, v___x_3728_);
lean_ctor_set(v___x_3734_, 1, v___x_3733_);
v___x_3735_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3734_);
lean_ctor_set(v___x_3735_, 1, v___x_3722_);
v___x_3736_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3735_);
lean_ctor_set(v___x_3736_, 1, v___x_3724_);
v___x_3737_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__9));
v___x_3738_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3738_, 0, v___x_3736_);
lean_ctor_set(v___x_3738_, 1, v___x_3737_);
v___x_3739_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3739_, 0, v___x_3738_);
lean_ctor_set(v___x_3739_, 1, v___x_3714_);
v___x_3740_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7);
v___x_3741_ = l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(v_metadata_3711_);
lean_dec(v_metadata_3711_);
v___x_3742_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3740_);
lean_ctor_set(v___x_3742_, 1, v___x_3741_);
v___x_3743_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3743_, 0, v___x_3742_);
lean_ctor_set_uint8(v___x_3743_, sizeof(void*)*1, v___x_3719_);
v___x_3744_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3744_, 0, v___x_3739_);
lean_ctor_set(v___x_3744_, 1, v___x_3743_);
v___x_3745_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3745_, 0, v___x_3744_);
lean_ctor_set(v___x_3745_, 1, v___x_3722_);
v___x_3746_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3746_, 0, v___x_3745_);
lean_ctor_set(v___x_3746_, 1, v___x_3724_);
v___x_3747_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__11));
v___x_3748_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3746_);
lean_ctor_set(v___x_3748_, 1, v___x_3747_);
v___x_3749_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3749_, 0, v___x_3748_);
lean_ctor_set(v___x_3749_, 1, v___x_3714_);
v___x_3750_ = lean_obj_once(&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12, &l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12_once, _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12);
v___x_3751_ = l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0(v_content_3712_);
v___x_3752_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3752_, 0, v___x_3750_);
lean_ctor_set(v___x_3752_, 1, v___x_3751_);
v___x_3753_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3753_, 0, v___x_3752_);
lean_ctor_set_uint8(v___x_3753_, sizeof(void*)*1, v___x_3719_);
v___x_3754_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3754_, 0, v___x_3749_);
lean_ctor_set(v___x_3754_, 1, v___x_3753_);
v___x_3755_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3755_, 0, v___x_3754_);
lean_ctor_set(v___x_3755_, 1, v___x_3722_);
v___x_3756_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3756_, 0, v___x_3755_);
lean_ctor_set(v___x_3756_, 1, v___x_3724_);
v___x_3757_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__14));
v___x_3758_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3756_);
lean_ctor_set(v___x_3758_, 1, v___x_3757_);
v___x_3759_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3759_, 0, v___x_3758_);
lean_ctor_set(v___x_3759_, 1, v___x_3714_);
v___x_3760_ = l_Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25(v_subParts_3713_);
v___x_3761_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3761_, 0, v___x_3740_);
lean_ctor_set(v___x_3761_, 1, v___x_3760_);
v___x_3762_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3762_, 0, v___x_3761_);
lean_ctor_set_uint8(v___x_3762_, sizeof(void*)*1, v___x_3719_);
v___x_3763_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3763_, 0, v___x_3759_);
lean_ctor_set(v___x_3763_, 1, v___x_3762_);
v___x_3764_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10);
v___x_3765_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_3766_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3766_, 0, v___x_3765_);
lean_ctor_set(v___x_3766_, 1, v___x_3763_);
v___x_3767_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_3768_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3768_, 0, v___x_3766_);
lean_ctor_set(v___x_3768_, 1, v___x_3767_);
v___x_3769_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3769_, 0, v___x_3764_);
lean_ctor_set(v___x_3769_, 1, v___x_3768_);
v___x_3770_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3770_, 0, v___x_3769_);
lean_ctor_set_uint8(v___x_3770_, sizeof(void*)*1, v___x_3719_);
return v___x_3770_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34_spec__35(lean_object* v_x_3771_, lean_object* v_x_3772_, lean_object* v_x_3773_){
_start:
{
if (lean_obj_tag(v_x_3773_) == 0)
{
lean_dec(v_x_3771_);
return v_x_3772_;
}
else
{
lean_object* v_head_3774_; lean_object* v_tail_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3785_; 
v_head_3774_ = lean_ctor_get(v_x_3773_, 0);
v_tail_3775_ = lean_ctor_get(v_x_3773_, 1);
v_isSharedCheck_3785_ = !lean_is_exclusive(v_x_3773_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3777_ = v_x_3773_;
v_isShared_3778_ = v_isSharedCheck_3785_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_tail_3775_);
lean_inc(v_head_3774_);
lean_dec(v_x_3773_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3785_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3780_; 
lean_inc(v_x_3771_);
if (v_isShared_3778_ == 0)
{
lean_ctor_set_tag(v___x_3777_, 5);
lean_ctor_set(v___x_3777_, 1, v_x_3771_);
lean_ctor_set(v___x_3777_, 0, v_x_3772_);
v___x_3780_ = v___x_3777_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_x_3772_);
lean_ctor_set(v_reuseFailAlloc_3784_, 1, v_x_3771_);
v___x_3780_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
lean_object* v___x_3781_; lean_object* v___x_3782_; 
v___x_3781_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_head_3774_);
v___x_3782_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3780_);
lean_ctor_set(v___x_3782_, 1, v___x_3781_);
v_x_3772_ = v___x_3782_;
v_x_3773_ = v_tail_3775_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10(lean_object* v_x_3786_, lean_object* v_x_3787_){
_start:
{
lean_object* v_fst_3788_; lean_object* v_snd_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3799_; 
v_fst_3788_ = lean_ctor_get(v_x_3786_, 0);
v_snd_3789_ = lean_ctor_get(v_x_3786_, 1);
v_isSharedCheck_3799_ = !lean_is_exclusive(v_x_3786_);
if (v_isSharedCheck_3799_ == 0)
{
v___x_3791_ = v_x_3786_;
v_isShared_3792_ = v_isSharedCheck_3799_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_snd_3789_);
lean_inc(v_fst_3788_);
lean_dec(v_x_3786_);
v___x_3791_ = lean_box(0);
v_isShared_3792_ = v_isSharedCheck_3799_;
goto v_resetjp_3790_;
}
v_resetjp_3790_:
{
lean_object* v___x_3793_; lean_object* v___x_3795_; 
v___x_3793_ = l_Lean_instReprDeclarationRange_repr___redArg(v_fst_3788_);
if (v_isShared_3792_ == 0)
{
lean_ctor_set_tag(v___x_3791_, 1);
lean_ctor_set(v___x_3791_, 1, v_x_3787_);
lean_ctor_set(v___x_3791_, 0, v___x_3793_);
v___x_3795_ = v___x_3791_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v___x_3793_);
lean_ctor_set(v_reuseFailAlloc_3798_, 1, v_x_3787_);
v___x_3795_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
lean_object* v___x_3796_; lean_object* v___x_3797_; 
v___x_3796_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_snd_3789_);
v___x_3797_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3797_, 0, v___x_3796_);
lean_ctor_set(v___x_3797_, 1, v___x_3795_);
return v___x_3797_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11_spec__20(lean_object* v_x_3800_, lean_object* v_x_3801_, lean_object* v_x_3802_){
_start:
{
if (lean_obj_tag(v_x_3802_) == 0)
{
lean_dec(v_x_3800_);
return v_x_3801_;
}
else
{
lean_object* v_head_3803_; lean_object* v_tail_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3813_; 
v_head_3803_ = lean_ctor_get(v_x_3802_, 0);
v_tail_3804_ = lean_ctor_get(v_x_3802_, 1);
v_isSharedCheck_3813_ = !lean_is_exclusive(v_x_3802_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3806_ = v_x_3802_;
v_isShared_3807_ = v_isSharedCheck_3813_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_tail_3804_);
lean_inc(v_head_3803_);
lean_dec(v_x_3802_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3813_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v___x_3809_; 
lean_inc(v_x_3800_);
if (v_isShared_3807_ == 0)
{
lean_ctor_set_tag(v___x_3806_, 5);
lean_ctor_set(v___x_3806_, 1, v_x_3800_);
lean_ctor_set(v___x_3806_, 0, v_x_3801_);
v___x_3809_ = v___x_3806_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v_x_3801_);
lean_ctor_set(v_reuseFailAlloc_3812_, 1, v_x_3800_);
v___x_3809_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
lean_object* v___x_3810_; 
v___x_3810_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3809_);
lean_ctor_set(v___x_3810_, 1, v_head_3803_);
v_x_3801_ = v___x_3810_;
v_x_3802_ = v_tail_3804_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11(lean_object* v_x_3814_, lean_object* v_x_3815_){
_start:
{
if (lean_obj_tag(v_x_3814_) == 0)
{
lean_object* v___x_3816_; 
lean_dec(v_x_3815_);
v___x_3816_ = lean_box(0);
return v___x_3816_;
}
else
{
lean_object* v_tail_3817_; 
v_tail_3817_ = lean_ctor_get(v_x_3814_, 1);
if (lean_obj_tag(v_tail_3817_) == 0)
{
lean_object* v_head_3818_; 
lean_dec(v_x_3815_);
v_head_3818_ = lean_ctor_get(v_x_3814_, 0);
lean_inc(v_head_3818_);
lean_dec_ref(v_x_3814_);
return v_head_3818_;
}
else
{
lean_object* v_head_3819_; lean_object* v___x_3820_; 
lean_inc(v_tail_3817_);
v_head_3819_ = lean_ctor_get(v_x_3814_, 0);
lean_inc(v_head_3819_);
lean_dec_ref(v_x_3814_);
v___x_3820_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11_spec__20(v_x_3815_, v_head_3819_, v_tail_3817_);
return v___x_3820_;
}
}
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_3822_; lean_object* v___x_3823_; 
v___x_3822_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0));
v___x_3823_ = lean_string_length(v___x_3822_);
return v___x_3823_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_3824_; lean_object* v___x_3825_; 
v___x_3824_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1, &l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1_once, _init_l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1);
v___x_3825_ = lean_nat_to_int(v___x_3824_);
return v___x_3825_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(lean_object* v_x_3830_){
_start:
{
lean_object* v_fst_3831_; lean_object* v_snd_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3854_; 
v_fst_3831_ = lean_ctor_get(v_x_3830_, 0);
v_snd_3832_ = lean_ctor_get(v_x_3830_, 1);
v_isSharedCheck_3854_ = !lean_is_exclusive(v_x_3830_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3834_ = v_x_3830_;
v_isShared_3835_ = v_isSharedCheck_3854_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_snd_3832_);
lean_inc(v_fst_3831_);
lean_dec(v_x_3830_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3854_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3840_; 
v___x_3836_ = l_Nat_reprFast(v_fst_3831_);
v___x_3837_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3837_, 0, v___x_3836_);
v___x_3838_ = lean_box(0);
if (v_isShared_3835_ == 0)
{
lean_ctor_set_tag(v___x_3834_, 1);
lean_ctor_set(v___x_3834_, 1, v___x_3838_);
lean_ctor_set(v___x_3834_, 0, v___x_3837_);
v___x_3840_ = v___x_3834_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v___x_3837_);
lean_ctor_set(v_reuseFailAlloc_3853_, 1, v___x_3838_);
v___x_3840_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3839_;
}
v_reusejp_3839_:
{
lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; uint8_t v___x_3851_; lean_object* v___x_3852_; 
v___x_3841_ = l_Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10(v_snd_3832_, v___x_3840_);
v___x_3842_ = l_List_reverse___redArg(v___x_3841_);
v___x_3843_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_3844_ = l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11(v___x_3842_, v___x_3843_);
v___x_3845_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2, &l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2_once, _init_l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2);
v___x_3846_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3));
v___x_3847_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3847_, 0, v___x_3846_);
lean_ctor_set(v___x_3847_, 1, v___x_3844_);
v___x_3848_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__4));
v___x_3849_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3849_, 0, v___x_3847_);
lean_ctor_set(v___x_3849_, 1, v___x_3848_);
v___x_3850_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3850_, 0, v___x_3845_);
lean_ctor_set(v___x_3850_, 1, v___x_3849_);
v___x_3851_ = 0;
v___x_3852_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3852_, 0, v___x_3850_);
lean_ctor_set_uint8(v___x_3852_, sizeof(void*)*1, v___x_3851_);
return v___x_3852_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13_spec__23(lean_object* v_x_3855_, lean_object* v_x_3856_, lean_object* v_x_3857_){
_start:
{
if (lean_obj_tag(v_x_3857_) == 0)
{
lean_dec(v_x_3855_);
return v_x_3856_;
}
else
{
lean_object* v_head_3858_; lean_object* v_tail_3859_; lean_object* v___x_3861_; uint8_t v_isShared_3862_; uint8_t v_isSharedCheck_3869_; 
v_head_3858_ = lean_ctor_get(v_x_3857_, 0);
v_tail_3859_ = lean_ctor_get(v_x_3857_, 1);
v_isSharedCheck_3869_ = !lean_is_exclusive(v_x_3857_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3861_ = v_x_3857_;
v_isShared_3862_ = v_isSharedCheck_3869_;
goto v_resetjp_3860_;
}
else
{
lean_inc(v_tail_3859_);
lean_inc(v_head_3858_);
lean_dec(v_x_3857_);
v___x_3861_ = lean_box(0);
v_isShared_3862_ = v_isSharedCheck_3869_;
goto v_resetjp_3860_;
}
v_resetjp_3860_:
{
lean_object* v___x_3864_; 
lean_inc(v_x_3855_);
if (v_isShared_3862_ == 0)
{
lean_ctor_set_tag(v___x_3861_, 5);
lean_ctor_set(v___x_3861_, 1, v_x_3855_);
lean_ctor_set(v___x_3861_, 0, v_x_3856_);
v___x_3864_ = v___x_3861_;
goto v_reusejp_3863_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_x_3856_);
lean_ctor_set(v_reuseFailAlloc_3868_, 1, v_x_3855_);
v___x_3864_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3863_;
}
v_reusejp_3863_:
{
lean_object* v___x_3865_; lean_object* v___x_3866_; 
v___x_3865_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_head_3858_);
v___x_3866_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3866_, 0, v___x_3864_);
lean_ctor_set(v___x_3866_, 1, v___x_3865_);
v_x_3856_ = v___x_3866_;
v_x_3857_ = v_tail_3859_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13(lean_object* v_x_3870_, lean_object* v_x_3871_, lean_object* v_x_3872_){
_start:
{
if (lean_obj_tag(v_x_3872_) == 0)
{
lean_dec(v_x_3870_);
return v_x_3871_;
}
else
{
lean_object* v_head_3873_; lean_object* v_tail_3874_; lean_object* v___x_3876_; uint8_t v_isShared_3877_; uint8_t v_isSharedCheck_3884_; 
v_head_3873_ = lean_ctor_get(v_x_3872_, 0);
v_tail_3874_ = lean_ctor_get(v_x_3872_, 1);
v_isSharedCheck_3884_ = !lean_is_exclusive(v_x_3872_);
if (v_isSharedCheck_3884_ == 0)
{
v___x_3876_ = v_x_3872_;
v_isShared_3877_ = v_isSharedCheck_3884_;
goto v_resetjp_3875_;
}
else
{
lean_inc(v_tail_3874_);
lean_inc(v_head_3873_);
lean_dec(v_x_3872_);
v___x_3876_ = lean_box(0);
v_isShared_3877_ = v_isSharedCheck_3884_;
goto v_resetjp_3875_;
}
v_resetjp_3875_:
{
lean_object* v___x_3879_; 
lean_inc(v_x_3870_);
if (v_isShared_3877_ == 0)
{
lean_ctor_set_tag(v___x_3876_, 5);
lean_ctor_set(v___x_3876_, 1, v_x_3870_);
lean_ctor_set(v___x_3876_, 0, v_x_3871_);
v___x_3879_ = v___x_3876_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3883_; 
v_reuseFailAlloc_3883_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3883_, 0, v_x_3871_);
lean_ctor_set(v_reuseFailAlloc_3883_, 1, v_x_3870_);
v___x_3879_ = v_reuseFailAlloc_3883_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; 
v___x_3880_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_head_3873_);
v___x_3881_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3881_, 0, v___x_3879_);
lean_ctor_set(v___x_3881_, 1, v___x_3880_);
v___x_3882_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13_spec__23(v_x_3870_, v___x_3881_, v_tail_3874_);
return v___x_3882_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4(lean_object* v_x_3885_, lean_object* v_x_3886_){
_start:
{
if (lean_obj_tag(v_x_3885_) == 0)
{
lean_object* v___x_3887_; 
lean_dec(v_x_3886_);
v___x_3887_ = lean_box(0);
return v___x_3887_;
}
else
{
lean_object* v_tail_3888_; 
v_tail_3888_ = lean_ctor_get(v_x_3885_, 1);
if (lean_obj_tag(v_tail_3888_) == 0)
{
lean_object* v_head_3889_; lean_object* v___x_3890_; 
lean_dec(v_x_3886_);
v_head_3889_ = lean_ctor_get(v_x_3885_, 0);
lean_inc(v_head_3889_);
lean_dec_ref(v_x_3885_);
v___x_3890_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_head_3889_);
return v___x_3890_;
}
else
{
lean_object* v_head_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; 
lean_inc(v_tail_3888_);
v_head_3891_ = lean_ctor_get(v_x_3885_, 0);
lean_inc(v_head_3891_);
lean_dec_ref(v_x_3885_);
v___x_3892_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_head_3891_);
v___x_3893_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13(v_x_3886_, v___x_3892_, v_tail_3888_);
return v___x_3893_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1(lean_object* v_xs_3894_){
_start:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; uint8_t v___x_3897_; 
v___x_3895_ = lean_array_get_size(v_xs_3894_);
v___x_3896_ = lean_unsigned_to_nat(0u);
v___x_3897_ = lean_nat_dec_eq(v___x_3895_, v___x_3896_);
if (v___x_3897_ == 0)
{
lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; 
v___x_3898_ = lean_array_to_list(v_xs_3894_);
v___x_3899_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_3900_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4(v___x_3898_, v___x_3899_);
v___x_3901_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5);
v___x_3902_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6));
v___x_3903_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3903_, 0, v___x_3902_);
lean_ctor_set(v___x_3903_, 1, v___x_3900_);
v___x_3904_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_3905_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3905_, 0, v___x_3903_);
lean_ctor_set(v___x_3905_, 1, v___x_3904_);
v___x_3906_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3906_, 0, v___x_3901_);
lean_ctor_set(v___x_3906_, 1, v___x_3905_);
v___x_3907_ = l_Std_Format_fill(v___x_3906_);
return v___x_3907_;
}
else
{
lean_object* v___x_3908_; 
lean_dec_ref(v_xs_3894_);
v___x_3908_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9));
return v___x_3908_;
}
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_3924_; lean_object* v___x_3925_; 
v___x_3924_ = lean_unsigned_to_nat(20u);
v___x_3925_ = lean_nat_to_int(v___x_3924_);
return v___x_3925_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg(lean_object* v_x_3926_){
_start:
{
lean_object* v_text_3927_; lean_object* v_sections_3928_; lean_object* v_declarationRange_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; uint8_t v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; 
v_text_3927_ = lean_ctor_get(v_x_3926_, 0);
lean_inc_ref(v_text_3927_);
v_sections_3928_ = lean_ctor_get(v_x_3926_, 1);
lean_inc_ref(v_sections_3928_);
v_declarationRange_3929_ = lean_ctor_get(v_x_3926_, 2);
lean_inc_ref(v_declarationRange_3929_);
lean_dec_ref(v_x_3926_);
v___x_3930_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5));
v___x_3931_ = ((lean_object*)(l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__3));
v___x_3932_ = lean_obj_once(&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4, &l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4_once, _init_l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4);
v___x_3933_ = l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0(v_text_3927_);
v___x_3934_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3932_);
lean_ctor_set(v___x_3934_, 1, v___x_3933_);
v___x_3935_ = 0;
v___x_3936_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3936_, 0, v___x_3934_);
lean_ctor_set_uint8(v___x_3936_, sizeof(void*)*1, v___x_3935_);
v___x_3937_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3937_, 0, v___x_3931_);
lean_ctor_set(v___x_3937_, 1, v___x_3936_);
v___x_3938_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2));
v___x_3939_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3939_, 0, v___x_3937_);
lean_ctor_set(v___x_3939_, 1, v___x_3938_);
v___x_3940_ = lean_box(1);
v___x_3941_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3939_);
lean_ctor_set(v___x_3941_, 1, v___x_3940_);
v___x_3942_ = ((lean_object*)(l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__5));
v___x_3943_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3943_, 0, v___x_3941_);
lean_ctor_set(v___x_3943_, 1, v___x_3942_);
v___x_3944_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3943_);
lean_ctor_set(v___x_3944_, 1, v___x_3930_);
v___x_3945_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7);
v___x_3946_ = l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1(v_sections_3928_);
v___x_3947_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3947_, 0, v___x_3945_);
lean_ctor_set(v___x_3947_, 1, v___x_3946_);
v___x_3948_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3948_, 0, v___x_3947_);
lean_ctor_set_uint8(v___x_3948_, sizeof(void*)*1, v___x_3935_);
v___x_3949_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3944_);
lean_ctor_set(v___x_3949_, 1, v___x_3948_);
v___x_3950_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3949_);
lean_ctor_set(v___x_3950_, 1, v___x_3938_);
v___x_3951_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3951_, 0, v___x_3950_);
lean_ctor_set(v___x_3951_, 1, v___x_3940_);
v___x_3952_ = ((lean_object*)(l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__7));
v___x_3953_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3953_, 0, v___x_3951_);
lean_ctor_set(v___x_3953_, 1, v___x_3952_);
v___x_3954_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3953_);
lean_ctor_set(v___x_3954_, 1, v___x_3930_);
v___x_3955_ = lean_obj_once(&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8, &l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8_once, _init_l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8);
v___x_3956_ = l_Lean_instReprDeclarationRange_repr___redArg(v_declarationRange_3929_);
v___x_3957_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3955_);
lean_ctor_set(v___x_3957_, 1, v___x_3956_);
v___x_3958_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3958_, 0, v___x_3957_);
lean_ctor_set_uint8(v___x_3958_, sizeof(void*)*1, v___x_3935_);
v___x_3959_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3954_);
lean_ctor_set(v___x_3959_, 1, v___x_3958_);
v___x_3960_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10);
v___x_3961_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_3962_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3961_);
lean_ctor_set(v___x_3962_, 1, v___x_3959_);
v___x_3963_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_3964_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3962_);
lean_ctor_set(v___x_3964_, 1, v___x_3963_);
v___x_3965_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3960_);
lean_ctor_set(v___x_3965_, 1, v___x_3964_);
v___x_3966_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3966_, 0, v___x_3965_);
lean_ctor_set_uint8(v___x_3966_, sizeof(void*)*1, v___x_3935_);
return v___x_3966_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr(lean_object* v_x_3967_, lean_object* v_prec_3968_){
_start:
{
lean_object* v___x_3969_; 
v___x_3969_ = l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg(v_x_3967_);
return v___x_3969_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___boxed(lean_object* v_x_3970_, lean_object* v_prec_3971_){
_start:
{
lean_object* v_res_3972_; 
v_res_3972_ = l_Lean_VersoModuleDocs_instReprSnippet_repr(v_x_3970_, v_prec_3971_);
lean_dec(v_prec_3971_);
return v_res_3972_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3(lean_object* v_x_3973_, lean_object* v_x_3974_){
_start:
{
lean_object* v___x_3975_; 
v___x_3975_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_x_3973_);
return v___x_3975_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___boxed(lean_object* v_x_3976_, lean_object* v_x_3977_){
_start:
{
lean_object* v_res_3978_; 
v_res_3978_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3(v_x_3976_, v_x_3977_);
lean_dec(v_x_3977_);
return v_res_3978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7(lean_object* v_x_3979_, lean_object* v_prec_3980_){
_start:
{
lean_object* v___x_3981_; 
v___x_3981_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_x_3979_);
return v___x_3981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___boxed(lean_object* v_x_3982_, lean_object* v_prec_3983_){
_start:
{
lean_object* v_res_3984_; 
v_res_3984_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7(v_x_3982_, v_prec_3983_);
lean_dec(v_prec_3983_);
return v_res_3984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10(lean_object* v_x_3985_, lean_object* v_prec_3986_){
_start:
{
lean_object* v___x_3987_; 
v___x_3987_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_x_3985_);
return v___x_3987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___boxed(lean_object* v_x_3988_, lean_object* v_prec_3989_){
_start:
{
lean_object* v_res_3990_; 
v_res_3990_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10(v_x_3988_, v_prec_3989_);
lean_dec(v_prec_3989_);
return v_res_3990_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24(lean_object* v_x_3991_, lean_object* v_x_3992_){
_start:
{
lean_object* v___x_3993_; 
v___x_3993_ = l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(v_x_3991_);
return v___x_3993_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___boxed(lean_object* v_x_3994_, lean_object* v_x_3995_){
_start:
{
lean_object* v_res_3996_; 
v_res_3996_ = l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24(v_x_3994_, v_x_3995_);
lean_dec(v_x_3995_);
lean_dec(v_x_3994_);
return v_res_3996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18(lean_object* v_x_3997_, lean_object* v_prec_3998_){
_start:
{
lean_object* v___x_3999_; 
v___x_3999_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_x_3997_);
return v___x_3999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___boxed(lean_object* v_x_4000_, lean_object* v_prec_4001_){
_start:
{
lean_object* v_res_4002_; 
v_res_4002_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18(v_x_4000_, v_prec_4001_);
lean_dec(v_prec_4001_);
return v_res_4002_;
}
}
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_Snippet_canNestIn(lean_object* v_level_4005_, lean_object* v_snippet_4006_){
_start:
{
lean_object* v_sections_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; uint8_t v___x_4010_; 
v_sections_4007_ = lean_ctor_get(v_snippet_4006_, 1);
v___x_4008_ = lean_unsigned_to_nat(0u);
v___x_4009_ = lean_array_get_size(v_sections_4007_);
v___x_4010_ = lean_nat_dec_lt(v___x_4008_, v___x_4009_);
if (v___x_4010_ == 0)
{
uint8_t v___x_4011_; 
v___x_4011_ = 1;
return v___x_4011_;
}
else
{
lean_object* v___x_4012_; lean_object* v_fst_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; uint8_t v___x_4016_; 
v___x_4012_ = lean_array_fget_borrowed(v_sections_4007_, v___x_4008_);
v_fst_4013_ = lean_ctor_get(v___x_4012_, 0);
v___x_4014_ = lean_unsigned_to_nat(1u);
v___x_4015_ = lean_nat_add(v_level_4005_, v___x_4014_);
v___x_4016_ = lean_nat_dec_le(v_fst_4013_, v___x_4015_);
lean_dec(v___x_4015_);
return v___x_4016_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_canNestIn___boxed(lean_object* v_level_4017_, lean_object* v_snippet_4018_){
_start:
{
uint8_t v_res_4019_; lean_object* v_r_4020_; 
v_res_4019_ = l_Lean_VersoModuleDocs_Snippet_canNestIn(v_level_4017_, v_snippet_4018_);
lean_dec_ref(v_snippet_4018_);
lean_dec(v_level_4017_);
v_r_4020_ = lean_box(v_res_4019_);
return v_r_4020_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_terminalNesting(lean_object* v_snippet_4021_){
_start:
{
lean_object* v_sections_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; uint8_t v___x_4026_; 
v_sections_4022_ = lean_ctor_get(v_snippet_4021_, 1);
v___x_4023_ = lean_array_get_size(v_sections_4022_);
v___x_4024_ = lean_unsigned_to_nat(1u);
v___x_4025_ = lean_nat_sub(v___x_4023_, v___x_4024_);
v___x_4026_ = lean_nat_dec_lt(v___x_4025_, v___x_4023_);
if (v___x_4026_ == 0)
{
lean_object* v___x_4027_; 
lean_dec(v___x_4025_);
v___x_4027_ = lean_box(0);
return v___x_4027_;
}
else
{
lean_object* v___x_4028_; lean_object* v_fst_4029_; lean_object* v___x_4030_; 
v___x_4028_ = lean_array_fget_borrowed(v_sections_4022_, v___x_4025_);
lean_dec(v___x_4025_);
v_fst_4029_ = lean_ctor_get(v___x_4028_, 0);
lean_inc(v_fst_4029_);
v___x_4030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4030_, 0, v_fst_4029_);
return v___x_4030_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_terminalNesting___boxed(lean_object* v_snippet_4031_){
_start:
{
lean_object* v_res_4032_; 
v_res_4032_ = l_Lean_VersoModuleDocs_Snippet_terminalNesting(v_snippet_4031_);
lean_dec_ref(v_snippet_4031_);
return v_res_4032_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_addBlock(lean_object* v_snippet_4033_, lean_object* v_block_4034_){
_start:
{
lean_object* v_text_4035_; lean_object* v_sections_4036_; lean_object* v_declarationRange_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; uint8_t v___x_4040_; 
v_text_4035_ = lean_ctor_get(v_snippet_4033_, 0);
v_sections_4036_ = lean_ctor_get(v_snippet_4033_, 1);
v_declarationRange_4037_ = lean_ctor_get(v_snippet_4033_, 2);
v___x_4038_ = lean_array_get_size(v_sections_4036_);
v___x_4039_ = lean_unsigned_to_nat(0u);
v___x_4040_ = lean_nat_dec_eq(v___x_4038_, v___x_4039_);
if (v___x_4040_ == 0)
{
lean_object* v___x_4041_; lean_object* v___x_4042_; uint8_t v___x_4043_; 
v___x_4041_ = lean_unsigned_to_nat(1u);
v___x_4042_ = lean_nat_sub(v___x_4038_, v___x_4041_);
v___x_4043_ = lean_nat_dec_lt(v___x_4042_, v___x_4038_);
if (v___x_4043_ == 0)
{
lean_dec(v___x_4042_);
lean_dec_ref(v_block_4034_);
return v_snippet_4033_;
}
else
{
lean_object* v___x_4045_; uint8_t v_isShared_4046_; uint8_t v_isSharedCheck_4087_; 
lean_inc_ref(v_declarationRange_4037_);
lean_inc_ref(v_sections_4036_);
lean_inc_ref(v_text_4035_);
v_isSharedCheck_4087_ = !lean_is_exclusive(v_snippet_4033_);
if (v_isSharedCheck_4087_ == 0)
{
lean_object* v_unused_4088_; lean_object* v_unused_4089_; lean_object* v_unused_4090_; 
v_unused_4088_ = lean_ctor_get(v_snippet_4033_, 2);
lean_dec(v_unused_4088_);
v_unused_4089_ = lean_ctor_get(v_snippet_4033_, 1);
lean_dec(v_unused_4089_);
v_unused_4090_ = lean_ctor_get(v_snippet_4033_, 0);
lean_dec(v_unused_4090_);
v___x_4045_ = v_snippet_4033_;
v_isShared_4046_ = v_isSharedCheck_4087_;
goto v_resetjp_4044_;
}
else
{
lean_dec(v_snippet_4033_);
v___x_4045_ = lean_box(0);
v_isShared_4046_ = v_isSharedCheck_4087_;
goto v_resetjp_4044_;
}
v_resetjp_4044_:
{
lean_object* v_v_4047_; lean_object* v_snd_4048_; lean_object* v_snd_4049_; lean_object* v_fst_4050_; lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4085_; 
v_v_4047_ = lean_array_fget(v_sections_4036_, v___x_4042_);
v_snd_4048_ = lean_ctor_get(v_v_4047_, 1);
lean_inc(v_snd_4048_);
v_snd_4049_ = lean_ctor_get(v_snd_4048_, 1);
lean_inc(v_snd_4049_);
v_fst_4050_ = lean_ctor_get(v_v_4047_, 0);
v_isSharedCheck_4085_ = !lean_is_exclusive(v_v_4047_);
if (v_isSharedCheck_4085_ == 0)
{
lean_object* v_unused_4086_; 
v_unused_4086_ = lean_ctor_get(v_v_4047_, 1);
lean_dec(v_unused_4086_);
v___x_4052_ = v_v_4047_;
v_isShared_4053_ = v_isSharedCheck_4085_;
goto v_resetjp_4051_;
}
else
{
lean_inc(v_fst_4050_);
lean_dec(v_v_4047_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4085_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v_fst_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4083_; 
v_fst_4054_ = lean_ctor_get(v_snd_4048_, 0);
v_isSharedCheck_4083_ = !lean_is_exclusive(v_snd_4048_);
if (v_isSharedCheck_4083_ == 0)
{
lean_object* v_unused_4084_; 
v_unused_4084_ = lean_ctor_get(v_snd_4048_, 1);
lean_dec(v_unused_4084_);
v___x_4056_ = v_snd_4048_;
v_isShared_4057_ = v_isSharedCheck_4083_;
goto v_resetjp_4055_;
}
else
{
lean_inc(v_fst_4054_);
lean_dec(v_snd_4048_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4083_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
lean_object* v_title_4058_; lean_object* v_titleString_4059_; lean_object* v_metadata_4060_; lean_object* v_content_4061_; lean_object* v_subParts_4062_; lean_object* v___x_4064_; uint8_t v_isShared_4065_; uint8_t v_isSharedCheck_4082_; 
v_title_4058_ = lean_ctor_get(v_snd_4049_, 0);
v_titleString_4059_ = lean_ctor_get(v_snd_4049_, 1);
v_metadata_4060_ = lean_ctor_get(v_snd_4049_, 2);
v_content_4061_ = lean_ctor_get(v_snd_4049_, 3);
v_subParts_4062_ = lean_ctor_get(v_snd_4049_, 4);
v_isSharedCheck_4082_ = !lean_is_exclusive(v_snd_4049_);
if (v_isSharedCheck_4082_ == 0)
{
v___x_4064_ = v_snd_4049_;
v_isShared_4065_ = v_isSharedCheck_4082_;
goto v_resetjp_4063_;
}
else
{
lean_inc(v_subParts_4062_);
lean_inc(v_content_4061_);
lean_inc(v_metadata_4060_);
lean_inc(v_titleString_4059_);
lean_inc(v_title_4058_);
lean_dec(v_snd_4049_);
v___x_4064_ = lean_box(0);
v_isShared_4065_ = v_isSharedCheck_4082_;
goto v_resetjp_4063_;
}
v_resetjp_4063_:
{
lean_object* v___x_4066_; lean_object* v_xs_x27_4067_; lean_object* v___x_4068_; lean_object* v___x_4070_; 
v___x_4066_ = lean_box(0);
v_xs_x27_4067_ = lean_array_fset(v_sections_4036_, v___x_4042_, v___x_4066_);
v___x_4068_ = lean_array_push(v_content_4061_, v_block_4034_);
if (v_isShared_4065_ == 0)
{
lean_ctor_set(v___x_4064_, 3, v___x_4068_);
v___x_4070_ = v___x_4064_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4081_; 
v_reuseFailAlloc_4081_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4081_, 0, v_title_4058_);
lean_ctor_set(v_reuseFailAlloc_4081_, 1, v_titleString_4059_);
lean_ctor_set(v_reuseFailAlloc_4081_, 2, v_metadata_4060_);
lean_ctor_set(v_reuseFailAlloc_4081_, 3, v___x_4068_);
lean_ctor_set(v_reuseFailAlloc_4081_, 4, v_subParts_4062_);
v___x_4070_ = v_reuseFailAlloc_4081_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
lean_object* v___x_4072_; 
if (v_isShared_4057_ == 0)
{
lean_ctor_set(v___x_4056_, 1, v___x_4070_);
v___x_4072_ = v___x_4056_;
goto v_reusejp_4071_;
}
else
{
lean_object* v_reuseFailAlloc_4080_; 
v_reuseFailAlloc_4080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4080_, 0, v_fst_4054_);
lean_ctor_set(v_reuseFailAlloc_4080_, 1, v___x_4070_);
v___x_4072_ = v_reuseFailAlloc_4080_;
goto v_reusejp_4071_;
}
v_reusejp_4071_:
{
lean_object* v___x_4074_; 
if (v_isShared_4053_ == 0)
{
lean_ctor_set(v___x_4052_, 1, v___x_4072_);
v___x_4074_ = v___x_4052_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4079_; 
v_reuseFailAlloc_4079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4079_, 0, v_fst_4050_);
lean_ctor_set(v_reuseFailAlloc_4079_, 1, v___x_4072_);
v___x_4074_ = v_reuseFailAlloc_4079_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
lean_object* v___x_4075_; lean_object* v___x_4077_; 
v___x_4075_ = lean_array_fset(v_xs_x27_4067_, v___x_4042_, v___x_4074_);
lean_dec(v___x_4042_);
if (v_isShared_4046_ == 0)
{
lean_ctor_set(v___x_4045_, 1, v___x_4075_);
v___x_4077_ = v___x_4045_;
goto v_reusejp_4076_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v_text_4035_);
lean_ctor_set(v_reuseFailAlloc_4078_, 1, v___x_4075_);
lean_ctor_set(v_reuseFailAlloc_4078_, 2, v_declarationRange_4037_);
v___x_4077_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4076_;
}
v_reusejp_4076_:
{
return v___x_4077_;
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
else
{
lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4098_; 
lean_inc_ref(v_declarationRange_4037_);
lean_inc_ref(v_sections_4036_);
lean_inc_ref(v_text_4035_);
v_isSharedCheck_4098_ = !lean_is_exclusive(v_snippet_4033_);
if (v_isSharedCheck_4098_ == 0)
{
lean_object* v_unused_4099_; lean_object* v_unused_4100_; lean_object* v_unused_4101_; 
v_unused_4099_ = lean_ctor_get(v_snippet_4033_, 2);
lean_dec(v_unused_4099_);
v_unused_4100_ = lean_ctor_get(v_snippet_4033_, 1);
lean_dec(v_unused_4100_);
v_unused_4101_ = lean_ctor_get(v_snippet_4033_, 0);
lean_dec(v_unused_4101_);
v___x_4092_ = v_snippet_4033_;
v_isShared_4093_ = v_isSharedCheck_4098_;
goto v_resetjp_4091_;
}
else
{
lean_dec(v_snippet_4033_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4098_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
lean_object* v___x_4094_; lean_object* v___x_4096_; 
v___x_4094_ = lean_array_push(v_text_4035_, v_block_4034_);
if (v_isShared_4093_ == 0)
{
lean_ctor_set(v___x_4092_, 0, v___x_4094_);
v___x_4096_ = v___x_4092_;
goto v_reusejp_4095_;
}
else
{
lean_object* v_reuseFailAlloc_4097_; 
v_reuseFailAlloc_4097_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4097_, 0, v___x_4094_);
lean_ctor_set(v_reuseFailAlloc_4097_, 1, v_sections_4036_);
lean_ctor_set(v_reuseFailAlloc_4097_, 2, v_declarationRange_4037_);
v___x_4096_ = v_reuseFailAlloc_4097_;
goto v_reusejp_4095_;
}
v_reusejp_4095_:
{
return v___x_4096_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_addPart(lean_object* v_snippet_4102_, lean_object* v_level_4103_, lean_object* v_range_4104_, lean_object* v_part_4105_){
_start:
{
lean_object* v_text_4106_; lean_object* v_sections_4107_; lean_object* v_declarationRange_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4118_; 
v_text_4106_ = lean_ctor_get(v_snippet_4102_, 0);
v_sections_4107_ = lean_ctor_get(v_snippet_4102_, 1);
v_declarationRange_4108_ = lean_ctor_get(v_snippet_4102_, 2);
v_isSharedCheck_4118_ = !lean_is_exclusive(v_snippet_4102_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4110_ = v_snippet_4102_;
v_isShared_4111_ = v_isSharedCheck_4118_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_declarationRange_4108_);
lean_inc(v_sections_4107_);
lean_inc(v_text_4106_);
lean_dec(v_snippet_4102_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4118_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4116_; 
v___x_4112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4112_, 0, v_range_4104_);
lean_ctor_set(v___x_4112_, 1, v_part_4105_);
v___x_4113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4113_, 0, v_level_4103_);
lean_ctor_set(v___x_4113_, 1, v___x_4112_);
v___x_4114_ = lean_array_push(v_sections_4107_, v___x_4113_);
if (v_isShared_4111_ == 0)
{
lean_ctor_set(v___x_4110_, 1, v___x_4114_);
v___x_4116_ = v___x_4110_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v_text_4106_);
lean_ctor_set(v_reuseFailAlloc_4117_, 1, v___x_4114_);
lean_ctor_set(v_reuseFailAlloc_4117_, 2, v_declarationRange_4108_);
v___x_4116_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
return v___x_4116_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__0(lean_object* v___x_4119_, lean_object* v___x_4120_, lean_object* v_x_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_){
_start:
{
lean_object* v___x_4125_; 
v___x_4125_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown(lean_box(0), lean_box(0), v___x_4119_, v___x_4120_, v___y_4122_, v___y_4123_, v___y_4124_);
return v___x_4125_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__1(lean_object* v___x_4126_, lean_object* v___x_4127_, lean_object* v___x_4128_, lean_object* v_a_4129_, lean_object* v_x_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_){
_start:
{
lean_object* v___x_4134_; lean_object* v_snd_4135_; lean_object* v___x_4137_; uint8_t v_isShared_4138_; uint8_t v_isSharedCheck_4143_; 
v___x_4134_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown(lean_box(0), lean_box(0), v___x_4126_, v___x_4127_, v_a_4129_, v___y_4132_, v___y_4133_);
v_snd_4135_ = lean_ctor_get(v___x_4134_, 1);
v_isSharedCheck_4143_ = !lean_is_exclusive(v___x_4134_);
if (v_isSharedCheck_4143_ == 0)
{
lean_object* v_unused_4144_; 
v_unused_4144_ = lean_ctor_get(v___x_4134_, 0);
lean_dec(v_unused_4144_);
v___x_4137_ = v___x_4134_;
v_isShared_4138_ = v_isSharedCheck_4143_;
goto v_resetjp_4136_;
}
else
{
lean_inc(v_snd_4135_);
lean_dec(v___x_4134_);
v___x_4137_ = lean_box(0);
v_isShared_4138_ = v_isSharedCheck_4143_;
goto v_resetjp_4136_;
}
v_resetjp_4136_:
{
lean_object* v___x_4139_; lean_object* v___x_4141_; 
v___x_4139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4139_, 0, v___x_4128_);
if (v_isShared_4138_ == 0)
{
lean_ctor_set(v___x_4137_, 0, v___x_4139_);
v___x_4141_ = v___x_4137_;
goto v_reusejp_4140_;
}
else
{
lean_object* v_reuseFailAlloc_4142_; 
v_reuseFailAlloc_4142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4142_, 0, v___x_4139_);
lean_ctor_set(v_reuseFailAlloc_4142_, 1, v_snd_4135_);
v___x_4141_ = v_reuseFailAlloc_4142_;
goto v_reusejp_4140_;
}
v_reusejp_4140_:
{
return v___x_4141_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__2(lean_object* v___x_4145_, lean_object* v___x_4146_, lean_object* v_a_4147_, lean_object* v_x_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_){
_start:
{
lean_object* v___x_4152_; lean_object* v_snd_4153_; lean_object* v___x_4155_; uint8_t v_isShared_4156_; uint8_t v_isSharedCheck_4161_; 
v___x_4152_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown(lean_box(0), v___x_4145_, v_a_4147_, v___y_4150_, v___y_4151_);
v_snd_4153_ = lean_ctor_get(v___x_4152_, 1);
v_isSharedCheck_4161_ = !lean_is_exclusive(v___x_4152_);
if (v_isSharedCheck_4161_ == 0)
{
lean_object* v_unused_4162_; 
v_unused_4162_ = lean_ctor_get(v___x_4152_, 0);
lean_dec(v_unused_4162_);
v___x_4155_ = v___x_4152_;
v_isShared_4156_ = v_isSharedCheck_4161_;
goto v_resetjp_4154_;
}
else
{
lean_inc(v_snd_4153_);
lean_dec(v___x_4152_);
v___x_4155_ = lean_box(0);
v_isShared_4156_ = v_isSharedCheck_4161_;
goto v_resetjp_4154_;
}
v_resetjp_4154_:
{
lean_object* v___x_4157_; lean_object* v___x_4159_; 
v___x_4157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4157_, 0, v___x_4146_);
if (v_isShared_4156_ == 0)
{
lean_ctor_set(v___x_4155_, 0, v___x_4157_);
v___x_4159_ = v___x_4155_;
goto v_reusejp_4158_;
}
else
{
lean_object* v_reuseFailAlloc_4160_; 
v_reuseFailAlloc_4160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4160_, 0, v___x_4157_);
lean_ctor_set(v_reuseFailAlloc_4160_, 1, v_snd_4153_);
v___x_4159_ = v_reuseFailAlloc_4160_;
goto v_reusejp_4158_;
}
v_reusejp_4158_:
{
return v___x_4159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__3(uint32_t v___x_4163_, lean_object* v_s_4164_){
_start:
{
lean_object* v___x_4165_; 
v___x_4165_ = lean_string_push(v_s_4164_, v___x_4163_);
return v___x_4165_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__3___boxed(lean_object* v___x_4166_, lean_object* v_s_4167_){
_start:
{
uint32_t v___x_5724__boxed_4168_; lean_object* v_res_4169_; 
v___x_5724__boxed_4168_ = lean_unbox_uint32(v___x_4166_);
lean_dec(v___x_4166_);
v_res_4169_ = l_Lean_instToMarkdownSnippet___lam__3(v___x_5724__boxed_4168_, v_s_4167_);
return v_res_4169_;
}
}
static lean_object* _init_l_Lean_instToMarkdownSnippet___lam__4___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_4170_; lean_object* v___x_4171_; 
v___x_4170_ = 35;
v___x_4171_ = lean_box_uint32(v___x_4170_);
return v___x_4171_;
}
}
static lean_object* _init_l_Lean_instToMarkdownSnippet___lam__4___closed__0(void){
_start:
{
lean_object* v___x_4172_; lean_object* v___f_4173_; 
v___x_4172_ = l_Lean_instToMarkdownSnippet___lam__4___closed__0___boxed__const__1;
v___f_4173_ = lean_alloc_closure((void*)(l_Lean_instToMarkdownSnippet___lam__3___boxed), 2, 1);
lean_closure_set(v___f_4173_, 0, v___x_4172_);
return v___f_4173_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__4(lean_object* v___x_4174_, lean_object* v___f_4175_, lean_object* v___x_4176_, lean_object* v___f_4177_, lean_object* v_a_4178_, lean_object* v_x_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_){
_start:
{
lean_object* v_snd_4183_; lean_object* v_fst_4184_; lean_object* v_snd_4185_; lean_object* v___x_4186_; lean_object* v___f_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v_snd_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v_snd_4195_; lean_object* v_title_4196_; lean_object* v_content_4197_; size_t v_sz_4198_; size_t v___x_4199_; lean_object* v___x_5585__overap_4200_; lean_object* v___x_4201_; lean_object* v_snd_4202_; lean_object* v___x_4203_; lean_object* v_snd_4204_; size_t v_sz_4205_; lean_object* v___x_5591__overap_4206_; lean_object* v___x_4207_; lean_object* v_snd_4208_; lean_object* v___x_4209_; lean_object* v_snd_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4218_; 
v_snd_4183_ = lean_ctor_get(v_a_4178_, 1);
lean_inc(v_snd_4183_);
v_fst_4184_ = lean_ctor_get(v_a_4178_, 0);
lean_inc(v_fst_4184_);
lean_dec_ref(v_a_4178_);
v_snd_4185_ = lean_ctor_get(v_snd_4183_, 1);
lean_inc(v_snd_4185_);
lean_dec(v_snd_4183_);
v___x_4186_ = ((lean_object*)(l_Lean_findInternalDocString_x3f___closed__0));
v___f_4187_ = lean_obj_once(&l_Lean_instToMarkdownSnippet___lam__4___closed__0, &l_Lean_instToMarkdownSnippet___lam__4___closed__0_once, _init_l_Lean_instToMarkdownSnippet___lam__4___closed__0);
v___x_4188_ = lean_unsigned_to_nat(1u);
v___x_4189_ = lean_nat_add(v_fst_4184_, v___x_4188_);
lean_dec(v_fst_4184_);
v___x_4190_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_box(0), v___f_4187_, v___x_4189_, v___x_4186_);
v___x_4191_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_4190_, v___y_4182_);
lean_dec(v___x_4190_);
v_snd_4192_ = lean_ctor_get(v___x_4191_, 1);
lean_inc(v_snd_4192_);
lean_dec_ref(v___x_4191_);
v___x_4193_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0___redArg___closed__0));
v___x_4194_ = l_Lean_Doc_MarkdownM_push___redArg(v___x_4193_, v_snd_4192_);
v_snd_4195_ = lean_ctor_get(v___x_4194_, 1);
lean_inc(v_snd_4195_);
lean_dec_ref(v___x_4194_);
v_title_4196_ = lean_ctor_get(v_snd_4185_, 0);
lean_inc_ref(v_title_4196_);
v_content_4197_ = lean_ctor_get(v_snd_4185_, 3);
lean_inc_ref(v_content_4197_);
lean_dec(v_snd_4185_);
v_sz_4198_ = lean_array_size(v_title_4196_);
v___x_4199_ = ((size_t)0ULL);
lean_inc_ref(v___x_4174_);
v___x_5585__overap_4200_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_4174_, v_title_4196_, v___f_4175_, v_sz_4198_, v___x_4199_, v___x_4176_);
lean_inc_ref(v___y_4181_);
v___x_4201_ = lean_apply_2(v___x_5585__overap_4200_, v___y_4181_, v_snd_4195_);
v_snd_4202_ = lean_ctor_get(v___x_4201_, 1);
lean_inc(v_snd_4202_);
lean_dec_ref(v___x_4201_);
v___x_4203_ = l_Lean_Doc_MarkdownM_endBlock___redArg(v_snd_4202_);
v_snd_4204_ = lean_ctor_get(v___x_4203_, 1);
lean_inc(v_snd_4204_);
lean_dec_ref(v___x_4203_);
v_sz_4205_ = lean_array_size(v_content_4197_);
v___x_5591__overap_4206_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_4174_, v_content_4197_, v___f_4177_, v_sz_4205_, v___x_4199_, v___x_4176_);
v___x_4207_ = lean_apply_2(v___x_5591__overap_4206_, v___y_4181_, v_snd_4204_);
v_snd_4208_ = lean_ctor_get(v___x_4207_, 1);
lean_inc(v_snd_4208_);
lean_dec_ref(v___x_4207_);
v___x_4209_ = l_Lean_Doc_MarkdownM_endBlock___redArg(v_snd_4208_);
v_snd_4210_ = lean_ctor_get(v___x_4209_, 1);
v_isSharedCheck_4218_ = !lean_is_exclusive(v___x_4209_);
if (v_isSharedCheck_4218_ == 0)
{
lean_object* v_unused_4219_; 
v_unused_4219_ = lean_ctor_get(v___x_4209_, 0);
lean_dec(v_unused_4219_);
v___x_4212_ = v___x_4209_;
v_isShared_4213_ = v_isSharedCheck_4218_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_snd_4210_);
lean_dec(v___x_4209_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4218_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v___x_4214_; lean_object* v___x_4216_; 
v___x_4214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4214_, 0, v___x_4176_);
if (v_isShared_4213_ == 0)
{
lean_ctor_set(v___x_4212_, 0, v___x_4214_);
v___x_4216_ = v___x_4212_;
goto v_reusejp_4215_;
}
else
{
lean_object* v_reuseFailAlloc_4217_; 
v_reuseFailAlloc_4217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4217_, 0, v___x_4214_);
lean_ctor_set(v_reuseFailAlloc_4217_, 1, v_snd_4210_);
v___x_4216_ = v_reuseFailAlloc_4217_;
goto v_reusejp_4215_;
}
v_reusejp_4215_:
{
return v___x_4216_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToMarkdownSnippet___lam__5(lean_object* v___x_4220_, lean_object* v___x_4221_, lean_object* v___x_4222_, lean_object* v___f_4223_, lean_object* v_x_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_){
_start:
{
lean_object* v_text_4227_; lean_object* v_sections_4228_; lean_object* v_snd_4230_; lean_object* v___y_4251_; lean_object* v___x_4253_; lean_object* v___x_4254_; uint8_t v___x_4255_; 
v_text_4227_ = lean_ctor_get(v_x_4224_, 0);
lean_inc_ref(v_text_4227_);
v_sections_4228_ = lean_ctor_get(v_x_4224_, 1);
lean_inc_ref(v_sections_4228_);
lean_dec_ref(v_x_4224_);
v___x_4253_ = lean_unsigned_to_nat(0u);
v___x_4254_ = lean_array_get_size(v_text_4227_);
v___x_4255_ = lean_nat_dec_lt(v___x_4253_, v___x_4254_);
if (v___x_4255_ == 0)
{
lean_dec_ref(v_text_4227_);
lean_dec_ref(v___f_4223_);
v_snd_4230_ = v___y_4226_;
goto v___jp_4229_;
}
else
{
lean_object* v___x_4256_; uint8_t v___x_4257_; 
v___x_4256_ = lean_box(0);
v___x_4257_ = lean_nat_dec_le(v___x_4254_, v___x_4254_);
if (v___x_4257_ == 0)
{
if (v___x_4255_ == 0)
{
lean_dec_ref(v_text_4227_);
lean_dec_ref(v___f_4223_);
v_snd_4230_ = v___y_4226_;
goto v___jp_4229_;
}
else
{
size_t v___x_4258_; size_t v___x_4259_; lean_object* v___x_5634__overap_4260_; lean_object* v___x_4261_; 
v___x_4258_ = ((size_t)0ULL);
v___x_4259_ = lean_usize_of_nat(v___x_4254_);
lean_inc_ref(v___x_4222_);
v___x_5634__overap_4260_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_4222_, v___f_4223_, v_text_4227_, v___x_4258_, v___x_4259_, v___x_4256_);
lean_inc_ref(v___y_4225_);
v___x_4261_ = lean_apply_2(v___x_5634__overap_4260_, v___y_4225_, v___y_4226_);
v___y_4251_ = v___x_4261_;
goto v___jp_4250_;
}
}
else
{
size_t v___x_4262_; size_t v___x_4263_; lean_object* v___x_5637__overap_4264_; lean_object* v___x_4265_; 
v___x_4262_ = ((size_t)0ULL);
v___x_4263_ = lean_usize_of_nat(v___x_4254_);
lean_inc_ref(v___x_4222_);
v___x_5637__overap_4264_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_4222_, v___f_4223_, v_text_4227_, v___x_4262_, v___x_4263_, v___x_4256_);
lean_inc_ref(v___y_4225_);
v___x_4265_ = lean_apply_2(v___x_5637__overap_4264_, v___y_4225_, v___y_4226_);
v___y_4251_ = v___x_4265_;
goto v___jp_4250_;
}
}
v___jp_4229_:
{
lean_object* v___x_4231_; lean_object* v_snd_4232_; lean_object* v___x_4233_; lean_object* v___f_4234_; lean_object* v___f_4235_; lean_object* v___f_4236_; size_t v_sz_4237_; size_t v___x_4238_; lean_object* v___x_5619__overap_4239_; lean_object* v___x_4240_; lean_object* v_snd_4241_; lean_object* v___x_4243_; uint8_t v_isShared_4244_; uint8_t v_isSharedCheck_4248_; 
v___x_4231_ = l_Lean_Doc_MarkdownM_endBlock___redArg(v_snd_4230_);
v_snd_4232_ = lean_ctor_get(v___x_4231_, 1);
lean_inc(v_snd_4232_);
lean_dec_ref(v___x_4231_);
v___x_4233_ = lean_box(0);
lean_inc_ref(v___x_4220_);
v___f_4234_ = lean_alloc_closure((void*)(l_Lean_instToMarkdownSnippet___lam__1), 8, 3);
lean_closure_set(v___f_4234_, 0, v___x_4220_);
lean_closure_set(v___f_4234_, 1, v___x_4221_);
lean_closure_set(v___f_4234_, 2, v___x_4233_);
v___f_4235_ = lean_alloc_closure((void*)(l_Lean_instToMarkdownSnippet___lam__2), 7, 2);
lean_closure_set(v___f_4235_, 0, v___x_4220_);
lean_closure_set(v___f_4235_, 1, v___x_4233_);
lean_inc_ref(v___x_4222_);
v___f_4236_ = lean_alloc_closure((void*)(l_Lean_instToMarkdownSnippet___lam__4), 9, 4);
lean_closure_set(v___f_4236_, 0, v___x_4222_);
lean_closure_set(v___f_4236_, 1, v___f_4235_);
lean_closure_set(v___f_4236_, 2, v___x_4233_);
lean_closure_set(v___f_4236_, 3, v___f_4234_);
v_sz_4237_ = lean_array_size(v_sections_4228_);
v___x_4238_ = ((size_t)0ULL);
v___x_5619__overap_4239_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_4222_, v_sections_4228_, v___f_4236_, v_sz_4237_, v___x_4238_, v___x_4233_);
v___x_4240_ = lean_apply_2(v___x_5619__overap_4239_, v___y_4225_, v_snd_4232_);
v_snd_4241_ = lean_ctor_get(v___x_4240_, 1);
v_isSharedCheck_4248_ = !lean_is_exclusive(v___x_4240_);
if (v_isSharedCheck_4248_ == 0)
{
lean_object* v_unused_4249_; 
v_unused_4249_ = lean_ctor_get(v___x_4240_, 0);
lean_dec(v_unused_4249_);
v___x_4243_ = v___x_4240_;
v_isShared_4244_ = v_isSharedCheck_4248_;
goto v_resetjp_4242_;
}
else
{
lean_inc(v_snd_4241_);
lean_dec(v___x_4240_);
v___x_4243_ = lean_box(0);
v_isShared_4244_ = v_isSharedCheck_4248_;
goto v_resetjp_4242_;
}
v_resetjp_4242_:
{
lean_object* v___x_4246_; 
if (v_isShared_4244_ == 0)
{
lean_ctor_set(v___x_4243_, 0, v___x_4233_);
v___x_4246_ = v___x_4243_;
goto v_reusejp_4245_;
}
else
{
lean_object* v_reuseFailAlloc_4247_; 
v_reuseFailAlloc_4247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4247_, 0, v___x_4233_);
lean_ctor_set(v_reuseFailAlloc_4247_, 1, v_snd_4241_);
v___x_4246_ = v_reuseFailAlloc_4247_;
goto v_reusejp_4245_;
}
v_reusejp_4245_:
{
return v___x_4246_;
}
}
}
v___jp_4250_:
{
lean_object* v_snd_4252_; 
v_snd_4252_ = lean_ctor_get(v___y_4251_, 1);
lean_inc(v_snd_4252_);
lean_dec_ref(v___y_4251_);
v_snd_4230_ = v_snd_4252_;
goto v___jp_4229_;
}
}
}
static lean_object* _init_l_Lean_instToMarkdownSnippet___closed__0(void){
_start:
{
lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___f_4268_; 
v___x_4266_ = l_Lean_instMarkdownBlockElabInlineElabBlock;
v___x_4267_ = l_Lean_instMarkdownInlineElabInline;
v___f_4268_ = lean_alloc_closure((void*)(l_Lean_instToMarkdownSnippet___lam__0), 6, 2);
lean_closure_set(v___f_4268_, 0, v___x_4267_);
lean_closure_set(v___f_4268_, 1, v___x_4266_);
return v___f_4268_;
}
}
static lean_object* _init_l_Lean_instToMarkdownSnippet___closed__1(void){
_start:
{
lean_object* v___f_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___f_4273_; 
v___f_4269_ = lean_obj_once(&l_Lean_instToMarkdownSnippet___closed__0, &l_Lean_instToMarkdownSnippet___closed__0_once, _init_l_Lean_instToMarkdownSnippet___closed__0);
v___x_4270_ = lean_obj_once(&l_Lean_instMarkdownInlineElabInline___closed__20, &l_Lean_instMarkdownInlineElabInline___closed__20_once, _init_l_Lean_instMarkdownInlineElabInline___closed__20);
v___x_4271_ = l_Lean_instMarkdownBlockElabInlineElabBlock;
v___x_4272_ = l_Lean_instMarkdownInlineElabInline;
v___f_4273_ = lean_alloc_closure((void*)(l_Lean_instToMarkdownSnippet___lam__5), 7, 4);
lean_closure_set(v___f_4273_, 0, v___x_4272_);
lean_closure_set(v___f_4273_, 1, v___x_4271_);
lean_closure_set(v___f_4273_, 2, v___x_4270_);
lean_closure_set(v___f_4273_, 3, v___f_4269_);
return v___f_4273_;
}
}
static lean_object* _init_l_Lean_instToMarkdownSnippet(void){
_start:
{
lean_object* v___f_4274_; 
v___f_4274_ = lean_obj_once(&l_Lean_instToMarkdownSnippet___closed__1, &l_Lean_instToMarkdownSnippet___closed__1_once, _init_l_Lean_instToMarkdownSnippet___closed__1);
return v___f_4274_;
}
}
static lean_object* _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__0(void){
_start:
{
lean_object* v___x_4275_; 
v___x_4275_ = l_Lean_instInhabitedPersistentArray_default(lean_box(0));
return v___x_4275_;
}
}
static lean_object* _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__1(void){
_start:
{
lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; 
v___x_4276_ = lean_box(0);
v___x_4277_ = lean_obj_once(&l_Lean_instInhabitedVersoModuleDocs_default___closed__0, &l_Lean_instInhabitedVersoModuleDocs_default___closed__0_once, _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__0);
v___x_4278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4278_, 0, v___x_4277_);
lean_ctor_set(v___x_4278_, 1, v___x_4276_);
return v___x_4278_;
}
}
static lean_object* _init_l_Lean_instInhabitedVersoModuleDocs_default(void){
_start:
{
lean_object* v___x_4279_; 
v___x_4279_ = lean_obj_once(&l_Lean_instInhabitedVersoModuleDocs_default___closed__1, &l_Lean_instInhabitedVersoModuleDocs_default___closed__1_once, _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__1);
return v___x_4279_;
}
}
static lean_object* _init_l_Lean_instInhabitedVersoModuleDocs(void){
_start:
{
lean_object* v___x_4280_; 
v___x_4280_ = l_Lean_instInhabitedVersoModuleDocs_default;
return v___x_4280_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprVersoModuleDocs___lam__0(lean_object* v___x_4287_, lean_object* v_v_4288_, lean_object* v_x_4289_){
_start:
{
lean_object* v_snippets_4290_; lean_object* v___x_4292_; uint8_t v_isShared_4293_; uint8_t v_isSharedCheck_4313_; 
v_snippets_4290_ = lean_ctor_get(v_v_4288_, 0);
v_isSharedCheck_4313_ = !lean_is_exclusive(v_v_4288_);
if (v_isSharedCheck_4313_ == 0)
{
lean_object* v_unused_4314_; 
v_unused_4314_ = lean_ctor_get(v_v_4288_, 1);
lean_dec(v_unused_4314_);
v___x_4292_ = v_v_4288_;
v_isShared_4293_ = v_isSharedCheck_4313_;
goto v_resetjp_4291_;
}
else
{
lean_inc(v_snippets_4290_);
lean_dec(v_v_4288_);
v___x_4292_ = lean_box(0);
v_isShared_4293_ = v_isSharedCheck_4313_;
goto v_resetjp_4291_;
}
v_resetjp_4291_:
{
lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4301_; 
v___x_4294_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___x_4295_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_4296_ = lean_box(1);
v___x_4297_ = ((lean_object*)(l_Lean_instReprVersoModuleDocs___lam__0___closed__2));
v___x_4298_ = l_Lean_PersistentArray_toArray___redArg(v_snippets_4290_);
lean_dec_ref(v_snippets_4290_);
v___x_4299_ = l_Array_repr___redArg(v___x_4287_, v___x_4298_);
if (v_isShared_4293_ == 0)
{
lean_ctor_set_tag(v___x_4292_, 5);
lean_ctor_set(v___x_4292_, 1, v___x_4299_);
lean_ctor_set(v___x_4292_, 0, v___x_4297_);
v___x_4301_ = v___x_4292_;
goto v_reusejp_4300_;
}
else
{
lean_object* v_reuseFailAlloc_4312_; 
v_reuseFailAlloc_4312_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4312_, 0, v___x_4297_);
lean_ctor_set(v_reuseFailAlloc_4312_, 1, v___x_4299_);
v___x_4301_ = v_reuseFailAlloc_4312_;
goto v_reusejp_4300_;
}
v_reusejp_4300_:
{
lean_object* v___x_4302_; uint8_t v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; 
v___x_4302_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4302_, 0, v___x_4294_);
lean_ctor_set(v___x_4302_, 1, v___x_4301_);
v___x_4303_ = 0;
v___x_4304_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4304_, 0, v___x_4302_);
lean_ctor_set_uint8(v___x_4304_, sizeof(void*)*1, v___x_4303_);
lean_inc_ref(v___x_4304_);
v___x_4305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4305_, 0, v___x_4295_);
lean_ctor_set(v___x_4305_, 1, v___x_4304_);
v___x_4306_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4306_, 0, v___x_4305_);
lean_ctor_set(v___x_4306_, 1, v___x_4296_);
v___x_4307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4307_, 0, v___x_4306_);
lean_ctor_set(v___x_4307_, 1, v___x_4304_);
v___x_4308_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_4309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4309_, 0, v___x_4307_);
lean_ctor_set(v___x_4309_, 1, v___x_4308_);
v___x_4310_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4310_, 0, v___x_4294_);
lean_ctor_set(v___x_4310_, 1, v___x_4309_);
v___x_4311_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4311_, 0, v___x_4310_);
lean_ctor_set_uint8(v___x_4311_, sizeof(void*)*1, v___x_4303_);
return v___x_4311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprVersoModuleDocs___lam__0___boxed(lean_object* v___x_4315_, lean_object* v_v_4316_, lean_object* v_x_4317_){
_start:
{
lean_object* v_res_4318_; 
v_res_4318_ = l_Lean_instReprVersoModuleDocs___lam__0(v___x_4315_, v_v_4316_, v_x_4317_);
lean_dec(v_x_4317_);
return v_res_4318_;
}
}
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_isEmpty(lean_object* v_docs_4322_){
_start:
{
lean_object* v_snippets_4323_; uint8_t v___x_4324_; 
v_snippets_4323_ = lean_ctor_get(v_docs_4322_, 0);
v___x_4324_ = l_Lean_PersistentArray_isEmpty___redArg(v_snippets_4323_);
return v___x_4324_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_isEmpty___boxed(lean_object* v_docs_4325_){
_start:
{
uint8_t v_res_4326_; lean_object* v_r_4327_; 
v_res_4326_ = l_Lean_VersoModuleDocs_isEmpty(v_docs_4325_);
lean_dec_ref(v_docs_4325_);
v_r_4327_ = lean_box(v_res_4326_);
return v_r_4327_;
}
}
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_canAdd(lean_object* v_docs_4328_, lean_object* v_snippet_4329_){
_start:
{
lean_object* v_terminalNesting_4330_; 
v_terminalNesting_4330_ = lean_ctor_get(v_docs_4328_, 1);
if (lean_obj_tag(v_terminalNesting_4330_) == 1)
{
lean_object* v_val_4331_; uint8_t v___x_4332_; 
v_val_4331_ = lean_ctor_get(v_terminalNesting_4330_, 0);
v___x_4332_ = l_Lean_VersoModuleDocs_Snippet_canNestIn(v_val_4331_, v_snippet_4329_);
return v___x_4332_;
}
else
{
uint8_t v___x_4333_; 
v___x_4333_ = 1;
return v___x_4333_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_canAdd___boxed(lean_object* v_docs_4334_, lean_object* v_snippet_4335_){
_start:
{
uint8_t v_res_4336_; lean_object* v_r_4337_; 
v_res_4336_ = l_Lean_VersoModuleDocs_canAdd(v_docs_4334_, v_snippet_4335_);
lean_dec_ref(v_snippet_4335_);
lean_dec_ref(v_docs_4334_);
v_r_4337_ = lean_box(v_res_4336_);
return v_r_4337_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_add(lean_object* v_docs_4341_, lean_object* v_snippet_4342_){
_start:
{
uint8_t v___x_4343_; 
v___x_4343_ = l_Lean_VersoModuleDocs_canAdd(v_docs_4341_, v_snippet_4342_);
if (v___x_4343_ == 0)
{
lean_object* v___x_4344_; 
lean_dec_ref(v_snippet_4342_);
lean_dec_ref(v_docs_4341_);
v___x_4344_ = ((lean_object*)(l_Lean_VersoModuleDocs_add___closed__1));
return v___x_4344_;
}
else
{
lean_object* v_snippets_4345_; lean_object* v___x_4347_; uint8_t v_isShared_4348_; uint8_t v_isSharedCheck_4355_; 
v_snippets_4345_ = lean_ctor_get(v_docs_4341_, 0);
v_isSharedCheck_4355_ = !lean_is_exclusive(v_docs_4341_);
if (v_isSharedCheck_4355_ == 0)
{
lean_object* v_unused_4356_; 
v_unused_4356_ = lean_ctor_get(v_docs_4341_, 1);
lean_dec(v_unused_4356_);
v___x_4347_ = v_docs_4341_;
v_isShared_4348_ = v_isSharedCheck_4355_;
goto v_resetjp_4346_;
}
else
{
lean_inc(v_snippets_4345_);
lean_dec(v_docs_4341_);
v___x_4347_ = lean_box(0);
v_isShared_4348_ = v_isSharedCheck_4355_;
goto v_resetjp_4346_;
}
v_resetjp_4346_:
{
lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4352_; 
lean_inc_ref(v_snippet_4342_);
v___x_4349_ = l_Lean_PersistentArray_push___redArg(v_snippets_4345_, v_snippet_4342_);
v___x_4350_ = l_Lean_VersoModuleDocs_Snippet_terminalNesting(v_snippet_4342_);
lean_dec_ref(v_snippet_4342_);
if (v_isShared_4348_ == 0)
{
lean_ctor_set(v___x_4347_, 1, v___x_4350_);
lean_ctor_set(v___x_4347_, 0, v___x_4349_);
v___x_4352_ = v___x_4347_;
goto v_reusejp_4351_;
}
else
{
lean_object* v_reuseFailAlloc_4354_; 
v_reuseFailAlloc_4354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4354_, 0, v___x_4349_);
lean_ctor_set(v_reuseFailAlloc_4354_, 1, v___x_4350_);
v___x_4352_ = v_reuseFailAlloc_4354_;
goto v_reusejp_4351_;
}
v_reusejp_4351_:
{
lean_object* v___x_4353_; 
v___x_4353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4353_, 0, v___x_4352_);
return v___x_4353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_VersoModuleDocs_add_x21_spec__0(lean_object* v_msg_4357_){
_start:
{
lean_object* v___x_4358_; lean_object* v___x_4359_; 
v___x_4358_ = l_Lean_instInhabitedVersoModuleDocs_default;
v___x_4359_ = lean_panic_fn(v___x_4358_, v_msg_4357_);
return v___x_4359_;
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_add_x21___closed__2(void){
_start:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; 
v___x_4362_ = ((lean_object*)(l_Lean_VersoModuleDocs_add___closed__0));
v___x_4363_ = lean_unsigned_to_nat(4u);
v___x_4364_ = lean_unsigned_to_nat(336u);
v___x_4365_ = ((lean_object*)(l_Lean_VersoModuleDocs_add_x21___closed__1));
v___x_4366_ = ((lean_object*)(l_Lean_VersoModuleDocs_add_x21___closed__0));
v___x_4367_ = l_mkPanicMessageWithDecl(v___x_4366_, v___x_4365_, v___x_4364_, v___x_4363_, v___x_4362_);
return v___x_4367_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_add_x21(lean_object* v_docs_4368_, lean_object* v_snippet_4369_){
_start:
{
lean_object* v_snippets_4370_; lean_object* v_terminalNesting_4371_; lean_object* v___x_4373_; uint8_t v_isShared_4374_; uint8_t v_isSharedCheck_4385_; 
v_snippets_4370_ = lean_ctor_get(v_docs_4368_, 0);
v_terminalNesting_4371_ = lean_ctor_get(v_docs_4368_, 1);
v_isSharedCheck_4385_ = !lean_is_exclusive(v_docs_4368_);
if (v_isSharedCheck_4385_ == 0)
{
v___x_4373_ = v_docs_4368_;
v_isShared_4374_ = v_isSharedCheck_4385_;
goto v_resetjp_4372_;
}
else
{
lean_inc(v_terminalNesting_4371_);
lean_inc(v_snippets_4370_);
lean_dec(v_docs_4368_);
v___x_4373_ = lean_box(0);
v_isShared_4374_ = v_isSharedCheck_4385_;
goto v_resetjp_4372_;
}
v_resetjp_4372_:
{
if (lean_obj_tag(v_terminalNesting_4371_) == 1)
{
lean_object* v_val_4381_; uint8_t v___x_4382_; 
v_val_4381_ = lean_ctor_get(v_terminalNesting_4371_, 0);
lean_inc(v_val_4381_);
lean_dec_ref(v_terminalNesting_4371_);
v___x_4382_ = l_Lean_VersoModuleDocs_Snippet_canNestIn(v_val_4381_, v_snippet_4369_);
lean_dec(v_val_4381_);
if (v___x_4382_ == 0)
{
lean_object* v___x_4383_; lean_object* v___x_4384_; 
lean_del_object(v___x_4373_);
lean_dec_ref(v_snippets_4370_);
lean_dec_ref(v_snippet_4369_);
v___x_4383_ = lean_obj_once(&l_Lean_VersoModuleDocs_add_x21___closed__2, &l_Lean_VersoModuleDocs_add_x21___closed__2_once, _init_l_Lean_VersoModuleDocs_add_x21___closed__2);
v___x_4384_ = l_panic___at___00Lean_VersoModuleDocs_add_x21_spec__0(v___x_4383_);
return v___x_4384_;
}
else
{
goto v___jp_4375_;
}
}
else
{
lean_dec(v_terminalNesting_4371_);
goto v___jp_4375_;
}
v___jp_4375_:
{
lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4379_; 
lean_inc_ref(v_snippet_4369_);
v___x_4376_ = l_Lean_PersistentArray_push___redArg(v_snippets_4370_, v_snippet_4369_);
v___x_4377_ = l_Lean_VersoModuleDocs_Snippet_terminalNesting(v_snippet_4369_);
lean_dec_ref(v_snippet_4369_);
if (v_isShared_4374_ == 0)
{
lean_ctor_set(v___x_4373_, 1, v___x_4377_);
lean_ctor_set(v___x_4373_, 0, v___x_4376_);
v___x_4379_ = v___x_4373_;
goto v_reusejp_4378_;
}
else
{
lean_object* v_reuseFailAlloc_4380_; 
v_reuseFailAlloc_4380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4380_, 0, v___x_4376_);
lean_ctor_set(v_reuseFailAlloc_4380_, 1, v___x_4377_);
v___x_4379_ = v_reuseFailAlloc_4380_;
goto v_reusejp_4378_;
}
v_reusejp_4378_:
{
return v___x_4379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level(lean_object* v_ctx_4386_){
_start:
{
lean_object* v_context_4387_; lean_object* v___x_4388_; 
v_context_4387_ = lean_ctor_get(v_ctx_4386_, 2);
v___x_4388_ = lean_array_get_size(v_context_4387_);
return v___x_4388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level___boxed(lean_object* v_ctx_4389_){
_start:
{
lean_object* v_res_4390_; 
v_res_4390_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level(v_ctx_4389_);
lean_dec_ref(v_ctx_4389_);
return v_res_4390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close(lean_object* v_ctx_4394_){
_start:
{
lean_object* v_content_4395_; lean_object* v_priorParts_4396_; lean_object* v_context_4397_; lean_object* v___x_4399_; uint8_t v_isShared_4400_; uint8_t v_isSharedCheck_4420_; 
v_content_4395_ = lean_ctor_get(v_ctx_4394_, 0);
v_priorParts_4396_ = lean_ctor_get(v_ctx_4394_, 1);
v_context_4397_ = lean_ctor_get(v_ctx_4394_, 2);
v_isSharedCheck_4420_ = !lean_is_exclusive(v_ctx_4394_);
if (v_isSharedCheck_4420_ == 0)
{
v___x_4399_ = v_ctx_4394_;
v_isShared_4400_ = v_isSharedCheck_4420_;
goto v_resetjp_4398_;
}
else
{
lean_inc(v_context_4397_);
lean_inc(v_priorParts_4396_);
lean_inc(v_content_4395_);
lean_dec(v_ctx_4394_);
v___x_4399_ = lean_box(0);
v_isShared_4400_ = v_isSharedCheck_4420_;
goto v_resetjp_4398_;
}
v_resetjp_4398_:
{
lean_object* v___x_4401_; lean_object* v___x_4402_; uint8_t v___x_4403_; 
v___x_4401_ = lean_array_get_size(v_context_4397_);
v___x_4402_ = lean_unsigned_to_nat(0u);
v___x_4403_ = lean_nat_dec_eq(v___x_4401_, v___x_4402_);
if (v___x_4403_ == 0)
{
lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v_last_4406_; lean_object* v_content_4407_; lean_object* v_priorParts_4408_; lean_object* v_titleString_4409_; lean_object* v_title_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4416_; 
v___x_4404_ = lean_unsigned_to_nat(1u);
v___x_4405_ = lean_nat_sub(v___x_4401_, v___x_4404_);
v_last_4406_ = lean_array_fget_borrowed(v_context_4397_, v___x_4405_);
lean_dec(v___x_4405_);
v_content_4407_ = lean_ctor_get(v_last_4406_, 0);
lean_inc_ref(v_content_4407_);
v_priorParts_4408_ = lean_ctor_get(v_last_4406_, 1);
v_titleString_4409_ = lean_ctor_get(v_last_4406_, 2);
v_title_4410_ = lean_ctor_get(v_last_4406_, 3);
v___x_4411_ = lean_box(0);
lean_inc_ref(v_titleString_4409_);
lean_inc_ref(v_title_4410_);
v___x_4412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4412_, 0, v_title_4410_);
lean_ctor_set(v___x_4412_, 1, v_titleString_4409_);
lean_ctor_set(v___x_4412_, 2, v___x_4411_);
lean_ctor_set(v___x_4412_, 3, v_content_4395_);
lean_ctor_set(v___x_4412_, 4, v_priorParts_4396_);
lean_inc_ref(v_priorParts_4408_);
v___x_4413_ = lean_array_push(v_priorParts_4408_, v___x_4412_);
v___x_4414_ = lean_array_pop(v_context_4397_);
if (v_isShared_4400_ == 0)
{
lean_ctor_set(v___x_4399_, 2, v___x_4414_);
lean_ctor_set(v___x_4399_, 1, v___x_4413_);
lean_ctor_set(v___x_4399_, 0, v_content_4407_);
v___x_4416_ = v___x_4399_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4418_; 
v_reuseFailAlloc_4418_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4418_, 0, v_content_4407_);
lean_ctor_set(v_reuseFailAlloc_4418_, 1, v___x_4413_);
lean_ctor_set(v_reuseFailAlloc_4418_, 2, v___x_4414_);
v___x_4416_ = v_reuseFailAlloc_4418_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
lean_object* v___x_4417_; 
v___x_4417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4417_, 0, v___x_4416_);
return v___x_4417_;
}
}
else
{
lean_object* v___x_4419_; 
lean_del_object(v___x_4399_);
lean_dec_ref(v_context_4397_);
lean_dec_ref(v_priorParts_4396_);
lean_dec_ref(v_content_4395_);
v___x_4419_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__1));
return v___x_4419_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_closeAll(lean_object* v_ctx_4421_){
_start:
{
lean_object* v_context_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; uint8_t v___x_4425_; 
v_context_4422_ = lean_ctor_get(v_ctx_4421_, 2);
v___x_4423_ = lean_array_get_size(v_context_4422_);
v___x_4424_ = lean_unsigned_to_nat(0u);
v___x_4425_ = lean_nat_dec_eq(v___x_4423_, v___x_4424_);
if (v___x_4425_ == 0)
{
lean_object* v___x_4426_; 
v___x_4426_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close(v_ctx_4421_);
if (lean_obj_tag(v___x_4426_) == 0)
{
return v___x_4426_;
}
else
{
lean_object* v_a_4427_; 
v_a_4427_ = lean_ctor_get(v___x_4426_, 0);
lean_inc(v_a_4427_);
lean_dec_ref(v___x_4426_);
v_ctx_4421_ = v_a_4427_;
goto _start;
}
}
else
{
lean_object* v___x_4429_; 
v___x_4429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4429_, 0, v_ctx_4421_);
return v___x_4429_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart(lean_object* v_ctx_4432_, lean_object* v_partLevel_4433_, lean_object* v_part_4434_){
_start:
{
lean_object* v___x_4435_; uint8_t v___x_4436_; 
v___x_4435_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level(v_ctx_4432_);
v___x_4436_ = lean_nat_dec_lt(v___x_4435_, v_partLevel_4433_);
if (v___x_4436_ == 0)
{
uint8_t v___x_4437_; 
v___x_4437_ = lean_nat_dec_eq(v_partLevel_4433_, v___x_4435_);
lean_dec(v___x_4435_);
if (v___x_4437_ == 0)
{
lean_object* v___x_4438_; 
v___x_4438_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close(v_ctx_4432_);
if (lean_obj_tag(v___x_4438_) == 0)
{
lean_dec_ref(v_part_4434_);
lean_dec(v_partLevel_4433_);
return v___x_4438_;
}
else
{
lean_object* v_a_4439_; 
v_a_4439_ = lean_ctor_get(v___x_4438_, 0);
lean_inc(v_a_4439_);
lean_dec_ref(v___x_4438_);
v_ctx_4432_ = v_a_4439_;
goto _start;
}
}
else
{
lean_object* v_content_4441_; lean_object* v_priorParts_4442_; lean_object* v_context_4443_; lean_object* v___x_4445_; uint8_t v_isShared_4446_; uint8_t v_isSharedCheck_4452_; 
lean_dec(v_partLevel_4433_);
v_content_4441_ = lean_ctor_get(v_ctx_4432_, 0);
v_priorParts_4442_ = lean_ctor_get(v_ctx_4432_, 1);
v_context_4443_ = lean_ctor_get(v_ctx_4432_, 2);
v_isSharedCheck_4452_ = !lean_is_exclusive(v_ctx_4432_);
if (v_isSharedCheck_4452_ == 0)
{
v___x_4445_ = v_ctx_4432_;
v_isShared_4446_ = v_isSharedCheck_4452_;
goto v_resetjp_4444_;
}
else
{
lean_inc(v_context_4443_);
lean_inc(v_priorParts_4442_);
lean_inc(v_content_4441_);
lean_dec(v_ctx_4432_);
v___x_4445_ = lean_box(0);
v_isShared_4446_ = v_isSharedCheck_4452_;
goto v_resetjp_4444_;
}
v_resetjp_4444_:
{
lean_object* v___x_4447_; lean_object* v___x_4449_; 
v___x_4447_ = lean_array_push(v_priorParts_4442_, v_part_4434_);
if (v_isShared_4446_ == 0)
{
lean_ctor_set(v___x_4445_, 1, v___x_4447_);
v___x_4449_ = v___x_4445_;
goto v_reusejp_4448_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v_content_4441_);
lean_ctor_set(v_reuseFailAlloc_4451_, 1, v___x_4447_);
lean_ctor_set(v_reuseFailAlloc_4451_, 2, v_context_4443_);
v___x_4449_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4448_;
}
v_reusejp_4448_:
{
lean_object* v___x_4450_; 
v___x_4450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4450_, 0, v___x_4449_);
return v___x_4450_;
}
}
}
}
else
{
lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; 
lean_dec_ref(v_part_4434_);
lean_dec_ref(v_ctx_4432_);
v___x_4453_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__0));
v___x_4454_ = l_Nat_reprFast(v___x_4435_);
v___x_4455_ = lean_string_append(v___x_4453_, v___x_4454_);
lean_dec_ref(v___x_4454_);
v___x_4456_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__1));
v___x_4457_ = lean_string_append(v___x_4455_, v___x_4456_);
v___x_4458_ = l_Nat_reprFast(v_partLevel_4433_);
v___x_4459_ = lean_string_append(v___x_4457_, v___x_4458_);
lean_dec_ref(v___x_4458_);
v___x_4460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4460_, 0, v___x_4459_);
return v___x_4460_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks(lean_object* v_ctx_4464_, lean_object* v_blocks_4465_){
_start:
{
lean_object* v_content_4466_; lean_object* v_priorParts_4467_; lean_object* v_context_4468_; lean_object* v___x_4470_; uint8_t v_isShared_4471_; uint8_t v_isSharedCheck_4481_; 
v_content_4466_ = lean_ctor_get(v_ctx_4464_, 0);
v_priorParts_4467_ = lean_ctor_get(v_ctx_4464_, 1);
v_context_4468_ = lean_ctor_get(v_ctx_4464_, 2);
v_isSharedCheck_4481_ = !lean_is_exclusive(v_ctx_4464_);
if (v_isSharedCheck_4481_ == 0)
{
v___x_4470_ = v_ctx_4464_;
v_isShared_4471_ = v_isSharedCheck_4481_;
goto v_resetjp_4469_;
}
else
{
lean_inc(v_context_4468_);
lean_inc(v_priorParts_4467_);
lean_inc(v_content_4466_);
lean_dec(v_ctx_4464_);
v___x_4470_ = lean_box(0);
v_isShared_4471_ = v_isSharedCheck_4481_;
goto v_resetjp_4469_;
}
v_resetjp_4469_:
{
lean_object* v___x_4472_; lean_object* v___x_4473_; uint8_t v___x_4474_; 
v___x_4472_ = lean_array_get_size(v_priorParts_4467_);
v___x_4473_ = lean_unsigned_to_nat(0u);
v___x_4474_ = lean_nat_dec_eq(v___x_4472_, v___x_4473_);
if (v___x_4474_ == 0)
{
lean_object* v___x_4475_; 
lean_del_object(v___x_4470_);
lean_dec_ref(v_context_4468_);
lean_dec_ref(v_priorParts_4467_);
lean_dec_ref(v_content_4466_);
v___x_4475_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__1));
return v___x_4475_;
}
else
{
lean_object* v___x_4476_; lean_object* v___x_4478_; 
v___x_4476_ = l_Array_append___redArg(v_content_4466_, v_blocks_4465_);
if (v_isShared_4471_ == 0)
{
lean_ctor_set(v___x_4470_, 0, v___x_4476_);
v___x_4478_ = v___x_4470_;
goto v_reusejp_4477_;
}
else
{
lean_object* v_reuseFailAlloc_4480_; 
v_reuseFailAlloc_4480_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4480_, 0, v___x_4476_);
lean_ctor_set(v_reuseFailAlloc_4480_, 1, v_priorParts_4467_);
lean_ctor_set(v_reuseFailAlloc_4480_, 2, v_context_4468_);
v___x_4478_ = v_reuseFailAlloc_4480_;
goto v_reusejp_4477_;
}
v_reusejp_4477_:
{
lean_object* v___x_4479_; 
v___x_4479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4479_, 0, v___x_4478_);
return v___x_4479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___boxed(lean_object* v_ctx_4482_, lean_object* v_blocks_4483_){
_start:
{
lean_object* v_res_4484_; 
v_res_4484_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks(v_ctx_4482_, v_blocks_4483_);
lean_dec_ref(v_blocks_4483_);
return v_res_4484_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0(lean_object* v_as_4485_, size_t v_sz_4486_, size_t v_i_4487_, lean_object* v_b_4488_){
_start:
{
uint8_t v___x_4489_; 
v___x_4489_ = lean_usize_dec_lt(v_i_4487_, v_sz_4486_);
if (v___x_4489_ == 0)
{
lean_object* v___x_4490_; 
v___x_4490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4490_, 0, v_b_4488_);
return v___x_4490_;
}
else
{
lean_object* v_a_4491_; lean_object* v_snd_4492_; lean_object* v_fst_4493_; lean_object* v_snd_4494_; lean_object* v___x_4495_; 
v_a_4491_ = lean_array_uget_borrowed(v_as_4485_, v_i_4487_);
v_snd_4492_ = lean_ctor_get(v_a_4491_, 1);
v_fst_4493_ = lean_ctor_get(v_a_4491_, 0);
v_snd_4494_ = lean_ctor_get(v_snd_4492_, 1);
lean_inc(v_snd_4494_);
lean_inc(v_fst_4493_);
v___x_4495_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart(v_b_4488_, v_fst_4493_, v_snd_4494_);
if (lean_obj_tag(v___x_4495_) == 0)
{
return v___x_4495_;
}
else
{
lean_object* v_a_4496_; size_t v___x_4497_; size_t v___x_4498_; 
v_a_4496_ = lean_ctor_get(v___x_4495_, 0);
lean_inc(v_a_4496_);
lean_dec_ref(v___x_4495_);
v___x_4497_ = ((size_t)1ULL);
v___x_4498_ = lean_usize_add(v_i_4487_, v___x_4497_);
v_i_4487_ = v___x_4498_;
v_b_4488_ = v_a_4496_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0___boxed(lean_object* v_as_4500_, lean_object* v_sz_4501_, lean_object* v_i_4502_, lean_object* v_b_4503_){
_start:
{
size_t v_sz_boxed_4504_; size_t v_i_boxed_4505_; lean_object* v_res_4506_; 
v_sz_boxed_4504_ = lean_unbox_usize(v_sz_4501_);
lean_dec(v_sz_4501_);
v_i_boxed_4505_ = lean_unbox_usize(v_i_4502_);
lean_dec(v_i_4502_);
v_res_4506_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0(v_as_4500_, v_sz_boxed_4504_, v_i_boxed_4505_, v_b_4503_);
lean_dec_ref(v_as_4500_);
return v_res_4506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(lean_object* v_ctx_4507_, lean_object* v_snippet_4508_){
_start:
{
lean_object* v_text_4509_; lean_object* v_sections_4510_; lean_object* v___x_4511_; 
v_text_4509_ = lean_ctor_get(v_snippet_4508_, 0);
v_sections_4510_ = lean_ctor_get(v_snippet_4508_, 1);
v___x_4511_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks(v_ctx_4507_, v_text_4509_);
if (lean_obj_tag(v___x_4511_) == 0)
{
return v___x_4511_;
}
else
{
lean_object* v_a_4512_; size_t v_sz_4513_; size_t v___x_4514_; lean_object* v___x_4515_; 
v_a_4512_ = lean_ctor_get(v___x_4511_, 0);
lean_inc(v_a_4512_);
lean_dec_ref(v___x_4511_);
v_sz_4513_ = lean_array_size(v_sections_4510_);
v___x_4514_ = ((size_t)0ULL);
v___x_4515_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0(v_sections_4510_, v_sz_4513_, v___x_4514_, v_a_4512_);
return v___x_4515_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet___boxed(lean_object* v_ctx_4516_, lean_object* v_snippet_4517_){
_start:
{
lean_object* v_res_4518_; 
v_res_4518_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_ctx_4516_, v_snippet_4517_);
lean_dec_ref(v_snippet_4517_);
return v_res_4518_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4(lean_object* v_as_4519_, size_t v_sz_4520_, size_t v_i_4521_, lean_object* v_b_4522_){
_start:
{
uint8_t v___x_4523_; 
v___x_4523_ = lean_usize_dec_lt(v_i_4521_, v_sz_4520_);
if (v___x_4523_ == 0)
{
lean_object* v___x_4524_; 
v___x_4524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4524_, 0, v_b_4522_);
return v___x_4524_;
}
else
{
lean_object* v_snd_4525_; lean_object* v___x_4527_; uint8_t v_isShared_4528_; uint8_t v_isSharedCheck_4547_; 
v_snd_4525_ = lean_ctor_get(v_b_4522_, 1);
v_isSharedCheck_4547_ = !lean_is_exclusive(v_b_4522_);
if (v_isSharedCheck_4547_ == 0)
{
lean_object* v_unused_4548_; 
v_unused_4548_ = lean_ctor_get(v_b_4522_, 0);
lean_dec(v_unused_4548_);
v___x_4527_ = v_b_4522_;
v_isShared_4528_ = v_isSharedCheck_4547_;
goto v_resetjp_4526_;
}
else
{
lean_inc(v_snd_4525_);
lean_dec(v_b_4522_);
v___x_4527_ = lean_box(0);
v_isShared_4528_ = v_isSharedCheck_4547_;
goto v_resetjp_4526_;
}
v_resetjp_4526_:
{
lean_object* v_a_4529_; lean_object* v___x_4530_; 
v_a_4529_ = lean_array_uget_borrowed(v_as_4519_, v_i_4521_);
v___x_4530_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_snd_4525_, v_a_4529_);
if (lean_obj_tag(v___x_4530_) == 0)
{
lean_object* v_a_4531_; lean_object* v___x_4533_; uint8_t v_isShared_4534_; uint8_t v_isSharedCheck_4538_; 
lean_del_object(v___x_4527_);
v_a_4531_ = lean_ctor_get(v___x_4530_, 0);
v_isSharedCheck_4538_ = !lean_is_exclusive(v___x_4530_);
if (v_isSharedCheck_4538_ == 0)
{
v___x_4533_ = v___x_4530_;
v_isShared_4534_ = v_isSharedCheck_4538_;
goto v_resetjp_4532_;
}
else
{
lean_inc(v_a_4531_);
lean_dec(v___x_4530_);
v___x_4533_ = lean_box(0);
v_isShared_4534_ = v_isSharedCheck_4538_;
goto v_resetjp_4532_;
}
v_resetjp_4532_:
{
lean_object* v___x_4536_; 
if (v_isShared_4534_ == 0)
{
v___x_4536_ = v___x_4533_;
goto v_reusejp_4535_;
}
else
{
lean_object* v_reuseFailAlloc_4537_; 
v_reuseFailAlloc_4537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4537_, 0, v_a_4531_);
v___x_4536_ = v_reuseFailAlloc_4537_;
goto v_reusejp_4535_;
}
v_reusejp_4535_:
{
return v___x_4536_;
}
}
}
else
{
lean_object* v_a_4539_; lean_object* v___x_4540_; lean_object* v___x_4542_; 
v_a_4539_ = lean_ctor_get(v___x_4530_, 0);
lean_inc(v_a_4539_);
lean_dec_ref(v___x_4530_);
v___x_4540_ = lean_box(0);
if (v_isShared_4528_ == 0)
{
lean_ctor_set(v___x_4527_, 1, v_a_4539_);
lean_ctor_set(v___x_4527_, 0, v___x_4540_);
v___x_4542_ = v___x_4527_;
goto v_reusejp_4541_;
}
else
{
lean_object* v_reuseFailAlloc_4546_; 
v_reuseFailAlloc_4546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4546_, 0, v___x_4540_);
lean_ctor_set(v_reuseFailAlloc_4546_, 1, v_a_4539_);
v___x_4542_ = v_reuseFailAlloc_4546_;
goto v_reusejp_4541_;
}
v_reusejp_4541_:
{
size_t v___x_4543_; size_t v___x_4544_; 
v___x_4543_ = ((size_t)1ULL);
v___x_4544_ = lean_usize_add(v_i_4521_, v___x_4543_);
v_i_4521_ = v___x_4544_;
v_b_4522_ = v___x_4542_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4___boxed(lean_object* v_as_4549_, lean_object* v_sz_4550_, lean_object* v_i_4551_, lean_object* v_b_4552_){
_start:
{
size_t v_sz_boxed_4553_; size_t v_i_boxed_4554_; lean_object* v_res_4555_; 
v_sz_boxed_4553_ = lean_unbox_usize(v_sz_4550_);
lean_dec(v_sz_4550_);
v_i_boxed_4554_ = lean_unbox_usize(v_i_4551_);
lean_dec(v_i_4551_);
v_res_4555_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4(v_as_4549_, v_sz_boxed_4553_, v_i_boxed_4554_, v_b_4552_);
lean_dec_ref(v_as_4549_);
return v_res_4555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1(lean_object* v_as_4556_, size_t v_sz_4557_, size_t v_i_4558_, lean_object* v_b_4559_){
_start:
{
uint8_t v___x_4560_; 
v___x_4560_ = lean_usize_dec_lt(v_i_4558_, v_sz_4557_);
if (v___x_4560_ == 0)
{
lean_object* v___x_4561_; 
v___x_4561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4561_, 0, v_b_4559_);
return v___x_4561_;
}
else
{
lean_object* v_snd_4562_; lean_object* v___x_4564_; uint8_t v_isShared_4565_; uint8_t v_isSharedCheck_4584_; 
v_snd_4562_ = lean_ctor_get(v_b_4559_, 1);
v_isSharedCheck_4584_ = !lean_is_exclusive(v_b_4559_);
if (v_isSharedCheck_4584_ == 0)
{
lean_object* v_unused_4585_; 
v_unused_4585_ = lean_ctor_get(v_b_4559_, 0);
lean_dec(v_unused_4585_);
v___x_4564_ = v_b_4559_;
v_isShared_4565_ = v_isSharedCheck_4584_;
goto v_resetjp_4563_;
}
else
{
lean_inc(v_snd_4562_);
lean_dec(v_b_4559_);
v___x_4564_ = lean_box(0);
v_isShared_4565_ = v_isSharedCheck_4584_;
goto v_resetjp_4563_;
}
v_resetjp_4563_:
{
lean_object* v_a_4566_; lean_object* v___x_4567_; 
v_a_4566_ = lean_array_uget_borrowed(v_as_4556_, v_i_4558_);
v___x_4567_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_snd_4562_, v_a_4566_);
if (lean_obj_tag(v___x_4567_) == 0)
{
lean_object* v_a_4568_; lean_object* v___x_4570_; uint8_t v_isShared_4571_; uint8_t v_isSharedCheck_4575_; 
lean_del_object(v___x_4564_);
v_a_4568_ = lean_ctor_get(v___x_4567_, 0);
v_isSharedCheck_4575_ = !lean_is_exclusive(v___x_4567_);
if (v_isSharedCheck_4575_ == 0)
{
v___x_4570_ = v___x_4567_;
v_isShared_4571_ = v_isSharedCheck_4575_;
goto v_resetjp_4569_;
}
else
{
lean_inc(v_a_4568_);
lean_dec(v___x_4567_);
v___x_4570_ = lean_box(0);
v_isShared_4571_ = v_isSharedCheck_4575_;
goto v_resetjp_4569_;
}
v_resetjp_4569_:
{
lean_object* v___x_4573_; 
if (v_isShared_4571_ == 0)
{
v___x_4573_ = v___x_4570_;
goto v_reusejp_4572_;
}
else
{
lean_object* v_reuseFailAlloc_4574_; 
v_reuseFailAlloc_4574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4574_, 0, v_a_4568_);
v___x_4573_ = v_reuseFailAlloc_4574_;
goto v_reusejp_4572_;
}
v_reusejp_4572_:
{
return v___x_4573_;
}
}
}
else
{
lean_object* v_a_4576_; lean_object* v___x_4577_; lean_object* v___x_4579_; 
v_a_4576_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_a_4576_);
lean_dec_ref(v___x_4567_);
v___x_4577_ = lean_box(0);
if (v_isShared_4565_ == 0)
{
lean_ctor_set(v___x_4564_, 1, v_a_4576_);
lean_ctor_set(v___x_4564_, 0, v___x_4577_);
v___x_4579_ = v___x_4564_;
goto v_reusejp_4578_;
}
else
{
lean_object* v_reuseFailAlloc_4583_; 
v_reuseFailAlloc_4583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4583_, 0, v___x_4577_);
lean_ctor_set(v_reuseFailAlloc_4583_, 1, v_a_4576_);
v___x_4579_ = v_reuseFailAlloc_4583_;
goto v_reusejp_4578_;
}
v_reusejp_4578_:
{
size_t v___x_4580_; size_t v___x_4581_; lean_object* v___x_4582_; 
v___x_4580_ = ((size_t)1ULL);
v___x_4581_ = lean_usize_add(v_i_4558_, v___x_4580_);
v___x_4582_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4(v_as_4556_, v_sz_4557_, v___x_4581_, v___x_4579_);
return v___x_4582_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1___boxed(lean_object* v_as_4586_, lean_object* v_sz_4587_, lean_object* v_i_4588_, lean_object* v_b_4589_){
_start:
{
size_t v_sz_boxed_4590_; size_t v_i_boxed_4591_; lean_object* v_res_4592_; 
v_sz_boxed_4590_ = lean_unbox_usize(v_sz_4587_);
lean_dec(v_sz_4587_);
v_i_boxed_4591_ = lean_unbox_usize(v_i_4588_);
lean_dec(v_i_4588_);
v_res_4592_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1(v_as_4586_, v_sz_boxed_4590_, v_i_boxed_4591_, v_b_4589_);
lean_dec_ref(v_as_4586_);
return v_res_4592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3(lean_object* v_as_4593_, size_t v_sz_4594_, size_t v_i_4595_, lean_object* v_b_4596_){
_start:
{
uint8_t v___x_4597_; 
v___x_4597_ = lean_usize_dec_lt(v_i_4595_, v_sz_4594_);
if (v___x_4597_ == 0)
{
lean_object* v___x_4598_; 
v___x_4598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4598_, 0, v_b_4596_);
return v___x_4598_;
}
else
{
lean_object* v_snd_4599_; lean_object* v___x_4601_; uint8_t v_isShared_4602_; uint8_t v_isSharedCheck_4621_; 
v_snd_4599_ = lean_ctor_get(v_b_4596_, 1);
v_isSharedCheck_4621_ = !lean_is_exclusive(v_b_4596_);
if (v_isSharedCheck_4621_ == 0)
{
lean_object* v_unused_4622_; 
v_unused_4622_ = lean_ctor_get(v_b_4596_, 0);
lean_dec(v_unused_4622_);
v___x_4601_ = v_b_4596_;
v_isShared_4602_ = v_isSharedCheck_4621_;
goto v_resetjp_4600_;
}
else
{
lean_inc(v_snd_4599_);
lean_dec(v_b_4596_);
v___x_4601_ = lean_box(0);
v_isShared_4602_ = v_isSharedCheck_4621_;
goto v_resetjp_4600_;
}
v_resetjp_4600_:
{
lean_object* v_a_4603_; lean_object* v___x_4604_; 
v_a_4603_ = lean_array_uget_borrowed(v_as_4593_, v_i_4595_);
v___x_4604_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_snd_4599_, v_a_4603_);
if (lean_obj_tag(v___x_4604_) == 0)
{
lean_object* v_a_4605_; lean_object* v___x_4607_; uint8_t v_isShared_4608_; uint8_t v_isSharedCheck_4612_; 
lean_del_object(v___x_4601_);
v_a_4605_ = lean_ctor_get(v___x_4604_, 0);
v_isSharedCheck_4612_ = !lean_is_exclusive(v___x_4604_);
if (v_isSharedCheck_4612_ == 0)
{
v___x_4607_ = v___x_4604_;
v_isShared_4608_ = v_isSharedCheck_4612_;
goto v_resetjp_4606_;
}
else
{
lean_inc(v_a_4605_);
lean_dec(v___x_4604_);
v___x_4607_ = lean_box(0);
v_isShared_4608_ = v_isSharedCheck_4612_;
goto v_resetjp_4606_;
}
v_resetjp_4606_:
{
lean_object* v___x_4610_; 
if (v_isShared_4608_ == 0)
{
v___x_4610_ = v___x_4607_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4611_; 
v_reuseFailAlloc_4611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4611_, 0, v_a_4605_);
v___x_4610_ = v_reuseFailAlloc_4611_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
return v___x_4610_;
}
}
}
else
{
lean_object* v_a_4613_; lean_object* v___x_4614_; lean_object* v___x_4616_; 
v_a_4613_ = lean_ctor_get(v___x_4604_, 0);
lean_inc(v_a_4613_);
lean_dec_ref(v___x_4604_);
v___x_4614_ = lean_box(0);
if (v_isShared_4602_ == 0)
{
lean_ctor_set(v___x_4601_, 1, v_a_4613_);
lean_ctor_set(v___x_4601_, 0, v___x_4614_);
v___x_4616_ = v___x_4601_;
goto v_reusejp_4615_;
}
else
{
lean_object* v_reuseFailAlloc_4620_; 
v_reuseFailAlloc_4620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4620_, 0, v___x_4614_);
lean_ctor_set(v_reuseFailAlloc_4620_, 1, v_a_4613_);
v___x_4616_ = v_reuseFailAlloc_4620_;
goto v_reusejp_4615_;
}
v_reusejp_4615_:
{
size_t v___x_4617_; size_t v___x_4618_; 
v___x_4617_ = ((size_t)1ULL);
v___x_4618_ = lean_usize_add(v_i_4595_, v___x_4617_);
v_i_4595_ = v___x_4618_;
v_b_4596_ = v___x_4616_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_as_4623_, lean_object* v_sz_4624_, lean_object* v_i_4625_, lean_object* v_b_4626_){
_start:
{
size_t v_sz_boxed_4627_; size_t v_i_boxed_4628_; lean_object* v_res_4629_; 
v_sz_boxed_4627_ = lean_unbox_usize(v_sz_4624_);
lean_dec(v_sz_4624_);
v_i_boxed_4628_ = lean_unbox_usize(v_i_4625_);
lean_dec(v_i_4625_);
v_res_4629_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3(v_as_4623_, v_sz_boxed_4627_, v_i_boxed_4628_, v_b_4626_);
lean_dec_ref(v_as_4623_);
return v_res_4629_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2(lean_object* v_as_4630_, size_t v_sz_4631_, size_t v_i_4632_, lean_object* v_b_4633_){
_start:
{
uint8_t v___x_4634_; 
v___x_4634_ = lean_usize_dec_lt(v_i_4632_, v_sz_4631_);
if (v___x_4634_ == 0)
{
lean_object* v___x_4635_; 
v___x_4635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4635_, 0, v_b_4633_);
return v___x_4635_;
}
else
{
lean_object* v_snd_4636_; lean_object* v___x_4638_; uint8_t v_isShared_4639_; uint8_t v_isSharedCheck_4658_; 
v_snd_4636_ = lean_ctor_get(v_b_4633_, 1);
v_isSharedCheck_4658_ = !lean_is_exclusive(v_b_4633_);
if (v_isSharedCheck_4658_ == 0)
{
lean_object* v_unused_4659_; 
v_unused_4659_ = lean_ctor_get(v_b_4633_, 0);
lean_dec(v_unused_4659_);
v___x_4638_ = v_b_4633_;
v_isShared_4639_ = v_isSharedCheck_4658_;
goto v_resetjp_4637_;
}
else
{
lean_inc(v_snd_4636_);
lean_dec(v_b_4633_);
v___x_4638_ = lean_box(0);
v_isShared_4639_ = v_isSharedCheck_4658_;
goto v_resetjp_4637_;
}
v_resetjp_4637_:
{
lean_object* v_a_4640_; lean_object* v___x_4641_; 
v_a_4640_ = lean_array_uget_borrowed(v_as_4630_, v_i_4632_);
v___x_4641_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_snd_4636_, v_a_4640_);
if (lean_obj_tag(v___x_4641_) == 0)
{
lean_object* v_a_4642_; lean_object* v___x_4644_; uint8_t v_isShared_4645_; uint8_t v_isSharedCheck_4649_; 
lean_del_object(v___x_4638_);
v_a_4642_ = lean_ctor_get(v___x_4641_, 0);
v_isSharedCheck_4649_ = !lean_is_exclusive(v___x_4641_);
if (v_isSharedCheck_4649_ == 0)
{
v___x_4644_ = v___x_4641_;
v_isShared_4645_ = v_isSharedCheck_4649_;
goto v_resetjp_4643_;
}
else
{
lean_inc(v_a_4642_);
lean_dec(v___x_4641_);
v___x_4644_ = lean_box(0);
v_isShared_4645_ = v_isSharedCheck_4649_;
goto v_resetjp_4643_;
}
v_resetjp_4643_:
{
lean_object* v___x_4647_; 
if (v_isShared_4645_ == 0)
{
v___x_4647_ = v___x_4644_;
goto v_reusejp_4646_;
}
else
{
lean_object* v_reuseFailAlloc_4648_; 
v_reuseFailAlloc_4648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4648_, 0, v_a_4642_);
v___x_4647_ = v_reuseFailAlloc_4648_;
goto v_reusejp_4646_;
}
v_reusejp_4646_:
{
return v___x_4647_;
}
}
}
else
{
lean_object* v_a_4650_; lean_object* v___x_4651_; lean_object* v___x_4653_; 
v_a_4650_ = lean_ctor_get(v___x_4641_, 0);
lean_inc(v_a_4650_);
lean_dec_ref(v___x_4641_);
v___x_4651_ = lean_box(0);
if (v_isShared_4639_ == 0)
{
lean_ctor_set(v___x_4638_, 1, v_a_4650_);
lean_ctor_set(v___x_4638_, 0, v___x_4651_);
v___x_4653_ = v___x_4638_;
goto v_reusejp_4652_;
}
else
{
lean_object* v_reuseFailAlloc_4657_; 
v_reuseFailAlloc_4657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4657_, 0, v___x_4651_);
lean_ctor_set(v_reuseFailAlloc_4657_, 1, v_a_4650_);
v___x_4653_ = v_reuseFailAlloc_4657_;
goto v_reusejp_4652_;
}
v_reusejp_4652_:
{
size_t v___x_4654_; size_t v___x_4655_; lean_object* v___x_4656_; 
v___x_4654_ = ((size_t)1ULL);
v___x_4655_ = lean_usize_add(v_i_4632_, v___x_4654_);
v___x_4656_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3(v_as_4630_, v_sz_4631_, v___x_4655_, v___x_4653_);
return v___x_4656_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2___boxed(lean_object* v_as_4660_, lean_object* v_sz_4661_, lean_object* v_i_4662_, lean_object* v_b_4663_){
_start:
{
size_t v_sz_boxed_4664_; size_t v_i_boxed_4665_; lean_object* v_res_4666_; 
v_sz_boxed_4664_ = lean_unbox_usize(v_sz_4661_);
lean_dec(v_sz_4661_);
v_i_boxed_4665_ = lean_unbox_usize(v_i_4662_);
lean_dec(v_i_4662_);
v_res_4666_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2(v_as_4660_, v_sz_boxed_4664_, v_i_boxed_4665_, v_b_4663_);
lean_dec_ref(v_as_4660_);
return v_res_4666_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(lean_object* v_inh_4667_, lean_object* v_n_4668_, lean_object* v_b_4669_){
_start:
{
if (lean_obj_tag(v_n_4668_) == 0)
{
lean_object* v_cs_4670_; lean_object* v___x_4672_; uint8_t v_isShared_4673_; uint8_t v_isSharedCheck_4704_; 
v_cs_4670_ = lean_ctor_get(v_n_4668_, 0);
v_isSharedCheck_4704_ = !lean_is_exclusive(v_n_4668_);
if (v_isSharedCheck_4704_ == 0)
{
v___x_4672_ = v_n_4668_;
v_isShared_4673_ = v_isSharedCheck_4704_;
goto v_resetjp_4671_;
}
else
{
lean_inc(v_cs_4670_);
lean_dec(v_n_4668_);
v___x_4672_ = lean_box(0);
v_isShared_4673_ = v_isSharedCheck_4704_;
goto v_resetjp_4671_;
}
v_resetjp_4671_:
{
lean_object* v___x_4674_; lean_object* v___x_4675_; size_t v_sz_4676_; size_t v___x_4677_; lean_object* v___x_4678_; 
v___x_4674_ = lean_box(0);
v___x_4675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4675_, 0, v___x_4674_);
lean_ctor_set(v___x_4675_, 1, v_b_4669_);
v_sz_4676_ = lean_array_size(v_cs_4670_);
v___x_4677_ = ((size_t)0ULL);
v___x_4678_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1(v_inh_4667_, v_cs_4670_, v_sz_4676_, v___x_4677_, v___x_4675_);
lean_dec_ref(v_cs_4670_);
if (lean_obj_tag(v___x_4678_) == 0)
{
lean_object* v_a_4679_; lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4686_; 
lean_del_object(v___x_4672_);
v_a_4679_ = lean_ctor_get(v___x_4678_, 0);
v_isSharedCheck_4686_ = !lean_is_exclusive(v___x_4678_);
if (v_isSharedCheck_4686_ == 0)
{
v___x_4681_ = v___x_4678_;
v_isShared_4682_ = v_isSharedCheck_4686_;
goto v_resetjp_4680_;
}
else
{
lean_inc(v_a_4679_);
lean_dec(v___x_4678_);
v___x_4681_ = lean_box(0);
v_isShared_4682_ = v_isSharedCheck_4686_;
goto v_resetjp_4680_;
}
v_resetjp_4680_:
{
lean_object* v___x_4684_; 
if (v_isShared_4682_ == 0)
{
v___x_4684_ = v___x_4681_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4685_; 
v_reuseFailAlloc_4685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4685_, 0, v_a_4679_);
v___x_4684_ = v_reuseFailAlloc_4685_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
return v___x_4684_;
}
}
}
else
{
lean_object* v_a_4687_; lean_object* v___x_4689_; uint8_t v_isShared_4690_; uint8_t v_isSharedCheck_4703_; 
v_a_4687_ = lean_ctor_get(v___x_4678_, 0);
v_isSharedCheck_4703_ = !lean_is_exclusive(v___x_4678_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4689_ = v___x_4678_;
v_isShared_4690_ = v_isSharedCheck_4703_;
goto v_resetjp_4688_;
}
else
{
lean_inc(v_a_4687_);
lean_dec(v___x_4678_);
v___x_4689_ = lean_box(0);
v_isShared_4690_ = v_isSharedCheck_4703_;
goto v_resetjp_4688_;
}
v_resetjp_4688_:
{
lean_object* v_fst_4691_; 
v_fst_4691_ = lean_ctor_get(v_a_4687_, 0);
if (lean_obj_tag(v_fst_4691_) == 0)
{
lean_object* v_snd_4692_; lean_object* v___x_4694_; 
v_snd_4692_ = lean_ctor_get(v_a_4687_, 1);
lean_inc(v_snd_4692_);
lean_dec(v_a_4687_);
if (v_isShared_4673_ == 0)
{
lean_ctor_set_tag(v___x_4672_, 1);
lean_ctor_set(v___x_4672_, 0, v_snd_4692_);
v___x_4694_ = v___x_4672_;
goto v_reusejp_4693_;
}
else
{
lean_object* v_reuseFailAlloc_4698_; 
v_reuseFailAlloc_4698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4698_, 0, v_snd_4692_);
v___x_4694_ = v_reuseFailAlloc_4698_;
goto v_reusejp_4693_;
}
v_reusejp_4693_:
{
lean_object* v___x_4696_; 
if (v_isShared_4690_ == 0)
{
lean_ctor_set(v___x_4689_, 0, v___x_4694_);
v___x_4696_ = v___x_4689_;
goto v_reusejp_4695_;
}
else
{
lean_object* v_reuseFailAlloc_4697_; 
v_reuseFailAlloc_4697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4697_, 0, v___x_4694_);
v___x_4696_ = v_reuseFailAlloc_4697_;
goto v_reusejp_4695_;
}
v_reusejp_4695_:
{
return v___x_4696_;
}
}
}
else
{
lean_object* v_val_4699_; lean_object* v___x_4701_; 
lean_inc_ref(v_fst_4691_);
lean_dec(v_a_4687_);
lean_del_object(v___x_4672_);
v_val_4699_ = lean_ctor_get(v_fst_4691_, 0);
lean_inc(v_val_4699_);
lean_dec_ref(v_fst_4691_);
if (v_isShared_4690_ == 0)
{
lean_ctor_set(v___x_4689_, 0, v_val_4699_);
v___x_4701_ = v___x_4689_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v_val_4699_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
return v___x_4701_;
}
}
}
}
}
}
else
{
lean_object* v_vs_4705_; lean_object* v___x_4707_; uint8_t v_isShared_4708_; uint8_t v_isSharedCheck_4739_; 
v_vs_4705_ = lean_ctor_get(v_n_4668_, 0);
v_isSharedCheck_4739_ = !lean_is_exclusive(v_n_4668_);
if (v_isSharedCheck_4739_ == 0)
{
v___x_4707_ = v_n_4668_;
v_isShared_4708_ = v_isSharedCheck_4739_;
goto v_resetjp_4706_;
}
else
{
lean_inc(v_vs_4705_);
lean_dec(v_n_4668_);
v___x_4707_ = lean_box(0);
v_isShared_4708_ = v_isSharedCheck_4739_;
goto v_resetjp_4706_;
}
v_resetjp_4706_:
{
lean_object* v___x_4709_; lean_object* v___x_4710_; size_t v_sz_4711_; size_t v___x_4712_; lean_object* v___x_4713_; 
v___x_4709_ = lean_box(0);
v___x_4710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4710_, 0, v___x_4709_);
lean_ctor_set(v___x_4710_, 1, v_b_4669_);
v_sz_4711_ = lean_array_size(v_vs_4705_);
v___x_4712_ = ((size_t)0ULL);
v___x_4713_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2(v_vs_4705_, v_sz_4711_, v___x_4712_, v___x_4710_);
lean_dec_ref(v_vs_4705_);
if (lean_obj_tag(v___x_4713_) == 0)
{
lean_object* v_a_4714_; lean_object* v___x_4716_; uint8_t v_isShared_4717_; uint8_t v_isSharedCheck_4721_; 
lean_del_object(v___x_4707_);
v_a_4714_ = lean_ctor_get(v___x_4713_, 0);
v_isSharedCheck_4721_ = !lean_is_exclusive(v___x_4713_);
if (v_isSharedCheck_4721_ == 0)
{
v___x_4716_ = v___x_4713_;
v_isShared_4717_ = v_isSharedCheck_4721_;
goto v_resetjp_4715_;
}
else
{
lean_inc(v_a_4714_);
lean_dec(v___x_4713_);
v___x_4716_ = lean_box(0);
v_isShared_4717_ = v_isSharedCheck_4721_;
goto v_resetjp_4715_;
}
v_resetjp_4715_:
{
lean_object* v___x_4719_; 
if (v_isShared_4717_ == 0)
{
v___x_4719_ = v___x_4716_;
goto v_reusejp_4718_;
}
else
{
lean_object* v_reuseFailAlloc_4720_; 
v_reuseFailAlloc_4720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4720_, 0, v_a_4714_);
v___x_4719_ = v_reuseFailAlloc_4720_;
goto v_reusejp_4718_;
}
v_reusejp_4718_:
{
return v___x_4719_;
}
}
}
else
{
lean_object* v_a_4722_; lean_object* v___x_4724_; uint8_t v_isShared_4725_; uint8_t v_isSharedCheck_4738_; 
v_a_4722_ = lean_ctor_get(v___x_4713_, 0);
v_isSharedCheck_4738_ = !lean_is_exclusive(v___x_4713_);
if (v_isSharedCheck_4738_ == 0)
{
v___x_4724_ = v___x_4713_;
v_isShared_4725_ = v_isSharedCheck_4738_;
goto v_resetjp_4723_;
}
else
{
lean_inc(v_a_4722_);
lean_dec(v___x_4713_);
v___x_4724_ = lean_box(0);
v_isShared_4725_ = v_isSharedCheck_4738_;
goto v_resetjp_4723_;
}
v_resetjp_4723_:
{
lean_object* v_fst_4726_; 
v_fst_4726_ = lean_ctor_get(v_a_4722_, 0);
if (lean_obj_tag(v_fst_4726_) == 0)
{
lean_object* v_snd_4727_; lean_object* v___x_4729_; 
v_snd_4727_ = lean_ctor_get(v_a_4722_, 1);
lean_inc(v_snd_4727_);
lean_dec(v_a_4722_);
if (v_isShared_4708_ == 0)
{
lean_ctor_set(v___x_4707_, 0, v_snd_4727_);
v___x_4729_ = v___x_4707_;
goto v_reusejp_4728_;
}
else
{
lean_object* v_reuseFailAlloc_4733_; 
v_reuseFailAlloc_4733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4733_, 0, v_snd_4727_);
v___x_4729_ = v_reuseFailAlloc_4733_;
goto v_reusejp_4728_;
}
v_reusejp_4728_:
{
lean_object* v___x_4731_; 
if (v_isShared_4725_ == 0)
{
lean_ctor_set(v___x_4724_, 0, v___x_4729_);
v___x_4731_ = v___x_4724_;
goto v_reusejp_4730_;
}
else
{
lean_object* v_reuseFailAlloc_4732_; 
v_reuseFailAlloc_4732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4732_, 0, v___x_4729_);
v___x_4731_ = v_reuseFailAlloc_4732_;
goto v_reusejp_4730_;
}
v_reusejp_4730_:
{
return v___x_4731_;
}
}
}
else
{
lean_object* v_val_4734_; lean_object* v___x_4736_; 
lean_inc_ref(v_fst_4726_);
lean_dec(v_a_4722_);
lean_del_object(v___x_4707_);
v_val_4734_ = lean_ctor_get(v_fst_4726_, 0);
lean_inc(v_val_4734_);
lean_dec_ref(v_fst_4726_);
if (v_isShared_4725_ == 0)
{
lean_ctor_set(v___x_4724_, 0, v_val_4734_);
v___x_4736_ = v___x_4724_;
goto v_reusejp_4735_;
}
else
{
lean_object* v_reuseFailAlloc_4737_; 
v_reuseFailAlloc_4737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4737_, 0, v_val_4734_);
v___x_4736_ = v_reuseFailAlloc_4737_;
goto v_reusejp_4735_;
}
v_reusejp_4735_:
{
return v___x_4736_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1(lean_object* v_inh_4740_, lean_object* v_as_4741_, size_t v_sz_4742_, size_t v_i_4743_, lean_object* v_b_4744_){
_start:
{
uint8_t v___x_4745_; 
v___x_4745_ = lean_usize_dec_lt(v_i_4743_, v_sz_4742_);
if (v___x_4745_ == 0)
{
lean_object* v___x_4746_; 
v___x_4746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4746_, 0, v_b_4744_);
return v___x_4746_;
}
else
{
lean_object* v_snd_4747_; lean_object* v___x_4749_; uint8_t v_isShared_4750_; uint8_t v_isSharedCheck_4781_; 
v_snd_4747_ = lean_ctor_get(v_b_4744_, 1);
v_isSharedCheck_4781_ = !lean_is_exclusive(v_b_4744_);
if (v_isSharedCheck_4781_ == 0)
{
lean_object* v_unused_4782_; 
v_unused_4782_ = lean_ctor_get(v_b_4744_, 0);
lean_dec(v_unused_4782_);
v___x_4749_ = v_b_4744_;
v_isShared_4750_ = v_isSharedCheck_4781_;
goto v_resetjp_4748_;
}
else
{
lean_inc(v_snd_4747_);
lean_dec(v_b_4744_);
v___x_4749_ = lean_box(0);
v_isShared_4750_ = v_isSharedCheck_4781_;
goto v_resetjp_4748_;
}
v_resetjp_4748_:
{
lean_object* v_a_4751_; lean_object* v___x_4752_; 
v_a_4751_ = lean_array_uget_borrowed(v_as_4741_, v_i_4743_);
lean_inc(v_snd_4747_);
lean_inc(v_a_4751_);
v___x_4752_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(v_inh_4740_, v_a_4751_, v_snd_4747_);
if (lean_obj_tag(v___x_4752_) == 0)
{
lean_object* v_a_4753_; lean_object* v___x_4755_; uint8_t v_isShared_4756_; uint8_t v_isSharedCheck_4760_; 
lean_del_object(v___x_4749_);
lean_dec(v_snd_4747_);
v_a_4753_ = lean_ctor_get(v___x_4752_, 0);
v_isSharedCheck_4760_ = !lean_is_exclusive(v___x_4752_);
if (v_isSharedCheck_4760_ == 0)
{
v___x_4755_ = v___x_4752_;
v_isShared_4756_ = v_isSharedCheck_4760_;
goto v_resetjp_4754_;
}
else
{
lean_inc(v_a_4753_);
lean_dec(v___x_4752_);
v___x_4755_ = lean_box(0);
v_isShared_4756_ = v_isSharedCheck_4760_;
goto v_resetjp_4754_;
}
v_resetjp_4754_:
{
lean_object* v___x_4758_; 
if (v_isShared_4756_ == 0)
{
v___x_4758_ = v___x_4755_;
goto v_reusejp_4757_;
}
else
{
lean_object* v_reuseFailAlloc_4759_; 
v_reuseFailAlloc_4759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4759_, 0, v_a_4753_);
v___x_4758_ = v_reuseFailAlloc_4759_;
goto v_reusejp_4757_;
}
v_reusejp_4757_:
{
return v___x_4758_;
}
}
}
else
{
lean_object* v_a_4761_; lean_object* v___x_4763_; uint8_t v_isShared_4764_; uint8_t v_isSharedCheck_4780_; 
v_a_4761_ = lean_ctor_get(v___x_4752_, 0);
v_isSharedCheck_4780_ = !lean_is_exclusive(v___x_4752_);
if (v_isSharedCheck_4780_ == 0)
{
v___x_4763_ = v___x_4752_;
v_isShared_4764_ = v_isSharedCheck_4780_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_a_4761_);
lean_dec(v___x_4752_);
v___x_4763_ = lean_box(0);
v_isShared_4764_ = v_isSharedCheck_4780_;
goto v_resetjp_4762_;
}
v_resetjp_4762_:
{
if (lean_obj_tag(v_a_4761_) == 0)
{
lean_object* v___x_4765_; lean_object* v___x_4767_; 
v___x_4765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4765_, 0, v_a_4761_);
if (v_isShared_4750_ == 0)
{
lean_ctor_set(v___x_4749_, 0, v___x_4765_);
v___x_4767_ = v___x_4749_;
goto v_reusejp_4766_;
}
else
{
lean_object* v_reuseFailAlloc_4771_; 
v_reuseFailAlloc_4771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4771_, 0, v___x_4765_);
lean_ctor_set(v_reuseFailAlloc_4771_, 1, v_snd_4747_);
v___x_4767_ = v_reuseFailAlloc_4771_;
goto v_reusejp_4766_;
}
v_reusejp_4766_:
{
lean_object* v___x_4769_; 
if (v_isShared_4764_ == 0)
{
lean_ctor_set(v___x_4763_, 0, v___x_4767_);
v___x_4769_ = v___x_4763_;
goto v_reusejp_4768_;
}
else
{
lean_object* v_reuseFailAlloc_4770_; 
v_reuseFailAlloc_4770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4770_, 0, v___x_4767_);
v___x_4769_ = v_reuseFailAlloc_4770_;
goto v_reusejp_4768_;
}
v_reusejp_4768_:
{
return v___x_4769_;
}
}
}
else
{
lean_object* v_a_4772_; lean_object* v___x_4773_; lean_object* v___x_4775_; 
lean_del_object(v___x_4763_);
lean_dec(v_snd_4747_);
v_a_4772_ = lean_ctor_get(v_a_4761_, 0);
lean_inc(v_a_4772_);
lean_dec_ref(v_a_4761_);
v___x_4773_ = lean_box(0);
if (v_isShared_4750_ == 0)
{
lean_ctor_set(v___x_4749_, 1, v_a_4772_);
lean_ctor_set(v___x_4749_, 0, v___x_4773_);
v___x_4775_ = v___x_4749_;
goto v_reusejp_4774_;
}
else
{
lean_object* v_reuseFailAlloc_4779_; 
v_reuseFailAlloc_4779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4779_, 0, v___x_4773_);
lean_ctor_set(v_reuseFailAlloc_4779_, 1, v_a_4772_);
v___x_4775_ = v_reuseFailAlloc_4779_;
goto v_reusejp_4774_;
}
v_reusejp_4774_:
{
size_t v___x_4776_; size_t v___x_4777_; 
v___x_4776_ = ((size_t)1ULL);
v___x_4777_ = lean_usize_add(v_i_4743_, v___x_4776_);
v_i_4743_ = v___x_4777_;
v_b_4744_ = v___x_4775_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1___boxed(lean_object* v_inh_4783_, lean_object* v_as_4784_, lean_object* v_sz_4785_, lean_object* v_i_4786_, lean_object* v_b_4787_){
_start:
{
size_t v_sz_boxed_4788_; size_t v_i_boxed_4789_; lean_object* v_res_4790_; 
v_sz_boxed_4788_ = lean_unbox_usize(v_sz_4785_);
lean_dec(v_sz_4785_);
v_i_boxed_4789_ = lean_unbox_usize(v_i_4786_);
lean_dec(v_i_4786_);
v_res_4790_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1(v_inh_4783_, v_as_4784_, v_sz_boxed_4788_, v_i_boxed_4789_, v_b_4787_);
lean_dec_ref(v_as_4784_);
lean_dec_ref(v_inh_4783_);
return v_res_4790_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0___boxed(lean_object* v_inh_4791_, lean_object* v_n_4792_, lean_object* v_b_4793_){
_start:
{
lean_object* v_res_4794_; 
v_res_4794_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(v_inh_4791_, v_n_4792_, v_b_4793_);
lean_dec_ref(v_inh_4791_);
return v_res_4794_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0(lean_object* v_t_4795_, lean_object* v_init_4796_){
_start:
{
lean_object* v_root_4797_; lean_object* v_tail_4798_; lean_object* v___x_4799_; 
v_root_4797_ = lean_ctor_get(v_t_4795_, 0);
lean_inc_ref(v_root_4797_);
v_tail_4798_ = lean_ctor_get(v_t_4795_, 1);
lean_inc_ref(v_tail_4798_);
lean_dec_ref(v_t_4795_);
lean_inc_ref(v_init_4796_);
v___x_4799_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(v_init_4796_, v_root_4797_, v_init_4796_);
lean_dec_ref(v_init_4796_);
if (lean_obj_tag(v___x_4799_) == 0)
{
lean_object* v_a_4800_; lean_object* v___x_4802_; uint8_t v_isShared_4803_; uint8_t v_isSharedCheck_4807_; 
lean_dec_ref(v_tail_4798_);
v_a_4800_ = lean_ctor_get(v___x_4799_, 0);
v_isSharedCheck_4807_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4807_ == 0)
{
v___x_4802_ = v___x_4799_;
v_isShared_4803_ = v_isSharedCheck_4807_;
goto v_resetjp_4801_;
}
else
{
lean_inc(v_a_4800_);
lean_dec(v___x_4799_);
v___x_4802_ = lean_box(0);
v_isShared_4803_ = v_isSharedCheck_4807_;
goto v_resetjp_4801_;
}
v_resetjp_4801_:
{
lean_object* v___x_4805_; 
if (v_isShared_4803_ == 0)
{
v___x_4805_ = v___x_4802_;
goto v_reusejp_4804_;
}
else
{
lean_object* v_reuseFailAlloc_4806_; 
v_reuseFailAlloc_4806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4806_, 0, v_a_4800_);
v___x_4805_ = v_reuseFailAlloc_4806_;
goto v_reusejp_4804_;
}
v_reusejp_4804_:
{
return v___x_4805_;
}
}
}
else
{
lean_object* v_a_4808_; lean_object* v___x_4810_; uint8_t v_isShared_4811_; uint8_t v_isSharedCheck_4844_; 
v_a_4808_ = lean_ctor_get(v___x_4799_, 0);
v_isSharedCheck_4844_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4844_ == 0)
{
v___x_4810_ = v___x_4799_;
v_isShared_4811_ = v_isSharedCheck_4844_;
goto v_resetjp_4809_;
}
else
{
lean_inc(v_a_4808_);
lean_dec(v___x_4799_);
v___x_4810_ = lean_box(0);
v_isShared_4811_ = v_isSharedCheck_4844_;
goto v_resetjp_4809_;
}
v_resetjp_4809_:
{
if (lean_obj_tag(v_a_4808_) == 0)
{
lean_object* v_a_4812_; lean_object* v___x_4814_; 
lean_dec_ref(v_tail_4798_);
v_a_4812_ = lean_ctor_get(v_a_4808_, 0);
lean_inc(v_a_4812_);
lean_dec_ref(v_a_4808_);
if (v_isShared_4811_ == 0)
{
lean_ctor_set(v___x_4810_, 0, v_a_4812_);
v___x_4814_ = v___x_4810_;
goto v_reusejp_4813_;
}
else
{
lean_object* v_reuseFailAlloc_4815_; 
v_reuseFailAlloc_4815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4815_, 0, v_a_4812_);
v___x_4814_ = v_reuseFailAlloc_4815_;
goto v_reusejp_4813_;
}
v_reusejp_4813_:
{
return v___x_4814_;
}
}
else
{
lean_object* v_a_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; size_t v_sz_4819_; size_t v___x_4820_; lean_object* v___x_4821_; 
lean_del_object(v___x_4810_);
v_a_4816_ = lean_ctor_get(v_a_4808_, 0);
lean_inc(v_a_4816_);
lean_dec_ref(v_a_4808_);
v___x_4817_ = lean_box(0);
v___x_4818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4818_, 0, v___x_4817_);
lean_ctor_set(v___x_4818_, 1, v_a_4816_);
v_sz_4819_ = lean_array_size(v_tail_4798_);
v___x_4820_ = ((size_t)0ULL);
v___x_4821_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1(v_tail_4798_, v_sz_4819_, v___x_4820_, v___x_4818_);
lean_dec_ref(v_tail_4798_);
if (lean_obj_tag(v___x_4821_) == 0)
{
lean_object* v_a_4822_; lean_object* v___x_4824_; uint8_t v_isShared_4825_; uint8_t v_isSharedCheck_4829_; 
v_a_4822_ = lean_ctor_get(v___x_4821_, 0);
v_isSharedCheck_4829_ = !lean_is_exclusive(v___x_4821_);
if (v_isSharedCheck_4829_ == 0)
{
v___x_4824_ = v___x_4821_;
v_isShared_4825_ = v_isSharedCheck_4829_;
goto v_resetjp_4823_;
}
else
{
lean_inc(v_a_4822_);
lean_dec(v___x_4821_);
v___x_4824_ = lean_box(0);
v_isShared_4825_ = v_isSharedCheck_4829_;
goto v_resetjp_4823_;
}
v_resetjp_4823_:
{
lean_object* v___x_4827_; 
if (v_isShared_4825_ == 0)
{
v___x_4827_ = v___x_4824_;
goto v_reusejp_4826_;
}
else
{
lean_object* v_reuseFailAlloc_4828_; 
v_reuseFailAlloc_4828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4828_, 0, v_a_4822_);
v___x_4827_ = v_reuseFailAlloc_4828_;
goto v_reusejp_4826_;
}
v_reusejp_4826_:
{
return v___x_4827_;
}
}
}
else
{
lean_object* v_a_4830_; lean_object* v___x_4832_; uint8_t v_isShared_4833_; uint8_t v_isSharedCheck_4843_; 
v_a_4830_ = lean_ctor_get(v___x_4821_, 0);
v_isSharedCheck_4843_ = !lean_is_exclusive(v___x_4821_);
if (v_isSharedCheck_4843_ == 0)
{
v___x_4832_ = v___x_4821_;
v_isShared_4833_ = v_isSharedCheck_4843_;
goto v_resetjp_4831_;
}
else
{
lean_inc(v_a_4830_);
lean_dec(v___x_4821_);
v___x_4832_ = lean_box(0);
v_isShared_4833_ = v_isSharedCheck_4843_;
goto v_resetjp_4831_;
}
v_resetjp_4831_:
{
lean_object* v_fst_4834_; 
v_fst_4834_ = lean_ctor_get(v_a_4830_, 0);
if (lean_obj_tag(v_fst_4834_) == 0)
{
lean_object* v_snd_4835_; lean_object* v___x_4837_; 
v_snd_4835_ = lean_ctor_get(v_a_4830_, 1);
lean_inc(v_snd_4835_);
lean_dec(v_a_4830_);
if (v_isShared_4833_ == 0)
{
lean_ctor_set(v___x_4832_, 0, v_snd_4835_);
v___x_4837_ = v___x_4832_;
goto v_reusejp_4836_;
}
else
{
lean_object* v_reuseFailAlloc_4838_; 
v_reuseFailAlloc_4838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4838_, 0, v_snd_4835_);
v___x_4837_ = v_reuseFailAlloc_4838_;
goto v_reusejp_4836_;
}
v_reusejp_4836_:
{
return v___x_4837_;
}
}
else
{
lean_object* v_val_4839_; lean_object* v___x_4841_; 
lean_inc_ref(v_fst_4834_);
lean_dec(v_a_4830_);
v_val_4839_ = lean_ctor_get(v_fst_4834_, 0);
lean_inc(v_val_4839_);
lean_dec_ref(v_fst_4834_);
if (v_isShared_4833_ == 0)
{
lean_ctor_set(v___x_4832_, 0, v_val_4839_);
v___x_4841_ = v___x_4832_;
goto v_reusejp_4840_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v_val_4839_);
v___x_4841_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4840_;
}
v_reusejp_4840_:
{
return v___x_4841_;
}
}
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_assemble___closed__1(void){
_start:
{
lean_object* v___x_4847_; lean_object* v_ctx_4848_; 
v___x_4847_ = ((lean_object*)(l_Lean_VersoModuleDocs_assemble___closed__0));
v_ctx_4848_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_ctx_4848_, 0, v___x_4847_);
lean_ctor_set(v_ctx_4848_, 1, v___x_4847_);
lean_ctor_set(v_ctx_4848_, 2, v___x_4847_);
return v_ctx_4848_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_assemble(lean_object* v_docs_4849_){
_start:
{
lean_object* v_snippets_4850_; lean_object* v___x_4852_; uint8_t v_isShared_4853_; uint8_t v_isSharedCheck_4887_; 
v_snippets_4850_ = lean_ctor_get(v_docs_4849_, 0);
v_isSharedCheck_4887_ = !lean_is_exclusive(v_docs_4849_);
if (v_isSharedCheck_4887_ == 0)
{
lean_object* v_unused_4888_; 
v_unused_4888_ = lean_ctor_get(v_docs_4849_, 1);
lean_dec(v_unused_4888_);
v___x_4852_ = v_docs_4849_;
v_isShared_4853_ = v_isSharedCheck_4887_;
goto v_resetjp_4851_;
}
else
{
lean_inc(v_snippets_4850_);
lean_dec(v_docs_4849_);
v___x_4852_ = lean_box(0);
v_isShared_4853_ = v_isSharedCheck_4887_;
goto v_resetjp_4851_;
}
v_resetjp_4851_:
{
lean_object* v_ctx_4854_; lean_object* v___x_4855_; 
v_ctx_4854_ = lean_obj_once(&l_Lean_VersoModuleDocs_assemble___closed__1, &l_Lean_VersoModuleDocs_assemble___closed__1_once, _init_l_Lean_VersoModuleDocs_assemble___closed__1);
v___x_4855_ = l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0(v_snippets_4850_, v_ctx_4854_);
if (lean_obj_tag(v___x_4855_) == 0)
{
lean_object* v_a_4856_; lean_object* v___x_4858_; uint8_t v_isShared_4859_; uint8_t v_isSharedCheck_4863_; 
lean_del_object(v___x_4852_);
v_a_4856_ = lean_ctor_get(v___x_4855_, 0);
v_isSharedCheck_4863_ = !lean_is_exclusive(v___x_4855_);
if (v_isSharedCheck_4863_ == 0)
{
v___x_4858_ = v___x_4855_;
v_isShared_4859_ = v_isSharedCheck_4863_;
goto v_resetjp_4857_;
}
else
{
lean_inc(v_a_4856_);
lean_dec(v___x_4855_);
v___x_4858_ = lean_box(0);
v_isShared_4859_ = v_isSharedCheck_4863_;
goto v_resetjp_4857_;
}
v_resetjp_4857_:
{
lean_object* v___x_4861_; 
if (v_isShared_4859_ == 0)
{
v___x_4861_ = v___x_4858_;
goto v_reusejp_4860_;
}
else
{
lean_object* v_reuseFailAlloc_4862_; 
v_reuseFailAlloc_4862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4862_, 0, v_a_4856_);
v___x_4861_ = v_reuseFailAlloc_4862_;
goto v_reusejp_4860_;
}
v_reusejp_4860_:
{
return v___x_4861_;
}
}
}
else
{
lean_object* v_a_4864_; lean_object* v___x_4865_; 
v_a_4864_ = lean_ctor_get(v___x_4855_, 0);
lean_inc(v_a_4864_);
lean_dec_ref(v___x_4855_);
v___x_4865_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_closeAll(v_a_4864_);
if (lean_obj_tag(v___x_4865_) == 0)
{
lean_object* v_a_4866_; lean_object* v___x_4868_; uint8_t v_isShared_4869_; uint8_t v_isSharedCheck_4873_; 
lean_del_object(v___x_4852_);
v_a_4866_ = lean_ctor_get(v___x_4865_, 0);
v_isSharedCheck_4873_ = !lean_is_exclusive(v___x_4865_);
if (v_isSharedCheck_4873_ == 0)
{
v___x_4868_ = v___x_4865_;
v_isShared_4869_ = v_isSharedCheck_4873_;
goto v_resetjp_4867_;
}
else
{
lean_inc(v_a_4866_);
lean_dec(v___x_4865_);
v___x_4868_ = lean_box(0);
v_isShared_4869_ = v_isSharedCheck_4873_;
goto v_resetjp_4867_;
}
v_resetjp_4867_:
{
lean_object* v___x_4871_; 
if (v_isShared_4869_ == 0)
{
v___x_4871_ = v___x_4868_;
goto v_reusejp_4870_;
}
else
{
lean_object* v_reuseFailAlloc_4872_; 
v_reuseFailAlloc_4872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4872_, 0, v_a_4866_);
v___x_4871_ = v_reuseFailAlloc_4872_;
goto v_reusejp_4870_;
}
v_reusejp_4870_:
{
return v___x_4871_;
}
}
}
else
{
lean_object* v_a_4874_; lean_object* v___x_4876_; uint8_t v_isShared_4877_; uint8_t v_isSharedCheck_4886_; 
v_a_4874_ = lean_ctor_get(v___x_4865_, 0);
v_isSharedCheck_4886_ = !lean_is_exclusive(v___x_4865_);
if (v_isSharedCheck_4886_ == 0)
{
v___x_4876_ = v___x_4865_;
v_isShared_4877_ = v_isSharedCheck_4886_;
goto v_resetjp_4875_;
}
else
{
lean_inc(v_a_4874_);
lean_dec(v___x_4865_);
v___x_4876_ = lean_box(0);
v_isShared_4877_ = v_isSharedCheck_4886_;
goto v_resetjp_4875_;
}
v_resetjp_4875_:
{
lean_object* v_content_4878_; lean_object* v_priorParts_4879_; lean_object* v___x_4881_; 
v_content_4878_ = lean_ctor_get(v_a_4874_, 0);
lean_inc_ref(v_content_4878_);
v_priorParts_4879_ = lean_ctor_get(v_a_4874_, 1);
lean_inc_ref(v_priorParts_4879_);
lean_dec(v_a_4874_);
if (v_isShared_4853_ == 0)
{
lean_ctor_set(v___x_4852_, 1, v_priorParts_4879_);
lean_ctor_set(v___x_4852_, 0, v_content_4878_);
v___x_4881_ = v___x_4852_;
goto v_reusejp_4880_;
}
else
{
lean_object* v_reuseFailAlloc_4885_; 
v_reuseFailAlloc_4885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4885_, 0, v_content_4878_);
lean_ctor_set(v_reuseFailAlloc_4885_, 1, v_priorParts_4879_);
v___x_4881_ = v_reuseFailAlloc_4885_;
goto v_reusejp_4880_;
}
v_reusejp_4880_:
{
lean_object* v___x_4883_; 
if (v_isShared_4877_ == 0)
{
lean_ctor_set(v___x_4876_, 0, v___x_4881_);
v___x_4883_ = v___x_4876_;
goto v_reusejp_4882_;
}
else
{
lean_object* v_reuseFailAlloc_4884_; 
v_reuseFailAlloc_4884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4884_, 0, v___x_4881_);
v___x_4883_ = v_reuseFailAlloc_4884_;
goto v_reusejp_4882_;
}
v_reusejp_4882_:
{
return v___x_4883_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_(lean_object* v_x_4891_, lean_object* v_x_4892_, lean_object* v_es_4893_, uint8_t v_level_4894_){
_start:
{
uint8_t v___x_4895_; uint8_t v___x_4896_; 
v___x_4895_ = 1;
v___x_4896_ = l_Lean_instOrdOLeanLevel_ord(v_level_4894_, v___x_4895_);
if (v___x_4896_ == 0)
{
lean_object* v___x_4897_; 
lean_dec(v_es_4893_);
v___x_4897_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_));
return v___x_4897_;
}
else
{
lean_object* v___x_4898_; 
v___x_4898_ = lean_array_mk(v_es_4893_);
return v___x_4898_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2____boxed(lean_object* v_x_4899_, lean_object* v_x_4900_, lean_object* v_es_4901_, lean_object* v_level_4902_){
_start:
{
uint8_t v_level_boxed_4903_; lean_object* v_res_4904_; 
v_level_boxed_4903_ = lean_unbox(v_level_4902_);
v_res_4904_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_(v_x_4899_, v_x_4900_, v_es_4901_, v_level_boxed_4903_);
lean_dec_ref(v_x_4900_);
lean_dec_ref(v_x_4899_);
return v_res_4904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_(lean_object* v_es_4905_){
_start:
{
lean_object* v___x_4906_; 
v___x_4906_ = lean_array_mk(v_es_4905_);
return v___x_4906_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_as_4907_, lean_object* v_i_4908_){
_start:
{
lean_object* v_zero_4909_; uint8_t v_isZero_4910_; 
v_zero_4909_ = lean_unsigned_to_nat(0u);
v_isZero_4910_ = lean_nat_dec_eq(v_i_4908_, v_zero_4909_);
if (v_isZero_4910_ == 1)
{
lean_object* v___x_4911_; 
lean_dec(v_i_4908_);
v___x_4911_ = lean_box(0);
return v___x_4911_;
}
else
{
lean_object* v_one_4912_; lean_object* v_n_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; 
v_one_4912_ = lean_unsigned_to_nat(1u);
v_n_4913_ = lean_nat_sub(v_i_4908_, v_one_4912_);
lean_dec(v_i_4908_);
v___x_4914_ = lean_array_fget_borrowed(v_as_4907_, v_n_4913_);
v___x_4915_ = l_Lean_VersoModuleDocs_Snippet_terminalNesting(v___x_4914_);
if (lean_obj_tag(v___x_4915_) == 0)
{
v_i_4908_ = v_n_4913_;
goto _start;
}
else
{
lean_dec(v_n_4913_);
return v___x_4915_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_as_4917_, lean_object* v_i_4918_){
_start:
{
lean_object* v_res_4919_; 
v_res_4919_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__0___redArg(v_as_4917_, v_i_4918_);
lean_dec_ref(v_as_4917_);
return v_res_4919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(lean_object* v_as_4920_, lean_object* v_i_4921_){
_start:
{
lean_object* v_zero_4922_; uint8_t v_isZero_4923_; 
v_zero_4922_ = lean_unsigned_to_nat(0u);
v_isZero_4923_ = lean_nat_dec_eq(v_i_4921_, v_zero_4922_);
if (v_isZero_4923_ == 1)
{
lean_object* v___x_4924_; 
lean_dec(v_i_4921_);
v___x_4924_ = lean_box(0);
return v___x_4924_;
}
else
{
lean_object* v_one_4925_; lean_object* v_n_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; 
v_one_4925_ = lean_unsigned_to_nat(1u);
v_n_4926_ = lean_nat_sub(v_i_4921_, v_one_4925_);
lean_dec(v_i_4921_);
v___x_4927_ = lean_array_fget_borrowed(v_as_4920_, v_n_4926_);
v___x_4928_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1(v___x_4927_);
if (lean_obj_tag(v___x_4928_) == 0)
{
v_i_4921_ = v_n_4926_;
goto _start;
}
else
{
lean_dec(v_n_4926_);
return v___x_4928_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_x_4930_){
_start:
{
if (lean_obj_tag(v_x_4930_) == 0)
{
lean_object* v_cs_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; 
v_cs_4931_ = lean_ctor_get(v_x_4930_, 0);
v___x_4932_ = lean_array_get_size(v_cs_4931_);
v___x_4933_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(v_cs_4931_, v___x_4932_);
return v___x_4933_;
}
else
{
lean_object* v_vs_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; 
v_vs_4934_ = lean_ctor_get(v_x_4930_, 0);
v___x_4935_ = lean_array_get_size(v_vs_4934_);
v___x_4936_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__0___redArg(v_vs_4934_, v___x_4935_);
return v___x_4936_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_x_4937_){
_start:
{
lean_object* v_res_4938_; 
v_res_4938_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1(v_x_4937_);
lean_dec_ref(v_x_4937_);
return v_res_4938_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_4939_, lean_object* v_i_4940_){
_start:
{
lean_object* v_res_4941_; 
v_res_4941_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(v_as_4939_, v_i_4940_);
lean_dec_ref(v_as_4939_);
return v_res_4941_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0(lean_object* v_t_4942_){
_start:
{
lean_object* v_root_4943_; lean_object* v_tail_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; 
v_root_4943_ = lean_ctor_get(v_t_4942_, 0);
v_tail_4944_ = lean_ctor_get(v_t_4942_, 1);
v___x_4945_ = lean_array_get_size(v_tail_4944_);
v___x_4946_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__0___redArg(v_tail_4944_, v___x_4945_);
if (lean_obj_tag(v___x_4946_) == 0)
{
lean_object* v___x_4947_; 
v___x_4947_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1(v_root_4943_);
return v___x_4947_;
}
else
{
return v___x_4946_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0___boxed(lean_object* v_t_4948_){
_start:
{
lean_object* v_res_4949_; 
v_res_4949_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0(v_t_4948_);
lean_dec_ref(v_t_4948_);
return v_res_4949_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; 
v___x_4950_ = lean_unsigned_to_nat(32u);
v___x_4951_ = lean_mk_empty_array_with_capacity(v___x_4950_);
v___x_4952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4952_, 0, v___x_4951_);
return v___x_4952_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_(lean_object* v___x_4953_, lean_object* v_x_4954_){
_start:
{
lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; size_t v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; 
v___x_4955_ = lean_unsigned_to_nat(32u);
v___x_4956_ = lean_mk_empty_array_with_capacity(v___x_4955_);
v___x_4957_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_);
v___x_4958_ = ((size_t)5ULL);
lean_inc(v___x_4953_);
v___x_4959_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4959_, 0, v___x_4957_);
lean_ctor_set(v___x_4959_, 1, v___x_4956_);
lean_ctor_set(v___x_4959_, 2, v___x_4953_);
lean_ctor_set(v___x_4959_, 3, v___x_4953_);
lean_ctor_set_usize(v___x_4959_, 4, v___x_4958_);
v___x_4960_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0(v___x_4959_);
v___x_4961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4961_, 0, v___x_4959_);
lean_ctor_set(v___x_4961_, 1, v___x_4960_);
return v___x_4961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2____boxed(lean_object* v___x_4962_, lean_object* v_x_4963_){
_start:
{
lean_object* v_res_4964_; 
v_res_4964_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_(v___x_4962_, v_x_4963_);
lean_dec_ref(v_x_4963_);
return v_res_4964_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4985_; lean_object* v___x_4986_; 
v___x_4985_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_));
v___x_4986_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_4985_);
return v___x_4986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2____boxed(lean_object* v_a_4987_){
_start:
{
lean_object* v_res_4988_; 
v_res_4988_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_();
return v_res_4988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_4989_, lean_object* v_i_4990_, lean_object* v_a_4991_){
_start:
{
lean_object* v___x_4992_; 
v___x_4992_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__0___redArg(v_as_4989_, v_i_4990_);
return v___x_4992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_4993_, lean_object* v_i_4994_, lean_object* v_a_4995_){
_start:
{
lean_object* v_res_4996_; 
v_res_4996_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__0(v_as_4993_, v_i_4994_, v_a_4995_);
lean_dec_ref(v_as_4993_);
return v_res_4996_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1_spec__2(lean_object* v_as_4997_, lean_object* v_i_4998_, lean_object* v_a_4999_){
_start:
{
lean_object* v___x_5000_; 
v___x_5000_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(v_as_4997_, v_i_4998_);
return v___x_5000_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1_spec__2___boxed(lean_object* v_as_5001_, lean_object* v_i_5002_, lean_object* v_a_5003_){
_start:
{
lean_object* v_res_5004_; 
v_res_5004_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2__spec__0_spec__1_spec__2(v_as_5001_, v_i_5002_, v_a_5003_);
lean_dec_ref(v_as_5001_);
return v_res_5004_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainVersoModuleDocs(lean_object* v_env_5005_){
_start:
{
lean_object* v___x_5006_; lean_object* v_toEnvExtension_5007_; lean_object* v_asyncMode_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; 
v___x_5006_ = l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt;
v_toEnvExtension_5007_ = lean_ctor_get(v___x_5006_, 0);
lean_inc_ref(v_toEnvExtension_5007_);
v_asyncMode_5008_ = lean_ctor_get(v_toEnvExtension_5007_, 2);
lean_inc(v_asyncMode_5008_);
lean_dec_ref(v_toEnvExtension_5007_);
v___x_5009_ = l_Lean_instInhabitedVersoModuleDocs_default;
v___x_5010_ = lean_box(0);
v___x_5011_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_5009_, v___x_5006_, v_env_5005_, v_asyncMode_5008_, v___x_5010_);
lean_dec(v_asyncMode_5008_);
return v___x_5011_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDocs(lean_object* v_env_5012_){
_start:
{
lean_object* v___x_5013_; 
v___x_5013_ = l_Lean_getMainVersoModuleDocs(v_env_5012_);
return v___x_5013_;
}
}
static lean_object* _init_l_Lean_getVersoModuleDoc_x3f___closed__0(void){
_start:
{
lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; 
v___x_5014_ = l_Lean_instInhabitedVersoModuleDocs_default;
v___x_5015_ = lean_box(0);
v___x_5016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5016_, 0, v___x_5015_);
lean_ctor_set(v___x_5016_, 1, v___x_5014_);
return v___x_5016_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDoc_x3f(lean_object* v_env_5017_, lean_object* v_moduleName_5018_){
_start:
{
lean_object* v___x_5019_; 
v___x_5019_ = l_Lean_Environment_getModuleIdx_x3f(v_env_5017_, v_moduleName_5018_);
if (lean_obj_tag(v___x_5019_) == 0)
{
lean_object* v___x_5020_; 
v___x_5020_ = lean_box(0);
return v___x_5020_;
}
else
{
lean_object* v_val_5021_; lean_object* v___x_5023_; uint8_t v_isShared_5024_; uint8_t v_isSharedCheck_5032_; 
v_val_5021_ = lean_ctor_get(v___x_5019_, 0);
v_isSharedCheck_5032_ = !lean_is_exclusive(v___x_5019_);
if (v_isSharedCheck_5032_ == 0)
{
v___x_5023_ = v___x_5019_;
v_isShared_5024_ = v_isSharedCheck_5032_;
goto v_resetjp_5022_;
}
else
{
lean_inc(v_val_5021_);
lean_dec(v___x_5019_);
v___x_5023_ = lean_box(0);
v_isShared_5024_ = v_isSharedCheck_5032_;
goto v_resetjp_5022_;
}
v_resetjp_5022_:
{
lean_object* v___x_5025_; lean_object* v___x_5026_; uint8_t v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5030_; 
v___x_5025_ = lean_obj_once(&l_Lean_getVersoModuleDoc_x3f___closed__0, &l_Lean_getVersoModuleDoc_x3f___closed__0_once, _init_l_Lean_getVersoModuleDoc_x3f___closed__0);
v___x_5026_ = l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt;
v___x_5027_ = 1;
v___x_5028_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_5025_, v___x_5026_, v_env_5017_, v_val_5021_, v___x_5027_);
lean_dec(v_val_5021_);
if (v_isShared_5024_ == 0)
{
lean_ctor_set(v___x_5023_, 0, v___x_5028_);
v___x_5030_ = v___x_5023_;
goto v_reusejp_5029_;
}
else
{
lean_object* v_reuseFailAlloc_5031_; 
v_reuseFailAlloc_5031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5031_, 0, v___x_5028_);
v___x_5030_ = v_reuseFailAlloc_5031_;
goto v_reusejp_5029_;
}
v_reusejp_5029_:
{
return v___x_5030_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDoc_x3f___boxed(lean_object* v_env_5033_, lean_object* v_moduleName_5034_){
_start:
{
lean_object* v_res_5035_; 
v_res_5035_ = l_Lean_getVersoModuleDoc_x3f(v_env_5033_, v_moduleName_5034_);
lean_dec(v_moduleName_5034_);
lean_dec_ref(v_env_5033_);
return v_res_5035_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModuleDocSnippet(lean_object* v_env_5038_, lean_object* v_snippet_5039_){
_start:
{
lean_object* v_docs_5040_; uint8_t v___x_5041_; 
lean_inc_ref(v_env_5038_);
v_docs_5040_ = l_Lean_getMainVersoModuleDocs(v_env_5038_);
v___x_5041_ = l_Lean_VersoModuleDocs_canAdd(v_docs_5040_, v_snippet_5039_);
if (v___x_5041_ == 0)
{
lean_object* v_terminalNesting_5042_; lean_object* v___x_5043_; lean_object* v___y_5045_; 
lean_dec_ref(v_snippet_5039_);
lean_dec_ref(v_env_5038_);
v_terminalNesting_5042_ = lean_ctor_get(v_docs_5040_, 1);
lean_inc(v_terminalNesting_5042_);
lean_dec_ref(v_docs_5040_);
v___x_5043_ = ((lean_object*)(l_Lean_addVersoModuleDocSnippet___closed__0));
if (lean_obj_tag(v_terminalNesting_5042_) == 0)
{
lean_object* v___x_5050_; 
v___x_5050_ = ((lean_object*)(l_Lean_findInternalDocString_x3f___closed__0));
v___y_5045_ = v___x_5050_;
goto v___jp_5044_;
}
else
{
lean_object* v_val_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v___x_5054_; lean_object* v___x_5055_; lean_object* v___x_5056_; 
v_val_5051_ = lean_ctor_get(v_terminalNesting_5042_, 0);
lean_inc(v_val_5051_);
lean_dec_ref(v_terminalNesting_5042_);
v___x_5052_ = ((lean_object*)(l_Lean_addVersoModuleDocSnippet___closed__1));
v___x_5053_ = l_Nat_reprFast(v_val_5051_);
v___x_5054_ = lean_string_append(v___x_5052_, v___x_5053_);
lean_dec_ref(v___x_5053_);
v___x_5055_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__8));
v___x_5056_ = lean_string_append(v___x_5054_, v___x_5055_);
v___y_5045_ = v___x_5056_;
goto v___jp_5044_;
}
v___jp_5044_:
{
lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; 
v___x_5046_ = lean_string_append(v___x_5043_, v___y_5045_);
lean_dec_ref(v___y_5045_);
v___x_5047_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_partMarkdown___at___00__private_Lean_DocString_Extension_0__Lean_findSimpleDocString_x3f_toMarkdown_spec__0_spec__1___closed__8));
v___x_5048_ = lean_string_append(v___x_5046_, v___x_5047_);
v___x_5049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5049_, 0, v___x_5048_);
return v___x_5049_;
}
}
else
{
lean_object* v___x_5057_; lean_object* v_toEnvExtension_5058_; lean_object* v_asyncMode_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; 
lean_dec_ref(v_docs_5040_);
v___x_5057_ = l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt;
v_toEnvExtension_5058_ = lean_ctor_get(v___x_5057_, 0);
lean_inc_ref(v_toEnvExtension_5058_);
v_asyncMode_5059_ = lean_ctor_get(v_toEnvExtension_5058_, 2);
lean_inc(v_asyncMode_5059_);
lean_dec_ref(v_toEnvExtension_5058_);
v___x_5060_ = lean_box(0);
v___x_5061_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_5057_, v_env_5038_, v_snippet_5039_, v_asyncMode_5059_, v___x_5060_);
lean_dec(v_asyncMode_5059_);
v___x_5062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5062_, 0, v___x_5061_);
return v___x_5062_;
}
}
}
lean_object* runtime_initialize_Lean_DeclarationRange(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Markdown(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Extra(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Extension(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Markdown(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instMarkdownInlineElabInline = _init_l_Lean_instMarkdownInlineElabInline();
lean_mark_persistent(l_Lean_instMarkdownInlineElabInline);
l_Lean_instMarkdownBlockElabInlineElabBlock = _init_l_Lean_instMarkdownBlockElabInlineElabBlock();
lean_mark_persistent(l_Lean_instMarkdownBlockElabInlineElabBlock);
l_Lean_instInhabitedVersoDocString_default = _init_l_Lean_instInhabitedVersoDocString_default();
lean_mark_persistent(l_Lean_instInhabitedVersoDocString_default);
l_Lean_instInhabitedVersoDocString = _init_l_Lean_instInhabitedVersoDocString();
lean_mark_persistent(l_Lean_instInhabitedVersoDocString);
res = l_Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_doc_verso = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_doc_verso);
lean_dec_ref(res);
res = l_Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_doc_verso_module = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_doc_verso_module);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings);
lean_dec_ref(res);
res = l_Lean_initFn_00___x40_Lean_DocString_Extension_1505119820____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_docStringExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_docStringExt);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_177922276____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings);
lean_dec_ref(res);
res = l_Lean_initFn_00___x40_Lean_DocString_Extension_152104186____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_versoDocStringExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_versoDocStringExt);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_3367263305____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_moduleDocExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_moduleDocExt);
lean_dec_ref(res);
l_Lean_VersoModuleDocs_instInhabitedSnippet_default = _init_l_Lean_VersoModuleDocs_instInhabitedSnippet_default();
lean_mark_persistent(l_Lean_VersoModuleDocs_instInhabitedSnippet_default);
l_Lean_VersoModuleDocs_instInhabitedSnippet = _init_l_Lean_VersoModuleDocs_instInhabitedSnippet();
lean_mark_persistent(l_Lean_VersoModuleDocs_instInhabitedSnippet);
l_Lean_instToMarkdownSnippet___lam__4___closed__0___boxed__const__1 = _init_l_Lean_instToMarkdownSnippet___lam__4___closed__0___boxed__const__1();
lean_mark_persistent(l_Lean_instToMarkdownSnippet___lam__4___closed__0___boxed__const__1);
l_Lean_instToMarkdownSnippet = _init_l_Lean_instToMarkdownSnippet();
lean_mark_persistent(l_Lean_instToMarkdownSnippet);
l_Lean_instInhabitedVersoModuleDocs_default = _init_l_Lean_instInhabitedVersoModuleDocs_default();
lean_mark_persistent(l_Lean_instInhabitedVersoModuleDocs_default);
l_Lean_instInhabitedVersoModuleDocs = _init_l_Lean_instInhabitedVersoModuleDocs();
lean_mark_persistent(l_Lean_instInhabitedVersoModuleDocs);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_71268105____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Extension(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_DeclarationRange(uint8_t builtin);
lean_object* initialize_Lean_DocString_Markdown(uint8_t builtin);
lean_object* initialize_Init_Data_String_Extra(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Extension(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Markdown(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Extension(builtin);
}
#ifdef __cplusplus
}
#endif
