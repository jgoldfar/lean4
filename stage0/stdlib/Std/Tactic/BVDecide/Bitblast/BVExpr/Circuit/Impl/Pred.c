// Lean compiler output
// Module: Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Pred
// Imports: Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.Eq Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.Ult Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.GetLsbD Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Expr
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_emptyWithCapacity___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___Std_DHashMap_Internal_Raw_u2080_expand_go___at___Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4_spec__4_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Std_Sat_AIG_hashDecl____x40_Std_Sat_AIG_Basic___hyg_546____at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_map_go___at___Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Std_Sat_AIG_hashFanin____x40_Std_Sat_AIG_Basic___hyg_41_(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_map_go___at___Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold_go___at___Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Bool_toNat(uint8_t);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_emptyWithCapacity___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__11___redArg(lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_emptyWithCapacity___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_getConstant___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at___Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold_go___at___Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_instDecidableEqBVBit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip_go___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_mkXorCached___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20_spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_hashDecl____x40_Std_Sat_AIG_Basic___hyg_546____at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__0___boxed(lean_object*);
static lean_object* l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip_go___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_getConstant___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17___lam__0(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___Std_DHashMap_Internal_Raw_u2080_expand_go___at___Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4_spec__4_spec__4___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4(lean_object*, lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_map_go___at___Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_mkOrCached___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20_spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_bitblast(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at___Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold_go___at___Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Std_Tactic_BVDecide_hashBVBit____x40_Std_Tactic_BVDecide_Bitblast_BVExpr_Basic___hyg_42_(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip_go___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_emptyWithCapacity___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__11___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_map_go___at___Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold_go___at___Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Std_Sat_AIG_decEqDecl___redArg____x40_Std_Sat_AIG_Basic___hyg_806_(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_lor(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip_go___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
LEAN_EXPORT uint64_t l_Std_Sat_AIG_hashDecl____x40_Std_Sat_AIG_Basic___hyg_546____at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__0(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint64_t x_2; 
x_2 = 0;
return x_2;
}
case 1:
{
lean_object* x_3; uint64_t x_4; uint64_t x_5; uint64_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = 1;
x_5 = l_Std_Tactic_BVDecide_hashBVBit____x40_Std_Tactic_BVDecide_Bitblast_BVExpr_Basic___hyg_42_(x_3);
x_6 = lean_uint64_mix_hash(x_4, x_5);
return x_6;
}
default: 
{
lean_object* x_7; lean_object* x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = 2;
x_10 = l_Std_Sat_AIG_hashFanin____x40_Std_Sat_AIG_Basic___hyg_41_(x_7);
x_11 = lean_uint64_mix_hash(x_9, x_10);
x_12 = l_Std_Sat_AIG_hashFanin____x40_Std_Sat_AIG_Basic___hyg_41_(x_8);
x_13 = lean_uint64_mix_hash(x_11, x_12);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_7);
lean_dec_ref(x_3);
lean_inc(x_2);
lean_inc_ref(x_1);
x_8 = l_Std_Sat_AIG_decEqDecl___redArg____x40_Std_Sat_AIG_Basic___hyg_806_(x_1, x_5, x_2);
if (x_8 == 0)
{
lean_dec(x_6);
x_3 = x_7;
goto _start;
}
else
{
lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec_ref(x_1);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_DHashMap_Internal_AssocList_get_x3f___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__1___redArg(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_getConstant___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_array_fget(x_5, x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(x_4);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_6);
x_9 = lean_box(0);
return x_9;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
lean_dec(x_2);
lean_dec_ref(x_1);
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
lean_dec_ref(x_3);
lean_inc(x_2);
lean_inc_ref(x_1);
x_7 = l_Std_Sat_AIG_decEqDecl___redArg____x40_Std_Sat_AIG_Basic___hyg_806_(x_1, x_5, x_2);
if (x_7 == 0)
{
x_3 = x_6;
goto _start;
}
else
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_7;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3___redArg(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___Std_DHashMap_Internal_Raw_u2080_expand_go___at___Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4_spec__4_spec__4___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Std_Sat_AIG_hashDecl____x40_Std_Sat_AIG_Basic___hyg_546____at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__0(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_1, x_18);
lean_ctor_set(x_2, 2, x_19);
x_20 = lean_array_uset(x_1, x_18, x_2);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_25 = lean_array_get_size(x_1);
x_26 = l_Std_Sat_AIG_hashDecl____x40_Std_Sat_AIG_Basic___hyg_546____at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__0(x_22);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_1, x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_array_uset(x_1, x_37, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___Std_DHashMap_Internal_Raw_u2080_expand_go___at___Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4_spec__4_spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_DHashMap_Internal_AssocList_foldlM___at___Std_DHashMap_Internal_Raw_u2080_expand_go___at___Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4_spec__4_spec__4___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at___Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4_spec__4___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec_ref(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at___Std_DHashMap_Internal_Raw_u2080_expand_go___at___Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4_spec__4_spec__4___redArg(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at___Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4_spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at___Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4_spec__4___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_4, x_6);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at___Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4_spec__4___redArg(x_5, x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__7___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_ctor_get(x_4, 2);
lean_inc(x_2);
lean_inc(x_6);
lean_inc_ref(x_1);
x_9 = l_Std_Sat_AIG_decEqDecl___redArg____x40_Std_Sat_AIG_Basic___hyg_806_(x_1, x_6, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_DHashMap_Internal_AssocList_replace___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__7___redArg(x_1, x_2, x_3, x_8);
lean_ctor_set(x_4, 2, x_10);
return x_4;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_1);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set(x_4, 0, x_2);
return x_4;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
lean_inc(x_2);
lean_inc(x_11);
lean_inc_ref(x_1);
x_14 = l_Std_Sat_AIG_decEqDecl___redArg____x40_Std_Sat_AIG_Basic___hyg_806_(x_1, x_11, x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_DHashMap_Internal_AssocList_replace___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__7___redArg(x_1, x_2, x_3, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec_ref(x_1);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_3);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_DHashMap_Internal_AssocList_replace___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__7___redArg(x_1, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0___closed__0() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_3);
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; size_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; lean_object* x_37; lean_object* x_38; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_dec(x_9);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_11);
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
x_15 = lean_ctor_get_uint8(x_7, sizeof(void*)*1);
x_16 = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_instDecidableEqBVBit___boxed), 2, 0);
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_nat_mul(x_12, x_17);
x_19 = l_Bool_toNat(x_13);
x_20 = lean_nat_lor(x_18, x_19);
lean_dec(x_19);
lean_dec(x_18);
x_21 = lean_nat_mul(x_14, x_17);
x_22 = l_Bool_toNat(x_15);
x_23 = lean_nat_lor(x_21, x_22);
lean_dec(x_22);
lean_dec(x_21);
lean_ctor_set_tag(x_2, 2);
lean_ctor_set(x_2, 1, x_23);
lean_ctor_set(x_2, 0, x_20);
x_24 = lean_array_get_size(x_11);
x_25 = l_Std_Sat_AIG_hashDecl____x40_Std_Sat_AIG_Basic___hyg_546____at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__0(x_2);
x_26 = 32;
x_27 = lean_uint64_shift_right(x_25, x_26);
x_28 = lean_uint64_xor(x_25, x_27);
x_29 = 16;
x_30 = lean_uint64_shift_right(x_28, x_29);
x_31 = lean_uint64_xor(x_28, x_30);
x_32 = lean_uint64_to_usize(x_31);
x_33 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_34 = 1;
x_35 = lean_usize_sub(x_33, x_34);
x_36 = lean_usize_land(x_32, x_35);
x_37 = lean_array_uget(x_11, x_36);
lean_inc(x_37);
lean_inc_ref(x_2);
lean_inc_ref(x_16);
x_38 = l_Std_DHashMap_Internal_AssocList_get_x3f___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__1___redArg(x_16, x_2, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; uint8_t x_43; uint8_t x_48; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_inc_ref(x_3);
lean_inc_ref(x_8);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_39 = x_3;
} else {
 lean_dec_ref(x_3);
 x_39 = lean_box(0);
}
x_55 = l_Std_Sat_AIG_getConstant___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__2(x_1, x_6);
lean_dec_ref(x_6);
x_56 = l_Std_Sat_AIG_getConstant___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__2(x_1, x_7);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 x_57 = x_7;
} else {
 lean_dec_ref(x_7);
 x_57 = lean_box(0);
}
if (lean_obj_tag(x_55) == 0)
{
lean_dec(x_39);
if (lean_obj_tag(x_56) == 0)
{
uint8_t x_58; 
x_58 = lean_nat_dec_eq(x_12, x_14);
lean_dec(x_14);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; uint8_t x_66; 
lean_dec_ref(x_1);
lean_dec(x_12);
x_59 = lean_array_get_size(x_8);
lean_inc(x_37);
lean_inc_ref(x_2);
lean_inc_ref(x_16);
x_66 = l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3___redArg(x_16, x_2, x_37);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
lean_dec_ref(x_16);
x_67 = lean_unsigned_to_nat(1u);
x_68 = lean_nat_add(x_10, x_67);
lean_dec(x_10);
lean_inc(x_59);
lean_inc_ref(x_2);
x_69 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_69, 0, x_2);
lean_ctor_set(x_69, 1, x_59);
lean_ctor_set(x_69, 2, x_37);
x_70 = lean_array_uset(x_11, x_36, x_69);
x_71 = lean_unsigned_to_nat(4u);
x_72 = lean_nat_mul(x_68, x_71);
x_73 = lean_unsigned_to_nat(3u);
x_74 = lean_nat_div(x_72, x_73);
lean_dec(x_72);
x_75 = lean_array_get_size(x_70);
x_76 = lean_nat_dec_le(x_74, x_75);
lean_dec(x_75);
lean_dec(x_74);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
x_77 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4___redArg(x_70);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_68);
lean_ctor_set(x_78, 1, x_77);
x_60 = x_78;
goto block_65;
}
else
{
lean_object* x_79; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_68);
lean_ctor_set(x_79, 1, x_70);
x_60 = x_79;
goto block_65;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_80 = lean_box(0);
x_81 = lean_array_uset(x_11, x_36, x_80);
lean_inc(x_59);
lean_inc_ref(x_2);
x_82 = l_Std_DHashMap_Internal_AssocList_replace___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__7___redArg(x_16, x_2, x_59, x_37);
x_83 = lean_array_uset(x_81, x_36, x_82);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_10);
lean_ctor_set(x_84, 1, x_83);
x_60 = x_84;
goto block_65;
}
block_65:
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_array_push(x_8, x_2);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
if (lean_is_scalar(x_57)) {
 x_63 = lean_alloc_ctor(0, 1, 1);
} else {
 x_63 = x_57;
}
lean_ctor_set(x_63, 0, x_59);
lean_ctor_set_uint8(x_63, sizeof(void*)*1, x_58);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
else
{
lean_dec(x_57);
lean_dec(x_37);
lean_dec_ref(x_2);
lean_dec_ref(x_16);
lean_dec_ref(x_11);
lean_dec(x_10);
lean_dec_ref(x_8);
if (x_13 == 0)
{
if (x_15 == 0)
{
x_48 = x_58;
goto block_51;
}
else
{
lean_dec(x_12);
x_43 = x_13;
goto block_47;
}
}
else
{
x_48 = x_15;
goto block_51;
}
}
}
else
{
lean_object* x_85; uint8_t x_86; 
lean_dec(x_37);
lean_dec_ref(x_2);
lean_dec_ref(x_16);
lean_dec(x_14);
lean_dec_ref(x_11);
lean_dec(x_10);
lean_dec_ref(x_8);
x_85 = lean_ctor_get(x_56, 0);
lean_inc(x_85);
lean_dec_ref(x_56);
x_86 = lean_unbox(x_85);
lean_dec(x_85);
if (x_86 == 0)
{
lean_dec(x_57);
lean_dec(x_12);
goto block_54;
}
else
{
lean_object* x_87; lean_object* x_88; 
if (lean_is_scalar(x_57)) {
 x_87 = lean_alloc_ctor(0, 1, 1);
} else {
 x_87 = x_57;
}
lean_ctor_set(x_87, 0, x_12);
lean_ctor_set_uint8(x_87, sizeof(void*)*1, x_13);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_1);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
lean_object* x_89; uint8_t x_90; 
lean_dec(x_57);
lean_dec(x_37);
lean_dec_ref(x_2);
lean_dec_ref(x_16);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_10);
lean_dec_ref(x_8);
x_89 = lean_ctor_get(x_55, 0);
lean_inc(x_89);
lean_dec_ref(x_55);
x_90 = lean_unbox(x_89);
lean_dec(x_89);
if (x_90 == 0)
{
lean_dec(x_56);
lean_dec(x_39);
lean_dec(x_14);
goto block_54;
}
else
{
if (lean_obj_tag(x_56) == 0)
{
goto block_42;
}
else
{
lean_object* x_91; uint8_t x_92; 
x_91 = lean_ctor_get(x_56, 0);
lean_inc(x_91);
lean_dec_ref(x_56);
x_92 = lean_unbox(x_91);
lean_dec(x_91);
if (x_92 == 0)
{
lean_dec(x_39);
lean_dec(x_14);
goto block_54;
}
else
{
goto block_42;
}
}
}
}
block_42:
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_40, 0, x_14);
lean_ctor_set_uint8(x_40, sizeof(void*)*1, x_15);
if (lean_is_scalar(x_39)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_39;
}
lean_ctor_set(x_41, 0, x_1);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
block_47:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_unsigned_to_nat(0u);
x_45 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set_uint8(x_45, sizeof(void*)*1, x_43);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_1);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
block_51:
{
if (x_48 == 0)
{
lean_dec(x_12);
x_43 = x_48;
goto block_47;
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_49, 0, x_12);
lean_ctor_set_uint8(x_49, sizeof(void*)*1, x_13);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_1);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
block_54:
{
lean_object* x_52; lean_object* x_53; 
x_52 = l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0___closed__0;
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_1);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
else
{
uint8_t x_93; 
lean_dec(x_37);
lean_dec_ref(x_2);
lean_dec_ref(x_16);
lean_dec(x_14);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_10);
lean_dec_ref(x_6);
x_93 = !lean_is_exclusive(x_7);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_94 = lean_ctor_get(x_7, 0);
lean_dec(x_94);
x_95 = lean_ctor_get(x_38, 0);
lean_inc(x_95);
lean_dec_ref(x_38);
lean_inc_ref(x_3);
x_96 = !lean_is_exclusive(x_3);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_97 = lean_ctor_get(x_3, 1);
lean_dec(x_97);
x_98 = lean_ctor_get(x_3, 0);
lean_dec(x_98);
x_99 = 0;
lean_ctor_set(x_7, 0, x_95);
lean_ctor_set_uint8(x_7, sizeof(void*)*1, x_99);
lean_ctor_set(x_3, 1, x_7);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
else
{
uint8_t x_100; lean_object* x_101; 
lean_dec(x_3);
x_100 = 0;
lean_ctor_set(x_7, 0, x_95);
lean_ctor_set_uint8(x_7, sizeof(void*)*1, x_100);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_1);
lean_ctor_set(x_101, 1, x_7);
return x_101;
}
}
else
{
lean_object* x_102; lean_object* x_103; uint8_t x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_7);
x_102 = lean_ctor_get(x_38, 0);
lean_inc(x_102);
lean_dec_ref(x_38);
lean_inc_ref(x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_103 = x_3;
} else {
 lean_dec_ref(x_3);
 x_103 = lean_box(0);
}
x_104 = 0;
x_105 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_105, 0, x_102);
lean_ctor_set_uint8(x_105, sizeof(void*)*1, x_104);
if (lean_is_scalar(x_103)) {
 x_106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_106 = x_103;
}
lean_ctor_set(x_106, 0, x_1);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; uint8_t x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; uint64_t x_125; uint64_t x_126; uint64_t x_127; uint64_t x_128; uint64_t x_129; uint64_t x_130; uint64_t x_131; size_t x_132; size_t x_133; size_t x_134; size_t x_135; size_t x_136; lean_object* x_137; lean_object* x_138; 
x_107 = lean_ctor_get(x_2, 0);
x_108 = lean_ctor_get(x_2, 1);
x_109 = lean_ctor_get(x_1, 0);
lean_inc(x_109);
lean_dec(x_1);
x_110 = lean_ctor_get(x_3, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_111);
x_112 = lean_ctor_get(x_107, 0);
lean_inc(x_112);
x_113 = lean_ctor_get_uint8(x_107, sizeof(void*)*1);
x_114 = lean_ctor_get(x_108, 0);
lean_inc(x_114);
x_115 = lean_ctor_get_uint8(x_108, sizeof(void*)*1);
x_116 = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_instDecidableEqBVBit___boxed), 2, 0);
x_117 = lean_unsigned_to_nat(2u);
x_118 = lean_nat_mul(x_112, x_117);
x_119 = l_Bool_toNat(x_113);
x_120 = lean_nat_lor(x_118, x_119);
lean_dec(x_119);
lean_dec(x_118);
x_121 = lean_nat_mul(x_114, x_117);
x_122 = l_Bool_toNat(x_115);
x_123 = lean_nat_lor(x_121, x_122);
lean_dec(x_122);
lean_dec(x_121);
lean_ctor_set_tag(x_2, 2);
lean_ctor_set(x_2, 1, x_123);
lean_ctor_set(x_2, 0, x_120);
x_124 = lean_array_get_size(x_111);
x_125 = l_Std_Sat_AIG_hashDecl____x40_Std_Sat_AIG_Basic___hyg_546____at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__0(x_2);
x_126 = 32;
x_127 = lean_uint64_shift_right(x_125, x_126);
x_128 = lean_uint64_xor(x_125, x_127);
x_129 = 16;
x_130 = lean_uint64_shift_right(x_128, x_129);
x_131 = lean_uint64_xor(x_128, x_130);
x_132 = lean_uint64_to_usize(x_131);
x_133 = lean_usize_of_nat(x_124);
lean_dec(x_124);
x_134 = 1;
x_135 = lean_usize_sub(x_133, x_134);
x_136 = lean_usize_land(x_132, x_135);
x_137 = lean_array_uget(x_111, x_136);
lean_inc(x_137);
lean_inc_ref(x_2);
lean_inc_ref(x_116);
x_138 = l_Std_DHashMap_Internal_AssocList_get_x3f___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__1___redArg(x_116, x_2, x_137);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; uint8_t x_144; uint8_t x_149; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
lean_inc_ref(x_3);
lean_inc_ref(x_109);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_109);
lean_ctor_set(x_139, 1, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_140 = x_3;
} else {
 lean_dec_ref(x_3);
 x_140 = lean_box(0);
}
x_156 = l_Std_Sat_AIG_getConstant___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__2(x_139, x_107);
lean_dec_ref(x_107);
x_157 = l_Std_Sat_AIG_getConstant___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__2(x_139, x_108);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 x_158 = x_108;
} else {
 lean_dec_ref(x_108);
 x_158 = lean_box(0);
}
if (lean_obj_tag(x_156) == 0)
{
lean_dec(x_140);
if (lean_obj_tag(x_157) == 0)
{
uint8_t x_159; 
x_159 = lean_nat_dec_eq(x_112, x_114);
lean_dec(x_114);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; uint8_t x_167; 
lean_dec_ref(x_139);
lean_dec(x_112);
x_160 = lean_array_get_size(x_109);
lean_inc(x_137);
lean_inc_ref(x_2);
lean_inc_ref(x_116);
x_167 = l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3___redArg(x_116, x_2, x_137);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; uint8_t x_177; 
lean_dec_ref(x_116);
x_168 = lean_unsigned_to_nat(1u);
x_169 = lean_nat_add(x_110, x_168);
lean_dec(x_110);
lean_inc(x_160);
lean_inc_ref(x_2);
x_170 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_170, 0, x_2);
lean_ctor_set(x_170, 1, x_160);
lean_ctor_set(x_170, 2, x_137);
x_171 = lean_array_uset(x_111, x_136, x_170);
x_172 = lean_unsigned_to_nat(4u);
x_173 = lean_nat_mul(x_169, x_172);
x_174 = lean_unsigned_to_nat(3u);
x_175 = lean_nat_div(x_173, x_174);
lean_dec(x_173);
x_176 = lean_array_get_size(x_171);
x_177 = lean_nat_dec_le(x_175, x_176);
lean_dec(x_176);
lean_dec(x_175);
if (x_177 == 0)
{
lean_object* x_178; lean_object* x_179; 
x_178 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4___redArg(x_171);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_169);
lean_ctor_set(x_179, 1, x_178);
x_161 = x_179;
goto block_166;
}
else
{
lean_object* x_180; 
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_169);
lean_ctor_set(x_180, 1, x_171);
x_161 = x_180;
goto block_166;
}
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_181 = lean_box(0);
x_182 = lean_array_uset(x_111, x_136, x_181);
lean_inc(x_160);
lean_inc_ref(x_2);
x_183 = l_Std_DHashMap_Internal_AssocList_replace___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__7___redArg(x_116, x_2, x_160, x_137);
x_184 = lean_array_uset(x_182, x_136, x_183);
x_185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_185, 0, x_110);
lean_ctor_set(x_185, 1, x_184);
x_161 = x_185;
goto block_166;
}
block_166:
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_162 = lean_array_push(x_109, x_2);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_161);
if (lean_is_scalar(x_158)) {
 x_164 = lean_alloc_ctor(0, 1, 1);
} else {
 x_164 = x_158;
}
lean_ctor_set(x_164, 0, x_160);
lean_ctor_set_uint8(x_164, sizeof(void*)*1, x_159);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
else
{
lean_dec(x_158);
lean_dec(x_137);
lean_dec_ref(x_2);
lean_dec_ref(x_116);
lean_dec_ref(x_111);
lean_dec(x_110);
lean_dec_ref(x_109);
if (x_113 == 0)
{
if (x_115 == 0)
{
x_149 = x_159;
goto block_152;
}
else
{
lean_dec(x_112);
x_144 = x_113;
goto block_148;
}
}
else
{
x_149 = x_115;
goto block_152;
}
}
}
else
{
lean_object* x_186; uint8_t x_187; 
lean_dec(x_137);
lean_dec_ref(x_2);
lean_dec_ref(x_116);
lean_dec(x_114);
lean_dec_ref(x_111);
lean_dec(x_110);
lean_dec_ref(x_109);
x_186 = lean_ctor_get(x_157, 0);
lean_inc(x_186);
lean_dec_ref(x_157);
x_187 = lean_unbox(x_186);
lean_dec(x_186);
if (x_187 == 0)
{
lean_dec(x_158);
lean_dec(x_112);
goto block_155;
}
else
{
lean_object* x_188; lean_object* x_189; 
if (lean_is_scalar(x_158)) {
 x_188 = lean_alloc_ctor(0, 1, 1);
} else {
 x_188 = x_158;
}
lean_ctor_set(x_188, 0, x_112);
lean_ctor_set_uint8(x_188, sizeof(void*)*1, x_113);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_139);
lean_ctor_set(x_189, 1, x_188);
return x_189;
}
}
}
else
{
lean_object* x_190; uint8_t x_191; 
lean_dec(x_158);
lean_dec(x_137);
lean_dec_ref(x_2);
lean_dec_ref(x_116);
lean_dec(x_112);
lean_dec_ref(x_111);
lean_dec(x_110);
lean_dec_ref(x_109);
x_190 = lean_ctor_get(x_156, 0);
lean_inc(x_190);
lean_dec_ref(x_156);
x_191 = lean_unbox(x_190);
lean_dec(x_190);
if (x_191 == 0)
{
lean_dec(x_157);
lean_dec(x_140);
lean_dec(x_114);
goto block_155;
}
else
{
if (lean_obj_tag(x_157) == 0)
{
goto block_143;
}
else
{
lean_object* x_192; uint8_t x_193; 
x_192 = lean_ctor_get(x_157, 0);
lean_inc(x_192);
lean_dec_ref(x_157);
x_193 = lean_unbox(x_192);
lean_dec(x_192);
if (x_193 == 0)
{
lean_dec(x_140);
lean_dec(x_114);
goto block_155;
}
else
{
goto block_143;
}
}
}
}
block_143:
{
lean_object* x_141; lean_object* x_142; 
x_141 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_141, 0, x_114);
lean_ctor_set_uint8(x_141, sizeof(void*)*1, x_115);
if (lean_is_scalar(x_140)) {
 x_142 = lean_alloc_ctor(0, 2, 0);
} else {
 x_142 = x_140;
}
lean_ctor_set(x_142, 0, x_139);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
block_148:
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_unsigned_to_nat(0u);
x_146 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set_uint8(x_146, sizeof(void*)*1, x_144);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_139);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
block_152:
{
if (x_149 == 0)
{
lean_dec(x_112);
x_144 = x_149;
goto block_148;
}
else
{
lean_object* x_150; lean_object* x_151; 
x_150 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_150, 0, x_112);
lean_ctor_set_uint8(x_150, sizeof(void*)*1, x_113);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_139);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
block_155:
{
lean_object* x_153; lean_object* x_154; 
x_153 = l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0___closed__0;
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_139);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; uint8_t x_198; lean_object* x_199; lean_object* x_200; 
lean_dec(x_137);
lean_dec_ref(x_2);
lean_dec_ref(x_116);
lean_dec(x_114);
lean_dec(x_112);
lean_dec_ref(x_111);
lean_dec(x_110);
lean_dec_ref(x_107);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 x_194 = x_108;
} else {
 lean_dec_ref(x_108);
 x_194 = lean_box(0);
}
x_195 = lean_ctor_get(x_138, 0);
lean_inc(x_195);
lean_dec_ref(x_138);
lean_inc_ref(x_3);
x_196 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_196, 0, x_109);
lean_ctor_set(x_196, 1, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_197 = x_3;
} else {
 lean_dec_ref(x_3);
 x_197 = lean_box(0);
}
x_198 = 0;
if (lean_is_scalar(x_194)) {
 x_199 = lean_alloc_ctor(0, 1, 1);
} else {
 x_199 = x_194;
}
lean_ctor_set(x_199, 0, x_195);
lean_ctor_set_uint8(x_199, sizeof(void*)*1, x_198);
if (lean_is_scalar(x_197)) {
 x_200 = lean_alloc_ctor(0, 2, 0);
} else {
 x_200 = x_197;
}
lean_ctor_set(x_200, 0, x_196);
lean_ctor_set(x_200, 1, x_199);
return x_200;
}
}
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; uint8_t x_208; lean_object* x_209; uint8_t x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; uint64_t x_221; uint64_t x_222; uint64_t x_223; uint64_t x_224; uint64_t x_225; uint64_t x_226; uint64_t x_227; size_t x_228; size_t x_229; size_t x_230; size_t x_231; size_t x_232; lean_object* x_233; lean_object* x_234; 
x_201 = lean_ctor_get(x_2, 0);
x_202 = lean_ctor_get(x_2, 1);
lean_inc(x_202);
lean_inc(x_201);
lean_dec(x_2);
x_203 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_203);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_204 = x_1;
} else {
 lean_dec_ref(x_1);
 x_204 = lean_box(0);
}
x_205 = lean_ctor_get(x_3, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_206);
x_207 = lean_ctor_get(x_201, 0);
lean_inc(x_207);
x_208 = lean_ctor_get_uint8(x_201, sizeof(void*)*1);
x_209 = lean_ctor_get(x_202, 0);
lean_inc(x_209);
x_210 = lean_ctor_get_uint8(x_202, sizeof(void*)*1);
x_211 = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_instDecidableEqBVBit___boxed), 2, 0);
x_212 = lean_unsigned_to_nat(2u);
x_213 = lean_nat_mul(x_207, x_212);
x_214 = l_Bool_toNat(x_208);
x_215 = lean_nat_lor(x_213, x_214);
lean_dec(x_214);
lean_dec(x_213);
x_216 = lean_nat_mul(x_209, x_212);
x_217 = l_Bool_toNat(x_210);
x_218 = lean_nat_lor(x_216, x_217);
lean_dec(x_217);
lean_dec(x_216);
x_219 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_219, 0, x_215);
lean_ctor_set(x_219, 1, x_218);
x_220 = lean_array_get_size(x_206);
x_221 = l_Std_Sat_AIG_hashDecl____x40_Std_Sat_AIG_Basic___hyg_546____at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__0(x_219);
x_222 = 32;
x_223 = lean_uint64_shift_right(x_221, x_222);
x_224 = lean_uint64_xor(x_221, x_223);
x_225 = 16;
x_226 = lean_uint64_shift_right(x_224, x_225);
x_227 = lean_uint64_xor(x_224, x_226);
x_228 = lean_uint64_to_usize(x_227);
x_229 = lean_usize_of_nat(x_220);
lean_dec(x_220);
x_230 = 1;
x_231 = lean_usize_sub(x_229, x_230);
x_232 = lean_usize_land(x_228, x_231);
x_233 = lean_array_uget(x_206, x_232);
lean_inc(x_233);
lean_inc_ref(x_219);
lean_inc_ref(x_211);
x_234 = l_Std_DHashMap_Internal_AssocList_get_x3f___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__1___redArg(x_211, x_219, x_233);
if (lean_obj_tag(x_234) == 0)
{
lean_object* x_235; lean_object* x_236; uint8_t x_240; uint8_t x_245; lean_object* x_252; lean_object* x_253; lean_object* x_254; 
lean_inc_ref(x_3);
lean_inc_ref(x_203);
if (lean_is_scalar(x_204)) {
 x_235 = lean_alloc_ctor(0, 2, 0);
} else {
 x_235 = x_204;
}
lean_ctor_set(x_235, 0, x_203);
lean_ctor_set(x_235, 1, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_236 = x_3;
} else {
 lean_dec_ref(x_3);
 x_236 = lean_box(0);
}
x_252 = l_Std_Sat_AIG_getConstant___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__2(x_235, x_201);
lean_dec_ref(x_201);
x_253 = l_Std_Sat_AIG_getConstant___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__2(x_235, x_202);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 x_254 = x_202;
} else {
 lean_dec_ref(x_202);
 x_254 = lean_box(0);
}
if (lean_obj_tag(x_252) == 0)
{
lean_dec(x_236);
if (lean_obj_tag(x_253) == 0)
{
uint8_t x_255; 
x_255 = lean_nat_dec_eq(x_207, x_209);
lean_dec(x_209);
if (x_255 == 0)
{
lean_object* x_256; lean_object* x_257; uint8_t x_263; 
lean_dec_ref(x_235);
lean_dec(x_207);
x_256 = lean_array_get_size(x_203);
lean_inc(x_233);
lean_inc_ref(x_219);
lean_inc_ref(x_211);
x_263 = l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3___redArg(x_211, x_219, x_233);
if (x_263 == 0)
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; uint8_t x_273; 
lean_dec_ref(x_211);
x_264 = lean_unsigned_to_nat(1u);
x_265 = lean_nat_add(x_205, x_264);
lean_dec(x_205);
lean_inc(x_256);
lean_inc_ref(x_219);
x_266 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_266, 0, x_219);
lean_ctor_set(x_266, 1, x_256);
lean_ctor_set(x_266, 2, x_233);
x_267 = lean_array_uset(x_206, x_232, x_266);
x_268 = lean_unsigned_to_nat(4u);
x_269 = lean_nat_mul(x_265, x_268);
x_270 = lean_unsigned_to_nat(3u);
x_271 = lean_nat_div(x_269, x_270);
lean_dec(x_269);
x_272 = lean_array_get_size(x_267);
x_273 = lean_nat_dec_le(x_271, x_272);
lean_dec(x_272);
lean_dec(x_271);
if (x_273 == 0)
{
lean_object* x_274; lean_object* x_275; 
x_274 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__4___redArg(x_267);
x_275 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_275, 0, x_265);
lean_ctor_set(x_275, 1, x_274);
x_257 = x_275;
goto block_262;
}
else
{
lean_object* x_276; 
x_276 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_276, 0, x_265);
lean_ctor_set(x_276, 1, x_267);
x_257 = x_276;
goto block_262;
}
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_277 = lean_box(0);
x_278 = lean_array_uset(x_206, x_232, x_277);
lean_inc(x_256);
lean_inc_ref(x_219);
x_279 = l_Std_DHashMap_Internal_AssocList_replace___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__7___redArg(x_211, x_219, x_256, x_233);
x_280 = lean_array_uset(x_278, x_232, x_279);
x_281 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_281, 0, x_205);
lean_ctor_set(x_281, 1, x_280);
x_257 = x_281;
goto block_262;
}
block_262:
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_258 = lean_array_push(x_203, x_219);
x_259 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_259, 0, x_258);
lean_ctor_set(x_259, 1, x_257);
if (lean_is_scalar(x_254)) {
 x_260 = lean_alloc_ctor(0, 1, 1);
} else {
 x_260 = x_254;
}
lean_ctor_set(x_260, 0, x_256);
lean_ctor_set_uint8(x_260, sizeof(void*)*1, x_255);
x_261 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_261, 0, x_259);
lean_ctor_set(x_261, 1, x_260);
return x_261;
}
}
else
{
lean_dec(x_254);
lean_dec(x_233);
lean_dec_ref(x_219);
lean_dec_ref(x_211);
lean_dec_ref(x_206);
lean_dec(x_205);
lean_dec_ref(x_203);
if (x_208 == 0)
{
if (x_210 == 0)
{
x_245 = x_255;
goto block_248;
}
else
{
lean_dec(x_207);
x_240 = x_208;
goto block_244;
}
}
else
{
x_245 = x_210;
goto block_248;
}
}
}
else
{
lean_object* x_282; uint8_t x_283; 
lean_dec(x_233);
lean_dec_ref(x_219);
lean_dec_ref(x_211);
lean_dec(x_209);
lean_dec_ref(x_206);
lean_dec(x_205);
lean_dec_ref(x_203);
x_282 = lean_ctor_get(x_253, 0);
lean_inc(x_282);
lean_dec_ref(x_253);
x_283 = lean_unbox(x_282);
lean_dec(x_282);
if (x_283 == 0)
{
lean_dec(x_254);
lean_dec(x_207);
goto block_251;
}
else
{
lean_object* x_284; lean_object* x_285; 
if (lean_is_scalar(x_254)) {
 x_284 = lean_alloc_ctor(0, 1, 1);
} else {
 x_284 = x_254;
}
lean_ctor_set(x_284, 0, x_207);
lean_ctor_set_uint8(x_284, sizeof(void*)*1, x_208);
x_285 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_285, 0, x_235);
lean_ctor_set(x_285, 1, x_284);
return x_285;
}
}
}
else
{
lean_object* x_286; uint8_t x_287; 
lean_dec(x_254);
lean_dec(x_233);
lean_dec_ref(x_219);
lean_dec_ref(x_211);
lean_dec(x_207);
lean_dec_ref(x_206);
lean_dec(x_205);
lean_dec_ref(x_203);
x_286 = lean_ctor_get(x_252, 0);
lean_inc(x_286);
lean_dec_ref(x_252);
x_287 = lean_unbox(x_286);
lean_dec(x_286);
if (x_287 == 0)
{
lean_dec(x_253);
lean_dec(x_236);
lean_dec(x_209);
goto block_251;
}
else
{
if (lean_obj_tag(x_253) == 0)
{
goto block_239;
}
else
{
lean_object* x_288; uint8_t x_289; 
x_288 = lean_ctor_get(x_253, 0);
lean_inc(x_288);
lean_dec_ref(x_253);
x_289 = lean_unbox(x_288);
lean_dec(x_288);
if (x_289 == 0)
{
lean_dec(x_236);
lean_dec(x_209);
goto block_251;
}
else
{
goto block_239;
}
}
}
}
block_239:
{
lean_object* x_237; lean_object* x_238; 
x_237 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_237, 0, x_209);
lean_ctor_set_uint8(x_237, sizeof(void*)*1, x_210);
if (lean_is_scalar(x_236)) {
 x_238 = lean_alloc_ctor(0, 2, 0);
} else {
 x_238 = x_236;
}
lean_ctor_set(x_238, 0, x_235);
lean_ctor_set(x_238, 1, x_237);
return x_238;
}
block_244:
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_241 = lean_unsigned_to_nat(0u);
x_242 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set_uint8(x_242, sizeof(void*)*1, x_240);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_235);
lean_ctor_set(x_243, 1, x_242);
return x_243;
}
block_248:
{
if (x_245 == 0)
{
lean_dec(x_207);
x_240 = x_245;
goto block_244;
}
else
{
lean_object* x_246; lean_object* x_247; 
x_246 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_246, 0, x_207);
lean_ctor_set_uint8(x_246, sizeof(void*)*1, x_208);
x_247 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_247, 0, x_235);
lean_ctor_set(x_247, 1, x_246);
return x_247;
}
}
block_251:
{
lean_object* x_249; lean_object* x_250; 
x_249 = l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0___closed__0;
x_250 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_250, 0, x_235);
lean_ctor_set(x_250, 1, x_249);
return x_250;
}
}
else
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; uint8_t x_294; lean_object* x_295; lean_object* x_296; 
lean_dec(x_233);
lean_dec_ref(x_219);
lean_dec_ref(x_211);
lean_dec(x_209);
lean_dec(x_207);
lean_dec_ref(x_206);
lean_dec(x_205);
lean_dec_ref(x_201);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 x_290 = x_202;
} else {
 lean_dec_ref(x_202);
 x_290 = lean_box(0);
}
x_291 = lean_ctor_get(x_234, 0);
lean_inc(x_291);
lean_dec_ref(x_234);
lean_inc_ref(x_3);
if (lean_is_scalar(x_204)) {
 x_292 = lean_alloc_ctor(0, 2, 0);
} else {
 x_292 = x_204;
}
lean_ctor_set(x_292, 0, x_203);
lean_ctor_set(x_292, 1, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_293 = x_3;
} else {
 lean_dec_ref(x_3);
 x_293 = lean_box(0);
}
x_294 = 0;
if (lean_is_scalar(x_290)) {
 x_295 = lean_alloc_ctor(0, 1, 1);
} else {
 x_295 = x_290;
}
lean_ctor_set(x_295, 0, x_291);
lean_ctor_set_uint8(x_295, sizeof(void*)*1, x_294);
if (lean_is_scalar(x_293)) {
 x_296 = lean_alloc_ctor(0, 2, 0);
} else {
 x_296 = x_293;
}
lean_ctor_set(x_296, 0, x_292);
lean_ctor_set(x_296, 1, x_295);
return x_296;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
lean_ctor_set(x_2, 1, x_4);
lean_ctor_set(x_2, 0, x_5);
x_9 = l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0(x_1, x_2);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0(x_1, x_2);
return x_10;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_nat_dec_lt(x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_11);
x_17 = l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0(x_1, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_12);
x_19 = l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0(x_1, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; uint8_t x_48; 
x_48 = !lean_is_exclusive(x_2);
if (x_48 == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_ctor_get(x_2, 0);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; 
x_51 = lean_ctor_get(x_2, 1);
x_52 = lean_ctor_get(x_49, 0);
x_53 = lean_ctor_get_uint8(x_49, sizeof(void*)*1);
x_54 = lean_ctor_get(x_51, 0);
lean_inc(x_54);
x_55 = lean_ctor_get_uint8(x_51, sizeof(void*)*1);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 x_56 = x_51;
} else {
 lean_dec_ref(x_51);
 x_56 = lean_box(0);
}
lean_inc(x_52);
if (x_55 == 0)
{
uint8_t x_68; lean_object* x_69; 
x_68 = 1;
lean_inc(x_54);
x_69 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_69, 0, x_54);
lean_ctor_set_uint8(x_69, sizeof(void*)*1, x_68);
lean_ctor_set(x_2, 1, x_69);
x_57 = x_2;
goto block_67;
}
else
{
uint8_t x_70; lean_object* x_71; 
x_70 = 0;
lean_inc(x_54);
x_71 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_71, 0, x_54);
lean_ctor_set_uint8(x_71, sizeof(void*)*1, x_70);
lean_ctor_set(x_2, 1, x_71);
x_57 = x_2;
goto block_67;
}
block_67:
{
lean_object* x_58; 
x_58 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_1, x_57);
if (x_53 == 0)
{
lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc_ref(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc_ref(x_60);
lean_dec_ref(x_58);
x_61 = 1;
if (lean_is_scalar(x_56)) {
 x_62 = lean_alloc_ctor(0, 1, 1);
} else {
 x_62 = x_56;
}
lean_ctor_set(x_62, 0, x_52);
lean_ctor_set_uint8(x_62, sizeof(void*)*1, x_61);
x_24 = x_59;
x_25 = x_54;
x_26 = x_55;
x_27 = x_60;
x_28 = x_62;
goto block_47;
}
else
{
lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_58, 0);
lean_inc_ref(x_63);
x_64 = lean_ctor_get(x_58, 1);
lean_inc_ref(x_64);
lean_dec_ref(x_58);
x_65 = 0;
if (lean_is_scalar(x_56)) {
 x_66 = lean_alloc_ctor(0, 1, 1);
} else {
 x_66 = x_56;
}
lean_ctor_set(x_66, 0, x_52);
lean_ctor_set_uint8(x_66, sizeof(void*)*1, x_65);
x_24 = x_63;
x_25 = x_54;
x_26 = x_55;
x_27 = x_64;
x_28 = x_66;
goto block_47;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; uint8_t x_76; lean_object* x_77; lean_object* x_78; lean_object* x_89; 
x_72 = lean_ctor_get(x_2, 1);
x_73 = lean_ctor_get(x_49, 0);
x_74 = lean_ctor_get_uint8(x_49, sizeof(void*)*1);
lean_inc(x_73);
lean_dec(x_49);
x_75 = lean_ctor_get(x_72, 0);
lean_inc(x_75);
x_76 = lean_ctor_get_uint8(x_72, sizeof(void*)*1);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 x_77 = x_72;
} else {
 lean_dec_ref(x_72);
 x_77 = lean_box(0);
}
lean_inc(x_73);
x_89 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_89, 0, x_73);
lean_ctor_set_uint8(x_89, sizeof(void*)*1, x_74);
if (x_76 == 0)
{
uint8_t x_90; lean_object* x_91; 
x_90 = 1;
lean_inc(x_75);
x_91 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_91, 0, x_75);
lean_ctor_set_uint8(x_91, sizeof(void*)*1, x_90);
lean_ctor_set(x_2, 1, x_91);
lean_ctor_set(x_2, 0, x_89);
x_78 = x_2;
goto block_88;
}
else
{
uint8_t x_92; lean_object* x_93; 
x_92 = 0;
lean_inc(x_75);
x_93 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_93, 0, x_75);
lean_ctor_set_uint8(x_93, sizeof(void*)*1, x_92);
lean_ctor_set(x_2, 1, x_93);
lean_ctor_set(x_2, 0, x_89);
x_78 = x_2;
goto block_88;
}
block_88:
{
lean_object* x_79; 
x_79 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_1, x_78);
if (x_74 == 0)
{
lean_object* x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc_ref(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc_ref(x_81);
lean_dec_ref(x_79);
x_82 = 1;
if (lean_is_scalar(x_77)) {
 x_83 = lean_alloc_ctor(0, 1, 1);
} else {
 x_83 = x_77;
}
lean_ctor_set(x_83, 0, x_73);
lean_ctor_set_uint8(x_83, sizeof(void*)*1, x_82);
x_24 = x_80;
x_25 = x_75;
x_26 = x_76;
x_27 = x_81;
x_28 = x_83;
goto block_47;
}
else
{
lean_object* x_84; lean_object* x_85; uint8_t x_86; lean_object* x_87; 
x_84 = lean_ctor_get(x_79, 0);
lean_inc_ref(x_84);
x_85 = lean_ctor_get(x_79, 1);
lean_inc_ref(x_85);
lean_dec_ref(x_79);
x_86 = 0;
if (lean_is_scalar(x_77)) {
 x_87 = lean_alloc_ctor(0, 1, 1);
} else {
 x_87 = x_77;
}
lean_ctor_set(x_87, 0, x_73);
lean_ctor_set_uint8(x_87, sizeof(void*)*1, x_86);
x_24 = x_84;
x_25 = x_75;
x_26 = x_76;
x_27 = x_85;
x_28 = x_87;
goto block_47;
}
}
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; lean_object* x_101; lean_object* x_102; lean_object* x_113; 
x_94 = lean_ctor_get(x_2, 0);
x_95 = lean_ctor_get(x_2, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_2);
x_96 = lean_ctor_get(x_94, 0);
lean_inc(x_96);
x_97 = lean_ctor_get_uint8(x_94, sizeof(void*)*1);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 x_98 = x_94;
} else {
 lean_dec_ref(x_94);
 x_98 = lean_box(0);
}
x_99 = lean_ctor_get(x_95, 0);
lean_inc(x_99);
x_100 = lean_ctor_get_uint8(x_95, sizeof(void*)*1);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 x_101 = x_95;
} else {
 lean_dec_ref(x_95);
 x_101 = lean_box(0);
}
lean_inc(x_96);
if (lean_is_scalar(x_98)) {
 x_113 = lean_alloc_ctor(0, 1, 1);
} else {
 x_113 = x_98;
}
lean_ctor_set(x_113, 0, x_96);
lean_ctor_set_uint8(x_113, sizeof(void*)*1, x_97);
if (x_100 == 0)
{
uint8_t x_114; lean_object* x_115; lean_object* x_116; 
x_114 = 1;
lean_inc(x_99);
x_115 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_115, 0, x_99);
lean_ctor_set_uint8(x_115, sizeof(void*)*1, x_114);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_113);
lean_ctor_set(x_116, 1, x_115);
x_102 = x_116;
goto block_112;
}
else
{
uint8_t x_117; lean_object* x_118; lean_object* x_119; 
x_117 = 0;
lean_inc(x_99);
x_118 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_118, 0, x_99);
lean_ctor_set_uint8(x_118, sizeof(void*)*1, x_117);
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_113);
lean_ctor_set(x_119, 1, x_118);
x_102 = x_119;
goto block_112;
}
block_112:
{
lean_object* x_103; 
x_103 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_1, x_102);
if (x_97 == 0)
{
lean_object* x_104; lean_object* x_105; uint8_t x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc_ref(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc_ref(x_105);
lean_dec_ref(x_103);
x_106 = 1;
if (lean_is_scalar(x_101)) {
 x_107 = lean_alloc_ctor(0, 1, 1);
} else {
 x_107 = x_101;
}
lean_ctor_set(x_107, 0, x_96);
lean_ctor_set_uint8(x_107, sizeof(void*)*1, x_106);
x_24 = x_104;
x_25 = x_99;
x_26 = x_100;
x_27 = x_105;
x_28 = x_107;
goto block_47;
}
else
{
lean_object* x_108; lean_object* x_109; uint8_t x_110; lean_object* x_111; 
x_108 = lean_ctor_get(x_103, 0);
lean_inc_ref(x_108);
x_109 = lean_ctor_get(x_103, 1);
lean_inc_ref(x_109);
lean_dec_ref(x_103);
x_110 = 0;
if (lean_is_scalar(x_101)) {
 x_111 = lean_alloc_ctor(0, 1, 1);
} else {
 x_111 = x_101;
}
lean_ctor_set(x_111, 0, x_96);
lean_ctor_set_uint8(x_111, sizeof(void*)*1, x_110);
x_24 = x_108;
x_25 = x_99;
x_26 = x_100;
x_27 = x_109;
x_28 = x_111;
goto block_47;
}
}
}
block_8:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_3, x_6);
return x_7;
}
block_23:
{
uint8_t x_12; 
x_12 = lean_ctor_get_uint8(x_10, sizeof(void*)*1);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 1;
lean_ctor_set_uint8(x_10, sizeof(void*)*1, x_14);
x_3 = x_9;
x_4 = x_11;
x_5 = x_10;
goto block_8;
}
else
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = 1;
x_17 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set_uint8(x_17, sizeof(void*)*1, x_16);
x_3 = x_9;
x_4 = x_11;
x_5 = x_17;
goto block_8;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = 0;
lean_ctor_set_uint8(x_10, sizeof(void*)*1, x_19);
x_3 = x_9;
x_4 = x_11;
x_5 = x_10;
goto block_8;
}
else
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_10, 0);
lean_inc(x_20);
lean_dec(x_10);
x_21 = 0;
x_22 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*1, x_21);
x_3 = x_9;
x_4 = x_11;
x_5 = x_22;
goto block_8;
}
}
}
block_47:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_29, 0, x_25);
lean_ctor_set_uint8(x_29, sizeof(void*)*1, x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_24, x_30);
x_32 = lean_ctor_get_uint8(x_27, sizeof(void*)*1);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_31, 0);
lean_inc_ref(x_33);
x_34 = lean_ctor_get(x_31, 1);
lean_inc_ref(x_34);
lean_dec_ref(x_31);
x_35 = !lean_is_exclusive(x_27);
if (x_35 == 0)
{
uint8_t x_36; 
x_36 = 1;
lean_ctor_set_uint8(x_27, sizeof(void*)*1, x_36);
x_9 = x_33;
x_10 = x_34;
x_11 = x_27;
goto block_23;
}
else
{
lean_object* x_37; uint8_t x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_27, 0);
lean_inc(x_37);
lean_dec(x_27);
x_38 = 1;
x_39 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set_uint8(x_39, sizeof(void*)*1, x_38);
x_9 = x_33;
x_10 = x_34;
x_11 = x_39;
goto block_23;
}
}
else
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = lean_ctor_get(x_31, 0);
lean_inc_ref(x_40);
x_41 = lean_ctor_get(x_31, 1);
lean_inc_ref(x_41);
lean_dec_ref(x_31);
x_42 = !lean_is_exclusive(x_27);
if (x_42 == 0)
{
uint8_t x_43; 
x_43 = 0;
lean_ctor_set_uint8(x_27, sizeof(void*)*1, x_43);
x_9 = x_40;
x_10 = x_41;
x_11 = x_27;
goto block_23;
}
else
{
lean_object* x_44; uint8_t x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_27, 0);
lean_inc(x_44);
lean_dec(x_27);
x_45 = 0;
x_46 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set_uint8(x_46, sizeof(void*)*1, x_45);
x_9 = x_40;
x_10 = x_41;
x_11 = x_46;
goto block_23;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_emptyWithCapacity___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__11___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_emptyWithCapacity___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_mk_empty_array_with_capacity(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip_go___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__12___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_24; lean_object* x_25; 
x_24 = lean_nat_dec_lt(x_3, x_1);
if (x_24 == 0)
{
lean_object* x_36; 
lean_dec(x_3);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_2);
lean_ctor_set(x_36, 1, x_4);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_37 = lean_array_fget(x_5, x_3);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_shiftr(x_37, x_38);
x_40 = lean_nat_land(x_38, x_37);
lean_dec(x_37);
x_41 = lean_unsigned_to_nat(0u);
x_42 = lean_nat_dec_eq(x_40, x_41);
lean_dec(x_40);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_43, 0, x_39);
lean_ctor_set_uint8(x_43, sizeof(void*)*1, x_24);
x_25 = x_43;
goto block_35;
}
else
{
uint8_t x_44; lean_object* x_45; 
x_44 = 0;
x_45 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_45, 0, x_39);
lean_ctor_set_uint8(x_45, sizeof(void*)*1, x_44);
x_25 = x_45;
goto block_35;
}
}
block_23:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0(x_2, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc_ref(x_11);
x_12 = lean_ctor_get(x_10, 0);
lean_inc_ref(x_12);
lean_dec_ref(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_ctor_get_uint8(x_11, sizeof(void*)*1);
lean_dec_ref(x_11);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_nat_mul(x_13, x_17);
lean_dec(x_13);
x_19 = l_Bool_toNat(x_14);
x_20 = lean_nat_lor(x_18, x_19);
lean_dec(x_19);
lean_dec(x_18);
x_21 = lean_array_push(x_4, x_20);
x_2 = x_12;
x_3 = x_16;
x_4 = x_21;
goto _start;
}
block_35:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = lean_array_fget(x_6, x_3);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_shiftr(x_26, x_27);
x_29 = lean_nat_land(x_27, x_26);
lean_dec(x_26);
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_nat_dec_eq(x_29, x_30);
lean_dec(x_29);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set_uint8(x_32, sizeof(void*)*1, x_24);
x_7 = x_25;
x_8 = x_32;
goto block_23;
}
else
{
uint8_t x_33; lean_object* x_34; 
x_33 = 0;
x_34 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set_uint8(x_34, sizeof(void*)*1, x_33);
x_7 = x_25;
x_8 = x_34;
goto block_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip_go___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Std_Sat_AIG_RefVec_zip_go___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__12___redArg(x_1, x_2, x_3, x_4, x_6, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_mk_empty_array_with_capacity(x_1);
x_8 = l_Std_Sat_AIG_RefVec_zip_go___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__12___redArg(x_1, x_2, x_6, x_7, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11___redArg(x_1, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold_go___at___Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14_spec__14___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_15; 
x_15 = lean_nat_dec_lt(x_3, x_4);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_3);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_array_fget(x_5, x_3);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_shiftr(x_17, x_18);
x_20 = lean_nat_land(x_18, x_17);
lean_dec(x_17);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_dec_eq(x_20, x_21);
lean_dec(x_20);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set_uint8(x_23, sizeof(void*)*1, x_15);
x_6 = x_23;
goto block_14;
}
else
{
uint8_t x_24; lean_object* x_25; 
x_24 = 0;
x_25 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set_uint8(x_25, sizeof(void*)*1, x_24);
x_6 = x_25;
goto block_14;
}
}
block_14:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_1, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc_ref(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc_ref(x_10);
lean_dec_ref(x_8);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
x_1 = x_9;
x_2 = x_10;
x_3 = x_12;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold_go___at___Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14_spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_Sat_AIG_RefVec_fold_go___at___Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14_spec__14___redArg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
static lean_object* _init_l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg___closed__0() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg___closed__0;
x_6 = l_Std_Sat_AIG_RefVec_fold_go___at___Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14_spec__14___redArg(x_2, x_5, x_4, x_1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg(x_1, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11___redArg(x_1, x_2, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc_ref(x_6);
lean_dec_ref(x_4);
x_7 = l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg(x_1, x_5, x_6);
lean_dec_ref(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_map_go___at___Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17_spec__17___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_22; 
x_22 = lean_nat_dec_lt(x_4, x_2);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_4);
lean_dec_ref(x_1);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_3);
lean_ctor_set(x_23, 1, x_5);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_24 = lean_array_fget(x_6, x_4);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_shiftr(x_24, x_25);
x_27 = lean_nat_land(x_25, x_24);
lean_dec(x_24);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_nat_dec_eq(x_27, x_28);
lean_dec(x_27);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set_uint8(x_30, sizeof(void*)*1, x_22);
x_7 = x_30;
goto block_21;
}
else
{
uint8_t x_31; lean_object* x_32; 
x_31 = 0;
x_32 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set_uint8(x_32, sizeof(void*)*1, x_31);
x_7 = x_32;
goto block_21;
}
}
block_21:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc_ref(x_1);
x_8 = lean_apply_2(x_1, x_3, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc_ref(x_9);
x_10 = lean_ctor_get(x_8, 0);
lean_inc_ref(x_10);
lean_dec_ref(x_8);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = lean_ctor_get_uint8(x_9, sizeof(void*)*1);
lean_dec_ref(x_9);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_4, x_13);
lean_dec(x_4);
x_15 = lean_unsigned_to_nat(2u);
x_16 = lean_nat_mul(x_11, x_15);
lean_dec(x_11);
x_17 = l_Bool_toNat(x_12);
x_18 = lean_nat_lor(x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
x_19 = lean_array_push(x_5, x_18);
x_3 = x_10;
x_4 = x_14;
x_5 = x_19;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_map_go___at___Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17_spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Std_Sat_AIG_RefVec_map_go___at___Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17_spec__17___redArg(x_1, x_2, x_3, x_4, x_6, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_5);
lean_dec_ref(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_mk_empty_array_with_capacity(x_1);
x_8 = l_Std_Sat_AIG_RefVec_map_go___at___Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17_spec__17___redArg(x_5, x_1, x_2, x_6, x_7, x_4);
lean_dec_ref(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
uint8_t x_5; lean_object* x_6; 
x_5 = 1;
lean_ctor_set_uint8(x_2, sizeof(void*)*1, x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = 1;
x_9 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set_uint8(x_9, sizeof(void*)*1, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; 
x_12 = 0;
lean_ctor_set_uint8(x_2, sizeof(void*)*1, x_12);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_2);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = 0;
x_16 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set_uint8(x_16, sizeof(void*)*1, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17___lam__0), 2, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = l_Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17(x_1, x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_mkXorCached___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20_spec__20(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
lean_inc_ref(x_2);
x_24 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_1, x_2);
x_25 = lean_ctor_get(x_24, 0);
lean_inc_ref(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc_ref(x_26);
lean_dec_ref(x_24);
x_45 = lean_ctor_get(x_2, 0);
lean_inc_ref(x_45);
x_46 = lean_ctor_get(x_2, 1);
lean_inc_ref(x_46);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_47 = x_2;
} else {
 lean_dec_ref(x_2);
 x_47 = lean_box(0);
}
x_48 = !lean_is_exclusive(x_45);
if (x_48 == 0)
{
uint8_t x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get_uint8(x_45, sizeof(void*)*1);
x_50 = lean_ctor_get(x_46, 0);
lean_inc(x_50);
x_51 = lean_ctor_get_uint8(x_46, sizeof(void*)*1);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 x_52 = x_46;
} else {
 lean_dec_ref(x_46);
 x_52 = lean_box(0);
}
if (x_49 == 0)
{
uint8_t x_61; 
x_61 = 1;
lean_ctor_set_uint8(x_45, sizeof(void*)*1, x_61);
x_53 = x_45;
goto block_60;
}
else
{
uint8_t x_62; 
x_62 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*1, x_62);
x_53 = x_45;
goto block_60;
}
block_60:
{
if (x_51 == 0)
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; 
x_54 = 1;
if (lean_is_scalar(x_52)) {
 x_55 = lean_alloc_ctor(0, 1, 1);
} else {
 x_55 = x_52;
}
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set_uint8(x_55, sizeof(void*)*1, x_54);
if (lean_is_scalar(x_47)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_47;
}
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_55);
x_27 = x_56;
goto block_44;
}
else
{
uint8_t x_57; lean_object* x_58; lean_object* x_59; 
x_57 = 0;
if (lean_is_scalar(x_52)) {
 x_58 = lean_alloc_ctor(0, 1, 1);
} else {
 x_58 = x_52;
}
lean_ctor_set(x_58, 0, x_50);
lean_ctor_set_uint8(x_58, sizeof(void*)*1, x_57);
if (lean_is_scalar(x_47)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_47;
}
lean_ctor_set(x_59, 0, x_53);
lean_ctor_set(x_59, 1, x_58);
x_27 = x_59;
goto block_44;
}
}
}
else
{
lean_object* x_63; uint8_t x_64; lean_object* x_65; uint8_t x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_45, 0);
x_64 = lean_ctor_get_uint8(x_45, sizeof(void*)*1);
lean_inc(x_63);
lean_dec(x_45);
x_65 = lean_ctor_get(x_46, 0);
lean_inc(x_65);
x_66 = lean_ctor_get_uint8(x_46, sizeof(void*)*1);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 x_67 = x_46;
} else {
 lean_dec_ref(x_46);
 x_67 = lean_box(0);
}
if (x_64 == 0)
{
uint8_t x_76; lean_object* x_77; 
x_76 = 1;
x_77 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_77, 0, x_63);
lean_ctor_set_uint8(x_77, sizeof(void*)*1, x_76);
x_68 = x_77;
goto block_75;
}
else
{
uint8_t x_78; lean_object* x_79; 
x_78 = 0;
x_79 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_79, 0, x_63);
lean_ctor_set_uint8(x_79, sizeof(void*)*1, x_78);
x_68 = x_79;
goto block_75;
}
block_75:
{
if (x_66 == 0)
{
uint8_t x_69; lean_object* x_70; lean_object* x_71; 
x_69 = 1;
if (lean_is_scalar(x_67)) {
 x_70 = lean_alloc_ctor(0, 1, 1);
} else {
 x_70 = x_67;
}
lean_ctor_set(x_70, 0, x_65);
lean_ctor_set_uint8(x_70, sizeof(void*)*1, x_69);
if (lean_is_scalar(x_47)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_47;
}
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_70);
x_27 = x_71;
goto block_44;
}
else
{
uint8_t x_72; lean_object* x_73; lean_object* x_74; 
x_72 = 0;
if (lean_is_scalar(x_67)) {
 x_73 = lean_alloc_ctor(0, 1, 1);
} else {
 x_73 = x_67;
}
lean_ctor_set(x_73, 0, x_65);
lean_ctor_set_uint8(x_73, sizeof(void*)*1, x_72);
if (lean_is_scalar(x_47)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_47;
}
lean_ctor_set(x_74, 0, x_68);
lean_ctor_set(x_74, 1, x_73);
x_27 = x_74;
goto block_44;
}
}
}
block_8:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_3, x_6);
return x_7;
}
block_23:
{
uint8_t x_12; 
x_12 = lean_ctor_get_uint8(x_9, sizeof(void*)*1);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 1;
lean_ctor_set_uint8(x_9, sizeof(void*)*1, x_14);
x_3 = x_10;
x_4 = x_11;
x_5 = x_9;
goto block_8;
}
else
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 0);
lean_inc(x_15);
lean_dec(x_9);
x_16 = 1;
x_17 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set_uint8(x_17, sizeof(void*)*1, x_16);
x_3 = x_10;
x_4 = x_11;
x_5 = x_17;
goto block_8;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = 0;
lean_ctor_set_uint8(x_9, sizeof(void*)*1, x_19);
x_3 = x_10;
x_4 = x_11;
x_5 = x_9;
goto block_8;
}
else
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_9, 0);
lean_inc(x_20);
lean_dec(x_9);
x_21 = 0;
x_22 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*1, x_21);
x_3 = x_10;
x_4 = x_11;
x_5 = x_22;
goto block_8;
}
}
}
block_44:
{
lean_object* x_28; uint8_t x_29; 
x_28 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_25, x_27);
x_29 = lean_ctor_get_uint8(x_26, sizeof(void*)*1);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_28, 0);
lean_inc_ref(x_30);
x_31 = lean_ctor_get(x_28, 1);
lean_inc_ref(x_31);
lean_dec_ref(x_28);
x_32 = !lean_is_exclusive(x_26);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = 1;
lean_ctor_set_uint8(x_26, sizeof(void*)*1, x_33);
x_9 = x_31;
x_10 = x_30;
x_11 = x_26;
goto block_23;
}
else
{
lean_object* x_34; uint8_t x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_26, 0);
lean_inc(x_34);
lean_dec(x_26);
x_35 = 1;
x_36 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set_uint8(x_36, sizeof(void*)*1, x_35);
x_9 = x_31;
x_10 = x_30;
x_11 = x_36;
goto block_23;
}
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = lean_ctor_get(x_28, 0);
lean_inc_ref(x_37);
x_38 = lean_ctor_get(x_28, 1);
lean_inc_ref(x_38);
lean_dec_ref(x_28);
x_39 = !lean_is_exclusive(x_26);
if (x_39 == 0)
{
uint8_t x_40; 
x_40 = 0;
lean_ctor_set_uint8(x_26, sizeof(void*)*1, x_40);
x_9 = x_38;
x_10 = x_37;
x_11 = x_26;
goto block_23;
}
else
{
lean_object* x_41; uint8_t x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_26, 0);
lean_inc(x_41);
lean_dec(x_26);
x_42 = 0;
x_43 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set_uint8(x_43, sizeof(void*)*1, x_42);
x_9 = x_38;
x_10 = x_37;
x_11 = x_43;
goto block_23;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_mkOrCached___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20_spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_54; 
x_34 = lean_ctor_get(x_2, 0);
lean_inc_ref(x_34);
x_35 = lean_ctor_get(x_2, 1);
lean_inc_ref(x_35);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_36 = x_2;
} else {
 lean_dec_ref(x_2);
 x_36 = lean_box(0);
}
x_54 = lean_ctor_get_uint8(x_34, sizeof(void*)*1);
if (x_54 == 0)
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_34);
if (x_55 == 0)
{
uint8_t x_56; 
x_56 = 1;
lean_ctor_set_uint8(x_34, sizeof(void*)*1, x_56);
x_37 = x_34;
goto block_53;
}
else
{
lean_object* x_57; uint8_t x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_34, 0);
lean_inc(x_57);
lean_dec(x_34);
x_58 = 1;
x_59 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set_uint8(x_59, sizeof(void*)*1, x_58);
x_37 = x_59;
goto block_53;
}
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_34);
if (x_60 == 0)
{
uint8_t x_61; 
x_61 = 0;
lean_ctor_set_uint8(x_34, sizeof(void*)*1, x_61);
x_37 = x_34;
goto block_53;
}
else
{
lean_object* x_62; uint8_t x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_34, 0);
lean_inc(x_62);
lean_dec(x_34);
x_63 = 0;
x_64 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set_uint8(x_64, sizeof(void*)*1, x_63);
x_37 = x_64;
goto block_53;
}
}
block_33:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_1, x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc_ref(x_5);
x_6 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_4, 1);
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 1;
lean_ctor_set_uint8(x_5, sizeof(void*)*1, x_10);
return x_4;
}
else
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_5, 0);
lean_inc(x_11);
lean_dec(x_5);
x_12 = 1;
x_13 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set_uint8(x_13, sizeof(void*)*1, x_12);
lean_ctor_set(x_4, 1, x_13);
return x_4;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
lean_dec(x_4);
x_15 = lean_ctor_get(x_5, 0);
lean_inc(x_15);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 x_16 = x_5;
} else {
 lean_dec_ref(x_5);
 x_16 = lean_box(0);
}
x_17 = 1;
if (lean_is_scalar(x_16)) {
 x_18 = lean_alloc_ctor(0, 1, 1);
} else {
 x_18 = x_16;
}
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set_uint8(x_18, sizeof(void*)*1, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_4);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_4, 1);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_5);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = 0;
lean_ctor_set_uint8(x_5, sizeof(void*)*1, x_23);
return x_4;
}
else
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_5, 0);
lean_inc(x_24);
lean_dec(x_5);
x_25 = 0;
x_26 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set_uint8(x_26, sizeof(void*)*1, x_25);
lean_ctor_set(x_4, 1, x_26);
return x_4;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_4, 0);
lean_inc(x_27);
lean_dec(x_4);
x_28 = lean_ctor_get(x_5, 0);
lean_inc(x_28);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 x_29 = x_5;
} else {
 lean_dec_ref(x_5);
 x_29 = lean_box(0);
}
x_30 = 0;
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 1, 1);
} else {
 x_31 = x_29;
}
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set_uint8(x_31, sizeof(void*)*1, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
block_53:
{
uint8_t x_38; 
x_38 = lean_ctor_get_uint8(x_35, sizeof(void*)*1);
if (x_38 == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_35);
if (x_39 == 0)
{
uint8_t x_40; lean_object* x_41; 
x_40 = 1;
lean_ctor_set_uint8(x_35, sizeof(void*)*1, x_40);
if (lean_is_scalar(x_36)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_36;
}
lean_ctor_set(x_41, 0, x_37);
lean_ctor_set(x_41, 1, x_35);
x_3 = x_41;
goto block_33;
}
else
{
lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_35, 0);
lean_inc(x_42);
lean_dec(x_35);
x_43 = 1;
x_44 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set_uint8(x_44, sizeof(void*)*1, x_43);
if (lean_is_scalar(x_36)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_36;
}
lean_ctor_set(x_45, 0, x_37);
lean_ctor_set(x_45, 1, x_44);
x_3 = x_45;
goto block_33;
}
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_35);
if (x_46 == 0)
{
uint8_t x_47; lean_object* x_48; 
x_47 = 0;
lean_ctor_set_uint8(x_35, sizeof(void*)*1, x_47);
if (lean_is_scalar(x_36)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_36;
}
lean_ctor_set(x_48, 0, x_37);
lean_ctor_set(x_48, 1, x_35);
x_3 = x_48;
goto block_33;
}
else
{
lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_35, 0);
lean_inc(x_49);
lean_dec(x_35);
x_50 = 0;
x_51 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set_uint8(x_51, sizeof(void*)*1, x_50);
if (lean_is_scalar(x_36)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_36;
}
lean_ctor_set(x_52, 0, x_37);
lean_ctor_set(x_52, 1, x_51);
x_3 = x_52;
goto block_33;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc_ref(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc_ref(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc_ref(x_5);
lean_dec_ref(x_2);
lean_inc_ref(x_4);
lean_inc_ref(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = l_Std_Sat_AIG_mkXorCached___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20_spec__20(x_1, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_3);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_4);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_5);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; uint8_t x_19; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
x_16 = lean_ctor_get(x_4, 0);
x_17 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 0, x_13);
x_18 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_12, x_7);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_ctor_set(x_4, 0, x_14);
lean_ctor_set_uint8(x_4, sizeof(void*)*1, x_15);
lean_ctor_set(x_3, 0, x_16);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_17);
lean_ctor_set(x_18, 1, x_3);
lean_ctor_set(x_18, 0, x_4);
x_22 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_20, x_18);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 0);
lean_ctor_set(x_22, 0, x_21);
x_26 = l_Std_Sat_AIG_mkOrCached___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20_spec__21(x_25, x_22);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_22, 0);
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get_uint8(x_21, sizeof(void*)*1);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*1, x_29);
lean_ctor_set(x_22, 0, x_30);
x_31 = l_Std_Sat_AIG_mkOrCached___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20_spec__21(x_27, x_22);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_32 = lean_ctor_get(x_22, 0);
x_33 = lean_ctor_get(x_22, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_22);
x_34 = lean_ctor_get(x_21, 0);
lean_inc(x_34);
x_35 = lean_ctor_get_uint8(x_21, sizeof(void*)*1);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 x_36 = x_21;
} else {
 lean_dec_ref(x_21);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(0, 1, 1);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set_uint8(x_37, sizeof(void*)*1, x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_33);
x_39 = l_Std_Sat_AIG_mkOrCached___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20_spec__21(x_32, x_38);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_40 = lean_ctor_get(x_18, 0);
x_41 = lean_ctor_get(x_18, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_18);
lean_ctor_set(x_4, 0, x_14);
lean_ctor_set_uint8(x_4, sizeof(void*)*1, x_15);
lean_ctor_set(x_3, 0, x_16);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_17);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_4);
lean_ctor_set(x_42, 1, x_3);
x_43 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_40, x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc_ref(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc_ref(x_45);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_46 = x_43;
} else {
 lean_dec_ref(x_43);
 x_46 = lean_box(0);
}
x_47 = lean_ctor_get(x_41, 0);
lean_inc(x_47);
x_48 = lean_ctor_get_uint8(x_41, sizeof(void*)*1);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 x_49 = x_41;
} else {
 lean_dec_ref(x_41);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(0, 1, 1);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set_uint8(x_50, sizeof(void*)*1, x_48);
if (lean_is_scalar(x_46)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_46;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_45);
x_52 = l_Std_Sat_AIG_mkOrCached___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20_spec__21(x_44, x_51);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_53 = lean_ctor_get(x_7, 0);
x_54 = lean_ctor_get(x_7, 1);
x_55 = lean_ctor_get(x_3, 0);
x_56 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
x_57 = lean_ctor_get(x_4, 0);
x_58 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
x_59 = lean_ctor_get(x_5, 0);
x_60 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
lean_inc(x_59);
lean_dec(x_5);
x_61 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set_uint8(x_61, sizeof(void*)*1, x_60);
lean_ctor_set(x_7, 1, x_61);
lean_ctor_set(x_7, 0, x_54);
x_62 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_53, x_7);
x_63 = lean_ctor_get(x_62, 0);
lean_inc_ref(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc_ref(x_64);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_65 = x_62;
} else {
 lean_dec_ref(x_62);
 x_65 = lean_box(0);
}
lean_ctor_set(x_4, 0, x_55);
lean_ctor_set_uint8(x_4, sizeof(void*)*1, x_56);
lean_ctor_set(x_3, 0, x_57);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_58);
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_4);
lean_ctor_set(x_66, 1, x_3);
x_67 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_63, x_66);
x_68 = lean_ctor_get(x_67, 0);
lean_inc_ref(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc_ref(x_69);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_70 = x_67;
} else {
 lean_dec_ref(x_67);
 x_70 = lean_box(0);
}
x_71 = lean_ctor_get(x_64, 0);
lean_inc(x_71);
x_72 = lean_ctor_get_uint8(x_64, sizeof(void*)*1);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 x_73 = x_64;
} else {
 lean_dec_ref(x_64);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(0, 1, 1);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set_uint8(x_74, sizeof(void*)*1, x_72);
if (lean_is_scalar(x_70)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_70;
}
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_69);
x_76 = l_Std_Sat_AIG_mkOrCached___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20_spec__21(x_68, x_75);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; uint8_t x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_77 = lean_ctor_get(x_7, 0);
x_78 = lean_ctor_get(x_7, 1);
x_79 = lean_ctor_get(x_3, 0);
x_80 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
x_81 = lean_ctor_get(x_4, 0);
x_82 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
lean_inc(x_81);
lean_dec(x_4);
x_83 = lean_ctor_get(x_5, 0);
lean_inc(x_83);
x_84 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 x_85 = x_5;
} else {
 lean_dec_ref(x_5);
 x_85 = lean_box(0);
}
if (lean_is_scalar(x_85)) {
 x_86 = lean_alloc_ctor(0, 1, 1);
} else {
 x_86 = x_85;
}
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set_uint8(x_86, sizeof(void*)*1, x_84);
lean_ctor_set(x_7, 1, x_86);
lean_ctor_set(x_7, 0, x_78);
x_87 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_77, x_7);
x_88 = lean_ctor_get(x_87, 0);
lean_inc_ref(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc_ref(x_89);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_90 = x_87;
} else {
 lean_dec_ref(x_87);
 x_90 = lean_box(0);
}
x_91 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_91, 0, x_79);
lean_ctor_set_uint8(x_91, sizeof(void*)*1, x_80);
lean_ctor_set(x_3, 0, x_81);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_82);
if (lean_is_scalar(x_90)) {
 x_92 = lean_alloc_ctor(0, 2, 0);
} else {
 x_92 = x_90;
}
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_3);
x_93 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_88, x_92);
x_94 = lean_ctor_get(x_93, 0);
lean_inc_ref(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc_ref(x_95);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_96 = x_93;
} else {
 lean_dec_ref(x_93);
 x_96 = lean_box(0);
}
x_97 = lean_ctor_get(x_89, 0);
lean_inc(x_97);
x_98 = lean_ctor_get_uint8(x_89, sizeof(void*)*1);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 x_99 = x_89;
} else {
 lean_dec_ref(x_89);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(0, 1, 1);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set_uint8(x_100, sizeof(void*)*1, x_98);
if (lean_is_scalar(x_96)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_96;
}
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_95);
x_102 = l_Std_Sat_AIG_mkOrCached___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20_spec__21(x_94, x_101);
return x_102;
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; lean_object* x_107; uint8_t x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_103 = lean_ctor_get(x_7, 0);
x_104 = lean_ctor_get(x_7, 1);
x_105 = lean_ctor_get(x_3, 0);
x_106 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
lean_inc(x_105);
lean_dec(x_3);
x_107 = lean_ctor_get(x_4, 0);
lean_inc(x_107);
x_108 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 x_109 = x_4;
} else {
 lean_dec_ref(x_4);
 x_109 = lean_box(0);
}
x_110 = lean_ctor_get(x_5, 0);
lean_inc(x_110);
x_111 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 x_112 = x_5;
} else {
 lean_dec_ref(x_5);
 x_112 = lean_box(0);
}
if (lean_is_scalar(x_112)) {
 x_113 = lean_alloc_ctor(0, 1, 1);
} else {
 x_113 = x_112;
}
lean_ctor_set(x_113, 0, x_110);
lean_ctor_set_uint8(x_113, sizeof(void*)*1, x_111);
lean_ctor_set(x_7, 1, x_113);
lean_ctor_set(x_7, 0, x_104);
x_114 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_103, x_7);
x_115 = lean_ctor_get(x_114, 0);
lean_inc_ref(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc_ref(x_116);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_117 = x_114;
} else {
 lean_dec_ref(x_114);
 x_117 = lean_box(0);
}
if (lean_is_scalar(x_109)) {
 x_118 = lean_alloc_ctor(0, 1, 1);
} else {
 x_118 = x_109;
}
lean_ctor_set(x_118, 0, x_105);
lean_ctor_set_uint8(x_118, sizeof(void*)*1, x_106);
x_119 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_119, 0, x_107);
lean_ctor_set_uint8(x_119, sizeof(void*)*1, x_108);
if (lean_is_scalar(x_117)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_117;
}
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
x_121 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_115, x_120);
x_122 = lean_ctor_get(x_121, 0);
lean_inc_ref(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc_ref(x_123);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_124 = x_121;
} else {
 lean_dec_ref(x_121);
 x_124 = lean_box(0);
}
x_125 = lean_ctor_get(x_116, 0);
lean_inc(x_125);
x_126 = lean_ctor_get_uint8(x_116, sizeof(void*)*1);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 x_127 = x_116;
} else {
 lean_dec_ref(x_116);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(0, 1, 1);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set_uint8(x_128, sizeof(void*)*1, x_126);
if (lean_is_scalar(x_124)) {
 x_129 = lean_alloc_ctor(0, 2, 0);
} else {
 x_129 = x_124;
}
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_123);
x_130 = l_Std_Sat_AIG_mkOrCached___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20_spec__21(x_122, x_129);
return x_130;
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; lean_object* x_138; lean_object* x_139; uint8_t x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_131 = lean_ctor_get(x_7, 0);
x_132 = lean_ctor_get(x_7, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_7);
x_133 = lean_ctor_get(x_3, 0);
lean_inc(x_133);
x_134 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 x_135 = x_3;
} else {
 lean_dec_ref(x_3);
 x_135 = lean_box(0);
}
x_136 = lean_ctor_get(x_4, 0);
lean_inc(x_136);
x_137 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 x_138 = x_4;
} else {
 lean_dec_ref(x_4);
 x_138 = lean_box(0);
}
x_139 = lean_ctor_get(x_5, 0);
lean_inc(x_139);
x_140 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 x_141 = x_5;
} else {
 lean_dec_ref(x_5);
 x_141 = lean_box(0);
}
if (lean_is_scalar(x_141)) {
 x_142 = lean_alloc_ctor(0, 1, 1);
} else {
 x_142 = x_141;
}
lean_ctor_set(x_142, 0, x_139);
lean_ctor_set_uint8(x_142, sizeof(void*)*1, x_140);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_132);
lean_ctor_set(x_143, 1, x_142);
x_144 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_131, x_143);
x_145 = lean_ctor_get(x_144, 0);
lean_inc_ref(x_145);
x_146 = lean_ctor_get(x_144, 1);
lean_inc_ref(x_146);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 lean_ctor_release(x_144, 1);
 x_147 = x_144;
} else {
 lean_dec_ref(x_144);
 x_147 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_148 = lean_alloc_ctor(0, 1, 1);
} else {
 x_148 = x_138;
}
lean_ctor_set(x_148, 0, x_133);
lean_ctor_set_uint8(x_148, sizeof(void*)*1, x_134);
if (lean_is_scalar(x_135)) {
 x_149 = lean_alloc_ctor(0, 1, 1);
} else {
 x_149 = x_135;
}
lean_ctor_set(x_149, 0, x_136);
lean_ctor_set_uint8(x_149, sizeof(void*)*1, x_137);
if (lean_is_scalar(x_147)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_147;
}
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
x_151 = l_Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0(x_145, x_150);
x_152 = lean_ctor_get(x_151, 0);
lean_inc_ref(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc_ref(x_153);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 x_154 = x_151;
} else {
 lean_dec_ref(x_151);
 x_154 = lean_box(0);
}
x_155 = lean_ctor_get(x_146, 0);
lean_inc(x_155);
x_156 = lean_ctor_get_uint8(x_146, sizeof(void*)*1);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 x_157 = x_146;
} else {
 lean_dec_ref(x_146);
 x_157 = lean_box(0);
}
if (lean_is_scalar(x_157)) {
 x_158 = lean_alloc_ctor(0, 1, 1);
} else {
 x_158 = x_157;
}
lean_ctor_set(x_158, 0, x_155);
lean_ctor_set_uint8(x_158, sizeof(void*)*1, x_156);
if (lean_is_scalar(x_154)) {
 x_159 = lean_alloc_ctor(0, 2, 0);
} else {
 x_159 = x_154;
}
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_153);
x_160 = l_Std_Sat_AIG_mkOrCached___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20_spec__21(x_152, x_159);
return x_160;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_17; lean_object* x_18; 
x_17 = lean_nat_dec_lt(x_5, x_1);
if (x_17 == 0)
{
lean_object* x_29; 
lean_dec(x_5);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_6);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_array_fget(x_3, x_5);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_shiftr(x_30, x_31);
x_33 = lean_nat_land(x_31, x_30);
lean_dec(x_30);
x_34 = lean_unsigned_to_nat(0u);
x_35 = lean_nat_dec_eq(x_33, x_34);
lean_dec(x_33);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_36, 0, x_32);
lean_ctor_set_uint8(x_36, sizeof(void*)*1, x_17);
x_18 = x_36;
goto block_28;
}
else
{
uint8_t x_37; lean_object* x_38; 
x_37 = 0;
x_38 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_38, 0, x_32);
lean_ctor_set_uint8(x_38, sizeof(void*)*1, x_37);
x_18 = x_38;
goto block_28;
}
}
block_16:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 2, x_6);
x_10 = l_Std_Tactic_BVDecide_BVExpr_bitblast_mkFullAdderCarry___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20_spec__20(x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc_ref(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc_ref(x_12);
lean_dec_ref(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_2 = x_11;
x_5 = x_14;
x_6 = x_12;
goto _start;
}
block_28:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_19 = lean_array_fget(x_4, x_5);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_shiftr(x_19, x_20);
x_22 = lean_nat_land(x_20, x_19);
lean_dec(x_19);
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_nat_dec_eq(x_22, x_23);
lean_dec(x_22);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_25, 0, x_21);
lean_ctor_set_uint8(x_25, sizeof(void*)*1, x_17);
x_7 = x_18;
x_8 = x_25;
goto block_16;
}
else
{
uint8_t x_26; lean_object* x_27; 
x_26 = 0;
x_27 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set_uint8(x_27, sizeof(void*)*1, x_26);
x_7 = x_18;
x_8 = x_27;
goto block_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc_ref(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc_ref(x_5);
lean_dec_ref(x_2);
x_6 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_7);
lean_dec_ref(x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20(x_4, x_1, x_6, x_7, x_8, x_5);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17(x_1, x_2, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc_ref(x_8);
lean_dec_ref(x_6);
x_9 = 1;
x_10 = l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg___closed__0;
lean_ctor_set(x_3, 1, x_8);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_3);
lean_ctor_set(x_11, 2, x_10);
x_12 = l_Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20(x_7, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc_ref(x_13);
x_14 = lean_ctor_get_uint8(x_13, sizeof(void*)*1);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_12, 1);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
lean_ctor_set_uint8(x_13, sizeof(void*)*1, x_9);
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_13, 0);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set_uint8(x_19, sizeof(void*)*1, x_9);
lean_ctor_set(x_12, 1, x_19);
return x_12;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_12, 0);
lean_inc(x_20);
lean_dec(x_12);
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 x_22 = x_13;
} else {
 lean_dec_ref(x_13);
 x_22 = lean_box(0);
}
if (lean_is_scalar(x_22)) {
 x_23 = lean_alloc_ctor(0, 1, 1);
} else {
 x_23 = x_22;
}
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set_uint8(x_23, sizeof(void*)*1, x_9);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_12);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_12, 1);
lean_dec(x_26);
x_27 = !lean_is_exclusive(x_13);
if (x_27 == 0)
{
uint8_t x_28; 
x_28 = 0;
lean_ctor_set_uint8(x_13, sizeof(void*)*1, x_28);
return x_12;
}
else
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_13, 0);
lean_inc(x_29);
lean_dec(x_13);
x_30 = 0;
x_31 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set_uint8(x_31, sizeof(void*)*1, x_30);
lean_ctor_set(x_12, 1, x_31);
return x_12;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_12, 0);
lean_inc(x_32);
lean_dec(x_12);
x_33 = lean_ctor_get(x_13, 0);
lean_inc(x_33);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 x_34 = x_13;
} else {
 lean_dec_ref(x_13);
 x_34 = lean_box(0);
}
x_35 = 0;
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 1, 1);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set_uint8(x_36, sizeof(void*)*1, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_38 = lean_ctor_get(x_3, 0);
x_39 = lean_ctor_get(x_3, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_3);
x_40 = l_Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17(x_1, x_2, x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc_ref(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc_ref(x_42);
lean_dec_ref(x_40);
x_43 = 1;
x_44 = l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg___closed__0;
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_38);
lean_ctor_set(x_45, 1, x_42);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_1);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_46, 2, x_44);
x_47 = l_Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20(x_41, x_46);
x_48 = lean_ctor_get(x_47, 1);
lean_inc_ref(x_48);
x_49 = lean_ctor_get_uint8(x_48, sizeof(void*)*1);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_47, 0);
lean_inc_ref(x_50);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_51 = x_47;
} else {
 lean_dec_ref(x_47);
 x_51 = lean_box(0);
}
x_52 = lean_ctor_get(x_48, 0);
lean_inc(x_52);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 x_53 = x_48;
} else {
 lean_dec_ref(x_48);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(0, 1, 1);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set_uint8(x_54, sizeof(void*)*1, x_43);
if (lean_is_scalar(x_51)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_51;
}
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; 
x_56 = lean_ctor_get(x_47, 0);
lean_inc_ref(x_56);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_57 = x_47;
} else {
 lean_dec_ref(x_47);
 x_57 = lean_box(0);
}
x_58 = lean_ctor_get(x_48, 0);
lean_inc(x_58);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 x_59 = x_48;
} else {
 lean_dec_ref(x_48);
 x_59 = lean_box(0);
}
x_60 = 0;
if (lean_is_scalar(x_59)) {
 x_61 = lean_alloc_ctor(0, 1, 1);
} else {
 x_61 = x_59;
}
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set_uint8(x_61, sizeof(void*)*1, x_60);
if (lean_is_scalar(x_57)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_57;
}
lean_ctor_set(x_62, 0, x_56);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_1, 2);
x_5 = lean_nat_dec_lt(x_4, x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set_uint8(x_7, sizeof(void*)*1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_array_fget(x_3, x_4);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_shiftr(x_8, x_9);
x_11 = lean_nat_land(x_9, x_8);
lean_dec(x_8);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set_uint8(x_14, sizeof(void*)*1, x_5);
return x_14;
}
else
{
uint8_t x_15; lean_object* x_16; 
x_15 = 0;
x_16 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set_uint8(x_16, sizeof(void*)*1, x_15);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_bitblast(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_5 = lean_ctor_get(x_2, 0);
lean_dec(x_5);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_7);
x_8 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_9 = lean_ctor_get(x_3, 2);
lean_inc_ref(x_9);
lean_dec_ref(x_3);
lean_ctor_set(x_2, 0, x_7);
lean_inc(x_6);
x_10 = l_Std_Tactic_BVDecide_BVExpr_bitblast(x_6, x_1, x_2);
x_11 = lean_ctor_get(x_10, 0);
lean_inc_ref(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc_ref(x_12);
lean_dec_ref(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_ctor_get(x_11, 1);
lean_ctor_set(x_11, 1, x_12);
lean_ctor_set(x_11, 0, x_9);
lean_inc(x_6);
x_16 = l_Std_Tactic_BVDecide_BVExpr_bitblast(x_6, x_14, x_11);
x_17 = lean_ctor_get(x_16, 0);
lean_inc_ref(x_17);
if (x_8 == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_16, 0);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_17, 0);
lean_ctor_set(x_17, 0, x_15);
x_22 = l_Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0(x_6, x_21, x_17);
lean_dec_ref(x_17);
lean_dec(x_6);
lean_ctor_set(x_16, 0, x_22);
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_15);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0(x_6, x_23, x_25);
lean_dec_ref(x_25);
lean_dec(x_6);
lean_ctor_set(x_16, 0, x_26);
return x_16;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_27 = lean_ctor_get(x_16, 1);
lean_inc(x_27);
lean_dec(x_16);
x_28 = lean_ctor_get(x_17, 0);
lean_inc_ref(x_28);
x_29 = lean_ctor_get(x_17, 1);
lean_inc_ref(x_29);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 lean_ctor_release(x_17, 1);
 x_30 = x_17;
} else {
 lean_dec_ref(x_17);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_15);
lean_ctor_set(x_31, 1, x_29);
x_32 = l_Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0(x_6, x_28, x_31);
lean_dec_ref(x_31);
lean_dec(x_6);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_27);
return x_33;
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_16);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_16, 0);
lean_dec(x_35);
x_36 = !lean_is_exclusive(x_17);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_17, 0);
lean_ctor_set(x_17, 0, x_15);
x_38 = l_Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17(x_6, x_37, x_17);
lean_ctor_set(x_16, 0, x_38);
return x_16;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_17, 0);
x_40 = lean_ctor_get(x_17, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_17);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_15);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17(x_6, x_39, x_41);
lean_ctor_set(x_16, 0, x_42);
return x_16;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_43 = lean_ctor_get(x_16, 1);
lean_inc(x_43);
lean_dec(x_16);
x_44 = lean_ctor_get(x_17, 0);
lean_inc_ref(x_44);
x_45 = lean_ctor_get(x_17, 1);
lean_inc_ref(x_45);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 lean_ctor_release(x_17, 1);
 x_46 = x_17;
} else {
 lean_dec_ref(x_17);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_15);
