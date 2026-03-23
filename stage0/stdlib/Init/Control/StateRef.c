// Lean compiler output
// Module: Init.Control.StateRef
// Imports: public import Init.System.ST public import Init.Control.Reader
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
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_lift___redArg(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_lift___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__7___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__9___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__13___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_StateRefT_x27_instMonadLift___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_StateRefT_x27_instMonadLift___closed__0 = (const lean_object*)&l_StateRefT_x27_instMonadLift___closed__0_value;
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadLift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_StateRefT_x27_instMonadFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_StateRefT_x27_instMonadFunctor___closed__0 = (const lean_object*)&l_StateRefT_x27_instMonadFunctor___closed__0_value;
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___aux__3___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___aux__3___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___aux__3___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_StateRefT_x27_instMonadAttachOfMonad___aux__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadAttachOfMonad___aux__3___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_StateRefT_x27_instMonadAttachOfMonad___aux__3___redArg___closed__0 = (const lean_object*)&l_StateRefT_x27_instMonadAttachOfMonad___aux__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_set___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_modifyGet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_modifyGet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadControlStateRefT_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadControlStateRefT_x27___aux__1, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_instMonadControlStateRefT_x27___closed__0 = (const lean_object*)&l_instMonadControlStateRefT_x27___closed__0_value;
static const lean_closure_object l_instMonadControlStateRefT_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadControlStateRefT_x27___aux__3___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_instMonadControlStateRefT_x27___closed__1 = (const lean_object*)&l_instMonadControlStateRefT_x27___closed__1_value;
static const lean_ctor_object l_instMonadControlStateRefT_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadControlStateRefT_x27___closed__0_value),((lean_object*)&l_instMonadControlStateRefT_x27___closed__1_value)}};
static const lean_object* l_instMonadControlStateRefT_x27___closed__2 = (const lean_object*)&l_instMonadControlStateRefT_x27___closed__2_value;
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg___lam__0(lean_object* v_a_1_, lean_object* v_toPure_2_, lean_object* v_s_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4_, 0, v_a_1_);
lean_ctor_set(v___x_4_, 1, v_s_3_);
v___x_5_ = lean_apply_2(v_toPure_2_, lean_box(0), v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg___lam__1(lean_object* v_toPure_6_, lean_object* v_ref_7_, lean_object* v_inst_8_, lean_object* v_toBind_9_, lean_object* v_a_10_){
_start:
{
lean_object* v___f_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___f_11_ = lean_alloc_closure((void*)(l_StateRefT_x27_run___redArg___lam__0), 3, 2);
lean_closure_set(v___f_11_, 0, v_a_10_);
lean_closure_set(v___f_11_, 1, v_toPure_6_);
v___x_12_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_12_, 0, lean_box(0));
lean_closure_set(v___x_12_, 1, lean_box(0));
lean_closure_set(v___x_12_, 2, v_ref_7_);
v___x_13_ = lean_apply_2(v_inst_8_, lean_box(0), v___x_12_);
v___x_14_ = lean_apply_4(v_toBind_9_, lean_box(0), lean_box(0), v___x_13_, v___f_11_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg___lam__2(lean_object* v_toPure_15_, lean_object* v_inst_16_, lean_object* v_toBind_17_, lean_object* v_x_18_, lean_object* v_ref_19_){
_start:
{
lean_object* v___f_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
lean_inc(v_toBind_17_);
lean_inc(v_ref_19_);
v___f_20_ = lean_alloc_closure((void*)(l_StateRefT_x27_run___redArg___lam__1), 5, 4);
lean_closure_set(v___f_20_, 0, v_toPure_15_);
lean_closure_set(v___f_20_, 1, v_ref_19_);
lean_closure_set(v___f_20_, 2, v_inst_16_);
lean_closure_set(v___f_20_, 3, v_toBind_17_);
v___x_21_ = lean_apply_1(v_x_18_, v_ref_19_);
v___x_22_ = lean_apply_4(v_toBind_17_, lean_box(0), lean_box(0), v___x_21_, v___f_20_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg(lean_object* v_inst_23_, lean_object* v_inst_24_, lean_object* v_x_25_, lean_object* v_s_26_){
_start:
{
lean_object* v_toApplicative_27_; lean_object* v_toBind_28_; lean_object* v_toPure_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___f_32_; lean_object* v___x_33_; 
v_toApplicative_27_ = lean_ctor_get(v_inst_23_, 0);
lean_inc_ref(v_toApplicative_27_);
v_toBind_28_ = lean_ctor_get(v_inst_23_, 1);
lean_inc(v_toBind_28_);
lean_dec_ref(v_inst_23_);
v_toPure_29_ = lean_ctor_get(v_toApplicative_27_, 1);
lean_inc(v_toPure_29_);
lean_dec_ref(v_toApplicative_27_);
v___x_30_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_30_, 0, lean_box(0));
lean_closure_set(v___x_30_, 1, lean_box(0));
lean_closure_set(v___x_30_, 2, v_s_26_);
lean_inc(v_inst_24_);
v___x_31_ = lean_apply_2(v_inst_24_, lean_box(0), v___x_30_);
lean_inc(v_toBind_28_);
v___f_32_ = lean_alloc_closure((void*)(l_StateRefT_x27_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_32_, 0, v_toPure_29_);
lean_closure_set(v___f_32_, 1, v_inst_24_);
lean_closure_set(v___f_32_, 2, v_toBind_28_);
lean_closure_set(v___f_32_, 3, v_x_25_);
v___x_33_ = lean_apply_4(v_toBind_28_, lean_box(0), lean_box(0), v___x_31_, v___f_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run(lean_object* v_00_u03c9_34_, lean_object* v_00_u03c3_35_, lean_object* v_m_36_, lean_object* v_inst_37_, lean_object* v_inst_38_, lean_object* v_00_u03b1_39_, lean_object* v_x_40_, lean_object* v_s_41_){
_start:
{
lean_object* v_toApplicative_42_; lean_object* v_toBind_43_; lean_object* v_toPure_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___f_47_; lean_object* v___x_48_; 
v_toApplicative_42_ = lean_ctor_get(v_inst_37_, 0);
lean_inc_ref(v_toApplicative_42_);
v_toBind_43_ = lean_ctor_get(v_inst_37_, 1);
lean_inc(v_toBind_43_);
lean_dec_ref(v_inst_37_);
v_toPure_44_ = lean_ctor_get(v_toApplicative_42_, 1);
lean_inc(v_toPure_44_);
lean_dec_ref(v_toApplicative_42_);
v___x_45_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_45_, 0, lean_box(0));
lean_closure_set(v___x_45_, 1, lean_box(0));
lean_closure_set(v___x_45_, 2, v_s_41_);
lean_inc(v_inst_38_);
v___x_46_ = lean_apply_2(v_inst_38_, lean_box(0), v___x_45_);
lean_inc(v_toBind_43_);
v___f_47_ = lean_alloc_closure((void*)(l_StateRefT_x27_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_47_, 0, v_toPure_44_);
lean_closure_set(v___f_47_, 1, v_inst_38_);
lean_closure_set(v___f_47_, 2, v_toBind_43_);
lean_closure_set(v___f_47_, 3, v_x_40_);
v___x_48_ = lean_apply_4(v_toBind_43_, lean_box(0), lean_box(0), v___x_46_, v___f_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run_x27___redArg___lam__0(lean_object* v_toPure_49_, lean_object* v_____x_50_){
_start:
{
lean_object* v_fst_51_; lean_object* v___x_52_; 
v_fst_51_ = lean_ctor_get(v_____x_50_, 0);
lean_inc(v_fst_51_);
lean_dec_ref(v_____x_50_);
v___x_52_ = lean_apply_2(v_toPure_49_, lean_box(0), v_fst_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run_x27___redArg(lean_object* v_inst_53_, lean_object* v_inst_54_, lean_object* v_x_55_, lean_object* v_s_56_){
_start:
{
lean_object* v_toApplicative_57_; lean_object* v_toBind_58_; lean_object* v_toPure_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___f_62_; lean_object* v___f_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v_toApplicative_57_ = lean_ctor_get(v_inst_53_, 0);
lean_inc_ref(v_toApplicative_57_);
v_toBind_58_ = lean_ctor_get(v_inst_53_, 1);
lean_inc(v_toBind_58_);
lean_dec_ref(v_inst_53_);
v_toPure_59_ = lean_ctor_get(v_toApplicative_57_, 1);
lean_inc(v_toPure_59_);
lean_dec_ref(v_toApplicative_57_);
v___x_60_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_60_, 0, lean_box(0));
lean_closure_set(v___x_60_, 1, lean_box(0));
lean_closure_set(v___x_60_, 2, v_s_56_);
lean_inc(v_inst_54_);
v___x_61_ = lean_apply_2(v_inst_54_, lean_box(0), v___x_60_);
lean_inc(v_toPure_59_);
v___f_62_ = lean_alloc_closure((void*)(l_StateRefT_x27_run_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_62_, 0, v_toPure_59_);
lean_inc(v_toBind_58_);
v___f_63_ = lean_alloc_closure((void*)(l_StateRefT_x27_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_63_, 0, v_toPure_59_);
lean_closure_set(v___f_63_, 1, v_inst_54_);
lean_closure_set(v___f_63_, 2, v_toBind_58_);
lean_closure_set(v___f_63_, 3, v_x_55_);
lean_inc(v_toBind_58_);
v___x_64_ = lean_apply_4(v_toBind_58_, lean_box(0), lean_box(0), v___x_61_, v___f_63_);
v___x_65_ = lean_apply_4(v_toBind_58_, lean_box(0), lean_box(0), v___x_64_, v___f_62_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run_x27(lean_object* v_00_u03c9_66_, lean_object* v_00_u03c3_67_, lean_object* v_m_68_, lean_object* v_inst_69_, lean_object* v_inst_70_, lean_object* v_00_u03b1_71_, lean_object* v_x_72_, lean_object* v_s_73_){
_start:
{
lean_object* v_toApplicative_74_; lean_object* v_toBind_75_; lean_object* v_toPure_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___f_79_; lean_object* v___f_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v_toApplicative_74_ = lean_ctor_get(v_inst_69_, 0);
lean_inc_ref(v_toApplicative_74_);
v_toBind_75_ = lean_ctor_get(v_inst_69_, 1);
lean_inc(v_toBind_75_);
lean_dec_ref(v_inst_69_);
v_toPure_76_ = lean_ctor_get(v_toApplicative_74_, 1);
lean_inc(v_toPure_76_);
lean_dec_ref(v_toApplicative_74_);
v___x_77_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_77_, 0, lean_box(0));
lean_closure_set(v___x_77_, 1, lean_box(0));
lean_closure_set(v___x_77_, 2, v_s_73_);
lean_inc(v_inst_70_);
v___x_78_ = lean_apply_2(v_inst_70_, lean_box(0), v___x_77_);
lean_inc(v_toPure_76_);
v___f_79_ = lean_alloc_closure((void*)(l_StateRefT_x27_run_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_79_, 0, v_toPure_76_);
lean_inc(v_toBind_75_);
v___f_80_ = lean_alloc_closure((void*)(l_StateRefT_x27_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_80_, 0, v_toPure_76_);
lean_closure_set(v___f_80_, 1, v_inst_70_);
lean_closure_set(v___f_80_, 2, v_toBind_75_);
lean_closure_set(v___f_80_, 3, v_x_72_);
lean_inc(v_toBind_75_);
v___x_81_ = lean_apply_4(v_toBind_75_, lean_box(0), lean_box(0), v___x_78_, v___f_80_);
v___x_82_ = lean_apply_4(v_toBind_75_, lean_box(0), lean_box(0), v___x_81_, v___f_79_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_lift___redArg(lean_object* v_x_83_){
_start:
{
lean_inc(v_x_83_);
return v_x_83_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_lift___redArg___boxed(lean_object* v_x_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_StateRefT_x27_lift___redArg(v_x_84_);
lean_dec(v_x_84_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_lift(lean_object* v_00_u03c9_86_, lean_object* v_00_u03c3_87_, lean_object* v_m_88_, lean_object* v_00_u03b1_89_, lean_object* v_x_90_, lean_object* v_x_91_){
_start:
{
lean_inc(v_x_90_);
return v_x_90_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_lift___boxed(lean_object* v_00_u03c9_92_, lean_object* v_00_u03c3_93_, lean_object* v_m_94_, lean_object* v_00_u03b1_95_, lean_object* v_x_96_, lean_object* v_x_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_StateRefT_x27_lift(v_00_u03c9_92_, v_00_u03c3_93_, v_m_94_, v_00_u03b1_95_, v_x_96_, v_x_97_);
lean_dec(v_x_97_);
lean_dec(v_x_96_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__1___redArg(lean_object* v_inst_99_, lean_object* v_f_100_, lean_object* v_x_101_, lean_object* v_r_102_){
_start:
{
lean_object* v_toApplicative_103_; lean_object* v_toFunctor_104_; lean_object* v_map_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v_toApplicative_103_ = lean_ctor_get(v_inst_99_, 0);
lean_inc_ref(v_toApplicative_103_);
lean_dec_ref(v_inst_99_);
v_toFunctor_104_ = lean_ctor_get(v_toApplicative_103_, 0);
lean_inc_ref(v_toFunctor_104_);
lean_dec_ref(v_toApplicative_103_);
v_map_105_ = lean_ctor_get(v_toFunctor_104_, 0);
lean_inc(v_map_105_);
lean_dec_ref(v_toFunctor_104_);
v___x_106_ = lean_apply_1(v_x_101_, v_r_102_);
v___x_107_ = lean_apply_4(v_map_105_, lean_box(0), lean_box(0), v_f_100_, v___x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__1(lean_object* v_00_u03c9_108_, lean_object* v_00_u03c3_109_, lean_object* v_m_110_, lean_object* v_inst_111_, lean_object* v_00_u03b1_112_, lean_object* v_00_u03b2_113_, lean_object* v_f_114_, lean_object* v_x_115_, lean_object* v_r_116_){
_start:
{
lean_object* v_toApplicative_117_; lean_object* v_toFunctor_118_; lean_object* v_map_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v_toApplicative_117_ = lean_ctor_get(v_inst_111_, 0);
lean_inc_ref(v_toApplicative_117_);
lean_dec_ref(v_inst_111_);
v_toFunctor_118_ = lean_ctor_get(v_toApplicative_117_, 0);
lean_inc_ref(v_toFunctor_118_);
lean_dec_ref(v_toApplicative_117_);
v_map_119_ = lean_ctor_get(v_toFunctor_118_, 0);
lean_inc(v_map_119_);
lean_dec_ref(v_toFunctor_118_);
v___x_120_ = lean_apply_1(v_x_115_, v_r_116_);
v___x_121_ = lean_apply_4(v_map_119_, lean_box(0), lean_box(0), v_f_114_, v___x_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__3___redArg(lean_object* v_inst_122_, lean_object* v_a_123_, lean_object* v_x_124_, lean_object* v_r_125_){
_start:
{
lean_object* v_toApplicative_126_; lean_object* v_toFunctor_127_; lean_object* v_mapConst_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_toApplicative_126_ = lean_ctor_get(v_inst_122_, 0);
lean_inc_ref(v_toApplicative_126_);
lean_dec_ref(v_inst_122_);
v_toFunctor_127_ = lean_ctor_get(v_toApplicative_126_, 0);
lean_inc_ref(v_toFunctor_127_);
lean_dec_ref(v_toApplicative_126_);
v_mapConst_128_ = lean_ctor_get(v_toFunctor_127_, 1);
lean_inc(v_mapConst_128_);
lean_dec_ref(v_toFunctor_127_);
v___x_129_ = lean_apply_1(v_x_124_, v_r_125_);
v___x_130_ = lean_apply_4(v_mapConst_128_, lean_box(0), lean_box(0), v_a_123_, v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__3(lean_object* v_00_u03c9_131_, lean_object* v_00_u03c3_132_, lean_object* v_m_133_, lean_object* v_inst_134_, lean_object* v_00_u03b1_135_, lean_object* v_00_u03b2_136_, lean_object* v_a_137_, lean_object* v_x_138_, lean_object* v_r_139_){
_start:
{
lean_object* v_toApplicative_140_; lean_object* v_toFunctor_141_; lean_object* v_mapConst_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v_toApplicative_140_ = lean_ctor_get(v_inst_134_, 0);
lean_inc_ref(v_toApplicative_140_);
lean_dec_ref(v_inst_134_);
v_toFunctor_141_ = lean_ctor_get(v_toApplicative_140_, 0);
lean_inc_ref(v_toFunctor_141_);
lean_dec_ref(v_toApplicative_140_);
v_mapConst_142_ = lean_ctor_get(v_toFunctor_141_, 1);
lean_inc(v_mapConst_142_);
lean_dec_ref(v_toFunctor_141_);
v___x_143_ = lean_apply_1(v_x_138_, v_r_139_);
v___x_144_ = lean_apply_4(v_mapConst_142_, lean_box(0), lean_box(0), v_a_137_, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__5___redArg(lean_object* v_inst_145_, lean_object* v_a_146_){
_start:
{
lean_object* v_toApplicative_147_; lean_object* v_toPure_148_; lean_object* v___x_149_; 
v_toApplicative_147_ = lean_ctor_get(v_inst_145_, 0);
lean_inc_ref(v_toApplicative_147_);
lean_dec_ref(v_inst_145_);
v_toPure_148_ = lean_ctor_get(v_toApplicative_147_, 1);
lean_inc(v_toPure_148_);
lean_dec_ref(v_toApplicative_147_);
v___x_149_ = lean_apply_2(v_toPure_148_, lean_box(0), v_a_146_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__5(lean_object* v_00_u03c9_150_, lean_object* v_00_u03c3_151_, lean_object* v_m_152_, lean_object* v_inst_153_, lean_object* v_00_u03b1_154_, lean_object* v_a_155_, lean_object* v_a_156_){
_start:
{
lean_object* v_toApplicative_157_; lean_object* v_toPure_158_; lean_object* v___x_159_; 
v_toApplicative_157_ = lean_ctor_get(v_inst_153_, 0);
lean_inc_ref(v_toApplicative_157_);
lean_dec_ref(v_inst_153_);
v_toPure_158_ = lean_ctor_get(v_toApplicative_157_, 1);
lean_inc(v_toPure_158_);
lean_dec_ref(v_toApplicative_157_);
v___x_159_ = lean_apply_2(v_toPure_158_, lean_box(0), v_a_155_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__5___boxed(lean_object* v_00_u03c9_160_, lean_object* v_00_u03c3_161_, lean_object* v_m_162_, lean_object* v_inst_163_, lean_object* v_00_u03b1_164_, lean_object* v_a_165_, lean_object* v_a_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_StateRefT_x27_instMonad___aux__5(v_00_u03c9_160_, v_00_u03c3_161_, v_m_162_, v_inst_163_, v_00_u03b1_164_, v_a_165_, v_a_166_);
lean_dec(v_a_166_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__7___redArg___lam__0(lean_object* v_x_168_, lean_object* v_r_169_, lean_object* v_x_170_){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_box(0);
v___x_172_ = lean_apply_2(v_x_168_, v___x_171_, v_r_169_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__7___redArg(lean_object* v_inst_173_, lean_object* v_f_174_, lean_object* v_x_175_, lean_object* v_r_176_){
_start:
{
lean_object* v_toApplicative_177_; lean_object* v_toSeq_178_; lean_object* v___f_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_toApplicative_177_ = lean_ctor_get(v_inst_173_, 0);
lean_inc_ref(v_toApplicative_177_);
lean_dec_ref(v_inst_173_);
v_toSeq_178_ = lean_ctor_get(v_toApplicative_177_, 2);
lean_inc(v_toSeq_178_);
lean_dec_ref(v_toApplicative_177_);
lean_inc(v_r_176_);
v___f_179_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__7___redArg___lam__0), 3, 2);
lean_closure_set(v___f_179_, 0, v_x_175_);
lean_closure_set(v___f_179_, 1, v_r_176_);
v___x_180_ = lean_apply_1(v_f_174_, v_r_176_);
v___x_181_ = lean_apply_4(v_toSeq_178_, lean_box(0), lean_box(0), v___x_180_, v___f_179_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__7(lean_object* v_00_u03c9_182_, lean_object* v_00_u03c3_183_, lean_object* v_m_184_, lean_object* v_inst_185_, lean_object* v_00_u03b1_186_, lean_object* v_00_u03b2_187_, lean_object* v_f_188_, lean_object* v_x_189_, lean_object* v_r_190_){
_start:
{
lean_object* v_toApplicative_191_; lean_object* v_toSeq_192_; lean_object* v___f_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_toApplicative_191_ = lean_ctor_get(v_inst_185_, 0);
lean_inc_ref(v_toApplicative_191_);
lean_dec_ref(v_inst_185_);
v_toSeq_192_ = lean_ctor_get(v_toApplicative_191_, 2);
lean_inc(v_toSeq_192_);
lean_dec_ref(v_toApplicative_191_);
lean_inc(v_r_190_);
v___f_193_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__7___redArg___lam__0), 3, 2);
lean_closure_set(v___f_193_, 0, v_x_189_);
lean_closure_set(v___f_193_, 1, v_r_190_);
v___x_194_ = lean_apply_1(v_f_188_, v_r_190_);
v___x_195_ = lean_apply_4(v_toSeq_192_, lean_box(0), lean_box(0), v___x_194_, v___f_193_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__9___redArg___lam__0(lean_object* v_b_196_, lean_object* v_r_197_, lean_object* v_x_198_){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = lean_box(0);
v___x_200_ = lean_apply_2(v_b_196_, v___x_199_, v_r_197_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__9___redArg(lean_object* v_inst_201_, lean_object* v_a_202_, lean_object* v_b_203_, lean_object* v_r_204_){
_start:
{
lean_object* v_toApplicative_205_; lean_object* v_toSeqLeft_206_; lean_object* v___f_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v_toApplicative_205_ = lean_ctor_get(v_inst_201_, 0);
lean_inc_ref(v_toApplicative_205_);
lean_dec_ref(v_inst_201_);
v_toSeqLeft_206_ = lean_ctor_get(v_toApplicative_205_, 3);
lean_inc(v_toSeqLeft_206_);
lean_dec_ref(v_toApplicative_205_);
lean_inc(v_r_204_);
v___f_207_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__9___redArg___lam__0), 3, 2);
lean_closure_set(v___f_207_, 0, v_b_203_);
lean_closure_set(v___f_207_, 1, v_r_204_);
v___x_208_ = lean_apply_1(v_a_202_, v_r_204_);
v___x_209_ = lean_apply_4(v_toSeqLeft_206_, lean_box(0), lean_box(0), v___x_208_, v___f_207_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__9(lean_object* v_00_u03c9_210_, lean_object* v_00_u03c3_211_, lean_object* v_m_212_, lean_object* v_inst_213_, lean_object* v_00_u03b1_214_, lean_object* v_00_u03b2_215_, lean_object* v_a_216_, lean_object* v_b_217_, lean_object* v_r_218_){
_start:
{
lean_object* v_toApplicative_219_; lean_object* v_toSeqLeft_220_; lean_object* v___f_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v_toApplicative_219_ = lean_ctor_get(v_inst_213_, 0);
lean_inc_ref(v_toApplicative_219_);
lean_dec_ref(v_inst_213_);
v_toSeqLeft_220_ = lean_ctor_get(v_toApplicative_219_, 3);
lean_inc(v_toSeqLeft_220_);
lean_dec_ref(v_toApplicative_219_);
lean_inc(v_r_218_);
v___f_221_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__9___redArg___lam__0), 3, 2);
lean_closure_set(v___f_221_, 0, v_b_217_);
lean_closure_set(v___f_221_, 1, v_r_218_);
v___x_222_ = lean_apply_1(v_a_216_, v_r_218_);
v___x_223_ = lean_apply_4(v_toSeqLeft_220_, lean_box(0), lean_box(0), v___x_222_, v___f_221_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__11___redArg(lean_object* v_inst_224_, lean_object* v_a_225_, lean_object* v_b_226_, lean_object* v_r_227_){
_start:
{
lean_object* v_toApplicative_228_; lean_object* v_toSeqRight_229_; lean_object* v___f_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_toApplicative_228_ = lean_ctor_get(v_inst_224_, 0);
lean_inc_ref(v_toApplicative_228_);
lean_dec_ref(v_inst_224_);
v_toSeqRight_229_ = lean_ctor_get(v_toApplicative_228_, 4);
lean_inc(v_toSeqRight_229_);
lean_dec_ref(v_toApplicative_228_);
lean_inc(v_r_227_);
v___f_230_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__9___redArg___lam__0), 3, 2);
lean_closure_set(v___f_230_, 0, v_b_226_);
lean_closure_set(v___f_230_, 1, v_r_227_);
v___x_231_ = lean_apply_1(v_a_225_, v_r_227_);
v___x_232_ = lean_apply_4(v_toSeqRight_229_, lean_box(0), lean_box(0), v___x_231_, v___f_230_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__11(lean_object* v_00_u03c9_233_, lean_object* v_00_u03c3_234_, lean_object* v_m_235_, lean_object* v_inst_236_, lean_object* v_00_u03b1_237_, lean_object* v_00_u03b2_238_, lean_object* v_a_239_, lean_object* v_b_240_, lean_object* v_r_241_){
_start:
{
lean_object* v_toApplicative_242_; lean_object* v_toSeqRight_243_; lean_object* v___f_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v_toApplicative_242_ = lean_ctor_get(v_inst_236_, 0);
lean_inc_ref(v_toApplicative_242_);
lean_dec_ref(v_inst_236_);
v_toSeqRight_243_ = lean_ctor_get(v_toApplicative_242_, 4);
lean_inc(v_toSeqRight_243_);
lean_dec_ref(v_toApplicative_242_);
lean_inc(v_r_241_);
v___f_244_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__9___redArg___lam__0), 3, 2);
lean_closure_set(v___f_244_, 0, v_b_240_);
lean_closure_set(v___f_244_, 1, v_r_241_);
v___x_245_ = lean_apply_1(v_a_239_, v_r_241_);
v___x_246_ = lean_apply_4(v_toSeqRight_243_, lean_box(0), lean_box(0), v___x_245_, v___f_244_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__13___redArg___lam__0(lean_object* v_f_247_, lean_object* v_a_248_, lean_object* v_a_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = lean_apply_2(v_f_247_, v_a_249_, v_a_248_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__13___redArg(lean_object* v_inst_251_, lean_object* v_x_252_, lean_object* v_f_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_toBind_255_; lean_object* v___f_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v_toBind_255_ = lean_ctor_get(v_inst_251_, 1);
lean_inc(v_toBind_255_);
lean_dec_ref(v_inst_251_);
lean_inc(v_a_254_);
v___f_256_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__13___redArg___lam__0), 3, 2);
lean_closure_set(v___f_256_, 0, v_f_253_);
lean_closure_set(v___f_256_, 1, v_a_254_);
v___x_257_ = lean_apply_1(v_x_252_, v_a_254_);
v___x_258_ = lean_apply_4(v_toBind_255_, lean_box(0), lean_box(0), v___x_257_, v___f_256_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___aux__13(lean_object* v_00_u03c9_259_, lean_object* v_00_u03c3_260_, lean_object* v_m_261_, lean_object* v_inst_262_, lean_object* v_00_u03b1_263_, lean_object* v_00_u03b2_264_, lean_object* v_x_265_, lean_object* v_f_266_, lean_object* v_a_267_){
_start:
{
lean_object* v_toBind_268_; lean_object* v___f_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v_toBind_268_ = lean_ctor_get(v_inst_262_, 1);
lean_inc(v_toBind_268_);
lean_dec_ref(v_inst_262_);
lean_inc(v_a_267_);
v___f_269_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__13___redArg___lam__0), 3, 2);
lean_closure_set(v___f_269_, 0, v_f_266_);
lean_closure_set(v___f_269_, 1, v_a_267_);
v___x_270_ = lean_apply_1(v_x_265_, v_a_267_);
v___x_271_ = lean_apply_4(v_toBind_268_, lean_box(0), lean_box(0), v___x_270_, v___f_269_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg(lean_object* v_inst_272_){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
lean_inc_ref(v_inst_272_);
v___x_273_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__1), 9, 4);
lean_closure_set(v___x_273_, 0, lean_box(0));
lean_closure_set(v___x_273_, 1, lean_box(0));
lean_closure_set(v___x_273_, 2, lean_box(0));
lean_closure_set(v___x_273_, 3, v_inst_272_);
lean_inc_ref(v_inst_272_);
v___x_274_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__3), 9, 4);
lean_closure_set(v___x_274_, 0, lean_box(0));
lean_closure_set(v___x_274_, 1, lean_box(0));
lean_closure_set(v___x_274_, 2, lean_box(0));
lean_closure_set(v___x_274_, 3, v_inst_272_);
v___x_275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_273_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
lean_inc_ref(v_inst_272_);
v___x_276_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__5___boxed), 7, 4);
lean_closure_set(v___x_276_, 0, lean_box(0));
lean_closure_set(v___x_276_, 1, lean_box(0));
lean_closure_set(v___x_276_, 2, lean_box(0));
lean_closure_set(v___x_276_, 3, v_inst_272_);
lean_inc_ref(v_inst_272_);
v___x_277_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__7), 9, 4);
lean_closure_set(v___x_277_, 0, lean_box(0));
lean_closure_set(v___x_277_, 1, lean_box(0));
lean_closure_set(v___x_277_, 2, lean_box(0));
lean_closure_set(v___x_277_, 3, v_inst_272_);
lean_inc_ref(v_inst_272_);
v___x_278_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__9), 9, 4);
lean_closure_set(v___x_278_, 0, lean_box(0));
lean_closure_set(v___x_278_, 1, lean_box(0));
lean_closure_set(v___x_278_, 2, lean_box(0));
lean_closure_set(v___x_278_, 3, v_inst_272_);
lean_inc_ref(v_inst_272_);
v___x_279_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__11), 9, 4);
lean_closure_set(v___x_279_, 0, lean_box(0));
lean_closure_set(v___x_279_, 1, lean_box(0));
lean_closure_set(v___x_279_, 2, lean_box(0));
lean_closure_set(v___x_279_, 3, v_inst_272_);
v___x_280_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_280_, 0, v___x_275_);
lean_ctor_set(v___x_280_, 1, v___x_276_);
lean_ctor_set(v___x_280_, 2, v___x_277_);
lean_ctor_set(v___x_280_, 3, v___x_278_);
lean_ctor_set(v___x_280_, 4, v___x_279_);
v___x_281_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__13), 9, 4);
lean_closure_set(v___x_281_, 0, lean_box(0));
lean_closure_set(v___x_281_, 1, lean_box(0));
lean_closure_set(v___x_281_, 2, lean_box(0));
lean_closure_set(v___x_281_, 3, v_inst_272_);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_280_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad(lean_object* v_00_u03c9_283_, lean_object* v_00_u03c3_284_, lean_object* v_m_285_, lean_object* v_inst_286_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l_StateRefT_x27_instMonad___redArg(v_inst_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadLift(lean_object* v_00_u03c9_289_, lean_object* v_00_u03c3_290_, lean_object* v_m_291_){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = ((lean_object*)(l_StateRefT_x27_instMonadLift___closed__0));
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___redArg(lean_object* v_f_293_, lean_object* v_x_294_, lean_object* v_ctx_295_){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_296_ = lean_apply_1(v_x_294_, v_ctx_295_);
v___x_297_ = lean_apply_2(v_f_293_, lean_box(0), v___x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor___aux__1(lean_object* v_00_u03c9_298_, lean_object* v_00_u03c3_299_, lean_object* v_m_300_, lean_object* v_00_u03b1_301_, lean_object* v_f_302_, lean_object* v_x_303_, lean_object* v_ctx_304_){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = lean_apply_1(v_x_303_, v_ctx_304_);
v___x_306_ = lean_apply_2(v_f_302_, lean_box(0), v___x_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor(lean_object* v_00_u03c9_308_, lean_object* v_00_u03c3_309_, lean_object* v_m_310_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = ((lean_object*)(l_StateRefT_x27_instMonadFunctor___closed__0));
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___aux__1___redArg(lean_object* v_inst_312_){
_start:
{
lean_object* v_failure_313_; lean_object* v___x_314_; 
v_failure_313_ = lean_ctor_get(v_inst_312_, 1);
lean_inc(v_failure_313_);
lean_dec_ref(v_inst_312_);
v___x_314_ = lean_apply_1(v_failure_313_, lean_box(0));
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___aux__1(lean_object* v_00_u03c9_315_, lean_object* v_00_u03c3_316_, lean_object* v_m_317_, lean_object* v_inst_318_, lean_object* v_00_u03b1_319_, lean_object* v_a_320_){
_start:
{
lean_object* v_failure_321_; lean_object* v___x_322_; 
v_failure_321_ = lean_ctor_get(v_inst_318_, 1);
lean_inc(v_failure_321_);
lean_dec_ref(v_inst_318_);
v___x_322_ = lean_apply_1(v_failure_321_, lean_box(0));
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___aux__1___boxed(lean_object* v_00_u03c9_323_, lean_object* v_00_u03c3_324_, lean_object* v_m_325_, lean_object* v_inst_326_, lean_object* v_00_u03b1_327_, lean_object* v_a_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = l_StateRefT_x27_instAlternativeOfMonad___aux__1(v_00_u03c9_323_, v_00_u03c3_324_, v_m_325_, v_inst_326_, v_00_u03b1_327_, v_a_328_);
lean_dec(v_a_328_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___aux__3___redArg___lam__0(lean_object* v_x_u2082_330_, lean_object* v_a_331_, lean_object* v_x_332_){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = lean_box(0);
v___x_334_ = lean_apply_2(v_x_u2082_330_, v___x_333_, v_a_331_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___aux__3___redArg(lean_object* v_inst_335_, lean_object* v_x_u2081_336_, lean_object* v_x_u2082_337_, lean_object* v_a_338_){
_start:
{
lean_object* v_orElse_339_; lean_object* v___f_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v_orElse_339_ = lean_ctor_get(v_inst_335_, 2);
lean_inc(v_orElse_339_);
lean_dec_ref(v_inst_335_);
lean_inc(v_a_338_);
v___f_340_ = lean_alloc_closure((void*)(l_StateRefT_x27_instAlternativeOfMonad___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_340_, 0, v_x_u2082_337_);
lean_closure_set(v___f_340_, 1, v_a_338_);
v___x_341_ = lean_apply_1(v_x_u2081_336_, v_a_338_);
v___x_342_ = lean_apply_3(v_orElse_339_, lean_box(0), v___x_341_, v___f_340_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___aux__3(lean_object* v_00_u03c9_343_, lean_object* v_00_u03c3_344_, lean_object* v_m_345_, lean_object* v_inst_346_, lean_object* v_00_u03b1_347_, lean_object* v_x_u2081_348_, lean_object* v_x_u2082_349_, lean_object* v_a_350_){
_start:
{
lean_object* v_orElse_351_; lean_object* v___f_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v_orElse_351_ = lean_ctor_get(v_inst_346_, 2);
lean_inc(v_orElse_351_);
lean_dec_ref(v_inst_346_);
lean_inc(v_a_350_);
v___f_352_ = lean_alloc_closure((void*)(l_StateRefT_x27_instAlternativeOfMonad___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_352_, 0, v_x_u2082_349_);
lean_closure_set(v___f_352_, 1, v_a_350_);
v___x_353_ = lean_apply_1(v_x_u2081_348_, v_a_350_);
v___x_354_ = lean_apply_3(v_orElse_351_, lean_box(0), v___x_353_, v___f_352_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg(lean_object* v_inst_355_, lean_object* v_inst_356_){
_start:
{
lean_object* v___x_357_; lean_object* v_toApplicative_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_357_ = l_StateRefT_x27_instMonad___redArg(v_inst_356_);
v_toApplicative_358_ = lean_ctor_get(v___x_357_, 0);
lean_inc_ref(v_toApplicative_358_);
lean_dec_ref(v___x_357_);
lean_inc_ref(v_inst_355_);
v___x_359_ = lean_alloc_closure((void*)(l_StateRefT_x27_instAlternativeOfMonad___aux__1___boxed), 6, 4);
lean_closure_set(v___x_359_, 0, lean_box(0));
lean_closure_set(v___x_359_, 1, lean_box(0));
lean_closure_set(v___x_359_, 2, lean_box(0));
lean_closure_set(v___x_359_, 3, v_inst_355_);
v___x_360_ = lean_alloc_closure((void*)(l_StateRefT_x27_instAlternativeOfMonad___aux__3), 8, 4);
lean_closure_set(v___x_360_, 0, lean_box(0));
lean_closure_set(v___x_360_, 1, lean_box(0));
lean_closure_set(v___x_360_, 2, lean_box(0));
lean_closure_set(v___x_360_, 3, v_inst_355_);
v___x_361_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_361_, 0, v_toApplicative_358_);
lean_ctor_set(v___x_361_, 1, v___x_359_);
lean_ctor_set(v___x_361_, 2, v___x_360_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad(lean_object* v_00_u03c9_362_, lean_object* v_00_u03c3_363_, lean_object* v_m_364_, lean_object* v_inst_365_, lean_object* v_inst_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = l_StateRefT_x27_instAlternativeOfMonad___redArg(v_inst_365_, v_inst_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___aux__3___redArg___lam__0(lean_object* v_x_368_){
_start:
{
lean_inc(v_x_368_);
return v_x_368_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___aux__3___redArg___lam__0___boxed(lean_object* v_x_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_StateRefT_x27_instMonadAttachOfMonad___aux__3___redArg___lam__0(v_x_369_);
lean_dec(v_x_369_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___aux__3___redArg(lean_object* v_inst_372_, lean_object* v_inst_373_, lean_object* v_x_374_, lean_object* v_r_375_){
_start:
{
lean_object* v_toApplicative_376_; lean_object* v_toFunctor_377_; lean_object* v_map_378_; lean_object* v___f_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_toApplicative_376_ = lean_ctor_get(v_inst_372_, 0);
lean_inc_ref(v_toApplicative_376_);
lean_dec_ref(v_inst_372_);
v_toFunctor_377_ = lean_ctor_get(v_toApplicative_376_, 0);
lean_inc_ref(v_toFunctor_377_);
lean_dec_ref(v_toApplicative_376_);
v_map_378_ = lean_ctor_get(v_toFunctor_377_, 0);
lean_inc(v_map_378_);
lean_dec_ref(v_toFunctor_377_);
v___f_379_ = ((lean_object*)(l_StateRefT_x27_instMonadAttachOfMonad___aux__3___redArg___closed__0));
v___x_380_ = lean_apply_1(v_x_374_, v_r_375_);
v___x_381_ = lean_apply_2(v_inst_373_, lean_box(0), v___x_380_);
v___x_382_ = lean_apply_4(v_map_378_, lean_box(0), lean_box(0), v___f_379_, v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___aux__3(lean_object* v_00_u03c9_383_, lean_object* v_00_u03c3_384_, lean_object* v_m_385_, lean_object* v_inst_386_, lean_object* v_inst_387_, lean_object* v_00_u03b1_388_, lean_object* v_x_389_, lean_object* v_r_390_){
_start:
{
lean_object* v_toApplicative_391_; lean_object* v_toFunctor_392_; lean_object* v_map_393_; lean_object* v___f_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v_toApplicative_391_ = lean_ctor_get(v_inst_386_, 0);
lean_inc_ref(v_toApplicative_391_);
lean_dec_ref(v_inst_386_);
v_toFunctor_392_ = lean_ctor_get(v_toApplicative_391_, 0);
lean_inc_ref(v_toFunctor_392_);
lean_dec_ref(v_toApplicative_391_);
v_map_393_ = lean_ctor_get(v_toFunctor_392_, 0);
lean_inc(v_map_393_);
lean_dec_ref(v_toFunctor_392_);
v___f_394_ = ((lean_object*)(l_StateRefT_x27_instMonadAttachOfMonad___aux__3___redArg___closed__0));
v___x_395_ = lean_apply_1(v_x_389_, v_r_390_);
v___x_396_ = lean_apply_2(v_inst_387_, lean_box(0), v___x_395_);
v___x_397_ = lean_apply_4(v_map_393_, lean_box(0), lean_box(0), v___f_394_, v___x_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___redArg(lean_object* v_inst_398_, lean_object* v_inst_399_){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadAttachOfMonad___aux__3), 8, 5);
lean_closure_set(v___x_400_, 0, lean_box(0));
lean_closure_set(v___x_400_, 1, lean_box(0));
lean_closure_set(v___x_400_, 2, lean_box(0));
lean_closure_set(v___x_400_, 3, v_inst_398_);
lean_closure_set(v___x_400_, 4, v_inst_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad(lean_object* v_00_u03c9_401_, lean_object* v_00_u03c3_402_, lean_object* v_m_403_, lean_object* v_inst_404_, lean_object* v_inst_405_){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadAttachOfMonad___aux__3), 8, 5);
lean_closure_set(v___x_406_, 0, lean_box(0));
lean_closure_set(v___x_406_, 1, lean_box(0));
lean_closure_set(v___x_406_, 2, lean_box(0));
lean_closure_set(v___x_406_, 3, v_inst_404_);
lean_closure_set(v___x_406_, 4, v_inst_405_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_get___redArg(lean_object* v_inst_407_, lean_object* v_ref_408_){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_409_, 0, lean_box(0));
lean_closure_set(v___x_409_, 1, lean_box(0));
lean_closure_set(v___x_409_, 2, v_ref_408_);
v___x_410_ = lean_apply_2(v_inst_407_, lean_box(0), v___x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_get(lean_object* v_00_u03c9_411_, lean_object* v_00_u03c3_412_, lean_object* v_m_413_, lean_object* v_inst_414_, lean_object* v_ref_415_){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_416_, 0, lean_box(0));
lean_closure_set(v___x_416_, 1, lean_box(0));
lean_closure_set(v___x_416_, 2, v_ref_415_);
v___x_417_ = lean_apply_2(v_inst_414_, lean_box(0), v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_set___redArg(lean_object* v_inst_418_, lean_object* v_s_419_, lean_object* v_ref_420_){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_421_, 0, lean_box(0));
lean_closure_set(v___x_421_, 1, lean_box(0));
lean_closure_set(v___x_421_, 2, v_ref_420_);
lean_closure_set(v___x_421_, 3, v_s_419_);
v___x_422_ = lean_apply_2(v_inst_418_, lean_box(0), v___x_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_set(lean_object* v_00_u03c9_423_, lean_object* v_00_u03c3_424_, lean_object* v_m_425_, lean_object* v_inst_426_, lean_object* v_s_427_, lean_object* v_ref_428_){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_429_, 0, lean_box(0));
lean_closure_set(v___x_429_, 1, lean_box(0));
lean_closure_set(v___x_429_, 2, v_ref_428_);
lean_closure_set(v___x_429_, 3, v_s_427_);
v___x_430_ = lean_apply_2(v_inst_426_, lean_box(0), v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_modifyGet___redArg(lean_object* v_inst_431_, lean_object* v_f_432_, lean_object* v_ref_433_){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_434_, 0, lean_box(0));
lean_closure_set(v___x_434_, 1, lean_box(0));
lean_closure_set(v___x_434_, 2, lean_box(0));
lean_closure_set(v___x_434_, 3, v_ref_433_);
lean_closure_set(v___x_434_, 4, v_f_432_);
v___x_435_ = lean_apply_2(v_inst_431_, lean_box(0), v___x_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_modifyGet(lean_object* v_00_u03c9_436_, lean_object* v_00_u03c3_437_, lean_object* v_m_438_, lean_object* v_00_u03b1_439_, lean_object* v_inst_440_, lean_object* v_f_441_, lean_object* v_ref_442_){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_443_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_443_, 0, lean_box(0));
lean_closure_set(v___x_443_, 1, lean_box(0));
lean_closure_set(v___x_443_, 2, lean_box(0));
lean_closure_set(v___x_443_, 3, v_ref_442_);
lean_closure_set(v___x_443_, 4, v_f_441_);
v___x_444_ = lean_apply_2(v_inst_440_, lean_box(0), v___x_443_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg___lam__0(lean_object* v_inst_445_, lean_object* v_00_u03b1_446_, lean_object* v___y_447_, lean_object* v___y_448_){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_449_, 0, lean_box(0));
lean_closure_set(v___x_449_, 1, lean_box(0));
lean_closure_set(v___x_449_, 2, lean_box(0));
lean_closure_set(v___x_449_, 3, v___y_448_);
lean_closure_set(v___x_449_, 4, v___y_447_);
v___x_450_ = lean_apply_2(v_inst_445_, lean_box(0), v___x_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg(lean_object* v_inst_451_){
_start:
{
lean_object* v___f_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
lean_inc(v_inst_451_);
v___f_452_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg___lam__0), 4, 1);
lean_closure_set(v___f_452_, 0, v_inst_451_);
lean_inc(v_inst_451_);
v___x_453_ = lean_alloc_closure((void*)(l_StateRefT_x27_get), 5, 4);
lean_closure_set(v___x_453_, 0, lean_box(0));
lean_closure_set(v___x_453_, 1, lean_box(0));
lean_closure_set(v___x_453_, 2, lean_box(0));
lean_closure_set(v___x_453_, 3, v_inst_451_);
v___x_454_ = lean_alloc_closure((void*)(l_StateRefT_x27_set), 6, 4);
lean_closure_set(v___x_454_, 0, lean_box(0));
lean_closure_set(v___x_454_, 1, lean_box(0));
lean_closure_set(v___x_454_, 2, lean_box(0));
lean_closure_set(v___x_454_, 3, v_inst_451_);
v___x_455_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_455_, 0, v___x_453_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
lean_ctor_set(v___x_455_, 2, v___f_452_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST(lean_object* v_00_u03c9_456_, lean_object* v_00_u03c3_457_, lean_object* v_m_458_, lean_object* v_inst_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg(v_inst_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0(lean_object* v_inst_461_, lean_object* v_00_u03b1_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v_throw_465_; lean_object* v___x_466_; 
v_throw_465_ = lean_ctor_get(v_inst_461_, 0);
lean_inc(v_throw_465_);
lean_dec_ref(v_inst_461_);
v___x_466_ = lean_apply_2(v_throw_465_, lean_box(0), v___y_463_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object* v_inst_467_, lean_object* v_00_u03b1_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_StateRefT_x27_instMonadExceptOf___redArg___lam__0(v_inst_467_, v_00_u03b1_468_, v___y_469_, v___y_470_);
lean_dec(v___y_470_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__1(lean_object* v_c_472_, lean_object* v_s_473_, lean_object* v_e_474_){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = lean_apply_2(v_c_472_, v_e_474_, v_s_473_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object* v_inst_476_, lean_object* v_00_u03b1_477_, lean_object* v_x_478_, lean_object* v_c_479_, lean_object* v_s_480_){
_start:
{
lean_object* v_tryCatch_481_; lean_object* v___f_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_tryCatch_481_ = lean_ctor_get(v_inst_476_, 1);
lean_inc(v_tryCatch_481_);
lean_dec_ref(v_inst_476_);
lean_inc(v_s_480_);
v___f_482_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__1), 3, 2);
lean_closure_set(v___f_482_, 0, v_c_479_);
lean_closure_set(v___f_482_, 1, v_s_480_);
v___x_483_ = lean_apply_1(v_x_478_, v_s_480_);
v___x_484_ = lean_apply_3(v_tryCatch_481_, lean_box(0), v___x_483_, v___f_482_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg(lean_object* v_inst_485_){
_start:
{
lean_object* v___f_486_; lean_object* v___f_487_; lean_object* v___x_488_; 
lean_inc_ref(v_inst_485_);
v___f_486_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_486_, 0, v_inst_485_);
v___f_487_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_487_, 0, v_inst_485_);
v___x_488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_488_, 0, v___f_486_);
lean_ctor_set(v___x_488_, 1, v___f_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf(lean_object* v_00_u03c9_489_, lean_object* v_00_u03c3_490_, lean_object* v_m_491_, lean_object* v_00_u03b5_492_, lean_object* v_inst_493_){
_start:
{
lean_object* v___f_494_; lean_object* v___f_495_; lean_object* v___x_496_; 
lean_inc_ref(v_inst_493_);
v___f_494_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_494_, 0, v_inst_493_);
v___f_495_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_495_, 0, v_inst_493_);
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v___f_494_);
lean_ctor_set(v___x_496_, 1, v___f_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__1___redArg___lam__0(lean_object* v_ctx_497_, lean_object* v_00_u03b2_498_, lean_object* v_x_499_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = lean_apply_1(v_x_499_, v_ctx_497_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__1___redArg(lean_object* v_f_501_, lean_object* v_ctx_502_){
_start:
{
lean_object* v___f_503_; lean_object* v___x_504_; 
v___f_503_ = lean_alloc_closure((void*)(l_instMonadControlStateRefT_x27___aux__1___redArg___lam__0), 3, 1);
lean_closure_set(v___f_503_, 0, v_ctx_502_);
v___x_504_ = lean_apply_1(v_f_501_, v___f_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__1(lean_object* v_00_u03c9_505_, lean_object* v_00_u03c3_506_, lean_object* v_m_507_, lean_object* v_00_u03b1_508_, lean_object* v_f_509_, lean_object* v_ctx_510_){
_start:
{
lean_object* v___f_511_; lean_object* v___x_512_; 
v___f_511_ = lean_alloc_closure((void*)(l_instMonadControlStateRefT_x27___aux__1___redArg___lam__0), 3, 1);
lean_closure_set(v___f_511_, 0, v_ctx_510_);
v___x_512_ = lean_apply_1(v_f_509_, v___f_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__3___redArg(lean_object* v_x_513_){
_start:
{
lean_inc(v_x_513_);
return v_x_513_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__3___redArg___boxed(lean_object* v_x_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_instMonadControlStateRefT_x27___aux__3___redArg(v_x_514_);
lean_dec(v_x_514_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__3(lean_object* v_00_u03c9_516_, lean_object* v_00_u03c3_517_, lean_object* v_m_518_, lean_object* v_00_u03b1_519_, lean_object* v_x_520_, lean_object* v_x_521_){
_start:
{
lean_inc(v_x_520_);
return v_x_520_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___aux__3___boxed(lean_object* v_00_u03c9_522_, lean_object* v_00_u03c3_523_, lean_object* v_m_524_, lean_object* v_00_u03b1_525_, lean_object* v_x_526_, lean_object* v_x_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_instMonadControlStateRefT_x27___aux__3(v_00_u03c9_522_, v_00_u03c3_523_, v_m_524_, v_00_u03b1_525_, v_x_526_, v_x_527_);
lean_dec(v_x_527_);
lean_dec(v_x_526_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27(lean_object* v_00_u03c9_534_, lean_object* v_00_u03c3_535_, lean_object* v_m_536_){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = ((lean_object*)(l_instMonadControlStateRefT_x27___closed__2));
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___aux__1___redArg___lam__0(lean_object* v_h_538_, lean_object* v_ctx_539_, lean_object* v_a_x3f_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = lean_apply_2(v_h_538_, v_a_x3f_540_, v_ctx_539_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___aux__1___redArg(lean_object* v_inst_542_, lean_object* v_x_543_, lean_object* v_h_544_, lean_object* v_ctx_545_){
_start:
{
lean_object* v___f_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
lean_inc(v_ctx_545_);
v___f_546_ = lean_alloc_closure((void*)(l_instMonadFinallyStateRefT_x27___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_546_, 0, v_h_544_);
lean_closure_set(v___f_546_, 1, v_ctx_545_);
v___x_547_ = lean_apply_1(v_x_543_, v_ctx_545_);
v___x_548_ = lean_apply_4(v_inst_542_, lean_box(0), lean_box(0), v___x_547_, v___f_546_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___aux__1(lean_object* v_m_549_, lean_object* v_00_u03c9_550_, lean_object* v_00_u03c3_551_, lean_object* v_inst_552_, lean_object* v_00_u03b1_553_, lean_object* v_00_u03b2_554_, lean_object* v_x_555_, lean_object* v_h_556_, lean_object* v_ctx_557_){
_start:
{
lean_object* v___f_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
lean_inc(v_ctx_557_);
v___f_558_ = lean_alloc_closure((void*)(l_instMonadFinallyStateRefT_x27___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_558_, 0, v_h_556_);
lean_closure_set(v___f_558_, 1, v_ctx_557_);
v___x_559_ = lean_apply_1(v_x_555_, v_ctx_557_);
v___x_560_ = lean_apply_4(v_inst_552_, lean_box(0), lean_box(0), v___x_559_, v___f_558_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___redArg(lean_object* v_inst_561_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = lean_alloc_closure((void*)(l_instMonadFinallyStateRefT_x27___aux__1), 9, 4);
lean_closure_set(v___x_562_, 0, lean_box(0));
lean_closure_set(v___x_562_, 1, lean_box(0));
lean_closure_set(v___x_562_, 2, lean_box(0));
lean_closure_set(v___x_562_, 3, v_inst_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27(lean_object* v_m_563_, lean_object* v_00_u03c9_564_, lean_object* v_00_u03c3_565_, lean_object* v_inst_566_){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = lean_alloc_closure((void*)(l_instMonadFinallyStateRefT_x27___aux__1), 9, 4);
lean_closure_set(v___x_567_, 0, lean_box(0));
lean_closure_set(v___x_567_, 1, lean_box(0));
lean_closure_set(v___x_567_, 2, lean_box(0));
lean_closure_set(v___x_567_, 3, v_inst_566_);
return v___x_567_;
}
}
lean_object* runtime_initialize_Init_System_ST(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Reader(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Control_StateRef(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_System_ST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Reader(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Control_StateRef(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_ST(uint8_t builtin);
lean_object* initialize_Init_Control_Reader(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Control_StateRef(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_ST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Reader(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_StateRef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Control_StateRef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Control_StateRef(builtin);
}
#ifdef __cplusplus
}
#endif
