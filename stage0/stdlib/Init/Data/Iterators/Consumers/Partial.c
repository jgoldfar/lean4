// Lean compiler output
// Module: Init.Data.Iterators.Consumers.Partial
// Imports: Init.Data.Iterators.Basic
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
LEAN_EXPORT lean_object* l_Std_Iterators_Iter_allowNontermination___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Iter_allowNontermination___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Iter_allowNontermination(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Iter_allowNontermination___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Iter_allowNontermination(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_Iterators_Iter_allowNontermination___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Iter_allowNontermination___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_Iterators_Iter_allowNontermination___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init_Data_Iterators_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Iterators_Consumers_Partial(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Iterators_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