lean_ctor_set(x_47, 1, x_45);
x_48 = l_Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17(x_6, x_44, x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_43);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_11, 0);
x_51 = lean_ctor_get(x_11, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_11);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_9);
lean_ctor_set(x_52, 1, x_12);
lean_inc(x_6);
x_53 = l_Std_Tactic_BVDecide_BVExpr_bitblast(x_6, x_50, x_52);
x_54 = lean_ctor_get(x_53, 0);
lean_inc_ref(x_54);
if (x_8 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_55 = lean_ctor_get(x_53, 1);
lean_inc_ref(x_55);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_56 = x_53;
} else {
 lean_dec_ref(x_53);
 x_56 = lean_box(0);
}
x_57 = lean_ctor_get(x_54, 0);
lean_inc_ref(x_57);
x_58 = lean_ctor_get(x_54, 1);
lean_inc_ref(x_58);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_59 = x_54;
} else {
 lean_dec_ref(x_54);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_51);
lean_ctor_set(x_60, 1, x_58);
x_61 = l_Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0(x_6, x_57, x_60);
lean_dec_ref(x_60);
lean_dec(x_6);
if (lean_is_scalar(x_56)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_56;
}
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_55);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_63 = lean_ctor_get(x_53, 1);
lean_inc_ref(x_63);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_64 = x_53;
} else {
 lean_dec_ref(x_53);
 x_64 = lean_box(0);
}
x_65 = lean_ctor_get(x_54, 0);
lean_inc_ref(x_65);
x_66 = lean_ctor_get(x_54, 1);
lean_inc_ref(x_66);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_67 = x_54;
} else {
 lean_dec_ref(x_54);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_51);
