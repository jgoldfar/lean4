// Lean compiler output
// Module: Init.Data.List.FinRange
// Imports: Init.Data.List.OfFn Init.Data.List.Monadic
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
LEAN_EXPORT lean_object* l_List_finRange___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_finRange___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_finRange(lean_object*);
lean_object* l_List_ofFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_finRange___lam__0(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_finRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_List_finRange___lam__0___boxed), 1, 0);
x_3 = l_List_ofFn___redArg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_finRange___lam__0___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_finRange___lam__0(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init_Data_List_OfFn(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_List_Monadic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_List_FinRange(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_List_OfFn(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Monadic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
