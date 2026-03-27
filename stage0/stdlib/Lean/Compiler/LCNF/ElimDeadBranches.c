// Lean compiler output
// Module: Lean.Compiler.LCNF.ElimDeadBranches
// Imports: public import Lean.Compiler.LCNF.InferType
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
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* l_Array_qpartition___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_join(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
uint8_t l_List_all___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_getArity___redArg(lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_PersistentEnvExtension_getModuleIREntries_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findIdx_x3f_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_attachCodeDecls(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_size(uint8_t, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_Nat_decLt___boxed(lean_object*, lean_object*);
lean_object* l_String_decidableLT___boxed(lean_object*, lean_object*);
uint8_t l_Prod_lexLtDec___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedDecl_default(uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1(uint8_t);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Compiler_LCNF_replaceFVars(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_TraceResult_toEmoji(uint8_t);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_io_mono_nanos_now();
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_bot_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_bot_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_top_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_top_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctor_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctor_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_choice_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_choice_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⊥"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⊤"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__2_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__3_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__5_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__5_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " | "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__10_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__10_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.LCNF.ElimDeadBranches"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Lean.Compiler.LCNF.UnreachableBranches.Value.inductValOfCtor"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 106, .m_capacity = 106, .m_length = 105, .m_data = "_private.Lean.Compiler.LCNF.ElimDeadBranches.0.Lean.Compiler.LCNF.UnreachableBranches.Value.merge.cleanup"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2_value;
static const lean_string_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__3 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__3_value;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__3_value)}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__4 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5_value;
static const lean_string_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__6 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7;
static lean_once_cell_t l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__9 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__9_value;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__6_value)}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Lean.Compiler.LCNF.UnreachableBranches.Value.addChoice"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "invalid addChoice "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " into "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__2_value;
static const lean_array_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_merge(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_merge_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_truncate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 118, .m_capacity = 118, .m_length = 117, .m_data = "_private.Lean.Compiler.LCNF.ElimDeadBranches.0.Lean.Compiler.LCNF.UnreachableBranches.Value.getLiteral.getNatConstant"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Not a well formed Nat constant Value"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___boxed(lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__2_value;
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 106, .m_capacity = 106, .m_length = 105, .m_data = "_private.Lean.Compiler.LCNF.ElimDeadBranches.0.Lean.Compiler.LCNF.UnreachableBranches.Value.getLiteral.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3;
static const lean_array_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__5_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__5_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__6_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__0_value;
static const lean_array_object l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "UnreachableBranches"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "functionSummariesExt"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(198, 130, 135, 69, 155, 14, 96, 131)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_3),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(210, 217, 249, 17, 195, 152, 212, 89)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed, .m_arity = 7, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0(lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_interpCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__6___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__1;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__2 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__2_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__3;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Analyzing "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "elimDeadBranches"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(94, 80, 110, 205, 32, 43, 118, 213)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Termination after "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " steps"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Threw away cases "};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " branch "};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1;
static lean_once_cell_t l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2;
static const lean_ctor_object l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__3_value;
static const lean_string_object l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__5 = (const lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__5_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Eliminating "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " with "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Analyzing block: "};
static const lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_decLt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___closed__0_value;
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_decidableLT___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2;
static const lean_array_object l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_elimDeadBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(160, 204, 232, 255, 130, 130, 66, 205)}};
static const lean_object* l_Lean_Compiler_LCNF_elimDeadBranches___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_elimDeadBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Decl_elimDeadBranches___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_elimDeadBranches___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_elimDeadBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_elimDeadBranches___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_elimDeadBranches = (const lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ElimDeadBranches"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(61, 48, 204, 64, 9, 167, 133, 249)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(200, 150, 161, 93, 149, 239, 245, 119)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 115, 55, 70, 37, 185, 29, 189)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(207, 112, 73, 71, 157, 233, 191, 127)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(162, 232, 253, 11, 187, 111, 207, 156)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(23, 23, 231, 170, 231, 155, 87, 99)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(210, 213, 22, 254, 230, 125, 90, 112)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 11, 80, 195, 104, 227, 74, 88)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 249, 148, 177, 5, 97, 125, 57)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(96, 90, 29, 229, 248, 57, 61, 64)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(40, 188, 228, 238, 115, 92, 75, 9)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
default: 
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx___boxed(lean_object* v_x_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx(v_x_6_);
lean_dec(v_x_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(lean_object* v_t_8_, lean_object* v_k_9_){
_start:
{
switch(lean_obj_tag(v_t_8_))
{
case 2:
{
lean_object* v_i_10_; lean_object* v_vs_11_; lean_object* v___x_12_; 
v_i_10_ = lean_ctor_get(v_t_8_, 0);
lean_inc(v_i_10_);
v_vs_11_ = lean_ctor_get(v_t_8_, 1);
lean_inc_ref(v_vs_11_);
lean_dec_ref(v_t_8_);
v___x_12_ = lean_apply_2(v_k_9_, v_i_10_, v_vs_11_);
return v___x_12_;
}
case 3:
{
lean_object* v_vs_13_; lean_object* v___x_14_; 
v_vs_13_ = lean_ctor_get(v_t_8_, 0);
lean_inc(v_vs_13_);
lean_dec_ref(v_t_8_);
v___x_14_ = lean_apply_1(v_k_9_, v_vs_13_);
return v___x_14_;
}
default: 
{
lean_dec(v_t_8_);
return v_k_9_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim(lean_object* v_motive__1_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_17_, v_k_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___boxed(lean_object* v_motive__1_21_, lean_object* v_ctorIdx_22_, lean_object* v_t_23_, lean_object* v_h_24_, lean_object* v_k_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim(v_motive__1_21_, v_ctorIdx_22_, v_t_23_, v_h_24_, v_k_25_);
lean_dec(v_ctorIdx_22_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_bot_elim___redArg(lean_object* v_t_27_, lean_object* v_bot_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_27_, v_bot_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_bot_elim(lean_object* v_motive__1_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_bot_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_31_, v_bot_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_top_elim___redArg(lean_object* v_t_35_, lean_object* v_top_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_35_, v_top_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_top_elim(lean_object* v_motive__1_38_, lean_object* v_t_39_, lean_object* v_h_40_, lean_object* v_top_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_39_, v_top_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctor_elim___redArg(lean_object* v_t_43_, lean_object* v_ctor_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_43_, v_ctor_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctor_elim(lean_object* v_motive__1_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_ctor_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_47_, v_ctor_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_choice_elim___redArg(lean_object* v_t_51_, lean_object* v_choice_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_51_, v_choice_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_choice_elim(lean_object* v_motive__1_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_choice_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_55_, v_choice_57_);
return v___x_58_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_box(0);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_box(0);
return v___x_60_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth(void){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_unsigned_to_nat(8u);
return v___x_61_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0___redArg(lean_object* v_xs_62_, lean_object* v_ys_63_, lean_object* v_x_64_){
_start:
{
lean_object* v_zero_65_; uint8_t v_isZero_66_; 
v_zero_65_ = lean_unsigned_to_nat(0u);
v_isZero_66_ = lean_nat_dec_eq(v_x_64_, v_zero_65_);
if (v_isZero_66_ == 1)
{
lean_dec(v_x_64_);
return v_isZero_66_;
}
else
{
lean_object* v_one_67_; lean_object* v_n_68_; lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v___x_71_; 
v_one_67_ = lean_unsigned_to_nat(1u);
v_n_68_ = lean_nat_sub(v_x_64_, v_one_67_);
lean_dec(v_x_64_);
v___x_69_ = lean_array_fget_borrowed(v_xs_62_, v_n_68_);
v___x_70_ = lean_array_fget_borrowed(v_ys_63_, v_n_68_);
lean_inc(v___x_70_);
lean_inc(v___x_69_);
v___x_71_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v___x_69_, v___x_70_);
if (v___x_71_ == 0)
{
lean_dec(v_n_68_);
return v___x_71_;
}
else
{
v_x_64_ = v_n_68_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__0___boxed(lean_object* v_a_73_, lean_object* v_b_74_){
_start:
{
uint8_t v_res_75_; lean_object* v_r_76_; 
v_res_75_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__0(v_a_73_, v_b_74_);
v_r_76_ = lean_box(v_res_75_);
return v_r_76_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__1(lean_object* v_bs_77_, lean_object* v_a_78_){
_start:
{
lean_object* v___f_79_; uint8_t v___x_80_; 
v___f_79_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__0___boxed), 2, 1);
lean_closure_set(v___f_79_, 0, v_a_78_);
v___x_80_ = l_List_any___redArg(v_bs_77_, v___f_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__1___boxed(lean_object* v_bs_81_, lean_object* v_a_82_){
_start:
{
uint8_t v_res_83_; lean_object* v_r_84_; 
v_res_83_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__1(v_bs_81_, v_a_82_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__2(lean_object* v_as_85_, lean_object* v_bs_86_){
_start:
{
lean_object* v___f_87_; uint8_t v___x_88_; 
v___f_87_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__1___boxed), 2, 1);
lean_closure_set(v___f_87_, 0, v_bs_86_);
v___x_88_ = l_List_all___redArg(v_as_85_, v___f_87_);
return v___x_88_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(lean_object* v_x_89_, lean_object* v_x_90_){
_start:
{
switch(lean_obj_tag(v_x_89_))
{
case 0:
{
if (lean_obj_tag(v_x_90_) == 0)
{
uint8_t v___x_91_; 
v___x_91_ = 1;
return v___x_91_;
}
else
{
uint8_t v___x_92_; 
lean_dec(v_x_90_);
v___x_92_ = 0;
return v___x_92_;
}
}
case 1:
{
if (lean_obj_tag(v_x_90_) == 1)
{
uint8_t v___x_93_; 
v___x_93_ = 1;
return v___x_93_;
}
else
{
uint8_t v___x_94_; 
lean_dec(v_x_90_);
v___x_94_ = 0;
return v___x_94_;
}
}
case 2:
{
if (lean_obj_tag(v_x_90_) == 2)
{
lean_object* v_i_95_; lean_object* v_vs_96_; lean_object* v_i_97_; lean_object* v_vs_98_; uint8_t v___x_99_; 
v_i_95_ = lean_ctor_get(v_x_89_, 0);
lean_inc(v_i_95_);
v_vs_96_ = lean_ctor_get(v_x_89_, 1);
lean_inc_ref(v_vs_96_);
lean_dec_ref(v_x_89_);
v_i_97_ = lean_ctor_get(v_x_90_, 0);
lean_inc(v_i_97_);
v_vs_98_ = lean_ctor_get(v_x_90_, 1);
lean_inc_ref(v_vs_98_);
lean_dec_ref(v_x_90_);
v___x_99_ = lean_name_eq(v_i_95_, v_i_97_);
lean_dec(v_i_97_);
lean_dec(v_i_95_);
if (v___x_99_ == 0)
{
lean_dec_ref(v_vs_98_);
lean_dec_ref(v_vs_96_);
return v___x_99_;
}
else
{
lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_100_ = lean_array_get_size(v_vs_96_);
v___x_101_ = lean_array_get_size(v_vs_98_);
v___x_102_ = lean_nat_dec_eq(v___x_100_, v___x_101_);
if (v___x_102_ == 0)
{
lean_dec_ref(v_vs_98_);
lean_dec_ref(v_vs_96_);
return v___x_102_;
}
else
{
uint8_t v___x_103_; 
v___x_103_ = l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0___redArg(v_vs_96_, v_vs_98_, v___x_100_);
lean_dec_ref(v_vs_98_);
lean_dec_ref(v_vs_96_);
return v___x_103_;
}
}
}
else
{
uint8_t v___x_104_; 
lean_dec_ref(v_x_89_);
lean_dec(v_x_90_);
v___x_104_ = 0;
return v___x_104_;
}
}
default: 
{
if (lean_obj_tag(v_x_90_) == 3)
{
lean_object* v_vs_105_; lean_object* v_vs_106_; uint8_t v___x_107_; 
v_vs_105_ = lean_ctor_get(v_x_89_, 0);
lean_inc_n(v_vs_105_, 2);
lean_dec_ref(v_x_89_);
v_vs_106_ = lean_ctor_get(v_x_90_, 0);
lean_inc_n(v_vs_106_, 2);
lean_dec_ref(v_x_90_);
v___x_107_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__2(v_vs_105_, v_vs_106_);
if (v___x_107_ == 0)
{
lean_dec(v_vs_106_);
lean_dec(v_vs_105_);
return v___x_107_;
}
else
{
uint8_t v___x_108_; 
v___x_108_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__2(v_vs_106_, v_vs_105_);
return v___x_108_;
}
}
else
{
uint8_t v___x_109_; 
lean_dec_ref(v_x_89_);
lean_dec(v_x_90_);
v___x_109_ = 0;
return v___x_109_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__0(lean_object* v_a_110_, lean_object* v_b_111_){
_start:
{
uint8_t v___x_112_; 
v___x_112_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_a_110_, v_b_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__2___boxed(lean_object* v_as_113_, lean_object* v_bs_114_){
_start:
{
uint8_t v_res_115_; lean_object* v_r_116_; 
v_res_115_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___lam__2(v_as_113_, v_bs_114_);
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0___redArg___boxed(lean_object* v_xs_117_, lean_object* v_ys_118_, lean_object* v_x_119_){
_start:
{
uint8_t v_res_120_; lean_object* v_r_121_; 
v_res_120_ = l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0___redArg(v_xs_117_, v_ys_118_, v_x_119_);
lean_dec_ref(v_ys_118_);
lean_dec_ref(v_xs_117_);
v_r_121_ = lean_box(v_res_120_);
return v_r_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___boxed(lean_object* v_x_122_, lean_object* v_x_123_){
_start:
{
uint8_t v_res_124_; lean_object* v_r_125_; 
v_res_124_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_x_122_, v_x_123_);
v_r_125_ = lean_box(v_res_124_);
return v_r_125_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0(lean_object* v_xs_126_, lean_object* v_ys_127_, lean_object* v_hsz_128_, lean_object* v_x_129_, lean_object* v_x_130_){
_start:
{
uint8_t v___x_131_; 
v___x_131_ = l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0___redArg(v_xs_126_, v_ys_127_, v_x_129_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0___boxed(lean_object* v_xs_132_, lean_object* v_ys_133_, lean_object* v_hsz_134_, lean_object* v_x_135_, lean_object* v_x_136_){
_start:
{
uint8_t v_res_137_; lean_object* v_r_138_; 
v_res_137_ = l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0(v_xs_132_, v_ys_133_, v_hsz_134_, v_x_135_, v_x_136_);
lean_dec_ref(v_ys_133_);
lean_dec_ref(v_xs_132_);
v_r_138_ = lean_box(v_res_137_);
return v_r_138_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__1(lean_object* v_a_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lean_nat_to_int(v_a_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3_spec__3(lean_object* v_x_143_, lean_object* v_x_144_, lean_object* v_x_145_){
_start:
{
if (lean_obj_tag(v_x_145_) == 0)
{
lean_dec(v_x_143_);
return v_x_144_;
}
else
{
lean_object* v_head_146_; lean_object* v_tail_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_156_; 
v_head_146_ = lean_ctor_get(v_x_145_, 0);
v_tail_147_ = lean_ctor_get(v_x_145_, 1);
v_isSharedCheck_156_ = !lean_is_exclusive(v_x_145_);
if (v_isSharedCheck_156_ == 0)
{
v___x_149_ = v_x_145_;
v_isShared_150_ = v_isSharedCheck_156_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_tail_147_);
lean_inc(v_head_146_);
lean_dec(v_x_145_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_156_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
lean_inc(v_x_143_);
if (v_isShared_150_ == 0)
{
lean_ctor_set_tag(v___x_149_, 5);
lean_ctor_set(v___x_149_, 1, v_x_143_);
lean_ctor_set(v___x_149_, 0, v_x_144_);
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_x_144_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v_x_143_);
v___x_152_ = v_reuseFailAlloc_155_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
lean_object* v___x_153_; 
v___x_153_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
lean_ctor_set(v___x_153_, 1, v_head_146_);
v_x_144_ = v___x_153_;
v_x_145_ = v_tail_147_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3(lean_object* v_x_157_, lean_object* v_x_158_){
_start:
{
if (lean_obj_tag(v_x_157_) == 0)
{
lean_object* v___x_159_; 
lean_dec(v_x_158_);
v___x_159_ = lean_box(0);
return v___x_159_;
}
else
{
lean_object* v_tail_160_; 
v_tail_160_ = lean_ctor_get(v_x_157_, 1);
if (lean_obj_tag(v_tail_160_) == 0)
{
lean_object* v_head_161_; 
lean_dec(v_x_158_);
v_head_161_ = lean_ctor_get(v_x_157_, 0);
lean_inc(v_head_161_);
lean_dec_ref(v_x_157_);
return v_head_161_;
}
else
{
lean_object* v_head_162_; lean_object* v___x_163_; 
lean_inc(v_tail_160_);
v_head_162_ = lean_ctor_get(v_x_157_, 0);
lean_inc(v_head_162_);
lean_dec_ref(v_x_157_);
v___x_163_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3_spec__3(v_x_158_, v_head_162_, v_tail_160_);
return v___x_163_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0(lean_object* v_a_173_, lean_object* v_a_174_){
_start:
{
if (lean_obj_tag(v_a_173_) == 0)
{
lean_object* v___x_175_; 
v___x_175_ = l_List_reverse___redArg(v_a_174_);
return v___x_175_;
}
else
{
lean_object* v_head_176_; lean_object* v_tail_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_188_; 
v_head_176_ = lean_ctor_get(v_a_173_, 0);
v_tail_177_ = lean_ctor_get(v_a_173_, 1);
v_isSharedCheck_188_ = !lean_is_exclusive(v_a_173_);
if (v_isSharedCheck_188_ == 0)
{
v___x_179_ = v_a_173_;
v_isShared_180_ = v_isSharedCheck_188_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_tail_177_);
lean_inc(v_head_176_);
lean_dec(v_a_173_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_188_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_185_; 
v___x_181_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__1));
v___x_182_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_176_);
v___x_183_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_181_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 1, v_a_174_);
lean_ctor_set(v___x_179_, 0, v___x_183_);
v___x_185_ = v___x_179_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_183_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v_a_174_);
v___x_185_ = v_reuseFailAlloc_187_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
v_a_173_ = v_tail_177_;
v_a_174_ = v___x_185_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4));
v___x_191_ = lean_string_length(v___x_190_);
return v___x_191_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6);
v___x_193_ = lean_nat_to_int(v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(lean_object* v_x_202_){
_start:
{
switch(lean_obj_tag(v_x_202_))
{
case 0:
{
lean_object* v___x_203_; 
v___x_203_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__1));
return v___x_203_;
}
case 1:
{
lean_object* v___x_204_; 
v___x_204_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__3));
return v___x_204_;
}
case 2:
{
lean_object* v_i_205_; lean_object* v_vs_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_233_; 
v_i_205_ = lean_ctor_get(v_x_202_, 0);
v_vs_206_ = lean_ctor_get(v_x_202_, 1);
v_isSharedCheck_233_ = !lean_is_exclusive(v_x_202_);
if (v_isSharedCheck_233_ == 0)
{
v___x_208_ = v_x_202_;
v_isShared_209_ = v_isSharedCheck_233_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_vs_206_);
lean_inc(v_i_205_);
lean_dec(v_x_202_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_233_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_211_; uint8_t v___x_212_; 
v___x_210_ = lean_array_get_size(v_vs_206_);
v___x_211_ = lean_unsigned_to_nat(0u);
v___x_212_ = lean_nat_dec_eq(v___x_210_, v___x_211_);
if (v___x_212_ == 0)
{
uint8_t v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_221_; 
v___x_213_ = 1;
v___x_214_ = l_Lean_Name_toString(v_i_205_, v___x_213_);
v___x_215_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
v___x_216_ = lean_array_to_list(v_vs_206_);
v___x_217_ = lean_box(0);
v___x_218_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0(v___x_216_, v___x_217_);
v___x_219_ = l_Std_Format_join(v___x_218_);
if (v_isShared_209_ == 0)
{
lean_ctor_set_tag(v___x_208_, 5);
lean_ctor_set(v___x_208_, 1, v___x_219_);
lean_ctor_set(v___x_208_, 0, v___x_215_);
v___x_221_ = v___x_208_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_215_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v___x_219_);
v___x_221_ = v_reuseFailAlloc_230_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; uint8_t v___x_228_; lean_object* v___x_229_; 
v___x_222_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7);
v___x_223_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8));
v___x_224_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
lean_ctor_set(v___x_224_, 1, v___x_221_);
v___x_225_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9));
v___x_226_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_224_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_222_);
lean_ctor_set(v___x_227_, 1, v___x_226_);
v___x_228_ = 0;
v___x_229_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_229_, 0, v___x_227_);
lean_ctor_set_uint8(v___x_229_, sizeof(void*)*1, v___x_228_);
return v___x_229_;
}
}
else
{
lean_object* v___x_231_; lean_object* v___x_232_; 
lean_del_object(v___x_208_);
lean_dec_ref(v_vs_206_);
v___x_231_ = l_Lean_Name_toString(v_i_205_, v___x_212_);
v___x_232_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
return v___x_232_;
}
}
}
default: 
{
lean_object* v_vs_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; uint8_t v___x_245_; lean_object* v___x_246_; 
v_vs_234_ = lean_ctor_get(v_x_202_, 0);
lean_inc(v_vs_234_);
lean_dec_ref(v_x_202_);
v___x_235_ = lean_box(0);
v___x_236_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__2(v_vs_234_, v___x_235_);
v___x_237_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__11));
v___x_238_ = l_Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3(v___x_236_, v___x_237_);
v___x_239_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7);
v___x_240_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8));
v___x_241_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v___x_238_);
v___x_242_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9));
v___x_243_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_239_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = 0;
v___x_246_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_246_, 0, v___x_244_);
lean_ctor_set_uint8(v___x_246_, sizeof(void*)*1, v___x_245_);
return v___x_246_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__2(lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
if (lean_obj_tag(v_a_247_) == 0)
{
lean_object* v___x_249_; 
v___x_249_ = l_List_reverse___redArg(v_a_248_);
return v___x_249_;
}
else
{
lean_object* v_head_250_; lean_object* v_tail_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_260_; 
v_head_250_ = lean_ctor_get(v_a_247_, 0);
v_tail_251_ = lean_ctor_get(v_a_247_, 1);
v_isSharedCheck_260_ = !lean_is_exclusive(v_a_247_);
if (v_isSharedCheck_260_ == 0)
{
v___x_253_ = v_a_247_;
v_isShared_254_ = v_isSharedCheck_260_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_tail_251_);
lean_inc(v_head_250_);
lean_dec(v_a_247_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_260_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_255_; lean_object* v___x_257_; 
v___x_255_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_250_);
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 1, v_a_248_);
lean_ctor_set(v___x_253_, 0, v___x_255_);
v___x_257_ = v___x_253_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v___x_255_);
lean_ctor_set(v_reuseFailAlloc_259_, 1, v_a_248_);
v___x_257_ = v_reuseFailAlloc_259_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
v_a_247_ = v_tail_251_;
v_a_248_ = v___x_257_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0(lean_object* v_v_261_, lean_object* v_x_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_v_261_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0___boxed(lean_object* v_v_264_, lean_object* v_x_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0(v_v_264_, v_x_265_);
lean_dec(v_x_265_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0(lean_object* v_msg_276_){
_start:
{
lean_object* v___f_277_; lean_object* v___f_278_; lean_object* v___f_279_; lean_object* v___f_280_; lean_object* v___f_281_; lean_object* v___f_282_; lean_object* v___f_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v___f_277_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0));
v___f_278_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1));
v___f_279_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2));
v___f_280_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3));
v___f_281_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4));
v___f_282_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5));
v___f_283_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6));
v___x_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_284_, 0, v___f_277_);
lean_ctor_set(v___x_284_, 1, v___f_278_);
v___x_285_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
lean_ctor_set(v___x_285_, 1, v___f_279_);
lean_ctor_set(v___x_285_, 2, v___f_280_);
lean_ctor_set(v___x_285_, 3, v___f_281_);
lean_ctor_set(v___x_285_, 4, v___f_282_);
v___x_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
lean_ctor_set(v___x_286_, 1, v___f_283_);
v___x_287_ = l_Lean_instInhabitedInductiveVal_default;
v___x_288_ = l_instInhabitedOfMonad___redArg(v___x_286_, v___x_287_);
v___x_289_ = lean_panic_fn_borrowed(v___x_288_, v_msg_276_);
lean_dec(v___x_288_);
return v___x_289_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_293_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_294_ = lean_unsigned_to_nat(51u);
v___x_295_ = lean_unsigned_to_nat(72u);
v___x_296_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1));
v___x_297_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_298_ = l_mkPanicMessageWithDecl(v___x_297_, v___x_296_, v___x_295_, v___x_294_, v___x_293_);
return v___x_298_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_299_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_300_ = lean_unsigned_to_nat(56u);
v___x_301_ = lean_unsigned_to_nat(73u);
v___x_302_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1));
v___x_303_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_304_ = l_mkPanicMessageWithDecl(v___x_303_, v___x_302_, v___x_301_, v___x_300_, v___x_299_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor(lean_object* v_ctorName_305_, lean_object* v_env_306_){
_start:
{
uint8_t v___x_313_; lean_object* v___x_314_; 
v___x_313_ = 0;
lean_inc_ref(v_env_306_);
v___x_314_ = l_Lean_Environment_find_x3f(v_env_306_, v_ctorName_305_, v___x_313_);
if (lean_obj_tag(v___x_314_) == 1)
{
lean_object* v_val_315_; 
v_val_315_ = lean_ctor_get(v___x_314_, 0);
lean_inc(v_val_315_);
lean_dec_ref(v___x_314_);
if (lean_obj_tag(v_val_315_) == 6)
{
lean_object* v_val_316_; lean_object* v_induct_317_; lean_object* v___x_318_; 
v_val_316_ = lean_ctor_get(v_val_315_, 0);
lean_inc_ref(v_val_316_);
lean_dec_ref(v_val_315_);
v_induct_317_ = lean_ctor_get(v_val_316_, 1);
lean_inc(v_induct_317_);
lean_dec_ref(v_val_316_);
v___x_318_ = l_Lean_Environment_find_x3f(v_env_306_, v_induct_317_, v___x_313_);
if (lean_obj_tag(v___x_318_) == 1)
{
lean_object* v_val_319_; 
v_val_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_val_319_);
lean_dec_ref(v___x_318_);
if (lean_obj_tag(v_val_319_) == 5)
{
lean_object* v_val_320_; 
v_val_320_ = lean_ctor_get(v_val_319_, 0);
lean_inc_ref(v_val_320_);
lean_dec_ref(v_val_319_);
return v_val_320_;
}
else
{
lean_dec(v_val_319_);
goto v___jp_310_;
}
}
else
{
lean_dec(v___x_318_);
goto v___jp_310_;
}
}
else
{
lean_dec(v_val_315_);
lean_dec_ref(v_env_306_);
goto v___jp_307_;
}
}
else
{
lean_dec(v___x_314_);
lean_dec_ref(v_env_306_);
goto v___jp_307_;
}
v___jp_307_:
{
lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_308_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3);
v___x_309_ = l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0(v___x_308_);
return v___x_309_;
}
v___jp_310_:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_311_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4);
v___x_312_ = l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0(v___x_311_);
return v___x_312_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(lean_object* v_ctorName_321_, lean_object* v_env_322_, lean_object* v_n_323_){
_start:
{
lean_object* v_induct_324_; lean_object* v___x_325_; uint8_t v___x_326_; 
v_induct_324_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor(v_ctorName_321_, v_env_322_);
v___x_325_ = l_Lean_InductiveVal_numCtors(v_induct_324_);
lean_dec_ref(v_induct_324_);
v___x_326_ = lean_nat_dec_eq(v_n_323_, v___x_325_);
lean_dec(v___x_325_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors___boxed(lean_object* v_ctorName_327_, lean_object* v_env_328_, lean_object* v_n_329_){
_start:
{
uint8_t v_res_330_; lean_object* v_r_331_; 
v_res_330_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(v_ctorName_327_, v_env_328_, v_n_329_);
lean_dec(v_n_329_);
v_r_331_ = lean_box(v_res_330_);
return v_r_331_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0(uint8_t v___x_332_, lean_object* v_v_333_){
_start:
{
lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_334_ = lean_box(1);
v___x_335_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_v_333_, v___x_334_);
if (v___x_335_ == 0)
{
return v___x_332_;
}
else
{
uint8_t v___x_336_; 
v___x_336_ = 0;
return v___x_336_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0___boxed(lean_object* v___x_337_, lean_object* v_v_338_){
_start:
{
uint8_t v___x_158__boxed_339_; uint8_t v_res_340_; lean_object* v_r_341_; 
v___x_158__boxed_339_ = lean_unbox(v___x_337_);
v_res_340_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0(v___x_158__boxed_339_, v_v_338_);
v_r_341_ = lean_box(v_res_340_);
return v_r_341_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible(lean_object* v_value_342_){
_start:
{
if (lean_obj_tag(v_value_342_) == 2)
{
lean_object* v_vs_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_370_; 
v_vs_343_ = lean_ctor_get(v_value_342_, 1);
v_isSharedCheck_370_ = !lean_is_exclusive(v_value_342_);
if (v_isSharedCheck_370_ == 0)
{
lean_object* v_unused_371_; 
v_unused_371_ = lean_ctor_get(v_value_342_, 0);
lean_dec(v_unused_371_);
v___x_345_ = v_value_342_;
v_isShared_346_ = v_isSharedCheck_370_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_vs_343_);
lean_dec(v_value_342_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_370_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___f_349_; lean_object* v___f_350_; lean_object* v___f_351_; lean_object* v___f_352_; lean_object* v___f_353_; lean_object* v___f_354_; lean_object* v___f_355_; lean_object* v___x_357_; 
v___x_347_ = lean_unsigned_to_nat(0u);
v___x_348_ = lean_array_get_size(v_vs_343_);
v___f_349_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0));
v___f_350_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1));
v___f_351_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2));
v___f_352_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3));
v___f_353_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4));
v___f_354_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5));
v___f_355_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6));
if (v_isShared_346_ == 0)
{
lean_ctor_set_tag(v___x_345_, 0);
lean_ctor_set(v___x_345_, 1, v___f_350_);
lean_ctor_set(v___x_345_, 0, v___f_349_);
v___x_357_ = v___x_345_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v___f_349_);
lean_ctor_set(v_reuseFailAlloc_369_, 1, v___f_350_);
v___x_357_ = v_reuseFailAlloc_369_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_358_; lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_358_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
lean_ctor_set(v___x_358_, 1, v___f_351_);
lean_ctor_set(v___x_358_, 2, v___f_352_);
lean_ctor_set(v___x_358_, 3, v___f_353_);
lean_ctor_set(v___x_358_, 4, v___f_354_);
v___x_359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
lean_ctor_set(v___x_359_, 1, v___f_355_);
v___x_360_ = lean_nat_dec_lt(v___x_347_, v___x_348_);
if (v___x_360_ == 0)
{
uint8_t v___x_361_; 
lean_dec_ref(v___x_359_);
lean_dec_ref(v_vs_343_);
v___x_361_ = 1;
return v___x_361_;
}
else
{
if (v___x_360_ == 0)
{
lean_dec_ref(v___x_359_);
lean_dec_ref(v_vs_343_);
return v___x_360_;
}
else
{
lean_object* v___x_362_; lean_object* v___f_363_; size_t v___x_364_; size_t v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; 
v___x_362_ = lean_box(v___x_360_);
v___f_363_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0___boxed), 2, 1);
lean_closure_set(v___f_363_, 0, v___x_362_);
v___x_364_ = ((size_t)0ULL);
v___x_365_ = lean_usize_of_nat(v___x_348_);
v___x_366_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_359_, v___f_363_, v_vs_343_, v___x_364_, v___x_365_);
v___x_367_ = lean_unbox(v___x_366_);
lean_dec(v___x_366_);
if (v___x_367_ == 0)
{
return v___x_360_;
}
else
{
uint8_t v___x_368_; 
v___x_368_ = 0;
return v___x_368_;
}
}
}
}
}
}
else
{
uint8_t v___x_372_; 
lean_dec(v_value_342_);
v___x_372_ = 0;
return v___x_372_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___boxed(lean_object* v_value_373_){
_start:
{
uint8_t v_res_374_; lean_object* v_r_375_; 
v_res_374_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible(v_value_373_);
v_r_375_ = lean_box(v_res_374_);
return v_r_375_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1(lean_object* v_msg_376_){
_start:
{
lean_object* v___f_377_; lean_object* v___f_378_; lean_object* v___f_379_; lean_object* v___f_380_; lean_object* v___f_381_; lean_object* v___f_382_; lean_object* v___f_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___f_377_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0));
v___f_378_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1));
v___f_379_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2));
v___f_380_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3));
v___f_381_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4));
v___f_382_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5));
v___f_383_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6));
v___x_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_384_, 0, v___f_377_);
lean_ctor_set(v___x_384_, 1, v___f_378_);
v___x_385_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
lean_ctor_set(v___x_385_, 1, v___f_379_);
lean_ctor_set(v___x_385_, 2, v___f_380_);
lean_ctor_set(v___x_385_, 3, v___f_381_);
lean_ctor_set(v___x_385_, 4, v___f_382_);
v___x_386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
lean_ctor_set(v___x_386_, 1, v___f_383_);
v___x_387_ = lean_box(0);
v___x_388_ = l_instInhabitedOfMonad___redArg(v___x_386_, v___x_387_);
v___x_389_ = lean_panic_fn_borrowed(v___x_388_, v_msg_376_);
lean_dec(v___x_388_);
return v___x_389_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(lean_object* v_as_390_, size_t v_i_391_, size_t v_stop_392_){
_start:
{
uint8_t v___x_393_; 
v___x_393_ = lean_usize_dec_eq(v_i_391_, v_stop_392_);
if (v___x_393_ == 0)
{
uint8_t v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; uint8_t v___x_397_; 
v___x_394_ = 1;
v___x_395_ = lean_array_uget_borrowed(v_as_390_, v_i_391_);
v___x_396_ = lean_box(1);
lean_inc(v___x_395_);
v___x_397_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v___x_395_, v___x_396_);
if (v___x_397_ == 0)
{
return v___x_394_;
}
else
{
if (v___x_393_ == 0)
{
size_t v___x_398_; size_t v___x_399_; 
v___x_398_ = ((size_t)1ULL);
v___x_399_ = lean_usize_add(v_i_391_, v___x_398_);
v_i_391_ = v___x_399_;
goto _start;
}
else
{
return v___x_394_;
}
}
}
else
{
uint8_t v___x_401_; 
v___x_401_ = 0;
return v___x_401_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0___boxed(lean_object* v_as_402_, lean_object* v_i_403_, lean_object* v_stop_404_){
_start:
{
size_t v_i_boxed_405_; size_t v_stop_boxed_406_; uint8_t v_res_407_; lean_object* v_r_408_; 
v_i_boxed_405_ = lean_unbox_usize(v_i_403_);
lean_dec(v_i_403_);
v_stop_boxed_406_ = lean_unbox_usize(v_stop_404_);
lean_dec(v_stop_404_);
v_res_407_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(v_as_402_, v_i_boxed_405_, v_stop_boxed_406_);
lean_dec_ref(v_as_402_);
v_r_408_ = lean_box(v_res_407_);
return v_r_408_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___lam__0(lean_object* v___y_409_){
_start:
{
if (lean_obj_tag(v___y_409_) == 2)
{
lean_object* v_vs_410_; lean_object* v___x_411_; lean_object* v___x_412_; uint8_t v___x_413_; 
v_vs_410_ = lean_ctor_get(v___y_409_, 1);
v___x_411_ = lean_unsigned_to_nat(0u);
v___x_412_ = lean_array_get_size(v_vs_410_);
v___x_413_ = lean_nat_dec_lt(v___x_411_, v___x_412_);
if (v___x_413_ == 0)
{
uint8_t v___x_414_; 
v___x_414_ = 1;
return v___x_414_;
}
else
{
if (v___x_413_ == 0)
{
return v___x_413_;
}
else
{
size_t v___x_415_; size_t v___x_416_; uint8_t v___x_417_; 
v___x_415_ = ((size_t)0ULL);
v___x_416_ = lean_usize_of_nat(v___x_412_);
v___x_417_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(v_vs_410_, v___x_415_, v___x_416_);
if (v___x_417_ == 0)
{
return v___x_413_;
}
else
{
uint8_t v___x_418_; 
v___x_418_ = 0;
return v___x_418_;
}
}
}
}
else
{
uint8_t v___x_419_; 
v___x_419_ = 0;
return v___x_419_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___lam__0___boxed(lean_object* v___y_420_){
_start:
{
uint8_t v_res_421_; lean_object* v_r_422_; 
v_res_421_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___lam__0(v___y_420_);
lean_dec(v___y_420_);
v_r_422_ = lean_box(v_res_421_);
return v_r_422_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__2(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_425_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_426_ = lean_unsigned_to_nat(42u);
v___x_427_ = lean_unsigned_to_nat(122u);
v___x_428_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1));
v___x_429_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_430_ = l_mkPanicMessageWithDecl(v___x_429_, v___x_428_, v___x_427_, v___x_426_, v___x_425_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(lean_object* v_env_431_, lean_object* v_vs_432_){
_start:
{
lean_object* v___f_433_; uint8_t v___x_434_; 
v___f_433_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__0));
lean_inc(v_vs_432_);
v___x_434_ = l_List_all___redArg(v_vs_432_, v___f_433_);
if (v___x_434_ == 0)
{
lean_object* v___x_435_; 
lean_dec_ref(v_env_431_);
v___x_435_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_435_, 0, v_vs_432_);
return v___x_435_;
}
else
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = lean_box(0);
v___x_437_ = l_List_head_x21___redArg(v___x_436_, v_vs_432_);
if (lean_obj_tag(v___x_437_) == 2)
{
lean_object* v_i_438_; lean_object* v___x_439_; uint8_t v___x_440_; 
v_i_438_ = lean_ctor_get(v___x_437_, 0);
lean_inc(v_i_438_);
lean_dec_ref(v___x_437_);
v___x_439_ = l_List_lengthTR___redArg(v_vs_432_);
v___x_440_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(v_i_438_, v_env_431_, v___x_439_);
lean_dec(v___x_439_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; 
v___x_441_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_441_, 0, v_vs_432_);
return v___x_441_;
}
else
{
lean_object* v___x_442_; 
lean_dec(v_vs_432_);
v___x_442_ = lean_box(1);
return v___x_442_;
}
}
else
{
lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec(v___x_437_);
lean_dec(v_vs_432_);
lean_dec_ref(v_env_431_);
v___x_443_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__2, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__2);
v___x_444_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1(v___x_443_);
return v___x_444_;
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__1(lean_object* v_msg_445_){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_box(0);
v___x_447_ = lean_panic_fn_borrowed(v___x_446_, v_msg_445_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0_spec__3(lean_object* v_x_448_, lean_object* v_x_449_, lean_object* v_x_450_){
_start:
{
if (lean_obj_tag(v_x_450_) == 0)
{
lean_dec(v_x_448_);
return v_x_449_;
}
else
{
lean_object* v_head_451_; lean_object* v_tail_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_462_; 
v_head_451_ = lean_ctor_get(v_x_450_, 0);
v_tail_452_ = lean_ctor_get(v_x_450_, 1);
v_isSharedCheck_462_ = !lean_is_exclusive(v_x_450_);
if (v_isSharedCheck_462_ == 0)
{
v___x_454_ = v_x_450_;
v_isShared_455_ = v_isSharedCheck_462_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_tail_452_);
lean_inc(v_head_451_);
lean_dec(v_x_450_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_462_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_457_; 
lean_inc(v_x_448_);
if (v_isShared_455_ == 0)
{
lean_ctor_set_tag(v___x_454_, 5);
lean_ctor_set(v___x_454_, 1, v_x_448_);
lean_ctor_set(v___x_454_, 0, v_x_449_);
v___x_457_ = v___x_454_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_x_449_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_x_448_);
v___x_457_ = v_reuseFailAlloc_461_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_451_);
v___x_459_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_459_, 0, v___x_457_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
v_x_449_ = v___x_459_;
v_x_450_ = v_tail_452_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0(lean_object* v_x_463_, lean_object* v_x_464_){
_start:
{
if (lean_obj_tag(v_x_463_) == 0)
{
lean_object* v___x_465_; 
lean_dec(v_x_464_);
v___x_465_ = lean_box(0);
return v___x_465_;
}
else
{
lean_object* v_tail_466_; 
v_tail_466_ = lean_ctor_get(v_x_463_, 1);
if (lean_obj_tag(v_tail_466_) == 0)
{
lean_object* v_head_467_; lean_object* v___x_468_; 
lean_dec(v_x_464_);
v_head_467_ = lean_ctor_get(v_x_463_, 0);
lean_inc(v_head_467_);
lean_dec_ref(v_x_463_);
v___x_468_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_467_);
return v___x_468_;
}
else
{
lean_object* v_head_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
lean_inc(v_tail_466_);
v_head_469_ = lean_ctor_get(v_x_463_, 0);
lean_inc(v_head_469_);
lean_dec_ref(v_x_463_);
v___x_470_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_469_);
v___x_471_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0_spec__3(v_x_464_, v___x_470_, v_tail_466_);
return v___x_471_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2));
v___x_484_ = lean_string_length(v___x_483_);
return v___x_484_;
}
}
static lean_object* _init_l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_obj_once(&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7, &l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7_once, _init_l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7);
v___x_486_ = lean_nat_to_int(v___x_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg(lean_object* v_a_491_){
_start:
{
if (lean_obj_tag(v_a_491_) == 0)
{
lean_object* v___x_492_; 
v___x_492_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__1));
return v___x_492_;
}
else
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; uint8_t v___x_501_; lean_object* v___x_502_; 
v___x_493_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5));
v___x_494_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0(v_a_491_, v___x_493_);
v___x_495_ = lean_obj_once(&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8, &l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8_once, _init_l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8);
v___x_496_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__9));
v___x_497_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
lean_ctor_set(v___x_497_, 1, v___x_494_);
v___x_498_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10));
v___x_499_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_497_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
v___x_500_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_495_);
lean_ctor_set(v___x_500_, 1, v___x_499_);
v___x_501_ = 0;
v___x_502_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_502_, 0, v___x_500_);
lean_ctor_set_uint8(v___x_502_, sizeof(void*)*1, v___x_501_);
return v___x_502_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_merge(lean_object* v_env_508_, lean_object* v_v1_509_, lean_object* v_v2_510_){
_start:
{
lean_object* v___y_512_; lean_object* v___y_513_; lean_object* v___y_518_; lean_object* v_i_519_; lean_object* v_vs_520_; 
switch(lean_obj_tag(v_v1_509_))
{
case 0:
{
switch(lean_obj_tag(v_v2_510_))
{
case 2:
{
lean_object* v_i_527_; lean_object* v_vs_528_; 
v_i_527_ = lean_ctor_get(v_v2_510_, 0);
lean_inc(v_i_527_);
v_vs_528_ = lean_ctor_get(v_v2_510_, 1);
lean_inc_ref(v_vs_528_);
v___y_518_ = v_v2_510_;
v_i_519_ = v_i_527_;
v_vs_520_ = v_vs_528_;
goto v___jp_517_;
}
case 3:
{
lean_object* v_vs_529_; lean_object* v___x_530_; 
v_vs_529_ = lean_ctor_get(v_v2_510_, 0);
lean_inc(v_vs_529_);
lean_dec_ref(v_v2_510_);
v___x_530_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_508_, v_vs_529_);
return v___x_530_;
}
default: 
{
lean_dec_ref(v_env_508_);
return v_v2_510_;
}
}
}
case 1:
{
lean_dec_ref(v_env_508_);
switch(lean_obj_tag(v_v2_510_))
{
case 0:
{
return v_v1_509_;
}
case 1:
{
return v_v2_510_;
}
case 3:
{
lean_dec_ref(v_v2_510_);
return v_v1_509_;
}
default: 
{
lean_dec(v_v2_510_);
return v_v1_509_;
}
}
}
case 2:
{
switch(lean_obj_tag(v_v2_510_))
{
case 0:
{
lean_object* v_i_531_; lean_object* v_vs_532_; 
v_i_531_ = lean_ctor_get(v_v1_509_, 0);
lean_inc(v_i_531_);
v_vs_532_ = lean_ctor_get(v_v1_509_, 1);
lean_inc_ref(v_vs_532_);
v___y_518_ = v_v1_509_;
v_i_519_ = v_i_531_;
v_vs_520_ = v_vs_532_;
goto v___jp_517_;
}
case 1:
{
lean_dec_ref(v_v1_509_);
lean_dec_ref(v_env_508_);
return v_v2_510_;
}
case 2:
{
lean_object* v_i_533_; lean_object* v_vs_534_; lean_object* v_i_535_; lean_object* v_vs_536_; uint8_t v___x_537_; 
v_i_533_ = lean_ctor_get(v_v1_509_, 0);
v_vs_534_ = lean_ctor_get(v_v1_509_, 1);
v_i_535_ = lean_ctor_get(v_v2_510_, 0);
v_vs_536_ = lean_ctor_get(v_v2_510_, 1);
v___x_537_ = lean_name_eq(v_i_533_, v_i_535_);
if (v___x_537_ == 0)
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_538_ = lean_box(0);
v___x_539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_539_, 0, v_v2_510_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
v___x_540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_540_, 0, v_v1_509_);
lean_ctor_set(v___x_540_, 1, v___x_539_);
v___x_541_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_508_, v___x_540_);
return v___x_541_;
}
else
{
lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_551_; 
lean_inc_ref(v_vs_536_);
lean_inc_ref(v_vs_534_);
lean_inc(v_i_533_);
lean_dec_ref(v_v1_509_);
v_isSharedCheck_551_ = !lean_is_exclusive(v_v2_510_);
if (v_isSharedCheck_551_ == 0)
{
lean_object* v_unused_552_; lean_object* v_unused_553_; 
v_unused_552_ = lean_ctor_get(v_v2_510_, 1);
lean_dec(v_unused_552_);
v_unused_553_ = lean_ctor_get(v_v2_510_, 0);
lean_dec(v_unused_553_);
v___x_543_ = v_v2_510_;
v_isShared_544_ = v_isSharedCheck_551_;
goto v_resetjp_542_;
}
else
{
lean_dec(v_v2_510_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_551_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_549_; 
v___x_545_ = lean_unsigned_to_nat(0u);
v___x_546_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3));
lean_inc_ref(v_env_508_);
v___x_547_ = l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(v_env_508_, v_vs_534_, v_vs_536_, v___x_545_, v___x_546_);
lean_dec_ref(v_vs_536_);
lean_dec_ref(v_vs_534_);
lean_inc_ref(v___x_547_);
lean_inc(v_i_533_);
if (v_isShared_544_ == 0)
{
lean_ctor_set(v___x_543_, 1, v___x_547_);
lean_ctor_set(v___x_543_, 0, v_i_533_);
v___x_549_ = v___x_543_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_i_533_);
lean_ctor_set(v_reuseFailAlloc_550_, 1, v___x_547_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
v___y_518_ = v___x_549_;
v_i_519_ = v_i_533_;
v_vs_520_ = v___x_547_;
goto v___jp_517_;
}
}
}
}
default: 
{
lean_object* v_vs_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v_vs_554_ = lean_ctor_get(v_v2_510_, 0);
lean_inc(v_vs_554_);
lean_dec_ref(v_v2_510_);
lean_inc_ref(v_env_508_);
v___x_555_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(v_env_508_, v_vs_554_, v_v1_509_);
v___x_556_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_508_, v___x_555_);
return v___x_556_;
}
}
}
default: 
{
switch(lean_obj_tag(v_v2_510_))
{
case 0:
{
lean_object* v_vs_557_; lean_object* v___x_558_; 
v_vs_557_ = lean_ctor_get(v_v1_509_, 0);
lean_inc(v_vs_557_);
lean_dec_ref(v_v1_509_);
v___x_558_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_508_, v_vs_557_);
return v___x_558_;
}
case 1:
{
lean_dec_ref(v_v1_509_);
lean_dec_ref(v_env_508_);
return v_v2_510_;
}
case 3:
{
lean_object* v_vs_559_; lean_object* v_vs_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v_vs_559_ = lean_ctor_get(v_v1_509_, 0);
lean_inc(v_vs_559_);
lean_dec_ref(v_v1_509_);
v_vs_560_ = lean_ctor_get(v_v2_510_, 0);
lean_inc(v_vs_560_);
lean_dec_ref(v_v2_510_);
lean_inc_ref(v_env_508_);
v___x_561_ = l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_merge_spec__4(v_env_508_, v_vs_560_, v_vs_559_);
v___x_562_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_508_, v___x_561_);
return v___x_562_;
}
default: 
{
lean_object* v_vs_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v_vs_563_ = lean_ctor_get(v_v1_509_, 0);
lean_inc(v_vs_563_);
lean_dec_ref(v_v1_509_);
lean_inc_ref(v_env_508_);
v___x_564_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(v_env_508_, v_vs_563_, v_v2_510_);
v___x_565_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_508_, v___x_564_);
return v___x_565_;
}
}
}
}
v___jp_511_:
{
lean_object* v___x_514_; uint8_t v___x_515_; 
v___x_514_ = lean_unsigned_to_nat(1u);
v___x_515_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(v___y_512_, v_env_508_, v___x_514_);
if (v___x_515_ == 0)
{
return v___y_513_;
}
else
{
lean_object* v___x_516_; 
lean_dec(v___y_513_);
v___x_516_ = lean_box(1);
return v___x_516_;
}
}
v___jp_517_:
{
lean_object* v___x_521_; lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_521_ = lean_unsigned_to_nat(0u);
v___x_522_ = lean_array_get_size(v_vs_520_);
v___x_523_ = lean_nat_dec_lt(v___x_521_, v___x_522_);
if (v___x_523_ == 0)
{
lean_dec_ref(v_vs_520_);
v___y_512_ = v_i_519_;
v___y_513_ = v___y_518_;
goto v___jp_511_;
}
else
{
if (v___x_523_ == 0)
{
lean_dec_ref(v_vs_520_);
v___y_512_ = v_i_519_;
v___y_513_ = v___y_518_;
goto v___jp_511_;
}
else
{
size_t v___x_524_; size_t v___x_525_; uint8_t v___x_526_; 
v___x_524_ = ((size_t)0ULL);
v___x_525_ = lean_usize_of_nat(v___x_522_);
v___x_526_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(v_vs_520_, v___x_524_, v___x_525_);
lean_dec_ref(v_vs_520_);
if (v___x_526_ == 0)
{
v___y_512_ = v_i_519_;
v___y_513_ = v___y_518_;
goto v___jp_511_;
}
else
{
lean_dec(v_i_519_);
lean_dec_ref(v_env_508_);
return v___y_518_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(lean_object* v_env_566_, lean_object* v_as_567_, lean_object* v_bs_568_, lean_object* v_i_569_, lean_object* v_cs_570_){
_start:
{
lean_object* v___x_571_; uint8_t v___x_572_; 
v___x_571_ = lean_array_get_size(v_as_567_);
v___x_572_ = lean_nat_dec_lt(v_i_569_, v___x_571_);
if (v___x_572_ == 0)
{
lean_dec(v_i_569_);
lean_dec_ref(v_env_566_);
return v_cs_570_;
}
else
{
lean_object* v___x_573_; uint8_t v___x_574_; 
v___x_573_ = lean_array_get_size(v_bs_568_);
v___x_574_ = lean_nat_dec_lt(v_i_569_, v___x_573_);
if (v___x_574_ == 0)
{
lean_dec(v_i_569_);
lean_dec_ref(v_env_566_);
return v_cs_570_;
}
else
{
lean_object* v_a_575_; lean_object* v_b_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v_a_575_ = lean_array_fget_borrowed(v_as_567_, v_i_569_);
v_b_576_ = lean_array_fget_borrowed(v_bs_568_, v_i_569_);
lean_inc(v_b_576_);
lean_inc(v_a_575_);
lean_inc_ref(v_env_566_);
v___x_577_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_merge(v_env_566_, v_a_575_, v_b_576_);
v___x_578_ = lean_unsigned_to_nat(1u);
v___x_579_ = lean_nat_add(v_i_569_, v___x_578_);
lean_dec(v_i_569_);
v___x_580_ = lean_array_push(v_cs_570_, v___x_577_);
v_i_569_ = v___x_579_;
v_cs_570_ = v___x_580_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(lean_object* v_env_582_, lean_object* v_vs_583_, lean_object* v_v_584_){
_start:
{
if (lean_obj_tag(v_vs_583_) == 0)
{
lean_object* v___x_603_; 
lean_dec_ref(v_env_582_);
v___x_603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_603_, 0, v_v_584_);
lean_ctor_set(v___x_603_, 1, v_vs_583_);
return v___x_603_;
}
else
{
lean_object* v_head_604_; 
v_head_604_ = lean_ctor_get(v_vs_583_, 0);
if (lean_obj_tag(v_head_604_) == 2)
{
if (lean_obj_tag(v_v_584_) == 2)
{
lean_object* v_tail_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_633_; 
lean_inc_ref(v_head_604_);
v_tail_605_ = lean_ctor_get(v_vs_583_, 1);
v_isSharedCheck_633_ = !lean_is_exclusive(v_vs_583_);
if (v_isSharedCheck_633_ == 0)
{
lean_object* v_unused_634_; 
v_unused_634_ = lean_ctor_get(v_vs_583_, 0);
lean_dec(v_unused_634_);
v___x_607_ = v_vs_583_;
v_isShared_608_ = v_isSharedCheck_633_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_tail_605_);
lean_dec(v_vs_583_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_633_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v_i_609_; lean_object* v_vs_610_; lean_object* v_i_611_; lean_object* v_vs_612_; uint8_t v___x_613_; 
v_i_609_ = lean_ctor_get(v_head_604_, 0);
v_vs_610_ = lean_ctor_get(v_head_604_, 1);
v_i_611_ = lean_ctor_get(v_v_584_, 0);
v_vs_612_ = lean_ctor_get(v_v_584_, 1);
v___x_613_ = lean_name_eq(v_i_609_, v_i_611_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_614_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(v_env_582_, v_tail_605_, v_v_584_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 1, v___x_614_);
v___x_616_ = v___x_607_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_head_604_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v___x_614_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
else
{
lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_630_; 
lean_inc_ref(v_vs_612_);
lean_inc_ref(v_vs_610_);
lean_inc(v_i_609_);
lean_dec_ref(v_head_604_);
v_isSharedCheck_630_ = !lean_is_exclusive(v_v_584_);
if (v_isSharedCheck_630_ == 0)
{
lean_object* v_unused_631_; lean_object* v_unused_632_; 
v_unused_631_ = lean_ctor_get(v_v_584_, 1);
lean_dec(v_unused_631_);
v_unused_632_ = lean_ctor_get(v_v_584_, 0);
lean_dec(v_unused_632_);
v___x_619_ = v_v_584_;
v_isShared_620_ = v_isSharedCheck_630_;
goto v_resetjp_618_;
}
else
{
lean_dec(v_v_584_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_630_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_625_; 
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3));
v___x_623_ = l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(v_env_582_, v_vs_610_, v_vs_612_, v___x_621_, v___x_622_);
lean_dec_ref(v_vs_612_);
lean_dec_ref(v_vs_610_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 1, v___x_623_);
lean_ctor_set(v___x_619_, 0, v_i_609_);
v___x_625_ = v___x_619_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_i_609_);
lean_ctor_set(v_reuseFailAlloc_629_, 1, v___x_623_);
v___x_625_ = v_reuseFailAlloc_629_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
lean_object* v___x_627_; 
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v___x_625_);
v___x_627_ = v___x_607_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___x_625_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v_tail_605_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_env_582_);
goto v___jp_585_;
}
}
else
{
lean_dec_ref(v_env_582_);
goto v___jp_585_;
}
}
v___jp_585_:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_586_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_587_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__0));
v___x_588_ = lean_unsigned_to_nat(92u);
v___x_589_ = lean_unsigned_to_nat(12u);
v___x_590_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__1));
v___x_591_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_v_584_);
v___x_592_ = l_Std_Format_defWidth;
v___x_593_ = lean_unsigned_to_nat(0u);
v___x_594_ = l_Std_Format_pretty(v___x_591_, v___x_592_, v___x_593_, v___x_593_);
v___x_595_ = lean_string_append(v___x_590_, v___x_594_);
lean_dec_ref(v___x_594_);
v___x_596_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__2));
v___x_597_ = lean_string_append(v___x_595_, v___x_596_);
v___x_598_ = l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg(v_vs_583_);
v___x_599_ = l_Std_Format_pretty(v___x_598_, v___x_592_, v___x_593_, v___x_593_);
v___x_600_ = lean_string_append(v___x_597_, v___x_599_);
lean_dec_ref(v___x_599_);
v___x_601_ = l_mkPanicMessageWithDecl(v___x_586_, v___x_587_, v___x_588_, v___x_589_, v___x_600_);
lean_dec_ref(v___x_600_);
v___x_602_ = l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__1(v___x_601_);
return v___x_602_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_merge_spec__4(lean_object* v_env_635_, lean_object* v_x_636_, lean_object* v_x_637_){
_start:
{
if (lean_obj_tag(v_x_637_) == 0)
{
lean_dec_ref(v_env_635_);
return v_x_636_;
}
else
{
lean_object* v_head_638_; lean_object* v_tail_639_; lean_object* v___x_640_; 
v_head_638_ = lean_ctor_get(v_x_637_, 0);
lean_inc(v_head_638_);
v_tail_639_ = lean_ctor_get(v_x_637_, 1);
lean_inc(v_tail_639_);
lean_dec_ref(v_x_637_);
lean_inc_ref(v_env_635_);
v___x_640_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(v_env_635_, v_x_636_, v_head_638_);
v_x_636_ = v___x_640_;
v_x_637_ = v_tail_639_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2___boxed(lean_object* v_env_642_, lean_object* v_as_643_, lean_object* v_bs_644_, lean_object* v_i_645_, lean_object* v_cs_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(v_env_642_, v_as_643_, v_bs_644_, v_i_645_, v_cs_646_);
lean_dec_ref(v_bs_644_);
lean_dec_ref(v_as_643_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0(lean_object* v_a_648_, lean_object* v_n_649_){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg(v_a_648_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___boxed(lean_object* v_a_651_, lean_object* v_n_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0(v_a_651_, v_n_652_);
lean_dec(v_n_652_);
return v_res_653_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2(lean_object* v_a_654_, lean_object* v_x_655_){
_start:
{
if (lean_obj_tag(v_x_655_) == 0)
{
uint8_t v___x_656_; 
lean_dec(v_a_654_);
v___x_656_ = 0;
return v___x_656_;
}
else
{
lean_object* v_head_657_; lean_object* v_tail_658_; uint8_t v___x_659_; 
v_head_657_ = lean_ctor_get(v_x_655_, 0);
lean_inc(v_head_657_);
v_tail_658_ = lean_ctor_get(v_x_655_, 1);
lean_inc(v_tail_658_);
lean_dec_ref(v_x_655_);
lean_inc(v_a_654_);
v___x_659_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_a_654_, v_head_657_);
if (v___x_659_ == 0)
{
v_x_655_ = v_tail_658_;
goto _start;
}
else
{
lean_dec(v_tail_658_);
lean_dec(v_a_654_);
return v___x_659_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2___boxed(lean_object* v_a_661_, lean_object* v_x_662_){
_start:
{
uint8_t v_res_663_; lean_object* v_r_664_; 
v_res_663_ = l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2(v_a_661_, v_x_662_);
v_r_664_ = lean_box(v_res_663_);
return v_r_664_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0(lean_object* v_env_665_, lean_object* v_forbiddenTypes_x27_666_, lean_object* v_n_667_, size_t v_sz_668_, size_t v_i_669_, lean_object* v_bs_670_){
_start:
{
uint8_t v___x_671_; 
v___x_671_ = lean_usize_dec_lt(v_i_669_, v_sz_668_);
if (v___x_671_ == 0)
{
lean_dec(v_forbiddenTypes_x27_666_);
lean_dec_ref(v_env_665_);
return v_bs_670_;
}
else
{
lean_object* v_v_672_; lean_object* v___x_673_; lean_object* v_bs_x27_674_; lean_object* v___x_675_; size_t v___x_676_; size_t v___x_677_; lean_object* v___x_678_; 
v_v_672_ = lean_array_uget(v_bs_670_, v_i_669_);
v___x_673_ = lean_unsigned_to_nat(0u);
v_bs_x27_674_ = lean_array_uset(v_bs_670_, v_i_669_, v___x_673_);
lean_inc(v_forbiddenTypes_x27_666_);
lean_inc_ref(v_env_665_);
v___x_675_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(v_env_665_, v_v_672_, v_forbiddenTypes_x27_666_, v_n_667_);
v___x_676_ = ((size_t)1ULL);
v___x_677_ = lean_usize_add(v_i_669_, v___x_676_);
v___x_678_ = lean_array_uset(v_bs_x27_674_, v_i_669_, v___x_675_);
v_i_669_ = v___x_677_;
v_bs_670_ = v___x_678_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(lean_object* v_env_680_, lean_object* v_v_681_, lean_object* v_forbiddenTypes_682_, lean_object* v_remainingDepth_683_){
_start:
{
lean_object* v_zero_684_; uint8_t v_isZero_685_; 
v_zero_684_ = lean_unsigned_to_nat(0u);
v_isZero_685_ = lean_nat_dec_eq(v_remainingDepth_683_, v_zero_684_);
if (v_isZero_685_ == 1)
{
lean_object* v___x_686_; 
lean_dec(v_forbiddenTypes_682_);
lean_dec(v_v_681_);
lean_dec_ref(v_env_680_);
v___x_686_ = lean_box(1);
return v___x_686_;
}
else
{
lean_object* v_one_687_; lean_object* v_n_688_; 
v_one_687_ = lean_unsigned_to_nat(1u);
v_n_688_ = lean_nat_sub(v_remainingDepth_683_, v_one_687_);
switch(lean_obj_tag(v_v_681_))
{
case 2:
{
lean_object* v_i_689_; lean_object* v_vs_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_709_; 
v_i_689_ = lean_ctor_get(v_v_681_, 0);
v_vs_690_ = lean_ctor_get(v_v_681_, 1);
v_isSharedCheck_709_ = !lean_is_exclusive(v_v_681_);
if (v_isSharedCheck_709_ == 0)
{
v___x_692_ = v_v_681_;
v_isShared_693_ = v_isSharedCheck_709_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_vs_690_);
lean_inc(v_i_689_);
lean_dec(v_v_681_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_709_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v_forbiddenTypes_x27_695_; lean_object* v_induct_702_; lean_object* v_toConstantVal_703_; uint8_t v_isRec_704_; lean_object* v_name_705_; uint8_t v___x_706_; 
lean_inc_ref(v_env_680_);
lean_inc(v_i_689_);
v_induct_702_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor(v_i_689_, v_env_680_);
v_toConstantVal_703_ = lean_ctor_get(v_induct_702_, 0);
lean_inc_ref(v_toConstantVal_703_);
v_isRec_704_ = lean_ctor_get_uint8(v_induct_702_, sizeof(void*)*6);
lean_dec_ref(v_induct_702_);
v_name_705_ = lean_ctor_get(v_toConstantVal_703_, 0);
lean_inc(v_name_705_);
lean_dec_ref(v_toConstantVal_703_);
v___x_706_ = l_Lean_NameSet_contains(v_forbiddenTypes_682_, v_name_705_);
if (v___x_706_ == 0)
{
if (v_isRec_704_ == 0)
{
lean_dec(v_name_705_);
v_forbiddenTypes_x27_695_ = v_forbiddenTypes_682_;
goto v___jp_694_;
}
else
{
lean_object* v___x_707_; 
v___x_707_ = l_Lean_NameSet_insert(v_forbiddenTypes_682_, v_name_705_);
v_forbiddenTypes_x27_695_ = v___x_707_;
goto v___jp_694_;
}
}
else
{
lean_object* v___x_708_; 
lean_dec(v_name_705_);
lean_del_object(v___x_692_);
lean_dec_ref(v_vs_690_);
lean_dec(v_i_689_);
lean_dec(v_n_688_);
lean_dec(v_forbiddenTypes_682_);
lean_dec_ref(v_env_680_);
v___x_708_ = lean_box(1);
return v___x_708_;
}
v___jp_694_:
{
size_t v_sz_696_; size_t v___x_697_; lean_object* v___x_698_; lean_object* v___x_700_; 
v_sz_696_ = lean_array_size(v_vs_690_);
v___x_697_ = ((size_t)0ULL);
v___x_698_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0(v_env_680_, v_forbiddenTypes_x27_695_, v_n_688_, v_sz_696_, v___x_697_, v_vs_690_);
lean_dec(v_n_688_);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 1, v___x_698_);
v___x_700_ = v___x_692_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_i_689_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v___x_698_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
}
case 3:
{
lean_object* v_vs_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_721_; 
v_vs_710_ = lean_ctor_get(v_v_681_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v_v_681_);
if (v_isSharedCheck_721_ == 0)
{
v___x_712_ = v_v_681_;
v_isShared_713_ = v_isSharedCheck_721_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_vs_710_);
lean_dec(v_v_681_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_721_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_714_; lean_object* v_vs_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_714_ = lean_box(0);
v_vs_715_ = l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1(v_env_680_, v_forbiddenTypes_682_, v_n_688_, v_vs_710_, v___x_714_);
lean_dec(v_n_688_);
v___x_716_ = lean_box(1);
lean_inc(v_vs_715_);
v___x_717_ = l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2(v___x_716_, v_vs_715_);
if (v___x_717_ == 0)
{
lean_object* v___x_719_; 
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v_vs_715_);
v___x_719_ = v___x_712_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_vs_715_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
else
{
lean_dec(v_vs_715_);
lean_del_object(v___x_712_);
return v___x_716_;
}
}
}
default: 
{
lean_dec(v_n_688_);
lean_dec(v_forbiddenTypes_682_);
lean_dec_ref(v_env_680_);
return v_v_681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1(lean_object* v_env_722_, lean_object* v_forbiddenTypes_723_, lean_object* v_n_724_, lean_object* v_a_725_, lean_object* v_a_726_){
_start:
{
if (lean_obj_tag(v_a_725_) == 0)
{
lean_object* v___x_727_; 
lean_dec(v_forbiddenTypes_723_);
lean_dec_ref(v_env_722_);
v___x_727_ = l_List_reverse___redArg(v_a_726_);
return v___x_727_;
}
else
{
lean_object* v_head_728_; lean_object* v_tail_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_738_; 
v_head_728_ = lean_ctor_get(v_a_725_, 0);
v_tail_729_ = lean_ctor_get(v_a_725_, 1);
v_isSharedCheck_738_ = !lean_is_exclusive(v_a_725_);
if (v_isSharedCheck_738_ == 0)
{
v___x_731_ = v_a_725_;
v_isShared_732_ = v_isSharedCheck_738_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_tail_729_);
lean_inc(v_head_728_);
lean_dec(v_a_725_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_738_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_733_; lean_object* v___x_735_; 
lean_inc(v_forbiddenTypes_723_);
lean_inc_ref(v_env_722_);
v___x_733_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(v_env_722_, v_head_728_, v_forbiddenTypes_723_, v_n_724_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 1, v_a_726_);
lean_ctor_set(v___x_731_, 0, v___x_733_);
v___x_735_ = v___x_731_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_733_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v_a_726_);
v___x_735_ = v_reuseFailAlloc_737_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
v_a_725_ = v_tail_729_;
v_a_726_ = v___x_735_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1___boxed(lean_object* v_env_739_, lean_object* v_forbiddenTypes_740_, lean_object* v_n_741_, lean_object* v_a_742_, lean_object* v_a_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1(v_env_739_, v_forbiddenTypes_740_, v_n_741_, v_a_742_, v_a_743_);
lean_dec(v_n_741_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0___boxed(lean_object* v_env_745_, lean_object* v_forbiddenTypes_x27_746_, lean_object* v_n_747_, lean_object* v_sz_748_, lean_object* v_i_749_, lean_object* v_bs_750_){
_start:
{
size_t v_sz_boxed_751_; size_t v_i_boxed_752_; lean_object* v_res_753_; 
v_sz_boxed_751_ = lean_unbox_usize(v_sz_748_);
lean_dec(v_sz_748_);
v_i_boxed_752_ = lean_unbox_usize(v_i_749_);
lean_dec(v_i_749_);
v_res_753_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0(v_env_745_, v_forbiddenTypes_x27_746_, v_n_747_, v_sz_boxed_751_, v_i_boxed_752_, v_bs_750_);
lean_dec(v_n_747_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go___boxed(lean_object* v_env_754_, lean_object* v_v_755_, lean_object* v_forbiddenTypes_756_, lean_object* v_remainingDepth_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(v_env_754_, v_v_755_, v_forbiddenTypes_756_, v_remainingDepth_757_);
lean_dec(v_remainingDepth_757_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_truncate(lean_object* v_env_759_, lean_object* v_v_760_){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_761_ = l_Lean_NameSet_empty;
v___x_762_ = lean_unsigned_to_nat(8u);
v___x_763_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(v_env_759_, v_v_760_, v___x_761_, v___x_762_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(lean_object* v_env_764_, lean_object* v_v1_765_, lean_object* v_v2_766_){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; 
lean_inc_ref(v_env_764_);
v___x_767_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_merge(v_env_764_, v_v1_765_, v_v2_766_);
v___x_768_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_truncate(v_env_764_, v___x_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor___lam__0___boxed(lean_object* v_x_769_, lean_object* v_v_770_){
_start:
{
uint8_t v_res_771_; lean_object* v_r_772_; 
v_res_771_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor___lam__0(v_x_769_, v_v_770_);
v_r_772_ = lean_box(v_res_771_);
return v_r_772_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(lean_object* v_x_773_, lean_object* v_x_774_){
_start:
{
switch(lean_obj_tag(v_x_773_))
{
case 2:
{
lean_object* v_i_775_; uint8_t v___x_776_; 
v_i_775_ = lean_ctor_get(v_x_773_, 0);
lean_inc(v_i_775_);
lean_dec_ref(v_x_773_);
v___x_776_ = lean_name_eq(v_i_775_, v_x_774_);
lean_dec(v_x_774_);
lean_dec(v_i_775_);
return v___x_776_;
}
case 3:
{
lean_object* v_vs_777_; lean_object* v___f_778_; uint8_t v___x_779_; 
v_vs_777_ = lean_ctor_get(v_x_773_, 0);
lean_inc(v_vs_777_);
lean_dec_ref(v_x_773_);
v___f_778_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor___lam__0___boxed), 2, 1);
lean_closure_set(v___f_778_, 0, v_x_774_);
v___x_779_ = l_List_any___redArg(v_vs_777_, v___f_778_);
return v___x_779_;
}
default: 
{
uint8_t v___x_780_; 
lean_dec(v_x_774_);
lean_dec(v_x_773_);
v___x_780_ = 1;
return v___x_780_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor___lam__0(lean_object* v_x_781_, lean_object* v_v_782_){
_start:
{
uint8_t v___x_783_; 
v___x_783_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(v_v_782_, v_x_781_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor___boxed(lean_object* v_x_784_, lean_object* v_x_785_){
_start:
{
uint8_t v_res_786_; lean_object* v_r_787_; 
v_res_786_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(v_x_784_, v_x_785_);
v_r_787_ = lean_box(v_res_786_);
return v_r_787_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(lean_object* v_x_791_, lean_object* v_as_x27_792_, lean_object* v_b_793_){
_start:
{
if (lean_obj_tag(v_as_x27_792_) == 0)
{
lean_object* v___x_794_; 
v___x_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_794_, 0, v_b_793_);
return v___x_794_;
}
else
{
lean_object* v_head_795_; lean_object* v_tail_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
lean_dec_ref(v_b_793_);
v_head_795_ = lean_ctor_get(v_as_x27_792_, 0);
lean_inc(v_head_795_);
v_tail_796_ = lean_ctor_get(v_as_x27_792_, 1);
lean_inc(v_tail_796_);
lean_dec_ref(v_as_x27_792_);
v___x_797_ = lean_box(0);
v___x_798_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0));
if (lean_obj_tag(v_head_795_) == 2)
{
lean_object* v_i_799_; lean_object* v_vs_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_811_; 
v_i_799_ = lean_ctor_get(v_head_795_, 0);
v_vs_800_ = lean_ctor_get(v_head_795_, 1);
v_isSharedCheck_811_ = !lean_is_exclusive(v_head_795_);
if (v_isSharedCheck_811_ == 0)
{
v___x_802_ = v_head_795_;
v_isShared_803_ = v_isSharedCheck_811_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_vs_800_);
lean_inc(v_i_799_);
lean_dec(v_head_795_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_811_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
uint8_t v___x_804_; 
v___x_804_ = lean_name_eq(v_i_799_, v_x_791_);
lean_dec(v_i_799_);
if (v___x_804_ == 0)
{
lean_del_object(v___x_802_);
lean_dec_ref(v_vs_800_);
v_as_x27_792_ = v_tail_796_;
v_b_793_ = v___x_798_;
goto _start;
}
else
{
lean_object* v___x_806_; lean_object* v___x_808_; 
lean_dec(v_tail_796_);
v___x_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_806_, 0, v_vs_800_);
if (v_isShared_803_ == 0)
{
lean_ctor_set_tag(v___x_802_, 0);
lean_ctor_set(v___x_802_, 1, v___x_797_);
lean_ctor_set(v___x_802_, 0, v___x_806_);
v___x_808_ = v___x_802_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_806_);
lean_ctor_set(v_reuseFailAlloc_810_, 1, v___x_797_);
v___x_808_ = v_reuseFailAlloc_810_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
lean_object* v___x_809_; 
v___x_809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
return v___x_809_;
}
}
}
}
else
{
lean_dec(v_head_795_);
v_as_x27_792_ = v_tail_796_;
v_b_793_ = v___x_798_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___boxed(lean_object* v_x_813_, lean_object* v_as_x27_814_, lean_object* v_b_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(v_x_813_, v_as_x27_814_, v_b_815_);
lean_dec(v_x_813_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs(lean_object* v_x_817_, lean_object* v_x_818_){
_start:
{
switch(lean_obj_tag(v_x_817_))
{
case 2:
{
lean_object* v_i_819_; lean_object* v_vs_820_; uint8_t v___x_821_; 
v_i_819_ = lean_ctor_get(v_x_817_, 0);
lean_inc(v_i_819_);
v_vs_820_ = lean_ctor_get(v_x_817_, 1);
lean_inc_ref(v_vs_820_);
lean_dec_ref(v_x_817_);
v___x_821_ = lean_name_eq(v_i_819_, v_x_818_);
lean_dec(v_i_819_);
if (v___x_821_ == 0)
{
lean_object* v___x_822_; 
lean_dec_ref(v_vs_820_);
v___x_822_ = lean_box(0);
return v___x_822_;
}
else
{
lean_object* v___x_823_; 
v___x_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_823_, 0, v_vs_820_);
return v___x_823_;
}
}
case 3:
{
lean_object* v_vs_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v_val_828_; lean_object* v_fst_829_; 
v_vs_824_ = lean_ctor_get(v_x_817_, 0);
lean_inc(v_vs_824_);
lean_dec_ref(v_x_817_);
v___x_825_ = lean_box(0);
v___x_826_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0));
v___x_827_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(v_x_818_, v_vs_824_, v___x_826_);
v_val_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_val_828_);
lean_dec(v___x_827_);
v_fst_829_ = lean_ctor_get(v_val_828_, 0);
lean_inc(v_fst_829_);
lean_dec(v_val_828_);
if (lean_obj_tag(v_fst_829_) == 0)
{
return v___x_825_;
}
else
{
return v_fst_829_;
}
}
default: 
{
lean_object* v___x_830_; 
lean_dec(v_x_817_);
v___x_830_ = lean_box(0);
return v___x_830_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs___boxed(lean_object* v_x_831_, lean_object* v_x_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs(v_x_831_, v_x_832_);
lean_dec(v_x_832_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0(lean_object* v_x_834_, lean_object* v_as_835_, lean_object* v_as_x27_836_, lean_object* v_b_837_, lean_object* v_a_838_){
_start:
{
lean_object* v___x_839_; 
v___x_839_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(v_x_834_, v_as_x27_836_, v_b_837_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___boxed(lean_object* v_x_840_, lean_object* v_as_841_, lean_object* v_as_x27_842_, lean_object* v_b_843_, lean_object* v_a_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0(v_x_840_, v_as_841_, v_as_x27_842_, v_b_843_, v_a_844_);
lean_dec(v_as_841_);
lean_dec(v_x_840_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(lean_object* v_a_858_){
_start:
{
lean_object* v_zero_859_; uint8_t v_isZero_860_; 
v_zero_859_ = lean_unsigned_to_nat(0u);
v_isZero_860_ = lean_nat_dec_eq(v_a_858_, v_zero_859_);
if (v_isZero_860_ == 1)
{
lean_object* v___x_861_; 
v___x_861_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__3));
return v___x_861_;
}
else
{
lean_object* v_one_862_; lean_object* v_n_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v_one_862_ = lean_unsigned_to_nat(1u);
v_n_863_ = lean_nat_sub(v_a_858_, v_one_862_);
v___x_864_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5));
v___x_865_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(v_n_863_);
lean_dec(v_n_863_);
v___x_866_ = lean_mk_empty_array_with_capacity(v_one_862_);
v___x_867_ = lean_array_push(v___x_866_, v___x_865_);
v___x_868_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_864_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
return v___x_868_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___boxed(lean_object* v_a_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(v_a_869_);
lean_dec(v_a_869_);
return v_res_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat(lean_object* v_n_871_){
_start:
{
lean_object* v___x_872_; uint8_t v___x_873_; 
v___x_872_ = lean_unsigned_to_nat(8u);
v___x_873_ = lean_nat_dec_lt(v___x_872_, v_n_871_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; 
v___x_874_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(v_n_871_);
return v___x_874_;
}
else
{
lean_object* v___x_875_; 
v___x_875_ = lean_box(1);
return v___x_875_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat___boxed(lean_object* v_n_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat(v_n_876_);
lean_dec(v_n_876_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit(lean_object* v_x_878_){
_start:
{
if (lean_obj_tag(v_x_878_) == 0)
{
lean_object* v_val_879_; lean_object* v___x_880_; 
v_val_879_ = lean_ctor_get(v_x_878_, 0);
v___x_880_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat(v_val_879_);
return v___x_880_;
}
else
{
lean_object* v___x_881_; 
v___x_881_ = lean_box(1);
return v___x_881_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit___boxed(lean_object* v_x_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit(v_x_882_);
lean_dec_ref(v_x_882_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(lean_object* v_env_884_, lean_object* v_x_885_, lean_object* v_x_886_){
_start:
{
switch(lean_obj_tag(v_x_885_))
{
case 2:
{
lean_object* v_vs_887_; lean_object* v___x_888_; uint8_t v___x_889_; 
lean_dec_ref(v_env_884_);
v_vs_887_ = lean_ctor_get(v_x_885_, 1);
v___x_888_ = lean_array_get_size(v_vs_887_);
v___x_889_ = lean_nat_dec_lt(v_x_886_, v___x_888_);
if (v___x_889_ == 0)
{
lean_object* v___x_890_; 
v___x_890_ = lean_box(0);
return v___x_890_;
}
else
{
lean_object* v___x_891_; 
v___x_891_ = lean_array_fget_borrowed(v_vs_887_, v_x_886_);
lean_inc(v___x_891_);
return v___x_891_;
}
}
case 3:
{
lean_object* v_vs_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v_vs_892_ = lean_ctor_get(v_x_885_, 0);
v___x_893_ = lean_box(0);
v___x_894_ = l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0(v_env_884_, v_x_886_, v___x_893_, v_vs_892_);
return v___x_894_;
}
default: 
{
lean_dec_ref(v_env_884_);
lean_inc(v_x_885_);
return v_x_885_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0(lean_object* v_env_895_, lean_object* v_x_896_, lean_object* v_x_897_, lean_object* v_x_898_){
_start:
{
if (lean_obj_tag(v_x_898_) == 0)
{
lean_dec_ref(v_env_895_);
return v_x_897_;
}
else
{
lean_object* v_head_899_; lean_object* v_tail_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v_head_899_ = lean_ctor_get(v_x_898_, 0);
v_tail_900_ = lean_ctor_get(v_x_898_, 1);
lean_inc_ref_n(v_env_895_, 2);
v___x_901_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(v_env_895_, v_head_899_, v_x_896_);
v___x_902_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(v_env_895_, v_x_897_, v___x_901_);
v_x_897_ = v___x_902_;
v_x_898_ = v_tail_900_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0___boxed(lean_object* v_env_904_, lean_object* v_x_905_, lean_object* v_x_906_, lean_object* v_x_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0(v_env_904_, v_x_905_, v_x_906_, v_x_907_);
lean_dec(v_x_907_);
lean_dec(v_x_905_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj___boxed(lean_object* v_env_909_, lean_object* v_x_910_, lean_object* v_x_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(v_env_909_, v_x_910_, v_x_911_);
lean_dec(v_x_911_);
lean_dec(v_x_910_);
return v_res_912_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(lean_object* v_x_913_){
_start:
{
if (lean_obj_tag(v_x_913_) == 2)
{
lean_object* v_vs_914_; lean_object* v___x_915_; lean_object* v___x_916_; uint8_t v___x_917_; 
v_vs_914_ = lean_ctor_get(v_x_913_, 1);
v___x_915_ = lean_unsigned_to_nat(0u);
v___x_916_ = lean_array_get_size(v_vs_914_);
v___x_917_ = lean_nat_dec_lt(v___x_915_, v___x_916_);
if (v___x_917_ == 0)
{
uint8_t v___x_918_; 
v___x_918_ = 1;
return v___x_918_;
}
else
{
if (v___x_917_ == 0)
{
return v___x_917_;
}
else
{
size_t v___x_919_; size_t v___x_920_; uint8_t v___x_921_; 
v___x_919_ = ((size_t)0ULL);
v___x_920_ = lean_usize_of_nat(v___x_916_);
v___x_921_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0(v_vs_914_, v___x_919_, v___x_920_);
if (v___x_921_ == 0)
{
return v___x_917_;
}
else
{
uint8_t v___x_922_; 
v___x_922_ = 0;
return v___x_922_;
}
}
}
}
else
{
uint8_t v___x_923_; 
v___x_923_ = 0;
return v___x_923_;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0(lean_object* v_as_924_, size_t v_i_925_, size_t v_stop_926_){
_start:
{
uint8_t v___x_927_; 
v___x_927_ = lean_usize_dec_eq(v_i_925_, v_stop_926_);
if (v___x_927_ == 0)
{
uint8_t v___x_928_; lean_object* v___x_929_; uint8_t v___x_930_; 
v___x_928_ = 1;
v___x_929_ = lean_array_uget_borrowed(v_as_924_, v_i_925_);
v___x_930_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(v___x_929_);
if (v___x_930_ == 0)
{
return v___x_928_;
}
else
{
if (v___x_927_ == 0)
{
size_t v___x_931_; size_t v___x_932_; 
v___x_931_ = ((size_t)1ULL);
v___x_932_ = lean_usize_add(v_i_925_, v___x_931_);
v_i_925_ = v___x_932_;
goto _start;
}
else
{
return v___x_928_;
}
}
}
else
{
uint8_t v___x_934_; 
v___x_934_ = 0;
return v___x_934_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0___boxed(lean_object* v_as_935_, lean_object* v_i_936_, lean_object* v_stop_937_){
_start:
{
size_t v_i_boxed_938_; size_t v_stop_boxed_939_; uint8_t v_res_940_; lean_object* v_r_941_; 
v_i_boxed_938_ = lean_unbox_usize(v_i_936_);
lean_dec(v_i_936_);
v_stop_boxed_939_ = lean_unbox_usize(v_stop_937_);
lean_dec(v_stop_937_);
v_res_940_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0(v_as_935_, v_i_boxed_938_, v_stop_boxed_939_);
lean_dec_ref(v_as_935_);
v_r_941_ = lean_box(v_res_940_);
return v_r_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral___boxed(lean_object* v_x_942_){
_start:
{
uint8_t v_res_943_; lean_object* v_r_944_; 
v_res_943_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(v_x_942_);
lean_dec(v_x_942_);
v_r_944_ = lean_box(v_res_943_);
return v_r_944_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant_spec__0(lean_object* v_msg_945_){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = lean_unsigned_to_nat(0u);
v___x_947_ = lean_panic_fn_borrowed(v___x_946_, v_msg_945_);
return v___x_947_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2(void){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_950_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__1));
v___x_951_ = lean_unsigned_to_nat(9u);
v___x_952_ = lean_unsigned_to_nat(271u);
v___x_953_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__0));
v___x_954_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_955_ = l_mkPanicMessageWithDecl(v___x_954_, v___x_953_, v___x_952_, v___x_951_, v___x_950_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(lean_object* v_a_956_){
_start:
{
if (lean_obj_tag(v_a_956_) == 2)
{
lean_object* v_i_960_; 
v_i_960_ = lean_ctor_get(v_a_956_, 0);
if (lean_obj_tag(v_i_960_) == 1)
{
lean_object* v_pre_961_; 
v_pre_961_ = lean_ctor_get(v_i_960_, 0);
if (lean_obj_tag(v_pre_961_) == 1)
{
lean_object* v_pre_962_; 
v_pre_962_ = lean_ctor_get(v_pre_961_, 0);
if (lean_obj_tag(v_pre_962_) == 0)
{
lean_object* v_vs_963_; lean_object* v_str_964_; lean_object* v_str_965_; lean_object* v___x_966_; uint8_t v___x_967_; 
v_vs_963_ = lean_ctor_get(v_a_956_, 1);
v_str_964_ = lean_ctor_get(v_i_960_, 1);
v_str_965_ = lean_ctor_get(v_pre_961_, 1);
v___x_966_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0));
v___x_967_ = lean_string_dec_eq(v_str_965_, v___x_966_);
if (v___x_967_ == 0)
{
goto v___jp_957_;
}
else
{
lean_object* v___x_968_; uint8_t v___x_969_; 
v___x_968_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1));
v___x_969_ = lean_string_dec_eq(v_str_964_, v___x_968_);
if (v___x_969_ == 0)
{
lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_970_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4));
v___x_971_ = lean_string_dec_eq(v_str_964_, v___x_970_);
if (v___x_971_ == 0)
{
goto v___jp_957_;
}
else
{
lean_object* v___x_972_; lean_object* v___x_973_; uint8_t v___x_974_; 
v___x_972_ = lean_array_get_size(v_vs_963_);
v___x_973_ = lean_unsigned_to_nat(1u);
v___x_974_ = lean_nat_dec_eq(v___x_972_, v___x_973_);
if (v___x_974_ == 0)
{
goto v___jp_957_;
}
else
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_975_ = lean_unsigned_to_nat(0u);
v___x_976_ = lean_array_fget_borrowed(v_vs_963_, v___x_975_);
v___x_977_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(v___x_976_);
v___x_978_ = lean_nat_add(v___x_977_, v___x_973_);
lean_dec(v___x_977_);
return v___x_978_;
}
}
}
else
{
lean_object* v___x_979_; lean_object* v___x_980_; uint8_t v___x_981_; 
v___x_979_ = lean_array_get_size(v_vs_963_);
v___x_980_ = lean_unsigned_to_nat(0u);
v___x_981_ = lean_nat_dec_eq(v___x_979_, v___x_980_);
if (v___x_981_ == 0)
{
goto v___jp_957_;
}
else
{
return v___x_980_;
}
}
}
}
else
{
goto v___jp_957_;
}
}
else
{
goto v___jp_957_;
}
}
else
{
goto v___jp_957_;
}
}
else
{
goto v___jp_957_;
}
v___jp_957_:
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2);
v___x_959_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant_spec__0(v___x_958_);
return v___x_959_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___boxed(lean_object* v_a_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(v_a_982_);
lean_dec(v_a_982_);
return v_res_983_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_984_; 
v___x_984_ = l_instMonadEIO(lean_box(0));
return v___x_984_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3(void){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = l_Array_instInhabited(lean_box(0));
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(lean_object* v_msg_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v_toApplicative_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1031_; 
v___x_994_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0);
v___x_995_ = l_StateRefT_x27_instMonad___redArg(v___x_994_);
v_toApplicative_996_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1031_ == 0)
{
lean_object* v_unused_1032_; 
v_unused_1032_ = lean_ctor_get(v___x_995_, 1);
lean_dec(v_unused_1032_);
v___x_998_ = v___x_995_;
v_isShared_999_ = v_isSharedCheck_1031_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_toApplicative_996_);
lean_dec(v___x_995_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1031_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v_toFunctor_1000_; lean_object* v_toSeq_1001_; lean_object* v_toSeqLeft_1002_; lean_object* v_toSeqRight_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1029_; 
v_toFunctor_1000_ = lean_ctor_get(v_toApplicative_996_, 0);
v_toSeq_1001_ = lean_ctor_get(v_toApplicative_996_, 2);
v_toSeqLeft_1002_ = lean_ctor_get(v_toApplicative_996_, 3);
v_toSeqRight_1003_ = lean_ctor_get(v_toApplicative_996_, 4);
v_isSharedCheck_1029_ = !lean_is_exclusive(v_toApplicative_996_);
if (v_isSharedCheck_1029_ == 0)
{
lean_object* v_unused_1030_; 
v_unused_1030_ = lean_ctor_get(v_toApplicative_996_, 1);
lean_dec(v_unused_1030_);
v___x_1005_ = v_toApplicative_996_;
v_isShared_1006_ = v_isSharedCheck_1029_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_toSeqRight_1003_);
lean_inc(v_toSeqLeft_1002_);
lean_inc(v_toSeq_1001_);
lean_inc(v_toFunctor_1000_);
lean_dec(v_toApplicative_996_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1029_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___f_1007_; lean_object* v___f_1008_; lean_object* v___f_1009_; lean_object* v___f_1010_; lean_object* v___x_1011_; lean_object* v___f_1012_; lean_object* v___f_1013_; lean_object* v___f_1014_; lean_object* v___x_1016_; 
v___f_1007_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__1));
v___f_1008_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1000_);
v___f_1009_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1009_, 0, v_toFunctor_1000_);
v___f_1010_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1010_, 0, v_toFunctor_1000_);
v___x_1011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___f_1009_);
lean_ctor_set(v___x_1011_, 1, v___f_1010_);
v___f_1012_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1012_, 0, v_toSeqRight_1003_);
v___f_1013_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1013_, 0, v_toSeqLeft_1002_);
v___f_1014_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1014_, 0, v_toSeq_1001_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 4, v___f_1012_);
lean_ctor_set(v___x_1005_, 3, v___f_1013_);
lean_ctor_set(v___x_1005_, 2, v___f_1014_);
lean_ctor_set(v___x_1005_, 1, v___f_1007_);
lean_ctor_set(v___x_1005_, 0, v___x_1011_);
v___x_1016_ = v___x_1005_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1028_, 1, v___f_1007_);
lean_ctor_set(v_reuseFailAlloc_1028_, 2, v___f_1014_);
lean_ctor_set(v_reuseFailAlloc_1028_, 3, v___f_1013_);
lean_ctor_set(v_reuseFailAlloc_1028_, 4, v___f_1012_);
v___x_1016_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1018_; 
if (v_isShared_999_ == 0)
{
lean_ctor_set(v___x_998_, 1, v___f_1008_);
lean_ctor_set(v___x_998_, 0, v___x_1016_);
v___x_1018_ = v___x_998_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v___x_1016_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v___f_1008_);
v___x_1018_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___f_1024_; lean_object* v___x_1978__overap_1025_; lean_object* v___x_1026_; 
v___x_1019_ = l_StateRefT_x27_instMonad___redArg(v___x_1018_);
v___x_1020_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3, &l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3);
v___x_1021_ = lean_box(0);
v___x_1022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1020_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = l_instInhabitedOfMonad___redArg(v___x_1019_, v___x_1022_);
v___f_1024_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1024_, 0, v___x_1023_);
v___x_1978__overap_1025_ = lean_panic_fn_borrowed(v___f_1024_, v_msg_988_);
lean_dec_ref(v___f_1024_);
lean_inc(v___y_992_);
lean_inc_ref(v___y_991_);
lean_inc(v___y_990_);
lean_inc_ref(v___y_989_);
v___x_1026_ = lean_apply_5(v___x_1978__overap_1025_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, lean_box(0));
return v___x_1026_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___boxed(lean_object* v_msg_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(v_msg_1033_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(lean_object* v_as_1040_, size_t v_i_1041_, size_t v_stop_1042_, lean_object* v_b_1043_){
_start:
{
uint8_t v___x_1044_; 
v___x_1044_ = lean_usize_dec_eq(v_i_1041_, v_stop_1042_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; lean_object* v_fst_1046_; lean_object* v_snd_1047_; lean_object* v_fst_1048_; lean_object* v_snd_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1062_; 
v___x_1045_ = lean_array_uget_borrowed(v_as_1040_, v_i_1041_);
v_fst_1046_ = lean_ctor_get(v___x_1045_, 0);
v_snd_1047_ = lean_ctor_get(v___x_1045_, 1);
v_fst_1048_ = lean_ctor_get(v_b_1043_, 0);
v_snd_1049_ = lean_ctor_get(v_b_1043_, 1);
v_isSharedCheck_1062_ = !lean_is_exclusive(v_b_1043_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1051_ = v_b_1043_;
v_isShared_1052_ = v_isSharedCheck_1062_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_snd_1049_);
lean_inc(v_fst_1048_);
lean_dec(v_b_1043_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1062_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1057_; 
v___x_1053_ = l_Array_append___redArg(v_fst_1048_, v_fst_1046_);
lean_inc(v_snd_1047_);
v___x_1054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1054_, 0, v_snd_1047_);
v___x_1055_ = lean_array_push(v_snd_1049_, v___x_1054_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 1, v___x_1055_);
lean_ctor_set(v___x_1051_, 0, v___x_1053_);
v___x_1057_ = v___x_1051_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1053_);
lean_ctor_set(v_reuseFailAlloc_1061_, 1, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
size_t v___x_1058_; size_t v___x_1059_; 
v___x_1058_ = ((size_t)1ULL);
v___x_1059_ = lean_usize_add(v_i_1041_, v___x_1058_);
v_i_1041_ = v___x_1059_;
v_b_1043_ = v___x_1057_;
goto _start;
}
}
}
else
{
return v_b_1043_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2___boxed(lean_object* v_as_1063_, lean_object* v_i_1064_, lean_object* v_stop_1065_, lean_object* v_b_1066_){
_start:
{
size_t v_i_boxed_1067_; size_t v_stop_boxed_1068_; lean_object* v_res_1069_; 
v_i_boxed_1067_ = lean_unbox_usize(v_i_1064_);
lean_dec(v_i_1064_);
v_stop_boxed_1068_ = lean_unbox_usize(v_stop_1065_);
lean_dec(v_stop_1065_);
v_res_1069_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(v_as_1063_, v_i_boxed_1067_, v_stop_boxed_1068_, v_b_1066_);
lean_dec_ref(v_as_1063_);
return v_res_1069_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3(void){
_start:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1074_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_1075_ = lean_unsigned_to_nat(65u);
v___x_1076_ = lean_unsigned_to_nat(258u);
v___x_1077_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2));
v___x_1078_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_1079_ = l_mkPanicMessageWithDecl(v___x_1078_, v___x_1077_, v___x_1076_, v___x_1075_, v___x_1074_);
return v___x_1079_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1086_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_1087_ = lean_unsigned_to_nat(9u);
v___x_1088_ = lean_unsigned_to_nat(266u);
v___x_1089_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2));
v___x_1090_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_1091_ = l_mkPanicMessageWithDecl(v___x_1090_, v___x_1089_, v___x_1088_, v___x_1087_, v___x_1086_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_){
_start:
{
lean_object* v___y_1099_; lean_object* v___y_1100_; lean_object* v___y_1101_; lean_object* v___y_1102_; lean_object* v___y_1103_; lean_object* v_fst_1104_; lean_object* v_snd_1105_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; lean_object* v___y_1144_; 
if (lean_obj_tag(v_a_1092_) == 2)
{
lean_object* v_i_1147_; lean_object* v_vs_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1269_; 
v_i_1147_ = lean_ctor_get(v_a_1092_, 0);
v_vs_1148_ = lean_ctor_get(v_a_1092_, 1);
v_isSharedCheck_1269_ = !lean_is_exclusive(v_a_1092_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1150_ = v_a_1092_;
v_isShared_1151_ = v_isSharedCheck_1269_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_vs_1148_);
lean_inc(v_i_1147_);
lean_dec(v_a_1092_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1269_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v_ctorName_1153_; lean_object* v___y_1154_; lean_object* v___y_1155_; lean_object* v___y_1156_; lean_object* v___y_1157_; 
if (lean_obj_tag(v_i_1147_) == 1)
{
lean_object* v_pre_1191_; 
v_pre_1191_ = lean_ctor_get(v_i_1147_, 0);
if (lean_obj_tag(v_pre_1191_) == 1)
{
lean_object* v_pre_1192_; 
v_pre_1192_ = lean_ctor_get(v_pre_1191_, 0);
if (lean_obj_tag(v_pre_1192_) == 0)
{
lean_object* v_str_1193_; lean_object* v_str_1194_; lean_object* v___x_1195_; uint8_t v___x_1196_; 
v_str_1193_ = lean_ctor_get(v_i_1147_, 1);
v_str_1194_ = lean_ctor_get(v_pre_1191_, 1);
v___x_1195_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0));
v___x_1196_ = lean_string_dec_eq(v_str_1194_, v___x_1195_);
if (v___x_1196_ == 0)
{
v_ctorName_1153_ = v_i_1147_;
v___y_1154_ = v_a_1093_;
v___y_1155_ = v_a_1094_;
v___y_1156_ = v_a_1095_;
v___y_1157_ = v_a_1096_;
goto v___jp_1152_;
}
else
{
lean_object* v___x_1197_; uint8_t v___x_1198_; 
lean_inc(v_pre_1192_);
lean_inc_ref(v_str_1193_);
lean_dec_ref(v_i_1147_);
v___x_1197_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1));
v___x_1198_ = lean_string_dec_eq(v_str_1193_, v___x_1197_);
if (v___x_1198_ == 0)
{
lean_object* v___x_1199_; uint8_t v___x_1200_; 
v___x_1199_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4));
v___x_1200_ = lean_string_dec_eq(v_str_1193_, v___x_1199_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = l_Lean_Name_str___override(v_pre_1192_, v___x_1195_);
v___x_1202_ = l_Lean_Name_str___override(v___x_1201_, v_str_1193_);
v_ctorName_1153_ = v___x_1202_;
v___y_1154_ = v_a_1093_;
v___y_1155_ = v_a_1094_;
v___y_1156_ = v_a_1095_;
v___y_1157_ = v_a_1096_;
goto v___jp_1152_;
}
else
{
lean_object* v___x_1203_; lean_object* v___x_1204_; uint8_t v___x_1205_; 
lean_dec_ref(v_str_1193_);
v___x_1203_ = lean_array_get_size(v_vs_1148_);
v___x_1204_ = lean_unsigned_to_nat(1u);
v___x_1205_ = lean_nat_dec_eq(v___x_1203_, v___x_1204_);
if (v___x_1205_ == 0)
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1206_ = l_Lean_Name_str___override(v_pre_1192_, v___x_1195_);
v___x_1207_ = l_Lean_Name_str___override(v___x_1206_, v___x_1199_);
v_ctorName_1153_ = v___x_1207_;
v___y_1154_ = v_a_1093_;
v___y_1155_ = v_a_1094_;
v___y_1156_ = v_a_1095_;
v___y_1157_ = v_a_1096_;
goto v___jp_1152_;
}
else
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v_val_1211_; uint8_t v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
lean_del_object(v___x_1150_);
v___x_1208_ = lean_unsigned_to_nat(0u);
v___x_1209_ = lean_array_fget(v_vs_1148_, v___x_1208_);
lean_dec_ref(v_vs_1148_);
v___x_1210_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(v___x_1209_);
lean_dec(v___x_1209_);
v_val_1211_ = lean_nat_add(v___x_1210_, v___x_1204_);
lean_dec(v___x_1210_);
v___x_1212_ = 0;
v___x_1213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1213_, 0, v_val_1211_);
v___x_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
v___x_1215_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1));
v___x_1216_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1212_, v___x_1214_, v___x_1215_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1229_; 
v_a_1217_ = lean_ctor_get(v___x_1216_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1219_ = v___x_1216_;
v_isShared_1220_ = v_isSharedCheck_1229_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1216_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1229_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v_fvarId_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1227_; 
v_fvarId_1221_ = lean_ctor_get(v_a_1217_, 0);
lean_inc(v_fvarId_1221_);
v___x_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1222_, 0, v_a_1217_);
v___x_1223_ = lean_mk_empty_array_with_capacity(v___x_1204_);
v___x_1224_ = lean_array_push(v___x_1223_, v___x_1222_);
v___x_1225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1224_);
lean_ctor_set(v___x_1225_, 1, v_fvarId_1221_);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 0, v___x_1225_);
v___x_1227_ = v___x_1219_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v___x_1225_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
else
{
lean_object* v_a_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1237_; 
v_a_1230_ = lean_ctor_get(v___x_1216_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1232_ = v___x_1216_;
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_a_1230_);
lean_dec(v___x_1216_);
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
}
else
{
lean_object* v___x_1238_; lean_object* v___x_1239_; uint8_t v___x_1240_; 
lean_dec_ref(v_str_1193_);
v___x_1238_ = lean_array_get_size(v_vs_1148_);
v___x_1239_ = lean_unsigned_to_nat(0u);
v___x_1240_ = lean_nat_dec_eq(v___x_1238_, v___x_1239_);
if (v___x_1240_ == 0)
{
lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1241_ = l_Lean_Name_str___override(v_pre_1192_, v___x_1195_);
v___x_1242_ = l_Lean_Name_str___override(v___x_1241_, v___x_1197_);
v_ctorName_1153_ = v___x_1242_;
v___y_1154_ = v_a_1093_;
v___y_1155_ = v_a_1094_;
v___y_1156_ = v_a_1095_;
v___y_1157_ = v_a_1096_;
goto v___jp_1152_;
}
else
{
uint8_t v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
lean_del_object(v___x_1150_);
lean_dec_ref(v_vs_1148_);
v___x_1243_ = 0;
v___x_1244_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__6));
v___x_1245_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1));
v___x_1246_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1243_, v___x_1244_, v___x_1245_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1260_; 
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1249_ = v___x_1246_;
v_isShared_1250_ = v_isSharedCheck_1260_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1246_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1260_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v_fvarId_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1258_; 
v_fvarId_1251_ = lean_ctor_get(v_a_1247_, 0);
lean_inc(v_fvarId_1251_);
v___x_1252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1252_, 0, v_a_1247_);
v___x_1253_ = lean_unsigned_to_nat(1u);
v___x_1254_ = lean_mk_empty_array_with_capacity(v___x_1253_);
v___x_1255_ = lean_array_push(v___x_1254_, v___x_1252_);
v___x_1256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
lean_ctor_set(v___x_1256_, 1, v_fvarId_1251_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 0, v___x_1256_);
v___x_1258_ = v___x_1249_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v___x_1256_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1268_; 
v_a_1261_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1263_ = v___x_1246_;
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1246_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1266_; 
if (v_isShared_1264_ == 0)
{
v___x_1266_ = v___x_1263_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_a_1261_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
}
}
}
else
{
v_ctorName_1153_ = v_i_1147_;
v___y_1154_ = v_a_1093_;
v___y_1155_ = v_a_1094_;
v___y_1156_ = v_a_1095_;
v___y_1157_ = v_a_1096_;
goto v___jp_1152_;
}
}
else
{
v_ctorName_1153_ = v_i_1147_;
v___y_1154_ = v_a_1093_;
v___y_1155_ = v_a_1094_;
v___y_1156_ = v_a_1095_;
v___y_1157_ = v_a_1096_;
goto v___jp_1152_;
}
}
else
{
v_ctorName_1153_ = v_i_1147_;
v___y_1154_ = v_a_1093_;
v___y_1155_ = v_a_1094_;
v___y_1156_ = v_a_1095_;
v___y_1157_ = v_a_1096_;
goto v___jp_1152_;
}
v___jp_1152_:
{
lean_object* v___x_1158_; lean_object* v_env_1159_; uint8_t v___x_1160_; lean_object* v___x_1161_; 
v___x_1158_ = lean_st_ref_get(v___y_1157_);
v_env_1159_ = lean_ctor_get(v___x_1158_, 0);
lean_inc_ref(v_env_1159_);
lean_dec(v___x_1158_);
v___x_1160_ = 0;
lean_inc(v_ctorName_1153_);
v___x_1161_ = l_Lean_Environment_find_x3f(v_env_1159_, v_ctorName_1153_, v___x_1160_);
if (lean_obj_tag(v___x_1161_) == 1)
{
lean_object* v_val_1162_; 
v_val_1162_ = lean_ctor_get(v___x_1161_, 0);
lean_inc(v_val_1162_);
lean_dec_ref(v___x_1161_);
if (lean_obj_tag(v_val_1162_) == 6)
{
lean_object* v_val_1163_; size_t v_sz_1164_; size_t v___x_1165_; lean_object* v___x_1166_; 
v_val_1163_ = lean_ctor_get(v_val_1162_, 0);
lean_inc_ref(v_val_1163_);
lean_dec_ref(v_val_1162_);
v_sz_1164_ = lean_array_size(v_vs_1148_);
v___x_1165_ = ((size_t)0ULL);
v___x_1166_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1(v_sz_1164_, v___x_1165_, v_vs_1148_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1166_) == 0)
{
lean_object* v_a_1167_; lean_object* v_numParams_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; uint8_t v___x_1174_; 
v_a_1167_ = lean_ctor_get(v___x_1166_, 0);
lean_inc(v_a_1167_);
lean_dec_ref(v___x_1166_);
v_numParams_1168_ = lean_ctor_get(v_val_1163_, 3);
lean_inc(v_numParams_1168_);
lean_dec_ref(v_val_1163_);
v___x_1169_ = lean_unsigned_to_nat(0u);
v___x_1170_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__4));
v___x_1171_ = lean_box(0);
v___x_1172_ = lean_mk_array(v_numParams_1168_, v___x_1171_);
v___x_1173_ = lean_array_get_size(v_a_1167_);
v___x_1174_ = lean_nat_dec_lt(v___x_1169_, v___x_1173_);
if (v___x_1174_ == 0)
{
lean_dec(v_a_1167_);
lean_del_object(v___x_1150_);
v___y_1099_ = v___y_1156_;
v___y_1100_ = v___y_1157_;
v___y_1101_ = v___y_1154_;
v___y_1102_ = v___y_1155_;
v___y_1103_ = v_ctorName_1153_;
v_fst_1104_ = v___x_1170_;
v_snd_1105_ = v___x_1172_;
goto v___jp_1098_;
}
else
{
lean_object* v___x_1176_; 
lean_inc_ref(v___x_1172_);
if (v_isShared_1151_ == 0)
{
lean_ctor_set_tag(v___x_1150_, 0);
lean_ctor_set(v___x_1150_, 1, v___x_1172_);
lean_ctor_set(v___x_1150_, 0, v___x_1170_);
v___x_1176_ = v___x_1150_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v___x_1170_);
lean_ctor_set(v_reuseFailAlloc_1182_, 1, v___x_1172_);
v___x_1176_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
uint8_t v___x_1177_; 
v___x_1177_ = lean_nat_dec_le(v___x_1173_, v___x_1173_);
if (v___x_1177_ == 0)
{
if (v___x_1174_ == 0)
{
lean_dec_ref(v___x_1176_);
lean_dec(v_a_1167_);
v___y_1099_ = v___y_1156_;
v___y_1100_ = v___y_1157_;
v___y_1101_ = v___y_1154_;
v___y_1102_ = v___y_1155_;
v___y_1103_ = v_ctorName_1153_;
v_fst_1104_ = v___x_1170_;
v_snd_1105_ = v___x_1172_;
goto v___jp_1098_;
}
else
{
size_t v___x_1178_; lean_object* v___x_1179_; 
lean_dec_ref(v___x_1172_);
v___x_1178_ = lean_usize_of_nat(v___x_1173_);
v___x_1179_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(v_a_1167_, v___x_1165_, v___x_1178_, v___x_1176_);
lean_dec(v_a_1167_);
v___y_1132_ = v___y_1156_;
v___y_1133_ = v___y_1157_;
v___y_1134_ = v___y_1154_;
v___y_1135_ = v___y_1155_;
v___y_1136_ = v_ctorName_1153_;
v___y_1137_ = v___x_1179_;
goto v___jp_1131_;
}
}
else
{
size_t v___x_1180_; lean_object* v___x_1181_; 
lean_dec_ref(v___x_1172_);
v___x_1180_ = lean_usize_of_nat(v___x_1173_);
v___x_1181_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(v_a_1167_, v___x_1165_, v___x_1180_, v___x_1176_);
lean_dec(v_a_1167_);
v___y_1132_ = v___y_1156_;
v___y_1133_ = v___y_1157_;
v___y_1134_ = v___y_1154_;
v___y_1135_ = v___y_1155_;
v___y_1136_ = v_ctorName_1153_;
v___y_1137_ = v___x_1181_;
goto v___jp_1131_;
}
}
}
}
else
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
lean_dec_ref(v_val_1163_);
lean_dec(v_ctorName_1153_);
lean_del_object(v___x_1150_);
v_a_1183_ = lean_ctor_get(v___x_1166_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1166_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___x_1166_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1166_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1188_; 
if (v_isShared_1186_ == 0)
{
v___x_1188_ = v___x_1185_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1183_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
}
else
{
lean_dec(v_val_1162_);
lean_dec(v_ctorName_1153_);
lean_del_object(v___x_1150_);
lean_dec_ref(v_vs_1148_);
v___y_1141_ = v___y_1154_;
v___y_1142_ = v___y_1155_;
v___y_1143_ = v___y_1156_;
v___y_1144_ = v___y_1157_;
goto v___jp_1140_;
}
}
else
{
lean_dec(v___x_1161_);
lean_dec(v_ctorName_1153_);
lean_del_object(v___x_1150_);
lean_dec_ref(v_vs_1148_);
v___y_1141_ = v___y_1154_;
v___y_1142_ = v___y_1155_;
v___y_1143_ = v___y_1156_;
v___y_1144_ = v___y_1157_;
goto v___jp_1140_;
}
}
}
}
else
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
lean_dec(v_a_1092_);
v___x_1270_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7);
v___x_1271_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(v___x_1270_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
return v___x_1271_;
}
v___jp_1098_:
{
uint8_t v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1106_ = 0;
v___x_1107_ = lean_box(0);
v___x_1108_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1108_, 0, v___y_1103_);
lean_ctor_set(v___x_1108_, 1, v___x_1107_);
lean_ctor_set(v___x_1108_, 2, v_snd_1105_);
v___x_1109_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1));
v___x_1110_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1106_, v___x_1108_, v___x_1109_, v___y_1101_, v___y_1102_, v___y_1099_, v___y_1100_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1122_; 
v_a_1111_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1113_ = v___x_1110_;
v_isShared_1114_ = v_isSharedCheck_1122_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1110_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1122_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v_fvarId_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1120_; 
v_fvarId_1115_ = lean_ctor_get(v_a_1111_, 0);
lean_inc(v_fvarId_1115_);
v___x_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1116_, 0, v_a_1111_);
v___x_1117_ = lean_array_push(v_fst_1104_, v___x_1116_);
v___x_1118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1117_);
lean_ctor_set(v___x_1118_, 1, v_fvarId_1115_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 0, v___x_1118_);
v___x_1120_ = v___x_1113_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v___x_1118_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
else
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1130_; 
lean_dec_ref(v_fst_1104_);
v_a_1123_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1125_ = v___x_1110_;
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1110_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1128_; 
if (v_isShared_1126_ == 0)
{
v___x_1128_ = v___x_1125_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_a_1123_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
}
v___jp_1131_:
{
lean_object* v_fst_1138_; lean_object* v_snd_1139_; 
v_fst_1138_ = lean_ctor_get(v___y_1137_, 0);
lean_inc(v_fst_1138_);
v_snd_1139_ = lean_ctor_get(v___y_1137_, 1);
lean_inc(v_snd_1139_);
lean_dec_ref(v___y_1137_);
v___y_1099_ = v___y_1132_;
v___y_1100_ = v___y_1133_;
v___y_1101_ = v___y_1134_;
v___y_1102_ = v___y_1135_;
v___y_1103_ = v___y_1136_;
v_fst_1104_ = v_fst_1138_;
v_snd_1105_ = v_snd_1139_;
goto v___jp_1098_;
}
v___jp_1140_:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1145_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3);
v___x_1146_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(v___x_1145_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_);
return v___x_1146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1(size_t v_sz_1272_, size_t v_i_1273_, lean_object* v_bs_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_){
_start:
{
uint8_t v___x_1280_; 
v___x_1280_ = lean_usize_dec_lt(v_i_1273_, v_sz_1272_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; 
v___x_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1281_, 0, v_bs_1274_);
return v___x_1281_;
}
else
{
lean_object* v_v_1282_; lean_object* v___x_1283_; 
v_v_1282_ = lean_array_uget_borrowed(v_bs_1274_, v_i_1273_);
lean_inc(v_v_1282_);
v___x_1283_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(v_v_1282_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v_a_1284_; lean_object* v___x_1285_; lean_object* v_bs_x27_1286_; size_t v___x_1287_; size_t v___x_1288_; lean_object* v___x_1289_; 
v_a_1284_ = lean_ctor_get(v___x_1283_, 0);
lean_inc(v_a_1284_);
lean_dec_ref(v___x_1283_);
v___x_1285_ = lean_unsigned_to_nat(0u);
v_bs_x27_1286_ = lean_array_uset(v_bs_1274_, v_i_1273_, v___x_1285_);
v___x_1287_ = ((size_t)1ULL);
v___x_1288_ = lean_usize_add(v_i_1273_, v___x_1287_);
v___x_1289_ = lean_array_uset(v_bs_x27_1286_, v_i_1273_, v_a_1284_);
v_i_1273_ = v___x_1288_;
v_bs_1274_ = v___x_1289_;
goto _start;
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
lean_dec_ref(v_bs_1274_);
v_a_1291_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1283_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1283_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1291_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1___boxed(lean_object* v_sz_1299_, lean_object* v_i_1300_, lean_object* v_bs_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_){
_start:
{
size_t v_sz_boxed_1307_; size_t v_i_boxed_1308_; lean_object* v_res_1309_; 
v_sz_boxed_1307_ = lean_unbox_usize(v_sz_1299_);
lean_dec(v_sz_1299_);
v_i_boxed_1308_ = lean_unbox_usize(v_i_1300_);
lean_dec(v_i_1300_);
v_res_1309_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1(v_sz_boxed_1307_, v_i_boxed_1308_, v_bs_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
lean_dec(v___y_1305_);
lean_dec_ref(v___y_1304_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___boxed(lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_){
_start:
{
lean_object* v_res_1316_; 
v_res_1316_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_, v_a_1314_);
lean_dec(v_a_1314_);
lean_dec_ref(v_a_1313_);
lean_dec(v_a_1312_);
lean_dec_ref(v_a_1311_);
return v_res_1316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral(lean_object* v_v_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_){
_start:
{
uint8_t v___x_1323_; 
v___x_1323_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(v_v_1317_);
if (v___x_1323_ == 0)
{
lean_object* v___x_1324_; lean_object* v___x_1325_; 
lean_dec(v_v_1317_);
v___x_1324_ = lean_box(0);
v___x_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
return v___x_1325_;
}
else
{
lean_object* v___x_1326_; 
v___x_1326_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(v_v_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1335_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1329_ = v___x_1326_;
v_isShared_1330_ = v_isSharedCheck_1335_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1326_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1335_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1331_; lean_object* v___x_1333_; 
v___x_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1331_, 0, v_a_1327_);
if (v_isShared_1330_ == 0)
{
lean_ctor_set(v___x_1329_, 0, v___x_1331_);
v___x_1333_ = v___x_1329_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1331_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
else
{
lean_object* v_a_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1343_; 
v_a_1336_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1343_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1338_ = v___x_1326_;
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_a_1336_);
lean_dec(v___x_1326_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1341_; 
if (v_isShared_1339_ == 0)
{
v___x_1341_ = v___x_1338_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_a_1336_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral___boxed(lean_object* v_v_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_){
_start:
{
lean_object* v_res_1350_; 
v_res_1350_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral(v_v_1344_, v_a_1345_, v_a_1346_, v_a_1347_, v_a_1348_);
lean_dec(v_a_1348_);
lean_dec_ref(v_a_1347_);
lean_dec(v_a_1346_);
lean_dec_ref(v_a_1345_);
return v_res_1350_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt(lean_object* v_a_1351_, lean_object* v_b_1352_){
_start:
{
lean_object* v_fst_1353_; lean_object* v_fst_1354_; uint8_t v___x_1355_; 
v_fst_1353_ = lean_ctor_get(v_a_1351_, 0);
v_fst_1354_ = lean_ctor_get(v_b_1352_, 0);
v___x_1355_ = l_Lean_Name_quickLt(v_fst_1353_, v_fst_1354_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt___boxed(lean_object* v_a_1356_, lean_object* v_b_1357_){
_start:
{
uint8_t v_res_1358_; lean_object* v_r_1359_; 
v_res_1358_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt(v_a_1356_, v_b_1357_);
lean_dec_ref(v_b_1357_);
lean_dec_ref(v_a_1356_);
v_r_1359_ = lean_box(v_res_1358_);
return v_r_1359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f(lean_object* v_entries_1362_, lean_object* v_fid_1363_){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; uint8_t v___x_1366_; 
v___x_1364_ = lean_unsigned_to_nat(0u);
v___x_1365_ = lean_array_get_size(v_entries_1362_);
v___x_1366_ = lean_nat_dec_lt(v___x_1364_, v___x_1365_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; 
lean_dec(v_fid_1363_);
v___x_1367_ = lean_box(0);
return v___x_1367_;
}
else
{
lean_object* v___x_1368_; lean_object* v___x_1369_; uint8_t v___x_1370_; 
v___x_1368_ = lean_unsigned_to_nat(1u);
v___x_1369_ = lean_nat_sub(v___x_1365_, v___x_1368_);
v___x_1370_ = lean_nat_dec_le(v___x_1364_, v___x_1369_);
if (v___x_1370_ == 0)
{
lean_object* v___x_1371_; 
lean_dec(v___x_1369_);
lean_dec(v_fid_1363_);
v___x_1371_ = lean_box(0);
return v___x_1371_;
}
else
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1372_ = lean_box(0);
v___x_1373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1373_, 0, v_fid_1363_);
lean_ctor_set(v___x_1373_, 1, v___x_1372_);
v___x_1374_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__0));
v___x_1375_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__1));
v___x_1376_ = l_Array_binSearchAux___redArg(v___x_1374_, v___x_1375_, v_entries_1362_, v___x_1373_, v___x_1364_, v___x_1369_);
if (lean_obj_tag(v___x_1376_) == 0)
{
lean_object* v___x_1377_; 
v___x_1377_ = lean_box(0);
return v___x_1377_;
}
else
{
lean_object* v_val_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1386_; 
v_val_1378_ = lean_ctor_get(v___x_1376_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1380_ = v___x_1376_;
v_isShared_1381_ = v_isSharedCheck_1386_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_val_1378_);
lean_dec(v___x_1376_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1386_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v_snd_1382_; lean_object* v___x_1384_; 
v_snd_1382_ = lean_ctor_get(v_val_1378_, 1);
lean_inc(v_snd_1382_);
lean_dec(v_val_1378_);
if (v_isShared_1381_ == 0)
{
lean_ctor_set(v___x_1380_, 0, v_snd_1382_);
v___x_1384_ = v___x_1380_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_snd_1382_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___boxed(lean_object* v_entries_1387_, lean_object* v_fid_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f(v_entries_1387_, v_fid_1388_);
lean_dec_ref(v_entries_1387_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_es_1390_){
_start:
{
lean_object* v___x_1391_; 
v___x_1391_ = lean_array_mk(v_es_1390_);
return v___x_1391_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1392_, lean_object* v_i_1393_, lean_object* v_k_1394_){
_start:
{
lean_object* v___x_1395_; uint8_t v___x_1396_; 
v___x_1395_ = lean_array_get_size(v_keys_1392_);
v___x_1396_ = lean_nat_dec_lt(v_i_1393_, v___x_1395_);
if (v___x_1396_ == 0)
{
lean_dec(v_i_1393_);
return v___x_1396_;
}
else
{
lean_object* v_k_x27_1397_; uint8_t v___x_1398_; 
v_k_x27_1397_ = lean_array_fget_borrowed(v_keys_1392_, v_i_1393_);
v___x_1398_ = lean_name_eq(v_k_1394_, v_k_x27_1397_);
if (v___x_1398_ == 0)
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1399_ = lean_unsigned_to_nat(1u);
v___x_1400_ = lean_nat_add(v_i_1393_, v___x_1399_);
lean_dec(v_i_1393_);
v_i_1393_ = v___x_1400_;
goto _start;
}
else
{
lean_dec(v_i_1393_);
return v___x_1398_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1402_, lean_object* v_i_1403_, lean_object* v_k_1404_){
_start:
{
uint8_t v_res_1405_; lean_object* v_r_1406_; 
v_res_1405_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_keys_1402_, v_i_1403_, v_k_1404_);
lean_dec(v_k_1404_);
lean_dec_ref(v_keys_1402_);
v_r_1406_ = lean_box(v_res_1405_);
return v_r_1406_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_1407_; size_t v___x_1408_; size_t v___x_1409_; 
v___x_1407_ = ((size_t)5ULL);
v___x_1408_ = ((size_t)1ULL);
v___x_1409_ = lean_usize_shift_left(v___x_1408_, v___x_1407_);
return v___x_1409_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1410_; size_t v___x_1411_; size_t v___x_1412_; 
v___x_1410_ = ((size_t)1ULL);
v___x_1411_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0);
v___x_1412_ = lean_usize_sub(v___x_1411_, v___x_1410_);
return v___x_1412_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_x_1413_, size_t v_x_1414_, lean_object* v_x_1415_){
_start:
{
if (lean_obj_tag(v_x_1413_) == 0)
{
lean_object* v_es_1416_; lean_object* v___x_1417_; size_t v___x_1418_; size_t v___x_1419_; size_t v___x_1420_; lean_object* v_j_1421_; lean_object* v___x_1422_; 
v_es_1416_ = lean_ctor_get(v_x_1413_, 0);
lean_inc_ref(v_es_1416_);
lean_dec_ref(v_x_1413_);
v___x_1417_ = lean_box(2);
v___x_1418_ = ((size_t)5ULL);
v___x_1419_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_1420_ = lean_usize_land(v_x_1414_, v___x_1419_);
v_j_1421_ = lean_usize_to_nat(v___x_1420_);
v___x_1422_ = lean_array_get(v___x_1417_, v_es_1416_, v_j_1421_);
lean_dec(v_j_1421_);
lean_dec_ref(v_es_1416_);
switch(lean_obj_tag(v___x_1422_))
{
case 0:
{
lean_object* v_key_1423_; uint8_t v___x_1424_; 
v_key_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_key_1423_);
lean_dec_ref(v___x_1422_);
v___x_1424_ = lean_name_eq(v_x_1415_, v_key_1423_);
lean_dec(v_key_1423_);
return v___x_1424_;
}
case 1:
{
lean_object* v_node_1425_; size_t v___x_1426_; 
v_node_1425_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_node_1425_);
lean_dec_ref(v___x_1422_);
v___x_1426_ = lean_usize_shift_right(v_x_1414_, v___x_1418_);
v_x_1413_ = v_node_1425_;
v_x_1414_ = v___x_1426_;
goto _start;
}
default: 
{
uint8_t v___x_1428_; 
v___x_1428_ = 0;
return v___x_1428_;
}
}
}
else
{
lean_object* v_ks_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; 
v_ks_1429_ = lean_ctor_get(v_x_1413_, 0);
lean_inc_ref(v_ks_1429_);
lean_dec_ref(v_x_1413_);
v___x_1430_ = lean_unsigned_to_nat(0u);
v___x_1431_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_ks_1429_, v___x_1430_, v_x_1415_);
lean_dec_ref(v_ks_1429_);
return v___x_1431_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_x_1432_, lean_object* v_x_1433_, lean_object* v_x_1434_){
_start:
{
size_t v_x_1078__boxed_1435_; uint8_t v_res_1436_; lean_object* v_r_1437_; 
v_x_1078__boxed_1435_ = lean_unbox_usize(v_x_1433_);
lean_dec(v_x_1433_);
v_res_1436_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_1432_, v_x_1078__boxed_1435_, v_x_1434_);
lean_dec(v_x_1434_);
v_r_1437_ = lean_box(v_res_1436_);
return v_r_1437_;
}
}
static uint64_t _init_l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1438_; uint64_t v___x_1439_; 
v___x_1438_ = lean_unsigned_to_nat(1723u);
v___x_1439_ = lean_uint64_of_nat(v___x_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(lean_object* v_x_1440_, lean_object* v_x_1441_){
_start:
{
uint64_t v___y_1443_; 
if (lean_obj_tag(v_x_1441_) == 0)
{
uint64_t v___x_1446_; 
v___x_1446_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0);
v___y_1443_ = v___x_1446_;
goto v___jp_1442_;
}
else
{
uint64_t v_hash_1447_; 
v_hash_1447_ = lean_ctor_get_uint64(v_x_1441_, sizeof(void*)*2);
v___y_1443_ = v_hash_1447_;
goto v___jp_1442_;
}
v___jp_1442_:
{
size_t v___x_1444_; uint8_t v___x_1445_; 
v___x_1444_ = lean_uint64_to_usize(v___y_1443_);
v___x_1445_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_1440_, v___x_1444_, v_x_1441_);
return v___x_1445_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_x_1448_, lean_object* v_x_1449_){
_start:
{
uint8_t v_res_1450_; lean_object* v_r_1451_; 
v_res_1450_ = l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(v_x_1448_, v_x_1449_);
lean_dec(v_x_1449_);
v_r_1451_ = lean_box(v_res_1450_);
return v_r_1451_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_x1_1452_, lean_object* v_x2_1453_){
_start:
{
lean_object* v_fst_1454_; uint8_t v___x_1455_; 
v_fst_1454_ = lean_ctor_get(v_x2_1453_, 0);
v___x_1455_ = l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(v_x1_1452_, v_fst_1454_);
if (v___x_1455_ == 0)
{
uint8_t v___x_1456_; 
v___x_1456_ = 1;
return v___x_1456_;
}
else
{
uint8_t v___x_1457_; 
v___x_1457_ = 0;
return v___x_1457_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object* v_x1_1458_, lean_object* v_x2_1459_){
_start:
{
uint8_t v_res_1460_; lean_object* v_r_1461_; 
v_res_1460_ = l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(v_x1_1458_, v_x2_1459_);
lean_dec_ref(v_x2_1459_);
v_r_1461_ = lean_box(v_res_1460_);
return v_r_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_ps_1462_, lean_object* v_k_1463_, lean_object* v_v_1464_){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1465_, 0, v_k_1463_);
lean_ctor_set(v___x_1465_, 1, v_v_1464_);
v___x_1466_ = lean_array_push(v_ps_1462_, v___x_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___lam__0(lean_object* v_f_1467_, lean_object* v_x1_1468_, lean_object* v_x2_1469_, lean_object* v_x3_1470_){
_start:
{
lean_object* v___x_1471_; 
v___x_1471_ = lean_apply_3(v_f_1467_, v_x1_1468_, v_x2_1469_, v_x3_1470_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(lean_object* v_f_1472_, lean_object* v_keys_1473_, lean_object* v_vals_1474_, lean_object* v_i_1475_, lean_object* v_acc_1476_){
_start:
{
lean_object* v___x_1477_; uint8_t v___x_1478_; 
v___x_1477_ = lean_array_get_size(v_keys_1473_);
v___x_1478_ = lean_nat_dec_lt(v_i_1475_, v___x_1477_);
if (v___x_1478_ == 0)
{
lean_dec(v_i_1475_);
lean_dec(v_f_1472_);
return v_acc_1476_;
}
else
{
lean_object* v_k_1479_; lean_object* v_v_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v_k_1479_ = lean_array_fget_borrowed(v_keys_1473_, v_i_1475_);
v_v_1480_ = lean_array_fget_borrowed(v_vals_1474_, v_i_1475_);
lean_inc(v_f_1472_);
lean_inc(v_v_1480_);
lean_inc(v_k_1479_);
v___x_1481_ = lean_apply_3(v_f_1472_, v_acc_1476_, v_k_1479_, v_v_1480_);
v___x_1482_ = lean_unsigned_to_nat(1u);
v___x_1483_ = lean_nat_add(v_i_1475_, v___x_1482_);
lean_dec(v_i_1475_);
v_i_1475_ = v___x_1483_;
v_acc_1476_ = v___x_1481_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg___boxed(lean_object* v_f_1485_, lean_object* v_keys_1486_, lean_object* v_vals_1487_, lean_object* v_i_1488_, lean_object* v_acc_1489_){
_start:
{
lean_object* v_res_1490_; 
v_res_1490_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(v_f_1485_, v_keys_1486_, v_vals_1487_, v_i_1488_, v_acc_1489_);
lean_dec_ref(v_vals_1487_);
lean_dec_ref(v_keys_1486_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(lean_object* v_f_1491_, lean_object* v_x_1492_, lean_object* v_x_1493_){
_start:
{
if (lean_obj_tag(v_x_1492_) == 0)
{
lean_object* v_es_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; uint8_t v___x_1497_; 
v_es_1494_ = lean_ctor_get(v_x_1492_, 0);
v___x_1495_ = lean_unsigned_to_nat(0u);
v___x_1496_ = lean_array_get_size(v_es_1494_);
v___x_1497_ = lean_nat_dec_lt(v___x_1495_, v___x_1496_);
if (v___x_1497_ == 0)
{
lean_dec(v_f_1491_);
return v_x_1493_;
}
else
{
uint8_t v___x_1498_; 
v___x_1498_ = lean_nat_dec_le(v___x_1496_, v___x_1496_);
if (v___x_1498_ == 0)
{
if (v___x_1497_ == 0)
{
lean_dec(v_f_1491_);
return v_x_1493_;
}
else
{
size_t v___x_1499_; size_t v___x_1500_; lean_object* v___x_1501_; 
v___x_1499_ = ((size_t)0ULL);
v___x_1500_ = lean_usize_of_nat(v___x_1496_);
v___x_1501_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__9___redArg(v_f_1491_, v_es_1494_, v___x_1499_, v___x_1500_, v_x_1493_);
return v___x_1501_;
}
}
else
{
size_t v___x_1502_; size_t v___x_1503_; lean_object* v___x_1504_; 
v___x_1502_ = ((size_t)0ULL);
v___x_1503_ = lean_usize_of_nat(v___x_1496_);
v___x_1504_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__9___redArg(v_f_1491_, v_es_1494_, v___x_1502_, v___x_1503_, v_x_1493_);
return v___x_1504_;
}
}
}
else
{
lean_object* v_ks_1505_; lean_object* v_vs_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
v_ks_1505_ = lean_ctor_get(v_x_1492_, 0);
v_vs_1506_ = lean_ctor_get(v_x_1492_, 1);
v___x_1507_ = lean_unsigned_to_nat(0u);
v___x_1508_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(v_f_1491_, v_ks_1505_, v_vs_1506_, v___x_1507_, v_x_1493_);
return v___x_1508_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__9___redArg(lean_object* v_f_1509_, lean_object* v_as_1510_, size_t v_i_1511_, size_t v_stop_1512_, lean_object* v_b_1513_){
_start:
{
lean_object* v___y_1515_; uint8_t v___x_1519_; 
v___x_1519_ = lean_usize_dec_eq(v_i_1511_, v_stop_1512_);
if (v___x_1519_ == 0)
{
lean_object* v___x_1520_; 
v___x_1520_ = lean_array_uget_borrowed(v_as_1510_, v_i_1511_);
switch(lean_obj_tag(v___x_1520_))
{
case 0:
{
lean_object* v_key_1521_; lean_object* v_val_1522_; lean_object* v___x_1523_; 
v_key_1521_ = lean_ctor_get(v___x_1520_, 0);
v_val_1522_ = lean_ctor_get(v___x_1520_, 1);
lean_inc(v_f_1509_);
lean_inc(v_val_1522_);
lean_inc(v_key_1521_);
v___x_1523_ = lean_apply_3(v_f_1509_, v_b_1513_, v_key_1521_, v_val_1522_);
v___y_1515_ = v___x_1523_;
goto v___jp_1514_;
}
case 1:
{
lean_object* v_node_1524_; lean_object* v___x_1525_; 
v_node_1524_ = lean_ctor_get(v___x_1520_, 0);
lean_inc(v_f_1509_);
v___x_1525_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1509_, v_node_1524_, v_b_1513_);
v___y_1515_ = v___x_1525_;
goto v___jp_1514_;
}
default: 
{
v___y_1515_ = v_b_1513_;
goto v___jp_1514_;
}
}
}
else
{
lean_dec(v_f_1509_);
return v_b_1513_;
}
v___jp_1514_:
{
size_t v___x_1516_; size_t v___x_1517_; 
v___x_1516_ = ((size_t)1ULL);
v___x_1517_ = lean_usize_add(v_i_1511_, v___x_1516_);
v_i_1511_ = v___x_1517_;
v_b_1513_ = v___y_1515_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__9___redArg___boxed(lean_object* v_f_1526_, lean_object* v_as_1527_, lean_object* v_i_1528_, lean_object* v_stop_1529_, lean_object* v_b_1530_){
_start:
{
size_t v_i_boxed_1531_; size_t v_stop_boxed_1532_; lean_object* v_res_1533_; 
v_i_boxed_1531_ = lean_unbox_usize(v_i_1528_);
lean_dec(v_i_1528_);
v_stop_boxed_1532_ = lean_unbox_usize(v_stop_1529_);
lean_dec(v_stop_1529_);
v_res_1533_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__9___redArg(v_f_1526_, v_as_1527_, v_i_boxed_1531_, v_stop_boxed_1532_, v_b_1530_);
lean_dec_ref(v_as_1527_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object* v_f_1534_, lean_object* v_x_1535_, lean_object* v_x_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1534_, v_x_1535_, v_x_1536_);
lean_dec_ref(v_x_1535_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_map_1538_, lean_object* v_f_1539_, lean_object* v_init_1540_){
_start:
{
lean_object* v___f_1541_; lean_object* v___x_1542_; 
v___f_1541_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1541_, 0, v_f_1539_);
v___x_1542_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v___f_1541_, v_map_1538_, v_init_1540_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_map_1543_, lean_object* v_f_1544_, lean_object* v_init_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(v_map_1543_, v_f_1544_, v_init_1545_);
lean_dec_ref(v_map_1543_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(lean_object* v_m_1550_){
_start:
{
lean_object* v___f_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___f_1551_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__0));
v___x_1552_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__1));
v___x_1553_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(v_m_1550_, v___f_1551_, v___x_1552_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_m_1554_){
_start:
{
lean_object* v_res_1555_; 
v_res_1555_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(v_m_1554_);
lean_dec_ref(v_m_1554_);
return v_res_1555_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
lean_object* v_fst_1558_; lean_object* v_fst_1559_; uint8_t v___x_1560_; 
v_fst_1558_ = lean_ctor_get(v___y_1556_, 0);
v_fst_1559_ = lean_ctor_get(v___y_1557_, 0);
v___x_1560_ = l_Lean_Name_quickLt(v_fst_1558_, v_fst_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed(lean_object* v___y_1561_, lean_object* v___y_1562_){
_start:
{
uint8_t v_res_1563_; lean_object* v_r_1564_; 
v_res_1563_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v___y_1561_, v___y_1562_);
lean_dec_ref(v___y_1562_);
lean_dec_ref(v___y_1561_);
v_r_1564_ = lean_box(v_res_1563_);
return v_r_1564_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(lean_object* v_as_1566_, lean_object* v_lo_1567_, lean_object* v_hi_1568_){
_start:
{
uint8_t v___x_1569_; 
v___x_1569_ = lean_nat_dec_lt(v_lo_1567_, v_hi_1568_);
if (v___x_1569_ == 0)
{
lean_dec(v_lo_1567_);
return v_as_1566_;
}
else
{
lean_object* v___f_1570_; lean_object* v___x_1571_; lean_object* v_fst_1572_; lean_object* v_snd_1573_; uint8_t v___x_1574_; 
v___f_1570_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___closed__0));
lean_inc(v_lo_1567_);
v___x_1571_ = l_Array_qpartition___redArg(v_as_1566_, v___f_1570_, v_lo_1567_, v_hi_1568_);
v_fst_1572_ = lean_ctor_get(v___x_1571_, 0);
lean_inc(v_fst_1572_);
v_snd_1573_ = lean_ctor_get(v___x_1571_, 1);
lean_inc(v_snd_1573_);
lean_dec_ref(v___x_1571_);
v___x_1574_ = lean_nat_dec_le(v_hi_1568_, v_fst_1572_);
if (v___x_1574_ == 0)
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1575_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(v_snd_1573_, v_lo_1567_, v_fst_1572_);
v___x_1576_ = lean_unsigned_to_nat(1u);
v___x_1577_ = lean_nat_add(v_fst_1572_, v___x_1576_);
lean_dec(v_fst_1572_);
v_as_1566_ = v___x_1575_;
v_lo_1567_ = v___x_1577_;
goto _start;
}
else
{
lean_dec(v_fst_1572_);
lean_dec(v_lo_1567_);
return v_snd_1573_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_as_1579_, lean_object* v_lo_1580_, lean_object* v_hi_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(v_as_1579_, v_lo_1580_, v_hi_1581_);
lean_dec(v_hi_1581_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_x_1585_, lean_object* v_s_1586_, lean_object* v_x_1587_){
_start:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___y_1592_; lean_object* v___y_1593_; lean_object* v___x_1596_; uint8_t v___x_1597_; 
v___x_1588_ = lean_unsigned_to_nat(0u);
v___x_1589_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_1590_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(v_s_1586_);
v___x_1596_ = lean_array_get_size(v___x_1590_);
v___x_1597_ = lean_nat_dec_eq(v___x_1596_, v___x_1588_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___y_1601_; uint8_t v___x_1603_; 
v___x_1598_ = lean_unsigned_to_nat(1u);
v___x_1599_ = lean_nat_sub(v___x_1596_, v___x_1598_);
v___x_1603_ = lean_nat_dec_le(v___x_1588_, v___x_1599_);
if (v___x_1603_ == 0)
{
lean_inc(v___x_1599_);
v___y_1601_ = v___x_1599_;
goto v___jp_1600_;
}
else
{
v___y_1601_ = v___x_1588_;
goto v___jp_1600_;
}
v___jp_1600_:
{
uint8_t v___x_1602_; 
v___x_1602_ = lean_nat_dec_le(v___y_1601_, v___x_1599_);
if (v___x_1602_ == 0)
{
lean_dec(v___x_1599_);
lean_inc(v___y_1601_);
v___y_1592_ = v___y_1601_;
v___y_1593_ = v___y_1601_;
goto v___jp_1591_;
}
else
{
v___y_1592_ = v___y_1601_;
v___y_1593_ = v___x_1599_;
goto v___jp_1591_;
}
}
}
else
{
lean_object* v___x_1604_; 
v___x_1604_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1589_);
lean_ctor_set(v___x_1604_, 1, v___x_1589_);
lean_ctor_set(v___x_1604_, 2, v___x_1590_);
return v___x_1604_;
}
v___jp_1591_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1594_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(v___x_1590_, v___y_1592_, v___y_1593_);
lean_dec(v___y_1593_);
v___x_1595_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1589_);
lean_ctor_set(v___x_1595_, 1, v___x_1589_);
lean_ctor_set(v___x_1595_, 2, v___x_1594_);
return v___x_1595_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object* v_x_1605_, lean_object* v_s_1606_, lean_object* v_x_1607_){
_start:
{
lean_object* v_res_1608_; 
v_res_1608_ = l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(v_x_1605_, v_s_1606_, v_x_1607_);
lean_dec(v_x_1607_);
lean_dec_ref(v_s_1606_);
lean_dec_ref(v_x_1605_);
return v_res_1608_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1609_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, &l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_);
v___x_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1610_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_x_1612_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, &l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object* v_x_1614_){
_start:
{
lean_object* v_res_1615_; 
v_res_1615_ = l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(v_x_1614_);
lean_dec_ref(v_x_1614_);
return v_res_1615_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__8_spec__10___redArg(lean_object* v_x_1616_, lean_object* v_x_1617_, lean_object* v_x_1618_, lean_object* v_x_1619_){
_start:
{
lean_object* v_ks_1620_; lean_object* v_vs_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1645_; 
v_ks_1620_ = lean_ctor_get(v_x_1616_, 0);
v_vs_1621_ = lean_ctor_get(v_x_1616_, 1);
v_isSharedCheck_1645_ = !lean_is_exclusive(v_x_1616_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1623_ = v_x_1616_;
v_isShared_1624_ = v_isSharedCheck_1645_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_vs_1621_);
lean_inc(v_ks_1620_);
lean_dec(v_x_1616_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1645_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v___x_1625_; uint8_t v___x_1626_; 
v___x_1625_ = lean_array_get_size(v_ks_1620_);
v___x_1626_ = lean_nat_dec_lt(v_x_1617_, v___x_1625_);
if (v___x_1626_ == 0)
{
lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1630_; 
lean_dec(v_x_1617_);
v___x_1627_ = lean_array_push(v_ks_1620_, v_x_1618_);
v___x_1628_ = lean_array_push(v_vs_1621_, v_x_1619_);
if (v_isShared_1624_ == 0)
{
lean_ctor_set(v___x_1623_, 1, v___x_1628_);
lean_ctor_set(v___x_1623_, 0, v___x_1627_);
v___x_1630_ = v___x_1623_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v___x_1627_);
lean_ctor_set(v_reuseFailAlloc_1631_, 1, v___x_1628_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
else
{
lean_object* v_k_x27_1632_; uint8_t v___x_1633_; 
v_k_x27_1632_ = lean_array_fget_borrowed(v_ks_1620_, v_x_1617_);
v___x_1633_ = lean_name_eq(v_x_1618_, v_k_x27_1632_);
if (v___x_1633_ == 0)
{
lean_object* v___x_1635_; 
if (v_isShared_1624_ == 0)
{
v___x_1635_ = v___x_1623_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_ks_1620_);
lean_ctor_set(v_reuseFailAlloc_1639_, 1, v_vs_1621_);
v___x_1635_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1636_ = lean_unsigned_to_nat(1u);
v___x_1637_ = lean_nat_add(v_x_1617_, v___x_1636_);
lean_dec(v_x_1617_);
v_x_1616_ = v___x_1635_;
v_x_1617_ = v___x_1637_;
goto _start;
}
}
else
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1643_; 
v___x_1640_ = lean_array_fset(v_ks_1620_, v_x_1617_, v_x_1618_);
v___x_1641_ = lean_array_fset(v_vs_1621_, v_x_1617_, v_x_1619_);
lean_dec(v_x_1617_);
if (v_isShared_1624_ == 0)
{
lean_ctor_set(v___x_1623_, 1, v___x_1641_);
lean_ctor_set(v___x_1623_, 0, v___x_1640_);
v___x_1643_ = v___x_1623_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1640_);
lean_ctor_set(v_reuseFailAlloc_1644_, 1, v___x_1641_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__8___redArg(lean_object* v_n_1646_, lean_object* v_k_1647_, lean_object* v_v_1648_){
_start:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1649_ = lean_unsigned_to_nat(0u);
v___x_1650_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__8_spec__10___redArg(v_n_1646_, v___x_1649_, v_k_1647_, v_v_1648_);
return v___x_1650_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1651_; 
v___x_1651_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1651_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg(lean_object* v_x_1652_, size_t v_x_1653_, size_t v_x_1654_, lean_object* v_x_1655_, lean_object* v_x_1656_){
_start:
{
if (lean_obj_tag(v_x_1652_) == 0)
{
lean_object* v_es_1657_; size_t v___x_1658_; size_t v___x_1659_; size_t v___x_1660_; size_t v___x_1661_; lean_object* v_j_1662_; lean_object* v___x_1663_; uint8_t v___x_1664_; 
v_es_1657_ = lean_ctor_get(v_x_1652_, 0);
v___x_1658_ = ((size_t)5ULL);
v___x_1659_ = ((size_t)1ULL);
v___x_1660_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_1661_ = lean_usize_land(v_x_1653_, v___x_1660_);
v_j_1662_ = lean_usize_to_nat(v___x_1661_);
v___x_1663_ = lean_array_get_size(v_es_1657_);
v___x_1664_ = lean_nat_dec_lt(v_j_1662_, v___x_1663_);
if (v___x_1664_ == 0)
{
lean_dec(v_j_1662_);
lean_dec(v_x_1656_);
lean_dec(v_x_1655_);
return v_x_1652_;
}
else
{
lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1701_; 
lean_inc_ref(v_es_1657_);
v_isSharedCheck_1701_ = !lean_is_exclusive(v_x_1652_);
if (v_isSharedCheck_1701_ == 0)
{
lean_object* v_unused_1702_; 
v_unused_1702_ = lean_ctor_get(v_x_1652_, 0);
lean_dec(v_unused_1702_);
v___x_1666_ = v_x_1652_;
v_isShared_1667_ = v_isSharedCheck_1701_;
goto v_resetjp_1665_;
}
else
{
lean_dec(v_x_1652_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1701_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v_v_1668_; lean_object* v___x_1669_; lean_object* v_xs_x27_1670_; lean_object* v___y_1672_; 
v_v_1668_ = lean_array_fget(v_es_1657_, v_j_1662_);
v___x_1669_ = lean_box(0);
v_xs_x27_1670_ = lean_array_fset(v_es_1657_, v_j_1662_, v___x_1669_);
switch(lean_obj_tag(v_v_1668_))
{
case 0:
{
lean_object* v_key_1677_; lean_object* v_val_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1688_; 
v_key_1677_ = lean_ctor_get(v_v_1668_, 0);
v_val_1678_ = lean_ctor_get(v_v_1668_, 1);
v_isSharedCheck_1688_ = !lean_is_exclusive(v_v_1668_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1680_ = v_v_1668_;
v_isShared_1681_ = v_isSharedCheck_1688_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_val_1678_);
lean_inc(v_key_1677_);
lean_dec(v_v_1668_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1688_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
uint8_t v___x_1682_; 
v___x_1682_ = lean_name_eq(v_x_1655_, v_key_1677_);
if (v___x_1682_ == 0)
{
lean_object* v___x_1683_; lean_object* v___x_1684_; 
lean_del_object(v___x_1680_);
v___x_1683_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1677_, v_val_1678_, v_x_1655_, v_x_1656_);
v___x_1684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1683_);
v___y_1672_ = v___x_1684_;
goto v___jp_1671_;
}
else
{
lean_object* v___x_1686_; 
lean_dec(v_val_1678_);
lean_dec(v_key_1677_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v_x_1656_);
lean_ctor_set(v___x_1680_, 0, v_x_1655_);
v___x_1686_ = v___x_1680_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v_x_1655_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v_x_1656_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
v___y_1672_ = v___x_1686_;
goto v___jp_1671_;
}
}
}
}
case 1:
{
lean_object* v_node_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1699_; 
v_node_1689_ = lean_ctor_get(v_v_1668_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v_v_1668_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1691_ = v_v_1668_;
v_isShared_1692_ = v_isSharedCheck_1699_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_node_1689_);
lean_dec(v_v_1668_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1699_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
size_t v___x_1693_; size_t v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1697_; 
v___x_1693_ = lean_usize_shift_right(v_x_1653_, v___x_1658_);
v___x_1694_ = lean_usize_add(v_x_1654_, v___x_1659_);
v___x_1695_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg(v_node_1689_, v___x_1693_, v___x_1694_, v_x_1655_, v_x_1656_);
if (v_isShared_1692_ == 0)
{
lean_ctor_set(v___x_1691_, 0, v___x_1695_);
v___x_1697_ = v___x_1691_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v___x_1695_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
v___y_1672_ = v___x_1697_;
goto v___jp_1671_;
}
}
}
default: 
{
lean_object* v___x_1700_; 
v___x_1700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1700_, 0, v_x_1655_);
lean_ctor_set(v___x_1700_, 1, v_x_1656_);
v___y_1672_ = v___x_1700_;
goto v___jp_1671_;
}
}
v___jp_1671_:
{
lean_object* v___x_1673_; lean_object* v___x_1675_; 
v___x_1673_ = lean_array_fset(v_xs_x27_1670_, v_j_1662_, v___y_1672_);
lean_dec(v_j_1662_);
if (v_isShared_1667_ == 0)
{
lean_ctor_set(v___x_1666_, 0, v___x_1673_);
v___x_1675_ = v___x_1666_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v___x_1673_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
}
}
else
{
lean_object* v_ks_1703_; lean_object* v_vs_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1724_; 
v_ks_1703_ = lean_ctor_get(v_x_1652_, 0);
v_vs_1704_ = lean_ctor_get(v_x_1652_, 1);
v_isSharedCheck_1724_ = !lean_is_exclusive(v_x_1652_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1706_ = v_x_1652_;
v_isShared_1707_ = v_isSharedCheck_1724_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_vs_1704_);
lean_inc(v_ks_1703_);
lean_dec(v_x_1652_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1724_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1709_; 
if (v_isShared_1707_ == 0)
{
v___x_1709_ = v___x_1706_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_ks_1703_);
lean_ctor_set(v_reuseFailAlloc_1723_, 1, v_vs_1704_);
v___x_1709_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
lean_object* v_newNode_1710_; uint8_t v___y_1712_; size_t v___x_1718_; uint8_t v___x_1719_; 
v_newNode_1710_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__8___redArg(v___x_1709_, v_x_1655_, v_x_1656_);
v___x_1718_ = ((size_t)7ULL);
v___x_1719_ = lean_usize_dec_le(v___x_1718_, v_x_1654_);
if (v___x_1719_ == 0)
{
lean_object* v___x_1720_; lean_object* v___x_1721_; uint8_t v___x_1722_; 
v___x_1720_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1710_);
v___x_1721_ = lean_unsigned_to_nat(4u);
v___x_1722_ = lean_nat_dec_lt(v___x_1720_, v___x_1721_);
lean_dec(v___x_1720_);
v___y_1712_ = v___x_1722_;
goto v___jp_1711_;
}
else
{
v___y_1712_ = v___x_1719_;
goto v___jp_1711_;
}
v___jp_1711_:
{
if (v___y_1712_ == 0)
{
lean_object* v_ks_1713_; lean_object* v_vs_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v_ks_1713_ = lean_ctor_get(v_newNode_1710_, 0);
lean_inc_ref(v_ks_1713_);
v_vs_1714_ = lean_ctor_get(v_newNode_1710_, 1);
lean_inc_ref(v_vs_1714_);
lean_dec_ref(v_newNode_1710_);
v___x_1715_ = lean_unsigned_to_nat(0u);
v___x_1716_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__0);
v___x_1717_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__9___redArg(v_x_1654_, v_ks_1713_, v_vs_1714_, v___x_1715_, v___x_1716_);
lean_dec_ref(v_vs_1714_);
lean_dec_ref(v_ks_1713_);
return v___x_1717_;
}
else
{
return v_newNode_1710_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__9___redArg(size_t v_depth_1725_, lean_object* v_keys_1726_, lean_object* v_vals_1727_, lean_object* v_i_1728_, lean_object* v_entries_1729_){
_start:
{
lean_object* v___x_1730_; uint8_t v___x_1731_; 
v___x_1730_ = lean_array_get_size(v_keys_1726_);
v___x_1731_ = lean_nat_dec_lt(v_i_1728_, v___x_1730_);
if (v___x_1731_ == 0)
{
lean_dec(v_i_1728_);
return v_entries_1729_;
}
else
{
lean_object* v_k_1732_; lean_object* v_v_1733_; uint64_t v___y_1735_; 
v_k_1732_ = lean_array_fget_borrowed(v_keys_1726_, v_i_1728_);
v_v_1733_ = lean_array_fget_borrowed(v_vals_1727_, v_i_1728_);
if (lean_obj_tag(v_k_1732_) == 0)
{
uint64_t v___x_1746_; 
v___x_1746_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0);
v___y_1735_ = v___x_1746_;
goto v___jp_1734_;
}
else
{
uint64_t v_hash_1747_; 
v_hash_1747_ = lean_ctor_get_uint64(v_k_1732_, sizeof(void*)*2);
v___y_1735_ = v_hash_1747_;
goto v___jp_1734_;
}
v___jp_1734_:
{
size_t v_h_1736_; size_t v___x_1737_; lean_object* v___x_1738_; size_t v___x_1739_; size_t v___x_1740_; size_t v___x_1741_; size_t v_h_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v_h_1736_ = lean_uint64_to_usize(v___y_1735_);
v___x_1737_ = ((size_t)5ULL);
v___x_1738_ = lean_unsigned_to_nat(1u);
v___x_1739_ = ((size_t)1ULL);
v___x_1740_ = lean_usize_sub(v_depth_1725_, v___x_1739_);
v___x_1741_ = lean_usize_mul(v___x_1737_, v___x_1740_);
v_h_1742_ = lean_usize_shift_right(v_h_1736_, v___x_1741_);
v___x_1743_ = lean_nat_add(v_i_1728_, v___x_1738_);
lean_dec(v_i_1728_);
lean_inc(v_v_1733_);
lean_inc(v_k_1732_);
v___x_1744_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg(v_entries_1729_, v_h_1742_, v_depth_1725_, v_k_1732_, v_v_1733_);
v_i_1728_ = v___x_1743_;
v_entries_1729_ = v___x_1744_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_depth_1748_, lean_object* v_keys_1749_, lean_object* v_vals_1750_, lean_object* v_i_1751_, lean_object* v_entries_1752_){
_start:
{
size_t v_depth_boxed_1753_; lean_object* v_res_1754_; 
v_depth_boxed_1753_ = lean_unbox_usize(v_depth_1748_);
lean_dec(v_depth_1748_);
v_res_1754_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__9___redArg(v_depth_boxed_1753_, v_keys_1749_, v_vals_1750_, v_i_1751_, v_entries_1752_);
lean_dec_ref(v_vals_1750_);
lean_dec_ref(v_keys_1749_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg___boxed(lean_object* v_x_1755_, lean_object* v_x_1756_, lean_object* v_x_1757_, lean_object* v_x_1758_, lean_object* v_x_1759_){
_start:
{
size_t v_x_1440__boxed_1760_; size_t v_x_1441__boxed_1761_; lean_object* v_res_1762_; 
v_x_1440__boxed_1760_ = lean_unbox_usize(v_x_1756_);
lean_dec(v_x_1756_);
v_x_1441__boxed_1761_ = lean_unbox_usize(v_x_1757_);
lean_dec(v_x_1757_);
v_res_1762_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg(v_x_1755_, v_x_1440__boxed_1760_, v_x_1441__boxed_1761_, v_x_1758_, v_x_1759_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3___redArg(lean_object* v_x_1763_, lean_object* v_x_1764_, lean_object* v_x_1765_){
_start:
{
uint64_t v___y_1767_; 
if (lean_obj_tag(v_x_1764_) == 0)
{
uint64_t v___x_1771_; 
v___x_1771_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0);
v___y_1767_ = v___x_1771_;
goto v___jp_1766_;
}
else
{
uint64_t v_hash_1772_; 
v_hash_1772_ = lean_ctor_get_uint64(v_x_1764_, sizeof(void*)*2);
v___y_1767_ = v_hash_1772_;
goto v___jp_1766_;
}
v___jp_1766_:
{
size_t v___x_1768_; size_t v___x_1769_; lean_object* v___x_1770_; 
v___x_1768_ = lean_uint64_to_usize(v___y_1767_);
v___x_1769_ = ((size_t)1ULL);
v___x_1770_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg(v_x_1763_, v___x_1768_, v___x_1769_, v_x_1764_, v_x_1765_);
return v___x_1770_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_s_1773_, lean_object* v_x_1774_){
_start:
{
lean_object* v_fst_1775_; lean_object* v_snd_1776_; lean_object* v___x_1777_; 
v_fst_1775_ = lean_ctor_get(v_x_1774_, 0);
lean_inc(v_fst_1775_);
v_snd_1776_ = lean_ctor_get(v_x_1774_, 1);
lean_inc(v_snd_1776_);
lean_dec_ref(v_x_1774_);
v___x_1777_ = l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3___redArg(v_s_1773_, v_fst_1775_, v_snd_1776_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1810_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_1811_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_1810_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object* v_a_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l_Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_();
return v_res_1813_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_1814_, lean_object* v_x_1815_, lean_object* v_x_1816_){
_start:
{
uint8_t v___x_1817_; 
v___x_1817_ = l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(v_x_1815_, v_x_1816_);
return v___x_1817_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b2_1818_, lean_object* v_x_1819_, lean_object* v_x_1820_){
_start:
{
uint8_t v_res_1821_; lean_object* v_r_1822_; 
v_res_1821_ = l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0(v_00_u03b2_1818_, v_x_1819_, v_x_1820_);
lean_dec(v_x_1820_);
v_r_1822_ = lean_box(v_res_1821_);
return v_r_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_1823_, lean_object* v_m_1824_){
_start:
{
lean_object* v___x_1825_; 
v___x_1825_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(v_m_1824_);
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___boxed(lean_object* v_00_u03b2_1826_, lean_object* v_m_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1(v_00_u03b2_1826_, v_m_1827_);
lean_dec_ref(v_m_1827_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2(lean_object* v_n_1829_, lean_object* v_as_1830_, lean_object* v_lo_1831_, lean_object* v_hi_1832_, lean_object* v_w_1833_, lean_object* v_hlo_1834_, lean_object* v_hhi_1835_){
_start:
{
lean_object* v___x_1836_; 
v___x_1836_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(v_as_1830_, v_lo_1831_, v_hi_1832_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___boxed(lean_object* v_n_1837_, lean_object* v_as_1838_, lean_object* v_lo_1839_, lean_object* v_hi_1840_, lean_object* v_w_1841_, lean_object* v_hlo_1842_, lean_object* v_hhi_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2(v_n_1837_, v_as_1838_, v_lo_1839_, v_hi_1840_, v_w_1841_, v_hlo_1842_, v_hhi_1843_);
lean_dec(v_hi_1840_);
lean_dec(v_n_1837_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3(lean_object* v_00_u03b2_1845_, lean_object* v_x_1846_, lean_object* v_x_1847_, lean_object* v_x_1848_){
_start:
{
lean_object* v___x_1849_; 
v___x_1849_ = l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3___redArg(v_x_1846_, v_x_1847_, v_x_1848_);
return v___x_1849_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_1850_, lean_object* v_x_1851_, size_t v_x_1852_, lean_object* v_x_1853_){
_start:
{
uint8_t v___x_1854_; 
v___x_1854_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_1851_, v_x_1852_, v_x_1853_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_1855_, lean_object* v_x_1856_, lean_object* v_x_1857_, lean_object* v_x_1858_){
_start:
{
size_t v_x_1747__boxed_1859_; uint8_t v_res_1860_; lean_object* v_r_1861_; 
v_x_1747__boxed_1859_ = lean_unbox_usize(v_x_1857_);
lean_dec(v_x_1857_);
v_res_1860_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_1855_, v_x_1856_, v_x_1747__boxed_1859_, v_x_1858_);
lean_dec(v_x_1858_);
v_r_1861_ = lean_box(v_res_1860_);
return v_r_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_00_u03c3_1862_, lean_object* v_00_u03b2_1863_, lean_object* v_map_1864_, lean_object* v_f_1865_, lean_object* v_init_1866_){
_start:
{
lean_object* v___x_1867_; 
v___x_1867_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(v_map_1864_, v_f_1865_, v_init_1866_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_00_u03c3_1868_, lean_object* v_00_u03b2_1869_, lean_object* v_map_1870_, lean_object* v_f_1871_, lean_object* v_init_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2(v_00_u03c3_1868_, v_00_u03b2_1869_, v_map_1870_, v_f_1871_, v_init_1872_);
lean_dec_ref(v_map_1870_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5(lean_object* v_00_u03b2_1874_, lean_object* v_x_1875_, size_t v_x_1876_, size_t v_x_1877_, lean_object* v_x_1878_, lean_object* v_x_1879_){
_start:
{
lean_object* v___x_1880_; 
v___x_1880_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___redArg(v_x_1875_, v_x_1876_, v_x_1877_, v_x_1878_, v_x_1879_);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5___boxed(lean_object* v_00_u03b2_1881_, lean_object* v_x_1882_, lean_object* v_x_1883_, lean_object* v_x_1884_, lean_object* v_x_1885_, lean_object* v_x_1886_){
_start:
{
size_t v_x_1760__boxed_1887_; size_t v_x_1761__boxed_1888_; lean_object* v_res_1889_; 
v_x_1760__boxed_1887_ = lean_unbox_usize(v_x_1883_);
lean_dec(v_x_1883_);
v_x_1761__boxed_1888_ = lean_unbox_usize(v_x_1884_);
lean_dec(v_x_1884_);
v_res_1889_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5(v_00_u03b2_1881_, v_x_1882_, v_x_1760__boxed_1887_, v_x_1761__boxed_1888_, v_x_1885_, v_x_1886_);
return v_res_1889_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1890_, lean_object* v_keys_1891_, lean_object* v_vals_1892_, lean_object* v_heq_1893_, lean_object* v_i_1894_, lean_object* v_k_1895_){
_start:
{
uint8_t v___x_1896_; 
v___x_1896_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_keys_1891_, v_i_1894_, v_k_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1897_, lean_object* v_keys_1898_, lean_object* v_vals_1899_, lean_object* v_heq_1900_, lean_object* v_i_1901_, lean_object* v_k_1902_){
_start:
{
uint8_t v_res_1903_; lean_object* v_r_1904_; 
v_res_1903_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03b2_1897_, v_keys_1898_, v_vals_1899_, v_heq_1900_, v_i_1901_, v_k_1902_);
lean_dec(v_k_1902_);
lean_dec_ref(v_vals_1899_);
lean_dec_ref(v_keys_1898_);
v_r_1904_ = lean_box(v_res_1903_);
return v_r_1904_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(lean_object* v_map_1905_, lean_object* v_f_1906_, lean_object* v_init_1907_){
_start:
{
lean_object* v___x_1908_; 
v___x_1908_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1906_, v_map_1905_, v_init_1907_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_map_1909_, lean_object* v_f_1910_, lean_object* v_init_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(v_map_1909_, v_f_1910_, v_init_1911_);
lean_dec_ref(v_map_1909_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4(lean_object* v_00_u03c3_1913_, lean_object* v_00_u03b2_1914_, lean_object* v_map_1915_, lean_object* v_f_1916_, lean_object* v_init_1917_){
_start:
{
lean_object* v___x_1918_; 
v___x_1918_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1916_, v_map_1915_, v_init_1917_);
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03c3_1919_, lean_object* v_00_u03b2_1920_, lean_object* v_map_1921_, lean_object* v_f_1922_, lean_object* v_init_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4(v_00_u03c3_1919_, v_00_u03b2_1920_, v_map_1921_, v_f_1922_, v_init_1923_);
lean_dec_ref(v_map_1921_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__8(lean_object* v_00_u03b2_1925_, lean_object* v_n_1926_, lean_object* v_k_1927_, lean_object* v_v_1928_){
_start:
{
lean_object* v___x_1929_; 
v___x_1929_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__8___redArg(v_n_1926_, v_k_1927_, v_v_1928_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__9(lean_object* v_00_u03b2_1930_, size_t v_depth_1931_, lean_object* v_keys_1932_, lean_object* v_vals_1933_, lean_object* v_heq_1934_, lean_object* v_i_1935_, lean_object* v_entries_1936_){
_start:
{
lean_object* v___x_1937_; 
v___x_1937_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__9___redArg(v_depth_1931_, v_keys_1932_, v_vals_1933_, v_i_1935_, v_entries_1936_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03b2_1938_, lean_object* v_depth_1939_, lean_object* v_keys_1940_, lean_object* v_vals_1941_, lean_object* v_heq_1942_, lean_object* v_i_1943_, lean_object* v_entries_1944_){
_start:
{
size_t v_depth_boxed_1945_; lean_object* v_res_1946_; 
v_depth_boxed_1945_ = lean_unbox_usize(v_depth_1939_);
lean_dec(v_depth_1939_);
v_res_1946_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__9(v_00_u03b2_1938_, v_depth_boxed_1945_, v_keys_1940_, v_vals_1941_, v_heq_1942_, v_i_1943_, v_entries_1944_);
lean_dec_ref(v_vals_1941_);
lean_dec_ref(v_keys_1940_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7(lean_object* v_00_u03c3_1947_, lean_object* v_00_u03b1_1948_, lean_object* v_00_u03b2_1949_, lean_object* v_f_1950_, lean_object* v_x_1951_, lean_object* v_x_1952_){
_start:
{
lean_object* v___x_1953_; 
v___x_1953_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1950_, v_x_1951_, v_x_1952_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___boxed(lean_object* v_00_u03c3_1954_, lean_object* v_00_u03b1_1955_, lean_object* v_00_u03b2_1956_, lean_object* v_f_1957_, lean_object* v_x_1958_, lean_object* v_x_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7(v_00_u03c3_1954_, v_00_u03b1_1955_, v_00_u03b2_1956_, v_f_1957_, v_x_1958_, v_x_1959_);
lean_dec_ref(v_x_1958_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__8_spec__10(lean_object* v_00_u03b2_1961_, lean_object* v_x_1962_, lean_object* v_x_1963_, lean_object* v_x_1964_, lean_object* v_x_1965_){
_start:
{
lean_object* v___x_1966_; 
v___x_1966_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__5_spec__8_spec__10___redArg(v_x_1962_, v_x_1963_, v_x_1964_, v_x_1965_);
return v___x_1966_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__9(lean_object* v_00_u03b1_1967_, lean_object* v_00_u03b2_1968_, lean_object* v_00_u03c3_1969_, lean_object* v_f_1970_, lean_object* v_as_1971_, size_t v_i_1972_, size_t v_stop_1973_, lean_object* v_b_1974_){
_start:
{
lean_object* v___x_1975_; 
v___x_1975_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__9___redArg(v_f_1970_, v_as_1971_, v_i_1972_, v_stop_1973_, v_b_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1976_, lean_object* v_00_u03b2_1977_, lean_object* v_00_u03c3_1978_, lean_object* v_f_1979_, lean_object* v_as_1980_, lean_object* v_i_1981_, lean_object* v_stop_1982_, lean_object* v_b_1983_){
_start:
{
size_t v_i_boxed_1984_; size_t v_stop_boxed_1985_; lean_object* v_res_1986_; 
v_i_boxed_1984_ = lean_unbox_usize(v_i_1981_);
lean_dec(v_i_1981_);
v_stop_boxed_1985_ = lean_unbox_usize(v_stop_1982_);
lean_dec(v_stop_1982_);
v_res_1986_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__9(v_00_u03b1_1976_, v_00_u03b2_1977_, v_00_u03c3_1978_, v_f_1979_, v_as_1980_, v_i_boxed_1984_, v_stop_boxed_1985_, v_b_1983_);
lean_dec_ref(v_as_1980_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10(lean_object* v_00_u03c3_1987_, lean_object* v_00_u03b1_1988_, lean_object* v_00_u03b2_1989_, lean_object* v_f_1990_, lean_object* v_keys_1991_, lean_object* v_vals_1992_, lean_object* v_heq_1993_, lean_object* v_i_1994_, lean_object* v_acc_1995_){
_start:
{
lean_object* v___x_1996_; 
v___x_1996_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(v_f_1990_, v_keys_1991_, v_vals_1992_, v_i_1994_, v_acc_1995_);
return v___x_1996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___boxed(lean_object* v_00_u03c3_1997_, lean_object* v_00_u03b1_1998_, lean_object* v_00_u03b2_1999_, lean_object* v_f_2000_, lean_object* v_keys_2001_, lean_object* v_vals_2002_, lean_object* v_heq_2003_, lean_object* v_i_2004_, lean_object* v_acc_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10(v_00_u03c3_1997_, v_00_u03b1_1998_, v_00_u03b2_1999_, v_f_2000_, v_keys_2001_, v_vals_2002_, v_heq_2003_, v_i_2004_, v_acc_2005_);
lean_dec_ref(v_vals_2002_);
lean_dec_ref(v_keys_2001_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary(lean_object* v_env_2007_, lean_object* v_fid_2008_, lean_object* v_v_2009_){
_start:
{
lean_object* v___x_2010_; lean_object* v_toEnvExtension_2011_; lean_object* v_asyncMode_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2010_ = l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt;
v_toEnvExtension_2011_ = lean_ctor_get(v___x_2010_, 0);
v_asyncMode_2012_ = lean_ctor_get(v_toEnvExtension_2011_, 2);
v___x_2013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2013_, 0, v_fid_2008_);
lean_ctor_set(v___x_2013_, 1, v_v_2009_);
v___x_2014_ = lean_box(0);
v___x_2015_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2010_, v_env_2007_, v___x_2013_, v_asyncMode_2012_, v___x_2014_);
return v___x_2015_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_2016_, lean_object* v_vals_2017_, lean_object* v_i_2018_, lean_object* v_k_2019_){
_start:
{
lean_object* v___x_2020_; uint8_t v___x_2021_; 
v___x_2020_ = lean_array_get_size(v_keys_2016_);
v___x_2021_ = lean_nat_dec_lt(v_i_2018_, v___x_2020_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; 
lean_dec(v_i_2018_);
v___x_2022_ = lean_box(0);
return v___x_2022_;
}
else
{
lean_object* v_k_x27_2023_; uint8_t v___x_2024_; 
v_k_x27_2023_ = lean_array_fget_borrowed(v_keys_2016_, v_i_2018_);
v___x_2024_ = lean_name_eq(v_k_2019_, v_k_x27_2023_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2025_ = lean_unsigned_to_nat(1u);
v___x_2026_ = lean_nat_add(v_i_2018_, v___x_2025_);
lean_dec(v_i_2018_);
v_i_2018_ = v___x_2026_;
goto _start;
}
else
{
lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2028_ = lean_array_fget_borrowed(v_vals_2017_, v_i_2018_);
lean_dec(v_i_2018_);
lean_inc(v___x_2028_);
v___x_2029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2029_, 0, v___x_2028_);
return v___x_2029_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_2030_, lean_object* v_vals_2031_, lean_object* v_i_2032_, lean_object* v_k_2033_){
_start:
{
lean_object* v_res_2034_; 
v_res_2034_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(v_keys_2030_, v_vals_2031_, v_i_2032_, v_k_2033_);
lean_dec(v_k_2033_);
lean_dec_ref(v_vals_2031_);
lean_dec_ref(v_keys_2030_);
return v_res_2034_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(lean_object* v_x_2035_, size_t v_x_2036_, lean_object* v_x_2037_){
_start:
{
if (lean_obj_tag(v_x_2035_) == 0)
{
lean_object* v_es_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2059_; 
v_es_2038_ = lean_ctor_get(v_x_2035_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_x_2035_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2040_ = v_x_2035_;
v_isShared_2041_ = v_isSharedCheck_2059_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_es_2038_);
lean_dec(v_x_2035_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2059_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; size_t v___x_2043_; size_t v___x_2044_; size_t v___x_2045_; lean_object* v_j_2046_; lean_object* v___x_2047_; 
v___x_2042_ = lean_box(2);
v___x_2043_ = ((size_t)5ULL);
v___x_2044_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_2045_ = lean_usize_land(v_x_2036_, v___x_2044_);
v_j_2046_ = lean_usize_to_nat(v___x_2045_);
v___x_2047_ = lean_array_get(v___x_2042_, v_es_2038_, v_j_2046_);
lean_dec(v_j_2046_);
lean_dec_ref(v_es_2038_);
switch(lean_obj_tag(v___x_2047_))
{
case 0:
{
lean_object* v_key_2048_; lean_object* v_val_2049_; uint8_t v___x_2050_; 
v_key_2048_ = lean_ctor_get(v___x_2047_, 0);
lean_inc(v_key_2048_);
v_val_2049_ = lean_ctor_get(v___x_2047_, 1);
lean_inc(v_val_2049_);
lean_dec_ref(v___x_2047_);
v___x_2050_ = lean_name_eq(v_x_2037_, v_key_2048_);
lean_dec(v_key_2048_);
if (v___x_2050_ == 0)
{
lean_object* v___x_2051_; 
lean_dec(v_val_2049_);
lean_del_object(v___x_2040_);
v___x_2051_ = lean_box(0);
return v___x_2051_;
}
else
{
lean_object* v___x_2053_; 
if (v_isShared_2041_ == 0)
{
lean_ctor_set_tag(v___x_2040_, 1);
lean_ctor_set(v___x_2040_, 0, v_val_2049_);
v___x_2053_ = v___x_2040_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v_val_2049_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
return v___x_2053_;
}
}
}
case 1:
{
lean_object* v_node_2055_; size_t v___x_2056_; 
lean_del_object(v___x_2040_);
v_node_2055_ = lean_ctor_get(v___x_2047_, 0);
lean_inc(v_node_2055_);
lean_dec_ref(v___x_2047_);
v___x_2056_ = lean_usize_shift_right(v_x_2036_, v___x_2043_);
v_x_2035_ = v_node_2055_;
v_x_2036_ = v___x_2056_;
goto _start;
}
default: 
{
lean_object* v___x_2058_; 
lean_del_object(v___x_2040_);
v___x_2058_ = lean_box(0);
return v___x_2058_;
}
}
}
}
else
{
lean_object* v_ks_2060_; lean_object* v_vs_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; 
v_ks_2060_ = lean_ctor_get(v_x_2035_, 0);
lean_inc_ref(v_ks_2060_);
v_vs_2061_ = lean_ctor_get(v_x_2035_, 1);
lean_inc_ref(v_vs_2061_);
lean_dec_ref(v_x_2035_);
v___x_2062_ = lean_unsigned_to_nat(0u);
v___x_2063_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(v_ks_2060_, v_vs_2061_, v___x_2062_, v_x_2037_);
lean_dec_ref(v_vs_2061_);
lean_dec_ref(v_ks_2060_);
return v___x_2063_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_2064_, lean_object* v_x_2065_, lean_object* v_x_2066_){
_start:
{
size_t v_x_396__boxed_2067_; lean_object* v_res_2068_; 
v_x_396__boxed_2067_ = lean_unbox_usize(v_x_2065_);
lean_dec(v_x_2065_);
v_res_2068_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(v_x_2064_, v_x_396__boxed_2067_, v_x_2066_);
lean_dec(v_x_2066_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(lean_object* v_x_2069_, lean_object* v_x_2070_){
_start:
{
uint64_t v___y_2072_; 
if (lean_obj_tag(v_x_2070_) == 0)
{
uint64_t v___x_2075_; 
v___x_2075_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___closed__0);
v___y_2072_ = v___x_2075_;
goto v___jp_2071_;
}
else
{
uint64_t v_hash_2076_; 
v_hash_2076_ = lean_ctor_get_uint64(v_x_2070_, sizeof(void*)*2);
v___y_2072_ = v_hash_2076_;
goto v___jp_2071_;
}
v___jp_2071_:
{
size_t v___x_2073_; lean_object* v___x_2074_; 
v___x_2073_ = lean_uint64_to_usize(v___y_2072_);
v___x_2074_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(v_x_2069_, v___x_2073_, v_x_2070_);
return v___x_2074_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg___boxed(lean_object* v_x_2077_, lean_object* v_x_2078_){
_start:
{
lean_object* v_res_2079_; 
v_res_2079_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(v_x_2077_, v_x_2078_);
lean_dec(v_x_2078_);
return v_res_2079_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(lean_object* v_as_2080_, lean_object* v_k_2081_, lean_object* v_x_2082_, lean_object* v_x_2083_){
_start:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v_m_2086_; lean_object* v_a_2087_; uint8_t v___x_2088_; 
v___x_2084_ = lean_nat_add(v_x_2082_, v_x_2083_);
v___x_2085_ = lean_unsigned_to_nat(1u);
v_m_2086_ = lean_nat_shiftr(v___x_2084_, v___x_2085_);
lean_dec(v___x_2084_);
v_a_2087_ = lean_array_fget_borrowed(v_as_2080_, v_m_2086_);
v___x_2088_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v_a_2087_, v_k_2081_);
if (v___x_2088_ == 0)
{
uint8_t v___x_2089_; 
lean_dec(v_x_2083_);
v___x_2089_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v_k_2081_, v_a_2087_);
if (v___x_2089_ == 0)
{
lean_object* v___x_2090_; 
lean_dec(v_m_2086_);
lean_dec(v_x_2082_);
lean_inc(v_a_2087_);
v___x_2090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2090_, 0, v_a_2087_);
return v___x_2090_;
}
else
{
lean_object* v___x_2091_; uint8_t v___x_2092_; 
v___x_2091_ = lean_unsigned_to_nat(0u);
v___x_2092_ = lean_nat_dec_eq(v_m_2086_, v___x_2091_);
if (v___x_2092_ == 0)
{
lean_object* v___x_2093_; uint8_t v___x_2094_; 
v___x_2093_ = lean_nat_sub(v_m_2086_, v___x_2085_);
lean_dec(v_m_2086_);
v___x_2094_ = lean_nat_dec_lt(v___x_2093_, v_x_2082_);
if (v___x_2094_ == 0)
{
v_x_2083_ = v___x_2093_;
goto _start;
}
else
{
lean_object* v___x_2096_; 
lean_dec(v___x_2093_);
lean_dec(v_x_2082_);
v___x_2096_ = lean_box(0);
return v___x_2096_;
}
}
else
{
lean_object* v___x_2097_; 
lean_dec(v_m_2086_);
lean_dec(v_x_2082_);
v___x_2097_ = lean_box(0);
return v___x_2097_;
}
}
}
else
{
lean_object* v___x_2098_; uint8_t v___x_2099_; 
lean_dec(v_x_2082_);
v___x_2098_ = lean_nat_add(v_m_2086_, v___x_2085_);
lean_dec(v_m_2086_);
v___x_2099_ = lean_nat_dec_le(v___x_2098_, v_x_2083_);
if (v___x_2099_ == 0)
{
lean_object* v___x_2100_; 
lean_dec(v___x_2098_);
lean_dec(v_x_2083_);
v___x_2100_ = lean_box(0);
return v___x_2100_;
}
else
{
v_x_2082_ = v___x_2098_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg___boxed(lean_object* v_as_2102_, lean_object* v_k_2103_, lean_object* v_x_2104_, lean_object* v_x_2105_){
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(v_as_2102_, v_k_2103_, v_x_2104_, v_x_2105_);
lean_dec_ref(v_k_2103_);
lean_dec_ref(v_as_2102_);
return v_res_2106_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__2(void){
_start:
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2109_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1));
v___x_2110_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0));
v___x_2111_ = l_Lean_PersistentHashMap_instInhabited(lean_box(0), lean_box(0), v___x_2110_, v___x_2109_);
return v___x_2111_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__3(void){
_start:
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2112_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__2, &l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__2_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__2);
v___x_2113_ = lean_box(0);
v___x_2114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2113_);
lean_ctor_set(v___x_2114_, 1, v___x_2112_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f(lean_object* v_env_2115_, lean_object* v_fid_2116_){
_start:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2126_; 
v___x_2117_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__3, &l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__3_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__3);
v___x_2118_ = l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt;
v___x_2126_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2115_, v_fid_2116_);
if (lean_obj_tag(v___x_2126_) == 0)
{
goto v___jp_2119_;
}
else
{
lean_object* v_val_2127_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; uint8_t v___x_2152_; 
v_val_2127_ = lean_ctor_get(v___x_2126_, 0);
lean_inc(v_val_2127_);
lean_dec_ref(v___x_2126_);
v___x_2149_ = l___private_Lean_Environment_0__Lean_PersistentEnvExtension_getModuleIREntries_unsafe__1(lean_box(0), lean_box(0), lean_box(0), v___x_2117_, v___x_2118_, v_env_2115_, v_val_2127_);
v___x_2150_ = lean_unsigned_to_nat(0u);
v___x_2151_ = lean_array_get_size(v___x_2149_);
v___x_2152_ = lean_nat_dec_lt(v___x_2150_, v___x_2151_);
if (v___x_2152_ == 0)
{
lean_dec_ref(v___x_2149_);
goto v___jp_2128_;
}
else
{
lean_object* v___x_2153_; lean_object* v___x_2154_; uint8_t v___x_2155_; 
v___x_2153_ = lean_unsigned_to_nat(1u);
v___x_2154_ = lean_nat_sub(v___x_2151_, v___x_2153_);
v___x_2155_ = lean_nat_dec_le(v___x_2150_, v___x_2154_);
if (v___x_2155_ == 0)
{
lean_dec(v___x_2154_);
lean_dec_ref(v___x_2149_);
goto v___jp_2128_;
}
else
{
lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2156_ = lean_box(0);
lean_inc(v_fid_2116_);
v___x_2157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2157_, 0, v_fid_2116_);
lean_ctor_set(v___x_2157_, 1, v___x_2156_);
v___x_2158_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(v___x_2149_, v___x_2157_, v___x_2150_, v___x_2154_);
lean_dec_ref(v___x_2157_);
lean_dec_ref(v___x_2149_);
if (lean_obj_tag(v___x_2158_) == 0)
{
goto v___jp_2128_;
}
else
{
lean_object* v_val_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2167_; 
lean_dec(v_val_2127_);
lean_dec(v_fid_2116_);
lean_dec_ref(v_env_2115_);
v_val_2159_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2167_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2161_ = v___x_2158_;
v_isShared_2162_ = v_isSharedCheck_2167_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_val_2159_);
lean_dec(v___x_2158_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2167_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v_snd_2163_; lean_object* v___x_2165_; 
v_snd_2163_ = lean_ctor_get(v_val_2159_, 1);
lean_inc(v_snd_2163_);
lean_dec(v_val_2159_);
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 0, v_snd_2163_);
v___x_2165_ = v___x_2161_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v_snd_2163_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
}
}
}
v___jp_2128_:
{
uint8_t v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; uint8_t v___x_2133_; 
v___x_2129_ = 0;
v___x_2130_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2117_, v___x_2118_, v_env_2115_, v_val_2127_, v___x_2129_);
lean_dec(v_val_2127_);
v___x_2131_ = lean_unsigned_to_nat(0u);
v___x_2132_ = lean_array_get_size(v___x_2130_);
v___x_2133_ = lean_nat_dec_lt(v___x_2131_, v___x_2132_);
if (v___x_2133_ == 0)
{
lean_dec_ref(v___x_2130_);
goto v___jp_2119_;
}
else
{
lean_object* v___x_2134_; lean_object* v___x_2135_; uint8_t v___x_2136_; 
v___x_2134_ = lean_unsigned_to_nat(1u);
v___x_2135_ = lean_nat_sub(v___x_2132_, v___x_2134_);
v___x_2136_ = lean_nat_dec_le(v___x_2131_, v___x_2135_);
if (v___x_2136_ == 0)
{
lean_dec(v___x_2135_);
lean_dec_ref(v___x_2130_);
goto v___jp_2119_;
}
else
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2137_ = lean_box(0);
lean_inc(v_fid_2116_);
v___x_2138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2138_, 0, v_fid_2116_);
lean_ctor_set(v___x_2138_, 1, v___x_2137_);
v___x_2139_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(v___x_2130_, v___x_2138_, v___x_2131_, v___x_2135_);
lean_dec_ref(v___x_2138_);
lean_dec_ref(v___x_2130_);
if (lean_obj_tag(v___x_2139_) == 0)
{
goto v___jp_2119_;
}
else
{
lean_object* v_val_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2148_; 
lean_dec(v_fid_2116_);
lean_dec_ref(v_env_2115_);
v_val_2140_ = lean_ctor_get(v___x_2139_, 0);
v_isSharedCheck_2148_ = !lean_is_exclusive(v___x_2139_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2142_ = v___x_2139_;
v_isShared_2143_ = v_isSharedCheck_2148_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_val_2140_);
lean_dec(v___x_2139_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2148_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v_snd_2144_; lean_object* v___x_2146_; 
v_snd_2144_ = lean_ctor_get(v_val_2140_, 1);
lean_inc(v_snd_2144_);
lean_dec(v_val_2140_);
if (v_isShared_2143_ == 0)
{
lean_ctor_set(v___x_2142_, 0, v_snd_2144_);
v___x_2146_ = v___x_2142_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v_snd_2144_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
}
}
}
}
}
v___jp_2119_:
{
lean_object* v_toEnvExtension_2120_; lean_object* v_asyncMode_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v_snd_2124_; lean_object* v___x_2125_; 
v_toEnvExtension_2120_ = lean_ctor_get(v___x_2118_, 0);
v_asyncMode_2121_ = lean_ctor_get(v_toEnvExtension_2120_, 2);
v___x_2122_ = lean_box(0);
v___x_2123_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2117_, v___x_2118_, v_env_2115_, v_asyncMode_2121_, v___x_2122_);
v_snd_2124_ = lean_ctor_get(v___x_2123_, 1);
lean_inc(v_snd_2124_);
lean_dec(v___x_2123_);
v___x_2125_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(v_snd_2124_, v_fid_2116_);
lean_dec(v_fid_2116_);
return v___x_2125_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0(lean_object* v_00_u03b2_2168_, lean_object* v_x_2169_, lean_object* v_x_2170_){
_start:
{
lean_object* v___x_2171_; 
v___x_2171_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(v_x_2169_, v_x_2170_);
return v___x_2171_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___boxed(lean_object* v_00_u03b2_2172_, lean_object* v_x_2173_, lean_object* v_x_2174_){
_start:
{
lean_object* v_res_2175_; 
v_res_2175_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0(v_00_u03b2_2172_, v_x_2173_, v_x_2174_);
lean_dec(v_x_2174_);
return v_res_2175_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1(lean_object* v_as_2176_, lean_object* v_k_2177_, lean_object* v_x_2178_, lean_object* v_x_2179_, lean_object* v_x_2180_){
_start:
{
lean_object* v___x_2181_; 
v___x_2181_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(v_as_2176_, v_k_2177_, v_x_2178_, v_x_2179_);
return v___x_2181_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___boxed(lean_object* v_as_2182_, lean_object* v_k_2183_, lean_object* v_x_2184_, lean_object* v_x_2185_, lean_object* v_x_2186_){
_start:
{
lean_object* v_res_2187_; 
v_res_2187_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1(v_as_2182_, v_k_2183_, v_x_2184_, v_x_2185_, v_x_2186_);
lean_dec_ref(v_k_2183_);
lean_dec_ref(v_as_2182_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0(lean_object* v_00_u03b2_2188_, lean_object* v_x_2189_, size_t v_x_2190_, lean_object* v_x_2191_){
_start:
{
lean_object* v___x_2192_; 
v___x_2192_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(v_x_2189_, v_x_2190_, v_x_2191_);
return v___x_2192_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2193_, lean_object* v_x_2194_, lean_object* v_x_2195_, lean_object* v_x_2196_){
_start:
{
size_t v_x_649__boxed_2197_; lean_object* v_res_2198_; 
v_x_649__boxed_2197_ = lean_unbox_usize(v_x_2195_);
lean_dec(v_x_2195_);
v_res_2198_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0(v_00_u03b2_2193_, v_x_2194_, v_x_649__boxed_2197_, v_x_2196_);
lean_dec(v_x_2196_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2199_, lean_object* v_keys_2200_, lean_object* v_vals_2201_, lean_object* v_heq_2202_, lean_object* v_i_2203_, lean_object* v_k_2204_){
_start:
{
lean_object* v___x_2205_; 
v___x_2205_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(v_keys_2200_, v_vals_2201_, v_i_2203_, v_k_2204_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2206_, lean_object* v_keys_2207_, lean_object* v_vals_2208_, lean_object* v_heq_2209_, lean_object* v_i_2210_, lean_object* v_k_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1(v_00_u03b2_2206_, v_keys_2207_, v_vals_2208_, v_heq_2209_, v_i_2210_, v_k_2211_);
lean_dec(v_k_2211_);
lean_dec_ref(v_vals_2208_);
lean_dec_ref(v_keys_2207_);
return v_res_2212_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__2(void){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2215_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__1));
v___x_2216_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0));
v___x_2217_ = l_Std_HashMap_instInhabited(lean_box(0), lean_box(0), v___x_2216_, v___x_2215_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(lean_object* v_a_2218_, lean_object* v_a_2219_){
_start:
{
lean_object* v___x_2221_; lean_object* v_assignments_2222_; lean_object* v_currFnIdx_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2221_ = lean_st_ref_get(v_a_2219_);
v_assignments_2222_ = lean_ctor_get(v___x_2221_, 0);
lean_inc_ref(v_assignments_2222_);
lean_dec(v___x_2221_);
v_currFnIdx_2223_ = lean_ctor_get(v_a_2218_, 1);
v___x_2224_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__2, &l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__2);
v___x_2225_ = lean_array_get(v___x_2224_, v_assignments_2222_, v_currFnIdx_2223_);
lean_dec_ref(v_assignments_2222_);
v___x_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___boxed(lean_object* v_a_2227_, lean_object* v_a_2228_, lean_object* v_a_2229_){
_start:
{
lean_object* v_res_2230_; 
v_res_2230_ = l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(v_a_2227_, v_a_2228_);
lean_dec(v_a_2228_);
lean_dec_ref(v_a_2227_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment(lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_){
_start:
{
lean_object* v___x_2238_; 
v___x_2238_ = l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(v_a_2231_, v_a_2232_);
return v___x_2238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___boxed(lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_){
_start:
{
lean_object* v_res_2246_; 
v_res_2246_ = l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment(v_a_2239_, v_a_2240_, v_a_2241_, v_a_2242_, v_a_2243_, v_a_2244_);
lean_dec(v_a_2244_);
lean_dec_ref(v_a_2243_);
lean_dec(v_a_2242_);
lean_dec_ref(v_a_2241_);
lean_dec(v_a_2240_);
lean_dec_ref(v_a_2239_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(lean_object* v_funIdx_2247_, lean_object* v_a_2248_){
_start:
{
lean_object* v___x_2250_; lean_object* v_funVals_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2250_ = lean_st_ref_get(v_a_2248_);
v_funVals_2251_ = lean_ctor_get(v___x_2250_, 1);
lean_inc_ref(v_funVals_2251_);
lean_dec(v___x_2250_);
v___x_2252_ = lean_box(0);
v___x_2253_ = lean_array_get(v___x_2252_, v_funVals_2251_, v_funIdx_2247_);
lean_dec_ref(v_funVals_2251_);
v___x_2254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2253_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg___boxed(lean_object* v_funIdx_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_funIdx_2255_, v_a_2256_);
lean_dec(v_a_2256_);
lean_dec(v_funIdx_2255_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal(lean_object* v_funIdx_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_, lean_object* v_a_2264_, lean_object* v_a_2265_){
_start:
{
lean_object* v___x_2267_; 
v___x_2267_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_funIdx_2259_, v_a_2261_);
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___boxed(lean_object* v_funIdx_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal(v_funIdx_2268_, v_a_2269_, v_a_2270_, v_a_2271_, v_a_2272_, v_a_2273_, v_a_2274_);
lean_dec(v_a_2274_);
lean_dec_ref(v_a_2273_);
lean_dec(v_a_2272_);
lean_dec_ref(v_a_2271_);
lean_dec(v_a_2270_);
lean_dec_ref(v_a_2269_);
lean_dec(v_funIdx_2268_);
return v_res_2276_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg___lam__0(lean_object* v_declName_2277_, lean_object* v_x_2278_){
_start:
{
lean_object* v_toSignature_2279_; lean_object* v_name_2280_; uint8_t v___x_2281_; 
v_toSignature_2279_ = lean_ctor_get(v_x_2278_, 0);
v_name_2280_ = lean_ctor_get(v_toSignature_2279_, 0);
v___x_2281_ = lean_name_eq(v_name_2280_, v_declName_2277_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg___lam__0___boxed(lean_object* v_declName_2282_, lean_object* v_x_2283_){
_start:
{
uint8_t v_res_2284_; lean_object* v_r_2285_; 
v_res_2284_ = l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg___lam__0(v_declName_2282_, v_x_2283_);
lean_dec_ref(v_x_2283_);
lean_dec(v_declName_2282_);
v_r_2285_ = lean_box(v_res_2284_);
return v_r_2285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(lean_object* v_declName_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_){
_start:
{
lean_object* v_decls_2290_; lean_object* v___f_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v_decls_2290_ = lean_ctor_get(v_a_2287_, 0);
v___f_2291_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2291_, 0, v_declName_2286_);
v___x_2292_ = lean_unsigned_to_nat(0u);
v___x_2293_ = l_Array_findIdx_x3f_loop___redArg(v___f_2291_, v_decls_2290_, v___x_2292_);
if (lean_obj_tag(v___x_2293_) == 0)
{
lean_object* v___x_2294_; lean_object* v___x_2295_; 
v___x_2294_ = lean_box(0);
v___x_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2294_);
return v___x_2295_;
}
else
{
lean_object* v_val_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2312_; 
v_val_2296_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2298_ = v___x_2293_;
v_isShared_2299_ = v_isSharedCheck_2312_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_val_2296_);
lean_dec(v___x_2293_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2312_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2300_; lean_object* v_a_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2311_; 
v___x_2300_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_val_2296_, v_a_2288_);
lean_dec(v_val_2296_);
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2303_ = v___x_2300_;
v_isShared_2304_ = v_isSharedCheck_2311_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_a_2301_);
lean_dec(v___x_2300_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2311_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v___x_2306_; 
if (v_isShared_2299_ == 0)
{
lean_ctor_set(v___x_2298_, 0, v_a_2301_);
v___x_2306_ = v___x_2298_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v_a_2301_);
v___x_2306_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
lean_object* v___x_2308_; 
if (v_isShared_2304_ == 0)
{
lean_ctor_set(v___x_2303_, 0, v___x_2306_);
v___x_2308_ = v___x_2303_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v___x_2306_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg___boxed(lean_object* v_declName_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_){
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(v_declName_2313_, v_a_2314_, v_a_2315_);
lean_dec(v_a_2315_);
lean_dec_ref(v_a_2314_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f(lean_object* v_declName_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_){
_start:
{
lean_object* v___x_2326_; 
v___x_2326_ = l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(v_declName_2318_, v_a_2319_, v_a_2320_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___boxed(lean_object* v_declName_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f(v_declName_2327_, v_a_2328_, v_a_2329_, v_a_2330_, v_a_2331_, v_a_2332_, v_a_2333_);
lean_dec(v_a_2333_);
lean_dec_ref(v_a_2332_);
lean_dec(v_a_2331_);
lean_dec_ref(v_a_2330_);
lean_dec(v_a_2329_);
lean_dec_ref(v_a_2328_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(lean_object* v_f_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_){
_start:
{
lean_object* v___x_2340_; lean_object* v_currFnIdx_2341_; lean_object* v_assignments_2342_; lean_object* v_funVals_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2361_; 
v___x_2340_ = lean_st_ref_take(v_a_2338_);
v_currFnIdx_2341_ = lean_ctor_get(v_a_2337_, 1);
v_assignments_2342_ = lean_ctor_get(v___x_2340_, 0);
v_funVals_2343_ = lean_ctor_get(v___x_2340_, 1);
v_isSharedCheck_2361_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2361_ == 0)
{
v___x_2345_ = v___x_2340_;
v_isShared_2346_ = v_isSharedCheck_2361_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_funVals_2343_);
lean_inc(v_assignments_2342_);
lean_dec(v___x_2340_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2361_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2347_; lean_object* v___y_2349_; lean_object* v___x_2355_; uint8_t v___x_2356_; 
v___x_2347_ = lean_box(0);
v___x_2355_ = lean_array_get_size(v_assignments_2342_);
v___x_2356_ = lean_nat_dec_lt(v_currFnIdx_2341_, v___x_2355_);
if (v___x_2356_ == 0)
{
lean_dec_ref(v_f_2336_);
v___y_2349_ = v_assignments_2342_;
goto v___jp_2348_;
}
else
{
lean_object* v_v_2357_; lean_object* v_xs_x27_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v_v_2357_ = lean_array_fget(v_assignments_2342_, v_currFnIdx_2341_);
v_xs_x27_2358_ = lean_array_fset(v_assignments_2342_, v_currFnIdx_2341_, v___x_2347_);
v___x_2359_ = lean_apply_1(v_f_2336_, v_v_2357_);
v___x_2360_ = lean_array_fset(v_xs_x27_2358_, v_currFnIdx_2341_, v___x_2359_);
v___y_2349_ = v___x_2360_;
goto v___jp_2348_;
}
v___jp_2348_:
{
lean_object* v___x_2351_; 
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 0, v___y_2349_);
v___x_2351_ = v___x_2345_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v___y_2349_);
lean_ctor_set(v_reuseFailAlloc_2354_, 1, v_funVals_2343_);
v___x_2351_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
lean_object* v___x_2352_; lean_object* v___x_2353_; 
v___x_2352_ = lean_st_ref_set(v_a_2338_, v___x_2351_);
v___x_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2347_);
return v___x_2353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg___boxed(lean_object* v_f_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_){
_start:
{
lean_object* v_res_2366_; 
v_res_2366_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v_f_2362_, v_a_2363_, v_a_2364_);
lean_dec(v_a_2364_);
lean_dec_ref(v_a_2363_);
return v_res_2366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment(lean_object* v_f_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_){
_start:
{
lean_object* v___x_2375_; 
v___x_2375_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v_f_2367_, v_a_2368_, v_a_2369_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___boxed(lean_object* v_f_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_){
_start:
{
lean_object* v_res_2384_; 
v_res_2384_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment(v_f_2376_, v_a_2377_, v_a_2378_, v_a_2379_, v_a_2380_, v_a_2381_, v_a_2382_);
lean_dec(v_a_2382_);
lean_dec_ref(v_a_2381_);
lean_dec(v_a_2380_);
lean_dec_ref(v_a_2379_);
lean_dec(v_a_2378_);
lean_dec_ref(v_a_2377_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(lean_object* v_a_2385_, lean_object* v_fallback_2386_, lean_object* v_x_2387_){
_start:
{
if (lean_obj_tag(v_x_2387_) == 0)
{
lean_inc(v_fallback_2386_);
return v_fallback_2386_;
}
else
{
lean_object* v_key_2388_; lean_object* v_value_2389_; lean_object* v_tail_2390_; uint8_t v___x_2391_; 
v_key_2388_ = lean_ctor_get(v_x_2387_, 0);
v_value_2389_ = lean_ctor_get(v_x_2387_, 1);
v_tail_2390_ = lean_ctor_get(v_x_2387_, 2);
v___x_2391_ = l_Lean_instBEqFVarId_beq(v_key_2388_, v_a_2385_);
if (v___x_2391_ == 0)
{
v_x_2387_ = v_tail_2390_;
goto _start;
}
else
{
lean_inc(v_value_2389_);
return v_value_2389_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg___boxed(lean_object* v_a_2393_, lean_object* v_fallback_2394_, lean_object* v_x_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(v_a_2393_, v_fallback_2394_, v_x_2395_);
lean_dec(v_x_2395_);
lean_dec(v_fallback_2394_);
lean_dec(v_a_2393_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(lean_object* v_m_2397_, lean_object* v_a_2398_, lean_object* v_fallback_2399_){
_start:
{
lean_object* v_buckets_2400_; lean_object* v___x_2401_; uint64_t v___x_2402_; uint64_t v___x_2403_; uint64_t v___x_2404_; uint64_t v_fold_2405_; uint64_t v___x_2406_; uint64_t v___x_2407_; uint64_t v___x_2408_; size_t v___x_2409_; size_t v___x_2410_; size_t v___x_2411_; size_t v___x_2412_; size_t v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; 
v_buckets_2400_ = lean_ctor_get(v_m_2397_, 1);
v___x_2401_ = lean_array_get_size(v_buckets_2400_);
v___x_2402_ = l_Lean_instHashableFVarId_hash(v_a_2398_);
v___x_2403_ = 32ULL;
v___x_2404_ = lean_uint64_shift_right(v___x_2402_, v___x_2403_);
v_fold_2405_ = lean_uint64_xor(v___x_2402_, v___x_2404_);
v___x_2406_ = 16ULL;
v___x_2407_ = lean_uint64_shift_right(v_fold_2405_, v___x_2406_);
v___x_2408_ = lean_uint64_xor(v_fold_2405_, v___x_2407_);
v___x_2409_ = lean_uint64_to_usize(v___x_2408_);
v___x_2410_ = lean_usize_of_nat(v___x_2401_);
v___x_2411_ = ((size_t)1ULL);
v___x_2412_ = lean_usize_sub(v___x_2410_, v___x_2411_);
v___x_2413_ = lean_usize_land(v___x_2409_, v___x_2412_);
v___x_2414_ = lean_array_uget_borrowed(v_buckets_2400_, v___x_2413_);
v___x_2415_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(v_a_2398_, v_fallback_2399_, v___x_2414_);
return v___x_2415_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg___boxed(lean_object* v_m_2416_, lean_object* v_a_2417_, lean_object* v_fallback_2418_){
_start:
{
lean_object* v_res_2419_; 
v_res_2419_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(v_m_2416_, v_a_2417_, v_fallback_2418_);
lean_dec(v_fallback_2418_);
lean_dec(v_a_2417_);
lean_dec_ref(v_m_2416_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(lean_object* v_var_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_){
_start:
{
lean_object* v___x_2424_; lean_object* v_a_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2434_; 
v___x_2424_ = l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(v_a_2421_, v_a_2422_);
v_a_2425_ = lean_ctor_get(v___x_2424_, 0);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2424_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2427_ = v___x_2424_;
v_isShared_2428_ = v_isSharedCheck_2434_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_a_2425_);
lean_dec(v___x_2424_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2434_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2432_; 
v___x_2429_ = lean_box(0);
v___x_2430_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(v_a_2425_, v_var_2420_, v___x_2429_);
lean_dec(v_a_2425_);
if (v_isShared_2428_ == 0)
{
lean_ctor_set(v___x_2427_, 0, v___x_2430_);
v___x_2432_ = v___x_2427_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v___x_2430_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg___boxed(lean_object* v_var_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_){
_start:
{
lean_object* v_res_2439_; 
v_res_2439_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_var_2435_, v_a_2436_, v_a_2437_);
lean_dec(v_a_2437_);
lean_dec_ref(v_a_2436_);
lean_dec(v_var_2435_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue(lean_object* v_var_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_, lean_object* v_a_2444_, lean_object* v_a_2445_, lean_object* v_a_2446_){
_start:
{
lean_object* v___x_2448_; 
v___x_2448_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_var_2440_, v_a_2441_, v_a_2442_);
return v___x_2448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___boxed(lean_object* v_var_2449_, lean_object* v_a_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue(v_var_2449_, v_a_2450_, v_a_2451_, v_a_2452_, v_a_2453_, v_a_2454_, v_a_2455_);
lean_dec(v_a_2455_);
lean_dec_ref(v_a_2454_);
lean_dec(v_a_2453_);
lean_dec_ref(v_a_2452_);
lean_dec(v_a_2451_);
lean_dec_ref(v_a_2450_);
lean_dec(v_var_2449_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0(lean_object* v_00_u03b2_2458_, lean_object* v_m_2459_, lean_object* v_a_2460_, lean_object* v_fallback_2461_){
_start:
{
lean_object* v___x_2462_; 
v___x_2462_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(v_m_2459_, v_a_2460_, v_fallback_2461_);
return v___x_2462_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___boxed(lean_object* v_00_u03b2_2463_, lean_object* v_m_2464_, lean_object* v_a_2465_, lean_object* v_fallback_2466_){
_start:
{
lean_object* v_res_2467_; 
v_res_2467_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0(v_00_u03b2_2463_, v_m_2464_, v_a_2465_, v_fallback_2466_);
lean_dec(v_fallback_2466_);
lean_dec(v_a_2465_);
lean_dec_ref(v_m_2464_);
return v_res_2467_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0(lean_object* v_00_u03b2_2468_, lean_object* v_a_2469_, lean_object* v_fallback_2470_, lean_object* v_x_2471_){
_start:
{
lean_object* v___x_2472_; 
v___x_2472_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(v_a_2469_, v_fallback_2470_, v_x_2471_);
return v___x_2472_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2473_, lean_object* v_a_2474_, lean_object* v_fallback_2475_, lean_object* v_x_2476_){
_start:
{
lean_object* v_res_2477_; 
v_res_2477_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0(v_00_u03b2_2473_, v_a_2474_, v_fallback_2475_, v_x_2476_);
lean_dec(v_x_2476_);
lean_dec(v_fallback_2475_);
lean_dec(v_a_2474_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(lean_object* v_arg_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_){
_start:
{
if (lean_obj_tag(v_arg_2478_) == 1)
{
lean_object* v_fvarId_2482_; lean_object* v___x_2483_; 
v_fvarId_2482_ = lean_ctor_get(v_arg_2478_, 0);
v___x_2483_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_2482_, v_a_2479_, v_a_2480_);
return v___x_2483_;
}
else
{
lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2484_ = lean_box(1);
v___x_2485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2484_);
return v___x_2485_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg___boxed(lean_object* v_arg_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_, lean_object* v_a_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(v_arg_2486_, v_a_2487_, v_a_2488_);
lean_dec(v_a_2488_);
lean_dec_ref(v_a_2487_);
lean_dec(v_arg_2486_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue(lean_object* v_arg_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_){
_start:
{
lean_object* v___x_2499_; 
v___x_2499_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(v_arg_2491_, v_a_2492_, v_a_2493_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___boxed(lean_object* v_arg_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue(v_arg_2500_, v_a_2501_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_);
lean_dec(v_a_2506_);
lean_dec_ref(v_a_2505_);
lean_dec(v_a_2504_);
lean_dec_ref(v_a_2503_);
lean_dec(v_a_2502_);
lean_dec_ref(v_a_2501_);
lean_dec(v_arg_2500_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(lean_object* v_a_2509_, lean_object* v_b_2510_, lean_object* v_x_2511_){
_start:
{
if (lean_obj_tag(v_x_2511_) == 0)
{
lean_dec(v_b_2510_);
lean_dec(v_a_2509_);
return v_x_2511_;
}
else
{
lean_object* v_key_2512_; lean_object* v_value_2513_; lean_object* v_tail_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2526_; 
v_key_2512_ = lean_ctor_get(v_x_2511_, 0);
v_value_2513_ = lean_ctor_get(v_x_2511_, 1);
v_tail_2514_ = lean_ctor_get(v_x_2511_, 2);
v_isSharedCheck_2526_ = !lean_is_exclusive(v_x_2511_);
if (v_isSharedCheck_2526_ == 0)
{
v___x_2516_ = v_x_2511_;
v_isShared_2517_ = v_isSharedCheck_2526_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_tail_2514_);
lean_inc(v_value_2513_);
lean_inc(v_key_2512_);
lean_dec(v_x_2511_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_2526_;
goto v_resetjp_2515_;
}
v_resetjp_2515_:
{
uint8_t v___x_2518_; 
v___x_2518_ = l_Lean_instBEqFVarId_beq(v_key_2512_, v_a_2509_);
if (v___x_2518_ == 0)
{
lean_object* v___x_2519_; lean_object* v___x_2521_; 
v___x_2519_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(v_a_2509_, v_b_2510_, v_tail_2514_);
if (v_isShared_2517_ == 0)
{
lean_ctor_set(v___x_2516_, 2, v___x_2519_);
v___x_2521_ = v___x_2516_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_key_2512_);
lean_ctor_set(v_reuseFailAlloc_2522_, 1, v_value_2513_);
lean_ctor_set(v_reuseFailAlloc_2522_, 2, v___x_2519_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
return v___x_2521_;
}
}
else
{
lean_object* v___x_2524_; 
lean_dec(v_value_2513_);
lean_dec(v_key_2512_);
if (v_isShared_2517_ == 0)
{
lean_ctor_set(v___x_2516_, 1, v_b_2510_);
lean_ctor_set(v___x_2516_, 0, v_a_2509_);
v___x_2524_ = v___x_2516_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v_a_2509_);
lean_ctor_set(v_reuseFailAlloc_2525_, 1, v_b_2510_);
lean_ctor_set(v_reuseFailAlloc_2525_, 2, v_tail_2514_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_2527_, lean_object* v_x_2528_){
_start:
{
if (lean_obj_tag(v_x_2528_) == 0)
{
return v_x_2527_;
}
else
{
lean_object* v_key_2529_; lean_object* v_value_2530_; lean_object* v_tail_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2554_; 
v_key_2529_ = lean_ctor_get(v_x_2528_, 0);
v_value_2530_ = lean_ctor_get(v_x_2528_, 1);
v_tail_2531_ = lean_ctor_get(v_x_2528_, 2);
v_isSharedCheck_2554_ = !lean_is_exclusive(v_x_2528_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2533_ = v_x_2528_;
v_isShared_2534_ = v_isSharedCheck_2554_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_tail_2531_);
lean_inc(v_value_2530_);
lean_inc(v_key_2529_);
lean_dec(v_x_2528_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2554_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2535_; uint64_t v___x_2536_; uint64_t v___x_2537_; uint64_t v___x_2538_; uint64_t v_fold_2539_; uint64_t v___x_2540_; uint64_t v___x_2541_; uint64_t v___x_2542_; size_t v___x_2543_; size_t v___x_2544_; size_t v___x_2545_; size_t v___x_2546_; size_t v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2550_; 
v___x_2535_ = lean_array_get_size(v_x_2527_);
v___x_2536_ = l_Lean_instHashableFVarId_hash(v_key_2529_);
v___x_2537_ = 32ULL;
v___x_2538_ = lean_uint64_shift_right(v___x_2536_, v___x_2537_);
v_fold_2539_ = lean_uint64_xor(v___x_2536_, v___x_2538_);
v___x_2540_ = 16ULL;
v___x_2541_ = lean_uint64_shift_right(v_fold_2539_, v___x_2540_);
v___x_2542_ = lean_uint64_xor(v_fold_2539_, v___x_2541_);
v___x_2543_ = lean_uint64_to_usize(v___x_2542_);
v___x_2544_ = lean_usize_of_nat(v___x_2535_);
v___x_2545_ = ((size_t)1ULL);
v___x_2546_ = lean_usize_sub(v___x_2544_, v___x_2545_);
v___x_2547_ = lean_usize_land(v___x_2543_, v___x_2546_);
v___x_2548_ = lean_array_uget_borrowed(v_x_2527_, v___x_2547_);
lean_inc(v___x_2548_);
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 2, v___x_2548_);
v___x_2550_ = v___x_2533_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_key_2529_);
lean_ctor_set(v_reuseFailAlloc_2553_, 1, v_value_2530_);
lean_ctor_set(v_reuseFailAlloc_2553_, 2, v___x_2548_);
v___x_2550_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
lean_object* v___x_2551_; 
v___x_2551_ = lean_array_uset(v_x_2527_, v___x_2547_, v___x_2550_);
v_x_2527_ = v___x_2551_;
v_x_2528_ = v_tail_2531_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2___redArg(lean_object* v_i_2555_, lean_object* v_source_2556_, lean_object* v_target_2557_){
_start:
{
lean_object* v___x_2558_; uint8_t v___x_2559_; 
v___x_2558_ = lean_array_get_size(v_source_2556_);
v___x_2559_ = lean_nat_dec_lt(v_i_2555_, v___x_2558_);
if (v___x_2559_ == 0)
{
lean_dec_ref(v_source_2556_);
lean_dec(v_i_2555_);
return v_target_2557_;
}
else
{
lean_object* v_es_2560_; lean_object* v___x_2561_; lean_object* v_source_2562_; lean_object* v_target_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; 
v_es_2560_ = lean_array_fget(v_source_2556_, v_i_2555_);
v___x_2561_ = lean_box(0);
v_source_2562_ = lean_array_fset(v_source_2556_, v_i_2555_, v___x_2561_);
v_target_2563_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3___redArg(v_target_2557_, v_es_2560_);
v___x_2564_ = lean_unsigned_to_nat(1u);
v___x_2565_ = lean_nat_add(v_i_2555_, v___x_2564_);
lean_dec(v_i_2555_);
v_i_2555_ = v___x_2565_;
v_source_2556_ = v_source_2562_;
v_target_2557_ = v_target_2563_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1___redArg(lean_object* v_data_2567_){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v_nbuckets_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; 
v___x_2568_ = lean_array_get_size(v_data_2567_);
v___x_2569_ = lean_unsigned_to_nat(2u);
v_nbuckets_2570_ = lean_nat_mul(v___x_2568_, v___x_2569_);
v___x_2571_ = lean_unsigned_to_nat(0u);
v___x_2572_ = lean_box(0);
v___x_2573_ = lean_mk_array(v_nbuckets_2570_, v___x_2572_);
v___x_2574_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2___redArg(v___x_2571_, v_data_2567_, v___x_2573_);
return v___x_2574_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(lean_object* v_a_2575_, lean_object* v_x_2576_){
_start:
{
if (lean_obj_tag(v_x_2576_) == 0)
{
uint8_t v___x_2577_; 
v___x_2577_ = 0;
return v___x_2577_;
}
else
{
lean_object* v_key_2578_; lean_object* v_tail_2579_; uint8_t v___x_2580_; 
v_key_2578_ = lean_ctor_get(v_x_2576_, 0);
v_tail_2579_ = lean_ctor_get(v_x_2576_, 2);
v___x_2580_ = l_Lean_instBEqFVarId_beq(v_key_2578_, v_a_2575_);
if (v___x_2580_ == 0)
{
v_x_2576_ = v_tail_2579_;
goto _start;
}
else
{
return v___x_2580_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg___boxed(lean_object* v_a_2582_, lean_object* v_x_2583_){
_start:
{
uint8_t v_res_2584_; lean_object* v_r_2585_; 
v_res_2584_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(v_a_2582_, v_x_2583_);
lean_dec(v_x_2583_);
lean_dec(v_a_2582_);
v_r_2585_ = lean_box(v_res_2584_);
return v_r_2585_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(lean_object* v_m_2586_, lean_object* v_a_2587_, lean_object* v_b_2588_){
_start:
{
lean_object* v_size_2589_; lean_object* v_buckets_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2633_; 
v_size_2589_ = lean_ctor_get(v_m_2586_, 0);
v_buckets_2590_ = lean_ctor_get(v_m_2586_, 1);
v_isSharedCheck_2633_ = !lean_is_exclusive(v_m_2586_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2592_ = v_m_2586_;
v_isShared_2593_ = v_isSharedCheck_2633_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_buckets_2590_);
lean_inc(v_size_2589_);
lean_dec(v_m_2586_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2633_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v___x_2594_; uint64_t v___x_2595_; uint64_t v___x_2596_; uint64_t v___x_2597_; uint64_t v_fold_2598_; uint64_t v___x_2599_; uint64_t v___x_2600_; uint64_t v___x_2601_; size_t v___x_2602_; size_t v___x_2603_; size_t v___x_2604_; size_t v___x_2605_; size_t v___x_2606_; lean_object* v_bkt_2607_; uint8_t v___x_2608_; 
v___x_2594_ = lean_array_get_size(v_buckets_2590_);
v___x_2595_ = l_Lean_instHashableFVarId_hash(v_a_2587_);
v___x_2596_ = 32ULL;
v___x_2597_ = lean_uint64_shift_right(v___x_2595_, v___x_2596_);
v_fold_2598_ = lean_uint64_xor(v___x_2595_, v___x_2597_);
v___x_2599_ = 16ULL;
v___x_2600_ = lean_uint64_shift_right(v_fold_2598_, v___x_2599_);
v___x_2601_ = lean_uint64_xor(v_fold_2598_, v___x_2600_);
v___x_2602_ = lean_uint64_to_usize(v___x_2601_);
v___x_2603_ = lean_usize_of_nat(v___x_2594_);
v___x_2604_ = ((size_t)1ULL);
v___x_2605_ = lean_usize_sub(v___x_2603_, v___x_2604_);
v___x_2606_ = lean_usize_land(v___x_2602_, v___x_2605_);
v_bkt_2607_ = lean_array_uget_borrowed(v_buckets_2590_, v___x_2606_);
v___x_2608_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(v_a_2587_, v_bkt_2607_);
if (v___x_2608_ == 0)
{
lean_object* v___x_2609_; lean_object* v_size_x27_2610_; lean_object* v___x_2611_; lean_object* v_buckets_x27_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; uint8_t v___x_2618_; 
v___x_2609_ = lean_unsigned_to_nat(1u);
v_size_x27_2610_ = lean_nat_add(v_size_2589_, v___x_2609_);
lean_dec(v_size_2589_);
lean_inc(v_bkt_2607_);
v___x_2611_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2611_, 0, v_a_2587_);
lean_ctor_set(v___x_2611_, 1, v_b_2588_);
lean_ctor_set(v___x_2611_, 2, v_bkt_2607_);
v_buckets_x27_2612_ = lean_array_uset(v_buckets_2590_, v___x_2606_, v___x_2611_);
v___x_2613_ = lean_unsigned_to_nat(4u);
v___x_2614_ = lean_nat_mul(v_size_x27_2610_, v___x_2613_);
v___x_2615_ = lean_unsigned_to_nat(3u);
v___x_2616_ = lean_nat_div(v___x_2614_, v___x_2615_);
lean_dec(v___x_2614_);
v___x_2617_ = lean_array_get_size(v_buckets_x27_2612_);
v___x_2618_ = lean_nat_dec_le(v___x_2616_, v___x_2617_);
lean_dec(v___x_2616_);
if (v___x_2618_ == 0)
{
lean_object* v_val_2619_; lean_object* v___x_2621_; 
v_val_2619_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1___redArg(v_buckets_x27_2612_);
if (v_isShared_2593_ == 0)
{
lean_ctor_set(v___x_2592_, 1, v_val_2619_);
lean_ctor_set(v___x_2592_, 0, v_size_x27_2610_);
v___x_2621_ = v___x_2592_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v_size_x27_2610_);
lean_ctor_set(v_reuseFailAlloc_2622_, 1, v_val_2619_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
else
{
lean_object* v___x_2624_; 
if (v_isShared_2593_ == 0)
{
lean_ctor_set(v___x_2592_, 1, v_buckets_x27_2612_);
lean_ctor_set(v___x_2592_, 0, v_size_x27_2610_);
v___x_2624_ = v___x_2592_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_size_x27_2610_);
lean_ctor_set(v_reuseFailAlloc_2625_, 1, v_buckets_x27_2612_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
else
{
lean_object* v___x_2626_; lean_object* v_buckets_x27_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2631_; 
lean_inc(v_bkt_2607_);
v___x_2626_ = lean_box(0);
v_buckets_x27_2627_ = lean_array_uset(v_buckets_2590_, v___x_2606_, v___x_2626_);
v___x_2628_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(v_a_2587_, v_b_2588_, v_bkt_2607_);
v___x_2629_ = lean_array_uset(v_buckets_x27_2627_, v___x_2606_, v___x_2628_);
if (v_isShared_2593_ == 0)
{
lean_ctor_set(v___x_2592_, 1, v___x_2629_);
v___x_2631_ = v___x_2592_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v_size_2589_);
lean_ctor_set(v_reuseFailAlloc_2632_, 1, v___x_2629_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___lam__0(lean_object* v_var_2634_, lean_object* v___x_2635_, lean_object* v_x_2636_){
_start:
{
lean_object* v___x_2637_; 
v___x_2637_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_x_2636_, v_var_2634_, v___x_2635_);
return v___x_2637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(lean_object* v_var_2638_, lean_object* v_newVal_2639_, lean_object* v_a_2640_, lean_object* v_a_2641_, lean_object* v_a_2642_){
_start:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; 
v___x_2644_ = lean_st_ref_get(v_a_2642_);
v___x_2645_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_var_2638_, v_a_2640_, v_a_2641_);
if (lean_obj_tag(v___x_2645_) == 0)
{
lean_object* v_a_2646_; lean_object* v_env_2647_; lean_object* v___x_2648_; lean_object* v___f_2649_; lean_object* v___x_2650_; 
v_a_2646_ = lean_ctor_get(v___x_2645_, 0);
lean_inc(v_a_2646_);
lean_dec_ref(v___x_2645_);
v_env_2647_ = lean_ctor_get(v___x_2644_, 0);
lean_inc_ref(v_env_2647_);
lean_dec(v___x_2644_);
v___x_2648_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(v_env_2647_, v_a_2646_, v_newVal_2639_);
v___f_2649_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2649_, 0, v_var_2638_);
lean_closure_set(v___f_2649_, 1, v___x_2648_);
v___x_2650_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v___f_2649_, v_a_2640_, v_a_2641_);
return v___x_2650_;
}
else
{
lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2658_; 
lean_dec(v___x_2644_);
lean_dec(v_newVal_2639_);
lean_dec(v_var_2638_);
v_a_2651_ = lean_ctor_get(v___x_2645_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2645_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2653_ = v___x_2645_;
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2651_);
lean_dec(v___x_2645_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v___x_2656_; 
if (v_isShared_2654_ == 0)
{
v___x_2656_ = v___x_2653_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_a_2651_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
return v___x_2656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___boxed(lean_object* v_var_2659_, lean_object* v_newVal_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_var_2659_, v_newVal_2660_, v_a_2661_, v_a_2662_, v_a_2663_);
lean_dec(v_a_2663_);
lean_dec(v_a_2662_);
lean_dec_ref(v_a_2661_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment(lean_object* v_var_2666_, lean_object* v_newVal_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_){
_start:
{
lean_object* v___x_2675_; 
v___x_2675_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_var_2666_, v_newVal_2667_, v_a_2668_, v_a_2669_, v_a_2673_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___boxed(lean_object* v_var_2676_, lean_object* v_newVal_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_){
_start:
{
lean_object* v_res_2685_; 
v_res_2685_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment(v_var_2676_, v_newVal_2677_, v_a_2678_, v_a_2679_, v_a_2680_, v_a_2681_, v_a_2682_, v_a_2683_);
lean_dec(v_a_2683_);
lean_dec_ref(v_a_2682_);
lean_dec(v_a_2681_);
lean_dec_ref(v_a_2680_);
lean_dec(v_a_2679_);
lean_dec_ref(v_a_2678_);
return v_res_2685_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0(lean_object* v_00_u03b2_2686_, lean_object* v_m_2687_, lean_object* v_a_2688_, lean_object* v_b_2689_){
_start:
{
lean_object* v___x_2690_; 
v___x_2690_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_m_2687_, v_a_2688_, v_b_2689_);
return v___x_2690_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0(lean_object* v_00_u03b2_2691_, lean_object* v_a_2692_, lean_object* v_x_2693_){
_start:
{
uint8_t v___x_2694_; 
v___x_2694_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(v_a_2692_, v_x_2693_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2695_, lean_object* v_a_2696_, lean_object* v_x_2697_){
_start:
{
uint8_t v_res_2698_; lean_object* v_r_2699_; 
v_res_2698_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0(v_00_u03b2_2695_, v_a_2696_, v_x_2697_);
lean_dec(v_x_2697_);
lean_dec(v_a_2696_);
v_r_2699_ = lean_box(v_res_2698_);
return v_r_2699_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1(lean_object* v_00_u03b2_2700_, lean_object* v_data_2701_){
_start:
{
lean_object* v___x_2702_; 
v___x_2702_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1___redArg(v_data_2701_);
return v___x_2702_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2(lean_object* v_00_u03b2_2703_, lean_object* v_a_2704_, lean_object* v_b_2705_, lean_object* v_x_2706_){
_start:
{
lean_object* v___x_2707_; 
v___x_2707_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(v_a_2704_, v_b_2705_, v_x_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2708_, lean_object* v_i_2709_, lean_object* v_source_2710_, lean_object* v_target_2711_){
_start:
{
lean_object* v___x_2712_; 
v___x_2712_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2___redArg(v_i_2709_, v_source_2710_, v_target_2711_);
return v___x_2712_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2713_, lean_object* v_x_2714_, lean_object* v_x_2715_){
_start:
{
lean_object* v___x_2716_; 
v___x_2716_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3___redArg(v_x_2714_, v_x_2715_);
return v___x_2716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___lam__0(lean_object* v_var_2717_, lean_object* v_x_2718_){
_start:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2719_ = lean_box(0);
v___x_2720_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_x_2718_, v_var_2717_, v___x_2719_);
return v___x_2720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(lean_object* v_var_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_){
_start:
{
lean_object* v___f_2725_; lean_object* v___x_2726_; 
v___f_2725_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2725_, 0, v_var_2721_);
v___x_2726_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v___f_2725_, v_a_2722_, v_a_2723_);
return v___x_2726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___boxed(lean_object* v_var_2727_, lean_object* v_a_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_){
_start:
{
lean_object* v_res_2731_; 
v_res_2731_ = l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(v_var_2727_, v_a_2728_, v_a_2729_);
lean_dec(v_a_2729_);
lean_dec_ref(v_a_2728_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment(lean_object* v_var_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_){
_start:
{
lean_object* v___x_2740_; 
v___x_2740_ = l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(v_var_2732_, v_a_2733_, v_a_2734_);
return v___x_2740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___boxed(lean_object* v_var_2741_, lean_object* v_a_2742_, lean_object* v_a_2743_, lean_object* v_a_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_){
_start:
{
lean_object* v_res_2749_; 
v_res_2749_ = l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment(v_var_2741_, v_a_2742_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_);
lean_dec(v_a_2747_);
lean_dec_ref(v_a_2746_);
lean_dec(v_a_2745_);
lean_dec_ref(v_a_2744_);
lean_dec(v_a_2743_);
lean_dec_ref(v_a_2742_);
return v_res_2749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(lean_object* v_v_2750_, lean_object* v_a_2751_, lean_object* v_a_2752_, lean_object* v_a_2753_){
_start:
{
lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v_fst_2758_; lean_object* v_snd_2759_; lean_object* v_currFnIdx_2762_; lean_object* v_assignments_2763_; lean_object* v_funVals_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; uint8_t v___x_2767_; 
v___x_2755_ = lean_st_ref_get(v_a_2753_);
v___x_2756_ = lean_st_ref_take(v_a_2752_);
v_currFnIdx_2762_ = lean_ctor_get(v_a_2751_, 1);
v_assignments_2763_ = lean_ctor_get(v___x_2756_, 0);
lean_inc_ref(v_assignments_2763_);
v_funVals_2764_ = lean_ctor_get(v___x_2756_, 1);
lean_inc_ref(v_funVals_2764_);
v___x_2765_ = lean_box(0);
v___x_2766_ = lean_array_get_size(v_funVals_2764_);
v___x_2767_ = lean_nat_dec_lt(v_currFnIdx_2762_, v___x_2766_);
if (v___x_2767_ == 0)
{
lean_dec_ref(v_funVals_2764_);
lean_dec_ref(v_assignments_2763_);
lean_dec(v___x_2755_);
lean_dec(v_v_2750_);
v_fst_2758_ = v___x_2765_;
v_snd_2759_ = v___x_2756_;
goto v___jp_2757_;
}
else
{
lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2779_; 
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2756_);
if (v_isSharedCheck_2779_ == 0)
{
lean_object* v_unused_2780_; lean_object* v_unused_2781_; 
v_unused_2780_ = lean_ctor_get(v___x_2756_, 1);
lean_dec(v_unused_2780_);
v_unused_2781_ = lean_ctor_get(v___x_2756_, 0);
lean_dec(v_unused_2781_);
v___x_2769_ = v___x_2756_;
v_isShared_2770_ = v_isSharedCheck_2779_;
goto v_resetjp_2768_;
}
else
{
lean_dec(v___x_2756_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2779_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v_env_2771_; lean_object* v_v_2772_; lean_object* v_xs_x27_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2777_; 
v_env_2771_ = lean_ctor_get(v___x_2755_, 0);
lean_inc_ref(v_env_2771_);
lean_dec(v___x_2755_);
v_v_2772_ = lean_array_fget(v_funVals_2764_, v_currFnIdx_2762_);
v_xs_x27_2773_ = lean_array_fset(v_funVals_2764_, v_currFnIdx_2762_, v___x_2765_);
v___x_2774_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(v_env_2771_, v_v_2750_, v_v_2772_);
v___x_2775_ = lean_array_fset(v_xs_x27_2773_, v_currFnIdx_2762_, v___x_2774_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 1, v___x_2775_);
v___x_2777_ = v___x_2769_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_assignments_2763_);
lean_ctor_set(v_reuseFailAlloc_2778_, 1, v___x_2775_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
v_fst_2758_ = v___x_2765_;
v_snd_2759_ = v___x_2777_;
goto v___jp_2757_;
}
}
}
v___jp_2757_:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2760_ = lean_st_ref_set(v_a_2752_, v_snd_2759_);
v___x_2761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2761_, 0, v_fst_2758_);
return v___x_2761_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg___boxed(lean_object* v_v_2782_, lean_object* v_a_2783_, lean_object* v_a_2784_, lean_object* v_a_2785_, lean_object* v_a_2786_){
_start:
{
lean_object* v_res_2787_; 
v_res_2787_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(v_v_2782_, v_a_2783_, v_a_2784_, v_a_2785_);
lean_dec(v_a_2785_);
lean_dec(v_a_2784_);
lean_dec_ref(v_a_2783_);
return v_res_2787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary(lean_object* v_v_2788_, lean_object* v_a_2789_, lean_object* v_a_2790_, lean_object* v_a_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_, lean_object* v_a_2794_){
_start:
{
lean_object* v___x_2796_; 
v___x_2796_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(v_v_2788_, v_a_2789_, v_a_2790_, v_a_2794_);
return v___x_2796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___boxed(lean_object* v_v_2797_, lean_object* v_a_2798_, lean_object* v_a_2799_, lean_object* v_a_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary(v_v_2797_, v_a_2798_, v_a_2799_, v_a_2800_, v_a_2801_, v_a_2802_, v_a_2803_);
lean_dec(v_a_2803_);
lean_dec_ref(v_a_2802_);
lean_dec(v_a_2801_);
lean_dec_ref(v_a_2800_);
lean_dec(v_a_2799_);
lean_dec_ref(v_a_2798_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(lean_object* v_a_2806_, uint8_t v_b_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v_array_2812_; lean_object* v_start_2813_; lean_object* v_stop_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2851_; 
v_array_2812_ = lean_ctor_get(v_a_2806_, 0);
v_start_2813_ = lean_ctor_get(v_a_2806_, 1);
v_stop_2814_ = lean_ctor_get(v_a_2806_, 2);
v_isSharedCheck_2851_ = !lean_is_exclusive(v_a_2806_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2816_ = v_a_2806_;
v_isShared_2817_ = v_isSharedCheck_2851_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_stop_2814_);
lean_inc(v_start_2813_);
lean_inc(v_array_2812_);
lean_dec(v_a_2806_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2851_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
uint8_t v___x_2818_; 
v___x_2818_ = lean_nat_dec_lt(v_start_2813_, v_stop_2814_);
if (v___x_2818_ == 0)
{
lean_object* v___x_2819_; lean_object* v___x_2820_; 
lean_del_object(v___x_2816_);
lean_dec(v_stop_2814_);
lean_dec(v_start_2813_);
lean_dec_ref(v_array_2812_);
v___x_2819_ = lean_box(v_b_2807_);
v___x_2820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2820_, 0, v___x_2819_);
return v___x_2820_;
}
else
{
lean_object* v___x_2821_; lean_object* v_fvarId_2822_; lean_object* v___x_2823_; 
v___x_2821_ = lean_array_fget_borrowed(v_array_2812_, v_start_2813_);
v_fvarId_2822_ = lean_ctor_get(v___x_2821_, 0);
v___x_2823_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_2822_, v___y_2808_, v___y_2809_);
if (lean_obj_tag(v___x_2823_) == 0)
{
lean_object* v_a_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; 
v_a_2824_ = lean_ctor_get(v___x_2823_, 0);
lean_inc(v_a_2824_);
lean_dec_ref(v___x_2823_);
v___x_2825_ = lean_box(1);
lean_inc(v_fvarId_2822_);
v___x_2826_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_fvarId_2822_, v___x_2825_, v___y_2808_, v___y_2809_, v___y_2810_);
if (lean_obj_tag(v___x_2826_) == 0)
{
lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2830_; 
lean_dec_ref(v___x_2826_);
v___x_2827_ = lean_unsigned_to_nat(1u);
v___x_2828_ = lean_nat_add(v_start_2813_, v___x_2827_);
lean_dec(v_start_2813_);
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 1, v___x_2828_);
v___x_2830_ = v___x_2816_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_array_2812_);
lean_ctor_set(v_reuseFailAlloc_2834_, 1, v___x_2828_);
lean_ctor_set(v_reuseFailAlloc_2834_, 2, v_stop_2814_);
v___x_2830_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
lean_object* v___x_2831_; uint8_t v___x_2832_; 
v___x_2831_ = lean_box(0);
v___x_2832_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_a_2824_, v___x_2831_);
v_a_2806_ = v___x_2830_;
v_b_2807_ = v___x_2832_;
goto _start;
}
}
else
{
lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2842_; 
lean_dec(v_a_2824_);
lean_del_object(v___x_2816_);
lean_dec(v_stop_2814_);
lean_dec(v_start_2813_);
lean_dec_ref(v_array_2812_);
v_a_2835_ = lean_ctor_get(v___x_2826_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2826_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2837_ = v___x_2826_;
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2826_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2840_; 
if (v_isShared_2838_ == 0)
{
v___x_2840_ = v___x_2837_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_a_2835_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
}
}
else
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2850_; 
lean_del_object(v___x_2816_);
lean_dec(v_stop_2814_);
lean_dec(v_start_2813_);
lean_dec_ref(v_array_2812_);
v_a_2843_ = lean_ctor_get(v___x_2823_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2823_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2845_ = v___x_2823_;
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2823_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v___x_2848_; 
if (v_isShared_2846_ == 0)
{
v___x_2848_ = v___x_2845_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_a_2843_);
v___x_2848_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
return v___x_2848_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg___boxed(lean_object* v_a_2852_, lean_object* v_b_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_){
_start:
{
uint8_t v_b_boxed_2858_; lean_object* v_res_2859_; 
v_b_boxed_2858_ = lean_unbox(v_b_2853_);
v_res_2859_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(v_a_2852_, v_b_boxed_2858_, v___y_2854_, v___y_2855_, v___y_2856_);
lean_dec(v___y_2856_);
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2854_);
return v_res_2859_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___lam__0(lean_object* v_fvarId_2860_, lean_object* v___x_2861_, lean_object* v_x_2862_){
_start:
{
lean_object* v___x_2863_; 
v___x_2863_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_x_2862_, v_fvarId_2860_, v___x_2861_);
return v___x_2863_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(lean_object* v___x_2864_, lean_object* v_as_2865_, size_t v_sz_2866_, size_t v_i_2867_, lean_object* v_b_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_){
_start:
{
lean_object* v_a_2873_; uint8_t v___x_2877_; 
v___x_2877_ = lean_usize_dec_lt(v_i_2867_, v_sz_2866_);
if (v___x_2877_ == 0)
{
lean_object* v___x_2878_; 
lean_dec_ref(v___x_2864_);
v___x_2878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2878_, 0, v_b_2868_);
return v___x_2878_;
}
else
{
lean_object* v_snd_2879_; lean_object* v_fst_2880_; lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2946_; 
v_snd_2879_ = lean_ctor_get(v_b_2868_, 1);
v_fst_2880_ = lean_ctor_get(v_b_2868_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v_b_2868_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2882_ = v_b_2868_;
v_isShared_2883_ = v_isSharedCheck_2946_;
goto v_resetjp_2881_;
}
else
{
lean_inc(v_snd_2879_);
lean_inc(v_fst_2880_);
lean_dec(v_b_2868_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2946_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
lean_object* v_array_2884_; lean_object* v_start_2885_; lean_object* v_stop_2886_; uint8_t v___x_2887_; 
v_array_2884_ = lean_ctor_get(v_snd_2879_, 0);
v_start_2885_ = lean_ctor_get(v_snd_2879_, 1);
v_stop_2886_ = lean_ctor_get(v_snd_2879_, 2);
v___x_2887_ = lean_nat_dec_lt(v_start_2885_, v_stop_2886_);
if (v___x_2887_ == 0)
{
lean_object* v___x_2889_; 
lean_dec_ref(v___x_2864_);
if (v_isShared_2883_ == 0)
{
v___x_2889_ = v___x_2882_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_fst_2880_);
lean_ctor_set(v_reuseFailAlloc_2891_, 1, v_snd_2879_);
v___x_2889_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
lean_object* v___x_2890_; 
v___x_2890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2889_);
return v___x_2890_;
}
}
else
{
lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2942_; 
lean_inc(v_stop_2886_);
lean_inc(v_start_2885_);
lean_inc_ref(v_array_2884_);
v_isSharedCheck_2942_ = !lean_is_exclusive(v_snd_2879_);
if (v_isSharedCheck_2942_ == 0)
{
lean_object* v_unused_2943_; lean_object* v_unused_2944_; lean_object* v_unused_2945_; 
v_unused_2943_ = lean_ctor_get(v_snd_2879_, 2);
lean_dec(v_unused_2943_);
v_unused_2944_ = lean_ctor_get(v_snd_2879_, 1);
lean_dec(v_unused_2944_);
v_unused_2945_ = lean_ctor_get(v_snd_2879_, 0);
lean_dec(v_unused_2945_);
v___x_2893_ = v_snd_2879_;
v_isShared_2894_ = v_isSharedCheck_2942_;
goto v_resetjp_2892_;
}
else
{
lean_dec(v_snd_2879_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2942_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v_a_2895_; lean_object* v_fvarId_2896_; lean_object* v___x_2897_; 
v_a_2895_ = lean_array_uget_borrowed(v_as_2865_, v_i_2867_);
v_fvarId_2896_ = lean_ctor_get(v_a_2895_, 0);
v___x_2897_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_2896_, v___y_2869_, v___y_2870_);
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v_a_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
v_a_2898_ = lean_ctor_get(v___x_2897_, 0);
lean_inc(v_a_2898_);
lean_dec_ref(v___x_2897_);
v___x_2899_ = lean_array_fget_borrowed(v_array_2884_, v_start_2885_);
v___x_2900_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(v___x_2899_, v___y_2869_, v___y_2870_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2905_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_a_2901_);
lean_dec_ref(v___x_2900_);
v___x_2902_ = lean_unsigned_to_nat(1u);
v___x_2903_ = lean_nat_add(v_start_2885_, v___x_2902_);
lean_dec(v_start_2885_);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 1, v___x_2903_);
v___x_2905_ = v___x_2893_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_array_2884_);
lean_ctor_set(v_reuseFailAlloc_2925_, 1, v___x_2903_);
lean_ctor_set(v_reuseFailAlloc_2925_, 2, v_stop_2886_);
v___x_2905_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
lean_object* v___x_2906_; uint8_t v___x_2907_; 
lean_inc(v_a_2898_);
lean_inc_ref(v___x_2864_);
v___x_2906_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(v___x_2864_, v_a_2898_, v_a_2901_);
lean_inc(v___x_2906_);
v___x_2907_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v___x_2906_, v_a_2898_);
if (v___x_2907_ == 0)
{
lean_object* v___f_2908_; lean_object* v___x_2909_; 
lean_dec(v_fst_2880_);
lean_inc(v_fvarId_2896_);
v___f_2908_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2908_, 0, v_fvarId_2896_);
lean_closure_set(v___f_2908_, 1, v___x_2906_);
v___x_2909_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v___f_2908_, v___y_2869_, v___y_2870_);
if (lean_obj_tag(v___x_2909_) == 0)
{
lean_object* v___x_2910_; lean_object* v___x_2912_; 
lean_dec_ref(v___x_2909_);
v___x_2910_ = lean_box(v___x_2887_);
if (v_isShared_2883_ == 0)
{
lean_ctor_set(v___x_2882_, 1, v___x_2905_);
lean_ctor_set(v___x_2882_, 0, v___x_2910_);
v___x_2912_ = v___x_2882_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v___x_2910_);
lean_ctor_set(v_reuseFailAlloc_2913_, 1, v___x_2905_);
v___x_2912_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
v_a_2873_ = v___x_2912_;
goto v___jp_2872_;
}
}
else
{
lean_object* v_a_2914_; lean_object* v___x_2916_; uint8_t v_isShared_2917_; uint8_t v_isSharedCheck_2921_; 
lean_dec_ref(v___x_2905_);
lean_del_object(v___x_2882_);
lean_dec_ref(v___x_2864_);
v_a_2914_ = lean_ctor_get(v___x_2909_, 0);
v_isSharedCheck_2921_ = !lean_is_exclusive(v___x_2909_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2916_ = v___x_2909_;
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
else
{
lean_inc(v_a_2914_);
lean_dec(v___x_2909_);
v___x_2916_ = lean_box(0);
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
v_resetjp_2915_:
{
lean_object* v___x_2919_; 
if (v_isShared_2917_ == 0)
{
v___x_2919_ = v___x_2916_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_a_2914_);
v___x_2919_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
return v___x_2919_;
}
}
}
}
else
{
lean_object* v___x_2923_; 
lean_dec(v___x_2906_);
if (v_isShared_2883_ == 0)
{
lean_ctor_set(v___x_2882_, 1, v___x_2905_);
v___x_2923_ = v___x_2882_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v_fst_2880_);
lean_ctor_set(v_reuseFailAlloc_2924_, 1, v___x_2905_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
v_a_2873_ = v___x_2923_;
goto v___jp_2872_;
}
}
}
}
else
{
lean_object* v_a_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2933_; 
lean_dec(v_a_2898_);
lean_del_object(v___x_2893_);
lean_dec(v_stop_2886_);
lean_dec(v_start_2885_);
lean_dec_ref(v_array_2884_);
lean_del_object(v___x_2882_);
lean_dec(v_fst_2880_);
lean_dec_ref(v___x_2864_);
v_a_2926_ = lean_ctor_get(v___x_2900_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2900_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2928_ = v___x_2900_;
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_a_2926_);
lean_dec(v___x_2900_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
lean_object* v___x_2931_; 
if (v_isShared_2929_ == 0)
{
v___x_2931_ = v___x_2928_;
goto v_reusejp_2930_;
}
else
{
lean_object* v_reuseFailAlloc_2932_; 
v_reuseFailAlloc_2932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2932_, 0, v_a_2926_);
v___x_2931_ = v_reuseFailAlloc_2932_;
goto v_reusejp_2930_;
}
v_reusejp_2930_:
{
return v___x_2931_;
}
}
}
}
else
{
lean_object* v_a_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2941_; 
lean_del_object(v___x_2893_);
lean_dec(v_stop_2886_);
lean_dec(v_start_2885_);
lean_dec_ref(v_array_2884_);
lean_del_object(v___x_2882_);
lean_dec(v_fst_2880_);
lean_dec_ref(v___x_2864_);
v_a_2934_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2941_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2936_ = v___x_2897_;
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_a_2934_);
lean_dec(v___x_2897_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2939_; 
if (v_isShared_2937_ == 0)
{
v___x_2939_ = v___x_2936_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_a_2934_);
v___x_2939_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
return v___x_2939_;
}
}
}
}
}
}
}
v___jp_2872_:
{
size_t v___x_2874_; size_t v___x_2875_; 
v___x_2874_ = ((size_t)1ULL);
v___x_2875_ = lean_usize_add(v_i_2867_, v___x_2874_);
v_i_2867_ = v___x_2875_;
v_b_2868_ = v_a_2873_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___boxed(lean_object* v___x_2947_, lean_object* v_as_2948_, lean_object* v_sz_2949_, lean_object* v_i_2950_, lean_object* v_b_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_){
_start:
{
size_t v_sz_boxed_2955_; size_t v_i_boxed_2956_; lean_object* v_res_2957_; 
v_sz_boxed_2955_ = lean_unbox_usize(v_sz_2949_);
lean_dec(v_sz_2949_);
v_i_boxed_2956_ = lean_unbox_usize(v_i_2950_);
lean_dec(v_i_2950_);
v_res_2957_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(v___x_2947_, v_as_2948_, v_sz_boxed_2955_, v_i_boxed_2956_, v_b_2951_, v___y_2952_, v___y_2953_);
lean_dec(v___y_2953_);
lean_dec_ref(v___y_2952_);
lean_dec_ref(v_as_2948_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment(lean_object* v_params_2958_, lean_object* v_args_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_, lean_object* v_a_2962_, lean_object* v_a_2963_, lean_object* v_a_2964_, lean_object* v_a_2965_){
_start:
{
lean_object* v___x_2967_; lean_object* v_env_2968_; uint8_t v_ret_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; size_t v_sz_2975_; size_t v___x_2976_; lean_object* v___x_2977_; 
v___x_2967_ = lean_st_ref_get(v_a_2965_);
v_env_2968_ = lean_ctor_get(v___x_2967_, 0);
lean_inc_ref(v_env_2968_);
lean_dec(v___x_2967_);
v_ret_2969_ = 0;
v___x_2970_ = lean_unsigned_to_nat(0u);
v___x_2971_ = lean_array_get_size(v_args_2959_);
v___x_2972_ = l_Array_toSubarray___redArg(v_args_2959_, v___x_2970_, v___x_2971_);
v___x_2973_ = lean_box(v_ret_2969_);
v___x_2974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
lean_ctor_set(v___x_2974_, 1, v___x_2972_);
v_sz_2975_ = lean_array_size(v_params_2958_);
v___x_2976_ = ((size_t)0ULL);
v___x_2977_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(v_env_2968_, v_params_2958_, v_sz_2975_, v___x_2976_, v___x_2974_, v_a_2960_, v_a_2961_);
if (lean_obj_tag(v___x_2977_) == 0)
{
lean_object* v_a_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2995_; 
v_a_2978_ = lean_ctor_get(v___x_2977_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2980_ = v___x_2977_;
v_isShared_2981_ = v_isSharedCheck_2995_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_a_2978_);
lean_dec(v___x_2977_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2995_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v_fst_2982_; lean_object* v_lower_2984_; lean_object* v_upper_2985_; lean_object* v___x_2989_; uint8_t v___x_2990_; 
v_fst_2982_ = lean_ctor_get(v_a_2978_, 0);
lean_inc(v_fst_2982_);
lean_dec(v_a_2978_);
v___x_2989_ = lean_array_get_size(v_params_2958_);
v___x_2990_ = lean_nat_dec_eq(v___x_2989_, v___x_2971_);
if (v___x_2990_ == 0)
{
uint8_t v___x_2991_; 
lean_del_object(v___x_2980_);
v___x_2991_ = lean_nat_dec_le(v___x_2971_, v___x_2970_);
if (v___x_2991_ == 0)
{
v_lower_2984_ = v___x_2971_;
v_upper_2985_ = v___x_2989_;
goto v___jp_2983_;
}
else
{
v_lower_2984_ = v___x_2970_;
v_upper_2985_ = v___x_2989_;
goto v___jp_2983_;
}
}
else
{
lean_object* v___x_2993_; 
lean_dec_ref(v_params_2958_);
if (v_isShared_2981_ == 0)
{
lean_ctor_set(v___x_2980_, 0, v_fst_2982_);
v___x_2993_ = v___x_2980_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_fst_2982_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
v___jp_2983_:
{
lean_object* v___x_2986_; uint8_t v___x_2987_; lean_object* v___x_2988_; 
v___x_2986_ = l_Array_toSubarray___redArg(v_params_2958_, v_lower_2984_, v_upper_2985_);
v___x_2987_ = lean_unbox(v_fst_2982_);
lean_dec(v_fst_2982_);
v___x_2988_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(v___x_2986_, v___x_2987_, v_a_2960_, v_a_2961_, v_a_2965_);
return v___x_2988_;
}
}
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
lean_dec_ref(v_params_2958_);
v_a_2996_ = lean_ctor_get(v___x_2977_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v___x_2977_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2977_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment___boxed(lean_object* v_params_3004_, lean_object* v_args_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_){
_start:
{
lean_object* v_res_3013_; 
v_res_3013_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment(v_params_3004_, v_args_3005_, v_a_3006_, v_a_3007_, v_a_3008_, v_a_3009_, v_a_3010_, v_a_3011_);
lean_dec(v_a_3011_);
lean_dec_ref(v_a_3010_);
lean_dec(v_a_3009_);
lean_dec_ref(v_a_3008_);
lean_dec(v_a_3007_);
lean_dec_ref(v_a_3006_);
return v_res_3013_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0(lean_object* v___x_3014_, lean_object* v_as_3015_, size_t v_sz_3016_, size_t v_i_3017_, lean_object* v_b_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_){
_start:
{
lean_object* v___x_3026_; 
v___x_3026_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(v___x_3014_, v_as_3015_, v_sz_3016_, v_i_3017_, v_b_3018_, v___y_3019_, v___y_3020_);
return v___x_3026_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___boxed(lean_object* v___x_3027_, lean_object* v_as_3028_, lean_object* v_sz_3029_, lean_object* v_i_3030_, lean_object* v_b_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_){
_start:
{
size_t v_sz_boxed_3039_; size_t v_i_boxed_3040_; lean_object* v_res_3041_; 
v_sz_boxed_3039_ = lean_unbox_usize(v_sz_3029_);
lean_dec(v_sz_3029_);
v_i_boxed_3040_ = lean_unbox_usize(v_i_3030_);
lean_dec(v_i_3030_);
v_res_3041_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0(v___x_3027_, v_as_3028_, v_sz_boxed_3039_, v_i_boxed_3040_, v_b_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3036_);
lean_dec(v___y_3035_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
lean_dec_ref(v_as_3028_);
return v_res_3041_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1(lean_object* v_inst_3042_, lean_object* v_R_3043_, lean_object* v_a_3044_, uint8_t v_b_3045_, lean_object* v_c_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_){
_start:
{
lean_object* v___x_3054_; 
v___x_3054_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(v_a_3044_, v_b_3045_, v___y_3047_, v___y_3048_, v___y_3052_);
return v___x_3054_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___boxed(lean_object* v_inst_3055_, lean_object* v_R_3056_, lean_object* v_a_3057_, lean_object* v_b_3058_, lean_object* v_c_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_){
_start:
{
uint8_t v_b_boxed_3067_; lean_object* v_res_3068_; 
v_b_boxed_3067_ = lean_unbox(v_b_3058_);
v_res_3068_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1(v_inst_3055_, v_R_3056_, v_a_3057_, v_b_boxed_3067_, v_c_3059_, v___y_3060_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_, v___y_3065_);
lean_dec(v___y_3065_);
lean_dec_ref(v___y_3064_);
lean_dec(v___y_3063_);
lean_dec_ref(v___y_3062_);
lean_dec(v___y_3061_);
lean_dec_ref(v___y_3060_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(lean_object* v_as_3069_, size_t v_sz_3070_, size_t v_i_3071_, uint8_t v_b_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_){
_start:
{
uint8_t v_a_3077_; uint8_t v___x_3081_; 
v___x_3081_ = lean_usize_dec_lt(v_i_3071_, v_sz_3070_);
if (v___x_3081_ == 0)
{
lean_object* v___x_3082_; lean_object* v___x_3083_; 
v___x_3082_ = lean_box(v_b_3072_);
v___x_3083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3083_, 0, v___x_3082_);
return v___x_3083_;
}
else
{
lean_object* v_a_3084_; lean_object* v_fvarId_3085_; lean_object* v___x_3086_; 
v_a_3084_ = lean_array_uget_borrowed(v_as_3069_, v_i_3071_);
v_fvarId_3085_ = lean_ctor_get(v_a_3084_, 0);
v___x_3086_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_3085_, v___y_3073_, v___y_3074_);
if (lean_obj_tag(v___x_3086_) == 0)
{
lean_object* v_a_3087_; lean_object* v___x_3088_; uint8_t v___x_3089_; 
v_a_3087_ = lean_ctor_get(v___x_3086_, 0);
lean_inc(v_a_3087_);
lean_dec_ref(v___x_3086_);
v___x_3088_ = lean_box(1);
v___x_3089_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v___x_3088_, v_a_3087_);
if (v___x_3089_ == 0)
{
lean_object* v___f_3090_; lean_object* v___x_3091_; 
lean_inc(v_fvarId_3085_);
v___f_3090_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3090_, 0, v_fvarId_3085_);
lean_closure_set(v___f_3090_, 1, v___x_3088_);
v___x_3091_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v___f_3090_, v___y_3073_, v___y_3074_);
if (lean_obj_tag(v___x_3091_) == 0)
{
lean_dec_ref(v___x_3091_);
v_a_3077_ = v___x_3081_;
goto v___jp_3076_;
}
else
{
lean_object* v_a_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
v_a_3092_ = lean_ctor_get(v___x_3091_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3091_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3094_ = v___x_3091_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_a_3092_);
lean_dec(v___x_3091_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
}
else
{
v_a_3077_ = v_b_3072_;
goto v___jp_3076_;
}
}
else
{
lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3107_; 
v_a_3100_ = lean_ctor_get(v___x_3086_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3086_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3102_ = v___x_3086_;
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_dec(v___x_3086_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3105_; 
if (v_isShared_3103_ == 0)
{
v___x_3105_ = v___x_3102_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_a_3100_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
}
v___jp_3076_:
{
size_t v___x_3078_; size_t v___x_3079_; 
v___x_3078_ = ((size_t)1ULL);
v___x_3079_ = lean_usize_add(v_i_3071_, v___x_3078_);
v_i_3071_ = v___x_3079_;
v_b_3072_ = v_a_3077_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg___boxed(lean_object* v_as_3108_, lean_object* v_sz_3109_, lean_object* v_i_3110_, lean_object* v_b_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_){
_start:
{
size_t v_sz_boxed_3115_; size_t v_i_boxed_3116_; uint8_t v_b_boxed_3117_; lean_object* v_res_3118_; 
v_sz_boxed_3115_ = lean_unbox_usize(v_sz_3109_);
lean_dec(v_sz_3109_);
v_i_boxed_3116_ = lean_unbox_usize(v_i_3110_);
lean_dec(v_i_3110_);
v_b_boxed_3117_ = lean_unbox(v_b_3111_);
v_res_3118_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(v_as_3108_, v_sz_boxed_3115_, v_i_boxed_3116_, v_b_boxed_3117_, v___y_3112_, v___y_3113_);
lean_dec(v___y_3113_);
lean_dec_ref(v___y_3112_);
lean_dec_ref(v_as_3108_);
return v_res_3118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop(lean_object* v_params_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_){
_start:
{
uint8_t v_ret_3127_; size_t v_sz_3128_; size_t v___x_3129_; lean_object* v___x_3130_; 
v_ret_3127_ = 0;
v_sz_3128_ = lean_array_size(v_params_3119_);
v___x_3129_ = ((size_t)0ULL);
v___x_3130_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(v_params_3119_, v_sz_3128_, v___x_3129_, v_ret_3127_, v_a_3120_, v_a_3121_);
return v___x_3130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop___boxed(lean_object* v_params_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_, lean_object* v_a_3134_, lean_object* v_a_3135_, lean_object* v_a_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_){
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop(v_params_3131_, v_a_3132_, v_a_3133_, v_a_3134_, v_a_3135_, v_a_3136_, v_a_3137_);
lean_dec(v_a_3137_);
lean_dec_ref(v_a_3136_);
lean_dec(v_a_3135_);
lean_dec_ref(v_a_3134_);
lean_dec(v_a_3133_);
lean_dec_ref(v_a_3132_);
lean_dec_ref(v_params_3131_);
return v_res_3139_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0(lean_object* v_as_3140_, size_t v_sz_3141_, size_t v_i_3142_, uint8_t v_b_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_){
_start:
{
lean_object* v___x_3151_; 
v___x_3151_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(v_as_3140_, v_sz_3141_, v_i_3142_, v_b_3143_, v___y_3144_, v___y_3145_);
return v___x_3151_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___boxed(lean_object* v_as_3152_, lean_object* v_sz_3153_, lean_object* v_i_3154_, lean_object* v_b_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_){
_start:
{
size_t v_sz_boxed_3163_; size_t v_i_boxed_3164_; uint8_t v_b_boxed_3165_; lean_object* v_res_3166_; 
v_sz_boxed_3163_ = lean_unbox_usize(v_sz_3153_);
lean_dec(v_sz_3153_);
v_i_boxed_3164_ = lean_unbox_usize(v_i_3154_);
lean_dec(v_i_3154_);
v_b_boxed_3165_ = lean_unbox(v_b_3155_);
v_res_3166_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0(v_as_3152_, v_sz_boxed_3163_, v_i_boxed_3164_, v_b_boxed_3165_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v_as_3152_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(lean_object* v_as_3167_, size_t v_i_3168_, size_t v_stop_3169_, lean_object* v_b_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_){
_start:
{
uint8_t v___x_3174_; 
v___x_3174_ = lean_usize_dec_eq(v_i_3168_, v_stop_3169_);
if (v___x_3174_ == 0)
{
lean_object* v___x_3175_; lean_object* v_fvarId_3176_; lean_object* v___x_3177_; 
v___x_3175_ = lean_array_uget_borrowed(v_as_3167_, v_i_3168_);
v_fvarId_3176_ = lean_ctor_get(v___x_3175_, 0);
lean_inc(v_fvarId_3176_);
v___x_3177_ = l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(v_fvarId_3176_, v___y_3171_, v___y_3172_);
if (lean_obj_tag(v___x_3177_) == 0)
{
lean_object* v_a_3178_; size_t v___x_3179_; size_t v___x_3180_; 
v_a_3178_ = lean_ctor_get(v___x_3177_, 0);
lean_inc(v_a_3178_);
lean_dec_ref(v___x_3177_);
v___x_3179_ = ((size_t)1ULL);
v___x_3180_ = lean_usize_add(v_i_3168_, v___x_3179_);
v_i_3168_ = v___x_3180_;
v_b_3170_ = v_a_3178_;
goto _start;
}
else
{
return v___x_3177_;
}
}
else
{
lean_object* v___x_3182_; 
v___x_3182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3182_, 0, v_b_3170_);
return v___x_3182_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg___boxed(lean_object* v_as_3183_, lean_object* v_i_3184_, lean_object* v_stop_3185_, lean_object* v_b_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_){
_start:
{
size_t v_i_boxed_3190_; size_t v_stop_boxed_3191_; lean_object* v_res_3192_; 
v_i_boxed_3190_ = lean_unbox_usize(v_i_3184_);
lean_dec(v_i_3184_);
v_stop_boxed_3191_ = lean_unbox_usize(v_stop_3185_);
lean_dec(v_stop_3185_);
v_res_3192_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(v_as_3183_, v_i_boxed_3190_, v_stop_boxed_3191_, v_b_3186_, v___y_3187_, v___y_3188_);
lean_dec(v___y_3188_);
lean_dec_ref(v___y_3187_);
lean_dec_ref(v_as_3183_);
return v_res_3192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(lean_object* v_x_3193_, lean_object* v_a_3194_, lean_object* v_a_3195_, lean_object* v_a_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_){
_start:
{
lean_object* v___y_3202_; lean_object* v___y_3203_; lean_object* v___y_3204_; lean_object* v___y_3205_; lean_object* v___y_3206_; lean_object* v___y_3207_; lean_object* v___y_3208_; lean_object* v___y_3209_; lean_object* v_decl_3212_; lean_object* v_k_3213_; lean_object* v___y_3214_; lean_object* v___y_3215_; lean_object* v___y_3216_; lean_object* v___y_3217_; lean_object* v___y_3218_; lean_object* v___y_3219_; 
switch(lean_obj_tag(v_x_3193_))
{
case 0:
{
lean_object* v_k_3234_; 
v_k_3234_ = lean_ctor_get(v_x_3193_, 1);
lean_inc_ref(v_k_3234_);
lean_dec_ref(v_x_3193_);
v_x_3193_ = v_k_3234_;
goto _start;
}
case 3:
{
lean_object* v___x_3236_; lean_object* v___x_3237_; 
lean_dec_ref(v_x_3193_);
v___x_3236_ = lean_box(0);
v___x_3237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3237_, 0, v___x_3236_);
return v___x_3237_;
}
case 4:
{
lean_object* v_cases_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3260_; 
v_cases_3238_ = lean_ctor_get(v_x_3193_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v_x_3193_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3240_ = v_x_3193_;
v_isShared_3241_ = v_isSharedCheck_3260_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_cases_3238_);
lean_dec(v_x_3193_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3260_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v_alts_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; uint8_t v___x_3246_; 
v_alts_3242_ = lean_ctor_get(v_cases_3238_, 3);
lean_inc_ref(v_alts_3242_);
lean_dec_ref(v_cases_3238_);
v___x_3243_ = lean_unsigned_to_nat(0u);
v___x_3244_ = lean_array_get_size(v_alts_3242_);
v___x_3245_ = lean_box(0);
v___x_3246_ = lean_nat_dec_lt(v___x_3243_, v___x_3244_);
if (v___x_3246_ == 0)
{
lean_object* v___x_3248_; 
lean_dec_ref(v_alts_3242_);
if (v_isShared_3241_ == 0)
{
lean_ctor_set_tag(v___x_3240_, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3245_);
v___x_3248_ = v___x_3240_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v___x_3245_);
v___x_3248_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
return v___x_3248_;
}
}
else
{
uint8_t v___x_3250_; 
v___x_3250_ = lean_nat_dec_le(v___x_3244_, v___x_3244_);
if (v___x_3250_ == 0)
{
if (v___x_3246_ == 0)
{
lean_object* v___x_3252_; 
lean_dec_ref(v_alts_3242_);
if (v_isShared_3241_ == 0)
{
lean_ctor_set_tag(v___x_3240_, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3245_);
v___x_3252_ = v___x_3240_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v___x_3245_);
v___x_3252_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
return v___x_3252_;
}
}
else
{
size_t v___x_3254_; size_t v___x_3255_; lean_object* v___x_3256_; 
lean_del_object(v___x_3240_);
v___x_3254_ = ((size_t)0ULL);
v___x_3255_ = lean_usize_of_nat(v___x_3244_);
v___x_3256_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(v_alts_3242_, v___x_3254_, v___x_3255_, v___x_3245_, v_a_3194_, v_a_3195_, v_a_3196_, v_a_3197_, v_a_3198_, v_a_3199_);
lean_dec_ref(v_alts_3242_);
return v___x_3256_;
}
}
else
{
size_t v___x_3257_; size_t v___x_3258_; lean_object* v___x_3259_; 
lean_del_object(v___x_3240_);
v___x_3257_ = ((size_t)0ULL);
v___x_3258_ = lean_usize_of_nat(v___x_3244_);
v___x_3259_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(v_alts_3242_, v___x_3257_, v___x_3258_, v___x_3245_, v_a_3194_, v_a_3195_, v_a_3196_, v_a_3197_, v_a_3198_, v_a_3199_);
lean_dec_ref(v_alts_3242_);
return v___x_3259_;
}
}
}
}
case 5:
{
lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3268_; 
v_isSharedCheck_3268_ = !lean_is_exclusive(v_x_3193_);
if (v_isSharedCheck_3268_ == 0)
{
lean_object* v_unused_3269_; 
v_unused_3269_ = lean_ctor_get(v_x_3193_, 0);
lean_dec(v_unused_3269_);
v___x_3262_ = v_x_3193_;
v_isShared_3263_ = v_isSharedCheck_3268_;
goto v_resetjp_3261_;
}
else
{
lean_dec(v_x_3193_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3268_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v___x_3264_; lean_object* v___x_3266_; 
v___x_3264_ = lean_box(0);
if (v_isShared_3263_ == 0)
{
lean_ctor_set_tag(v___x_3262_, 0);
lean_ctor_set(v___x_3262_, 0, v___x_3264_);
v___x_3266_ = v___x_3262_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v___x_3264_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
case 6:
{
lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3277_; 
v_isSharedCheck_3277_ = !lean_is_exclusive(v_x_3193_);
if (v_isSharedCheck_3277_ == 0)
{
lean_object* v_unused_3278_; 
v_unused_3278_ = lean_ctor_get(v_x_3193_, 0);
lean_dec(v_unused_3278_);
v___x_3271_ = v_x_3193_;
v_isShared_3272_ = v_isSharedCheck_3277_;
goto v_resetjp_3270_;
}
else
{
lean_dec(v_x_3193_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3277_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3273_; lean_object* v___x_3275_; 
v___x_3273_ = lean_box(0);
if (v_isShared_3272_ == 0)
{
lean_ctor_set_tag(v___x_3271_, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3273_);
v___x_3275_ = v___x_3271_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v___x_3273_);
v___x_3275_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
return v___x_3275_;
}
}
}
default: 
{
lean_object* v_decl_3279_; lean_object* v_k_3280_; 
v_decl_3279_ = lean_ctor_get(v_x_3193_, 0);
lean_inc_ref(v_decl_3279_);
v_k_3280_ = lean_ctor_get(v_x_3193_, 1);
lean_inc_ref(v_k_3280_);
lean_dec_ref(v_x_3193_);
v_decl_3212_ = v_decl_3279_;
v_k_3213_ = v_k_3280_;
v___y_3214_ = v_a_3194_;
v___y_3215_ = v_a_3195_;
v___y_3216_ = v_a_3196_;
v___y_3217_ = v_a_3197_;
v___y_3218_ = v_a_3198_;
v___y_3219_ = v_a_3199_;
goto v___jp_3211_;
}
}
v___jp_3201_:
{
if (lean_obj_tag(v___y_3209_) == 0)
{
lean_dec_ref(v___y_3209_);
v_x_3193_ = v___y_3205_;
v_a_3194_ = v___y_3207_;
v_a_3195_ = v___y_3204_;
v_a_3196_ = v___y_3203_;
v_a_3197_ = v___y_3208_;
v_a_3198_ = v___y_3206_;
v_a_3199_ = v___y_3202_;
goto _start;
}
else
{
lean_dec_ref(v___y_3205_);
return v___y_3209_;
}
}
v___jp_3211_:
{
lean_object* v_params_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; uint8_t v___x_3223_; 
v_params_3220_ = lean_ctor_get(v_decl_3212_, 2);
lean_inc_ref(v_params_3220_);
lean_dec_ref(v_decl_3212_);
v___x_3221_ = lean_unsigned_to_nat(0u);
v___x_3222_ = lean_array_get_size(v_params_3220_);
v___x_3223_ = lean_nat_dec_lt(v___x_3221_, v___x_3222_);
if (v___x_3223_ == 0)
{
lean_dec_ref(v_params_3220_);
v_x_3193_ = v_k_3213_;
v_a_3194_ = v___y_3214_;
v_a_3195_ = v___y_3215_;
v_a_3196_ = v___y_3216_;
v_a_3197_ = v___y_3217_;
v_a_3198_ = v___y_3218_;
v_a_3199_ = v___y_3219_;
goto _start;
}
else
{
lean_object* v___x_3225_; uint8_t v___x_3226_; 
v___x_3225_ = lean_box(0);
v___x_3226_ = lean_nat_dec_le(v___x_3222_, v___x_3222_);
if (v___x_3226_ == 0)
{
if (v___x_3223_ == 0)
{
lean_dec_ref(v_params_3220_);
v_x_3193_ = v_k_3213_;
v_a_3194_ = v___y_3214_;
v_a_3195_ = v___y_3215_;
v_a_3196_ = v___y_3216_;
v_a_3197_ = v___y_3217_;
v_a_3198_ = v___y_3218_;
v_a_3199_ = v___y_3219_;
goto _start;
}
else
{
size_t v___x_3228_; size_t v___x_3229_; lean_object* v___x_3230_; 
v___x_3228_ = ((size_t)0ULL);
v___x_3229_ = lean_usize_of_nat(v___x_3222_);
v___x_3230_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(v_params_3220_, v___x_3228_, v___x_3229_, v___x_3225_, v___y_3214_, v___y_3215_);
lean_dec_ref(v_params_3220_);
v___y_3202_ = v___y_3219_;
v___y_3203_ = v___y_3216_;
v___y_3204_ = v___y_3215_;
v___y_3205_ = v_k_3213_;
v___y_3206_ = v___y_3218_;
v___y_3207_ = v___y_3214_;
v___y_3208_ = v___y_3217_;
v___y_3209_ = v___x_3230_;
goto v___jp_3201_;
}
}
else
{
size_t v___x_3231_; size_t v___x_3232_; lean_object* v___x_3233_; 
v___x_3231_ = ((size_t)0ULL);
v___x_3232_ = lean_usize_of_nat(v___x_3222_);
v___x_3233_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(v_params_3220_, v___x_3231_, v___x_3232_, v___x_3225_, v___y_3214_, v___y_3215_);
lean_dec_ref(v_params_3220_);
v___y_3202_ = v___y_3219_;
v___y_3203_ = v___y_3216_;
v___y_3204_ = v___y_3215_;
v___y_3205_ = v_k_3213_;
v___y_3206_ = v___y_3218_;
v___y_3207_ = v___y_3214_;
v___y_3208_ = v___y_3217_;
v___y_3209_ = v___x_3233_;
goto v___jp_3201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(lean_object* v_as_3281_, size_t v_i_3282_, size_t v_stop_3283_, lean_object* v_b_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_){
_start:
{
lean_object* v___y_3293_; uint8_t v___x_3299_; 
v___x_3299_ = lean_usize_dec_eq(v_i_3282_, v_stop_3283_);
if (v___x_3299_ == 0)
{
lean_object* v___x_3300_; 
v___x_3300_ = lean_array_uget_borrowed(v_as_3281_, v_i_3282_);
switch(lean_obj_tag(v___x_3300_))
{
case 0:
{
lean_object* v_code_3301_; 
v_code_3301_ = lean_ctor_get(v___x_3300_, 2);
lean_inc_ref(v_code_3301_);
v___y_3293_ = v_code_3301_;
goto v___jp_3292_;
}
case 1:
{
lean_object* v_code_3302_; 
v_code_3302_ = lean_ctor_get(v___x_3300_, 1);
lean_inc_ref(v_code_3302_);
v___y_3293_ = v_code_3302_;
goto v___jp_3292_;
}
default: 
{
lean_object* v_code_3303_; 
v_code_3303_ = lean_ctor_get(v___x_3300_, 0);
lean_inc_ref(v_code_3303_);
v___y_3293_ = v_code_3303_;
goto v___jp_3292_;
}
}
}
else
{
lean_object* v___x_3304_; 
v___x_3304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3304_, 0, v_b_3284_);
return v___x_3304_;
}
v___jp_3292_:
{
lean_object* v___x_3294_; 
v___x_3294_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(v___y_3293_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_, v___y_3290_);
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v_a_3295_; size_t v___x_3296_; size_t v___x_3297_; 
v_a_3295_ = lean_ctor_get(v___x_3294_, 0);
lean_inc(v_a_3295_);
lean_dec_ref(v___x_3294_);
v___x_3296_ = ((size_t)1ULL);
v___x_3297_ = lean_usize_add(v_i_3282_, v___x_3296_);
v_i_3282_ = v___x_3297_;
v_b_3284_ = v_a_3295_;
goto _start;
}
else
{
return v___x_3294_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1___boxed(lean_object* v_as_3305_, lean_object* v_i_3306_, lean_object* v_stop_3307_, lean_object* v_b_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_){
_start:
{
size_t v_i_boxed_3316_; size_t v_stop_boxed_3317_; lean_object* v_res_3318_; 
v_i_boxed_3316_ = lean_unbox_usize(v_i_3306_);
lean_dec(v_i_3306_);
v_stop_boxed_3317_ = lean_unbox_usize(v_stop_3307_);
lean_dec(v_stop_3307_);
v_res_3318_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(v_as_3305_, v_i_boxed_3316_, v_stop_boxed_3317_, v_b_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_);
lean_dec(v___y_3314_);
lean_dec_ref(v___y_3313_);
lean_dec(v___y_3312_);
lean_dec_ref(v___y_3311_);
lean_dec(v___y_3310_);
lean_dec_ref(v___y_3309_);
lean_dec_ref(v_as_3305_);
return v_res_3318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams___boxed(lean_object* v_x_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_){
_start:
{
lean_object* v_res_3327_; 
v_res_3327_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(v_x_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_);
lean_dec(v_a_3325_);
lean_dec_ref(v_a_3324_);
lean_dec(v_a_3323_);
lean_dec_ref(v_a_3322_);
lean_dec(v_a_3321_);
lean_dec_ref(v_a_3320_);
return v_res_3327_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0(lean_object* v_as_3328_, size_t v_i_3329_, size_t v_stop_3330_, lean_object* v_b_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_){
_start:
{
lean_object* v___x_3339_; 
v___x_3339_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(v_as_3328_, v_i_3329_, v_stop_3330_, v_b_3331_, v___y_3332_, v___y_3333_);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___boxed(lean_object* v_as_3340_, lean_object* v_i_3341_, lean_object* v_stop_3342_, lean_object* v_b_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_){
_start:
{
size_t v_i_boxed_3351_; size_t v_stop_boxed_3352_; lean_object* v_res_3353_; 
v_i_boxed_3351_ = lean_unbox_usize(v_i_3341_);
lean_dec(v_i_3341_);
v_stop_boxed_3352_ = lean_unbox_usize(v_stop_3342_);
lean_dec(v_stop_3342_);
v_res_3353_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0(v_as_3340_, v_i_boxed_3351_, v_stop_boxed_3352_, v_b_3343_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
lean_dec(v___y_3349_);
lean_dec_ref(v___y_3348_);
lean_dec(v___y_3347_);
lean_dec_ref(v___y_3346_);
lean_dec(v___y_3345_);
lean_dec_ref(v___y_3344_);
lean_dec_ref(v_as_3340_);
return v_res_3353_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0___redArg(lean_object* v_a_3354_, lean_object* v_b_3355_){
_start:
{
lean_object* v_array_3356_; lean_object* v_start_3357_; lean_object* v_stop_3358_; lean_object* v___x_3360_; uint8_t v_isShared_3361_; uint8_t v_isSharedCheck_3371_; 
v_array_3356_ = lean_ctor_get(v_a_3354_, 0);
v_start_3357_ = lean_ctor_get(v_a_3354_, 1);
v_stop_3358_ = lean_ctor_get(v_a_3354_, 2);
v_isSharedCheck_3371_ = !lean_is_exclusive(v_a_3354_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3360_ = v_a_3354_;
v_isShared_3361_ = v_isSharedCheck_3371_;
goto v_resetjp_3359_;
}
else
{
lean_inc(v_stop_3358_);
lean_inc(v_start_3357_);
lean_inc(v_array_3356_);
lean_dec(v_a_3354_);
v___x_3360_ = lean_box(0);
v_isShared_3361_ = v_isSharedCheck_3371_;
goto v_resetjp_3359_;
}
v_resetjp_3359_:
{
uint8_t v___x_3362_; 
v___x_3362_ = lean_nat_dec_lt(v_start_3357_, v_stop_3358_);
if (v___x_3362_ == 0)
{
lean_del_object(v___x_3360_);
lean_dec(v_stop_3358_);
lean_dec(v_start_3357_);
lean_dec_ref(v_array_3356_);
return v_b_3355_;
}
else
{
lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3366_; 
v___x_3363_ = lean_unsigned_to_nat(1u);
v___x_3364_ = lean_nat_add(v_start_3357_, v___x_3363_);
lean_inc_ref(v_array_3356_);
if (v_isShared_3361_ == 0)
{
lean_ctor_set(v___x_3360_, 1, v___x_3364_);
v___x_3366_ = v___x_3360_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v_array_3356_);
lean_ctor_set(v_reuseFailAlloc_3370_, 1, v___x_3364_);
lean_ctor_set(v_reuseFailAlloc_3370_, 2, v_stop_3358_);
v___x_3366_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3367_ = lean_array_fget(v_array_3356_, v_start_3357_);
lean_dec(v_start_3357_);
lean_dec_ref(v_array_3356_);
v___x_3368_ = lean_array_push(v_b_3355_, v___x_3367_);
v_a_3354_ = v___x_3366_;
v_b_3355_ = v___x_3368_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(size_t v_sz_3372_, size_t v_i_3373_, lean_object* v_bs_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_){
_start:
{
uint8_t v___x_3378_; 
v___x_3378_ = lean_usize_dec_lt(v_i_3373_, v_sz_3372_);
if (v___x_3378_ == 0)
{
lean_object* v___x_3379_; 
v___x_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3379_, 0, v_bs_3374_);
return v___x_3379_;
}
else
{
lean_object* v_v_3380_; lean_object* v___x_3381_; 
v_v_3380_ = lean_array_uget_borrowed(v_bs_3374_, v_i_3373_);
v___x_3381_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(v_v_3380_, v___y_3375_, v___y_3376_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_object* v_a_3382_; lean_object* v___x_3383_; lean_object* v_bs_x27_3384_; size_t v___x_3385_; size_t v___x_3386_; lean_object* v___x_3387_; 
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
lean_inc(v_a_3382_);
lean_dec_ref(v___x_3381_);
v___x_3383_ = lean_unsigned_to_nat(0u);
v_bs_x27_3384_ = lean_array_uset(v_bs_3374_, v_i_3373_, v___x_3383_);
v___x_3385_ = ((size_t)1ULL);
v___x_3386_ = lean_usize_add(v_i_3373_, v___x_3385_);
v___x_3387_ = lean_array_uset(v_bs_x27_3384_, v_i_3373_, v_a_3382_);
v_i_3373_ = v___x_3386_;
v_bs_3374_ = v___x_3387_;
goto _start;
}
else
{
lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3396_; 
lean_dec_ref(v_bs_3374_);
v_a_3389_ = lean_ctor_get(v___x_3381_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3381_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3391_ = v___x_3381_;
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3381_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3394_; 
if (v_isShared_3392_ == 0)
{
v___x_3394_ = v___x_3391_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v_a_3389_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg___boxed(lean_object* v_sz_3397_, lean_object* v_i_3398_, lean_object* v_bs_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_){
_start:
{
size_t v_sz_boxed_3403_; size_t v_i_boxed_3404_; lean_object* v_res_3405_; 
v_sz_boxed_3403_ = lean_unbox_usize(v_sz_3397_);
lean_dec(v_sz_3397_);
v_i_boxed_3404_ = lean_unbox_usize(v_i_3398_);
lean_dec(v_i_3398_);
v_res_3405_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(v_sz_boxed_3403_, v_i_boxed_3404_, v_bs_3399_, v___y_3400_, v___y_3401_);
lean_dec(v___y_3401_);
lean_dec_ref(v___y_3400_);
return v_res_3405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(lean_object* v_as_3406_, size_t v_i_3407_, size_t v_stop_3408_, lean_object* v_b_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_){
_start:
{
uint8_t v___x_3414_; 
v___x_3414_ = lean_usize_dec_eq(v_i_3407_, v_stop_3408_);
if (v___x_3414_ == 0)
{
lean_object* v___x_3415_; lean_object* v_fvarId_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; 
v___x_3415_ = lean_array_uget_borrowed(v_as_3406_, v_i_3407_);
v_fvarId_3416_ = lean_ctor_get(v___x_3415_, 0);
v___x_3417_ = lean_box(1);
lean_inc(v_fvarId_3416_);
v___x_3418_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_fvarId_3416_, v___x_3417_, v___y_3410_, v___y_3411_, v___y_3412_);
if (lean_obj_tag(v___x_3418_) == 0)
{
lean_object* v_a_3419_; size_t v___x_3420_; size_t v___x_3421_; 
v_a_3419_ = lean_ctor_get(v___x_3418_, 0);
lean_inc(v_a_3419_);
lean_dec_ref(v___x_3418_);
v___x_3420_ = ((size_t)1ULL);
v___x_3421_ = lean_usize_add(v_i_3407_, v___x_3420_);
v_i_3407_ = v___x_3421_;
v_b_3409_ = v_a_3419_;
goto _start;
}
else
{
return v___x_3418_;
}
}
else
{
lean_object* v___x_3423_; 
v___x_3423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3423_, 0, v_b_3409_);
return v___x_3423_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg___boxed(lean_object* v_as_3424_, lean_object* v_i_3425_, lean_object* v_stop_3426_, lean_object* v_b_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_){
_start:
{
size_t v_i_boxed_3432_; size_t v_stop_boxed_3433_; lean_object* v_res_3434_; 
v_i_boxed_3432_ = lean_unbox_usize(v_i_3425_);
lean_dec(v_i_3425_);
v_stop_boxed_3433_ = lean_unbox_usize(v_stop_3426_);
lean_dec(v_stop_3426_);
v_res_3434_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_as_3424_, v_i_boxed_3432_, v_stop_boxed_3433_, v_b_3427_, v___y_3428_, v___y_3429_, v___y_3430_);
lean_dec(v___y_3430_);
lean_dec(v___y_3429_);
lean_dec_ref(v___y_3428_);
lean_dec_ref(v_as_3424_);
return v_res_3434_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(lean_object* v_as_3435_, size_t v_i_3436_, size_t v_stop_3437_, lean_object* v_b_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_){
_start:
{
uint8_t v___x_3443_; 
v___x_3443_ = lean_usize_dec_eq(v_i_3436_, v_stop_3437_);
if (v___x_3443_ == 0)
{
lean_object* v___x_3444_; lean_object* v_fst_3445_; lean_object* v_snd_3446_; lean_object* v_fvarId_3447_; lean_object* v___x_3448_; 
v___x_3444_ = lean_array_uget_borrowed(v_as_3435_, v_i_3436_);
v_fst_3445_ = lean_ctor_get(v___x_3444_, 0);
v_snd_3446_ = lean_ctor_get(v___x_3444_, 1);
v_fvarId_3447_ = lean_ctor_get(v_fst_3445_, 0);
lean_inc(v_snd_3446_);
lean_inc(v_fvarId_3447_);
v___x_3448_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_fvarId_3447_, v_snd_3446_, v___y_3439_, v___y_3440_, v___y_3441_);
if (lean_obj_tag(v___x_3448_) == 0)
{
lean_object* v_a_3449_; size_t v___x_3450_; size_t v___x_3451_; 
v_a_3449_ = lean_ctor_get(v___x_3448_, 0);
lean_inc(v_a_3449_);
lean_dec_ref(v___x_3448_);
v___x_3450_ = ((size_t)1ULL);
v___x_3451_ = lean_usize_add(v_i_3436_, v___x_3450_);
v_i_3436_ = v___x_3451_;
v_b_3438_ = v_a_3449_;
goto _start;
}
else
{
return v___x_3448_;
}
}
else
{
lean_object* v___x_3453_; 
v___x_3453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3453_, 0, v_b_3438_);
return v___x_3453_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg___boxed(lean_object* v_as_3454_, lean_object* v_i_3455_, lean_object* v_stop_3456_, lean_object* v_b_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_){
_start:
{
size_t v_i_boxed_3462_; size_t v_stop_boxed_3463_; lean_object* v_res_3464_; 
v_i_boxed_3462_ = lean_unbox_usize(v_i_3455_);
lean_dec(v_i_3455_);
v_stop_boxed_3463_ = lean_unbox_usize(v_stop_3456_);
lean_dec(v_stop_3456_);
v_res_3464_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(v_as_3454_, v_i_boxed_3462_, v_stop_boxed_3463_, v_b_3457_, v___y_3458_, v___y_3459_, v___y_3460_);
lean_dec(v___y_3460_);
lean_dec(v___y_3459_);
lean_dec_ref(v___y_3458_);
lean_dec_ref(v_as_3454_);
return v_res_3464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(lean_object* v_as_3467_, size_t v_i_3468_, size_t v_stop_3469_, lean_object* v_b_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_){
_start:
{
uint8_t v___x_3478_; 
v___x_3478_ = lean_usize_dec_eq(v_i_3468_, v_stop_3469_);
if (v___x_3478_ == 0)
{
lean_object* v___x_3479_; lean_object* v___x_3480_; 
v___x_3479_ = lean_array_uget_borrowed(v_as_3467_, v_i_3468_);
v___x_3480_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg(v___x_3479_, v___y_3471_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_, v___y_3476_);
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3481_; size_t v___x_3482_; size_t v___x_3483_; 
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_a_3481_);
lean_dec_ref(v___x_3480_);
v___x_3482_ = ((size_t)1ULL);
v___x_3483_ = lean_usize_add(v_i_3468_, v___x_3482_);
v_i_3468_ = v___x_3483_;
v_b_3470_ = v_a_3481_;
goto _start;
}
else
{
return v___x_3480_;
}
}
else
{
lean_object* v___x_3485_; 
v___x_3485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3485_, 0, v_b_3470_);
return v___x_3485_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue(lean_object* v_letVal_3486_, lean_object* v_a_3487_, lean_object* v_a_3488_, lean_object* v_a_3489_, lean_object* v_a_3490_, lean_object* v_a_3491_, lean_object* v_a_3492_){
_start:
{
lean_object* v___y_3501_; 
switch(lean_obj_tag(v_letVal_3486_))
{
case 0:
{
lean_object* v_value_3510_; lean_object* v___x_3512_; uint8_t v_isShared_3513_; uint8_t v_isSharedCheck_3518_; 
v_value_3510_ = lean_ctor_get(v_letVal_3486_, 0);
v_isSharedCheck_3518_ = !lean_is_exclusive(v_letVal_3486_);
if (v_isSharedCheck_3518_ == 0)
{
v___x_3512_ = v_letVal_3486_;
v_isShared_3513_ = v_isSharedCheck_3518_;
goto v_resetjp_3511_;
}
else
{
lean_inc(v_value_3510_);
lean_dec(v_letVal_3486_);
v___x_3512_ = lean_box(0);
v_isShared_3513_ = v_isSharedCheck_3518_;
goto v_resetjp_3511_;
}
v_resetjp_3511_:
{
lean_object* v___x_3514_; lean_object* v___x_3516_; 
v___x_3514_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit(v_value_3510_);
lean_dec_ref(v_value_3510_);
if (v_isShared_3513_ == 0)
{
lean_ctor_set(v___x_3512_, 0, v___x_3514_);
v___x_3516_ = v___x_3512_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v___x_3514_);
v___x_3516_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
return v___x_3516_;
}
}
}
case 1:
{
lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3519_ = lean_box(1);
v___x_3520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3519_);
return v___x_3520_;
}
case 2:
{
lean_object* v_idx_3521_; lean_object* v_struct_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; 
v_idx_3521_ = lean_ctor_get(v_letVal_3486_, 1);
lean_inc(v_idx_3521_);
v_struct_3522_ = lean_ctor_get(v_letVal_3486_, 2);
lean_inc(v_struct_3522_);
lean_dec_ref(v_letVal_3486_);
v___x_3523_ = lean_st_ref_get(v_a_3492_);
v___x_3524_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_struct_3522_, v_a_3487_, v_a_3488_);
lean_dec(v_struct_3522_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v_a_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3534_; 
v_a_3525_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3534_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3534_ == 0)
{
v___x_3527_ = v___x_3524_;
v_isShared_3528_ = v_isSharedCheck_3534_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_a_3525_);
lean_dec(v___x_3524_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3534_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v_env_3529_; lean_object* v___x_3530_; lean_object* v___x_3532_; 
v_env_3529_ = lean_ctor_get(v___x_3523_, 0);
lean_inc_ref(v_env_3529_);
lean_dec(v___x_3523_);
v___x_3530_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(v_env_3529_, v_a_3525_, v_idx_3521_);
lean_dec(v_idx_3521_);
lean_dec(v_a_3525_);
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 0, v___x_3530_);
v___x_3532_ = v___x_3527_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v___x_3530_);
v___x_3532_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
return v___x_3532_;
}
}
}
else
{
lean_dec(v___x_3523_);
lean_dec(v_idx_3521_);
return v___x_3524_;
}
}
case 3:
{
lean_object* v_declName_3535_; lean_object* v_args_3536_; lean_object* v___x_3537_; lean_object* v_env_3538_; lean_object* v___x_3539_; lean_object* v_numFields_3541_; lean_object* v_lower_3542_; lean_object* v_upper_3543_; lean_object* v___x_3571_; lean_object* v___y_3640_; uint8_t v___x_3649_; 
v_declName_3535_ = lean_ctor_get(v_letVal_3486_, 0);
lean_inc(v_declName_3535_);
v_args_3536_ = lean_ctor_get(v_letVal_3486_, 2);
lean_inc_ref(v_args_3536_);
lean_dec_ref(v_letVal_3486_);
v___x_3537_ = lean_st_ref_get(v_a_3492_);
v_env_3538_ = lean_ctor_get(v___x_3537_, 0);
lean_inc_ref(v_env_3538_);
lean_dec(v___x_3537_);
v___x_3539_ = lean_unsigned_to_nat(0u);
v___x_3571_ = lean_array_get_size(v_args_3536_);
v___x_3649_ = lean_nat_dec_lt(v___x_3539_, v___x_3571_);
if (v___x_3649_ == 0)
{
goto v___jp_3572_;
}
else
{
lean_object* v___x_3650_; uint8_t v___x_3651_; 
v___x_3650_ = lean_box(0);
v___x_3651_ = lean_nat_dec_le(v___x_3571_, v___x_3571_);
if (v___x_3651_ == 0)
{
if (v___x_3649_ == 0)
{
goto v___jp_3572_;
}
else
{
size_t v___x_3652_; size_t v___x_3653_; lean_object* v___x_3654_; 
v___x_3652_ = ((size_t)0ULL);
v___x_3653_ = lean_usize_of_nat(v___x_3571_);
v___x_3654_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3536_, v___x_3652_, v___x_3653_, v___x_3650_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
v___y_3640_ = v___x_3654_;
goto v___jp_3639_;
}
}
else
{
size_t v___x_3655_; size_t v___x_3656_; lean_object* v___x_3657_; 
v___x_3655_ = ((size_t)0ULL);
v___x_3656_ = lean_usize_of_nat(v___x_3571_);
v___x_3657_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3536_, v___x_3655_, v___x_3656_, v___x_3650_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
v___y_3640_ = v___x_3657_;
goto v___jp_3639_;
}
}
v___jp_3540_:
{
lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; uint8_t v___x_3548_; 
v___x_3544_ = l_Array_toSubarray___redArg(v_args_3536_, v_lower_3542_, v_upper_3543_);
v___x_3545_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___closed__0));
v___x_3546_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0___redArg(v___x_3544_, v___x_3545_);
v___x_3547_ = lean_array_get_size(v___x_3546_);
v___x_3548_ = lean_nat_dec_eq(v_numFields_3541_, v___x_3547_);
lean_dec(v_numFields_3541_);
if (v___x_3548_ == 0)
{
lean_object* v___x_3549_; lean_object* v___x_3550_; 
lean_dec_ref(v___x_3546_);
lean_dec(v_declName_3535_);
v___x_3549_ = lean_box(1);
v___x_3550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3549_);
return v___x_3550_;
}
else
{
size_t v_sz_3551_; size_t v___x_3552_; lean_object* v___x_3553_; 
v_sz_3551_ = lean_array_size(v___x_3546_);
v___x_3552_ = ((size_t)0ULL);
v___x_3553_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(v_sz_3551_, v___x_3552_, v___x_3546_, v_a_3487_, v_a_3488_);
if (lean_obj_tag(v___x_3553_) == 0)
{
lean_object* v_a_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3562_; 
v_a_3554_ = lean_ctor_get(v___x_3553_, 0);
v_isSharedCheck_3562_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3562_ == 0)
{
v___x_3556_ = v___x_3553_;
v_isShared_3557_ = v_isSharedCheck_3562_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_a_3554_);
lean_dec(v___x_3553_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3562_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
lean_object* v___x_3558_; lean_object* v___x_3560_; 
v___x_3558_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3558_, 0, v_declName_3535_);
lean_ctor_set(v___x_3558_, 1, v_a_3554_);
if (v_isShared_3557_ == 0)
{
lean_ctor_set(v___x_3556_, 0, v___x_3558_);
v___x_3560_ = v___x_3556_;
goto v_reusejp_3559_;
}
else
{
lean_object* v_reuseFailAlloc_3561_; 
v_reuseFailAlloc_3561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3561_, 0, v___x_3558_);
v___x_3560_ = v_reuseFailAlloc_3561_;
goto v_reusejp_3559_;
}
v_reusejp_3559_:
{
return v___x_3560_;
}
}
}
else
{
lean_object* v_a_3563_; lean_object* v___x_3565_; uint8_t v_isShared_3566_; uint8_t v_isSharedCheck_3570_; 
lean_dec(v_declName_3535_);
v_a_3563_ = lean_ctor_get(v___x_3553_, 0);
v_isSharedCheck_3570_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3570_ == 0)
{
v___x_3565_ = v___x_3553_;
v_isShared_3566_ = v_isSharedCheck_3570_;
goto v_resetjp_3564_;
}
else
{
lean_inc(v_a_3563_);
lean_dec(v___x_3553_);
v___x_3565_ = lean_box(0);
v_isShared_3566_ = v_isSharedCheck_3570_;
goto v_resetjp_3564_;
}
v_resetjp_3564_:
{
lean_object* v___x_3568_; 
if (v_isShared_3566_ == 0)
{
v___x_3568_ = v___x_3565_;
goto v_reusejp_3567_;
}
else
{
lean_object* v_reuseFailAlloc_3569_; 
v_reuseFailAlloc_3569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3569_, 0, v_a_3563_);
v___x_3568_ = v_reuseFailAlloc_3569_;
goto v_reusejp_3567_;
}
v_reusejp_3567_:
{
return v___x_3568_;
}
}
}
}
}
v___jp_3572_:
{
lean_object* v___x_3573_; 
v___x_3573_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_3489_);
if (lean_obj_tag(v___x_3573_) == 0)
{
lean_object* v_a_3574_; uint8_t v___x_3575_; lean_object* v___x_3576_; 
v_a_3574_ = lean_ctor_get(v___x_3573_, 0);
lean_inc(v_a_3574_);
lean_dec_ref(v___x_3573_);
v___x_3575_ = lean_unbox(v_a_3574_);
lean_dec(v_a_3574_);
lean_inc(v_declName_3535_);
v___x_3576_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_3535_, v___x_3575_, v_a_3491_, v_a_3492_);
if (lean_obj_tag(v___x_3576_) == 0)
{
lean_object* v_a_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3622_; 
v_a_3577_ = lean_ctor_get(v___x_3576_, 0);
v_isSharedCheck_3622_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3622_ == 0)
{
v___x_3579_ = v___x_3576_;
v_isShared_3580_ = v_isSharedCheck_3622_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_a_3577_);
lean_dec(v___x_3576_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3622_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
if (lean_obj_tag(v_a_3577_) == 1)
{
lean_object* v_val_3581_; lean_object* v___x_3582_; uint8_t v___x_3583_; 
lean_dec_ref(v_args_3536_);
v_val_3581_ = lean_ctor_get(v_a_3577_, 0);
lean_inc(v_val_3581_);
lean_dec_ref(v_a_3577_);
v___x_3582_ = l_Lean_Compiler_LCNF_Decl_getArity___redArg(v_val_3581_);
lean_dec(v_val_3581_);
v___x_3583_ = lean_nat_dec_eq(v___x_3582_, v___x_3571_);
lean_dec(v___x_3582_);
if (v___x_3583_ == 0)
{
lean_object* v___x_3584_; lean_object* v___x_3586_; 
lean_dec_ref(v_env_3538_);
lean_dec(v_declName_3535_);
v___x_3584_ = lean_box(1);
if (v_isShared_3580_ == 0)
{
lean_ctor_set(v___x_3579_, 0, v___x_3584_);
v___x_3586_ = v___x_3579_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v___x_3584_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
else
{
lean_object* v___x_3588_; 
lean_inc(v_declName_3535_);
v___x_3588_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f(v_env_3538_, v_declName_3535_);
if (lean_obj_tag(v___x_3588_) == 0)
{
lean_object* v___x_3589_; 
lean_del_object(v___x_3579_);
v___x_3589_ = l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(v_declName_3535_, v_a_3487_, v_a_3488_);
if (lean_obj_tag(v___x_3589_) == 0)
{
lean_object* v_a_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3602_; 
v_a_3590_ = lean_ctor_get(v___x_3589_, 0);
v_isSharedCheck_3602_ = !lean_is_exclusive(v___x_3589_);
if (v_isSharedCheck_3602_ == 0)
{
v___x_3592_ = v___x_3589_;
v_isShared_3593_ = v_isSharedCheck_3602_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_a_3590_);
lean_dec(v___x_3589_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3602_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
if (lean_obj_tag(v_a_3590_) == 0)
{
lean_object* v___x_3594_; lean_object* v___x_3596_; 
v___x_3594_ = lean_box(1);
if (v_isShared_3593_ == 0)
{
lean_ctor_set(v___x_3592_, 0, v___x_3594_);
v___x_3596_ = v___x_3592_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v___x_3594_);
v___x_3596_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
return v___x_3596_;
}
}
else
{
lean_object* v_val_3598_; lean_object* v___x_3600_; 
v_val_3598_ = lean_ctor_get(v_a_3590_, 0);
lean_inc(v_val_3598_);
lean_dec_ref(v_a_3590_);
if (v_isShared_3593_ == 0)
{
lean_ctor_set(v___x_3592_, 0, v_val_3598_);
v___x_3600_ = v___x_3592_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v_val_3598_);
v___x_3600_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
return v___x_3600_;
}
}
}
}
else
{
lean_object* v_a_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3610_; 
v_a_3603_ = lean_ctor_get(v___x_3589_, 0);
v_isSharedCheck_3610_ = !lean_is_exclusive(v___x_3589_);
if (v_isSharedCheck_3610_ == 0)
{
v___x_3605_ = v___x_3589_;
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_a_3603_);
lean_dec(v___x_3589_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___x_3608_; 
if (v_isShared_3606_ == 0)
{
v___x_3608_ = v___x_3605_;
goto v_reusejp_3607_;
}
else
{
lean_object* v_reuseFailAlloc_3609_; 
v_reuseFailAlloc_3609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3609_, 0, v_a_3603_);
v___x_3608_ = v_reuseFailAlloc_3609_;
goto v_reusejp_3607_;
}
v_reusejp_3607_:
{
return v___x_3608_;
}
}
}
}
else
{
lean_object* v_val_3611_; lean_object* v___x_3613_; 
lean_dec(v_declName_3535_);
v_val_3611_ = lean_ctor_get(v___x_3588_, 0);
lean_inc(v_val_3611_);
lean_dec_ref(v___x_3588_);
if (v_isShared_3580_ == 0)
{
lean_ctor_set(v___x_3579_, 0, v_val_3611_);
v___x_3613_ = v___x_3579_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v_val_3611_);
v___x_3613_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
return v___x_3613_;
}
}
}
}
else
{
uint8_t v___x_3615_; lean_object* v___x_3616_; 
lean_del_object(v___x_3579_);
lean_dec(v_a_3577_);
v___x_3615_ = 0;
lean_inc(v_declName_3535_);
v___x_3616_ = l_Lean_Environment_find_x3f(v_env_3538_, v_declName_3535_, v___x_3615_);
if (lean_obj_tag(v___x_3616_) == 1)
{
lean_object* v_val_3617_; 
v_val_3617_ = lean_ctor_get(v___x_3616_, 0);
lean_inc(v_val_3617_);
lean_dec_ref(v___x_3616_);
if (lean_obj_tag(v_val_3617_) == 6)
{
lean_object* v_val_3618_; lean_object* v_numParams_3619_; lean_object* v_numFields_3620_; uint8_t v___x_3621_; 
v_val_3618_ = lean_ctor_get(v_val_3617_, 0);
lean_inc_ref(v_val_3618_);
lean_dec_ref(v_val_3617_);
v_numParams_3619_ = lean_ctor_get(v_val_3618_, 3);
lean_inc(v_numParams_3619_);
v_numFields_3620_ = lean_ctor_get(v_val_3618_, 4);
lean_inc(v_numFields_3620_);
lean_dec_ref(v_val_3618_);
v___x_3621_ = lean_nat_dec_le(v_numParams_3619_, v___x_3539_);
if (v___x_3621_ == 0)
{
v_numFields_3541_ = v_numFields_3620_;
v_lower_3542_ = v_numParams_3619_;
v_upper_3543_ = v___x_3571_;
goto v___jp_3540_;
}
else
{
lean_dec(v_numParams_3619_);
v_numFields_3541_ = v_numFields_3620_;
v_lower_3542_ = v___x_3539_;
v_upper_3543_ = v___x_3571_;
goto v___jp_3540_;
}
}
else
{
lean_dec(v_val_3617_);
lean_dec_ref(v_args_3536_);
lean_dec(v_declName_3535_);
goto v___jp_3494_;
}
}
else
{
lean_dec(v___x_3616_);
lean_dec_ref(v_args_3536_);
lean_dec(v_declName_3535_);
goto v___jp_3494_;
}
}
}
}
else
{
lean_object* v_a_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3630_; 
lean_dec_ref(v_env_3538_);
lean_dec_ref(v_args_3536_);
lean_dec(v_declName_3535_);
v_a_3623_ = lean_ctor_get(v___x_3576_, 0);
v_isSharedCheck_3630_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3630_ == 0)
{
v___x_3625_ = v___x_3576_;
v_isShared_3626_ = v_isSharedCheck_3630_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_a_3623_);
lean_dec(v___x_3576_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3630_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___x_3628_; 
if (v_isShared_3626_ == 0)
{
v___x_3628_ = v___x_3625_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v_a_3623_);
v___x_3628_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
return v___x_3628_;
}
}
}
}
else
{
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3638_; 
lean_dec_ref(v_env_3538_);
lean_dec_ref(v_args_3536_);
lean_dec(v_declName_3535_);
v_a_3631_ = lean_ctor_get(v___x_3573_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3633_ = v___x_3573_;
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v___x_3573_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v___x_3636_; 
if (v_isShared_3634_ == 0)
{
v___x_3636_ = v___x_3633_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3637_, 0, v_a_3631_);
v___x_3636_ = v_reuseFailAlloc_3637_;
goto v_reusejp_3635_;
}
v_reusejp_3635_:
{
return v___x_3636_;
}
}
}
}
v___jp_3639_:
{
if (lean_obj_tag(v___y_3640_) == 0)
{
lean_dec_ref(v___y_3640_);
goto v___jp_3572_;
}
else
{
lean_object* v_a_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3648_; 
lean_dec_ref(v_env_3538_);
lean_dec_ref(v_args_3536_);
lean_dec(v_declName_3535_);
v_a_3641_ = lean_ctor_get(v___y_3640_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v___y_3640_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3643_ = v___y_3640_;
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_a_3641_);
lean_dec(v___y_3640_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v___x_3646_; 
if (v_isShared_3644_ == 0)
{
v___x_3646_ = v___x_3643_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v_a_3641_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
}
}
default: 
{
lean_object* v_args_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; uint8_t v___x_3661_; 
v_args_3658_ = lean_ctor_get(v_letVal_3486_, 1);
lean_inc_ref(v_args_3658_);
lean_dec_ref(v_letVal_3486_);
v___x_3659_ = lean_unsigned_to_nat(0u);
v___x_3660_ = lean_array_get_size(v_args_3658_);
v___x_3661_ = lean_nat_dec_lt(v___x_3659_, v___x_3660_);
if (v___x_3661_ == 0)
{
lean_dec_ref(v_args_3658_);
goto v___jp_3497_;
}
else
{
lean_object* v___x_3662_; uint8_t v___x_3663_; 
v___x_3662_ = lean_box(0);
v___x_3663_ = lean_nat_dec_le(v___x_3660_, v___x_3660_);
if (v___x_3663_ == 0)
{
if (v___x_3661_ == 0)
{
lean_dec_ref(v_args_3658_);
goto v___jp_3497_;
}
else
{
size_t v___x_3664_; size_t v___x_3665_; lean_object* v___x_3666_; 
v___x_3664_ = ((size_t)0ULL);
v___x_3665_ = lean_usize_of_nat(v___x_3660_);
v___x_3666_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3658_, v___x_3664_, v___x_3665_, v___x_3662_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
lean_dec_ref(v_args_3658_);
v___y_3501_ = v___x_3666_;
goto v___jp_3500_;
}
}
else
{
size_t v___x_3667_; size_t v___x_3668_; lean_object* v___x_3669_; 
v___x_3667_ = ((size_t)0ULL);
v___x_3668_ = lean_usize_of_nat(v___x_3660_);
v___x_3669_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3658_, v___x_3667_, v___x_3668_, v___x_3662_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
lean_dec_ref(v_args_3658_);
v___y_3501_ = v___x_3669_;
goto v___jp_3500_;
}
}
}
}
v___jp_3494_:
{
lean_object* v___x_3495_; lean_object* v___x_3496_; 
v___x_3495_ = lean_box(1);
v___x_3496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3495_);
return v___x_3496_;
}
v___jp_3497_:
{
lean_object* v___x_3498_; lean_object* v___x_3499_; 
v___x_3498_ = lean_box(1);
v___x_3499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3499_, 0, v___x_3498_);
return v___x_3499_;
}
v___jp_3500_:
{
if (lean_obj_tag(v___y_3501_) == 0)
{
lean_dec_ref(v___y_3501_);
goto v___jp_3497_;
}
else
{
lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3509_; 
v_a_3502_ = lean_ctor_get(v___y_3501_, 0);
v_isSharedCheck_3509_ = !lean_is_exclusive(v___y_3501_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3504_ = v___y_3501_;
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___y_3501_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3507_; 
if (v_isShared_3505_ == 0)
{
v___x_3507_ = v___x_3504_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_a_3502_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(lean_object* v_funDecl_3670_, lean_object* v_args_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_, lean_object* v_a_3677_){
_start:
{
lean_object* v_params_3679_; lean_object* v_value_3680_; lean_object* v___x_3681_; 
v_params_3679_ = lean_ctor_get(v_funDecl_3670_, 2);
lean_inc_ref(v_params_3679_);
v_value_3680_ = lean_ctor_get(v_funDecl_3670_, 4);
lean_inc_ref(v_value_3680_);
lean_dec_ref(v_funDecl_3670_);
v___x_3681_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment(v_params_3679_, v_args_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_, v_a_3677_);
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3693_; 
v_a_3682_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3684_ = v___x_3681_;
v_isShared_3685_ = v_isSharedCheck_3693_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_3681_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3693_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
uint8_t v___x_3686_; 
v___x_3686_ = lean_unbox(v_a_3682_);
lean_dec(v_a_3682_);
if (v___x_3686_ == 0)
{
lean_object* v___x_3687_; lean_object* v___x_3689_; 
lean_dec_ref(v_value_3680_);
v___x_3687_ = lean_box(0);
if (v_isShared_3685_ == 0)
{
lean_ctor_set(v___x_3684_, 0, v___x_3687_);
v___x_3689_ = v___x_3684_;
goto v_reusejp_3688_;
}
else
{
lean_object* v_reuseFailAlloc_3690_; 
v_reuseFailAlloc_3690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3690_, 0, v___x_3687_);
v___x_3689_ = v_reuseFailAlloc_3690_;
goto v_reusejp_3688_;
}
v_reusejp_3688_:
{
return v___x_3689_;
}
}
else
{
lean_object* v___x_3691_; 
lean_del_object(v___x_3684_);
lean_inc_ref(v_value_3680_);
v___x_3691_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(v_value_3680_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_, v_a_3677_);
if (lean_obj_tag(v___x_3691_) == 0)
{
lean_object* v___x_3692_; 
lean_dec_ref(v___x_3691_);
v___x_3692_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_value_3680_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_, v_a_3677_);
return v___x_3692_;
}
else
{
lean_dec_ref(v_value_3680_);
return v___x_3691_;
}
}
}
}
else
{
lean_object* v_a_3694_; lean_object* v___x_3696_; uint8_t v_isShared_3697_; uint8_t v_isSharedCheck_3701_; 
lean_dec_ref(v_value_3680_);
v_a_3694_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3696_ = v___x_3681_;
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
else
{
lean_inc(v_a_3694_);
lean_dec(v___x_3681_);
v___x_3696_ = lean_box(0);
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
v_resetjp_3695_:
{
lean_object* v___x_3699_; 
if (v_isShared_3697_ == 0)
{
v___x_3699_ = v___x_3696_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v_a_3694_);
v___x_3699_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
return v___x_3699_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8(lean_object* v_a_3702_, lean_object* v_as_3703_, size_t v_sz_3704_, size_t v_i_3705_, lean_object* v_b_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_){
_start:
{
lean_object* v_a_3715_; uint8_t v___x_3719_; 
v___x_3719_ = lean_usize_dec_lt(v_i_3705_, v_sz_3704_);
if (v___x_3719_ == 0)
{
lean_object* v___x_3720_; 
lean_dec(v_a_3702_);
v___x_3720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3720_, 0, v_b_3706_);
return v___x_3720_;
}
else
{
lean_object* v___x_3721_; lean_object* v_a_3722_; 
v___x_3721_ = lean_box(0);
v_a_3722_ = lean_array_uget_borrowed(v_as_3703_, v_i_3705_);
if (lean_obj_tag(v_a_3722_) == 0)
{
lean_object* v_ctorName_3723_; lean_object* v_params_3724_; lean_object* v_code_3725_; lean_object* v___y_3727_; lean_object* v___y_3728_; lean_object* v___y_3729_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v___y_3735_; lean_object* v___y_3737_; lean_object* v___x_3738_; 
v_ctorName_3723_ = lean_ctor_get(v_a_3722_, 0);
v_params_3724_ = lean_ctor_get(v_a_3722_, 1);
v_code_3725_ = lean_ctor_get(v_a_3722_, 2);
lean_inc(v_a_3702_);
v___x_3738_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs(v_a_3702_, v_ctorName_3723_);
if (lean_obj_tag(v___x_3738_) == 1)
{
lean_object* v_val_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; uint8_t v___x_3743_; 
v_val_3739_ = lean_ctor_get(v___x_3738_, 0);
lean_inc(v_val_3739_);
lean_dec_ref(v___x_3738_);
v___x_3740_ = l_Array_zip___redArg(v_params_3724_, v_val_3739_);
lean_dec(v_val_3739_);
v___x_3741_ = lean_unsigned_to_nat(0u);
v___x_3742_ = lean_array_get_size(v___x_3740_);
v___x_3743_ = lean_nat_dec_lt(v___x_3741_, v___x_3742_);
if (v___x_3743_ == 0)
{
lean_dec_ref(v___x_3740_);
v___y_3727_ = v___y_3707_;
v___y_3728_ = v___y_3708_;
v___y_3729_ = v___y_3709_;
v___y_3730_ = v___y_3710_;
v___y_3731_ = v___y_3711_;
v___y_3732_ = v___y_3712_;
goto v___jp_3726_;
}
else
{
uint8_t v___x_3744_; 
v___x_3744_ = lean_nat_dec_le(v___x_3742_, v___x_3742_);
if (v___x_3744_ == 0)
{
if (v___x_3743_ == 0)
{
lean_dec_ref(v___x_3740_);
v___y_3727_ = v___y_3707_;
v___y_3728_ = v___y_3708_;
v___y_3729_ = v___y_3709_;
v___y_3730_ = v___y_3710_;
v___y_3731_ = v___y_3711_;
v___y_3732_ = v___y_3712_;
goto v___jp_3726_;
}
else
{
size_t v___x_3745_; size_t v___x_3746_; lean_object* v___x_3747_; 
v___x_3745_ = ((size_t)0ULL);
v___x_3746_ = lean_usize_of_nat(v___x_3742_);
v___x_3747_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(v___x_3740_, v___x_3745_, v___x_3746_, v___x_3721_, v___y_3707_, v___y_3708_, v___y_3712_);
lean_dec_ref(v___x_3740_);
v___y_3735_ = v___x_3747_;
goto v___jp_3734_;
}
}
else
{
size_t v___x_3748_; size_t v___x_3749_; lean_object* v___x_3750_; 
v___x_3748_ = ((size_t)0ULL);
v___x_3749_ = lean_usize_of_nat(v___x_3742_);
v___x_3750_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(v___x_3740_, v___x_3748_, v___x_3749_, v___x_3721_, v___y_3707_, v___y_3708_, v___y_3712_);
lean_dec_ref(v___x_3740_);
v___y_3735_ = v___x_3750_;
goto v___jp_3734_;
}
}
}
else
{
lean_object* v___x_3751_; lean_object* v___x_3752_; uint8_t v___x_3753_; 
lean_dec(v___x_3738_);
v___x_3751_ = lean_unsigned_to_nat(0u);
v___x_3752_ = lean_array_get_size(v_params_3724_);
v___x_3753_ = lean_nat_dec_lt(v___x_3751_, v___x_3752_);
if (v___x_3753_ == 0)
{
v___y_3727_ = v___y_3707_;
v___y_3728_ = v___y_3708_;
v___y_3729_ = v___y_3709_;
v___y_3730_ = v___y_3710_;
v___y_3731_ = v___y_3711_;
v___y_3732_ = v___y_3712_;
goto v___jp_3726_;
}
else
{
uint8_t v___x_3754_; 
v___x_3754_ = lean_nat_dec_le(v___x_3752_, v___x_3752_);
if (v___x_3754_ == 0)
{
if (v___x_3753_ == 0)
{
v___y_3727_ = v___y_3707_;
v___y_3728_ = v___y_3708_;
v___y_3729_ = v___y_3709_;
v___y_3730_ = v___y_3710_;
v___y_3731_ = v___y_3711_;
v___y_3732_ = v___y_3712_;
goto v___jp_3726_;
}
else
{
size_t v___x_3755_; size_t v___x_3756_; lean_object* v___x_3757_; 
v___x_3755_ = ((size_t)0ULL);
v___x_3756_ = lean_usize_of_nat(v___x_3752_);
v___x_3757_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_params_3724_, v___x_3755_, v___x_3756_, v___x_3721_, v___y_3707_, v___y_3708_, v___y_3712_);
v___y_3737_ = v___x_3757_;
goto v___jp_3736_;
}
}
else
{
size_t v___x_3758_; size_t v___x_3759_; lean_object* v___x_3760_; 
v___x_3758_ = ((size_t)0ULL);
v___x_3759_ = lean_usize_of_nat(v___x_3752_);
v___x_3760_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_params_3724_, v___x_3758_, v___x_3759_, v___x_3721_, v___y_3707_, v___y_3708_, v___y_3712_);
v___y_3737_ = v___x_3760_;
goto v___jp_3736_;
}
}
}
v___jp_3726_:
{
lean_object* v___x_3733_; 
lean_inc_ref(v_code_3725_);
v___x_3733_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_code_3725_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
if (lean_obj_tag(v___x_3733_) == 0)
{
lean_dec_ref(v___x_3733_);
v_a_3715_ = v___x_3721_;
goto v___jp_3714_;
}
else
{
lean_dec(v_a_3702_);
return v___x_3733_;
}
}
v___jp_3734_:
{
if (lean_obj_tag(v___y_3735_) == 0)
{
lean_dec_ref(v___y_3735_);
v___y_3727_ = v___y_3707_;
v___y_3728_ = v___y_3708_;
v___y_3729_ = v___y_3709_;
v___y_3730_ = v___y_3710_;
v___y_3731_ = v___y_3711_;
v___y_3732_ = v___y_3712_;
goto v___jp_3726_;
}
else
{
lean_dec(v_a_3702_);
return v___y_3735_;
}
}
v___jp_3736_:
{
if (lean_obj_tag(v___y_3737_) == 0)
{
lean_dec_ref(v___y_3737_);
v___y_3727_ = v___y_3707_;
v___y_3728_ = v___y_3708_;
v___y_3729_ = v___y_3709_;
v___y_3730_ = v___y_3710_;
v___y_3731_ = v___y_3711_;
v___y_3732_ = v___y_3712_;
goto v___jp_3726_;
}
else
{
lean_dec(v_a_3702_);
return v___y_3737_;
}
}
}
else
{
lean_object* v_code_3761_; lean_object* v___x_3762_; 
v_code_3761_ = lean_ctor_get(v_a_3722_, 0);
lean_inc_ref(v_code_3761_);
v___x_3762_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_code_3761_, v___y_3707_, v___y_3708_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_);
if (lean_obj_tag(v___x_3762_) == 0)
{
lean_dec_ref(v___x_3762_);
v_a_3715_ = v___x_3721_;
goto v___jp_3714_;
}
else
{
lean_dec(v_a_3702_);
return v___x_3762_;
}
}
}
v___jp_3714_:
{
size_t v___x_3716_; size_t v___x_3717_; 
v___x_3716_ = ((size_t)1ULL);
v___x_3717_ = lean_usize_add(v_i_3705_, v___x_3716_);
v_i_3705_ = v___x_3717_;
v_b_3706_ = v_a_3715_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(lean_object* v_x_3763_, lean_object* v_a_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_, lean_object* v_a_3767_, lean_object* v_a_3768_, lean_object* v_a_3769_){
_start:
{
lean_object* v_decl_3772_; lean_object* v_k_3773_; lean_object* v___y_3774_; lean_object* v___y_3775_; lean_object* v___y_3776_; lean_object* v___y_3777_; lean_object* v___y_3778_; lean_object* v___y_3779_; 
switch(lean_obj_tag(v_x_3763_))
{
case 0:
{
lean_object* v_decl_3783_; lean_object* v_k_3784_; lean_object* v_fvarId_3785_; lean_object* v_value_3786_; lean_object* v___x_3787_; 
v_decl_3783_ = lean_ctor_get(v_x_3763_, 0);
lean_inc_ref(v_decl_3783_);
v_k_3784_ = lean_ctor_get(v_x_3763_, 1);
lean_inc_ref(v_k_3784_);
lean_dec_ref(v_x_3763_);
v_fvarId_3785_ = lean_ctor_get(v_decl_3783_, 0);
lean_inc(v_fvarId_3785_);
v_value_3786_ = lean_ctor_get(v_decl_3783_, 3);
lean_inc_n(v_value_3786_, 2);
lean_dec_ref(v_decl_3783_);
v___x_3787_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue(v_value_3786_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v_a_3788_; lean_object* v___x_3789_; 
v_a_3788_ = lean_ctor_get(v___x_3787_, 0);
lean_inc(v_a_3788_);
lean_dec_ref(v___x_3787_);
v___x_3789_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_fvarId_3785_, v_a_3788_, v_a_3764_, v_a_3765_, v_a_3769_);
if (lean_obj_tag(v___x_3789_) == 0)
{
lean_dec_ref(v___x_3789_);
if (lean_obj_tag(v_value_3786_) == 4)
{
lean_object* v_fvarId_3790_; lean_object* v_args_3791_; uint8_t v___x_3792_; lean_object* v___x_3793_; 
v_fvarId_3790_ = lean_ctor_get(v_value_3786_, 0);
lean_inc(v_fvarId_3790_);
v_args_3791_ = lean_ctor_get(v_value_3786_, 1);
lean_inc_ref(v_args_3791_);
lean_dec_ref(v_value_3786_);
v___x_3792_ = 0;
v___x_3793_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_3792_, v_fvarId_3790_, v_a_3767_);
lean_dec(v_fvarId_3790_);
if (lean_obj_tag(v___x_3793_) == 0)
{
lean_object* v_a_3794_; 
v_a_3794_ = lean_ctor_get(v___x_3793_, 0);
lean_inc(v_a_3794_);
lean_dec_ref(v___x_3793_);
if (lean_obj_tag(v_a_3794_) == 1)
{
lean_object* v_val_3795_; lean_object* v___x_3796_; 
v_val_3795_ = lean_ctor_get(v_a_3794_, 0);
lean_inc(v_val_3795_);
lean_dec_ref(v_a_3794_);
v___x_3796_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_val_3795_, v_args_3791_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
if (lean_obj_tag(v___x_3796_) == 0)
{
lean_dec_ref(v___x_3796_);
v_x_3763_ = v_k_3784_;
goto _start;
}
else
{
lean_dec_ref(v_k_3784_);
return v___x_3796_;
}
}
else
{
lean_dec(v_a_3794_);
lean_dec_ref(v_args_3791_);
v_x_3763_ = v_k_3784_;
goto _start;
}
}
else
{
lean_object* v_a_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3806_; 
lean_dec_ref(v_args_3791_);
lean_dec_ref(v_k_3784_);
v_a_3799_ = lean_ctor_get(v___x_3793_, 0);
v_isSharedCheck_3806_ = !lean_is_exclusive(v___x_3793_);
if (v_isSharedCheck_3806_ == 0)
{
v___x_3801_ = v___x_3793_;
v_isShared_3802_ = v_isSharedCheck_3806_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_a_3799_);
lean_dec(v___x_3793_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3806_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v___x_3804_; 
if (v_isShared_3802_ == 0)
{
v___x_3804_ = v___x_3801_;
goto v_reusejp_3803_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v_a_3799_);
v___x_3804_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3803_;
}
v_reusejp_3803_:
{
return v___x_3804_;
}
}
}
}
else
{
lean_dec(v_value_3786_);
v_x_3763_ = v_k_3784_;
goto _start;
}
}
else
{
lean_dec(v_value_3786_);
lean_dec_ref(v_k_3784_);
return v___x_3789_;
}
}
else
{
lean_object* v_a_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3815_; 
lean_dec(v_value_3786_);
lean_dec(v_fvarId_3785_);
lean_dec_ref(v_k_3784_);
v_a_3808_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3815_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3815_ == 0)
{
v___x_3810_ = v___x_3787_;
v_isShared_3811_ = v_isSharedCheck_3815_;
goto v_resetjp_3809_;
}
else
{
lean_inc(v_a_3808_);
lean_dec(v___x_3787_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3815_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
lean_object* v___x_3813_; 
if (v_isShared_3811_ == 0)
{
v___x_3813_ = v___x_3810_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3814_; 
v_reuseFailAlloc_3814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3814_, 0, v_a_3808_);
v___x_3813_ = v_reuseFailAlloc_3814_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
return v___x_3813_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_3816_; lean_object* v_args_3817_; uint8_t v___x_3818_; lean_object* v___x_3819_; 
v_fvarId_3816_ = lean_ctor_get(v_x_3763_, 0);
lean_inc(v_fvarId_3816_);
v_args_3817_ = lean_ctor_get(v_x_3763_, 1);
lean_inc_ref(v_args_3817_);
lean_dec_ref(v_x_3763_);
v___x_3818_ = 0;
v___x_3819_ = l_Lean_Compiler_LCNF_getFunDecl(v___x_3818_, v_fvarId_3816_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
if (lean_obj_tag(v___x_3819_) == 0)
{
lean_object* v_a_3820_; lean_object* v___y_3822_; lean_object* v___x_3824_; lean_object* v___x_3825_; uint8_t v___x_3826_; 
v_a_3820_ = lean_ctor_get(v___x_3819_, 0);
lean_inc(v_a_3820_);
lean_dec_ref(v___x_3819_);
v___x_3824_ = lean_unsigned_to_nat(0u);
v___x_3825_ = lean_array_get_size(v_args_3817_);
v___x_3826_ = lean_nat_dec_lt(v___x_3824_, v___x_3825_);
if (v___x_3826_ == 0)
{
lean_object* v___x_3827_; 
v___x_3827_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_a_3820_, v_args_3817_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
return v___x_3827_;
}
else
{
lean_object* v___x_3828_; uint8_t v___x_3829_; 
v___x_3828_ = lean_box(0);
v___x_3829_ = lean_nat_dec_le(v___x_3825_, v___x_3825_);
if (v___x_3829_ == 0)
{
if (v___x_3826_ == 0)
{
lean_object* v___x_3830_; 
v___x_3830_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_a_3820_, v_args_3817_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
return v___x_3830_;
}
else
{
size_t v___x_3831_; size_t v___x_3832_; lean_object* v___x_3833_; 
v___x_3831_ = ((size_t)0ULL);
v___x_3832_ = lean_usize_of_nat(v___x_3825_);
v___x_3833_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3817_, v___x_3831_, v___x_3832_, v___x_3828_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
v___y_3822_ = v___x_3833_;
goto v___jp_3821_;
}
}
else
{
size_t v___x_3834_; size_t v___x_3835_; lean_object* v___x_3836_; 
v___x_3834_ = ((size_t)0ULL);
v___x_3835_ = lean_usize_of_nat(v___x_3825_);
v___x_3836_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3817_, v___x_3834_, v___x_3835_, v___x_3828_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
v___y_3822_ = v___x_3836_;
goto v___jp_3821_;
}
}
v___jp_3821_:
{
if (lean_obj_tag(v___y_3822_) == 0)
{
lean_object* v___x_3823_; 
lean_dec_ref(v___y_3822_);
v___x_3823_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_a_3820_, v_args_3817_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
return v___x_3823_;
}
else
{
lean_dec(v_a_3820_);
lean_dec_ref(v_args_3817_);
return v___y_3822_;
}
}
}
else
{
lean_object* v_a_3837_; lean_object* v___x_3839_; uint8_t v_isShared_3840_; uint8_t v_isSharedCheck_3844_; 
lean_dec_ref(v_args_3817_);
v_a_3837_ = lean_ctor_get(v___x_3819_, 0);
v_isSharedCheck_3844_ = !lean_is_exclusive(v___x_3819_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3839_ = v___x_3819_;
v_isShared_3840_ = v_isSharedCheck_3844_;
goto v_resetjp_3838_;
}
else
{
lean_inc(v_a_3837_);
lean_dec(v___x_3819_);
v___x_3839_ = lean_box(0);
v_isShared_3840_ = v_isSharedCheck_3844_;
goto v_resetjp_3838_;
}
v_resetjp_3838_:
{
lean_object* v___x_3842_; 
if (v_isShared_3840_ == 0)
{
v___x_3842_ = v___x_3839_;
goto v_reusejp_3841_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v_a_3837_);
v___x_3842_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3841_;
}
v_reusejp_3841_:
{
return v___x_3842_;
}
}
}
}
case 4:
{
lean_object* v_cases_3845_; lean_object* v_discr_3846_; lean_object* v_alts_3847_; lean_object* v___x_3848_; 
v_cases_3845_ = lean_ctor_get(v_x_3763_, 0);
lean_inc_ref(v_cases_3845_);
lean_dec_ref(v_x_3763_);
v_discr_3846_ = lean_ctor_get(v_cases_3845_, 2);
lean_inc(v_discr_3846_);
v_alts_3847_ = lean_ctor_get(v_cases_3845_, 3);
lean_inc_ref(v_alts_3847_);
lean_dec_ref(v_cases_3845_);
v___x_3848_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_discr_3846_, v_a_3764_, v_a_3765_);
lean_dec(v_discr_3846_);
if (lean_obj_tag(v___x_3848_) == 0)
{
lean_object* v_a_3849_; lean_object* v___x_3850_; size_t v_sz_3851_; size_t v___x_3852_; lean_object* v___x_3853_; 
v_a_3849_ = lean_ctor_get(v___x_3848_, 0);
lean_inc(v_a_3849_);
lean_dec_ref(v___x_3848_);
v___x_3850_ = lean_box(0);
v_sz_3851_ = lean_array_size(v_alts_3847_);
v___x_3852_ = ((size_t)0ULL);
v___x_3853_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8(v_a_3849_, v_alts_3847_, v_sz_3851_, v___x_3852_, v___x_3850_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
lean_dec_ref(v_alts_3847_);
if (lean_obj_tag(v___x_3853_) == 0)
{
lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3860_; 
v_isSharedCheck_3860_ = !lean_is_exclusive(v___x_3853_);
if (v_isSharedCheck_3860_ == 0)
{
lean_object* v_unused_3861_; 
v_unused_3861_ = lean_ctor_get(v___x_3853_, 0);
lean_dec(v_unused_3861_);
v___x_3855_ = v___x_3853_;
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
else
{
lean_dec(v___x_3853_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
lean_object* v___x_3858_; 
if (v_isShared_3856_ == 0)
{
lean_ctor_set(v___x_3855_, 0, v___x_3850_);
v___x_3858_ = v___x_3855_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v___x_3850_);
v___x_3858_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
return v___x_3858_;
}
}
}
else
{
return v___x_3853_;
}
}
else
{
lean_object* v_a_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3869_; 
lean_dec_ref(v_alts_3847_);
v_a_3862_ = lean_ctor_get(v___x_3848_, 0);
v_isSharedCheck_3869_ = !lean_is_exclusive(v___x_3848_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3864_ = v___x_3848_;
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_a_3862_);
lean_dec(v___x_3848_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3867_; 
if (v_isShared_3865_ == 0)
{
v___x_3867_ = v___x_3864_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_a_3862_);
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
case 5:
{
lean_object* v_fvarId_3870_; lean_object* v___x_3871_; 
v_fvarId_3870_ = lean_ctor_get(v_x_3763_, 0);
lean_inc(v_fvarId_3870_);
lean_dec_ref(v_x_3763_);
v___x_3871_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(v_fvarId_3870_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
if (lean_obj_tag(v___x_3871_) == 0)
{
lean_object* v___x_3872_; 
lean_dec_ref(v___x_3871_);
v___x_3872_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_3870_, v_a_3764_, v_a_3765_);
lean_dec(v_fvarId_3870_);
if (lean_obj_tag(v___x_3872_) == 0)
{
lean_object* v_a_3873_; lean_object* v___x_3874_; 
v_a_3873_ = lean_ctor_get(v___x_3872_, 0);
lean_inc(v_a_3873_);
lean_dec_ref(v___x_3872_);
v___x_3874_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(v_a_3873_, v_a_3764_, v_a_3765_, v_a_3769_);
return v___x_3874_;
}
else
{
lean_object* v_a_3875_; lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3882_; 
v_a_3875_ = lean_ctor_get(v___x_3872_, 0);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3872_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3877_ = v___x_3872_;
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
else
{
lean_inc(v_a_3875_);
lean_dec(v___x_3872_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
lean_object* v___x_3880_; 
if (v_isShared_3878_ == 0)
{
v___x_3880_ = v___x_3877_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v_a_3875_);
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
else
{
lean_dec(v_fvarId_3870_);
return v___x_3871_;
}
}
case 6:
{
lean_object* v___x_3884_; uint8_t v_isShared_3885_; uint8_t v_isSharedCheck_3890_; 
v_isSharedCheck_3890_ = !lean_is_exclusive(v_x_3763_);
if (v_isSharedCheck_3890_ == 0)
{
lean_object* v_unused_3891_; 
v_unused_3891_ = lean_ctor_get(v_x_3763_, 0);
lean_dec(v_unused_3891_);
v___x_3884_ = v_x_3763_;
v_isShared_3885_ = v_isSharedCheck_3890_;
goto v_resetjp_3883_;
}
else
{
lean_dec(v_x_3763_);
v___x_3884_ = lean_box(0);
v_isShared_3885_ = v_isSharedCheck_3890_;
goto v_resetjp_3883_;
}
v_resetjp_3883_:
{
lean_object* v___x_3886_; lean_object* v___x_3888_; 
v___x_3886_ = lean_box(0);
if (v_isShared_3885_ == 0)
{
lean_ctor_set_tag(v___x_3884_, 0);
lean_ctor_set(v___x_3884_, 0, v___x_3886_);
v___x_3888_ = v___x_3884_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v___x_3886_);
v___x_3888_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
return v___x_3888_;
}
}
}
default: 
{
lean_object* v_decl_3892_; lean_object* v_k_3893_; 
v_decl_3892_ = lean_ctor_get(v_x_3763_, 0);
lean_inc_ref(v_decl_3892_);
v_k_3893_ = lean_ctor_get(v_x_3763_, 1);
lean_inc_ref(v_k_3893_);
lean_dec_ref(v_x_3763_);
v_decl_3772_ = v_decl_3892_;
v_k_3773_ = v_k_3893_;
v___y_3774_ = v_a_3764_;
v___y_3775_ = v_a_3765_;
v___y_3776_ = v_a_3766_;
v___y_3777_ = v_a_3767_;
v___y_3778_ = v_a_3768_;
v___y_3779_ = v_a_3769_;
goto v___jp_3771_;
}
}
v___jp_3771_:
{
lean_object* v_value_3780_; lean_object* v___x_3781_; 
v_value_3780_ = lean_ctor_get(v_decl_3772_, 4);
lean_inc_ref(v_value_3780_);
lean_dec_ref(v_decl_3772_);
v___x_3781_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_value_3780_, v___y_3774_, v___y_3775_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
if (lean_obj_tag(v___x_3781_) == 0)
{
lean_dec_ref(v___x_3781_);
v_x_3763_ = v_k_3773_;
v_a_3764_ = v___y_3774_;
v_a_3765_ = v___y_3775_;
v_a_3766_ = v___y_3776_;
v_a_3767_ = v___y_3777_;
v_a_3768_ = v___y_3778_;
v_a_3769_ = v___y_3779_;
goto _start;
}
else
{
lean_dec_ref(v_k_3773_);
return v___x_3781_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(lean_object* v_var_3894_, lean_object* v_a_3895_, lean_object* v_a_3896_, lean_object* v_a_3897_, lean_object* v_a_3898_, lean_object* v_a_3899_, lean_object* v_a_3900_){
_start:
{
uint8_t v___x_3902_; lean_object* v___x_3903_; 
v___x_3902_ = 0;
v___x_3903_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_3902_, v_var_3894_, v_a_3898_);
if (lean_obj_tag(v___x_3903_) == 0)
{
lean_object* v_a_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3936_; 
v_a_3904_ = lean_ctor_get(v___x_3903_, 0);
v_isSharedCheck_3936_ = !lean_is_exclusive(v___x_3903_);
if (v_isSharedCheck_3936_ == 0)
{
v___x_3906_ = v___x_3903_;
v_isShared_3907_ = v_isSharedCheck_3936_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_a_3904_);
lean_dec(v___x_3903_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3936_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
if (lean_obj_tag(v_a_3904_) == 1)
{
lean_object* v_val_3908_; lean_object* v_params_3909_; lean_object* v_value_3910_; lean_object* v___x_3911_; 
lean_del_object(v___x_3906_);
v_val_3908_ = lean_ctor_get(v_a_3904_, 0);
lean_inc(v_val_3908_);
lean_dec_ref(v_a_3904_);
v_params_3909_ = lean_ctor_get(v_val_3908_, 2);
lean_inc_ref(v_params_3909_);
v_value_3910_ = lean_ctor_get(v_val_3908_, 4);
lean_inc_ref(v_value_3910_);
lean_dec(v_val_3908_);
v___x_3911_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop(v_params_3909_, v_a_3895_, v_a_3896_, v_a_3897_, v_a_3898_, v_a_3899_, v_a_3900_);
lean_dec_ref(v_params_3909_);
if (lean_obj_tag(v___x_3911_) == 0)
{
lean_object* v_a_3912_; lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3923_; 
v_a_3912_ = lean_ctor_get(v___x_3911_, 0);
v_isSharedCheck_3923_ = !lean_is_exclusive(v___x_3911_);
if (v_isSharedCheck_3923_ == 0)
{
v___x_3914_ = v___x_3911_;
v_isShared_3915_ = v_isSharedCheck_3923_;
goto v_resetjp_3913_;
}
else
{
lean_inc(v_a_3912_);
lean_dec(v___x_3911_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3923_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
uint8_t v___x_3916_; 
v___x_3916_ = lean_unbox(v_a_3912_);
lean_dec(v_a_3912_);
if (v___x_3916_ == 0)
{
lean_object* v___x_3917_; lean_object* v___x_3919_; 
lean_dec_ref(v_value_3910_);
v___x_3917_ = lean_box(0);
if (v_isShared_3915_ == 0)
{
lean_ctor_set(v___x_3914_, 0, v___x_3917_);
v___x_3919_ = v___x_3914_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v___x_3917_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
else
{
lean_object* v___x_3921_; 
lean_del_object(v___x_3914_);
lean_inc_ref(v_value_3910_);
v___x_3921_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(v_value_3910_, v_a_3895_, v_a_3896_, v_a_3897_, v_a_3898_, v_a_3899_, v_a_3900_);
if (lean_obj_tag(v___x_3921_) == 0)
{
lean_object* v___x_3922_; 
lean_dec_ref(v___x_3921_);
v___x_3922_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_value_3910_, v_a_3895_, v_a_3896_, v_a_3897_, v_a_3898_, v_a_3899_, v_a_3900_);
return v___x_3922_;
}
else
{
lean_dec_ref(v_value_3910_);
return v___x_3921_;
}
}
}
}
else
{
lean_object* v_a_3924_; lean_object* v___x_3926_; uint8_t v_isShared_3927_; uint8_t v_isSharedCheck_3931_; 
lean_dec_ref(v_value_3910_);
v_a_3924_ = lean_ctor_get(v___x_3911_, 0);
v_isSharedCheck_3931_ = !lean_is_exclusive(v___x_3911_);
if (v_isSharedCheck_3931_ == 0)
{
v___x_3926_ = v___x_3911_;
v_isShared_3927_ = v_isSharedCheck_3931_;
goto v_resetjp_3925_;
}
else
{
lean_inc(v_a_3924_);
lean_dec(v___x_3911_);
v___x_3926_ = lean_box(0);
v_isShared_3927_ = v_isSharedCheck_3931_;
goto v_resetjp_3925_;
}
v_resetjp_3925_:
{
lean_object* v___x_3929_; 
if (v_isShared_3927_ == 0)
{
v___x_3929_ = v___x_3926_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v_a_3924_);
v___x_3929_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
return v___x_3929_;
}
}
}
}
else
{
lean_object* v___x_3932_; lean_object* v___x_3934_; 
lean_dec(v_a_3904_);
v___x_3932_ = lean_box(0);
if (v_isShared_3907_ == 0)
{
lean_ctor_set(v___x_3906_, 0, v___x_3932_);
v___x_3934_ = v___x_3906_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3935_; 
v_reuseFailAlloc_3935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3935_, 0, v___x_3932_);
v___x_3934_ = v_reuseFailAlloc_3935_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
return v___x_3934_;
}
}
}
}
else
{
lean_object* v_a_3937_; lean_object* v___x_3939_; uint8_t v_isShared_3940_; uint8_t v_isSharedCheck_3944_; 
v_a_3937_ = lean_ctor_get(v___x_3903_, 0);
v_isSharedCheck_3944_ = !lean_is_exclusive(v___x_3903_);
if (v_isSharedCheck_3944_ == 0)
{
v___x_3939_ = v___x_3903_;
v_isShared_3940_ = v_isSharedCheck_3944_;
goto v_resetjp_3938_;
}
else
{
lean_inc(v_a_3937_);
lean_dec(v___x_3903_);
v___x_3939_ = lean_box(0);
v_isShared_3940_ = v_isSharedCheck_3944_;
goto v_resetjp_3938_;
}
v_resetjp_3938_:
{
lean_object* v___x_3942_; 
if (v_isShared_3940_ == 0)
{
v___x_3942_ = v___x_3939_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v_a_3937_);
v___x_3942_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
return v___x_3942_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg(lean_object* v_arg_3945_, lean_object* v_a_3946_, lean_object* v_a_3947_, lean_object* v_a_3948_, lean_object* v_a_3949_, lean_object* v_a_3950_, lean_object* v_a_3951_){
_start:
{
if (lean_obj_tag(v_arg_3945_) == 1)
{
lean_object* v_fvarId_3953_; lean_object* v___x_3954_; 
v_fvarId_3953_ = lean_ctor_get(v_arg_3945_, 0);
v___x_3954_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(v_fvarId_3953_, v_a_3946_, v_a_3947_, v_a_3948_, v_a_3949_, v_a_3950_, v_a_3951_);
return v___x_3954_;
}
else
{
lean_object* v___x_3955_; lean_object* v___x_3956_; 
v___x_3955_ = lean_box(0);
v___x_3956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3956_, 0, v___x_3955_);
return v___x_3956_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg___boxed(lean_object* v_arg_3957_, lean_object* v_a_3958_, lean_object* v_a_3959_, lean_object* v_a_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_, lean_object* v_a_3963_, lean_object* v_a_3964_){
_start:
{
lean_object* v_res_3965_; 
v_res_3965_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg(v_arg_3957_, v_a_3958_, v_a_3959_, v_a_3960_, v_a_3961_, v_a_3962_, v_a_3963_);
lean_dec(v_a_3963_);
lean_dec_ref(v_a_3962_);
lean_dec(v_a_3961_);
lean_dec_ref(v_a_3960_);
lean_dec(v_a_3959_);
lean_dec_ref(v_a_3958_);
lean_dec(v_arg_3957_);
return v_res_3965_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2___boxed(lean_object* v_as_3966_, lean_object* v_i_3967_, lean_object* v_stop_3968_, lean_object* v_b_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_){
_start:
{
size_t v_i_boxed_3977_; size_t v_stop_boxed_3978_; lean_object* v_res_3979_; 
v_i_boxed_3977_ = lean_unbox_usize(v_i_3967_);
lean_dec(v_i_3967_);
v_stop_boxed_3978_ = lean_unbox_usize(v_stop_3968_);
lean_dec(v_stop_3968_);
v_res_3979_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_as_3966_, v_i_boxed_3977_, v_stop_boxed_3978_, v_b_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_, v___y_3974_, v___y_3975_);
lean_dec(v___y_3975_);
lean_dec_ref(v___y_3974_);
lean_dec(v___y_3973_);
lean_dec_ref(v___y_3972_);
lean_dec(v___y_3971_);
lean_dec_ref(v___y_3970_);
lean_dec_ref(v_as_3966_);
return v_res_3979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall___boxed(lean_object* v_funDecl_3980_, lean_object* v_args_3981_, lean_object* v_a_3982_, lean_object* v_a_3983_, lean_object* v_a_3984_, lean_object* v_a_3985_, lean_object* v_a_3986_, lean_object* v_a_3987_, lean_object* v_a_3988_){
_start:
{
lean_object* v_res_3989_; 
v_res_3989_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_funDecl_3980_, v_args_3981_, v_a_3982_, v_a_3983_, v_a_3984_, v_a_3985_, v_a_3986_, v_a_3987_);
lean_dec(v_a_3987_);
lean_dec_ref(v_a_3986_);
lean_dec(v_a_3985_);
lean_dec_ref(v_a_3984_);
lean_dec(v_a_3983_);
lean_dec_ref(v_a_3982_);
return v_res_3989_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar___boxed(lean_object* v_var_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_, lean_object* v_a_3997_){
_start:
{
lean_object* v_res_3998_; 
v_res_3998_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(v_var_3990_, v_a_3991_, v_a_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_);
lean_dec(v_a_3996_);
lean_dec_ref(v_a_3995_);
lean_dec(v_a_3994_);
lean_dec_ref(v_a_3993_);
lean_dec(v_a_3992_);
lean_dec_ref(v_a_3991_);
lean_dec(v_var_3990_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8___boxed(lean_object* v_a_3999_, lean_object* v_as_4000_, lean_object* v_sz_4001_, lean_object* v_i_4002_, lean_object* v_b_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_){
_start:
{
size_t v_sz_boxed_4011_; size_t v_i_boxed_4012_; lean_object* v_res_4013_; 
v_sz_boxed_4011_ = lean_unbox_usize(v_sz_4001_);
lean_dec(v_sz_4001_);
v_i_boxed_4012_ = lean_unbox_usize(v_i_4002_);
lean_dec(v_i_4002_);
v_res_4013_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8(v_a_3999_, v_as_4000_, v_sz_boxed_4011_, v_i_boxed_4012_, v_b_4003_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_);
lean_dec(v___y_4009_);
lean_dec_ref(v___y_4008_);
lean_dec(v___y_4007_);
lean_dec_ref(v___y_4006_);
lean_dec(v___y_4005_);
lean_dec_ref(v___y_4004_);
lean_dec_ref(v_as_4000_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_interpCode___boxed(lean_object* v_x_4014_, lean_object* v_a_4015_, lean_object* v_a_4016_, lean_object* v_a_4017_, lean_object* v_a_4018_, lean_object* v_a_4019_, lean_object* v_a_4020_, lean_object* v_a_4021_){
_start:
{
lean_object* v_res_4022_; 
v_res_4022_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_x_4014_, v_a_4015_, v_a_4016_, v_a_4017_, v_a_4018_, v_a_4019_, v_a_4020_);
lean_dec(v_a_4020_);
lean_dec_ref(v_a_4019_);
lean_dec(v_a_4018_);
lean_dec_ref(v_a_4017_);
lean_dec(v_a_4016_);
lean_dec_ref(v_a_4015_);
return v_res_4022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___boxed(lean_object* v_letVal_4023_, lean_object* v_a_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_, lean_object* v_a_4027_, lean_object* v_a_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_){
_start:
{
lean_object* v_res_4031_; 
v_res_4031_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue(v_letVal_4023_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_, v_a_4028_, v_a_4029_);
lean_dec(v_a_4029_);
lean_dec_ref(v_a_4028_);
lean_dec(v_a_4027_);
lean_dec_ref(v_a_4026_);
lean_dec(v_a_4025_);
lean_dec_ref(v_a_4024_);
return v_res_4031_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0(lean_object* v_inst_4032_, lean_object* v_R_4033_, lean_object* v_a_4034_, lean_object* v_b_4035_){
_start:
{
lean_object* v___x_4036_; 
v___x_4036_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0___redArg(v_a_4034_, v_b_4035_);
return v___x_4036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1(size_t v_sz_4037_, size_t v_i_4038_, lean_object* v_bs_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_){
_start:
{
lean_object* v___x_4047_; 
v___x_4047_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(v_sz_4037_, v_i_4038_, v_bs_4039_, v___y_4040_, v___y_4041_);
return v___x_4047_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___boxed(lean_object* v_sz_4048_, lean_object* v_i_4049_, lean_object* v_bs_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_){
_start:
{
size_t v_sz_boxed_4058_; size_t v_i_boxed_4059_; lean_object* v_res_4060_; 
v_sz_boxed_4058_ = lean_unbox_usize(v_sz_4048_);
lean_dec(v_sz_4048_);
v_i_boxed_4059_ = lean_unbox_usize(v_i_4049_);
lean_dec(v_i_4049_);
v_res_4060_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1(v_sz_boxed_4058_, v_i_boxed_4059_, v_bs_4050_, v___y_4051_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_);
lean_dec(v___y_4056_);
lean_dec_ref(v___y_4055_);
lean_dec(v___y_4054_);
lean_dec_ref(v___y_4053_);
lean_dec(v___y_4052_);
lean_dec_ref(v___y_4051_);
return v_res_4060_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6(lean_object* v_as_4061_, size_t v_i_4062_, size_t v_stop_4063_, lean_object* v_b_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_){
_start:
{
lean_object* v___x_4072_; 
v___x_4072_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(v_as_4061_, v_i_4062_, v_stop_4063_, v_b_4064_, v___y_4065_, v___y_4066_, v___y_4070_);
return v___x_4072_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___boxed(lean_object* v_as_4073_, lean_object* v_i_4074_, lean_object* v_stop_4075_, lean_object* v_b_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_){
_start:
{
size_t v_i_boxed_4084_; size_t v_stop_boxed_4085_; lean_object* v_res_4086_; 
v_i_boxed_4084_ = lean_unbox_usize(v_i_4074_);
lean_dec(v_i_4074_);
v_stop_boxed_4085_ = lean_unbox_usize(v_stop_4075_);
lean_dec(v_stop_4075_);
v_res_4086_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6(v_as_4073_, v_i_boxed_4084_, v_stop_boxed_4085_, v_b_4076_, v___y_4077_, v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
lean_dec(v___y_4082_);
lean_dec_ref(v___y_4081_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
lean_dec(v___y_4078_);
lean_dec_ref(v___y_4077_);
lean_dec_ref(v_as_4073_);
return v_res_4086_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7(lean_object* v_as_4087_, size_t v_i_4088_, size_t v_stop_4089_, lean_object* v_b_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_){
_start:
{
lean_object* v___x_4098_; 
v___x_4098_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_as_4087_, v_i_4088_, v_stop_4089_, v_b_4090_, v___y_4091_, v___y_4092_, v___y_4096_);
return v___x_4098_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___boxed(lean_object* v_as_4099_, lean_object* v_i_4100_, lean_object* v_stop_4101_, lean_object* v_b_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_){
_start:
{
size_t v_i_boxed_4110_; size_t v_stop_boxed_4111_; lean_object* v_res_4112_; 
v_i_boxed_4110_ = lean_unbox_usize(v_i_4100_);
lean_dec(v_i_4100_);
v_stop_boxed_4111_ = lean_unbox_usize(v_stop_4101_);
lean_dec(v_stop_4101_);
v_res_4112_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7(v_as_4099_, v_i_boxed_4110_, v_stop_boxed_4111_, v_b_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_);
lean_dec(v___y_4108_);
lean_dec_ref(v___y_4107_);
lean_dec(v___y_4106_);
lean_dec_ref(v___y_4105_);
lean_dec(v___y_4104_);
lean_dec_ref(v___y_4103_);
lean_dec_ref(v_as_4099_);
return v_res_4112_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(lean_object* v_cls_4116_, lean_object* v___y_4117_){
_start:
{
lean_object* v_options_4119_; uint8_t v_hasTrace_4120_; 
v_options_4119_ = lean_ctor_get(v___y_4117_, 2);
v_hasTrace_4120_ = lean_ctor_get_uint8(v_options_4119_, sizeof(void*)*1);
if (v_hasTrace_4120_ == 0)
{
lean_object* v___x_4121_; lean_object* v___x_4122_; 
lean_dec(v_cls_4116_);
v___x_4121_ = lean_box(v_hasTrace_4120_);
v___x_4122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4122_, 0, v___x_4121_);
return v___x_4122_;
}
else
{
lean_object* v_inheritedTraceOptions_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; uint8_t v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; 
v_inheritedTraceOptions_4123_ = lean_ctor_get(v___y_4117_, 13);
v___x_4124_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1));
v___x_4125_ = l_Lean_Name_append(v___x_4124_, v_cls_4116_);
v___x_4126_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4123_, v_options_4119_, v___x_4125_);
lean_dec(v___x_4125_);
v___x_4127_ = lean_box(v___x_4126_);
v___x_4128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4128_, 0, v___x_4127_);
return v___x_4128_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___boxed(lean_object* v_cls_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_){
_start:
{
lean_object* v_res_4132_; 
v_res_4132_ = l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(v_cls_4129_, v___y_4130_);
lean_dec_ref(v___y_4130_);
return v_res_4132_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0(lean_object* v_cls_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_){
_start:
{
lean_object* v___x_4141_; 
v___x_4141_ = l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(v_cls_4133_, v___y_4138_);
return v___x_4141_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___boxed(lean_object* v_cls_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_){
_start:
{
lean_object* v_res_4150_; 
v_res_4150_ = l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0(v_cls_4142_, v___y_4143_, v___y_4144_, v___y_4145_, v___y_4146_, v___y_4147_, v___y_4148_);
lean_dec(v___y_4148_);
lean_dec_ref(v___y_4147_);
lean_dec(v___y_4146_);
lean_dec_ref(v___y_4145_);
lean_dec(v___y_4144_);
lean_dec_ref(v___y_4143_);
return v_res_4150_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; 
v___x_4151_ = lean_unsigned_to_nat(32u);
v___x_4152_ = lean_mk_empty_array_with_capacity(v___x_4151_);
v___x_4153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4153_, 0, v___x_4152_);
return v___x_4153_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; 
v___x_4154_ = ((size_t)5ULL);
v___x_4155_ = lean_unsigned_to_nat(0u);
v___x_4156_ = lean_unsigned_to_nat(32u);
v___x_4157_ = lean_mk_empty_array_with_capacity(v___x_4156_);
v___x_4158_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___closed__0);
v___x_4159_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4159_, 0, v___x_4158_);
lean_ctor_set(v___x_4159_, 1, v___x_4157_);
lean_ctor_set(v___x_4159_, 2, v___x_4155_);
lean_ctor_set(v___x_4159_, 3, v___x_4155_);
lean_ctor_set_usize(v___x_4159_, 4, v___x_4154_);
return v___x_4159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg(lean_object* v___y_4160_){
_start:
{
lean_object* v___x_4162_; lean_object* v_traceState_4163_; lean_object* v_traces_4164_; lean_object* v___x_4165_; lean_object* v_traceState_4166_; lean_object* v_env_4167_; lean_object* v_nextMacroScope_4168_; lean_object* v_ngen_4169_; lean_object* v_auxDeclNGen_4170_; lean_object* v_cache_4171_; lean_object* v_messages_4172_; lean_object* v_infoState_4173_; lean_object* v_snapshotTasks_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4193_; 
v___x_4162_ = lean_st_ref_get(v___y_4160_);
v_traceState_4163_ = lean_ctor_get(v___x_4162_, 4);
lean_inc_ref(v_traceState_4163_);
lean_dec(v___x_4162_);
v_traces_4164_ = lean_ctor_get(v_traceState_4163_, 0);
lean_inc_ref(v_traces_4164_);
lean_dec_ref(v_traceState_4163_);
v___x_4165_ = lean_st_ref_take(v___y_4160_);
v_traceState_4166_ = lean_ctor_get(v___x_4165_, 4);
v_env_4167_ = lean_ctor_get(v___x_4165_, 0);
v_nextMacroScope_4168_ = lean_ctor_get(v___x_4165_, 1);
v_ngen_4169_ = lean_ctor_get(v___x_4165_, 2);
v_auxDeclNGen_4170_ = lean_ctor_get(v___x_4165_, 3);
v_cache_4171_ = lean_ctor_get(v___x_4165_, 5);
v_messages_4172_ = lean_ctor_get(v___x_4165_, 6);
v_infoState_4173_ = lean_ctor_get(v___x_4165_, 7);
v_snapshotTasks_4174_ = lean_ctor_get(v___x_4165_, 8);
v_isSharedCheck_4193_ = !lean_is_exclusive(v___x_4165_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4176_ = v___x_4165_;
v_isShared_4177_ = v_isSharedCheck_4193_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_snapshotTasks_4174_);
lean_inc(v_infoState_4173_);
lean_inc(v_messages_4172_);
lean_inc(v_cache_4171_);
lean_inc(v_traceState_4166_);
lean_inc(v_auxDeclNGen_4170_);
lean_inc(v_ngen_4169_);
lean_inc(v_nextMacroScope_4168_);
lean_inc(v_env_4167_);
lean_dec(v___x_4165_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4193_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
uint64_t v_tid_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4191_; 
v_tid_4178_ = lean_ctor_get_uint64(v_traceState_4166_, sizeof(void*)*1);
v_isSharedCheck_4191_ = !lean_is_exclusive(v_traceState_4166_);
if (v_isSharedCheck_4191_ == 0)
{
lean_object* v_unused_4192_; 
v_unused_4192_ = lean_ctor_get(v_traceState_4166_, 0);
lean_dec(v_unused_4192_);
v___x_4180_ = v_traceState_4166_;
v_isShared_4181_ = v_isSharedCheck_4191_;
goto v_resetjp_4179_;
}
else
{
lean_dec(v_traceState_4166_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4191_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v___x_4182_; lean_object* v___x_4184_; 
v___x_4182_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___closed__1);
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 0, v___x_4182_);
v___x_4184_ = v___x_4180_;
goto v_reusejp_4183_;
}
else
{
lean_object* v_reuseFailAlloc_4190_; 
v_reuseFailAlloc_4190_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4190_, 0, v___x_4182_);
lean_ctor_set_uint64(v_reuseFailAlloc_4190_, sizeof(void*)*1, v_tid_4178_);
v___x_4184_ = v_reuseFailAlloc_4190_;
goto v_reusejp_4183_;
}
v_reusejp_4183_:
{
lean_object* v___x_4186_; 
if (v_isShared_4177_ == 0)
{
lean_ctor_set(v___x_4176_, 4, v___x_4184_);
v___x_4186_ = v___x_4176_;
goto v_reusejp_4185_;
}
else
{
lean_object* v_reuseFailAlloc_4189_; 
v_reuseFailAlloc_4189_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4189_, 0, v_env_4167_);
lean_ctor_set(v_reuseFailAlloc_4189_, 1, v_nextMacroScope_4168_);
lean_ctor_set(v_reuseFailAlloc_4189_, 2, v_ngen_4169_);
lean_ctor_set(v_reuseFailAlloc_4189_, 3, v_auxDeclNGen_4170_);
lean_ctor_set(v_reuseFailAlloc_4189_, 4, v___x_4184_);
lean_ctor_set(v_reuseFailAlloc_4189_, 5, v_cache_4171_);
lean_ctor_set(v_reuseFailAlloc_4189_, 6, v_messages_4172_);
lean_ctor_set(v_reuseFailAlloc_4189_, 7, v_infoState_4173_);
lean_ctor_set(v_reuseFailAlloc_4189_, 8, v_snapshotTasks_4174_);
v___x_4186_ = v_reuseFailAlloc_4189_;
goto v_reusejp_4185_;
}
v_reusejp_4185_:
{
lean_object* v___x_4187_; lean_object* v___x_4188_; 
v___x_4187_ = lean_st_ref_set(v___y_4160_, v___x_4186_);
v___x_4188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4188_, 0, v_traces_4164_);
return v___x_4188_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg___boxed(lean_object* v___y_4194_, lean_object* v___y_4195_){
_start:
{
lean_object* v_res_4196_; 
v_res_4196_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg(v___y_4194_);
lean_dec(v___y_4194_);
return v_res_4196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(lean_object* v___y_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_){
_start:
{
lean_object* v___x_4204_; 
v___x_4204_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg(v___y_4202_);
return v___x_4204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___boxed(lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_){
_start:
{
lean_object* v_res_4212_; 
v_res_4212_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v___y_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_, v___y_4210_);
lean_dec(v___y_4210_);
lean_dec_ref(v___y_4209_);
lean_dec(v___y_4208_);
lean_dec_ref(v___y_4207_);
lean_dec(v___y_4206_);
lean_dec_ref(v___y_4205_);
return v_res_4212_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(lean_object* v_opts_4213_, lean_object* v_opt_4214_){
_start:
{
lean_object* v_name_4215_; lean_object* v_defValue_4216_; lean_object* v_map_4217_; lean_object* v___x_4218_; 
v_name_4215_ = lean_ctor_get(v_opt_4214_, 0);
v_defValue_4216_ = lean_ctor_get(v_opt_4214_, 1);
v_map_4217_ = lean_ctor_get(v_opts_4213_, 0);
v___x_4218_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4217_, v_name_4215_);
if (lean_obj_tag(v___x_4218_) == 0)
{
uint8_t v___x_4219_; 
v___x_4219_ = lean_unbox(v_defValue_4216_);
return v___x_4219_;
}
else
{
lean_object* v_val_4220_; 
v_val_4220_ = lean_ctor_get(v___x_4218_, 0);
lean_inc(v_val_4220_);
lean_dec_ref(v___x_4218_);
if (lean_obj_tag(v_val_4220_) == 1)
{
uint8_t v_v_4221_; 
v_v_4221_ = lean_ctor_get_uint8(v_val_4220_, 0);
lean_dec_ref(v_val_4220_);
return v_v_4221_;
}
else
{
uint8_t v___x_4222_; 
lean_dec(v_val_4220_);
v___x_4222_ = lean_unbox(v_defValue_4216_);
return v___x_4222_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___boxed(lean_object* v_opts_4223_, lean_object* v_opt_4224_){
_start:
{
uint8_t v_res_4225_; lean_object* v_r_4226_; 
v_res_4225_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v_opts_4223_, v_opt_4224_);
lean_dec_ref(v_opt_4224_);
lean_dec_ref(v_opts_4223_);
v_r_4226_ = lean_box(v_res_4225_);
return v_r_4226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4_spec__5(size_t v_sz_4227_, size_t v_i_4228_, lean_object* v_bs_4229_){
_start:
{
uint8_t v___x_4230_; 
v___x_4230_ = lean_usize_dec_lt(v_i_4228_, v_sz_4227_);
if (v___x_4230_ == 0)
{
return v_bs_4229_;
}
else
{
lean_object* v_v_4231_; lean_object* v_msg_4232_; lean_object* v___x_4233_; lean_object* v_bs_x27_4234_; size_t v___x_4235_; size_t v___x_4236_; lean_object* v___x_4237_; 
v_v_4231_ = lean_array_uget_borrowed(v_bs_4229_, v_i_4228_);
v_msg_4232_ = lean_ctor_get(v_v_4231_, 1);
lean_inc_ref(v_msg_4232_);
v___x_4233_ = lean_unsigned_to_nat(0u);
v_bs_x27_4234_ = lean_array_uset(v_bs_4229_, v_i_4228_, v___x_4233_);
v___x_4235_ = ((size_t)1ULL);
v___x_4236_ = lean_usize_add(v_i_4228_, v___x_4235_);
v___x_4237_ = lean_array_uset(v_bs_x27_4234_, v_i_4228_, v_msg_4232_);
v_i_4228_ = v___x_4236_;
v_bs_4229_ = v___x_4237_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4_spec__5___boxed(lean_object* v_sz_4239_, lean_object* v_i_4240_, lean_object* v_bs_4241_){
_start:
{
size_t v_sz_boxed_4242_; size_t v_i_boxed_4243_; lean_object* v_res_4244_; 
v_sz_boxed_4242_ = lean_unbox_usize(v_sz_4239_);
lean_dec(v_sz_4239_);
v_i_boxed_4243_ = lean_unbox_usize(v_i_4240_);
lean_dec(v_i_4240_);
v_res_4244_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4_spec__5(v_sz_boxed_4242_, v_i_boxed_4243_, v_bs_4241_);
return v_res_4244_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_4245_; 
v___x_4245_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4245_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_4246_; lean_object* v___x_4247_; 
v___x_4246_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__0);
v___x_4247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4247_, 0, v___x_4246_);
return v___x_4247_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; 
v___x_4248_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__1);
v___x_4249_ = lean_unsigned_to_nat(0u);
v___x_4250_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_4250_, 0, v___x_4249_);
lean_ctor_set(v___x_4250_, 1, v___x_4249_);
lean_ctor_set(v___x_4250_, 2, v___x_4249_);
lean_ctor_set(v___x_4250_, 3, v___x_4248_);
lean_ctor_set(v___x_4250_, 4, v___x_4248_);
lean_ctor_set(v___x_4250_, 5, v___x_4248_);
lean_ctor_set(v___x_4250_, 6, v___x_4248_);
lean_ctor_set(v___x_4250_, 7, v___x_4248_);
lean_ctor_set(v___x_4250_, 8, v___x_4248_);
return v___x_4250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg(lean_object* v_oldTraces_4251_, lean_object* v_data_4252_, lean_object* v_ref_4253_, lean_object* v_msg_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_){
_start:
{
lean_object* v_options_4260_; lean_object* v___x_4261_; lean_object* v_traceState_4262_; lean_object* v_traces_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; 
v_options_4260_ = lean_ctor_get(v___y_4257_, 2);
v___x_4261_ = lean_st_ref_get(v___y_4258_);
v_traceState_4262_ = lean_ctor_get(v___x_4261_, 4);
lean_inc_ref(v_traceState_4262_);
lean_dec(v___x_4261_);
v_traces_4263_ = lean_ctor_get(v_traceState_4262_, 0);
lean_inc_ref(v_traces_4263_);
lean_dec_ref(v_traceState_4262_);
v___x_4264_ = lean_st_ref_get(v___y_4258_);
v___x_4265_ = lean_st_ref_get(v___y_4256_);
v___x_4266_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_4255_);
if (lean_obj_tag(v___x_4266_) == 0)
{
lean_object* v_a_4267_; lean_object* v___x_4269_; uint8_t v_isShared_4270_; uint8_t v_isSharedCheck_4323_; 
v_a_4267_ = lean_ctor_get(v___x_4266_, 0);
v_isSharedCheck_4323_ = !lean_is_exclusive(v___x_4266_);
if (v_isSharedCheck_4323_ == 0)
{
v___x_4269_ = v___x_4266_;
v_isShared_4270_ = v_isSharedCheck_4323_;
goto v_resetjp_4268_;
}
else
{
lean_inc(v_a_4267_);
lean_dec(v___x_4266_);
v___x_4269_ = lean_box(0);
v_isShared_4270_ = v_isSharedCheck_4323_;
goto v_resetjp_4268_;
}
v_resetjp_4268_:
{
lean_object* v_env_4271_; lean_object* v_lctx_4272_; lean_object* v___x_4274_; uint8_t v_isShared_4275_; uint8_t v_isSharedCheck_4321_; 
v_env_4271_ = lean_ctor_get(v___x_4264_, 0);
lean_inc_ref(v_env_4271_);
lean_dec(v___x_4264_);
v_lctx_4272_ = lean_ctor_get(v___x_4265_, 0);
v_isSharedCheck_4321_ = !lean_is_exclusive(v___x_4265_);
if (v_isSharedCheck_4321_ == 0)
{
lean_object* v_unused_4322_; 
v_unused_4322_ = lean_ctor_get(v___x_4265_, 1);
lean_dec(v_unused_4322_);
v___x_4274_ = v___x_4265_;
v_isShared_4275_ = v_isSharedCheck_4321_;
goto v_resetjp_4273_;
}
else
{
lean_inc(v_lctx_4272_);
lean_dec(v___x_4265_);
v___x_4274_ = lean_box(0);
v_isShared_4275_ = v_isSharedCheck_4321_;
goto v_resetjp_4273_;
}
v_resetjp_4273_:
{
lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v_traceState_4278_; lean_object* v_env_4279_; lean_object* v_nextMacroScope_4280_; lean_object* v_ngen_4281_; lean_object* v_auxDeclNGen_4282_; lean_object* v_cache_4283_; lean_object* v_messages_4284_; lean_object* v_infoState_4285_; lean_object* v_snapshotTasks_4286_; lean_object* v___x_4288_; uint8_t v_isShared_4289_; uint8_t v_isSharedCheck_4320_; 
v___x_4276_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__2, &l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__2);
v___x_4277_ = lean_st_ref_take(v___y_4258_);
v_traceState_4278_ = lean_ctor_get(v___x_4277_, 4);
v_env_4279_ = lean_ctor_get(v___x_4277_, 0);
v_nextMacroScope_4280_ = lean_ctor_get(v___x_4277_, 1);
v_ngen_4281_ = lean_ctor_get(v___x_4277_, 2);
v_auxDeclNGen_4282_ = lean_ctor_get(v___x_4277_, 3);
v_cache_4283_ = lean_ctor_get(v___x_4277_, 5);
v_messages_4284_ = lean_ctor_get(v___x_4277_, 6);
v_infoState_4285_ = lean_ctor_get(v___x_4277_, 7);
v_snapshotTasks_4286_ = lean_ctor_get(v___x_4277_, 8);
v_isSharedCheck_4320_ = !lean_is_exclusive(v___x_4277_);
if (v_isSharedCheck_4320_ == 0)
{
v___x_4288_ = v___x_4277_;
v_isShared_4289_ = v_isSharedCheck_4320_;
goto v_resetjp_4287_;
}
else
{
lean_inc(v_snapshotTasks_4286_);
lean_inc(v_infoState_4285_);
lean_inc(v_messages_4284_);
lean_inc(v_cache_4283_);
lean_inc(v_traceState_4278_);
lean_inc(v_auxDeclNGen_4282_);
lean_inc(v_ngen_4281_);
lean_inc(v_nextMacroScope_4280_);
lean_inc(v_env_4279_);
lean_dec(v___x_4277_);
v___x_4288_ = lean_box(0);
v_isShared_4289_ = v_isSharedCheck_4320_;
goto v_resetjp_4287_;
}
v_resetjp_4287_:
{
uint64_t v_tid_4290_; lean_object* v___x_4292_; uint8_t v_isShared_4293_; uint8_t v_isSharedCheck_4318_; 
v_tid_4290_ = lean_ctor_get_uint64(v_traceState_4278_, sizeof(void*)*1);
v_isSharedCheck_4318_ = !lean_is_exclusive(v_traceState_4278_);
if (v_isSharedCheck_4318_ == 0)
{
lean_object* v_unused_4319_; 
v_unused_4319_ = lean_ctor_get(v_traceState_4278_, 0);
lean_dec(v_unused_4319_);
v___x_4292_ = v_traceState_4278_;
v_isShared_4293_ = v_isSharedCheck_4318_;
goto v_resetjp_4291_;
}
else
{
lean_dec(v_traceState_4278_);
v___x_4292_ = lean_box(0);
v_isShared_4293_ = v_isSharedCheck_4318_;
goto v_resetjp_4291_;
}
v_resetjp_4291_:
{
lean_object* v___x_4294_; size_t v_sz_4295_; size_t v___x_4296_; lean_object* v___x_4297_; lean_object* v_msg_4298_; uint8_t v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4303_; 
v___x_4294_ = l_Lean_PersistentArray_toArray___redArg(v_traces_4263_);
lean_dec_ref(v_traces_4263_);
v_sz_4295_ = lean_array_size(v___x_4294_);
v___x_4296_ = ((size_t)0ULL);
v___x_4297_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4_spec__5(v_sz_4295_, v___x_4296_, v___x_4294_);
v_msg_4298_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_4298_, 0, v_data_4252_);
lean_ctor_set(v_msg_4298_, 1, v_msg_4254_);
lean_ctor_set(v_msg_4298_, 2, v___x_4297_);
v___x_4299_ = lean_unbox(v_a_4267_);
lean_dec(v_a_4267_);
v___x_4300_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_4272_, v___x_4299_);
lean_dec_ref(v_lctx_4272_);
lean_inc_ref(v_options_4260_);
v___x_4301_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4301_, 0, v_env_4271_);
lean_ctor_set(v___x_4301_, 1, v___x_4276_);
lean_ctor_set(v___x_4301_, 2, v___x_4300_);
lean_ctor_set(v___x_4301_, 3, v_options_4260_);
if (v_isShared_4275_ == 0)
{
lean_ctor_set_tag(v___x_4274_, 3);
lean_ctor_set(v___x_4274_, 1, v_msg_4298_);
lean_ctor_set(v___x_4274_, 0, v___x_4301_);
v___x_4303_ = v___x_4274_;
goto v_reusejp_4302_;
}
else
{
lean_object* v_reuseFailAlloc_4317_; 
v_reuseFailAlloc_4317_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4317_, 0, v___x_4301_);
lean_ctor_set(v_reuseFailAlloc_4317_, 1, v_msg_4298_);
v___x_4303_ = v_reuseFailAlloc_4317_;
goto v_reusejp_4302_;
}
v_reusejp_4302_:
{
lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4307_; 
v___x_4304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4304_, 0, v_ref_4253_);
lean_ctor_set(v___x_4304_, 1, v___x_4303_);
v___x_4305_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_4251_, v___x_4304_);
if (v_isShared_4293_ == 0)
{
lean_ctor_set(v___x_4292_, 0, v___x_4305_);
v___x_4307_ = v___x_4292_;
goto v_reusejp_4306_;
}
else
{
lean_object* v_reuseFailAlloc_4316_; 
v_reuseFailAlloc_4316_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4316_, 0, v___x_4305_);
lean_ctor_set_uint64(v_reuseFailAlloc_4316_, sizeof(void*)*1, v_tid_4290_);
v___x_4307_ = v_reuseFailAlloc_4316_;
goto v_reusejp_4306_;
}
v_reusejp_4306_:
{
lean_object* v___x_4309_; 
if (v_isShared_4289_ == 0)
{
lean_ctor_set(v___x_4288_, 4, v___x_4307_);
v___x_4309_ = v___x_4288_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4315_; 
v_reuseFailAlloc_4315_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4315_, 0, v_env_4279_);
lean_ctor_set(v_reuseFailAlloc_4315_, 1, v_nextMacroScope_4280_);
lean_ctor_set(v_reuseFailAlloc_4315_, 2, v_ngen_4281_);
lean_ctor_set(v_reuseFailAlloc_4315_, 3, v_auxDeclNGen_4282_);
lean_ctor_set(v_reuseFailAlloc_4315_, 4, v___x_4307_);
lean_ctor_set(v_reuseFailAlloc_4315_, 5, v_cache_4283_);
lean_ctor_set(v_reuseFailAlloc_4315_, 6, v_messages_4284_);
lean_ctor_set(v_reuseFailAlloc_4315_, 7, v_infoState_4285_);
lean_ctor_set(v_reuseFailAlloc_4315_, 8, v_snapshotTasks_4286_);
v___x_4309_ = v_reuseFailAlloc_4315_;
goto v_reusejp_4308_;
}
v_reusejp_4308_:
{
lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4313_; 
v___x_4310_ = lean_st_ref_set(v___y_4258_, v___x_4309_);
v___x_4311_ = lean_box(0);
if (v_isShared_4270_ == 0)
{
lean_ctor_set(v___x_4269_, 0, v___x_4311_);
v___x_4313_ = v___x_4269_;
goto v_reusejp_4312_;
}
else
{
lean_object* v_reuseFailAlloc_4314_; 
v_reuseFailAlloc_4314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4314_, 0, v___x_4311_);
v___x_4313_ = v_reuseFailAlloc_4314_;
goto v_reusejp_4312_;
}
v_reusejp_4312_:
{
return v___x_4313_;
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
lean_object* v_a_4324_; lean_object* v___x_4326_; uint8_t v_isShared_4327_; uint8_t v_isSharedCheck_4331_; 
lean_dec(v___x_4265_);
lean_dec(v___x_4264_);
lean_dec_ref(v_traces_4263_);
lean_dec_ref(v_msg_4254_);
lean_dec(v_ref_4253_);
lean_dec_ref(v_data_4252_);
lean_dec_ref(v_oldTraces_4251_);
v_a_4324_ = lean_ctor_get(v___x_4266_, 0);
v_isSharedCheck_4331_ = !lean_is_exclusive(v___x_4266_);
if (v_isSharedCheck_4331_ == 0)
{
v___x_4326_ = v___x_4266_;
v_isShared_4327_ = v_isSharedCheck_4331_;
goto v_resetjp_4325_;
}
else
{
lean_inc(v_a_4324_);
lean_dec(v___x_4266_);
v___x_4326_ = lean_box(0);
v_isShared_4327_ = v_isSharedCheck_4331_;
goto v_resetjp_4325_;
}
v_resetjp_4325_:
{
lean_object* v___x_4329_; 
if (v_isShared_4327_ == 0)
{
v___x_4329_ = v___x_4326_;
goto v_reusejp_4328_;
}
else
{
lean_object* v_reuseFailAlloc_4330_; 
v_reuseFailAlloc_4330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4330_, 0, v_a_4324_);
v___x_4329_ = v_reuseFailAlloc_4330_;
goto v_reusejp_4328_;
}
v_reusejp_4328_:
{
return v___x_4329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___boxed(lean_object* v_oldTraces_4332_, lean_object* v_data_4333_, lean_object* v_ref_4334_, lean_object* v_msg_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_){
_start:
{
lean_object* v_res_4341_; 
v_res_4341_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg(v_oldTraces_4332_, v_data_4333_, v_ref_4334_, v_msg_4335_, v___y_4336_, v___y_4337_, v___y_4338_, v___y_4339_);
lean_dec(v___y_4339_);
lean_dec_ref(v___y_4338_);
lean_dec(v___y_4337_);
lean_dec_ref(v___y_4336_);
return v_res_4341_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__3(lean_object* v_e_4342_){
_start:
{
if (lean_obj_tag(v_e_4342_) == 0)
{
uint8_t v___x_4343_; 
v___x_4343_ = 2;
return v___x_4343_;
}
else
{
uint8_t v___x_4344_; 
v___x_4344_ = 0;
return v___x_4344_;
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__3___boxed(lean_object* v_e_4345_){
_start:
{
uint8_t v_res_4346_; lean_object* v_r_4347_; 
v_res_4346_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__3(v_e_4345_);
lean_dec_ref(v_e_4345_);
v_r_4347_ = lean_box(v_res_4346_);
return v_r_4347_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__5___redArg(lean_object* v_x_4348_){
_start:
{
if (lean_obj_tag(v_x_4348_) == 0)
{
lean_object* v_a_4350_; lean_object* v___x_4352_; uint8_t v_isShared_4353_; uint8_t v_isSharedCheck_4357_; 
v_a_4350_ = lean_ctor_get(v_x_4348_, 0);
v_isSharedCheck_4357_ = !lean_is_exclusive(v_x_4348_);
if (v_isSharedCheck_4357_ == 0)
{
v___x_4352_ = v_x_4348_;
v_isShared_4353_ = v_isSharedCheck_4357_;
goto v_resetjp_4351_;
}
else
{
lean_inc(v_a_4350_);
lean_dec(v_x_4348_);
v___x_4352_ = lean_box(0);
v_isShared_4353_ = v_isSharedCheck_4357_;
goto v_resetjp_4351_;
}
v_resetjp_4351_:
{
lean_object* v___x_4355_; 
if (v_isShared_4353_ == 0)
{
lean_ctor_set_tag(v___x_4352_, 1);
v___x_4355_ = v___x_4352_;
goto v_reusejp_4354_;
}
else
{
lean_object* v_reuseFailAlloc_4356_; 
v_reuseFailAlloc_4356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4356_, 0, v_a_4350_);
v___x_4355_ = v_reuseFailAlloc_4356_;
goto v_reusejp_4354_;
}
v_reusejp_4354_:
{
return v___x_4355_;
}
}
}
else
{
lean_object* v_a_4358_; lean_object* v___x_4360_; uint8_t v_isShared_4361_; uint8_t v_isSharedCheck_4365_; 
v_a_4358_ = lean_ctor_get(v_x_4348_, 0);
v_isSharedCheck_4365_ = !lean_is_exclusive(v_x_4348_);
if (v_isSharedCheck_4365_ == 0)
{
v___x_4360_ = v_x_4348_;
v_isShared_4361_ = v_isSharedCheck_4365_;
goto v_resetjp_4359_;
}
else
{
lean_inc(v_a_4358_);
lean_dec(v_x_4348_);
v___x_4360_ = lean_box(0);
v_isShared_4361_ = v_isSharedCheck_4365_;
goto v_resetjp_4359_;
}
v_resetjp_4359_:
{
lean_object* v___x_4363_; 
if (v_isShared_4361_ == 0)
{
lean_ctor_set_tag(v___x_4360_, 0);
v___x_4363_ = v___x_4360_;
goto v_reusejp_4362_;
}
else
{
lean_object* v_reuseFailAlloc_4364_; 
v_reuseFailAlloc_4364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4364_, 0, v_a_4358_);
v___x_4363_ = v_reuseFailAlloc_4364_;
goto v_reusejp_4362_;
}
v_reusejp_4362_:
{
return v___x_4363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__5___redArg___boxed(lean_object* v_x_4366_, lean_object* v___y_4367_){
_start:
{
lean_object* v_res_4368_; 
v_res_4368_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__5___redArg(v_x_4366_);
return v_res_4368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__6(lean_object* v_opts_4369_, lean_object* v_opt_4370_){
_start:
{
lean_object* v_name_4371_; lean_object* v_defValue_4372_; lean_object* v_map_4373_; lean_object* v___x_4374_; 
v_name_4371_ = lean_ctor_get(v_opt_4370_, 0);
v_defValue_4372_ = lean_ctor_get(v_opt_4370_, 1);
v_map_4373_ = lean_ctor_get(v_opts_4369_, 0);
v___x_4374_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4373_, v_name_4371_);
if (lean_obj_tag(v___x_4374_) == 0)
{
lean_inc(v_defValue_4372_);
return v_defValue_4372_;
}
else
{
lean_object* v_val_4375_; 
v_val_4375_ = lean_ctor_get(v___x_4374_, 0);
lean_inc(v_val_4375_);
lean_dec_ref(v___x_4374_);
if (lean_obj_tag(v_val_4375_) == 3)
{
lean_object* v_v_4376_; 
v_v_4376_ = lean_ctor_get(v_val_4375_, 0);
lean_inc(v_v_4376_);
lean_dec_ref(v_val_4375_);
return v_v_4376_;
}
else
{
lean_dec(v_val_4375_);
lean_inc(v_defValue_4372_);
return v_defValue_4372_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__6___boxed(lean_object* v_opts_4377_, lean_object* v_opt_4378_){
_start:
{
lean_object* v_res_4379_; 
v_res_4379_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__6(v_opts_4377_, v_opt_4378_);
lean_dec_ref(v_opt_4378_);
lean_dec_ref(v_opts_4377_);
return v_res_4379_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__0(void){
_start:
{
lean_object* v___x_4380_; lean_object* v___x_4381_; 
v___x_4380_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__0));
v___x_4381_ = l_Lean_stringToMessageData(v___x_4380_);
return v___x_4381_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__1(void){
_start:
{
lean_object* v___x_4382_; double v___x_4383_; 
v___x_4382_ = lean_unsigned_to_nat(0u);
v___x_4383_ = lean_float_of_nat(v___x_4382_);
return v___x_4383_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__3(void){
_start:
{
lean_object* v___x_4385_; lean_object* v___x_4386_; 
v___x_4385_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__2));
v___x_4386_ = l_Lean_stringToMessageData(v___x_4385_);
return v___x_4386_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__4(void){
_start:
{
lean_object* v___x_4387_; double v___x_4388_; 
v___x_4387_ = lean_unsigned_to_nat(1000u);
v___x_4388_ = lean_float_of_nat(v___x_4387_);
return v___x_4388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3(lean_object* v_cls_4389_, uint8_t v_collapsed_4390_, lean_object* v_tag_4391_, lean_object* v_opts_4392_, uint8_t v_clsEnabled_4393_, lean_object* v_oldTraces_4394_, lean_object* v_msg_4395_, lean_object* v_resStartStop_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_){
_start:
{
lean_object* v_fst_4404_; lean_object* v_snd_4405_; lean_object* v___x_4407_; uint8_t v_isShared_4408_; uint8_t v_isSharedCheck_4495_; 
v_fst_4404_ = lean_ctor_get(v_resStartStop_4396_, 0);
v_snd_4405_ = lean_ctor_get(v_resStartStop_4396_, 1);
v_isSharedCheck_4495_ = !lean_is_exclusive(v_resStartStop_4396_);
if (v_isSharedCheck_4495_ == 0)
{
v___x_4407_ = v_resStartStop_4396_;
v_isShared_4408_ = v_isSharedCheck_4495_;
goto v_resetjp_4406_;
}
else
{
lean_inc(v_snd_4405_);
lean_inc(v_fst_4404_);
lean_dec(v_resStartStop_4396_);
v___x_4407_ = lean_box(0);
v_isShared_4408_ = v_isSharedCheck_4495_;
goto v_resetjp_4406_;
}
v_resetjp_4406_:
{
lean_object* v___y_4410_; lean_object* v___y_4411_; lean_object* v_data_4412_; lean_object* v_fst_4415_; lean_object* v_snd_4416_; lean_object* v___x_4418_; uint8_t v_isShared_4419_; uint8_t v_isSharedCheck_4494_; 
v_fst_4415_ = lean_ctor_get(v_snd_4405_, 0);
v_snd_4416_ = lean_ctor_get(v_snd_4405_, 1);
v_isSharedCheck_4494_ = !lean_is_exclusive(v_snd_4405_);
if (v_isSharedCheck_4494_ == 0)
{
v___x_4418_ = v_snd_4405_;
v_isShared_4419_ = v_isSharedCheck_4494_;
goto v_resetjp_4417_;
}
else
{
lean_inc(v_snd_4416_);
lean_inc(v_fst_4415_);
lean_dec(v_snd_4405_);
v___x_4418_ = lean_box(0);
v_isShared_4419_ = v_isSharedCheck_4494_;
goto v_resetjp_4417_;
}
v___jp_4409_:
{
lean_object* v___x_4413_; 
lean_inc(v___y_4411_);
v___x_4413_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg(v_oldTraces_4394_, v_data_4412_, v___y_4411_, v___y_4410_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_);
if (lean_obj_tag(v___x_4413_) == 0)
{
lean_object* v___x_4414_; 
lean_dec_ref(v___x_4413_);
v___x_4414_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__5___redArg(v_fst_4404_);
return v___x_4414_;
}
else
{
lean_dec(v_fst_4404_);
return v___x_4413_;
}
}
v_resetjp_4417_:
{
lean_object* v___x_4420_; uint8_t v___x_4421_; lean_object* v___y_4423_; lean_object* v_a_4424_; uint8_t v___y_4448_; double v___y_4479_; 
v___x_4420_ = l_Lean_trace_profiler;
v___x_4421_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v_opts_4392_, v___x_4420_);
if (v___x_4421_ == 0)
{
v___y_4448_ = v___x_4421_;
goto v___jp_4447_;
}
else
{
lean_object* v___x_4484_; uint8_t v___x_4485_; 
v___x_4484_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4485_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v_opts_4392_, v___x_4484_);
if (v___x_4485_ == 0)
{
lean_object* v___x_4486_; lean_object* v___x_4487_; double v___x_4488_; double v___x_4489_; double v___x_4490_; 
v___x_4486_ = l_Lean_trace_profiler_threshold;
v___x_4487_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__6(v_opts_4392_, v___x_4486_);
v___x_4488_ = lean_float_of_nat(v___x_4487_);
v___x_4489_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__4, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__4_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__4);
v___x_4490_ = lean_float_div(v___x_4488_, v___x_4489_);
v___y_4479_ = v___x_4490_;
goto v___jp_4478_;
}
else
{
lean_object* v___x_4491_; lean_object* v___x_4492_; double v___x_4493_; 
v___x_4491_ = l_Lean_trace_profiler_threshold;
v___x_4492_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__6(v_opts_4392_, v___x_4491_);
v___x_4493_ = lean_float_of_nat(v___x_4492_);
v___y_4479_ = v___x_4493_;
goto v___jp_4478_;
}
}
v___jp_4422_:
{
uint8_t v_result_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4430_; 
v_result_4425_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__3(v_fst_4404_);
v___x_4426_ = l_Lean_TraceResult_toEmoji(v_result_4425_);
v___x_4427_ = l_Lean_stringToMessageData(v___x_4426_);
v___x_4428_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__0);
if (v_isShared_4419_ == 0)
{
lean_ctor_set_tag(v___x_4418_, 7);
lean_ctor_set(v___x_4418_, 1, v___x_4428_);
lean_ctor_set(v___x_4418_, 0, v___x_4427_);
v___x_4430_ = v___x_4418_;
goto v_reusejp_4429_;
}
else
{
lean_object* v_reuseFailAlloc_4441_; 
v_reuseFailAlloc_4441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4441_, 0, v___x_4427_);
lean_ctor_set(v_reuseFailAlloc_4441_, 1, v___x_4428_);
v___x_4430_ = v_reuseFailAlloc_4441_;
goto v_reusejp_4429_;
}
v_reusejp_4429_:
{
lean_object* v_m_4432_; 
if (v_isShared_4408_ == 0)
{
lean_ctor_set_tag(v___x_4407_, 7);
lean_ctor_set(v___x_4407_, 1, v_a_4424_);
lean_ctor_set(v___x_4407_, 0, v___x_4430_);
v_m_4432_ = v___x_4407_;
goto v_reusejp_4431_;
}
else
{
lean_object* v_reuseFailAlloc_4440_; 
v_reuseFailAlloc_4440_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4440_, 0, v___x_4430_);
lean_ctor_set(v_reuseFailAlloc_4440_, 1, v_a_4424_);
v_m_4432_ = v_reuseFailAlloc_4440_;
goto v_reusejp_4431_;
}
v_reusejp_4431_:
{
lean_object* v___x_4433_; lean_object* v___x_4434_; double v___x_4435_; lean_object* v_data_4436_; 
v___x_4433_ = lean_box(v_result_4425_);
v___x_4434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4434_, 0, v___x_4433_);
v___x_4435_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__1);
lean_inc_ref(v_tag_4391_);
lean_inc_ref(v___x_4434_);
lean_inc(v_cls_4389_);
v_data_4436_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_4436_, 0, v_cls_4389_);
lean_ctor_set(v_data_4436_, 1, v___x_4434_);
lean_ctor_set(v_data_4436_, 2, v_tag_4391_);
lean_ctor_set_float(v_data_4436_, sizeof(void*)*3, v___x_4435_);
lean_ctor_set_float(v_data_4436_, sizeof(void*)*3 + 8, v___x_4435_);
lean_ctor_set_uint8(v_data_4436_, sizeof(void*)*3 + 16, v_collapsed_4390_);
if (v___x_4421_ == 0)
{
lean_dec_ref(v___x_4434_);
lean_dec(v_snd_4416_);
lean_dec(v_fst_4415_);
lean_dec_ref(v_tag_4391_);
lean_dec(v_cls_4389_);
v___y_4410_ = v_m_4432_;
v___y_4411_ = v___y_4423_;
v_data_4412_ = v_data_4436_;
goto v___jp_4409_;
}
else
{
lean_object* v_data_4437_; double v___x_4438_; double v___x_4439_; 
lean_dec_ref(v_data_4436_);
v_data_4437_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_4437_, 0, v_cls_4389_);
lean_ctor_set(v_data_4437_, 1, v___x_4434_);
lean_ctor_set(v_data_4437_, 2, v_tag_4391_);
v___x_4438_ = lean_unbox_float(v_fst_4415_);
lean_dec(v_fst_4415_);
lean_ctor_set_float(v_data_4437_, sizeof(void*)*3, v___x_4438_);
v___x_4439_ = lean_unbox_float(v_snd_4416_);
lean_dec(v_snd_4416_);
lean_ctor_set_float(v_data_4437_, sizeof(void*)*3 + 8, v___x_4439_);
lean_ctor_set_uint8(v_data_4437_, sizeof(void*)*3 + 16, v_collapsed_4390_);
v___y_4410_ = v_m_4432_;
v___y_4411_ = v___y_4423_;
v_data_4412_ = v_data_4437_;
goto v___jp_4409_;
}
}
}
}
v___jp_4442_:
{
lean_object* v_ref_4443_; lean_object* v___x_4444_; 
v_ref_4443_ = lean_ctor_get(v___y_4401_, 5);
lean_inc(v___y_4402_);
lean_inc_ref(v___y_4401_);
lean_inc(v___y_4400_);
lean_inc_ref(v___y_4399_);
lean_inc(v___y_4398_);
lean_inc_ref(v___y_4397_);
lean_inc(v_fst_4404_);
v___x_4444_ = lean_apply_8(v_msg_4395_, v_fst_4404_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_, lean_box(0));
if (lean_obj_tag(v___x_4444_) == 0)
{
lean_object* v_a_4445_; 
v_a_4445_ = lean_ctor_get(v___x_4444_, 0);
lean_inc(v_a_4445_);
lean_dec_ref(v___x_4444_);
v___y_4423_ = v_ref_4443_;
v_a_4424_ = v_a_4445_;
goto v___jp_4422_;
}
else
{
lean_object* v___x_4446_; 
lean_dec_ref(v___x_4444_);
v___x_4446_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__3);
v___y_4423_ = v_ref_4443_;
v_a_4424_ = v___x_4446_;
goto v___jp_4422_;
}
}
v___jp_4447_:
{
if (v_clsEnabled_4393_ == 0)
{
if (v___y_4448_ == 0)
{
lean_object* v___x_4449_; lean_object* v_traceState_4450_; lean_object* v_env_4451_; lean_object* v_nextMacroScope_4452_; lean_object* v_ngen_4453_; lean_object* v_auxDeclNGen_4454_; lean_object* v_cache_4455_; lean_object* v_messages_4456_; lean_object* v_infoState_4457_; lean_object* v_snapshotTasks_4458_; lean_object* v___x_4460_; uint8_t v_isShared_4461_; uint8_t v_isSharedCheck_4477_; 
lean_del_object(v___x_4418_);
lean_dec(v_snd_4416_);
lean_dec(v_fst_4415_);
lean_del_object(v___x_4407_);
lean_dec_ref(v_msg_4395_);
lean_dec_ref(v_tag_4391_);
lean_dec(v_cls_4389_);
v___x_4449_ = lean_st_ref_take(v___y_4402_);
v_traceState_4450_ = lean_ctor_get(v___x_4449_, 4);
v_env_4451_ = lean_ctor_get(v___x_4449_, 0);
v_nextMacroScope_4452_ = lean_ctor_get(v___x_4449_, 1);
v_ngen_4453_ = lean_ctor_get(v___x_4449_, 2);
v_auxDeclNGen_4454_ = lean_ctor_get(v___x_4449_, 3);
v_cache_4455_ = lean_ctor_get(v___x_4449_, 5);
v_messages_4456_ = lean_ctor_get(v___x_4449_, 6);
v_infoState_4457_ = lean_ctor_get(v___x_4449_, 7);
v_snapshotTasks_4458_ = lean_ctor_get(v___x_4449_, 8);
v_isSharedCheck_4477_ = !lean_is_exclusive(v___x_4449_);
if (v_isSharedCheck_4477_ == 0)
{
v___x_4460_ = v___x_4449_;
v_isShared_4461_ = v_isSharedCheck_4477_;
goto v_resetjp_4459_;
}
else
{
lean_inc(v_snapshotTasks_4458_);
lean_inc(v_infoState_4457_);
lean_inc(v_messages_4456_);
lean_inc(v_cache_4455_);
lean_inc(v_traceState_4450_);
lean_inc(v_auxDeclNGen_4454_);
lean_inc(v_ngen_4453_);
lean_inc(v_nextMacroScope_4452_);
lean_inc(v_env_4451_);
lean_dec(v___x_4449_);
v___x_4460_ = lean_box(0);
v_isShared_4461_ = v_isSharedCheck_4477_;
goto v_resetjp_4459_;
}
v_resetjp_4459_:
{
uint64_t v_tid_4462_; lean_object* v_traces_4463_; lean_object* v___x_4465_; uint8_t v_isShared_4466_; uint8_t v_isSharedCheck_4476_; 
v_tid_4462_ = lean_ctor_get_uint64(v_traceState_4450_, sizeof(void*)*1);
v_traces_4463_ = lean_ctor_get(v_traceState_4450_, 0);
v_isSharedCheck_4476_ = !lean_is_exclusive(v_traceState_4450_);
if (v_isSharedCheck_4476_ == 0)
{
v___x_4465_ = v_traceState_4450_;
v_isShared_4466_ = v_isSharedCheck_4476_;
goto v_resetjp_4464_;
}
else
{
lean_inc(v_traces_4463_);
lean_dec(v_traceState_4450_);
v___x_4465_ = lean_box(0);
v_isShared_4466_ = v_isSharedCheck_4476_;
goto v_resetjp_4464_;
}
v_resetjp_4464_:
{
lean_object* v___x_4467_; lean_object* v___x_4469_; 
v___x_4467_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_4394_, v_traces_4463_);
lean_dec_ref(v_traces_4463_);
if (v_isShared_4466_ == 0)
{
lean_ctor_set(v___x_4465_, 0, v___x_4467_);
v___x_4469_ = v___x_4465_;
goto v_reusejp_4468_;
}
else
{
lean_object* v_reuseFailAlloc_4475_; 
v_reuseFailAlloc_4475_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4475_, 0, v___x_4467_);
lean_ctor_set_uint64(v_reuseFailAlloc_4475_, sizeof(void*)*1, v_tid_4462_);
v___x_4469_ = v_reuseFailAlloc_4475_;
goto v_reusejp_4468_;
}
v_reusejp_4468_:
{
lean_object* v___x_4471_; 
if (v_isShared_4461_ == 0)
{
lean_ctor_set(v___x_4460_, 4, v___x_4469_);
v___x_4471_ = v___x_4460_;
goto v_reusejp_4470_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v_env_4451_);
lean_ctor_set(v_reuseFailAlloc_4474_, 1, v_nextMacroScope_4452_);
lean_ctor_set(v_reuseFailAlloc_4474_, 2, v_ngen_4453_);
lean_ctor_set(v_reuseFailAlloc_4474_, 3, v_auxDeclNGen_4454_);
lean_ctor_set(v_reuseFailAlloc_4474_, 4, v___x_4469_);
lean_ctor_set(v_reuseFailAlloc_4474_, 5, v_cache_4455_);
lean_ctor_set(v_reuseFailAlloc_4474_, 6, v_messages_4456_);
lean_ctor_set(v_reuseFailAlloc_4474_, 7, v_infoState_4457_);
lean_ctor_set(v_reuseFailAlloc_4474_, 8, v_snapshotTasks_4458_);
v___x_4471_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4470_;
}
v_reusejp_4470_:
{
lean_object* v___x_4472_; lean_object* v___x_4473_; 
v___x_4472_ = lean_st_ref_set(v___y_4402_, v___x_4471_);
v___x_4473_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__5___redArg(v_fst_4404_);
return v___x_4473_;
}
}
}
}
}
else
{
goto v___jp_4442_;
}
}
else
{
goto v___jp_4442_;
}
}
v___jp_4478_:
{
double v___x_4480_; double v___x_4481_; double v___x_4482_; uint8_t v___x_4483_; 
v___x_4480_ = lean_unbox_float(v_snd_4416_);
v___x_4481_ = lean_unbox_float(v_fst_4415_);
v___x_4482_ = lean_float_sub(v___x_4480_, v___x_4481_);
v___x_4483_ = lean_float_decLt(v___y_4479_, v___x_4482_);
v___y_4448_ = v___x_4483_;
goto v___jp_4447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___boxed(lean_object* v_cls_4496_, lean_object* v_collapsed_4497_, lean_object* v_tag_4498_, lean_object* v_opts_4499_, lean_object* v_clsEnabled_4500_, lean_object* v_oldTraces_4501_, lean_object* v_msg_4502_, lean_object* v_resStartStop_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_){
_start:
{
uint8_t v_collapsed_boxed_4511_; uint8_t v_clsEnabled_boxed_4512_; lean_object* v_res_4513_; 
v_collapsed_boxed_4511_ = lean_unbox(v_collapsed_4497_);
v_clsEnabled_boxed_4512_ = lean_unbox(v_clsEnabled_4500_);
v_res_4513_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3(v_cls_4496_, v_collapsed_boxed_4511_, v_tag_4498_, v_opts_4499_, v_clsEnabled_boxed_4512_, v_oldTraces_4501_, v_msg_4502_, v_resStartStop_4503_, v___y_4504_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_, v___y_4509_);
lean_dec(v___y_4509_);
lean_dec_ref(v___y_4508_);
lean_dec(v___y_4507_);
lean_dec_ref(v___y_4506_);
lean_dec(v___y_4505_);
lean_dec_ref(v___y_4504_);
lean_dec_ref(v_opts_4499_);
return v_res_4513_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4515_; lean_object* v___x_4516_; 
v___x_4515_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0___closed__0));
v___x_4516_ = l_Lean_stringToMessageData(v___x_4515_);
return v___x_4516_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0(lean_object* v_name_4517_, lean_object* v_x_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_){
_start:
{
lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; 
v___x_4526_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0___closed__1);
v___x_4527_ = l_Lean_MessageData_ofName(v_name_4517_);
v___x_4528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4528_, 0, v___x_4526_);
lean_ctor_set(v___x_4528_, 1, v___x_4527_);
v___x_4529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4529_, 0, v___x_4528_);
return v___x_4529_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0___boxed(lean_object* v_name_4530_, lean_object* v_x_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_){
_start:
{
lean_object* v_res_4539_; 
v_res_4539_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0(v_name_4530_, v_x_4531_, v___y_4532_, v___y_4533_, v___y_4534_, v___y_4535_, v___y_4536_, v___y_4537_);
lean_dec(v___y_4537_);
lean_dec_ref(v___y_4536_);
lean_dec(v___y_4535_);
lean_dec_ref(v___y_4534_);
lean_dec(v___y_4533_);
lean_dec_ref(v___y_4532_);
lean_dec_ref(v_x_4531_);
return v_res_4539_;
}
}
static double _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_4543_; double v___x_4544_; 
v___x_4543_ = lean_unsigned_to_nat(1000000000u);
v___x_4544_ = lean_float_of_nat(v___x_4543_);
return v___x_4544_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg(lean_object* v_upperBound_4550_, lean_object* v___x_4551_, lean_object* v_a_4552_, lean_object* v_b_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_){
_start:
{
lean_object* v_a_4562_; uint8_t v___x_4566_; 
v___x_4566_ = lean_nat_dec_lt(v_a_4552_, v_upperBound_4550_);
if (v___x_4566_ == 0)
{
lean_object* v___x_4567_; 
lean_dec(v_a_4552_);
v___x_4567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4567_, 0, v_b_4553_);
return v___x_4567_;
}
else
{
lean_object* v___x_4568_; lean_object* v_toSignature_4569_; lean_object* v_value_4570_; lean_object* v_name_4571_; lean_object* v_params_4572_; uint8_t v_safe_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; 
lean_dec_ref(v_b_4553_);
v___x_4568_ = lean_array_fget_borrowed(v___x_4551_, v_a_4552_);
v_toSignature_4569_ = lean_ctor_get(v___x_4568_, 0);
v_value_4570_ = lean_ctor_get(v___x_4568_, 1);
v_name_4571_ = lean_ctor_get(v_toSignature_4569_, 0);
v_params_4572_ = lean_ctor_get(v_toSignature_4569_, 3);
v_safe_4573_ = lean_ctor_get_uint8(v_toSignature_4569_, sizeof(void*)*4);
v___x_4574_ = lean_box(0);
v___x_4575_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__0));
if (v_safe_4573_ == 0)
{
v_a_4562_ = v___x_4575_;
goto v___jp_4561_;
}
else
{
lean_object* v___x_4576_; 
v___x_4576_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_a_4552_, v___y_4555_);
if (lean_obj_tag(v___x_4576_) == 0)
{
lean_object* v_a_4577_; lean_object* v___y_4579_; lean_object* v_decls_4609_; lean_object* v___f_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___y_4615_; lean_object* v___y_4616_; lean_object* v___y_4617_; lean_object* v___y_4618_; uint8_t v___y_4619_; lean_object* v___y_4620_; lean_object* v_a_4621_; lean_object* v___y_4634_; lean_object* v___y_4635_; lean_object* v___y_4636_; uint8_t v___y_4637_; lean_object* v___y_4638_; lean_object* v___y_4639_; lean_object* v_a_4640_; lean_object* v___y_4650_; lean_object* v___y_4651_; lean_object* v___y_4652_; lean_object* v___y_4653_; uint8_t v___y_4654_; lean_object* v___y_4730_; uint8_t v___x_4739_; 
v_a_4577_ = lean_ctor_get(v___x_4576_, 0);
lean_inc(v_a_4577_);
lean_dec_ref(v___x_4576_);
v_decls_4609_ = lean_ctor_get(v___y_4554_, 0);
lean_inc(v_name_4571_);
v___f_4610_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_4610_, 0, v_name_4571_);
v___x_4611_ = lean_unsigned_to_nat(0u);
v___x_4612_ = lean_array_get_size(v_params_4572_);
lean_inc(v_a_4552_);
lean_inc_ref(v_decls_4609_);
v___x_4613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4613_, 0, v_decls_4609_);
lean_ctor_set(v___x_4613_, 1, v_a_4552_);
v___x_4739_ = lean_nat_dec_lt(v___x_4611_, v___x_4612_);
if (v___x_4739_ == 0)
{
goto v___jp_4703_;
}
else
{
uint8_t v___x_4740_; 
v___x_4740_ = lean_nat_dec_le(v___x_4612_, v___x_4612_);
if (v___x_4740_ == 0)
{
if (v___x_4739_ == 0)
{
goto v___jp_4703_;
}
else
{
size_t v___x_4741_; size_t v___x_4742_; lean_object* v___x_4743_; 
v___x_4741_ = ((size_t)0ULL);
v___x_4742_ = lean_usize_of_nat(v___x_4612_);
v___x_4743_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_params_4572_, v___x_4741_, v___x_4742_, v___x_4574_, v___x_4613_, v___y_4555_, v___y_4559_);
v___y_4730_ = v___x_4743_;
goto v___jp_4729_;
}
}
else
{
size_t v___x_4744_; size_t v___x_4745_; lean_object* v___x_4746_; 
v___x_4744_ = ((size_t)0ULL);
v___x_4745_ = lean_usize_of_nat(v___x_4612_);
v___x_4746_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_params_4572_, v___x_4744_, v___x_4745_, v___x_4574_, v___x_4613_, v___y_4555_, v___y_4559_);
v___y_4730_ = v___x_4746_;
goto v___jp_4729_;
}
}
v___jp_4578_:
{
if (lean_obj_tag(v___y_4579_) == 0)
{
lean_object* v___x_4580_; 
lean_dec_ref(v___y_4579_);
v___x_4580_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_a_4552_, v___y_4555_);
if (lean_obj_tag(v___x_4580_) == 0)
{
lean_object* v_a_4581_; lean_object* v___x_4583_; uint8_t v_isShared_4584_; uint8_t v_isSharedCheck_4592_; 
v_a_4581_ = lean_ctor_get(v___x_4580_, 0);
v_isSharedCheck_4592_ = !lean_is_exclusive(v___x_4580_);
if (v_isSharedCheck_4592_ == 0)
{
v___x_4583_ = v___x_4580_;
v_isShared_4584_ = v_isSharedCheck_4592_;
goto v_resetjp_4582_;
}
else
{
lean_inc(v_a_4581_);
lean_dec(v___x_4580_);
v___x_4583_ = lean_box(0);
v_isShared_4584_ = v_isSharedCheck_4592_;
goto v_resetjp_4582_;
}
v_resetjp_4582_:
{
uint8_t v___x_4585_; 
v___x_4585_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_a_4577_, v_a_4581_);
if (v___x_4585_ == 0)
{
lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4590_; 
lean_dec(v_a_4552_);
v___x_4586_ = lean_box(v_safe_4573_);
v___x_4587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4587_, 0, v___x_4586_);
v___x_4588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4588_, 0, v___x_4587_);
lean_ctor_set(v___x_4588_, 1, v___x_4574_);
if (v_isShared_4584_ == 0)
{
lean_ctor_set(v___x_4583_, 0, v___x_4588_);
v___x_4590_ = v___x_4583_;
goto v_reusejp_4589_;
}
else
{
lean_object* v_reuseFailAlloc_4591_; 
v_reuseFailAlloc_4591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4591_, 0, v___x_4588_);
v___x_4590_ = v_reuseFailAlloc_4591_;
goto v_reusejp_4589_;
}
v_reusejp_4589_:
{
return v___x_4590_;
}
}
else
{
lean_del_object(v___x_4583_);
v_a_4562_ = v___x_4575_;
goto v___jp_4561_;
}
}
}
else
{
lean_object* v_a_4593_; lean_object* v___x_4595_; uint8_t v_isShared_4596_; uint8_t v_isSharedCheck_4600_; 
lean_dec(v_a_4577_);
lean_dec(v_a_4552_);
v_a_4593_ = lean_ctor_get(v___x_4580_, 0);
v_isSharedCheck_4600_ = !lean_is_exclusive(v___x_4580_);
if (v_isSharedCheck_4600_ == 0)
{
v___x_4595_ = v___x_4580_;
v_isShared_4596_ = v_isSharedCheck_4600_;
goto v_resetjp_4594_;
}
else
{
lean_inc(v_a_4593_);
lean_dec(v___x_4580_);
v___x_4595_ = lean_box(0);
v_isShared_4596_ = v_isSharedCheck_4600_;
goto v_resetjp_4594_;
}
v_resetjp_4594_:
{
lean_object* v___x_4598_; 
if (v_isShared_4596_ == 0)
{
v___x_4598_ = v___x_4595_;
goto v_reusejp_4597_;
}
else
{
lean_object* v_reuseFailAlloc_4599_; 
v_reuseFailAlloc_4599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4599_, 0, v_a_4593_);
v___x_4598_ = v_reuseFailAlloc_4599_;
goto v_reusejp_4597_;
}
v_reusejp_4597_:
{
return v___x_4598_;
}
}
}
}
else
{
lean_object* v_a_4601_; lean_object* v___x_4603_; uint8_t v_isShared_4604_; uint8_t v_isSharedCheck_4608_; 
lean_dec(v_a_4577_);
lean_dec(v_a_4552_);
v_a_4601_ = lean_ctor_get(v___y_4579_, 0);
v_isSharedCheck_4608_ = !lean_is_exclusive(v___y_4579_);
if (v_isSharedCheck_4608_ == 0)
{
v___x_4603_ = v___y_4579_;
v_isShared_4604_ = v_isSharedCheck_4608_;
goto v_resetjp_4602_;
}
else
{
lean_inc(v_a_4601_);
lean_dec(v___y_4579_);
v___x_4603_ = lean_box(0);
v_isShared_4604_ = v_isSharedCheck_4608_;
goto v_resetjp_4602_;
}
v_resetjp_4602_:
{
lean_object* v___x_4606_; 
if (v_isShared_4604_ == 0)
{
v___x_4606_ = v___x_4603_;
goto v_reusejp_4605_;
}
else
{
lean_object* v_reuseFailAlloc_4607_; 
v_reuseFailAlloc_4607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4607_, 0, v_a_4601_);
v___x_4606_ = v_reuseFailAlloc_4607_;
goto v_reusejp_4605_;
}
v_reusejp_4605_:
{
return v___x_4606_;
}
}
}
}
v___jp_4614_:
{
lean_object* v___x_4622_; double v___x_4623_; double v___x_4624_; double v___x_4625_; double v___x_4626_; double v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; 
v___x_4622_ = lean_io_mono_nanos_now();
v___x_4623_ = lean_float_of_nat(v___y_4615_);
v___x_4624_ = lean_float_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__1);
v___x_4625_ = lean_float_div(v___x_4623_, v___x_4624_);
v___x_4626_ = lean_float_of_nat(v___x_4622_);
v___x_4627_ = lean_float_div(v___x_4626_, v___x_4624_);
v___x_4628_ = lean_box_float(v___x_4625_);
v___x_4629_ = lean_box_float(v___x_4627_);
v___x_4630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4630_, 0, v___x_4628_);
lean_ctor_set(v___x_4630_, 1, v___x_4629_);
v___x_4631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4631_, 0, v_a_4621_);
lean_ctor_set(v___x_4631_, 1, v___x_4630_);
lean_inc_ref(v___y_4620_);
v___x_4632_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3(v___y_4616_, v_safe_4573_, v___y_4620_, v___y_4617_, v___y_4619_, v___y_4618_, v___f_4610_, v___x_4631_, v___x_4613_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_);
lean_dec_ref(v___x_4613_);
v___y_4579_ = v___x_4632_;
goto v___jp_4578_;
}
v___jp_4633_:
{
lean_object* v___x_4641_; double v___x_4642_; double v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; 
v___x_4641_ = lean_io_get_num_heartbeats();
v___x_4642_ = lean_float_of_nat(v___y_4639_);
v___x_4643_ = lean_float_of_nat(v___x_4641_);
v___x_4644_ = lean_box_float(v___x_4642_);
v___x_4645_ = lean_box_float(v___x_4643_);
v___x_4646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4646_, 0, v___x_4644_);
lean_ctor_set(v___x_4646_, 1, v___x_4645_);
v___x_4647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4647_, 0, v_a_4640_);
lean_ctor_set(v___x_4647_, 1, v___x_4646_);
lean_inc_ref(v___y_4638_);
v___x_4648_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3(v___y_4634_, v_safe_4573_, v___y_4638_, v___y_4635_, v___y_4637_, v___y_4636_, v___f_4610_, v___x_4647_, v___x_4613_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_);
lean_dec_ref(v___x_4613_);
v___y_4579_ = v___x_4648_;
goto v___jp_4578_;
}
v___jp_4649_:
{
lean_object* v___x_4655_; 
v___x_4655_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg(v___y_4559_);
if (lean_obj_tag(v___x_4655_) == 0)
{
lean_object* v_a_4656_; lean_object* v___x_4657_; uint8_t v___x_4658_; 
v_a_4656_ = lean_ctor_get(v___x_4655_, 0);
lean_inc(v_a_4656_);
lean_dec_ref(v___x_4655_);
v___x_4657_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4658_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v___y_4652_, v___x_4657_);
if (v___x_4658_ == 0)
{
lean_object* v___x_4659_; lean_object* v___x_4660_; 
v___x_4659_ = lean_io_mono_nanos_now();
v___x_4660_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v___y_4650_, v___x_4613_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_);
if (lean_obj_tag(v___x_4660_) == 0)
{
lean_object* v_a_4661_; lean_object* v___x_4663_; uint8_t v_isShared_4664_; uint8_t v_isSharedCheck_4668_; 
v_a_4661_ = lean_ctor_get(v___x_4660_, 0);
v_isSharedCheck_4668_ = !lean_is_exclusive(v___x_4660_);
if (v_isSharedCheck_4668_ == 0)
{
v___x_4663_ = v___x_4660_;
v_isShared_4664_ = v_isSharedCheck_4668_;
goto v_resetjp_4662_;
}
else
{
lean_inc(v_a_4661_);
lean_dec(v___x_4660_);
v___x_4663_ = lean_box(0);
v_isShared_4664_ = v_isSharedCheck_4668_;
goto v_resetjp_4662_;
}
v_resetjp_4662_:
{
lean_object* v___x_4666_; 
if (v_isShared_4664_ == 0)
{
lean_ctor_set_tag(v___x_4663_, 1);
v___x_4666_ = v___x_4663_;
goto v_reusejp_4665_;
}
else
{
lean_object* v_reuseFailAlloc_4667_; 
v_reuseFailAlloc_4667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4667_, 0, v_a_4661_);
v___x_4666_ = v_reuseFailAlloc_4667_;
goto v_reusejp_4665_;
}
v_reusejp_4665_:
{
v___y_4615_ = v___x_4659_;
v___y_4616_ = v___y_4651_;
v___y_4617_ = v___y_4652_;
v___y_4618_ = v_a_4656_;
v___y_4619_ = v___y_4654_;
v___y_4620_ = v___y_4653_;
v_a_4621_ = v___x_4666_;
goto v___jp_4614_;
}
}
}
else
{
lean_object* v_a_4669_; lean_object* v___x_4671_; uint8_t v_isShared_4672_; uint8_t v_isSharedCheck_4676_; 
v_a_4669_ = lean_ctor_get(v___x_4660_, 0);
v_isSharedCheck_4676_ = !lean_is_exclusive(v___x_4660_);
if (v_isSharedCheck_4676_ == 0)
{
v___x_4671_ = v___x_4660_;
v_isShared_4672_ = v_isSharedCheck_4676_;
goto v_resetjp_4670_;
}
else
{
lean_inc(v_a_4669_);
lean_dec(v___x_4660_);
v___x_4671_ = lean_box(0);
v_isShared_4672_ = v_isSharedCheck_4676_;
goto v_resetjp_4670_;
}
v_resetjp_4670_:
{
lean_object* v___x_4674_; 
if (v_isShared_4672_ == 0)
{
lean_ctor_set_tag(v___x_4671_, 0);
v___x_4674_ = v___x_4671_;
goto v_reusejp_4673_;
}
else
{
lean_object* v_reuseFailAlloc_4675_; 
v_reuseFailAlloc_4675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4675_, 0, v_a_4669_);
v___x_4674_ = v_reuseFailAlloc_4675_;
goto v_reusejp_4673_;
}
v_reusejp_4673_:
{
v___y_4615_ = v___x_4659_;
v___y_4616_ = v___y_4651_;
v___y_4617_ = v___y_4652_;
v___y_4618_ = v_a_4656_;
v___y_4619_ = v___y_4654_;
v___y_4620_ = v___y_4653_;
v_a_4621_ = v___x_4674_;
goto v___jp_4614_;
}
}
}
}
else
{
lean_object* v___x_4677_; lean_object* v___x_4678_; 
v___x_4677_ = lean_io_get_num_heartbeats();
v___x_4678_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v___y_4650_, v___x_4613_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_);
if (lean_obj_tag(v___x_4678_) == 0)
{
lean_object* v_a_4679_; lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4686_; 
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
lean_ctor_set_tag(v___x_4681_, 1);
v___x_4684_ = v___x_4681_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4685_; 
v_reuseFailAlloc_4685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4685_, 0, v_a_4679_);
v___x_4684_ = v_reuseFailAlloc_4685_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
v___y_4634_ = v___y_4651_;
v___y_4635_ = v___y_4652_;
v___y_4636_ = v_a_4656_;
v___y_4637_ = v___y_4654_;
v___y_4638_ = v___y_4653_;
v___y_4639_ = v___x_4677_;
v_a_4640_ = v___x_4684_;
goto v___jp_4633_;
}
}
}
else
{
lean_object* v_a_4687_; lean_object* v___x_4689_; uint8_t v_isShared_4690_; uint8_t v_isSharedCheck_4694_; 
v_a_4687_ = lean_ctor_get(v___x_4678_, 0);
v_isSharedCheck_4694_ = !lean_is_exclusive(v___x_4678_);
if (v_isSharedCheck_4694_ == 0)
{
v___x_4689_ = v___x_4678_;
v_isShared_4690_ = v_isSharedCheck_4694_;
goto v_resetjp_4688_;
}
else
{
lean_inc(v_a_4687_);
lean_dec(v___x_4678_);
v___x_4689_ = lean_box(0);
v_isShared_4690_ = v_isSharedCheck_4694_;
goto v_resetjp_4688_;
}
v_resetjp_4688_:
{
lean_object* v___x_4692_; 
if (v_isShared_4690_ == 0)
{
lean_ctor_set_tag(v___x_4689_, 0);
v___x_4692_ = v___x_4689_;
goto v_reusejp_4691_;
}
else
{
lean_object* v_reuseFailAlloc_4693_; 
v_reuseFailAlloc_4693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4693_, 0, v_a_4687_);
v___x_4692_ = v_reuseFailAlloc_4693_;
goto v_reusejp_4691_;
}
v_reusejp_4691_:
{
v___y_4634_ = v___y_4651_;
v___y_4635_ = v___y_4652_;
v___y_4636_ = v_a_4656_;
v___y_4637_ = v___y_4654_;
v___y_4638_ = v___y_4653_;
v___y_4639_ = v___x_4677_;
v_a_4640_ = v___x_4692_;
goto v___jp_4633_;
}
}
}
}
}
else
{
lean_object* v_a_4695_; lean_object* v___x_4697_; uint8_t v_isShared_4698_; uint8_t v_isSharedCheck_4702_; 
lean_dec(v___y_4651_);
lean_dec_ref(v___y_4650_);
lean_dec_ref(v___x_4613_);
lean_dec_ref(v___f_4610_);
lean_dec(v_a_4577_);
lean_dec(v_a_4552_);
v_a_4695_ = lean_ctor_get(v___x_4655_, 0);
v_isSharedCheck_4702_ = !lean_is_exclusive(v___x_4655_);
if (v_isSharedCheck_4702_ == 0)
{
v___x_4697_ = v___x_4655_;
v_isShared_4698_ = v_isSharedCheck_4702_;
goto v_resetjp_4696_;
}
else
{
lean_inc(v_a_4695_);
lean_dec(v___x_4655_);
v___x_4697_ = lean_box(0);
v_isShared_4698_ = v_isSharedCheck_4702_;
goto v_resetjp_4696_;
}
v_resetjp_4696_:
{
lean_object* v___x_4700_; 
if (v_isShared_4698_ == 0)
{
v___x_4700_ = v___x_4697_;
goto v_reusejp_4699_;
}
else
{
lean_object* v_reuseFailAlloc_4701_; 
v_reuseFailAlloc_4701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4701_, 0, v_a_4695_);
v___x_4700_ = v_reuseFailAlloc_4701_;
goto v_reusejp_4699_;
}
v_reusejp_4699_:
{
return v___x_4700_;
}
}
}
}
v___jp_4703_:
{
if (lean_obj_tag(v_value_4570_) == 0)
{
lean_object* v_options_4704_; uint8_t v_hasTrace_4705_; 
v_options_4704_ = lean_ctor_get(v___y_4558_, 2);
v_hasTrace_4705_ = lean_ctor_get_uint8(v_options_4704_, sizeof(void*)*1);
if (v_hasTrace_4705_ == 0)
{
lean_object* v_code_4706_; lean_object* v___x_4707_; 
lean_dec_ref(v___f_4610_);
v_code_4706_ = lean_ctor_get(v_value_4570_, 0);
lean_inc_ref(v_code_4706_);
v___x_4707_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_code_4706_, v___x_4613_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_);
lean_dec_ref(v___x_4613_);
v___y_4579_ = v___x_4707_;
goto v___jp_4578_;
}
else
{
lean_object* v_code_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; 
v_code_4708_ = lean_ctor_get(v_value_4570_, 0);
v___x_4709_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__3));
v___x_4710_ = l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(v___x_4709_, v___y_4558_);
if (lean_obj_tag(v___x_4710_) == 0)
{
lean_object* v_a_4711_; lean_object* v___x_4712_; uint8_t v___x_4713_; 
v_a_4711_ = lean_ctor_get(v___x_4710_, 0);
lean_inc(v_a_4711_);
lean_dec_ref(v___x_4710_);
v___x_4712_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__4));
v___x_4713_ = lean_unbox(v_a_4711_);
if (v___x_4713_ == 0)
{
lean_object* v___x_4714_; uint8_t v___x_4715_; 
v___x_4714_ = l_Lean_trace_profiler;
v___x_4715_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v_options_4704_, v___x_4714_);
if (v___x_4715_ == 0)
{
lean_object* v___x_4716_; 
lean_dec(v_a_4711_);
lean_dec_ref(v___f_4610_);
lean_inc_ref(v_code_4708_);
v___x_4716_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_code_4708_, v___x_4613_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_);
lean_dec_ref(v___x_4613_);
v___y_4579_ = v___x_4716_;
goto v___jp_4578_;
}
else
{
uint8_t v___x_4717_; 
v___x_4717_ = lean_unbox(v_a_4711_);
lean_dec(v_a_4711_);
lean_inc_ref(v_code_4708_);
v___y_4650_ = v_code_4708_;
v___y_4651_ = v___x_4709_;
v___y_4652_ = v_options_4704_;
v___y_4653_ = v___x_4712_;
v___y_4654_ = v___x_4717_;
goto v___jp_4649_;
}
}
else
{
uint8_t v___x_4718_; 
v___x_4718_ = lean_unbox(v_a_4711_);
lean_dec(v_a_4711_);
lean_inc_ref(v_code_4708_);
v___y_4650_ = v_code_4708_;
v___y_4651_ = v___x_4709_;
v___y_4652_ = v_options_4704_;
v___y_4653_ = v___x_4712_;
v___y_4654_ = v___x_4718_;
goto v___jp_4649_;
}
}
else
{
lean_object* v_a_4719_; lean_object* v___x_4721_; uint8_t v_isShared_4722_; uint8_t v_isSharedCheck_4726_; 
lean_dec_ref(v___x_4613_);
lean_dec_ref(v___f_4610_);
lean_dec(v_a_4577_);
lean_dec(v_a_4552_);
v_a_4719_ = lean_ctor_get(v___x_4710_, 0);
v_isSharedCheck_4726_ = !lean_is_exclusive(v___x_4710_);
if (v_isSharedCheck_4726_ == 0)
{
v___x_4721_ = v___x_4710_;
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
else
{
lean_inc(v_a_4719_);
lean_dec(v___x_4710_);
v___x_4721_ = lean_box(0);
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
v_resetjp_4720_:
{
lean_object* v___x_4724_; 
if (v_isShared_4722_ == 0)
{
v___x_4724_ = v___x_4721_;
goto v_reusejp_4723_;
}
else
{
lean_object* v_reuseFailAlloc_4725_; 
v_reuseFailAlloc_4725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4725_, 0, v_a_4719_);
v___x_4724_ = v_reuseFailAlloc_4725_;
goto v_reusejp_4723_;
}
v_reusejp_4723_:
{
return v___x_4724_;
}
}
}
}
}
else
{
lean_object* v___x_4727_; lean_object* v___x_4728_; 
lean_dec_ref(v___f_4610_);
v___x_4727_ = lean_box(1);
v___x_4728_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(v___x_4727_, v___x_4613_, v___y_4555_, v___y_4559_);
lean_dec_ref(v___x_4613_);
v___y_4579_ = v___x_4728_;
goto v___jp_4578_;
}
}
v___jp_4729_:
{
if (lean_obj_tag(v___y_4730_) == 0)
{
lean_dec_ref(v___y_4730_);
goto v___jp_4703_;
}
else
{
lean_object* v_a_4731_; lean_object* v___x_4733_; uint8_t v_isShared_4734_; uint8_t v_isSharedCheck_4738_; 
lean_dec_ref(v___x_4613_);
lean_dec_ref(v___f_4610_);
lean_dec(v_a_4577_);
lean_dec(v_a_4552_);
v_a_4731_ = lean_ctor_get(v___y_4730_, 0);
v_isSharedCheck_4738_ = !lean_is_exclusive(v___y_4730_);
if (v_isSharedCheck_4738_ == 0)
{
v___x_4733_ = v___y_4730_;
v_isShared_4734_ = v_isSharedCheck_4738_;
goto v_resetjp_4732_;
}
else
{
lean_inc(v_a_4731_);
lean_dec(v___y_4730_);
v___x_4733_ = lean_box(0);
v_isShared_4734_ = v_isSharedCheck_4738_;
goto v_resetjp_4732_;
}
v_resetjp_4732_:
{
lean_object* v___x_4736_; 
if (v_isShared_4734_ == 0)
{
v___x_4736_ = v___x_4733_;
goto v_reusejp_4735_;
}
else
{
lean_object* v_reuseFailAlloc_4737_; 
v_reuseFailAlloc_4737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4737_, 0, v_a_4731_);
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
else
{
lean_object* v_a_4747_; lean_object* v___x_4749_; uint8_t v_isShared_4750_; uint8_t v_isSharedCheck_4754_; 
lean_dec(v_a_4552_);
v_a_4747_ = lean_ctor_get(v___x_4576_, 0);
v_isSharedCheck_4754_ = !lean_is_exclusive(v___x_4576_);
if (v_isSharedCheck_4754_ == 0)
{
v___x_4749_ = v___x_4576_;
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
else
{
lean_inc(v_a_4747_);
lean_dec(v___x_4576_);
v___x_4749_ = lean_box(0);
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
v_resetjp_4748_:
{
lean_object* v___x_4752_; 
if (v_isShared_4750_ == 0)
{
v___x_4752_ = v___x_4749_;
goto v_reusejp_4751_;
}
else
{
lean_object* v_reuseFailAlloc_4753_; 
v_reuseFailAlloc_4753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4753_, 0, v_a_4747_);
v___x_4752_ = v_reuseFailAlloc_4753_;
goto v_reusejp_4751_;
}
v_reusejp_4751_:
{
return v___x_4752_;
}
}
}
}
}
v___jp_4561_:
{
lean_object* v___x_4563_; lean_object* v___x_4564_; 
v___x_4563_ = lean_unsigned_to_nat(1u);
v___x_4564_ = lean_nat_add(v_a_4552_, v___x_4563_);
lean_dec(v_a_4552_);
lean_inc_ref(v_a_4562_);
v_a_4552_ = v___x_4564_;
v_b_4553_ = v_a_4562_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___boxed(lean_object* v_upperBound_4755_, lean_object* v___x_4756_, lean_object* v_a_4757_, lean_object* v_b_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_, lean_object* v___y_4764_, lean_object* v___y_4765_){
_start:
{
lean_object* v_res_4766_; 
v_res_4766_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg(v_upperBound_4755_, v___x_4756_, v_a_4757_, v_b_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_);
lean_dec(v___y_4764_);
lean_dec_ref(v___y_4763_);
lean_dec(v___y_4762_);
lean_dec_ref(v___y_4761_);
lean_dec(v___y_4760_);
lean_dec_ref(v___y_4759_);
lean_dec_ref(v___x_4756_);
lean_dec(v_upperBound_4755_);
return v_res_4766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferStep(lean_object* v_a_4767_, lean_object* v_a_4768_, lean_object* v_a_4769_, lean_object* v_a_4770_, lean_object* v_a_4771_, lean_object* v_a_4772_){
_start:
{
lean_object* v_decls_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4778_; 
v_decls_4774_ = lean_ctor_get(v_a_4767_, 0);
v___x_4775_ = lean_array_get_size(v_decls_4774_);
v___x_4776_ = lean_unsigned_to_nat(0u);
v___x_4777_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__0));
v___x_4778_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg(v___x_4775_, v_decls_4774_, v___x_4776_, v___x_4777_, v_a_4767_, v_a_4768_, v_a_4769_, v_a_4770_, v_a_4771_, v_a_4772_);
if (lean_obj_tag(v___x_4778_) == 0)
{
lean_object* v_a_4779_; lean_object* v___x_4781_; uint8_t v_isShared_4782_; uint8_t v_isSharedCheck_4793_; 
v_a_4779_ = lean_ctor_get(v___x_4778_, 0);
v_isSharedCheck_4793_ = !lean_is_exclusive(v___x_4778_);
if (v_isSharedCheck_4793_ == 0)
{
v___x_4781_ = v___x_4778_;
v_isShared_4782_ = v_isSharedCheck_4793_;
goto v_resetjp_4780_;
}
else
{
lean_inc(v_a_4779_);
lean_dec(v___x_4778_);
v___x_4781_ = lean_box(0);
v_isShared_4782_ = v_isSharedCheck_4793_;
goto v_resetjp_4780_;
}
v_resetjp_4780_:
{
lean_object* v_fst_4783_; 
v_fst_4783_ = lean_ctor_get(v_a_4779_, 0);
lean_inc(v_fst_4783_);
lean_dec(v_a_4779_);
if (lean_obj_tag(v_fst_4783_) == 0)
{
uint8_t v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4787_; 
v___x_4784_ = 0;
v___x_4785_ = lean_box(v___x_4784_);
if (v_isShared_4782_ == 0)
{
lean_ctor_set(v___x_4781_, 0, v___x_4785_);
v___x_4787_ = v___x_4781_;
goto v_reusejp_4786_;
}
else
{
lean_object* v_reuseFailAlloc_4788_; 
v_reuseFailAlloc_4788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4788_, 0, v___x_4785_);
v___x_4787_ = v_reuseFailAlloc_4788_;
goto v_reusejp_4786_;
}
v_reusejp_4786_:
{
return v___x_4787_;
}
}
else
{
lean_object* v_val_4789_; lean_object* v___x_4791_; 
v_val_4789_ = lean_ctor_get(v_fst_4783_, 0);
lean_inc(v_val_4789_);
lean_dec_ref(v_fst_4783_);
if (v_isShared_4782_ == 0)
{
lean_ctor_set(v___x_4781_, 0, v_val_4789_);
v___x_4791_ = v___x_4781_;
goto v_reusejp_4790_;
}
else
{
lean_object* v_reuseFailAlloc_4792_; 
v_reuseFailAlloc_4792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4792_, 0, v_val_4789_);
v___x_4791_ = v_reuseFailAlloc_4792_;
goto v_reusejp_4790_;
}
v_reusejp_4790_:
{
return v___x_4791_;
}
}
}
}
else
{
lean_object* v_a_4794_; lean_object* v___x_4796_; uint8_t v_isShared_4797_; uint8_t v_isSharedCheck_4801_; 
v_a_4794_ = lean_ctor_get(v___x_4778_, 0);
v_isSharedCheck_4801_ = !lean_is_exclusive(v___x_4778_);
if (v_isSharedCheck_4801_ == 0)
{
v___x_4796_ = v___x_4778_;
v_isShared_4797_ = v_isSharedCheck_4801_;
goto v_resetjp_4795_;
}
else
{
lean_inc(v_a_4794_);
lean_dec(v___x_4778_);
v___x_4796_ = lean_box(0);
v_isShared_4797_ = v_isSharedCheck_4801_;
goto v_resetjp_4795_;
}
v_resetjp_4795_:
{
lean_object* v___x_4799_; 
if (v_isShared_4797_ == 0)
{
v___x_4799_ = v___x_4796_;
goto v_reusejp_4798_;
}
else
{
lean_object* v_reuseFailAlloc_4800_; 
v_reuseFailAlloc_4800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4800_, 0, v_a_4794_);
v___x_4799_ = v_reuseFailAlloc_4800_;
goto v_reusejp_4798_;
}
v_reusejp_4798_:
{
return v___x_4799_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferStep___boxed(lean_object* v_a_4802_, lean_object* v_a_4803_, lean_object* v_a_4804_, lean_object* v_a_4805_, lean_object* v_a_4806_, lean_object* v_a_4807_, lean_object* v_a_4808_){
_start:
{
lean_object* v_res_4809_; 
v_res_4809_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferStep(v_a_4802_, v_a_4803_, v_a_4804_, v_a_4805_, v_a_4806_, v_a_4807_);
lean_dec(v_a_4807_);
lean_dec_ref(v_a_4806_);
lean_dec(v_a_4805_);
lean_dec_ref(v_a_4804_);
lean_dec(v_a_4803_);
lean_dec_ref(v_a_4802_);
return v_res_4809_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__5(lean_object* v_00_u03b1_4810_, lean_object* v_x_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_, lean_object* v___y_4814_, lean_object* v___y_4815_, lean_object* v___y_4816_, lean_object* v___y_4817_){
_start:
{
lean_object* v___x_4819_; 
v___x_4819_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__5___redArg(v_x_4811_);
return v___x_4819_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__5___boxed(lean_object* v_00_u03b1_4820_, lean_object* v_x_4821_, lean_object* v___y_4822_, lean_object* v___y_4823_, lean_object* v___y_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_){
_start:
{
lean_object* v_res_4829_; 
v_res_4829_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__5(v_00_u03b1_4820_, v_x_4821_, v___y_4822_, v___y_4823_, v___y_4824_, v___y_4825_, v___y_4826_, v___y_4827_);
lean_dec(v___y_4827_);
lean_dec_ref(v___y_4826_);
lean_dec(v___y_4825_);
lean_dec_ref(v___y_4824_);
lean_dec(v___y_4823_);
lean_dec_ref(v___y_4822_);
return v_res_4829_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4(lean_object* v_upperBound_4830_, lean_object* v___x_4831_, lean_object* v_inst_4832_, lean_object* v_R_4833_, lean_object* v_a_4834_, lean_object* v_b_4835_, lean_object* v_c_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_){
_start:
{
lean_object* v___x_4844_; 
v___x_4844_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg(v_upperBound_4830_, v___x_4831_, v_a_4834_, v_b_4835_, v___y_4837_, v___y_4838_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_);
return v___x_4844_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___boxed(lean_object* v_upperBound_4845_, lean_object* v___x_4846_, lean_object* v_inst_4847_, lean_object* v_R_4848_, lean_object* v_a_4849_, lean_object* v_b_4850_, lean_object* v_c_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_, lean_object* v___y_4855_, lean_object* v___y_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_){
_start:
{
lean_object* v_res_4859_; 
v_res_4859_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4(v_upperBound_4845_, v___x_4846_, v_inst_4847_, v_R_4848_, v_a_4849_, v_b_4850_, v_c_4851_, v___y_4852_, v___y_4853_, v___y_4854_, v___y_4855_, v___y_4856_, v___y_4857_);
lean_dec(v___y_4857_);
lean_dec_ref(v___y_4856_);
lean_dec(v___y_4855_);
lean_dec_ref(v___y_4854_);
lean_dec(v___y_4853_);
lean_dec_ref(v___y_4852_);
lean_dec_ref(v___x_4846_);
lean_dec(v_upperBound_4845_);
return v_res_4859_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4(lean_object* v_oldTraces_4860_, lean_object* v_data_4861_, lean_object* v_ref_4862_, lean_object* v_msg_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_){
_start:
{
lean_object* v___x_4871_; 
v___x_4871_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg(v_oldTraces_4860_, v_data_4861_, v_ref_4862_, v_msg_4863_, v___y_4866_, v___y_4867_, v___y_4868_, v___y_4869_);
return v___x_4871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___boxed(lean_object* v_oldTraces_4872_, lean_object* v_data_4873_, lean_object* v_ref_4874_, lean_object* v_msg_4875_, lean_object* v___y_4876_, lean_object* v___y_4877_, lean_object* v___y_4878_, lean_object* v___y_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_, lean_object* v___y_4882_){
_start:
{
lean_object* v_res_4883_; 
v_res_4883_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4(v_oldTraces_4872_, v_data_4873_, v_ref_4874_, v_msg_4875_, v___y_4876_, v___y_4877_, v___y_4878_, v___y_4879_, v___y_4880_, v___y_4881_);
lean_dec(v___y_4881_);
lean_dec_ref(v___y_4880_);
lean_dec(v___y_4879_);
lean_dec_ref(v___y_4878_);
lean_dec(v___y_4877_);
lean_dec_ref(v___y_4876_);
return v_res_4883_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(lean_object* v_cls_4886_, lean_object* v_msg_4887_, lean_object* v___y_4888_, lean_object* v___y_4889_, lean_object* v___y_4890_, lean_object* v___y_4891_){
_start:
{
lean_object* v_options_4893_; lean_object* v_ref_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; 
v_options_4893_ = lean_ctor_get(v___y_4890_, 2);
v_ref_4894_ = lean_ctor_get(v___y_4890_, 5);
v___x_4895_ = lean_st_ref_get(v___y_4891_);
v___x_4896_ = lean_st_ref_get(v___y_4889_);
v___x_4897_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_4888_);
if (lean_obj_tag(v___x_4897_) == 0)
{
lean_object* v_a_4898_; lean_object* v___x_4900_; uint8_t v_isShared_4901_; uint8_t v_isSharedCheck_4956_; 
v_a_4898_ = lean_ctor_get(v___x_4897_, 0);
v_isSharedCheck_4956_ = !lean_is_exclusive(v___x_4897_);
if (v_isSharedCheck_4956_ == 0)
{
v___x_4900_ = v___x_4897_;
v_isShared_4901_ = v_isSharedCheck_4956_;
goto v_resetjp_4899_;
}
else
{
lean_inc(v_a_4898_);
lean_dec(v___x_4897_);
v___x_4900_ = lean_box(0);
v_isShared_4901_ = v_isSharedCheck_4956_;
goto v_resetjp_4899_;
}
v_resetjp_4899_:
{
lean_object* v_env_4902_; lean_object* v_lctx_4903_; lean_object* v___x_4905_; uint8_t v_isShared_4906_; uint8_t v_isSharedCheck_4954_; 
v_env_4902_ = lean_ctor_get(v___x_4895_, 0);
lean_inc_ref(v_env_4902_);
lean_dec(v___x_4895_);
v_lctx_4903_ = lean_ctor_get(v___x_4896_, 0);
v_isSharedCheck_4954_ = !lean_is_exclusive(v___x_4896_);
if (v_isSharedCheck_4954_ == 0)
{
lean_object* v_unused_4955_; 
v_unused_4955_ = lean_ctor_get(v___x_4896_, 1);
lean_dec(v_unused_4955_);
v___x_4905_ = v___x_4896_;
v_isShared_4906_ = v_isSharedCheck_4954_;
goto v_resetjp_4904_;
}
else
{
lean_inc(v_lctx_4903_);
lean_dec(v___x_4896_);
v___x_4905_ = lean_box(0);
v_isShared_4906_ = v_isSharedCheck_4954_;
goto v_resetjp_4904_;
}
v_resetjp_4904_:
{
lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v_traceState_4909_; lean_object* v_env_4910_; lean_object* v_nextMacroScope_4911_; lean_object* v_ngen_4912_; lean_object* v_auxDeclNGen_4913_; lean_object* v_cache_4914_; lean_object* v_messages_4915_; lean_object* v_infoState_4916_; lean_object* v_snapshotTasks_4917_; lean_object* v___x_4919_; uint8_t v_isShared_4920_; uint8_t v_isSharedCheck_4953_; 
v___x_4907_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__2, &l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__2);
v___x_4908_ = lean_st_ref_take(v___y_4891_);
v_traceState_4909_ = lean_ctor_get(v___x_4908_, 4);
v_env_4910_ = lean_ctor_get(v___x_4908_, 0);
v_nextMacroScope_4911_ = lean_ctor_get(v___x_4908_, 1);
v_ngen_4912_ = lean_ctor_get(v___x_4908_, 2);
v_auxDeclNGen_4913_ = lean_ctor_get(v___x_4908_, 3);
v_cache_4914_ = lean_ctor_get(v___x_4908_, 5);
v_messages_4915_ = lean_ctor_get(v___x_4908_, 6);
v_infoState_4916_ = lean_ctor_get(v___x_4908_, 7);
v_snapshotTasks_4917_ = lean_ctor_get(v___x_4908_, 8);
v_isSharedCheck_4953_ = !lean_is_exclusive(v___x_4908_);
if (v_isSharedCheck_4953_ == 0)
{
v___x_4919_ = v___x_4908_;
v_isShared_4920_ = v_isSharedCheck_4953_;
goto v_resetjp_4918_;
}
else
{
lean_inc(v_snapshotTasks_4917_);
lean_inc(v_infoState_4916_);
lean_inc(v_messages_4915_);
lean_inc(v_cache_4914_);
lean_inc(v_traceState_4909_);
lean_inc(v_auxDeclNGen_4913_);
lean_inc(v_ngen_4912_);
lean_inc(v_nextMacroScope_4911_);
lean_inc(v_env_4910_);
lean_dec(v___x_4908_);
v___x_4919_ = lean_box(0);
v_isShared_4920_ = v_isSharedCheck_4953_;
goto v_resetjp_4918_;
}
v_resetjp_4918_:
{
uint64_t v_tid_4921_; lean_object* v_traces_4922_; lean_object* v___x_4924_; uint8_t v_isShared_4925_; uint8_t v_isSharedCheck_4952_; 
v_tid_4921_ = lean_ctor_get_uint64(v_traceState_4909_, sizeof(void*)*1);
v_traces_4922_ = lean_ctor_get(v_traceState_4909_, 0);
v_isSharedCheck_4952_ = !lean_is_exclusive(v_traceState_4909_);
if (v_isSharedCheck_4952_ == 0)
{
v___x_4924_ = v_traceState_4909_;
v_isShared_4925_ = v_isSharedCheck_4952_;
goto v_resetjp_4923_;
}
else
{
lean_inc(v_traces_4922_);
lean_dec(v_traceState_4909_);
v___x_4924_ = lean_box(0);
v_isShared_4925_ = v_isSharedCheck_4952_;
goto v_resetjp_4923_;
}
v_resetjp_4923_:
{
uint8_t v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4930_; 
v___x_4926_ = lean_unbox(v_a_4898_);
lean_dec(v_a_4898_);
v___x_4927_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_4903_, v___x_4926_);
lean_dec_ref(v_lctx_4903_);
lean_inc_ref(v_options_4893_);
v___x_4928_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4928_, 0, v_env_4902_);
lean_ctor_set(v___x_4928_, 1, v___x_4907_);
lean_ctor_set(v___x_4928_, 2, v___x_4927_);
lean_ctor_set(v___x_4928_, 3, v_options_4893_);
if (v_isShared_4906_ == 0)
{
lean_ctor_set_tag(v___x_4905_, 3);
lean_ctor_set(v___x_4905_, 1, v_msg_4887_);
lean_ctor_set(v___x_4905_, 0, v___x_4928_);
v___x_4930_ = v___x_4905_;
goto v_reusejp_4929_;
}
else
{
lean_object* v_reuseFailAlloc_4951_; 
v_reuseFailAlloc_4951_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4951_, 0, v___x_4928_);
lean_ctor_set(v_reuseFailAlloc_4951_, 1, v_msg_4887_);
v___x_4930_ = v_reuseFailAlloc_4951_;
goto v_reusejp_4929_;
}
v_reusejp_4929_:
{
lean_object* v___x_4931_; double v___x_4932_; uint8_t v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4941_; 
v___x_4931_ = lean_box(0);
v___x_4932_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__1);
v___x_4933_ = 0;
v___x_4934_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__4));
v___x_4935_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4935_, 0, v_cls_4886_);
lean_ctor_set(v___x_4935_, 1, v___x_4931_);
lean_ctor_set(v___x_4935_, 2, v___x_4934_);
lean_ctor_set_float(v___x_4935_, sizeof(void*)*3, v___x_4932_);
lean_ctor_set_float(v___x_4935_, sizeof(void*)*3 + 8, v___x_4932_);
lean_ctor_set_uint8(v___x_4935_, sizeof(void*)*3 + 16, v___x_4933_);
v___x_4936_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0));
v___x_4937_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4937_, 0, v___x_4935_);
lean_ctor_set(v___x_4937_, 1, v___x_4930_);
lean_ctor_set(v___x_4937_, 2, v___x_4936_);
lean_inc(v_ref_4894_);
v___x_4938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4938_, 0, v_ref_4894_);
lean_ctor_set(v___x_4938_, 1, v___x_4937_);
v___x_4939_ = l_Lean_PersistentArray_push___redArg(v_traces_4922_, v___x_4938_);
if (v_isShared_4925_ == 0)
{
lean_ctor_set(v___x_4924_, 0, v___x_4939_);
v___x_4941_ = v___x_4924_;
goto v_reusejp_4940_;
}
else
{
lean_object* v_reuseFailAlloc_4950_; 
v_reuseFailAlloc_4950_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4950_, 0, v___x_4939_);
lean_ctor_set_uint64(v_reuseFailAlloc_4950_, sizeof(void*)*1, v_tid_4921_);
v___x_4941_ = v_reuseFailAlloc_4950_;
goto v_reusejp_4940_;
}
v_reusejp_4940_:
{
lean_object* v___x_4943_; 
if (v_isShared_4920_ == 0)
{
lean_ctor_set(v___x_4919_, 4, v___x_4941_);
v___x_4943_ = v___x_4919_;
goto v_reusejp_4942_;
}
else
{
lean_object* v_reuseFailAlloc_4949_; 
v_reuseFailAlloc_4949_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4949_, 0, v_env_4910_);
lean_ctor_set(v_reuseFailAlloc_4949_, 1, v_nextMacroScope_4911_);
lean_ctor_set(v_reuseFailAlloc_4949_, 2, v_ngen_4912_);
lean_ctor_set(v_reuseFailAlloc_4949_, 3, v_auxDeclNGen_4913_);
lean_ctor_set(v_reuseFailAlloc_4949_, 4, v___x_4941_);
lean_ctor_set(v_reuseFailAlloc_4949_, 5, v_cache_4914_);
lean_ctor_set(v_reuseFailAlloc_4949_, 6, v_messages_4915_);
lean_ctor_set(v_reuseFailAlloc_4949_, 7, v_infoState_4916_);
lean_ctor_set(v_reuseFailAlloc_4949_, 8, v_snapshotTasks_4917_);
v___x_4943_ = v_reuseFailAlloc_4949_;
goto v_reusejp_4942_;
}
v_reusejp_4942_:
{
lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4947_; 
v___x_4944_ = lean_st_ref_set(v___y_4891_, v___x_4943_);
v___x_4945_ = lean_box(0);
if (v_isShared_4901_ == 0)
{
lean_ctor_set(v___x_4900_, 0, v___x_4945_);
v___x_4947_ = v___x_4900_;
goto v_reusejp_4946_;
}
else
{
lean_object* v_reuseFailAlloc_4948_; 
v_reuseFailAlloc_4948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4948_, 0, v___x_4945_);
v___x_4947_ = v_reuseFailAlloc_4948_;
goto v_reusejp_4946_;
}
v_reusejp_4946_:
{
return v___x_4947_;
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
lean_object* v_a_4957_; lean_object* v___x_4959_; uint8_t v_isShared_4960_; uint8_t v_isSharedCheck_4964_; 
lean_dec(v___x_4896_);
lean_dec(v___x_4895_);
lean_dec_ref(v_msg_4887_);
lean_dec(v_cls_4886_);
v_a_4957_ = lean_ctor_get(v___x_4897_, 0);
v_isSharedCheck_4964_ = !lean_is_exclusive(v___x_4897_);
if (v_isSharedCheck_4964_ == 0)
{
v___x_4959_ = v___x_4897_;
v_isShared_4960_ = v_isSharedCheck_4964_;
goto v_resetjp_4958_;
}
else
{
lean_inc(v_a_4957_);
lean_dec(v___x_4897_);
v___x_4959_ = lean_box(0);
v_isShared_4960_ = v_isSharedCheck_4964_;
goto v_resetjp_4958_;
}
v_resetjp_4958_:
{
lean_object* v___x_4962_; 
if (v_isShared_4960_ == 0)
{
v___x_4962_ = v___x_4959_;
goto v_reusejp_4961_;
}
else
{
lean_object* v_reuseFailAlloc_4963_; 
v_reuseFailAlloc_4963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4963_, 0, v_a_4957_);
v___x_4962_ = v_reuseFailAlloc_4963_;
goto v_reusejp_4961_;
}
v_reusejp_4961_:
{
return v___x_4962_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___boxed(lean_object* v_cls_4965_, lean_object* v_msg_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_){
_start:
{
lean_object* v_res_4972_; 
v_res_4972_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(v_cls_4965_, v_msg_4966_, v___y_4967_, v___y_4968_, v___y_4969_, v___y_4970_);
lean_dec(v___y_4970_);
lean_dec_ref(v___y_4969_);
lean_dec(v___y_4968_);
lean_dec_ref(v___y_4967_);
return v_res_4972_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1(lean_object* v_cls_4973_, lean_object* v_msg_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_){
_start:
{
lean_object* v___x_4982_; 
v___x_4982_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(v_cls_4973_, v_msg_4974_, v___y_4977_, v___y_4978_, v___y_4979_, v___y_4980_);
return v___x_4982_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___boxed(lean_object* v_cls_4983_, lean_object* v_msg_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_){
_start:
{
lean_object* v_res_4992_; 
v_res_4992_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1(v_cls_4983_, v_msg_4984_, v___y_4985_, v___y_4986_, v___y_4987_, v___y_4988_, v___y_4989_, v___y_4990_);
lean_dec(v___y_4990_);
lean_dec_ref(v___y_4989_);
lean_dec(v___y_4988_);
lean_dec_ref(v___y_4987_);
lean_dec(v___y_4986_);
lean_dec_ref(v___y_4985_);
return v_res_4992_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0(void){
_start:
{
lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; 
v___x_4993_ = lean_box(0);
v___x_4994_ = lean_unsigned_to_nat(16u);
v___x_4995_ = lean_mk_array(v___x_4994_, v___x_4993_);
return v___x_4995_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; 
v___x_4996_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0);
v___x_4997_ = lean_unsigned_to_nat(0u);
v___x_4998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4998_, 0, v___x_4997_);
lean_ctor_set(v___x_4998_, 1, v___x_4996_);
return v___x_4998_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(size_t v_sz_4999_, size_t v_i_5000_, lean_object* v_bs_5001_){
_start:
{
uint8_t v___x_5002_; 
v___x_5002_ = lean_usize_dec_lt(v_i_5000_, v_sz_4999_);
if (v___x_5002_ == 0)
{
return v_bs_5001_;
}
else
{
lean_object* v___x_5003_; lean_object* v_bs_x27_5004_; lean_object* v___x_5005_; size_t v___x_5006_; size_t v___x_5007_; lean_object* v___x_5008_; 
v___x_5003_ = lean_unsigned_to_nat(0u);
v_bs_x27_5004_ = lean_array_uset(v_bs_5001_, v_i_5000_, v___x_5003_);
v___x_5005_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1);
v___x_5006_ = ((size_t)1ULL);
v___x_5007_ = lean_usize_add(v_i_5000_, v___x_5006_);
v___x_5008_ = lean_array_uset(v_bs_x27_5004_, v_i_5000_, v___x_5005_);
v_i_5000_ = v___x_5007_;
v_bs_5001_ = v___x_5008_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___boxed(lean_object* v_sz_5010_, lean_object* v_i_5011_, lean_object* v_bs_5012_){
_start:
{
size_t v_sz_boxed_5013_; size_t v_i_boxed_5014_; lean_object* v_res_5015_; 
v_sz_boxed_5013_ = lean_unbox_usize(v_sz_5010_);
lean_dec(v_sz_5010_);
v_i_boxed_5014_ = lean_unbox_usize(v_i_5011_);
lean_dec(v_i_5011_);
v_res_5015_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(v_sz_boxed_5013_, v_i_boxed_5014_, v_bs_5012_);
return v_res_5015_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1(void){
_start:
{
lean_object* v___x_5017_; lean_object* v___x_5018_; 
v___x_5017_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__0));
v___x_5018_ = l_Lean_stringToMessageData(v___x_5017_);
return v___x_5018_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3(void){
_start:
{
lean_object* v___x_5020_; lean_object* v___x_5021_; 
v___x_5020_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__2));
v___x_5021_ = l_Lean_stringToMessageData(v___x_5020_);
return v___x_5021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(lean_object* v_n_5022_, lean_object* v_a_5023_, lean_object* v_a_5024_, lean_object* v_a_5025_, lean_object* v_a_5026_, lean_object* v_a_5027_, lean_object* v_a_5028_){
_start:
{
lean_object* v___x_5033_; lean_object* v_decls_5034_; lean_object* v_funVals_5035_; lean_object* v___x_5037_; uint8_t v_isShared_5038_; uint8_t v_isSharedCheck_5080_; 
v___x_5033_ = lean_st_ref_take(v_a_5024_);
v_decls_5034_ = lean_ctor_get(v_a_5023_, 0);
v_funVals_5035_ = lean_ctor_get(v___x_5033_, 1);
v_isSharedCheck_5080_ = !lean_is_exclusive(v___x_5033_);
if (v_isSharedCheck_5080_ == 0)
{
lean_object* v_unused_5081_; 
v_unused_5081_ = lean_ctor_get(v___x_5033_, 0);
lean_dec(v_unused_5081_);
v___x_5037_ = v___x_5033_;
v_isShared_5038_ = v_isSharedCheck_5080_;
goto v_resetjp_5036_;
}
else
{
lean_inc(v_funVals_5035_);
lean_dec(v___x_5033_);
v___x_5037_ = lean_box(0);
v_isShared_5038_ = v_isSharedCheck_5080_;
goto v_resetjp_5036_;
}
v___jp_5030_:
{
lean_object* v___x_5031_; lean_object* v___x_5032_; 
v___x_5031_ = lean_box(0);
v___x_5032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5032_, 0, v___x_5031_);
return v___x_5032_;
}
v_resetjp_5036_:
{
size_t v_sz_5039_; size_t v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5043_; 
v_sz_5039_ = lean_array_size(v_decls_5034_);
v___x_5040_ = ((size_t)0ULL);
lean_inc_ref(v_decls_5034_);
v___x_5041_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(v_sz_5039_, v___x_5040_, v_decls_5034_);
if (v_isShared_5038_ == 0)
{
lean_ctor_set(v___x_5037_, 0, v___x_5041_);
v___x_5043_ = v___x_5037_;
goto v_reusejp_5042_;
}
else
{
lean_object* v_reuseFailAlloc_5079_; 
v_reuseFailAlloc_5079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5079_, 0, v___x_5041_);
lean_ctor_set(v_reuseFailAlloc_5079_, 1, v_funVals_5035_);
v___x_5043_ = v_reuseFailAlloc_5079_;
goto v_reusejp_5042_;
}
v_reusejp_5042_:
{
lean_object* v___x_5044_; lean_object* v___x_5045_; 
v___x_5044_ = lean_st_ref_set(v_a_5024_, v___x_5043_);
v___x_5045_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferStep(v_a_5023_, v_a_5024_, v_a_5025_, v_a_5026_, v_a_5027_, v_a_5028_);
if (lean_obj_tag(v___x_5045_) == 0)
{
lean_object* v_a_5046_; uint8_t v___x_5047_; 
v_a_5046_ = lean_ctor_get(v___x_5045_, 0);
lean_inc(v_a_5046_);
lean_dec_ref(v___x_5045_);
v___x_5047_ = lean_unbox(v_a_5046_);
lean_dec(v_a_5046_);
if (v___x_5047_ == 0)
{
lean_object* v___x_5048_; lean_object* v___x_5049_; 
v___x_5048_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__3));
v___x_5049_ = l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(v___x_5048_, v_a_5027_);
if (lean_obj_tag(v___x_5049_) == 0)
{
lean_object* v_a_5050_; uint8_t v___x_5051_; 
v_a_5050_ = lean_ctor_get(v___x_5049_, 0);
lean_inc(v_a_5050_);
lean_dec_ref(v___x_5049_);
v___x_5051_ = lean_unbox(v_a_5050_);
lean_dec(v_a_5050_);
if (v___x_5051_ == 0)
{
lean_dec(v_n_5022_);
goto v___jp_5030_;
}
else
{
lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v___x_5054_; lean_object* v___x_5055_; lean_object* v___x_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; 
v___x_5052_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1, &l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1);
v___x_5053_ = l_Nat_reprFast(v_n_5022_);
v___x_5054_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5054_, 0, v___x_5053_);
v___x_5055_ = l_Lean_MessageData_ofFormat(v___x_5054_);
v___x_5056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5056_, 0, v___x_5052_);
lean_ctor_set(v___x_5056_, 1, v___x_5055_);
v___x_5057_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3, &l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3);
v___x_5058_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5058_, 0, v___x_5056_);
lean_ctor_set(v___x_5058_, 1, v___x_5057_);
v___x_5059_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(v___x_5048_, v___x_5058_, v_a_5025_, v_a_5026_, v_a_5027_, v_a_5028_);
if (lean_obj_tag(v___x_5059_) == 0)
{
lean_dec_ref(v___x_5059_);
goto v___jp_5030_;
}
else
{
return v___x_5059_;
}
}
}
else
{
lean_object* v_a_5060_; lean_object* v___x_5062_; uint8_t v_isShared_5063_; uint8_t v_isSharedCheck_5067_; 
lean_dec(v_n_5022_);
v_a_5060_ = lean_ctor_get(v___x_5049_, 0);
v_isSharedCheck_5067_ = !lean_is_exclusive(v___x_5049_);
if (v_isSharedCheck_5067_ == 0)
{
v___x_5062_ = v___x_5049_;
v_isShared_5063_ = v_isSharedCheck_5067_;
goto v_resetjp_5061_;
}
else
{
lean_inc(v_a_5060_);
lean_dec(v___x_5049_);
v___x_5062_ = lean_box(0);
v_isShared_5063_ = v_isSharedCheck_5067_;
goto v_resetjp_5061_;
}
v_resetjp_5061_:
{
lean_object* v___x_5065_; 
if (v_isShared_5063_ == 0)
{
v___x_5065_ = v___x_5062_;
goto v_reusejp_5064_;
}
else
{
lean_object* v_reuseFailAlloc_5066_; 
v_reuseFailAlloc_5066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5066_, 0, v_a_5060_);
v___x_5065_ = v_reuseFailAlloc_5066_;
goto v_reusejp_5064_;
}
v_reusejp_5064_:
{
return v___x_5065_;
}
}
}
}
else
{
lean_object* v___x_5068_; lean_object* v___x_5069_; 
v___x_5068_ = lean_unsigned_to_nat(1u);
v___x_5069_ = lean_nat_add(v_n_5022_, v___x_5068_);
lean_dec(v_n_5022_);
v_n_5022_ = v___x_5069_;
goto _start;
}
}
else
{
lean_object* v_a_5071_; lean_object* v___x_5073_; uint8_t v_isShared_5074_; uint8_t v_isSharedCheck_5078_; 
lean_dec(v_n_5022_);
v_a_5071_ = lean_ctor_get(v___x_5045_, 0);
v_isSharedCheck_5078_ = !lean_is_exclusive(v___x_5045_);
if (v_isSharedCheck_5078_ == 0)
{
v___x_5073_ = v___x_5045_;
v_isShared_5074_ = v_isSharedCheck_5078_;
goto v_resetjp_5072_;
}
else
{
lean_inc(v_a_5071_);
lean_dec(v___x_5045_);
v___x_5073_ = lean_box(0);
v_isShared_5074_ = v_isSharedCheck_5078_;
goto v_resetjp_5072_;
}
v_resetjp_5072_:
{
lean_object* v___x_5076_; 
if (v_isShared_5074_ == 0)
{
v___x_5076_ = v___x_5073_;
goto v_reusejp_5075_;
}
else
{
lean_object* v_reuseFailAlloc_5077_; 
v_reuseFailAlloc_5077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5077_, 0, v_a_5071_);
v___x_5076_ = v_reuseFailAlloc_5077_;
goto v_reusejp_5075_;
}
v_reusejp_5075_:
{
return v___x_5076_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___boxed(lean_object* v_n_5082_, lean_object* v_a_5083_, lean_object* v_a_5084_, lean_object* v_a_5085_, lean_object* v_a_5086_, lean_object* v_a_5087_, lean_object* v_a_5088_, lean_object* v_a_5089_){
_start:
{
lean_object* v_res_5090_; 
v_res_5090_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v_n_5082_, v_a_5083_, v_a_5084_, v_a_5085_, v_a_5086_, v_a_5087_, v_a_5088_);
lean_dec(v_a_5088_);
lean_dec_ref(v_a_5087_);
lean_dec(v_a_5086_);
lean_dec_ref(v_a_5085_);
lean_dec(v_a_5084_);
lean_dec_ref(v_a_5083_);
return v_res_5090_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0(void){
_start:
{
uint8_t v___x_5091_; lean_object* v___x_5092_; 
v___x_5091_ = 0;
v___x_5092_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1(v___x_5091_);
return v___x_5092_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0(lean_object* v_msg_5093_){
_start:
{
lean_object* v___x_5094_; lean_object* v___x_5095_; 
v___x_5094_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0);
v___x_5095_ = lean_panic_fn_borrowed(v___x_5094_, v_msg_5093_);
return v___x_5095_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___redArg(lean_object* v_cls_5096_, lean_object* v___y_5097_){
_start:
{
lean_object* v_options_5099_; uint8_t v_hasTrace_5100_; 
v_options_5099_ = lean_ctor_get(v___y_5097_, 2);
v_hasTrace_5100_ = lean_ctor_get_uint8(v_options_5099_, sizeof(void*)*1);
if (v_hasTrace_5100_ == 0)
{
lean_object* v___x_5101_; lean_object* v___x_5102_; 
lean_dec(v_cls_5096_);
v___x_5101_ = lean_box(v_hasTrace_5100_);
v___x_5102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5102_, 0, v___x_5101_);
return v___x_5102_;
}
else
{
lean_object* v_inheritedTraceOptions_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; uint8_t v___x_5106_; lean_object* v___x_5107_; lean_object* v___x_5108_; 
v_inheritedTraceOptions_5103_ = lean_ctor_get(v___y_5097_, 13);
v___x_5104_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1));
v___x_5105_ = l_Lean_Name_append(v___x_5104_, v_cls_5096_);
v___x_5106_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5103_, v_options_5099_, v___x_5105_);
lean_dec(v___x_5105_);
v___x_5107_ = lean_box(v___x_5106_);
v___x_5108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5108_, 0, v___x_5107_);
return v___x_5108_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___redArg___boxed(lean_object* v_cls_5109_, lean_object* v___y_5110_, lean_object* v___y_5111_){
_start:
{
lean_object* v_res_5112_; 
v_res_5112_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___redArg(v_cls_5109_, v___y_5110_);
lean_dec_ref(v___y_5110_);
return v_res_5112_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2(lean_object* v_cls_5113_, lean_object* v___y_5114_, lean_object* v___y_5115_, lean_object* v___y_5116_, lean_object* v___y_5117_){
_start:
{
lean_object* v___x_5119_; 
v___x_5119_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___redArg(v_cls_5113_, v___y_5116_);
return v___x_5119_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___boxed(lean_object* v_cls_5120_, lean_object* v___y_5121_, lean_object* v___y_5122_, lean_object* v___y_5123_, lean_object* v___y_5124_, lean_object* v___y_5125_){
_start:
{
lean_object* v_res_5126_; 
v_res_5126_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2(v_cls_5120_, v___y_5121_, v___y_5122_, v___y_5123_, v___y_5124_);
lean_dec(v___y_5124_);
lean_dec_ref(v___y_5123_);
lean_dec(v___y_5122_);
lean_dec_ref(v___y_5121_);
return v_res_5126_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3(lean_object* v_cls_5127_, lean_object* v_msg_5128_, lean_object* v___y_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_, lean_object* v___y_5132_){
_start:
{
lean_object* v_options_5134_; lean_object* v_ref_5135_; lean_object* v___x_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; 
v_options_5134_ = lean_ctor_get(v___y_5131_, 2);
v_ref_5135_ = lean_ctor_get(v___y_5131_, 5);
v___x_5136_ = lean_st_ref_get(v___y_5132_);
v___x_5137_ = lean_st_ref_get(v___y_5130_);
v___x_5138_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_5129_);
if (lean_obj_tag(v___x_5138_) == 0)
{
lean_object* v_a_5139_; lean_object* v___x_5141_; uint8_t v_isShared_5142_; uint8_t v_isSharedCheck_5197_; 
v_a_5139_ = lean_ctor_get(v___x_5138_, 0);
v_isSharedCheck_5197_ = !lean_is_exclusive(v___x_5138_);
if (v_isSharedCheck_5197_ == 0)
{
v___x_5141_ = v___x_5138_;
v_isShared_5142_ = v_isSharedCheck_5197_;
goto v_resetjp_5140_;
}
else
{
lean_inc(v_a_5139_);
lean_dec(v___x_5138_);
v___x_5141_ = lean_box(0);
v_isShared_5142_ = v_isSharedCheck_5197_;
goto v_resetjp_5140_;
}
v_resetjp_5140_:
{
lean_object* v_env_5143_; lean_object* v_lctx_5144_; lean_object* v___x_5146_; uint8_t v_isShared_5147_; uint8_t v_isSharedCheck_5195_; 
v_env_5143_ = lean_ctor_get(v___x_5136_, 0);
lean_inc_ref(v_env_5143_);
lean_dec(v___x_5136_);
v_lctx_5144_ = lean_ctor_get(v___x_5137_, 0);
v_isSharedCheck_5195_ = !lean_is_exclusive(v___x_5137_);
if (v_isSharedCheck_5195_ == 0)
{
lean_object* v_unused_5196_; 
v_unused_5196_ = lean_ctor_get(v___x_5137_, 1);
lean_dec(v_unused_5196_);
v___x_5146_ = v___x_5137_;
v_isShared_5147_ = v_isSharedCheck_5195_;
goto v_resetjp_5145_;
}
else
{
lean_inc(v_lctx_5144_);
lean_dec(v___x_5137_);
v___x_5146_ = lean_box(0);
v_isShared_5147_ = v_isSharedCheck_5195_;
goto v_resetjp_5145_;
}
v_resetjp_5145_:
{
lean_object* v___x_5148_; lean_object* v___x_5149_; lean_object* v_traceState_5150_; lean_object* v_env_5151_; lean_object* v_nextMacroScope_5152_; lean_object* v_ngen_5153_; lean_object* v_auxDeclNGen_5154_; lean_object* v_cache_5155_; lean_object* v_messages_5156_; lean_object* v_infoState_5157_; lean_object* v_snapshotTasks_5158_; lean_object* v___x_5160_; uint8_t v_isShared_5161_; uint8_t v_isSharedCheck_5194_; 
v___x_5148_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__2, &l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3_spec__4___redArg___closed__2);
v___x_5149_ = lean_st_ref_take(v___y_5132_);
v_traceState_5150_ = lean_ctor_get(v___x_5149_, 4);
v_env_5151_ = lean_ctor_get(v___x_5149_, 0);
v_nextMacroScope_5152_ = lean_ctor_get(v___x_5149_, 1);
v_ngen_5153_ = lean_ctor_get(v___x_5149_, 2);
v_auxDeclNGen_5154_ = lean_ctor_get(v___x_5149_, 3);
v_cache_5155_ = lean_ctor_get(v___x_5149_, 5);
v_messages_5156_ = lean_ctor_get(v___x_5149_, 6);
v_infoState_5157_ = lean_ctor_get(v___x_5149_, 7);
v_snapshotTasks_5158_ = lean_ctor_get(v___x_5149_, 8);
v_isSharedCheck_5194_ = !lean_is_exclusive(v___x_5149_);
if (v_isSharedCheck_5194_ == 0)
{
v___x_5160_ = v___x_5149_;
v_isShared_5161_ = v_isSharedCheck_5194_;
goto v_resetjp_5159_;
}
else
{
lean_inc(v_snapshotTasks_5158_);
lean_inc(v_infoState_5157_);
lean_inc(v_messages_5156_);
lean_inc(v_cache_5155_);
lean_inc(v_traceState_5150_);
lean_inc(v_auxDeclNGen_5154_);
lean_inc(v_ngen_5153_);
lean_inc(v_nextMacroScope_5152_);
lean_inc(v_env_5151_);
lean_dec(v___x_5149_);
v___x_5160_ = lean_box(0);
v_isShared_5161_ = v_isSharedCheck_5194_;
goto v_resetjp_5159_;
}
v_resetjp_5159_:
{
uint64_t v_tid_5162_; lean_object* v_traces_5163_; lean_object* v___x_5165_; uint8_t v_isShared_5166_; uint8_t v_isSharedCheck_5193_; 
v_tid_5162_ = lean_ctor_get_uint64(v_traceState_5150_, sizeof(void*)*1);
v_traces_5163_ = lean_ctor_get(v_traceState_5150_, 0);
v_isSharedCheck_5193_ = !lean_is_exclusive(v_traceState_5150_);
if (v_isSharedCheck_5193_ == 0)
{
v___x_5165_ = v_traceState_5150_;
v_isShared_5166_ = v_isSharedCheck_5193_;
goto v_resetjp_5164_;
}
else
{
lean_inc(v_traces_5163_);
lean_dec(v_traceState_5150_);
v___x_5165_ = lean_box(0);
v_isShared_5166_ = v_isSharedCheck_5193_;
goto v_resetjp_5164_;
}
v_resetjp_5164_:
{
uint8_t v___x_5167_; lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5171_; 
v___x_5167_ = lean_unbox(v_a_5139_);
lean_dec(v_a_5139_);
v___x_5168_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_5144_, v___x_5167_);
lean_dec_ref(v_lctx_5144_);
lean_inc_ref(v_options_5134_);
v___x_5169_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5169_, 0, v_env_5143_);
lean_ctor_set(v___x_5169_, 1, v___x_5148_);
lean_ctor_set(v___x_5169_, 2, v___x_5168_);
lean_ctor_set(v___x_5169_, 3, v_options_5134_);
if (v_isShared_5147_ == 0)
{
lean_ctor_set_tag(v___x_5146_, 3);
lean_ctor_set(v___x_5146_, 1, v_msg_5128_);
lean_ctor_set(v___x_5146_, 0, v___x_5169_);
v___x_5171_ = v___x_5146_;
goto v_reusejp_5170_;
}
else
{
lean_object* v_reuseFailAlloc_5192_; 
v_reuseFailAlloc_5192_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5192_, 0, v___x_5169_);
lean_ctor_set(v_reuseFailAlloc_5192_, 1, v_msg_5128_);
v___x_5171_ = v_reuseFailAlloc_5192_;
goto v_reusejp_5170_;
}
v_reusejp_5170_:
{
lean_object* v___x_5172_; double v___x_5173_; uint8_t v___x_5174_; lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; lean_object* v___x_5182_; 
v___x_5172_ = lean_box(0);
v___x_5173_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___closed__1);
v___x_5174_ = 0;
v___x_5175_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__4));
v___x_5176_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_5176_, 0, v_cls_5127_);
lean_ctor_set(v___x_5176_, 1, v___x_5172_);
lean_ctor_set(v___x_5176_, 2, v___x_5175_);
lean_ctor_set_float(v___x_5176_, sizeof(void*)*3, v___x_5173_);
lean_ctor_set_float(v___x_5176_, sizeof(void*)*3 + 8, v___x_5173_);
lean_ctor_set_uint8(v___x_5176_, sizeof(void*)*3 + 16, v___x_5174_);
v___x_5177_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0));
v___x_5178_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_5178_, 0, v___x_5176_);
lean_ctor_set(v___x_5178_, 1, v___x_5171_);
lean_ctor_set(v___x_5178_, 2, v___x_5177_);
lean_inc(v_ref_5135_);
v___x_5179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5179_, 0, v_ref_5135_);
lean_ctor_set(v___x_5179_, 1, v___x_5178_);
v___x_5180_ = l_Lean_PersistentArray_push___redArg(v_traces_5163_, v___x_5179_);
if (v_isShared_5166_ == 0)
{
lean_ctor_set(v___x_5165_, 0, v___x_5180_);
v___x_5182_ = v___x_5165_;
goto v_reusejp_5181_;
}
else
{
lean_object* v_reuseFailAlloc_5191_; 
v_reuseFailAlloc_5191_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5191_, 0, v___x_5180_);
lean_ctor_set_uint64(v_reuseFailAlloc_5191_, sizeof(void*)*1, v_tid_5162_);
v___x_5182_ = v_reuseFailAlloc_5191_;
goto v_reusejp_5181_;
}
v_reusejp_5181_:
{
lean_object* v___x_5184_; 
if (v_isShared_5161_ == 0)
{
lean_ctor_set(v___x_5160_, 4, v___x_5182_);
v___x_5184_ = v___x_5160_;
goto v_reusejp_5183_;
}
else
{
lean_object* v_reuseFailAlloc_5190_; 
v_reuseFailAlloc_5190_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5190_, 0, v_env_5151_);
lean_ctor_set(v_reuseFailAlloc_5190_, 1, v_nextMacroScope_5152_);
lean_ctor_set(v_reuseFailAlloc_5190_, 2, v_ngen_5153_);
lean_ctor_set(v_reuseFailAlloc_5190_, 3, v_auxDeclNGen_5154_);
lean_ctor_set(v_reuseFailAlloc_5190_, 4, v___x_5182_);
lean_ctor_set(v_reuseFailAlloc_5190_, 5, v_cache_5155_);
lean_ctor_set(v_reuseFailAlloc_5190_, 6, v_messages_5156_);
lean_ctor_set(v_reuseFailAlloc_5190_, 7, v_infoState_5157_);
lean_ctor_set(v_reuseFailAlloc_5190_, 8, v_snapshotTasks_5158_);
v___x_5184_ = v_reuseFailAlloc_5190_;
goto v_reusejp_5183_;
}
v_reusejp_5183_:
{
lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5188_; 
v___x_5185_ = lean_st_ref_set(v___y_5132_, v___x_5184_);
v___x_5186_ = lean_box(0);
if (v_isShared_5142_ == 0)
{
lean_ctor_set(v___x_5141_, 0, v___x_5186_);
v___x_5188_ = v___x_5141_;
goto v_reusejp_5187_;
}
else
{
lean_object* v_reuseFailAlloc_5189_; 
v_reuseFailAlloc_5189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5189_, 0, v___x_5186_);
v___x_5188_ = v_reuseFailAlloc_5189_;
goto v_reusejp_5187_;
}
v_reusejp_5187_:
{
return v___x_5188_;
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
lean_object* v_a_5198_; lean_object* v___x_5200_; uint8_t v_isShared_5201_; uint8_t v_isSharedCheck_5205_; 
lean_dec(v___x_5137_);
lean_dec(v___x_5136_);
lean_dec_ref(v_msg_5128_);
lean_dec(v_cls_5127_);
v_a_5198_ = lean_ctor_get(v___x_5138_, 0);
v_isSharedCheck_5205_ = !lean_is_exclusive(v___x_5138_);
if (v_isSharedCheck_5205_ == 0)
{
v___x_5200_ = v___x_5138_;
v_isShared_5201_ = v_isSharedCheck_5205_;
goto v_resetjp_5199_;
}
else
{
lean_inc(v_a_5198_);
lean_dec(v___x_5138_);
v___x_5200_ = lean_box(0);
v_isShared_5201_ = v_isSharedCheck_5205_;
goto v_resetjp_5199_;
}
v_resetjp_5199_:
{
lean_object* v___x_5203_; 
if (v_isShared_5201_ == 0)
{
v___x_5203_ = v___x_5200_;
goto v_reusejp_5202_;
}
else
{
lean_object* v_reuseFailAlloc_5204_; 
v_reuseFailAlloc_5204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5204_, 0, v_a_5198_);
v___x_5203_ = v_reuseFailAlloc_5204_;
goto v_reusejp_5202_;
}
v_reusejp_5202_:
{
return v___x_5203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___boxed(lean_object* v_cls_5206_, lean_object* v_msg_5207_, lean_object* v___y_5208_, lean_object* v___y_5209_, lean_object* v___y_5210_, lean_object* v___y_5211_, lean_object* v___y_5212_){
_start:
{
lean_object* v_res_5213_; 
v_res_5213_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3(v_cls_5206_, v_msg_5207_, v___y_5208_, v___y_5209_, v___y_5210_, v___y_5211_);
lean_dec(v___y_5211_);
lean_dec_ref(v___y_5210_);
lean_dec(v___y_5209_);
lean_dec_ref(v___y_5208_);
return v_res_5213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___redArg(lean_object* v_as_5214_, size_t v_i_5215_, size_t v_stop_5216_, lean_object* v_b_5217_){
_start:
{
uint8_t v___x_5219_; 
v___x_5219_ = lean_usize_dec_eq(v_i_5215_, v_stop_5216_);
if (v___x_5219_ == 0)
{
lean_object* v_fst_5220_; lean_object* v_snd_5221_; lean_object* v___x_5222_; lean_object* v_snd_5223_; lean_object* v_fst_5224_; lean_object* v_fst_5225_; lean_object* v_snd_5226_; lean_object* v___x_5228_; uint8_t v_isShared_5229_; uint8_t v_isSharedCheck_5241_; 
v_fst_5220_ = lean_ctor_get(v_b_5217_, 0);
lean_inc(v_fst_5220_);
v_snd_5221_ = lean_ctor_get(v_b_5217_, 1);
lean_inc(v_snd_5221_);
lean_dec_ref(v_b_5217_);
v___x_5222_ = lean_array_uget_borrowed(v_as_5214_, v_i_5215_);
v_snd_5223_ = lean_ctor_get(v___x_5222_, 1);
lean_inc(v_snd_5223_);
v_fst_5224_ = lean_ctor_get(v___x_5222_, 0);
v_fst_5225_ = lean_ctor_get(v_snd_5223_, 0);
v_snd_5226_ = lean_ctor_get(v_snd_5223_, 1);
v_isSharedCheck_5241_ = !lean_is_exclusive(v_snd_5223_);
if (v_isSharedCheck_5241_ == 0)
{
v___x_5228_ = v_snd_5223_;
v_isShared_5229_ = v_isSharedCheck_5241_;
goto v_resetjp_5227_;
}
else
{
lean_inc(v_snd_5226_);
lean_inc(v_fst_5225_);
lean_dec(v_snd_5223_);
v___x_5228_ = lean_box(0);
v_isShared_5229_ = v_isSharedCheck_5241_;
goto v_resetjp_5227_;
}
v_resetjp_5227_:
{
lean_object* v_fvarId_5230_; uint8_t v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5236_; 
v_fvarId_5230_ = lean_ctor_get(v_fst_5224_, 0);
v___x_5231_ = 0;
v___x_5232_ = l_Lean_Compiler_LCNF_attachCodeDecls(v___x_5231_, v_fst_5225_, v_fst_5220_);
lean_dec(v_fst_5225_);
v___x_5233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5233_, 0, v_snd_5226_);
lean_inc(v_fvarId_5230_);
v___x_5234_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_snd_5221_, v_fvarId_5230_, v___x_5233_);
if (v_isShared_5229_ == 0)
{
lean_ctor_set(v___x_5228_, 1, v___x_5234_);
lean_ctor_set(v___x_5228_, 0, v___x_5232_);
v___x_5236_ = v___x_5228_;
goto v_reusejp_5235_;
}
else
{
lean_object* v_reuseFailAlloc_5240_; 
v_reuseFailAlloc_5240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5240_, 0, v___x_5232_);
lean_ctor_set(v_reuseFailAlloc_5240_, 1, v___x_5234_);
v___x_5236_ = v_reuseFailAlloc_5240_;
goto v_reusejp_5235_;
}
v_reusejp_5235_:
{
size_t v___x_5237_; size_t v___x_5238_; 
v___x_5237_ = ((size_t)1ULL);
v___x_5238_ = lean_usize_add(v_i_5215_, v___x_5237_);
v_i_5215_ = v___x_5238_;
v_b_5217_ = v___x_5236_;
goto _start;
}
}
}
else
{
lean_object* v___x_5242_; 
v___x_5242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5242_, 0, v_b_5217_);
return v___x_5242_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___redArg___boxed(lean_object* v_as_5243_, lean_object* v_i_5244_, lean_object* v_stop_5245_, lean_object* v_b_5246_, lean_object* v___y_5247_){
_start:
{
size_t v_i_boxed_5248_; size_t v_stop_boxed_5249_; lean_object* v_res_5250_; 
v_i_boxed_5248_ = lean_unbox_usize(v_i_5244_);
lean_dec(v_i_5244_);
v_stop_boxed_5249_ = lean_unbox_usize(v_stop_5245_);
lean_dec(v_stop_5245_);
v_res_5250_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___redArg(v_as_5243_, v_i_boxed_5248_, v_stop_boxed_5249_, v_b_5246_);
lean_dec_ref(v_as_5243_);
return v_res_5250_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(lean_object* v_a_5251_, lean_object* v_x_5252_){
_start:
{
if (lean_obj_tag(v_x_5252_) == 0)
{
lean_object* v___x_5253_; 
v___x_5253_ = lean_box(0);
return v___x_5253_;
}
else
{
lean_object* v_key_5254_; lean_object* v_value_5255_; lean_object* v_tail_5256_; uint8_t v___x_5257_; 
v_key_5254_ = lean_ctor_get(v_x_5252_, 0);
v_value_5255_ = lean_ctor_get(v_x_5252_, 1);
v_tail_5256_ = lean_ctor_get(v_x_5252_, 2);
v___x_5257_ = l_Lean_instBEqFVarId_beq(v_key_5254_, v_a_5251_);
if (v___x_5257_ == 0)
{
v_x_5252_ = v_tail_5256_;
goto _start;
}
else
{
lean_object* v___x_5259_; 
lean_inc(v_value_5255_);
v___x_5259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5259_, 0, v_value_5255_);
return v___x_5259_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg___boxed(lean_object* v_a_5260_, lean_object* v_x_5261_){
_start:
{
lean_object* v_res_5262_; 
v_res_5262_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(v_a_5260_, v_x_5261_);
lean_dec(v_x_5261_);
lean_dec(v_a_5260_);
return v_res_5262_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(lean_object* v_m_5263_, lean_object* v_a_5264_){
_start:
{
lean_object* v_buckets_5265_; lean_object* v___x_5266_; uint64_t v___x_5267_; uint64_t v___x_5268_; uint64_t v___x_5269_; uint64_t v_fold_5270_; uint64_t v___x_5271_; uint64_t v___x_5272_; uint64_t v___x_5273_; size_t v___x_5274_; size_t v___x_5275_; size_t v___x_5276_; size_t v___x_5277_; size_t v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; 
v_buckets_5265_ = lean_ctor_get(v_m_5263_, 1);
v___x_5266_ = lean_array_get_size(v_buckets_5265_);
v___x_5267_ = l_Lean_instHashableFVarId_hash(v_a_5264_);
v___x_5268_ = 32ULL;
v___x_5269_ = lean_uint64_shift_right(v___x_5267_, v___x_5268_);
v_fold_5270_ = lean_uint64_xor(v___x_5267_, v___x_5269_);
v___x_5271_ = 16ULL;
v___x_5272_ = lean_uint64_shift_right(v_fold_5270_, v___x_5271_);
v___x_5273_ = lean_uint64_xor(v_fold_5270_, v___x_5272_);
v___x_5274_ = lean_uint64_to_usize(v___x_5273_);
v___x_5275_ = lean_usize_of_nat(v___x_5266_);
v___x_5276_ = ((size_t)1ULL);
v___x_5277_ = lean_usize_sub(v___x_5275_, v___x_5276_);
v___x_5278_ = lean_usize_land(v___x_5274_, v___x_5277_);
v___x_5279_ = lean_array_uget_borrowed(v_buckets_5265_, v___x_5278_);
v___x_5280_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(v_a_5264_, v___x_5279_);
return v___x_5280_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg___boxed(lean_object* v_m_5281_, lean_object* v_a_5282_){
_start:
{
lean_object* v_res_5283_; 
v_res_5283_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(v_m_5281_, v_a_5282_);
lean_dec(v_a_5282_);
lean_dec_ref(v_m_5281_);
return v_res_5283_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4_spec__5(lean_object* v_assignment_5284_, lean_object* v_as_5285_, size_t v_i_5286_, size_t v_stop_5287_, lean_object* v_b_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_){
_start:
{
lean_object* v_a_5295_; uint8_t v___x_5299_; 
v___x_5299_ = lean_usize_dec_eq(v_i_5286_, v_stop_5287_);
if (v___x_5299_ == 0)
{
lean_object* v___x_5300_; lean_object* v_fvarId_5301_; lean_object* v___x_5302_; 
v___x_5300_ = lean_array_uget_borrowed(v_as_5285_, v_i_5286_);
v_fvarId_5301_ = lean_ctor_get(v___x_5300_, 0);
v___x_5302_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(v_assignment_5284_, v_fvarId_5301_);
if (lean_obj_tag(v___x_5302_) == 1)
{
lean_object* v_val_5303_; lean_object* v___x_5304_; 
v_val_5303_ = lean_ctor_get(v___x_5302_, 0);
lean_inc(v_val_5303_);
lean_dec_ref(v___x_5302_);
v___x_5304_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral(v_val_5303_, v___y_5289_, v___y_5290_, v___y_5291_, v___y_5292_);
if (lean_obj_tag(v___x_5304_) == 0)
{
lean_object* v_a_5305_; 
v_a_5305_ = lean_ctor_get(v___x_5304_, 0);
lean_inc(v_a_5305_);
lean_dec_ref(v___x_5304_);
if (lean_obj_tag(v_a_5305_) == 1)
{
lean_object* v_val_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; 
v_val_5306_ = lean_ctor_get(v_a_5305_, 0);
lean_inc(v_val_5306_);
lean_dec_ref(v_a_5305_);
lean_inc(v___x_5300_);
v___x_5307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5307_, 0, v___x_5300_);
lean_ctor_set(v___x_5307_, 1, v_val_5306_);
v___x_5308_ = lean_array_push(v_b_5288_, v___x_5307_);
v_a_5295_ = v___x_5308_;
goto v___jp_5294_;
}
else
{
lean_dec(v_a_5305_);
v_a_5295_ = v_b_5288_;
goto v___jp_5294_;
}
}
else
{
lean_object* v_a_5309_; lean_object* v___x_5311_; uint8_t v_isShared_5312_; uint8_t v_isSharedCheck_5316_; 
lean_dec_ref(v_b_5288_);
v_a_5309_ = lean_ctor_get(v___x_5304_, 0);
v_isSharedCheck_5316_ = !lean_is_exclusive(v___x_5304_);
if (v_isSharedCheck_5316_ == 0)
{
v___x_5311_ = v___x_5304_;
v_isShared_5312_ = v_isSharedCheck_5316_;
goto v_resetjp_5310_;
}
else
{
lean_inc(v_a_5309_);
lean_dec(v___x_5304_);
v___x_5311_ = lean_box(0);
v_isShared_5312_ = v_isSharedCheck_5316_;
goto v_resetjp_5310_;
}
v_resetjp_5310_:
{
lean_object* v___x_5314_; 
if (v_isShared_5312_ == 0)
{
v___x_5314_ = v___x_5311_;
goto v_reusejp_5313_;
}
else
{
lean_object* v_reuseFailAlloc_5315_; 
v_reuseFailAlloc_5315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5315_, 0, v_a_5309_);
v___x_5314_ = v_reuseFailAlloc_5315_;
goto v_reusejp_5313_;
}
v_reusejp_5313_:
{
return v___x_5314_;
}
}
}
}
else
{
lean_dec(v___x_5302_);
v_a_5295_ = v_b_5288_;
goto v___jp_5294_;
}
}
else
{
lean_object* v___x_5317_; 
v___x_5317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5317_, 0, v_b_5288_);
return v___x_5317_;
}
v___jp_5294_:
{
size_t v___x_5296_; size_t v___x_5297_; 
v___x_5296_ = ((size_t)1ULL);
v___x_5297_ = lean_usize_add(v_i_5286_, v___x_5296_);
v_i_5286_ = v___x_5297_;
v_b_5288_ = v_a_5295_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4_spec__5___boxed(lean_object* v_assignment_5318_, lean_object* v_as_5319_, lean_object* v_i_5320_, lean_object* v_stop_5321_, lean_object* v_b_5322_, lean_object* v___y_5323_, lean_object* v___y_5324_, lean_object* v___y_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_){
_start:
{
size_t v_i_boxed_5328_; size_t v_stop_boxed_5329_; lean_object* v_res_5330_; 
v_i_boxed_5328_ = lean_unbox_usize(v_i_5320_);
lean_dec(v_i_5320_);
v_stop_boxed_5329_ = lean_unbox_usize(v_stop_5321_);
lean_dec(v_stop_5321_);
v_res_5330_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4_spec__5(v_assignment_5318_, v_as_5319_, v_i_boxed_5328_, v_stop_boxed_5329_, v_b_5322_, v___y_5323_, v___y_5324_, v___y_5325_, v___y_5326_);
lean_dec(v___y_5326_);
lean_dec_ref(v___y_5325_);
lean_dec(v___y_5324_);
lean_dec_ref(v___y_5323_);
lean_dec_ref(v_as_5319_);
lean_dec_ref(v_assignment_5318_);
return v_res_5330_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4(lean_object* v_assignment_5333_, lean_object* v_as_5334_, lean_object* v_start_5335_, lean_object* v_stop_5336_, lean_object* v___y_5337_, lean_object* v___y_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_){
_start:
{
lean_object* v___x_5342_; uint8_t v___x_5343_; 
v___x_5342_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___closed__0));
v___x_5343_ = lean_nat_dec_lt(v_start_5335_, v_stop_5336_);
if (v___x_5343_ == 0)
{
lean_object* v___x_5344_; 
v___x_5344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5344_, 0, v___x_5342_);
return v___x_5344_;
}
else
{
lean_object* v___x_5345_; uint8_t v___x_5346_; 
v___x_5345_ = lean_array_get_size(v_as_5334_);
v___x_5346_ = lean_nat_dec_le(v_stop_5336_, v___x_5345_);
if (v___x_5346_ == 0)
{
uint8_t v___x_5347_; 
v___x_5347_ = lean_nat_dec_lt(v_start_5335_, v___x_5345_);
if (v___x_5347_ == 0)
{
lean_object* v___x_5348_; 
v___x_5348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5348_, 0, v___x_5342_);
return v___x_5348_;
}
else
{
size_t v___x_5349_; size_t v___x_5350_; lean_object* v___x_5351_; 
v___x_5349_ = lean_usize_of_nat(v_start_5335_);
v___x_5350_ = lean_usize_of_nat(v___x_5345_);
v___x_5351_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4_spec__5(v_assignment_5333_, v_as_5334_, v___x_5349_, v___x_5350_, v___x_5342_, v___y_5337_, v___y_5338_, v___y_5339_, v___y_5340_);
return v___x_5351_;
}
}
else
{
size_t v___x_5352_; size_t v___x_5353_; lean_object* v___x_5354_; 
v___x_5352_ = lean_usize_of_nat(v_start_5335_);
v___x_5353_ = lean_usize_of_nat(v_stop_5336_);
v___x_5354_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4_spec__5(v_assignment_5333_, v_as_5334_, v___x_5352_, v___x_5353_, v___x_5342_, v___y_5337_, v___y_5338_, v___y_5339_, v___y_5340_);
return v___x_5354_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___boxed(lean_object* v_assignment_5355_, lean_object* v_as_5356_, lean_object* v_start_5357_, lean_object* v_stop_5358_, lean_object* v___y_5359_, lean_object* v___y_5360_, lean_object* v___y_5361_, lean_object* v___y_5362_, lean_object* v___y_5363_){
_start:
{
lean_object* v_res_5364_; 
v_res_5364_ = l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4(v_assignment_5355_, v_as_5356_, v_start_5357_, v_stop_5358_, v___y_5359_, v___y_5360_, v___y_5361_, v___y_5362_);
lean_dec(v___y_5362_);
lean_dec_ref(v___y_5361_);
lean_dec(v___y_5360_);
lean_dec_ref(v___y_5359_);
lean_dec(v_stop_5358_);
lean_dec(v_start_5357_);
lean_dec_ref(v_as_5356_);
lean_dec_ref(v_assignment_5355_);
return v_res_5364_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2(void){
_start:
{
lean_object* v___x_5367_; lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; 
v___x_5367_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_5368_ = lean_unsigned_to_nat(9u);
v___x_5369_ = lean_unsigned_to_nat(640u);
v___x_5370_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__1));
v___x_5371_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__0));
v___x_5372_ = l_mkPanicMessageWithDecl(v___x_5371_, v___x_5370_, v___x_5369_, v___x_5368_, v___x_5367_);
return v___x_5372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6(lean_object* v_resultType_5375_, lean_object* v_discrVal_5376_, lean_object* v_discr_5377_, lean_object* v_assignment_5378_, lean_object* v_i_5379_, lean_object* v_as_5380_, lean_object* v___y_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_, lean_object* v___y_5384_){
_start:
{
lean_object* v___x_5386_; uint8_t v___x_5387_; 
v___x_5386_ = lean_array_get_size(v_as_5380_);
v___x_5387_ = lean_nat_dec_lt(v_i_5379_, v___x_5386_);
if (v___x_5387_ == 0)
{
lean_object* v___x_5388_; 
lean_dec(v_i_5379_);
lean_dec(v_discr_5377_);
lean_dec(v_discrVal_5376_);
lean_dec_ref(v_resultType_5375_);
v___x_5388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5388_, 0, v_as_5380_);
return v___x_5388_;
}
else
{
lean_object* v_a_5389_; lean_object* v_a_5391_; 
v_a_5389_ = lean_array_fget_borrowed(v_as_5380_, v_i_5379_);
if (lean_obj_tag(v_a_5389_) == 0)
{
lean_object* v_ctorName_5402_; lean_object* v_params_5403_; lean_object* v_code_5404_; uint8_t v___x_5405_; lean_object* v___y_5407_; lean_object* v___y_5408_; lean_object* v___y_5421_; uint8_t v___x_5425_; 
v_ctorName_5402_ = lean_ctor_get(v_a_5389_, 0);
v_params_5403_ = lean_ctor_get(v_a_5389_, 1);
v_code_5404_ = lean_ctor_get(v_a_5389_, 2);
v___x_5405_ = 0;
lean_inc(v_ctorName_5402_);
lean_inc(v_discrVal_5376_);
v___x_5425_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(v_discrVal_5376_, v_ctorName_5402_);
if (v___x_5425_ == 0)
{
lean_object* v_cls_5426_; lean_object* v___x_5427_; 
v_cls_5426_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__3));
v___x_5427_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___redArg(v_cls_5426_, v___y_5383_);
if (lean_obj_tag(v___x_5427_) == 0)
{
lean_object* v_a_5428_; uint8_t v___x_5429_; 
v_a_5428_ = lean_ctor_get(v___x_5427_, 0);
lean_inc(v_a_5428_);
lean_dec_ref(v___x_5427_);
v___x_5429_ = lean_unbox(v_a_5428_);
if (v___x_5429_ == 0)
{
lean_dec(v_a_5428_);
v___y_5421_ = v___y_5382_;
goto v___jp_5420_;
}
else
{
lean_object* v___x_5430_; 
lean_inc(v_discr_5377_);
v___x_5430_ = l_Lean_Compiler_LCNF_getBinderName(v_discr_5377_, v___y_5381_, v___y_5382_, v___y_5383_, v___y_5384_);
if (lean_obj_tag(v___x_5430_) == 0)
{
lean_object* v_a_5431_; lean_object* v___x_5432_; uint8_t v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; uint8_t v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; 
v_a_5431_ = lean_ctor_get(v___x_5430_, 0);
lean_inc(v_a_5431_);
lean_dec_ref(v___x_5430_);
v___x_5432_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6___closed__0));
v___x_5433_ = lean_unbox(v_a_5428_);
v___x_5434_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_5431_, v___x_5433_);
v___x_5435_ = lean_string_append(v___x_5432_, v___x_5434_);
lean_dec_ref(v___x_5434_);
v___x_5436_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6___closed__1));
v___x_5437_ = lean_string_append(v___x_5435_, v___x_5436_);
v___x_5438_ = lean_unbox(v_a_5428_);
lean_dec(v_a_5428_);
lean_inc(v_ctorName_5402_);
v___x_5439_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_ctorName_5402_, v___x_5438_);
v___x_5440_ = lean_string_append(v___x_5437_, v___x_5439_);
lean_dec_ref(v___x_5439_);
v___x_5441_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5441_, 0, v___x_5440_);
v___x_5442_ = l_Lean_MessageData_ofFormat(v___x_5441_);
v___x_5443_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3(v_cls_5426_, v___x_5442_, v___y_5381_, v___y_5382_, v___y_5383_, v___y_5384_);
if (lean_obj_tag(v___x_5443_) == 0)
{
lean_dec_ref(v___x_5443_);
v___y_5421_ = v___y_5382_;
goto v___jp_5420_;
}
else
{
lean_object* v_a_5444_; lean_object* v___x_5446_; uint8_t v_isShared_5447_; uint8_t v_isSharedCheck_5451_; 
lean_dec_ref(v_as_5380_);
lean_dec(v_i_5379_);
lean_dec(v_discr_5377_);
lean_dec(v_discrVal_5376_);
lean_dec_ref(v_resultType_5375_);
v_a_5444_ = lean_ctor_get(v___x_5443_, 0);
v_isSharedCheck_5451_ = !lean_is_exclusive(v___x_5443_);
if (v_isSharedCheck_5451_ == 0)
{
v___x_5446_ = v___x_5443_;
v_isShared_5447_ = v_isSharedCheck_5451_;
goto v_resetjp_5445_;
}
else
{
lean_inc(v_a_5444_);
lean_dec(v___x_5443_);
v___x_5446_ = lean_box(0);
v_isShared_5447_ = v_isSharedCheck_5451_;
goto v_resetjp_5445_;
}
v_resetjp_5445_:
{
lean_object* v___x_5449_; 
if (v_isShared_5447_ == 0)
{
v___x_5449_ = v___x_5446_;
goto v_reusejp_5448_;
}
else
{
lean_object* v_reuseFailAlloc_5450_; 
v_reuseFailAlloc_5450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5450_, 0, v_a_5444_);
v___x_5449_ = v_reuseFailAlloc_5450_;
goto v_reusejp_5448_;
}
v_reusejp_5448_:
{
return v___x_5449_;
}
}
}
}
else
{
lean_object* v_a_5452_; lean_object* v___x_5454_; uint8_t v_isShared_5455_; uint8_t v_isSharedCheck_5459_; 
lean_dec(v_a_5428_);
lean_dec_ref(v_as_5380_);
lean_dec(v_i_5379_);
lean_dec(v_discr_5377_);
lean_dec(v_discrVal_5376_);
lean_dec_ref(v_resultType_5375_);
v_a_5452_ = lean_ctor_get(v___x_5430_, 0);
v_isSharedCheck_5459_ = !lean_is_exclusive(v___x_5430_);
if (v_isSharedCheck_5459_ == 0)
{
v___x_5454_ = v___x_5430_;
v_isShared_5455_ = v_isSharedCheck_5459_;
goto v_resetjp_5453_;
}
else
{
lean_inc(v_a_5452_);
lean_dec(v___x_5430_);
v___x_5454_ = lean_box(0);
v_isShared_5455_ = v_isSharedCheck_5459_;
goto v_resetjp_5453_;
}
v_resetjp_5453_:
{
lean_object* v___x_5457_; 
if (v_isShared_5455_ == 0)
{
v___x_5457_ = v___x_5454_;
goto v_reusejp_5456_;
}
else
{
lean_object* v_reuseFailAlloc_5458_; 
v_reuseFailAlloc_5458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5458_, 0, v_a_5452_);
v___x_5457_ = v_reuseFailAlloc_5458_;
goto v_reusejp_5456_;
}
v_reusejp_5456_:
{
return v___x_5457_;
}
}
}
}
}
else
{
lean_object* v_a_5460_; lean_object* v___x_5462_; uint8_t v_isShared_5463_; uint8_t v_isSharedCheck_5467_; 
lean_dec_ref(v_as_5380_);
lean_dec(v_i_5379_);
lean_dec(v_discr_5377_);
lean_dec(v_discrVal_5376_);
lean_dec_ref(v_resultType_5375_);
v_a_5460_ = lean_ctor_get(v___x_5427_, 0);
v_isSharedCheck_5467_ = !lean_is_exclusive(v___x_5427_);
if (v_isSharedCheck_5467_ == 0)
{
v___x_5462_ = v___x_5427_;
v_isShared_5463_ = v_isSharedCheck_5467_;
goto v_resetjp_5461_;
}
else
{
lean_inc(v_a_5460_);
lean_dec(v___x_5427_);
v___x_5462_ = lean_box(0);
v_isShared_5463_ = v_isSharedCheck_5467_;
goto v_resetjp_5461_;
}
v_resetjp_5461_:
{
lean_object* v___x_5465_; 
if (v_isShared_5463_ == 0)
{
v___x_5465_ = v___x_5462_;
goto v_reusejp_5464_;
}
else
{
lean_object* v_reuseFailAlloc_5466_; 
v_reuseFailAlloc_5466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5466_, 0, v_a_5460_);
v___x_5465_ = v_reuseFailAlloc_5466_;
goto v_reusejp_5464_;
}
v_reusejp_5464_:
{
return v___x_5465_;
}
}
}
}
else
{
lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; 
v___x_5468_ = lean_unsigned_to_nat(0u);
v___x_5469_ = lean_array_get_size(v_params_5403_);
v___x_5470_ = l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4(v_assignment_5378_, v_params_5403_, v___x_5468_, v___x_5469_, v___y_5381_, v___y_5382_, v___y_5383_, v___y_5384_);
if (lean_obj_tag(v___x_5470_) == 0)
{
lean_object* v_a_5471_; lean_object* v___x_5484_; uint8_t v___x_5485_; lean_object* v_fst_5487_; lean_object* v_snd_5488_; lean_object* v___y_5501_; 
v_a_5471_ = lean_ctor_get(v___x_5470_, 0);
lean_inc(v_a_5471_);
lean_dec_ref(v___x_5470_);
v___x_5484_ = lean_array_get_size(v_a_5471_);
v___x_5485_ = lean_nat_dec_eq(v___x_5484_, v___x_5468_);
if (v___x_5485_ == 0)
{
if (v___x_5425_ == 0)
{
lean_dec(v_a_5471_);
goto v___jp_5472_;
}
else
{
lean_object* v___x_5513_; 
lean_inc_ref(v_code_5404_);
v___x_5513_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5378_, v_code_5404_, v___y_5381_, v___y_5382_, v___y_5383_, v___y_5384_);
if (lean_obj_tag(v___x_5513_) == 0)
{
lean_object* v_a_5514_; lean_object* v___x_5515_; uint8_t v___x_5516_; 
v_a_5514_ = lean_ctor_get(v___x_5513_, 0);
lean_inc(v_a_5514_);
lean_dec_ref(v___x_5513_);
v___x_5515_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1);
v___x_5516_ = lean_nat_dec_lt(v___x_5468_, v___x_5484_);
if (v___x_5516_ == 0)
{
lean_dec(v_a_5471_);
v_fst_5487_ = v_a_5514_;
v_snd_5488_ = v___x_5515_;
goto v___jp_5486_;
}
else
{
lean_object* v___x_5517_; uint8_t v___x_5518_; 
lean_inc(v_a_5514_);
v___x_5517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5517_, 0, v_a_5514_);
lean_ctor_set(v___x_5517_, 1, v___x_5515_);
v___x_5518_ = lean_nat_dec_le(v___x_5484_, v___x_5484_);
if (v___x_5518_ == 0)
{
if (v___x_5516_ == 0)
{
lean_dec_ref(v___x_5517_);
lean_dec(v_a_5471_);
v_fst_5487_ = v_a_5514_;
v_snd_5488_ = v___x_5515_;
goto v___jp_5486_;
}
else
{
size_t v___x_5519_; size_t v___x_5520_; lean_object* v___x_5521_; 
lean_dec(v_a_5514_);
v___x_5519_ = ((size_t)0ULL);
v___x_5520_ = lean_usize_of_nat(v___x_5484_);
v___x_5521_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___redArg(v_a_5471_, v___x_5519_, v___x_5520_, v___x_5517_);
lean_dec(v_a_5471_);
v___y_5501_ = v___x_5521_;
goto v___jp_5500_;
}
}
else
{
size_t v___x_5522_; size_t v___x_5523_; lean_object* v___x_5524_; 
lean_dec(v_a_5514_);
v___x_5522_ = ((size_t)0ULL);
v___x_5523_ = lean_usize_of_nat(v___x_5484_);
v___x_5524_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___redArg(v_a_5471_, v___x_5522_, v___x_5523_, v___x_5517_);
lean_dec(v_a_5471_);
v___y_5501_ = v___x_5524_;
goto v___jp_5500_;
}
}
}
else
{
lean_object* v_a_5525_; lean_object* v___x_5527_; uint8_t v_isShared_5528_; uint8_t v_isSharedCheck_5532_; 
lean_dec(v_a_5471_);
lean_dec_ref(v_as_5380_);
lean_dec(v_i_5379_);
lean_dec(v_discr_5377_);
lean_dec(v_discrVal_5376_);
lean_dec_ref(v_resultType_5375_);
v_a_5525_ = lean_ctor_get(v___x_5513_, 0);
v_isSharedCheck_5532_ = !lean_is_exclusive(v___x_5513_);
if (v_isSharedCheck_5532_ == 0)
{
v___x_5527_ = v___x_5513_;
v_isShared_5528_ = v_isSharedCheck_5532_;
goto v_resetjp_5526_;
}
else
{
lean_inc(v_a_5525_);
lean_dec(v___x_5513_);
v___x_5527_ = lean_box(0);
v_isShared_5528_ = v_isSharedCheck_5532_;
goto v_resetjp_5526_;
}
v_resetjp_5526_:
{
lean_object* v___x_5530_; 
if (v_isShared_5528_ == 0)
{
v___x_5530_ = v___x_5527_;
goto v_reusejp_5529_;
}
else
{
lean_object* v_reuseFailAlloc_5531_; 
v_reuseFailAlloc_5531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5531_, 0, v_a_5525_);
v___x_5530_ = v_reuseFailAlloc_5531_;
goto v_reusejp_5529_;
}
v_reusejp_5529_:
{
return v___x_5530_;
}
}
}
}
}
else
{
lean_dec(v_a_5471_);
goto v___jp_5472_;
}
v___jp_5472_:
{
lean_object* v___x_5473_; 
lean_inc_ref(v_code_5404_);
v___x_5473_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5378_, v_code_5404_, v___y_5381_, v___y_5382_, v___y_5383_, v___y_5384_);
if (lean_obj_tag(v___x_5473_) == 0)
{
lean_object* v_a_5474_; lean_object* v___x_5475_; 
v_a_5474_ = lean_ctor_get(v___x_5473_, 0);
lean_inc(v_a_5474_);
lean_dec_ref(v___x_5473_);
lean_inc_ref(v_a_5389_);
v___x_5475_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_5389_, v_a_5474_);
v_a_5391_ = v___x_5475_;
goto v___jp_5390_;
}
else
{
lean_object* v_a_5476_; lean_object* v___x_5478_; uint8_t v_isShared_5479_; uint8_t v_isSharedCheck_5483_; 
lean_dec_ref(v_as_5380_);
lean_dec(v_i_5379_);
lean_dec(v_discr_5377_);
lean_dec(v_discrVal_5376_);
lean_dec_ref(v_resultType_5375_);
v_a_5476_ = lean_ctor_get(v___x_5473_, 0);
v_isSharedCheck_5483_ = !lean_is_exclusive(v___x_5473_);
if (v_isSharedCheck_5483_ == 0)
{
v___x_5478_ = v___x_5473_;
v_isShared_5479_ = v_isSharedCheck_5483_;
goto v_resetjp_5477_;
}
else
{
lean_inc(v_a_5476_);
lean_dec(v___x_5473_);
v___x_5478_ = lean_box(0);
v_isShared_5479_ = v_isSharedCheck_5483_;
goto v_resetjp_5477_;
}
v_resetjp_5477_:
{
lean_object* v___x_5481_; 
if (v_isShared_5479_ == 0)
{
v___x_5481_ = v___x_5478_;
goto v_reusejp_5480_;
}
else
{
lean_object* v_reuseFailAlloc_5482_; 
v_reuseFailAlloc_5482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5482_, 0, v_a_5476_);
v___x_5481_ = v_reuseFailAlloc_5482_;
goto v_reusejp_5480_;
}
v_reusejp_5480_:
{
return v___x_5481_;
}
}
}
}
v___jp_5486_:
{
lean_object* v___x_5489_; 
v___x_5489_ = l_Lean_Compiler_LCNF_replaceFVars(v___x_5405_, v_fst_5487_, v_snd_5488_, v___x_5485_, v___y_5381_, v___y_5382_, v___y_5383_, v___y_5384_);
lean_dec_ref(v_snd_5488_);
if (lean_obj_tag(v___x_5489_) == 0)
{
lean_object* v_a_5490_; lean_object* v___x_5491_; 
v_a_5490_ = lean_ctor_get(v___x_5489_, 0);
lean_inc(v_a_5490_);
lean_dec_ref(v___x_5489_);
lean_inc_ref(v_a_5389_);
v___x_5491_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_5389_, v_a_5490_);
v_a_5391_ = v___x_5491_;
goto v___jp_5390_;
}
else
{
lean_object* v_a_5492_; lean_object* v___x_5494_; uint8_t v_isShared_5495_; uint8_t v_isSharedCheck_5499_; 
lean_dec_ref(v_as_5380_);
lean_dec(v_i_5379_);
lean_dec(v_discr_5377_);
lean_dec(v_discrVal_5376_);
lean_dec_ref(v_resultType_5375_);
v_a_5492_ = lean_ctor_get(v___x_5489_, 0);
v_isSharedCheck_5499_ = !lean_is_exclusive(v___x_5489_);
if (v_isSharedCheck_5499_ == 0)
{
v___x_5494_ = v___x_5489_;
v_isShared_5495_ = v_isSharedCheck_5499_;
goto v_resetjp_5493_;
}
else
{
lean_inc(v_a_5492_);
lean_dec(v___x_5489_);
v___x_5494_ = lean_box(0);
v_isShared_5495_ = v_isSharedCheck_5499_;
goto v_resetjp_5493_;
}
v_resetjp_5493_:
{
lean_object* v___x_5497_; 
if (v_isShared_5495_ == 0)
{
v___x_5497_ = v___x_5494_;
goto v_reusejp_5496_;
}
else
{
lean_object* v_reuseFailAlloc_5498_; 
v_reuseFailAlloc_5498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5498_, 0, v_a_5492_);
v___x_5497_ = v_reuseFailAlloc_5498_;
goto v_reusejp_5496_;
}
v_reusejp_5496_:
{
return v___x_5497_;
}
}
}
}
v___jp_5500_:
{
if (lean_obj_tag(v___y_5501_) == 0)
{
lean_object* v_a_5502_; lean_object* v_fst_5503_; lean_object* v_snd_5504_; 
v_a_5502_ = lean_ctor_get(v___y_5501_, 0);
lean_inc(v_a_5502_);
lean_dec_ref(v___y_5501_);
v_fst_5503_ = lean_ctor_get(v_a_5502_, 0);
lean_inc(v_fst_5503_);
v_snd_5504_ = lean_ctor_get(v_a_5502_, 1);
lean_inc(v_snd_5504_);
lean_dec(v_a_5502_);
v_fst_5487_ = v_fst_5503_;
v_snd_5488_ = v_snd_5504_;
goto v___jp_5486_;
}
else
{
lean_object* v_a_5505_; lean_object* v___x_5507_; uint8_t v_isShared_5508_; uint8_t v_isSharedCheck_5512_; 
lean_dec_ref(v_as_5380_);
lean_dec(v_i_5379_);
lean_dec(v_discr_5377_);
lean_dec(v_discrVal_5376_);
lean_dec_ref(v_resultType_5375_);
v_a_5505_ = lean_ctor_get(v___y_5501_, 0);
v_isSharedCheck_5512_ = !lean_is_exclusive(v___y_5501_);
if (v_isSharedCheck_5512_ == 0)
{
v___x_5507_ = v___y_5501_;
v_isShared_5508_ = v_isSharedCheck_5512_;
goto v_resetjp_5506_;
}
else
{
lean_inc(v_a_5505_);
lean_dec(v___y_5501_);
v___x_5507_ = lean_box(0);
v_isShared_5508_ = v_isSharedCheck_5512_;
goto v_resetjp_5506_;
}
v_resetjp_5506_:
{
lean_object* v___x_5510_; 
if (v_isShared_5508_ == 0)
{
v___x_5510_ = v___x_5507_;
goto v_reusejp_5509_;
}
else
{
lean_object* v_reuseFailAlloc_5511_; 
v_reuseFailAlloc_5511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5511_, 0, v_a_5505_);
v___x_5510_ = v_reuseFailAlloc_5511_;
goto v_reusejp_5509_;
}
v_reusejp_5509_:
{
return v___x_5510_;
}
}
}
}
}
else
{
lean_object* v_a_5533_; lean_object* v___x_5535_; uint8_t v_isShared_5536_; uint8_t v_isSharedCheck_5540_; 
lean_dec_ref(v_as_5380_);
lean_dec(v_i_5379_);
lean_dec(v_discr_5377_);
lean_dec(v_discrVal_5376_);
lean_dec_ref(v_resultType_5375_);
v_a_5533_ = lean_ctor_get(v___x_5470_, 0);
v_isSharedCheck_5540_ = !lean_is_exclusive(v___x_5470_);
if (v_isSharedCheck_5540_ == 0)
{
v___x_5535_ = v___x_5470_;
v_isShared_5536_ = v_isSharedCheck_5540_;
goto v_resetjp_5534_;
}
else
{
lean_inc(v_a_5533_);
lean_dec(v___x_5470_);
v___x_5535_ = lean_box(0);
v_isShared_5536_ = v_isSharedCheck_5540_;
goto v_resetjp_5534_;
}
v_resetjp_5534_:
{
lean_object* v___x_5538_; 
if (v_isShared_5536_ == 0)
{
v___x_5538_ = v___x_5535_;
goto v_reusejp_5537_;
}
else
{
lean_object* v_reuseFailAlloc_5539_; 
v_reuseFailAlloc_5539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5539_, 0, v_a_5533_);
v___x_5538_ = v_reuseFailAlloc_5539_;
goto v_reusejp_5537_;
}
v_reusejp_5537_:
{
return v___x_5538_;
}
}
}
}
v___jp_5406_:
{
lean_object* v___x_5409_; 
v___x_5409_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_5405_, v___y_5408_, v___y_5407_);
lean_dec_ref(v___y_5408_);
if (lean_obj_tag(v___x_5409_) == 0)
{
lean_object* v___x_5410_; lean_object* v___x_5411_; 
lean_dec_ref(v___x_5409_);
lean_inc_ref(v_resultType_5375_);
v___x_5410_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5410_, 0, v_resultType_5375_);
lean_inc_ref(v_a_5389_);
v___x_5411_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_5389_, v___x_5410_);
v_a_5391_ = v___x_5411_;
goto v___jp_5390_;
}
else
{
lean_object* v_a_5412_; lean_object* v___x_5414_; uint8_t v_isShared_5415_; uint8_t v_isSharedCheck_5419_; 
lean_dec_ref(v_as_5380_);
lean_dec(v_i_5379_);
lean_dec(v_discr_5377_);
lean_dec(v_discrVal_5376_);
lean_dec_ref(v_resultType_5375_);
v_a_5412_ = lean_ctor_get(v___x_5409_, 0);
v_isSharedCheck_5419_ = !lean_is_exclusive(v___x_5409_);
if (v_isSharedCheck_5419_ == 0)
{
v___x_5414_ = v___x_5409_;
v_isShared_5415_ = v_isSharedCheck_5419_;
goto v_resetjp_5413_;
}
else
{
lean_inc(v_a_5412_);
lean_dec(v___x_5409_);
v___x_5414_ = lean_box(0);
v_isShared_5415_ = v_isSharedCheck_5419_;
goto v_resetjp_5413_;
}
v_resetjp_5413_:
{
lean_object* v___x_5417_; 
if (v_isShared_5415_ == 0)
{
v___x_5417_ = v___x_5414_;
goto v_reusejp_5416_;
}
else
{
lean_object* v_reuseFailAlloc_5418_; 
v_reuseFailAlloc_5418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5418_, 0, v_a_5412_);
v___x_5417_ = v_reuseFailAlloc_5418_;
goto v_reusejp_5416_;
}
v_reusejp_5416_:
{
return v___x_5417_;
}
}
}
}
v___jp_5420_:
{
switch(lean_obj_tag(v_a_5389_))
{
case 0:
{
lean_object* v_code_5422_; 
v_code_5422_ = lean_ctor_get(v_a_5389_, 2);
lean_inc_ref(v_code_5422_);
v___y_5407_ = v___y_5421_;
v___y_5408_ = v_code_5422_;
goto v___jp_5406_;
}
case 1:
{
lean_object* v_code_5423_; 
v_code_5423_ = lean_ctor_get(v_a_5389_, 1);
lean_inc_ref(v_code_5423_);
v___y_5407_ = v___y_5421_;
v___y_5408_ = v_code_5423_;
goto v___jp_5406_;
}
default: 
{
lean_object* v_code_5424_; 
v_code_5424_ = lean_ctor_get(v_a_5389_, 0);
lean_inc_ref(v_code_5424_);
v___y_5407_ = v___y_5421_;
v___y_5408_ = v_code_5424_;
goto v___jp_5406_;
}
}
}
}
else
{
lean_object* v_code_5541_; lean_object* v___x_5542_; 
v_code_5541_ = lean_ctor_get(v_a_5389_, 0);
lean_inc_ref(v_code_5541_);
v___x_5542_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5378_, v_code_5541_, v___y_5381_, v___y_5382_, v___y_5383_, v___y_5384_);
if (lean_obj_tag(v___x_5542_) == 0)
{
lean_object* v_a_5543_; lean_object* v___x_5544_; 
v_a_5543_ = lean_ctor_get(v___x_5542_, 0);
lean_inc(v_a_5543_);
lean_dec_ref(v___x_5542_);
lean_inc_ref(v_a_5389_);
v___x_5544_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_5389_, v_a_5543_);
v_a_5391_ = v___x_5544_;
goto v___jp_5390_;
}
else
{
lean_object* v_a_5545_; lean_object* v___x_5547_; uint8_t v_isShared_5548_; uint8_t v_isSharedCheck_5552_; 
lean_dec_ref(v_as_5380_);
lean_dec(v_i_5379_);
lean_dec(v_discr_5377_);
lean_dec(v_discrVal_5376_);
lean_dec_ref(v_resultType_5375_);
v_a_5545_ = lean_ctor_get(v___x_5542_, 0);
v_isSharedCheck_5552_ = !lean_is_exclusive(v___x_5542_);
if (v_isSharedCheck_5552_ == 0)
{
v___x_5547_ = v___x_5542_;
v_isShared_5548_ = v_isSharedCheck_5552_;
goto v_resetjp_5546_;
}
else
{
lean_inc(v_a_5545_);
lean_dec(v___x_5542_);
v___x_5547_ = lean_box(0);
v_isShared_5548_ = v_isSharedCheck_5552_;
goto v_resetjp_5546_;
}
v_resetjp_5546_:
{
lean_object* v___x_5550_; 
if (v_isShared_5548_ == 0)
{
v___x_5550_ = v___x_5547_;
goto v_reusejp_5549_;
}
else
{
lean_object* v_reuseFailAlloc_5551_; 
v_reuseFailAlloc_5551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5551_, 0, v_a_5545_);
v___x_5550_ = v_reuseFailAlloc_5551_;
goto v_reusejp_5549_;
}
v_reusejp_5549_:
{
return v___x_5550_;
}
}
}
}
v___jp_5390_:
{
size_t v___x_5392_; size_t v___x_5393_; uint8_t v___x_5394_; 
v___x_5392_ = lean_ptr_addr(v_a_5389_);
v___x_5393_ = lean_ptr_addr(v_a_5391_);
v___x_5394_ = lean_usize_dec_eq(v___x_5392_, v___x_5393_);
if (v___x_5394_ == 0)
{
lean_object* v___x_5395_; lean_object* v___x_5396_; lean_object* v___x_5397_; 
v___x_5395_ = lean_unsigned_to_nat(1u);
v___x_5396_ = lean_nat_add(v_i_5379_, v___x_5395_);
v___x_5397_ = lean_array_fset(v_as_5380_, v_i_5379_, v_a_5391_);
lean_dec(v_i_5379_);
v_i_5379_ = v___x_5396_;
v_as_5380_ = v___x_5397_;
goto _start;
}
else
{
lean_object* v___x_5399_; lean_object* v___x_5400_; 
lean_dec_ref(v_a_5391_);
v___x_5399_ = lean_unsigned_to_nat(1u);
v___x_5400_ = lean_nat_add(v_i_5379_, v___x_5399_);
lean_dec(v_i_5379_);
v_i_5379_ = v___x_5400_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(lean_object* v_assignment_5553_, lean_object* v_code_5554_, lean_object* v_a_5555_, lean_object* v_a_5556_, lean_object* v_a_5557_, lean_object* v_a_5558_){
_start:
{
lean_object* v___y_5561_; lean_object* v___y_5562_; uint8_t v___y_5563_; lean_object* v___y_5568_; lean_object* v___y_5569_; uint8_t v___y_5570_; lean_object* v_decl_5575_; lean_object* v_k_5576_; lean_object* v___y_5577_; lean_object* v___y_5578_; lean_object* v___y_5579_; lean_object* v___y_5580_; 
switch(lean_obj_tag(v_code_5554_))
{
case 0:
{
lean_object* v_decl_5626_; lean_object* v_k_5627_; lean_object* v___x_5628_; 
v_decl_5626_ = lean_ctor_get(v_code_5554_, 0);
v_k_5627_ = lean_ctor_get(v_code_5554_, 1);
lean_inc_ref(v_k_5627_);
v___x_5628_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5553_, v_k_5627_, v_a_5555_, v_a_5556_, v_a_5557_, v_a_5558_);
if (lean_obj_tag(v___x_5628_) == 0)
{
lean_object* v_a_5629_; lean_object* v___x_5631_; uint8_t v_isShared_5632_; uint8_t v_isSharedCheck_5655_; 
v_a_5629_ = lean_ctor_get(v___x_5628_, 0);
v_isSharedCheck_5655_ = !lean_is_exclusive(v___x_5628_);
if (v_isSharedCheck_5655_ == 0)
{
v___x_5631_ = v___x_5628_;
v_isShared_5632_ = v_isSharedCheck_5655_;
goto v_resetjp_5630_;
}
else
{
lean_inc(v_a_5629_);
lean_dec(v___x_5628_);
v___x_5631_ = lean_box(0);
v_isShared_5632_ = v_isSharedCheck_5655_;
goto v_resetjp_5630_;
}
v_resetjp_5630_:
{
uint8_t v___y_5634_; size_t v___x_5650_; size_t v___x_5651_; uint8_t v___x_5652_; 
v___x_5650_ = lean_ptr_addr(v_k_5627_);
v___x_5651_ = lean_ptr_addr(v_a_5629_);
v___x_5652_ = lean_usize_dec_eq(v___x_5650_, v___x_5651_);
if (v___x_5652_ == 0)
{
v___y_5634_ = v___x_5652_;
goto v___jp_5633_;
}
else
{
size_t v___x_5653_; uint8_t v___x_5654_; 
v___x_5653_ = lean_ptr_addr(v_decl_5626_);
v___x_5654_ = lean_usize_dec_eq(v___x_5653_, v___x_5653_);
v___y_5634_ = v___x_5654_;
goto v___jp_5633_;
}
v___jp_5633_:
{
if (v___y_5634_ == 0)
{
lean_object* v___x_5636_; uint8_t v_isShared_5637_; uint8_t v_isSharedCheck_5644_; 
lean_inc_ref(v_decl_5626_);
v_isSharedCheck_5644_ = !lean_is_exclusive(v_code_5554_);
if (v_isSharedCheck_5644_ == 0)
{
lean_object* v_unused_5645_; lean_object* v_unused_5646_; 
v_unused_5645_ = lean_ctor_get(v_code_5554_, 1);
lean_dec(v_unused_5645_);
v_unused_5646_ = lean_ctor_get(v_code_5554_, 0);
lean_dec(v_unused_5646_);
v___x_5636_ = v_code_5554_;
v_isShared_5637_ = v_isSharedCheck_5644_;
goto v_resetjp_5635_;
}
else
{
lean_dec(v_code_5554_);
v___x_5636_ = lean_box(0);
v_isShared_5637_ = v_isSharedCheck_5644_;
goto v_resetjp_5635_;
}
v_resetjp_5635_:
{
lean_object* v___x_5639_; 
if (v_isShared_5637_ == 0)
{
lean_ctor_set(v___x_5636_, 1, v_a_5629_);
v___x_5639_ = v___x_5636_;
goto v_reusejp_5638_;
}
else
{
lean_object* v_reuseFailAlloc_5643_; 
v_reuseFailAlloc_5643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5643_, 0, v_decl_5626_);
lean_ctor_set(v_reuseFailAlloc_5643_, 1, v_a_5629_);
v___x_5639_ = v_reuseFailAlloc_5643_;
goto v_reusejp_5638_;
}
v_reusejp_5638_:
{
lean_object* v___x_5641_; 
if (v_isShared_5632_ == 0)
{
lean_ctor_set(v___x_5631_, 0, v___x_5639_);
v___x_5641_ = v___x_5631_;
goto v_reusejp_5640_;
}
else
{
lean_object* v_reuseFailAlloc_5642_; 
v_reuseFailAlloc_5642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5642_, 0, v___x_5639_);
v___x_5641_ = v_reuseFailAlloc_5642_;
goto v_reusejp_5640_;
}
v_reusejp_5640_:
{
return v___x_5641_;
}
}
}
}
else
{
lean_object* v___x_5648_; 
lean_dec(v_a_5629_);
if (v_isShared_5632_ == 0)
{
lean_ctor_set(v___x_5631_, 0, v_code_5554_);
v___x_5648_ = v___x_5631_;
goto v_reusejp_5647_;
}
else
{
lean_object* v_reuseFailAlloc_5649_; 
v_reuseFailAlloc_5649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5649_, 0, v_code_5554_);
v___x_5648_ = v_reuseFailAlloc_5649_;
goto v_reusejp_5647_;
}
v_reusejp_5647_:
{
return v___x_5648_;
}
}
}
}
}
else
{
lean_dec_ref(v_code_5554_);
return v___x_5628_;
}
}
case 1:
{
lean_object* v_decl_5656_; lean_object* v_k_5657_; 
v_decl_5656_ = lean_ctor_get(v_code_5554_, 0);
v_k_5657_ = lean_ctor_get(v_code_5554_, 1);
lean_inc_ref(v_k_5657_);
lean_inc_ref(v_decl_5656_);
v_decl_5575_ = v_decl_5656_;
v_k_5576_ = v_k_5657_;
v___y_5577_ = v_a_5555_;
v___y_5578_ = v_a_5556_;
v___y_5579_ = v_a_5557_;
v___y_5580_ = v_a_5558_;
goto v___jp_5574_;
}
case 2:
{
lean_object* v_decl_5658_; lean_object* v_k_5659_; 
v_decl_5658_ = lean_ctor_get(v_code_5554_, 0);
v_k_5659_ = lean_ctor_get(v_code_5554_, 1);
lean_inc_ref(v_k_5659_);
lean_inc_ref(v_decl_5658_);
v_decl_5575_ = v_decl_5658_;
v_k_5576_ = v_k_5659_;
v___y_5577_ = v_a_5555_;
v___y_5578_ = v_a_5556_;
v___y_5579_ = v_a_5557_;
v___y_5580_ = v_a_5558_;
goto v___jp_5574_;
}
case 4:
{
lean_object* v_cases_5660_; lean_object* v_typeName_5661_; lean_object* v_resultType_5662_; lean_object* v_discr_5663_; lean_object* v_alts_5664_; lean_object* v___x_5666_; uint8_t v_isShared_5667_; uint8_t v_isSharedCheck_5705_; 
v_cases_5660_ = lean_ctor_get(v_code_5554_, 0);
lean_inc_ref(v_cases_5660_);
v_typeName_5661_ = lean_ctor_get(v_cases_5660_, 0);
v_resultType_5662_ = lean_ctor_get(v_cases_5660_, 1);
v_discr_5663_ = lean_ctor_get(v_cases_5660_, 2);
v_alts_5664_ = lean_ctor_get(v_cases_5660_, 3);
v_isSharedCheck_5705_ = !lean_is_exclusive(v_cases_5660_);
if (v_isSharedCheck_5705_ == 0)
{
v___x_5666_ = v_cases_5660_;
v_isShared_5667_ = v_isSharedCheck_5705_;
goto v_resetjp_5665_;
}
else
{
lean_inc(v_alts_5664_);
lean_inc(v_discr_5663_);
lean_inc(v_resultType_5662_);
lean_inc(v_typeName_5661_);
lean_dec(v_cases_5660_);
v___x_5666_ = lean_box(0);
v_isShared_5667_ = v_isSharedCheck_5705_;
goto v_resetjp_5665_;
}
v_resetjp_5665_:
{
lean_object* v___x_5668_; lean_object* v_discrVal_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; 
v___x_5668_ = lean_box(0);
v_discrVal_5669_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(v_assignment_5553_, v_discr_5663_, v___x_5668_);
v___x_5670_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_5664_);
lean_inc(v_discr_5663_);
lean_inc_ref(v_resultType_5662_);
v___x_5671_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6(v_resultType_5662_, v_discrVal_5669_, v_discr_5663_, v_assignment_5553_, v___x_5670_, v_alts_5664_, v_a_5555_, v_a_5556_, v_a_5557_, v_a_5558_);
if (lean_obj_tag(v___x_5671_) == 0)
{
lean_object* v_a_5672_; lean_object* v___x_5674_; uint8_t v_isShared_5675_; uint8_t v_isSharedCheck_5696_; 
v_a_5672_ = lean_ctor_get(v___x_5671_, 0);
v_isSharedCheck_5696_ = !lean_is_exclusive(v___x_5671_);
if (v_isSharedCheck_5696_ == 0)
{
v___x_5674_ = v___x_5671_;
v_isShared_5675_ = v_isSharedCheck_5696_;
goto v_resetjp_5673_;
}
else
{
lean_inc(v_a_5672_);
lean_dec(v___x_5671_);
v___x_5674_ = lean_box(0);
v_isShared_5675_ = v_isSharedCheck_5696_;
goto v_resetjp_5673_;
}
v_resetjp_5673_:
{
size_t v___x_5676_; size_t v___x_5677_; uint8_t v___x_5678_; 
v___x_5676_ = lean_ptr_addr(v_alts_5664_);
lean_dec_ref(v_alts_5664_);
v___x_5677_ = lean_ptr_addr(v_a_5672_);
v___x_5678_ = lean_usize_dec_eq(v___x_5676_, v___x_5677_);
if (v___x_5678_ == 0)
{
lean_object* v___x_5680_; uint8_t v_isShared_5681_; uint8_t v_isSharedCheck_5691_; 
v_isSharedCheck_5691_ = !lean_is_exclusive(v_code_5554_);
if (v_isSharedCheck_5691_ == 0)
{
lean_object* v_unused_5692_; 
v_unused_5692_ = lean_ctor_get(v_code_5554_, 0);
lean_dec(v_unused_5692_);
v___x_5680_ = v_code_5554_;
v_isShared_5681_ = v_isSharedCheck_5691_;
goto v_resetjp_5679_;
}
else
{
lean_dec(v_code_5554_);
v___x_5680_ = lean_box(0);
v_isShared_5681_ = v_isSharedCheck_5691_;
goto v_resetjp_5679_;
}
v_resetjp_5679_:
{
lean_object* v___x_5683_; 
if (v_isShared_5667_ == 0)
{
lean_ctor_set(v___x_5666_, 3, v_a_5672_);
v___x_5683_ = v___x_5666_;
goto v_reusejp_5682_;
}
else
{
lean_object* v_reuseFailAlloc_5690_; 
v_reuseFailAlloc_5690_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_5690_, 0, v_typeName_5661_);
lean_ctor_set(v_reuseFailAlloc_5690_, 1, v_resultType_5662_);
lean_ctor_set(v_reuseFailAlloc_5690_, 2, v_discr_5663_);
lean_ctor_set(v_reuseFailAlloc_5690_, 3, v_a_5672_);
v___x_5683_ = v_reuseFailAlloc_5690_;
goto v_reusejp_5682_;
}
v_reusejp_5682_:
{
lean_object* v___x_5685_; 
if (v_isShared_5681_ == 0)
{
lean_ctor_set(v___x_5680_, 0, v___x_5683_);
v___x_5685_ = v___x_5680_;
goto v_reusejp_5684_;
}
else
{
lean_object* v_reuseFailAlloc_5689_; 
v_reuseFailAlloc_5689_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5689_, 0, v___x_5683_);
v___x_5685_ = v_reuseFailAlloc_5689_;
goto v_reusejp_5684_;
}
v_reusejp_5684_:
{
lean_object* v___x_5687_; 
if (v_isShared_5675_ == 0)
{
lean_ctor_set(v___x_5674_, 0, v___x_5685_);
v___x_5687_ = v___x_5674_;
goto v_reusejp_5686_;
}
else
{
lean_object* v_reuseFailAlloc_5688_; 
v_reuseFailAlloc_5688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5688_, 0, v___x_5685_);
v___x_5687_ = v_reuseFailAlloc_5688_;
goto v_reusejp_5686_;
}
v_reusejp_5686_:
{
return v___x_5687_;
}
}
}
}
}
else
{
lean_object* v___x_5694_; 
lean_dec(v_a_5672_);
lean_del_object(v___x_5666_);
lean_dec(v_discr_5663_);
lean_dec_ref(v_resultType_5662_);
lean_dec(v_typeName_5661_);
if (v_isShared_5675_ == 0)
{
lean_ctor_set(v___x_5674_, 0, v_code_5554_);
v___x_5694_ = v___x_5674_;
goto v_reusejp_5693_;
}
else
{
lean_object* v_reuseFailAlloc_5695_; 
v_reuseFailAlloc_5695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5695_, 0, v_code_5554_);
v___x_5694_ = v_reuseFailAlloc_5695_;
goto v_reusejp_5693_;
}
v_reusejp_5693_:
{
return v___x_5694_;
}
}
}
}
else
{
lean_object* v_a_5697_; lean_object* v___x_5699_; uint8_t v_isShared_5700_; uint8_t v_isSharedCheck_5704_; 
lean_del_object(v___x_5666_);
lean_dec_ref(v_alts_5664_);
lean_dec(v_discr_5663_);
lean_dec_ref(v_resultType_5662_);
lean_dec(v_typeName_5661_);
lean_dec_ref(v_code_5554_);
v_a_5697_ = lean_ctor_get(v___x_5671_, 0);
v_isSharedCheck_5704_ = !lean_is_exclusive(v___x_5671_);
if (v_isSharedCheck_5704_ == 0)
{
v___x_5699_ = v___x_5671_;
v_isShared_5700_ = v_isSharedCheck_5704_;
goto v_resetjp_5698_;
}
else
{
lean_inc(v_a_5697_);
lean_dec(v___x_5671_);
v___x_5699_ = lean_box(0);
v_isShared_5700_ = v_isSharedCheck_5704_;
goto v_resetjp_5698_;
}
v_resetjp_5698_:
{
lean_object* v___x_5702_; 
if (v_isShared_5700_ == 0)
{
v___x_5702_ = v___x_5699_;
goto v_reusejp_5701_;
}
else
{
lean_object* v_reuseFailAlloc_5703_; 
v_reuseFailAlloc_5703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5703_, 0, v_a_5697_);
v___x_5702_ = v_reuseFailAlloc_5703_;
goto v_reusejp_5701_;
}
v_reusejp_5701_:
{
return v___x_5702_;
}
}
}
}
}
default: 
{
lean_object* v___x_5706_; 
v___x_5706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5706_, 0, v_code_5554_);
return v___x_5706_;
}
}
v___jp_5560_:
{
if (v___y_5563_ == 0)
{
lean_object* v___x_5564_; lean_object* v___x_5565_; 
lean_dec_ref(v_code_5554_);
v___x_5564_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5564_, 0, v___y_5562_);
lean_ctor_set(v___x_5564_, 1, v___y_5561_);
v___x_5565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5565_, 0, v___x_5564_);
return v___x_5565_;
}
else
{
lean_object* v___x_5566_; 
lean_dec_ref(v___y_5562_);
lean_dec_ref(v___y_5561_);
v___x_5566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5566_, 0, v_code_5554_);
return v___x_5566_;
}
}
v___jp_5567_:
{
if (v___y_5570_ == 0)
{
lean_object* v___x_5571_; lean_object* v___x_5572_; 
lean_dec_ref(v_code_5554_);
v___x_5571_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5571_, 0, v___y_5569_);
lean_ctor_set(v___x_5571_, 1, v___y_5568_);
v___x_5572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5572_, 0, v___x_5571_);
return v___x_5572_;
}
else
{
lean_object* v___x_5573_; 
lean_dec_ref(v___y_5569_);
lean_dec_ref(v___y_5568_);
v___x_5573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5573_, 0, v_code_5554_);
return v___x_5573_;
}
}
v___jp_5574_:
{
lean_object* v_params_5581_; lean_object* v_type_5582_; lean_object* v_value_5583_; lean_object* v___x_5584_; 
v_params_5581_ = lean_ctor_get(v_decl_5575_, 2);
lean_inc_ref(v_params_5581_);
v_type_5582_ = lean_ctor_get(v_decl_5575_, 3);
lean_inc_ref(v_type_5582_);
v_value_5583_ = lean_ctor_get(v_decl_5575_, 4);
lean_inc_ref(v_value_5583_);
v___x_5584_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5553_, v_value_5583_, v___y_5577_, v___y_5578_, v___y_5579_, v___y_5580_);
if (lean_obj_tag(v___x_5584_) == 0)
{
lean_object* v_a_5585_; uint8_t v___x_5586_; lean_object* v___x_5587_; 
v_a_5585_ = lean_ctor_get(v___x_5584_, 0);
lean_inc(v_a_5585_);
lean_dec_ref(v___x_5584_);
v___x_5586_ = 0;
v___x_5587_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_5586_, v_decl_5575_, v_type_5582_, v_params_5581_, v_a_5585_, v___y_5578_);
if (lean_obj_tag(v___x_5587_) == 0)
{
lean_object* v_a_5588_; lean_object* v___x_5589_; 
v_a_5588_ = lean_ctor_get(v___x_5587_, 0);
lean_inc(v_a_5588_);
lean_dec_ref(v___x_5587_);
v___x_5589_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5553_, v_k_5576_, v___y_5577_, v___y_5578_, v___y_5579_, v___y_5580_);
if (lean_obj_tag(v___x_5589_) == 0)
{
switch(lean_obj_tag(v_code_5554_))
{
case 1:
{
lean_object* v_a_5590_; lean_object* v_decl_5591_; lean_object* v_k_5592_; size_t v___x_5593_; size_t v___x_5594_; uint8_t v___x_5595_; 
v_a_5590_ = lean_ctor_get(v___x_5589_, 0);
lean_inc(v_a_5590_);
lean_dec_ref(v___x_5589_);
v_decl_5591_ = lean_ctor_get(v_code_5554_, 0);
v_k_5592_ = lean_ctor_get(v_code_5554_, 1);
v___x_5593_ = lean_ptr_addr(v_k_5592_);
v___x_5594_ = lean_ptr_addr(v_a_5590_);
v___x_5595_ = lean_usize_dec_eq(v___x_5593_, v___x_5594_);
if (v___x_5595_ == 0)
{
v___y_5561_ = v_a_5590_;
v___y_5562_ = v_a_5588_;
v___y_5563_ = v___x_5595_;
goto v___jp_5560_;
}
else
{
size_t v___x_5596_; size_t v___x_5597_; uint8_t v___x_5598_; 
v___x_5596_ = lean_ptr_addr(v_decl_5591_);
v___x_5597_ = lean_ptr_addr(v_a_5588_);
v___x_5598_ = lean_usize_dec_eq(v___x_5596_, v___x_5597_);
v___y_5561_ = v_a_5590_;
v___y_5562_ = v_a_5588_;
v___y_5563_ = v___x_5598_;
goto v___jp_5560_;
}
}
case 2:
{
lean_object* v_a_5599_; lean_object* v_decl_5600_; lean_object* v_k_5601_; size_t v___x_5602_; size_t v___x_5603_; uint8_t v___x_5604_; 
v_a_5599_ = lean_ctor_get(v___x_5589_, 0);
lean_inc(v_a_5599_);
lean_dec_ref(v___x_5589_);
v_decl_5600_ = lean_ctor_get(v_code_5554_, 0);
v_k_5601_ = lean_ctor_get(v_code_5554_, 1);
v___x_5602_ = lean_ptr_addr(v_k_5601_);
v___x_5603_ = lean_ptr_addr(v_a_5599_);
v___x_5604_ = lean_usize_dec_eq(v___x_5602_, v___x_5603_);
if (v___x_5604_ == 0)
{
v___y_5568_ = v_a_5599_;
v___y_5569_ = v_a_5588_;
v___y_5570_ = v___x_5604_;
goto v___jp_5567_;
}
else
{
size_t v___x_5605_; size_t v___x_5606_; uint8_t v___x_5607_; 
v___x_5605_ = lean_ptr_addr(v_decl_5600_);
v___x_5606_ = lean_ptr_addr(v_a_5588_);
v___x_5607_ = lean_usize_dec_eq(v___x_5605_, v___x_5606_);
v___y_5568_ = v_a_5599_;
v___y_5569_ = v_a_5588_;
v___y_5570_ = v___x_5607_;
goto v___jp_5567_;
}
}
default: 
{
lean_object* v___x_5609_; uint8_t v_isShared_5610_; uint8_t v_isSharedCheck_5616_; 
lean_dec(v_a_5588_);
lean_dec_ref(v_code_5554_);
v_isSharedCheck_5616_ = !lean_is_exclusive(v___x_5589_);
if (v_isSharedCheck_5616_ == 0)
{
lean_object* v_unused_5617_; 
v_unused_5617_ = lean_ctor_get(v___x_5589_, 0);
lean_dec(v_unused_5617_);
v___x_5609_ = v___x_5589_;
v_isShared_5610_ = v_isSharedCheck_5616_;
goto v_resetjp_5608_;
}
else
{
lean_dec(v___x_5589_);
v___x_5609_ = lean_box(0);
v_isShared_5610_ = v_isSharedCheck_5616_;
goto v_resetjp_5608_;
}
v_resetjp_5608_:
{
lean_object* v___x_5611_; lean_object* v___x_5612_; lean_object* v___x_5614_; 
v___x_5611_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2);
v___x_5612_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0(v___x_5611_);
if (v_isShared_5610_ == 0)
{
lean_ctor_set(v___x_5609_, 0, v___x_5612_);
v___x_5614_ = v___x_5609_;
goto v_reusejp_5613_;
}
else
{
lean_object* v_reuseFailAlloc_5615_; 
v_reuseFailAlloc_5615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5615_, 0, v___x_5612_);
v___x_5614_ = v_reuseFailAlloc_5615_;
goto v_reusejp_5613_;
}
v_reusejp_5613_:
{
return v___x_5614_;
}
}
}
}
}
else
{
lean_dec(v_a_5588_);
lean_dec_ref(v_code_5554_);
return v___x_5589_;
}
}
else
{
lean_object* v_a_5618_; lean_object* v___x_5620_; uint8_t v_isShared_5621_; uint8_t v_isSharedCheck_5625_; 
lean_dec_ref(v_k_5576_);
lean_dec_ref(v_code_5554_);
v_a_5618_ = lean_ctor_get(v___x_5587_, 0);
v_isSharedCheck_5625_ = !lean_is_exclusive(v___x_5587_);
if (v_isSharedCheck_5625_ == 0)
{
v___x_5620_ = v___x_5587_;
v_isShared_5621_ = v_isSharedCheck_5625_;
goto v_resetjp_5619_;
}
else
{
lean_inc(v_a_5618_);
lean_dec(v___x_5587_);
v___x_5620_ = lean_box(0);
v_isShared_5621_ = v_isSharedCheck_5625_;
goto v_resetjp_5619_;
}
v_resetjp_5619_:
{
lean_object* v___x_5623_; 
if (v_isShared_5621_ == 0)
{
v___x_5623_ = v___x_5620_;
goto v_reusejp_5622_;
}
else
{
lean_object* v_reuseFailAlloc_5624_; 
v_reuseFailAlloc_5624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5624_, 0, v_a_5618_);
v___x_5623_ = v_reuseFailAlloc_5624_;
goto v_reusejp_5622_;
}
v_reusejp_5622_:
{
return v___x_5623_;
}
}
}
}
else
{
lean_dec_ref(v_type_5582_);
lean_dec_ref(v_params_5581_);
lean_dec_ref(v_k_5576_);
lean_dec_ref(v_decl_5575_);
lean_dec_ref(v_code_5554_);
return v___x_5584_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___boxed(lean_object* v_assignment_5707_, lean_object* v_code_5708_, lean_object* v_a_5709_, lean_object* v_a_5710_, lean_object* v_a_5711_, lean_object* v_a_5712_, lean_object* v_a_5713_){
_start:
{
lean_object* v_res_5714_; 
v_res_5714_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5707_, v_code_5708_, v_a_5709_, v_a_5710_, v_a_5711_, v_a_5712_);
lean_dec(v_a_5712_);
lean_dec_ref(v_a_5711_);
lean_dec(v_a_5710_);
lean_dec_ref(v_a_5709_);
lean_dec_ref(v_assignment_5707_);
return v_res_5714_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6___boxed(lean_object* v_resultType_5715_, lean_object* v_discrVal_5716_, lean_object* v_discr_5717_, lean_object* v_assignment_5718_, lean_object* v_i_5719_, lean_object* v_as_5720_, lean_object* v___y_5721_, lean_object* v___y_5722_, lean_object* v___y_5723_, lean_object* v___y_5724_, lean_object* v___y_5725_){
_start:
{
lean_object* v_res_5726_; 
v_res_5726_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__6(v_resultType_5715_, v_discrVal_5716_, v_discr_5717_, v_assignment_5718_, v_i_5719_, v_as_5720_, v___y_5721_, v___y_5722_, v___y_5723_, v___y_5724_);
lean_dec(v___y_5724_);
lean_dec_ref(v___y_5723_);
lean_dec(v___y_5722_);
lean_dec_ref(v___y_5721_);
lean_dec_ref(v_assignment_5718_);
return v_res_5726_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1(lean_object* v_00_u03b2_5727_, lean_object* v_m_5728_, lean_object* v_a_5729_){
_start:
{
lean_object* v___x_5730_; 
v___x_5730_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(v_m_5728_, v_a_5729_);
return v___x_5730_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___boxed(lean_object* v_00_u03b2_5731_, lean_object* v_m_5732_, lean_object* v_a_5733_){
_start:
{
lean_object* v_res_5734_; 
v_res_5734_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1(v_00_u03b2_5731_, v_m_5732_, v_a_5733_);
lean_dec(v_a_5733_);
lean_dec_ref(v_m_5732_);
return v_res_5734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5(lean_object* v_as_5735_, size_t v_i_5736_, size_t v_stop_5737_, lean_object* v_b_5738_, lean_object* v___y_5739_, lean_object* v___y_5740_, lean_object* v___y_5741_, lean_object* v___y_5742_){
_start:
{
lean_object* v___x_5744_; 
v___x_5744_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___redArg(v_as_5735_, v_i_5736_, v_stop_5737_, v_b_5738_);
return v___x_5744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___boxed(lean_object* v_as_5745_, lean_object* v_i_5746_, lean_object* v_stop_5747_, lean_object* v_b_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_, lean_object* v___y_5751_, lean_object* v___y_5752_, lean_object* v___y_5753_){
_start:
{
size_t v_i_boxed_5754_; size_t v_stop_boxed_5755_; lean_object* v_res_5756_; 
v_i_boxed_5754_ = lean_unbox_usize(v_i_5746_);
lean_dec(v_i_5746_);
v_stop_boxed_5755_ = lean_unbox_usize(v_stop_5747_);
lean_dec(v_stop_5747_);
v_res_5756_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5(v_as_5745_, v_i_boxed_5754_, v_stop_boxed_5755_, v_b_5748_, v___y_5749_, v___y_5750_, v___y_5751_, v___y_5752_);
lean_dec(v___y_5752_);
lean_dec_ref(v___y_5751_);
lean_dec(v___y_5750_);
lean_dec_ref(v___y_5749_);
lean_dec_ref(v_as_5745_);
return v_res_5756_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1(lean_object* v_00_u03b2_5757_, lean_object* v_a_5758_, lean_object* v_x_5759_){
_start:
{
lean_object* v___x_5760_; 
v___x_5760_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(v_a_5758_, v_x_5759_);
return v___x_5760_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___boxed(lean_object* v_00_u03b2_5761_, lean_object* v_a_5762_, lean_object* v_x_5763_){
_start:
{
lean_object* v_res_5764_; 
v_res_5764_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1(v_00_u03b2_5761_, v_a_5762_, v_x_5763_);
lean_dec(v_x_5763_);
lean_dec(v_a_5762_);
return v_res_5764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(lean_object* v_f_5765_, lean_object* v_v_5766_, lean_object* v___y_5767_, lean_object* v___y_5768_, lean_object* v___y_5769_, lean_object* v___y_5770_){
_start:
{
if (lean_obj_tag(v_v_5766_) == 0)
{
lean_object* v_code_5772_; lean_object* v___x_5774_; uint8_t v_isShared_5775_; uint8_t v_isSharedCheck_5796_; 
v_code_5772_ = lean_ctor_get(v_v_5766_, 0);
v_isSharedCheck_5796_ = !lean_is_exclusive(v_v_5766_);
if (v_isSharedCheck_5796_ == 0)
{
v___x_5774_ = v_v_5766_;
v_isShared_5775_ = v_isSharedCheck_5796_;
goto v_resetjp_5773_;
}
else
{
lean_inc(v_code_5772_);
lean_dec(v_v_5766_);
v___x_5774_ = lean_box(0);
v_isShared_5775_ = v_isSharedCheck_5796_;
goto v_resetjp_5773_;
}
v_resetjp_5773_:
{
lean_object* v___x_5776_; 
lean_inc(v___y_5770_);
lean_inc_ref(v___y_5769_);
lean_inc(v___y_5768_);
lean_inc_ref(v___y_5767_);
v___x_5776_ = lean_apply_6(v_f_5765_, v_code_5772_, v___y_5767_, v___y_5768_, v___y_5769_, v___y_5770_, lean_box(0));
if (lean_obj_tag(v___x_5776_) == 0)
{
lean_object* v_a_5777_; lean_object* v___x_5779_; uint8_t v_isShared_5780_; uint8_t v_isSharedCheck_5787_; 
v_a_5777_ = lean_ctor_get(v___x_5776_, 0);
v_isSharedCheck_5787_ = !lean_is_exclusive(v___x_5776_);
if (v_isSharedCheck_5787_ == 0)
{
v___x_5779_ = v___x_5776_;
v_isShared_5780_ = v_isSharedCheck_5787_;
goto v_resetjp_5778_;
}
else
{
lean_inc(v_a_5777_);
lean_dec(v___x_5776_);
v___x_5779_ = lean_box(0);
v_isShared_5780_ = v_isSharedCheck_5787_;
goto v_resetjp_5778_;
}
v_resetjp_5778_:
{
lean_object* v___x_5782_; 
if (v_isShared_5775_ == 0)
{
lean_ctor_set(v___x_5774_, 0, v_a_5777_);
v___x_5782_ = v___x_5774_;
goto v_reusejp_5781_;
}
else
{
lean_object* v_reuseFailAlloc_5786_; 
v_reuseFailAlloc_5786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5786_, 0, v_a_5777_);
v___x_5782_ = v_reuseFailAlloc_5786_;
goto v_reusejp_5781_;
}
v_reusejp_5781_:
{
lean_object* v___x_5784_; 
if (v_isShared_5780_ == 0)
{
lean_ctor_set(v___x_5779_, 0, v___x_5782_);
v___x_5784_ = v___x_5779_;
goto v_reusejp_5783_;
}
else
{
lean_object* v_reuseFailAlloc_5785_; 
v_reuseFailAlloc_5785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5785_, 0, v___x_5782_);
v___x_5784_ = v_reuseFailAlloc_5785_;
goto v_reusejp_5783_;
}
v_reusejp_5783_:
{
return v___x_5784_;
}
}
}
}
else
{
lean_object* v_a_5788_; lean_object* v___x_5790_; uint8_t v_isShared_5791_; uint8_t v_isSharedCheck_5795_; 
lean_del_object(v___x_5774_);
v_a_5788_ = lean_ctor_get(v___x_5776_, 0);
v_isSharedCheck_5795_ = !lean_is_exclusive(v___x_5776_);
if (v_isSharedCheck_5795_ == 0)
{
v___x_5790_ = v___x_5776_;
v_isShared_5791_ = v_isSharedCheck_5795_;
goto v_resetjp_5789_;
}
else
{
lean_inc(v_a_5788_);
lean_dec(v___x_5776_);
v___x_5790_ = lean_box(0);
v_isShared_5791_ = v_isSharedCheck_5795_;
goto v_resetjp_5789_;
}
v_resetjp_5789_:
{
lean_object* v___x_5793_; 
if (v_isShared_5791_ == 0)
{
v___x_5793_ = v___x_5790_;
goto v_reusejp_5792_;
}
else
{
lean_object* v_reuseFailAlloc_5794_; 
v_reuseFailAlloc_5794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5794_, 0, v_a_5788_);
v___x_5793_ = v_reuseFailAlloc_5794_;
goto v_reusejp_5792_;
}
v_reusejp_5792_:
{
return v___x_5793_;
}
}
}
}
}
else
{
lean_object* v___x_5797_; 
lean_dec_ref(v_f_5765_);
v___x_5797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5797_, 0, v_v_5766_);
return v___x_5797_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg___boxed(lean_object* v_f_5798_, lean_object* v_v_5799_, lean_object* v___y_5800_, lean_object* v___y_5801_, lean_object* v___y_5802_, lean_object* v___y_5803_, lean_object* v___y_5804_){
_start:
{
lean_object* v_res_5805_; 
v_res_5805_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(v_f_5798_, v_v_5799_, v___y_5800_, v___y_5801_, v___y_5802_, v___y_5803_);
lean_dec(v___y_5803_);
lean_dec_ref(v___y_5802_);
lean_dec(v___y_5801_);
lean_dec_ref(v___y_5800_);
return v_res_5805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0(uint8_t v_pu_5806_, lean_object* v_f_5807_, lean_object* v_v_5808_, lean_object* v___y_5809_, lean_object* v___y_5810_, lean_object* v___y_5811_, lean_object* v___y_5812_){
_start:
{
lean_object* v___x_5814_; 
v___x_5814_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(v_f_5807_, v_v_5808_, v___y_5809_, v___y_5810_, v___y_5811_, v___y_5812_);
return v___x_5814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___boxed(lean_object* v_pu_5815_, lean_object* v_f_5816_, lean_object* v_v_5817_, lean_object* v___y_5818_, lean_object* v___y_5819_, lean_object* v___y_5820_, lean_object* v___y_5821_, lean_object* v___y_5822_){
_start:
{
uint8_t v_pu_boxed_5823_; lean_object* v_res_5824_; 
v_pu_boxed_5823_ = lean_unbox(v_pu_5815_);
v_res_5824_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0(v_pu_boxed_5823_, v_f_5816_, v_v_5817_, v___y_5818_, v___y_5819_, v___y_5820_, v___y_5821_);
lean_dec(v___y_5821_);
lean_dec_ref(v___y_5820_);
lean_dec(v___y_5819_);
lean_dec_ref(v___y_5818_);
return v_res_5824_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3(lean_object* v_x_5825_, lean_object* v_x_5826_){
_start:
{
if (lean_obj_tag(v_x_5826_) == 0)
{
return v_x_5825_;
}
else
{
lean_object* v_key_5827_; lean_object* v_value_5828_; lean_object* v_tail_5829_; lean_object* v___x_5830_; lean_object* v___x_5831_; 
v_key_5827_ = lean_ctor_get(v_x_5826_, 0);
v_value_5828_ = lean_ctor_get(v_x_5826_, 1);
v_tail_5829_ = lean_ctor_get(v_x_5826_, 2);
lean_inc(v_value_5828_);
lean_inc(v_key_5827_);
v___x_5830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5830_, 0, v_key_5827_);
lean_ctor_set(v___x_5830_, 1, v_value_5828_);
v___x_5831_ = lean_array_push(v_x_5825_, v___x_5830_);
v_x_5825_ = v___x_5831_;
v_x_5826_ = v_tail_5829_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3___boxed(lean_object* v_x_5833_, lean_object* v_x_5834_){
_start:
{
lean_object* v_res_5835_; 
v_res_5835_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3(v_x_5833_, v_x_5834_);
lean_dec(v_x_5834_);
return v_res_5835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4(lean_object* v_as_5836_, size_t v_i_5837_, size_t v_stop_5838_, lean_object* v_b_5839_){
_start:
{
uint8_t v___x_5840_; 
v___x_5840_ = lean_usize_dec_eq(v_i_5837_, v_stop_5838_);
if (v___x_5840_ == 0)
{
lean_object* v___x_5841_; lean_object* v___x_5842_; size_t v___x_5843_; size_t v___x_5844_; 
v___x_5841_ = lean_array_uget_borrowed(v_as_5836_, v_i_5837_);
v___x_5842_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3(v_b_5839_, v___x_5841_);
v___x_5843_ = ((size_t)1ULL);
v___x_5844_ = lean_usize_add(v_i_5837_, v___x_5843_);
v_i_5837_ = v___x_5844_;
v_b_5839_ = v___x_5842_;
goto _start;
}
else
{
return v_b_5839_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4___boxed(lean_object* v_as_5846_, lean_object* v_i_5847_, lean_object* v_stop_5848_, lean_object* v_b_5849_){
_start:
{
size_t v_i_boxed_5850_; size_t v_stop_boxed_5851_; lean_object* v_res_5852_; 
v_i_boxed_5850_ = lean_unbox_usize(v_i_5847_);
lean_dec(v_i_5847_);
v_stop_boxed_5851_ = lean_unbox_usize(v_stop_5848_);
lean_dec(v_stop_5848_);
v_res_5852_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4(v_as_5846_, v_i_boxed_5850_, v_stop_boxed_5851_, v_b_5849_);
lean_dec_ref(v_as_5846_);
return v_res_5852_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1(uint8_t v_a_5853_, size_t v_sz_5854_, size_t v_i_5855_, lean_object* v_bs_5856_, lean_object* v___y_5857_, lean_object* v___y_5858_, lean_object* v___y_5859_, lean_object* v___y_5860_){
_start:
{
uint8_t v___x_5862_; 
v___x_5862_ = lean_usize_dec_lt(v_i_5855_, v_sz_5854_);
if (v___x_5862_ == 0)
{
lean_object* v___x_5863_; 
v___x_5863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5863_, 0, v_bs_5856_);
return v___x_5863_;
}
else
{
lean_object* v_v_5864_; lean_object* v_fst_5865_; lean_object* v_snd_5866_; lean_object* v___x_5868_; uint8_t v_isShared_5869_; uint8_t v_isSharedCheck_5890_; 
v_v_5864_ = lean_array_uget(v_bs_5856_, v_i_5855_);
v_fst_5865_ = lean_ctor_get(v_v_5864_, 0);
v_snd_5866_ = lean_ctor_get(v_v_5864_, 1);
v_isSharedCheck_5890_ = !lean_is_exclusive(v_v_5864_);
if (v_isSharedCheck_5890_ == 0)
{
v___x_5868_ = v_v_5864_;
v_isShared_5869_ = v_isSharedCheck_5890_;
goto v_resetjp_5867_;
}
else
{
lean_inc(v_snd_5866_);
lean_inc(v_fst_5865_);
lean_dec(v_v_5864_);
v___x_5868_ = lean_box(0);
v_isShared_5869_ = v_isSharedCheck_5890_;
goto v_resetjp_5867_;
}
v_resetjp_5867_:
{
lean_object* v___x_5870_; 
v___x_5870_ = l_Lean_Compiler_LCNF_getBinderName(v_fst_5865_, v___y_5857_, v___y_5858_, v___y_5859_, v___y_5860_);
if (lean_obj_tag(v___x_5870_) == 0)
{
lean_object* v_a_5871_; lean_object* v___x_5872_; lean_object* v_bs_x27_5873_; lean_object* v___x_5874_; lean_object* v___x_5876_; 
v_a_5871_ = lean_ctor_get(v___x_5870_, 0);
lean_inc(v_a_5871_);
lean_dec_ref(v___x_5870_);
v___x_5872_ = lean_unsigned_to_nat(0u);
v_bs_x27_5873_ = lean_array_uset(v_bs_5856_, v_i_5855_, v___x_5872_);
v___x_5874_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_5871_, v_a_5853_);
if (v_isShared_5869_ == 0)
{
lean_ctor_set(v___x_5868_, 0, v___x_5874_);
v___x_5876_ = v___x_5868_;
goto v_reusejp_5875_;
}
else
{
lean_object* v_reuseFailAlloc_5881_; 
v_reuseFailAlloc_5881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5881_, 0, v___x_5874_);
lean_ctor_set(v_reuseFailAlloc_5881_, 1, v_snd_5866_);
v___x_5876_ = v_reuseFailAlloc_5881_;
goto v_reusejp_5875_;
}
v_reusejp_5875_:
{
size_t v___x_5877_; size_t v___x_5878_; lean_object* v___x_5879_; 
v___x_5877_ = ((size_t)1ULL);
v___x_5878_ = lean_usize_add(v_i_5855_, v___x_5877_);
v___x_5879_ = lean_array_uset(v_bs_x27_5873_, v_i_5855_, v___x_5876_);
v_i_5855_ = v___x_5878_;
v_bs_5856_ = v___x_5879_;
goto _start;
}
}
else
{
lean_object* v_a_5882_; lean_object* v___x_5884_; uint8_t v_isShared_5885_; uint8_t v_isSharedCheck_5889_; 
lean_del_object(v___x_5868_);
lean_dec(v_snd_5866_);
lean_dec_ref(v_bs_5856_);
v_a_5882_ = lean_ctor_get(v___x_5870_, 0);
v_isSharedCheck_5889_ = !lean_is_exclusive(v___x_5870_);
if (v_isSharedCheck_5889_ == 0)
{
v___x_5884_ = v___x_5870_;
v_isShared_5885_ = v_isSharedCheck_5889_;
goto v_resetjp_5883_;
}
else
{
lean_inc(v_a_5882_);
lean_dec(v___x_5870_);
v___x_5884_ = lean_box(0);
v_isShared_5885_ = v_isSharedCheck_5889_;
goto v_resetjp_5883_;
}
v_resetjp_5883_:
{
lean_object* v___x_5887_; 
if (v_isShared_5885_ == 0)
{
v___x_5887_ = v___x_5884_;
goto v_reusejp_5886_;
}
else
{
lean_object* v_reuseFailAlloc_5888_; 
v_reuseFailAlloc_5888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5888_, 0, v_a_5882_);
v___x_5887_ = v_reuseFailAlloc_5888_;
goto v_reusejp_5886_;
}
v_reusejp_5886_:
{
return v___x_5887_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1___boxed(lean_object* v_a_5891_, lean_object* v_sz_5892_, lean_object* v_i_5893_, lean_object* v_bs_5894_, lean_object* v___y_5895_, lean_object* v___y_5896_, lean_object* v___y_5897_, lean_object* v___y_5898_, lean_object* v___y_5899_){
_start:
{
uint8_t v_a_2201__boxed_5900_; size_t v_sz_boxed_5901_; size_t v_i_boxed_5902_; lean_object* v_res_5903_; 
v_a_2201__boxed_5900_ = lean_unbox(v_a_5891_);
v_sz_boxed_5901_ = lean_unbox_usize(v_sz_5892_);
lean_dec(v_sz_5892_);
v_i_boxed_5902_ = lean_unbox_usize(v_i_5893_);
lean_dec(v_i_5893_);
v_res_5903_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1(v_a_2201__boxed_5900_, v_sz_boxed_5901_, v_i_boxed_5902_, v_bs_5894_, v___y_5895_, v___y_5896_, v___y_5897_, v___y_5898_);
lean_dec(v___y_5898_);
lean_dec_ref(v___y_5897_);
lean_dec(v___y_5896_);
lean_dec_ref(v___y_5895_);
return v_res_5903_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(lean_object* v_x_5904_){
_start:
{
lean_object* v_fst_5905_; lean_object* v_snd_5906_; lean_object* v___x_5908_; uint8_t v_isShared_5909_; uint8_t v_isSharedCheck_5929_; 
v_fst_5905_ = lean_ctor_get(v_x_5904_, 0);
v_snd_5906_ = lean_ctor_get(v_x_5904_, 1);
v_isSharedCheck_5929_ = !lean_is_exclusive(v_x_5904_);
if (v_isSharedCheck_5929_ == 0)
{
v___x_5908_ = v_x_5904_;
v_isShared_5909_ = v_isSharedCheck_5929_;
goto v_resetjp_5907_;
}
else
{
lean_inc(v_snd_5906_);
lean_inc(v_fst_5905_);
lean_dec(v_x_5904_);
v___x_5908_ = lean_box(0);
v_isShared_5909_ = v_isSharedCheck_5929_;
goto v_resetjp_5907_;
}
v_resetjp_5907_:
{
lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; lean_object* v___x_5914_; 
v___x_5910_ = l_String_quote(v_fst_5905_);
v___x_5911_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5911_, 0, v___x_5910_);
v___x_5912_ = lean_box(0);
if (v_isShared_5909_ == 0)
{
lean_ctor_set_tag(v___x_5908_, 1);
lean_ctor_set(v___x_5908_, 1, v___x_5912_);
lean_ctor_set(v___x_5908_, 0, v___x_5911_);
v___x_5914_ = v___x_5908_;
goto v_reusejp_5913_;
}
else
{
lean_object* v_reuseFailAlloc_5928_; 
v_reuseFailAlloc_5928_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5928_, 0, v___x_5911_);
lean_ctor_set(v_reuseFailAlloc_5928_, 1, v___x_5912_);
v___x_5914_ = v_reuseFailAlloc_5928_;
goto v_reusejp_5913_;
}
v_reusejp_5913_:
{
lean_object* v___x_5915_; lean_object* v___x_5916_; lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; uint8_t v___x_5926_; lean_object* v___x_5927_; 
v___x_5915_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_snd_5906_);
v___x_5916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5916_, 0, v___x_5915_);
lean_ctor_set(v___x_5916_, 1, v___x_5914_);
v___x_5917_ = l_List_reverse___redArg(v___x_5916_);
v___x_5918_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5));
v___x_5919_ = l_Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3(v___x_5917_, v___x_5918_);
v___x_5920_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7);
v___x_5921_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8));
v___x_5922_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5922_, 0, v___x_5921_);
lean_ctor_set(v___x_5922_, 1, v___x_5919_);
v___x_5923_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9));
v___x_5924_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5924_, 0, v___x_5922_);
lean_ctor_set(v___x_5924_, 1, v___x_5923_);
v___x_5925_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5925_, 0, v___x_5920_);
lean_ctor_set(v___x_5925_, 1, v___x_5924_);
v___x_5926_ = 0;
v___x_5927_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5927_, 0, v___x_5925_);
lean_ctor_set_uint8(v___x_5927_, sizeof(void*)*1, v___x_5926_);
return v___x_5927_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4_spec__7(lean_object* v_x_5930_, lean_object* v_x_5931_, lean_object* v_x_5932_){
_start:
{
if (lean_obj_tag(v_x_5932_) == 0)
{
lean_dec(v_x_5930_);
return v_x_5931_;
}
else
{
lean_object* v_head_5933_; lean_object* v_tail_5934_; lean_object* v___x_5936_; uint8_t v_isShared_5937_; uint8_t v_isSharedCheck_5944_; 
v_head_5933_ = lean_ctor_get(v_x_5932_, 0);
v_tail_5934_ = lean_ctor_get(v_x_5932_, 1);
v_isSharedCheck_5944_ = !lean_is_exclusive(v_x_5932_);
if (v_isSharedCheck_5944_ == 0)
{
v___x_5936_ = v_x_5932_;
v_isShared_5937_ = v_isSharedCheck_5944_;
goto v_resetjp_5935_;
}
else
{
lean_inc(v_tail_5934_);
lean_inc(v_head_5933_);
lean_dec(v_x_5932_);
v___x_5936_ = lean_box(0);
v_isShared_5937_ = v_isSharedCheck_5944_;
goto v_resetjp_5935_;
}
v_resetjp_5935_:
{
lean_object* v___x_5939_; 
lean_inc(v_x_5930_);
if (v_isShared_5937_ == 0)
{
lean_ctor_set_tag(v___x_5936_, 5);
lean_ctor_set(v___x_5936_, 1, v_x_5930_);
lean_ctor_set(v___x_5936_, 0, v_x_5931_);
v___x_5939_ = v___x_5936_;
goto v_reusejp_5938_;
}
else
{
lean_object* v_reuseFailAlloc_5943_; 
v_reuseFailAlloc_5943_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5943_, 0, v_x_5931_);
lean_ctor_set(v_reuseFailAlloc_5943_, 1, v_x_5930_);
v___x_5939_ = v_reuseFailAlloc_5943_;
goto v_reusejp_5938_;
}
v_reusejp_5938_:
{
lean_object* v___x_5940_; lean_object* v___x_5941_; 
v___x_5940_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_head_5933_);
v___x_5941_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5941_, 0, v___x_5939_);
lean_ctor_set(v___x_5941_, 1, v___x_5940_);
v_x_5931_ = v___x_5941_;
v_x_5932_ = v_tail_5934_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4(lean_object* v_x_5945_, lean_object* v_x_5946_, lean_object* v_x_5947_){
_start:
{
if (lean_obj_tag(v_x_5947_) == 0)
{
lean_dec(v_x_5945_);
return v_x_5946_;
}
else
{
lean_object* v_head_5948_; lean_object* v_tail_5949_; lean_object* v___x_5951_; uint8_t v_isShared_5952_; uint8_t v_isSharedCheck_5959_; 
v_head_5948_ = lean_ctor_get(v_x_5947_, 0);
v_tail_5949_ = lean_ctor_get(v_x_5947_, 1);
v_isSharedCheck_5959_ = !lean_is_exclusive(v_x_5947_);
if (v_isSharedCheck_5959_ == 0)
{
v___x_5951_ = v_x_5947_;
v_isShared_5952_ = v_isSharedCheck_5959_;
goto v_resetjp_5950_;
}
else
{
lean_inc(v_tail_5949_);
lean_inc(v_head_5948_);
lean_dec(v_x_5947_);
v___x_5951_ = lean_box(0);
v_isShared_5952_ = v_isSharedCheck_5959_;
goto v_resetjp_5950_;
}
v_resetjp_5950_:
{
lean_object* v___x_5954_; 
lean_inc(v_x_5945_);
if (v_isShared_5952_ == 0)
{
lean_ctor_set_tag(v___x_5951_, 5);
lean_ctor_set(v___x_5951_, 1, v_x_5945_);
lean_ctor_set(v___x_5951_, 0, v_x_5946_);
v___x_5954_ = v___x_5951_;
goto v_reusejp_5953_;
}
else
{
lean_object* v_reuseFailAlloc_5958_; 
v_reuseFailAlloc_5958_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5958_, 0, v_x_5946_);
lean_ctor_set(v_reuseFailAlloc_5958_, 1, v_x_5945_);
v___x_5954_ = v_reuseFailAlloc_5958_;
goto v_reusejp_5953_;
}
v_reusejp_5953_:
{
lean_object* v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; 
v___x_5955_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_head_5948_);
v___x_5956_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5956_, 0, v___x_5954_);
lean_ctor_set(v___x_5956_, 1, v___x_5955_);
v___x_5957_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4_spec__7(v_x_5945_, v___x_5956_, v_tail_5949_);
return v___x_5957_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3(lean_object* v_x_5960_, lean_object* v_x_5961_){
_start:
{
if (lean_obj_tag(v_x_5960_) == 0)
{
lean_object* v___x_5962_; 
lean_dec(v_x_5961_);
v___x_5962_ = lean_box(0);
return v___x_5962_;
}
else
{
lean_object* v_tail_5963_; 
v_tail_5963_ = lean_ctor_get(v_x_5960_, 1);
if (lean_obj_tag(v_tail_5963_) == 0)
{
lean_object* v_head_5964_; lean_object* v___x_5965_; 
lean_dec(v_x_5961_);
v_head_5964_ = lean_ctor_get(v_x_5960_, 0);
lean_inc(v_head_5964_);
lean_dec_ref(v_x_5960_);
v___x_5965_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_head_5964_);
return v___x_5965_;
}
else
{
lean_object* v_head_5966_; lean_object* v___x_5967_; lean_object* v___x_5968_; 
lean_inc(v_tail_5963_);
v_head_5966_ = lean_ctor_get(v_x_5960_, 0);
lean_inc(v_head_5966_);
lean_dec_ref(v_x_5960_);
v___x_5967_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_head_5966_);
v___x_5968_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4(v_x_5961_, v___x_5967_, v_tail_5963_);
return v___x_5968_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1(void){
_start:
{
lean_object* v___x_5970_; lean_object* v___x_5971_; 
v___x_5970_ = ((lean_object*)(l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0));
v___x_5971_ = lean_string_length(v___x_5970_);
return v___x_5971_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2(void){
_start:
{
lean_object* v___x_5972_; lean_object* v___x_5973_; 
v___x_5972_ = lean_obj_once(&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1, &l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1_once, _init_l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1);
v___x_5973_ = lean_nat_to_int(v___x_5972_);
return v___x_5973_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2(lean_object* v_xs_5979_){
_start:
{
lean_object* v___x_5980_; lean_object* v___x_5981_; uint8_t v___x_5982_; 
v___x_5980_ = lean_array_get_size(v_xs_5979_);
v___x_5981_ = lean_unsigned_to_nat(0u);
v___x_5982_ = lean_nat_dec_eq(v___x_5980_, v___x_5981_);
if (v___x_5982_ == 0)
{
lean_object* v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; lean_object* v___x_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; 
v___x_5983_ = lean_array_to_list(v_xs_5979_);
v___x_5984_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5));
v___x_5985_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3(v___x_5983_, v___x_5984_);
v___x_5986_ = lean_obj_once(&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2, &l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2_once, _init_l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2);
v___x_5987_ = ((lean_object*)(l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__3));
v___x_5988_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5988_, 0, v___x_5987_);
lean_ctor_set(v___x_5988_, 1, v___x_5985_);
v___x_5989_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10));
v___x_5990_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5990_, 0, v___x_5988_);
lean_ctor_set(v___x_5990_, 1, v___x_5989_);
v___x_5991_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5991_, 0, v___x_5986_);
lean_ctor_set(v___x_5991_, 1, v___x_5990_);
v___x_5992_ = l_Std_Format_fill(v___x_5991_);
return v___x_5992_;
}
else
{
lean_object* v___x_5993_; 
lean_dec_ref(v_xs_5979_);
v___x_5993_ = ((lean_object*)(l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__5));
return v___x_5993_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead(lean_object* v_assignment_5996_, lean_object* v_decl_5997_, lean_object* v_a_5998_, lean_object* v_a_5999_, lean_object* v_a_6000_, lean_object* v_a_6001_){
_start:
{
lean_object* v___y_6004_; lean_object* v___y_6005_; lean_object* v___y_6006_; lean_object* v___y_6007_; lean_object* v_cls_6037_; lean_object* v___x_6038_; lean_object* v_a_6039_; lean_object* v___x_6041_; uint8_t v_isShared_6042_; uint8_t v_isSharedCheck_6098_; 
v_cls_6037_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__3));
v___x_6038_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___redArg(v_cls_6037_, v_a_6000_);
v_a_6039_ = lean_ctor_get(v___x_6038_, 0);
v_isSharedCheck_6098_ = !lean_is_exclusive(v___x_6038_);
if (v_isSharedCheck_6098_ == 0)
{
v___x_6041_ = v___x_6038_;
v_isShared_6042_ = v_isSharedCheck_6098_;
goto v_resetjp_6040_;
}
else
{
lean_inc(v_a_6039_);
lean_dec(v___x_6038_);
v___x_6041_ = lean_box(0);
v_isShared_6042_ = v_isSharedCheck_6098_;
goto v_resetjp_6040_;
}
v___jp_6003_:
{
lean_object* v_toSignature_6008_; lean_object* v_value_6009_; uint8_t v_recursive_6010_; lean_object* v_inlineAttr_x3f_6011_; lean_object* v___x_6013_; uint8_t v_isShared_6014_; uint8_t v_isSharedCheck_6036_; 
v_toSignature_6008_ = lean_ctor_get(v_decl_5997_, 0);
v_value_6009_ = lean_ctor_get(v_decl_5997_, 1);
v_recursive_6010_ = lean_ctor_get_uint8(v_decl_5997_, sizeof(void*)*3);
v_inlineAttr_x3f_6011_ = lean_ctor_get(v_decl_5997_, 2);
v_isSharedCheck_6036_ = !lean_is_exclusive(v_decl_5997_);
if (v_isSharedCheck_6036_ == 0)
{
v___x_6013_ = v_decl_5997_;
v_isShared_6014_ = v_isSharedCheck_6036_;
goto v_resetjp_6012_;
}
else
{
lean_inc(v_inlineAttr_x3f_6011_);
lean_inc(v_value_6009_);
lean_inc(v_toSignature_6008_);
lean_dec(v_decl_5997_);
v___x_6013_ = lean_box(0);
v_isShared_6014_ = v_isSharedCheck_6036_;
goto v_resetjp_6012_;
}
v_resetjp_6012_:
{
lean_object* v___x_6015_; lean_object* v___x_6016_; 
v___x_6015_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___boxed), 7, 1);
lean_closure_set(v___x_6015_, 0, v_assignment_5996_);
v___x_6016_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(v___x_6015_, v_value_6009_, v___y_6004_, v___y_6005_, v___y_6006_, v___y_6007_);
if (lean_obj_tag(v___x_6016_) == 0)
{
lean_object* v_a_6017_; lean_object* v___x_6019_; uint8_t v_isShared_6020_; uint8_t v_isSharedCheck_6027_; 
v_a_6017_ = lean_ctor_get(v___x_6016_, 0);
v_isSharedCheck_6027_ = !lean_is_exclusive(v___x_6016_);
if (v_isSharedCheck_6027_ == 0)
{
v___x_6019_ = v___x_6016_;
v_isShared_6020_ = v_isSharedCheck_6027_;
goto v_resetjp_6018_;
}
else
{
lean_inc(v_a_6017_);
lean_dec(v___x_6016_);
v___x_6019_ = lean_box(0);
v_isShared_6020_ = v_isSharedCheck_6027_;
goto v_resetjp_6018_;
}
v_resetjp_6018_:
{
lean_object* v___x_6022_; 
if (v_isShared_6014_ == 0)
{
lean_ctor_set(v___x_6013_, 1, v_a_6017_);
v___x_6022_ = v___x_6013_;
goto v_reusejp_6021_;
}
else
{
lean_object* v_reuseFailAlloc_6026_; 
v_reuseFailAlloc_6026_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_6026_, 0, v_toSignature_6008_);
lean_ctor_set(v_reuseFailAlloc_6026_, 1, v_a_6017_);
lean_ctor_set(v_reuseFailAlloc_6026_, 2, v_inlineAttr_x3f_6011_);
lean_ctor_set_uint8(v_reuseFailAlloc_6026_, sizeof(void*)*3, v_recursive_6010_);
v___x_6022_ = v_reuseFailAlloc_6026_;
goto v_reusejp_6021_;
}
v_reusejp_6021_:
{
lean_object* v___x_6024_; 
if (v_isShared_6020_ == 0)
{
lean_ctor_set(v___x_6019_, 0, v___x_6022_);
v___x_6024_ = v___x_6019_;
goto v_reusejp_6023_;
}
else
{
lean_object* v_reuseFailAlloc_6025_; 
v_reuseFailAlloc_6025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6025_, 0, v___x_6022_);
v___x_6024_ = v_reuseFailAlloc_6025_;
goto v_reusejp_6023_;
}
v_reusejp_6023_:
{
return v___x_6024_;
}
}
}
}
else
{
lean_object* v_a_6028_; lean_object* v___x_6030_; uint8_t v_isShared_6031_; uint8_t v_isSharedCheck_6035_; 
lean_del_object(v___x_6013_);
lean_dec(v_inlineAttr_x3f_6011_);
lean_dec_ref(v_toSignature_6008_);
v_a_6028_ = lean_ctor_get(v___x_6016_, 0);
v_isSharedCheck_6035_ = !lean_is_exclusive(v___x_6016_);
if (v_isSharedCheck_6035_ == 0)
{
v___x_6030_ = v___x_6016_;
v_isShared_6031_ = v_isSharedCheck_6035_;
goto v_resetjp_6029_;
}
else
{
lean_inc(v_a_6028_);
lean_dec(v___x_6016_);
v___x_6030_ = lean_box(0);
v_isShared_6031_ = v_isSharedCheck_6035_;
goto v_resetjp_6029_;
}
v_resetjp_6029_:
{
lean_object* v___x_6033_; 
if (v_isShared_6031_ == 0)
{
v___x_6033_ = v___x_6030_;
goto v_reusejp_6032_;
}
else
{
lean_object* v_reuseFailAlloc_6034_; 
v_reuseFailAlloc_6034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6034_, 0, v_a_6028_);
v___x_6033_ = v_reuseFailAlloc_6034_;
goto v_reusejp_6032_;
}
v_reusejp_6032_:
{
return v___x_6033_;
}
}
}
}
}
v_resetjp_6040_:
{
lean_object* v___y_6044_; uint8_t v___x_6084_; 
v___x_6084_ = lean_unbox(v_a_6039_);
if (v___x_6084_ == 0)
{
lean_del_object(v___x_6041_);
lean_dec(v_a_6039_);
v___y_6004_ = v_a_5998_;
v___y_6005_ = v_a_5999_;
v___y_6006_ = v_a_6000_;
v___y_6007_ = v_a_6001_;
goto v___jp_6003_;
}
else
{
lean_object* v_size_6085_; lean_object* v_buckets_6086_; lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; uint8_t v___x_6090_; 
v_size_6085_ = lean_ctor_get(v_assignment_5996_, 0);
v_buckets_6086_ = lean_ctor_get(v_assignment_5996_, 1);
v___x_6087_ = lean_mk_empty_array_with_capacity(v_size_6085_);
v___x_6088_ = lean_unsigned_to_nat(0u);
v___x_6089_ = lean_array_get_size(v_buckets_6086_);
v___x_6090_ = lean_nat_dec_lt(v___x_6088_, v___x_6089_);
if (v___x_6090_ == 0)
{
v___y_6044_ = v___x_6087_;
goto v___jp_6043_;
}
else
{
uint8_t v___x_6091_; 
v___x_6091_ = lean_nat_dec_le(v___x_6089_, v___x_6089_);
if (v___x_6091_ == 0)
{
if (v___x_6090_ == 0)
{
v___y_6044_ = v___x_6087_;
goto v___jp_6043_;
}
else
{
size_t v___x_6092_; size_t v___x_6093_; lean_object* v___x_6094_; 
v___x_6092_ = ((size_t)0ULL);
v___x_6093_ = lean_usize_of_nat(v___x_6089_);
v___x_6094_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4(v_buckets_6086_, v___x_6092_, v___x_6093_, v___x_6087_);
v___y_6044_ = v___x_6094_;
goto v___jp_6043_;
}
}
else
{
size_t v___x_6095_; size_t v___x_6096_; lean_object* v___x_6097_; 
v___x_6095_ = ((size_t)0ULL);
v___x_6096_ = lean_usize_of_nat(v___x_6089_);
v___x_6097_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4(v_buckets_6086_, v___x_6095_, v___x_6096_, v___x_6087_);
v___y_6044_ = v___x_6097_;
goto v___jp_6043_;
}
}
}
v___jp_6043_:
{
size_t v_sz_6045_; size_t v___x_6046_; uint8_t v___x_6047_; lean_object* v___x_6048_; 
v_sz_6045_ = lean_array_size(v___y_6044_);
v___x_6046_ = ((size_t)0ULL);
v___x_6047_ = lean_unbox(v_a_6039_);
v___x_6048_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1(v___x_6047_, v_sz_6045_, v___x_6046_, v___y_6044_, v_a_5998_, v_a_5999_, v_a_6000_, v_a_6001_);
if (lean_obj_tag(v___x_6048_) == 0)
{
lean_object* v_toSignature_6049_; lean_object* v_a_6050_; lean_object* v_name_6051_; lean_object* v___x_6052_; uint8_t v___x_6053_; lean_object* v___x_6054_; lean_object* v___x_6055_; lean_object* v___x_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; lean_object* v___x_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; lean_object* v___x_6062_; lean_object* v___x_6064_; 
v_toSignature_6049_ = lean_ctor_get(v_decl_5997_, 0);
v_a_6050_ = lean_ctor_get(v___x_6048_, 0);
lean_inc(v_a_6050_);
lean_dec_ref(v___x_6048_);
v_name_6051_ = lean_ctor_get(v_toSignature_6049_, 0);
v___x_6052_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__0));
v___x_6053_ = lean_unbox(v_a_6039_);
lean_dec(v_a_6039_);
lean_inc(v_name_6051_);
v___x_6054_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_6051_, v___x_6053_);
v___x_6055_ = lean_string_append(v___x_6052_, v___x_6054_);
lean_dec_ref(v___x_6054_);
v___x_6056_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__1));
v___x_6057_ = lean_string_append(v___x_6055_, v___x_6056_);
v___x_6058_ = l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2(v_a_6050_);
v___x_6059_ = l_Std_Format_defWidth;
v___x_6060_ = lean_unsigned_to_nat(0u);
v___x_6061_ = l_Std_Format_pretty(v___x_6058_, v___x_6059_, v___x_6060_, v___x_6060_);
v___x_6062_ = lean_string_append(v___x_6057_, v___x_6061_);
lean_dec_ref(v___x_6061_);
if (v_isShared_6042_ == 0)
{
lean_ctor_set_tag(v___x_6041_, 3);
lean_ctor_set(v___x_6041_, 0, v___x_6062_);
v___x_6064_ = v___x_6041_;
goto v_reusejp_6063_;
}
else
{
lean_object* v_reuseFailAlloc_6075_; 
v_reuseFailAlloc_6075_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6075_, 0, v___x_6062_);
v___x_6064_ = v_reuseFailAlloc_6075_;
goto v_reusejp_6063_;
}
v_reusejp_6063_:
{
lean_object* v___x_6065_; lean_object* v___x_6066_; 
v___x_6065_ = l_Lean_MessageData_ofFormat(v___x_6064_);
v___x_6066_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3(v_cls_6037_, v___x_6065_, v_a_5998_, v_a_5999_, v_a_6000_, v_a_6001_);
if (lean_obj_tag(v___x_6066_) == 0)
{
lean_dec_ref(v___x_6066_);
v___y_6004_ = v_a_5998_;
v___y_6005_ = v_a_5999_;
v___y_6006_ = v_a_6000_;
v___y_6007_ = v_a_6001_;
goto v___jp_6003_;
}
else
{
lean_object* v_a_6067_; lean_object* v___x_6069_; uint8_t v_isShared_6070_; uint8_t v_isSharedCheck_6074_; 
lean_dec_ref(v_decl_5997_);
lean_dec_ref(v_assignment_5996_);
v_a_6067_ = lean_ctor_get(v___x_6066_, 0);
v_isSharedCheck_6074_ = !lean_is_exclusive(v___x_6066_);
if (v_isSharedCheck_6074_ == 0)
{
v___x_6069_ = v___x_6066_;
v_isShared_6070_ = v_isSharedCheck_6074_;
goto v_resetjp_6068_;
}
else
{
lean_inc(v_a_6067_);
lean_dec(v___x_6066_);
v___x_6069_ = lean_box(0);
v_isShared_6070_ = v_isSharedCheck_6074_;
goto v_resetjp_6068_;
}
v_resetjp_6068_:
{
lean_object* v___x_6072_; 
if (v_isShared_6070_ == 0)
{
v___x_6072_ = v___x_6069_;
goto v_reusejp_6071_;
}
else
{
lean_object* v_reuseFailAlloc_6073_; 
v_reuseFailAlloc_6073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6073_, 0, v_a_6067_);
v___x_6072_ = v_reuseFailAlloc_6073_;
goto v_reusejp_6071_;
}
v_reusejp_6071_:
{
return v___x_6072_;
}
}
}
}
}
else
{
lean_object* v_a_6076_; lean_object* v___x_6078_; uint8_t v_isShared_6079_; uint8_t v_isSharedCheck_6083_; 
lean_del_object(v___x_6041_);
lean_dec(v_a_6039_);
lean_dec_ref(v_decl_5997_);
lean_dec_ref(v_assignment_5996_);
v_a_6076_ = lean_ctor_get(v___x_6048_, 0);
v_isSharedCheck_6083_ = !lean_is_exclusive(v___x_6048_);
if (v_isSharedCheck_6083_ == 0)
{
v___x_6078_ = v___x_6048_;
v_isShared_6079_ = v_isSharedCheck_6083_;
goto v_resetjp_6077_;
}
else
{
lean_inc(v_a_6076_);
lean_dec(v___x_6048_);
v___x_6078_ = lean_box(0);
v_isShared_6079_ = v_isSharedCheck_6083_;
goto v_resetjp_6077_;
}
v_resetjp_6077_:
{
lean_object* v___x_6081_; 
if (v_isShared_6079_ == 0)
{
v___x_6081_ = v___x_6078_;
goto v_reusejp_6080_;
}
else
{
lean_object* v_reuseFailAlloc_6082_; 
v_reuseFailAlloc_6082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6082_, 0, v_a_6076_);
v___x_6081_ = v_reuseFailAlloc_6082_;
goto v_reusejp_6080_;
}
v_reusejp_6080_:
{
return v___x_6081_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___boxed(lean_object* v_assignment_6099_, lean_object* v_decl_6100_, lean_object* v_a_6101_, lean_object* v_a_6102_, lean_object* v_a_6103_, lean_object* v_a_6104_, lean_object* v_a_6105_){
_start:
{
lean_object* v_res_6106_; 
v_res_6106_ = l_Lean_Compiler_LCNF_UnreachableBranches_elimDead(v_assignment_6099_, v_decl_6100_, v_a_6101_, v_a_6102_, v_a_6103_, v_a_6104_);
lean_dec(v_a_6104_);
lean_dec_ref(v_a_6103_);
lean_dec(v_a_6102_);
lean_dec_ref(v_a_6101_);
return v_res_6106_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2(lean_object* v_x_6107_, lean_object* v_x_6108_){
_start:
{
lean_object* v___x_6109_; 
v___x_6109_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_x_6107_);
return v___x_6109_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___boxed(lean_object* v_x_6110_, lean_object* v_x_6111_){
_start:
{
lean_object* v_res_6112_; 
v_res_6112_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2(v_x_6110_, v_x_6111_);
lean_dec(v_x_6111_);
return v_res_6112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0(size_t v_sz_6113_, size_t v_i_6114_, lean_object* v_bs_6115_){
_start:
{
uint8_t v___x_6116_; 
v___x_6116_ = lean_usize_dec_lt(v_i_6114_, v_sz_6113_);
if (v___x_6116_ == 0)
{
return v_bs_6115_;
}
else
{
lean_object* v_v_6117_; lean_object* v_toSignature_6118_; lean_object* v_name_6119_; lean_object* v___x_6120_; lean_object* v_bs_x27_6121_; size_t v___x_6122_; size_t v___x_6123_; lean_object* v___x_6124_; 
v_v_6117_ = lean_array_uget_borrowed(v_bs_6115_, v_i_6114_);
v_toSignature_6118_ = lean_ctor_get(v_v_6117_, 0);
v_name_6119_ = lean_ctor_get(v_toSignature_6118_, 0);
lean_inc(v_name_6119_);
v___x_6120_ = lean_unsigned_to_nat(0u);
v_bs_x27_6121_ = lean_array_uset(v_bs_6115_, v_i_6114_, v___x_6120_);
v___x_6122_ = ((size_t)1ULL);
v___x_6123_ = lean_usize_add(v_i_6114_, v___x_6122_);
v___x_6124_ = lean_array_uset(v_bs_x27_6121_, v_i_6114_, v_name_6119_);
v_i_6114_ = v___x_6123_;
v_bs_6115_ = v___x_6124_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0___boxed(lean_object* v_sz_6126_, lean_object* v_i_6127_, lean_object* v_bs_6128_){
_start:
{
size_t v_sz_boxed_6129_; size_t v_i_boxed_6130_; lean_object* v_res_6131_; 
v_sz_boxed_6129_ = lean_unbox_usize(v_sz_6126_);
lean_dec(v_sz_6126_);
v_i_boxed_6130_ = lean_unbox_usize(v_i_6127_);
lean_dec(v_i_6127_);
v_res_6131_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0(v_sz_boxed_6129_, v_i_boxed_6130_, v_bs_6128_);
return v_res_6131_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__1(lean_object* v_a_6132_, lean_object* v_a_6133_){
_start:
{
if (lean_obj_tag(v_a_6132_) == 0)
{
lean_object* v___x_6134_; 
v___x_6134_ = l_List_reverse___redArg(v_a_6133_);
return v___x_6134_;
}
else
{
lean_object* v_head_6135_; lean_object* v_tail_6136_; lean_object* v___x_6138_; uint8_t v_isShared_6139_; uint8_t v_isSharedCheck_6145_; 
v_head_6135_ = lean_ctor_get(v_a_6132_, 0);
v_tail_6136_ = lean_ctor_get(v_a_6132_, 1);
v_isSharedCheck_6145_ = !lean_is_exclusive(v_a_6132_);
if (v_isSharedCheck_6145_ == 0)
{
v___x_6138_ = v_a_6132_;
v_isShared_6139_ = v_isSharedCheck_6145_;
goto v_resetjp_6137_;
}
else
{
lean_inc(v_tail_6136_);
lean_inc(v_head_6135_);
lean_dec(v_a_6132_);
v___x_6138_ = lean_box(0);
v_isShared_6139_ = v_isSharedCheck_6145_;
goto v_resetjp_6137_;
}
v_resetjp_6137_:
{
lean_object* v___x_6140_; lean_object* v___x_6142_; 
v___x_6140_ = l_Lean_MessageData_ofName(v_head_6135_);
if (v_isShared_6139_ == 0)
{
lean_ctor_set(v___x_6138_, 1, v_a_6133_);
lean_ctor_set(v___x_6138_, 0, v___x_6140_);
v___x_6142_ = v___x_6138_;
goto v_reusejp_6141_;
}
else
{
lean_object* v_reuseFailAlloc_6144_; 
v_reuseFailAlloc_6144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6144_, 0, v___x_6140_);
lean_ctor_set(v_reuseFailAlloc_6144_, 1, v_a_6133_);
v___x_6142_ = v_reuseFailAlloc_6144_;
goto v_reusejp_6141_;
}
v_reusejp_6141_:
{
v_a_6132_ = v_tail_6136_;
v_a_6133_ = v___x_6142_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1(void){
_start:
{
lean_object* v___x_6147_; lean_object* v___x_6148_; 
v___x_6147_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__0));
v___x_6148_ = l_Lean_stringToMessageData(v___x_6147_);
return v___x_6148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0(lean_object* v___y_6149_, lean_object* v_x_6150_, lean_object* v___y_6151_, lean_object* v___y_6152_, lean_object* v___y_6153_, lean_object* v___y_6154_, lean_object* v___y_6155_, lean_object* v___y_6156_){
_start:
{
lean_object* v___x_6158_; size_t v_sz_6159_; size_t v___x_6160_; lean_object* v___x_6161_; lean_object* v___x_6162_; lean_object* v___x_6163_; lean_object* v___x_6164_; lean_object* v___x_6165_; lean_object* v___x_6166_; lean_object* v___x_6167_; 
v___x_6158_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1, &l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1);
v_sz_6159_ = lean_array_size(v___y_6149_);
v___x_6160_ = ((size_t)0ULL);
v___x_6161_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0(v_sz_6159_, v___x_6160_, v___y_6149_);
v___x_6162_ = lean_array_to_list(v___x_6161_);
v___x_6163_ = lean_box(0);
v___x_6164_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__1(v___x_6162_, v___x_6163_);
v___x_6165_ = l_Lean_MessageData_ofList(v___x_6164_);
v___x_6166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6166_, 0, v___x_6158_);
lean_ctor_set(v___x_6166_, 1, v___x_6165_);
v___x_6167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6167_, 0, v___x_6166_);
return v___x_6167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___boxed(lean_object* v___y_6168_, lean_object* v_x_6169_, lean_object* v___y_6170_, lean_object* v___y_6171_, lean_object* v___y_6172_, lean_object* v___y_6173_, lean_object* v___y_6174_, lean_object* v___y_6175_, lean_object* v___y_6176_){
_start:
{
lean_object* v_res_6177_; 
v_res_6177_ = l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0(v___y_6168_, v_x_6169_, v___y_6170_, v___y_6171_, v___y_6172_, v___y_6173_, v___y_6174_, v___y_6175_);
lean_dec(v___y_6175_);
lean_dec_ref(v___y_6174_);
lean_dec(v___y_6173_);
lean_dec_ref(v___y_6172_);
lean_dec(v___y_6171_);
lean_dec_ref(v___y_6170_);
lean_dec_ref(v_x_6169_);
return v_res_6177_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0(void){
_start:
{
uint8_t v___x_6178_; lean_object* v___x_6179_; 
v___x_6178_ = 0;
v___x_6179_ = l_Lean_Compiler_LCNF_instInhabitedDecl_default(v___x_6178_);
return v___x_6179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(lean_object* v___y_6180_, lean_object* v_n_6181_, lean_object* v_j_6182_, lean_object* v_a_6183_){
_start:
{
lean_object* v_zero_6184_; uint8_t v_isZero_6185_; 
v_zero_6184_ = lean_unsigned_to_nat(0u);
v_isZero_6185_ = lean_nat_dec_eq(v_j_6182_, v_zero_6184_);
if (v_isZero_6185_ == 1)
{
lean_dec(v_j_6182_);
return v_a_6183_;
}
else
{
lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v_toSignature_6189_; uint8_t v_safe_6190_; lean_object* v_one_6191_; lean_object* v_n_6192_; 
v___x_6186_ = lean_nat_sub(v_n_6181_, v_j_6182_);
v___x_6187_ = lean_obj_once(&l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0, &l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0_once, _init_l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0);
v___x_6188_ = lean_array_get_borrowed(v___x_6187_, v___y_6180_, v___x_6186_);
lean_dec(v___x_6186_);
v_toSignature_6189_ = lean_ctor_get(v___x_6188_, 0);
v_safe_6190_ = lean_ctor_get_uint8(v_toSignature_6189_, sizeof(void*)*4);
v_one_6191_ = lean_unsigned_to_nat(1u);
v_n_6192_ = lean_nat_sub(v_j_6182_, v_one_6191_);
lean_dec(v_j_6182_);
if (v_safe_6190_ == 0)
{
lean_object* v___x_6193_; lean_object* v___x_6194_; 
v___x_6193_ = lean_box(1);
v___x_6194_ = lean_array_push(v_a_6183_, v___x_6193_);
v_j_6182_ = v_n_6192_;
v_a_6183_ = v___x_6194_;
goto _start;
}
else
{
lean_object* v___x_6196_; lean_object* v___x_6197_; 
v___x_6196_ = lean_box(0);
v___x_6197_ = lean_array_push(v_a_6183_, v___x_6196_);
v_j_6182_ = v_n_6192_;
v_a_6183_ = v___x_6197_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___boxed(lean_object* v___y_6199_, lean_object* v_n_6200_, lean_object* v_j_6201_, lean_object* v_a_6202_){
_start:
{
lean_object* v_res_6203_; 
v_res_6203_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(v___y_6199_, v_n_6200_, v_j_6201_, v_a_6202_);
lean_dec(v_n_6200_);
lean_dec_ref(v___y_6199_);
return v_res_6203_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(lean_object* v___x_6204_, lean_object* v_as_6205_, lean_object* v_i_6206_, lean_object* v_j_6207_, lean_object* v_bs_6208_, lean_object* v___y_6209_, lean_object* v___y_6210_, lean_object* v___y_6211_, lean_object* v___y_6212_){
_start:
{
lean_object* v_zero_6214_; uint8_t v_isZero_6215_; 
v_zero_6214_ = lean_unsigned_to_nat(0u);
v_isZero_6215_ = lean_nat_dec_eq(v_i_6206_, v_zero_6214_);
if (v_isZero_6215_ == 1)
{
lean_object* v___x_6216_; 
lean_dec(v_j_6207_);
lean_dec(v_i_6206_);
v___x_6216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6216_, 0, v_bs_6208_);
return v___x_6216_;
}
else
{
lean_object* v___x_6217_; lean_object* v_toSignature_6218_; uint8_t v_safe_6219_; lean_object* v_one_6220_; lean_object* v_n_6221_; lean_object* v_a_6223_; 
v___x_6217_ = lean_array_fget_borrowed(v_as_6205_, v_j_6207_);
v_toSignature_6218_ = lean_ctor_get(v___x_6217_, 0);
v_safe_6219_ = lean_ctor_get_uint8(v_toSignature_6218_, sizeof(void*)*4);
v_one_6220_ = lean_unsigned_to_nat(1u);
v_n_6221_ = lean_nat_sub(v_i_6206_, v_one_6220_);
lean_dec(v_i_6206_);
if (v_safe_6219_ == 0)
{
lean_inc(v___x_6217_);
v_a_6223_ = v___x_6217_;
goto v___jp_6222_;
}
else
{
lean_object* v___x_6227_; lean_object* v___x_6228_; lean_object* v___x_6229_; 
v___x_6227_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__2, &l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__2);
v___x_6228_ = lean_array_get_borrowed(v___x_6227_, v___x_6204_, v_j_6207_);
lean_inc(v___x_6217_);
lean_inc(v___x_6228_);
v___x_6229_ = l_Lean_Compiler_LCNF_UnreachableBranches_elimDead(v___x_6228_, v___x_6217_, v___y_6209_, v___y_6210_, v___y_6211_, v___y_6212_);
if (lean_obj_tag(v___x_6229_) == 0)
{
lean_object* v_a_6230_; 
v_a_6230_ = lean_ctor_get(v___x_6229_, 0);
lean_inc(v_a_6230_);
lean_dec_ref(v___x_6229_);
v_a_6223_ = v_a_6230_;
goto v___jp_6222_;
}
else
{
lean_object* v_a_6231_; lean_object* v___x_6233_; uint8_t v_isShared_6234_; uint8_t v_isSharedCheck_6238_; 
lean_dec(v_n_6221_);
lean_dec_ref(v_bs_6208_);
lean_dec(v_j_6207_);
v_a_6231_ = lean_ctor_get(v___x_6229_, 0);
v_isSharedCheck_6238_ = !lean_is_exclusive(v___x_6229_);
if (v_isSharedCheck_6238_ == 0)
{
v___x_6233_ = v___x_6229_;
v_isShared_6234_ = v_isSharedCheck_6238_;
goto v_resetjp_6232_;
}
else
{
lean_inc(v_a_6231_);
lean_dec(v___x_6229_);
v___x_6233_ = lean_box(0);
v_isShared_6234_ = v_isSharedCheck_6238_;
goto v_resetjp_6232_;
}
v_resetjp_6232_:
{
lean_object* v___x_6236_; 
if (v_isShared_6234_ == 0)
{
v___x_6236_ = v___x_6233_;
goto v_reusejp_6235_;
}
else
{
lean_object* v_reuseFailAlloc_6237_; 
v_reuseFailAlloc_6237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6237_, 0, v_a_6231_);
v___x_6236_ = v_reuseFailAlloc_6237_;
goto v_reusejp_6235_;
}
v_reusejp_6235_:
{
return v___x_6236_;
}
}
}
}
v___jp_6222_:
{
lean_object* v___x_6224_; lean_object* v___x_6225_; 
v___x_6224_ = lean_nat_add(v_j_6207_, v_one_6220_);
lean_dec(v_j_6207_);
v___x_6225_ = lean_array_push(v_bs_6208_, v_a_6223_);
v_i_6206_ = v_n_6221_;
v_j_6207_ = v___x_6224_;
v_bs_6208_ = v___x_6225_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg___boxed(lean_object* v___x_6239_, lean_object* v_as_6240_, lean_object* v_i_6241_, lean_object* v_j_6242_, lean_object* v_bs_6243_, lean_object* v___y_6244_, lean_object* v___y_6245_, lean_object* v___y_6246_, lean_object* v___y_6247_, lean_object* v___y_6248_){
_start:
{
lean_object* v_res_6249_; 
v_res_6249_ = l_Array_mapFinIdxM_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(v___x_6239_, v_as_6240_, v_i_6241_, v_j_6242_, v_bs_6243_, v___y_6244_, v___y_6245_, v___y_6246_, v___y_6247_);
lean_dec(v___y_6247_);
lean_dec_ref(v___y_6246_);
lean_dec(v___y_6245_);
lean_dec_ref(v___y_6244_);
lean_dec_ref(v_as_6240_);
lean_dec_ref(v___x_6239_);
return v_res_6249_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(uint8_t v___x_6252_, lean_object* v_l_6253_, lean_object* v_r_6254_){
_start:
{
lean_object* v_toSignature_6255_; lean_object* v_toSignature_6256_; lean_object* v_name_6257_; lean_object* v_name_6258_; uint8_t v___x_6259_; lean_object* v___x_6260_; lean_object* v___x_6261_; lean_object* v___x_6262_; lean_object* v___x_6263_; lean_object* v___x_6264_; lean_object* v___x_6265_; lean_object* v___x_6266_; lean_object* v___x_6267_; lean_object* v___x_6268_; uint8_t v___x_6269_; 
v_toSignature_6255_ = lean_ctor_get(v_l_6253_, 0);
v_toSignature_6256_ = lean_ctor_get(v_r_6254_, 0);
v_name_6257_ = lean_ctor_get(v_toSignature_6255_, 0);
lean_inc(v_name_6257_);
v_name_6258_ = lean_ctor_get(v_toSignature_6256_, 0);
lean_inc(v_name_6258_);
v___x_6259_ = 0;
v___x_6260_ = l_Lean_Compiler_LCNF_Decl_size(v___x_6259_, v_l_6253_);
lean_dec_ref(v_l_6253_);
v___x_6261_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_6262_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___closed__0));
v___x_6263_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___closed__1));
v___x_6264_ = l_Lean_Name_toString(v_name_6257_, v___x_6252_);
v___x_6265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6265_, 0, v___x_6260_);
lean_ctor_set(v___x_6265_, 1, v___x_6264_);
v___x_6266_ = l_Lean_Compiler_LCNF_Decl_size(v___x_6259_, v_r_6254_);
lean_dec_ref(v_r_6254_);
v___x_6267_ = l_Lean_Name_toString(v_name_6258_, v___x_6252_);
v___x_6268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6268_, 0, v___x_6266_);
lean_ctor_set(v___x_6268_, 1, v___x_6267_);
v___x_6269_ = l_Prod_lexLtDec___aux__1___redArg(v___x_6261_, v___x_6262_, v___x_6263_, v___x_6265_, v___x_6268_);
return v___x_6269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___boxed(lean_object* v___x_6270_, lean_object* v_l_6271_, lean_object* v_r_6272_){
_start:
{
uint8_t v___x_11051__boxed_6273_; uint8_t v_res_6274_; lean_object* v_r_6275_; 
v___x_11051__boxed_6273_ = lean_unbox(v___x_6270_);
v_res_6274_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(v___x_11051__boxed_6273_, v_l_6271_, v_r_6272_);
v_r_6275_ = lean_box(v_res_6274_);
return v_r_6275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(lean_object* v_as_6276_, lean_object* v_lo_6277_, lean_object* v_hi_6278_){
_start:
{
uint8_t v___x_6279_; 
v___x_6279_ = lean_nat_dec_lt(v_lo_6277_, v_hi_6278_);
if (v___x_6279_ == 0)
{
lean_dec(v_lo_6277_);
return v_as_6276_;
}
else
{
lean_object* v___x_6280_; lean_object* v___f_6281_; lean_object* v___x_6282_; lean_object* v_fst_6283_; lean_object* v_snd_6284_; uint8_t v___x_6285_; 
v___x_6280_ = lean_box(v___x_6279_);
v___f_6281_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_6281_, 0, v___x_6280_);
lean_inc(v_lo_6277_);
v___x_6282_ = l_Array_qpartition___redArg(v_as_6276_, v___f_6281_, v_lo_6277_, v_hi_6278_);
v_fst_6283_ = lean_ctor_get(v___x_6282_, 0);
lean_inc(v_fst_6283_);
v_snd_6284_ = lean_ctor_get(v___x_6282_, 1);
lean_inc(v_snd_6284_);
lean_dec_ref(v___x_6282_);
v___x_6285_ = lean_nat_dec_le(v_hi_6278_, v_fst_6283_);
if (v___x_6285_ == 0)
{
lean_object* v___x_6286_; lean_object* v___x_6287_; lean_object* v___x_6288_; 
v___x_6286_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(v_snd_6284_, v_lo_6277_, v_fst_6283_);
v___x_6287_ = lean_unsigned_to_nat(1u);
v___x_6288_ = lean_nat_add(v_fst_6283_, v___x_6287_);
lean_dec(v_fst_6283_);
v_as_6276_ = v___x_6286_;
v_lo_6277_ = v___x_6288_;
goto _start;
}
else
{
lean_dec(v_fst_6283_);
lean_dec(v_lo_6277_);
return v_snd_6284_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___boxed(lean_object* v_as_6290_, lean_object* v_lo_6291_, lean_object* v_hi_6292_){
_start:
{
lean_object* v_res_6293_; 
v_res_6293_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(v_as_6290_, v_lo_6291_, v_hi_6292_);
lean_dec(v_hi_6292_);
return v_res_6293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(lean_object* v___y_6294_, lean_object* v___x_6295_, lean_object* v_n_6296_, lean_object* v_j_6297_, lean_object* v_a_6298_){
_start:
{
lean_object* v_zero_6299_; uint8_t v_isZero_6300_; 
v_zero_6299_ = lean_unsigned_to_nat(0u);
v_isZero_6300_ = lean_nat_dec_eq(v_j_6297_, v_zero_6299_);
if (v_isZero_6300_ == 1)
{
lean_dec(v_j_6297_);
return v_a_6298_;
}
else
{
lean_object* v___x_6301_; lean_object* v___x_6302_; lean_object* v_toSignature_6303_; lean_object* v_name_6304_; lean_object* v___x_6305_; lean_object* v_one_6306_; lean_object* v_n_6307_; lean_object* v___x_6308_; lean_object* v___x_6309_; 
v___x_6301_ = lean_nat_sub(v_n_6296_, v_j_6297_);
v___x_6302_ = lean_array_fget_borrowed(v___y_6294_, v___x_6301_);
v_toSignature_6303_ = lean_ctor_get(v___x_6302_, 0);
v_name_6304_ = lean_ctor_get(v_toSignature_6303_, 0);
v___x_6305_ = lean_box(0);
v_one_6306_ = lean_unsigned_to_nat(1u);
v_n_6307_ = lean_nat_sub(v_j_6297_, v_one_6306_);
lean_dec(v_j_6297_);
v___x_6308_ = lean_array_get(v___x_6305_, v___x_6295_, v___x_6301_);
lean_dec(v___x_6301_);
lean_inc(v_name_6304_);
v___x_6309_ = l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary(v_a_6298_, v_name_6304_, v___x_6308_);
v_j_6297_ = v_n_6307_;
v_a_6298_ = v___x_6309_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg___boxed(lean_object* v___y_6311_, lean_object* v___x_6312_, lean_object* v_n_6313_, lean_object* v_j_6314_, lean_object* v_a_6315_){
_start:
{
lean_object* v_res_6316_; 
v_res_6316_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(v___y_6311_, v___x_6312_, v_n_6313_, v_j_6314_, v_a_6315_);
lean_dec(v_n_6313_);
lean_dec_ref(v___x_6312_);
lean_dec_ref(v___y_6311_);
return v_res_6316_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0(void){
_start:
{
lean_object* v___x_6317_; 
v___x_6317_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_6317_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1(void){
_start:
{
lean_object* v___x_6318_; lean_object* v___x_6319_; 
v___x_6318_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0, &l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0);
v___x_6319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6319_, 0, v___x_6318_);
return v___x_6319_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2(void){
_start:
{
lean_object* v___x_6320_; lean_object* v___x_6321_; 
v___x_6320_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1, &l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1);
v___x_6321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6321_, 0, v___x_6320_);
lean_ctor_set(v___x_6321_, 1, v___x_6320_);
return v___x_6321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches(lean_object* v_decls_6324_, lean_object* v_a_6325_, lean_object* v_a_6326_, lean_object* v_a_6327_, lean_object* v_a_6328_){
_start:
{
lean_object* v___x_6330_; lean_object* v___y_6332_; lean_object* v___y_6333_; lean_object* v___y_6334_; lean_object* v___y_6335_; uint8_t v___y_6370_; lean_object* v___y_6371_; lean_object* v___y_6372_; lean_object* v___y_6373_; lean_object* v___y_6374_; lean_object* v___y_6375_; lean_object* v___y_6376_; lean_object* v___y_6377_; uint8_t v___y_6378_; lean_object* v___y_6379_; lean_object* v___y_6380_; lean_object* v___y_6381_; lean_object* v_a_6382_; uint8_t v___y_6392_; lean_object* v___y_6393_; lean_object* v___y_6394_; lean_object* v___y_6395_; lean_object* v___y_6396_; lean_object* v___y_6397_; lean_object* v___y_6398_; lean_object* v___y_6399_; lean_object* v___y_6400_; uint8_t v___y_6401_; lean_object* v___y_6402_; lean_object* v___y_6403_; lean_object* v_a_6404_; lean_object* v___y_6417_; uint8_t v___y_6418_; lean_object* v___y_6419_; lean_object* v___y_6420_; lean_object* v___y_6421_; lean_object* v___y_6422_; lean_object* v___y_6423_; uint8_t v___y_6424_; lean_object* v___y_6425_; lean_object* v___y_6426_; lean_object* v___y_6468_; lean_object* v___y_6493_; lean_object* v___y_6494_; lean_object* v___x_6496_; uint8_t v___x_6497_; 
v___x_6330_ = lean_unsigned_to_nat(0u);
v___x_6496_ = lean_array_get_size(v_decls_6324_);
v___x_6497_ = lean_nat_dec_eq(v___x_6496_, v___x_6330_);
if (v___x_6497_ == 0)
{
lean_object* v___x_6498_; lean_object* v___x_6499_; lean_object* v___y_6501_; uint8_t v___x_6503_; 
v___x_6498_ = lean_unsigned_to_nat(1u);
v___x_6499_ = lean_nat_sub(v___x_6496_, v___x_6498_);
v___x_6503_ = lean_nat_dec_le(v___x_6330_, v___x_6499_);
if (v___x_6503_ == 0)
{
lean_inc(v___x_6499_);
v___y_6501_ = v___x_6499_;
goto v___jp_6500_;
}
else
{
v___y_6501_ = v___x_6330_;
goto v___jp_6500_;
}
v___jp_6500_:
{
uint8_t v___x_6502_; 
v___x_6502_ = lean_nat_dec_le(v___y_6501_, v___x_6499_);
if (v___x_6502_ == 0)
{
lean_dec(v___x_6499_);
lean_inc(v___y_6501_);
v___y_6493_ = v___y_6501_;
v___y_6494_ = v___y_6501_;
goto v___jp_6492_;
}
else
{
v___y_6493_ = v___y_6501_;
v___y_6494_ = v___x_6499_;
goto v___jp_6492_;
}
}
}
else
{
v___y_6468_ = v_decls_6324_;
goto v___jp_6467_;
}
v___jp_6331_:
{
if (lean_obj_tag(v___y_6335_) == 0)
{
lean_object* v___x_6336_; lean_object* v___x_6337_; lean_object* v_assignments_6338_; lean_object* v_funVals_6339_; lean_object* v_env_6340_; lean_object* v_nextMacroScope_6341_; lean_object* v_ngen_6342_; lean_object* v_auxDeclNGen_6343_; lean_object* v_traceState_6344_; lean_object* v_messages_6345_; lean_object* v_infoState_6346_; lean_object* v_snapshotTasks_6347_; lean_object* v___x_6349_; uint8_t v_isShared_6350_; uint8_t v_isSharedCheck_6359_; 
lean_dec_ref(v___y_6335_);
v___x_6336_ = lean_st_ref_get(v___y_6333_);
lean_dec(v___y_6333_);
v___x_6337_ = lean_st_ref_take(v_a_6328_);
v_assignments_6338_ = lean_ctor_get(v___x_6336_, 0);
lean_inc_ref(v_assignments_6338_);
v_funVals_6339_ = lean_ctor_get(v___x_6336_, 1);
lean_inc_ref(v_funVals_6339_);
lean_dec(v___x_6336_);
v_env_6340_ = lean_ctor_get(v___x_6337_, 0);
v_nextMacroScope_6341_ = lean_ctor_get(v___x_6337_, 1);
v_ngen_6342_ = lean_ctor_get(v___x_6337_, 2);
v_auxDeclNGen_6343_ = lean_ctor_get(v___x_6337_, 3);
v_traceState_6344_ = lean_ctor_get(v___x_6337_, 4);
v_messages_6345_ = lean_ctor_get(v___x_6337_, 6);
v_infoState_6346_ = lean_ctor_get(v___x_6337_, 7);
v_snapshotTasks_6347_ = lean_ctor_get(v___x_6337_, 8);
v_isSharedCheck_6359_ = !lean_is_exclusive(v___x_6337_);
if (v_isSharedCheck_6359_ == 0)
{
lean_object* v_unused_6360_; 
v_unused_6360_ = lean_ctor_get(v___x_6337_, 5);
lean_dec(v_unused_6360_);
v___x_6349_ = v___x_6337_;
v_isShared_6350_ = v_isSharedCheck_6359_;
goto v_resetjp_6348_;
}
else
{
lean_inc(v_snapshotTasks_6347_);
lean_inc(v_infoState_6346_);
lean_inc(v_messages_6345_);
lean_inc(v_traceState_6344_);
lean_inc(v_auxDeclNGen_6343_);
lean_inc(v_ngen_6342_);
lean_inc(v_nextMacroScope_6341_);
lean_inc(v_env_6340_);
lean_dec(v___x_6337_);
v___x_6349_ = lean_box(0);
v_isShared_6350_ = v_isSharedCheck_6359_;
goto v_resetjp_6348_;
}
v_resetjp_6348_:
{
lean_object* v___x_6351_; lean_object* v___x_6352_; lean_object* v___x_6354_; 
lean_inc(v___y_6332_);
v___x_6351_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(v___y_6334_, v_funVals_6339_, v___y_6332_, v___y_6332_, v_env_6340_);
lean_dec_ref(v_funVals_6339_);
v___x_6352_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2, &l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2_once, _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2);
if (v_isShared_6350_ == 0)
{
lean_ctor_set(v___x_6349_, 5, v___x_6352_);
lean_ctor_set(v___x_6349_, 0, v___x_6351_);
v___x_6354_ = v___x_6349_;
goto v_reusejp_6353_;
}
else
{
lean_object* v_reuseFailAlloc_6358_; 
v_reuseFailAlloc_6358_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6358_, 0, v___x_6351_);
lean_ctor_set(v_reuseFailAlloc_6358_, 1, v_nextMacroScope_6341_);
lean_ctor_set(v_reuseFailAlloc_6358_, 2, v_ngen_6342_);
lean_ctor_set(v_reuseFailAlloc_6358_, 3, v_auxDeclNGen_6343_);
lean_ctor_set(v_reuseFailAlloc_6358_, 4, v_traceState_6344_);
lean_ctor_set(v_reuseFailAlloc_6358_, 5, v___x_6352_);
lean_ctor_set(v_reuseFailAlloc_6358_, 6, v_messages_6345_);
lean_ctor_set(v_reuseFailAlloc_6358_, 7, v_infoState_6346_);
lean_ctor_set(v_reuseFailAlloc_6358_, 8, v_snapshotTasks_6347_);
v___x_6354_ = v_reuseFailAlloc_6358_;
goto v_reusejp_6353_;
}
v_reusejp_6353_:
{
lean_object* v___x_6355_; lean_object* v___x_6356_; lean_object* v___x_6357_; 
v___x_6355_ = lean_st_ref_set(v_a_6328_, v___x_6354_);
v___x_6356_ = lean_mk_empty_array_with_capacity(v___y_6332_);
v___x_6357_ = l_Array_mapFinIdxM_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(v_assignments_6338_, v___y_6334_, v___y_6332_, v___x_6330_, v___x_6356_, v_a_6325_, v_a_6326_, v_a_6327_, v_a_6328_);
lean_dec_ref(v___y_6334_);
lean_dec_ref(v_assignments_6338_);
return v___x_6357_;
}
}
}
else
{
lean_object* v_a_6361_; lean_object* v___x_6363_; uint8_t v_isShared_6364_; uint8_t v_isSharedCheck_6368_; 
lean_dec_ref(v___y_6334_);
lean_dec(v___y_6333_);
lean_dec(v___y_6332_);
v_a_6361_ = lean_ctor_get(v___y_6335_, 0);
v_isSharedCheck_6368_ = !lean_is_exclusive(v___y_6335_);
if (v_isSharedCheck_6368_ == 0)
{
v___x_6363_ = v___y_6335_;
v_isShared_6364_ = v_isSharedCheck_6368_;
goto v_resetjp_6362_;
}
else
{
lean_inc(v_a_6361_);
lean_dec(v___y_6335_);
v___x_6363_ = lean_box(0);
v_isShared_6364_ = v_isSharedCheck_6368_;
goto v_resetjp_6362_;
}
v_resetjp_6362_:
{
lean_object* v___x_6366_; 
if (v_isShared_6364_ == 0)
{
v___x_6366_ = v___x_6363_;
goto v_reusejp_6365_;
}
else
{
lean_object* v_reuseFailAlloc_6367_; 
v_reuseFailAlloc_6367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6367_, 0, v_a_6361_);
v___x_6366_ = v_reuseFailAlloc_6367_;
goto v_reusejp_6365_;
}
v_reusejp_6365_:
{
return v___x_6366_;
}
}
}
}
v___jp_6369_:
{
lean_object* v___x_6383_; double v___x_6384_; double v___x_6385_; lean_object* v___x_6386_; lean_object* v___x_6387_; lean_object* v___x_6388_; lean_object* v___x_6389_; lean_object* v___x_6390_; 
v___x_6383_ = lean_io_get_num_heartbeats();
v___x_6384_ = lean_float_of_nat(v___y_6381_);
v___x_6385_ = lean_float_of_nat(v___x_6383_);
v___x_6386_ = lean_box_float(v___x_6384_);
v___x_6387_ = lean_box_float(v___x_6385_);
v___x_6388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6388_, 0, v___x_6386_);
lean_ctor_set(v___x_6388_, 1, v___x_6387_);
v___x_6389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6389_, 0, v_a_6382_);
lean_ctor_set(v___x_6389_, 1, v___x_6388_);
lean_inc_ref(v___y_6373_);
v___x_6390_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3(v___y_6371_, v___y_6378_, v___y_6373_, v___y_6372_, v___y_6370_, v___y_6377_, v___y_6379_, v___x_6389_, v___y_6374_, v___y_6376_, v_a_6325_, v_a_6326_, v_a_6327_, v_a_6328_);
lean_dec_ref(v___y_6374_);
v___y_6332_ = v___y_6375_;
v___y_6333_ = v___y_6376_;
v___y_6334_ = v___y_6380_;
v___y_6335_ = v___x_6390_;
goto v___jp_6331_;
}
v___jp_6391_:
{
lean_object* v___x_6405_; double v___x_6406_; double v___x_6407_; double v___x_6408_; double v___x_6409_; double v___x_6410_; lean_object* v___x_6411_; lean_object* v___x_6412_; lean_object* v___x_6413_; lean_object* v___x_6414_; lean_object* v___x_6415_; 
v___x_6405_ = lean_io_mono_nanos_now();
v___x_6406_ = lean_float_of_nat(v___y_6398_);
v___x_6407_ = lean_float_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__1);
v___x_6408_ = lean_float_div(v___x_6406_, v___x_6407_);
v___x_6409_ = lean_float_of_nat(v___x_6405_);
v___x_6410_ = lean_float_div(v___x_6409_, v___x_6407_);
v___x_6411_ = lean_box_float(v___x_6408_);
v___x_6412_ = lean_box_float(v___x_6410_);
v___x_6413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6413_, 0, v___x_6411_);
lean_ctor_set(v___x_6413_, 1, v___x_6412_);
v___x_6414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6414_, 0, v_a_6404_);
lean_ctor_set(v___x_6414_, 1, v___x_6413_);
lean_inc_ref(v___y_6395_);
v___x_6415_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3(v___y_6393_, v___y_6401_, v___y_6395_, v___y_6394_, v___y_6392_, v___y_6400_, v___y_6402_, v___x_6414_, v___y_6396_, v___y_6399_, v_a_6325_, v_a_6326_, v_a_6327_, v_a_6328_);
lean_dec_ref(v___y_6396_);
v___y_6332_ = v___y_6397_;
v___y_6333_ = v___y_6399_;
v___y_6334_ = v___y_6403_;
v___y_6335_ = v___x_6415_;
goto v___jp_6331_;
}
v___jp_6416_:
{
lean_object* v___x_6427_; lean_object* v_a_6428_; lean_object* v___x_6429_; uint8_t v___x_6430_; 
v___x_6427_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___redArg(v_a_6328_);
v_a_6428_ = lean_ctor_get(v___x_6427_, 0);
lean_inc(v_a_6428_);
lean_dec_ref(v___x_6427_);
v___x_6429_ = l_Lean_trace_profiler_useHeartbeats;
v___x_6430_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v___y_6420_, v___x_6429_);
if (v___x_6430_ == 0)
{
lean_object* v___x_6431_; lean_object* v___x_6432_; 
v___x_6431_ = lean_io_mono_nanos_now();
v___x_6432_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v___x_6330_, v___y_6421_, v___y_6423_, v_a_6325_, v_a_6326_, v_a_6327_, v_a_6328_);
if (lean_obj_tag(v___x_6432_) == 0)
{
lean_object* v_a_6433_; lean_object* v___x_6435_; uint8_t v_isShared_6436_; uint8_t v_isSharedCheck_6440_; 
v_a_6433_ = lean_ctor_get(v___x_6432_, 0);
v_isSharedCheck_6440_ = !lean_is_exclusive(v___x_6432_);
if (v_isSharedCheck_6440_ == 0)
{
v___x_6435_ = v___x_6432_;
v_isShared_6436_ = v_isSharedCheck_6440_;
goto v_resetjp_6434_;
}
else
{
lean_inc(v_a_6433_);
lean_dec(v___x_6432_);
v___x_6435_ = lean_box(0);
v_isShared_6436_ = v_isSharedCheck_6440_;
goto v_resetjp_6434_;
}
v_resetjp_6434_:
{
lean_object* v___x_6438_; 
if (v_isShared_6436_ == 0)
{
lean_ctor_set_tag(v___x_6435_, 1);
v___x_6438_ = v___x_6435_;
goto v_reusejp_6437_;
}
else
{
lean_object* v_reuseFailAlloc_6439_; 
v_reuseFailAlloc_6439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6439_, 0, v_a_6433_);
v___x_6438_ = v_reuseFailAlloc_6439_;
goto v_reusejp_6437_;
}
v_reusejp_6437_:
{
v___y_6392_ = v___y_6418_;
v___y_6393_ = v___y_6417_;
v___y_6394_ = v___y_6420_;
v___y_6395_ = v___y_6419_;
v___y_6396_ = v___y_6421_;
v___y_6397_ = v___y_6422_;
v___y_6398_ = v___x_6431_;
v___y_6399_ = v___y_6423_;
v___y_6400_ = v_a_6428_;
v___y_6401_ = v___y_6424_;
v___y_6402_ = v___y_6425_;
v___y_6403_ = v___y_6426_;
v_a_6404_ = v___x_6438_;
goto v___jp_6391_;
}
}
}
else
{
lean_object* v_a_6441_; lean_object* v___x_6443_; uint8_t v_isShared_6444_; uint8_t v_isSharedCheck_6448_; 
v_a_6441_ = lean_ctor_get(v___x_6432_, 0);
v_isSharedCheck_6448_ = !lean_is_exclusive(v___x_6432_);
if (v_isSharedCheck_6448_ == 0)
{
v___x_6443_ = v___x_6432_;
v_isShared_6444_ = v_isSharedCheck_6448_;
goto v_resetjp_6442_;
}
else
{
lean_inc(v_a_6441_);
lean_dec(v___x_6432_);
v___x_6443_ = lean_box(0);
v_isShared_6444_ = v_isSharedCheck_6448_;
goto v_resetjp_6442_;
}
v_resetjp_6442_:
{
lean_object* v___x_6446_; 
if (v_isShared_6444_ == 0)
{
lean_ctor_set_tag(v___x_6443_, 0);
v___x_6446_ = v___x_6443_;
goto v_reusejp_6445_;
}
else
{
lean_object* v_reuseFailAlloc_6447_; 
v_reuseFailAlloc_6447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6447_, 0, v_a_6441_);
v___x_6446_ = v_reuseFailAlloc_6447_;
goto v_reusejp_6445_;
}
v_reusejp_6445_:
{
v___y_6392_ = v___y_6418_;
v___y_6393_ = v___y_6417_;
v___y_6394_ = v___y_6420_;
v___y_6395_ = v___y_6419_;
v___y_6396_ = v___y_6421_;
v___y_6397_ = v___y_6422_;
v___y_6398_ = v___x_6431_;
v___y_6399_ = v___y_6423_;
v___y_6400_ = v_a_6428_;
v___y_6401_ = v___y_6424_;
v___y_6402_ = v___y_6425_;
v___y_6403_ = v___y_6426_;
v_a_6404_ = v___x_6446_;
goto v___jp_6391_;
}
}
}
}
else
{
lean_object* v___x_6449_; lean_object* v___x_6450_; 
v___x_6449_ = lean_io_get_num_heartbeats();
v___x_6450_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v___x_6330_, v___y_6421_, v___y_6423_, v_a_6325_, v_a_6326_, v_a_6327_, v_a_6328_);
if (lean_obj_tag(v___x_6450_) == 0)
{
lean_object* v_a_6451_; lean_object* v___x_6453_; uint8_t v_isShared_6454_; uint8_t v_isSharedCheck_6458_; 
v_a_6451_ = lean_ctor_get(v___x_6450_, 0);
v_isSharedCheck_6458_ = !lean_is_exclusive(v___x_6450_);
if (v_isSharedCheck_6458_ == 0)
{
v___x_6453_ = v___x_6450_;
v_isShared_6454_ = v_isSharedCheck_6458_;
goto v_resetjp_6452_;
}
else
{
lean_inc(v_a_6451_);
lean_dec(v___x_6450_);
v___x_6453_ = lean_box(0);
v_isShared_6454_ = v_isSharedCheck_6458_;
goto v_resetjp_6452_;
}
v_resetjp_6452_:
{
lean_object* v___x_6456_; 
if (v_isShared_6454_ == 0)
{
lean_ctor_set_tag(v___x_6453_, 1);
v___x_6456_ = v___x_6453_;
goto v_reusejp_6455_;
}
else
{
lean_object* v_reuseFailAlloc_6457_; 
v_reuseFailAlloc_6457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6457_, 0, v_a_6451_);
v___x_6456_ = v_reuseFailAlloc_6457_;
goto v_reusejp_6455_;
}
v_reusejp_6455_:
{
v___y_6370_ = v___y_6418_;
v___y_6371_ = v___y_6417_;
v___y_6372_ = v___y_6420_;
v___y_6373_ = v___y_6419_;
v___y_6374_ = v___y_6421_;
v___y_6375_ = v___y_6422_;
v___y_6376_ = v___y_6423_;
v___y_6377_ = v_a_6428_;
v___y_6378_ = v___y_6424_;
v___y_6379_ = v___y_6425_;
v___y_6380_ = v___y_6426_;
v___y_6381_ = v___x_6449_;
v_a_6382_ = v___x_6456_;
goto v___jp_6369_;
}
}
}
else
{
lean_object* v_a_6459_; lean_object* v___x_6461_; uint8_t v_isShared_6462_; uint8_t v_isSharedCheck_6466_; 
v_a_6459_ = lean_ctor_get(v___x_6450_, 0);
v_isSharedCheck_6466_ = !lean_is_exclusive(v___x_6450_);
if (v_isSharedCheck_6466_ == 0)
{
v___x_6461_ = v___x_6450_;
v_isShared_6462_ = v_isSharedCheck_6466_;
goto v_resetjp_6460_;
}
else
{
lean_inc(v_a_6459_);
lean_dec(v___x_6450_);
v___x_6461_ = lean_box(0);
v_isShared_6462_ = v_isSharedCheck_6466_;
goto v_resetjp_6460_;
}
v_resetjp_6460_:
{
lean_object* v___x_6464_; 
if (v_isShared_6462_ == 0)
{
lean_ctor_set_tag(v___x_6461_, 0);
v___x_6464_ = v___x_6461_;
goto v_reusejp_6463_;
}
else
{
lean_object* v_reuseFailAlloc_6465_; 
v_reuseFailAlloc_6465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6465_, 0, v_a_6459_);
v___x_6464_ = v_reuseFailAlloc_6465_;
goto v_reusejp_6463_;
}
v_reusejp_6463_:
{
v___y_6370_ = v___y_6418_;
v___y_6371_ = v___y_6417_;
v___y_6372_ = v___y_6420_;
v___y_6373_ = v___y_6419_;
v___y_6374_ = v___y_6421_;
v___y_6375_ = v___y_6422_;
v___y_6376_ = v___y_6423_;
v___y_6377_ = v_a_6428_;
v___y_6378_ = v___y_6424_;
v___y_6379_ = v___y_6425_;
v___y_6380_ = v___y_6426_;
v___y_6381_ = v___x_6449_;
v_a_6382_ = v___x_6464_;
goto v___jp_6369_;
}
}
}
}
}
v___jp_6467_:
{
size_t v_sz_6469_; size_t v___x_6470_; lean_object* v_assignments_6471_; lean_object* v___x_6472_; lean_object* v___x_6473_; lean_object* v_funVals_6474_; lean_object* v_state_6475_; lean_object* v___x_6476_; lean_object* v_options_6477_; uint8_t v_hasTrace_6478_; lean_object* v_ctx_6479_; 
v_sz_6469_ = lean_array_size(v___y_6468_);
v___x_6470_ = ((size_t)0ULL);
lean_inc_ref_n(v___y_6468_, 2);
v_assignments_6471_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(v_sz_6469_, v___x_6470_, v___y_6468_);
v___x_6472_ = lean_array_get_size(v___y_6468_);
v___x_6473_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__3));
v_funVals_6474_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(v___y_6468_, v___x_6472_, v___x_6472_, v___x_6473_);
v_state_6475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_state_6475_, 0, v_assignments_6471_);
lean_ctor_set(v_state_6475_, 1, v_funVals_6474_);
v___x_6476_ = lean_st_mk_ref(v_state_6475_);
v_options_6477_ = lean_ctor_get(v_a_6327_, 2);
v_hasTrace_6478_ = lean_ctor_get_uint8(v_options_6477_, sizeof(void*)*1);
v_ctx_6479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_ctx_6479_, 0, v___y_6468_);
lean_ctor_set(v_ctx_6479_, 1, v___x_6330_);
if (v_hasTrace_6478_ == 0)
{
lean_object* v___x_6480_; 
v___x_6480_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v___x_6330_, v_ctx_6479_, v___x_6476_, v_a_6325_, v_a_6326_, v_a_6327_, v_a_6328_);
lean_dec_ref(v_ctx_6479_);
v___y_6332_ = v___x_6472_;
v___y_6333_ = v___x_6476_;
v___y_6334_ = v___y_6468_;
v___y_6335_ = v___x_6480_;
goto v___jp_6331_;
}
else
{
lean_object* v___x_6481_; lean_object* v___x_6482_; lean_object* v_a_6483_; lean_object* v___f_6484_; lean_object* v___x_6485_; uint8_t v___x_6486_; 
v___x_6481_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__3));
v___x_6482_ = l_Lean_isTracingEnabledFor___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(v___x_6481_, v_a_6327_);
v_a_6483_ = lean_ctor_get(v___x_6482_, 0);
lean_inc(v_a_6483_);
lean_dec_ref(v___x_6482_);
lean_inc_ref(v___y_6468_);
v___f_6484_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___boxed), 9, 1);
lean_closure_set(v___f_6484_, 0, v___y_6468_);
v___x_6485_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__4));
v___x_6486_ = lean_unbox(v_a_6483_);
if (v___x_6486_ == 0)
{
lean_object* v___x_6487_; uint8_t v___x_6488_; 
v___x_6487_ = l_Lean_trace_profiler;
v___x_6488_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v_options_6477_, v___x_6487_);
if (v___x_6488_ == 0)
{
lean_object* v___x_6489_; 
lean_dec_ref(v___f_6484_);
lean_dec(v_a_6483_);
v___x_6489_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v___x_6330_, v_ctx_6479_, v___x_6476_, v_a_6325_, v_a_6326_, v_a_6327_, v_a_6328_);
lean_dec_ref(v_ctx_6479_);
v___y_6332_ = v___x_6472_;
v___y_6333_ = v___x_6476_;
v___y_6334_ = v___y_6468_;
v___y_6335_ = v___x_6489_;
goto v___jp_6331_;
}
else
{
uint8_t v___x_6490_; 
v___x_6490_ = lean_unbox(v_a_6483_);
lean_dec(v_a_6483_);
v___y_6417_ = v___x_6481_;
v___y_6418_ = v___x_6490_;
v___y_6419_ = v___x_6485_;
v___y_6420_ = v_options_6477_;
v___y_6421_ = v_ctx_6479_;
v___y_6422_ = v___x_6472_;
v___y_6423_ = v___x_6476_;
v___y_6424_ = v_hasTrace_6478_;
v___y_6425_ = v___f_6484_;
v___y_6426_ = v___y_6468_;
goto v___jp_6416_;
}
}
else
{
uint8_t v___x_6491_; 
v___x_6491_ = lean_unbox(v_a_6483_);
lean_dec(v_a_6483_);
v___y_6417_ = v___x_6481_;
v___y_6418_ = v___x_6491_;
v___y_6419_ = v___x_6485_;
v___y_6420_ = v_options_6477_;
v___y_6421_ = v_ctx_6479_;
v___y_6422_ = v___x_6472_;
v___y_6423_ = v___x_6476_;
v___y_6424_ = v_hasTrace_6478_;
v___y_6425_ = v___f_6484_;
v___y_6426_ = v___y_6468_;
goto v___jp_6416_;
}
}
}
v___jp_6492_:
{
lean_object* v___x_6495_; 
v___x_6495_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(v_decls_6324_, v___y_6493_, v___y_6494_);
lean_dec(v___y_6494_);
v___y_6468_ = v___x_6495_;
goto v___jp_6467_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___boxed(lean_object* v_decls_6504_, lean_object* v_a_6505_, lean_object* v_a_6506_, lean_object* v_a_6507_, lean_object* v_a_6508_, lean_object* v_a_6509_){
_start:
{
lean_object* v_res_6510_; 
v_res_6510_ = l_Lean_Compiler_LCNF_Decl_elimDeadBranches(v_decls_6504_, v_a_6505_, v_a_6506_, v_a_6507_, v_a_6508_);
lean_dec(v_a_6508_);
lean_dec_ref(v_a_6507_);
lean_dec(v_a_6506_);
lean_dec_ref(v_a_6505_);
return v_res_6510_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2(lean_object* v___y_6511_, lean_object* v_n_6512_, lean_object* v_j_6513_, lean_object* v_a_6514_, lean_object* v_a_6515_){
_start:
{
lean_object* v___x_6516_; 
v___x_6516_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(v___y_6511_, v_n_6512_, v_j_6513_, v_a_6515_);
return v___x_6516_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___boxed(lean_object* v___y_6517_, lean_object* v_n_6518_, lean_object* v_j_6519_, lean_object* v_a_6520_, lean_object* v_a_6521_){
_start:
{
lean_object* v_res_6522_; 
v_res_6522_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2(v___y_6517_, v_n_6518_, v_j_6519_, v_a_6520_, v_a_6521_);
lean_dec(v_n_6518_);
lean_dec_ref(v___y_6517_);
return v_res_6522_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3(lean_object* v___y_6523_, lean_object* v___x_6524_, lean_object* v_n_6525_, lean_object* v_j_6526_, lean_object* v_a_6527_, lean_object* v_a_6528_){
_start:
{
lean_object* v___x_6529_; 
v___x_6529_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(v___y_6523_, v___x_6524_, v_n_6525_, v_j_6526_, v_a_6528_);
return v___x_6529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___boxed(lean_object* v___y_6530_, lean_object* v___x_6531_, lean_object* v_n_6532_, lean_object* v_j_6533_, lean_object* v_a_6534_, lean_object* v_a_6535_){
_start:
{
lean_object* v_res_6536_; 
v_res_6536_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3(v___y_6530_, v___x_6531_, v_n_6532_, v_j_6533_, v_a_6534_, v_a_6535_);
lean_dec(v_n_6532_);
lean_dec_ref(v___x_6531_);
lean_dec_ref(v___y_6530_);
return v_res_6536_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4(lean_object* v___x_6537_, lean_object* v_as_6538_, lean_object* v_i_6539_, lean_object* v_j_6540_, lean_object* v_inv_6541_, lean_object* v_bs_6542_, lean_object* v___y_6543_, lean_object* v___y_6544_, lean_object* v___y_6545_, lean_object* v___y_6546_){
_start:
{
lean_object* v___x_6548_; 
v___x_6548_ = l_Array_mapFinIdxM_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(v___x_6537_, v_as_6538_, v_i_6539_, v_j_6540_, v_bs_6542_, v___y_6543_, v___y_6544_, v___y_6545_, v___y_6546_);
return v___x_6548_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___boxed(lean_object* v___x_6549_, lean_object* v_as_6550_, lean_object* v_i_6551_, lean_object* v_j_6552_, lean_object* v_inv_6553_, lean_object* v_bs_6554_, lean_object* v___y_6555_, lean_object* v___y_6556_, lean_object* v___y_6557_, lean_object* v___y_6558_, lean_object* v___y_6559_){
_start:
{
lean_object* v_res_6560_; 
v_res_6560_ = l_Array_mapFinIdxM_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4(v___x_6549_, v_as_6550_, v_i_6551_, v_j_6552_, v_inv_6553_, v_bs_6554_, v___y_6555_, v___y_6556_, v___y_6557_, v___y_6558_);
lean_dec(v___y_6558_);
lean_dec_ref(v___y_6557_);
lean_dec(v___y_6556_);
lean_dec_ref(v___y_6555_);
lean_dec_ref(v_as_6550_);
lean_dec_ref(v___x_6549_);
return v_res_6560_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5(lean_object* v_n_6561_, lean_object* v_as_6562_, lean_object* v_lo_6563_, lean_object* v_hi_6564_, lean_object* v_w_6565_, lean_object* v_hlo_6566_, lean_object* v_hhi_6567_){
_start:
{
lean_object* v___x_6568_; 
v___x_6568_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(v_as_6562_, v_lo_6563_, v_hi_6564_);
return v___x_6568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___boxed(lean_object* v_n_6569_, lean_object* v_as_6570_, lean_object* v_lo_6571_, lean_object* v_hi_6572_, lean_object* v_w_6573_, lean_object* v_hlo_6574_, lean_object* v_hhi_6575_){
_start:
{
lean_object* v_res_6576_; 
v_res_6576_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5(v_n_6569_, v_as_6570_, v_lo_6571_, v_hi_6572_, v_w_6573_, v_hlo_6574_, v_hhi_6575_);
lean_dec(v_hi_6572_);
lean_dec(v_n_6569_);
return v_res_6576_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6636_; lean_object* v___x_6637_; lean_object* v___x_6638_; 
v___x_6636_ = lean_unsigned_to_nat(3955956072u);
v___x_6637_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_));
v___x_6638_ = l_Lean_Name_num___override(v___x_6637_, v___x_6636_);
return v___x_6638_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6640_; lean_object* v___x_6641_; lean_object* v___x_6642_; 
v___x_6640_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_));
v___x_6641_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6642_ = l_Lean_Name_str___override(v___x_6641_, v___x_6640_);
return v___x_6642_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6644_; lean_object* v___x_6645_; lean_object* v___x_6646_; 
v___x_6644_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_));
v___x_6645_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6646_ = l_Lean_Name_str___override(v___x_6645_, v___x_6644_);
return v___x_6646_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6647_; lean_object* v___x_6648_; lean_object* v___x_6649_; 
v___x_6647_ = lean_unsigned_to_nat(2u);
v___x_6648_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6649_ = l_Lean_Name_num___override(v___x_6648_, v___x_6647_);
return v___x_6649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6651_; uint8_t v___x_6652_; lean_object* v___x_6653_; lean_object* v___x_6654_; 
v___x_6651_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__4___redArg___closed__3));
v___x_6652_ = 1;
v___x_6653_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6654_ = l_Lean_registerTraceClass(v___x_6651_, v___x_6652_, v___x_6653_);
return v___x_6654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2____boxed(lean_object* v_a_6655_){
_start:
{
lean_object* v_res_6656_; 
v_res_6656_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_();
return v_res_6656_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ElimDeadBranches(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default = _init_l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default);
l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue = _init_l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue();
lean_mark_persistent(l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue);
l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth = _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth();
lean_mark_persistent(l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth);
res = l_Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ElimDeadBranches(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ElimDeadBranches(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ElimDeadBranches(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ElimDeadBranches(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ElimDeadBranches(builtin);
}
#ifdef __cplusplus
}
#endif