lean_ctor_set(x_68, 1, x_66);
x_69 = l_Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17(x_6, x_65, x_68);
if (lean_is_scalar(x_64)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_64;
}
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_63);
return x_70;
}
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_71 = lean_ctor_get(x_2, 1);
lean_inc(x_71);
lean_dec(x_2);
x_72 = lean_ctor_get(x_3, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_73);
x_74 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_75 = lean_ctor_get(x_3, 2);
lean_inc_ref(x_75);
lean_dec_ref(x_3);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_71);
lean_inc(x_72);
x_77 = l_Std_Tactic_BVDecide_BVExpr_bitblast(x_72, x_1, x_76);
x_78 = lean_ctor_get(x_77, 0);
lean_inc_ref(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc_ref(x_79);
lean_dec_ref(x_77);
x_80 = lean_ctor_get(x_78, 0);
lean_inc_ref(x_80);
x_81 = lean_ctor_get(x_78, 1);
lean_inc_ref(x_81);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_82 = x_78;
} else {
 lean_dec_ref(x_78);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_75);
lean_ctor_set(x_83, 1, x_79);
lean_inc(x_72);
x_84 = l_Std_Tactic_BVDecide_BVExpr_bitblast(x_72, x_80, x_83);
x_85 = lean_ctor_get(x_84, 0);
lean_inc_ref(x_85);
if (x_74 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_86 = lean_ctor_get(x_84, 1);
lean_inc_ref(x_86);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_87 = x_84;
} else {
 lean_dec_ref(x_84);
 x_87 = lean_box(0);
}
x_88 = lean_ctor_get(x_85, 0);
lean_inc_ref(x_88);
x_89 = lean_ctor_get(x_85, 1);
lean_inc_ref(x_89);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_90 = x_85;
} else {
 lean_dec_ref(x_85);
 x_90 = lean_box(0);
}
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_90;
}
lean_ctor_set(x_91, 0, x_81);
lean_ctor_set(x_91, 1, x_89);
x_92 = l_Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0(x_72, x_88, x_91);
lean_dec_ref(x_91);
lean_dec(x_72);
if (lean_is_scalar(x_87)) {
 x_93 = lean_alloc_ctor(0, 2, 0);
} else {
 x_93 = x_87;
}
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_86);
return x_93;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_94 = lean_ctor_get(x_84, 1);
lean_inc_ref(x_94);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_95 = x_84;
} else {
 lean_dec_ref(x_84);
 x_95 = lean_box(0);
}
x_96 = lean_ctor_get(x_85, 0);
lean_inc_ref(x_96);
x_97 = lean_ctor_get(x_85, 1);
lean_inc_ref(x_97);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_98 = x_85;
} else {
 lean_dec_ref(x_85);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(0, 2, 0);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_81);
