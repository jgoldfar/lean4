// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.Arith.Int.Simp
// Imports: Lean.Meta.Tactic.Simp.Arith.Util Lean.Meta.Tactic.Simp.Arith.Int.Basic
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
lean_object* lean_nat_gcd(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__1;
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__6;
lean_object* l_Lean_mkNatLit(lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__0;
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__0;
lean_object* l_Lean_mkIntLE(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__20;
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__2;
uint8_t l_Lean_Expr_isApp(lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__16;
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdCoeffs_x27_go___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__21;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__18;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__0;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__23;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__4;
uint8_t l_Int_Linear_Poly_isUnsatEq(lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__11;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__2;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__25;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__0(lean_object*, lean_object*, lean_object*);
uint8_t l_Int_Linear_Poly_isUnsatLe(lean_object*);
lean_object* l_Lean_Meta_Simp_Arith_Int_dvdCnstr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_denoteExpr___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__24;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__7;
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__0;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__17;
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdAll_go(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__1;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__1;
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__3;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__5;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__0;
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIntDvd(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__15;
lean_object* l_Lean_mkPropEq(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__20;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___Lean_Meta_Simp_Arith_Int_simpEq_x3f_spec__0(lean_object*);
lean_object* l_Lean_mkIntEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__15;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__19;
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdAll___boxed(lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__21;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t l_Int_Linear_beqExpr____x40_Init_Data_Int_Linear___hyg_160_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__9;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__23;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3;
lean_object* l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__1;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__26;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__3;
extern lean_object* l_Lean_instInhabitedExpr;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__0(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__25;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__4;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__5;
lean_object* l_Int_Linear_Poly_gcdCoeffs(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__19;
uint8_t l_Int_Linear_Poly_isValidLe(lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIntAdd(lean_object*, lean_object*);
lean_object* l_Int_Linear_Expr_norm(lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdCoeffs_x27___boxed(lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__6;
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Arith_Int_toContextExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__14;
lean_object* l_Lean_Meta_Simp_Arith_Int_ofPoly(lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__22;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_getConst(lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
lean_object* l_Int_Linear_Poly_toExpr(lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__24;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__0___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__8;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__2;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__3;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__8;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__0;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__13;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__1;
lean_object* l_Int_toNat(lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdAll_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdCoeffs_x27(lean_object*);
lean_object* l_Lean_Meta_Simp_Arith_withAbstractAtoms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__17;
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdAll(lean_object*);
extern lean_object* l_Lean_levelOne;
extern lean_object* l_Lean_reflBoolTrue;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__1;
uint8_t l_Int_Linear_Poly_isValidEq(lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__10;
lean_object* l_Lean_Meta_Simp_Arith_Int_toLinearExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__22;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__16;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__12;
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Arith_Int_leCnstr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10;
lean_object* l_Int_Linear_Poly_div(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__26;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__5;
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Arith_Int_eqCnstr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__9;
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Linear_Expr_denoteExpr___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__12;
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdCoeffs_x27_go(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__18;
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdAll_go(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_nat_abs(x_5);
x_7 = lean_nat_gcd(x_1, x_6);
lean_dec(x_6);
lean_dec(x_1);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 2);
x_10 = lean_nat_abs(x_8);
x_11 = lean_nat_gcd(x_1, x_10);
lean_dec(x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_9;
goto _start;
}
}
else
{
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdAll_go___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_Linear_Poly_gcdAll_go(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdAll(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_nat_abs(x_2);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 2);
x_6 = lean_nat_abs(x_4);
x_7 = l_Int_Linear_Poly_gcdAll_go(x_6, x_5);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdAll___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Int_Linear_Poly_gcdAll(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdCoeffs_x27_go(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_nat_abs(x_5);
x_8 = lean_nat_gcd(x_1, x_7);
lean_dec(x_7);
lean_dec(x_1);
x_1 = x_8;
x_2 = x_6;
goto _start;
}
}
else
{
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdCoeffs_x27_go___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_Linear_Poly_gcdCoeffs_x27_go(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdCoeffs_x27(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(1u);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 2);
x_5 = lean_nat_abs(x_3);
x_6 = l_Int_Linear_Poly_gcdCoeffs_x27_go(x_5, x_4);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_gcdCoeffs_x27___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Int_Linear_Poly_gcdCoeffs_x27(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___Lean_Meta_Simp_Arith_Int_simpEq_x3f_spec__0(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_array_get(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_reflBoolTrue;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Linear", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("norm_eq_var_const", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("False", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__4;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__5;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("eq_eq_false_of_divCoeff", 23, 23);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Neg", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("neg", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__9;
x_2 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__8;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Level_ofNat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__12;
x_2 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instNegInt", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3;
x_2 = l_Lean_mkIntLit(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("norm_eq_coeff", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("norm_eq", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__18;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("norm_eq_var", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("True", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__22;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__23;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("eq_eq_true", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("eq_eq_false", 11, 11);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_245; uint8_t x_355; 
lean_inc_ref(x_5);
lean_inc_ref(x_1);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__0___boxed), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_5);
lean_inc_ref(x_2);
lean_inc_ref(x_11);
x_12 = l_Int_Linear_Expr_denoteExpr___redArg(x_11, x_2, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_15 = x_12;
} else {
 lean_dec_ref(x_12);
 x_15 = lean_box(0);
}
lean_inc_ref(x_3);
lean_inc_ref(x_11);
x_16 = l_Int_Linear_Expr_denoteExpr___redArg(x_11, x_3, x_14);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_19 = x_16;
} else {
 lean_dec_ref(x_16);
 x_19 = lean_box(0);
}
x_20 = l_Lean_mkIntEq(x_13, x_17);
lean_inc_ref(x_3);
lean_inc_ref(x_2);
x_96 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_96, 0, x_2);
lean_ctor_set(x_96, 1, x_3);
x_97 = l_Int_Linear_Expr_norm(x_96);
lean_dec_ref(x_96);
x_355 = l_Int_Linear_Poly_isUnsatEq(x_97);
if (x_355 == 0)
{
uint8_t x_356; 
x_356 = l_Int_Linear_Poly_isValidEq(x_97);
if (x_356 == 0)
{
lean_object* x_357; uint8_t x_358; 
lean_inc_ref(x_97);
x_357 = l_Int_Linear_Poly_toExpr(x_97);
x_358 = l_Int_Linear_beqExpr____x40_Init_Data_Int_Linear___hyg_160_(x_357, x_2);
lean_dec_ref(x_357);
if (x_358 == 0)
{
x_245 = x_358;
goto block_354;
}
else
{
lean_object* x_359; uint8_t x_360; 
x_359 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__21;
x_360 = l_Int_Linear_beqExpr____x40_Init_Data_Int_Linear___hyg_160_(x_3, x_359);
x_245 = x_360;
goto block_354;
}
}
else
{
lean_object* x_361; 
lean_dec_ref(x_97);
lean_dec(x_19);
lean_dec(x_15);
lean_dec_ref(x_11);
lean_dec_ref(x_1);
x_361 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_361) == 0)
{
uint8_t x_362; 
x_362 = !lean_is_exclusive(x_361);
if (x_362 == 0)
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; 
x_363 = lean_ctor_get(x_361, 0);
x_364 = lean_box(0);
x_365 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__24;
x_366 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_367 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__25;
x_368 = l_Lean_Name_mkStr3(x_4, x_366, x_367);
x_369 = l_Lean_Expr_const___override(x_368, x_364);
x_370 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_371 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_372 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_373 = l_Lean_mkApp4(x_369, x_363, x_370, x_371, x_372);
x_374 = l_Lean_mkPropEq(x_20, x_365);
x_375 = l_Lean_Meta_mkExpectedPropHint(x_373, x_374);
x_376 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_376, 0, x_365);
lean_ctor_set(x_376, 1, x_375);
x_377 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_377, 0, x_376);
lean_ctor_set(x_361, 0, x_377);
return x_361;
}
else
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; 
x_378 = lean_ctor_get(x_361, 0);
x_379 = lean_ctor_get(x_361, 1);
lean_inc(x_379);
lean_inc(x_378);
lean_dec(x_361);
x_380 = lean_box(0);
x_381 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__24;
x_382 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_383 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__25;
x_384 = l_Lean_Name_mkStr3(x_4, x_382, x_383);
x_385 = l_Lean_Expr_const___override(x_384, x_380);
x_386 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_387 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_388 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_389 = l_Lean_mkApp4(x_385, x_378, x_386, x_387, x_388);
x_390 = l_Lean_mkPropEq(x_20, x_381);
x_391 = l_Lean_Meta_mkExpectedPropHint(x_389, x_390);
x_392 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_392, 0, x_381);
lean_ctor_set(x_392, 1, x_391);
x_393 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_393, 0, x_392);
x_394 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_394, 0, x_393);
lean_ctor_set(x_394, 1, x_379);
return x_394;
}
}
else
{
uint8_t x_395; 
lean_dec_ref(x_20);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_395 = !lean_is_exclusive(x_361);
if (x_395 == 0)
{
return x_361;
}
else
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; 
x_396 = lean_ctor_get(x_361, 0);
x_397 = lean_ctor_get(x_361, 1);
lean_inc(x_397);
lean_inc(x_396);
lean_dec(x_361);
x_398 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_398, 0, x_396);
lean_ctor_set(x_398, 1, x_397);
return x_398;
}
}
}
}
else
{
lean_object* x_399; 
lean_dec_ref(x_97);
lean_dec(x_19);
lean_dec(x_15);
lean_dec_ref(x_11);
lean_dec_ref(x_1);
x_399 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_399) == 0)
{
uint8_t x_400; 
x_400 = !lean_is_exclusive(x_399);
if (x_400 == 0)
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; 
x_401 = lean_ctor_get(x_399, 0);
x_402 = lean_box(0);
x_403 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__6;
x_404 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_405 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__26;
x_406 = l_Lean_Name_mkStr3(x_4, x_404, x_405);
x_407 = l_Lean_Expr_const___override(x_406, x_402);
x_408 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_409 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_410 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_411 = l_Lean_mkApp4(x_407, x_401, x_408, x_409, x_410);
x_412 = l_Lean_mkPropEq(x_20, x_403);
x_413 = l_Lean_Meta_mkExpectedPropHint(x_411, x_412);
x_414 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_414, 0, x_403);
lean_ctor_set(x_414, 1, x_413);
x_415 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_415, 0, x_414);
lean_ctor_set(x_399, 0, x_415);
return x_399;
}
else
{
lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; 
x_416 = lean_ctor_get(x_399, 0);
x_417 = lean_ctor_get(x_399, 1);
lean_inc(x_417);
lean_inc(x_416);
lean_dec(x_399);
x_418 = lean_box(0);
x_419 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__6;
x_420 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_421 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__26;
x_422 = l_Lean_Name_mkStr3(x_4, x_420, x_421);
x_423 = l_Lean_Expr_const___override(x_422, x_418);
x_424 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_425 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_426 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_427 = l_Lean_mkApp4(x_423, x_416, x_424, x_425, x_426);
x_428 = l_Lean_mkPropEq(x_20, x_419);
x_429 = l_Lean_Meta_mkExpectedPropHint(x_427, x_428);
x_430 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_430, 0, x_419);
lean_ctor_set(x_430, 1, x_429);
x_431 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_431, 0, x_430);
x_432 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_432, 0, x_431);
lean_ctor_set(x_432, 1, x_417);
return x_432;
}
}
else
{
uint8_t x_433; 
lean_dec_ref(x_20);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_433 = !lean_is_exclusive(x_399);
if (x_433 == 0)
{
return x_399;
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; 
x_434 = lean_ctor_get(x_399, 0);
x_435 = lean_ctor_get(x_399, 1);
lean_inc(x_435);
lean_inc(x_434);
lean_dec(x_399);
x_436 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_436, 0, x_434);
lean_ctor_set(x_436, 1, x_435);
return x_436;
}
}
}
block_35:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_29 = l_Lean_mkApp5(x_21, x_22, x_26, x_23, x_27, x_28);
lean_inc_ref(x_24);
x_30 = l_Lean_mkPropEq(x_20, x_24);
x_31 = l_Lean_Meta_mkExpectedPropHint(x_29, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_24);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
if (lean_is_scalar(x_19)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_19;
}
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_25);
return x_34;
}
block_51:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_44 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_45 = l_Lean_mkApp6(x_40, x_39, x_37, x_41, x_38, x_43, x_44);
lean_inc_ref(x_36);
x_46 = l_Lean_mkPropEq(x_20, x_36);
x_47 = l_Lean_Meta_mkExpectedPropHint(x_45, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_36);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
if (lean_is_scalar(x_15)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_15;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_42);
return x_50;
}
block_95:
{
lean_object* x_55; 
x_55 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_56; 
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_57 = lean_ctor_get(x_55, 0);
lean_inc_ref(x_54);
x_58 = l_Lean_mkIntEq(x_53, x_54);
x_59 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_60 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__2;
x_61 = l_Lean_Name_mkStr3(x_4, x_59, x_60);
x_62 = lean_box(0);
x_63 = l_Lean_Expr_const___override(x_61, x_62);
x_64 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_65 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_66 = l_Lean_mkNatLit(x_52);
x_67 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_68 = l_Lean_mkApp6(x_63, x_57, x_64, x_65, x_66, x_54, x_67);
lean_inc_ref(x_58);
x_69 = l_Lean_mkPropEq(x_20, x_58);
x_70 = l_Lean_Meta_mkExpectedPropHint(x_68, x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_58);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_55, 0, x_72);
return x_55;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_73 = lean_ctor_get(x_55, 0);
x_74 = lean_ctor_get(x_55, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_55);
lean_inc_ref(x_54);
x_75 = l_Lean_mkIntEq(x_53, x_54);
x_76 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_77 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__2;
x_78 = l_Lean_Name_mkStr3(x_4, x_76, x_77);
x_79 = lean_box(0);
x_80 = l_Lean_Expr_const___override(x_78, x_79);
x_81 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_82 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_83 = l_Lean_mkNatLit(x_52);
x_84 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_85 = l_Lean_mkApp6(x_80, x_73, x_81, x_82, x_83, x_54, x_84);
lean_inc_ref(x_75);
x_86 = l_Lean_mkPropEq(x_20, x_75);
x_87 = l_Lean_Meta_mkExpectedPropHint(x_85, x_86);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_75);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_89, 0, x_88);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_74);
return x_90;
}
}
else
{
uint8_t x_91; 
lean_dec_ref(x_54);
lean_dec_ref(x_53);
lean_dec(x_52);
lean_dec_ref(x_20);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_91 = !lean_is_exclusive(x_55);
if (x_91 == 0)
{
return x_55;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_55, 0);
x_93 = lean_ctor_get(x_55, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_55);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
block_244:
{
lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_103 = l_Int_Linear_Poly_gcdCoeffs_x27(x_97);
x_104 = lean_unsigned_to_nat(1u);
x_105 = lean_nat_dec_eq(x_103, x_104);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; 
x_106 = l_Int_Linear_Poly_getConst(x_97);
x_107 = lean_nat_to_int(x_103);
x_108 = lean_int_emod(x_106, x_107);
lean_dec(x_106);
x_109 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3;
x_110 = lean_int_dec_eq(x_108, x_109);
lean_dec(x_108);
if (x_110 == 0)
{
lean_object* x_111; 
lean_dec_ref(x_97);
lean_dec(x_15);
lean_dec_ref(x_11);
x_111 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_5, x_98, x_99, x_100, x_101, x_102);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; 
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_111, 1);
lean_inc(x_113);
lean_dec_ref(x_111);
x_114 = lean_box(0);
x_115 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__6;
x_116 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_117 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__7;
lean_inc_ref(x_4);
x_118 = l_Lean_Name_mkStr3(x_4, x_116, x_117);
x_119 = l_Lean_Expr_const___override(x_118, x_114);
x_120 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_121 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_122 = lean_int_dec_le(x_109, x_107);
if (x_122 == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_123 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__13;
lean_inc_ref(x_4);
x_124 = l_Lean_Name_mkStr1(x_4);
x_125 = l_Lean_Expr_const___override(x_124, x_114);
x_126 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
x_127 = l_Lean_Name_mkStr2(x_4, x_126);
x_128 = l_Lean_Expr_const___override(x_127, x_114);
x_129 = lean_int_neg(x_107);
lean_dec(x_107);
x_130 = l_Int_toNat(x_129);
lean_dec(x_129);
x_131 = l_Lean_instToExprInt_mkNat(x_130);
x_132 = l_Lean_mkApp3(x_123, x_125, x_128, x_131);
x_21 = x_119;
x_22 = x_112;
x_23 = x_121;
x_24 = x_115;
x_25 = x_113;
x_26 = x_120;
x_27 = x_132;
goto block_35;
}
else
{
lean_object* x_133; lean_object* x_134; 
lean_dec_ref(x_4);
x_133 = l_Int_toNat(x_107);
lean_dec(x_107);
x_134 = l_Lean_instToExprInt_mkNat(x_133);
x_21 = x_119;
x_22 = x_112;
x_23 = x_121;
x_24 = x_115;
x_25 = x_113;
x_26 = x_120;
x_27 = x_134;
goto block_35;
}
}
else
{
uint8_t x_135; 
lean_dec(x_107);
lean_dec_ref(x_20);
lean_dec(x_19);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_135 = !lean_is_exclusive(x_111);
if (x_135 == 0)
{
return x_111;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_ctor_get(x_111, 0);
x_137 = lean_ctor_get(x_111, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_111);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_19);
x_139 = l_Int_Linear_Poly_div(x_107, x_97);
lean_inc_ref(x_139);
x_140 = l_Int_Linear_Poly_denoteExpr___redArg(x_11, x_139, x_102);
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec_ref(x_140);
x_143 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_5, x_98, x_99, x_100, x_101, x_142);
if (lean_obj_tag(x_143) == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; 
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
lean_dec_ref(x_143);
x_146 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__15;
x_147 = l_Lean_mkIntEq(x_141, x_146);
x_148 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_149 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__16;
lean_inc_ref(x_4);
x_150 = l_Lean_Name_mkStr3(x_4, x_148, x_149);
x_151 = lean_box(0);
x_152 = l_Lean_Expr_const___override(x_150, x_151);
x_153 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_154 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_155 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_139);
x_156 = lean_int_dec_le(x_109, x_107);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_157 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__13;
lean_inc_ref(x_4);
x_158 = l_Lean_Name_mkStr1(x_4);
x_159 = l_Lean_Expr_const___override(x_158, x_151);
x_160 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
x_161 = l_Lean_Name_mkStr2(x_4, x_160);
x_162 = l_Lean_Expr_const___override(x_161, x_151);
x_163 = lean_int_neg(x_107);
lean_dec(x_107);
x_164 = l_Int_toNat(x_163);
lean_dec(x_163);
x_165 = l_Lean_instToExprInt_mkNat(x_164);
x_166 = l_Lean_mkApp3(x_157, x_159, x_162, x_165);
x_36 = x_147;
x_37 = x_153;
x_38 = x_155;
x_39 = x_144;
x_40 = x_152;
x_41 = x_154;
x_42 = x_145;
x_43 = x_166;
goto block_51;
}
else
{
lean_object* x_167; lean_object* x_168; 
lean_dec_ref(x_4);
x_167 = l_Int_toNat(x_107);
lean_dec(x_107);
x_168 = l_Lean_instToExprInt_mkNat(x_167);
x_36 = x_147;
x_37 = x_153;
x_38 = x_155;
x_39 = x_144;
x_40 = x_152;
x_41 = x_154;
x_42 = x_145;
x_43 = x_168;
goto block_51;
}
}
else
{
uint8_t x_169; 
lean_dec(x_141);
lean_dec_ref(x_139);
lean_dec(x_107);
lean_dec_ref(x_20);
lean_dec(x_15);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_169 = !lean_is_exclusive(x_143);
if (x_169 == 0)
{
return x_143;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_170 = lean_ctor_get(x_143, 0);
x_171 = lean_ctor_get(x_143, 1);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_143);
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
return x_172;
}
}
}
}
else
{
lean_object* x_173; uint8_t x_174; 
lean_dec(x_103);
lean_dec(x_19);
lean_dec(x_15);
lean_inc_ref(x_97);
x_173 = l_Int_Linear_Poly_denoteExpr___redArg(x_11, x_97, x_102);
x_174 = !lean_is_exclusive(x_173);
if (x_174 == 0)
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_175 = lean_ctor_get(x_173, 0);
x_176 = lean_ctor_get(x_173, 1);
x_177 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_5, x_98, x_99, x_100, x_101, x_176);
if (lean_obj_tag(x_177) == 0)
{
uint8_t x_178; 
x_178 = !lean_is_exclusive(x_177);
if (x_178 == 0)
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_179 = lean_ctor_get(x_177, 0);
x_180 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__15;
x_181 = l_Lean_mkIntEq(x_175, x_180);
x_182 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_183 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__17;
x_184 = l_Lean_Name_mkStr3(x_4, x_182, x_183);
x_185 = lean_box(0);
x_186 = l_Lean_Expr_const___override(x_184, x_185);
x_187 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_188 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_189 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_97);
x_190 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_191 = l_Lean_mkApp5(x_186, x_179, x_187, x_188, x_189, x_190);
lean_inc_ref(x_181);
x_192 = l_Lean_mkPropEq(x_20, x_181);
x_193 = l_Lean_Meta_mkExpectedPropHint(x_191, x_192);
lean_ctor_set(x_173, 1, x_193);
lean_ctor_set(x_173, 0, x_181);
x_194 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_194, 0, x_173);
lean_ctor_set(x_177, 0, x_194);
return x_177;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_195 = lean_ctor_get(x_177, 0);
x_196 = lean_ctor_get(x_177, 1);
lean_inc(x_196);
lean_inc(x_195);
lean_dec(x_177);
x_197 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__15;
x_198 = l_Lean_mkIntEq(x_175, x_197);
x_199 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_200 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__17;
x_201 = l_Lean_Name_mkStr3(x_4, x_199, x_200);
x_202 = lean_box(0);
x_203 = l_Lean_Expr_const___override(x_201, x_202);
x_204 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_205 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_206 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_97);
x_207 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_208 = l_Lean_mkApp5(x_203, x_195, x_204, x_205, x_206, x_207);
lean_inc_ref(x_198);
x_209 = l_Lean_mkPropEq(x_20, x_198);
x_210 = l_Lean_Meta_mkExpectedPropHint(x_208, x_209);
lean_ctor_set(x_173, 1, x_210);
lean_ctor_set(x_173, 0, x_198);
x_211 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_211, 0, x_173);
x_212 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_212, 1, x_196);
return x_212;
}
}
else
{
uint8_t x_213; 
lean_free_object(x_173);
lean_dec(x_175);
lean_dec_ref(x_97);
lean_dec_ref(x_20);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_213 = !lean_is_exclusive(x_177);
if (x_213 == 0)
{
return x_177;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_ctor_get(x_177, 0);
x_215 = lean_ctor_get(x_177, 1);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_177);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_214);
lean_ctor_set(x_216, 1, x_215);
return x_216;
}
}
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_217 = lean_ctor_get(x_173, 0);
x_218 = lean_ctor_get(x_173, 1);
lean_inc(x_218);
lean_inc(x_217);
lean_dec(x_173);
x_219 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_5, x_98, x_99, x_100, x_101, x_218);
if (lean_obj_tag(x_219) == 0)
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_220 = lean_ctor_get(x_219, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_219, 1);
lean_inc(x_221);
if (lean_is_exclusive(x_219)) {
 lean_ctor_release(x_219, 0);
 lean_ctor_release(x_219, 1);
 x_222 = x_219;
} else {
 lean_dec_ref(x_219);
 x_222 = lean_box(0);
}
x_223 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__15;
x_224 = l_Lean_mkIntEq(x_217, x_223);
x_225 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_226 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__17;
x_227 = l_Lean_Name_mkStr3(x_4, x_225, x_226);
x_228 = lean_box(0);
x_229 = l_Lean_Expr_const___override(x_227, x_228);
x_230 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_231 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_232 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_97);
x_233 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_234 = l_Lean_mkApp5(x_229, x_220, x_230, x_231, x_232, x_233);
lean_inc_ref(x_224);
x_235 = l_Lean_mkPropEq(x_20, x_224);
x_236 = l_Lean_Meta_mkExpectedPropHint(x_234, x_235);
x_237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_237, 0, x_224);
lean_ctor_set(x_237, 1, x_236);
x_238 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_238, 0, x_237);
if (lean_is_scalar(x_222)) {
 x_239 = lean_alloc_ctor(0, 2, 0);
} else {
 x_239 = x_222;
}
lean_ctor_set(x_239, 0, x_238);
lean_ctor_set(x_239, 1, x_221);
return x_239;
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_217);
lean_dec_ref(x_97);
lean_dec_ref(x_20);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_240 = lean_ctor_get(x_219, 0);
lean_inc(x_240);
x_241 = lean_ctor_get(x_219, 1);
lean_inc(x_241);
if (lean_is_exclusive(x_219)) {
 lean_ctor_release(x_219, 0);
 lean_ctor_release(x_219, 1);
 x_242 = x_219;
} else {
 lean_dec_ref(x_219);
 x_242 = lean_box(0);
}
if (lean_is_scalar(x_242)) {
 x_243 = lean_alloc_ctor(1, 2, 0);
} else {
 x_243 = x_242;
}
lean_ctor_set(x_243, 0, x_240);
lean_ctor_set(x_243, 1, x_241);
return x_243;
}
}
}
}
block_354:
{
if (x_245 == 0)
{
if (lean_obj_tag(x_97) == 0)
{
lean_dec_ref(x_1);
x_98 = x_6;
x_99 = x_7;
x_100 = x_8;
x_101 = x_9;
x_102 = x_18;
goto block_244;
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; uint8_t x_250; 
x_246 = lean_ctor_get(x_97, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_97, 1);
lean_inc(x_247);
x_248 = lean_ctor_get(x_97, 2);
lean_inc_ref(x_248);
x_249 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__18;
x_250 = lean_int_dec_eq(x_246, x_249);
lean_dec(x_246);
if (x_250 == 0)
{
lean_dec_ref(x_248);
lean_dec(x_247);
lean_dec_ref(x_1);
x_98 = x_6;
x_99 = x_7;
x_100 = x_8;
x_101 = x_9;
x_102 = x_18;
goto block_244;
}
else
{
if (lean_obj_tag(x_248) == 0)
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; uint8_t x_255; 
lean_dec_ref(x_97);
lean_dec(x_19);
lean_dec(x_15);
lean_dec_ref(x_11);
x_251 = lean_ctor_get(x_248, 0);
lean_inc(x_251);
lean_dec_ref(x_248);
x_252 = lean_array_get(x_1, x_5, x_247);
x_253 = lean_int_neg(x_251);
lean_dec(x_251);
x_254 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3;
x_255 = lean_int_dec_le(x_254, x_253);
if (x_255 == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_256 = lean_box(0);
x_257 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__13;
lean_inc_ref(x_4);
x_258 = l_Lean_Name_mkStr1(x_4);
x_259 = l_Lean_Expr_const___override(x_258, x_256);
x_260 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
lean_inc_ref(x_4);
x_261 = l_Lean_Name_mkStr2(x_4, x_260);
x_262 = l_Lean_Expr_const___override(x_261, x_256);
x_263 = lean_int_neg(x_253);
lean_dec(x_253);
x_264 = l_Int_toNat(x_263);
lean_dec(x_263);
x_265 = l_Lean_instToExprInt_mkNat(x_264);
x_266 = l_Lean_mkApp3(x_257, x_259, x_262, x_265);
x_52 = x_247;
x_53 = x_252;
x_54 = x_266;
goto block_95;
}
else
{
lean_object* x_267; lean_object* x_268; 
x_267 = l_Int_toNat(x_253);
lean_dec(x_253);
x_268 = l_Lean_instToExprInt_mkNat(x_267);
x_52 = x_247;
x_53 = x_252;
x_54 = x_268;
goto block_95;
}
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; uint8_t x_273; 
x_269 = lean_ctor_get(x_248, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_248, 1);
lean_inc(x_270);
x_271 = lean_ctor_get(x_248, 2);
lean_inc_ref(x_271);
lean_dec_ref(x_248);
x_272 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__19;
x_273 = lean_int_dec_eq(x_269, x_272);
lean_dec(x_269);
if (x_273 == 0)
{
lean_dec_ref(x_271);
lean_dec(x_270);
lean_dec(x_247);
lean_dec_ref(x_1);
x_98 = x_6;
x_99 = x_7;
x_100 = x_8;
x_101 = x_9;
x_102 = x_18;
goto block_244;
}
else
{
if (lean_obj_tag(x_271) == 0)
{
uint8_t x_274; 
x_274 = !lean_is_exclusive(x_271);
if (x_274 == 0)
{
lean_object* x_275; lean_object* x_276; uint8_t x_277; 
x_275 = lean_ctor_get(x_271, 0);
x_276 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3;
x_277 = lean_int_dec_eq(x_275, x_276);
lean_dec(x_275);
if (x_277 == 0)
{
lean_free_object(x_271);
lean_dec(x_270);
lean_dec(x_247);
lean_dec_ref(x_1);
x_98 = x_6;
x_99 = x_7;
x_100 = x_8;
x_101 = x_9;
x_102 = x_18;
goto block_244;
}
else
{
lean_object* x_278; 
lean_dec_ref(x_97);
lean_dec(x_19);
lean_dec(x_15);
lean_dec_ref(x_11);
lean_inc_ref(x_5);
x_278 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_278) == 0)
{
uint8_t x_279; 
x_279 = !lean_is_exclusive(x_278);
if (x_279 == 0)
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; 
x_280 = lean_ctor_get(x_278, 0);
lean_inc_ref(x_1);
x_281 = lean_array_get(x_1, x_5, x_247);
x_282 = lean_array_get(x_1, x_5, x_270);
lean_dec_ref(x_5);
x_283 = l_Lean_mkIntEq(x_281, x_282);
x_284 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_285 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__20;
x_286 = l_Lean_Name_mkStr3(x_4, x_284, x_285);
x_287 = lean_box(0);
x_288 = l_Lean_Expr_const___override(x_286, x_287);
x_289 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_290 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_291 = l_Lean_mkNatLit(x_247);
x_292 = l_Lean_mkNatLit(x_270);
x_293 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_294 = l_Lean_mkApp6(x_288, x_280, x_289, x_290, x_291, x_292, x_293);
lean_inc_ref(x_283);
x_295 = l_Lean_mkPropEq(x_20, x_283);
x_296 = l_Lean_Meta_mkExpectedPropHint(x_294, x_295);
x_297 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_297, 0, x_283);
lean_ctor_set(x_297, 1, x_296);
lean_ctor_set_tag(x_271, 1);
lean_ctor_set(x_271, 0, x_297);
lean_ctor_set(x_278, 0, x_271);
return x_278;
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_298 = lean_ctor_get(x_278, 0);
x_299 = lean_ctor_get(x_278, 1);
lean_inc(x_299);
lean_inc(x_298);
lean_dec(x_278);
lean_inc_ref(x_1);
x_300 = lean_array_get(x_1, x_5, x_247);
x_301 = lean_array_get(x_1, x_5, x_270);
lean_dec_ref(x_5);
x_302 = l_Lean_mkIntEq(x_300, x_301);
x_303 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_304 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__20;
x_305 = l_Lean_Name_mkStr3(x_4, x_303, x_304);
x_306 = lean_box(0);
x_307 = l_Lean_Expr_const___override(x_305, x_306);
x_308 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_309 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_310 = l_Lean_mkNatLit(x_247);
x_311 = l_Lean_mkNatLit(x_270);
x_312 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_313 = l_Lean_mkApp6(x_307, x_298, x_308, x_309, x_310, x_311, x_312);
lean_inc_ref(x_302);
x_314 = l_Lean_mkPropEq(x_20, x_302);
x_315 = l_Lean_Meta_mkExpectedPropHint(x_313, x_314);
x_316 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_316, 0, x_302);
lean_ctor_set(x_316, 1, x_315);
lean_ctor_set_tag(x_271, 1);
lean_ctor_set(x_271, 0, x_316);
x_317 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_317, 0, x_271);
lean_ctor_set(x_317, 1, x_299);
return x_317;
}
}
else
{
uint8_t x_318; 
lean_free_object(x_271);
lean_dec(x_270);
lean_dec(x_247);
lean_dec_ref(x_20);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_318 = !lean_is_exclusive(x_278);
if (x_318 == 0)
{
return x_278;
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_319 = lean_ctor_get(x_278, 0);
x_320 = lean_ctor_get(x_278, 1);
lean_inc(x_320);
lean_inc(x_319);
lean_dec(x_278);
x_321 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_321, 0, x_319);
lean_ctor_set(x_321, 1, x_320);
return x_321;
}
}
}
}
else
{
lean_object* x_322; lean_object* x_323; uint8_t x_324; 
x_322 = lean_ctor_get(x_271, 0);
lean_inc(x_322);
lean_dec(x_271);
x_323 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3;
x_324 = lean_int_dec_eq(x_322, x_323);
lean_dec(x_322);
if (x_324 == 0)
{
lean_dec(x_270);
lean_dec(x_247);
lean_dec_ref(x_1);
x_98 = x_6;
x_99 = x_7;
x_100 = x_8;
x_101 = x_9;
x_102 = x_18;
goto block_244;
}
else
{
lean_object* x_325; 
lean_dec_ref(x_97);
lean_dec(x_19);
lean_dec(x_15);
lean_dec_ref(x_11);
lean_inc_ref(x_5);
x_325 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_325) == 0)
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
x_327 = lean_ctor_get(x_325, 1);
lean_inc(x_327);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 x_328 = x_325;
} else {
 lean_dec_ref(x_325);
 x_328 = lean_box(0);
}
lean_inc_ref(x_1);
x_329 = lean_array_get(x_1, x_5, x_247);
x_330 = lean_array_get(x_1, x_5, x_270);
lean_dec_ref(x_5);
x_331 = l_Lean_mkIntEq(x_329, x_330);
x_332 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_333 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__20;
x_334 = l_Lean_Name_mkStr3(x_4, x_332, x_333);
x_335 = lean_box(0);
x_336 = l_Lean_Expr_const___override(x_334, x_335);
x_337 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_338 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_339 = l_Lean_mkNatLit(x_247);
x_340 = l_Lean_mkNatLit(x_270);
x_341 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_342 = l_Lean_mkApp6(x_336, x_326, x_337, x_338, x_339, x_340, x_341);
lean_inc_ref(x_331);
x_343 = l_Lean_mkPropEq(x_20, x_331);
x_344 = l_Lean_Meta_mkExpectedPropHint(x_342, x_343);
x_345 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_345, 0, x_331);
lean_ctor_set(x_345, 1, x_344);
x_346 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_346, 0, x_345);
if (lean_is_scalar(x_328)) {
 x_347 = lean_alloc_ctor(0, 2, 0);
} else {
 x_347 = x_328;
}
lean_ctor_set(x_347, 0, x_346);
lean_ctor_set(x_347, 1, x_327);
return x_347;
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; 
lean_dec(x_270);
lean_dec(x_247);
lean_dec_ref(x_20);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_348 = lean_ctor_get(x_325, 0);
lean_inc(x_348);
x_349 = lean_ctor_get(x_325, 1);
lean_inc(x_349);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 x_350 = x_325;
} else {
 lean_dec_ref(x_325);
 x_350 = lean_box(0);
}
if (lean_is_scalar(x_350)) {
 x_351 = lean_alloc_ctor(1, 2, 0);
} else {
 x_351 = x_350;
}
lean_ctor_set(x_351, 0, x_348);
lean_ctor_set(x_351, 1, x_349);
return x_351;
}
}
}
}
else
{
lean_dec_ref(x_271);
lean_dec(x_270);
lean_dec(x_247);
lean_dec_ref(x_1);
x_98 = x_6;
x_99 = x_7;
x_100 = x_8;
x_101 = x_9;
x_102 = x_18;
goto block_244;
}
}
}
}
}
}
else
{
lean_object* x_352; lean_object* x_353; 
lean_dec_ref(x_97);
lean_dec_ref(x_20);
lean_dec(x_19);
lean_dec(x_15);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_352 = lean_box(0);
x_353 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_353, 0, x_352);
lean_ctor_set(x_353, 1, x_18);
return x_353;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Int", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc_ref(x_4);
lean_inc(x_3);
lean_inc_ref(x_2);
x_7 = l_Lean_Meta_Simp_Arith_Int_eqCnstr_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = lean_box(0);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec_ref(x_8);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_7, 1);
lean_inc(x_17);
lean_dec_ref(x_7);
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = l_Lean_instInhabitedExpr;
x_22 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0;
x_23 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1), 10, 4);
lean_closure_set(x_23, 0, x_21);
lean_closure_set(x_23, 1, x_18);
lean_closure_set(x_23, 2, x_19);
lean_closure_set(x_23, 3, x_22);
x_24 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1;
x_25 = l_Lean_Meta_Simp_Arith_withAbstractAtoms(x_20, x_24, x_23, x_2, x_3, x_4, x_5, x_17);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
x_26 = !lean_is_exclusive(x_7);
if (x_26 == 0)
{
return x_7;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_7, 0);
x_28 = lean_ctor_get(x_7, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_7);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__0(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec_ref(x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("norm_le_coeff", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("norm_le_coeff_tight", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("norm_le", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("le_eq_true", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("le_eq_false", 11, 11);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_inc_ref(x_6);
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__0___boxed), 3, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_6);
lean_inc_ref(x_2);
lean_inc_ref(x_12);
x_13 = l_Int_Linear_Expr_denoteExpr___redArg(x_12, x_2, x_11);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; uint8_t x_275; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc_ref(x_3);
lean_inc_ref(x_12);
x_17 = l_Int_Linear_Expr_denoteExpr___redArg(x_12, x_3, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 lean_ctor_release(x_17, 1);
 x_20 = x_17;
} else {
 lean_dec_ref(x_17);
 x_20 = lean_box(0);
}
x_21 = l_Lean_mkIntLE(x_15, x_18);
lean_inc_ref(x_3);
lean_inc_ref(x_2);
x_53 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_53, 0, x_2);
lean_ctor_set(x_53, 1, x_3);
x_54 = l_Int_Linear_Expr_norm(x_53);
lean_dec_ref(x_53);
x_275 = l_Int_Linear_Poly_isUnsatLe(x_54);
if (x_275 == 0)
{
uint8_t x_276; 
x_276 = l_Int_Linear_Poly_isValidLe(x_54);
if (x_276 == 0)
{
if (x_5 == 0)
{
lean_free_object(x_13);
goto block_274;
}
else
{
lean_object* x_277; uint8_t x_278; 
lean_inc_ref(x_54);
x_277 = l_Int_Linear_Poly_toExpr(x_54);
x_278 = l_Int_Linear_beqExpr____x40_Init_Data_Int_Linear___hyg_160_(x_277, x_2);
lean_dec_ref(x_277);
if (x_278 == 0)
{
lean_free_object(x_13);
goto block_274;
}
else
{
lean_object* x_279; uint8_t x_280; 
x_279 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__21;
x_280 = l_Int_Linear_beqExpr____x40_Init_Data_Int_Linear___hyg_160_(x_3, x_279);
if (x_280 == 0)
{
lean_free_object(x_13);
goto block_274;
}
else
{
lean_object* x_281; 
lean_dec_ref(x_54);
lean_dec_ref(x_21);
lean_dec(x_20);
lean_dec_ref(x_12);
lean_dec(x_10);
lean_dec_ref(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_281 = lean_box(0);
lean_ctor_set(x_13, 1, x_19);
lean_ctor_set(x_13, 0, x_281);
return x_13;
}
}
}
}
else
{
lean_object* x_282; 
lean_dec_ref(x_54);
lean_dec(x_20);
lean_free_object(x_13);
lean_dec_ref(x_12);
x_282 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_6, x_7, x_8, x_9, x_10, x_19);
if (lean_obj_tag(x_282) == 0)
{
uint8_t x_283; 
x_283 = !lean_is_exclusive(x_282);
if (x_283 == 0)
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; 
x_284 = lean_ctor_get(x_282, 0);
x_285 = lean_box(0);
x_286 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__24;
x_287 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_288 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__3;
x_289 = l_Lean_Name_mkStr3(x_4, x_287, x_288);
x_290 = l_Lean_Expr_const___override(x_289, x_285);
x_291 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_292 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_293 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_294 = l_Lean_mkApp4(x_290, x_284, x_291, x_292, x_293);
x_295 = l_Lean_mkPropEq(x_21, x_286);
x_296 = l_Lean_Meta_mkExpectedPropHint(x_294, x_295);
x_297 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_297, 0, x_286);
lean_ctor_set(x_297, 1, x_296);
x_298 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_298, 0, x_297);
lean_ctor_set(x_282, 0, x_298);
return x_282;
}
else
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; 
x_299 = lean_ctor_get(x_282, 0);
x_300 = lean_ctor_get(x_282, 1);
lean_inc(x_300);
lean_inc(x_299);
lean_dec(x_282);
x_301 = lean_box(0);
x_302 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__24;
x_303 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_304 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__3;
x_305 = l_Lean_Name_mkStr3(x_4, x_303, x_304);
x_306 = l_Lean_Expr_const___override(x_305, x_301);
x_307 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_308 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_309 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_310 = l_Lean_mkApp4(x_306, x_299, x_307, x_308, x_309);
x_311 = l_Lean_mkPropEq(x_21, x_302);
x_312 = l_Lean_Meta_mkExpectedPropHint(x_310, x_311);
x_313 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_313, 0, x_302);
lean_ctor_set(x_313, 1, x_312);
x_314 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_314, 0, x_313);
x_315 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_315, 0, x_314);
lean_ctor_set(x_315, 1, x_300);
return x_315;
}
}
else
{
uint8_t x_316; 
lean_dec_ref(x_21);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_316 = !lean_is_exclusive(x_282);
if (x_316 == 0)
{
return x_282;
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_317 = lean_ctor_get(x_282, 0);
x_318 = lean_ctor_get(x_282, 1);
lean_inc(x_318);
lean_inc(x_317);
lean_dec(x_282);
x_319 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_319, 0, x_317);
lean_ctor_set(x_319, 1, x_318);
return x_319;
}
}
}
}
else
{
lean_object* x_320; 
lean_dec_ref(x_54);
lean_dec(x_20);
lean_free_object(x_13);
lean_dec_ref(x_12);
x_320 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_6, x_7, x_8, x_9, x_10, x_19);
if (lean_obj_tag(x_320) == 0)
{
uint8_t x_321; 
x_321 = !lean_is_exclusive(x_320);
if (x_321 == 0)
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_322 = lean_ctor_get(x_320, 0);
x_323 = lean_box(0);
x_324 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__6;
x_325 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_326 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__4;
x_327 = l_Lean_Name_mkStr3(x_4, x_325, x_326);
x_328 = l_Lean_Expr_const___override(x_327, x_323);
x_329 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_330 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_331 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_332 = l_Lean_mkApp4(x_328, x_322, x_329, x_330, x_331);
x_333 = l_Lean_mkPropEq(x_21, x_324);
x_334 = l_Lean_Meta_mkExpectedPropHint(x_332, x_333);
x_335 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_335, 0, x_324);
lean_ctor_set(x_335, 1, x_334);
x_336 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_336, 0, x_335);
lean_ctor_set(x_320, 0, x_336);
return x_320;
}
else
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; 
x_337 = lean_ctor_get(x_320, 0);
x_338 = lean_ctor_get(x_320, 1);
lean_inc(x_338);
lean_inc(x_337);
lean_dec(x_320);
x_339 = lean_box(0);
x_340 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__6;
x_341 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_342 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__4;
x_343 = l_Lean_Name_mkStr3(x_4, x_341, x_342);
x_344 = l_Lean_Expr_const___override(x_343, x_339);
x_345 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_346 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_347 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_348 = l_Lean_mkApp4(x_344, x_337, x_345, x_346, x_347);
x_349 = l_Lean_mkPropEq(x_21, x_340);
x_350 = l_Lean_Meta_mkExpectedPropHint(x_348, x_349);
x_351 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_351, 0, x_340);
lean_ctor_set(x_351, 1, x_350);
x_352 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_352, 0, x_351);
x_353 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_353, 0, x_352);
lean_ctor_set(x_353, 1, x_338);
return x_353;
}
}
else
{
uint8_t x_354; 
lean_dec_ref(x_21);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_354 = !lean_is_exclusive(x_320);
if (x_354 == 0)
{
return x_320;
}
else
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; 
x_355 = lean_ctor_get(x_320, 0);
x_356 = lean_ctor_get(x_320, 1);
lean_inc(x_356);
lean_inc(x_355);
lean_dec(x_320);
x_357 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_357, 0, x_355);
lean_ctor_set(x_357, 1, x_356);
return x_357;
}
}
}
block_30:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_inc_ref(x_22);
x_25 = l_Lean_mkPropEq(x_21, x_22);
x_26 = l_Lean_Meta_mkExpectedPropHint(x_23, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_22);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
if (lean_is_scalar(x_20)) {
 x_29 = lean_alloc_ctor(0, 2, 0);
} else {
 x_29 = x_20;
}
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_24);
return x_29;
}
block_41:
{
lean_object* x_39; lean_object* x_40; 
x_39 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_40 = l_Lean_mkApp6(x_33, x_37, x_35, x_32, x_31, x_38, x_39);
x_22 = x_34;
x_23 = x_40;
x_24 = x_36;
goto block_30;
}
block_52:
{
lean_object* x_50; lean_object* x_51; 
x_50 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_51 = l_Lean_mkApp6(x_43, x_48, x_46, x_47, x_42, x_49, x_50);
x_22 = x_45;
x_23 = x_51;
x_24 = x_44;
goto block_30;
}
block_192:
{
lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_59 = l_Int_Linear_Poly_div(x_55, x_54);
lean_inc_ref(x_59);
x_60 = l_Int_Linear_Poly_denoteExpr___redArg(x_12, x_59, x_19);
x_61 = !lean_is_exclusive(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_60, 0);
x_63 = lean_ctor_get(x_60, 1);
x_64 = l_Lean_mkIntLit(x_56);
x_65 = l_Lean_mkIntLE(x_62, x_64);
if (x_58 == 0)
{
lean_object* x_66; 
x_66 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_6, x_7, x_8, x_9, x_10, x_63);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec_ref(x_66);
x_69 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_70 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__0;
lean_inc_ref(x_4);
x_71 = l_Lean_Name_mkStr3(x_4, x_69, x_70);
x_72 = lean_box(0);
x_73 = l_Lean_Expr_const___override(x_71, x_72);
x_74 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_75 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_76 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_59);
x_77 = lean_int_dec_le(x_56, x_55);
lean_dec(x_56);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_78 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10;
x_79 = l_Lean_Level_ofNat(x_57);
lean_ctor_set_tag(x_60, 1);
lean_ctor_set(x_60, 1, x_72);
lean_ctor_set(x_60, 0, x_79);
x_80 = l_Lean_Expr_const___override(x_78, x_60);
lean_inc_ref(x_4);
x_81 = l_Lean_Name_mkStr1(x_4);
x_82 = l_Lean_Expr_const___override(x_81, x_72);
x_83 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
x_84 = l_Lean_Name_mkStr2(x_4, x_83);
x_85 = l_Lean_Expr_const___override(x_84, x_72);
x_86 = lean_int_neg(x_55);
lean_dec(x_55);
x_87 = l_Int_toNat(x_86);
lean_dec(x_86);
x_88 = l_Lean_instToExprInt_mkNat(x_87);
x_89 = l_Lean_mkApp3(x_80, x_82, x_85, x_88);
x_31 = x_76;
x_32 = x_75;
x_33 = x_73;
x_34 = x_65;
x_35 = x_74;
x_36 = x_68;
x_37 = x_67;
x_38 = x_89;
goto block_41;
}
else
{
lean_object* x_90; lean_object* x_91; 
lean_free_object(x_60);
lean_dec_ref(x_4);
x_90 = l_Int_toNat(x_55);
lean_dec(x_55);
x_91 = l_Lean_instToExprInt_mkNat(x_90);
x_31 = x_76;
x_32 = x_75;
x_33 = x_73;
x_34 = x_65;
x_35 = x_74;
x_36 = x_68;
x_37 = x_67;
x_38 = x_91;
goto block_41;
}
}
else
{
uint8_t x_92; 
lean_dec_ref(x_65);
lean_free_object(x_60);
lean_dec_ref(x_59);
lean_dec(x_56);
lean_dec(x_55);
lean_dec_ref(x_21);
lean_dec(x_20);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_92 = !lean_is_exclusive(x_66);
if (x_92 == 0)
{
return x_66;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_66, 0);
x_94 = lean_ctor_get(x_66, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_66);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
lean_object* x_96; 
x_96 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_6, x_7, x_8, x_9, x_10, x_63);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
lean_dec_ref(x_96);
x_99 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_100 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__1;
lean_inc_ref(x_4);
x_101 = l_Lean_Name_mkStr3(x_4, x_99, x_100);
x_102 = lean_box(0);
x_103 = l_Lean_Expr_const___override(x_101, x_102);
x_104 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_105 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_106 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_59);
x_107 = lean_int_dec_le(x_56, x_55);
lean_dec(x_56);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_108 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10;
x_109 = l_Lean_Level_ofNat(x_57);
lean_ctor_set_tag(x_60, 1);
lean_ctor_set(x_60, 1, x_102);
lean_ctor_set(x_60, 0, x_109);
x_110 = l_Lean_Expr_const___override(x_108, x_60);
lean_inc_ref(x_4);
x_111 = l_Lean_Name_mkStr1(x_4);
x_112 = l_Lean_Expr_const___override(x_111, x_102);
x_113 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
x_114 = l_Lean_Name_mkStr2(x_4, x_113);
x_115 = l_Lean_Expr_const___override(x_114, x_102);
x_116 = lean_int_neg(x_55);
lean_dec(x_55);
x_117 = l_Int_toNat(x_116);
lean_dec(x_116);
x_118 = l_Lean_instToExprInt_mkNat(x_117);
x_119 = l_Lean_mkApp3(x_110, x_112, x_115, x_118);
x_42 = x_106;
x_43 = x_103;
x_44 = x_98;
x_45 = x_65;
x_46 = x_104;
x_47 = x_105;
x_48 = x_97;
x_49 = x_119;
goto block_52;
}
else
{
lean_object* x_120; lean_object* x_121; 
lean_free_object(x_60);
lean_dec_ref(x_4);
x_120 = l_Int_toNat(x_55);
lean_dec(x_55);
x_121 = l_Lean_instToExprInt_mkNat(x_120);
x_42 = x_106;
x_43 = x_103;
x_44 = x_98;
x_45 = x_65;
x_46 = x_104;
x_47 = x_105;
x_48 = x_97;
x_49 = x_121;
goto block_52;
}
}
else
{
uint8_t x_122; 
lean_dec_ref(x_65);
lean_free_object(x_60);
lean_dec_ref(x_59);
lean_dec(x_56);
lean_dec(x_55);
lean_dec_ref(x_21);
lean_dec(x_20);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_122 = !lean_is_exclusive(x_96);
if (x_122 == 0)
{
return x_96;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_96, 0);
x_124 = lean_ctor_get(x_96, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_96);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_126 = lean_ctor_get(x_60, 0);
x_127 = lean_ctor_get(x_60, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_60);
x_128 = l_Lean_mkIntLit(x_56);
x_129 = l_Lean_mkIntLE(x_126, x_128);
if (x_58 == 0)
{
lean_object* x_130; 
x_130 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_6, x_7, x_8, x_9, x_10, x_127);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec_ref(x_130);
x_133 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_134 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__0;
lean_inc_ref(x_4);
x_135 = l_Lean_Name_mkStr3(x_4, x_133, x_134);
x_136 = lean_box(0);
x_137 = l_Lean_Expr_const___override(x_135, x_136);
x_138 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_139 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_140 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_59);
x_141 = lean_int_dec_le(x_56, x_55);
lean_dec(x_56);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_142 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10;
x_143 = l_Lean_Level_ofNat(x_57);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_136);
x_145 = l_Lean_Expr_const___override(x_142, x_144);
lean_inc_ref(x_4);
x_146 = l_Lean_Name_mkStr1(x_4);
x_147 = l_Lean_Expr_const___override(x_146, x_136);
x_148 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
x_149 = l_Lean_Name_mkStr2(x_4, x_148);
x_150 = l_Lean_Expr_const___override(x_149, x_136);
x_151 = lean_int_neg(x_55);
lean_dec(x_55);
x_152 = l_Int_toNat(x_151);
lean_dec(x_151);
x_153 = l_Lean_instToExprInt_mkNat(x_152);
x_154 = l_Lean_mkApp3(x_145, x_147, x_150, x_153);
x_31 = x_140;
x_32 = x_139;
x_33 = x_137;
x_34 = x_129;
x_35 = x_138;
x_36 = x_132;
x_37 = x_131;
x_38 = x_154;
goto block_41;
}
else
{
lean_object* x_155; lean_object* x_156; 
lean_dec_ref(x_4);
x_155 = l_Int_toNat(x_55);
lean_dec(x_55);
x_156 = l_Lean_instToExprInt_mkNat(x_155);
x_31 = x_140;
x_32 = x_139;
x_33 = x_137;
x_34 = x_129;
x_35 = x_138;
x_36 = x_132;
x_37 = x_131;
x_38 = x_156;
goto block_41;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec_ref(x_129);
lean_dec_ref(x_59);
lean_dec(x_56);
lean_dec(x_55);
lean_dec_ref(x_21);
lean_dec(x_20);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_157 = lean_ctor_get(x_130, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_130, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_159 = x_130;
} else {
 lean_dec_ref(x_130);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 2, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_158);
return x_160;
}
}
else
{
lean_object* x_161; 
x_161 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_6, x_7, x_8, x_9, x_10, x_127);
if (lean_obj_tag(x_161) == 0)
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; 
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
lean_dec_ref(x_161);
x_164 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_165 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__1;
lean_inc_ref(x_4);
x_166 = l_Lean_Name_mkStr3(x_4, x_164, x_165);
x_167 = lean_box(0);
x_168 = l_Lean_Expr_const___override(x_166, x_167);
x_169 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_170 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_171 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_59);
x_172 = lean_int_dec_le(x_56, x_55);
lean_dec(x_56);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_173 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10;
x_174 = l_Lean_Level_ofNat(x_57);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_167);
x_176 = l_Lean_Expr_const___override(x_173, x_175);
lean_inc_ref(x_4);
x_177 = l_Lean_Name_mkStr1(x_4);
x_178 = l_Lean_Expr_const___override(x_177, x_167);
x_179 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
x_180 = l_Lean_Name_mkStr2(x_4, x_179);
x_181 = l_Lean_Expr_const___override(x_180, x_167);
x_182 = lean_int_neg(x_55);
lean_dec(x_55);
x_183 = l_Int_toNat(x_182);
lean_dec(x_182);
x_184 = l_Lean_instToExprInt_mkNat(x_183);
x_185 = l_Lean_mkApp3(x_176, x_178, x_181, x_184);
x_42 = x_171;
x_43 = x_168;
x_44 = x_163;
x_45 = x_129;
x_46 = x_169;
x_47 = x_170;
x_48 = x_162;
x_49 = x_185;
goto block_52;
}
else
{
lean_object* x_186; lean_object* x_187; 
lean_dec_ref(x_4);
x_186 = l_Int_toNat(x_55);
lean_dec(x_55);
x_187 = l_Lean_instToExprInt_mkNat(x_186);
x_42 = x_171;
x_43 = x_168;
x_44 = x_163;
x_45 = x_129;
x_46 = x_169;
x_47 = x_170;
x_48 = x_162;
x_49 = x_187;
goto block_52;
}
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
lean_dec_ref(x_129);
lean_dec_ref(x_59);
lean_dec(x_56);
lean_dec(x_55);
lean_dec_ref(x_21);
lean_dec(x_20);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_188 = lean_ctor_get(x_161, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_161, 1);
lean_inc(x_189);
if (lean_is_exclusive(x_161)) {
 lean_ctor_release(x_161, 0);
 lean_ctor_release(x_161, 1);
 x_190 = x_161;
} else {
 lean_dec_ref(x_161);
 x_190 = lean_box(0);
}
if (lean_is_scalar(x_190)) {
 x_191 = lean_alloc_ctor(1, 2, 0);
} else {
 x_191 = x_190;
}
lean_ctor_set(x_191, 0, x_188);
lean_ctor_set(x_191, 1, x_189);
return x_191;
}
}
}
}
block_274:
{
lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_193 = l_Int_Linear_Poly_gcdCoeffs_x27(x_54);
x_194 = lean_unsigned_to_nat(1u);
x_195 = lean_nat_dec_eq(x_193, x_194);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; uint8_t x_201; 
x_196 = l_Int_Linear_Poly_getConst(x_54);
x_197 = lean_nat_to_int(x_193);
x_198 = lean_int_emod(x_196, x_197);
lean_dec(x_196);
x_199 = lean_unsigned_to_nat(0u);
x_200 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3;
x_201 = lean_int_dec_eq(x_198, x_200);
lean_dec(x_198);
if (x_201 == 0)
{
uint8_t x_202; 
x_202 = 1;
x_55 = x_197;
x_56 = x_200;
x_57 = x_199;
x_58 = x_202;
goto block_192;
}
else
{
x_55 = x_197;
x_56 = x_200;
x_57 = x_199;
x_58 = x_195;
goto block_192;
}
}
else
{
lean_object* x_203; uint8_t x_204; 
lean_dec(x_193);
lean_dec(x_20);
lean_inc_ref(x_54);
x_203 = l_Int_Linear_Poly_denoteExpr___redArg(x_12, x_54, x_19);
x_204 = !lean_is_exclusive(x_203);
if (x_204 == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_205 = lean_ctor_get(x_203, 0);
x_206 = lean_ctor_get(x_203, 1);
x_207 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_6, x_7, x_8, x_9, x_10, x_206);
if (lean_obj_tag(x_207) == 0)
{
uint8_t x_208; 
x_208 = !lean_is_exclusive(x_207);
if (x_208 == 0)
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_209 = lean_ctor_get(x_207, 0);
x_210 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__15;
x_211 = l_Lean_mkIntLE(x_205, x_210);
x_212 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_213 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__2;
x_214 = l_Lean_Name_mkStr3(x_4, x_212, x_213);
x_215 = lean_box(0);
x_216 = l_Lean_Expr_const___override(x_214, x_215);
x_217 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_218 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_219 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_54);
x_220 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_221 = l_Lean_mkApp5(x_216, x_209, x_217, x_218, x_219, x_220);
lean_inc_ref(x_211);
x_222 = l_Lean_mkPropEq(x_21, x_211);
x_223 = l_Lean_Meta_mkExpectedPropHint(x_221, x_222);
lean_ctor_set(x_203, 1, x_223);
lean_ctor_set(x_203, 0, x_211);
x_224 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_224, 0, x_203);
lean_ctor_set(x_207, 0, x_224);
return x_207;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_225 = lean_ctor_get(x_207, 0);
x_226 = lean_ctor_get(x_207, 1);
lean_inc(x_226);
lean_inc(x_225);
lean_dec(x_207);
x_227 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__15;
x_228 = l_Lean_mkIntLE(x_205, x_227);
x_229 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_230 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__2;
x_231 = l_Lean_Name_mkStr3(x_4, x_229, x_230);
x_232 = lean_box(0);
x_233 = l_Lean_Expr_const___override(x_231, x_232);
x_234 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_235 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_236 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_54);
x_237 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_238 = l_Lean_mkApp5(x_233, x_225, x_234, x_235, x_236, x_237);
lean_inc_ref(x_228);
x_239 = l_Lean_mkPropEq(x_21, x_228);
x_240 = l_Lean_Meta_mkExpectedPropHint(x_238, x_239);
lean_ctor_set(x_203, 1, x_240);
lean_ctor_set(x_203, 0, x_228);
x_241 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_241, 0, x_203);
x_242 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_226);
return x_242;
}
}
else
{
uint8_t x_243; 
lean_free_object(x_203);
lean_dec(x_205);
lean_dec_ref(x_54);
lean_dec_ref(x_21);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_243 = !lean_is_exclusive(x_207);
if (x_243 == 0)
{
return x_207;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_244 = lean_ctor_get(x_207, 0);
x_245 = lean_ctor_get(x_207, 1);
lean_inc(x_245);
lean_inc(x_244);
lean_dec(x_207);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_244);
lean_ctor_set(x_246, 1, x_245);
return x_246;
}
}
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_247 = lean_ctor_get(x_203, 0);
x_248 = lean_ctor_get(x_203, 1);
lean_inc(x_248);
lean_inc(x_247);
lean_dec(x_203);
x_249 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_6, x_7, x_8, x_9, x_10, x_248);
if (lean_obj_tag(x_249) == 0)
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_250 = lean_ctor_get(x_249, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_249, 1);
lean_inc(x_251);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 lean_ctor_release(x_249, 1);
 x_252 = x_249;
} else {
 lean_dec_ref(x_249);
 x_252 = lean_box(0);
}
x_253 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__15;
x_254 = l_Lean_mkIntLE(x_247, x_253);
x_255 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_256 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__2;
x_257 = l_Lean_Name_mkStr3(x_4, x_255, x_256);
x_258 = lean_box(0);
x_259 = l_Lean_Expr_const___override(x_257, x_258);
x_260 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_261 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_262 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_54);
x_263 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_264 = l_Lean_mkApp5(x_259, x_250, x_260, x_261, x_262, x_263);
lean_inc_ref(x_254);
x_265 = l_Lean_mkPropEq(x_21, x_254);
x_266 = l_Lean_Meta_mkExpectedPropHint(x_264, x_265);
x_267 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_267, 0, x_254);
lean_ctor_set(x_267, 1, x_266);
x_268 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_268, 0, x_267);
if (lean_is_scalar(x_252)) {
 x_269 = lean_alloc_ctor(0, 2, 0);
} else {
 x_269 = x_252;
}
lean_ctor_set(x_269, 0, x_268);
lean_ctor_set(x_269, 1, x_251);
return x_269;
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; 
lean_dec(x_247);
lean_dec_ref(x_54);
lean_dec_ref(x_21);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_270 = lean_ctor_get(x_249, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_249, 1);
lean_inc(x_271);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 lean_ctor_release(x_249, 1);
 x_272 = x_249;
} else {
 lean_dec_ref(x_249);
 x_272 = lean_box(0);
}
if (lean_is_scalar(x_272)) {
 x_273 = lean_alloc_ctor(1, 2, 0);
} else {
 x_273 = x_272;
}
lean_ctor_set(x_273, 0, x_270);
lean_ctor_set(x_273, 1, x_271);
return x_273;
}
}
}
}
}
else
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; uint8_t x_401; uint8_t x_512; 
x_358 = lean_ctor_get(x_13, 0);
x_359 = lean_ctor_get(x_13, 1);
lean_inc(x_359);
lean_inc(x_358);
lean_dec(x_13);
lean_inc_ref(x_3);
lean_inc_ref(x_12);
x_360 = l_Int_Linear_Expr_denoteExpr___redArg(x_12, x_3, x_359);
x_361 = lean_ctor_get(x_360, 0);
lean_inc(x_361);
x_362 = lean_ctor_get(x_360, 1);
lean_inc(x_362);
if (lean_is_exclusive(x_360)) {
 lean_ctor_release(x_360, 0);
 lean_ctor_release(x_360, 1);
 x_363 = x_360;
} else {
 lean_dec_ref(x_360);
 x_363 = lean_box(0);
}
x_364 = l_Lean_mkIntLE(x_358, x_361);
lean_inc_ref(x_3);
lean_inc_ref(x_2);
x_396 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_396, 0, x_2);
lean_ctor_set(x_396, 1, x_3);
x_397 = l_Int_Linear_Expr_norm(x_396);
lean_dec_ref(x_396);
x_512 = l_Int_Linear_Poly_isUnsatLe(x_397);
if (x_512 == 0)
{
uint8_t x_513; 
x_513 = l_Int_Linear_Poly_isValidLe(x_397);
if (x_513 == 0)
{
if (x_5 == 0)
{
goto block_511;
}
else
{
lean_object* x_514; uint8_t x_515; 
lean_inc_ref(x_397);
x_514 = l_Int_Linear_Poly_toExpr(x_397);
x_515 = l_Int_Linear_beqExpr____x40_Init_Data_Int_Linear___hyg_160_(x_514, x_2);
lean_dec_ref(x_514);
if (x_515 == 0)
{
goto block_511;
}
else
{
lean_object* x_516; uint8_t x_517; 
x_516 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__21;
x_517 = l_Int_Linear_beqExpr____x40_Init_Data_Int_Linear___hyg_160_(x_3, x_516);
if (x_517 == 0)
{
goto block_511;
}
else
{
lean_object* x_518; lean_object* x_519; 
lean_dec_ref(x_397);
lean_dec_ref(x_364);
lean_dec(x_363);
lean_dec_ref(x_12);
lean_dec(x_10);
lean_dec_ref(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_518 = lean_box(0);
x_519 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_519, 0, x_518);
lean_ctor_set(x_519, 1, x_362);
return x_519;
}
}
}
}
else
{
lean_object* x_520; 
lean_dec_ref(x_397);
lean_dec(x_363);
lean_dec_ref(x_12);
x_520 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_6, x_7, x_8, x_9, x_10, x_362);
if (lean_obj_tag(x_520) == 0)
{
lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; 
x_521 = lean_ctor_get(x_520, 0);
lean_inc(x_521);
x_522 = lean_ctor_get(x_520, 1);
lean_inc(x_522);
if (lean_is_exclusive(x_520)) {
 lean_ctor_release(x_520, 0);
 lean_ctor_release(x_520, 1);
 x_523 = x_520;
} else {
 lean_dec_ref(x_520);
 x_523 = lean_box(0);
}
x_524 = lean_box(0);
x_525 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__24;
x_526 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_527 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__3;
x_528 = l_Lean_Name_mkStr3(x_4, x_526, x_527);
x_529 = l_Lean_Expr_const___override(x_528, x_524);
x_530 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_531 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_532 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_533 = l_Lean_mkApp4(x_529, x_521, x_530, x_531, x_532);
x_534 = l_Lean_mkPropEq(x_364, x_525);
x_535 = l_Lean_Meta_mkExpectedPropHint(x_533, x_534);
x_536 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_536, 0, x_525);
lean_ctor_set(x_536, 1, x_535);
x_537 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_537, 0, x_536);
if (lean_is_scalar(x_523)) {
 x_538 = lean_alloc_ctor(0, 2, 0);
} else {
 x_538 = x_523;
}
lean_ctor_set(x_538, 0, x_537);
lean_ctor_set(x_538, 1, x_522);
return x_538;
}
else
{
lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; 
lean_dec_ref(x_364);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_539 = lean_ctor_get(x_520, 0);
lean_inc(x_539);
x_540 = lean_ctor_get(x_520, 1);
lean_inc(x_540);
if (lean_is_exclusive(x_520)) {
 lean_ctor_release(x_520, 0);
 lean_ctor_release(x_520, 1);
 x_541 = x_520;
} else {
 lean_dec_ref(x_520);
 x_541 = lean_box(0);
}
if (lean_is_scalar(x_541)) {
 x_542 = lean_alloc_ctor(1, 2, 0);
} else {
 x_542 = x_541;
}
lean_ctor_set(x_542, 0, x_539);
lean_ctor_set(x_542, 1, x_540);
return x_542;
}
}
}
else
{
lean_object* x_543; 
lean_dec_ref(x_397);
lean_dec(x_363);
lean_dec_ref(x_12);
x_543 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_6, x_7, x_8, x_9, x_10, x_362);
if (lean_obj_tag(x_543) == 0)
{
lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; 
x_544 = lean_ctor_get(x_543, 0);
lean_inc(x_544);
x_545 = lean_ctor_get(x_543, 1);
lean_inc(x_545);
if (lean_is_exclusive(x_543)) {
 lean_ctor_release(x_543, 0);
 lean_ctor_release(x_543, 1);
 x_546 = x_543;
} else {
 lean_dec_ref(x_543);
 x_546 = lean_box(0);
}
x_547 = lean_box(0);
x_548 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__6;
x_549 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_550 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__4;
x_551 = l_Lean_Name_mkStr3(x_4, x_549, x_550);
x_552 = l_Lean_Expr_const___override(x_551, x_547);
x_553 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_554 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_555 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_556 = l_Lean_mkApp4(x_552, x_544, x_553, x_554, x_555);
x_557 = l_Lean_mkPropEq(x_364, x_548);
x_558 = l_Lean_Meta_mkExpectedPropHint(x_556, x_557);
x_559 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_559, 0, x_548);
lean_ctor_set(x_559, 1, x_558);
x_560 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_560, 0, x_559);
if (lean_is_scalar(x_546)) {
 x_561 = lean_alloc_ctor(0, 2, 0);
} else {
 x_561 = x_546;
}
lean_ctor_set(x_561, 0, x_560);
lean_ctor_set(x_561, 1, x_545);
return x_561;
}
else
{
lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; 
lean_dec_ref(x_364);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_562 = lean_ctor_get(x_543, 0);
lean_inc(x_562);
x_563 = lean_ctor_get(x_543, 1);
lean_inc(x_563);
if (lean_is_exclusive(x_543)) {
 lean_ctor_release(x_543, 0);
 lean_ctor_release(x_543, 1);
 x_564 = x_543;
} else {
 lean_dec_ref(x_543);
 x_564 = lean_box(0);
}
if (lean_is_scalar(x_564)) {
 x_565 = lean_alloc_ctor(1, 2, 0);
} else {
 x_565 = x_564;
}
lean_ctor_set(x_565, 0, x_562);
lean_ctor_set(x_565, 1, x_563);
return x_565;
}
}
block_373:
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; 
lean_inc_ref(x_365);
x_368 = l_Lean_mkPropEq(x_364, x_365);
x_369 = l_Lean_Meta_mkExpectedPropHint(x_366, x_368);
x_370 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_370, 0, x_365);
lean_ctor_set(x_370, 1, x_369);
x_371 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_371, 0, x_370);
if (lean_is_scalar(x_363)) {
 x_372 = lean_alloc_ctor(0, 2, 0);
} else {
 x_372 = x_363;
}
lean_ctor_set(x_372, 0, x_371);
lean_ctor_set(x_372, 1, x_367);
return x_372;
}
block_384:
{
lean_object* x_382; lean_object* x_383; 
x_382 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_383 = l_Lean_mkApp6(x_376, x_380, x_378, x_375, x_374, x_381, x_382);
x_365 = x_377;
x_366 = x_383;
x_367 = x_379;
goto block_373;
}
block_395:
{
lean_object* x_393; lean_object* x_394; 
x_393 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_394 = l_Lean_mkApp6(x_386, x_391, x_389, x_390, x_385, x_392, x_393);
x_365 = x_388;
x_366 = x_394;
x_367 = x_387;
goto block_373;
}
block_471:
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; 
x_402 = l_Int_Linear_Poly_div(x_398, x_397);
lean_inc_ref(x_402);
x_403 = l_Int_Linear_Poly_denoteExpr___redArg(x_12, x_402, x_362);
x_404 = lean_ctor_get(x_403, 0);
lean_inc(x_404);
x_405 = lean_ctor_get(x_403, 1);
lean_inc(x_405);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 x_406 = x_403;
} else {
 lean_dec_ref(x_403);
 x_406 = lean_box(0);
}
x_407 = l_Lean_mkIntLit(x_399);
x_408 = l_Lean_mkIntLE(x_404, x_407);
if (x_401 == 0)
{
lean_object* x_409; 
x_409 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_6, x_7, x_8, x_9, x_10, x_405);
if (lean_obj_tag(x_409) == 0)
{
lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; uint8_t x_420; 
x_410 = lean_ctor_get(x_409, 0);
lean_inc(x_410);
x_411 = lean_ctor_get(x_409, 1);
lean_inc(x_411);
lean_dec_ref(x_409);
x_412 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_413 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__0;
lean_inc_ref(x_4);
x_414 = l_Lean_Name_mkStr3(x_4, x_412, x_413);
x_415 = lean_box(0);
x_416 = l_Lean_Expr_const___override(x_414, x_415);
x_417 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_418 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_419 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_402);
x_420 = lean_int_dec_le(x_399, x_398);
lean_dec(x_399);
if (x_420 == 0)
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_421 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10;
x_422 = l_Lean_Level_ofNat(x_400);
if (lean_is_scalar(x_406)) {
 x_423 = lean_alloc_ctor(1, 2, 0);
} else {
 x_423 = x_406;
 lean_ctor_set_tag(x_423, 1);
}
lean_ctor_set(x_423, 0, x_422);
lean_ctor_set(x_423, 1, x_415);
x_424 = l_Lean_Expr_const___override(x_421, x_423);
lean_inc_ref(x_4);
x_425 = l_Lean_Name_mkStr1(x_4);
x_426 = l_Lean_Expr_const___override(x_425, x_415);
x_427 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
x_428 = l_Lean_Name_mkStr2(x_4, x_427);
x_429 = l_Lean_Expr_const___override(x_428, x_415);
x_430 = lean_int_neg(x_398);
lean_dec(x_398);
x_431 = l_Int_toNat(x_430);
lean_dec(x_430);
x_432 = l_Lean_instToExprInt_mkNat(x_431);
x_433 = l_Lean_mkApp3(x_424, x_426, x_429, x_432);
x_374 = x_419;
x_375 = x_418;
x_376 = x_416;
x_377 = x_408;
x_378 = x_417;
x_379 = x_411;
x_380 = x_410;
x_381 = x_433;
goto block_384;
}
else
{
lean_object* x_434; lean_object* x_435; 
lean_dec(x_406);
lean_dec_ref(x_4);
x_434 = l_Int_toNat(x_398);
lean_dec(x_398);
x_435 = l_Lean_instToExprInt_mkNat(x_434);
x_374 = x_419;
x_375 = x_418;
x_376 = x_416;
x_377 = x_408;
x_378 = x_417;
x_379 = x_411;
x_380 = x_410;
x_381 = x_435;
goto block_384;
}
}
else
{
lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; 
lean_dec_ref(x_408);
lean_dec(x_406);
lean_dec_ref(x_402);
lean_dec(x_399);
lean_dec(x_398);
lean_dec_ref(x_364);
lean_dec(x_363);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_436 = lean_ctor_get(x_409, 0);
lean_inc(x_436);
x_437 = lean_ctor_get(x_409, 1);
lean_inc(x_437);
if (lean_is_exclusive(x_409)) {
 lean_ctor_release(x_409, 0);
 lean_ctor_release(x_409, 1);
 x_438 = x_409;
} else {
 lean_dec_ref(x_409);
 x_438 = lean_box(0);
}
if (lean_is_scalar(x_438)) {
 x_439 = lean_alloc_ctor(1, 2, 0);
} else {
 x_439 = x_438;
}
lean_ctor_set(x_439, 0, x_436);
lean_ctor_set(x_439, 1, x_437);
return x_439;
}
}
else
{
lean_object* x_440; 
x_440 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_6, x_7, x_8, x_9, x_10, x_405);
if (lean_obj_tag(x_440) == 0)
{
lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; uint8_t x_451; 
x_441 = lean_ctor_get(x_440, 0);
lean_inc(x_441);
x_442 = lean_ctor_get(x_440, 1);
lean_inc(x_442);
lean_dec_ref(x_440);
x_443 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_444 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__1;
lean_inc_ref(x_4);
x_445 = l_Lean_Name_mkStr3(x_4, x_443, x_444);
x_446 = lean_box(0);
x_447 = l_Lean_Expr_const___override(x_445, x_446);
x_448 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_449 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_450 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_402);
x_451 = lean_int_dec_le(x_399, x_398);
lean_dec(x_399);
if (x_451 == 0)
{
lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; 
x_452 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10;
x_453 = l_Lean_Level_ofNat(x_400);
if (lean_is_scalar(x_406)) {
 x_454 = lean_alloc_ctor(1, 2, 0);
} else {
 x_454 = x_406;
 lean_ctor_set_tag(x_454, 1);
}
lean_ctor_set(x_454, 0, x_453);
lean_ctor_set(x_454, 1, x_446);
x_455 = l_Lean_Expr_const___override(x_452, x_454);
lean_inc_ref(x_4);
x_456 = l_Lean_Name_mkStr1(x_4);
x_457 = l_Lean_Expr_const___override(x_456, x_446);
x_458 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
x_459 = l_Lean_Name_mkStr2(x_4, x_458);
x_460 = l_Lean_Expr_const___override(x_459, x_446);
x_461 = lean_int_neg(x_398);
lean_dec(x_398);
x_462 = l_Int_toNat(x_461);
lean_dec(x_461);
x_463 = l_Lean_instToExprInt_mkNat(x_462);
x_464 = l_Lean_mkApp3(x_455, x_457, x_460, x_463);
x_385 = x_450;
x_386 = x_447;
x_387 = x_442;
x_388 = x_408;
x_389 = x_448;
x_390 = x_449;
x_391 = x_441;
x_392 = x_464;
goto block_395;
}
else
{
lean_object* x_465; lean_object* x_466; 
lean_dec(x_406);
lean_dec_ref(x_4);
x_465 = l_Int_toNat(x_398);
lean_dec(x_398);
x_466 = l_Lean_instToExprInt_mkNat(x_465);
x_385 = x_450;
x_386 = x_447;
x_387 = x_442;
x_388 = x_408;
x_389 = x_448;
x_390 = x_449;
x_391 = x_441;
x_392 = x_466;
goto block_395;
}
}
else
{
lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; 
lean_dec_ref(x_408);
lean_dec(x_406);
lean_dec_ref(x_402);
lean_dec(x_399);
lean_dec(x_398);
lean_dec_ref(x_364);
lean_dec(x_363);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_467 = lean_ctor_get(x_440, 0);
lean_inc(x_467);
x_468 = lean_ctor_get(x_440, 1);
lean_inc(x_468);
if (lean_is_exclusive(x_440)) {
 lean_ctor_release(x_440, 0);
 lean_ctor_release(x_440, 1);
 x_469 = x_440;
} else {
 lean_dec_ref(x_440);
 x_469 = lean_box(0);
}
if (lean_is_scalar(x_469)) {
 x_470 = lean_alloc_ctor(1, 2, 0);
} else {
 x_470 = x_469;
}
lean_ctor_set(x_470, 0, x_467);
lean_ctor_set(x_470, 1, x_468);
return x_470;
}
}
}
block_511:
{
lean_object* x_472; lean_object* x_473; uint8_t x_474; 
x_472 = l_Int_Linear_Poly_gcdCoeffs_x27(x_397);
x_473 = lean_unsigned_to_nat(1u);
x_474 = lean_nat_dec_eq(x_472, x_473);
if (x_474 == 0)
{
lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; uint8_t x_480; 
x_475 = l_Int_Linear_Poly_getConst(x_397);
x_476 = lean_nat_to_int(x_472);
x_477 = lean_int_emod(x_475, x_476);
lean_dec(x_475);
x_478 = lean_unsigned_to_nat(0u);
x_479 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3;
x_480 = lean_int_dec_eq(x_477, x_479);
lean_dec(x_477);
if (x_480 == 0)
{
uint8_t x_481; 
x_481 = 1;
x_398 = x_476;
x_399 = x_479;
x_400 = x_478;
x_401 = x_481;
goto block_471;
}
else
{
x_398 = x_476;
x_399 = x_479;
x_400 = x_478;
x_401 = x_474;
goto block_471;
}
}
else
{
lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; 
lean_dec(x_472);
lean_dec(x_363);
lean_inc_ref(x_397);
x_482 = l_Int_Linear_Poly_denoteExpr___redArg(x_12, x_397, x_362);
x_483 = lean_ctor_get(x_482, 0);
lean_inc(x_483);
x_484 = lean_ctor_get(x_482, 1);
lean_inc(x_484);
if (lean_is_exclusive(x_482)) {
 lean_ctor_release(x_482, 0);
 lean_ctor_release(x_482, 1);
 x_485 = x_482;
} else {
 lean_dec_ref(x_482);
 x_485 = lean_box(0);
}
x_486 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_6, x_7, x_8, x_9, x_10, x_484);
if (lean_obj_tag(x_486) == 0)
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; 
x_487 = lean_ctor_get(x_486, 0);
lean_inc(x_487);
x_488 = lean_ctor_get(x_486, 1);
lean_inc(x_488);
if (lean_is_exclusive(x_486)) {
 lean_ctor_release(x_486, 0);
 lean_ctor_release(x_486, 1);
 x_489 = x_486;
} else {
 lean_dec_ref(x_486);
 x_489 = lean_box(0);
}
x_490 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__15;
x_491 = l_Lean_mkIntLE(x_483, x_490);
x_492 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_493 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__2;
x_494 = l_Lean_Name_mkStr3(x_4, x_492, x_493);
x_495 = lean_box(0);
x_496 = l_Lean_Expr_const___override(x_494, x_495);
x_497 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_498 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_3);
x_499 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_397);
x_500 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_501 = l_Lean_mkApp5(x_496, x_487, x_497, x_498, x_499, x_500);
lean_inc_ref(x_491);
x_502 = l_Lean_mkPropEq(x_364, x_491);
x_503 = l_Lean_Meta_mkExpectedPropHint(x_501, x_502);
if (lean_is_scalar(x_485)) {
 x_504 = lean_alloc_ctor(0, 2, 0);
} else {
 x_504 = x_485;
}
lean_ctor_set(x_504, 0, x_491);
lean_ctor_set(x_504, 1, x_503);
x_505 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_505, 0, x_504);
if (lean_is_scalar(x_489)) {
 x_506 = lean_alloc_ctor(0, 2, 0);
} else {
 x_506 = x_489;
}
lean_ctor_set(x_506, 0, x_505);
lean_ctor_set(x_506, 1, x_488);
return x_506;
}
else
{
lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; 
lean_dec(x_485);
lean_dec(x_483);
lean_dec_ref(x_397);
lean_dec_ref(x_364);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_507 = lean_ctor_get(x_486, 0);
lean_inc(x_507);
x_508 = lean_ctor_get(x_486, 1);
lean_inc(x_508);
if (lean_is_exclusive(x_486)) {
 lean_ctor_release(x_486, 0);
 lean_ctor_release(x_486, 1);
 x_509 = x_486;
} else {
 lean_dec_ref(x_486);
 x_509 = lean_box(0);
}
if (lean_is_scalar(x_509)) {
 x_510 = lean_alloc_ctor(1, 2, 0);
} else {
 x_510 = x_509;
}
lean_ctor_set(x_510, 0, x_507);
lean_ctor_set(x_510, 1, x_508);
return x_510;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LE", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("le", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__1;
x_2 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; lean_object* x_34; uint8_t x_35; 
x_8 = l_Lean_instInhabitedExpr;
x_34 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__2;
x_35 = l_Lean_Expr_isAppOf(x_1, x_34);
if (x_35 == 0)
{
x_9 = x_35;
goto block_33;
}
else
{
x_9 = x_2;
goto block_33;
}
block_33:
{
lean_object* x_10; 
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
x_10 = l_Lean_Meta_Simp_Arith_Int_leCnstr_x3f(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec_ref(x_11);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_dec_ref(x_10);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0;
x_25 = lean_box(x_9);
x_26 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___boxed), 11, 5);
lean_closure_set(x_26, 0, x_8);
lean_closure_set(x_26, 1, x_21);
lean_closure_set(x_26, 2, x_22);
lean_closure_set(x_26, 3, x_24);
lean_closure_set(x_26, 4, x_25);
x_27 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1;
x_28 = l_Lean_Meta_Simp_Arith_withAbstractAtoms(x_23, x_27, x_26, x_3, x_4, x_5, x_6, x_20);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
x_29 = !lean_is_exclusive(x_10);
if (x_29 == 0)
{
return x_10;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_10, 0);
x_31 = lean_ctor_get(x_10, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_10);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_5);
x_13 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1(x_1, x_2, x_3, x_4, x_12, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
x_9 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Eq", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("trans", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__1;
x_2 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_levelOne;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__4;
x_2 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__2;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
lean_dec_ref(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
lean_dec_ref(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = 0;
lean_inc(x_13);
x_15 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f(x_13, x_14, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
lean_dec_ref(x_1);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 0);
lean_dec(x_18);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_3);
lean_ctor_set(x_2, 0, x_19);
lean_ctor_set(x_15, 0, x_2);
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_3);
lean_ctor_set(x_2, 0, x_21);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_2);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_free_object(x_2);
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_15);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = lean_ctor_get(x_15, 0);
lean_dec(x_26);
x_27 = !lean_is_exclusive(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_25, 0);
x_29 = lean_ctor_get(x_25, 1);
x_30 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__5;
x_31 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__6;
lean_inc(x_28);
x_32 = l_Lean_mkApp6(x_30, x_31, x_1, x_13, x_28, x_3, x_29);
lean_ctor_set(x_25, 1, x_32);
return x_15;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_25, 0);
x_34 = lean_ctor_get(x_25, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_25);
x_35 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__5;
x_36 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__6;
lean_inc(x_33);
x_37 = l_Lean_mkApp6(x_35, x_36, x_1, x_13, x_33, x_3, x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_37);
lean_ctor_set(x_16, 0, x_38);
return x_15;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_39 = lean_ctor_get(x_16, 0);
x_40 = lean_ctor_get(x_15, 1);
lean_inc(x_40);
lean_dec(x_15);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_43 = x_39;
} else {
 lean_dec_ref(x_39);
 x_43 = lean_box(0);
}
x_44 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__5;
x_45 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__6;
lean_inc(x_41);
x_46 = l_Lean_mkApp6(x_44, x_45, x_1, x_13, x_41, x_3, x_42);
if (lean_is_scalar(x_43)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_43;
}
lean_ctor_set(x_47, 0, x_41);
lean_ctor_set(x_47, 1, x_46);
lean_ctor_set(x_16, 0, x_47);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_16);
lean_ctor_set(x_48, 1, x_40);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_49 = lean_ctor_get(x_16, 0);
lean_inc(x_49);
lean_dec(x_16);
x_50 = lean_ctor_get(x_15, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 lean_ctor_release(x_15, 1);
 x_51 = x_15;
} else {
 lean_dec_ref(x_15);
 x_51 = lean_box(0);
}
x_52 = lean_ctor_get(x_49, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_49, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_54 = x_49;
} else {
 lean_dec_ref(x_49);
 x_54 = lean_box(0);
}
x_55 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__5;
x_56 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__6;
lean_inc(x_52);
x_57 = l_Lean_mkApp6(x_55, x_56, x_1, x_13, x_52, x_3, x_53);
if (lean_is_scalar(x_54)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_54;
}
lean_ctor_set(x_58, 0, x_52);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_58);
if (lean_is_scalar(x_51)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_51;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_50);
return x_60;
}
}
}
else
{
lean_free_object(x_2);
lean_dec(x_13);
lean_dec_ref(x_3);
lean_dec_ref(x_1);
return x_15;
}
}
else
{
lean_object* x_61; uint8_t x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_2, 0);
lean_inc(x_61);
lean_dec(x_2);
x_62 = 0;
lean_inc(x_61);
x_63 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f(x_61, x_62, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec_ref(x_1);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_66 = x_63;
} else {
 lean_dec_ref(x_63);
 x_66 = lean_box(0);
}
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_61);
lean_ctor_set(x_67, 1, x_3);
x_68 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_68, 0, x_67);
if (lean_is_scalar(x_66)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_66;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_65);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_70 = lean_ctor_get(x_64, 0);
lean_inc(x_70);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 x_71 = x_64;
} else {
 lean_dec_ref(x_64);
 x_71 = lean_box(0);
}
x_72 = lean_ctor_get(x_63, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_73 = x_63;
} else {
 lean_dec_ref(x_63);
 x_73 = lean_box(0);
}
x_74 = lean_ctor_get(x_70, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_70, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_76 = x_70;
} else {
 lean_dec_ref(x_70);
 x_76 = lean_box(0);
}
x_77 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__5;
x_78 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__6;
lean_inc(x_74);
x_79 = l_Lean_mkApp6(x_77, x_78, x_1, x_61, x_74, x_3, x_75);
if (lean_is_scalar(x_76)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_76;
}
lean_ctor_set(x_80, 0, x_74);
lean_ctor_set(x_80, 1, x_79);
if (lean_is_scalar(x_71)) {
 x_81 = lean_alloc_ctor(1, 1, 0);
} else {
 x_81 = x_71;
}
lean_ctor_set(x_81, 0, x_80);
if (lean_is_scalar(x_73)) {
 x_82 = lean_alloc_ctor(0, 2, 0);
} else {
 x_82 = x_73;
}
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_72);
return x_82;
}
}
else
{
lean_dec(x_61);
lean_dec_ref(x_3);
lean_dec_ref(x_1);
return x_63;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Not", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__0;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_inhabitedExprDummy", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__2;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__3;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("GT", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("gt", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__6;
x_2 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__5;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LT", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lt", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__9;
x_2 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__8;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("GE", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ge", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__12;
x_2 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__11;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__18;
x_2 = l_Lean_mkIntLit(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("not_le_eq", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__15;
x_2 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__16;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("not_ge_eq", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__18;
x_2 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__19;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("not_lt_eq", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__21;
x_2 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__22;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__24() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("not_gt_eq", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__24;
x_2 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__25;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__1;
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Expr_isAppOfArity(x_1, x_7, x_8);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; 
x_10 = 1;
x_11 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f(x_1, x_10, x_2, x_3, x_4, x_5, x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_25; uint8_t x_26; 
x_12 = l_Lean_Expr_appArg_x21(x_1);
x_13 = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(x_12, x_3, x_6);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec_ref(x_13);
x_16 = lean_box(0);
x_17 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__4;
x_25 = l_Lean_Expr_cleanupAnnotations(x_14);
x_26 = l_Lean_Expr_isApp(x_25);
if (x_26 == 0)
{
lean_dec_ref(x_25);
x_18 = x_2;
x_19 = x_3;
x_20 = x_4;
x_21 = x_5;
goto block_24;
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_25, 1);
lean_inc_ref(x_27);
x_28 = l_Lean_Expr_appFnCleanup___redArg(x_25);
x_29 = l_Lean_Expr_isApp(x_28);
if (x_29 == 0)
{
lean_dec_ref(x_28);
lean_dec_ref(x_27);
x_18 = x_2;
x_19 = x_3;
x_20 = x_4;
x_21 = x_5;
goto block_24;
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_28, 1);
lean_inc_ref(x_30);
x_31 = l_Lean_Expr_appFnCleanup___redArg(x_28);
x_32 = l_Lean_Expr_isApp(x_31);
if (x_32 == 0)
{
lean_dec_ref(x_31);
lean_dec_ref(x_30);
lean_dec_ref(x_27);
x_18 = x_2;
x_19 = x_3;
x_20 = x_4;
x_21 = x_5;
goto block_24;
}
else
{
lean_object* x_33; uint8_t x_34; 
x_33 = l_Lean_Expr_appFnCleanup___redArg(x_31);
x_34 = l_Lean_Expr_isApp(x_33);
if (x_34 == 0)
{
lean_dec_ref(x_33);
lean_dec_ref(x_30);
lean_dec_ref(x_27);
x_18 = x_2;
x_19 = x_3;
x_20 = x_4;
x_21 = x_5;
goto block_24;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_35 = lean_ctor_get(x_33, 1);
lean_inc_ref(x_35);
x_36 = l_Lean_Expr_appFnCleanup___redArg(x_33);
x_37 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__7;
x_38 = l_Lean_Expr_isConstOf(x_36, x_37);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__10;
x_40 = l_Lean_Expr_isConstOf(x_36, x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__13;
x_42 = l_Lean_Expr_isConstOf(x_36, x_41);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__2;
x_44 = l_Lean_Expr_isConstOf(x_36, x_43);
lean_dec_ref(x_36);
if (x_44 == 0)
{
lean_dec_ref(x_35);
lean_dec_ref(x_30);
lean_dec_ref(x_27);
x_18 = x_2;
x_19 = x_3;
x_20 = x_4;
x_21 = x_5;
goto block_24;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_45 = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(x_35, x_3, x_15);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec_ref(x_45);
x_48 = l_Lean_Expr_cleanupAnnotations(x_46);
x_49 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1;
x_50 = l_Lean_Expr_isConstOf(x_48, x_49);
lean_dec_ref(x_48);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
lean_dec_ref(x_30);
lean_dec_ref(x_27);
x_51 = lean_box(0);
x_52 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0(x_1, x_16, x_17, x_51, x_2, x_3, x_4, x_5, x_47);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_53 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__14;
lean_inc_ref(x_27);
x_54 = l_Lean_mkIntAdd(x_27, x_53);
lean_inc_ref(x_30);
x_55 = l_Lean_mkIntLE(x_54, x_30);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_55);
x_57 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__17;
x_58 = l_Lean_mkAppB(x_57, x_30, x_27);
x_59 = lean_box(0);
x_60 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0(x_1, x_56, x_58, x_59, x_2, x_3, x_4, x_5, x_47);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
lean_dec_ref(x_36);
x_61 = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(x_35, x_3, x_15);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec_ref(x_61);
x_64 = l_Lean_Expr_cleanupAnnotations(x_62);
x_65 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1;
x_66 = l_Lean_Expr_isConstOf(x_64, x_65);
lean_dec_ref(x_64);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
lean_dec_ref(x_30);
lean_dec_ref(x_27);
x_67 = lean_box(0);
x_68 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0(x_1, x_16, x_17, x_67, x_2, x_3, x_4, x_5, x_63);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_69 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__14;
lean_inc_ref(x_30);
x_70 = l_Lean_mkIntAdd(x_30, x_69);
lean_inc_ref(x_27);
x_71 = l_Lean_mkIntLE(x_70, x_27);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_73 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__20;
x_74 = l_Lean_mkAppB(x_73, x_30, x_27);
x_75 = lean_box(0);
x_76 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0(x_1, x_72, x_74, x_75, x_2, x_3, x_4, x_5, x_63);
return x_76;
}
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
lean_dec_ref(x_36);
x_77 = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(x_35, x_3, x_15);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec_ref(x_77);
x_80 = l_Lean_Expr_cleanupAnnotations(x_78);
x_81 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1;
x_82 = l_Lean_Expr_isConstOf(x_80, x_81);
lean_dec_ref(x_80);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; 
lean_dec_ref(x_30);
lean_dec_ref(x_27);
x_83 = lean_box(0);
x_84 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0(x_1, x_16, x_17, x_83, x_2, x_3, x_4, x_5, x_79);
return x_84;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_inc_ref(x_30);
lean_inc_ref(x_27);
x_85 = l_Lean_mkIntLE(x_27, x_30);
x_86 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_86, 0, x_85);
x_87 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__23;
x_88 = l_Lean_mkAppB(x_87, x_30, x_27);
x_89 = lean_box(0);
x_90 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0(x_1, x_86, x_88, x_89, x_2, x_3, x_4, x_5, x_79);
return x_90;
}
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
lean_dec_ref(x_36);
x_91 = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(x_35, x_3, x_15);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec_ref(x_91);
x_94 = l_Lean_Expr_cleanupAnnotations(x_92);
x_95 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1;
x_96 = l_Lean_Expr_isConstOf(x_94, x_95);
lean_dec_ref(x_94);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; 
lean_dec_ref(x_30);
lean_dec_ref(x_27);
x_97 = lean_box(0);
x_98 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0(x_1, x_16, x_17, x_97, x_2, x_3, x_4, x_5, x_93);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_inc_ref(x_27);
lean_inc_ref(x_30);
x_99 = l_Lean_mkIntLE(x_30, x_27);
x_100 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_100, 0, x_99);
x_101 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__26;
x_102 = l_Lean_mkAppB(x_101, x_30, x_27);
x_103 = lean_box(0);
x_104 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0(x_1, x_100, x_102, x_103, x_2, x_3, x_4, x_5, x_93);
return x_104;
}
}
}
}
}
}
block_24:
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0(x_1, x_16, x_17, x_22, x_18, x_19, x_20, x_21, x_15);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("norm_dvd_gcd", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("norm_dvd", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("dvd_eq_false", 12, 12);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_188; 
lean_inc_ref(x_7);
x_93 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__0___boxed), 3, 2);
lean_closure_set(x_93, 0, x_1);
lean_closure_set(x_93, 1, x_7);
lean_inc_ref(x_2);
lean_inc_ref(x_93);
x_94 = l_Int_Linear_Expr_denoteExpr___redArg(x_93, x_2, x_12);
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_97 = x_94;
} else {
 lean_dec_ref(x_94);
 x_97 = lean_box(0);
}
x_188 = lean_int_dec_le(x_4, x_6);
if (x_188 == 0)
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_189 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10;
x_190 = l_Lean_Level_ofNat(x_5);
x_191 = lean_box(0);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_190);
lean_ctor_set(x_192, 1, x_191);
x_193 = l_Lean_Expr_const___override(x_189, x_192);
lean_inc_ref(x_3);
x_194 = l_Lean_Name_mkStr1(x_3);
x_195 = l_Lean_Expr_const___override(x_194, x_191);
x_196 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
lean_inc_ref(x_3);
x_197 = l_Lean_Name_mkStr2(x_3, x_196);
x_198 = l_Lean_Expr_const___override(x_197, x_191);
x_199 = lean_int_neg(x_6);
x_200 = l_Int_toNat(x_199);
lean_dec(x_199);
x_201 = l_Lean_instToExprInt_mkNat(x_200);
x_202 = l_Lean_mkApp3(x_193, x_195, x_198, x_201);
x_98 = x_202;
goto block_187;
}
else
{
lean_object* x_203; lean_object* x_204; 
x_203 = l_Int_toNat(x_6);
x_204 = l_Lean_instToExprInt_mkNat(x_203);
x_98 = x_204;
goto block_187;
}
block_22:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_inc_ref(x_13);
x_17 = l_Lean_mkPropEq(x_14, x_13);
x_18 = l_Lean_Meta_mkExpectedPropHint(x_15, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_16);
return x_21;
}
block_35:
{
lean_object* x_33; lean_object* x_34; 
x_33 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_34 = l_Lean_mkApp7(x_24, x_27, x_31, x_29, x_26, x_28, x_32, x_33);
x_13 = x_23;
x_14 = x_25;
x_15 = x_34;
x_16 = x_30;
goto block_22;
}
block_92:
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
lean_inc_ref(x_42);
x_43 = l_Lean_mkIntDvd(x_42, x_38);
x_44 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__18;
x_45 = lean_int_dec_eq(x_40, x_44);
if (x_45 == 0)
{
lean_object* x_46; 
x_46 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_7, x_8, x_9, x_10, x_11, x_36);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec_ref(x_46);
x_49 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_50 = l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__0;
lean_inc_ref(x_3);
x_51 = l_Lean_Name_mkStr3(x_3, x_49, x_50);
x_52 = lean_box(0);
x_53 = l_Lean_Expr_const___override(x_51, x_52);
x_54 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_55 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_37);
x_56 = lean_int_dec_le(x_4, x_40);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_57 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10;
x_58 = l_Lean_Level_ofNat(x_5);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_52);
x_60 = l_Lean_Expr_const___override(x_57, x_59);
lean_inc_ref(x_3);
x_61 = l_Lean_Name_mkStr1(x_3);
x_62 = l_Lean_Expr_const___override(x_61, x_52);
x_63 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
x_64 = l_Lean_Name_mkStr2(x_3, x_63);
x_65 = l_Lean_Expr_const___override(x_64, x_52);
x_66 = lean_int_neg(x_40);
lean_dec(x_40);
x_67 = l_Int_toNat(x_66);
lean_dec(x_66);
x_68 = l_Lean_instToExprInt_mkNat(x_67);
x_69 = l_Lean_mkApp3(x_60, x_62, x_65, x_68);
x_23 = x_43;
x_24 = x_53;
x_25 = x_39;
x_26 = x_42;
x_27 = x_47;
x_28 = x_55;
x_29 = x_54;
x_30 = x_48;
x_31 = x_41;
x_32 = x_69;
goto block_35;
}
else
{
lean_object* x_70; lean_object* x_71; 
lean_dec_ref(x_3);
x_70 = l_Int_toNat(x_40);
lean_dec(x_40);
x_71 = l_Lean_instToExprInt_mkNat(x_70);
x_23 = x_43;
x_24 = x_53;
x_25 = x_39;
x_26 = x_42;
x_27 = x_47;
x_28 = x_55;
x_29 = x_54;
x_30 = x_48;
x_31 = x_41;
x_32 = x_71;
goto block_35;
}
}
else
{
uint8_t x_72; 
lean_dec_ref(x_43);
lean_dec_ref(x_42);
lean_dec_ref(x_41);
lean_dec(x_40);
lean_dec_ref(x_39);
lean_dec_ref(x_37);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_72 = !lean_is_exclusive(x_46);
if (x_72 == 0)
{
return x_46;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_46, 0);
x_74 = lean_ctor_get(x_46, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_46);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
else
{
lean_object* x_76; 
lean_dec_ref(x_42);
lean_dec(x_40);
x_76 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_7, x_8, x_9, x_10, x_11, x_36);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec_ref(x_76);
x_79 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_80 = l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__1;
x_81 = l_Lean_Name_mkStr3(x_3, x_79, x_80);
x_82 = lean_box(0);
x_83 = l_Lean_Expr_const___override(x_81, x_82);
x_84 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_85 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_37);
x_86 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_87 = l_Lean_mkApp5(x_83, x_77, x_41, x_84, x_85, x_86);
x_13 = x_43;
x_14 = x_39;
x_15 = x_87;
x_16 = x_78;
goto block_22;
}
else
{
uint8_t x_88; 
lean_dec_ref(x_43);
lean_dec_ref(x_41);
lean_dec_ref(x_39);
lean_dec_ref(x_37);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_88 = !lean_is_exclusive(x_76);
if (x_88 == 0)
{
return x_76;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_76, 0);
x_90 = lean_ctor_get(x_76, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_76);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
}
block_187:
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
lean_inc_ref(x_98);
x_99 = l_Lean_mkIntDvd(x_98, x_95);
x_100 = l_Int_Linear_Expr_norm(x_2);
lean_inc(x_6);
x_101 = l_Int_Linear_Poly_gcdCoeffs(x_100, x_6);
x_102 = l_Int_Linear_Poly_getConst(x_100);
x_103 = lean_int_emod(x_102, x_101);
lean_dec(x_102);
x_104 = lean_int_dec_eq(x_103, x_4);
lean_dec(x_103);
if (x_104 == 0)
{
lean_object* x_105; 
lean_dec(x_101);
lean_dec_ref(x_100);
lean_dec(x_97);
lean_dec_ref(x_93);
lean_dec(x_6);
x_105 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_7, x_8, x_9, x_10, x_11, x_96);
if (lean_obj_tag(x_105) == 0)
{
uint8_t x_106; 
x_106 = !lean_is_exclusive(x_105);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_107 = lean_ctor_get(x_105, 0);
x_108 = lean_box(0);
x_109 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__6;
x_110 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_111 = l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__2;
x_112 = l_Lean_Name_mkStr3(x_3, x_110, x_111);
x_113 = l_Lean_Expr_const___override(x_112, x_108);
x_114 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_115 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_116 = l_Lean_mkApp4(x_113, x_107, x_98, x_114, x_115);
x_117 = l_Lean_mkPropEq(x_99, x_109);
x_118 = l_Lean_Meta_mkExpectedPropHint(x_116, x_117);
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_109);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_105, 0, x_120);
return x_105;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_121 = lean_ctor_get(x_105, 0);
x_122 = lean_ctor_get(x_105, 1);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_105);
x_123 = lean_box(0);
x_124 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__6;
x_125 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_126 = l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__2;
x_127 = l_Lean_Name_mkStr3(x_3, x_125, x_126);
x_128 = l_Lean_Expr_const___override(x_127, x_123);
x_129 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_2);
x_130 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_131 = l_Lean_mkApp4(x_128, x_121, x_98, x_129, x_130);
x_132 = l_Lean_mkPropEq(x_99, x_124);
x_133 = l_Lean_Meta_mkExpectedPropHint(x_131, x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_124);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_135, 0, x_134);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_122);
return x_136;
}
}
else
{
uint8_t x_137; 
lean_dec_ref(x_99);
lean_dec_ref(x_98);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_137 = !lean_is_exclusive(x_105);
if (x_137 == 0)
{
return x_105;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_105, 0);
x_139 = lean_ctor_get(x_105, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_105);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
return x_140;
}
}
}
else
{
lean_object* x_141; lean_object* x_142; uint8_t x_143; 
x_141 = l_Int_Linear_Poly_div(x_101, x_100);
lean_inc_ref(x_141);
x_142 = l_Int_Linear_Poly_toExpr(x_141);
x_143 = l_Int_Linear_beqExpr____x40_Init_Data_Int_Linear___hyg_160_(x_2, x_142);
lean_dec_ref(x_142);
if (x_143 == 0)
{
lean_object* x_144; uint8_t x_145; 
lean_dec(x_97);
lean_inc_ref(x_141);
x_144 = l_Int_Linear_Poly_denoteExpr___redArg(x_93, x_141, x_96);
x_145 = !lean_is_exclusive(x_144);
if (x_145 == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; 
x_146 = lean_ctor_get(x_144, 0);
x_147 = lean_ctor_get(x_144, 1);
x_148 = lean_int_ediv(x_6, x_101);
lean_dec(x_6);
x_149 = lean_int_dec_le(x_4, x_148);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_150 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10;
x_151 = l_Lean_Level_ofNat(x_5);
x_152 = lean_box(0);
lean_ctor_set_tag(x_144, 1);
lean_ctor_set(x_144, 1, x_152);
lean_ctor_set(x_144, 0, x_151);
x_153 = l_Lean_Expr_const___override(x_150, x_144);
lean_inc_ref(x_3);
x_154 = l_Lean_Name_mkStr1(x_3);
x_155 = l_Lean_Expr_const___override(x_154, x_152);
x_156 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
lean_inc_ref(x_3);
x_157 = l_Lean_Name_mkStr2(x_3, x_156);
x_158 = l_Lean_Expr_const___override(x_157, x_152);
x_159 = lean_int_neg(x_148);
lean_dec(x_148);
x_160 = l_Int_toNat(x_159);
lean_dec(x_159);
x_161 = l_Lean_instToExprInt_mkNat(x_160);
x_162 = l_Lean_mkApp3(x_153, x_155, x_158, x_161);
x_36 = x_147;
x_37 = x_141;
x_38 = x_146;
x_39 = x_99;
x_40 = x_101;
x_41 = x_98;
x_42 = x_162;
goto block_92;
}
else
{
lean_object* x_163; lean_object* x_164; 
lean_free_object(x_144);
x_163 = l_Int_toNat(x_148);
lean_dec(x_148);
x_164 = l_Lean_instToExprInt_mkNat(x_163);
x_36 = x_147;
x_37 = x_141;
x_38 = x_146;
x_39 = x_99;
x_40 = x_101;
x_41 = x_98;
x_42 = x_164;
goto block_92;
}
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; 
x_165 = lean_ctor_get(x_144, 0);
x_166 = lean_ctor_get(x_144, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_144);
x_167 = lean_int_ediv(x_6, x_101);
lean_dec(x_6);
x_168 = lean_int_dec_le(x_4, x_167);
if (x_168 == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_169 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10;
x_170 = l_Lean_Level_ofNat(x_5);
x_171 = lean_box(0);
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
x_173 = l_Lean_Expr_const___override(x_169, x_172);
lean_inc_ref(x_3);
x_174 = l_Lean_Name_mkStr1(x_3);
x_175 = l_Lean_Expr_const___override(x_174, x_171);
x_176 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14;
lean_inc_ref(x_3);
x_177 = l_Lean_Name_mkStr2(x_3, x_176);
x_178 = l_Lean_Expr_const___override(x_177, x_171);
x_179 = lean_int_neg(x_167);
lean_dec(x_167);
x_180 = l_Int_toNat(x_179);
lean_dec(x_179);
x_181 = l_Lean_instToExprInt_mkNat(x_180);
x_182 = l_Lean_mkApp3(x_173, x_175, x_178, x_181);
x_36 = x_166;
x_37 = x_141;
x_38 = x_165;
x_39 = x_99;
x_40 = x_101;
x_41 = x_98;
x_42 = x_182;
goto block_92;
}
else
{
lean_object* x_183; lean_object* x_184; 
x_183 = l_Int_toNat(x_167);
lean_dec(x_167);
x_184 = l_Lean_instToExprInt_mkNat(x_183);
x_36 = x_166;
x_37 = x_141;
x_38 = x_165;
x_39 = x_99;
x_40 = x_101;
x_41 = x_98;
x_42 = x_184;
goto block_92;
}
}
}
else
{
lean_object* x_185; lean_object* x_186; 
lean_dec_ref(x_141);
lean_dec(x_101);
lean_dec_ref(x_99);
lean_dec_ref(x_98);
lean_dec_ref(x_93);
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec_ref(x_7);
lean_dec(x_6);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_185 = lean_box(0);
if (lean_is_scalar(x_97)) {
 x_186 = lean_alloc_ctor(0, 2, 0);
} else {
 x_186 = x_97;
}
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_96);
return x_186;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc_ref(x_4);
lean_inc(x_3);
lean_inc_ref(x_2);
x_7 = l_Lean_Meta_Simp_Arith_Int_dvdCnstr_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = lean_box(0);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec_ref(x_8);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
x_17 = !lean_is_exclusive(x_7);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_18 = lean_ctor_get(x_7, 1);
x_19 = lean_ctor_get(x_7, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_15, 0);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_ctor_get(x_16, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_dec(x_16);
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3;
x_25 = lean_int_dec_eq(x_20, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_free_object(x_7);
x_26 = l_Lean_instInhabitedExpr;
x_27 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0;
x_28 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___boxed), 12, 6);
lean_closure_set(x_28, 0, x_26);
lean_closure_set(x_28, 1, x_21);
lean_closure_set(x_28, 2, x_27);
lean_closure_set(x_28, 3, x_24);
lean_closure_set(x_28, 4, x_23);
lean_closure_set(x_28, 5, x_20);
x_29 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1;
x_30 = l_Lean_Meta_Simp_Arith_withAbstractAtoms(x_22, x_29, x_28, x_2, x_3, x_4, x_5, x_18);
return x_30;
}
else
{
lean_object* x_31; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
x_31 = lean_box(0);
lean_ctor_set(x_7, 0, x_31);
return x_7;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_32 = lean_ctor_get(x_7, 1);
lean_inc(x_32);
lean_dec(x_7);
x_33 = lean_ctor_get(x_15, 0);
lean_inc(x_33);
lean_dec(x_15);
x_34 = lean_ctor_get(x_16, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_16, 1);
lean_inc(x_35);
lean_dec(x_16);
x_36 = lean_unsigned_to_nat(0u);
x_37 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3;
x_38 = lean_int_dec_eq(x_33, x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = l_Lean_instInhabitedExpr;
x_40 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0;
x_41 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___boxed), 12, 6);
lean_closure_set(x_41, 0, x_39);
lean_closure_set(x_41, 1, x_34);
lean_closure_set(x_41, 2, x_40);
lean_closure_set(x_41, 3, x_37);
lean_closure_set(x_41, 4, x_36);
lean_closure_set(x_41, 5, x_33);
x_42 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1;
x_43 = l_Lean_Meta_Simp_Arith_withAbstractAtoms(x_35, x_42, x_41, x_2, x_3, x_4, x_5, x_32);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_32);
return x_45;
}
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
x_46 = !lean_is_exclusive(x_7);
if (x_46 == 0)
{
return x_7;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_7, 0);
x_48 = lean_ctor_get(x_7, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_7);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_instInhabitedExpr;
x_4 = lean_array_get(x_3, x_1, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Expr", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("eq_of_norm_eq", 13, 13);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Int_Linear_Expr_norm(x_1);
lean_inc_ref(x_9);
x_10 = l_Int_Linear_Poly_toExpr(x_9);
x_11 = l_Int_Linear_beqExpr____x40_Init_Data_Int_Linear___hyg_160_(x_1, x_10);
lean_dec_ref(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_inc_ref(x_3);
x_12 = l_Lean_Meta_Simp_Arith_Int_toContextExpr(x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec_ref(x_12);
x_15 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__0___boxed), 2, 1);
lean_closure_set(x_15, 0, x_3);
lean_inc_ref(x_1);
lean_inc_ref(x_15);
x_16 = l_Int_Linear_Expr_denoteExpr___redArg(x_15, x_1, x_14);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc_ref(x_9);
x_20 = l_Int_Linear_Poly_denoteExpr___redArg(x_15, x_9, x_19);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_24 = l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__0;
x_25 = l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__1;
x_26 = l_Lean_Name_mkStr4(x_2, x_23, x_24, x_25);
x_27 = lean_box(0);
x_28 = l_Lean_Expr_const___override(x_26, x_27);
x_29 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_1);
x_30 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_9);
x_31 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_32 = l_Lean_mkApp4(x_28, x_13, x_29, x_30, x_31);
lean_inc(x_22);
x_33 = l_Lean_mkIntEq(x_18, x_22);
x_34 = l_Lean_Meta_mkExpectedPropHint(x_32, x_33);
lean_ctor_set(x_16, 1, x_34);
lean_ctor_set(x_16, 0, x_22);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_16);
lean_ctor_set(x_20, 0, x_35);
return x_20;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_36 = lean_ctor_get(x_20, 0);
x_37 = lean_ctor_get(x_20, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_20);
x_38 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_39 = l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__0;
x_40 = l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__1;
x_41 = l_Lean_Name_mkStr4(x_2, x_38, x_39, x_40);
x_42 = lean_box(0);
x_43 = l_Lean_Expr_const___override(x_41, x_42);
x_44 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_1);
x_45 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_9);
x_46 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_47 = l_Lean_mkApp4(x_43, x_13, x_44, x_45, x_46);
lean_inc(x_36);
x_48 = l_Lean_mkIntEq(x_18, x_36);
x_49 = l_Lean_Meta_mkExpectedPropHint(x_47, x_48);
lean_ctor_set(x_16, 1, x_49);
lean_ctor_set(x_16, 0, x_36);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_16);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_37);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_52 = lean_ctor_get(x_16, 0);
x_53 = lean_ctor_get(x_16, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_16);
lean_inc_ref(x_9);
x_54 = l_Int_Linear_Poly_denoteExpr___redArg(x_15, x_9, x_53);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_57 = x_54;
} else {
 lean_dec_ref(x_54);
 x_57 = lean_box(0);
}
x_58 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1;
x_59 = l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__0;
x_60 = l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__1;
x_61 = l_Lean_Name_mkStr4(x_2, x_58, x_59, x_60);
x_62 = lean_box(0);
x_63 = l_Lean_Expr_const___override(x_61, x_62);
x_64 = l_Lean_Meta_Simp_Arith_Int_ofLinearExpr(x_1);
x_65 = l_Lean_Meta_Simp_Arith_Int_ofPoly(x_9);
x_66 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0;
x_67 = l_Lean_mkApp4(x_63, x_13, x_64, x_65, x_66);
lean_inc(x_55);
x_68 = l_Lean_mkIntEq(x_52, x_55);
x_69 = l_Lean_Meta_mkExpectedPropHint(x_67, x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_55);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_71, 0, x_70);
if (lean_is_scalar(x_57)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_57;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_56);
return x_72;
}
}
else
{
uint8_t x_73; 
lean_dec_ref(x_9);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_73 = !lean_is_exclusive(x_12);
if (x_73 == 0)
{
return x_12;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_12, 0);
x_75 = lean_ctor_get(x_12, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_12);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
lean_object* x_77; lean_object* x_78; 
lean_dec_ref(x_9);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_77 = lean_box(0);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_8);
return x_78;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc_ref(x_4);
lean_inc(x_3);
lean_inc_ref(x_2);
x_7 = l_Lean_Meta_Simp_Arith_Int_toLinearExpr(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec_ref(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0;
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1), 8, 2);
lean_closure_set(x_13, 0, x_10);
lean_closure_set(x_13, 1, x_12);
x_14 = l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1;
x_15 = l_Lean_Meta_Simp_Arith_withAbstractAtoms(x_11, x_14, x_13, x_2, x_3, x_4, x_5, x_9);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
x_16 = !lean_is_exclusive(x_7);
if (x_16 == 0)
{
return x_7;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_7, 0);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_7);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__0(x_1, x_2);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_3;
}
}
lean_object* initialize_Lean_Meta_Tactic_Simp_Arith_Util(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_Arith_Int_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Simp_Arith_Int_Simp(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp_Arith_Util(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Arith_Int_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__0);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__1);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__2 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__2);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__3);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__4 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__4);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__5 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__5();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__5);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__6 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__6();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__6);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__7 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__7();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__7);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__8 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__8();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__8);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__9 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__9();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__9);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__10);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__11 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__11();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__11);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__12 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__12();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__12);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__13 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__13();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__13);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__14);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__15 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__15();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__15);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__16 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__16();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__16);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__17 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__17();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__17);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__18 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__18();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__18);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__19 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__19();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__19);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__20 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__20();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__20);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__21 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__21();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__21);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__22 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__22();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__22);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__23 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__23();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__23);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__24 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__24();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__24);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__25 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__25();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__25);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__26 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__26();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___lam__1___closed__26);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__0);
l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1 = _init_l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpEq_x3f___closed__1);
l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__0 = _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__0();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__0);
l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__1 = _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__1);
l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__2 = _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__2);
l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__3 = _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__3);
l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__4 = _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___lam__1___closed__4);
l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__0 = _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__0();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__0);
l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__1 = _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__1);
l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__2 = _init_l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpLe_x3f___closed__2);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__0 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__0();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__0);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__1 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__1);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__2 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__2);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__3 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__3);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__4 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__4);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__5 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__5();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__5);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__6 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__6();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___lam__0___closed__6);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__0 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__0();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__0);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__1 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__1);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__2 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__2);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__3 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__3);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__4 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__4);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__5 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__5();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__5);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__6 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__6();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__6);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__7 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__7();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__7);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__8 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__8();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__8);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__9 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__9();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__9);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__10 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__10();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__10);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__11 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__11();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__11);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__12 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__12();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__12);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__13 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__13();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__13);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__14 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__14();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__14);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__15 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__15();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__15);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__16 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__16();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__16);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__17 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__17();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__17);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__18 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__18();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__18);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__19 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__19();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__19);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__20 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__20();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__20);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__21 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__21();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__21);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__22 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__22();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__22);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__23 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__23();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__23);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__24 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__24();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__24);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__25 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__25();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__25);
l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__26 = _init_l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__26();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpRel_x3f___closed__26);
l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__0 = _init_l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__0();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__0);
l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__1 = _init_l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__1);
l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__2 = _init_l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpDvd_x3f___lam__1___closed__2);
l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__0 = _init_l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__0();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__0);
l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__1 = _init_l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_Arith_Int_simpExpr_x3f___lam__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
