// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Attr
// Imports: public import Lean.Meta.Tactic.Grind.Injective public import Lean.Meta.Tactic.Grind.Cases public import Lean.Meta.Tactic.Grind.ExtAttr public import Lean.Meta.Tactic.Simp.Attr import Lean.ExtraModUses
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
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_instInhabitedExtensionState_default;
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t l_Lean_Meta_Grind_Theorems_contains___redArg(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_eraseDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_ExtTheorems_eraseDecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkExtension(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_instHashableExtraModUse_hash___boxed(lean_object*);
lean_object* l_Lean_instBEqExtraModUse_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSimpExt(lean_object*);
lean_object* l_Lean_Meta_addDeclToUnfold(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Extension_addEMatchAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_validateCasesAttr(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Extension_addEMatchAttrAndSuggest(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_validateExtAttr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addSymbolPriorityAttr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Extension_addInjectiveAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addSimpTheorem(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* lean_name_append_after(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_CasesTypes_isSplit(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "normExt"};
static const lean_object* l_Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l_Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 117, 24, 11, 244, 218, 170, 88)}};
static const lean_object* l_Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normExt;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindMod"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 252, 83, 80, 136, 168, 19, 119)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "unexpected `grind` theorem kind: `"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_getAttrKindCore___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__5;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_getAttrKindCore___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__7;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "grindEq"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__8_value),LEAN_SCALAR_PTR_LITERAL(179, 34, 219, 24, 240, 38, 65, 204)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindDef"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__10_value),LEAN_SCALAR_PTR_LITERAL(66, 218, 12, 28, 39, 29, 4, 77)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindFwd"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__12_value),LEAN_SCALAR_PTR_LITERAL(121, 161, 177, 116, 112, 162, 92, 47)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindBwd"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__14_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__14_value),LEAN_SCALAR_PTR_LITERAL(114, 163, 57, 243, 160, 41, 114, 23)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindEqRhs"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__16_value),LEAN_SCALAR_PTR_LITERAL(222, 187, 148, 221, 105, 213, 199, 68)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grindEqBoth"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__18_value),LEAN_SCALAR_PTR_LITERAL(79, 230, 133, 190, 186, 228, 109, 128)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindEqBwd"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__20_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__20_value),LEAN_SCALAR_PTR_LITERAL(250, 57, 23, 180, 238, 116, 90, 53)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "grindLR"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__22_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__22_value),LEAN_SCALAR_PTR_LITERAL(152, 111, 188, 78, 132, 212, 97, 164)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "grindRL"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__24 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__24_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__24_value),LEAN_SCALAR_PTR_LITERAL(84, 112, 237, 169, 105, 148, 42, 205)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__25 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindUsr"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__26 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__26_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__26_value),LEAN_SCALAR_PTR_LITERAL(204, 58, 160, 148, 192, 167, 114, 18)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__27 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindGen"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__28 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__28_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__28_value),LEAN_SCALAR_PTR_LITERAL(186, 203, 120, 147, 97, 215, 208, 134)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__29 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindCases"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__30 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__30_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__30_value),LEAN_SCALAR_PTR_LITERAL(85, 142, 28, 230, 49, 50, 229, 162)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__31 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "grindCasesEager"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__32 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__32_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__32_value),LEAN_SCALAR_PTR_LITERAL(75, 210, 92, 40, 190, 183, 142, 70)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__33 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindIntro"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__34 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__34_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__34_value),LEAN_SCALAR_PTR_LITERAL(142, 126, 114, 89, 237, 253, 56, 138)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__35 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindExt"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__36 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__36_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__36_value),LEAN_SCALAR_PTR_LITERAL(147, 193, 153, 166, 243, 149, 163, 253)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__37 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindInj"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__38 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__38_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__38_value),LEAN_SCALAR_PTR_LITERAL(223, 225, 41, 9, 21, 5, 145, 193)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__39 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindFunCC"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__40 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__40_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__40_value),LEAN_SCALAR_PTR_LITERAL(217, 20, 186, 134, 249, 79, 78, 43)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__41 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "grindNorm"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__42 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__42_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__42_value),LEAN_SCALAR_PTR_LITERAL(166, 126, 146, 239, 104, 253, 29, 148)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__43 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grindUnfold"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__44 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__44_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__44_value),LEAN_SCALAR_PTR_LITERAL(214, 181, 37, 92, 122, 232, 164, 219)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__45 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindSym"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__46 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__46_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__46_value),LEAN_SCALAR_PTR_LITERAL(104, 204, 11, 169, 55, 109, 254, 23)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__47 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "priority expected"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__48 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__48_value;
static lean_once_cell_t l_Lean_Meta_Grind_getAttrKindCore___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__49;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__50 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpPost"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__51 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__51_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__52_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__52_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__52_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__51_value),LEAN_SCALAR_PTR_LITERAL(38, 218, 35, 149, 208, 200, 230, 161)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__52 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__52_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "simpPre"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__53 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__53_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__54_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__54_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__54_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__53_value),LEAN_SCALAR_PTR_LITERAL(197, 59, 48, 6, 36, 81, 149, 152)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__54 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__54_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__55 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__55_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__56 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__57 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__57_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__58 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__58_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__59 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__59_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__60 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__60_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__60_value)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__61 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__61_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "the modifier `usr` is only relevant in parameters for `grind only`"};
static const lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 115, .m_capacity = 115, .m_length = 114, .m_data = "\?]` is a helper attribute for displaying inferred patterns, if you want to remove the attribute, consider using `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "]` instead"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 8}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "cannot mark declaration to be unfolded by `grind`"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "invalid `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " intro]`, `"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "` is not an inductive predicate"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "symbol priorities must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "normalizer must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "declaration to unfold must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqExtraModUse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0_value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableExtraModUse_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0_value;
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1_value;
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__2;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__3 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "When applied to an equational theorem, `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " =]`, `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " =_]`, or `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = " _=_]`will mark the theorem for use in heuristic instantiations by the `"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 136, .m_capacity = 136, .m_length = 135, .m_data = "` tactic,\n      using respectively the left-hand side, the right-hand side, or both sides of the theorem.When applied to a function, `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 112, .m_capacity = 112, .m_length = 111, .m_data = " =]` automatically annotates the equational theorems associated with that function.When applied to a theorem `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 183, .m_capacity = 183, .m_length = 180, .m_data = " ←]` will instantiate the theorem whenever it encounters the conclusion of the theorem\n      (that is, it will use the theorem for backwards reasoning).When applied to a theorem `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 190, .m_capacity = 190, .m_length = 187, .m_data = " →]` will instantiate the theorem whenever it encounters sufficiently many of the propositional hypotheses\n      (that is, it will use the theorem for forwards reasoning).The attribute `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "]` by itself will effectively try `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 68, .m_data = " ←]` (if the conclusion is sufficient for instantiation) and then `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 165, .m_capacity = 165, .m_length = 162, .m_data = " →]`.The `grind` tactic utilizes annotated theorems to add instances of matching patterns into the local context during proof search.For example, if a theorem `@["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 179, .m_capacity = 179, .m_length = 178, .m_data = " =] theorem foo_idempotent : foo (foo x) = foo x` is annotated,`grind` will add an instance of this theorem to the local context whenever it encounters the pattern `foo (foo x)`."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "The `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "]` attribute is used to annotate declarations."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "\?]` attribute is identical to the `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "]` attribute, but displays inferred pattern information."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "!]` attribute is used to annotate declarations, but selecting minimal indexable subterms."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "!\?]` attribute is identical to the `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "!]` attribute, but displays inferred pattern information."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "!"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "!\?"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_extensionMapRef;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr___auto__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__36_value),LEAN_SCALAR_PTR_LITERAL(160, 1, 171, 211, 177, 132, 129, 49)}};
static const lean_object* l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_grindExt;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = ((lean_object*)(l_Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_));
v___x_12_ = l_Lean_Meta_mkSimpExt(v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2____boxed(lean_object* v_a_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_();
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx(lean_object* v_x_15_){
_start:
{
switch(lean_obj_tag(v_x_15_))
{
case 0:
{
lean_object* v___x_16_; 
v___x_16_ = lean_unsigned_to_nat(0u);
return v___x_16_;
}
case 1:
{
lean_object* v___x_17_; 
v___x_17_ = lean_unsigned_to_nat(1u);
return v___x_17_;
}
case 2:
{
lean_object* v___x_18_; 
v___x_18_ = lean_unsigned_to_nat(2u);
return v___x_18_;
}
case 3:
{
lean_object* v___x_19_; 
v___x_19_ = lean_unsigned_to_nat(3u);
return v___x_19_;
}
case 4:
{
lean_object* v___x_20_; 
v___x_20_ = lean_unsigned_to_nat(4u);
return v___x_20_;
}
case 5:
{
lean_object* v___x_21_; 
v___x_21_ = lean_unsigned_to_nat(5u);
return v___x_21_;
}
case 6:
{
lean_object* v___x_22_; 
v___x_22_ = lean_unsigned_to_nat(6u);
return v___x_22_;
}
case 7:
{
lean_object* v___x_23_; 
v___x_23_ = lean_unsigned_to_nat(7u);
return v___x_23_;
}
case 8:
{
lean_object* v___x_24_; 
v___x_24_ = lean_unsigned_to_nat(8u);
return v___x_24_;
}
default: 
{
lean_object* v___x_25_; 
v___x_25_ = lean_unsigned_to_nat(9u);
return v___x_25_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx___boxed(lean_object* v_x_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_Meta_Grind_AttrKind_ctorIdx(v_x_26_);
lean_dec(v_x_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(lean_object* v_t_28_, lean_object* v_k_29_){
_start:
{
switch(lean_obj_tag(v_t_28_))
{
case 0:
{
lean_object* v_k_30_; lean_object* v___x_31_; 
v_k_30_ = lean_ctor_get(v_t_28_, 0);
lean_inc(v_k_30_);
lean_dec_ref(v_t_28_);
v___x_31_ = lean_apply_1(v_k_29_, v_k_30_);
return v___x_31_;
}
case 1:
{
uint8_t v_eager_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v_eager_32_ = lean_ctor_get_uint8(v_t_28_, 0);
lean_dec_ref(v_t_28_);
v___x_33_ = lean_box(v_eager_32_);
v___x_34_ = lean_apply_1(v_k_29_, v___x_33_);
return v___x_34_;
}
case 5:
{
lean_object* v_prio_35_; lean_object* v___x_36_; 
v_prio_35_ = lean_ctor_get(v_t_28_, 0);
lean_inc(v_prio_35_);
lean_dec_ref(v_t_28_);
v___x_36_ = lean_apply_1(v_k_29_, v_prio_35_);
return v___x_36_;
}
case 8:
{
uint8_t v_post_37_; uint8_t v_inv_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v_post_37_ = lean_ctor_get_uint8(v_t_28_, 0);
v_inv_38_ = lean_ctor_get_uint8(v_t_28_, 1);
lean_dec_ref(v_t_28_);
v___x_39_ = lean_box(v_post_37_);
v___x_40_ = lean_box(v_inv_38_);
v___x_41_ = lean_apply_2(v_k_29_, v___x_39_, v___x_40_);
return v___x_41_;
}
default: 
{
lean_dec(v_t_28_);
return v_k_29_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim(lean_object* v_motive_42_, lean_object* v_ctorIdx_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_k_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_44_, v_k_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___boxed(lean_object* v_motive_48_, lean_object* v_ctorIdx_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_k_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lean_Meta_Grind_AttrKind_ctorElim(v_motive_48_, v_ctorIdx_49_, v_t_50_, v_h_51_, v_k_52_);
lean_dec(v_ctorIdx_49_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim___redArg(lean_object* v_t_54_, lean_object* v_ematch_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_54_, v_ematch_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim(lean_object* v_motive_57_, lean_object* v_t_58_, lean_object* v_h_59_, lean_object* v_ematch_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_58_, v_ematch_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim___redArg(lean_object* v_t_62_, lean_object* v_cases_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_62_, v_cases_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim(lean_object* v_motive_65_, lean_object* v_t_66_, lean_object* v_h_67_, lean_object* v_cases_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_66_, v_cases_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim___redArg(lean_object* v_t_70_, lean_object* v_intro_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_70_, v_intro_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim(lean_object* v_motive_73_, lean_object* v_t_74_, lean_object* v_h_75_, lean_object* v_intro_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_74_, v_intro_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim___redArg(lean_object* v_t_78_, lean_object* v_infer_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_78_, v_infer_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim(lean_object* v_motive_81_, lean_object* v_t_82_, lean_object* v_h_83_, lean_object* v_infer_84_){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_82_, v_infer_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim___redArg(lean_object* v_t_86_, lean_object* v_ext_87_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_86_, v_ext_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim(lean_object* v_motive_89_, lean_object* v_t_90_, lean_object* v_h_91_, lean_object* v_ext_92_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_90_, v_ext_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim___redArg(lean_object* v_t_94_, lean_object* v_symbol_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_94_, v_symbol_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim(lean_object* v_motive_97_, lean_object* v_t_98_, lean_object* v_h_99_, lean_object* v_symbol_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_98_, v_symbol_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim___redArg(lean_object* v_t_102_, lean_object* v_inj_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_102_, v_inj_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim(lean_object* v_motive_105_, lean_object* v_t_106_, lean_object* v_h_107_, lean_object* v_inj_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_106_, v_inj_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim___redArg(lean_object* v_t_110_, lean_object* v_funCC_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_110_, v_funCC_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim(lean_object* v_motive_113_, lean_object* v_t_114_, lean_object* v_h_115_, lean_object* v_funCC_116_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_114_, v_funCC_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim___redArg(lean_object* v_t_118_, lean_object* v_norm_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_118_, v_norm_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim(lean_object* v_motive_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_norm_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_122_, v_norm_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim___redArg(lean_object* v_t_126_, lean_object* v_unfold_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_126_, v_unfold_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim(lean_object* v_motive_129_, lean_object* v_t_130_, lean_object* v_h_131_, lean_object* v_unfold_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_130_, v_unfold_132_);
return v___x_133_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_134_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0);
v___x_136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
return v___x_136_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_137_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1);
v___x_138_ = lean_unsigned_to_nat(0u);
v___x_139_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
lean_ctor_set(v___x_139_, 1, v___x_138_);
lean_ctor_set(v___x_139_, 2, v___x_138_);
lean_ctor_set(v___x_139_, 3, v___x_137_);
lean_ctor_set(v___x_139_, 4, v___x_137_);
lean_ctor_set(v___x_139_, 5, v___x_137_);
lean_ctor_set(v___x_139_, 6, v___x_137_);
lean_ctor_set(v___x_139_, 7, v___x_137_);
lean_ctor_set(v___x_139_, 8, v___x_137_);
return v___x_139_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = lean_unsigned_to_nat(32u);
v___x_141_ = lean_mk_empty_array_with_capacity(v___x_140_);
v___x_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
return v___x_142_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_143_ = ((size_t)5ULL);
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = lean_unsigned_to_nat(32u);
v___x_146_ = lean_mk_empty_array_with_capacity(v___x_145_);
v___x_147_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3);
v___x_148_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_148_, 0, v___x_147_);
lean_ctor_set(v___x_148_, 1, v___x_146_);
lean_ctor_set(v___x_148_, 2, v___x_144_);
lean_ctor_set(v___x_148_, 3, v___x_144_);
lean_ctor_set_usize(v___x_148_, 4, v___x_143_);
return v___x_148_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_149_ = lean_box(1);
v___x_150_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4);
v___x_151_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1);
v___x_152_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
lean_ctor_set(v___x_152_, 1, v___x_150_);
lean_ctor_set(v___x_152_, 2, v___x_149_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(lean_object* v_msgData_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
lean_object* v___x_157_; lean_object* v_env_158_; lean_object* v_options_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_157_ = lean_st_ref_get(v___y_155_);
v_env_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc_ref(v_env_158_);
lean_dec(v___x_157_);
v_options_159_ = lean_ctor_get(v___y_154_, 2);
v___x_160_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2);
v___x_161_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_159_);
v___x_162_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_162_, 0, v_env_158_);
lean_ctor_set(v___x_162_, 1, v___x_160_);
lean_ctor_set(v___x_162_, 2, v___x_161_);
lean_ctor_set(v___x_162_, 3, v_options_159_);
v___x_163_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
lean_ctor_set(v___x_163_, 1, v_msgData_153_);
v___x_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___boxed(lean_object* v_msgData_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(v_msgData_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(lean_object* v_msg_170_, lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_ref_174_; lean_object* v___x_175_; lean_object* v_a_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_184_; 
v_ref_174_ = lean_ctor_get(v___y_171_, 5);
v___x_175_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(v_msg_170_, v___y_171_, v___y_172_);
v_a_176_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_184_ == 0)
{
v___x_178_ = v___x_175_;
v_isShared_179_ = v_isSharedCheck_184_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_a_176_);
lean_dec(v___x_175_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_184_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_180_; lean_object* v___x_182_; 
lean_inc(v_ref_174_);
v___x_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_180_, 0, v_ref_174_);
lean_ctor_set(v___x_180_, 1, v_a_176_);
if (v_isShared_179_ == 0)
{
lean_ctor_set_tag(v___x_178_, 1);
lean_ctor_set(v___x_178_, 0, v___x_180_);
v___x_182_ = v___x_178_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_180_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg___boxed(lean_object* v_msg_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v_msg_185_, v___y_186_, v___y_187_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(lean_object* v_ref_190_, lean_object* v_msg_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_fileName_195_; lean_object* v_fileMap_196_; lean_object* v_options_197_; lean_object* v_currRecDepth_198_; lean_object* v_maxRecDepth_199_; lean_object* v_ref_200_; lean_object* v_currNamespace_201_; lean_object* v_openDecls_202_; lean_object* v_initHeartbeats_203_; lean_object* v_maxHeartbeats_204_; lean_object* v_quotContext_205_; lean_object* v_currMacroScope_206_; uint8_t v_diag_207_; lean_object* v_cancelTk_x3f_208_; uint8_t v_suppressElabErrors_209_; lean_object* v_inheritedTraceOptions_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_219_; 
v_fileName_195_ = lean_ctor_get(v___y_192_, 0);
v_fileMap_196_ = lean_ctor_get(v___y_192_, 1);
v_options_197_ = lean_ctor_get(v___y_192_, 2);
v_currRecDepth_198_ = lean_ctor_get(v___y_192_, 3);
v_maxRecDepth_199_ = lean_ctor_get(v___y_192_, 4);
v_ref_200_ = lean_ctor_get(v___y_192_, 5);
v_currNamespace_201_ = lean_ctor_get(v___y_192_, 6);
v_openDecls_202_ = lean_ctor_get(v___y_192_, 7);
v_initHeartbeats_203_ = lean_ctor_get(v___y_192_, 8);
v_maxHeartbeats_204_ = lean_ctor_get(v___y_192_, 9);
v_quotContext_205_ = lean_ctor_get(v___y_192_, 10);
v_currMacroScope_206_ = lean_ctor_get(v___y_192_, 11);
v_diag_207_ = lean_ctor_get_uint8(v___y_192_, sizeof(void*)*14);
v_cancelTk_x3f_208_ = lean_ctor_get(v___y_192_, 12);
v_suppressElabErrors_209_ = lean_ctor_get_uint8(v___y_192_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_210_ = lean_ctor_get(v___y_192_, 13);
v_isSharedCheck_219_ = !lean_is_exclusive(v___y_192_);
if (v_isSharedCheck_219_ == 0)
{
v___x_212_ = v___y_192_;
v_isShared_213_ = v_isSharedCheck_219_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_inheritedTraceOptions_210_);
lean_inc(v_cancelTk_x3f_208_);
lean_inc(v_currMacroScope_206_);
lean_inc(v_quotContext_205_);
lean_inc(v_maxHeartbeats_204_);
lean_inc(v_initHeartbeats_203_);
lean_inc(v_openDecls_202_);
lean_inc(v_currNamespace_201_);
lean_inc(v_ref_200_);
lean_inc(v_maxRecDepth_199_);
lean_inc(v_currRecDepth_198_);
lean_inc(v_options_197_);
lean_inc(v_fileMap_196_);
lean_inc(v_fileName_195_);
lean_dec(v___y_192_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_219_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v_ref_214_; lean_object* v___x_216_; 
v_ref_214_ = l_Lean_replaceRef(v_ref_190_, v_ref_200_);
lean_dec(v_ref_200_);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 5, v_ref_214_);
v___x_216_ = v___x_212_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_fileName_195_);
lean_ctor_set(v_reuseFailAlloc_218_, 1, v_fileMap_196_);
lean_ctor_set(v_reuseFailAlloc_218_, 2, v_options_197_);
lean_ctor_set(v_reuseFailAlloc_218_, 3, v_currRecDepth_198_);
lean_ctor_set(v_reuseFailAlloc_218_, 4, v_maxRecDepth_199_);
lean_ctor_set(v_reuseFailAlloc_218_, 5, v_ref_214_);
lean_ctor_set(v_reuseFailAlloc_218_, 6, v_currNamespace_201_);
lean_ctor_set(v_reuseFailAlloc_218_, 7, v_openDecls_202_);
lean_ctor_set(v_reuseFailAlloc_218_, 8, v_initHeartbeats_203_);
lean_ctor_set(v_reuseFailAlloc_218_, 9, v_maxHeartbeats_204_);
lean_ctor_set(v_reuseFailAlloc_218_, 10, v_quotContext_205_);
lean_ctor_set(v_reuseFailAlloc_218_, 11, v_currMacroScope_206_);
lean_ctor_set(v_reuseFailAlloc_218_, 12, v_cancelTk_x3f_208_);
lean_ctor_set(v_reuseFailAlloc_218_, 13, v_inheritedTraceOptions_210_);
lean_ctor_set_uint8(v_reuseFailAlloc_218_, sizeof(void*)*14, v_diag_207_);
lean_ctor_set_uint8(v_reuseFailAlloc_218_, sizeof(void*)*14 + 1, v_suppressElabErrors_209_);
v___x_216_ = v_reuseFailAlloc_218_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v_msg_191_, v___x_216_, v___y_193_);
lean_dec_ref(v___x_216_);
return v___x_217_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg___boxed(lean_object* v_ref_220_, lean_object* v_msg_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(v_ref_220_, v_msg_221_, v___y_222_, v___y_223_);
lean_dec(v___y_223_);
lean_dec(v_ref_220_);
return v_res_225_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__4));
v___x_236_ = l_Lean_stringToMessageData(v___x_235_);
return v___x_236_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_238_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__6));
v___x_239_ = l_Lean_stringToMessageData(v___x_238_);
return v___x_239_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAttrKindCore___closed__49(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__48));
v___x_362_ = l_Lean_stringToMessageData(v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore(lean_object* v_stx_390_, lean_object* v_a_391_, lean_object* v_a_392_){
_start:
{
lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_394_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__3));
lean_inc(v_stx_390_);
v___x_395_ = l_Lean_Syntax_isOfKind(v_stx_390_, v___x_394_);
if (v___x_395_ == 0)
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_396_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_397_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_398_, 0, v___x_396_);
lean_ctor_set(v___x_398_, 1, v___x_397_);
v___x_399_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_398_);
lean_ctor_set(v___x_400_, 1, v___x_399_);
v___x_401_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_400_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_401_;
}
else
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; uint8_t v___x_405_; 
v___x_402_ = lean_unsigned_to_nat(0u);
v___x_403_ = l_Lean_Syntax_getArg(v_stx_390_, v___x_402_);
v___x_404_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__9));
lean_inc(v___x_403_);
v___x_405_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_404_);
if (v___x_405_ == 0)
{
lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_406_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__11));
lean_inc(v___x_403_);
v___x_407_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_406_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_408_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__13));
lean_inc(v___x_403_);
v___x_409_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__15));
lean_inc(v___x_403_);
v___x_411_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__17));
lean_inc(v___x_403_);
v___x_413_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_412_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_414_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__19));
lean_inc(v___x_403_);
v___x_415_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_414_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; uint8_t v___x_417_; 
v___x_416_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__21));
lean_inc(v___x_403_);
v___x_417_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_416_);
if (v___x_417_ == 0)
{
lean_object* v___x_418_; uint8_t v___x_419_; 
v___x_418_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__23));
lean_inc(v___x_403_);
v___x_419_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_418_);
if (v___x_419_ == 0)
{
lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_420_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__25));
lean_inc(v___x_403_);
v___x_421_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_420_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_422_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__27));
lean_inc(v___x_403_);
v___x_423_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_422_);
if (v___x_423_ == 0)
{
lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_424_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
lean_inc(v___x_403_);
v___x_425_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__31));
lean_inc(v___x_403_);
v___x_427_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; uint8_t v___x_429_; 
v___x_428_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__33));
lean_inc(v___x_403_);
v___x_429_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_428_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_430_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__35));
lean_inc(v___x_403_);
v___x_431_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_430_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_432_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__37));
lean_inc(v___x_403_);
v___x_433_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_434_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__39));
lean_inc(v___x_403_);
v___x_435_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_434_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_436_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__41));
lean_inc(v___x_403_);
v___x_437_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_436_);
if (v___x_437_ == 0)
{
lean_object* v___x_438_; uint8_t v___x_439_; 
v___x_438_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__43));
lean_inc(v___x_403_);
v___x_439_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_438_);
if (v___x_439_ == 0)
{
lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_440_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__45));
lean_inc(v___x_403_);
v___x_441_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_440_);
if (v___x_441_ == 0)
{
lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_442_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__47));
lean_inc(v___x_403_);
v___x_443_ = l_Lean_Syntax_isOfKind(v___x_403_, v___x_442_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
lean_dec(v___x_403_);
v___x_444_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_445_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_444_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
v___x_447_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_446_);
lean_ctor_set(v___x_448_, 1, v___x_447_);
v___x_449_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_448_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_449_;
}
else
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
lean_dec(v_stx_390_);
v___x_450_ = lean_unsigned_to_nat(1u);
v___x_451_ = l_Lean_Syntax_getArg(v___x_403_, v___x_450_);
lean_dec(v___x_403_);
v___x_452_ = l_Lean_Syntax_isNatLit_x3f(v___x_451_);
if (lean_obj_tag(v___x_452_) == 1)
{
lean_object* v_val_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_461_; 
lean_dec(v___x_451_);
lean_dec_ref(v_a_391_);
v_val_453_ = lean_ctor_get(v___x_452_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_461_ == 0)
{
v___x_455_ = v___x_452_;
v_isShared_456_ = v_isSharedCheck_461_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_val_453_);
lean_dec(v___x_452_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_461_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_458_; 
if (v_isShared_456_ == 0)
{
lean_ctor_set_tag(v___x_455_, 5);
v___x_458_ = v___x_455_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_val_453_);
v___x_458_ = v_reuseFailAlloc_460_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
lean_object* v___x_459_; 
v___x_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
return v___x_459_;
}
}
}
else
{
lean_object* v___x_462_; lean_object* v___x_463_; 
lean_dec(v___x_452_);
v___x_462_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__49, &l_Lean_Meta_Grind_getAttrKindCore___closed__49_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__49);
v___x_463_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(v___x_451_, v___x_462_, v_a_391_, v_a_392_);
lean_dec(v___x_451_);
return v___x_463_;
}
}
}
else
{
lean_object* v___x_464_; lean_object* v___x_465_; 
lean_dec(v___x_403_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_464_ = lean_box(9);
v___x_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
return v___x_465_;
}
}
else
{
lean_object* v___x_466_; lean_object* v___x_467_; uint8_t v___x_468_; 
v___x_466_ = lean_unsigned_to_nat(1u);
v___x_467_ = l_Lean_Syntax_getArg(v___x_403_, v___x_466_);
lean_inc(v___x_467_);
v___x_468_ = l_Lean_Syntax_matchesNull(v___x_467_, v___x_402_);
if (v___x_468_ == 0)
{
uint8_t v___x_469_; 
lean_inc(v___x_467_);
v___x_469_ = l_Lean_Syntax_matchesNull(v___x_467_, v___x_466_);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
lean_dec(v___x_467_);
lean_dec(v___x_403_);
v___x_470_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_471_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_472_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_470_);
lean_ctor_set(v___x_472_, 1, v___x_471_);
v___x_473_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_474_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_472_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
v___x_475_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_474_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_475_;
}
else
{
lean_object* v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; 
v___x_476_ = l_Lean_Syntax_getArg(v___x_467_, v___x_402_);
lean_dec(v___x_467_);
v___x_477_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__52));
lean_inc(v___x_476_);
v___x_478_ = l_Lean_Syntax_isOfKind(v___x_476_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_479_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__54));
v___x_480_ = l_Lean_Syntax_isOfKind(v___x_476_, v___x_479_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
lean_dec(v___x_403_);
v___x_481_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_482_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_481_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
v___x_484_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_485_, 0, v___x_483_);
lean_ctor_set(v___x_485_, 1, v___x_484_);
v___x_486_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_485_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_486_;
}
else
{
lean_object* v___x_487_; lean_object* v___x_488_; uint8_t v___x_489_; 
v___x_487_ = lean_unsigned_to_nat(2u);
v___x_488_ = l_Lean_Syntax_getArg(v___x_403_, v___x_487_);
lean_dec(v___x_403_);
lean_inc(v___x_488_);
v___x_489_ = l_Lean_Syntax_matchesNull(v___x_488_, v___x_402_);
if (v___x_489_ == 0)
{
uint8_t v___x_490_; 
v___x_490_ = l_Lean_Syntax_matchesNull(v___x_488_, v___x_466_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_491_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_492_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_491_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_495_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_493_);
lean_ctor_set(v___x_495_, 1, v___x_494_);
v___x_496_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_495_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_496_;
}
else
{
lean_object* v___x_497_; lean_object* v___x_498_; 
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_497_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_497_, 0, v___x_489_);
lean_ctor_set_uint8(v___x_497_, 1, v___x_395_);
v___x_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
return v___x_498_;
}
}
else
{
lean_object* v___x_499_; lean_object* v___x_500_; 
lean_dec(v___x_488_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_499_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_499_, 0, v___x_478_);
lean_ctor_set_uint8(v___x_499_, 1, v___x_478_);
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
return v___x_500_;
}
}
}
else
{
lean_object* v___x_501_; lean_object* v___x_502_; uint8_t v___x_503_; 
lean_dec(v___x_476_);
v___x_501_ = lean_unsigned_to_nat(2u);
v___x_502_ = l_Lean_Syntax_getArg(v___x_403_, v___x_501_);
lean_dec(v___x_403_);
lean_inc(v___x_502_);
v___x_503_ = l_Lean_Syntax_matchesNull(v___x_502_, v___x_402_);
if (v___x_503_ == 0)
{
uint8_t v___x_504_; 
v___x_504_ = l_Lean_Syntax_matchesNull(v___x_502_, v___x_466_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_505_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_506_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_507_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_507_, 0, v___x_505_);
lean_ctor_set(v___x_507_, 1, v___x_506_);
v___x_508_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_509_, 0, v___x_507_);
lean_ctor_set(v___x_509_, 1, v___x_508_);
v___x_510_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_509_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_510_;
}
else
{
lean_object* v___x_511_; lean_object* v___x_512_; 
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_511_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_511_, 0, v___x_395_);
lean_ctor_set_uint8(v___x_511_, 1, v___x_395_);
v___x_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
else
{
lean_object* v___x_513_; lean_object* v___x_514_; 
lean_dec(v___x_502_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_513_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_513_, 0, v___x_395_);
lean_ctor_set_uint8(v___x_513_, 1, v___x_468_);
v___x_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
return v___x_514_;
}
}
}
}
else
{
lean_object* v___x_515_; lean_object* v___x_516_; uint8_t v___x_517_; 
lean_dec(v___x_467_);
v___x_515_ = lean_unsigned_to_nat(2u);
v___x_516_ = l_Lean_Syntax_getArg(v___x_403_, v___x_515_);
lean_dec(v___x_403_);
lean_inc(v___x_516_);
v___x_517_ = l_Lean_Syntax_matchesNull(v___x_516_, v___x_402_);
if (v___x_517_ == 0)
{
uint8_t v___x_518_; 
v___x_518_ = l_Lean_Syntax_matchesNull(v___x_516_, v___x_466_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_519_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_520_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_519_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
v___x_522_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
v___x_524_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_523_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_524_;
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; 
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_525_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_525_, 0, v___x_395_);
lean_ctor_set_uint8(v___x_525_, 1, v___x_395_);
v___x_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
return v___x_526_;
}
}
else
{
lean_object* v___x_527_; lean_object* v___x_528_; 
lean_dec(v___x_516_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_527_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_527_, 0, v___x_395_);
lean_ctor_set_uint8(v___x_527_, 1, v___x_437_);
v___x_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
return v___x_528_;
}
}
}
}
else
{
lean_object* v___x_529_; lean_object* v___x_530_; 
lean_dec(v___x_403_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_529_ = lean_box(7);
v___x_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
return v___x_530_;
}
}
else
{
lean_object* v___x_531_; lean_object* v___x_532_; 
lean_dec(v___x_403_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_531_ = lean_box(6);
v___x_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
return v___x_532_;
}
}
else
{
lean_object* v___x_533_; lean_object* v___x_534_; 
lean_dec(v___x_403_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_533_ = lean_box(4);
v___x_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
return v___x_534_;
}
}
else
{
lean_object* v___x_535_; lean_object* v___x_536_; 
lean_dec(v___x_403_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_535_ = lean_box(2);
v___x_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
return v___x_536_;
}
}
else
{
lean_object* v___x_537_; lean_object* v___x_538_; 
lean_dec(v___x_403_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_537_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_537_, 0, v___x_395_);
v___x_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
return v___x_538_;
}
}
else
{
lean_object* v___x_539_; lean_object* v___x_540_; 
lean_dec(v___x_403_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_539_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_539_, 0, v___x_425_);
v___x_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
return v___x_540_;
}
}
else
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
lean_dec(v___x_403_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_541_ = lean_alloc_ctor(8, 0, 1);
lean_ctor_set_uint8(v___x_541_, 0, v___x_395_);
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
v___x_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
return v___x_543_;
}
}
else
{
lean_object* v___x_544_; lean_object* v___x_545_; 
lean_dec(v___x_403_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_544_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__55));
v___x_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
return v___x_545_;
}
}
else
{
lean_object* v___x_546_; lean_object* v___x_547_; 
lean_dec(v___x_403_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_546_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__56));
v___x_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
return v___x_547_;
}
}
else
{
lean_object* v___x_548_; lean_object* v___x_549_; 
lean_dec(v___x_403_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_548_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__57));
v___x_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
return v___x_549_;
}
}
else
{
lean_object* v___x_550_; lean_object* v___x_551_; 
lean_dec(v___x_403_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_550_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__58));
v___x_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
return v___x_551_;
}
}
else
{
lean_object* v___x_552_; lean_object* v___x_553_; uint8_t v___x_554_; 
v___x_552_ = lean_unsigned_to_nat(3u);
v___x_553_ = l_Lean_Syntax_getArg(v___x_403_, v___x_552_);
lean_dec(v___x_403_);
lean_inc(v___x_553_);
v___x_554_ = l_Lean_Syntax_matchesNull(v___x_553_, v___x_402_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; uint8_t v___x_556_; 
v___x_555_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_553_);
v___x_556_ = l_Lean_Syntax_matchesNull(v___x_553_, v___x_555_);
if (v___x_556_ == 0)
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
lean_dec(v___x_553_);
v___x_557_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_558_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_559_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_559_, 0, v___x_557_);
lean_ctor_set(v___x_559_, 1, v___x_558_);
v___x_560_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_561_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_559_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
v___x_562_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_561_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_562_;
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_563_ = l_Lean_Syntax_getArg(v___x_553_, v___x_402_);
lean_dec(v___x_553_);
v___x_564_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_565_ = l_Lean_Syntax_isOfKind(v___x_563_, v___x_564_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_566_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_567_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_568_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_568_, 0, v___x_566_);
lean_ctor_set(v___x_568_, 1, v___x_567_);
v___x_569_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_570_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_570_, 0, v___x_568_);
lean_ctor_set(v___x_570_, 1, v___x_569_);
v___x_571_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_570_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_571_;
}
else
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_572_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_572_, 0, v___x_395_);
v___x_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
v___x_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_574_, 0, v___x_573_);
return v___x_574_;
}
}
}
else
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
lean_dec(v___x_553_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_575_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_575_, 0, v___x_413_);
v___x_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
v___x_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
return v___x_577_;
}
}
}
else
{
lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_578_ = lean_unsigned_to_nat(2u);
v___x_579_ = l_Lean_Syntax_getArg(v___x_403_, v___x_578_);
lean_dec(v___x_403_);
lean_inc(v___x_579_);
v___x_580_ = l_Lean_Syntax_matchesNull(v___x_579_, v___x_402_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; uint8_t v___x_582_; 
v___x_581_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_579_);
v___x_582_ = l_Lean_Syntax_matchesNull(v___x_579_, v___x_581_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
lean_dec(v___x_579_);
v___x_583_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_584_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_587_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_585_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
v___x_588_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_587_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_588_;
}
else
{
lean_object* v___x_589_; lean_object* v___x_590_; uint8_t v___x_591_; 
v___x_589_ = l_Lean_Syntax_getArg(v___x_579_, v___x_402_);
lean_dec(v___x_579_);
v___x_590_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_591_ = l_Lean_Syntax_isOfKind(v___x_589_, v___x_590_);
if (v___x_591_ == 0)
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_592_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_593_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_594_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_594_, 0, v___x_592_);
lean_ctor_set(v___x_594_, 1, v___x_593_);
v___x_595_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_594_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
v___x_597_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_596_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_597_;
}
else
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_598_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_598_, 0, v___x_395_);
v___x_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_599_, 0, v___x_598_);
v___x_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
return v___x_600_;
}
}
}
else
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
lean_dec(v___x_579_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_601_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_601_, 0, v___x_411_);
v___x_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
v___x_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
return v___x_603_;
}
}
}
else
{
lean_object* v___x_604_; lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_604_ = lean_unsigned_to_nat(1u);
v___x_605_ = l_Lean_Syntax_getArg(v___x_403_, v___x_604_);
lean_dec(v___x_403_);
lean_inc(v___x_605_);
v___x_606_ = l_Lean_Syntax_matchesNull(v___x_605_, v___x_402_);
if (v___x_606_ == 0)
{
uint8_t v___x_607_; 
lean_inc(v___x_605_);
v___x_607_ = l_Lean_Syntax_matchesNull(v___x_605_, v___x_604_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
lean_dec(v___x_605_);
v___x_608_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_609_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_610_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_608_);
lean_ctor_set(v___x_610_, 1, v___x_609_);
v___x_611_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_612_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_612_, 0, v___x_610_);
lean_ctor_set(v___x_612_, 1, v___x_611_);
v___x_613_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_612_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_613_;
}
else
{
lean_object* v___x_614_; lean_object* v___x_615_; uint8_t v___x_616_; 
v___x_614_ = l_Lean_Syntax_getArg(v___x_605_, v___x_402_);
lean_dec(v___x_605_);
v___x_615_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_616_ = l_Lean_Syntax_isOfKind(v___x_614_, v___x_615_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_617_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_618_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_619_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_617_);
lean_ctor_set(v___x_619_, 1, v___x_618_);
v___x_620_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_619_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
v___x_622_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_621_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_622_;
}
else
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_623_ = lean_alloc_ctor(5, 0, 1);
lean_ctor_set_uint8(v___x_623_, 0, v___x_395_);
v___x_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
v___x_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_625_, 0, v___x_624_);
return v___x_625_;
}
}
}
else
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
lean_dec(v___x_605_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_626_ = lean_alloc_ctor(5, 0, 1);
lean_ctor_set_uint8(v___x_626_, 0, v___x_409_);
v___x_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
v___x_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
return v___x_628_;
}
}
}
else
{
lean_object* v___x_629_; lean_object* v___x_630_; 
lean_dec(v___x_403_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_629_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__59));
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
return v___x_630_;
}
}
else
{
lean_object* v___x_631_; lean_object* v___x_632_; uint8_t v___x_633_; 
v___x_631_ = lean_unsigned_to_nat(1u);
v___x_632_ = l_Lean_Syntax_getArg(v___x_403_, v___x_631_);
lean_dec(v___x_403_);
lean_inc(v___x_632_);
v___x_633_ = l_Lean_Syntax_matchesNull(v___x_632_, v___x_402_);
if (v___x_633_ == 0)
{
uint8_t v___x_634_; 
lean_inc(v___x_632_);
v___x_634_ = l_Lean_Syntax_matchesNull(v___x_632_, v___x_631_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
lean_dec(v___x_632_);
v___x_635_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_636_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_637_);
lean_ctor_set(v___x_639_, 1, v___x_638_);
v___x_640_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_639_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_640_;
}
else
{
lean_object* v___x_641_; lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_641_ = l_Lean_Syntax_getArg(v___x_632_, v___x_402_);
lean_dec(v___x_632_);
v___x_642_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_643_ = l_Lean_Syntax_isOfKind(v___x_641_, v___x_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_644_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_645_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_644_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v___x_647_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_648_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_646_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
v___x_649_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_648_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_649_;
}
else
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_650_ = lean_alloc_ctor(8, 0, 1);
lean_ctor_set_uint8(v___x_650_, 0, v___x_395_);
v___x_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
v___x_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
return v___x_652_;
}
}
}
else
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
lean_dec(v___x_632_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_653_ = lean_alloc_ctor(8, 0, 1);
lean_ctor_set_uint8(v___x_653_, 0, v___x_405_);
v___x_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
v___x_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
return v___x_655_;
}
}
}
else
{
lean_object* v___x_656_; lean_object* v___x_657_; uint8_t v___x_658_; 
v___x_656_ = lean_unsigned_to_nat(1u);
v___x_657_ = l_Lean_Syntax_getArg(v___x_403_, v___x_656_);
lean_dec(v___x_403_);
lean_inc(v___x_657_);
v___x_658_ = l_Lean_Syntax_matchesNull(v___x_657_, v___x_402_);
if (v___x_658_ == 0)
{
uint8_t v___x_659_; 
lean_inc(v___x_657_);
v___x_659_ = l_Lean_Syntax_matchesNull(v___x_657_, v___x_656_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
lean_dec(v___x_657_);
v___x_660_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_661_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_662_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_662_, 0, v___x_660_);
lean_ctor_set(v___x_662_, 1, v___x_661_);
v___x_663_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_662_);
lean_ctor_set(v___x_664_, 1, v___x_663_);
v___x_665_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_664_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_665_;
}
else
{
lean_object* v___x_666_; lean_object* v___x_667_; uint8_t v___x_668_; 
v___x_666_ = l_Lean_Syntax_getArg(v___x_657_, v___x_402_);
lean_dec(v___x_657_);
v___x_667_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_668_ = l_Lean_Syntax_isOfKind(v___x_666_, v___x_667_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_669_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_670_ = l_Lean_MessageData_ofSyntax(v_stx_390_);
v___x_671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_669_);
lean_ctor_set(v___x_671_, 1, v___x_670_);
v___x_672_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_673_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_671_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
v___x_674_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_673_, v_a_391_, v_a_392_);
lean_dec_ref(v_a_391_);
return v___x_674_;
}
else
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_675_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_675_, 0, v___x_395_);
v___x_676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_676_, 0, v___x_675_);
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
return v___x_677_;
}
}
}
else
{
lean_object* v___x_678_; lean_object* v___x_679_; 
lean_dec(v___x_657_);
lean_dec_ref(v_a_391_);
lean_dec(v_stx_390_);
v___x_678_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__61));
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
return v___x_679_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore___boxed(lean_object* v_stx_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_Meta_Grind_getAttrKindCore(v_stx_680_, v_a_681_, v_a_682_);
lean_dec(v_a_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0(lean_object* v_00_u03b1_685_, lean_object* v_msg_686_, lean_object* v___y_687_, lean_object* v___y_688_){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v_msg_686_, v___y_687_, v___y_688_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___boxed(lean_object* v_00_u03b1_691_, lean_object* v_msg_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0(v_00_u03b1_691_, v_msg_692_, v___y_693_, v___y_694_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1(lean_object* v_00_u03b1_697_, lean_object* v_ref_698_, lean_object* v_msg_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(v_ref_698_, v_msg_699_, v___y_700_, v___y_701_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___boxed(lean_object* v_00_u03b1_704_, lean_object* v_ref_705_, lean_object* v_msg_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1(v_00_u03b1_704_, v_ref_705_, v_msg_706_, v___y_707_, v___y_708_);
lean_dec(v___y_708_);
lean_dec(v_ref_705_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt(lean_object* v_stx_711_, lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_715_ = lean_unsigned_to_nat(1u);
v___x_716_ = l_Lean_Syntax_getArg(v_stx_711_, v___x_715_);
v___x_717_ = l_Lean_Syntax_isNone(v___x_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_718_ = lean_unsigned_to_nat(0u);
v___x_719_ = l_Lean_Syntax_getArg(v___x_716_, v___x_718_);
lean_dec(v___x_716_);
v___x_720_ = l_Lean_Meta_Grind_getAttrKindCore(v___x_719_, v_a_712_, v_a_713_);
return v___x_720_;
}
else
{
lean_object* v___x_721_; lean_object* v___x_722_; 
lean_dec(v___x_716_);
lean_dec_ref(v_a_712_);
v___x_721_ = lean_box(3);
v___x_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_722_, 0, v___x_721_);
return v___x_722_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt___boxed(lean_object* v_stx_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lean_Meta_Grind_getAttrKindFromOpt(v_stx_723_, v_a_724_, v_a_725_);
lean_dec(v_a_725_);
lean_dec(v_stx_723_);
return v_res_727_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1(void){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = ((lean_object*)(l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0));
v___x_730_ = l_Lean_stringToMessageData(v___x_729_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(lean_object* v_a_731_, lean_object* v_a_732_){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = lean_obj_once(&l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1, &l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1_once, _init_l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1);
v___x_735_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_734_, v_a_731_, v_a_732_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___boxed(lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v_a_736_, v_a_737_);
lean_dec(v_a_737_);
lean_dec_ref(v_a_736_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier(lean_object* v_00_u03b1_740_, lean_object* v_a_741_, lean_object* v_a_742_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v_a_741_, v_a_742_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___boxed(lean_object* v_00_u03b1_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Lean_Meta_Grind_throwInvalidUsrModifier(v_00_u03b1_745_, v_a_746_, v_a_747_);
lean_dec(v_a_747_);
lean_dec_ref(v_a_746_);
return v_res_749_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_750_; 
v___x_750_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_750_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0);
v___x_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
return v___x_752_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_753_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
v___x_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
lean_ctor_set(v___x_754_, 1, v___x_753_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(lean_object* v_ext_755_, lean_object* v_b_756_, uint8_t v_kind_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
lean_object* v_currNamespace_761_; lean_object* v___x_762_; lean_object* v_env_763_; lean_object* v_nextMacroScope_764_; lean_object* v_ngen_765_; lean_object* v_auxDeclNGen_766_; lean_object* v_traceState_767_; lean_object* v_messages_768_; lean_object* v_infoState_769_; lean_object* v_snapshotTasks_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_782_; 
v_currNamespace_761_ = lean_ctor_get(v___y_758_, 6);
lean_inc(v_currNamespace_761_);
lean_dec_ref(v___y_758_);
v___x_762_ = lean_st_ref_take(v___y_759_);
v_env_763_ = lean_ctor_get(v___x_762_, 0);
v_nextMacroScope_764_ = lean_ctor_get(v___x_762_, 1);
v_ngen_765_ = lean_ctor_get(v___x_762_, 2);
v_auxDeclNGen_766_ = lean_ctor_get(v___x_762_, 3);
v_traceState_767_ = lean_ctor_get(v___x_762_, 4);
v_messages_768_ = lean_ctor_get(v___x_762_, 6);
v_infoState_769_ = lean_ctor_get(v___x_762_, 7);
v_snapshotTasks_770_ = lean_ctor_get(v___x_762_, 8);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_782_ == 0)
{
lean_object* v_unused_783_; 
v_unused_783_ = lean_ctor_get(v___x_762_, 5);
lean_dec(v_unused_783_);
v___x_772_ = v___x_762_;
v_isShared_773_ = v_isSharedCheck_782_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_snapshotTasks_770_);
lean_inc(v_infoState_769_);
lean_inc(v_messages_768_);
lean_inc(v_traceState_767_);
lean_inc(v_auxDeclNGen_766_);
lean_inc(v_ngen_765_);
lean_inc(v_nextMacroScope_764_);
lean_inc(v_env_763_);
lean_dec(v___x_762_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_782_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_777_; 
v___x_774_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_763_, v_ext_755_, v_b_756_, v_kind_757_, v_currNamespace_761_);
v___x_775_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 5, v___x_775_);
lean_ctor_set(v___x_772_, 0, v___x_774_);
v___x_777_ = v___x_772_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v___x_774_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_nextMacroScope_764_);
lean_ctor_set(v_reuseFailAlloc_781_, 2, v_ngen_765_);
lean_ctor_set(v_reuseFailAlloc_781_, 3, v_auxDeclNGen_766_);
lean_ctor_set(v_reuseFailAlloc_781_, 4, v_traceState_767_);
lean_ctor_set(v_reuseFailAlloc_781_, 5, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_781_, 6, v_messages_768_);
lean_ctor_set(v_reuseFailAlloc_781_, 7, v_infoState_769_);
lean_ctor_set(v_reuseFailAlloc_781_, 8, v_snapshotTasks_770_);
v___x_777_ = v_reuseFailAlloc_781_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_778_ = lean_st_ref_set(v___y_759_, v___x_777_);
v___x_779_ = lean_box(0);
v___x_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
return v___x_780_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___boxed(lean_object* v_ext_784_, lean_object* v_b_785_, lean_object* v_kind_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
uint8_t v_kind_boxed_790_; lean_object* v_res_791_; 
v_kind_boxed_790_ = lean_unbox(v_kind_786_);
v_res_791_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_784_, v_b_785_, v_kind_boxed_790_, v___y_787_, v___y_788_);
lean_dec(v___y_788_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0(lean_object* v_00_u03b1_792_, lean_object* v_00_u03b2_793_, lean_object* v_00_u03c3_794_, lean_object* v_ext_795_, lean_object* v_b_796_, uint8_t v_kind_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
lean_object* v___x_801_; 
v___x_801_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_795_, v_b_796_, v_kind_797_, v___y_798_, v___y_799_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___boxed(lean_object* v_00_u03b1_802_, lean_object* v_00_u03b2_803_, lean_object* v_00_u03c3_804_, lean_object* v_ext_805_, lean_object* v_b_806_, lean_object* v_kind_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
uint8_t v_kind_boxed_811_; lean_object* v_res_812_; 
v_kind_boxed_811_ = lean_unbox(v_kind_807_);
v_res_812_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0(v_00_u03b1_802_, v_00_u03b2_803_, v_00_u03c3_804_, v_ext_805_, v_b_806_, v_kind_boxed_811_, v___y_808_, v___y_809_);
lean_dec(v___y_809_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(lean_object* v_ext_813_, lean_object* v_declName_814_, uint8_t v_eager_815_, uint8_t v_attrKind_816_, lean_object* v_a_817_, lean_object* v_a_818_){
_start:
{
lean_object* v___x_820_; 
lean_inc(v_declName_814_);
v___x_820_ = l_Lean_Meta_Grind_validateCasesAttr(v_declName_814_, v_eager_815_, v_a_817_, v_a_818_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v___x_821_; lean_object* v___x_822_; 
lean_dec_ref(v___x_820_);
v___x_821_ = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(v___x_821_, 0, v_declName_814_);
lean_ctor_set_uint8(v___x_821_, sizeof(void*)*1, v_eager_815_);
v___x_822_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_813_, v___x_821_, v_attrKind_816_, v_a_817_, v_a_818_);
return v___x_822_;
}
else
{
lean_dec_ref(v_a_817_);
lean_dec(v_declName_814_);
lean_dec_ref(v_ext_813_);
return v___x_820_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr___boxed(lean_object* v_ext_823_, lean_object* v_declName_824_, lean_object* v_eager_825_, lean_object* v_attrKind_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_){
_start:
{
uint8_t v_eager_boxed_830_; uint8_t v_attrKind_boxed_831_; lean_object* v_res_832_; 
v_eager_boxed_830_ = lean_unbox(v_eager_825_);
v_attrKind_boxed_831_ = lean_unbox(v_attrKind_826_);
v_res_832_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(v_ext_823_, v_declName_824_, v_eager_boxed_830_, v_attrKind_boxed_831_, v_a_827_, v_a_828_);
lean_dec(v_a_828_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(lean_object* v_ext_833_, lean_object* v_declName_834_, uint8_t v_attrKind_835_, lean_object* v_a_836_, lean_object* v_a_837_){
_start:
{
lean_object* v___x_839_; 
lean_inc(v_declName_834_);
v___x_839_ = l_Lean_Meta_Grind_validateExtAttr(v_declName_834_, v_a_836_, v_a_837_);
if (lean_obj_tag(v___x_839_) == 0)
{
lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_847_; 
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_847_ == 0)
{
lean_object* v_unused_848_; 
v_unused_848_ = lean_ctor_get(v___x_839_, 0);
lean_dec(v_unused_848_);
v___x_841_ = v___x_839_;
v_isShared_842_ = v_isSharedCheck_847_;
goto v_resetjp_840_;
}
else
{
lean_dec(v___x_839_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_847_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
lean_ctor_set(v___x_841_, 0, v_declName_834_);
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_declName_834_);
v___x_844_ = v_reuseFailAlloc_846_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
lean_object* v___x_845_; 
v___x_845_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_833_, v___x_844_, v_attrKind_835_, v_a_836_, v_a_837_);
return v___x_845_;
}
}
}
else
{
lean_dec_ref(v_a_836_);
lean_dec(v_declName_834_);
lean_dec_ref(v_ext_833_);
return v___x_839_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr___boxed(lean_object* v_ext_849_, lean_object* v_declName_850_, lean_object* v_attrKind_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_){
_start:
{
uint8_t v_attrKind_boxed_855_; lean_object* v_res_856_; 
v_attrKind_boxed_855_ = lean_unbox(v_attrKind_851_);
v_res_856_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(v_ext_849_, v_declName_850_, v_attrKind_boxed_855_, v_a_852_, v_a_853_);
lean_dec(v_a_853_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(lean_object* v_ext_857_, lean_object* v_declName_858_, uint8_t v_attrKind_859_, lean_object* v_a_860_, lean_object* v_a_861_){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_863_, 0, v_declName_858_);
v___x_864_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_857_, v___x_863_, v_attrKind_859_, v_a_860_, v_a_861_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr___boxed(lean_object* v_ext_865_, lean_object* v_declName_866_, lean_object* v_attrKind_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_){
_start:
{
uint8_t v_attrKind_boxed_871_; lean_object* v_res_872_; 
v_attrKind_boxed_871_ = lean_unbox(v_attrKind_867_);
v_res_872_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(v_ext_865_, v_declName_866_, v_attrKind_boxed_871_, v_a_868_, v_a_869_);
lean_dec(v_a_869_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___lam__0(lean_object* v_a_873_, lean_object* v_s_874_){
_start:
{
lean_object* v_casesTypes_875_; lean_object* v_funCC_876_; lean_object* v_ematch_877_; lean_object* v_inj_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_885_; 
v_casesTypes_875_ = lean_ctor_get(v_s_874_, 0);
v_funCC_876_ = lean_ctor_get(v_s_874_, 2);
v_ematch_877_ = lean_ctor_get(v_s_874_, 3);
v_inj_878_ = lean_ctor_get(v_s_874_, 4);
v_isSharedCheck_885_ = !lean_is_exclusive(v_s_874_);
if (v_isSharedCheck_885_ == 0)
{
lean_object* v_unused_886_; 
v_unused_886_ = lean_ctor_get(v_s_874_, 1);
lean_dec(v_unused_886_);
v___x_880_ = v_s_874_;
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_inj_878_);
lean_inc(v_ematch_877_);
lean_inc(v_funCC_876_);
lean_inc(v_casesTypes_875_);
lean_dec(v_s_874_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 1, v_a_873_);
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_casesTypes_875_);
lean_ctor_set(v_reuseFailAlloc_884_, 1, v_a_873_);
lean_ctor_set(v_reuseFailAlloc_884_, 2, v_funCC_876_);
lean_ctor_set(v_reuseFailAlloc_884_, 3, v_ematch_877_);
lean_ctor_set(v_reuseFailAlloc_884_, 4, v_inj_878_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(lean_object* v_ext_887_, lean_object* v_declName_888_, lean_object* v_a_889_, lean_object* v_a_890_){
_start:
{
lean_object* v___x_892_; lean_object* v_ext_893_; lean_object* v_toEnvExtension_894_; lean_object* v_env_895_; lean_object* v_asyncMode_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v_extThms_899_; lean_object* v___x_900_; 
v___x_892_ = lean_st_ref_get(v_a_890_);
v_ext_893_ = lean_ctor_get(v_ext_887_, 1);
v_toEnvExtension_894_ = lean_ctor_get(v_ext_893_, 0);
v_env_895_ = lean_ctor_get(v___x_892_, 0);
lean_inc_ref(v_env_895_);
lean_dec(v___x_892_);
v_asyncMode_896_ = lean_ctor_get(v_toEnvExtension_894_, 2);
v___x_897_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_898_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_897_, v_ext_887_, v_env_895_, v_asyncMode_896_);
v_extThms_899_ = lean_ctor_get(v___x_898_, 1);
lean_inc_ref(v_extThms_899_);
lean_dec(v___x_898_);
v___x_900_ = l_Lean_Meta_Grind_ExtTheorems_eraseDecl(v_extThms_899_, v_declName_888_, v_a_889_, v_a_890_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_930_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_930_ == 0)
{
v___x_903_ = v___x_900_;
v_isShared_904_ = v_isSharedCheck_930_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_900_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_930_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_905_; lean_object* v_env_906_; lean_object* v_nextMacroScope_907_; lean_object* v_ngen_908_; lean_object* v_auxDeclNGen_909_; lean_object* v_traceState_910_; lean_object* v_messages_911_; lean_object* v_infoState_912_; lean_object* v_snapshotTasks_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_928_; 
v___x_905_ = lean_st_ref_take(v_a_890_);
v_env_906_ = lean_ctor_get(v___x_905_, 0);
v_nextMacroScope_907_ = lean_ctor_get(v___x_905_, 1);
v_ngen_908_ = lean_ctor_get(v___x_905_, 2);
v_auxDeclNGen_909_ = lean_ctor_get(v___x_905_, 3);
v_traceState_910_ = lean_ctor_get(v___x_905_, 4);
v_messages_911_ = lean_ctor_get(v___x_905_, 6);
v_infoState_912_ = lean_ctor_get(v___x_905_, 7);
v_snapshotTasks_913_ = lean_ctor_get(v___x_905_, 8);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_928_ == 0)
{
lean_object* v_unused_929_; 
v_unused_929_ = lean_ctor_get(v___x_905_, 5);
lean_dec(v_unused_929_);
v___x_915_ = v___x_905_;
v_isShared_916_ = v_isSharedCheck_928_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_snapshotTasks_913_);
lean_inc(v_infoState_912_);
lean_inc(v_messages_911_);
lean_inc(v_traceState_910_);
lean_inc(v_auxDeclNGen_909_);
lean_inc(v_ngen_908_);
lean_inc(v_nextMacroScope_907_);
lean_inc(v_env_906_);
lean_dec(v___x_905_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_928_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___f_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_921_; 
v___f_917_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___lam__0), 2, 1);
lean_closure_set(v___f_917_, 0, v_a_901_);
v___x_918_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_887_, v_env_906_, v___f_917_);
v___x_919_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2);
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 5, v___x_919_);
lean_ctor_set(v___x_915_, 0, v___x_918_);
v___x_921_ = v___x_915_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v___x_918_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v_nextMacroScope_907_);
lean_ctor_set(v_reuseFailAlloc_927_, 2, v_ngen_908_);
lean_ctor_set(v_reuseFailAlloc_927_, 3, v_auxDeclNGen_909_);
lean_ctor_set(v_reuseFailAlloc_927_, 4, v_traceState_910_);
lean_ctor_set(v_reuseFailAlloc_927_, 5, v___x_919_);
lean_ctor_set(v_reuseFailAlloc_927_, 6, v_messages_911_);
lean_ctor_set(v_reuseFailAlloc_927_, 7, v_infoState_912_);
lean_ctor_set(v_reuseFailAlloc_927_, 8, v_snapshotTasks_913_);
v___x_921_ = v_reuseFailAlloc_927_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_925_; 
v___x_922_ = lean_st_ref_set(v_a_890_, v___x_921_);
v___x_923_ = lean_box(0);
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 0, v___x_923_);
v___x_925_ = v___x_903_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v___x_923_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
else
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
lean_dec_ref(v_ext_887_);
v_a_931_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_938_ == 0)
{
v___x_933_ = v___x_900_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_900_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_936_; 
if (v_isShared_934_ == 0)
{
v___x_936_ = v___x_933_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_a_931_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___boxed(lean_object* v_ext_939_, lean_object* v_declName_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(v_ext_939_, v_declName_940_, v_a_941_, v_a_942_);
lean_dec(v_a_942_);
lean_dec_ref(v_a_941_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___lam__0(lean_object* v_a_945_, lean_object* v_s_946_){
_start:
{
lean_object* v_extThms_947_; lean_object* v_funCC_948_; lean_object* v_ematch_949_; lean_object* v_inj_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
v_extThms_947_ = lean_ctor_get(v_s_946_, 1);
v_funCC_948_ = lean_ctor_get(v_s_946_, 2);
v_ematch_949_ = lean_ctor_get(v_s_946_, 3);
v_inj_950_ = lean_ctor_get(v_s_946_, 4);
v_isSharedCheck_957_ = !lean_is_exclusive(v_s_946_);
if (v_isSharedCheck_957_ == 0)
{
lean_object* v_unused_958_; 
v_unused_958_ = lean_ctor_get(v_s_946_, 0);
lean_dec(v_unused_958_);
v___x_952_ = v_s_946_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_inj_950_);
lean_inc(v_ematch_949_);
lean_inc(v_funCC_948_);
lean_inc(v_extThms_947_);
lean_dec(v_s_946_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 0, v_a_945_);
v___x_955_ = v___x_952_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_945_);
lean_ctor_set(v_reuseFailAlloc_956_, 1, v_extThms_947_);
lean_ctor_set(v_reuseFailAlloc_956_, 2, v_funCC_948_);
lean_ctor_set(v_reuseFailAlloc_956_, 3, v_ematch_949_);
lean_ctor_set(v_reuseFailAlloc_956_, 4, v_inj_950_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(lean_object* v_ext_959_, lean_object* v_declName_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
lean_object* v___x_964_; 
lean_inc(v_declName_960_);
v___x_964_ = l_Lean_Meta_Grind_ensureNotBuiltinCases(v_declName_960_, v_a_961_, v_a_962_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v___x_965_; lean_object* v_ext_966_; lean_object* v_toEnvExtension_967_; lean_object* v_env_968_; lean_object* v_asyncMode_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v_casesTypes_972_; lean_object* v___x_973_; 
lean_dec_ref(v___x_964_);
v___x_965_ = lean_st_ref_get(v_a_962_);
v_ext_966_ = lean_ctor_get(v_ext_959_, 1);
v_toEnvExtension_967_ = lean_ctor_get(v_ext_966_, 0);
v_env_968_ = lean_ctor_get(v___x_965_, 0);
lean_inc_ref(v_env_968_);
lean_dec(v___x_965_);
v_asyncMode_969_ = lean_ctor_get(v_toEnvExtension_967_, 2);
v___x_970_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_971_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_970_, v_ext_959_, v_env_968_, v_asyncMode_969_);
v_casesTypes_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc_ref(v_casesTypes_972_);
lean_dec(v___x_971_);
v___x_973_ = l_Lean_Meta_Grind_CasesTypes_eraseDecl(v_casesTypes_972_, v_declName_960_, v_a_961_, v_a_962_);
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_1003_; 
v_a_974_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_976_ = v___x_973_;
v_isShared_977_ = v_isSharedCheck_1003_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_dec(v___x_973_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_1003_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_978_; lean_object* v_env_979_; lean_object* v_nextMacroScope_980_; lean_object* v_ngen_981_; lean_object* v_auxDeclNGen_982_; lean_object* v_traceState_983_; lean_object* v_messages_984_; lean_object* v_infoState_985_; lean_object* v_snapshotTasks_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1001_; 
v___x_978_ = lean_st_ref_take(v_a_962_);
v_env_979_ = lean_ctor_get(v___x_978_, 0);
v_nextMacroScope_980_ = lean_ctor_get(v___x_978_, 1);
v_ngen_981_ = lean_ctor_get(v___x_978_, 2);
v_auxDeclNGen_982_ = lean_ctor_get(v___x_978_, 3);
v_traceState_983_ = lean_ctor_get(v___x_978_, 4);
v_messages_984_ = lean_ctor_get(v___x_978_, 6);
v_infoState_985_ = lean_ctor_get(v___x_978_, 7);
v_snapshotTasks_986_ = lean_ctor_get(v___x_978_, 8);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_1001_ == 0)
{
lean_object* v_unused_1002_; 
v_unused_1002_ = lean_ctor_get(v___x_978_, 5);
lean_dec(v_unused_1002_);
v___x_988_ = v___x_978_;
v_isShared_989_ = v_isSharedCheck_1001_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_snapshotTasks_986_);
lean_inc(v_infoState_985_);
lean_inc(v_messages_984_);
lean_inc(v_traceState_983_);
lean_inc(v_auxDeclNGen_982_);
lean_inc(v_ngen_981_);
lean_inc(v_nextMacroScope_980_);
lean_inc(v_env_979_);
lean_dec(v___x_978_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1001_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___f_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_994_; 
v___f_990_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___lam__0), 2, 1);
lean_closure_set(v___f_990_, 0, v_a_974_);
v___x_991_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_959_, v_env_979_, v___f_990_);
v___x_992_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 5, v___x_992_);
lean_ctor_set(v___x_988_, 0, v___x_991_);
v___x_994_ = v___x_988_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_991_);
lean_ctor_set(v_reuseFailAlloc_1000_, 1, v_nextMacroScope_980_);
lean_ctor_set(v_reuseFailAlloc_1000_, 2, v_ngen_981_);
lean_ctor_set(v_reuseFailAlloc_1000_, 3, v_auxDeclNGen_982_);
lean_ctor_set(v_reuseFailAlloc_1000_, 4, v_traceState_983_);
lean_ctor_set(v_reuseFailAlloc_1000_, 5, v___x_992_);
lean_ctor_set(v_reuseFailAlloc_1000_, 6, v_messages_984_);
lean_ctor_set(v_reuseFailAlloc_1000_, 7, v_infoState_985_);
lean_ctor_set(v_reuseFailAlloc_1000_, 8, v_snapshotTasks_986_);
v___x_994_ = v_reuseFailAlloc_1000_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_998_; 
v___x_995_ = lean_st_ref_set(v_a_962_, v___x_994_);
v___x_996_ = lean_box(0);
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 0, v___x_996_);
v___x_998_ = v___x_976_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___x_996_);
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
else
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec_ref(v_ext_959_);
v_a_1004_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_973_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_973_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
else
{
lean_dec(v_declName_960_);
lean_dec_ref(v_ext_959_);
return v___x_964_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___boxed(lean_object* v_ext_1012_, lean_object* v_declName_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(v_ext_1012_, v_declName_1013_, v_a_1014_, v_a_1015_);
lean_dec(v_a_1015_);
lean_dec_ref(v_a_1014_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___lam__0(lean_object* v___x_1018_, lean_object* v_s_1019_){
_start:
{
lean_object* v_casesTypes_1020_; lean_object* v_extThms_1021_; lean_object* v_ematch_1022_; lean_object* v_inj_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1030_; 
v_casesTypes_1020_ = lean_ctor_get(v_s_1019_, 0);
v_extThms_1021_ = lean_ctor_get(v_s_1019_, 1);
v_ematch_1022_ = lean_ctor_get(v_s_1019_, 3);
v_inj_1023_ = lean_ctor_get(v_s_1019_, 4);
v_isSharedCheck_1030_ = !lean_is_exclusive(v_s_1019_);
if (v_isSharedCheck_1030_ == 0)
{
lean_object* v_unused_1031_; 
v_unused_1031_ = lean_ctor_get(v_s_1019_, 2);
lean_dec(v_unused_1031_);
v___x_1025_ = v_s_1019_;
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_inj_1023_);
lean_inc(v_ematch_1022_);
lean_inc(v_extThms_1021_);
lean_inc(v_casesTypes_1020_);
lean_dec(v_s_1019_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1028_; 
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 2, v___x_1018_);
v___x_1028_ = v___x_1025_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v_casesTypes_1020_);
lean_ctor_set(v_reuseFailAlloc_1029_, 1, v_extThms_1021_);
lean_ctor_set(v_reuseFailAlloc_1029_, 2, v___x_1018_);
lean_ctor_set(v_reuseFailAlloc_1029_, 3, v_ematch_1022_);
lean_ctor_set(v_reuseFailAlloc_1029_, 4, v_inj_1023_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(lean_object* v_k_1032_, lean_object* v_t_1033_){
_start:
{
if (lean_obj_tag(v_t_1033_) == 0)
{
lean_object* v_k_1034_; lean_object* v_v_1035_; lean_object* v_l_1036_; lean_object* v_r_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1691_; 
v_k_1034_ = lean_ctor_get(v_t_1033_, 1);
v_v_1035_ = lean_ctor_get(v_t_1033_, 2);
v_l_1036_ = lean_ctor_get(v_t_1033_, 3);
v_r_1037_ = lean_ctor_get(v_t_1033_, 4);
v_isSharedCheck_1691_ = !lean_is_exclusive(v_t_1033_);
if (v_isSharedCheck_1691_ == 0)
{
lean_object* v_unused_1692_; 
v_unused_1692_ = lean_ctor_get(v_t_1033_, 0);
lean_dec(v_unused_1692_);
v___x_1039_ = v_t_1033_;
v_isShared_1040_ = v_isSharedCheck_1691_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_r_1037_);
lean_inc(v_l_1036_);
lean_inc(v_v_1035_);
lean_inc(v_k_1034_);
lean_dec(v_t_1033_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1691_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
uint8_t v___x_1041_; 
v___x_1041_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1032_, v_k_1034_);
switch(v___x_1041_)
{
case 0:
{
lean_object* v_impl_1042_; lean_object* v___x_1043_; 
v_impl_1042_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_1032_, v_l_1036_);
v___x_1043_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1042_) == 0)
{
if (lean_obj_tag(v_r_1037_) == 0)
{
lean_object* v_size_1044_; lean_object* v_size_1045_; lean_object* v_k_1046_; lean_object* v_v_1047_; lean_object* v_l_1048_; lean_object* v_r_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; uint8_t v___x_1052_; 
v_size_1044_ = lean_ctor_get(v_impl_1042_, 0);
lean_inc(v_size_1044_);
v_size_1045_ = lean_ctor_get(v_r_1037_, 0);
v_k_1046_ = lean_ctor_get(v_r_1037_, 1);
v_v_1047_ = lean_ctor_get(v_r_1037_, 2);
v_l_1048_ = lean_ctor_get(v_r_1037_, 3);
lean_inc(v_l_1048_);
v_r_1049_ = lean_ctor_get(v_r_1037_, 4);
v___x_1050_ = lean_unsigned_to_nat(3u);
v___x_1051_ = lean_nat_mul(v___x_1050_, v_size_1044_);
v___x_1052_ = lean_nat_dec_lt(v___x_1051_, v_size_1045_);
lean_dec(v___x_1051_);
if (v___x_1052_ == 0)
{
lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1056_; 
lean_dec(v_l_1048_);
v___x_1053_ = lean_nat_add(v___x_1043_, v_size_1044_);
lean_dec(v_size_1044_);
v___x_1054_ = lean_nat_add(v___x_1053_, v_size_1045_);
lean_dec(v___x_1053_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 3, v_impl_1042_);
lean_ctor_set(v___x_1039_, 0, v___x_1054_);
v___x_1056_ = v___x_1039_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v___x_1054_);
lean_ctor_set(v_reuseFailAlloc_1057_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1057_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1057_, 3, v_impl_1042_);
lean_ctor_set(v_reuseFailAlloc_1057_, 4, v_r_1037_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
else
{
lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1121_; 
lean_inc(v_r_1049_);
lean_inc(v_v_1047_);
lean_inc(v_k_1046_);
lean_inc(v_size_1045_);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_r_1037_);
if (v_isSharedCheck_1121_ == 0)
{
lean_object* v_unused_1122_; lean_object* v_unused_1123_; lean_object* v_unused_1124_; lean_object* v_unused_1125_; lean_object* v_unused_1126_; 
v_unused_1122_ = lean_ctor_get(v_r_1037_, 4);
lean_dec(v_unused_1122_);
v_unused_1123_ = lean_ctor_get(v_r_1037_, 3);
lean_dec(v_unused_1123_);
v_unused_1124_ = lean_ctor_get(v_r_1037_, 2);
lean_dec(v_unused_1124_);
v_unused_1125_ = lean_ctor_get(v_r_1037_, 1);
lean_dec(v_unused_1125_);
v_unused_1126_ = lean_ctor_get(v_r_1037_, 0);
lean_dec(v_unused_1126_);
v___x_1059_ = v_r_1037_;
v_isShared_1060_ = v_isSharedCheck_1121_;
goto v_resetjp_1058_;
}
else
{
lean_dec(v_r_1037_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1121_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v_size_1061_; lean_object* v_k_1062_; lean_object* v_v_1063_; lean_object* v_l_1064_; lean_object* v_r_1065_; lean_object* v_size_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; uint8_t v___x_1069_; 
v_size_1061_ = lean_ctor_get(v_l_1048_, 0);
v_k_1062_ = lean_ctor_get(v_l_1048_, 1);
v_v_1063_ = lean_ctor_get(v_l_1048_, 2);
v_l_1064_ = lean_ctor_get(v_l_1048_, 3);
v_r_1065_ = lean_ctor_get(v_l_1048_, 4);
v_size_1066_ = lean_ctor_get(v_r_1049_, 0);
v___x_1067_ = lean_unsigned_to_nat(2u);
v___x_1068_ = lean_nat_mul(v___x_1067_, v_size_1066_);
v___x_1069_ = lean_nat_dec_lt(v_size_1061_, v___x_1068_);
lean_dec(v___x_1068_);
if (v___x_1069_ == 0)
{
lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1097_; 
lean_inc(v_r_1065_);
lean_inc(v_l_1064_);
lean_inc(v_v_1063_);
lean_inc(v_k_1062_);
v_isSharedCheck_1097_ = !lean_is_exclusive(v_l_1048_);
if (v_isSharedCheck_1097_ == 0)
{
lean_object* v_unused_1098_; lean_object* v_unused_1099_; lean_object* v_unused_1100_; lean_object* v_unused_1101_; lean_object* v_unused_1102_; 
v_unused_1098_ = lean_ctor_get(v_l_1048_, 4);
lean_dec(v_unused_1098_);
v_unused_1099_ = lean_ctor_get(v_l_1048_, 3);
lean_dec(v_unused_1099_);
v_unused_1100_ = lean_ctor_get(v_l_1048_, 2);
lean_dec(v_unused_1100_);
v_unused_1101_ = lean_ctor_get(v_l_1048_, 1);
lean_dec(v_unused_1101_);
v_unused_1102_ = lean_ctor_get(v_l_1048_, 0);
lean_dec(v_unused_1102_);
v___x_1071_ = v_l_1048_;
v_isShared_1072_ = v_isSharedCheck_1097_;
goto v_resetjp_1070_;
}
else
{
lean_dec(v_l_1048_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1097_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___y_1076_; lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v___y_1087_; 
v___x_1073_ = lean_nat_add(v___x_1043_, v_size_1044_);
lean_dec(v_size_1044_);
v___x_1074_ = lean_nat_add(v___x_1073_, v_size_1045_);
lean_dec(v_size_1045_);
if (lean_obj_tag(v_l_1064_) == 0)
{
lean_object* v_size_1095_; 
v_size_1095_ = lean_ctor_get(v_l_1064_, 0);
lean_inc(v_size_1095_);
v___y_1087_ = v_size_1095_;
goto v___jp_1086_;
}
else
{
lean_object* v___x_1096_; 
v___x_1096_ = lean_unsigned_to_nat(0u);
v___y_1087_ = v___x_1096_;
goto v___jp_1086_;
}
v___jp_1075_:
{
lean_object* v___x_1079_; lean_object* v___x_1081_; 
v___x_1079_ = lean_nat_add(v___y_1076_, v___y_1078_);
lean_dec(v___y_1078_);
lean_dec(v___y_1076_);
if (v_isShared_1072_ == 0)
{
lean_ctor_set(v___x_1071_, 4, v_r_1049_);
lean_ctor_set(v___x_1071_, 3, v_r_1065_);
lean_ctor_set(v___x_1071_, 2, v_v_1047_);
lean_ctor_set(v___x_1071_, 1, v_k_1046_);
lean_ctor_set(v___x_1071_, 0, v___x_1079_);
v___x_1081_ = v___x_1071_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v___x_1079_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v_k_1046_);
lean_ctor_set(v_reuseFailAlloc_1085_, 2, v_v_1047_);
lean_ctor_set(v_reuseFailAlloc_1085_, 3, v_r_1065_);
lean_ctor_set(v_reuseFailAlloc_1085_, 4, v_r_1049_);
v___x_1081_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
lean_object* v___x_1083_; 
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 4, v___x_1081_);
lean_ctor_set(v___x_1059_, 3, v___y_1077_);
lean_ctor_set(v___x_1059_, 2, v_v_1063_);
lean_ctor_set(v___x_1059_, 1, v_k_1062_);
lean_ctor_set(v___x_1059_, 0, v___x_1074_);
v___x_1083_ = v___x_1059_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1074_);
lean_ctor_set(v_reuseFailAlloc_1084_, 1, v_k_1062_);
lean_ctor_set(v_reuseFailAlloc_1084_, 2, v_v_1063_);
lean_ctor_set(v_reuseFailAlloc_1084_, 3, v___y_1077_);
lean_ctor_set(v_reuseFailAlloc_1084_, 4, v___x_1081_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
v___jp_1086_:
{
lean_object* v___x_1088_; lean_object* v___x_1090_; 
v___x_1088_ = lean_nat_add(v___x_1073_, v___y_1087_);
lean_dec(v___y_1087_);
lean_dec(v___x_1073_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v_l_1064_);
lean_ctor_set(v___x_1039_, 3, v_impl_1042_);
lean_ctor_set(v___x_1039_, 0, v___x_1088_);
v___x_1090_ = v___x_1039_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1088_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1094_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1094_, 3, v_impl_1042_);
lean_ctor_set(v_reuseFailAlloc_1094_, 4, v_l_1064_);
v___x_1090_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
lean_object* v___x_1091_; 
v___x_1091_ = lean_nat_add(v___x_1043_, v_size_1066_);
if (lean_obj_tag(v_r_1065_) == 0)
{
lean_object* v_size_1092_; 
v_size_1092_ = lean_ctor_get(v_r_1065_, 0);
lean_inc(v_size_1092_);
v___y_1076_ = v___x_1091_;
v___y_1077_ = v___x_1090_;
v___y_1078_ = v_size_1092_;
goto v___jp_1075_;
}
else
{
lean_object* v___x_1093_; 
v___x_1093_ = lean_unsigned_to_nat(0u);
v___y_1076_ = v___x_1091_;
v___y_1077_ = v___x_1090_;
v___y_1078_ = v___x_1093_;
goto v___jp_1075_;
}
}
}
}
}
else
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1107_; 
lean_del_object(v___x_1039_);
v___x_1103_ = lean_nat_add(v___x_1043_, v_size_1044_);
lean_dec(v_size_1044_);
v___x_1104_ = lean_nat_add(v___x_1103_, v_size_1045_);
lean_dec(v_size_1045_);
v___x_1105_ = lean_nat_add(v___x_1103_, v_size_1061_);
lean_dec(v___x_1103_);
lean_inc_ref(v_impl_1042_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 4, v_l_1048_);
lean_ctor_set(v___x_1059_, 3, v_impl_1042_);
lean_ctor_set(v___x_1059_, 2, v_v_1035_);
lean_ctor_set(v___x_1059_, 1, v_k_1034_);
lean_ctor_set(v___x_1059_, 0, v___x_1105_);
v___x_1107_ = v___x_1059_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1105_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1120_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1120_, 3, v_impl_1042_);
lean_ctor_set(v_reuseFailAlloc_1120_, 4, v_l_1048_);
v___x_1107_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1114_; 
v_isSharedCheck_1114_ = !lean_is_exclusive(v_impl_1042_);
if (v_isSharedCheck_1114_ == 0)
{
lean_object* v_unused_1115_; lean_object* v_unused_1116_; lean_object* v_unused_1117_; lean_object* v_unused_1118_; lean_object* v_unused_1119_; 
v_unused_1115_ = lean_ctor_get(v_impl_1042_, 4);
lean_dec(v_unused_1115_);
v_unused_1116_ = lean_ctor_get(v_impl_1042_, 3);
lean_dec(v_unused_1116_);
v_unused_1117_ = lean_ctor_get(v_impl_1042_, 2);
lean_dec(v_unused_1117_);
v_unused_1118_ = lean_ctor_get(v_impl_1042_, 1);
lean_dec(v_unused_1118_);
v_unused_1119_ = lean_ctor_get(v_impl_1042_, 0);
lean_dec(v_unused_1119_);
v___x_1109_ = v_impl_1042_;
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
else
{
lean_dec(v_impl_1042_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 4, v_r_1049_);
lean_ctor_set(v___x_1109_, 3, v___x_1107_);
lean_ctor_set(v___x_1109_, 2, v_v_1047_);
lean_ctor_set(v___x_1109_, 1, v_k_1046_);
lean_ctor_set(v___x_1109_, 0, v___x_1104_);
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1104_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v_k_1046_);
lean_ctor_set(v_reuseFailAlloc_1113_, 2, v_v_1047_);
lean_ctor_set(v_reuseFailAlloc_1113_, 3, v___x_1107_);
lean_ctor_set(v_reuseFailAlloc_1113_, 4, v_r_1049_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1127_; lean_object* v___x_1128_; lean_object* v___x_1130_; 
v_size_1127_ = lean_ctor_get(v_impl_1042_, 0);
lean_inc(v_size_1127_);
v___x_1128_ = lean_nat_add(v___x_1043_, v_size_1127_);
lean_dec(v_size_1127_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 3, v_impl_1042_);
lean_ctor_set(v___x_1039_, 0, v___x_1128_);
v___x_1130_ = v___x_1039_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1131_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1131_, 3, v_impl_1042_);
lean_ctor_set(v_reuseFailAlloc_1131_, 4, v_r_1037_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
else
{
if (lean_obj_tag(v_r_1037_) == 0)
{
lean_object* v_l_1132_; 
v_l_1132_ = lean_ctor_get(v_r_1037_, 3);
lean_inc(v_l_1132_);
if (lean_obj_tag(v_l_1132_) == 0)
{
lean_object* v_r_1133_; 
v_r_1133_ = lean_ctor_get(v_r_1037_, 4);
lean_inc(v_r_1133_);
if (lean_obj_tag(v_r_1133_) == 0)
{
lean_object* v_size_1134_; lean_object* v_k_1135_; lean_object* v_v_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1149_; 
v_size_1134_ = lean_ctor_get(v_r_1037_, 0);
v_k_1135_ = lean_ctor_get(v_r_1037_, 1);
v_v_1136_ = lean_ctor_get(v_r_1037_, 2);
v_isSharedCheck_1149_ = !lean_is_exclusive(v_r_1037_);
if (v_isSharedCheck_1149_ == 0)
{
lean_object* v_unused_1150_; lean_object* v_unused_1151_; 
v_unused_1150_ = lean_ctor_get(v_r_1037_, 4);
lean_dec(v_unused_1150_);
v_unused_1151_ = lean_ctor_get(v_r_1037_, 3);
lean_dec(v_unused_1151_);
v___x_1138_ = v_r_1037_;
v_isShared_1139_ = v_isSharedCheck_1149_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_v_1136_);
lean_inc(v_k_1135_);
lean_inc(v_size_1134_);
lean_dec(v_r_1037_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1149_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v_size_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1144_; 
v_size_1140_ = lean_ctor_get(v_l_1132_, 0);
v___x_1141_ = lean_nat_add(v___x_1043_, v_size_1134_);
lean_dec(v_size_1134_);
v___x_1142_ = lean_nat_add(v___x_1043_, v_size_1140_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 4, v_l_1132_);
lean_ctor_set(v___x_1138_, 3, v_impl_1042_);
lean_ctor_set(v___x_1138_, 2, v_v_1035_);
lean_ctor_set(v___x_1138_, 1, v_k_1034_);
lean_ctor_set(v___x_1138_, 0, v___x_1142_);
v___x_1144_ = v___x_1138_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v___x_1142_);
lean_ctor_set(v_reuseFailAlloc_1148_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1148_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1148_, 3, v_impl_1042_);
lean_ctor_set(v_reuseFailAlloc_1148_, 4, v_l_1132_);
v___x_1144_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
lean_object* v___x_1146_; 
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v_r_1133_);
lean_ctor_set(v___x_1039_, 3, v___x_1144_);
lean_ctor_set(v___x_1039_, 2, v_v_1136_);
lean_ctor_set(v___x_1039_, 1, v_k_1135_);
lean_ctor_set(v___x_1039_, 0, v___x_1141_);
v___x_1146_ = v___x_1039_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v___x_1141_);
lean_ctor_set(v_reuseFailAlloc_1147_, 1, v_k_1135_);
lean_ctor_set(v_reuseFailAlloc_1147_, 2, v_v_1136_);
lean_ctor_set(v_reuseFailAlloc_1147_, 3, v___x_1144_);
lean_ctor_set(v_reuseFailAlloc_1147_, 4, v_r_1133_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
}
else
{
lean_object* v_k_1152_; lean_object* v_v_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1176_; 
v_k_1152_ = lean_ctor_get(v_r_1037_, 1);
v_v_1153_ = lean_ctor_get(v_r_1037_, 2);
v_isSharedCheck_1176_ = !lean_is_exclusive(v_r_1037_);
if (v_isSharedCheck_1176_ == 0)
{
lean_object* v_unused_1177_; lean_object* v_unused_1178_; lean_object* v_unused_1179_; 
v_unused_1177_ = lean_ctor_get(v_r_1037_, 4);
lean_dec(v_unused_1177_);
v_unused_1178_ = lean_ctor_get(v_r_1037_, 3);
lean_dec(v_unused_1178_);
v_unused_1179_ = lean_ctor_get(v_r_1037_, 0);
lean_dec(v_unused_1179_);
v___x_1155_ = v_r_1037_;
v_isShared_1156_ = v_isSharedCheck_1176_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_v_1153_);
lean_inc(v_k_1152_);
lean_dec(v_r_1037_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1176_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v_k_1157_; lean_object* v_v_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1172_; 
v_k_1157_ = lean_ctor_get(v_l_1132_, 1);
v_v_1158_ = lean_ctor_get(v_l_1132_, 2);
v_isSharedCheck_1172_ = !lean_is_exclusive(v_l_1132_);
if (v_isSharedCheck_1172_ == 0)
{
lean_object* v_unused_1173_; lean_object* v_unused_1174_; lean_object* v_unused_1175_; 
v_unused_1173_ = lean_ctor_get(v_l_1132_, 4);
lean_dec(v_unused_1173_);
v_unused_1174_ = lean_ctor_get(v_l_1132_, 3);
lean_dec(v_unused_1174_);
v_unused_1175_ = lean_ctor_get(v_l_1132_, 0);
lean_dec(v_unused_1175_);
v___x_1160_ = v_l_1132_;
v_isShared_1161_ = v_isSharedCheck_1172_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_v_1158_);
lean_inc(v_k_1157_);
lean_dec(v_l_1132_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1172_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; lean_object* v___x_1164_; 
v___x_1162_ = lean_unsigned_to_nat(3u);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 4, v_r_1133_);
lean_ctor_set(v___x_1160_, 3, v_r_1133_);
lean_ctor_set(v___x_1160_, 2, v_v_1035_);
lean_ctor_set(v___x_1160_, 1, v_k_1034_);
lean_ctor_set(v___x_1160_, 0, v___x_1043_);
v___x_1164_ = v___x_1160_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1171_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1171_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1171_, 3, v_r_1133_);
lean_ctor_set(v_reuseFailAlloc_1171_, 4, v_r_1133_);
v___x_1164_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
lean_object* v___x_1166_; 
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 3, v_r_1133_);
lean_ctor_set(v___x_1155_, 0, v___x_1043_);
v___x_1166_ = v___x_1155_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1170_, 1, v_k_1152_);
lean_ctor_set(v_reuseFailAlloc_1170_, 2, v_v_1153_);
lean_ctor_set(v_reuseFailAlloc_1170_, 3, v_r_1133_);
lean_ctor_set(v_reuseFailAlloc_1170_, 4, v_r_1133_);
v___x_1166_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
lean_object* v___x_1168_; 
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v___x_1166_);
lean_ctor_set(v___x_1039_, 3, v___x_1164_);
lean_ctor_set(v___x_1039_, 2, v_v_1158_);
lean_ctor_set(v___x_1039_, 1, v_k_1157_);
lean_ctor_set(v___x_1039_, 0, v___x_1162_);
v___x_1168_ = v___x_1039_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1162_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v_k_1157_);
lean_ctor_set(v_reuseFailAlloc_1169_, 2, v_v_1158_);
lean_ctor_set(v_reuseFailAlloc_1169_, 3, v___x_1164_);
lean_ctor_set(v_reuseFailAlloc_1169_, 4, v___x_1166_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_1180_; 
v_r_1180_ = lean_ctor_get(v_r_1037_, 4);
lean_inc(v_r_1180_);
if (lean_obj_tag(v_r_1180_) == 0)
{
lean_object* v_k_1181_; lean_object* v_v_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1193_; 
v_k_1181_ = lean_ctor_get(v_r_1037_, 1);
v_v_1182_ = lean_ctor_get(v_r_1037_, 2);
v_isSharedCheck_1193_ = !lean_is_exclusive(v_r_1037_);
if (v_isSharedCheck_1193_ == 0)
{
lean_object* v_unused_1194_; lean_object* v_unused_1195_; lean_object* v_unused_1196_; 
v_unused_1194_ = lean_ctor_get(v_r_1037_, 4);
lean_dec(v_unused_1194_);
v_unused_1195_ = lean_ctor_get(v_r_1037_, 3);
lean_dec(v_unused_1195_);
v_unused_1196_ = lean_ctor_get(v_r_1037_, 0);
lean_dec(v_unused_1196_);
v___x_1184_ = v_r_1037_;
v_isShared_1185_ = v_isSharedCheck_1193_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_v_1182_);
lean_inc(v_k_1181_);
lean_dec(v_r_1037_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1193_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1186_; lean_object* v___x_1188_; 
v___x_1186_ = lean_unsigned_to_nat(3u);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 4, v_l_1132_);
lean_ctor_set(v___x_1184_, 2, v_v_1035_);
lean_ctor_set(v___x_1184_, 1, v_k_1034_);
lean_ctor_set(v___x_1184_, 0, v___x_1043_);
v___x_1188_ = v___x_1184_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1192_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1192_, 3, v_l_1132_);
lean_ctor_set(v_reuseFailAlloc_1192_, 4, v_l_1132_);
v___x_1188_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
lean_object* v___x_1190_; 
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v_r_1180_);
lean_ctor_set(v___x_1039_, 3, v___x_1188_);
lean_ctor_set(v___x_1039_, 2, v_v_1182_);
lean_ctor_set(v___x_1039_, 1, v_k_1181_);
lean_ctor_set(v___x_1039_, 0, v___x_1186_);
v___x_1190_ = v___x_1039_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1186_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v_k_1181_);
lean_ctor_set(v_reuseFailAlloc_1191_, 2, v_v_1182_);
lean_ctor_set(v_reuseFailAlloc_1191_, 3, v___x_1188_);
lean_ctor_set(v_reuseFailAlloc_1191_, 4, v_r_1180_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
else
{
lean_object* v_size_1197_; lean_object* v_k_1198_; lean_object* v_v_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1210_; 
v_size_1197_ = lean_ctor_get(v_r_1037_, 0);
v_k_1198_ = lean_ctor_get(v_r_1037_, 1);
v_v_1199_ = lean_ctor_get(v_r_1037_, 2);
v_isSharedCheck_1210_ = !lean_is_exclusive(v_r_1037_);
if (v_isSharedCheck_1210_ == 0)
{
lean_object* v_unused_1211_; lean_object* v_unused_1212_; 
v_unused_1211_ = lean_ctor_get(v_r_1037_, 4);
lean_dec(v_unused_1211_);
v_unused_1212_ = lean_ctor_get(v_r_1037_, 3);
lean_dec(v_unused_1212_);
v___x_1201_ = v_r_1037_;
v_isShared_1202_ = v_isSharedCheck_1210_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_v_1199_);
lean_inc(v_k_1198_);
lean_inc(v_size_1197_);
lean_dec(v_r_1037_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1210_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 3, v_r_1180_);
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_size_1197_);
lean_ctor_set(v_reuseFailAlloc_1209_, 1, v_k_1198_);
lean_ctor_set(v_reuseFailAlloc_1209_, 2, v_v_1199_);
lean_ctor_set(v_reuseFailAlloc_1209_, 3, v_r_1180_);
lean_ctor_set(v_reuseFailAlloc_1209_, 4, v_r_1180_);
v___x_1204_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
lean_object* v___x_1205_; lean_object* v___x_1207_; 
v___x_1205_ = lean_unsigned_to_nat(2u);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v___x_1204_);
lean_ctor_set(v___x_1039_, 3, v_r_1180_);
lean_ctor_set(v___x_1039_, 0, v___x_1205_);
v___x_1207_ = v___x_1039_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1205_);
lean_ctor_set(v_reuseFailAlloc_1208_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1208_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1208_, 3, v_r_1180_);
lean_ctor_set(v_reuseFailAlloc_1208_, 4, v___x_1204_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
}
}
else
{
lean_object* v___x_1214_; 
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 3, v_r_1037_);
lean_ctor_set(v___x_1039_, 0, v___x_1043_);
v___x_1214_ = v___x_1039_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1215_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1215_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1215_, 3, v_r_1037_);
lean_ctor_set(v_reuseFailAlloc_1215_, 4, v_r_1037_);
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
case 1:
{
lean_del_object(v___x_1039_);
lean_dec(v_v_1035_);
lean_dec(v_k_1034_);
if (lean_obj_tag(v_l_1036_) == 0)
{
if (lean_obj_tag(v_r_1037_) == 0)
{
lean_object* v_size_1216_; lean_object* v_k_1217_; lean_object* v_v_1218_; lean_object* v_l_1219_; lean_object* v_r_1220_; lean_object* v_size_1221_; lean_object* v_k_1222_; lean_object* v_v_1223_; lean_object* v_l_1224_; lean_object* v_r_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; 
v_size_1216_ = lean_ctor_get(v_l_1036_, 0);
v_k_1217_ = lean_ctor_get(v_l_1036_, 1);
v_v_1218_ = lean_ctor_get(v_l_1036_, 2);
v_l_1219_ = lean_ctor_get(v_l_1036_, 3);
v_r_1220_ = lean_ctor_get(v_l_1036_, 4);
lean_inc(v_r_1220_);
v_size_1221_ = lean_ctor_get(v_r_1037_, 0);
v_k_1222_ = lean_ctor_get(v_r_1037_, 1);
v_v_1223_ = lean_ctor_get(v_r_1037_, 2);
v_l_1224_ = lean_ctor_get(v_r_1037_, 3);
lean_inc(v_l_1224_);
v_r_1225_ = lean_ctor_get(v_r_1037_, 4);
v___x_1226_ = lean_unsigned_to_nat(1u);
v___x_1227_ = lean_nat_dec_lt(v_size_1216_, v_size_1221_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1363_; 
lean_inc(v_l_1219_);
lean_inc(v_v_1218_);
lean_inc(v_k_1217_);
v_isSharedCheck_1363_ = !lean_is_exclusive(v_l_1036_);
if (v_isSharedCheck_1363_ == 0)
{
lean_object* v_unused_1364_; lean_object* v_unused_1365_; lean_object* v_unused_1366_; lean_object* v_unused_1367_; lean_object* v_unused_1368_; 
v_unused_1364_ = lean_ctor_get(v_l_1036_, 4);
lean_dec(v_unused_1364_);
v_unused_1365_ = lean_ctor_get(v_l_1036_, 3);
lean_dec(v_unused_1365_);
v_unused_1366_ = lean_ctor_get(v_l_1036_, 2);
lean_dec(v_unused_1366_);
v_unused_1367_ = lean_ctor_get(v_l_1036_, 1);
lean_dec(v_unused_1367_);
v_unused_1368_ = lean_ctor_get(v_l_1036_, 0);
lean_dec(v_unused_1368_);
v___x_1229_ = v_l_1036_;
v_isShared_1230_ = v_isSharedCheck_1363_;
goto v_resetjp_1228_;
}
else
{
lean_dec(v_l_1036_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1363_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1231_; lean_object* v_tree_1232_; 
v___x_1231_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_1217_, v_v_1218_, v_l_1219_, v_r_1220_);
v_tree_1232_ = lean_ctor_get(v___x_1231_, 2);
lean_inc(v_tree_1232_);
if (lean_obj_tag(v_tree_1232_) == 0)
{
lean_object* v_k_1233_; lean_object* v_v_1234_; lean_object* v_size_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; uint8_t v___x_1238_; 
v_k_1233_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_k_1233_);
v_v_1234_ = lean_ctor_get(v___x_1231_, 1);
lean_inc(v_v_1234_);
lean_dec_ref(v___x_1231_);
v_size_1235_ = lean_ctor_get(v_tree_1232_, 0);
v___x_1236_ = lean_unsigned_to_nat(3u);
v___x_1237_ = lean_nat_mul(v___x_1236_, v_size_1235_);
v___x_1238_ = lean_nat_dec_lt(v___x_1237_, v_size_1221_);
lean_dec(v___x_1237_);
if (v___x_1238_ == 0)
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1242_; 
lean_dec(v_l_1224_);
v___x_1239_ = lean_nat_add(v___x_1226_, v_size_1235_);
v___x_1240_ = lean_nat_add(v___x_1239_, v_size_1221_);
lean_dec(v___x_1239_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 4, v_r_1037_);
lean_ctor_set(v___x_1229_, 3, v_tree_1232_);
lean_ctor_set(v___x_1229_, 2, v_v_1234_);
lean_ctor_set(v___x_1229_, 1, v_k_1233_);
lean_ctor_set(v___x_1229_, 0, v___x_1240_);
v___x_1242_ = v___x_1229_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v___x_1240_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v_k_1233_);
lean_ctor_set(v_reuseFailAlloc_1243_, 2, v_v_1234_);
lean_ctor_set(v_reuseFailAlloc_1243_, 3, v_tree_1232_);
lean_ctor_set(v_reuseFailAlloc_1243_, 4, v_r_1037_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
else
{
lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1298_; 
lean_inc(v_r_1225_);
lean_inc(v_v_1223_);
lean_inc(v_k_1222_);
lean_inc(v_size_1221_);
v_isSharedCheck_1298_ = !lean_is_exclusive(v_r_1037_);
if (v_isSharedCheck_1298_ == 0)
{
lean_object* v_unused_1299_; lean_object* v_unused_1300_; lean_object* v_unused_1301_; lean_object* v_unused_1302_; lean_object* v_unused_1303_; 
v_unused_1299_ = lean_ctor_get(v_r_1037_, 4);
lean_dec(v_unused_1299_);
v_unused_1300_ = lean_ctor_get(v_r_1037_, 3);
lean_dec(v_unused_1300_);
v_unused_1301_ = lean_ctor_get(v_r_1037_, 2);
lean_dec(v_unused_1301_);
v_unused_1302_ = lean_ctor_get(v_r_1037_, 1);
lean_dec(v_unused_1302_);
v_unused_1303_ = lean_ctor_get(v_r_1037_, 0);
lean_dec(v_unused_1303_);
v___x_1245_ = v_r_1037_;
v_isShared_1246_ = v_isSharedCheck_1298_;
goto v_resetjp_1244_;
}
else
{
lean_dec(v_r_1037_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1298_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v_size_1247_; lean_object* v_k_1248_; lean_object* v_v_1249_; lean_object* v_l_1250_; lean_object* v_r_1251_; lean_object* v_size_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; uint8_t v___x_1255_; 
v_size_1247_ = lean_ctor_get(v_l_1224_, 0);
v_k_1248_ = lean_ctor_get(v_l_1224_, 1);
v_v_1249_ = lean_ctor_get(v_l_1224_, 2);
v_l_1250_ = lean_ctor_get(v_l_1224_, 3);
v_r_1251_ = lean_ctor_get(v_l_1224_, 4);
v_size_1252_ = lean_ctor_get(v_r_1225_, 0);
v___x_1253_ = lean_unsigned_to_nat(2u);
v___x_1254_ = lean_nat_mul(v___x_1253_, v_size_1252_);
v___x_1255_ = lean_nat_dec_lt(v_size_1247_, v___x_1254_);
lean_dec(v___x_1254_);
if (v___x_1255_ == 0)
{
lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1283_; 
lean_inc(v_r_1251_);
lean_inc(v_l_1250_);
lean_inc(v_v_1249_);
lean_inc(v_k_1248_);
v_isSharedCheck_1283_ = !lean_is_exclusive(v_l_1224_);
if (v_isSharedCheck_1283_ == 0)
{
lean_object* v_unused_1284_; lean_object* v_unused_1285_; lean_object* v_unused_1286_; lean_object* v_unused_1287_; lean_object* v_unused_1288_; 
v_unused_1284_ = lean_ctor_get(v_l_1224_, 4);
lean_dec(v_unused_1284_);
v_unused_1285_ = lean_ctor_get(v_l_1224_, 3);
lean_dec(v_unused_1285_);
v_unused_1286_ = lean_ctor_get(v_l_1224_, 2);
lean_dec(v_unused_1286_);
v_unused_1287_ = lean_ctor_get(v_l_1224_, 1);
lean_dec(v_unused_1287_);
v_unused_1288_ = lean_ctor_get(v_l_1224_, 0);
lean_dec(v_unused_1288_);
v___x_1257_ = v_l_1224_;
v_isShared_1258_ = v_isSharedCheck_1283_;
goto v_resetjp_1256_;
}
else
{
lean_dec(v_l_1224_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1283_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; lean_object* v___y_1273_; 
v___x_1259_ = lean_nat_add(v___x_1226_, v_size_1235_);
v___x_1260_ = lean_nat_add(v___x_1259_, v_size_1221_);
lean_dec(v_size_1221_);
if (lean_obj_tag(v_l_1250_) == 0)
{
lean_object* v_size_1281_; 
v_size_1281_ = lean_ctor_get(v_l_1250_, 0);
lean_inc(v_size_1281_);
v___y_1273_ = v_size_1281_;
goto v___jp_1272_;
}
else
{
lean_object* v___x_1282_; 
v___x_1282_ = lean_unsigned_to_nat(0u);
v___y_1273_ = v___x_1282_;
goto v___jp_1272_;
}
v___jp_1261_:
{
lean_object* v___x_1265_; lean_object* v___x_1267_; 
v___x_1265_ = lean_nat_add(v___y_1262_, v___y_1264_);
lean_dec(v___y_1264_);
lean_dec(v___y_1262_);
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 4, v_r_1225_);
lean_ctor_set(v___x_1257_, 3, v_r_1251_);
lean_ctor_set(v___x_1257_, 2, v_v_1223_);
lean_ctor_set(v___x_1257_, 1, v_k_1222_);
lean_ctor_set(v___x_1257_, 0, v___x_1265_);
v___x_1267_ = v___x_1257_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1265_);
lean_ctor_set(v_reuseFailAlloc_1271_, 1, v_k_1222_);
lean_ctor_set(v_reuseFailAlloc_1271_, 2, v_v_1223_);
lean_ctor_set(v_reuseFailAlloc_1271_, 3, v_r_1251_);
lean_ctor_set(v_reuseFailAlloc_1271_, 4, v_r_1225_);
v___x_1267_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
lean_object* v___x_1269_; 
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 4, v___x_1267_);
lean_ctor_set(v___x_1245_, 3, v___y_1263_);
lean_ctor_set(v___x_1245_, 2, v_v_1249_);
lean_ctor_set(v___x_1245_, 1, v_k_1248_);
lean_ctor_set(v___x_1245_, 0, v___x_1260_);
v___x_1269_ = v___x_1245_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v___x_1260_);
lean_ctor_set(v_reuseFailAlloc_1270_, 1, v_k_1248_);
lean_ctor_set(v_reuseFailAlloc_1270_, 2, v_v_1249_);
lean_ctor_set(v_reuseFailAlloc_1270_, 3, v___y_1263_);
lean_ctor_set(v_reuseFailAlloc_1270_, 4, v___x_1267_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
v___jp_1272_:
{
lean_object* v___x_1274_; lean_object* v___x_1276_; 
v___x_1274_ = lean_nat_add(v___x_1259_, v___y_1273_);
lean_dec(v___y_1273_);
lean_dec(v___x_1259_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 4, v_l_1250_);
lean_ctor_set(v___x_1229_, 3, v_tree_1232_);
lean_ctor_set(v___x_1229_, 2, v_v_1234_);
lean_ctor_set(v___x_1229_, 1, v_k_1233_);
lean_ctor_set(v___x_1229_, 0, v___x_1274_);
v___x_1276_ = v___x_1229_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v___x_1274_);
lean_ctor_set(v_reuseFailAlloc_1280_, 1, v_k_1233_);
lean_ctor_set(v_reuseFailAlloc_1280_, 2, v_v_1234_);
lean_ctor_set(v_reuseFailAlloc_1280_, 3, v_tree_1232_);
lean_ctor_set(v_reuseFailAlloc_1280_, 4, v_l_1250_);
v___x_1276_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1277_; 
v___x_1277_ = lean_nat_add(v___x_1226_, v_size_1252_);
if (lean_obj_tag(v_r_1251_) == 0)
{
lean_object* v_size_1278_; 
v_size_1278_ = lean_ctor_get(v_r_1251_, 0);
lean_inc(v_size_1278_);
v___y_1262_ = v___x_1277_;
v___y_1263_ = v___x_1276_;
v___y_1264_ = v_size_1278_;
goto v___jp_1261_;
}
else
{
lean_object* v___x_1279_; 
v___x_1279_ = lean_unsigned_to_nat(0u);
v___y_1262_ = v___x_1277_;
v___y_1263_ = v___x_1276_;
v___y_1264_ = v___x_1279_;
goto v___jp_1261_;
}
}
}
}
}
else
{
lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1293_; 
v___x_1289_ = lean_nat_add(v___x_1226_, v_size_1235_);
v___x_1290_ = lean_nat_add(v___x_1289_, v_size_1221_);
lean_dec(v_size_1221_);
v___x_1291_ = lean_nat_add(v___x_1289_, v_size_1247_);
lean_dec(v___x_1289_);
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 4, v_l_1224_);
lean_ctor_set(v___x_1245_, 3, v_tree_1232_);
lean_ctor_set(v___x_1245_, 2, v_v_1234_);
lean_ctor_set(v___x_1245_, 1, v_k_1233_);
lean_ctor_set(v___x_1245_, 0, v___x_1291_);
v___x_1293_ = v___x_1245_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v___x_1291_);
lean_ctor_set(v_reuseFailAlloc_1297_, 1, v_k_1233_);
lean_ctor_set(v_reuseFailAlloc_1297_, 2, v_v_1234_);
lean_ctor_set(v_reuseFailAlloc_1297_, 3, v_tree_1232_);
lean_ctor_set(v_reuseFailAlloc_1297_, 4, v_l_1224_);
v___x_1293_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
lean_object* v___x_1295_; 
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 4, v_r_1225_);
lean_ctor_set(v___x_1229_, 3, v___x_1293_);
lean_ctor_set(v___x_1229_, 2, v_v_1223_);
lean_ctor_set(v___x_1229_, 1, v_k_1222_);
lean_ctor_set(v___x_1229_, 0, v___x_1290_);
v___x_1295_ = v___x_1229_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___x_1290_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v_k_1222_);
lean_ctor_set(v_reuseFailAlloc_1296_, 2, v_v_1223_);
lean_ctor_set(v_reuseFailAlloc_1296_, 3, v___x_1293_);
lean_ctor_set(v_reuseFailAlloc_1296_, 4, v_r_1225_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
return v___x_1295_;
}
}
}
}
}
}
else
{
lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1357_; 
lean_inc(v_r_1225_);
lean_inc(v_v_1223_);
lean_inc(v_k_1222_);
lean_inc(v_size_1221_);
v_isSharedCheck_1357_ = !lean_is_exclusive(v_r_1037_);
if (v_isSharedCheck_1357_ == 0)
{
lean_object* v_unused_1358_; lean_object* v_unused_1359_; lean_object* v_unused_1360_; lean_object* v_unused_1361_; lean_object* v_unused_1362_; 
v_unused_1358_ = lean_ctor_get(v_r_1037_, 4);
lean_dec(v_unused_1358_);
v_unused_1359_ = lean_ctor_get(v_r_1037_, 3);
lean_dec(v_unused_1359_);
v_unused_1360_ = lean_ctor_get(v_r_1037_, 2);
lean_dec(v_unused_1360_);
v_unused_1361_ = lean_ctor_get(v_r_1037_, 1);
lean_dec(v_unused_1361_);
v_unused_1362_ = lean_ctor_get(v_r_1037_, 0);
lean_dec(v_unused_1362_);
v___x_1305_ = v_r_1037_;
v_isShared_1306_ = v_isSharedCheck_1357_;
goto v_resetjp_1304_;
}
else
{
lean_dec(v_r_1037_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1357_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
if (lean_obj_tag(v_l_1224_) == 0)
{
if (lean_obj_tag(v_r_1225_) == 0)
{
lean_object* v_k_1307_; lean_object* v_v_1308_; lean_object* v_size_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1313_; 
v_k_1307_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_k_1307_);
v_v_1308_ = lean_ctor_get(v___x_1231_, 1);
lean_inc(v_v_1308_);
lean_dec_ref(v___x_1231_);
v_size_1309_ = lean_ctor_get(v_l_1224_, 0);
v___x_1310_ = lean_nat_add(v___x_1226_, v_size_1221_);
lean_dec(v_size_1221_);
v___x_1311_ = lean_nat_add(v___x_1226_, v_size_1309_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 4, v_l_1224_);
lean_ctor_set(v___x_1305_, 3, v_tree_1232_);
lean_ctor_set(v___x_1305_, 2, v_v_1308_);
lean_ctor_set(v___x_1305_, 1, v_k_1307_);
lean_ctor_set(v___x_1305_, 0, v___x_1311_);
v___x_1313_ = v___x_1305_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v___x_1311_);
lean_ctor_set(v_reuseFailAlloc_1317_, 1, v_k_1307_);
lean_ctor_set(v_reuseFailAlloc_1317_, 2, v_v_1308_);
lean_ctor_set(v_reuseFailAlloc_1317_, 3, v_tree_1232_);
lean_ctor_set(v_reuseFailAlloc_1317_, 4, v_l_1224_);
v___x_1313_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
lean_object* v___x_1315_; 
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 4, v_r_1225_);
lean_ctor_set(v___x_1229_, 3, v___x_1313_);
lean_ctor_set(v___x_1229_, 2, v_v_1223_);
lean_ctor_set(v___x_1229_, 1, v_k_1222_);
lean_ctor_set(v___x_1229_, 0, v___x_1310_);
v___x_1315_ = v___x_1229_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v___x_1310_);
lean_ctor_set(v_reuseFailAlloc_1316_, 1, v_k_1222_);
lean_ctor_set(v_reuseFailAlloc_1316_, 2, v_v_1223_);
lean_ctor_set(v_reuseFailAlloc_1316_, 3, v___x_1313_);
lean_ctor_set(v_reuseFailAlloc_1316_, 4, v_r_1225_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
}
}
}
else
{
lean_object* v_k_1318_; lean_object* v_v_1319_; lean_object* v_k_1320_; lean_object* v_v_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1335_; 
lean_dec(v_size_1221_);
v_k_1318_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_k_1318_);
v_v_1319_ = lean_ctor_get(v___x_1231_, 1);
lean_inc(v_v_1319_);
lean_dec_ref(v___x_1231_);
v_k_1320_ = lean_ctor_get(v_l_1224_, 1);
v_v_1321_ = lean_ctor_get(v_l_1224_, 2);
v_isSharedCheck_1335_ = !lean_is_exclusive(v_l_1224_);
if (v_isSharedCheck_1335_ == 0)
{
lean_object* v_unused_1336_; lean_object* v_unused_1337_; lean_object* v_unused_1338_; 
v_unused_1336_ = lean_ctor_get(v_l_1224_, 4);
lean_dec(v_unused_1336_);
v_unused_1337_ = lean_ctor_get(v_l_1224_, 3);
lean_dec(v_unused_1337_);
v_unused_1338_ = lean_ctor_get(v_l_1224_, 0);
lean_dec(v_unused_1338_);
v___x_1323_ = v_l_1224_;
v_isShared_1324_ = v_isSharedCheck_1335_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_v_1321_);
lean_inc(v_k_1320_);
lean_dec(v_l_1224_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1335_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1325_; lean_object* v___x_1327_; 
v___x_1325_ = lean_unsigned_to_nat(3u);
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 4, v_r_1225_);
lean_ctor_set(v___x_1323_, 3, v_r_1225_);
lean_ctor_set(v___x_1323_, 2, v_v_1319_);
lean_ctor_set(v___x_1323_, 1, v_k_1318_);
lean_ctor_set(v___x_1323_, 0, v___x_1226_);
v___x_1327_ = v___x_1323_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1226_);
lean_ctor_set(v_reuseFailAlloc_1334_, 1, v_k_1318_);
lean_ctor_set(v_reuseFailAlloc_1334_, 2, v_v_1319_);
lean_ctor_set(v_reuseFailAlloc_1334_, 3, v_r_1225_);
lean_ctor_set(v_reuseFailAlloc_1334_, 4, v_r_1225_);
v___x_1327_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
lean_object* v___x_1329_; 
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 3, v_r_1225_);
lean_ctor_set(v___x_1305_, 0, v___x_1226_);
v___x_1329_ = v___x_1305_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v___x_1226_);
lean_ctor_set(v_reuseFailAlloc_1333_, 1, v_k_1222_);
lean_ctor_set(v_reuseFailAlloc_1333_, 2, v_v_1223_);
lean_ctor_set(v_reuseFailAlloc_1333_, 3, v_r_1225_);
lean_ctor_set(v_reuseFailAlloc_1333_, 4, v_r_1225_);
v___x_1329_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
lean_object* v___x_1331_; 
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 4, v___x_1329_);
lean_ctor_set(v___x_1229_, 3, v___x_1327_);
lean_ctor_set(v___x_1229_, 2, v_v_1321_);
lean_ctor_set(v___x_1229_, 1, v_k_1320_);
lean_ctor_set(v___x_1229_, 0, v___x_1325_);
v___x_1331_ = v___x_1229_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v___x_1325_);
lean_ctor_set(v_reuseFailAlloc_1332_, 1, v_k_1320_);
lean_ctor_set(v_reuseFailAlloc_1332_, 2, v_v_1321_);
lean_ctor_set(v_reuseFailAlloc_1332_, 3, v___x_1327_);
lean_ctor_set(v_reuseFailAlloc_1332_, 4, v___x_1329_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1225_) == 0)
{
lean_object* v_k_1339_; lean_object* v_v_1340_; lean_object* v___x_1341_; lean_object* v___x_1343_; 
lean_dec(v_size_1221_);
v_k_1339_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_k_1339_);
v_v_1340_ = lean_ctor_get(v___x_1231_, 1);
lean_inc(v_v_1340_);
lean_dec_ref(v___x_1231_);
v___x_1341_ = lean_unsigned_to_nat(3u);
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 4, v_l_1224_);
lean_ctor_set(v___x_1305_, 2, v_v_1340_);
lean_ctor_set(v___x_1305_, 1, v_k_1339_);
lean_ctor_set(v___x_1305_, 0, v___x_1226_);
v___x_1343_ = v___x_1305_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___x_1226_);
lean_ctor_set(v_reuseFailAlloc_1347_, 1, v_k_1339_);
lean_ctor_set(v_reuseFailAlloc_1347_, 2, v_v_1340_);
lean_ctor_set(v_reuseFailAlloc_1347_, 3, v_l_1224_);
lean_ctor_set(v_reuseFailAlloc_1347_, 4, v_l_1224_);
v___x_1343_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
lean_object* v___x_1345_; 
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 4, v_r_1225_);
lean_ctor_set(v___x_1229_, 3, v___x_1343_);
lean_ctor_set(v___x_1229_, 2, v_v_1223_);
lean_ctor_set(v___x_1229_, 1, v_k_1222_);
lean_ctor_set(v___x_1229_, 0, v___x_1341_);
v___x_1345_ = v___x_1229_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1341_);
lean_ctor_set(v_reuseFailAlloc_1346_, 1, v_k_1222_);
lean_ctor_set(v_reuseFailAlloc_1346_, 2, v_v_1223_);
lean_ctor_set(v_reuseFailAlloc_1346_, 3, v___x_1343_);
lean_ctor_set(v_reuseFailAlloc_1346_, 4, v_r_1225_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
else
{
lean_object* v_k_1348_; lean_object* v_v_1349_; lean_object* v___x_1351_; 
v_k_1348_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_k_1348_);
v_v_1349_ = lean_ctor_get(v___x_1231_, 1);
lean_inc(v_v_1349_);
lean_dec_ref(v___x_1231_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 3, v_r_1225_);
v___x_1351_ = v___x_1305_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_size_1221_);
lean_ctor_set(v_reuseFailAlloc_1356_, 1, v_k_1222_);
lean_ctor_set(v_reuseFailAlloc_1356_, 2, v_v_1223_);
lean_ctor_set(v_reuseFailAlloc_1356_, 3, v_r_1225_);
lean_ctor_set(v_reuseFailAlloc_1356_, 4, v_r_1225_);
v___x_1351_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
lean_object* v___x_1352_; lean_object* v___x_1354_; 
v___x_1352_ = lean_unsigned_to_nat(2u);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 4, v___x_1351_);
lean_ctor_set(v___x_1229_, 3, v_r_1225_);
lean_ctor_set(v___x_1229_, 2, v_v_1349_);
lean_ctor_set(v___x_1229_, 1, v_k_1348_);
lean_ctor_set(v___x_1229_, 0, v___x_1352_);
v___x_1354_ = v___x_1229_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v___x_1352_);
lean_ctor_set(v_reuseFailAlloc_1355_, 1, v_k_1348_);
lean_ctor_set(v_reuseFailAlloc_1355_, 2, v_v_1349_);
lean_ctor_set(v_reuseFailAlloc_1355_, 3, v_r_1225_);
lean_ctor_set(v_reuseFailAlloc_1355_, 4, v___x_1351_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
return v___x_1354_;
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
lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1521_; 
lean_inc(v_r_1225_);
lean_inc(v_v_1223_);
lean_inc(v_k_1222_);
v_isSharedCheck_1521_ = !lean_is_exclusive(v_r_1037_);
if (v_isSharedCheck_1521_ == 0)
{
lean_object* v_unused_1522_; lean_object* v_unused_1523_; lean_object* v_unused_1524_; lean_object* v_unused_1525_; lean_object* v_unused_1526_; 
v_unused_1522_ = lean_ctor_get(v_r_1037_, 4);
lean_dec(v_unused_1522_);
v_unused_1523_ = lean_ctor_get(v_r_1037_, 3);
lean_dec(v_unused_1523_);
v_unused_1524_ = lean_ctor_get(v_r_1037_, 2);
lean_dec(v_unused_1524_);
v_unused_1525_ = lean_ctor_get(v_r_1037_, 1);
lean_dec(v_unused_1525_);
v_unused_1526_ = lean_ctor_get(v_r_1037_, 0);
lean_dec(v_unused_1526_);
v___x_1370_ = v_r_1037_;
v_isShared_1371_ = v_isSharedCheck_1521_;
goto v_resetjp_1369_;
}
else
{
lean_dec(v_r_1037_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1521_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1372_; lean_object* v_tree_1373_; 
v___x_1372_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_1222_, v_v_1223_, v_l_1224_, v_r_1225_);
v_tree_1373_ = lean_ctor_get(v___x_1372_, 2);
lean_inc(v_tree_1373_);
if (lean_obj_tag(v_tree_1373_) == 0)
{
lean_object* v_k_1374_; lean_object* v_v_1375_; lean_object* v_size_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; uint8_t v___x_1379_; 
v_k_1374_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_k_1374_);
v_v_1375_ = lean_ctor_get(v___x_1372_, 1);
lean_inc(v_v_1375_);
lean_dec_ref(v___x_1372_);
v_size_1376_ = lean_ctor_get(v_tree_1373_, 0);
v___x_1377_ = lean_unsigned_to_nat(3u);
v___x_1378_ = lean_nat_mul(v___x_1377_, v_size_1376_);
v___x_1379_ = lean_nat_dec_lt(v___x_1378_, v_size_1216_);
lean_dec(v___x_1378_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
lean_dec(v_r_1220_);
v___x_1380_ = lean_nat_add(v___x_1226_, v_size_1216_);
v___x_1381_ = lean_nat_add(v___x_1380_, v_size_1376_);
lean_dec(v___x_1380_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 4, v_tree_1373_);
lean_ctor_set(v___x_1370_, 3, v_l_1036_);
lean_ctor_set(v___x_1370_, 2, v_v_1375_);
lean_ctor_set(v___x_1370_, 1, v_k_1374_);
lean_ctor_set(v___x_1370_, 0, v___x_1381_);
v___x_1383_ = v___x_1370_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
lean_ctor_set(v_reuseFailAlloc_1384_, 1, v_k_1374_);
lean_ctor_set(v_reuseFailAlloc_1384_, 2, v_v_1375_);
lean_ctor_set(v_reuseFailAlloc_1384_, 3, v_l_1036_);
lean_ctor_set(v_reuseFailAlloc_1384_, 4, v_tree_1373_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
else
{
lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1450_; 
lean_inc(v_l_1219_);
lean_inc(v_v_1218_);
lean_inc(v_k_1217_);
lean_inc(v_size_1216_);
v_isSharedCheck_1450_ = !lean_is_exclusive(v_l_1036_);
if (v_isSharedCheck_1450_ == 0)
{
lean_object* v_unused_1451_; lean_object* v_unused_1452_; lean_object* v_unused_1453_; lean_object* v_unused_1454_; lean_object* v_unused_1455_; 
v_unused_1451_ = lean_ctor_get(v_l_1036_, 4);
lean_dec(v_unused_1451_);
v_unused_1452_ = lean_ctor_get(v_l_1036_, 3);
lean_dec(v_unused_1452_);
v_unused_1453_ = lean_ctor_get(v_l_1036_, 2);
lean_dec(v_unused_1453_);
v_unused_1454_ = lean_ctor_get(v_l_1036_, 1);
lean_dec(v_unused_1454_);
v_unused_1455_ = lean_ctor_get(v_l_1036_, 0);
lean_dec(v_unused_1455_);
v___x_1386_ = v_l_1036_;
v_isShared_1387_ = v_isSharedCheck_1450_;
goto v_resetjp_1385_;
}
else
{
lean_dec(v_l_1036_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1450_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v_size_1388_; lean_object* v_size_1389_; lean_object* v_k_1390_; lean_object* v_v_1391_; lean_object* v_l_1392_; lean_object* v_r_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; uint8_t v___x_1396_; 
v_size_1388_ = lean_ctor_get(v_l_1219_, 0);
v_size_1389_ = lean_ctor_get(v_r_1220_, 0);
v_k_1390_ = lean_ctor_get(v_r_1220_, 1);
v_v_1391_ = lean_ctor_get(v_r_1220_, 2);
v_l_1392_ = lean_ctor_get(v_r_1220_, 3);
v_r_1393_ = lean_ctor_get(v_r_1220_, 4);
v___x_1394_ = lean_unsigned_to_nat(2u);
v___x_1395_ = lean_nat_mul(v___x_1394_, v_size_1388_);
v___x_1396_ = lean_nat_dec_lt(v_size_1389_, v___x_1395_);
lean_dec(v___x_1395_);
if (v___x_1396_ == 0)
{
lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1434_; 
lean_inc(v_r_1393_);
lean_inc(v_l_1392_);
lean_inc(v_v_1391_);
lean_inc(v_k_1390_);
lean_del_object(v___x_1386_);
v_isSharedCheck_1434_ = !lean_is_exclusive(v_r_1220_);
if (v_isSharedCheck_1434_ == 0)
{
lean_object* v_unused_1435_; lean_object* v_unused_1436_; lean_object* v_unused_1437_; lean_object* v_unused_1438_; lean_object* v_unused_1439_; 
v_unused_1435_ = lean_ctor_get(v_r_1220_, 4);
lean_dec(v_unused_1435_);
v_unused_1436_ = lean_ctor_get(v_r_1220_, 3);
lean_dec(v_unused_1436_);
v_unused_1437_ = lean_ctor_get(v_r_1220_, 2);
lean_dec(v_unused_1437_);
v_unused_1438_ = lean_ctor_get(v_r_1220_, 1);
lean_dec(v_unused_1438_);
v_unused_1439_ = lean_ctor_get(v_r_1220_, 0);
lean_dec(v_unused_1439_);
v___x_1398_ = v_r_1220_;
v_isShared_1399_ = v_isSharedCheck_1434_;
goto v_resetjp_1397_;
}
else
{
lean_dec(v_r_1220_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1434_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___y_1403_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___x_1422_; lean_object* v___y_1424_; 
v___x_1400_ = lean_nat_add(v___x_1226_, v_size_1216_);
lean_dec(v_size_1216_);
v___x_1401_ = lean_nat_add(v___x_1400_, v_size_1376_);
lean_dec(v___x_1400_);
v___x_1422_ = lean_nat_add(v___x_1226_, v_size_1388_);
if (lean_obj_tag(v_l_1392_) == 0)
{
lean_object* v_size_1432_; 
v_size_1432_ = lean_ctor_get(v_l_1392_, 0);
lean_inc(v_size_1432_);
v___y_1424_ = v_size_1432_;
goto v___jp_1423_;
}
else
{
lean_object* v___x_1433_; 
v___x_1433_ = lean_unsigned_to_nat(0u);
v___y_1424_ = v___x_1433_;
goto v___jp_1423_;
}
v___jp_1402_:
{
lean_object* v___x_1406_; lean_object* v___x_1408_; 
v___x_1406_ = lean_nat_add(v___y_1403_, v___y_1405_);
lean_dec(v___y_1405_);
lean_dec(v___y_1403_);
lean_inc_ref(v_tree_1373_);
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 4, v_tree_1373_);
lean_ctor_set(v___x_1398_, 3, v_r_1393_);
lean_ctor_set(v___x_1398_, 2, v_v_1375_);
lean_ctor_set(v___x_1398_, 1, v_k_1374_);
lean_ctor_set(v___x_1398_, 0, v___x_1406_);
v___x_1408_ = v___x_1398_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1406_);
lean_ctor_set(v_reuseFailAlloc_1421_, 1, v_k_1374_);
lean_ctor_set(v_reuseFailAlloc_1421_, 2, v_v_1375_);
lean_ctor_set(v_reuseFailAlloc_1421_, 3, v_r_1393_);
lean_ctor_set(v_reuseFailAlloc_1421_, 4, v_tree_1373_);
v___x_1408_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1415_; 
v_isSharedCheck_1415_ = !lean_is_exclusive(v_tree_1373_);
if (v_isSharedCheck_1415_ == 0)
{
lean_object* v_unused_1416_; lean_object* v_unused_1417_; lean_object* v_unused_1418_; lean_object* v_unused_1419_; lean_object* v_unused_1420_; 
v_unused_1416_ = lean_ctor_get(v_tree_1373_, 4);
lean_dec(v_unused_1416_);
v_unused_1417_ = lean_ctor_get(v_tree_1373_, 3);
lean_dec(v_unused_1417_);
v_unused_1418_ = lean_ctor_get(v_tree_1373_, 2);
lean_dec(v_unused_1418_);
v_unused_1419_ = lean_ctor_get(v_tree_1373_, 1);
lean_dec(v_unused_1419_);
v_unused_1420_ = lean_ctor_get(v_tree_1373_, 0);
lean_dec(v_unused_1420_);
v___x_1410_ = v_tree_1373_;
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
else
{
lean_dec(v_tree_1373_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
lean_object* v___x_1413_; 
if (v_isShared_1411_ == 0)
{
lean_ctor_set(v___x_1410_, 4, v___x_1408_);
lean_ctor_set(v___x_1410_, 3, v___y_1404_);
lean_ctor_set(v___x_1410_, 2, v_v_1391_);
lean_ctor_set(v___x_1410_, 1, v_k_1390_);
lean_ctor_set(v___x_1410_, 0, v___x_1401_);
v___x_1413_ = v___x_1410_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1401_);
lean_ctor_set(v_reuseFailAlloc_1414_, 1, v_k_1390_);
lean_ctor_set(v_reuseFailAlloc_1414_, 2, v_v_1391_);
lean_ctor_set(v_reuseFailAlloc_1414_, 3, v___y_1404_);
lean_ctor_set(v_reuseFailAlloc_1414_, 4, v___x_1408_);
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
v___jp_1423_:
{
lean_object* v___x_1425_; lean_object* v___x_1427_; 
v___x_1425_ = lean_nat_add(v___x_1422_, v___y_1424_);
lean_dec(v___y_1424_);
lean_dec(v___x_1422_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 4, v_l_1392_);
lean_ctor_set(v___x_1370_, 3, v_l_1219_);
lean_ctor_set(v___x_1370_, 2, v_v_1218_);
lean_ctor_set(v___x_1370_, 1, v_k_1217_);
lean_ctor_set(v___x_1370_, 0, v___x_1425_);
v___x_1427_ = v___x_1370_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v___x_1425_);
lean_ctor_set(v_reuseFailAlloc_1431_, 1, v_k_1217_);
lean_ctor_set(v_reuseFailAlloc_1431_, 2, v_v_1218_);
lean_ctor_set(v_reuseFailAlloc_1431_, 3, v_l_1219_);
lean_ctor_set(v_reuseFailAlloc_1431_, 4, v_l_1392_);
v___x_1427_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_nat_add(v___x_1226_, v_size_1376_);
if (lean_obj_tag(v_r_1393_) == 0)
{
lean_object* v_size_1429_; 
v_size_1429_ = lean_ctor_get(v_r_1393_, 0);
lean_inc(v_size_1429_);
v___y_1403_ = v___x_1428_;
v___y_1404_ = v___x_1427_;
v___y_1405_ = v_size_1429_;
goto v___jp_1402_;
}
else
{
lean_object* v___x_1430_; 
v___x_1430_ = lean_unsigned_to_nat(0u);
v___y_1403_ = v___x_1428_;
v___y_1404_ = v___x_1427_;
v___y_1405_ = v___x_1430_;
goto v___jp_1402_;
}
}
}
}
}
else
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1445_; 
v___x_1440_ = lean_nat_add(v___x_1226_, v_size_1216_);
lean_dec(v_size_1216_);
v___x_1441_ = lean_nat_add(v___x_1440_, v_size_1376_);
lean_dec(v___x_1440_);
v___x_1442_ = lean_nat_add(v___x_1226_, v_size_1376_);
v___x_1443_ = lean_nat_add(v___x_1442_, v_size_1389_);
lean_dec(v___x_1442_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 4, v_tree_1373_);
lean_ctor_set(v___x_1370_, 3, v_r_1220_);
lean_ctor_set(v___x_1370_, 2, v_v_1375_);
lean_ctor_set(v___x_1370_, 1, v_k_1374_);
lean_ctor_set(v___x_1370_, 0, v___x_1443_);
v___x_1445_ = v___x_1370_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1443_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v_k_1374_);
lean_ctor_set(v_reuseFailAlloc_1449_, 2, v_v_1375_);
lean_ctor_set(v_reuseFailAlloc_1449_, 3, v_r_1220_);
lean_ctor_set(v_reuseFailAlloc_1449_, 4, v_tree_1373_);
v___x_1445_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
lean_object* v___x_1447_; 
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 4, v___x_1445_);
lean_ctor_set(v___x_1386_, 0, v___x_1441_);
v___x_1447_ = v___x_1386_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1441_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_k_1217_);
lean_ctor_set(v_reuseFailAlloc_1448_, 2, v_v_1218_);
lean_ctor_set(v_reuseFailAlloc_1448_, 3, v_l_1219_);
lean_ctor_set(v_reuseFailAlloc_1448_, 4, v___x_1445_);
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
}
}
else
{
if (lean_obj_tag(v_l_1219_) == 0)
{
lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1479_; 
lean_inc_ref(v_l_1219_);
lean_inc(v_v_1218_);
lean_inc(v_k_1217_);
lean_inc(v_size_1216_);
v_isSharedCheck_1479_ = !lean_is_exclusive(v_l_1036_);
if (v_isSharedCheck_1479_ == 0)
{
lean_object* v_unused_1480_; lean_object* v_unused_1481_; lean_object* v_unused_1482_; lean_object* v_unused_1483_; lean_object* v_unused_1484_; 
v_unused_1480_ = lean_ctor_get(v_l_1036_, 4);
lean_dec(v_unused_1480_);
v_unused_1481_ = lean_ctor_get(v_l_1036_, 3);
lean_dec(v_unused_1481_);
v_unused_1482_ = lean_ctor_get(v_l_1036_, 2);
lean_dec(v_unused_1482_);
v_unused_1483_ = lean_ctor_get(v_l_1036_, 1);
lean_dec(v_unused_1483_);
v_unused_1484_ = lean_ctor_get(v_l_1036_, 0);
lean_dec(v_unused_1484_);
v___x_1457_ = v_l_1036_;
v_isShared_1458_ = v_isSharedCheck_1479_;
goto v_resetjp_1456_;
}
else
{
lean_dec(v_l_1036_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1479_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
if (lean_obj_tag(v_r_1220_) == 0)
{
lean_object* v_k_1459_; lean_object* v_v_1460_; lean_object* v_size_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1465_; 
v_k_1459_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_k_1459_);
v_v_1460_ = lean_ctor_get(v___x_1372_, 1);
lean_inc(v_v_1460_);
lean_dec_ref(v___x_1372_);
v_size_1461_ = lean_ctor_get(v_r_1220_, 0);
v___x_1462_ = lean_nat_add(v___x_1226_, v_size_1216_);
lean_dec(v_size_1216_);
v___x_1463_ = lean_nat_add(v___x_1226_, v_size_1461_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 4, v_tree_1373_);
lean_ctor_set(v___x_1370_, 3, v_r_1220_);
lean_ctor_set(v___x_1370_, 2, v_v_1460_);
lean_ctor_set(v___x_1370_, 1, v_k_1459_);
lean_ctor_set(v___x_1370_, 0, v___x_1463_);
v___x_1465_ = v___x_1370_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1463_);
lean_ctor_set(v_reuseFailAlloc_1469_, 1, v_k_1459_);
lean_ctor_set(v_reuseFailAlloc_1469_, 2, v_v_1460_);
lean_ctor_set(v_reuseFailAlloc_1469_, 3, v_r_1220_);
lean_ctor_set(v_reuseFailAlloc_1469_, 4, v_tree_1373_);
v___x_1465_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
lean_object* v___x_1467_; 
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 4, v___x_1465_);
lean_ctor_set(v___x_1457_, 0, v___x_1462_);
v___x_1467_ = v___x_1457_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1462_);
lean_ctor_set(v_reuseFailAlloc_1468_, 1, v_k_1217_);
lean_ctor_set(v_reuseFailAlloc_1468_, 2, v_v_1218_);
lean_ctor_set(v_reuseFailAlloc_1468_, 3, v_l_1219_);
lean_ctor_set(v_reuseFailAlloc_1468_, 4, v___x_1465_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
else
{
lean_object* v_k_1470_; lean_object* v_v_1471_; lean_object* v___x_1472_; lean_object* v___x_1474_; 
lean_dec(v_size_1216_);
v_k_1470_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_k_1470_);
v_v_1471_ = lean_ctor_get(v___x_1372_, 1);
lean_inc(v_v_1471_);
lean_dec_ref(v___x_1372_);
v___x_1472_ = lean_unsigned_to_nat(3u);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 4, v_r_1220_);
lean_ctor_set(v___x_1370_, 3, v_r_1220_);
lean_ctor_set(v___x_1370_, 2, v_v_1471_);
lean_ctor_set(v___x_1370_, 1, v_k_1470_);
lean_ctor_set(v___x_1370_, 0, v___x_1226_);
v___x_1474_ = v___x_1370_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v___x_1226_);
lean_ctor_set(v_reuseFailAlloc_1478_, 1, v_k_1470_);
lean_ctor_set(v_reuseFailAlloc_1478_, 2, v_v_1471_);
lean_ctor_set(v_reuseFailAlloc_1478_, 3, v_r_1220_);
lean_ctor_set(v_reuseFailAlloc_1478_, 4, v_r_1220_);
v___x_1474_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
lean_object* v___x_1476_; 
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 4, v___x_1474_);
lean_ctor_set(v___x_1457_, 0, v___x_1472_);
v___x_1476_ = v___x_1457_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v___x_1472_);
lean_ctor_set(v_reuseFailAlloc_1477_, 1, v_k_1217_);
lean_ctor_set(v_reuseFailAlloc_1477_, 2, v_v_1218_);
lean_ctor_set(v_reuseFailAlloc_1477_, 3, v_l_1219_);
lean_ctor_set(v_reuseFailAlloc_1477_, 4, v___x_1474_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1220_) == 0)
{
lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1509_; 
lean_inc(v_l_1219_);
lean_inc(v_v_1218_);
lean_inc(v_k_1217_);
v_isSharedCheck_1509_ = !lean_is_exclusive(v_l_1036_);
if (v_isSharedCheck_1509_ == 0)
{
lean_object* v_unused_1510_; lean_object* v_unused_1511_; lean_object* v_unused_1512_; lean_object* v_unused_1513_; lean_object* v_unused_1514_; 
v_unused_1510_ = lean_ctor_get(v_l_1036_, 4);
lean_dec(v_unused_1510_);
v_unused_1511_ = lean_ctor_get(v_l_1036_, 3);
lean_dec(v_unused_1511_);
v_unused_1512_ = lean_ctor_get(v_l_1036_, 2);
lean_dec(v_unused_1512_);
v_unused_1513_ = lean_ctor_get(v_l_1036_, 1);
lean_dec(v_unused_1513_);
v_unused_1514_ = lean_ctor_get(v_l_1036_, 0);
lean_dec(v_unused_1514_);
v___x_1486_ = v_l_1036_;
v_isShared_1487_ = v_isSharedCheck_1509_;
goto v_resetjp_1485_;
}
else
{
lean_dec(v_l_1036_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1509_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v_k_1488_; lean_object* v_v_1489_; lean_object* v_k_1490_; lean_object* v_v_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1505_; 
v_k_1488_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_k_1488_);
v_v_1489_ = lean_ctor_get(v___x_1372_, 1);
lean_inc(v_v_1489_);
lean_dec_ref(v___x_1372_);
v_k_1490_ = lean_ctor_get(v_r_1220_, 1);
v_v_1491_ = lean_ctor_get(v_r_1220_, 2);
v_isSharedCheck_1505_ = !lean_is_exclusive(v_r_1220_);
if (v_isSharedCheck_1505_ == 0)
{
lean_object* v_unused_1506_; lean_object* v_unused_1507_; lean_object* v_unused_1508_; 
v_unused_1506_ = lean_ctor_get(v_r_1220_, 4);
lean_dec(v_unused_1506_);
v_unused_1507_ = lean_ctor_get(v_r_1220_, 3);
lean_dec(v_unused_1507_);
v_unused_1508_ = lean_ctor_get(v_r_1220_, 0);
lean_dec(v_unused_1508_);
v___x_1493_ = v_r_1220_;
v_isShared_1494_ = v_isSharedCheck_1505_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_v_1491_);
lean_inc(v_k_1490_);
lean_dec(v_r_1220_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1505_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1495_; lean_object* v___x_1497_; 
v___x_1495_ = lean_unsigned_to_nat(3u);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 4, v_l_1219_);
lean_ctor_set(v___x_1493_, 3, v_l_1219_);
lean_ctor_set(v___x_1493_, 2, v_v_1218_);
lean_ctor_set(v___x_1493_, 1, v_k_1217_);
lean_ctor_set(v___x_1493_, 0, v___x_1226_);
v___x_1497_ = v___x_1493_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v___x_1226_);
lean_ctor_set(v_reuseFailAlloc_1504_, 1, v_k_1217_);
lean_ctor_set(v_reuseFailAlloc_1504_, 2, v_v_1218_);
lean_ctor_set(v_reuseFailAlloc_1504_, 3, v_l_1219_);
lean_ctor_set(v_reuseFailAlloc_1504_, 4, v_l_1219_);
v___x_1497_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
lean_object* v___x_1499_; 
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 4, v_l_1219_);
lean_ctor_set(v___x_1370_, 3, v_l_1219_);
lean_ctor_set(v___x_1370_, 2, v_v_1489_);
lean_ctor_set(v___x_1370_, 1, v_k_1488_);
lean_ctor_set(v___x_1370_, 0, v___x_1226_);
v___x_1499_ = v___x_1370_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v___x_1226_);
lean_ctor_set(v_reuseFailAlloc_1503_, 1, v_k_1488_);
lean_ctor_set(v_reuseFailAlloc_1503_, 2, v_v_1489_);
lean_ctor_set(v_reuseFailAlloc_1503_, 3, v_l_1219_);
lean_ctor_set(v_reuseFailAlloc_1503_, 4, v_l_1219_);
v___x_1499_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
lean_object* v___x_1501_; 
if (v_isShared_1487_ == 0)
{
lean_ctor_set(v___x_1486_, 4, v___x_1499_);
lean_ctor_set(v___x_1486_, 3, v___x_1497_);
lean_ctor_set(v___x_1486_, 2, v_v_1491_);
lean_ctor_set(v___x_1486_, 1, v_k_1490_);
lean_ctor_set(v___x_1486_, 0, v___x_1495_);
v___x_1501_ = v___x_1486_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1495_);
lean_ctor_set(v_reuseFailAlloc_1502_, 1, v_k_1490_);
lean_ctor_set(v_reuseFailAlloc_1502_, 2, v_v_1491_);
lean_ctor_set(v_reuseFailAlloc_1502_, 3, v___x_1497_);
lean_ctor_set(v_reuseFailAlloc_1502_, 4, v___x_1499_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
}
}
}
else
{
lean_object* v_k_1515_; lean_object* v_v_1516_; lean_object* v___x_1517_; lean_object* v___x_1519_; 
v_k_1515_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_k_1515_);
v_v_1516_ = lean_ctor_get(v___x_1372_, 1);
lean_inc(v_v_1516_);
lean_dec_ref(v___x_1372_);
v___x_1517_ = lean_unsigned_to_nat(2u);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 4, v_r_1220_);
lean_ctor_set(v___x_1370_, 3, v_l_1036_);
lean_ctor_set(v___x_1370_, 2, v_v_1516_);
lean_ctor_set(v___x_1370_, 1, v_k_1515_);
lean_ctor_set(v___x_1370_, 0, v___x_1517_);
v___x_1519_ = v___x_1370_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v___x_1517_);
lean_ctor_set(v_reuseFailAlloc_1520_, 1, v_k_1515_);
lean_ctor_set(v_reuseFailAlloc_1520_, 2, v_v_1516_);
lean_ctor_set(v_reuseFailAlloc_1520_, 3, v_l_1036_);
lean_ctor_set(v_reuseFailAlloc_1520_, 4, v_r_1220_);
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
}
}
else
{
return v_l_1036_;
}
}
else
{
return v_r_1037_;
}
}
default: 
{
lean_object* v_impl_1527_; lean_object* v___x_1528_; 
v_impl_1527_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_1032_, v_r_1037_);
v___x_1528_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1527_) == 0)
{
if (lean_obj_tag(v_l_1036_) == 0)
{
lean_object* v_size_1529_; lean_object* v_size_1530_; lean_object* v_k_1531_; lean_object* v_v_1532_; lean_object* v_l_1533_; lean_object* v_r_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; uint8_t v___x_1537_; 
v_size_1529_ = lean_ctor_get(v_impl_1527_, 0);
lean_inc(v_size_1529_);
v_size_1530_ = lean_ctor_get(v_l_1036_, 0);
v_k_1531_ = lean_ctor_get(v_l_1036_, 1);
v_v_1532_ = lean_ctor_get(v_l_1036_, 2);
v_l_1533_ = lean_ctor_get(v_l_1036_, 3);
v_r_1534_ = lean_ctor_get(v_l_1036_, 4);
lean_inc(v_r_1534_);
v___x_1535_ = lean_unsigned_to_nat(3u);
v___x_1536_ = lean_nat_mul(v___x_1535_, v_size_1529_);
v___x_1537_ = lean_nat_dec_lt(v___x_1536_, v_size_1530_);
lean_dec(v___x_1536_);
if (v___x_1537_ == 0)
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1541_; 
lean_dec(v_r_1534_);
v___x_1538_ = lean_nat_add(v___x_1528_, v_size_1530_);
v___x_1539_ = lean_nat_add(v___x_1538_, v_size_1529_);
lean_dec(v_size_1529_);
lean_dec(v___x_1538_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v_impl_1527_);
lean_ctor_set(v___x_1039_, 0, v___x_1539_);
v___x_1541_ = v___x_1039_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1539_);
lean_ctor_set(v_reuseFailAlloc_1542_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1542_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1542_, 3, v_l_1036_);
lean_ctor_set(v_reuseFailAlloc_1542_, 4, v_impl_1527_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
else
{
lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1608_; 
lean_inc(v_l_1533_);
lean_inc(v_v_1532_);
lean_inc(v_k_1531_);
lean_inc(v_size_1530_);
v_isSharedCheck_1608_ = !lean_is_exclusive(v_l_1036_);
if (v_isSharedCheck_1608_ == 0)
{
lean_object* v_unused_1609_; lean_object* v_unused_1610_; lean_object* v_unused_1611_; lean_object* v_unused_1612_; lean_object* v_unused_1613_; 
v_unused_1609_ = lean_ctor_get(v_l_1036_, 4);
lean_dec(v_unused_1609_);
v_unused_1610_ = lean_ctor_get(v_l_1036_, 3);
lean_dec(v_unused_1610_);
v_unused_1611_ = lean_ctor_get(v_l_1036_, 2);
lean_dec(v_unused_1611_);
v_unused_1612_ = lean_ctor_get(v_l_1036_, 1);
lean_dec(v_unused_1612_);
v_unused_1613_ = lean_ctor_get(v_l_1036_, 0);
lean_dec(v_unused_1613_);
v___x_1544_ = v_l_1036_;
v_isShared_1545_ = v_isSharedCheck_1608_;
goto v_resetjp_1543_;
}
else
{
lean_dec(v_l_1036_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1608_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v_size_1546_; lean_object* v_size_1547_; lean_object* v_k_1548_; lean_object* v_v_1549_; lean_object* v_l_1550_; lean_object* v_r_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; uint8_t v___x_1554_; 
v_size_1546_ = lean_ctor_get(v_l_1533_, 0);
v_size_1547_ = lean_ctor_get(v_r_1534_, 0);
v_k_1548_ = lean_ctor_get(v_r_1534_, 1);
v_v_1549_ = lean_ctor_get(v_r_1534_, 2);
v_l_1550_ = lean_ctor_get(v_r_1534_, 3);
v_r_1551_ = lean_ctor_get(v_r_1534_, 4);
v___x_1552_ = lean_unsigned_to_nat(2u);
v___x_1553_ = lean_nat_mul(v___x_1552_, v_size_1546_);
v___x_1554_ = lean_nat_dec_lt(v_size_1547_, v___x_1553_);
lean_dec(v___x_1553_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1583_; 
lean_inc(v_r_1551_);
lean_inc(v_l_1550_);
lean_inc(v_v_1549_);
lean_inc(v_k_1548_);
v_isSharedCheck_1583_ = !lean_is_exclusive(v_r_1534_);
if (v_isSharedCheck_1583_ == 0)
{
lean_object* v_unused_1584_; lean_object* v_unused_1585_; lean_object* v_unused_1586_; lean_object* v_unused_1587_; lean_object* v_unused_1588_; 
v_unused_1584_ = lean_ctor_get(v_r_1534_, 4);
lean_dec(v_unused_1584_);
v_unused_1585_ = lean_ctor_get(v_r_1534_, 3);
lean_dec(v_unused_1585_);
v_unused_1586_ = lean_ctor_get(v_r_1534_, 2);
lean_dec(v_unused_1586_);
v_unused_1587_ = lean_ctor_get(v_r_1534_, 1);
lean_dec(v_unused_1587_);
v_unused_1588_ = lean_ctor_get(v_r_1534_, 0);
lean_dec(v_unused_1588_);
v___x_1556_ = v_r_1534_;
v_isShared_1557_ = v_isSharedCheck_1583_;
goto v_resetjp_1555_;
}
else
{
lean_dec(v_r_1534_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1583_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___y_1561_; lean_object* v___y_1562_; lean_object* v___y_1563_; lean_object* v___x_1571_; lean_object* v___y_1573_; 
v___x_1558_ = lean_nat_add(v___x_1528_, v_size_1530_);
lean_dec(v_size_1530_);
v___x_1559_ = lean_nat_add(v___x_1558_, v_size_1529_);
lean_dec(v___x_1558_);
v___x_1571_ = lean_nat_add(v___x_1528_, v_size_1546_);
if (lean_obj_tag(v_l_1550_) == 0)
{
lean_object* v_size_1581_; 
v_size_1581_ = lean_ctor_get(v_l_1550_, 0);
lean_inc(v_size_1581_);
v___y_1573_ = v_size_1581_;
goto v___jp_1572_;
}
else
{
lean_object* v___x_1582_; 
v___x_1582_ = lean_unsigned_to_nat(0u);
v___y_1573_ = v___x_1582_;
goto v___jp_1572_;
}
v___jp_1560_:
{
lean_object* v___x_1564_; lean_object* v___x_1566_; 
v___x_1564_ = lean_nat_add(v___y_1562_, v___y_1563_);
lean_dec(v___y_1563_);
lean_dec(v___y_1562_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 4, v_impl_1527_);
lean_ctor_set(v___x_1556_, 3, v_r_1551_);
lean_ctor_set(v___x_1556_, 2, v_v_1035_);
lean_ctor_set(v___x_1556_, 1, v_k_1034_);
lean_ctor_set(v___x_1556_, 0, v___x_1564_);
v___x_1566_ = v___x_1556_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v___x_1564_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1570_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1570_, 3, v_r_1551_);
lean_ctor_set(v_reuseFailAlloc_1570_, 4, v_impl_1527_);
v___x_1566_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
lean_object* v___x_1568_; 
if (v_isShared_1545_ == 0)
{
lean_ctor_set(v___x_1544_, 4, v___x_1566_);
lean_ctor_set(v___x_1544_, 3, v___y_1561_);
lean_ctor_set(v___x_1544_, 2, v_v_1549_);
lean_ctor_set(v___x_1544_, 1, v_k_1548_);
lean_ctor_set(v___x_1544_, 0, v___x_1559_);
v___x_1568_ = v___x_1544_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v___x_1559_);
lean_ctor_set(v_reuseFailAlloc_1569_, 1, v_k_1548_);
lean_ctor_set(v_reuseFailAlloc_1569_, 2, v_v_1549_);
lean_ctor_set(v_reuseFailAlloc_1569_, 3, v___y_1561_);
lean_ctor_set(v_reuseFailAlloc_1569_, 4, v___x_1566_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
}
v___jp_1572_:
{
lean_object* v___x_1574_; lean_object* v___x_1576_; 
v___x_1574_ = lean_nat_add(v___x_1571_, v___y_1573_);
lean_dec(v___y_1573_);
lean_dec(v___x_1571_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v_l_1550_);
lean_ctor_set(v___x_1039_, 3, v_l_1533_);
lean_ctor_set(v___x_1039_, 2, v_v_1532_);
lean_ctor_set(v___x_1039_, 1, v_k_1531_);
lean_ctor_set(v___x_1039_, 0, v___x_1574_);
v___x_1576_ = v___x_1039_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1574_);
lean_ctor_set(v_reuseFailAlloc_1580_, 1, v_k_1531_);
lean_ctor_set(v_reuseFailAlloc_1580_, 2, v_v_1532_);
lean_ctor_set(v_reuseFailAlloc_1580_, 3, v_l_1533_);
lean_ctor_set(v_reuseFailAlloc_1580_, 4, v_l_1550_);
v___x_1576_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
lean_object* v___x_1577_; 
v___x_1577_ = lean_nat_add(v___x_1528_, v_size_1529_);
lean_dec(v_size_1529_);
if (lean_obj_tag(v_r_1551_) == 0)
{
lean_object* v_size_1578_; 
v_size_1578_ = lean_ctor_get(v_r_1551_, 0);
lean_inc(v_size_1578_);
v___y_1561_ = v___x_1576_;
v___y_1562_ = v___x_1577_;
v___y_1563_ = v_size_1578_;
goto v___jp_1560_;
}
else
{
lean_object* v___x_1579_; 
v___x_1579_ = lean_unsigned_to_nat(0u);
v___y_1561_ = v___x_1576_;
v___y_1562_ = v___x_1577_;
v___y_1563_ = v___x_1579_;
goto v___jp_1560_;
}
}
}
}
}
else
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1594_; 
lean_del_object(v___x_1039_);
v___x_1589_ = lean_nat_add(v___x_1528_, v_size_1530_);
lean_dec(v_size_1530_);
v___x_1590_ = lean_nat_add(v___x_1589_, v_size_1529_);
lean_dec(v___x_1589_);
v___x_1591_ = lean_nat_add(v___x_1528_, v_size_1529_);
lean_dec(v_size_1529_);
v___x_1592_ = lean_nat_add(v___x_1591_, v_size_1547_);
lean_dec(v___x_1591_);
lean_inc_ref(v_impl_1527_);
if (v_isShared_1545_ == 0)
{
lean_ctor_set(v___x_1544_, 4, v_impl_1527_);
lean_ctor_set(v___x_1544_, 3, v_r_1534_);
lean_ctor_set(v___x_1544_, 2, v_v_1035_);
lean_ctor_set(v___x_1544_, 1, v_k_1034_);
lean_ctor_set(v___x_1544_, 0, v___x_1592_);
v___x_1594_ = v___x_1544_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v___x_1592_);
lean_ctor_set(v_reuseFailAlloc_1607_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1607_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1607_, 3, v_r_1534_);
lean_ctor_set(v_reuseFailAlloc_1607_, 4, v_impl_1527_);
v___x_1594_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1601_; 
v_isSharedCheck_1601_ = !lean_is_exclusive(v_impl_1527_);
if (v_isSharedCheck_1601_ == 0)
{
lean_object* v_unused_1602_; lean_object* v_unused_1603_; lean_object* v_unused_1604_; lean_object* v_unused_1605_; lean_object* v_unused_1606_; 
v_unused_1602_ = lean_ctor_get(v_impl_1527_, 4);
lean_dec(v_unused_1602_);
v_unused_1603_ = lean_ctor_get(v_impl_1527_, 3);
lean_dec(v_unused_1603_);
v_unused_1604_ = lean_ctor_get(v_impl_1527_, 2);
lean_dec(v_unused_1604_);
v_unused_1605_ = lean_ctor_get(v_impl_1527_, 1);
lean_dec(v_unused_1605_);
v_unused_1606_ = lean_ctor_get(v_impl_1527_, 0);
lean_dec(v_unused_1606_);
v___x_1596_ = v_impl_1527_;
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
else
{
lean_dec(v_impl_1527_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1599_; 
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 4, v___x_1594_);
lean_ctor_set(v___x_1596_, 3, v_l_1533_);
lean_ctor_set(v___x_1596_, 2, v_v_1532_);
lean_ctor_set(v___x_1596_, 1, v_k_1531_);
lean_ctor_set(v___x_1596_, 0, v___x_1590_);
v___x_1599_ = v___x_1596_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v___x_1590_);
lean_ctor_set(v_reuseFailAlloc_1600_, 1, v_k_1531_);
lean_ctor_set(v_reuseFailAlloc_1600_, 2, v_v_1532_);
lean_ctor_set(v_reuseFailAlloc_1600_, 3, v_l_1533_);
lean_ctor_set(v_reuseFailAlloc_1600_, 4, v___x_1594_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1614_; lean_object* v___x_1615_; lean_object* v___x_1617_; 
v_size_1614_ = lean_ctor_get(v_impl_1527_, 0);
lean_inc(v_size_1614_);
v___x_1615_ = lean_nat_add(v___x_1528_, v_size_1614_);
lean_dec(v_size_1614_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v_impl_1527_);
lean_ctor_set(v___x_1039_, 0, v___x_1615_);
v___x_1617_ = v___x_1039_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v___x_1615_);
lean_ctor_set(v_reuseFailAlloc_1618_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1618_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1618_, 3, v_l_1036_);
lean_ctor_set(v_reuseFailAlloc_1618_, 4, v_impl_1527_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
else
{
if (lean_obj_tag(v_l_1036_) == 0)
{
lean_object* v_l_1619_; 
v_l_1619_ = lean_ctor_get(v_l_1036_, 3);
if (lean_obj_tag(v_l_1619_) == 0)
{
lean_object* v_r_1620_; 
lean_inc_ref(v_l_1619_);
v_r_1620_ = lean_ctor_get(v_l_1036_, 4);
lean_inc(v_r_1620_);
if (lean_obj_tag(v_r_1620_) == 0)
{
lean_object* v_size_1621_; lean_object* v_k_1622_; lean_object* v_v_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1636_; 
v_size_1621_ = lean_ctor_get(v_l_1036_, 0);
v_k_1622_ = lean_ctor_get(v_l_1036_, 1);
v_v_1623_ = lean_ctor_get(v_l_1036_, 2);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_l_1036_);
if (v_isSharedCheck_1636_ == 0)
{
lean_object* v_unused_1637_; lean_object* v_unused_1638_; 
v_unused_1637_ = lean_ctor_get(v_l_1036_, 4);
lean_dec(v_unused_1637_);
v_unused_1638_ = lean_ctor_get(v_l_1036_, 3);
lean_dec(v_unused_1638_);
v___x_1625_ = v_l_1036_;
v_isShared_1626_ = v_isSharedCheck_1636_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_v_1623_);
lean_inc(v_k_1622_);
lean_inc(v_size_1621_);
lean_dec(v_l_1036_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1636_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v_size_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1631_; 
v_size_1627_ = lean_ctor_get(v_r_1620_, 0);
v___x_1628_ = lean_nat_add(v___x_1528_, v_size_1621_);
lean_dec(v_size_1621_);
v___x_1629_ = lean_nat_add(v___x_1528_, v_size_1627_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 4, v_impl_1527_);
lean_ctor_set(v___x_1625_, 3, v_r_1620_);
lean_ctor_set(v___x_1625_, 2, v_v_1035_);
lean_ctor_set(v___x_1625_, 1, v_k_1034_);
lean_ctor_set(v___x_1625_, 0, v___x_1629_);
v___x_1631_ = v___x_1625_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v___x_1629_);
lean_ctor_set(v_reuseFailAlloc_1635_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1635_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1635_, 3, v_r_1620_);
lean_ctor_set(v_reuseFailAlloc_1635_, 4, v_impl_1527_);
v___x_1631_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
lean_object* v___x_1633_; 
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v___x_1631_);
lean_ctor_set(v___x_1039_, 3, v_l_1619_);
lean_ctor_set(v___x_1039_, 2, v_v_1623_);
lean_ctor_set(v___x_1039_, 1, v_k_1622_);
lean_ctor_set(v___x_1039_, 0, v___x_1628_);
v___x_1633_ = v___x_1039_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v___x_1628_);
lean_ctor_set(v_reuseFailAlloc_1634_, 1, v_k_1622_);
lean_ctor_set(v_reuseFailAlloc_1634_, 2, v_v_1623_);
lean_ctor_set(v_reuseFailAlloc_1634_, 3, v_l_1619_);
lean_ctor_set(v_reuseFailAlloc_1634_, 4, v___x_1631_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
else
{
lean_object* v_k_1639_; lean_object* v_v_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1651_; 
v_k_1639_ = lean_ctor_get(v_l_1036_, 1);
v_v_1640_ = lean_ctor_get(v_l_1036_, 2);
v_isSharedCheck_1651_ = !lean_is_exclusive(v_l_1036_);
if (v_isSharedCheck_1651_ == 0)
{
lean_object* v_unused_1652_; lean_object* v_unused_1653_; lean_object* v_unused_1654_; 
v_unused_1652_ = lean_ctor_get(v_l_1036_, 4);
lean_dec(v_unused_1652_);
v_unused_1653_ = lean_ctor_get(v_l_1036_, 3);
lean_dec(v_unused_1653_);
v_unused_1654_ = lean_ctor_get(v_l_1036_, 0);
lean_dec(v_unused_1654_);
v___x_1642_ = v_l_1036_;
v_isShared_1643_ = v_isSharedCheck_1651_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_v_1640_);
lean_inc(v_k_1639_);
lean_dec(v_l_1036_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1651_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1644_; lean_object* v___x_1646_; 
v___x_1644_ = lean_unsigned_to_nat(3u);
if (v_isShared_1643_ == 0)
{
lean_ctor_set(v___x_1642_, 3, v_r_1620_);
lean_ctor_set(v___x_1642_, 2, v_v_1035_);
lean_ctor_set(v___x_1642_, 1, v_k_1034_);
lean_ctor_set(v___x_1642_, 0, v___x_1528_);
v___x_1646_ = v___x_1642_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v___x_1528_);
lean_ctor_set(v_reuseFailAlloc_1650_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1650_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1650_, 3, v_r_1620_);
lean_ctor_set(v_reuseFailAlloc_1650_, 4, v_r_1620_);
v___x_1646_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
lean_object* v___x_1648_; 
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v___x_1646_);
lean_ctor_set(v___x_1039_, 3, v_l_1619_);
lean_ctor_set(v___x_1039_, 2, v_v_1640_);
lean_ctor_set(v___x_1039_, 1, v_k_1639_);
lean_ctor_set(v___x_1039_, 0, v___x_1644_);
v___x_1648_ = v___x_1039_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v___x_1644_);
lean_ctor_set(v_reuseFailAlloc_1649_, 1, v_k_1639_);
lean_ctor_set(v_reuseFailAlloc_1649_, 2, v_v_1640_);
lean_ctor_set(v_reuseFailAlloc_1649_, 3, v_l_1619_);
lean_ctor_set(v_reuseFailAlloc_1649_, 4, v___x_1646_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
}
}
else
{
lean_object* v_r_1655_; 
v_r_1655_ = lean_ctor_get(v_l_1036_, 4);
lean_inc(v_r_1655_);
if (lean_obj_tag(v_r_1655_) == 0)
{
lean_object* v_k_1656_; lean_object* v_v_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1680_; 
lean_inc(v_l_1619_);
v_k_1656_ = lean_ctor_get(v_l_1036_, 1);
v_v_1657_ = lean_ctor_get(v_l_1036_, 2);
v_isSharedCheck_1680_ = !lean_is_exclusive(v_l_1036_);
if (v_isSharedCheck_1680_ == 0)
{
lean_object* v_unused_1681_; lean_object* v_unused_1682_; lean_object* v_unused_1683_; 
v_unused_1681_ = lean_ctor_get(v_l_1036_, 4);
lean_dec(v_unused_1681_);
v_unused_1682_ = lean_ctor_get(v_l_1036_, 3);
lean_dec(v_unused_1682_);
v_unused_1683_ = lean_ctor_get(v_l_1036_, 0);
lean_dec(v_unused_1683_);
v___x_1659_ = v_l_1036_;
v_isShared_1660_ = v_isSharedCheck_1680_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_v_1657_);
lean_inc(v_k_1656_);
lean_dec(v_l_1036_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1680_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v_k_1661_; lean_object* v_v_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1676_; 
v_k_1661_ = lean_ctor_get(v_r_1655_, 1);
v_v_1662_ = lean_ctor_get(v_r_1655_, 2);
v_isSharedCheck_1676_ = !lean_is_exclusive(v_r_1655_);
if (v_isSharedCheck_1676_ == 0)
{
lean_object* v_unused_1677_; lean_object* v_unused_1678_; lean_object* v_unused_1679_; 
v_unused_1677_ = lean_ctor_get(v_r_1655_, 4);
lean_dec(v_unused_1677_);
v_unused_1678_ = lean_ctor_get(v_r_1655_, 3);
lean_dec(v_unused_1678_);
v_unused_1679_ = lean_ctor_get(v_r_1655_, 0);
lean_dec(v_unused_1679_);
v___x_1664_ = v_r_1655_;
v_isShared_1665_ = v_isSharedCheck_1676_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_v_1662_);
lean_inc(v_k_1661_);
lean_dec(v_r_1655_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1676_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1666_; lean_object* v___x_1668_; 
v___x_1666_ = lean_unsigned_to_nat(3u);
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 4, v_l_1619_);
lean_ctor_set(v___x_1664_, 3, v_l_1619_);
lean_ctor_set(v___x_1664_, 2, v_v_1657_);
lean_ctor_set(v___x_1664_, 1, v_k_1656_);
lean_ctor_set(v___x_1664_, 0, v___x_1528_);
v___x_1668_ = v___x_1664_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v___x_1528_);
lean_ctor_set(v_reuseFailAlloc_1675_, 1, v_k_1656_);
lean_ctor_set(v_reuseFailAlloc_1675_, 2, v_v_1657_);
lean_ctor_set(v_reuseFailAlloc_1675_, 3, v_l_1619_);
lean_ctor_set(v_reuseFailAlloc_1675_, 4, v_l_1619_);
v___x_1668_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
lean_object* v___x_1670_; 
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 4, v_l_1619_);
lean_ctor_set(v___x_1659_, 2, v_v_1035_);
lean_ctor_set(v___x_1659_, 1, v_k_1034_);
lean_ctor_set(v___x_1659_, 0, v___x_1528_);
v___x_1670_ = v___x_1659_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v___x_1528_);
lean_ctor_set(v_reuseFailAlloc_1674_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1674_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1674_, 3, v_l_1619_);
lean_ctor_set(v_reuseFailAlloc_1674_, 4, v_l_1619_);
v___x_1670_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
lean_object* v___x_1672_; 
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v___x_1670_);
lean_ctor_set(v___x_1039_, 3, v___x_1668_);
lean_ctor_set(v___x_1039_, 2, v_v_1662_);
lean_ctor_set(v___x_1039_, 1, v_k_1661_);
lean_ctor_set(v___x_1039_, 0, v___x_1666_);
v___x_1672_ = v___x_1039_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v___x_1666_);
lean_ctor_set(v_reuseFailAlloc_1673_, 1, v_k_1661_);
lean_ctor_set(v_reuseFailAlloc_1673_, 2, v_v_1662_);
lean_ctor_set(v_reuseFailAlloc_1673_, 3, v___x_1668_);
lean_ctor_set(v_reuseFailAlloc_1673_, 4, v___x_1670_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
}
}
}
else
{
lean_object* v___x_1684_; lean_object* v___x_1686_; 
v___x_1684_ = lean_unsigned_to_nat(2u);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v_r_1655_);
lean_ctor_set(v___x_1039_, 0, v___x_1684_);
v___x_1686_ = v___x_1039_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1684_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1687_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1687_, 3, v_l_1036_);
lean_ctor_set(v_reuseFailAlloc_1687_, 4, v_r_1655_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
return v___x_1686_;
}
}
}
}
else
{
lean_object* v___x_1689_; 
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v_l_1036_);
lean_ctor_set(v___x_1039_, 0, v___x_1528_);
v___x_1689_ = v___x_1039_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v___x_1528_);
lean_ctor_set(v_reuseFailAlloc_1690_, 1, v_k_1034_);
lean_ctor_set(v_reuseFailAlloc_1690_, 2, v_v_1035_);
lean_ctor_set(v_reuseFailAlloc_1690_, 3, v_l_1036_);
lean_ctor_set(v_reuseFailAlloc_1690_, 4, v_l_1036_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
}
}
}
}
}
else
{
return v_t_1033_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg___boxed(lean_object* v_k_1693_, lean_object* v_t_1694_){
_start:
{
lean_object* v_res_1695_; 
v_res_1695_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_1693_, v_t_1694_);
lean_dec(v_k_1693_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(lean_object* v_ext_1696_, lean_object* v_declName_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_){
_start:
{
lean_object* v___x_1701_; lean_object* v_ext_1702_; lean_object* v_toEnvExtension_1703_; lean_object* v_env_1704_; lean_object* v_asyncMode_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___y_1709_; lean_object* v_funCC_1735_; uint8_t v___x_1736_; 
v___x_1701_ = lean_st_ref_get(v_a_1699_);
v_ext_1702_ = lean_ctor_get(v_ext_1696_, 1);
v_toEnvExtension_1703_ = lean_ctor_get(v_ext_1702_, 0);
v_env_1704_ = lean_ctor_get(v___x_1701_, 0);
lean_inc_ref(v_env_1704_);
lean_dec(v___x_1701_);
v_asyncMode_1705_ = lean_ctor_get(v_toEnvExtension_1703_, 2);
v___x_1706_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_1707_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1706_, v_ext_1696_, v_env_1704_, v_asyncMode_1705_);
v_funCC_1735_ = lean_ctor_get(v___x_1707_, 2);
lean_inc(v_funCC_1735_);
v___x_1736_ = l_Lean_NameSet_contains(v_funCC_1735_, v_declName_1697_);
lean_dec(v_funCC_1735_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1737_; 
lean_inc(v_declName_1697_);
v___x_1737_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_1697_, v_a_1698_, v_a_1699_);
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_dec_ref(v___x_1737_);
v___y_1709_ = v_a_1699_;
goto v___jp_1708_;
}
else
{
lean_dec(v___x_1707_);
lean_dec(v_declName_1697_);
lean_dec_ref(v_ext_1696_);
return v___x_1737_;
}
}
else
{
v___y_1709_ = v_a_1699_;
goto v___jp_1708_;
}
v___jp_1708_:
{
lean_object* v_funCC_1710_; lean_object* v___x_1711_; lean_object* v_env_1712_; lean_object* v_nextMacroScope_1713_; lean_object* v_ngen_1714_; lean_object* v_auxDeclNGen_1715_; lean_object* v_traceState_1716_; lean_object* v_messages_1717_; lean_object* v_infoState_1718_; lean_object* v_snapshotTasks_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1733_; 
v_funCC_1710_ = lean_ctor_get(v___x_1707_, 2);
lean_inc(v_funCC_1710_);
lean_dec(v___x_1707_);
v___x_1711_ = lean_st_ref_take(v___y_1709_);
v_env_1712_ = lean_ctor_get(v___x_1711_, 0);
v_nextMacroScope_1713_ = lean_ctor_get(v___x_1711_, 1);
v_ngen_1714_ = lean_ctor_get(v___x_1711_, 2);
v_auxDeclNGen_1715_ = lean_ctor_get(v___x_1711_, 3);
v_traceState_1716_ = lean_ctor_get(v___x_1711_, 4);
v_messages_1717_ = lean_ctor_get(v___x_1711_, 6);
v_infoState_1718_ = lean_ctor_get(v___x_1711_, 7);
v_snapshotTasks_1719_ = lean_ctor_get(v___x_1711_, 8);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1733_ == 0)
{
lean_object* v_unused_1734_; 
v_unused_1734_ = lean_ctor_get(v___x_1711_, 5);
lean_dec(v_unused_1734_);
v___x_1721_ = v___x_1711_;
v_isShared_1722_ = v_isSharedCheck_1733_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_snapshotTasks_1719_);
lean_inc(v_infoState_1718_);
lean_inc(v_messages_1717_);
lean_inc(v_traceState_1716_);
lean_inc(v_auxDeclNGen_1715_);
lean_inc(v_ngen_1714_);
lean_inc(v_nextMacroScope_1713_);
lean_inc(v_env_1712_);
lean_dec(v___x_1711_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1733_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1723_; lean_object* v___f_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1728_; 
v___x_1723_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_declName_1697_, v_funCC_1710_);
lean_dec(v_declName_1697_);
v___f_1724_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___lam__0), 2, 1);
lean_closure_set(v___f_1724_, 0, v___x_1723_);
v___x_1725_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_1696_, v_env_1712_, v___f_1724_);
v___x_1726_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2);
if (v_isShared_1722_ == 0)
{
lean_ctor_set(v___x_1721_, 5, v___x_1726_);
lean_ctor_set(v___x_1721_, 0, v___x_1725_);
v___x_1728_ = v___x_1721_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v___x_1725_);
lean_ctor_set(v_reuseFailAlloc_1732_, 1, v_nextMacroScope_1713_);
lean_ctor_set(v_reuseFailAlloc_1732_, 2, v_ngen_1714_);
lean_ctor_set(v_reuseFailAlloc_1732_, 3, v_auxDeclNGen_1715_);
lean_ctor_set(v_reuseFailAlloc_1732_, 4, v_traceState_1716_);
lean_ctor_set(v_reuseFailAlloc_1732_, 5, v___x_1726_);
lean_ctor_set(v_reuseFailAlloc_1732_, 6, v_messages_1717_);
lean_ctor_set(v_reuseFailAlloc_1732_, 7, v_infoState_1718_);
lean_ctor_set(v_reuseFailAlloc_1732_, 8, v_snapshotTasks_1719_);
v___x_1728_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1729_ = lean_st_ref_set(v___y_1709_, v___x_1728_);
v___x_1730_ = lean_box(0);
v___x_1731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1730_);
return v___x_1731_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___boxed(lean_object* v_ext_1738_, lean_object* v_declName_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_){
_start:
{
lean_object* v_res_1743_; 
v_res_1743_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(v_ext_1738_, v_declName_1739_, v_a_1740_, v_a_1741_);
lean_dec(v_a_1741_);
lean_dec_ref(v_a_1740_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0(lean_object* v_00_u03b2_1744_, lean_object* v_k_1745_, lean_object* v_t_1746_, lean_object* v_h_1747_){
_start:
{
lean_object* v___x_1748_; 
v___x_1748_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_1745_, v_t_1746_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___boxed(lean_object* v_00_u03b2_1749_, lean_object* v_k_1750_, lean_object* v_t_1751_, lean_object* v_h_1752_){
_start:
{
lean_object* v_res_1753_; 
v_res_1753_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0(v_00_u03b2_1749_, v_k_1750_, v_t_1751_, v_h_1752_);
lean_dec(v_k_1750_);
return v_res_1753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___lam__0(lean_object* v_a_1754_, lean_object* v_s_1755_){
_start:
{
lean_object* v_casesTypes_1756_; lean_object* v_extThms_1757_; lean_object* v_funCC_1758_; lean_object* v_inj_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1766_; 
v_casesTypes_1756_ = lean_ctor_get(v_s_1755_, 0);
v_extThms_1757_ = lean_ctor_get(v_s_1755_, 1);
v_funCC_1758_ = lean_ctor_get(v_s_1755_, 2);
v_inj_1759_ = lean_ctor_get(v_s_1755_, 4);
v_isSharedCheck_1766_ = !lean_is_exclusive(v_s_1755_);
if (v_isSharedCheck_1766_ == 0)
{
lean_object* v_unused_1767_; 
v_unused_1767_ = lean_ctor_get(v_s_1755_, 3);
lean_dec(v_unused_1767_);
v___x_1761_ = v_s_1755_;
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_inj_1759_);
lean_inc(v_funCC_1758_);
lean_inc(v_extThms_1757_);
lean_inc(v_casesTypes_1756_);
lean_dec(v_s_1755_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1764_; 
if (v_isShared_1762_ == 0)
{
lean_ctor_set(v___x_1761_, 3, v_a_1754_);
v___x_1764_ = v___x_1761_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_casesTypes_1756_);
lean_ctor_set(v_reuseFailAlloc_1765_, 1, v_extThms_1757_);
lean_ctor_set(v_reuseFailAlloc_1765_, 2, v_funCC_1758_);
lean_ctor_set(v_reuseFailAlloc_1765_, 3, v_a_1754_);
lean_ctor_set(v_reuseFailAlloc_1765_, 4, v_inj_1759_);
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
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0(void){
_start:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1768_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
v___x_1769_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1768_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
lean_ctor_set(v___x_1769_, 2, v___x_1768_);
lean_ctor_set(v___x_1769_, 3, v___x_1768_);
lean_ctor_set(v___x_1769_, 4, v___x_1768_);
lean_ctor_set(v___x_1769_, 5, v___x_1768_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(lean_object* v_ext_1770_, lean_object* v_declName_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_){
_start:
{
lean_object* v___x_1777_; lean_object* v_ext_1778_; lean_object* v_toEnvExtension_1779_; lean_object* v_env_1780_; lean_object* v_asyncMode_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v_ematch_1784_; lean_object* v___x_1785_; 
v___x_1777_ = lean_st_ref_get(v_a_1775_);
v_ext_1778_ = lean_ctor_get(v_ext_1770_, 1);
v_toEnvExtension_1779_ = lean_ctor_get(v_ext_1778_, 0);
v_env_1780_ = lean_ctor_get(v___x_1777_, 0);
lean_inc_ref(v_env_1780_);
lean_dec(v___x_1777_);
v_asyncMode_1781_ = lean_ctor_get(v_toEnvExtension_1779_, 2);
v___x_1782_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_1783_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1782_, v_ext_1770_, v_env_1780_, v_asyncMode_1781_);
v_ematch_1784_ = lean_ctor_get(v___x_1783_, 3);
lean_inc_ref(v_ematch_1784_);
lean_dec(v___x_1783_);
lean_inc(v_a_1775_);
lean_inc(v_a_1773_);
v___x_1785_ = l_Lean_Meta_Grind_Theorems_eraseDecl___redArg(v_ematch_1784_, v_declName_1771_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_);
if (lean_obj_tag(v___x_1785_) == 0)
{
lean_object* v_a_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1830_; 
v_a_1786_ = lean_ctor_get(v___x_1785_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1785_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1788_ = v___x_1785_;
v_isShared_1789_ = v_isSharedCheck_1830_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_a_1786_);
lean_dec(v___x_1785_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1830_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v___x_1790_; lean_object* v_env_1791_; lean_object* v_nextMacroScope_1792_; lean_object* v_ngen_1793_; lean_object* v_auxDeclNGen_1794_; lean_object* v_traceState_1795_; lean_object* v_messages_1796_; lean_object* v_infoState_1797_; lean_object* v_snapshotTasks_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1828_; 
v___x_1790_ = lean_st_ref_take(v_a_1775_);
v_env_1791_ = lean_ctor_get(v___x_1790_, 0);
v_nextMacroScope_1792_ = lean_ctor_get(v___x_1790_, 1);
v_ngen_1793_ = lean_ctor_get(v___x_1790_, 2);
v_auxDeclNGen_1794_ = lean_ctor_get(v___x_1790_, 3);
v_traceState_1795_ = lean_ctor_get(v___x_1790_, 4);
v_messages_1796_ = lean_ctor_get(v___x_1790_, 6);
v_infoState_1797_ = lean_ctor_get(v___x_1790_, 7);
v_snapshotTasks_1798_ = lean_ctor_get(v___x_1790_, 8);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1828_ == 0)
{
lean_object* v_unused_1829_; 
v_unused_1829_ = lean_ctor_get(v___x_1790_, 5);
lean_dec(v_unused_1829_);
v___x_1800_ = v___x_1790_;
v_isShared_1801_ = v_isSharedCheck_1828_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_snapshotTasks_1798_);
lean_inc(v_infoState_1797_);
lean_inc(v_messages_1796_);
lean_inc(v_traceState_1795_);
lean_inc(v_auxDeclNGen_1794_);
lean_inc(v_ngen_1793_);
lean_inc(v_nextMacroScope_1792_);
lean_inc(v_env_1791_);
lean_dec(v___x_1790_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1828_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___f_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1806_; 
v___f_1802_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___lam__0), 2, 1);
lean_closure_set(v___f_1802_, 0, v_a_1786_);
v___x_1803_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_1770_, v_env_1791_, v___f_1802_);
v___x_1804_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2);
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 5, v___x_1804_);
lean_ctor_set(v___x_1800_, 0, v___x_1803_);
v___x_1806_ = v___x_1800_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v___x_1803_);
lean_ctor_set(v_reuseFailAlloc_1827_, 1, v_nextMacroScope_1792_);
lean_ctor_set(v_reuseFailAlloc_1827_, 2, v_ngen_1793_);
lean_ctor_set(v_reuseFailAlloc_1827_, 3, v_auxDeclNGen_1794_);
lean_ctor_set(v_reuseFailAlloc_1827_, 4, v_traceState_1795_);
lean_ctor_set(v_reuseFailAlloc_1827_, 5, v___x_1804_);
lean_ctor_set(v_reuseFailAlloc_1827_, 6, v_messages_1796_);
lean_ctor_set(v_reuseFailAlloc_1827_, 7, v_infoState_1797_);
lean_ctor_set(v_reuseFailAlloc_1827_, 8, v_snapshotTasks_1798_);
v___x_1806_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v_mctx_1809_; lean_object* v_zetaDeltaFVarIds_1810_; lean_object* v_postponed_1811_; lean_object* v_diag_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1825_; 
v___x_1807_ = lean_st_ref_set(v_a_1775_, v___x_1806_);
lean_dec(v_a_1775_);
v___x_1808_ = lean_st_ref_take(v_a_1773_);
v_mctx_1809_ = lean_ctor_get(v___x_1808_, 0);
v_zetaDeltaFVarIds_1810_ = lean_ctor_get(v___x_1808_, 2);
v_postponed_1811_ = lean_ctor_get(v___x_1808_, 3);
v_diag_1812_ = lean_ctor_get(v___x_1808_, 4);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1808_);
if (v_isSharedCheck_1825_ == 0)
{
lean_object* v_unused_1826_; 
v_unused_1826_ = lean_ctor_get(v___x_1808_, 1);
lean_dec(v_unused_1826_);
v___x_1814_ = v___x_1808_;
v_isShared_1815_ = v_isSharedCheck_1825_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_diag_1812_);
lean_inc(v_postponed_1811_);
lean_inc(v_zetaDeltaFVarIds_1810_);
lean_inc(v_mctx_1809_);
lean_dec(v___x_1808_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1825_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1816_; lean_object* v___x_1818_; 
v___x_1816_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0);
if (v_isShared_1815_ == 0)
{
lean_ctor_set(v___x_1814_, 1, v___x_1816_);
v___x_1818_ = v___x_1814_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_mctx_1809_);
lean_ctor_set(v_reuseFailAlloc_1824_, 1, v___x_1816_);
lean_ctor_set(v_reuseFailAlloc_1824_, 2, v_zetaDeltaFVarIds_1810_);
lean_ctor_set(v_reuseFailAlloc_1824_, 3, v_postponed_1811_);
lean_ctor_set(v_reuseFailAlloc_1824_, 4, v_diag_1812_);
v___x_1818_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1822_; 
v___x_1819_ = lean_st_ref_set(v_a_1773_, v___x_1818_);
lean_dec(v_a_1773_);
v___x_1820_ = lean_box(0);
if (v_isShared_1789_ == 0)
{
lean_ctor_set(v___x_1788_, 0, v___x_1820_);
v___x_1822_ = v___x_1788_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v___x_1820_);
v___x_1822_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
return v___x_1822_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1838_; 
lean_dec(v_a_1775_);
lean_dec(v_a_1773_);
lean_dec_ref(v_ext_1770_);
v_a_1831_ = lean_ctor_get(v___x_1785_, 0);
v_isSharedCheck_1838_ = !lean_is_exclusive(v___x_1785_);
if (v_isSharedCheck_1838_ == 0)
{
v___x_1833_ = v___x_1785_;
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_a_1831_);
lean_dec(v___x_1785_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1836_; 
if (v_isShared_1834_ == 0)
{
v___x_1836_ = v___x_1833_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v_a_1831_);
v___x_1836_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
return v___x_1836_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___boxed(lean_object* v_ext_1839_, lean_object* v_declName_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(v_ext_1839_, v_declName_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___lam__0(lean_object* v_a_1847_, lean_object* v_s_1848_){
_start:
{
lean_object* v_casesTypes_1849_; lean_object* v_extThms_1850_; lean_object* v_funCC_1851_; lean_object* v_ematch_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1859_; 
v_casesTypes_1849_ = lean_ctor_get(v_s_1848_, 0);
v_extThms_1850_ = lean_ctor_get(v_s_1848_, 1);
v_funCC_1851_ = lean_ctor_get(v_s_1848_, 2);
v_ematch_1852_ = lean_ctor_get(v_s_1848_, 3);
v_isSharedCheck_1859_ = !lean_is_exclusive(v_s_1848_);
if (v_isSharedCheck_1859_ == 0)
{
lean_object* v_unused_1860_; 
v_unused_1860_ = lean_ctor_get(v_s_1848_, 4);
lean_dec(v_unused_1860_);
v___x_1854_ = v_s_1848_;
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_ematch_1852_);
lean_inc(v_funCC_1851_);
lean_inc(v_extThms_1850_);
lean_inc(v_casesTypes_1849_);
lean_dec(v_s_1848_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1857_; 
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 4, v_a_1847_);
v___x_1857_ = v___x_1854_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_casesTypes_1849_);
lean_ctor_set(v_reuseFailAlloc_1858_, 1, v_extThms_1850_);
lean_ctor_set(v_reuseFailAlloc_1858_, 2, v_funCC_1851_);
lean_ctor_set(v_reuseFailAlloc_1858_, 3, v_ematch_1852_);
lean_ctor_set(v_reuseFailAlloc_1858_, 4, v_a_1847_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(lean_object* v_ext_1861_, lean_object* v_declName_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_){
_start:
{
lean_object* v___x_1868_; lean_object* v_ext_1869_; lean_object* v_toEnvExtension_1870_; lean_object* v_env_1871_; lean_object* v_asyncMode_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v_inj_1875_; lean_object* v___x_1876_; 
v___x_1868_ = lean_st_ref_get(v_a_1866_);
v_ext_1869_ = lean_ctor_get(v_ext_1861_, 1);
v_toEnvExtension_1870_ = lean_ctor_get(v_ext_1869_, 0);
v_env_1871_ = lean_ctor_get(v___x_1868_, 0);
lean_inc_ref(v_env_1871_);
lean_dec(v___x_1868_);
v_asyncMode_1872_ = lean_ctor_get(v_toEnvExtension_1870_, 2);
v___x_1873_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_1874_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1873_, v_ext_1861_, v_env_1871_, v_asyncMode_1872_);
v_inj_1875_ = lean_ctor_get(v___x_1874_, 4);
lean_inc_ref(v_inj_1875_);
lean_dec(v___x_1874_);
lean_inc(v_a_1866_);
lean_inc(v_a_1864_);
v___x_1876_ = l_Lean_Meta_Grind_Theorems_eraseDecl___redArg(v_inj_1875_, v_declName_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_);
if (lean_obj_tag(v___x_1876_) == 0)
{
lean_object* v_a_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1921_; 
v_a_1877_ = lean_ctor_get(v___x_1876_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1879_ = v___x_1876_;
v_isShared_1880_ = v_isSharedCheck_1921_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_a_1877_);
lean_dec(v___x_1876_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1921_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1881_; lean_object* v_env_1882_; lean_object* v_nextMacroScope_1883_; lean_object* v_ngen_1884_; lean_object* v_auxDeclNGen_1885_; lean_object* v_traceState_1886_; lean_object* v_messages_1887_; lean_object* v_infoState_1888_; lean_object* v_snapshotTasks_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1919_; 
v___x_1881_ = lean_st_ref_take(v_a_1866_);
v_env_1882_ = lean_ctor_get(v___x_1881_, 0);
v_nextMacroScope_1883_ = lean_ctor_get(v___x_1881_, 1);
v_ngen_1884_ = lean_ctor_get(v___x_1881_, 2);
v_auxDeclNGen_1885_ = lean_ctor_get(v___x_1881_, 3);
v_traceState_1886_ = lean_ctor_get(v___x_1881_, 4);
v_messages_1887_ = lean_ctor_get(v___x_1881_, 6);
v_infoState_1888_ = lean_ctor_get(v___x_1881_, 7);
v_snapshotTasks_1889_ = lean_ctor_get(v___x_1881_, 8);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1919_ == 0)
{
lean_object* v_unused_1920_; 
v_unused_1920_ = lean_ctor_get(v___x_1881_, 5);
lean_dec(v_unused_1920_);
v___x_1891_ = v___x_1881_;
v_isShared_1892_ = v_isSharedCheck_1919_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_snapshotTasks_1889_);
lean_inc(v_infoState_1888_);
lean_inc(v_messages_1887_);
lean_inc(v_traceState_1886_);
lean_inc(v_auxDeclNGen_1885_);
lean_inc(v_ngen_1884_);
lean_inc(v_nextMacroScope_1883_);
lean_inc(v_env_1882_);
lean_dec(v___x_1881_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1919_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___f_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1897_; 
v___f_1893_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___lam__0), 2, 1);
lean_closure_set(v___f_1893_, 0, v_a_1877_);
v___x_1894_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_1861_, v_env_1882_, v___f_1893_);
v___x_1895_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2);
if (v_isShared_1892_ == 0)
{
lean_ctor_set(v___x_1891_, 5, v___x_1895_);
lean_ctor_set(v___x_1891_, 0, v___x_1894_);
v___x_1897_ = v___x_1891_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v___x_1894_);
lean_ctor_set(v_reuseFailAlloc_1918_, 1, v_nextMacroScope_1883_);
lean_ctor_set(v_reuseFailAlloc_1918_, 2, v_ngen_1884_);
lean_ctor_set(v_reuseFailAlloc_1918_, 3, v_auxDeclNGen_1885_);
lean_ctor_set(v_reuseFailAlloc_1918_, 4, v_traceState_1886_);
lean_ctor_set(v_reuseFailAlloc_1918_, 5, v___x_1895_);
lean_ctor_set(v_reuseFailAlloc_1918_, 6, v_messages_1887_);
lean_ctor_set(v_reuseFailAlloc_1918_, 7, v_infoState_1888_);
lean_ctor_set(v_reuseFailAlloc_1918_, 8, v_snapshotTasks_1889_);
v___x_1897_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v_mctx_1900_; lean_object* v_zetaDeltaFVarIds_1901_; lean_object* v_postponed_1902_; lean_object* v_diag_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1916_; 
v___x_1898_ = lean_st_ref_set(v_a_1866_, v___x_1897_);
lean_dec(v_a_1866_);
v___x_1899_ = lean_st_ref_take(v_a_1864_);
v_mctx_1900_ = lean_ctor_get(v___x_1899_, 0);
v_zetaDeltaFVarIds_1901_ = lean_ctor_get(v___x_1899_, 2);
v_postponed_1902_ = lean_ctor_get(v___x_1899_, 3);
v_diag_1903_ = lean_ctor_get(v___x_1899_, 4);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1916_ == 0)
{
lean_object* v_unused_1917_; 
v_unused_1917_ = lean_ctor_get(v___x_1899_, 1);
lean_dec(v_unused_1917_);
v___x_1905_ = v___x_1899_;
v_isShared_1906_ = v_isSharedCheck_1916_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_diag_1903_);
lean_inc(v_postponed_1902_);
lean_inc(v_zetaDeltaFVarIds_1901_);
lean_inc(v_mctx_1900_);
lean_dec(v___x_1899_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1916_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v___x_1907_; lean_object* v___x_1909_; 
v___x_1907_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0);
if (v_isShared_1906_ == 0)
{
lean_ctor_set(v___x_1905_, 1, v___x_1907_);
v___x_1909_ = v___x_1905_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_mctx_1900_);
lean_ctor_set(v_reuseFailAlloc_1915_, 1, v___x_1907_);
lean_ctor_set(v_reuseFailAlloc_1915_, 2, v_zetaDeltaFVarIds_1901_);
lean_ctor_set(v_reuseFailAlloc_1915_, 3, v_postponed_1902_);
lean_ctor_set(v_reuseFailAlloc_1915_, 4, v_diag_1903_);
v___x_1909_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1913_; 
v___x_1910_ = lean_st_ref_set(v_a_1864_, v___x_1909_);
lean_dec(v_a_1864_);
v___x_1911_ = lean_box(0);
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 0, v___x_1911_);
v___x_1913_ = v___x_1879_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___x_1911_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1929_; 
lean_dec(v_a_1866_);
lean_dec(v_a_1864_);
lean_dec_ref(v_ext_1861_);
v_a_1922_ = lean_ctor_get(v___x_1876_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1924_ = v___x_1876_;
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_a_1922_);
lean_dec(v___x_1876_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1927_; 
if (v_isShared_1925_ == 0)
{
v___x_1927_ = v___x_1924_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_a_1922_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___boxed(lean_object* v_ext_1930_, lean_object* v_declName_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_){
_start:
{
lean_object* v_res_1937_; 
v_res_1937_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(v_ext_1930_, v_declName_1931_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_);
return v_res_1937_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1938_, lean_object* v_i_1939_, lean_object* v_k_1940_){
_start:
{
lean_object* v___x_1941_; uint8_t v___x_1942_; 
v___x_1941_ = lean_array_get_size(v_keys_1938_);
v___x_1942_ = lean_nat_dec_lt(v_i_1939_, v___x_1941_);
if (v___x_1942_ == 0)
{
lean_dec(v_i_1939_);
return v___x_1942_;
}
else
{
lean_object* v_k_x27_1943_; uint8_t v___x_1944_; 
v_k_x27_1943_ = lean_array_fget_borrowed(v_keys_1938_, v_i_1939_);
v___x_1944_ = lean_name_eq(v_k_1940_, v_k_x27_1943_);
if (v___x_1944_ == 0)
{
lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1945_ = lean_unsigned_to_nat(1u);
v___x_1946_ = lean_nat_add(v_i_1939_, v___x_1945_);
lean_dec(v_i_1939_);
v_i_1939_ = v___x_1946_;
goto _start;
}
else
{
lean_dec(v_i_1939_);
return v___x_1944_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1948_, lean_object* v_i_1949_, lean_object* v_k_1950_){
_start:
{
uint8_t v_res_1951_; lean_object* v_r_1952_; 
v_res_1951_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(v_keys_1948_, v_i_1949_, v_k_1950_);
lean_dec(v_k_1950_);
lean_dec_ref(v_keys_1948_);
v_r_1952_ = lean_box(v_res_1951_);
return v_r_1952_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_1953_; size_t v___x_1954_; size_t v___x_1955_; 
v___x_1953_ = ((size_t)5ULL);
v___x_1954_ = ((size_t)1ULL);
v___x_1955_ = lean_usize_shift_left(v___x_1954_, v___x_1953_);
return v___x_1955_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1956_; size_t v___x_1957_; size_t v___x_1958_; 
v___x_1956_ = ((size_t)1ULL);
v___x_1957_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__0);
v___x_1958_ = lean_usize_sub(v___x_1957_, v___x_1956_);
return v___x_1958_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(lean_object* v_x_1959_, size_t v_x_1960_, lean_object* v_x_1961_){
_start:
{
if (lean_obj_tag(v_x_1959_) == 0)
{
lean_object* v_es_1962_; lean_object* v___x_1963_; size_t v___x_1964_; size_t v___x_1965_; size_t v___x_1966_; lean_object* v_j_1967_; lean_object* v___x_1968_; 
v_es_1962_ = lean_ctor_get(v_x_1959_, 0);
lean_inc_ref(v_es_1962_);
lean_dec_ref(v_x_1959_);
v___x_1963_ = lean_box(2);
v___x_1964_ = ((size_t)5ULL);
v___x_1965_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__1);
v___x_1966_ = lean_usize_land(v_x_1960_, v___x_1965_);
v_j_1967_ = lean_usize_to_nat(v___x_1966_);
v___x_1968_ = lean_array_get(v___x_1963_, v_es_1962_, v_j_1967_);
lean_dec(v_j_1967_);
lean_dec_ref(v_es_1962_);
switch(lean_obj_tag(v___x_1968_))
{
case 0:
{
lean_object* v_key_1969_; uint8_t v___x_1970_; 
v_key_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_key_1969_);
lean_dec_ref(v___x_1968_);
v___x_1970_ = lean_name_eq(v_x_1961_, v_key_1969_);
lean_dec(v_key_1969_);
return v___x_1970_;
}
case 1:
{
lean_object* v_node_1971_; size_t v___x_1972_; 
v_node_1971_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_node_1971_);
lean_dec_ref(v___x_1968_);
v___x_1972_ = lean_usize_shift_right(v_x_1960_, v___x_1964_);
v_x_1959_ = v_node_1971_;
v_x_1960_ = v___x_1972_;
goto _start;
}
default: 
{
uint8_t v___x_1974_; 
v___x_1974_ = 0;
return v___x_1974_;
}
}
}
else
{
lean_object* v_ks_1975_; lean_object* v___x_1976_; uint8_t v___x_1977_; 
v_ks_1975_ = lean_ctor_get(v_x_1959_, 0);
lean_inc_ref(v_ks_1975_);
lean_dec_ref(v_x_1959_);
v___x_1976_ = lean_unsigned_to_nat(0u);
v___x_1977_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(v_ks_1975_, v___x_1976_, v_x_1961_);
lean_dec_ref(v_ks_1975_);
return v___x_1977_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___boxed(lean_object* v_x_1978_, lean_object* v_x_1979_, lean_object* v_x_1980_){
_start:
{
size_t v_x_347__boxed_1981_; uint8_t v_res_1982_; lean_object* v_r_1983_; 
v_x_347__boxed_1981_ = lean_unbox_usize(v_x_1979_);
lean_dec(v_x_1979_);
v_res_1982_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(v_x_1978_, v_x_347__boxed_1981_, v_x_1980_);
lean_dec(v_x_1980_);
v_r_1983_ = lean_box(v_res_1982_);
return v_r_1983_;
}
}
static uint64_t _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1984_; uint64_t v___x_1985_; 
v___x_1984_ = lean_unsigned_to_nat(1723u);
v___x_1985_ = lean_uint64_of_nat(v___x_1984_);
return v___x_1985_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(lean_object* v_x_1986_, lean_object* v_x_1987_){
_start:
{
uint64_t v___y_1989_; 
if (lean_obj_tag(v_x_1987_) == 0)
{
uint64_t v___x_1992_; 
v___x_1992_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0);
v___y_1989_ = v___x_1992_;
goto v___jp_1988_;
}
else
{
uint64_t v_hash_1993_; 
v_hash_1993_ = lean_ctor_get_uint64(v_x_1987_, sizeof(void*)*2);
v___y_1989_ = v_hash_1993_;
goto v___jp_1988_;
}
v___jp_1988_:
{
size_t v___x_1990_; uint8_t v___x_1991_; 
v___x_1990_ = lean_uint64_to_usize(v___y_1989_);
v___x_1991_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(v_x_1986_, v___x_1990_, v_x_1987_);
return v___x_1991_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___boxed(lean_object* v_x_1994_, lean_object* v_x_1995_){
_start:
{
uint8_t v_res_1996_; lean_object* v_r_1997_; 
v_res_1996_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(v_x_1994_, v_x_1995_);
lean_dec(v_x_1995_);
v_r_1997_ = lean_box(v_res_1996_);
return v_r_1997_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(lean_object* v_ext_1998_, lean_object* v_declName_1999_, lean_object* v_a_2000_){
_start:
{
lean_object* v___x_2002_; lean_object* v_ext_2003_; lean_object* v_toEnvExtension_2004_; lean_object* v_env_2005_; lean_object* v_asyncMode_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v_extThms_2009_; uint8_t v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2002_ = lean_st_ref_get(v_a_2000_);
v_ext_2003_ = lean_ctor_get(v_ext_1998_, 1);
v_toEnvExtension_2004_ = lean_ctor_get(v_ext_2003_, 0);
v_env_2005_ = lean_ctor_get(v___x_2002_, 0);
lean_inc_ref(v_env_2005_);
lean_dec(v___x_2002_);
v_asyncMode_2006_ = lean_ctor_get(v_toEnvExtension_2004_, 2);
v___x_2007_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_2008_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2007_, v_ext_1998_, v_env_2005_, v_asyncMode_2006_);
v_extThms_2009_ = lean_ctor_get(v___x_2008_, 1);
lean_inc_ref(v_extThms_2009_);
lean_dec(v___x_2008_);
v___x_2010_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(v_extThms_2009_, v_declName_1999_);
v___x_2011_ = lean_box(v___x_2010_);
v___x_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2012_, 0, v___x_2011_);
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg___boxed(lean_object* v_ext_2013_, lean_object* v_declName_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(v_ext_2013_, v_declName_2014_, v_a_2015_);
lean_dec(v_a_2015_);
lean_dec(v_declName_2014_);
lean_dec_ref(v_ext_2013_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem(lean_object* v_ext_2018_, lean_object* v_declName_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v___x_2023_; 
v___x_2023_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(v_ext_2018_, v_declName_2019_, v_a_2021_);
return v___x_2023_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___boxed(lean_object* v_ext_2024_, lean_object* v_declName_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_){
_start:
{
lean_object* v_res_2029_; 
v_res_2029_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem(v_ext_2024_, v_declName_2025_, v_a_2026_, v_a_2027_);
lean_dec(v_a_2027_);
lean_dec_ref(v_a_2026_);
lean_dec(v_declName_2025_);
lean_dec_ref(v_ext_2024_);
return v_res_2029_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0(lean_object* v_00_u03b2_2030_, lean_object* v_x_2031_, lean_object* v_x_2032_){
_start:
{
uint8_t v___x_2033_; 
v___x_2033_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(v_x_2031_, v_x_2032_);
return v___x_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___boxed(lean_object* v_00_u03b2_2034_, lean_object* v_x_2035_, lean_object* v_x_2036_){
_start:
{
uint8_t v_res_2037_; lean_object* v_r_2038_; 
v_res_2037_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0(v_00_u03b2_2034_, v_x_2035_, v_x_2036_);
lean_dec(v_x_2036_);
v_r_2038_ = lean_box(v_res_2037_);
return v_r_2038_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0(lean_object* v_00_u03b2_2039_, lean_object* v_x_2040_, size_t v_x_2041_, lean_object* v_x_2042_){
_start:
{
uint8_t v___x_2043_; 
v___x_2043_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(v_x_2040_, v_x_2041_, v_x_2042_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2044_, lean_object* v_x_2045_, lean_object* v_x_2046_, lean_object* v_x_2047_){
_start:
{
size_t v_x_453__boxed_2048_; uint8_t v_res_2049_; lean_object* v_r_2050_; 
v_x_453__boxed_2048_ = lean_unbox_usize(v_x_2046_);
lean_dec(v_x_2046_);
v_res_2049_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0(v_00_u03b2_2044_, v_x_2045_, v_x_453__boxed_2048_, v_x_2047_);
lean_dec(v_x_2047_);
v_r_2050_ = lean_box(v_res_2049_);
return v_r_2050_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2051_, lean_object* v_keys_2052_, lean_object* v_vals_2053_, lean_object* v_heq_2054_, lean_object* v_i_2055_, lean_object* v_k_2056_){
_start:
{
uint8_t v___x_2057_; 
v___x_2057_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(v_keys_2052_, v_i_2055_, v_k_2056_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2058_, lean_object* v_keys_2059_, lean_object* v_vals_2060_, lean_object* v_heq_2061_, lean_object* v_i_2062_, lean_object* v_k_2063_){
_start:
{
uint8_t v_res_2064_; lean_object* v_r_2065_; 
v_res_2064_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1(v_00_u03b2_2058_, v_keys_2059_, v_vals_2060_, v_heq_2061_, v_i_2062_, v_k_2063_);
lean_dec(v_k_2063_);
lean_dec_ref(v_vals_2060_);
lean_dec_ref(v_keys_2059_);
v_r_2065_ = lean_box(v_res_2064_);
return v_r_2065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(lean_object* v_ext_2066_, lean_object* v_declName_2067_, lean_object* v_a_2068_){
_start:
{
lean_object* v___x_2070_; lean_object* v_ext_2071_; lean_object* v_toEnvExtension_2072_; lean_object* v_env_2073_; lean_object* v_asyncMode_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v_inj_2077_; lean_object* v___x_2078_; uint8_t v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2070_ = lean_st_ref_get(v_a_2068_);
v_ext_2071_ = lean_ctor_get(v_ext_2066_, 1);
v_toEnvExtension_2072_ = lean_ctor_get(v_ext_2071_, 0);
v_env_2073_ = lean_ctor_get(v___x_2070_, 0);
lean_inc_ref(v_env_2073_);
lean_dec(v___x_2070_);
v_asyncMode_2074_ = lean_ctor_get(v_toEnvExtension_2072_, 2);
v___x_2075_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_2076_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2075_, v_ext_2066_, v_env_2073_, v_asyncMode_2074_);
v_inj_2077_ = lean_ctor_get(v___x_2076_, 4);
lean_inc_ref(v_inj_2077_);
lean_dec(v___x_2076_);
v___x_2078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2078_, 0, v_declName_2067_);
v___x_2079_ = l_Lean_Meta_Grind_Theorems_contains___redArg(v_inj_2077_, v___x_2078_);
lean_dec_ref(v___x_2078_);
v___x_2080_ = lean_box(v___x_2079_);
v___x_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2080_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg___boxed(lean_object* v_ext_2082_, lean_object* v_declName_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_){
_start:
{
lean_object* v_res_2086_; 
v_res_2086_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(v_ext_2082_, v_declName_2083_, v_a_2084_);
lean_dec(v_a_2084_);
lean_dec_ref(v_ext_2082_);
return v_res_2086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem(lean_object* v_ext_2087_, lean_object* v_declName_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_){
_start:
{
lean_object* v___x_2092_; 
v___x_2092_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(v_ext_2087_, v_declName_2088_, v_a_2090_);
return v___x_2092_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___boxed(lean_object* v_ext_2093_, lean_object* v_declName_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem(v_ext_2093_, v_declName_2094_, v_a_2095_, v_a_2096_);
lean_dec(v_a_2096_);
lean_dec_ref(v_a_2095_);
lean_dec_ref(v_ext_2093_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(lean_object* v_ext_2099_, lean_object* v_declName_2100_, lean_object* v_a_2101_){
_start:
{
lean_object* v___x_2103_; lean_object* v_ext_2104_; lean_object* v_toEnvExtension_2105_; lean_object* v_env_2106_; lean_object* v_asyncMode_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v_funCC_2110_; uint8_t v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2103_ = lean_st_ref_get(v_a_2101_);
v_ext_2104_ = lean_ctor_get(v_ext_2099_, 1);
v_toEnvExtension_2105_ = lean_ctor_get(v_ext_2104_, 0);
v_env_2106_ = lean_ctor_get(v___x_2103_, 0);
lean_inc_ref(v_env_2106_);
lean_dec(v___x_2103_);
v_asyncMode_2107_ = lean_ctor_get(v_toEnvExtension_2105_, 2);
v___x_2108_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_2109_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2108_, v_ext_2099_, v_env_2106_, v_asyncMode_2107_);
v_funCC_2110_ = lean_ctor_get(v___x_2109_, 2);
lean_inc(v_funCC_2110_);
lean_dec(v___x_2109_);
v___x_2111_ = l_Lean_NameSet_contains(v_funCC_2110_, v_declName_2100_);
lean_dec(v_funCC_2110_);
v___x_2112_ = lean_box(v___x_2111_);
v___x_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
return v___x_2113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg___boxed(lean_object* v_ext_2114_, lean_object* v_declName_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(v_ext_2114_, v_declName_2115_, v_a_2116_);
lean_dec(v_a_2116_);
lean_dec(v_declName_2115_);
lean_dec_ref(v_ext_2114_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr(lean_object* v_ext_2119_, lean_object* v_declName_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_){
_start:
{
lean_object* v___x_2124_; 
v___x_2124_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(v_ext_2119_, v_declName_2120_, v_a_2122_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___boxed(lean_object* v_ext_2125_, lean_object* v_declName_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_){
_start:
{
lean_object* v_res_2130_; 
v_res_2130_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr(v_ext_2125_, v_declName_2126_, v_a_2127_, v_a_2128_);
lean_dec(v_a_2128_);
lean_dec_ref(v_a_2127_);
lean_dec(v_declName_2126_);
lean_dec_ref(v_ext_2125_);
return v_res_2130_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9(void){
_start:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2154_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7));
v___x_2155_ = l_Lean_mkAtom(v___x_2154_);
return v___x_2155_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10(void){
_start:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2156_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9);
v___x_2157_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2158_ = lean_array_push(v___x_2157_, v___x_2156_);
return v___x_2158_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15(void){
_start:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2167_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14));
v___x_2168_ = l_Lean_mkAtom(v___x_2167_);
return v___x_2168_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16(void){
_start:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2169_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15);
v___x_2170_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2171_ = lean_array_push(v___x_2170_, v___x_2169_);
return v___x_2171_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17(void){
_start:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2172_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16);
v___x_2173_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13));
v___x_2174_ = lean_box(2);
v___x_2175_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2175_, 0, v___x_2174_);
lean_ctor_set(v___x_2175_, 1, v___x_2173_);
lean_ctor_set(v___x_2175_, 2, v___x_2172_);
return v___x_2175_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18(void){
_start:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2176_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17);
v___x_2177_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10);
v___x_2178_ = lean_array_push(v___x_2177_, v___x_2176_);
return v___x_2178_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19(void){
_start:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2179_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18);
v___x_2180_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8));
v___x_2181_ = lean_box(2);
v___x_2182_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2181_);
lean_ctor_set(v___x_2182_, 1, v___x_2180_);
lean_ctor_set(v___x_2182_, 2, v___x_2179_);
return v___x_2182_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20(void){
_start:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2183_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19);
v___x_2184_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2185_ = lean_array_push(v___x_2184_, v___x_2183_);
return v___x_2185_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21(void){
_start:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2186_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20);
v___x_2187_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6));
v___x_2188_ = lean_box(2);
v___x_2189_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2188_);
lean_ctor_set(v___x_2189_, 1, v___x_2187_);
lean_ctor_set(v___x_2189_, 2, v___x_2186_);
return v___x_2189_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22(void){
_start:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2190_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21);
v___x_2191_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2192_ = lean_array_push(v___x_2191_, v___x_2190_);
return v___x_2192_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23(void){
_start:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2193_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22);
v___x_2194_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4));
v___x_2195_ = lean_box(2);
v___x_2196_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2195_);
lean_ctor_set(v___x_2196_, 1, v___x_2194_);
lean_ctor_set(v___x_2196_, 2, v___x_2193_);
return v___x_2196_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24(void){
_start:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2197_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23);
v___x_2198_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2199_ = lean_array_push(v___x_2198_, v___x_2197_);
return v___x_2199_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25(void){
_start:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2200_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24);
v___x_2201_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1));
v___x_2202_ = lean_box(2);
v___x_2203_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
lean_ctor_set(v___x_2203_, 1, v___x_2201_);
lean_ctor_set(v___x_2203_, 2, v___x_2200_);
return v___x_2203_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1(void){
_start:
{
lean_object* v___x_2204_; 
v___x_2204_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25);
return v___x_2204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(lean_object* v_declName_2205_, lean_object* v_ext_2206_, lean_object* v_____r_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
uint8_t v___x_2213_; lean_object* v___x_2214_; 
v___x_2213_ = 0;
lean_inc(v_declName_2205_);
v___x_2214_ = l_Lean_Meta_Grind_isCasesAttrCandidate(v_declName_2205_, v___x_2213_, v___y_2210_, v___y_2211_);
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_object* v_a_2215_; uint8_t v___x_2216_; 
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
lean_inc(v_a_2215_);
lean_dec_ref(v___x_2214_);
v___x_2216_ = lean_unbox(v_a_2215_);
lean_dec(v_a_2215_);
if (v___x_2216_ == 0)
{
lean_object* v___x_2217_; lean_object* v_a_2218_; uint8_t v___x_2219_; 
v___x_2217_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(v_ext_2206_, v_declName_2205_, v___y_2211_);
v_a_2218_ = lean_ctor_get(v___x_2217_, 0);
lean_inc(v_a_2218_);
lean_dec_ref(v___x_2217_);
v___x_2219_ = lean_unbox(v_a_2218_);
lean_dec(v_a_2218_);
if (v___x_2219_ == 0)
{
lean_object* v___x_2220_; lean_object* v_a_2221_; uint8_t v___x_2222_; 
lean_inc(v_declName_2205_);
v___x_2220_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(v_ext_2206_, v_declName_2205_, v___y_2211_);
v_a_2221_ = lean_ctor_get(v___x_2220_, 0);
lean_inc(v_a_2221_);
lean_dec_ref(v___x_2220_);
v___x_2222_ = lean_unbox(v_a_2221_);
lean_dec(v_a_2221_);
if (v___x_2222_ == 0)
{
lean_object* v___x_2223_; lean_object* v_a_2224_; uint8_t v___x_2225_; 
v___x_2223_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(v_ext_2206_, v_declName_2205_, v___y_2211_);
v_a_2224_ = lean_ctor_get(v___x_2223_, 0);
lean_inc(v_a_2224_);
lean_dec_ref(v___x_2223_);
v___x_2225_ = lean_unbox(v_a_2224_);
lean_dec(v_a_2224_);
if (v___x_2225_ == 0)
{
lean_object* v___x_2226_; 
v___x_2226_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(v_ext_2206_, v_declName_2205_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
return v___x_2226_;
}
else
{
lean_object* v___x_2227_; 
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
v___x_2227_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(v_ext_2206_, v_declName_2205_, v___y_2210_, v___y_2211_);
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
return v___x_2227_;
}
}
else
{
lean_object* v___x_2228_; 
v___x_2228_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(v_ext_2206_, v_declName_2205_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
return v___x_2228_;
}
}
else
{
lean_object* v___x_2229_; 
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
v___x_2229_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(v_ext_2206_, v_declName_2205_, v___y_2210_, v___y_2211_);
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
return v___x_2229_;
}
}
else
{
lean_object* v___x_2230_; 
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
v___x_2230_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(v_ext_2206_, v_declName_2205_, v___y_2210_, v___y_2211_);
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
return v___x_2230_;
}
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
lean_dec_ref(v_ext_2206_);
lean_dec(v_declName_2205_);
v_a_2231_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2214_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2214_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0___boxed(lean_object* v_declName_2239_, lean_object* v_ext_2240_, lean_object* v_____r_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(v_declName_2239_, v_ext_2240_, v_____r_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(lean_object* v_msgData_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_){
_start:
{
lean_object* v___x_2254_; lean_object* v_env_2255_; lean_object* v___x_2256_; lean_object* v_mctx_2257_; lean_object* v_lctx_2258_; lean_object* v_options_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2254_ = lean_st_ref_get(v___y_2252_);
v_env_2255_ = lean_ctor_get(v___x_2254_, 0);
lean_inc_ref(v_env_2255_);
lean_dec(v___x_2254_);
v___x_2256_ = lean_st_ref_get(v___y_2250_);
v_mctx_2257_ = lean_ctor_get(v___x_2256_, 0);
lean_inc_ref(v_mctx_2257_);
lean_dec(v___x_2256_);
v_lctx_2258_ = lean_ctor_get(v___y_2249_, 2);
v_options_2259_ = lean_ctor_get(v___y_2251_, 2);
lean_inc_ref(v_options_2259_);
lean_inc_ref(v_lctx_2258_);
v___x_2260_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2260_, 0, v_env_2255_);
lean_ctor_set(v___x_2260_, 1, v_mctx_2257_);
lean_ctor_set(v___x_2260_, 2, v_lctx_2258_);
lean_ctor_set(v___x_2260_, 3, v_options_2259_);
v___x_2261_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2260_);
lean_ctor_set(v___x_2261_, 1, v_msgData_2248_);
v___x_2262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2261_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0___boxed(lean_object* v_msgData_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_){
_start:
{
lean_object* v_res_2269_; 
v_res_2269_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(v_msgData_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
lean_dec(v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(lean_object* v_msg_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_){
_start:
{
lean_object* v_ref_2276_; lean_object* v___x_2277_; lean_object* v_a_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2286_; 
v_ref_2276_ = lean_ctor_get(v___y_2273_, 5);
v___x_2277_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(v_msg_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_);
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2286_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2280_ = v___x_2277_;
v_isShared_2281_ = v_isSharedCheck_2286_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_a_2278_);
lean_dec(v___x_2277_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2286_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2282_; lean_object* v___x_2284_; 
lean_inc(v_ref_2276_);
v___x_2282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2282_, 0, v_ref_2276_);
lean_ctor_set(v___x_2282_, 1, v_a_2278_);
if (v_isShared_2281_ == 0)
{
lean_ctor_set_tag(v___x_2280_, 1);
lean_ctor_set(v___x_2280_, 0, v___x_2282_);
v___x_2284_ = v___x_2280_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v___x_2282_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg___boxed(lean_object* v_msg_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v_msg_2287_, v___y_2288_, v___y_2289_, v___y_2290_, v___y_2291_);
lean_dec(v___y_2291_);
lean_dec_ref(v___y_2290_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
return v_res_2293_;
}
}
static uint64_t _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2300_; uint64_t v___x_2301_; 
v___x_2300_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0));
v___x_2301_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2300_);
return v___x_2301_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2(void){
_start:
{
uint64_t v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2302_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1);
v___x_2303_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0));
v___x_2304_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
lean_ctor_set_uint64(v___x_2304_, sizeof(void*)*1, v___x_2302_);
return v___x_2304_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2305_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4(void){
_start:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; 
v___x_2306_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_2307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2306_);
return v___x_2307_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2308_ = lean_box(1);
v___x_2309_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4);
v___x_2310_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4);
v___x_2311_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2310_);
lean_ctor_set(v___x_2311_, 1, v___x_2309_);
lean_ctor_set(v___x_2311_, 2, v___x_2308_);
return v___x_2311_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7(void){
_start:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2314_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4);
v___x_2315_ = lean_unsigned_to_nat(0u);
v___x_2316_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2315_);
lean_ctor_set(v___x_2316_, 1, v___x_2315_);
lean_ctor_set(v___x_2316_, 2, v___x_2315_);
lean_ctor_set(v___x_2316_, 3, v___x_2314_);
lean_ctor_set(v___x_2316_, 4, v___x_2314_);
lean_ctor_set(v___x_2316_, 5, v___x_2314_);
lean_ctor_set(v___x_2316_, 6, v___x_2314_);
lean_ctor_set(v___x_2316_, 7, v___x_2314_);
lean_ctor_set(v___x_2316_, 8, v___x_2314_);
return v___x_2316_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8(void){
_start:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2317_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4);
v___x_2318_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2317_);
lean_ctor_set(v___x_2318_, 1, v___x_2317_);
lean_ctor_set(v___x_2318_, 2, v___x_2317_);
lean_ctor_set(v___x_2318_, 3, v___x_2317_);
lean_ctor_set(v___x_2318_, 4, v___x_2317_);
lean_ctor_set(v___x_2318_, 5, v___x_2317_);
return v___x_2318_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9(void){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4);
v___x_2320_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
lean_ctor_set(v___x_2320_, 2, v___x_2319_);
lean_ctor_set(v___x_2320_, 3, v___x_2319_);
lean_ctor_set(v___x_2320_, 4, v___x_2319_);
return v___x_2320_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11(void){
_start:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2322_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10));
v___x_2323_ = l_Lean_stringToMessageData(v___x_2322_);
return v___x_2323_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13(void){
_start:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2325_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12));
v___x_2326_ = l_Lean_stringToMessageData(v___x_2325_);
return v___x_2326_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__15(void){
_start:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2328_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14));
v___x_2329_ = l_Lean_stringToMessageData(v___x_2328_);
return v___x_2329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1(lean_object* v___x_2330_, lean_object* v_ext_2331_, uint8_t v_showInfo_2332_, lean_object* v_attrName_2333_, lean_object* v_declName_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_){
_start:
{
uint8_t v___x_2338_; uint8_t v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___y_2353_; 
v___x_2338_ = 1;
v___x_2339_ = 0;
v___x_2340_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2);
v___x_2341_ = lean_unsigned_to_nat(0u);
v___x_2342_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4);
v___x_2343_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5);
v___x_2344_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6));
v___x_2345_ = lean_box(0);
lean_inc(v___x_2330_);
v___x_2346_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2346_, 0, v___x_2340_);
lean_ctor_set(v___x_2346_, 1, v___x_2330_);
lean_ctor_set(v___x_2346_, 2, v___x_2343_);
lean_ctor_set(v___x_2346_, 3, v___x_2344_);
lean_ctor_set(v___x_2346_, 4, v___x_2345_);
lean_ctor_set(v___x_2346_, 5, v___x_2341_);
lean_ctor_set(v___x_2346_, 6, v___x_2345_);
lean_ctor_set_uint8(v___x_2346_, sizeof(void*)*7, v___x_2339_);
lean_ctor_set_uint8(v___x_2346_, sizeof(void*)*7 + 1, v___x_2339_);
lean_ctor_set_uint8(v___x_2346_, sizeof(void*)*7 + 2, v___x_2339_);
lean_ctor_set_uint8(v___x_2346_, sizeof(void*)*7 + 3, v___x_2338_);
v___x_2347_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7);
v___x_2348_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8);
v___x_2349_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9);
v___x_2350_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2347_);
lean_ctor_set(v___x_2350_, 1, v___x_2348_);
lean_ctor_set(v___x_2350_, 2, v___x_2330_);
lean_ctor_set(v___x_2350_, 3, v___x_2342_);
lean_ctor_set(v___x_2350_, 4, v___x_2349_);
v___x_2351_ = lean_st_mk_ref(v___x_2350_);
if (v_showInfo_2332_ == 0)
{
lean_object* v___x_2363_; lean_object* v___x_2364_; 
lean_dec(v_attrName_2333_);
v___x_2363_ = lean_box(0);
lean_inc(v___x_2351_);
v___x_2364_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(v_declName_2334_, v_ext_2331_, v___x_2363_, v___x_2346_, v___x_2351_, v___y_2335_, v___y_2336_);
v___y_2353_ = v___x_2364_;
goto v___jp_2352_;
}
else
{
lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
lean_dec(v_declName_2334_);
lean_dec_ref(v_ext_2331_);
v___x_2365_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11);
v___x_2366_ = l_Lean_MessageData_ofName(v_attrName_2333_);
lean_inc_ref(v___x_2366_);
v___x_2367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2365_);
lean_ctor_set(v___x_2367_, 1, v___x_2366_);
v___x_2368_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13);
v___x_2369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2369_, 0, v___x_2367_);
lean_ctor_set(v___x_2369_, 1, v___x_2368_);
v___x_2370_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2369_);
lean_ctor_set(v___x_2370_, 1, v___x_2366_);
v___x_2371_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__15, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__15_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__15);
v___x_2372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2372_, 0, v___x_2370_);
lean_ctor_set(v___x_2372_, 1, v___x_2371_);
v___x_2373_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2372_, v___x_2346_, v___x_2351_, v___y_2335_, v___y_2336_);
lean_dec(v___y_2336_);
lean_dec_ref(v___y_2335_);
lean_dec_ref(v___x_2346_);
v___y_2353_ = v___x_2373_;
goto v___jp_2352_;
}
v___jp_2352_:
{
if (lean_obj_tag(v___y_2353_) == 0)
{
lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2362_; 
v_a_2354_ = lean_ctor_get(v___y_2353_, 0);
v_isSharedCheck_2362_ = !lean_is_exclusive(v___y_2353_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2356_ = v___y_2353_;
v_isShared_2357_ = v_isSharedCheck_2362_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___y_2353_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2362_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2358_; lean_object* v___x_2360_; 
v___x_2358_ = lean_st_ref_get(v___x_2351_);
lean_dec(v___x_2351_);
lean_dec(v___x_2358_);
if (v_isShared_2357_ == 0)
{
v___x_2360_ = v___x_2356_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v_a_2354_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
return v___x_2360_;
}
}
}
else
{
lean_dec(v___x_2351_);
return v___y_2353_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___boxed(lean_object* v___x_2374_, lean_object* v_ext_2375_, lean_object* v_showInfo_2376_, lean_object* v_attrName_2377_, lean_object* v_declName_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_){
_start:
{
uint8_t v_showInfo_boxed_2382_; lean_object* v_res_2383_; 
v_showInfo_boxed_2382_ = lean_unbox(v_showInfo_2376_);
v_res_2383_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1(v___x_2374_, v_ext_2375_, v_showInfo_boxed_2382_, v_attrName_2377_, v_declName_2378_, v___y_2379_, v___y_2380_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(lean_object* v_ext_2386_, uint8_t v_attrKind_2387_, uint8_t v_showInfo_2388_, uint8_t v_minIndexable_2389_, lean_object* v_as_x27_2390_, lean_object* v_b_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_){
_start:
{
if (lean_obj_tag(v_as_x27_2390_) == 0)
{
lean_object* v___x_2397_; 
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec_ref(v_ext_2386_);
v___x_2397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2397_, 0, v_b_2391_);
return v___x_2397_;
}
else
{
lean_object* v_head_2398_; lean_object* v_tail_2399_; lean_object* v___x_2400_; 
v_head_2398_ = lean_ctor_get(v_as_x27_2390_, 0);
lean_inc(v_head_2398_);
v_tail_2399_ = lean_ctor_get(v_as_x27_2390_, 1);
lean_inc(v_tail_2399_);
lean_dec_ref(v_as_x27_2390_);
v___x_2400_ = l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(v___y_2395_);
if (lean_obj_tag(v___x_2400_) == 0)
{
lean_object* v_a_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v_a_2401_ = lean_ctor_get(v___x_2400_, 0);
lean_inc(v_a_2401_);
lean_dec_ref(v___x_2400_);
v___x_2402_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0));
lean_inc(v___y_2395_);
lean_inc_ref(v___y_2394_);
lean_inc(v___y_2393_);
lean_inc_ref(v___y_2392_);
lean_inc_ref(v_ext_2386_);
v___x_2403_ = l_Lean_Meta_Grind_Extension_addEMatchAttr(v_ext_2386_, v_head_2398_, v_attrKind_2387_, v___x_2402_, v_a_2401_, v_showInfo_2388_, v_minIndexable_2389_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_);
if (lean_obj_tag(v___x_2403_) == 0)
{
lean_object* v___x_2404_; 
lean_dec_ref(v___x_2403_);
v___x_2404_ = lean_box(0);
v_as_x27_2390_ = v_tail_2399_;
v_b_2391_ = v___x_2404_;
goto _start;
}
else
{
lean_dec(v_tail_2399_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec_ref(v_ext_2386_);
return v___x_2403_;
}
}
else
{
lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2413_; 
lean_dec(v_tail_2399_);
lean_dec(v_head_2398_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec_ref(v_ext_2386_);
v_a_2406_ = lean_ctor_get(v___x_2400_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___x_2400_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2408_ = v___x_2400_;
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v___x_2400_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2411_; 
if (v_isShared_2409_ == 0)
{
v___x_2411_ = v___x_2408_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v_a_2406_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
return v___x_2411_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___boxed(lean_object* v_ext_2414_, lean_object* v_attrKind_2415_, lean_object* v_showInfo_2416_, lean_object* v_minIndexable_2417_, lean_object* v_as_x27_2418_, lean_object* v_b_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_){
_start:
{
uint8_t v_attrKind_boxed_2425_; uint8_t v_showInfo_boxed_2426_; uint8_t v_minIndexable_boxed_2427_; lean_object* v_res_2428_; 
v_attrKind_boxed_2425_ = lean_unbox(v_attrKind_2415_);
v_showInfo_boxed_2426_ = lean_unbox(v_showInfo_2416_);
v_minIndexable_boxed_2427_ = lean_unbox(v_minIndexable_2417_);
v_res_2428_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_2414_, v_attrKind_boxed_2425_, v_showInfo_boxed_2426_, v_minIndexable_boxed_2427_, v_as_x27_2418_, v_b_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_);
return v_res_2428_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; 
v___x_2430_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0));
v___x_2431_ = l_Lean_stringToMessageData(v___x_2430_);
return v___x_2431_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2433_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2));
v___x_2434_ = l_Lean_stringToMessageData(v___x_2433_);
return v___x_2434_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5(void){
_start:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; 
v___x_2436_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4));
v___x_2437_ = l_Lean_stringToMessageData(v___x_2436_);
return v___x_2437_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7(void){
_start:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2439_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6));
v___x_2440_ = l_Lean_stringToMessageData(v___x_2439_);
return v___x_2440_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11(void){
_start:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2445_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10));
v___x_2446_ = l_Lean_stringToMessageData(v___x_2445_);
return v___x_2446_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13(void){
_start:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2448_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12));
v___x_2449_ = l_Lean_stringToMessageData(v___x_2448_);
return v___x_2449_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15(void){
_start:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2451_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14));
v___x_2452_ = l_Lean_stringToMessageData(v___x_2451_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2(lean_object* v_stx_2453_, lean_object* v_ext_2454_, lean_object* v_declName_2455_, uint8_t v_attrKind_2456_, uint8_t v_showInfo_2457_, uint8_t v_minIndexable_2458_, uint8_t v___x_2459_, lean_object* v_attrName_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_){
_start:
{
lean_object* v___y_2467_; lean_object* v___y_2468_; lean_object* v___y_2469_; lean_object* v___y_2470_; lean_object* v___x_2494_; 
lean_inc_ref(v___y_2463_);
v___x_2494_ = l_Lean_Meta_Grind_getAttrKindFromOpt(v_stx_2453_, v___y_2463_, v___y_2464_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_a_2495_; 
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
lean_inc(v_a_2495_);
lean_dec_ref(v___x_2494_);
switch(lean_obj_tag(v_a_2495_))
{
case 0:
{
lean_object* v_k_2496_; 
lean_dec(v_attrName_2460_);
lean_dec(v_stx_2453_);
v_k_2496_ = lean_ctor_get(v_a_2495_, 0);
lean_inc(v_k_2496_);
lean_dec_ref(v_a_2495_);
if (lean_obj_tag(v_k_2496_) == 9)
{
lean_object* v___x_2497_; 
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec(v_declName_2455_);
lean_dec_ref(v_ext_2454_);
v___x_2497_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v___y_2463_, v___y_2464_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
return v___x_2497_;
}
else
{
lean_object* v___x_2498_; 
v___x_2498_ = l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(v___y_2464_);
if (lean_obj_tag(v___x_2498_) == 0)
{
lean_object* v_a_2499_; lean_object* v___x_2500_; 
v_a_2499_ = lean_ctor_get(v___x_2498_, 0);
lean_inc(v_a_2499_);
lean_dec_ref(v___x_2498_);
v___x_2500_ = l_Lean_Meta_Grind_Extension_addEMatchAttr(v_ext_2454_, v_declName_2455_, v_attrKind_2456_, v_k_2496_, v_a_2499_, v_showInfo_2457_, v_minIndexable_2458_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
return v___x_2500_;
}
else
{
lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2508_; 
lean_dec(v_k_2496_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec(v_declName_2455_);
lean_dec_ref(v_ext_2454_);
v_a_2501_ = lean_ctor_get(v___x_2498_, 0);
v_isSharedCheck_2508_ = !lean_is_exclusive(v___x_2498_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2503_ = v___x_2498_;
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v___x_2498_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2506_; 
if (v_isShared_2504_ == 0)
{
v___x_2506_ = v___x_2503_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v_a_2501_);
v___x_2506_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
return v___x_2506_;
}
}
}
}
}
case 1:
{
uint8_t v_eager_2509_; lean_object* v___x_2510_; 
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec(v_attrName_2460_);
lean_dec(v_stx_2453_);
v_eager_2509_ = lean_ctor_get_uint8(v_a_2495_, 0);
lean_dec_ref(v_a_2495_);
v___x_2510_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(v_ext_2454_, v_declName_2455_, v_eager_2509_, v_attrKind_2456_, v___y_2463_, v___y_2464_);
lean_dec(v___y_2464_);
return v___x_2510_;
}
case 2:
{
lean_object* v___x_2511_; 
lean_dec(v_stx_2453_);
lean_inc(v___y_2464_);
lean_inc_ref(v___y_2463_);
lean_inc(v___y_2462_);
lean_inc_ref(v___y_2461_);
lean_inc(v_declName_2455_);
v___x_2511_ = l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(v_declName_2455_, v___x_2459_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
lean_inc(v_a_2512_);
lean_dec_ref(v___x_2511_);
if (lean_obj_tag(v_a_2512_) == 1)
{
lean_object* v_val_2513_; lean_object* v_ctors_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
lean_dec(v_attrName_2460_);
lean_dec(v_declName_2455_);
v_val_2513_ = lean_ctor_get(v_a_2512_, 0);
lean_inc(v_val_2513_);
lean_dec_ref(v_a_2512_);
v_ctors_2514_ = lean_ctor_get(v_val_2513_, 4);
lean_inc(v_ctors_2514_);
lean_dec(v_val_2513_);
v___x_2515_ = lean_box(0);
v___x_2516_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_2454_, v_attrKind_2456_, v_showInfo_2457_, v_minIndexable_2458_, v_ctors_2514_, v___x_2515_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
if (lean_obj_tag(v___x_2516_) == 0)
{
lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2523_; 
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2516_);
if (v_isSharedCheck_2523_ == 0)
{
lean_object* v_unused_2524_; 
v_unused_2524_ = lean_ctor_get(v___x_2516_, 0);
lean_dec(v_unused_2524_);
v___x_2518_ = v___x_2516_;
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
else
{
lean_dec(v___x_2516_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2521_; 
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 0, v___x_2515_);
v___x_2521_ = v___x_2518_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v___x_2515_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
return v___x_2521_;
}
}
}
else
{
return v___x_2516_;
}
}
else
{
lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
lean_dec(v_a_2512_);
lean_dec_ref(v_ext_2454_);
v___x_2525_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3);
v___x_2526_ = l_Lean_MessageData_ofName(v_attrName_2460_);
v___x_2527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2525_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
v___x_2528_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5);
v___x_2529_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2527_);
lean_ctor_set(v___x_2529_, 1, v___x_2528_);
v___x_2530_ = l_Lean_MessageData_ofConstName(v_declName_2455_, v___x_2459_);
v___x_2531_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2529_);
lean_ctor_set(v___x_2531_, 1, v___x_2530_);
v___x_2532_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7);
v___x_2533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2531_);
lean_ctor_set(v___x_2533_, 1, v___x_2532_);
v___x_2534_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2533_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
return v___x_2534_;
}
}
else
{
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2542_; 
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec(v_attrName_2460_);
lean_dec(v_declName_2455_);
lean_dec_ref(v_ext_2454_);
v_a_2535_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2537_ = v___x_2511_;
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v___x_2511_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2540_; 
if (v_isShared_2538_ == 0)
{
v___x_2540_ = v___x_2537_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_a_2535_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
return v___x_2540_;
}
}
}
}
case 3:
{
lean_object* v___x_2543_; 
lean_dec(v_attrName_2460_);
lean_inc(v_declName_2455_);
v___x_2543_ = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(v_declName_2455_, v___x_2459_, v___y_2463_, v___y_2464_);
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_object* v_a_2544_; 
v_a_2544_ = lean_ctor_get(v___x_2543_, 0);
lean_inc(v_a_2544_);
lean_dec_ref(v___x_2543_);
if (lean_obj_tag(v_a_2544_) == 1)
{
lean_object* v_val_2545_; lean_object* v___x_2546_; 
lean_dec(v_declName_2455_);
lean_dec(v_stx_2453_);
v_val_2545_ = lean_ctor_get(v_a_2544_, 0);
lean_inc(v_val_2545_);
lean_dec_ref(v_a_2544_);
lean_inc_ref(v___y_2463_);
lean_inc(v_val_2545_);
lean_inc_ref(v_ext_2454_);
v___x_2546_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(v_ext_2454_, v_val_2545_, v___x_2459_, v_attrKind_2456_, v___y_2463_, v___y_2464_);
if (lean_obj_tag(v___x_2546_) == 0)
{
lean_object* v___x_2547_; 
lean_dec_ref(v___x_2546_);
lean_inc(v___y_2464_);
lean_inc_ref(v___y_2463_);
lean_inc(v___y_2462_);
lean_inc_ref(v___y_2461_);
v___x_2547_ = l_Lean_Meta_isInductivePredicate_x3f(v_val_2545_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
if (lean_obj_tag(v___x_2547_) == 0)
{
lean_object* v_a_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2568_; 
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2550_ = v___x_2547_;
v_isShared_2551_ = v_isSharedCheck_2568_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_a_2548_);
lean_dec(v___x_2547_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2568_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
if (lean_obj_tag(v_a_2548_) == 1)
{
lean_object* v_val_2552_; lean_object* v_ctors_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
lean_del_object(v___x_2550_);
v_val_2552_ = lean_ctor_get(v_a_2548_, 0);
lean_inc(v_val_2552_);
lean_dec_ref(v_a_2548_);
v_ctors_2553_ = lean_ctor_get(v_val_2552_, 4);
lean_inc(v_ctors_2553_);
lean_dec(v_val_2552_);
v___x_2554_ = lean_box(0);
v___x_2555_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_2454_, v_attrKind_2456_, v_showInfo_2457_, v_minIndexable_2458_, v_ctors_2553_, v___x_2554_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2562_; 
v_isSharedCheck_2562_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2562_ == 0)
{
lean_object* v_unused_2563_; 
v_unused_2563_ = lean_ctor_get(v___x_2555_, 0);
lean_dec(v_unused_2563_);
v___x_2557_ = v___x_2555_;
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
else
{
lean_dec(v___x_2555_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2560_; 
if (v_isShared_2558_ == 0)
{
lean_ctor_set(v___x_2557_, 0, v___x_2554_);
v___x_2560_ = v___x_2557_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v___x_2554_);
v___x_2560_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
return v___x_2560_;
}
}
}
else
{
return v___x_2555_;
}
}
else
{
lean_object* v___x_2564_; lean_object* v___x_2566_; 
lean_dec(v_a_2548_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec_ref(v_ext_2454_);
v___x_2564_ = lean_box(0);
if (v_isShared_2551_ == 0)
{
lean_ctor_set(v___x_2550_, 0, v___x_2564_);
v___x_2566_ = v___x_2550_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v___x_2564_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
}
}
else
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2576_; 
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec_ref(v_ext_2454_);
v_a_2569_ = lean_ctor_get(v___x_2547_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2571_ = v___x_2547_;
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2547_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v___x_2574_; 
if (v_isShared_2572_ == 0)
{
v___x_2574_ = v___x_2571_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v_a_2569_);
v___x_2574_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
return v___x_2574_;
}
}
}
}
else
{
lean_dec(v_val_2545_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec_ref(v_ext_2454_);
return v___x_2546_;
}
}
else
{
lean_object* v___x_2577_; 
lean_dec(v_a_2544_);
v___x_2577_ = l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(v___y_2464_);
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v_a_2578_; lean_object* v___x_2579_; 
v_a_2578_ = lean_ctor_get(v___x_2577_, 0);
lean_inc(v_a_2578_);
lean_dec_ref(v___x_2577_);
v___x_2579_ = l_Lean_Meta_Grind_Extension_addEMatchAttrAndSuggest(v_ext_2454_, v_stx_2453_, v_declName_2455_, v_attrKind_2456_, v_a_2578_, v_minIndexable_2458_, v_showInfo_2457_, v___x_2459_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
return v___x_2579_;
}
else
{
lean_object* v_a_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2587_; 
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec(v_declName_2455_);
lean_dec_ref(v_ext_2454_);
lean_dec(v_stx_2453_);
v_a_2580_ = lean_ctor_get(v___x_2577_, 0);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2582_ = v___x_2577_;
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_a_2580_);
lean_dec(v___x_2577_);
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
v_reuseFailAlloc_2586_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_object* v_a_2588_; lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2595_; 
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec(v_declName_2455_);
lean_dec_ref(v_ext_2454_);
lean_dec(v_stx_2453_);
v_a_2588_ = lean_ctor_get(v___x_2543_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2590_ = v___x_2543_;
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
else
{
lean_inc(v_a_2588_);
lean_dec(v___x_2543_);
v___x_2590_ = lean_box(0);
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
v_resetjp_2589_:
{
lean_object* v___x_2593_; 
if (v_isShared_2591_ == 0)
{
v___x_2593_ = v___x_2590_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v_a_2588_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
return v___x_2593_;
}
}
}
}
case 4:
{
lean_object* v___x_2596_; 
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec(v_attrName_2460_);
lean_dec(v_stx_2453_);
v___x_2596_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(v_ext_2454_, v_declName_2455_, v_attrKind_2456_, v___y_2463_, v___y_2464_);
lean_dec(v___y_2464_);
return v___x_2596_;
}
case 5:
{
lean_object* v_prio_2597_; lean_object* v___x_2598_; uint8_t v___x_2599_; 
lean_dec_ref(v_ext_2454_);
lean_dec(v_stx_2453_);
v_prio_2597_ = lean_ctor_get(v_a_2495_, 0);
lean_inc(v_prio_2597_);
lean_dec_ref(v_a_2495_);
v___x_2598_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_2599_ = lean_name_eq(v_attrName_2460_, v___x_2598_);
lean_dec(v_attrName_2460_);
if (v___x_2599_ == 0)
{
lean_object* v___x_2600_; lean_object* v___x_2601_; 
lean_dec(v_prio_2597_);
lean_dec(v_declName_2455_);
v___x_2600_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11);
v___x_2601_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2600_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
return v___x_2601_;
}
else
{
lean_object* v___x_2602_; 
v___x_2602_ = l_Lean_Meta_Grind_addSymbolPriorityAttr(v_declName_2455_, v_attrKind_2456_, v_prio_2597_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
lean_dec(v___y_2464_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
return v___x_2602_;
}
}
case 6:
{
lean_object* v___x_2603_; 
lean_dec(v_attrName_2460_);
lean_dec(v_stx_2453_);
v___x_2603_ = l_Lean_Meta_Grind_Extension_addInjectiveAttr(v_ext_2454_, v_declName_2455_, v_attrKind_2456_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
return v___x_2603_;
}
case 7:
{
lean_object* v___x_2604_; 
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec(v_attrName_2460_);
lean_dec(v_stx_2453_);
v___x_2604_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(v_ext_2454_, v_declName_2455_, v_attrKind_2456_, v___y_2463_, v___y_2464_);
lean_dec(v___y_2464_);
return v___x_2604_;
}
case 8:
{
uint8_t v_post_2605_; uint8_t v_inv_2606_; lean_object* v___y_2608_; lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v___y_2611_; lean_object* v___x_2615_; uint8_t v___x_2616_; 
lean_dec_ref(v_ext_2454_);
lean_dec(v_stx_2453_);
v_post_2605_ = lean_ctor_get_uint8(v_a_2495_, 0);
v_inv_2606_ = lean_ctor_get_uint8(v_a_2495_, 1);
lean_dec_ref(v_a_2495_);
v___x_2615_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_2616_ = lean_name_eq(v_attrName_2460_, v___x_2615_);
lean_dec(v_attrName_2460_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; lean_object* v___x_2618_; 
lean_dec(v_declName_2455_);
v___x_2617_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13);
v___x_2618_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2617_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
return v___x_2618_;
}
else
{
v___y_2608_ = v___y_2461_;
v___y_2609_ = v___y_2462_;
v___y_2610_ = v___y_2463_;
v___y_2611_ = v___y_2464_;
goto v___jp_2607_;
}
v___jp_2607_:
{
lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2612_ = l_Lean_Meta_Grind_normExt;
v___x_2613_ = lean_unsigned_to_nat(1000u);
v___x_2614_ = l_Lean_Meta_addSimpTheorem(v___x_2612_, v_declName_2455_, v_post_2605_, v_inv_2606_, v_attrKind_2456_, v___x_2613_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_);
return v___x_2614_;
}
}
default: 
{
lean_object* v___x_2619_; uint8_t v___x_2620_; 
lean_dec_ref(v_ext_2454_);
lean_dec(v_stx_2453_);
v___x_2619_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_2620_ = lean_name_eq(v_attrName_2460_, v___x_2619_);
lean_dec(v_attrName_2460_);
if (v___x_2620_ == 0)
{
lean_object* v___x_2621_; lean_object* v___x_2622_; 
lean_dec(v_declName_2455_);
v___x_2621_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15);
v___x_2622_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2621_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
return v___x_2622_;
}
else
{
v___y_2467_ = v___y_2461_;
v___y_2468_ = v___y_2462_;
v___y_2469_ = v___y_2463_;
v___y_2470_ = v___y_2464_;
goto v___jp_2466_;
}
}
}
}
else
{
lean_object* v_a_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2630_; 
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec(v_attrName_2460_);
lean_dec(v_declName_2455_);
lean_dec_ref(v_ext_2454_);
lean_dec(v_stx_2453_);
v_a_2623_ = lean_ctor_get(v___x_2494_, 0);
v_isSharedCheck_2630_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2625_ = v___x_2494_;
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_a_2623_);
lean_dec(v___x_2494_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___x_2628_; 
if (v_isShared_2626_ == 0)
{
v___x_2628_ = v___x_2625_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_a_2623_);
v___x_2628_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
return v___x_2628_;
}
}
}
v___jp_2466_:
{
lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2471_ = l_Lean_Meta_Grind_normExt;
v___x_2472_ = lean_unsigned_to_nat(1000u);
lean_inc(v___y_2470_);
lean_inc_ref(v___y_2469_);
lean_inc(v___y_2468_);
lean_inc_ref(v___y_2467_);
v___x_2473_ = l_Lean_Meta_addDeclToUnfold(v___x_2471_, v_declName_2455_, v___x_2459_, v___x_2459_, v___x_2472_, v_attrKind_2456_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_);
if (lean_obj_tag(v___x_2473_) == 0)
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2485_; 
v_a_2474_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2476_ = v___x_2473_;
v_isShared_2477_ = v_isSharedCheck_2485_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___x_2473_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2485_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
uint8_t v___x_2478_; 
v___x_2478_ = lean_unbox(v_a_2474_);
lean_dec(v_a_2474_);
if (v___x_2478_ == 0)
{
lean_object* v___x_2479_; lean_object* v___x_2480_; 
lean_del_object(v___x_2476_);
v___x_2479_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1);
v___x_2480_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2479_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_);
lean_dec(v___y_2470_);
lean_dec_ref(v___y_2469_);
lean_dec(v___y_2468_);
lean_dec_ref(v___y_2467_);
return v___x_2480_;
}
else
{
lean_object* v___x_2481_; lean_object* v___x_2483_; 
lean_dec(v___y_2470_);
lean_dec_ref(v___y_2469_);
lean_dec(v___y_2468_);
lean_dec_ref(v___y_2467_);
v___x_2481_ = lean_box(0);
if (v_isShared_2477_ == 0)
{
lean_ctor_set(v___x_2476_, 0, v___x_2481_);
v___x_2483_ = v___x_2476_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_dec(v___y_2470_);
lean_dec_ref(v___y_2469_);
lean_dec(v___y_2468_);
lean_dec_ref(v___y_2467_);
v_a_2486_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2473_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2473_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
if (v_isShared_2489_ == 0)
{
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___boxed(lean_object* v_stx_2631_, lean_object* v_ext_2632_, lean_object* v_declName_2633_, lean_object* v_attrKind_2634_, lean_object* v_showInfo_2635_, lean_object* v_minIndexable_2636_, lean_object* v___x_2637_, lean_object* v_attrName_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_){
_start:
{
uint8_t v_attrKind_boxed_2644_; uint8_t v_showInfo_boxed_2645_; uint8_t v_minIndexable_boxed_2646_; uint8_t v___x_15174__boxed_2647_; lean_object* v_res_2648_; 
v_attrKind_boxed_2644_ = lean_unbox(v_attrKind_2634_);
v_showInfo_boxed_2645_ = lean_unbox(v_showInfo_2635_);
v_minIndexable_boxed_2646_ = lean_unbox(v_minIndexable_2636_);
v___x_15174__boxed_2647_ = lean_unbox(v___x_2637_);
v_res_2648_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2(v_stx_2631_, v_ext_2632_, v_declName_2633_, v_attrKind_boxed_2644_, v_showInfo_boxed_2645_, v_minIndexable_boxed_2646_, v___x_15174__boxed_2647_, v_attrName_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_);
return v_res_2648_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg(lean_object* v_cls_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v_options_2655_; uint8_t v_hasTrace_2656_; 
v_options_2655_ = lean_ctor_get(v___y_2653_, 2);
v_hasTrace_2656_ = lean_ctor_get_uint8(v_options_2655_, sizeof(void*)*1);
if (v_hasTrace_2656_ == 0)
{
lean_object* v___x_2657_; lean_object* v___x_2658_; 
lean_dec(v_cls_2652_);
v___x_2657_ = lean_box(v_hasTrace_2656_);
v___x_2658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2657_);
return v___x_2658_;
}
else
{
lean_object* v_inheritedTraceOptions_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; uint8_t v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v_inheritedTraceOptions_2659_ = lean_ctor_get(v___y_2653_, 13);
v___x_2660_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg___closed__1));
v___x_2661_ = l_Lean_Name_append(v___x_2660_, v_cls_2652_);
v___x_2662_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2659_, v_options_2655_, v___x_2661_);
lean_dec(v___x_2661_);
v___x_2663_ = lean_box(v___x_2662_);
v___x_2664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2663_);
return v___x_2664_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_cls_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg(v_cls_2665_, v___y_2666_);
lean_dec_ref(v___y_2666_);
return v_res_2668_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__11___redArg(lean_object* v_keys_2669_, lean_object* v_i_2670_, lean_object* v_k_2671_){
_start:
{
lean_object* v___x_2672_; uint8_t v___x_2673_; 
v___x_2672_ = lean_array_get_size(v_keys_2669_);
v___x_2673_ = lean_nat_dec_lt(v_i_2670_, v___x_2672_);
if (v___x_2673_ == 0)
{
lean_dec(v_i_2670_);
return v___x_2673_;
}
else
{
lean_object* v_k_x27_2674_; uint8_t v___x_2675_; 
v_k_x27_2674_ = lean_array_fget_borrowed(v_keys_2669_, v_i_2670_);
v___x_2675_ = l_Lean_instBEqExtraModUse_beq(v_k_2671_, v_k_x27_2674_);
if (v___x_2675_ == 0)
{
lean_object* v___x_2676_; lean_object* v___x_2677_; 
v___x_2676_ = lean_unsigned_to_nat(1u);
v___x_2677_ = lean_nat_add(v_i_2670_, v___x_2676_);
lean_dec(v_i_2670_);
v_i_2670_ = v___x_2677_;
goto _start;
}
else
{
lean_dec(v_i_2670_);
return v___x_2675_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__11___redArg___boxed(lean_object* v_keys_2679_, lean_object* v_i_2680_, lean_object* v_k_2681_){
_start:
{
uint8_t v_res_2682_; lean_object* v_r_2683_; 
v_res_2682_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__11___redArg(v_keys_2679_, v_i_2680_, v_k_2681_);
lean_dec_ref(v_k_2681_);
lean_dec_ref(v_keys_2679_);
v_r_2683_ = lean_box(v_res_2682_);
return v_r_2683_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(lean_object* v_x_2684_, size_t v_x_2685_, lean_object* v_x_2686_){
_start:
{
if (lean_obj_tag(v_x_2684_) == 0)
{
lean_object* v_es_2687_; lean_object* v___x_2688_; size_t v___x_2689_; size_t v___x_2690_; size_t v___x_2691_; lean_object* v_j_2692_; lean_object* v___x_2693_; 
v_es_2687_ = lean_ctor_get(v_x_2684_, 0);
lean_inc_ref(v_es_2687_);
lean_dec_ref(v_x_2684_);
v___x_2688_ = lean_box(2);
v___x_2689_ = ((size_t)5ULL);
v___x_2690_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___closed__1);
v___x_2691_ = lean_usize_land(v_x_2685_, v___x_2690_);
v_j_2692_ = lean_usize_to_nat(v___x_2691_);
v___x_2693_ = lean_array_get(v___x_2688_, v_es_2687_, v_j_2692_);
lean_dec(v_j_2692_);
lean_dec_ref(v_es_2687_);
switch(lean_obj_tag(v___x_2693_))
{
case 0:
{
lean_object* v_key_2694_; uint8_t v___x_2695_; 
v_key_2694_ = lean_ctor_get(v___x_2693_, 0);
lean_inc(v_key_2694_);
lean_dec_ref(v___x_2693_);
v___x_2695_ = l_Lean_instBEqExtraModUse_beq(v_x_2686_, v_key_2694_);
lean_dec(v_key_2694_);
return v___x_2695_;
}
case 1:
{
lean_object* v_node_2696_; size_t v___x_2697_; 
v_node_2696_ = lean_ctor_get(v___x_2693_, 0);
lean_inc(v_node_2696_);
lean_dec_ref(v___x_2693_);
v___x_2697_ = lean_usize_shift_right(v_x_2685_, v___x_2689_);
v_x_2684_ = v_node_2696_;
v_x_2685_ = v___x_2697_;
goto _start;
}
default: 
{
uint8_t v___x_2699_; 
v___x_2699_ = 0;
return v___x_2699_;
}
}
}
else
{
lean_object* v_ks_2700_; lean_object* v___x_2701_; uint8_t v___x_2702_; 
v_ks_2700_ = lean_ctor_get(v_x_2684_, 0);
lean_inc_ref(v_ks_2700_);
lean_dec_ref(v_x_2684_);
v___x_2701_ = lean_unsigned_to_nat(0u);
v___x_2702_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__11___redArg(v_ks_2700_, v___x_2701_, v_x_2686_);
lean_dec_ref(v_ks_2700_);
return v___x_2702_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object* v_x_2703_, lean_object* v_x_2704_, lean_object* v_x_2705_){
_start:
{
size_t v_x_15602__boxed_2706_; uint8_t v_res_2707_; lean_object* v_r_2708_; 
v_x_15602__boxed_2706_ = lean_unbox_usize(v_x_2704_);
lean_dec(v_x_2704_);
v_res_2707_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(v_x_2703_, v_x_15602__boxed_2706_, v_x_2705_);
lean_dec_ref(v_x_2705_);
v_r_2708_ = lean_box(v_res_2707_);
return v_r_2708_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(lean_object* v_x_2709_, lean_object* v_x_2710_){
_start:
{
uint64_t v___x_2711_; size_t v___x_2712_; uint8_t v___x_2713_; 
v___x_2711_ = l_Lean_instHashableExtraModUse_hash(v_x_2710_);
v___x_2712_ = lean_uint64_to_usize(v___x_2711_);
v___x_2713_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(v_x_2709_, v___x_2712_, v_x_2710_);
return v___x_2713_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_x_2714_, lean_object* v_x_2715_){
_start:
{
uint8_t v_res_2716_; lean_object* v_r_2717_; 
v_res_2716_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(v_x_2714_, v_x_2715_);
lean_dec_ref(v_x_2715_);
v_r_2717_ = lean_box(v_res_2716_);
return v_r_2717_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2718_; double v___x_2719_; 
v___x_2718_ = lean_unsigned_to_nat(0u);
v___x_2719_ = lean_float_of_nat(v___x_2718_);
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6(lean_object* v_cls_2723_, lean_object* v_msg_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_){
_start:
{
lean_object* v_ref_2730_; lean_object* v___x_2731_; lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2776_; 
v_ref_2730_ = lean_ctor_get(v___y_2727_, 5);
v___x_2731_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(v_msg_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_);
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2776_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2776_ == 0)
{
v___x_2734_ = v___x_2731_;
v_isShared_2735_ = v_isSharedCheck_2776_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2731_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2776_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v___x_2736_; lean_object* v_traceState_2737_; lean_object* v_env_2738_; lean_object* v_nextMacroScope_2739_; lean_object* v_ngen_2740_; lean_object* v_auxDeclNGen_2741_; lean_object* v_cache_2742_; lean_object* v_messages_2743_; lean_object* v_infoState_2744_; lean_object* v_snapshotTasks_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2775_; 
v___x_2736_ = lean_st_ref_take(v___y_2728_);
v_traceState_2737_ = lean_ctor_get(v___x_2736_, 4);
v_env_2738_ = lean_ctor_get(v___x_2736_, 0);
v_nextMacroScope_2739_ = lean_ctor_get(v___x_2736_, 1);
v_ngen_2740_ = lean_ctor_get(v___x_2736_, 2);
v_auxDeclNGen_2741_ = lean_ctor_get(v___x_2736_, 3);
v_cache_2742_ = lean_ctor_get(v___x_2736_, 5);
v_messages_2743_ = lean_ctor_get(v___x_2736_, 6);
v_infoState_2744_ = lean_ctor_get(v___x_2736_, 7);
v_snapshotTasks_2745_ = lean_ctor_get(v___x_2736_, 8);
v_isSharedCheck_2775_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2775_ == 0)
{
v___x_2747_ = v___x_2736_;
v_isShared_2748_ = v_isSharedCheck_2775_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_snapshotTasks_2745_);
lean_inc(v_infoState_2744_);
lean_inc(v_messages_2743_);
lean_inc(v_cache_2742_);
lean_inc(v_traceState_2737_);
lean_inc(v_auxDeclNGen_2741_);
lean_inc(v_ngen_2740_);
lean_inc(v_nextMacroScope_2739_);
lean_inc(v_env_2738_);
lean_dec(v___x_2736_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2775_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
uint64_t v_tid_2749_; lean_object* v_traces_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2774_; 
v_tid_2749_ = lean_ctor_get_uint64(v_traceState_2737_, sizeof(void*)*1);
v_traces_2750_ = lean_ctor_get(v_traceState_2737_, 0);
v_isSharedCheck_2774_ = !lean_is_exclusive(v_traceState_2737_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2752_ = v_traceState_2737_;
v_isShared_2753_ = v_isSharedCheck_2774_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_traces_2750_);
lean_dec(v_traceState_2737_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2774_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v___x_2754_; double v___x_2755_; uint8_t v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2764_; 
v___x_2754_ = lean_box(0);
v___x_2755_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0);
v___x_2756_ = 0;
v___x_2757_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__1));
v___x_2758_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2758_, 0, v_cls_2723_);
lean_ctor_set(v___x_2758_, 1, v___x_2754_);
lean_ctor_set(v___x_2758_, 2, v___x_2757_);
lean_ctor_set_float(v___x_2758_, sizeof(void*)*3, v___x_2755_);
lean_ctor_set_float(v___x_2758_, sizeof(void*)*3 + 8, v___x_2755_);
lean_ctor_set_uint8(v___x_2758_, sizeof(void*)*3 + 16, v___x_2756_);
v___x_2759_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__2));
v___x_2760_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2758_);
lean_ctor_set(v___x_2760_, 1, v_a_2732_);
lean_ctor_set(v___x_2760_, 2, v___x_2759_);
lean_inc(v_ref_2730_);
v___x_2761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2761_, 0, v_ref_2730_);
lean_ctor_set(v___x_2761_, 1, v___x_2760_);
v___x_2762_ = l_Lean_PersistentArray_push___redArg(v_traces_2750_, v___x_2761_);
if (v_isShared_2753_ == 0)
{
lean_ctor_set(v___x_2752_, 0, v___x_2762_);
v___x_2764_ = v___x_2752_;
goto v_reusejp_2763_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v___x_2762_);
lean_ctor_set_uint64(v_reuseFailAlloc_2773_, sizeof(void*)*1, v_tid_2749_);
v___x_2764_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2763_;
}
v_reusejp_2763_:
{
lean_object* v___x_2766_; 
if (v_isShared_2748_ == 0)
{
lean_ctor_set(v___x_2747_, 4, v___x_2764_);
v___x_2766_ = v___x_2747_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_env_2738_);
lean_ctor_set(v_reuseFailAlloc_2772_, 1, v_nextMacroScope_2739_);
lean_ctor_set(v_reuseFailAlloc_2772_, 2, v_ngen_2740_);
lean_ctor_set(v_reuseFailAlloc_2772_, 3, v_auxDeclNGen_2741_);
lean_ctor_set(v_reuseFailAlloc_2772_, 4, v___x_2764_);
lean_ctor_set(v_reuseFailAlloc_2772_, 5, v_cache_2742_);
lean_ctor_set(v_reuseFailAlloc_2772_, 6, v_messages_2743_);
lean_ctor_set(v_reuseFailAlloc_2772_, 7, v_infoState_2744_);
lean_ctor_set(v_reuseFailAlloc_2772_, 8, v_snapshotTasks_2745_);
v___x_2766_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2770_; 
v___x_2767_ = lean_st_ref_set(v___y_2728_, v___x_2766_);
v___x_2768_ = lean_box(0);
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 0, v___x_2768_);
v___x_2770_ = v___x_2734_;
goto v_reusejp_2769_;
}
else
{
lean_object* v_reuseFailAlloc_2771_; 
v_reuseFailAlloc_2771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2771_, 0, v___x_2768_);
v___x_2770_ = v_reuseFailAlloc_2771_;
goto v_reusejp_2769_;
}
v_reusejp_2769_:
{
return v___x_2770_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___boxed(lean_object* v_cls_2777_, lean_object* v_msg_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_){
_start:
{
lean_object* v_res_2784_; 
v_res_2784_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6(v_cls_2777_, v_msg_2778_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_);
lean_dec(v___y_2782_);
lean_dec_ref(v___y_2781_);
lean_dec(v___y_2780_);
lean_dec_ref(v___y_2779_);
return v_res_2784_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2(void){
_start:
{
lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
v___x_2787_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1));
v___x_2788_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0));
v___x_2789_ = l_Lean_PersistentHashMap_empty(lean_box(0), lean_box(0), v___x_2788_, v___x_2787_);
return v___x_2789_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6(void){
_start:
{
lean_object* v___x_2794_; lean_object* v___x_2795_; 
v___x_2794_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5));
v___x_2795_ = l_Lean_stringToMessageData(v___x_2794_);
return v___x_2795_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8(void){
_start:
{
lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2797_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7));
v___x_2798_ = l_Lean_stringToMessageData(v___x_2797_);
return v___x_2798_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9(void){
_start:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; 
v___x_2799_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__1));
v___x_2800_ = l_Lean_stringToMessageData(v___x_2799_);
return v___x_2800_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11(void){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2802_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10));
v___x_2803_ = l_Lean_stringToMessageData(v___x_2802_);
return v___x_2803_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13(void){
_start:
{
lean_object* v___x_2805_; lean_object* v___x_2806_; 
v___x_2805_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12));
v___x_2806_ = l_Lean_stringToMessageData(v___x_2805_);
return v___x_2806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(lean_object* v_mod_2811_, uint8_t v_isMeta_2812_, lean_object* v_hint_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_){
_start:
{
lean_object* v___x_2819_; lean_object* v_env_2820_; uint8_t v_isExporting_2821_; lean_object* v___x_2822_; lean_object* v_env_2823_; lean_object* v___x_2824_; lean_object* v_entry_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___y_2830_; lean_object* v___y_2831_; lean_object* v___x_2871_; uint8_t v___x_2872_; 
v___x_2819_ = lean_st_ref_get(v___y_2817_);
v_env_2820_ = lean_ctor_get(v___x_2819_, 0);
lean_inc_ref(v_env_2820_);
lean_dec(v___x_2819_);
v_isExporting_2821_ = lean_ctor_get_uint8(v_env_2820_, sizeof(void*)*8);
lean_dec_ref(v_env_2820_);
v___x_2822_ = lean_st_ref_get(v___y_2817_);
v_env_2823_ = lean_ctor_get(v___x_2822_, 0);
lean_inc_ref(v_env_2823_);
lean_dec(v___x_2822_);
v___x_2824_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2);
lean_inc(v_mod_2811_);
v_entry_2825_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2825_, 0, v_mod_2811_);
lean_ctor_set_uint8(v_entry_2825_, sizeof(void*)*1, v_isExporting_2821_);
lean_ctor_set_uint8(v_entry_2825_, sizeof(void*)*1 + 1, v_isMeta_2812_);
v___x_2826_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2827_ = lean_box(1);
v___x_2828_ = lean_box(0);
v___x_2871_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2824_, v___x_2826_, v_env_2823_, v___x_2827_, v___x_2828_);
v___x_2872_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(v___x_2871_, v_entry_2825_);
if (v___x_2872_ == 0)
{
lean_object* v_cls_2873_; lean_object* v___x_2874_; lean_object* v_a_2875_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2882_; lean_object* v___y_2883_; uint8_t v___x_2895_; 
v_cls_2873_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4));
v___x_2874_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg(v_cls_2873_, v___y_2816_);
v_a_2875_ = lean_ctor_get(v___x_2874_, 0);
lean_inc(v_a_2875_);
lean_dec_ref(v___x_2874_);
v___x_2895_ = lean_unbox(v_a_2875_);
lean_dec(v_a_2875_);
if (v___x_2895_ == 0)
{
lean_dec(v_hint_2813_);
lean_dec(v_mod_2811_);
v___y_2830_ = v___y_2815_;
v___y_2831_ = v___y_2817_;
goto v___jp_2829_;
}
else
{
lean_object* v___x_2896_; lean_object* v___y_2898_; 
v___x_2896_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11);
if (v_isExporting_2821_ == 0)
{
lean_object* v___x_2905_; 
v___x_2905_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16));
v___y_2898_ = v___x_2905_;
goto v___jp_2897_;
}
else
{
lean_object* v___x_2906_; 
v___x_2906_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17));
v___y_2898_ = v___x_2906_;
goto v___jp_2897_;
}
v___jp_2897_:
{
lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; 
v___x_2899_ = l_Lean_stringToMessageData(v___y_2898_);
v___x_2900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2896_);
lean_ctor_set(v___x_2900_, 1, v___x_2899_);
v___x_2901_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13);
v___x_2902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2902_, 0, v___x_2900_);
lean_ctor_set(v___x_2902_, 1, v___x_2901_);
if (v_isMeta_2812_ == 0)
{
lean_object* v___x_2903_; 
v___x_2903_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14));
v___y_2882_ = v___x_2902_;
v___y_2883_ = v___x_2903_;
goto v___jp_2881_;
}
else
{
lean_object* v___x_2904_; 
v___x_2904_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15));
v___y_2882_ = v___x_2902_;
v___y_2883_ = v___x_2904_;
goto v___jp_2881_;
}
}
}
v___jp_2876_:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2879_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2879_, 0, v___y_2877_);
lean_ctor_set(v___x_2879_, 1, v___y_2878_);
v___x_2880_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6(v_cls_2873_, v___x_2879_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_dec_ref(v___x_2880_);
v___y_2830_ = v___y_2815_;
v___y_2831_ = v___y_2817_;
goto v___jp_2829_;
}
else
{
lean_dec_ref(v_entry_2825_);
return v___x_2880_;
}
}
v___jp_2881_:
{
lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; uint8_t v___x_2890_; 
v___x_2884_ = l_Lean_stringToMessageData(v___y_2883_);
v___x_2885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2885_, 0, v___y_2882_);
lean_ctor_set(v___x_2885_, 1, v___x_2884_);
v___x_2886_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6);
v___x_2887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2885_);
lean_ctor_set(v___x_2887_, 1, v___x_2886_);
v___x_2888_ = l_Lean_MessageData_ofName(v_mod_2811_);
v___x_2889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2889_, 0, v___x_2887_);
lean_ctor_set(v___x_2889_, 1, v___x_2888_);
v___x_2890_ = l_Lean_Name_isAnonymous(v_hint_2813_);
if (v___x_2890_ == 0)
{
lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2891_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8);
v___x_2892_ = l_Lean_MessageData_ofName(v_hint_2813_);
v___x_2893_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2891_);
lean_ctor_set(v___x_2893_, 1, v___x_2892_);
v___y_2877_ = v___x_2889_;
v___y_2878_ = v___x_2893_;
goto v___jp_2876_;
}
else
{
lean_object* v___x_2894_; 
lean_dec(v_hint_2813_);
v___x_2894_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9);
v___y_2877_ = v___x_2889_;
v___y_2878_ = v___x_2894_;
goto v___jp_2876_;
}
}
}
else
{
lean_object* v___x_2907_; lean_object* v___x_2908_; 
lean_dec_ref(v_entry_2825_);
lean_dec(v_hint_2813_);
lean_dec(v_mod_2811_);
v___x_2907_ = lean_box(0);
v___x_2908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2907_);
return v___x_2908_;
}
v___jp_2829_:
{
lean_object* v___x_2832_; lean_object* v_toEnvExtension_2833_; lean_object* v_env_2834_; lean_object* v_nextMacroScope_2835_; lean_object* v_ngen_2836_; lean_object* v_auxDeclNGen_2837_; lean_object* v_traceState_2838_; lean_object* v_messages_2839_; lean_object* v_infoState_2840_; lean_object* v_snapshotTasks_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2869_; 
v___x_2832_ = lean_st_ref_take(v___y_2831_);
v_toEnvExtension_2833_ = lean_ctor_get(v___x_2826_, 0);
lean_inc_ref(v_toEnvExtension_2833_);
v_env_2834_ = lean_ctor_get(v___x_2832_, 0);
v_nextMacroScope_2835_ = lean_ctor_get(v___x_2832_, 1);
v_ngen_2836_ = lean_ctor_get(v___x_2832_, 2);
v_auxDeclNGen_2837_ = lean_ctor_get(v___x_2832_, 3);
v_traceState_2838_ = lean_ctor_get(v___x_2832_, 4);
v_messages_2839_ = lean_ctor_get(v___x_2832_, 6);
v_infoState_2840_ = lean_ctor_get(v___x_2832_, 7);
v_snapshotTasks_2841_ = lean_ctor_get(v___x_2832_, 8);
v_isSharedCheck_2869_ = !lean_is_exclusive(v___x_2832_);
if (v_isSharedCheck_2869_ == 0)
{
lean_object* v_unused_2870_; 
v_unused_2870_ = lean_ctor_get(v___x_2832_, 5);
lean_dec(v_unused_2870_);
v___x_2843_ = v___x_2832_;
v_isShared_2844_ = v_isSharedCheck_2869_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_snapshotTasks_2841_);
lean_inc(v_infoState_2840_);
lean_inc(v_messages_2839_);
lean_inc(v_traceState_2838_);
lean_inc(v_auxDeclNGen_2837_);
lean_inc(v_ngen_2836_);
lean_inc(v_nextMacroScope_2835_);
lean_inc(v_env_2834_);
lean_dec(v___x_2832_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2869_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v_asyncMode_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2849_; 
v_asyncMode_2845_ = lean_ctor_get(v_toEnvExtension_2833_, 2);
lean_inc(v_asyncMode_2845_);
lean_dec_ref(v_toEnvExtension_2833_);
v___x_2846_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2826_, v_env_2834_, v_entry_2825_, v_asyncMode_2845_, v___x_2828_);
lean_dec(v_asyncMode_2845_);
v___x_2847_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2);
if (v_isShared_2844_ == 0)
{
lean_ctor_set(v___x_2843_, 5, v___x_2847_);
lean_ctor_set(v___x_2843_, 0, v___x_2846_);
v___x_2849_ = v___x_2843_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v___x_2846_);
lean_ctor_set(v_reuseFailAlloc_2868_, 1, v_nextMacroScope_2835_);
lean_ctor_set(v_reuseFailAlloc_2868_, 2, v_ngen_2836_);
lean_ctor_set(v_reuseFailAlloc_2868_, 3, v_auxDeclNGen_2837_);
lean_ctor_set(v_reuseFailAlloc_2868_, 4, v_traceState_2838_);
lean_ctor_set(v_reuseFailAlloc_2868_, 5, v___x_2847_);
lean_ctor_set(v_reuseFailAlloc_2868_, 6, v_messages_2839_);
lean_ctor_set(v_reuseFailAlloc_2868_, 7, v_infoState_2840_);
lean_ctor_set(v_reuseFailAlloc_2868_, 8, v_snapshotTasks_2841_);
v___x_2849_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v_mctx_2852_; lean_object* v_zetaDeltaFVarIds_2853_; lean_object* v_postponed_2854_; lean_object* v_diag_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2866_; 
v___x_2850_ = lean_st_ref_set(v___y_2831_, v___x_2849_);
v___x_2851_ = lean_st_ref_take(v___y_2830_);
v_mctx_2852_ = lean_ctor_get(v___x_2851_, 0);
v_zetaDeltaFVarIds_2853_ = lean_ctor_get(v___x_2851_, 2);
v_postponed_2854_ = lean_ctor_get(v___x_2851_, 3);
v_diag_2855_ = lean_ctor_get(v___x_2851_, 4);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2851_);
if (v_isSharedCheck_2866_ == 0)
{
lean_object* v_unused_2867_; 
v_unused_2867_ = lean_ctor_get(v___x_2851_, 1);
lean_dec(v_unused_2867_);
v___x_2857_ = v___x_2851_;
v_isShared_2858_ = v_isSharedCheck_2866_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_diag_2855_);
lean_inc(v_postponed_2854_);
lean_inc(v_zetaDeltaFVarIds_2853_);
lean_inc(v_mctx_2852_);
lean_dec(v___x_2851_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2866_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
lean_object* v___x_2859_; lean_object* v___x_2861_; 
v___x_2859_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0);
if (v_isShared_2858_ == 0)
{
lean_ctor_set(v___x_2857_, 1, v___x_2859_);
v___x_2861_ = v___x_2857_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_mctx_2852_);
lean_ctor_set(v_reuseFailAlloc_2865_, 1, v___x_2859_);
lean_ctor_set(v_reuseFailAlloc_2865_, 2, v_zetaDeltaFVarIds_2853_);
lean_ctor_set(v_reuseFailAlloc_2865_, 3, v_postponed_2854_);
lean_ctor_set(v_reuseFailAlloc_2865_, 4, v_diag_2855_);
v___x_2861_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; 
v___x_2862_ = lean_st_ref_set(v___y_2830_, v___x_2861_);
v___x_2863_ = lean_box(0);
v___x_2864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2863_);
return v___x_2864_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___boxed(lean_object* v_mod_2909_, lean_object* v_isMeta_2910_, lean_object* v_hint_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_){
_start:
{
uint8_t v_isMeta_boxed_2917_; lean_object* v_res_2918_; 
v_isMeta_boxed_2917_ = lean_unbox(v_isMeta_2910_);
v_res_2918_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(v_mod_2909_, v_isMeta_boxed_2917_, v_hint_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_);
lean_dec(v___y_2915_);
lean_dec_ref(v___y_2914_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
return v_res_2918_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg(lean_object* v_a_2919_, lean_object* v_x_2920_){
_start:
{
if (lean_obj_tag(v_x_2920_) == 0)
{
lean_object* v___x_2921_; 
v___x_2921_ = lean_box(0);
return v___x_2921_;
}
else
{
lean_object* v_key_2922_; lean_object* v_value_2923_; lean_object* v_tail_2924_; uint8_t v___x_2925_; 
v_key_2922_ = lean_ctor_get(v_x_2920_, 0);
v_value_2923_ = lean_ctor_get(v_x_2920_, 1);
v_tail_2924_ = lean_ctor_get(v_x_2920_, 2);
v___x_2925_ = lean_name_eq(v_key_2922_, v_a_2919_);
if (v___x_2925_ == 0)
{
v_x_2920_ = v_tail_2924_;
goto _start;
}
else
{
lean_object* v___x_2927_; 
lean_inc(v_value_2923_);
v___x_2927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2927_, 0, v_value_2923_);
return v___x_2927_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg___boxed(lean_object* v_a_2928_, lean_object* v_x_2929_){
_start:
{
lean_object* v_res_2930_; 
v_res_2930_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg(v_a_2928_, v_x_2929_);
lean_dec(v_x_2929_);
lean_dec(v_a_2928_);
return v_res_2930_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(lean_object* v_m_2931_, lean_object* v_a_2932_){
_start:
{
lean_object* v_buckets_2933_; lean_object* v___x_2934_; uint64_t v___y_2936_; 
v_buckets_2933_ = lean_ctor_get(v_m_2931_, 1);
v___x_2934_ = lean_array_get_size(v_buckets_2933_);
if (lean_obj_tag(v_a_2932_) == 0)
{
uint64_t v___x_2950_; 
v___x_2950_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0);
v___y_2936_ = v___x_2950_;
goto v___jp_2935_;
}
else
{
uint64_t v_hash_2951_; 
v_hash_2951_ = lean_ctor_get_uint64(v_a_2932_, sizeof(void*)*2);
v___y_2936_ = v_hash_2951_;
goto v___jp_2935_;
}
v___jp_2935_:
{
uint64_t v___x_2937_; uint64_t v___x_2938_; uint64_t v_fold_2939_; uint64_t v___x_2940_; uint64_t v___x_2941_; uint64_t v___x_2942_; size_t v___x_2943_; size_t v___x_2944_; size_t v___x_2945_; size_t v___x_2946_; size_t v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2937_ = 32ULL;
v___x_2938_ = lean_uint64_shift_right(v___y_2936_, v___x_2937_);
v_fold_2939_ = lean_uint64_xor(v___y_2936_, v___x_2938_);
v___x_2940_ = 16ULL;
v___x_2941_ = lean_uint64_shift_right(v_fold_2939_, v___x_2940_);
v___x_2942_ = lean_uint64_xor(v_fold_2939_, v___x_2941_);
v___x_2943_ = lean_uint64_to_usize(v___x_2942_);
v___x_2944_ = lean_usize_of_nat(v___x_2934_);
v___x_2945_ = ((size_t)1ULL);
v___x_2946_ = lean_usize_sub(v___x_2944_, v___x_2945_);
v___x_2947_ = lean_usize_land(v___x_2943_, v___x_2946_);
v___x_2948_ = lean_array_uget_borrowed(v_buckets_2933_, v___x_2947_);
v___x_2949_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg(v_a_2932_, v___x_2948_);
return v___x_2949_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg___boxed(lean_object* v_m_2952_, lean_object* v_a_2953_){
_start:
{
lean_object* v_res_2954_; 
v_res_2954_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v_m_2952_, v_a_2953_);
lean_dec(v_a_2953_);
lean_dec_ref(v_m_2952_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(lean_object* v___x_2955_, lean_object* v_declName_2956_, lean_object* v_as_2957_, size_t v_sz_2958_, size_t v_i_2959_, lean_object* v_b_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_){
_start:
{
uint8_t v___x_2966_; 
v___x_2966_ = lean_usize_dec_lt(v_i_2959_, v_sz_2958_);
if (v___x_2966_ == 0)
{
lean_object* v___x_2967_; 
lean_dec(v_declName_2956_);
v___x_2967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2967_, 0, v_b_2960_);
return v___x_2967_;
}
else
{
lean_object* v___x_2968_; lean_object* v_modules_2969_; lean_object* v___x_2970_; lean_object* v_a_2971_; lean_object* v___x_2972_; lean_object* v_toImport_2973_; lean_object* v_module_2974_; uint8_t v___x_2975_; lean_object* v___x_2976_; 
v___x_2968_ = l_Lean_Environment_header(v___x_2955_);
v_modules_2969_ = lean_ctor_get(v___x_2968_, 3);
lean_inc_ref(v_modules_2969_);
lean_dec_ref(v___x_2968_);
v___x_2970_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2971_ = lean_array_uget_borrowed(v_as_2957_, v_i_2959_);
v___x_2972_ = lean_array_get(v___x_2970_, v_modules_2969_, v_a_2971_);
lean_dec_ref(v_modules_2969_);
v_toImport_2973_ = lean_ctor_get(v___x_2972_, 0);
lean_inc_ref(v_toImport_2973_);
lean_dec(v___x_2972_);
v_module_2974_ = lean_ctor_get(v_toImport_2973_, 0);
lean_inc(v_module_2974_);
lean_dec_ref(v_toImport_2973_);
v___x_2975_ = 0;
lean_inc(v_declName_2956_);
v___x_2976_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(v_module_2974_, v___x_2975_, v_declName_2956_, v___y_2961_, v___y_2962_, v___y_2963_, v___y_2964_);
if (lean_obj_tag(v___x_2976_) == 0)
{
lean_object* v___x_2977_; size_t v___x_2978_; size_t v___x_2979_; 
lean_dec_ref(v___x_2976_);
v___x_2977_ = lean_box(0);
v___x_2978_ = ((size_t)1ULL);
v___x_2979_ = lean_usize_add(v_i_2959_, v___x_2978_);
v_i_2959_ = v___x_2979_;
v_b_2960_ = v___x_2977_;
goto _start;
}
else
{
lean_dec(v_declName_2956_);
return v___x_2976_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___boxed(lean_object* v___x_2981_, lean_object* v_declName_2982_, lean_object* v_as_2983_, lean_object* v_sz_2984_, lean_object* v_i_2985_, lean_object* v_b_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_){
_start:
{
size_t v_sz_boxed_2992_; size_t v_i_boxed_2993_; lean_object* v_res_2994_; 
v_sz_boxed_2992_ = lean_unbox_usize(v_sz_2984_);
lean_dec(v_sz_2984_);
v_i_boxed_2993_ = lean_unbox_usize(v_i_2985_);
lean_dec(v_i_2985_);
v_res_2994_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(v___x_2981_, v_declName_2982_, v_as_2983_, v_sz_boxed_2992_, v_i_boxed_2993_, v_b_2986_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_);
lean_dec(v___y_2990_);
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2988_);
lean_dec_ref(v___y_2987_);
lean_dec_ref(v_as_2983_);
lean_dec_ref(v___x_2981_);
return v_res_2994_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__2(void){
_start:
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2997_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1));
v___x_2998_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0));
v___x_2999_ = l_Std_HashMap_instInhabited(lean_box(0), lean_box(0), v___x_2998_, v___x_2997_);
return v___x_2999_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(lean_object* v_declName_3002_, uint8_t v_isMeta_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_){
_start:
{
lean_object* v___x_3009_; lean_object* v_env_3013_; lean_object* v___y_3015_; lean_object* v___x_3028_; 
v___x_3009_ = lean_st_ref_get(v___y_3007_);
v_env_3013_ = lean_ctor_get(v___x_3009_, 0);
lean_inc_ref(v_env_3013_);
lean_dec(v___x_3009_);
v___x_3028_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3013_, v_declName_3002_);
if (lean_obj_tag(v___x_3028_) == 0)
{
lean_dec_ref(v_env_3013_);
lean_dec(v_declName_3002_);
goto v___jp_3010_;
}
else
{
lean_object* v_val_3029_; lean_object* v___x_3030_; lean_object* v_modules_3031_; lean_object* v___x_3032_; uint8_t v___x_3033_; 
v_val_3029_ = lean_ctor_get(v___x_3028_, 0);
lean_inc(v_val_3029_);
lean_dec_ref(v___x_3028_);
v___x_3030_ = l_Lean_Environment_header(v_env_3013_);
v_modules_3031_ = lean_ctor_get(v___x_3030_, 3);
lean_inc_ref(v_modules_3031_);
lean_dec_ref(v___x_3030_);
v___x_3032_ = lean_array_get_size(v_modules_3031_);
v___x_3033_ = lean_nat_dec_lt(v_val_3029_, v___x_3032_);
if (v___x_3033_ == 0)
{
lean_dec_ref(v_modules_3031_);
lean_dec(v_val_3029_);
lean_dec_ref(v_env_3013_);
lean_dec(v_declName_3002_);
goto v___jp_3010_;
}
else
{
lean_object* v___x_3034_; lean_object* v_env_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; uint8_t v___y_3039_; 
v___x_3034_ = lean_st_ref_get(v___y_3007_);
v_env_3035_ = lean_ctor_get(v___x_3034_, 0);
lean_inc_ref(v_env_3035_);
lean_dec(v___x_3034_);
v___x_3036_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__2, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__2_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__2);
v___x_3037_ = lean_array_fget(v_modules_3031_, v_val_3029_);
lean_dec(v_val_3029_);
lean_dec_ref(v_modules_3031_);
if (v_isMeta_3003_ == 0)
{
lean_dec_ref(v_env_3035_);
v___y_3039_ = v_isMeta_3003_;
goto v___jp_3038_;
}
else
{
uint8_t v___x_3050_; 
lean_inc(v_declName_3002_);
v___x_3050_ = l_Lean_isMarkedMeta(v_env_3035_, v_declName_3002_);
if (v___x_3050_ == 0)
{
v___y_3039_ = v_isMeta_3003_;
goto v___jp_3038_;
}
else
{
uint8_t v___x_3051_; 
v___x_3051_ = 0;
v___y_3039_ = v___x_3051_;
goto v___jp_3038_;
}
}
v___jp_3038_:
{
lean_object* v_toImport_3040_; lean_object* v_module_3041_; lean_object* v___x_3042_; 
v_toImport_3040_ = lean_ctor_get(v___x_3037_, 0);
lean_inc_ref(v_toImport_3040_);
lean_dec(v___x_3037_);
v_module_3041_ = lean_ctor_get(v_toImport_3040_, 0);
lean_inc(v_module_3041_);
lean_dec_ref(v_toImport_3040_);
lean_inc(v_declName_3002_);
v___x_3042_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(v_module_3041_, v___y_3039_, v_declName_3002_, v___y_3004_, v___y_3005_, v___y_3006_, v___y_3007_);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; 
lean_dec_ref(v___x_3042_);
v___x_3043_ = l_Lean_indirectModUseExt;
v___x_3044_ = lean_box(1);
v___x_3045_ = lean_box(0);
lean_inc_ref(v_env_3013_);
v___x_3046_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3036_, v___x_3043_, v_env_3013_, v___x_3044_, v___x_3045_);
v___x_3047_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v___x_3046_, v_declName_3002_);
lean_dec(v___x_3046_);
if (lean_obj_tag(v___x_3047_) == 0)
{
lean_object* v___x_3048_; 
v___x_3048_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__3));
v___y_3015_ = v___x_3048_;
goto v___jp_3014_;
}
else
{
lean_object* v_val_3049_; 
v_val_3049_ = lean_ctor_get(v___x_3047_, 0);
lean_inc(v_val_3049_);
lean_dec_ref(v___x_3047_);
v___y_3015_ = v_val_3049_;
goto v___jp_3014_;
}
}
else
{
lean_dec_ref(v_env_3013_);
lean_dec(v_declName_3002_);
return v___x_3042_;
}
}
}
}
v___jp_3010_:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; 
v___x_3011_ = lean_box(0);
v___x_3012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3012_, 0, v___x_3011_);
return v___x_3012_;
}
v___jp_3014_:
{
lean_object* v___x_3016_; size_t v_sz_3017_; size_t v___x_3018_; lean_object* v___x_3019_; 
v___x_3016_ = lean_box(0);
v_sz_3017_ = lean_array_size(v___y_3015_);
v___x_3018_ = ((size_t)0ULL);
v___x_3019_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(v_env_3013_, v_declName_3002_, v___y_3015_, v_sz_3017_, v___x_3018_, v___x_3016_, v___y_3004_, v___y_3005_, v___y_3006_, v___y_3007_);
lean_dec_ref(v___y_3015_);
lean_dec_ref(v_env_3013_);
if (lean_obj_tag(v___x_3019_) == 0)
{
lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3026_; 
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_3019_);
if (v_isSharedCheck_3026_ == 0)
{
lean_object* v_unused_3027_; 
v_unused_3027_ = lean_ctor_get(v___x_3019_, 0);
lean_dec(v_unused_3027_);
v___x_3021_ = v___x_3019_;
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
else
{
lean_dec(v___x_3019_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3024_; 
if (v_isShared_3022_ == 0)
{
lean_ctor_set(v___x_3021_, 0, v___x_3016_);
v___x_3024_ = v___x_3021_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v___x_3016_);
v___x_3024_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
return v___x_3024_;
}
}
}
else
{
return v___x_3019_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___boxed(lean_object* v_declName_3052_, lean_object* v_isMeta_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_){
_start:
{
uint8_t v_isMeta_boxed_3059_; lean_object* v_res_3060_; 
v_isMeta_boxed_3059_ = lean_unbox(v_isMeta_3053_);
v_res_3060_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(v_declName_3052_, v_isMeta_boxed_3059_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
lean_dec(v___y_3055_);
lean_dec_ref(v___y_3054_);
return v_res_3060_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(lean_object* v___y_3061_, uint8_t v_isExporting_3062_, lean_object* v___x_3063_, lean_object* v___y_3064_, lean_object* v___x_3065_, lean_object* v_a_x3f_3066_){
_start:
{
lean_object* v___x_3068_; lean_object* v_env_3069_; lean_object* v_nextMacroScope_3070_; lean_object* v_ngen_3071_; lean_object* v_auxDeclNGen_3072_; lean_object* v_traceState_3073_; lean_object* v_messages_3074_; lean_object* v_infoState_3075_; lean_object* v_snapshotTasks_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3101_; 
v___x_3068_ = lean_st_ref_take(v___y_3061_);
v_env_3069_ = lean_ctor_get(v___x_3068_, 0);
v_nextMacroScope_3070_ = lean_ctor_get(v___x_3068_, 1);
v_ngen_3071_ = lean_ctor_get(v___x_3068_, 2);
v_auxDeclNGen_3072_ = lean_ctor_get(v___x_3068_, 3);
v_traceState_3073_ = lean_ctor_get(v___x_3068_, 4);
v_messages_3074_ = lean_ctor_get(v___x_3068_, 6);
v_infoState_3075_ = lean_ctor_get(v___x_3068_, 7);
v_snapshotTasks_3076_ = lean_ctor_get(v___x_3068_, 8);
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3068_);
if (v_isSharedCheck_3101_ == 0)
{
lean_object* v_unused_3102_; 
v_unused_3102_ = lean_ctor_get(v___x_3068_, 5);
lean_dec(v_unused_3102_);
v___x_3078_ = v___x_3068_;
v_isShared_3079_ = v_isSharedCheck_3101_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_snapshotTasks_3076_);
lean_inc(v_infoState_3075_);
lean_inc(v_messages_3074_);
lean_inc(v_traceState_3073_);
lean_inc(v_auxDeclNGen_3072_);
lean_inc(v_ngen_3071_);
lean_inc(v_nextMacroScope_3070_);
lean_inc(v_env_3069_);
lean_dec(v___x_3068_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3101_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3080_; lean_object* v___x_3082_; 
v___x_3080_ = l_Lean_Environment_setExporting(v_env_3069_, v_isExporting_3062_);
if (v_isShared_3079_ == 0)
{
lean_ctor_set(v___x_3078_, 5, v___x_3063_);
lean_ctor_set(v___x_3078_, 0, v___x_3080_);
v___x_3082_ = v___x_3078_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v___x_3080_);
lean_ctor_set(v_reuseFailAlloc_3100_, 1, v_nextMacroScope_3070_);
lean_ctor_set(v_reuseFailAlloc_3100_, 2, v_ngen_3071_);
lean_ctor_set(v_reuseFailAlloc_3100_, 3, v_auxDeclNGen_3072_);
lean_ctor_set(v_reuseFailAlloc_3100_, 4, v_traceState_3073_);
lean_ctor_set(v_reuseFailAlloc_3100_, 5, v___x_3063_);
lean_ctor_set(v_reuseFailAlloc_3100_, 6, v_messages_3074_);
lean_ctor_set(v_reuseFailAlloc_3100_, 7, v_infoState_3075_);
lean_ctor_set(v_reuseFailAlloc_3100_, 8, v_snapshotTasks_3076_);
v___x_3082_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v_mctx_3085_; lean_object* v_zetaDeltaFVarIds_3086_; lean_object* v_postponed_3087_; lean_object* v_diag_3088_; lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3098_; 
v___x_3083_ = lean_st_ref_set(v___y_3061_, v___x_3082_);
v___x_3084_ = lean_st_ref_take(v___y_3064_);
v_mctx_3085_ = lean_ctor_get(v___x_3084_, 0);
v_zetaDeltaFVarIds_3086_ = lean_ctor_get(v___x_3084_, 2);
v_postponed_3087_ = lean_ctor_get(v___x_3084_, 3);
v_diag_3088_ = lean_ctor_get(v___x_3084_, 4);
v_isSharedCheck_3098_ = !lean_is_exclusive(v___x_3084_);
if (v_isSharedCheck_3098_ == 0)
{
lean_object* v_unused_3099_; 
v_unused_3099_ = lean_ctor_get(v___x_3084_, 1);
lean_dec(v_unused_3099_);
v___x_3090_ = v___x_3084_;
v_isShared_3091_ = v_isSharedCheck_3098_;
goto v_resetjp_3089_;
}
else
{
lean_inc(v_diag_3088_);
lean_inc(v_postponed_3087_);
lean_inc(v_zetaDeltaFVarIds_3086_);
lean_inc(v_mctx_3085_);
lean_dec(v___x_3084_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3098_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v___x_3093_; 
if (v_isShared_3091_ == 0)
{
lean_ctor_set(v___x_3090_, 1, v___x_3065_);
v___x_3093_ = v___x_3090_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v_mctx_3085_);
lean_ctor_set(v_reuseFailAlloc_3097_, 1, v___x_3065_);
lean_ctor_set(v_reuseFailAlloc_3097_, 2, v_zetaDeltaFVarIds_3086_);
lean_ctor_set(v_reuseFailAlloc_3097_, 3, v_postponed_3087_);
lean_ctor_set(v_reuseFailAlloc_3097_, 4, v_diag_3088_);
v___x_3093_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3094_ = lean_st_ref_set(v___y_3064_, v___x_3093_);
v___x_3095_ = lean_box(0);
v___x_3096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
return v___x_3096_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0___boxed(lean_object* v___y_3103_, lean_object* v_isExporting_3104_, lean_object* v___x_3105_, lean_object* v___y_3106_, lean_object* v___x_3107_, lean_object* v_a_x3f_3108_, lean_object* v___y_3109_){
_start:
{
uint8_t v_isExporting_boxed_3110_; lean_object* v_res_3111_; 
v_isExporting_boxed_3110_ = lean_unbox(v_isExporting_3104_);
v_res_3111_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(v___y_3103_, v_isExporting_boxed_3110_, v___x_3105_, v___y_3106_, v___x_3107_, v_a_x3f_3108_);
lean_dec(v_a_x3f_3108_);
lean_dec(v___y_3106_);
lean_dec(v___y_3103_);
return v_res_3111_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(lean_object* v_x_3112_, uint8_t v_isExporting_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_){
_start:
{
lean_object* v___x_3119_; lean_object* v_env_3120_; uint8_t v_isExporting_3121_; lean_object* v___x_3122_; lean_object* v_env_3123_; lean_object* v_nextMacroScope_3124_; lean_object* v_ngen_3125_; lean_object* v_auxDeclNGen_3126_; lean_object* v_traceState_3127_; lean_object* v_messages_3128_; lean_object* v_infoState_3129_; lean_object* v_snapshotTasks_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3184_; 
v___x_3119_ = lean_st_ref_get(v___y_3117_);
v_env_3120_ = lean_ctor_get(v___x_3119_, 0);
lean_inc_ref(v_env_3120_);
lean_dec(v___x_3119_);
v_isExporting_3121_ = lean_ctor_get_uint8(v_env_3120_, sizeof(void*)*8);
lean_dec_ref(v_env_3120_);
v___x_3122_ = lean_st_ref_take(v___y_3117_);
v_env_3123_ = lean_ctor_get(v___x_3122_, 0);
v_nextMacroScope_3124_ = lean_ctor_get(v___x_3122_, 1);
v_ngen_3125_ = lean_ctor_get(v___x_3122_, 2);
v_auxDeclNGen_3126_ = lean_ctor_get(v___x_3122_, 3);
v_traceState_3127_ = lean_ctor_get(v___x_3122_, 4);
v_messages_3128_ = lean_ctor_get(v___x_3122_, 6);
v_infoState_3129_ = lean_ctor_get(v___x_3122_, 7);
v_snapshotTasks_3130_ = lean_ctor_get(v___x_3122_, 8);
v_isSharedCheck_3184_ = !lean_is_exclusive(v___x_3122_);
if (v_isSharedCheck_3184_ == 0)
{
lean_object* v_unused_3185_; 
v_unused_3185_ = lean_ctor_get(v___x_3122_, 5);
lean_dec(v_unused_3185_);
v___x_3132_ = v___x_3122_;
v_isShared_3133_ = v_isSharedCheck_3184_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_snapshotTasks_3130_);
lean_inc(v_infoState_3129_);
lean_inc(v_messages_3128_);
lean_inc(v_traceState_3127_);
lean_inc(v_auxDeclNGen_3126_);
lean_inc(v_ngen_3125_);
lean_inc(v_nextMacroScope_3124_);
lean_inc(v_env_3123_);
lean_dec(v___x_3122_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3184_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3137_; 
v___x_3134_ = l_Lean_Environment_setExporting(v_env_3123_, v_isExporting_3113_);
v___x_3135_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2);
if (v_isShared_3133_ == 0)
{
lean_ctor_set(v___x_3132_, 5, v___x_3135_);
lean_ctor_set(v___x_3132_, 0, v___x_3134_);
v___x_3137_ = v___x_3132_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v___x_3134_);
lean_ctor_set(v_reuseFailAlloc_3183_, 1, v_nextMacroScope_3124_);
lean_ctor_set(v_reuseFailAlloc_3183_, 2, v_ngen_3125_);
lean_ctor_set(v_reuseFailAlloc_3183_, 3, v_auxDeclNGen_3126_);
lean_ctor_set(v_reuseFailAlloc_3183_, 4, v_traceState_3127_);
lean_ctor_set(v_reuseFailAlloc_3183_, 5, v___x_3135_);
lean_ctor_set(v_reuseFailAlloc_3183_, 6, v_messages_3128_);
lean_ctor_set(v_reuseFailAlloc_3183_, 7, v_infoState_3129_);
lean_ctor_set(v_reuseFailAlloc_3183_, 8, v_snapshotTasks_3130_);
v___x_3137_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v_mctx_3140_; lean_object* v_zetaDeltaFVarIds_3141_; lean_object* v_postponed_3142_; lean_object* v_diag_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3181_; 
v___x_3138_ = lean_st_ref_set(v___y_3117_, v___x_3137_);
v___x_3139_ = lean_st_ref_take(v___y_3115_);
v_mctx_3140_ = lean_ctor_get(v___x_3139_, 0);
v_zetaDeltaFVarIds_3141_ = lean_ctor_get(v___x_3139_, 2);
v_postponed_3142_ = lean_ctor_get(v___x_3139_, 3);
v_diag_3143_ = lean_ctor_get(v___x_3139_, 4);
v_isSharedCheck_3181_ = !lean_is_exclusive(v___x_3139_);
if (v_isSharedCheck_3181_ == 0)
{
lean_object* v_unused_3182_; 
v_unused_3182_ = lean_ctor_get(v___x_3139_, 1);
lean_dec(v_unused_3182_);
v___x_3145_ = v___x_3139_;
v_isShared_3146_ = v_isSharedCheck_3181_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_diag_3143_);
lean_inc(v_postponed_3142_);
lean_inc(v_zetaDeltaFVarIds_3141_);
lean_inc(v_mctx_3140_);
lean_dec(v___x_3139_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3181_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3147_; lean_object* v___x_3149_; 
v___x_3147_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0);
if (v_isShared_3146_ == 0)
{
lean_ctor_set(v___x_3145_, 1, v___x_3147_);
v___x_3149_ = v___x_3145_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v_mctx_3140_);
lean_ctor_set(v_reuseFailAlloc_3180_, 1, v___x_3147_);
lean_ctor_set(v_reuseFailAlloc_3180_, 2, v_zetaDeltaFVarIds_3141_);
lean_ctor_set(v_reuseFailAlloc_3180_, 3, v_postponed_3142_);
lean_ctor_set(v_reuseFailAlloc_3180_, 4, v_diag_3143_);
v___x_3149_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
lean_object* v___x_3150_; lean_object* v_r_3151_; 
v___x_3150_ = lean_st_ref_set(v___y_3115_, v___x_3149_);
lean_inc(v___y_3117_);
lean_inc(v___y_3115_);
v_r_3151_ = lean_apply_5(v_x_3112_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_, lean_box(0));
if (lean_obj_tag(v_r_3151_) == 0)
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3168_; 
v_a_3152_ = lean_ctor_get(v_r_3151_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v_r_3151_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3154_ = v_r_3151_;
v_isShared_3155_ = v_isSharedCheck_3168_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v_r_3151_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3168_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3157_; 
lean_inc(v_a_3152_);
if (v_isShared_3155_ == 0)
{
lean_ctor_set_tag(v___x_3154_, 1);
v___x_3157_ = v___x_3154_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3152_);
v___x_3157_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
lean_object* v___x_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3165_; 
v___x_3158_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(v___y_3117_, v_isExporting_3121_, v___x_3135_, v___y_3115_, v___x_3147_, v___x_3157_);
lean_dec_ref(v___x_3157_);
lean_dec(v___y_3115_);
lean_dec(v___y_3117_);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3158_);
if (v_isSharedCheck_3165_ == 0)
{
lean_object* v_unused_3166_; 
v_unused_3166_ = lean_ctor_get(v___x_3158_, 0);
lean_dec(v_unused_3166_);
v___x_3160_ = v___x_3158_;
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
else
{
lean_dec(v___x_3158_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___x_3163_; 
if (v_isShared_3161_ == 0)
{
lean_ctor_set(v___x_3160_, 0, v_a_3152_);
v___x_3163_ = v___x_3160_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v_a_3152_);
v___x_3163_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
return v___x_3163_;
}
}
}
}
}
else
{
lean_object* v_a_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3178_; 
v_a_3169_ = lean_ctor_get(v_r_3151_, 0);
lean_inc(v_a_3169_);
lean_dec_ref(v_r_3151_);
v___x_3170_ = lean_box(0);
v___x_3171_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(v___y_3117_, v_isExporting_3121_, v___x_3135_, v___y_3115_, v___x_3147_, v___x_3170_);
lean_dec(v___y_3115_);
lean_dec(v___y_3117_);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3178_ == 0)
{
lean_object* v_unused_3179_; 
v_unused_3179_ = lean_ctor_get(v___x_3171_, 0);
lean_dec(v_unused_3179_);
v___x_3173_ = v___x_3171_;
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
else
{
lean_dec(v___x_3171_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3176_; 
if (v_isShared_3174_ == 0)
{
lean_ctor_set_tag(v___x_3173_, 1);
lean_ctor_set(v___x_3173_, 0, v_a_3169_);
v___x_3176_ = v___x_3173_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v_a_3169_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___boxed(lean_object* v_x_3186_, lean_object* v_isExporting_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_){
_start:
{
uint8_t v_isExporting_boxed_3193_; lean_object* v_res_3194_; 
v_isExporting_boxed_3193_ = lean_unbox(v_isExporting_3187_);
v_res_3194_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(v_x_3186_, v_isExporting_boxed_3193_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_);
return v_res_3194_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(lean_object* v_x_3195_, uint8_t v_when_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_){
_start:
{
if (v_when_3196_ == 0)
{
lean_object* v___x_3202_; 
v___x_3202_ = lean_apply_5(v_x_3195_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, lean_box(0));
return v___x_3202_;
}
else
{
uint8_t v___x_3203_; lean_object* v___x_3204_; 
v___x_3203_ = 0;
v___x_3204_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(v_x_3195_, v___x_3203_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_);
return v___x_3204_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg___boxed(lean_object* v_x_3205_, lean_object* v_when_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_){
_start:
{
uint8_t v_when_boxed_3212_; lean_object* v_res_3213_; 
v_when_boxed_3212_ = lean_unbox(v_when_3206_);
v_res_3213_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(v_x_3205_, v_when_boxed_3212_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_);
return v_res_3213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3(lean_object* v___x_3214_, lean_object* v_ext_3215_, uint8_t v_showInfo_3216_, uint8_t v_minIndexable_3217_, lean_object* v_attrName_3218_, lean_object* v_declName_3219_, lean_object* v_stx_3220_, uint8_t v_attrKind_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_){
_start:
{
uint8_t v___x_3225_; uint8_t v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___y_3242_; lean_object* v___x_3252_; 
v___x_3225_ = 0;
v___x_3226_ = 1;
v___x_3227_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2);
v___x_3228_ = lean_unsigned_to_nat(32u);
v___x_3229_ = lean_mk_empty_array_with_capacity(v___x_3228_);
lean_dec_ref(v___x_3229_);
v___x_3230_ = lean_unsigned_to_nat(0u);
v___x_3231_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4);
v___x_3232_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5);
v___x_3233_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6));
v___x_3234_ = lean_box(0);
lean_inc(v___x_3214_);
v___x_3235_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3235_, 0, v___x_3227_);
lean_ctor_set(v___x_3235_, 1, v___x_3214_);
lean_ctor_set(v___x_3235_, 2, v___x_3232_);
lean_ctor_set(v___x_3235_, 3, v___x_3233_);
lean_ctor_set(v___x_3235_, 4, v___x_3234_);
lean_ctor_set(v___x_3235_, 5, v___x_3230_);
lean_ctor_set(v___x_3235_, 6, v___x_3234_);
lean_ctor_set_uint8(v___x_3235_, sizeof(void*)*7, v___x_3225_);
lean_ctor_set_uint8(v___x_3235_, sizeof(void*)*7 + 1, v___x_3225_);
lean_ctor_set_uint8(v___x_3235_, sizeof(void*)*7 + 2, v___x_3225_);
lean_ctor_set_uint8(v___x_3235_, sizeof(void*)*7 + 3, v___x_3226_);
v___x_3236_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7);
v___x_3237_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8);
v___x_3238_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9);
v___x_3239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3239_, 0, v___x_3236_);
lean_ctor_set(v___x_3239_, 1, v___x_3237_);
lean_ctor_set(v___x_3239_, 2, v___x_3214_);
lean_ctor_set(v___x_3239_, 3, v___x_3231_);
lean_ctor_set(v___x_3239_, 4, v___x_3238_);
v___x_3240_ = lean_st_mk_ref(v___x_3239_);
lean_inc(v_declName_3219_);
v___x_3252_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(v_declName_3219_, v___x_3225_, v___x_3235_, v___x_3240_, v___y_3222_, v___y_3223_);
if (lean_obj_tag(v___x_3252_) == 0)
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___f_3257_; lean_object* v___x_3258_; 
lean_dec_ref(v___x_3252_);
v___x_3253_ = lean_box(v_attrKind_3221_);
v___x_3254_ = lean_box(v_showInfo_3216_);
v___x_3255_ = lean_box(v_minIndexable_3217_);
v___x_3256_ = lean_box(v___x_3225_);
v___f_3257_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___boxed), 13, 8);
lean_closure_set(v___f_3257_, 0, v_stx_3220_);
lean_closure_set(v___f_3257_, 1, v_ext_3215_);
lean_closure_set(v___f_3257_, 2, v_declName_3219_);
lean_closure_set(v___f_3257_, 3, v___x_3253_);
lean_closure_set(v___f_3257_, 4, v___x_3254_);
lean_closure_set(v___f_3257_, 5, v___x_3255_);
lean_closure_set(v___f_3257_, 6, v___x_3256_);
lean_closure_set(v___f_3257_, 7, v_attrName_3218_);
lean_inc(v___x_3240_);
v___x_3258_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(v___f_3257_, v___x_3226_, v___x_3235_, v___x_3240_, v___y_3222_, v___y_3223_);
v___y_3242_ = v___x_3258_;
goto v___jp_3241_;
}
else
{
lean_dec_ref(v___x_3235_);
lean_dec(v___y_3223_);
lean_dec_ref(v___y_3222_);
lean_dec(v_stx_3220_);
lean_dec(v_declName_3219_);
lean_dec(v_attrName_3218_);
lean_dec_ref(v_ext_3215_);
v___y_3242_ = v___x_3252_;
goto v___jp_3241_;
}
v___jp_3241_:
{
if (lean_obj_tag(v___y_3242_) == 0)
{
lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3251_; 
v_a_3243_ = lean_ctor_get(v___y_3242_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___y_3242_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3245_ = v___y_3242_;
v_isShared_3246_ = v_isSharedCheck_3251_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___y_3242_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3251_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3247_; lean_object* v___x_3249_; 
v___x_3247_ = lean_st_ref_get(v___x_3240_);
lean_dec(v___x_3240_);
lean_dec(v___x_3247_);
if (v_isShared_3246_ == 0)
{
v___x_3249_ = v___x_3245_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v_a_3243_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
}
}
}
else
{
lean_dec(v___x_3240_);
return v___y_3242_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3___boxed(lean_object* v___x_3259_, lean_object* v_ext_3260_, lean_object* v_showInfo_3261_, lean_object* v_minIndexable_3262_, lean_object* v_attrName_3263_, lean_object* v_declName_3264_, lean_object* v_stx_3265_, lean_object* v_attrKind_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_){
_start:
{
uint8_t v_showInfo_boxed_3270_; uint8_t v_minIndexable_boxed_3271_; uint8_t v_attrKind_boxed_3272_; lean_object* v_res_3273_; 
v_showInfo_boxed_3270_ = lean_unbox(v_showInfo_3261_);
v_minIndexable_boxed_3271_ = lean_unbox(v_minIndexable_3262_);
v_attrKind_boxed_3272_ = lean_unbox(v_attrKind_3266_);
v_res_3273_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3(v___x_3259_, v_ext_3260_, v_showInfo_boxed_3270_, v_minIndexable_boxed_3271_, v_attrName_3263_, v_declName_3264_, v_stx_3265_, v_attrKind_boxed_3272_, v___y_3267_, v___y_3268_);
return v_res_3273_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(lean_object* v_attrName_3296_, uint8_t v_minIndexable_3297_, uint8_t v_showInfo_3298_, lean_object* v_ext_3299_, lean_object* v_ref_3300_){
_start:
{
lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___f_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___f_3307_; lean_object* v___y_3309_; lean_object* v___y_3310_; lean_object* v___y_3353_; 
v___x_3302_ = lean_box(1);
v___x_3303_ = lean_box(v_showInfo_3298_);
lean_inc(v_attrName_3296_);
lean_inc_ref(v_ext_3299_);
v___f_3304_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___boxed), 8, 4);
lean_closure_set(v___f_3304_, 0, v___x_3302_);
lean_closure_set(v___f_3304_, 1, v_ext_3299_);
lean_closure_set(v___f_3304_, 2, v___x_3303_);
lean_closure_set(v___f_3304_, 3, v_attrName_3296_);
v___x_3305_ = lean_box(v_showInfo_3298_);
v___x_3306_ = lean_box(v_minIndexable_3297_);
lean_inc(v_attrName_3296_);
v___f_3307_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3___boxed), 11, 5);
lean_closure_set(v___f_3307_, 0, v___x_3302_);
lean_closure_set(v___f_3307_, 1, v_ext_3299_);
lean_closure_set(v___f_3307_, 2, v___x_3305_);
lean_closure_set(v___f_3307_, 3, v___x_3306_);
lean_closure_set(v___f_3307_, 4, v_attrName_3296_);
if (v_minIndexable_3297_ == 0)
{
if (v_showInfo_3298_ == 0)
{
lean_inc(v_attrName_3296_);
v___y_3353_ = v_attrName_3296_;
goto v___jp_3352_;
}
else
{
lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3381_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19));
lean_inc(v_attrName_3296_);
v___x_3382_ = lean_name_append_after(v_attrName_3296_, v___x_3381_);
v___y_3353_ = v___x_3382_;
goto v___jp_3352_;
}
}
else
{
if (v_showInfo_3298_ == 0)
{
lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3383_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20));
lean_inc(v_attrName_3296_);
v___x_3384_ = lean_name_append_after(v_attrName_3296_, v___x_3383_);
v___y_3353_ = v___x_3384_;
goto v___jp_3352_;
}
else
{
lean_object* v___x_3385_; lean_object* v___x_3386_; 
v___x_3385_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21));
lean_inc(v_attrName_3296_);
v___x_3386_ = lean_name_append_after(v_attrName_3296_, v___x_3385_);
v___y_3353_ = v___x_3386_;
goto v___jp_3352_;
}
}
v___jp_3308_:
{
lean_object* v___x_3311_; uint8_t v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; uint8_t v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; 
v___x_3311_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0));
v___x_3312_ = 1;
v___x_3313_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3296_, v___x_3312_);
v___x_3314_ = lean_string_append(v___x_3311_, v___x_3313_);
v___x_3315_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1));
v___x_3316_ = lean_string_append(v___x_3314_, v___x_3315_);
v___x_3317_ = lean_string_append(v___x_3316_, v___x_3313_);
v___x_3318_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2));
v___x_3319_ = lean_string_append(v___x_3317_, v___x_3318_);
v___x_3320_ = lean_string_append(v___x_3319_, v___x_3313_);
v___x_3321_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3));
v___x_3322_ = lean_string_append(v___x_3320_, v___x_3321_);
v___x_3323_ = lean_string_append(v___x_3322_, v___x_3313_);
v___x_3324_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4));
v___x_3325_ = lean_string_append(v___x_3323_, v___x_3324_);
v___x_3326_ = lean_string_append(v___x_3325_, v___x_3313_);
v___x_3327_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5));
v___x_3328_ = lean_string_append(v___x_3326_, v___x_3327_);
v___x_3329_ = lean_string_append(v___x_3328_, v___x_3313_);
v___x_3330_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6));
v___x_3331_ = lean_string_append(v___x_3329_, v___x_3330_);
v___x_3332_ = lean_string_append(v___x_3331_, v___x_3313_);
v___x_3333_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7));
v___x_3334_ = lean_string_append(v___x_3332_, v___x_3333_);
v___x_3335_ = lean_string_append(v___x_3334_, v___x_3313_);
v___x_3336_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8));
v___x_3337_ = lean_string_append(v___x_3335_, v___x_3336_);
v___x_3338_ = lean_string_append(v___x_3337_, v___x_3313_);
v___x_3339_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9));
v___x_3340_ = lean_string_append(v___x_3338_, v___x_3339_);
v___x_3341_ = lean_string_append(v___x_3340_, v___x_3313_);
v___x_3342_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10));
v___x_3343_ = lean_string_append(v___x_3341_, v___x_3342_);
v___x_3344_ = lean_string_append(v___x_3343_, v___x_3313_);
lean_dec_ref(v___x_3313_);
v___x_3345_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11));
v___x_3346_ = lean_string_append(v___x_3344_, v___x_3345_);
v___x_3347_ = lean_string_append(v___y_3310_, v___x_3346_);
lean_dec_ref(v___x_3346_);
v___x_3348_ = 1;
v___x_3349_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3349_, 0, v_ref_3300_);
lean_ctor_set(v___x_3349_, 1, v___y_3309_);
lean_ctor_set(v___x_3349_, 2, v___x_3347_);
lean_ctor_set_uint8(v___x_3349_, sizeof(void*)*3, v___x_3348_);
v___x_3350_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3349_);
lean_ctor_set(v___x_3350_, 1, v___f_3307_);
lean_ctor_set(v___x_3350_, 2, v___f_3304_);
v___x_3351_ = l_Lean_registerBuiltinAttribute(v___x_3350_);
return v___x_3351_;
}
v___jp_3352_:
{
if (v_minIndexable_3297_ == 0)
{
if (v_showInfo_3298_ == 0)
{
lean_object* v___x_3354_; uint8_t v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; 
v___x_3354_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
v___x_3355_ = 1;
lean_inc(v_attrName_3296_);
v___x_3356_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3296_, v___x_3355_);
v___x_3357_ = lean_string_append(v___x_3354_, v___x_3356_);
lean_dec_ref(v___x_3356_);
v___x_3358_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13));
v___x_3359_ = lean_string_append(v___x_3357_, v___x_3358_);
v___y_3309_ = v___y_3353_;
v___y_3310_ = v___x_3359_;
goto v___jp_3308_;
}
else
{
lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; 
v___x_3360_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
lean_inc(v_attrName_3296_);
v___x_3361_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3296_, v_showInfo_3298_);
v___x_3362_ = lean_string_append(v___x_3360_, v___x_3361_);
v___x_3363_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14));
v___x_3364_ = lean_string_append(v___x_3362_, v___x_3363_);
v___x_3365_ = lean_string_append(v___x_3364_, v___x_3361_);
lean_dec_ref(v___x_3361_);
v___x_3366_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15));
v___x_3367_ = lean_string_append(v___x_3365_, v___x_3366_);
v___y_3309_ = v___y_3353_;
v___y_3310_ = v___x_3367_;
goto v___jp_3308_;
}
}
else
{
if (v_showInfo_3298_ == 0)
{
lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3368_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
lean_inc(v_attrName_3296_);
v___x_3369_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3296_, v_minIndexable_3297_);
v___x_3370_ = lean_string_append(v___x_3368_, v___x_3369_);
lean_dec_ref(v___x_3369_);
v___x_3371_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16));
v___x_3372_ = lean_string_append(v___x_3370_, v___x_3371_);
v___y_3309_ = v___y_3353_;
v___y_3310_ = v___x_3372_;
goto v___jp_3308_;
}
else
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; 
v___x_3373_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
lean_inc(v_attrName_3296_);
v___x_3374_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3296_, v_showInfo_3298_);
v___x_3375_ = lean_string_append(v___x_3373_, v___x_3374_);
v___x_3376_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17));
v___x_3377_ = lean_string_append(v___x_3375_, v___x_3376_);
v___x_3378_ = lean_string_append(v___x_3377_, v___x_3374_);
lean_dec_ref(v___x_3374_);
v___x_3379_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18));
v___x_3380_ = lean_string_append(v___x_3378_, v___x_3379_);
v___y_3309_ = v___y_3353_;
v___y_3310_ = v___x_3380_;
goto v___jp_3308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___boxed(lean_object* v_attrName_3387_, lean_object* v_minIndexable_3388_, lean_object* v_showInfo_3389_, lean_object* v_ext_3390_, lean_object* v_ref_3391_, lean_object* v_a_3392_){
_start:
{
uint8_t v_minIndexable_boxed_3393_; uint8_t v_showInfo_boxed_3394_; lean_object* v_res_3395_; 
v_minIndexable_boxed_3393_ = lean_unbox(v_minIndexable_3388_);
v_showInfo_boxed_3394_ = lean_unbox(v_showInfo_3389_);
v_res_3395_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_3387_, v_minIndexable_boxed_3393_, v_showInfo_boxed_3394_, v_ext_3390_, v_ref_3391_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0(lean_object* v_00_u03b1_3396_, lean_object* v_msg_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_){
_start:
{
lean_object* v___x_3403_; 
v___x_3403_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v_msg_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_);
return v___x_3403_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___boxed(lean_object* v_00_u03b1_3404_, lean_object* v_msg_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_){
_start:
{
lean_object* v_res_3411_; 
v_res_3411_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0(v_00_u03b1_3404_, v_msg_3405_, v___y_3406_, v___y_3407_, v___y_3408_, v___y_3409_);
lean_dec(v___y_3409_);
lean_dec_ref(v___y_3408_);
lean_dec(v___y_3407_);
lean_dec_ref(v___y_3406_);
return v_res_3411_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1(lean_object* v_ext_3412_, uint8_t v_attrKind_3413_, uint8_t v_showInfo_3414_, uint8_t v_minIndexable_3415_, lean_object* v_as_3416_, lean_object* v_as_x27_3417_, lean_object* v_b_3418_, lean_object* v_a_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_){
_start:
{
lean_object* v___x_3425_; 
v___x_3425_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_3412_, v_attrKind_3413_, v_showInfo_3414_, v_minIndexable_3415_, v_as_x27_3417_, v_b_3418_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_);
return v___x_3425_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___boxed(lean_object* v_ext_3426_, lean_object* v_attrKind_3427_, lean_object* v_showInfo_3428_, lean_object* v_minIndexable_3429_, lean_object* v_as_3430_, lean_object* v_as_x27_3431_, lean_object* v_b_3432_, lean_object* v_a_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_){
_start:
{
uint8_t v_attrKind_boxed_3439_; uint8_t v_showInfo_boxed_3440_; uint8_t v_minIndexable_boxed_3441_; lean_object* v_res_3442_; 
v_attrKind_boxed_3439_ = lean_unbox(v_attrKind_3427_);
v_showInfo_boxed_3440_ = lean_unbox(v_showInfo_3428_);
v_minIndexable_boxed_3441_ = lean_unbox(v_minIndexable_3429_);
v_res_3442_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1(v_ext_3426_, v_attrKind_boxed_3439_, v_showInfo_boxed_3440_, v_minIndexable_boxed_3441_, v_as_3430_, v_as_x27_3431_, v_b_3432_, v_a_3433_, v___y_3434_, v___y_3435_, v___y_3436_, v___y_3437_);
lean_dec(v_as_3430_);
return v_res_3442_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7(lean_object* v_00_u03b1_3443_, lean_object* v_x_3444_, uint8_t v_isExporting_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_){
_start:
{
lean_object* v___x_3451_; 
v___x_3451_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(v_x_3444_, v_isExporting_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_);
return v___x_3451_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___boxed(lean_object* v_00_u03b1_3452_, lean_object* v_x_3453_, lean_object* v_isExporting_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_){
_start:
{
uint8_t v_isExporting_boxed_3460_; lean_object* v_res_3461_; 
v_isExporting_boxed_3460_ = lean_unbox(v_isExporting_3454_);
v_res_3461_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7(v_00_u03b1_3452_, v_x_3453_, v_isExporting_boxed_3460_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
return v_res_3461_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3(lean_object* v_00_u03b1_3462_, lean_object* v_x_3463_, uint8_t v_when_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_){
_start:
{
lean_object* v___x_3470_; 
v___x_3470_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(v_x_3463_, v_when_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_);
return v___x_3470_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___boxed(lean_object* v_00_u03b1_3471_, lean_object* v_x_3472_, lean_object* v_when_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_){
_start:
{
uint8_t v_when_boxed_3479_; lean_object* v_res_3480_; 
v_when_boxed_3479_ = lean_unbox(v_when_3473_);
v_res_3480_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3(v_00_u03b1_3471_, v_x_3472_, v_when_boxed_3479_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_);
return v_res_3480_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5(lean_object* v_cls_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_){
_start:
{
lean_object* v___x_3487_; 
v___x_3487_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg(v_cls_3481_, v___y_3484_);
return v___x_3487_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___boxed(lean_object* v_cls_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_){
_start:
{
lean_object* v_res_3494_; 
v_res_3494_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5(v_cls_3488_, v___y_3489_, v___y_3490_, v___y_3491_, v___y_3492_);
lean_dec(v___y_3492_);
lean_dec_ref(v___y_3491_);
lean_dec(v___y_3490_);
lean_dec_ref(v___y_3489_);
return v_res_3494_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5(lean_object* v_00_u03b2_3495_, lean_object* v_m_3496_, lean_object* v_a_3497_){
_start:
{
lean_object* v___x_3498_; 
v___x_3498_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v_m_3496_, v_a_3497_);
return v___x_3498_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___boxed(lean_object* v_00_u03b2_3499_, lean_object* v_m_3500_, lean_object* v_a_3501_){
_start:
{
lean_object* v_res_3502_; 
v_res_3502_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5(v_00_u03b2_3499_, v_m_3500_, v_a_3501_);
lean_dec(v_a_3501_);
lean_dec_ref(v_m_3500_);
return v_res_3502_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_3503_, lean_object* v_x_3504_, lean_object* v_x_3505_){
_start:
{
uint8_t v___x_3506_; 
v___x_3506_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(v_x_3504_, v_x_3505_);
return v___x_3506_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_3507_, lean_object* v_x_3508_, lean_object* v_x_3509_){
_start:
{
uint8_t v_res_3510_; lean_object* v_r_3511_; 
v_res_3510_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4(v_00_u03b2_3507_, v_x_3508_, v_x_3509_);
lean_dec_ref(v_x_3509_);
v_r_3511_ = lean_box(v_res_3510_);
return v_r_3511_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9(lean_object* v_00_u03b2_3512_, lean_object* v_a_3513_, lean_object* v_x_3514_){
_start:
{
lean_object* v___x_3515_; 
v___x_3515_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg(v_a_3513_, v_x_3514_);
return v___x_3515_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___boxed(lean_object* v_00_u03b2_3516_, lean_object* v_a_3517_, lean_object* v_x_3518_){
_start:
{
lean_object* v_res_3519_; 
v_res_3519_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9(v_00_u03b2_3516_, v_a_3517_, v_x_3518_);
lean_dec(v_x_3518_);
lean_dec(v_a_3517_);
return v_res_3519_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7(lean_object* v_00_u03b2_3520_, lean_object* v_x_3521_, size_t v_x_3522_, lean_object* v_x_3523_){
_start:
{
uint8_t v___x_3524_; 
v___x_3524_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(v_x_3521_, v_x_3522_, v_x_3523_);
return v___x_3524_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___boxed(lean_object* v_00_u03b2_3525_, lean_object* v_x_3526_, lean_object* v_x_3527_, lean_object* v_x_3528_){
_start:
{
size_t v_x_16948__boxed_3529_; uint8_t v_res_3530_; lean_object* v_r_3531_; 
v_x_16948__boxed_3529_ = lean_unbox_usize(v_x_3527_);
lean_dec(v_x_3527_);
v_res_3530_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7(v_00_u03b2_3525_, v_x_3526_, v_x_16948__boxed_3529_, v_x_3528_);
lean_dec_ref(v_x_3528_);
v_r_3531_ = lean_box(v_res_3530_);
return v_r_3531_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__11(lean_object* v_00_u03b2_3532_, lean_object* v_keys_3533_, lean_object* v_vals_3534_, lean_object* v_heq_3535_, lean_object* v_i_3536_, lean_object* v_k_3537_){
_start:
{
uint8_t v___x_3538_; 
v___x_3538_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__11___redArg(v_keys_3533_, v_i_3536_, v_k_3537_);
return v___x_3538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__11___boxed(lean_object* v_00_u03b2_3539_, lean_object* v_keys_3540_, lean_object* v_vals_3541_, lean_object* v_heq_3542_, lean_object* v_i_3543_, lean_object* v_k_3544_){
_start:
{
uint8_t v_res_3545_; lean_object* v_r_3546_; 
v_res_3545_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__11(v_00_u03b2_3539_, v_keys_3540_, v_vals_3541_, v_heq_3542_, v_i_3543_, v_k_3544_);
lean_dec_ref(v_k_3544_);
lean_dec_ref(v_vals_3541_);
lean_dec_ref(v_keys_3540_);
v_r_3546_ = lean_box(v_res_3545_);
return v_r_3546_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3547_ = lean_box(0);
v___x_3548_ = lean_unsigned_to_nat(16u);
v___x_3549_ = lean_mk_array(v___x_3548_, v___x_3547_);
return v___x_3549_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3550_ = lean_obj_once(&l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_, &l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once, _init_l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_);
v___x_3551_ = lean_unsigned_to_nat(0u);
v___x_3552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3551_);
lean_ctor_set(v___x_3552_, 1, v___x_3550_);
return v___x_3552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; 
v___x_3554_ = lean_obj_once(&l_Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_, &l_Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once, _init_l_Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_);
v___x_3555_ = lean_st_mk_ref(v___x_3554_);
v___x_3556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3556_, 0, v___x_3555_);
return v___x_3556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2____boxed(lean_object* v_a_3557_){
_start:
{
lean_object* v_res_3558_; 
v_res_3558_ = l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_();
return v_res_3558_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_cls_3559_, lean_object* v___y_3560_){
_start:
{
lean_object* v_options_3562_; uint8_t v_hasTrace_3563_; 
v_options_3562_ = lean_ctor_get(v___y_3560_, 2);
v_hasTrace_3563_ = lean_ctor_get_uint8(v_options_3562_, sizeof(void*)*1);
if (v_hasTrace_3563_ == 0)
{
lean_object* v___x_3564_; lean_object* v___x_3565_; 
lean_dec(v_cls_3559_);
v___x_3564_ = lean_box(v_hasTrace_3563_);
v___x_3565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3565_, 0, v___x_3564_);
return v___x_3565_;
}
else
{
lean_object* v_inheritedTraceOptions_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; uint8_t v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; 
v_inheritedTraceOptions_3566_ = lean_ctor_get(v___y_3560_, 13);
v___x_3567_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg___closed__1));
v___x_3568_ = l_Lean_Name_append(v___x_3567_, v_cls_3559_);
v___x_3569_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3566_, v_options_3562_, v___x_3568_);
lean_dec(v___x_3568_);
v___x_3570_ = lean_box(v___x_3569_);
v___x_3571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3571_, 0, v___x_3570_);
return v___x_3571_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_cls_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_){
_start:
{
lean_object* v_res_3575_; 
v_res_3575_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___redArg(v_cls_3572_, v___y_3573_);
lean_dec_ref(v___y_3573_);
return v_res_3575_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__2(lean_object* v_cls_3576_, lean_object* v_msg_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_){
_start:
{
lean_object* v_ref_3581_; lean_object* v___x_3582_; lean_object* v_a_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3627_; 
v_ref_3581_ = lean_ctor_get(v___y_3578_, 5);
v___x_3582_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(v_msg_3577_, v___y_3578_, v___y_3579_);
v_a_3583_ = lean_ctor_get(v___x_3582_, 0);
v_isSharedCheck_3627_ = !lean_is_exclusive(v___x_3582_);
if (v_isSharedCheck_3627_ == 0)
{
v___x_3585_ = v___x_3582_;
v_isShared_3586_ = v_isSharedCheck_3627_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_a_3583_);
lean_dec(v___x_3582_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3627_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3587_; lean_object* v_traceState_3588_; lean_object* v_env_3589_; lean_object* v_nextMacroScope_3590_; lean_object* v_ngen_3591_; lean_object* v_auxDeclNGen_3592_; lean_object* v_cache_3593_; lean_object* v_messages_3594_; lean_object* v_infoState_3595_; lean_object* v_snapshotTasks_3596_; lean_object* v___x_3598_; uint8_t v_isShared_3599_; uint8_t v_isSharedCheck_3626_; 
v___x_3587_ = lean_st_ref_take(v___y_3579_);
v_traceState_3588_ = lean_ctor_get(v___x_3587_, 4);
v_env_3589_ = lean_ctor_get(v___x_3587_, 0);
v_nextMacroScope_3590_ = lean_ctor_get(v___x_3587_, 1);
v_ngen_3591_ = lean_ctor_get(v___x_3587_, 2);
v_auxDeclNGen_3592_ = lean_ctor_get(v___x_3587_, 3);
v_cache_3593_ = lean_ctor_get(v___x_3587_, 5);
v_messages_3594_ = lean_ctor_get(v___x_3587_, 6);
v_infoState_3595_ = lean_ctor_get(v___x_3587_, 7);
v_snapshotTasks_3596_ = lean_ctor_get(v___x_3587_, 8);
v_isSharedCheck_3626_ = !lean_is_exclusive(v___x_3587_);
if (v_isSharedCheck_3626_ == 0)
{
v___x_3598_ = v___x_3587_;
v_isShared_3599_ = v_isSharedCheck_3626_;
goto v_resetjp_3597_;
}
else
{
lean_inc(v_snapshotTasks_3596_);
lean_inc(v_infoState_3595_);
lean_inc(v_messages_3594_);
lean_inc(v_cache_3593_);
lean_inc(v_traceState_3588_);
lean_inc(v_auxDeclNGen_3592_);
lean_inc(v_ngen_3591_);
lean_inc(v_nextMacroScope_3590_);
lean_inc(v_env_3589_);
lean_dec(v___x_3587_);
v___x_3598_ = lean_box(0);
v_isShared_3599_ = v_isSharedCheck_3626_;
goto v_resetjp_3597_;
}
v_resetjp_3597_:
{
uint64_t v_tid_3600_; lean_object* v_traces_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3625_; 
v_tid_3600_ = lean_ctor_get_uint64(v_traceState_3588_, sizeof(void*)*1);
v_traces_3601_ = lean_ctor_get(v_traceState_3588_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v_traceState_3588_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3603_ = v_traceState_3588_;
v_isShared_3604_ = v_isSharedCheck_3625_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_traces_3601_);
lean_dec(v_traceState_3588_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3625_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v___x_3605_; double v___x_3606_; uint8_t v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3615_; 
v___x_3605_ = lean_box(0);
v___x_3606_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0);
v___x_3607_ = 0;
v___x_3608_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__1));
v___x_3609_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3609_, 0, v_cls_3576_);
lean_ctor_set(v___x_3609_, 1, v___x_3605_);
lean_ctor_set(v___x_3609_, 2, v___x_3608_);
lean_ctor_set_float(v___x_3609_, sizeof(void*)*3, v___x_3606_);
lean_ctor_set_float(v___x_3609_, sizeof(void*)*3 + 8, v___x_3606_);
lean_ctor_set_uint8(v___x_3609_, sizeof(void*)*3 + 16, v___x_3607_);
v___x_3610_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__2));
v___x_3611_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3609_);
lean_ctor_set(v___x_3611_, 1, v_a_3583_);
lean_ctor_set(v___x_3611_, 2, v___x_3610_);
lean_inc(v_ref_3581_);
v___x_3612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3612_, 0, v_ref_3581_);
lean_ctor_set(v___x_3612_, 1, v___x_3611_);
v___x_3613_ = l_Lean_PersistentArray_push___redArg(v_traces_3601_, v___x_3612_);
if (v_isShared_3604_ == 0)
{
lean_ctor_set(v___x_3603_, 0, v___x_3613_);
v___x_3615_ = v___x_3603_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v___x_3613_);
lean_ctor_set_uint64(v_reuseFailAlloc_3624_, sizeof(void*)*1, v_tid_3600_);
v___x_3615_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
lean_object* v___x_3617_; 
if (v_isShared_3599_ == 0)
{
lean_ctor_set(v___x_3598_, 4, v___x_3615_);
v___x_3617_ = v___x_3598_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_env_3589_);
lean_ctor_set(v_reuseFailAlloc_3623_, 1, v_nextMacroScope_3590_);
lean_ctor_set(v_reuseFailAlloc_3623_, 2, v_ngen_3591_);
lean_ctor_set(v_reuseFailAlloc_3623_, 3, v_auxDeclNGen_3592_);
lean_ctor_set(v_reuseFailAlloc_3623_, 4, v___x_3615_);
lean_ctor_set(v_reuseFailAlloc_3623_, 5, v_cache_3593_);
lean_ctor_set(v_reuseFailAlloc_3623_, 6, v_messages_3594_);
lean_ctor_set(v_reuseFailAlloc_3623_, 7, v_infoState_3595_);
lean_ctor_set(v_reuseFailAlloc_3623_, 8, v_snapshotTasks_3596_);
v___x_3617_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3621_; 
v___x_3618_ = lean_st_ref_set(v___y_3579_, v___x_3617_);
v___x_3619_ = lean_box(0);
if (v_isShared_3586_ == 0)
{
lean_ctor_set(v___x_3585_, 0, v___x_3619_);
v___x_3621_ = v___x_3585_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v___x_3619_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_cls_3628_, lean_object* v_msg_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_){
_start:
{
lean_object* v_res_3633_; 
v_res_3633_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__2(v_cls_3628_, v_msg_3629_, v___y_3630_, v___y_3631_);
lean_dec(v___y_3631_);
lean_dec_ref(v___y_3630_);
return v_res_3633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(lean_object* v_mod_3634_, uint8_t v_isMeta_3635_, lean_object* v_hint_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_){
_start:
{
lean_object* v___x_3640_; lean_object* v_env_3641_; uint8_t v_isExporting_3642_; lean_object* v___x_3643_; lean_object* v_env_3644_; lean_object* v___x_3645_; lean_object* v_entry_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___y_3651_; lean_object* v___x_3676_; uint8_t v___x_3677_; 
v___x_3640_ = lean_st_ref_get(v___y_3638_);
v_env_3641_ = lean_ctor_get(v___x_3640_, 0);
lean_inc_ref(v_env_3641_);
lean_dec(v___x_3640_);
v_isExporting_3642_ = lean_ctor_get_uint8(v_env_3641_, sizeof(void*)*8);
lean_dec_ref(v_env_3641_);
v___x_3643_ = lean_st_ref_get(v___y_3638_);
v_env_3644_ = lean_ctor_get(v___x_3643_, 0);
lean_inc_ref(v_env_3644_);
lean_dec(v___x_3643_);
v___x_3645_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2);
lean_inc(v_mod_3634_);
v_entry_3646_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3646_, 0, v_mod_3634_);
lean_ctor_set_uint8(v_entry_3646_, sizeof(void*)*1, v_isExporting_3642_);
lean_ctor_set_uint8(v_entry_3646_, sizeof(void*)*1 + 1, v_isMeta_3635_);
v___x_3647_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_3648_ = lean_box(1);
v___x_3649_ = lean_box(0);
v___x_3676_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3645_, v___x_3647_, v_env_3644_, v___x_3648_, v___x_3649_);
v___x_3677_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(v___x_3676_, v_entry_3646_);
if (v___x_3677_ == 0)
{
lean_object* v_cls_3678_; lean_object* v___x_3679_; lean_object* v_a_3680_; lean_object* v___y_3682_; lean_object* v___y_3683_; lean_object* v___y_3687_; lean_object* v___y_3688_; uint8_t v___x_3700_; 
v_cls_3678_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4));
v___x_3679_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___redArg(v_cls_3678_, v___y_3637_);
v_a_3680_ = lean_ctor_get(v___x_3679_, 0);
lean_inc(v_a_3680_);
lean_dec_ref(v___x_3679_);
v___x_3700_ = lean_unbox(v_a_3680_);
lean_dec(v_a_3680_);
if (v___x_3700_ == 0)
{
lean_dec(v_hint_3636_);
lean_dec(v_mod_3634_);
v___y_3651_ = v___y_3638_;
goto v___jp_3650_;
}
else
{
lean_object* v___x_3701_; lean_object* v___y_3703_; 
v___x_3701_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11);
if (v_isExporting_3642_ == 0)
{
lean_object* v___x_3710_; 
v___x_3710_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16));
v___y_3703_ = v___x_3710_;
goto v___jp_3702_;
}
else
{
lean_object* v___x_3711_; 
v___x_3711_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17));
v___y_3703_ = v___x_3711_;
goto v___jp_3702_;
}
v___jp_3702_:
{
lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; 
v___x_3704_ = l_Lean_stringToMessageData(v___y_3703_);
v___x_3705_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3705_, 0, v___x_3701_);
lean_ctor_set(v___x_3705_, 1, v___x_3704_);
v___x_3706_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13);
v___x_3707_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3707_, 0, v___x_3705_);
lean_ctor_set(v___x_3707_, 1, v___x_3706_);
if (v_isMeta_3635_ == 0)
{
lean_object* v___x_3708_; 
v___x_3708_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14));
v___y_3687_ = v___x_3707_;
v___y_3688_ = v___x_3708_;
goto v___jp_3686_;
}
else
{
lean_object* v___x_3709_; 
v___x_3709_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15));
v___y_3687_ = v___x_3707_;
v___y_3688_ = v___x_3709_;
goto v___jp_3686_;
}
}
}
v___jp_3681_:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; 
v___x_3684_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3684_, 0, v___y_3682_);
lean_ctor_set(v___x_3684_, 1, v___y_3683_);
v___x_3685_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__2(v_cls_3678_, v___x_3684_, v___y_3637_, v___y_3638_);
if (lean_obj_tag(v___x_3685_) == 0)
{
lean_dec_ref(v___x_3685_);
v___y_3651_ = v___y_3638_;
goto v___jp_3650_;
}
else
{
lean_dec_ref(v_entry_3646_);
return v___x_3685_;
}
}
v___jp_3686_:
{
lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; uint8_t v___x_3695_; 
v___x_3689_ = l_Lean_stringToMessageData(v___y_3688_);
v___x_3690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3690_, 0, v___y_3687_);
lean_ctor_set(v___x_3690_, 1, v___x_3689_);
v___x_3691_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6);
v___x_3692_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3692_, 0, v___x_3690_);
lean_ctor_set(v___x_3692_, 1, v___x_3691_);
v___x_3693_ = l_Lean_MessageData_ofName(v_mod_3634_);
v___x_3694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3694_, 0, v___x_3692_);
lean_ctor_set(v___x_3694_, 1, v___x_3693_);
v___x_3695_ = l_Lean_Name_isAnonymous(v_hint_3636_);
if (v___x_3695_ == 0)
{
lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; 
v___x_3696_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8);
v___x_3697_ = l_Lean_MessageData_ofName(v_hint_3636_);
v___x_3698_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3698_, 0, v___x_3696_);
lean_ctor_set(v___x_3698_, 1, v___x_3697_);
v___y_3682_ = v___x_3694_;
v___y_3683_ = v___x_3698_;
goto v___jp_3681_;
}
else
{
lean_object* v___x_3699_; 
lean_dec(v_hint_3636_);
v___x_3699_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9);
v___y_3682_ = v___x_3694_;
v___y_3683_ = v___x_3699_;
goto v___jp_3681_;
}
}
}
else
{
lean_object* v___x_3712_; lean_object* v___x_3713_; 
lean_dec_ref(v_entry_3646_);
lean_dec(v_hint_3636_);
lean_dec(v_mod_3634_);
v___x_3712_ = lean_box(0);
v___x_3713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3712_);
return v___x_3713_;
}
v___jp_3650_:
{
lean_object* v___x_3652_; lean_object* v_toEnvExtension_3653_; lean_object* v_env_3654_; lean_object* v_nextMacroScope_3655_; lean_object* v_ngen_3656_; lean_object* v_auxDeclNGen_3657_; lean_object* v_traceState_3658_; lean_object* v_messages_3659_; lean_object* v_infoState_3660_; lean_object* v_snapshotTasks_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3674_; 
v___x_3652_ = lean_st_ref_take(v___y_3651_);
v_toEnvExtension_3653_ = lean_ctor_get(v___x_3647_, 0);
lean_inc_ref(v_toEnvExtension_3653_);
v_env_3654_ = lean_ctor_get(v___x_3652_, 0);
v_nextMacroScope_3655_ = lean_ctor_get(v___x_3652_, 1);
v_ngen_3656_ = lean_ctor_get(v___x_3652_, 2);
v_auxDeclNGen_3657_ = lean_ctor_get(v___x_3652_, 3);
v_traceState_3658_ = lean_ctor_get(v___x_3652_, 4);
v_messages_3659_ = lean_ctor_get(v___x_3652_, 6);
v_infoState_3660_ = lean_ctor_get(v___x_3652_, 7);
v_snapshotTasks_3661_ = lean_ctor_get(v___x_3652_, 8);
v_isSharedCheck_3674_ = !lean_is_exclusive(v___x_3652_);
if (v_isSharedCheck_3674_ == 0)
{
lean_object* v_unused_3675_; 
v_unused_3675_ = lean_ctor_get(v___x_3652_, 5);
lean_dec(v_unused_3675_);
v___x_3663_ = v___x_3652_;
v_isShared_3664_ = v_isSharedCheck_3674_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_snapshotTasks_3661_);
lean_inc(v_infoState_3660_);
lean_inc(v_messages_3659_);
lean_inc(v_traceState_3658_);
lean_inc(v_auxDeclNGen_3657_);
lean_inc(v_ngen_3656_);
lean_inc(v_nextMacroScope_3655_);
lean_inc(v_env_3654_);
lean_dec(v___x_3652_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3674_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
lean_object* v_asyncMode_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3669_; 
v_asyncMode_3665_ = lean_ctor_get(v_toEnvExtension_3653_, 2);
lean_inc(v_asyncMode_3665_);
lean_dec_ref(v_toEnvExtension_3653_);
v___x_3666_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_3647_, v_env_3654_, v_entry_3646_, v_asyncMode_3665_, v___x_3649_);
lean_dec(v_asyncMode_3665_);
v___x_3667_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__2);
if (v_isShared_3664_ == 0)
{
lean_ctor_set(v___x_3663_, 5, v___x_3667_);
lean_ctor_set(v___x_3663_, 0, v___x_3666_);
v___x_3669_ = v___x_3663_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3673_; 
v_reuseFailAlloc_3673_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3673_, 0, v___x_3666_);
lean_ctor_set(v_reuseFailAlloc_3673_, 1, v_nextMacroScope_3655_);
lean_ctor_set(v_reuseFailAlloc_3673_, 2, v_ngen_3656_);
lean_ctor_set(v_reuseFailAlloc_3673_, 3, v_auxDeclNGen_3657_);
lean_ctor_set(v_reuseFailAlloc_3673_, 4, v_traceState_3658_);
lean_ctor_set(v_reuseFailAlloc_3673_, 5, v___x_3667_);
lean_ctor_set(v_reuseFailAlloc_3673_, 6, v_messages_3659_);
lean_ctor_set(v_reuseFailAlloc_3673_, 7, v_infoState_3660_);
lean_ctor_set(v_reuseFailAlloc_3673_, 8, v_snapshotTasks_3661_);
v___x_3669_ = v_reuseFailAlloc_3673_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3670_ = lean_st_ref_set(v___y_3651_, v___x_3669_);
v___x_3671_ = lean_box(0);
v___x_3672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3672_, 0, v___x_3671_);
return v___x_3672_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0___boxed(lean_object* v_mod_3714_, lean_object* v_isMeta_3715_, lean_object* v_hint_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_){
_start:
{
uint8_t v_isMeta_boxed_3720_; lean_object* v_res_3721_; 
v_isMeta_boxed_3720_ = lean_unbox(v_isMeta_3715_);
v_res_3721_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(v_mod_3714_, v_isMeta_boxed_3720_, v_hint_3716_, v___y_3717_, v___y_3718_);
lean_dec(v___y_3718_);
lean_dec_ref(v___y_3717_);
return v_res_3721_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(lean_object* v___x_3722_, lean_object* v_declName_3723_, lean_object* v_as_3724_, size_t v_sz_3725_, size_t v_i_3726_, lean_object* v_b_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_){
_start:
{
uint8_t v___x_3731_; 
v___x_3731_ = lean_usize_dec_lt(v_i_3726_, v_sz_3725_);
if (v___x_3731_ == 0)
{
lean_object* v___x_3732_; 
lean_dec(v_declName_3723_);
v___x_3732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3732_, 0, v_b_3727_);
return v___x_3732_;
}
else
{
lean_object* v___x_3733_; lean_object* v_modules_3734_; lean_object* v___x_3735_; lean_object* v_a_3736_; lean_object* v___x_3737_; lean_object* v_toImport_3738_; lean_object* v_module_3739_; uint8_t v___x_3740_; lean_object* v___x_3741_; 
v___x_3733_ = l_Lean_Environment_header(v___x_3722_);
v_modules_3734_ = lean_ctor_get(v___x_3733_, 3);
lean_inc_ref(v_modules_3734_);
lean_dec_ref(v___x_3733_);
v___x_3735_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_3736_ = lean_array_uget_borrowed(v_as_3724_, v_i_3726_);
v___x_3737_ = lean_array_get(v___x_3735_, v_modules_3734_, v_a_3736_);
lean_dec_ref(v_modules_3734_);
v_toImport_3738_ = lean_ctor_get(v___x_3737_, 0);
lean_inc_ref(v_toImport_3738_);
lean_dec(v___x_3737_);
v_module_3739_ = lean_ctor_get(v_toImport_3738_, 0);
lean_inc(v_module_3739_);
lean_dec_ref(v_toImport_3738_);
v___x_3740_ = 0;
lean_inc(v_declName_3723_);
v___x_3741_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(v_module_3739_, v___x_3740_, v_declName_3723_, v___y_3728_, v___y_3729_);
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_object* v___x_3742_; size_t v___x_3743_; size_t v___x_3744_; 
lean_dec_ref(v___x_3741_);
v___x_3742_ = lean_box(0);
v___x_3743_ = ((size_t)1ULL);
v___x_3744_ = lean_usize_add(v_i_3726_, v___x_3743_);
v_i_3726_ = v___x_3744_;
v_b_3727_ = v___x_3742_;
goto _start;
}
else
{
lean_dec(v_declName_3723_);
return v___x_3741_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1___boxed(lean_object* v___x_3746_, lean_object* v_declName_3747_, lean_object* v_as_3748_, lean_object* v_sz_3749_, lean_object* v_i_3750_, lean_object* v_b_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_){
_start:
{
size_t v_sz_boxed_3755_; size_t v_i_boxed_3756_; lean_object* v_res_3757_; 
v_sz_boxed_3755_ = lean_unbox_usize(v_sz_3749_);
lean_dec(v_sz_3749_);
v_i_boxed_3756_ = lean_unbox_usize(v_i_3750_);
lean_dec(v_i_3750_);
v_res_3757_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(v___x_3746_, v_declName_3747_, v_as_3748_, v_sz_boxed_3755_, v_i_boxed_3756_, v_b_3751_, v___y_3752_, v___y_3753_);
lean_dec(v___y_3753_);
lean_dec_ref(v___y_3752_);
lean_dec_ref(v_as_3748_);
lean_dec_ref(v___x_3746_);
return v_res_3757_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(lean_object* v_declName_3758_, uint8_t v_isMeta_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_){
_start:
{
lean_object* v___x_3763_; lean_object* v_env_3767_; lean_object* v___y_3769_; lean_object* v___x_3782_; 
v___x_3763_ = lean_st_ref_get(v___y_3761_);
v_env_3767_ = lean_ctor_get(v___x_3763_, 0);
lean_inc_ref(v_env_3767_);
lean_dec(v___x_3763_);
v___x_3782_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3767_, v_declName_3758_);
if (lean_obj_tag(v___x_3782_) == 0)
{
lean_dec_ref(v_env_3767_);
lean_dec(v_declName_3758_);
goto v___jp_3764_;
}
else
{
lean_object* v_val_3783_; lean_object* v___x_3784_; lean_object* v_modules_3785_; lean_object* v___x_3786_; uint8_t v___x_3787_; 
v_val_3783_ = lean_ctor_get(v___x_3782_, 0);
lean_inc(v_val_3783_);
lean_dec_ref(v___x_3782_);
v___x_3784_ = l_Lean_Environment_header(v_env_3767_);
v_modules_3785_ = lean_ctor_get(v___x_3784_, 3);
lean_inc_ref(v_modules_3785_);
lean_dec_ref(v___x_3784_);
v___x_3786_ = lean_array_get_size(v_modules_3785_);
v___x_3787_ = lean_nat_dec_lt(v_val_3783_, v___x_3786_);
if (v___x_3787_ == 0)
{
lean_dec_ref(v_modules_3785_);
lean_dec(v_val_3783_);
lean_dec_ref(v_env_3767_);
lean_dec(v_declName_3758_);
goto v___jp_3764_;
}
else
{
lean_object* v___x_3788_; lean_object* v_env_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; uint8_t v___y_3793_; 
v___x_3788_ = lean_st_ref_get(v___y_3761_);
v_env_3789_ = lean_ctor_get(v___x_3788_, 0);
lean_inc_ref(v_env_3789_);
lean_dec(v___x_3788_);
v___x_3790_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__2, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__2_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__2);
v___x_3791_ = lean_array_fget(v_modules_3785_, v_val_3783_);
lean_dec(v_val_3783_);
lean_dec_ref(v_modules_3785_);
if (v_isMeta_3759_ == 0)
{
lean_dec_ref(v_env_3789_);
v___y_3793_ = v_isMeta_3759_;
goto v___jp_3792_;
}
else
{
uint8_t v___x_3804_; 
lean_inc(v_declName_3758_);
v___x_3804_ = l_Lean_isMarkedMeta(v_env_3789_, v_declName_3758_);
if (v___x_3804_ == 0)
{
v___y_3793_ = v_isMeta_3759_;
goto v___jp_3792_;
}
else
{
uint8_t v___x_3805_; 
v___x_3805_ = 0;
v___y_3793_ = v___x_3805_;
goto v___jp_3792_;
}
}
v___jp_3792_:
{
lean_object* v_toImport_3794_; lean_object* v_module_3795_; lean_object* v___x_3796_; 
v_toImport_3794_ = lean_ctor_get(v___x_3791_, 0);
lean_inc_ref(v_toImport_3794_);
lean_dec(v___x_3791_);
v_module_3795_ = lean_ctor_get(v_toImport_3794_, 0);
lean_inc(v_module_3795_);
lean_dec_ref(v_toImport_3794_);
lean_inc(v_declName_3758_);
v___x_3796_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(v_module_3795_, v___y_3793_, v_declName_3758_, v___y_3760_, v___y_3761_);
if (lean_obj_tag(v___x_3796_) == 0)
{
lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; 
lean_dec_ref(v___x_3796_);
v___x_3797_ = l_Lean_indirectModUseExt;
v___x_3798_ = lean_box(1);
v___x_3799_ = lean_box(0);
lean_inc_ref(v_env_3767_);
v___x_3800_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3790_, v___x_3797_, v_env_3767_, v___x_3798_, v___x_3799_);
v___x_3801_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v___x_3800_, v_declName_3758_);
lean_dec(v___x_3800_);
if (lean_obj_tag(v___x_3801_) == 0)
{
lean_object* v___x_3802_; 
v___x_3802_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__3));
v___y_3769_ = v___x_3802_;
goto v___jp_3768_;
}
else
{
lean_object* v_val_3803_; 
v_val_3803_ = lean_ctor_get(v___x_3801_, 0);
lean_inc(v_val_3803_);
lean_dec_ref(v___x_3801_);
v___y_3769_ = v_val_3803_;
goto v___jp_3768_;
}
}
else
{
lean_dec_ref(v_env_3767_);
lean_dec(v_declName_3758_);
return v___x_3796_;
}
}
}
}
v___jp_3764_:
{
lean_object* v___x_3765_; lean_object* v___x_3766_; 
v___x_3765_ = lean_box(0);
v___x_3766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3766_, 0, v___x_3765_);
return v___x_3766_;
}
v___jp_3768_:
{
lean_object* v___x_3770_; size_t v_sz_3771_; size_t v___x_3772_; lean_object* v___x_3773_; 
v___x_3770_ = lean_box(0);
v_sz_3771_ = lean_array_size(v___y_3769_);
v___x_3772_ = ((size_t)0ULL);
v___x_3773_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(v_env_3767_, v_declName_3758_, v___y_3769_, v_sz_3771_, v___x_3772_, v___x_3770_, v___y_3760_, v___y_3761_);
lean_dec_ref(v___y_3769_);
lean_dec_ref(v_env_3767_);
if (lean_obj_tag(v___x_3773_) == 0)
{
lean_object* v___x_3775_; uint8_t v_isShared_3776_; uint8_t v_isSharedCheck_3780_; 
v_isSharedCheck_3780_ = !lean_is_exclusive(v___x_3773_);
if (v_isSharedCheck_3780_ == 0)
{
lean_object* v_unused_3781_; 
v_unused_3781_ = lean_ctor_get(v___x_3773_, 0);
lean_dec(v_unused_3781_);
v___x_3775_ = v___x_3773_;
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
else
{
lean_dec(v___x_3773_);
v___x_3775_ = lean_box(0);
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
v_resetjp_3774_:
{
lean_object* v___x_3778_; 
if (v_isShared_3776_ == 0)
{
lean_ctor_set(v___x_3775_, 0, v___x_3770_);
v___x_3778_ = v___x_3775_;
goto v_reusejp_3777_;
}
else
{
lean_object* v_reuseFailAlloc_3779_; 
v_reuseFailAlloc_3779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3779_, 0, v___x_3770_);
v___x_3778_ = v_reuseFailAlloc_3779_;
goto v_reusejp_3777_;
}
v_reusejp_3777_:
{
return v___x_3778_;
}
}
}
else
{
return v___x_3773_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0___boxed(lean_object* v_declName_3806_, lean_object* v_isMeta_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_){
_start:
{
uint8_t v_isMeta_boxed_3811_; lean_object* v_res_3812_; 
v_isMeta_boxed_3811_ = lean_unbox(v_isMeta_3807_);
v_res_3812_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(v_declName_3806_, v_isMeta_boxed_3811_, v___y_3808_, v___y_3809_);
lean_dec(v___y_3809_);
lean_dec_ref(v___y_3808_);
return v_res_3812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f(lean_object* v_attrName_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_){
_start:
{
lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; 
v___x_3817_ = l_Lean_Meta_Grind_extensionMapRef;
v___x_3818_ = lean_st_ref_get(v___x_3817_);
v___x_3819_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v___x_3818_, v_attrName_3813_);
lean_dec(v___x_3818_);
if (lean_obj_tag(v___x_3819_) == 1)
{
lean_object* v_val_3820_; lean_object* v_ext_3821_; lean_object* v_name_3822_; uint8_t v___x_3823_; lean_object* v___x_3824_; 
v_val_3820_ = lean_ctor_get(v___x_3819_, 0);
lean_inc(v_val_3820_);
v_ext_3821_ = lean_ctor_get(v_val_3820_, 1);
lean_inc_ref(v_ext_3821_);
lean_dec(v_val_3820_);
v_name_3822_ = lean_ctor_get(v_ext_3821_, 1);
lean_inc(v_name_3822_);
lean_dec_ref(v_ext_3821_);
v___x_3823_ = 1;
v___x_3824_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(v_name_3822_, v___x_3823_, v_a_3814_, v_a_3815_);
if (lean_obj_tag(v___x_3824_) == 0)
{
lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3831_; 
v_isSharedCheck_3831_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3831_ == 0)
{
lean_object* v_unused_3832_; 
v_unused_3832_ = lean_ctor_get(v___x_3824_, 0);
lean_dec(v_unused_3832_);
v___x_3826_ = v___x_3824_;
v_isShared_3827_ = v_isSharedCheck_3831_;
goto v_resetjp_3825_;
}
else
{
lean_dec(v___x_3824_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3831_;
goto v_resetjp_3825_;
}
v_resetjp_3825_:
{
lean_object* v___x_3829_; 
if (v_isShared_3827_ == 0)
{
lean_ctor_set(v___x_3826_, 0, v___x_3819_);
v___x_3829_ = v___x_3826_;
goto v_reusejp_3828_;
}
else
{
lean_object* v_reuseFailAlloc_3830_; 
v_reuseFailAlloc_3830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3830_, 0, v___x_3819_);
v___x_3829_ = v_reuseFailAlloc_3830_;
goto v_reusejp_3828_;
}
v_reusejp_3828_:
{
return v___x_3829_;
}
}
}
else
{
lean_object* v_a_3833_; lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3840_; 
lean_dec_ref(v___x_3819_);
v_a_3833_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3840_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3840_ == 0)
{
v___x_3835_ = v___x_3824_;
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
else
{
lean_inc(v_a_3833_);
lean_dec(v___x_3824_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v___x_3838_; 
if (v_isShared_3836_ == 0)
{
v___x_3838_ = v___x_3835_;
goto v_reusejp_3837_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v_a_3833_);
v___x_3838_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3837_;
}
v_reusejp_3837_:
{
return v___x_3838_;
}
}
}
}
else
{
lean_object* v___x_3841_; 
v___x_3841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3841_, 0, v___x_3819_);
return v___x_3841_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f___boxed(lean_object* v_attrName_3842_, lean_object* v_a_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_){
_start:
{
lean_object* v_res_3846_; 
v_res_3846_ = l_Lean_Meta_Grind_getExtension_x3f(v_attrName_3842_, v_a_3843_, v_a_3844_);
lean_dec(v_a_3844_);
lean_dec_ref(v_a_3843_);
lean_dec(v_attrName_3842_);
return v_res_3846_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(lean_object* v_cls_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_){
_start:
{
lean_object* v___x_3851_; 
v___x_3851_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___redArg(v_cls_3847_, v___y_3848_);
return v___x_3851_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_cls_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_){
_start:
{
lean_object* v_res_3856_; 
v_res_3856_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(v_cls_3852_, v___y_3853_, v___y_3854_);
lean_dec(v___y_3854_);
lean_dec_ref(v___y_3853_);
return v_res_3856_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_registerAttr___auto__1(void){
_start:
{
lean_object* v___x_3857_; 
v___x_3857_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25);
return v___x_3857_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_3858_, lean_object* v_x_3859_){
_start:
{
if (lean_obj_tag(v_x_3859_) == 0)
{
return v_x_3858_;
}
else
{
lean_object* v_key_3860_; lean_object* v_value_3861_; lean_object* v_tail_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3888_; 
v_key_3860_ = lean_ctor_get(v_x_3859_, 0);
v_value_3861_ = lean_ctor_get(v_x_3859_, 1);
v_tail_3862_ = lean_ctor_get(v_x_3859_, 2);
v_isSharedCheck_3888_ = !lean_is_exclusive(v_x_3859_);
if (v_isSharedCheck_3888_ == 0)
{
v___x_3864_ = v_x_3859_;
v_isShared_3865_ = v_isSharedCheck_3888_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_tail_3862_);
lean_inc(v_value_3861_);
lean_inc(v_key_3860_);
lean_dec(v_x_3859_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3888_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3866_; uint64_t v___y_3868_; 
v___x_3866_ = lean_array_get_size(v_x_3858_);
if (lean_obj_tag(v_key_3860_) == 0)
{
uint64_t v___x_3886_; 
v___x_3886_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0);
v___y_3868_ = v___x_3886_;
goto v___jp_3867_;
}
else
{
uint64_t v_hash_3887_; 
v_hash_3887_ = lean_ctor_get_uint64(v_key_3860_, sizeof(void*)*2);
v___y_3868_ = v_hash_3887_;
goto v___jp_3867_;
}
v___jp_3867_:
{
uint64_t v___x_3869_; uint64_t v___x_3870_; uint64_t v_fold_3871_; uint64_t v___x_3872_; uint64_t v___x_3873_; uint64_t v___x_3874_; size_t v___x_3875_; size_t v___x_3876_; size_t v___x_3877_; size_t v___x_3878_; size_t v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3882_; 
v___x_3869_ = 32ULL;
v___x_3870_ = lean_uint64_shift_right(v___y_3868_, v___x_3869_);
v_fold_3871_ = lean_uint64_xor(v___y_3868_, v___x_3870_);
v___x_3872_ = 16ULL;
v___x_3873_ = lean_uint64_shift_right(v_fold_3871_, v___x_3872_);
v___x_3874_ = lean_uint64_xor(v_fold_3871_, v___x_3873_);
v___x_3875_ = lean_uint64_to_usize(v___x_3874_);
v___x_3876_ = lean_usize_of_nat(v___x_3866_);
v___x_3877_ = ((size_t)1ULL);
v___x_3878_ = lean_usize_sub(v___x_3876_, v___x_3877_);
v___x_3879_ = lean_usize_land(v___x_3875_, v___x_3878_);
v___x_3880_ = lean_array_uget_borrowed(v_x_3858_, v___x_3879_);
lean_inc(v___x_3880_);
if (v_isShared_3865_ == 0)
{
lean_ctor_set(v___x_3864_, 2, v___x_3880_);
v___x_3882_ = v___x_3864_;
goto v_reusejp_3881_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v_key_3860_);
lean_ctor_set(v_reuseFailAlloc_3885_, 1, v_value_3861_);
lean_ctor_set(v_reuseFailAlloc_3885_, 2, v___x_3880_);
v___x_3882_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3881_;
}
v_reusejp_3881_:
{
lean_object* v___x_3883_; 
v___x_3883_ = lean_array_uset(v_x_3858_, v___x_3879_, v___x_3882_);
v_x_3858_ = v___x_3883_;
v_x_3859_ = v_tail_3862_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(lean_object* v_i_3889_, lean_object* v_source_3890_, lean_object* v_target_3891_){
_start:
{
lean_object* v___x_3892_; uint8_t v___x_3893_; 
v___x_3892_ = lean_array_get_size(v_source_3890_);
v___x_3893_ = lean_nat_dec_lt(v_i_3889_, v___x_3892_);
if (v___x_3893_ == 0)
{
lean_dec_ref(v_source_3890_);
lean_dec(v_i_3889_);
return v_target_3891_;
}
else
{
lean_object* v_es_3894_; lean_object* v___x_3895_; lean_object* v_source_3896_; lean_object* v_target_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; 
v_es_3894_ = lean_array_fget(v_source_3890_, v_i_3889_);
v___x_3895_ = lean_box(0);
v_source_3896_ = lean_array_fset(v_source_3890_, v_i_3889_, v___x_3895_);
v_target_3897_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(v_target_3891_, v_es_3894_);
v___x_3898_ = lean_unsigned_to_nat(1u);
v___x_3899_ = lean_nat_add(v_i_3889_, v___x_3898_);
lean_dec(v_i_3889_);
v_i_3889_ = v___x_3899_;
v_source_3890_ = v_source_3896_;
v_target_3891_ = v_target_3897_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(lean_object* v_data_3901_){
_start:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v_nbuckets_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; 
v___x_3902_ = lean_array_get_size(v_data_3901_);
v___x_3903_ = lean_unsigned_to_nat(2u);
v_nbuckets_3904_ = lean_nat_mul(v___x_3902_, v___x_3903_);
v___x_3905_ = lean_unsigned_to_nat(0u);
v___x_3906_ = lean_box(0);
v___x_3907_ = lean_mk_array(v_nbuckets_3904_, v___x_3906_);
v___x_3908_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(v___x_3905_, v_data_3901_, v___x_3907_);
return v___x_3908_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(lean_object* v_a_3909_, lean_object* v_x_3910_){
_start:
{
if (lean_obj_tag(v_x_3910_) == 0)
{
uint8_t v___x_3911_; 
v___x_3911_ = 0;
return v___x_3911_;
}
else
{
lean_object* v_key_3912_; lean_object* v_tail_3913_; uint8_t v___x_3914_; 
v_key_3912_ = lean_ctor_get(v_x_3910_, 0);
v_tail_3913_ = lean_ctor_get(v_x_3910_, 2);
v___x_3914_ = lean_name_eq(v_key_3912_, v_a_3909_);
if (v___x_3914_ == 0)
{
v_x_3910_ = v_tail_3913_;
goto _start;
}
else
{
return v___x_3914_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg___boxed(lean_object* v_a_3916_, lean_object* v_x_3917_){
_start:
{
uint8_t v_res_3918_; lean_object* v_r_3919_; 
v_res_3918_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(v_a_3916_, v_x_3917_);
lean_dec(v_x_3917_);
lean_dec(v_a_3916_);
v_r_3919_ = lean_box(v_res_3918_);
return v_r_3919_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(lean_object* v_a_3920_, lean_object* v_b_3921_, lean_object* v_x_3922_){
_start:
{
if (lean_obj_tag(v_x_3922_) == 0)
{
lean_dec(v_b_3921_);
lean_dec(v_a_3920_);
return v_x_3922_;
}
else
{
lean_object* v_key_3923_; lean_object* v_value_3924_; lean_object* v_tail_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3937_; 
v_key_3923_ = lean_ctor_get(v_x_3922_, 0);
v_value_3924_ = lean_ctor_get(v_x_3922_, 1);
v_tail_3925_ = lean_ctor_get(v_x_3922_, 2);
v_isSharedCheck_3937_ = !lean_is_exclusive(v_x_3922_);
if (v_isSharedCheck_3937_ == 0)
{
v___x_3927_ = v_x_3922_;
v_isShared_3928_ = v_isSharedCheck_3937_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_tail_3925_);
lean_inc(v_value_3924_);
lean_inc(v_key_3923_);
lean_dec(v_x_3922_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3937_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
uint8_t v___x_3929_; 
v___x_3929_ = lean_name_eq(v_key_3923_, v_a_3920_);
if (v___x_3929_ == 0)
{
lean_object* v___x_3930_; lean_object* v___x_3932_; 
v___x_3930_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(v_a_3920_, v_b_3921_, v_tail_3925_);
if (v_isShared_3928_ == 0)
{
lean_ctor_set(v___x_3927_, 2, v___x_3930_);
v___x_3932_ = v___x_3927_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v_key_3923_);
lean_ctor_set(v_reuseFailAlloc_3933_, 1, v_value_3924_);
lean_ctor_set(v_reuseFailAlloc_3933_, 2, v___x_3930_);
v___x_3932_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
return v___x_3932_;
}
}
else
{
lean_object* v___x_3935_; 
lean_dec(v_value_3924_);
lean_dec(v_key_3923_);
if (v_isShared_3928_ == 0)
{
lean_ctor_set(v___x_3927_, 1, v_b_3921_);
lean_ctor_set(v___x_3927_, 0, v_a_3920_);
v___x_3935_ = v___x_3927_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v_a_3920_);
lean_ctor_set(v_reuseFailAlloc_3936_, 1, v_b_3921_);
lean_ctor_set(v_reuseFailAlloc_3936_, 2, v_tail_3925_);
v___x_3935_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
return v___x_3935_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(lean_object* v_m_3938_, lean_object* v_a_3939_, lean_object* v_b_3940_){
_start:
{
lean_object* v_size_3941_; lean_object* v_buckets_3942_; lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_3988_; 
v_size_3941_ = lean_ctor_get(v_m_3938_, 0);
v_buckets_3942_ = lean_ctor_get(v_m_3938_, 1);
v_isSharedCheck_3988_ = !lean_is_exclusive(v_m_3938_);
if (v_isSharedCheck_3988_ == 0)
{
v___x_3944_ = v_m_3938_;
v_isShared_3945_ = v_isSharedCheck_3988_;
goto v_resetjp_3943_;
}
else
{
lean_inc(v_buckets_3942_);
lean_inc(v_size_3941_);
lean_dec(v_m_3938_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_3988_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
lean_object* v___x_3946_; uint64_t v___y_3948_; 
v___x_3946_ = lean_array_get_size(v_buckets_3942_);
if (lean_obj_tag(v_a_3939_) == 0)
{
uint64_t v___x_3986_; 
v___x_3986_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___closed__0);
v___y_3948_ = v___x_3986_;
goto v___jp_3947_;
}
else
{
uint64_t v_hash_3987_; 
v_hash_3987_ = lean_ctor_get_uint64(v_a_3939_, sizeof(void*)*2);
v___y_3948_ = v_hash_3987_;
goto v___jp_3947_;
}
v___jp_3947_:
{
uint64_t v___x_3949_; uint64_t v___x_3950_; uint64_t v_fold_3951_; uint64_t v___x_3952_; uint64_t v___x_3953_; uint64_t v___x_3954_; size_t v___x_3955_; size_t v___x_3956_; size_t v___x_3957_; size_t v___x_3958_; size_t v___x_3959_; lean_object* v_bkt_3960_; uint8_t v___x_3961_; 
v___x_3949_ = 32ULL;
v___x_3950_ = lean_uint64_shift_right(v___y_3948_, v___x_3949_);
v_fold_3951_ = lean_uint64_xor(v___y_3948_, v___x_3950_);
v___x_3952_ = 16ULL;
v___x_3953_ = lean_uint64_shift_right(v_fold_3951_, v___x_3952_);
v___x_3954_ = lean_uint64_xor(v_fold_3951_, v___x_3953_);
v___x_3955_ = lean_uint64_to_usize(v___x_3954_);
v___x_3956_ = lean_usize_of_nat(v___x_3946_);
v___x_3957_ = ((size_t)1ULL);
v___x_3958_ = lean_usize_sub(v___x_3956_, v___x_3957_);
v___x_3959_ = lean_usize_land(v___x_3955_, v___x_3958_);
v_bkt_3960_ = lean_array_uget_borrowed(v_buckets_3942_, v___x_3959_);
v___x_3961_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(v_a_3939_, v_bkt_3960_);
if (v___x_3961_ == 0)
{
lean_object* v___x_3962_; lean_object* v_size_x27_3963_; lean_object* v___x_3964_; lean_object* v_buckets_x27_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; uint8_t v___x_3971_; 
v___x_3962_ = lean_unsigned_to_nat(1u);
v_size_x27_3963_ = lean_nat_add(v_size_3941_, v___x_3962_);
lean_dec(v_size_3941_);
lean_inc(v_bkt_3960_);
v___x_3964_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3964_, 0, v_a_3939_);
lean_ctor_set(v___x_3964_, 1, v_b_3940_);
lean_ctor_set(v___x_3964_, 2, v_bkt_3960_);
v_buckets_x27_3965_ = lean_array_uset(v_buckets_3942_, v___x_3959_, v___x_3964_);
v___x_3966_ = lean_unsigned_to_nat(4u);
v___x_3967_ = lean_nat_mul(v_size_x27_3963_, v___x_3966_);
v___x_3968_ = lean_unsigned_to_nat(3u);
v___x_3969_ = lean_nat_div(v___x_3967_, v___x_3968_);
lean_dec(v___x_3967_);
v___x_3970_ = lean_array_get_size(v_buckets_x27_3965_);
v___x_3971_ = lean_nat_dec_le(v___x_3969_, v___x_3970_);
lean_dec(v___x_3969_);
if (v___x_3971_ == 0)
{
lean_object* v_val_3972_; lean_object* v___x_3974_; 
v_val_3972_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(v_buckets_x27_3965_);
if (v_isShared_3945_ == 0)
{
lean_ctor_set(v___x_3944_, 1, v_val_3972_);
lean_ctor_set(v___x_3944_, 0, v_size_x27_3963_);
v___x_3974_ = v___x_3944_;
goto v_reusejp_3973_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v_size_x27_3963_);
lean_ctor_set(v_reuseFailAlloc_3975_, 1, v_val_3972_);
v___x_3974_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3973_;
}
v_reusejp_3973_:
{
return v___x_3974_;
}
}
else
{
lean_object* v___x_3977_; 
if (v_isShared_3945_ == 0)
{
lean_ctor_set(v___x_3944_, 1, v_buckets_x27_3965_);
lean_ctor_set(v___x_3944_, 0, v_size_x27_3963_);
v___x_3977_ = v___x_3944_;
goto v_reusejp_3976_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v_size_x27_3963_);
lean_ctor_set(v_reuseFailAlloc_3978_, 1, v_buckets_x27_3965_);
v___x_3977_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3976_;
}
v_reusejp_3976_:
{
return v___x_3977_;
}
}
}
else
{
lean_object* v___x_3979_; lean_object* v_buckets_x27_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3984_; 
lean_inc(v_bkt_3960_);
v___x_3979_ = lean_box(0);
v_buckets_x27_3980_ = lean_array_uset(v_buckets_3942_, v___x_3959_, v___x_3979_);
v___x_3981_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(v_a_3939_, v_b_3940_, v_bkt_3960_);
v___x_3982_ = lean_array_uset(v_buckets_x27_3980_, v___x_3959_, v___x_3981_);
if (v_isShared_3945_ == 0)
{
lean_ctor_set(v___x_3944_, 1, v___x_3982_);
v___x_3984_ = v___x_3944_;
goto v_reusejp_3983_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v_size_3941_);
lean_ctor_set(v_reuseFailAlloc_3985_, 1, v___x_3982_);
v___x_3984_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3983_;
}
v_reusejp_3983_:
{
return v___x_3984_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr(lean_object* v_attrName_3989_, lean_object* v_ref_3990_){
_start:
{
lean_object* v___x_3992_; 
lean_inc(v_ref_3990_);
v___x_3992_ = l_Lean_Meta_Grind_mkExtension(v_ref_3990_);
if (lean_obj_tag(v___x_3992_) == 0)
{
lean_object* v_a_3993_; uint8_t v___x_3994_; uint8_t v___x_3995_; lean_object* v___x_3996_; 
v_a_3993_ = lean_ctor_get(v___x_3992_, 0);
lean_inc(v_a_3993_);
lean_dec_ref(v___x_3992_);
v___x_3994_ = 0;
v___x_3995_ = 1;
lean_inc(v_ref_3990_);
lean_inc(v_a_3993_);
lean_inc(v_attrName_3989_);
v___x_3996_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_3989_, v___x_3994_, v___x_3995_, v_a_3993_, v_ref_3990_);
if (lean_obj_tag(v___x_3996_) == 0)
{
lean_object* v___x_3997_; 
lean_dec_ref(v___x_3996_);
lean_inc(v_ref_3990_);
lean_inc(v_a_3993_);
lean_inc(v_attrName_3989_);
v___x_3997_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_3989_, v___x_3994_, v___x_3994_, v_a_3993_, v_ref_3990_);
if (lean_obj_tag(v___x_3997_) == 0)
{
lean_object* v___x_3998_; 
lean_dec_ref(v___x_3997_);
lean_inc(v_ref_3990_);
lean_inc(v_a_3993_);
lean_inc(v_attrName_3989_);
v___x_3998_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_3989_, v___x_3995_, v___x_3995_, v_a_3993_, v_ref_3990_);
if (lean_obj_tag(v___x_3998_) == 0)
{
lean_object* v___x_3999_; 
lean_dec_ref(v___x_3998_);
lean_inc(v_a_3993_);
lean_inc(v_attrName_3989_);
v___x_3999_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_3989_, v___x_3995_, v___x_3994_, v_a_3993_, v_ref_3990_);
if (lean_obj_tag(v___x_3999_) == 0)
{
lean_object* v___x_4001_; uint8_t v_isShared_4002_; uint8_t v_isSharedCheck_4010_; 
v_isSharedCheck_4010_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4010_ == 0)
{
lean_object* v_unused_4011_; 
v_unused_4011_ = lean_ctor_get(v___x_3999_, 0);
lean_dec(v_unused_4011_);
v___x_4001_ = v___x_3999_;
v_isShared_4002_ = v_isSharedCheck_4010_;
goto v_resetjp_4000_;
}
else
{
lean_dec(v___x_3999_);
v___x_4001_ = lean_box(0);
v_isShared_4002_ = v_isSharedCheck_4010_;
goto v_resetjp_4000_;
}
v_resetjp_4000_:
{
lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4008_; 
v___x_4003_ = l_Lean_Meta_Grind_extensionMapRef;
v___x_4004_ = lean_st_ref_take(v___x_4003_);
lean_inc(v_a_3993_);
v___x_4005_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(v___x_4004_, v_attrName_3989_, v_a_3993_);
v___x_4006_ = lean_st_ref_set(v___x_4003_, v___x_4005_);
if (v_isShared_4002_ == 0)
{
lean_ctor_set(v___x_4001_, 0, v_a_3993_);
v___x_4008_ = v___x_4001_;
goto v_reusejp_4007_;
}
else
{
lean_object* v_reuseFailAlloc_4009_; 
v_reuseFailAlloc_4009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4009_, 0, v_a_3993_);
v___x_4008_ = v_reuseFailAlloc_4009_;
goto v_reusejp_4007_;
}
v_reusejp_4007_:
{
return v___x_4008_;
}
}
}
else
{
lean_object* v_a_4012_; lean_object* v___x_4014_; uint8_t v_isShared_4015_; uint8_t v_isSharedCheck_4019_; 
lean_dec(v_a_3993_);
lean_dec(v_attrName_3989_);
v_a_4012_ = lean_ctor_get(v___x_3999_, 0);
v_isSharedCheck_4019_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4019_ == 0)
{
v___x_4014_ = v___x_3999_;
v_isShared_4015_ = v_isSharedCheck_4019_;
goto v_resetjp_4013_;
}
else
{
lean_inc(v_a_4012_);
lean_dec(v___x_3999_);
v___x_4014_ = lean_box(0);
v_isShared_4015_ = v_isSharedCheck_4019_;
goto v_resetjp_4013_;
}
v_resetjp_4013_:
{
lean_object* v___x_4017_; 
if (v_isShared_4015_ == 0)
{
v___x_4017_ = v___x_4014_;
goto v_reusejp_4016_;
}
else
{
lean_object* v_reuseFailAlloc_4018_; 
v_reuseFailAlloc_4018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4018_, 0, v_a_4012_);
v___x_4017_ = v_reuseFailAlloc_4018_;
goto v_reusejp_4016_;
}
v_reusejp_4016_:
{
return v___x_4017_;
}
}
}
}
else
{
lean_object* v_a_4020_; lean_object* v___x_4022_; uint8_t v_isShared_4023_; uint8_t v_isSharedCheck_4027_; 
lean_dec(v_a_3993_);
lean_dec(v_ref_3990_);
lean_dec(v_attrName_3989_);
v_a_4020_ = lean_ctor_get(v___x_3998_, 0);
v_isSharedCheck_4027_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4027_ == 0)
{
v___x_4022_ = v___x_3998_;
v_isShared_4023_ = v_isSharedCheck_4027_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_a_4020_);
lean_dec(v___x_3998_);
v___x_4022_ = lean_box(0);
v_isShared_4023_ = v_isSharedCheck_4027_;
goto v_resetjp_4021_;
}
v_resetjp_4021_:
{
lean_object* v___x_4025_; 
if (v_isShared_4023_ == 0)
{
v___x_4025_ = v___x_4022_;
goto v_reusejp_4024_;
}
else
{
lean_object* v_reuseFailAlloc_4026_; 
v_reuseFailAlloc_4026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4026_, 0, v_a_4020_);
v___x_4025_ = v_reuseFailAlloc_4026_;
goto v_reusejp_4024_;
}
v_reusejp_4024_:
{
return v___x_4025_;
}
}
}
}
else
{
lean_object* v_a_4028_; lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4035_; 
lean_dec(v_a_3993_);
lean_dec(v_ref_3990_);
lean_dec(v_attrName_3989_);
v_a_4028_ = lean_ctor_get(v___x_3997_, 0);
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_3997_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4030_ = v___x_3997_;
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
else
{
lean_inc(v_a_4028_);
lean_dec(v___x_3997_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4033_; 
if (v_isShared_4031_ == 0)
{
v___x_4033_ = v___x_4030_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v_a_4028_);
v___x_4033_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
return v___x_4033_;
}
}
}
}
else
{
lean_object* v_a_4036_; lean_object* v___x_4038_; uint8_t v_isShared_4039_; uint8_t v_isSharedCheck_4043_; 
lean_dec(v_a_3993_);
lean_dec(v_ref_3990_);
lean_dec(v_attrName_3989_);
v_a_4036_ = lean_ctor_get(v___x_3996_, 0);
v_isSharedCheck_4043_ = !lean_is_exclusive(v___x_3996_);
if (v_isSharedCheck_4043_ == 0)
{
v___x_4038_ = v___x_3996_;
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
else
{
lean_inc(v_a_4036_);
lean_dec(v___x_3996_);
v___x_4038_ = lean_box(0);
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
v_resetjp_4037_:
{
lean_object* v___x_4041_; 
if (v_isShared_4039_ == 0)
{
v___x_4041_ = v___x_4038_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4042_; 
v_reuseFailAlloc_4042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4042_, 0, v_a_4036_);
v___x_4041_ = v_reuseFailAlloc_4042_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
return v___x_4041_;
}
}
}
}
else
{
lean_dec(v_ref_3990_);
lean_dec(v_attrName_3989_);
return v___x_3992_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr___boxed(lean_object* v_attrName_4044_, lean_object* v_ref_4045_, lean_object* v_a_4046_){
_start:
{
lean_object* v_res_4047_; 
v_res_4047_ = l_Lean_Meta_Grind_registerAttr(v_attrName_4044_, v_ref_4045_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0(lean_object* v_00_u03b2_4048_, lean_object* v_m_4049_, lean_object* v_a_4050_, lean_object* v_b_4051_){
_start:
{
lean_object* v___x_4052_; 
v___x_4052_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(v_m_4049_, v_a_4050_, v_b_4051_);
return v___x_4052_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0(lean_object* v_00_u03b2_4053_, lean_object* v_a_4054_, lean_object* v_x_4055_){
_start:
{
uint8_t v___x_4056_; 
v___x_4056_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(v_a_4054_, v_x_4055_);
return v___x_4056_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4057_, lean_object* v_a_4058_, lean_object* v_x_4059_){
_start:
{
uint8_t v_res_4060_; lean_object* v_r_4061_; 
v_res_4060_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0(v_00_u03b2_4057_, v_a_4058_, v_x_4059_);
lean_dec(v_x_4059_);
lean_dec(v_a_4058_);
v_r_4061_ = lean_box(v_res_4060_);
return v_r_4061_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1(lean_object* v_00_u03b2_4062_, lean_object* v_data_4063_){
_start:
{
lean_object* v___x_4064_; 
v___x_4064_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(v_data_4063_);
return v___x_4064_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2(lean_object* v_00_u03b2_4065_, lean_object* v_a_4066_, lean_object* v_b_4067_, lean_object* v_x_4068_){
_start:
{
lean_object* v___x_4069_; 
v___x_4069_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(v_a_4066_, v_b_4067_, v_x_4068_);
return v___x_4069_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_4070_, lean_object* v_i_4071_, lean_object* v_source_4072_, lean_object* v_target_4073_){
_start:
{
lean_object* v___x_4074_; 
v___x_4074_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(v_i_4071_, v_source_4072_, v_target_4073_);
return v___x_4074_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_4075_, lean_object* v_x_4076_, lean_object* v_x_4077_){
_start:
{
lean_object* v___x_4078_; 
v___x_4078_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(v_x_4076_, v_x_4077_);
return v___x_4078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; 
v___x_4085_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_4086_ = ((lean_object*)(l_Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_));
v___x_4087_ = l_Lean_Meta_Grind_registerAttr(v___x_4085_, v___x_4086_);
return v___x_4087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2____boxed(lean_object* v_a_4088_){
_start:
{
lean_object* v_res_4089_; 
v_res_4089_ = l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_();
return v_res_4089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg(lean_object* v_declName_4090_, lean_object* v_a_4091_){
_start:
{
lean_object* v___x_4093_; lean_object* v_env_4094_; lean_object* v___x_4095_; lean_object* v_ext_4096_; lean_object* v_toEnvExtension_4097_; lean_object* v_asyncMode_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v_casesTypes_4101_; uint8_t v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; 
v___x_4093_ = lean_st_ref_get(v_a_4091_);
v_env_4094_ = lean_ctor_get(v___x_4093_, 0);
lean_inc_ref(v_env_4094_);
lean_dec(v___x_4093_);
v___x_4095_ = l_Lean_Meta_Grind_grindExt;
v_ext_4096_ = lean_ctor_get(v___x_4095_, 1);
lean_inc_ref(v_ext_4096_);
v_toEnvExtension_4097_ = lean_ctor_get(v_ext_4096_, 0);
lean_inc_ref(v_toEnvExtension_4097_);
lean_dec_ref(v_ext_4096_);
v_asyncMode_4098_ = lean_ctor_get(v_toEnvExtension_4097_, 2);
lean_inc(v_asyncMode_4098_);
lean_dec_ref(v_toEnvExtension_4097_);
v___x_4099_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_4100_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_4099_, v___x_4095_, v_env_4094_, v_asyncMode_4098_);
lean_dec(v_asyncMode_4098_);
v_casesTypes_4101_ = lean_ctor_get(v___x_4100_, 0);
lean_inc_ref(v_casesTypes_4101_);
lean_dec(v___x_4100_);
v___x_4102_ = l_Lean_Meta_Grind_CasesTypes_isSplit(v_casesTypes_4101_, v_declName_4090_);
v___x_4103_ = lean_box(v___x_4102_);
v___x_4104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4103_);
return v___x_4104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg___boxed(lean_object* v_declName_4105_, lean_object* v_a_4106_, lean_object* v_a_4107_){
_start:
{
lean_object* v_res_4108_; 
v_res_4108_ = l_Lean_Meta_Grind_isGlobalSplit___redArg(v_declName_4105_, v_a_4106_);
lean_dec(v_a_4106_);
lean_dec(v_declName_4105_);
return v_res_4108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit(lean_object* v_declName_4109_, lean_object* v_a_4110_, lean_object* v_a_4111_){
_start:
{
lean_object* v___x_4113_; 
v___x_4113_ = l_Lean_Meta_Grind_isGlobalSplit___redArg(v_declName_4109_, v_a_4111_);
return v___x_4113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___boxed(lean_object* v_declName_4114_, lean_object* v_a_4115_, lean_object* v_a_4116_, lean_object* v_a_4117_){
_start:
{
lean_object* v_res_4118_; 
v_res_4118_ = l_Lean_Meta_Grind_isGlobalSplit(v_declName_4114_, v_a_4115_, v_a_4116_);
lean_dec(v_a_4116_);
lean_dec_ref(v_a_4115_);
lean_dec(v_declName_4114_);
return v_res_4118_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Injective(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ExtAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Attr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ExtAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_normExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_normExt);
lean_dec_ref(res);
res = l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_extensionMapRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_extensionMapRef);
lean_dec_ref(res);
res = l_Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_grindExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_grindExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Attr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1 = _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1);
l_Lean_Meta_Grind_registerAttr___auto__1 = _init_l_Lean_Meta_Grind_registerAttr___auto__1();
lean_mark_persistent(l_Lean_Meta_Grind_registerAttr___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Injective(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_ExtAttr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Attr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_ExtAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Attr(builtin);
}
#ifdef __cplusplus
}
#endif