lean_ctor_set(x_99, 1, x_97);
x_100 = l_Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17(x_72, x_96, x_99);
if (lean_is_scalar(x_95)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_95;
}
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_94);
return x_101;
}
}
}
else
{
uint8_t x_102; 
x_102 = !lean_is_exclusive(x_2);
if (x_102 == 0)
{
lean_object* x_103; uint8_t x_104; 
x_103 = lean_ctor_get(x_2, 0);
lean_dec(x_103);
x_104 = !lean_is_exclusive(x_3);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
x_105 = lean_ctor_get(x_3, 0);
x_106 = lean_ctor_get(x_3, 1);
lean_ctor_set(x_2, 0, x_106);
lean_inc(x_105);
x_107 = l_Std_Tactic_BVDecide_BVExpr_bitblast(x_105, x_1, x_2);
x_108 = !lean_is_exclusive(x_107);
if (x_108 == 0)
{
lean_object* x_109; uint8_t x_110; 
x_109 = lean_ctor_get(x_107, 0);
x_110 = !lean_is_exclusive(x_109);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_109, 1);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 1, x_111);
x_112 = l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26___redArg(x_3);
lean_dec_ref(x_3);
lean_ctor_set(x_109, 1, x_112);
return x_107;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_113 = lean_ctor_get(x_109, 0);
x_114 = lean_ctor_get(x_109, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_109);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 1, x_114);
x_115 = l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26___redArg(x_3);
lean_dec_ref(x_3);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_113);
lean_ctor_set(x_116, 1, x_115);
lean_ctor_set(x_107, 0, x_116);
return x_107;
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_117 = lean_ctor_get(x_107, 0);
x_118 = lean_ctor_get(x_107, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_107);
x_119 = lean_ctor_get(x_117, 0);
lean_inc_ref(x_119);
x_120 = lean_ctor_get(x_117, 1);
lean_inc_ref(x_120);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_121 = x_117;
} else {
 lean_dec_ref(x_117);
 x_121 = lean_box(0);
}
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 1, x_120);
x_122 = l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26___redArg(x_3);
lean_dec_ref(x_3);
if (lean_is_scalar(x_121)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_121;
}
lean_ctor_set(x_123, 0, x_119);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_118);
return x_124;
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_125 = lean_ctor_get(x_3, 0);
x_126 = lean_ctor_get(x_3, 1);
x_127 = lean_ctor_get(x_3, 2);
lean_inc(x_127);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_3);
lean_ctor_set(x_2, 0, x_126);
lean_inc(x_125);
x_128 = l_Std_Tactic_BVDecide_BVExpr_bitblast(x_125, x_1, x_2);
x_129 = lean_ctor_get(x_128, 0);
lean_inc_ref(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc_ref(x_130);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_131 = x_128;
} else {
 lean_dec_ref(x_128);
 x_131 = lean_box(0);
}
x_132 = lean_ctor_get(x_129, 0);
lean_inc_ref(x_132);
x_133 = lean_ctor_get(x_129, 1);
lean_inc_ref(x_133);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_134 = x_129;
} else {
 lean_dec_ref(x_129);
 x_134 = lean_box(0);
}
x_135 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_135, 0, x_125);
lean_ctor_set(x_135, 1, x_133);
lean_ctor_set(x_135, 2, x_127);
x_136 = l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26___redArg(x_135);
lean_dec_ref(x_135);
if (lean_is_scalar(x_134)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_134;
}
lean_ctor_set(x_137, 0, x_132);
lean_ctor_set(x_137, 1, x_136);
if (lean_is_scalar(x_131)) {
 x_138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_138 = x_131;
}
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_130);
return x_138;
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_139 = lean_ctor_get(x_2, 1);
lean_inc(x_139);
lean_dec(x_2);
x_140 = lean_ctor_get(x_3, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_141);
x_142 = lean_ctor_get(x_3, 2);
lean_inc(x_142);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 x_143 = x_3;
} else {
 lean_dec_ref(x_3);
 x_143 = lean_box(0);
}
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_141);
lean_ctor_set(x_144, 1, x_139);
lean_inc(x_140);
x_145 = l_Std_Tactic_BVDecide_BVExpr_bitblast(x_140, x_1, x_144);
x_146 = lean_ctor_get(x_145, 0);
lean_inc_ref(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc_ref(x_147);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_148 = x_145;
} else {
 lean_dec_ref(x_145);
 x_148 = lean_box(0);
}
x_149 = lean_ctor_get(x_146, 0);
lean_inc_ref(x_149);
x_150 = lean_ctor_get(x_146, 1);
lean_inc_ref(x_150);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 x_151 = x_146;
} else {
 lean_dec_ref(x_146);
 x_151 = lean_box(0);
}
if (lean_is_scalar(x_143)) {
 x_152 = lean_alloc_ctor(0, 3, 0);
} else {
 x_152 = x_143;
 lean_ctor_set_tag(x_152, 0);
}
lean_ctor_set(x_152, 0, x_140);
lean_ctor_set(x_152, 1, x_150);
lean_ctor_set(x_152, 2, x_142);
x_153 = l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26___redArg(x_152);
lean_dec_ref(x_152);
if (lean_is_scalar(x_151)) {
 x_154 = lean_alloc_ctor(0, 2, 0);
} else {
 x_154 = x_151;
}
lean_ctor_set(x_154, 0, x_149);
lean_ctor_set(x_154, 1, x_153);
if (lean_is_scalar(x_148)) {
 x_155 = lean_alloc_ctor(0, 2, 0);
} else {
 x_155 = x_148;
}
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_147);
return x_155;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_hashDecl____x40_Std_Sat_AIG_Basic___hyg_546____at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__0___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = l_Std_Sat_AIG_hashDecl____x40_Std_Sat_AIG_Basic___hyg_546____at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__0(x_1);
lean_dec(x_1);
x_3 = lean_box_uint64(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_getConstant___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_Sat_AIG_getConstant___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__2(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3___redArg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Std_DHashMap_Internal_AssocList_contains___at___Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0_spec__3(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_emptyWithCapacity___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__11___redArg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_Sat_AIG_RefVec_emptyWithCapacity___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__11___redArg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_emptyWithCapacity___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__11___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_Sat_AIG_RefVec_emptyWithCapacity___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__11(x_1, x_2);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip_go___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__12___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_Sat_AIG_RefVec_zip_go___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__12___redArg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip_go___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Std_Sat_AIG_RefVec_zip_go___at___Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11_spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11___redArg(x_1, x_2, x_3);
lean_dec_ref(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_Sat_AIG_RefVec_zip___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__11(x_1, x_2, x_3, x_4, x_5);
lean_dec_ref(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold_go___at___Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14_spec__14___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_Sat_AIG_RefVec_fold_go___at___Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14_spec__14___redArg(x_1, x_2, x_3, x_4, x_5);
lean_dec_ref(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold_go___at___Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14_spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_Sat_AIG_RefVec_fold_go___at___Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14_spec__14(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg(x_1, x_2, x_3);
lean_dec_ref(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14(x_1, x_2, x_3, x_4);
lean_dec_ref(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0(x_1, x_2, x_3);
lean_dec_ref(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_map_go___at___Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17_spec__17___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_Sat_AIG_RefVec_map_go___at___Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17_spec__17___redArg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec_ref(x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_map_go___at___Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17_spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Std_Sat_AIG_RefVec_map_go___at___Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17_spec__17(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec_ref(x_7);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_Sat_AIG_RefVec_map___at___Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17_spec__17(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_Tactic_BVDecide_BVExpr_bitblast_blastNot___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__17(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit_go___at___Std_Tactic_BVDecide_BVExpr_bitblast_mkOverflowBit___at___Std_Tactic_BVDecide_BVPred_mkUlt___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__17_spec__20_spec__20(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26___redArg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26___redArg(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_Tactic_BVDecide_BVPred_blastGetLsbD___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__26(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_3;
}
}
lean_object* initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Circuit_Impl_Operations_Eq(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Circuit_Impl_Operations_Ult(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Circuit_Impl_Operations_GetLsbD(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Circuit_Impl_Expr(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Circuit_Impl_Pred(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Circuit_Impl_Operations_Eq(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Circuit_Impl_Operations_Ult(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Circuit_Impl_Operations_GetLsbD(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Circuit_Impl_Expr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0___closed__0 = _init_l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0___closed__0();
lean_mark_persistent(l_Std_Sat_AIG_mkGateCached_go___at___Std_Sat_AIG_mkGateCached___at___Std_Sat_AIG_mkBEqCached___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__0_spec__0_spec__0___closed__0);
l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg___closed__0 = _init_l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg___closed__0();
lean_mark_persistent(l_Std_Sat_AIG_RefVec_fold___at___Std_Tactic_BVDecide_BVPred_mkEq___at___Std_Tactic_BVDecide_BVPred_bitblast_spec__0_spec__14___redArg___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
