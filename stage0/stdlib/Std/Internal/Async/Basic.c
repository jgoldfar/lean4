// Lean compiler output
// Module: Std.Internal.Async.Basic
// Imports: public import Init.System.Promise public import Init.While
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
lean_object* lean_task_pure(lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_promise_new();
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Function_const___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_liftM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_pure(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftT___lam__0___boxed(lean_object*, lean_object*);
uint8_t lean_io_get_task_state(lean_object*);
lean_object* l_Functor_mapRev___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_MonadExcept_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateRefT_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncReaderT___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncReaderT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncReaderT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateRefT_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_pure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_map___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bind___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bind___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bindEIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bindEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bindEIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bindEIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bindEIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bindEIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_mapEIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_mapEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_mapEIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_mapEIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_mapEIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_mapEIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_block___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_block___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_block(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_block___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPromise_x21___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPromise_x21___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPromise_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPromise_x21___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_ETask_ofPurePromise___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_pure, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Internal_IO_Async_ETask_ofPurePromise___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_ETask_ofPurePromise___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPurePromise___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPurePromise___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPurePromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPurePromise___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IO_Async_ETask_getState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_getState___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IO_Async_ETask_getState(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_getState___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_ETask_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_ETask_instFunctor___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_ETask_instFunctor___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_ETask_instFunctor___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_ETask_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_ETask_instFunctor___lam__0, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_ETask_instFunctor___closed__0_value)} };
static const lean_object* l_Std_Internal_IO_Async_ETask_instFunctor___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_ETask_instFunctor___closed__1_value;
static const lean_ctor_object l_Std_Internal_IO_Async_ETask_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_ETask_instFunctor___closed__0_value),((lean_object*)&l_Std_Internal_IO_Async_ETask_instFunctor___closed__1_value)}};
static const lean_object* l_Std_Internal_IO_Async_ETask_instFunctor___closed__2 = (const lean_object*)&l_Std_Internal_IO_Async_ETask_instFunctor___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instFunctor(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_ETask_instMonad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_ETask_instMonad___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_ETask_instMonad___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_ETask_instMonad___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_ETask_instMonad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_ETask_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_ETask_instMonad___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_ETask_instMonad___closed__1_value;
static const lean_closure_object l_Std_Internal_IO_Async_ETask_instMonad___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_ETask_instMonad___lam__5, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_ETask_instMonad___closed__2 = (const lean_object*)&l_Std_Internal_IO_Async_ETask_instMonad___closed__2_value;
static const lean_closure_object l_Std_Internal_IO_Async_ETask_instMonad___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_ETask_instMonad___lam__7, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_ETask_instMonad___closed__0_value),((lean_object*)&l_Std_Internal_IO_Async_ETask_instMonad___closed__2_value)} };
static const lean_object* l_Std_Internal_IO_Async_ETask_instMonad___closed__3 = (const lean_object*)&l_Std_Internal_IO_Async_ETask_instMonad___closed__3_value;
static const lean_closure_object l_Std_Internal_IO_Async_ETask_instMonad___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_ETask_instMonad___lam__9, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_ETask_instMonad___closed__4 = (const lean_object*)&l_Std_Internal_IO_Async_ETask_instMonad___closed__4_value;
static lean_once_cell_t l_Std_Internal_IO_Async_ETask_instMonad___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IO_Async_ETask_instMonad___closed__5;
static lean_once_cell_t l_Std_Internal_IO_Async_ETask_instMonad___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IO_Async_ETask_instMonad___closed__6;
static lean_once_cell_t l_Std_Internal_IO_Async_ETask_instMonad___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IO_Async_ETask_instMonad___closed__7;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_pure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bind___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bind___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_map___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bindIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bindIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bindIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bindIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bindIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bindIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapTaskIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapTaskIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapTaskIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapTaskIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_block___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_block___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_block(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_block___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPromise___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPurePromise___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPurePromise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPurePromise___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPurePromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPurePromise___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IO_Async_AsyncTask_getState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_getState___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IO_Async_AsyncTask_getState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_getState___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_pure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_pure_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ofTask_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ofTask_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_toTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_toTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_get___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_map___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_map(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_bind___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_bind___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___lam__0(lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_joinTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_MaybeTask_instFunctor___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_MaybeTask_instFunctor___lam__1, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__0_value)} };
static const lean_object* l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__1_value;
static const lean_ctor_object l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__0_value),((lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__1_value)}};
static const lean_object* l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__2 = (const lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Internal_IO_Async_MaybeTask_instFunctor = (const lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__10(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__1_value;
static const lean_closure_object l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__5, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__2 = (const lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__2_value;
static const lean_closure_object l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__7, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__2_value)} };
static const lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__3 = (const lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__3_value;
static const lean_closure_object l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__10, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__4 = (const lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__4_value;
static const lean_ctor_object l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instFunctor___closed__2_value),((lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__0_value),((lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__1_value),((lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__3_value),((lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__4_value)}};
static const lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__5 = (const lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__5_value;
static const lean_ctor_object l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__5_value),((lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__2_value)}};
static const lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__6 = (const lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad = (const lean_object*)&l_Std_Internal_IO_Async_MaybeTask_instMonad___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_mk___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toBaseIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toBaseIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toBaseIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toBaseIO___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofTask___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_pure___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_pure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_pure___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_map___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_bind___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_lift___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_lift___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_lift(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_lift___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_wait___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_wait___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_wait(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_wait___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_asTask___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_asTask___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_asTask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_await___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_await___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_await(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_await___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_async___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_async___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_async(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_async___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instFunctor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instFunctor___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_BaseAsync_instFunctor___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_BaseAsync_instFunctor___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__0_value)} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__1_value;
static const lean_ctor_object l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__0_value),((lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__1_value)}};
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__2 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Internal_IO_Async_BaseAsync_instFunctor = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__2___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__1_value;
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__5___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__1_value)} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__2 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__2_value;
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__7___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__3 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__3_value;
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_BaseAsync_pure___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__4 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__4_value;
static const lean_ctor_object l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instFunctor___closed__2_value),((lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__4_value),((lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__0_value),((lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__2_value),((lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__3_value)}};
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__5 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__5_value;
static const lean_ctor_object l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__5_value),((lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__1_value)}};
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__6 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__6_value;
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_instMonadLiftBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_BaseAsync_lift___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadLiftBaseIO___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonadLiftBaseIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadLiftBaseIO = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonadLiftBaseIO___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_instMonadAwaitTask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_BaseAsync_await___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadAwaitTask___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonadAwaitTask___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadAwaitTask = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonadAwaitTask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadAsyncTask___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadAsyncTask___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_instMonadAsyncTask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_BaseAsync_instMonadAsyncTask___lam__1___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0_value)} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadAsyncTask___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonadAsyncTask___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadAsyncTask = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonadAsyncTask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instInhabited___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instInhabited___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__2___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadFinally = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofExcept___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofExcept___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofExcept(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofExcept___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_BaseAsync_await___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_BaseAsync_instMonad___closed__6_value)} };
static const lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toBaseIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toBaseIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toBaseIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toBaseIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofTask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toEIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toEIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toEIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toEIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofETask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofETask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofETask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofETask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_pure___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_pure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_map___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_bind___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_bind___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_bind___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_bind___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_lift___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_lift___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_lift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_wait___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_wait___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_wait(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_wait___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_asTask___redArg___lam__0(lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_asTask___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_asTask___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_asTask___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_asTask(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_block___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_block___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_block(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_block___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_throw___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_throw___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_throw(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_throw___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryCatch___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryCatch___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryCatch___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryCatch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryCatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryCatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_await___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_await___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_await(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_await___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_async___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_async___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_async(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_async___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instFunctor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instFunctor___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instFunctor___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instFunctor___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instFunctor___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instFunctor___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_EAsync_instFunctor___closed__0_value)} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instFunctor___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instFunctor___closed__1_value;
static const lean_ctor_object l_Std_Internal_IO_Async_EAsync_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_EAsync_instFunctor___closed__0_value),((lean_object*)&l_Std_Internal_IO_Async_EAsync_instFunctor___closed__1_value)}};
static const lean_object* l_Std_Internal_IO_Async_EAsync_instFunctor___closed__2 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instFunctor___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instFunctor(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonad___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonad___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonad___lam__2___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonad___closed__1_value;
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonad___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonad___lam__5___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonad___closed__0_value)} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___closed__2 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonad___closed__2_value;
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonad___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonad___lam__7___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___closed__3 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonad___closed__3_value;
static lean_once_cell_t l_Std_Internal_IO_Async_EAsync_instMonad___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___closed__4;
static lean_once_cell_t l_Std_Internal_IO_Async_EAsync_instMonad___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___closed__5;
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonad___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_bind___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___closed__6 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonad___closed__6_value;
static lean_once_cell_t l_Std_Internal_IO_Async_EAsync_instMonad___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___closed__7;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad(lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_lift___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadExcept___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadExcept___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonadExcept___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_throw___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__1_value;
static const lean_ctor_object l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__1_value),((lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__0_value)}};
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__2 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadExcept(lean_object*);
static const lean_ctor_object l_Std_Internal_IO_Async_EAsync_instMonadExceptOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__1_value),((lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__0_value)}};
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadExceptOf___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadExceptOf___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadExceptOf(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadFinally___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadFinally___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadFinally___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonadFinally___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadFinally___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadFinally___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadFinally(lean_object*);
static lean_once_cell_t l_Std_Internal_IO_Async_EAsync_instOrElse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IO_Async_EAsync_instOrElse___closed__0;
static lean_once_cell_t l_Std_Internal_IO_Async_EAsync_instOrElse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IO_Async_EAsync_instOrElse___closed__1;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instOrElse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitETask___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitETask___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadAwaitETask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonadAwaitETask___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitETask___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadAwaitETask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitETask(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitTask___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitTask___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadAwaitTask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonadAwaitTask___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value)} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitTask___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadAwaitTask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitTask(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitAsyncTaskError = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitPromise___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitPromise___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadAwaitPromise___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonadAwaitPromise___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value)} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitPromise___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadAwaitPromise___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitPromise(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncETask___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncETask___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadAsyncETask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonadAsyncETask___lam__1___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0_value)} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncETask___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadAsyncETask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncETask(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0_value)} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseIO___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseIO___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseIO___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseIO(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO__1___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO__1___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseAsync___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseAsync___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseAsync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseAsync___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value)} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseAsync___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseAsync___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseAsync(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instForInLoopUnit(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofExcept___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofExcept___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofExcept(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofExcept___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_race___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_race___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_race___redArg___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_race___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_race___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_race___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0;
static const lean_closure_object l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__1_value;
static lean_once_cell_t l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__2;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_toIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_toIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_toIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_toIO___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_block___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_block___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_block(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_block___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPromise___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPromise___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPromise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPromise___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPromise___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofAsyncTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofAsyncTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofAsyncTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofAsyncTask___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_Async_ofIOTask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_Async_ofIOTask___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_Async_ofIOTask___redArg___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_Async_ofIOTask___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_Async_ofIOTask___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_IO_Async_Async_ofIOTask___redArg___closed__0_value)} };
static const lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___redArg___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_Async_ofIOTask___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofExcept___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofExcept___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofExcept(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofExcept___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofTask___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPurePromise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPurePromise___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPurePromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPurePromise___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Std_Internal_IO_Async_Async_instMonadAsyncAsyncTask = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Internal_IO_Async_Async_instMonadAwaitAsyncTask = (const lean_object*)&l_Std_Internal_IO_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0_value;
static lean_once_cell_t l_Std_Internal_IO_Async_Async_instMonadAwaitPromise___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IO_Async_Async_instMonadAwaitPromise___closed__0;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_instMonadAwaitPromise;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_Async_race___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_Async_race___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_Async_race___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_Async_race___redArg___closed__0_value;
static const lean_closure_object l_Std_Internal_IO_Async_Async_race___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_Async_race___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_Async_race___redArg___closed__1 = (const lean_object*)&l_Std_Internal_IO_Async_Async_race___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___closed__0_value;
static lean_once_cell_t l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___closed__1;
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_background___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_background(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad___redArg___lam__0(lean_object* v___y_1_, lean_object* v_toPure_2_, lean_object* v_a_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4_, 0, v_a_3_);
lean_ctor_set(v___x_4_, 1, v___y_1_);
v___x_5_ = lean_apply_2(v_toPure_2_, lean_box(0), v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad___redArg___lam__1(lean_object* v_inst_6_, lean_object* v_inst_7_, lean_object* v_00_u03b1_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_toApplicative_11_; lean_object* v_toBind_12_; lean_object* v_toPure_13_; lean_object* v___x_14_; lean_object* v___f_15_; lean_object* v___x_16_; 
v_toApplicative_11_ = lean_ctor_get(v_inst_6_, 0);
lean_inc_ref(v_toApplicative_11_);
v_toBind_12_ = lean_ctor_get(v_inst_6_, 1);
lean_inc(v_toBind_12_);
lean_dec_ref(v_inst_6_);
v_toPure_13_ = lean_ctor_get(v_toApplicative_11_, 1);
lean_inc(v_toPure_13_);
lean_dec_ref(v_toApplicative_11_);
v___x_14_ = lean_apply_2(v_inst_7_, lean_box(0), v___y_9_);
v___f_15_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad___redArg___lam__0), 3, 2);
lean_closure_set(v___f_15_, 0, v___y_10_);
lean_closure_set(v___f_15_, 1, v_toPure_13_);
v___x_16_ = lean_apply_4(v_toBind_12_, lean_box(0), lean_box(0), v___x_14_, v___f_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad___redArg(lean_object* v_inst_17_, lean_object* v_inst_18_){
_start:
{
lean_object* v___f_19_; 
v___f_19_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad___redArg___lam__1), 5, 2);
lean_closure_set(v___f_19_, 0, v_inst_17_);
lean_closure_set(v___f_19_, 1, v_inst_18_);
return v___f_19_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad(lean_object* v_m_20_, lean_object* v_t_21_, lean_object* v_n_22_, lean_object* v_inst_23_, lean_object* v_inst_24_){
_start:
{
lean_object* v___f_25_; 
v___f_25_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad___redArg___lam__1), 5, 2);
lean_closure_set(v___f_25_, 0, v_inst_23_);
lean_closure_set(v___f_25_, 1, v_inst_24_);
return v___f_25_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg___lam__0(lean_object* v_a_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_27_, 0, v_a_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg___lam__1(lean_object* v_inst_28_, lean_object* v_inst_29_, lean_object* v___f_30_, lean_object* v_00_u03b1_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_toApplicative_33_; lean_object* v_toFunctor_34_; lean_object* v_map_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v_toApplicative_33_ = lean_ctor_get(v_inst_28_, 0);
lean_inc_ref(v_toApplicative_33_);
lean_dec_ref(v_inst_28_);
v_toFunctor_34_ = lean_ctor_get(v_toApplicative_33_, 0);
lean_inc_ref(v_toFunctor_34_);
lean_dec_ref(v_toApplicative_33_);
v_map_35_ = lean_ctor_get(v_toFunctor_34_, 0);
lean_inc(v_map_35_);
lean_dec_ref(v_toFunctor_34_);
v___x_36_ = lean_apply_2(v_inst_29_, lean_box(0), v___y_32_);
v___x_37_ = lean_apply_4(v_map_35_, lean_box(0), lean_box(0), v___f_30_, v___x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg(lean_object* v_inst_39_, lean_object* v_inst_40_){
_start:
{
lean_object* v___f_41_; lean_object* v___f_42_; 
v___f_41_ = ((lean_object*)(l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0));
v___f_42_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg___lam__1), 5, 3);
lean_closure_set(v___f_42_, 0, v_inst_39_);
lean_closure_set(v___f_42_, 1, v_inst_40_);
lean_closure_set(v___f_42_, 2, v___f_41_);
return v___f_42_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad(lean_object* v_m_43_, lean_object* v_t_44_, lean_object* v_n_45_, lean_object* v_inst_46_, lean_object* v_inst_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Std_Internal_IO_Async_instMonadAwaitExceptTOfMonad___redArg(v_inst_46_, v_inst_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0(lean_object* v_inst_49_, lean_object* v_00_u03b1_50_, lean_object* v___y_51_, lean_object* v___y_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_apply_2(v_inst_49_, lean_box(0), v___y_51_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed(lean_object* v_inst_54_, lean_object* v_00_u03b1_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0(v_inst_54_, v_00_u03b1_55_, v___y_56_, v___y_57_);
lean_dec(v___y_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad___redArg(lean_object* v_inst_59_){
_start:
{
lean_object* v___f_60_; 
v___f_60_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_60_, 0, v_inst_59_);
return v___f_60_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad(lean_object* v_m_61_, lean_object* v_t_62_, lean_object* v_n_63_, lean_object* v_inst_64_, lean_object* v_inst_65_){
_start:
{
lean_object* v___f_66_; 
v___f_66_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_66_, 0, v_inst_65_);
return v___f_66_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad___boxed(lean_object* v_m_67_, lean_object* v_t_68_, lean_object* v_n_69_, lean_object* v_inst_70_, lean_object* v_inst_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad(v_m_67_, v_t_68_, v_n_69_, v_inst_70_, v_inst_71_);
lean_dec_ref(v_inst_70_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateRefT_x27___redArg(lean_object* v_inst_73_){
_start:
{
lean_object* v___f_74_; 
v___f_74_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_74_, 0, v_inst_73_);
return v___f_74_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateRefT_x27(lean_object* v_t_75_, lean_object* v_m_76_, lean_object* v_s_77_, lean_object* v_n_78_, lean_object* v_inst_79_){
_start:
{
lean_object* v___f_80_; 
v___f_80_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_80_, 0, v_inst_79_);
return v___f_80_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad__1___redArg(lean_object* v_inst_81_, lean_object* v_inst_82_){
_start:
{
lean_object* v___f_83_; 
v___f_83_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad___redArg___lam__1), 5, 2);
lean_closure_set(v___f_83_, 0, v_inst_81_);
lean_closure_set(v___f_83_, 1, v_inst_82_);
return v___f_83_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad__1(lean_object* v_m_84_, lean_object* v_t_85_, lean_object* v_s_86_, lean_object* v_inst_87_, lean_object* v_inst_88_){
_start:
{
lean_object* v___f_89_; 
v___f_89_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAwaitStateTOfMonad___redArg___lam__1), 5, 2);
lean_closure_set(v___f_89_, 0, v_inst_87_);
lean_closure_set(v___f_89_, 1, v_inst_88_);
return v___f_89_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncReaderT___redArg___lam__0(lean_object* v_inst_90_, lean_object* v_00_u03b1_91_, lean_object* v_p_92_, lean_object* v_prio_93_, lean_object* v___y_94_){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_apply_1(v_p_92_, v___y_94_);
v___x_96_ = lean_apply_3(v_inst_90_, lean_box(0), v___x_95_, v_prio_93_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncReaderT___redArg(lean_object* v_inst_97_){
_start:
{
lean_object* v___f_98_; 
v___f_98_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAsyncReaderT___redArg___lam__0), 5, 1);
lean_closure_set(v___f_98_, 0, v_inst_97_);
return v___f_98_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncReaderT(lean_object* v_t_99_, lean_object* v_m_100_, lean_object* v_n_101_, lean_object* v_inst_102_){
_start:
{
lean_object* v___f_103_; 
v___f_103_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAsyncReaderT___redArg___lam__0), 5, 1);
lean_closure_set(v___f_103_, 0, v_inst_102_);
return v___f_103_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateRefT_x27___redArg(lean_object* v_inst_104_){
_start:
{
lean_object* v___f_105_; 
v___f_105_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAsyncReaderT___redArg___lam__0), 5, 1);
lean_closure_set(v___f_105_, 0, v_inst_104_);
return v___f_105_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateRefT_x27(lean_object* v_t_106_, lean_object* v_m_107_, lean_object* v_s_108_, lean_object* v_n_109_, lean_object* v_inst_110_){
_start:
{
lean_object* v___f_111_; 
v___f_111_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAsyncReaderT___redArg___lam__0), 5, 1);
lean_closure_set(v___f_111_, 0, v_inst_110_);
return v___f_111_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0(lean_object* v_self_112_){
_start:
{
lean_object* v_fst_113_; 
v_fst_113_ = lean_ctor_get(v_self_112_, 0);
lean_inc(v_fst_113_);
return v_fst_113_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0___boxed(lean_object* v_self_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0(v_self_114_);
lean_dec_ref(v_self_114_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__1(lean_object* v_inst_116_, lean_object* v___f_117_, lean_object* v_s_118_, lean_object* v_toPure_119_, lean_object* v_t_120_){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_121_ = l_Functor_mapRev___redArg(v_inst_116_, v_t_120_, v___f_117_);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v_s_118_);
v___x_123_ = lean_apply_2(v_toPure_119_, lean_box(0), v___x_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__2(lean_object* v_inst_124_, lean_object* v___f_125_, lean_object* v_toPure_126_, lean_object* v_inst_127_, lean_object* v_toBind_128_, lean_object* v_00_u03b1_129_, lean_object* v_p_130_, lean_object* v_prio_131_, lean_object* v_s_132_){
_start:
{
lean_object* v___f_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
lean_inc(v_s_132_);
v___f_133_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_133_, 0, v_inst_124_);
lean_closure_set(v___f_133_, 1, v___f_125_);
lean_closure_set(v___f_133_, 2, v_s_132_);
lean_closure_set(v___f_133_, 3, v_toPure_126_);
v___x_134_ = lean_apply_1(v_p_130_, v_s_132_);
v___x_135_ = lean_apply_3(v_inst_127_, lean_box(0), v___x_134_, v_prio_131_);
v___x_136_ = lean_apply_4(v_toBind_128_, lean_box(0), lean_box(0), v___x_135_, v___f_133_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg(lean_object* v_inst_138_, lean_object* v_inst_139_, lean_object* v_inst_140_){
_start:
{
lean_object* v_toApplicative_141_; lean_object* v_toBind_142_; lean_object* v_toPure_143_; lean_object* v___f_144_; lean_object* v___f_145_; 
v_toApplicative_141_ = lean_ctor_get(v_inst_138_, 0);
lean_inc_ref(v_toApplicative_141_);
v_toBind_142_ = lean_ctor_get(v_inst_138_, 1);
lean_inc(v_toBind_142_);
lean_dec_ref(v_inst_138_);
v_toPure_143_ = lean_ctor_get(v_toApplicative_141_, 1);
lean_inc(v_toPure_143_);
lean_dec_ref(v_toApplicative_141_);
v___f_144_ = ((lean_object*)(l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___closed__0));
v___f_145_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__2), 9, 5);
lean_closure_set(v___f_145_, 0, v_inst_139_);
lean_closure_set(v___f_145_, 1, v___f_144_);
lean_closure_set(v___f_145_, 2, v_toPure_143_);
lean_closure_set(v___f_145_, 3, v_inst_140_);
lean_closure_set(v___f_145_, 4, v_toBind_142_);
return v___f_145_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor(lean_object* v_m_146_, lean_object* v_t_147_, lean_object* v_s_148_, lean_object* v_inst_149_, lean_object* v_inst_150_, lean_object* v_inst_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l_Std_Internal_IO_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg(v_inst_149_, v_inst_150_, v_inst_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_pure___redArg(lean_object* v_x_153_){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_154_, 0, v_x_153_);
v___x_155_ = lean_task_pure(v___x_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_pure(lean_object* v_00_u03b1_156_, lean_object* v_00_u03b5_157_, lean_object* v_x_158_){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_159_, 0, v_x_158_);
v___x_160_ = lean_task_pure(v___x_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_map___redArg___lam__0(lean_object* v_f_161_, lean_object* v_x_162_){
_start:
{
if (lean_obj_tag(v_x_162_) == 0)
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_170_; 
lean_dec(v_f_161_);
v_a_163_ = lean_ctor_get(v_x_162_, 0);
v_isSharedCheck_170_ = !lean_is_exclusive(v_x_162_);
if (v_isSharedCheck_170_ == 0)
{
v___x_165_ = v_x_162_;
v_isShared_166_ = v_isSharedCheck_170_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v_x_162_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_170_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_168_; 
if (v_isShared_166_ == 0)
{
v___x_168_ = v___x_165_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v_a_163_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
else
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_179_; 
v_a_171_ = lean_ctor_get(v_x_162_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v_x_162_);
if (v_isSharedCheck_179_ == 0)
{
v___x_173_ = v_x_162_;
v_isShared_174_ = v_isSharedCheck_179_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v_x_162_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_179_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_175_ = lean_apply_1(v_f_161_, v_a_171_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_175_);
v___x_177_ = v___x_173_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_map___redArg(lean_object* v_f_180_, lean_object* v_x_181_, lean_object* v_prio_182_, uint8_t v_sync_183_){
_start:
{
lean_object* v___f_184_; lean_object* v___x_185_; 
v___f_184_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_184_, 0, v_f_180_);
v___x_185_ = lean_task_map(v___f_184_, v_x_181_, v_prio_182_, v_sync_183_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_map___redArg___boxed(lean_object* v_f_186_, lean_object* v_x_187_, lean_object* v_prio_188_, lean_object* v_sync_189_){
_start:
{
uint8_t v_sync_boxed_190_; lean_object* v_res_191_; 
v_sync_boxed_190_ = lean_unbox(v_sync_189_);
v_res_191_ = l_Std_Internal_IO_Async_ETask_map___redArg(v_f_186_, v_x_187_, v_prio_188_, v_sync_boxed_190_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_map(lean_object* v_00_u03b1_192_, lean_object* v_00_u03b2_193_, lean_object* v_00_u03b5_194_, lean_object* v_f_195_, lean_object* v_x_196_, lean_object* v_prio_197_, uint8_t v_sync_198_){
_start:
{
lean_object* v___f_199_; lean_object* v___x_200_; 
v___f_199_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_199_, 0, v_f_195_);
v___x_200_ = lean_task_map(v___f_199_, v_x_196_, v_prio_197_, v_sync_198_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_map___boxed(lean_object* v_00_u03b1_201_, lean_object* v_00_u03b2_202_, lean_object* v_00_u03b5_203_, lean_object* v_f_204_, lean_object* v_x_205_, lean_object* v_prio_206_, lean_object* v_sync_207_){
_start:
{
uint8_t v_sync_boxed_208_; lean_object* v_res_209_; 
v_sync_boxed_208_ = lean_unbox(v_sync_207_);
v_res_209_ = l_Std_Internal_IO_Async_ETask_map(v_00_u03b1_201_, v_00_u03b2_202_, v_00_u03b5_203_, v_f_204_, v_x_205_, v_prio_206_, v_sync_boxed_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bind___redArg___lam__0(lean_object* v_f_210_, lean_object* v_x_211_){
_start:
{
if (lean_obj_tag(v_x_211_) == 0)
{
lean_object* v_a_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_220_; 
lean_dec_ref(v_f_210_);
v_a_212_ = lean_ctor_get(v_x_211_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v_x_211_);
if (v_isSharedCheck_220_ == 0)
{
v___x_214_ = v_x_211_;
v_isShared_215_ = v_isSharedCheck_220_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_a_212_);
lean_dec(v_x_211_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_220_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_217_; 
if (v_isShared_215_ == 0)
{
v___x_217_ = v___x_214_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_212_);
v___x_217_ = v_reuseFailAlloc_219_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
lean_object* v___x_218_; 
v___x_218_ = lean_task_pure(v___x_217_);
return v___x_218_;
}
}
}
else
{
lean_object* v_a_221_; lean_object* v___x_222_; 
v_a_221_ = lean_ctor_get(v_x_211_, 0);
lean_inc(v_a_221_);
lean_dec_ref(v_x_211_);
v___x_222_ = lean_apply_1(v_f_210_, v_a_221_);
return v___x_222_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bind___redArg(lean_object* v_x_223_, lean_object* v_f_224_, lean_object* v_prio_225_, uint8_t v_sync_226_){
_start:
{
lean_object* v___f_227_; lean_object* v___x_228_; 
v___f_227_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_227_, 0, v_f_224_);
v___x_228_ = lean_task_bind(v_x_223_, v___f_227_, v_prio_225_, v_sync_226_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bind___redArg___boxed(lean_object* v_x_229_, lean_object* v_f_230_, lean_object* v_prio_231_, lean_object* v_sync_232_){
_start:
{
uint8_t v_sync_boxed_233_; lean_object* v_res_234_; 
v_sync_boxed_233_ = lean_unbox(v_sync_232_);
v_res_234_ = l_Std_Internal_IO_Async_ETask_bind___redArg(v_x_229_, v_f_230_, v_prio_231_, v_sync_boxed_233_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bind(lean_object* v_00_u03b5_235_, lean_object* v_00_u03b1_236_, lean_object* v_00_u03b2_237_, lean_object* v_x_238_, lean_object* v_f_239_, lean_object* v_prio_240_, uint8_t v_sync_241_){
_start:
{
lean_object* v___f_242_; lean_object* v___x_243_; 
v___f_242_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_242_, 0, v_f_239_);
v___x_243_ = lean_task_bind(v_x_238_, v___f_242_, v_prio_240_, v_sync_241_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bind___boxed(lean_object* v_00_u03b5_244_, lean_object* v_00_u03b1_245_, lean_object* v_00_u03b2_246_, lean_object* v_x_247_, lean_object* v_f_248_, lean_object* v_prio_249_, lean_object* v_sync_250_){
_start:
{
uint8_t v_sync_boxed_251_; lean_object* v_res_252_; 
v_sync_boxed_251_ = lean_unbox(v_sync_250_);
v_res_252_ = l_Std_Internal_IO_Async_ETask_bind(v_00_u03b5_244_, v_00_u03b1_245_, v_00_u03b2_246_, v_x_247_, v_f_248_, v_prio_249_, v_sync_boxed_251_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bindEIO___redArg___lam__0(lean_object* v_f_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_a_257_; 
if (lean_obj_tag(v_a_254_) == 0)
{
lean_object* v_a_260_; 
lean_dec_ref(v_f_253_);
v_a_260_ = lean_ctor_get(v_a_254_, 0);
lean_inc(v_a_260_);
lean_dec_ref(v_a_254_);
v_a_257_ = v_a_260_;
goto v___jp_256_;
}
else
{
lean_object* v_a_261_; lean_object* v___x_262_; 
v_a_261_ = lean_ctor_get(v_a_254_, 0);
lean_inc(v_a_261_);
lean_dec_ref(v_a_254_);
v___x_262_ = lean_apply_2(v_f_253_, v_a_261_, lean_box(0));
if (lean_obj_tag(v___x_262_) == 0)
{
lean_object* v_a_263_; 
v_a_263_ = lean_ctor_get(v___x_262_, 0);
lean_inc(v_a_263_);
lean_dec_ref(v___x_262_);
return v_a_263_;
}
else
{
lean_object* v_a_264_; 
v_a_264_ = lean_ctor_get(v___x_262_, 0);
lean_inc(v_a_264_);
lean_dec_ref(v___x_262_);
v_a_257_ = v_a_264_;
goto v___jp_256_;
}
}
v___jp_256_:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_258_, 0, v_a_257_);
v___x_259_ = lean_task_pure(v___x_258_);
return v___x_259_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bindEIO___redArg___lam__0___boxed(lean_object* v_f_265_, lean_object* v_a_266_, lean_object* v___y_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Std_Internal_IO_Async_ETask_bindEIO___redArg___lam__0(v_f_265_, v_a_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bindEIO___redArg(lean_object* v_x_269_, lean_object* v_f_270_, lean_object* v_prio_271_, uint8_t v_sync_272_){
_start:
{
lean_object* v___f_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___f_274_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_bindEIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_274_, 0, v_f_270_);
v___x_275_ = lean_io_bind_task(v_x_269_, v___f_274_, v_prio_271_, v_sync_272_);
v___x_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bindEIO___redArg___boxed(lean_object* v_x_277_, lean_object* v_f_278_, lean_object* v_prio_279_, lean_object* v_sync_280_, lean_object* v_a_281_){
_start:
{
uint8_t v_sync_boxed_282_; lean_object* v_res_283_; 
v_sync_boxed_282_ = lean_unbox(v_sync_280_);
v_res_283_ = l_Std_Internal_IO_Async_ETask_bindEIO___redArg(v_x_277_, v_f_278_, v_prio_279_, v_sync_boxed_282_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bindEIO(lean_object* v_00_u03b5_284_, lean_object* v_00_u03b1_285_, lean_object* v_00_u03b2_286_, lean_object* v_x_287_, lean_object* v_f_288_, lean_object* v_prio_289_, uint8_t v_sync_290_){
_start:
{
lean_object* v___f_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___f_292_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_bindEIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_292_, 0, v_f_288_);
v___x_293_ = lean_io_bind_task(v_x_287_, v___f_292_, v_prio_289_, v_sync_290_);
v___x_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_bindEIO___boxed(lean_object* v_00_u03b5_295_, lean_object* v_00_u03b1_296_, lean_object* v_00_u03b2_297_, lean_object* v_x_298_, lean_object* v_f_299_, lean_object* v_prio_300_, lean_object* v_sync_301_, lean_object* v_a_302_){
_start:
{
uint8_t v_sync_boxed_303_; lean_object* v_res_304_; 
v_sync_boxed_303_ = lean_unbox(v_sync_301_);
v_res_304_ = l_Std_Internal_IO_Async_ETask_bindEIO(v_00_u03b5_295_, v_00_u03b1_296_, v_00_u03b2_297_, v_x_298_, v_f_299_, v_prio_300_, v_sync_boxed_303_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_mapEIO___redArg___lam__0(lean_object* v_f_305_, lean_object* v_a_306_){
_start:
{
lean_object* v_a_309_; 
if (lean_obj_tag(v_a_306_) == 0)
{
lean_object* v_a_311_; 
lean_dec_ref(v_f_305_);
v_a_311_ = lean_ctor_get(v_a_306_, 0);
lean_inc(v_a_311_);
lean_dec_ref(v_a_306_);
v_a_309_ = v_a_311_;
goto v___jp_308_;
}
else
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_322_; 
v_a_312_ = lean_ctor_get(v_a_306_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v_a_306_);
if (v_isSharedCheck_322_ == 0)
{
v___x_314_ = v_a_306_;
v_isShared_315_ = v_isSharedCheck_322_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v_a_306_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_322_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; 
v___x_316_ = lean_apply_2(v_f_305_, v_a_312_, lean_box(0));
if (lean_obj_tag(v___x_316_) == 0)
{
lean_object* v_a_317_; lean_object* v___x_319_; 
v_a_317_ = lean_ctor_get(v___x_316_, 0);
lean_inc(v_a_317_);
lean_dec_ref(v___x_316_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v_a_317_);
v___x_319_ = v___x_314_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
else
{
lean_object* v_a_321_; 
lean_del_object(v___x_314_);
v_a_321_ = lean_ctor_get(v___x_316_, 0);
lean_inc(v_a_321_);
lean_dec_ref(v___x_316_);
v_a_309_ = v_a_321_;
goto v___jp_308_;
}
}
}
v___jp_308_:
{
lean_object* v___x_310_; 
v___x_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_310_, 0, v_a_309_);
return v___x_310_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_mapEIO___redArg___lam__0___boxed(lean_object* v_f_323_, lean_object* v_a_324_, lean_object* v___y_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Std_Internal_IO_Async_ETask_mapEIO___redArg___lam__0(v_f_323_, v_a_324_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_mapEIO___redArg(lean_object* v_f_327_, lean_object* v_x_328_, lean_object* v_prio_329_, uint8_t v_sync_330_){
_start:
{
lean_object* v___f_332_; lean_object* v___x_333_; 
v___f_332_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_mapEIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_332_, 0, v_f_327_);
v___x_333_ = lean_io_map_task(v___f_332_, v_x_328_, v_prio_329_, v_sync_330_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_mapEIO___redArg___boxed(lean_object* v_f_334_, lean_object* v_x_335_, lean_object* v_prio_336_, lean_object* v_sync_337_, lean_object* v_a_338_){
_start:
{
uint8_t v_sync_boxed_339_; lean_object* v_res_340_; 
v_sync_boxed_339_ = lean_unbox(v_sync_337_);
v_res_340_ = l_Std_Internal_IO_Async_ETask_mapEIO___redArg(v_f_334_, v_x_335_, v_prio_336_, v_sync_boxed_339_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_mapEIO(lean_object* v_00_u03b1_341_, lean_object* v_00_u03b5_342_, lean_object* v_00_u03b2_343_, lean_object* v_f_344_, lean_object* v_x_345_, lean_object* v_prio_346_, uint8_t v_sync_347_){
_start:
{
lean_object* v___f_349_; lean_object* v___x_350_; 
v___f_349_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_mapEIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_349_, 0, v_f_344_);
v___x_350_ = lean_io_map_task(v___f_349_, v_x_345_, v_prio_346_, v_sync_347_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_mapEIO___boxed(lean_object* v_00_u03b1_351_, lean_object* v_00_u03b5_352_, lean_object* v_00_u03b2_353_, lean_object* v_f_354_, lean_object* v_x_355_, lean_object* v_prio_356_, lean_object* v_sync_357_, lean_object* v_a_358_){
_start:
{
uint8_t v_sync_boxed_359_; lean_object* v_res_360_; 
v_sync_boxed_359_ = lean_unbox(v_sync_357_);
v_res_360_ = l_Std_Internal_IO_Async_ETask_mapEIO(v_00_u03b1_351_, v_00_u03b5_352_, v_00_u03b2_353_, v_f_354_, v_x_355_, v_prio_356_, v_sync_boxed_359_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_block___redArg(lean_object* v_x_361_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = lean_task_get_own(v_x_361_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
v_a_364_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_363_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_363_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
lean_ctor_set_tag(v___x_366_, 1);
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
v_a_372_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___x_363_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_363_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
lean_ctor_set_tag(v___x_374_, 0);
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 1, 0);
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
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_block___redArg___boxed(lean_object* v_x_380_, lean_object* v_a_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Std_Internal_IO_Async_ETask_block___redArg(v_x_380_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_block(lean_object* v_00_u03b5_383_, lean_object* v_00_u03b1_384_, lean_object* v_x_385_){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = lean_task_get_own(v_x_385_);
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
v_a_388_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_395_ == 0)
{
v___x_390_ = v___x_387_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_387_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_391_ == 0)
{
lean_ctor_set_tag(v___x_390_, 1);
v___x_393_ = v___x_390_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_388_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
else
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_403_; 
v_a_396_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_403_ == 0)
{
v___x_398_ = v___x_387_;
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_387_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
lean_ctor_set_tag(v___x_398_, 0);
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_block___boxed(lean_object* v_00_u03b5_404_, lean_object* v_00_u03b1_405_, lean_object* v_x_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Std_Internal_IO_Async_ETask_block(v_00_u03b5_404_, v_00_u03b1_405_, v_x_406_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPromise_x21___redArg(lean_object* v_x_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_IO_Promise_result_x21___redArg(v_x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPromise_x21___redArg___boxed(lean_object* v_x_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Std_Internal_IO_Async_ETask_ofPromise_x21___redArg(v_x_411_);
lean_dec(v_x_411_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPromise_x21(lean_object* v_00_u03b5_413_, lean_object* v_00_u03b1_414_, lean_object* v_x_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_IO_Promise_result_x21___redArg(v_x_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPromise_x21___boxed(lean_object* v_00_u03b5_417_, lean_object* v_00_u03b1_418_, lean_object* v_x_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Std_Internal_IO_Async_ETask_ofPromise_x21(v_00_u03b5_417_, v_00_u03b1_418_, v_x_419_);
lean_dec(v_x_419_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPurePromise___redArg(lean_object* v_x_422_){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; lean_object* v___x_427_; 
v___x_423_ = ((lean_object*)(l_Std_Internal_IO_Async_ETask_ofPurePromise___redArg___closed__0));
v___x_424_ = l_IO_Promise_result_x21___redArg(v_x_422_);
v___x_425_ = lean_unsigned_to_nat(0u);
v___x_426_ = 1;
v___x_427_ = lean_task_map(v___x_423_, v___x_424_, v___x_425_, v___x_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPurePromise___redArg___boxed(lean_object* v_x_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Std_Internal_IO_Async_ETask_ofPurePromise___redArg(v_x_428_);
lean_dec(v_x_428_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPurePromise(lean_object* v_00_u03b1_430_, lean_object* v_00_u03b5_431_, lean_object* v_x_432_){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; lean_object* v___x_437_; 
v___x_433_ = ((lean_object*)(l_Std_Internal_IO_Async_ETask_ofPurePromise___redArg___closed__0));
v___x_434_ = l_IO_Promise_result_x21___redArg(v_x_432_);
v___x_435_ = lean_unsigned_to_nat(0u);
v___x_436_ = 1;
v___x_437_ = lean_task_map(v___x_433_, v___x_434_, v___x_435_, v___x_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_ofPurePromise___boxed(lean_object* v_00_u03b1_438_, lean_object* v_00_u03b5_439_, lean_object* v_x_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l_Std_Internal_IO_Async_ETask_ofPurePromise(v_00_u03b1_438_, v_00_u03b5_439_, v_x_440_);
lean_dec(v_x_440_);
return v_res_441_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IO_Async_ETask_getState___redArg(lean_object* v_x_442_){
_start:
{
uint8_t v___x_444_; 
v___x_444_ = lean_io_get_task_state(v_x_442_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_getState___redArg___boxed(lean_object* v_x_445_, lean_object* v_a_446_){
_start:
{
uint8_t v_res_447_; lean_object* v_r_448_; 
v_res_447_ = l_Std_Internal_IO_Async_ETask_getState___redArg(v_x_445_);
lean_dec_ref(v_x_445_);
v_r_448_ = lean_box(v_res_447_);
return v_r_448_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IO_Async_ETask_getState(lean_object* v_00_u03b5_449_, lean_object* v_00_u03b1_450_, lean_object* v_x_451_){
_start:
{
uint8_t v___x_453_; 
v___x_453_ = lean_io_get_task_state(v_x_451_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_getState___boxed(lean_object* v_00_u03b5_454_, lean_object* v_00_u03b1_455_, lean_object* v_x_456_, lean_object* v_a_457_){
_start:
{
uint8_t v_res_458_; lean_object* v_r_459_; 
v_res_458_ = l_Std_Internal_IO_Async_ETask_getState(v_00_u03b5_454_, v_00_u03b1_455_, v_x_456_);
lean_dec_ref(v_x_456_);
v_r_459_ = lean_box(v_res_458_);
return v_r_459_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instFunctor___lam__1(lean_object* v_00_u03b1_460_, lean_object* v_00_u03b2_461_, lean_object* v_f_462_, lean_object* v_x_463_){
_start:
{
lean_object* v___f_464_; lean_object* v___x_465_; uint8_t v___x_466_; lean_object* v___x_467_; 
v___f_464_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_464_, 0, v_f_462_);
v___x_465_ = lean_unsigned_to_nat(0u);
v___x_466_ = 0;
v___x_467_ = lean_task_map(v___f_464_, v_x_463_, v___x_465_, v___x_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instFunctor___lam__0(lean_object* v___f_468_, lean_object* v_00_u03b1_469_, lean_object* v_00_u03b2_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_473_, 0, lean_box(0));
lean_closure_set(v___x_473_, 1, lean_box(0));
lean_closure_set(v___x_473_, 2, v___y_471_);
v___x_474_ = lean_apply_4(v___f_468_, lean_box(0), lean_box(0), v___x_473_, v___y_472_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instFunctor(lean_object* v_00_u03b5_481_){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = ((lean_object*)(l_Std_Internal_IO_Async_ETask_instFunctor___closed__2));
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__0(lean_object* v_00_u03b1_483_, lean_object* v___y_484_){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_485_, 0, v___y_484_);
v___x_486_ = lean_task_pure(v___x_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__1(lean_object* v_a_487_, lean_object* v_x_488_){
_start:
{
if (lean_obj_tag(v_x_488_) == 0)
{
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
lean_dec(v_a_487_);
v_a_489_ = lean_ctor_get(v_x_488_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v_x_488_);
if (v_isSharedCheck_496_ == 0)
{
v___x_491_ = v_x_488_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v_x_488_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_489_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
else
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_505_; 
v_a_497_ = lean_ctor_get(v_x_488_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v_x_488_);
if (v_isSharedCheck_505_ == 0)
{
v___x_499_ = v_x_488_;
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v_x_488_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_501_ = lean_apply_1(v_a_487_, v_a_497_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_501_);
v___x_503_ = v___x_499_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v___x_501_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__2(lean_object* v_x_506_, lean_object* v_x_507_){
_start:
{
if (lean_obj_tag(v_x_507_) == 0)
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_516_; 
lean_dec_ref(v_x_506_);
v_a_508_ = lean_ctor_get(v_x_507_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v_x_507_);
if (v_isSharedCheck_516_ == 0)
{
v___x_510_ = v_x_507_;
v_isShared_511_ = v_isSharedCheck_516_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v_x_507_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_516_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_a_508_);
v___x_513_ = v_reuseFailAlloc_515_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
lean_object* v___x_514_; 
v___x_514_ = lean_task_pure(v___x_513_);
return v___x_514_;
}
}
}
else
{
lean_object* v_a_517_; lean_object* v___f_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; uint8_t v___x_522_; lean_object* v___x_523_; 
v_a_517_ = lean_ctor_get(v_x_507_, 0);
lean_inc(v_a_517_);
lean_dec_ref(v_x_507_);
v___f_518_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_instMonad___lam__1), 2, 1);
lean_closure_set(v___f_518_, 0, v_a_517_);
v___x_519_ = lean_box(0);
v___x_520_ = lean_apply_1(v_x_506_, v___x_519_);
v___x_521_ = lean_unsigned_to_nat(0u);
v___x_522_ = 0;
v___x_523_ = lean_task_map(v___f_518_, v___x_520_, v___x_521_, v___x_522_);
return v___x_523_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__3(lean_object* v_00_u03b1_524_, lean_object* v_00_u03b2_525_, lean_object* v_f_526_, lean_object* v_x_527_){
_start:
{
lean_object* v___f_528_; lean_object* v___x_529_; uint8_t v___x_530_; lean_object* v___x_531_; 
v___f_528_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_instMonad___lam__2), 2, 1);
lean_closure_set(v___f_528_, 0, v_x_527_);
v___x_529_ = lean_unsigned_to_nat(0u);
v___x_530_ = 0;
v___x_531_ = lean_task_bind(v_f_526_, v___f_528_, v___x_529_, v___x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__5(lean_object* v_00_u03b1_532_, lean_object* v_00_u03b2_533_, lean_object* v_x_534_, lean_object* v_f_535_){
_start:
{
lean_object* v___f_536_; lean_object* v___x_537_; uint8_t v___x_538_; lean_object* v___x_539_; 
v___f_536_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_536_, 0, v_f_535_);
v___x_537_ = lean_unsigned_to_nat(0u);
v___x_538_ = 0;
v___x_539_ = lean_task_bind(v_x_534_, v___f_536_, v___x_537_, v___x_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__4(lean_object* v___f_540_, lean_object* v_a_541_, lean_object* v_x_542_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = lean_apply_2(v___f_540_, lean_box(0), v_a_541_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__4___boxed(lean_object* v___f_544_, lean_object* v_a_545_, lean_object* v_x_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Std_Internal_IO_Async_ETask_instMonad___lam__4(v___f_544_, v_a_545_, v_x_546_);
lean_dec(v_x_546_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__6(lean_object* v___f_548_, lean_object* v_y_549_, lean_object* v___f_550_, lean_object* v_a_551_){
_start:
{
lean_object* v___f_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v___f_552_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_instMonad___lam__4___boxed), 3, 2);
lean_closure_set(v___f_552_, 0, v___f_548_);
lean_closure_set(v___f_552_, 1, v_a_551_);
v___x_553_ = lean_box(0);
v___x_554_ = lean_apply_1(v_y_549_, v___x_553_);
v___x_555_ = lean_apply_4(v___f_550_, lean_box(0), lean_box(0), v___x_554_, v___f_552_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__7(lean_object* v___f_556_, lean_object* v___f_557_, lean_object* v_00_u03b1_558_, lean_object* v_00_u03b2_559_, lean_object* v_x_560_, lean_object* v_y_561_){
_start:
{
lean_object* v___f_562_; lean_object* v___x_563_; 
lean_inc_ref(v___f_557_);
v___f_562_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_instMonad___lam__6), 4, 3);
lean_closure_set(v___f_562_, 0, v___f_556_);
lean_closure_set(v___f_562_, 1, v_y_561_);
lean_closure_set(v___f_562_, 2, v___f_557_);
v___x_563_ = lean_apply_4(v___f_557_, lean_box(0), lean_box(0), v_x_560_, v___f_562_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__8(lean_object* v_y_564_, lean_object* v_x_565_){
_start:
{
if (lean_obj_tag(v_x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_574_; 
lean_dec_ref(v_y_564_);
v_a_566_ = lean_ctor_get(v_x_565_, 0);
v_isSharedCheck_574_ = !lean_is_exclusive(v_x_565_);
if (v_isSharedCheck_574_ == 0)
{
v___x_568_ = v_x_565_;
v_isShared_569_ = v_isSharedCheck_574_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v_x_565_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_574_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_571_; 
if (v_isShared_569_ == 0)
{
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_a_566_);
v___x_571_ = v_reuseFailAlloc_573_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
lean_object* v___x_572_; 
v___x_572_ = lean_task_pure(v___x_571_);
return v___x_572_;
}
}
}
else
{
lean_object* v___x_575_; lean_object* v___x_576_; 
lean_dec_ref(v_x_565_);
v___x_575_ = lean_box(0);
v___x_576_ = lean_apply_1(v_y_564_, v___x_575_);
return v___x_576_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad___lam__9(lean_object* v_00_u03b1_577_, lean_object* v_00_u03b2_578_, lean_object* v_x_579_, lean_object* v_y_580_){
_start:
{
lean_object* v___f_581_; lean_object* v___x_582_; uint8_t v___x_583_; lean_object* v___x_584_; 
v___f_581_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_ETask_instMonad___lam__8), 2, 1);
lean_closure_set(v___f_581_, 0, v_y_580_);
v___x_582_ = lean_unsigned_to_nat(0u);
v___x_583_ = 0;
v___x_584_ = lean_task_bind(v_x_579_, v___f_581_, v___x_582_, v___x_583_);
return v___x_584_;
}
}
static lean_object* _init_l_Std_Internal_IO_Async_ETask_instMonad___closed__5(void){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = l_Std_Internal_IO_Async_ETask_instFunctor(lean_box(0));
return v___x_592_;
}
}
static lean_object* _init_l_Std_Internal_IO_Async_ETask_instMonad___closed__6(void){
_start:
{
lean_object* v___f_593_; lean_object* v___f_594_; lean_object* v___f_595_; lean_object* v___f_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v___f_593_ = ((lean_object*)(l_Std_Internal_IO_Async_ETask_instMonad___closed__4));
v___f_594_ = ((lean_object*)(l_Std_Internal_IO_Async_ETask_instMonad___closed__3));
v___f_595_ = ((lean_object*)(l_Std_Internal_IO_Async_ETask_instMonad___closed__1));
v___f_596_ = ((lean_object*)(l_Std_Internal_IO_Async_ETask_instMonad___closed__0));
v___x_597_ = lean_obj_once(&l_Std_Internal_IO_Async_ETask_instMonad___closed__5, &l_Std_Internal_IO_Async_ETask_instMonad___closed__5_once, _init_l_Std_Internal_IO_Async_ETask_instMonad___closed__5);
v___x_598_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
lean_ctor_set(v___x_598_, 1, v___f_596_);
lean_ctor_set(v___x_598_, 2, v___f_595_);
lean_ctor_set(v___x_598_, 3, v___f_594_);
lean_ctor_set(v___x_598_, 4, v___f_593_);
return v___x_598_;
}
}
static lean_object* _init_l_Std_Internal_IO_Async_ETask_instMonad___closed__7(void){
_start:
{
lean_object* v___f_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___f_599_ = ((lean_object*)(l_Std_Internal_IO_Async_ETask_instMonad___closed__2));
v___x_600_ = lean_obj_once(&l_Std_Internal_IO_Async_ETask_instMonad___closed__6, &l_Std_Internal_IO_Async_ETask_instMonad___closed__6_once, _init_l_Std_Internal_IO_Async_ETask_instMonad___closed__6);
v___x_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
lean_ctor_set(v___x_601_, 1, v___f_599_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_ETask_instMonad(lean_object* v_00_u03b5_602_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = lean_obj_once(&l_Std_Internal_IO_Async_ETask_instMonad___closed__7, &l_Std_Internal_IO_Async_ETask_instMonad___closed__7_once, _init_l_Std_Internal_IO_Async_ETask_instMonad___closed__7);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg___lam__0(lean_object* v_f_604_, lean_object* v_a_605_){
_start:
{
lean_object* v_a_608_; 
if (lean_obj_tag(v_a_605_) == 0)
{
lean_object* v_a_610_; 
lean_dec_ref(v_f_604_);
v_a_610_ = lean_ctor_get(v_a_605_, 0);
lean_inc(v_a_610_);
lean_dec_ref(v_a_605_);
v_a_608_ = v_a_610_;
goto v___jp_607_;
}
else
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_621_; 
v_a_611_ = lean_ctor_get(v_a_605_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v_a_605_);
if (v_isSharedCheck_621_ == 0)
{
v___x_613_ = v_a_605_;
v_isShared_614_ = v_isSharedCheck_621_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v_a_605_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_621_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_615_; 
v___x_615_ = lean_apply_2(v_f_604_, v_a_611_, lean_box(0));
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___x_618_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_a_616_);
lean_dec_ref(v___x_615_);
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v_a_616_);
v___x_618_ = v___x_613_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_616_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
else
{
lean_object* v_a_620_; 
lean_del_object(v___x_613_);
v_a_620_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_a_620_);
lean_dec_ref(v___x_615_);
v_a_608_ = v_a_620_;
goto v___jp_607_;
}
}
}
v___jp_607_:
{
lean_object* v___x_609_; 
v___x_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_609_, 0, v_a_608_);
return v___x_609_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg___lam__0___boxed(lean_object* v_f_622_, lean_object* v_a_623_, lean_object* v___y_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg___lam__0(v_f_622_, v_a_623_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg(lean_object* v_f_626_, lean_object* v_x_627_, lean_object* v_prio_628_, uint8_t v_sync_629_){
_start:
{
lean_object* v___f_631_; lean_object* v___x_632_; 
v___f_631_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_631_, 0, v_f_626_);
v___x_632_ = lean_io_map_task(v___f_631_, v_x_627_, v_prio_628_, v_sync_629_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg___boxed(lean_object* v_f_633_, lean_object* v_x_634_, lean_object* v_prio_635_, lean_object* v_sync_636_, lean_object* v_a_637_){
_start:
{
uint8_t v_sync_boxed_638_; lean_object* v_res_639_; 
v_sync_boxed_638_ = lean_unbox(v_sync_636_);
v_res_639_ = l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg(v_f_633_, v_x_634_, v_prio_635_, v_sync_boxed_638_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapIO(lean_object* v_00_u03b1_640_, lean_object* v_00_u03b2_641_, lean_object* v_f_642_, lean_object* v_x_643_, lean_object* v_prio_644_, uint8_t v_sync_645_){
_start:
{
lean_object* v___f_647_; lean_object* v___x_648_; 
v___f_647_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_647_, 0, v_f_642_);
v___x_648_ = lean_io_map_task(v___f_647_, v_x_643_, v_prio_644_, v_sync_645_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapIO___boxed(lean_object* v_00_u03b1_649_, lean_object* v_00_u03b2_650_, lean_object* v_f_651_, lean_object* v_x_652_, lean_object* v_prio_653_, lean_object* v_sync_654_, lean_object* v_a_655_){
_start:
{
uint8_t v_sync_boxed_656_; lean_object* v_res_657_; 
v_sync_boxed_656_ = lean_unbox(v_sync_654_);
v_res_657_ = l_Std_Internal_IO_Async_AsyncTask_mapIO(v_00_u03b1_649_, v_00_u03b2_650_, v_f_651_, v_x_652_, v_prio_653_, v_sync_boxed_656_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_pure___redArg(lean_object* v_x_658_){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_659_, 0, v_x_658_);
v___x_660_ = lean_task_pure(v___x_659_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_pure(lean_object* v_00_u03b1_661_, lean_object* v_x_662_){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_663_, 0, v_x_662_);
v___x_664_ = lean_task_pure(v___x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bind___redArg___lam__0(lean_object* v_f_665_, lean_object* v_x_666_){
_start:
{
if (lean_obj_tag(v_x_666_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_675_; 
lean_dec_ref(v_f_665_);
v_a_667_ = lean_ctor_get(v_x_666_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v_x_666_);
if (v_isSharedCheck_675_ == 0)
{
v___x_669_ = v_x_666_;
v_isShared_670_ = v_isSharedCheck_675_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_a_667_);
lean_dec(v_x_666_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_675_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_672_; 
if (v_isShared_670_ == 0)
{
v___x_672_ = v___x_669_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_667_);
v___x_672_ = v_reuseFailAlloc_674_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
lean_object* v___x_673_; 
v___x_673_ = lean_task_pure(v___x_672_);
return v___x_673_;
}
}
}
else
{
lean_object* v_a_676_; lean_object* v___x_677_; 
v_a_676_ = lean_ctor_get(v_x_666_, 0);
lean_inc(v_a_676_);
lean_dec_ref(v_x_666_);
v___x_677_ = lean_apply_1(v_f_665_, v_a_676_);
return v___x_677_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bind___redArg(lean_object* v_x_678_, lean_object* v_f_679_, lean_object* v_prio_680_, uint8_t v_sync_681_){
_start:
{
lean_object* v___f_682_; lean_object* v___x_683_; 
v___f_682_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_682_, 0, v_f_679_);
v___x_683_ = lean_task_bind(v_x_678_, v___f_682_, v_prio_680_, v_sync_681_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bind___redArg___boxed(lean_object* v_x_684_, lean_object* v_f_685_, lean_object* v_prio_686_, lean_object* v_sync_687_){
_start:
{
uint8_t v_sync_boxed_688_; lean_object* v_res_689_; 
v_sync_boxed_688_ = lean_unbox(v_sync_687_);
v_res_689_ = l_Std_Internal_IO_Async_AsyncTask_bind___redArg(v_x_684_, v_f_685_, v_prio_686_, v_sync_boxed_688_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bind(lean_object* v_00_u03b1_690_, lean_object* v_00_u03b2_691_, lean_object* v_x_692_, lean_object* v_f_693_, lean_object* v_prio_694_, uint8_t v_sync_695_){
_start:
{
lean_object* v___f_696_; lean_object* v___x_697_; 
v___f_696_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_696_, 0, v_f_693_);
v___x_697_ = lean_task_bind(v_x_692_, v___f_696_, v_prio_694_, v_sync_695_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bind___boxed(lean_object* v_00_u03b1_698_, lean_object* v_00_u03b2_699_, lean_object* v_x_700_, lean_object* v_f_701_, lean_object* v_prio_702_, lean_object* v_sync_703_){
_start:
{
uint8_t v_sync_boxed_704_; lean_object* v_res_705_; 
v_sync_boxed_704_ = lean_unbox(v_sync_703_);
v_res_705_ = l_Std_Internal_IO_Async_AsyncTask_bind(v_00_u03b1_698_, v_00_u03b2_699_, v_x_700_, v_f_701_, v_prio_702_, v_sync_boxed_704_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_map___redArg___lam__0(lean_object* v_f_706_, lean_object* v_x_707_){
_start:
{
if (lean_obj_tag(v_x_707_) == 0)
{
lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
lean_dec(v_f_706_);
v_a_708_ = lean_ctor_get(v_x_707_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v_x_707_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v_x_707_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v_x_707_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
else
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_724_; 
v_a_716_ = lean_ctor_get(v_x_707_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v_x_707_);
if (v_isSharedCheck_724_ == 0)
{
v___x_718_ = v_x_707_;
v_isShared_719_ = v_isSharedCheck_724_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v_x_707_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_724_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_720_; lean_object* v___x_722_; 
v___x_720_ = lean_apply_1(v_f_706_, v_a_716_);
if (v_isShared_719_ == 0)
{
lean_ctor_set(v___x_718_, 0, v___x_720_);
v___x_722_ = v___x_718_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_720_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_map___redArg(lean_object* v_f_725_, lean_object* v_x_726_, lean_object* v_prio_727_, uint8_t v_sync_728_){
_start:
{
lean_object* v___f_729_; lean_object* v___x_730_; 
v___f_729_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_729_, 0, v_f_725_);
v___x_730_ = lean_task_map(v___f_729_, v_x_726_, v_prio_727_, v_sync_728_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_map___redArg___boxed(lean_object* v_f_731_, lean_object* v_x_732_, lean_object* v_prio_733_, lean_object* v_sync_734_){
_start:
{
uint8_t v_sync_boxed_735_; lean_object* v_res_736_; 
v_sync_boxed_735_ = lean_unbox(v_sync_734_);
v_res_736_ = l_Std_Internal_IO_Async_AsyncTask_map___redArg(v_f_731_, v_x_732_, v_prio_733_, v_sync_boxed_735_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_map(lean_object* v_00_u03b1_737_, lean_object* v_00_u03b2_738_, lean_object* v_f_739_, lean_object* v_x_740_, lean_object* v_prio_741_, uint8_t v_sync_742_){
_start:
{
lean_object* v___f_743_; lean_object* v___x_744_; 
v___f_743_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_743_, 0, v_f_739_);
v___x_744_ = lean_task_map(v___f_743_, v_x_740_, v_prio_741_, v_sync_742_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_map___boxed(lean_object* v_00_u03b1_745_, lean_object* v_00_u03b2_746_, lean_object* v_f_747_, lean_object* v_x_748_, lean_object* v_prio_749_, lean_object* v_sync_750_){
_start:
{
uint8_t v_sync_boxed_751_; lean_object* v_res_752_; 
v_sync_boxed_751_ = lean_unbox(v_sync_750_);
v_res_752_ = l_Std_Internal_IO_Async_AsyncTask_map(v_00_u03b1_745_, v_00_u03b2_746_, v_f_747_, v_x_748_, v_prio_749_, v_sync_boxed_751_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bindIO___redArg___lam__0(lean_object* v_f_753_, lean_object* v_a_754_){
_start:
{
lean_object* v_a_757_; 
if (lean_obj_tag(v_a_754_) == 0)
{
lean_object* v_a_760_; 
lean_dec_ref(v_f_753_);
v_a_760_ = lean_ctor_get(v_a_754_, 0);
lean_inc(v_a_760_);
lean_dec_ref(v_a_754_);
v_a_757_ = v_a_760_;
goto v___jp_756_;
}
else
{
lean_object* v_a_761_; lean_object* v___x_762_; 
v_a_761_ = lean_ctor_get(v_a_754_, 0);
lean_inc(v_a_761_);
lean_dec_ref(v_a_754_);
v___x_762_ = lean_apply_2(v_f_753_, v_a_761_, lean_box(0));
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v_a_763_; 
v_a_763_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_a_763_);
lean_dec_ref(v___x_762_);
return v_a_763_;
}
else
{
lean_object* v_a_764_; 
v_a_764_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_a_764_);
lean_dec_ref(v___x_762_);
v_a_757_ = v_a_764_;
goto v___jp_756_;
}
}
v___jp_756_:
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_758_, 0, v_a_757_);
v___x_759_ = lean_task_pure(v___x_758_);
return v___x_759_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bindIO___redArg___lam__0___boxed(lean_object* v_f_765_, lean_object* v_a_766_, lean_object* v___y_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Std_Internal_IO_Async_AsyncTask_bindIO___redArg___lam__0(v_f_765_, v_a_766_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bindIO___redArg(lean_object* v_x_769_, lean_object* v_f_770_, lean_object* v_prio_771_, uint8_t v_sync_772_){
_start:
{
lean_object* v___f_774_; lean_object* v___x_775_; 
v___f_774_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_bindIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_774_, 0, v_f_770_);
v___x_775_ = lean_io_bind_task(v_x_769_, v___f_774_, v_prio_771_, v_sync_772_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bindIO___redArg___boxed(lean_object* v_x_776_, lean_object* v_f_777_, lean_object* v_prio_778_, lean_object* v_sync_779_, lean_object* v_a_780_){
_start:
{
uint8_t v_sync_boxed_781_; lean_object* v_res_782_; 
v_sync_boxed_781_ = lean_unbox(v_sync_779_);
v_res_782_ = l_Std_Internal_IO_Async_AsyncTask_bindIO___redArg(v_x_776_, v_f_777_, v_prio_778_, v_sync_boxed_781_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bindIO(lean_object* v_00_u03b1_783_, lean_object* v_00_u03b2_784_, lean_object* v_x_785_, lean_object* v_f_786_, lean_object* v_prio_787_, uint8_t v_sync_788_){
_start:
{
lean_object* v___f_790_; lean_object* v___x_791_; 
v___f_790_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_bindIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_790_, 0, v_f_786_);
v___x_791_ = lean_io_bind_task(v_x_785_, v___f_790_, v_prio_787_, v_sync_788_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_bindIO___boxed(lean_object* v_00_u03b1_792_, lean_object* v_00_u03b2_793_, lean_object* v_x_794_, lean_object* v_f_795_, lean_object* v_prio_796_, lean_object* v_sync_797_, lean_object* v_a_798_){
_start:
{
uint8_t v_sync_boxed_799_; lean_object* v_res_800_; 
v_sync_boxed_799_ = lean_unbox(v_sync_797_);
v_res_800_ = l_Std_Internal_IO_Async_AsyncTask_bindIO(v_00_u03b1_792_, v_00_u03b2_793_, v_x_794_, v_f_795_, v_prio_796_, v_sync_boxed_799_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapTaskIO___redArg(lean_object* v_f_801_, lean_object* v_x_802_, lean_object* v_prio_803_, uint8_t v_sync_804_){
_start:
{
lean_object* v___f_806_; lean_object* v___x_807_; 
v___f_806_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_806_, 0, v_f_801_);
v___x_807_ = lean_io_map_task(v___f_806_, v_x_802_, v_prio_803_, v_sync_804_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapTaskIO___redArg___boxed(lean_object* v_f_808_, lean_object* v_x_809_, lean_object* v_prio_810_, lean_object* v_sync_811_, lean_object* v_a_812_){
_start:
{
uint8_t v_sync_boxed_813_; lean_object* v_res_814_; 
v_sync_boxed_813_ = lean_unbox(v_sync_811_);
v_res_814_ = l_Std_Internal_IO_Async_AsyncTask_mapTaskIO___redArg(v_f_808_, v_x_809_, v_prio_810_, v_sync_boxed_813_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapTaskIO(lean_object* v_00_u03b1_815_, lean_object* v_00_u03b2_816_, lean_object* v_f_817_, lean_object* v_x_818_, lean_object* v_prio_819_, uint8_t v_sync_820_){
_start:
{
lean_object* v___f_822_; lean_object* v___x_823_; 
v___f_822_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_mapIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_822_, 0, v_f_817_);
v___x_823_ = lean_io_map_task(v___f_822_, v_x_818_, v_prio_819_, v_sync_820_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_mapTaskIO___boxed(lean_object* v_00_u03b1_824_, lean_object* v_00_u03b2_825_, lean_object* v_f_826_, lean_object* v_x_827_, lean_object* v_prio_828_, lean_object* v_sync_829_, lean_object* v_a_830_){
_start:
{
uint8_t v_sync_boxed_831_; lean_object* v_res_832_; 
v_sync_boxed_831_ = lean_unbox(v_sync_829_);
v_res_832_ = l_Std_Internal_IO_Async_AsyncTask_mapTaskIO(v_00_u03b1_824_, v_00_u03b2_825_, v_f_826_, v_x_827_, v_prio_828_, v_sync_boxed_831_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_block___redArg(lean_object* v_x_833_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = lean_task_get_own(v_x_833_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_843_; 
v_a_836_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_843_ == 0)
{
v___x_838_ = v___x_835_;
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_835_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_841_; 
if (v_isShared_839_ == 0)
{
lean_ctor_set_tag(v___x_838_, 1);
v___x_841_ = v___x_838_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_a_836_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
else
{
lean_object* v_a_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_851_; 
v_a_844_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_851_ == 0)
{
v___x_846_ = v___x_835_;
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_a_844_);
lean_dec(v___x_835_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_849_; 
if (v_isShared_847_ == 0)
{
lean_ctor_set_tag(v___x_846_, 0);
v___x_849_ = v___x_846_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_a_844_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_block___redArg___boxed(lean_object* v_x_852_, lean_object* v_a_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l_Std_Internal_IO_Async_AsyncTask_block___redArg(v_x_852_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_block(lean_object* v_00_u03b1_855_, lean_object* v_x_856_){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = l_Std_Internal_IO_Async_AsyncTask_block___redArg(v_x_856_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_block___boxed(lean_object* v_00_u03b1_859_, lean_object* v_x_860_, lean_object* v_a_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l_Std_Internal_IO_Async_AsyncTask_block(v_00_u03b1_859_, v_x_860_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg___lam__0(lean_object* v_error_863_, lean_object* v_x_864_){
_start:
{
if (lean_obj_tag(v_x_864_) == 0)
{
lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_865_ = lean_mk_io_user_error(v_error_863_);
v___x_866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_866_, 0, v___x_865_);
return v___x_866_;
}
else
{
lean_object* v_val_867_; 
lean_dec_ref(v_error_863_);
v_val_867_ = lean_ctor_get(v_x_864_, 0);
lean_inc(v_val_867_);
return v_val_867_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg___lam__0___boxed(lean_object* v_error_868_, lean_object* v_x_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg___lam__0(v_error_868_, v_x_869_);
lean_dec(v_x_869_);
return v_res_870_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg(lean_object* v_x_871_, lean_object* v_error_872_){
_start:
{
lean_object* v___f_873_; lean_object* v___x_874_; lean_object* v___x_875_; uint8_t v___x_876_; lean_object* v___x_877_; 
v___f_873_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_873_, 0, v_error_872_);
v___x_874_ = lean_io_promise_result_opt(v_x_871_);
v___x_875_ = lean_unsigned_to_nat(0u);
v___x_876_ = 0;
v___x_877_ = lean_task_map(v___f_873_, v___x_874_, v___x_875_, v___x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg___boxed(lean_object* v_x_878_, lean_object* v_error_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg(v_x_878_, v_error_879_);
lean_dec(v_x_878_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPromise(lean_object* v_00_u03b1_881_, lean_object* v_x_882_, lean_object* v_error_883_){
_start:
{
lean_object* v___f_884_; lean_object* v___x_885_; lean_object* v___x_886_; uint8_t v___x_887_; lean_object* v___x_888_; 
v___f_884_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_884_, 0, v_error_883_);
v___x_885_ = lean_io_promise_result_opt(v_x_882_);
v___x_886_ = lean_unsigned_to_nat(0u);
v___x_887_ = 0;
v___x_888_ = lean_task_map(v___f_884_, v___x_885_, v___x_886_, v___x_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPromise___boxed(lean_object* v_00_u03b1_889_, lean_object* v_x_890_, lean_object* v_error_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Std_Internal_IO_Async_AsyncTask_ofPromise(v_00_u03b1_889_, v_x_890_, v_error_891_);
lean_dec(v_x_890_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPurePromise___redArg___lam__0(lean_object* v_error_893_, lean_object* v_x_894_){
_start:
{
if (lean_obj_tag(v_x_894_) == 0)
{
lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_895_ = lean_mk_io_user_error(v_error_893_);
v___x_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_896_, 0, v___x_895_);
return v___x_896_;
}
else
{
lean_object* v_val_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_904_; 
lean_dec_ref(v_error_893_);
v_val_897_ = lean_ctor_get(v_x_894_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v_x_894_);
if (v_isSharedCheck_904_ == 0)
{
v___x_899_ = v_x_894_;
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_val_897_);
lean_dec(v_x_894_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_902_; 
if (v_isShared_900_ == 0)
{
v___x_902_ = v___x_899_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_val_897_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPurePromise___redArg(lean_object* v_x_905_, lean_object* v_error_906_){
_start:
{
lean_object* v___f_907_; lean_object* v___x_908_; lean_object* v___x_909_; uint8_t v___x_910_; lean_object* v___x_911_; 
v___f_907_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_907_, 0, v_error_906_);
v___x_908_ = lean_io_promise_result_opt(v_x_905_);
v___x_909_ = lean_unsigned_to_nat(0u);
v___x_910_ = 1;
v___x_911_ = lean_task_map(v___f_907_, v___x_908_, v___x_909_, v___x_910_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPurePromise___redArg___boxed(lean_object* v_x_912_, lean_object* v_error_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_Std_Internal_IO_Async_AsyncTask_ofPurePromise___redArg(v_x_912_, v_error_913_);
lean_dec(v_x_912_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPurePromise(lean_object* v_00_u03b1_915_, lean_object* v_x_916_, lean_object* v_error_917_){
_start:
{
lean_object* v___f_918_; lean_object* v___x_919_; lean_object* v___x_920_; uint8_t v___x_921_; lean_object* v___x_922_; 
v___f_918_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_918_, 0, v_error_917_);
v___x_919_ = lean_io_promise_result_opt(v_x_916_);
v___x_920_ = lean_unsigned_to_nat(0u);
v___x_921_ = 1;
v___x_922_ = lean_task_map(v___f_918_, v___x_919_, v___x_920_, v___x_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_ofPurePromise___boxed(lean_object* v_00_u03b1_923_, lean_object* v_x_924_, lean_object* v_error_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = l_Std_Internal_IO_Async_AsyncTask_ofPurePromise(v_00_u03b1_923_, v_x_924_, v_error_925_);
lean_dec(v_x_924_);
return v_res_926_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IO_Async_AsyncTask_getState___redArg(lean_object* v_x_927_){
_start:
{
uint8_t v___x_929_; 
v___x_929_ = lean_io_get_task_state(v_x_927_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_getState___redArg___boxed(lean_object* v_x_930_, lean_object* v_a_931_){
_start:
{
uint8_t v_res_932_; lean_object* v_r_933_; 
v_res_932_ = l_Std_Internal_IO_Async_AsyncTask_getState___redArg(v_x_930_);
lean_dec_ref(v_x_930_);
v_r_933_ = lean_box(v_res_932_);
return v_r_933_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IO_Async_AsyncTask_getState(lean_object* v_00_u03b1_934_, lean_object* v_x_935_){
_start:
{
uint8_t v___x_937_; 
v___x_937_ = lean_io_get_task_state(v_x_935_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_AsyncTask_getState___boxed(lean_object* v_00_u03b1_938_, lean_object* v_x_939_, lean_object* v_a_940_){
_start:
{
uint8_t v_res_941_; lean_object* v_r_942_; 
v_res_941_ = l_Std_Internal_IO_Async_AsyncTask_getState(v_00_u03b1_938_, v_x_939_);
lean_dec_ref(v_x_939_);
v_r_942_ = lean_box(v_res_941_);
return v_r_942_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorIdx___redArg(lean_object* v_x_943_){
_start:
{
if (lean_obj_tag(v_x_943_) == 0)
{
lean_object* v___x_944_; 
v___x_944_ = lean_unsigned_to_nat(0u);
return v___x_944_;
}
else
{
lean_object* v___x_945_; 
v___x_945_ = lean_unsigned_to_nat(1u);
return v___x_945_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorIdx___redArg___boxed(lean_object* v_x_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Std_Internal_IO_Async_MaybeTask_ctorIdx___redArg(v_x_946_);
lean_dec_ref(v_x_946_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorIdx(lean_object* v_00_u03b1_948_, lean_object* v_x_949_){
_start:
{
lean_object* v___x_950_; 
v___x_950_ = l_Std_Internal_IO_Async_MaybeTask_ctorIdx___redArg(v_x_949_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorIdx___boxed(lean_object* v_00_u03b1_951_, lean_object* v_x_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Std_Internal_IO_Async_MaybeTask_ctorIdx(v_00_u03b1_951_, v_x_952_);
lean_dec_ref(v_x_952_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorElim___redArg(lean_object* v_t_954_, lean_object* v_k_955_){
_start:
{
if (lean_obj_tag(v_t_954_) == 0)
{
lean_object* v_a_956_; lean_object* v___x_957_; 
v_a_956_ = lean_ctor_get(v_t_954_, 0);
lean_inc(v_a_956_);
lean_dec_ref(v_t_954_);
v___x_957_ = lean_apply_1(v_k_955_, v_a_956_);
return v___x_957_;
}
else
{
lean_object* v_a_958_; lean_object* v___x_959_; 
v_a_958_ = lean_ctor_get(v_t_954_, 0);
lean_inc_ref(v_a_958_);
lean_dec_ref(v_t_954_);
v___x_959_ = lean_apply_1(v_k_955_, v_a_958_);
return v___x_959_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorElim(lean_object* v_00_u03b1_960_, lean_object* v_motive_961_, lean_object* v_ctorIdx_962_, lean_object* v_t_963_, lean_object* v_h_964_, lean_object* v_k_965_){
_start:
{
lean_object* v___x_966_; 
v___x_966_ = l_Std_Internal_IO_Async_MaybeTask_ctorElim___redArg(v_t_963_, v_k_965_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ctorElim___boxed(lean_object* v_00_u03b1_967_, lean_object* v_motive_968_, lean_object* v_ctorIdx_969_, lean_object* v_t_970_, lean_object* v_h_971_, lean_object* v_k_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_Std_Internal_IO_Async_MaybeTask_ctorElim(v_00_u03b1_967_, v_motive_968_, v_ctorIdx_969_, v_t_970_, v_h_971_, v_k_972_);
lean_dec(v_ctorIdx_969_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_pure_elim___redArg(lean_object* v_t_974_, lean_object* v_pure_975_){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = l_Std_Internal_IO_Async_MaybeTask_ctorElim___redArg(v_t_974_, v_pure_975_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_pure_elim(lean_object* v_00_u03b1_977_, lean_object* v_motive_978_, lean_object* v_t_979_, lean_object* v_h_980_, lean_object* v_pure_981_){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = l_Std_Internal_IO_Async_MaybeTask_ctorElim___redArg(v_t_979_, v_pure_981_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ofTask_elim___redArg(lean_object* v_t_983_, lean_object* v_ofTask_984_){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = l_Std_Internal_IO_Async_MaybeTask_ctorElim___redArg(v_t_983_, v_ofTask_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_ofTask_elim(lean_object* v_00_u03b1_986_, lean_object* v_motive_987_, lean_object* v_t_988_, lean_object* v_h_989_, lean_object* v_ofTask_990_){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = l_Std_Internal_IO_Async_MaybeTask_ctorElim___redArg(v_t_988_, v_ofTask_990_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_toTask___redArg(lean_object* v_x_992_){
_start:
{
if (lean_obj_tag(v_x_992_) == 0)
{
lean_object* v_a_993_; lean_object* v___x_994_; 
v_a_993_ = lean_ctor_get(v_x_992_, 0);
lean_inc(v_a_993_);
lean_dec_ref(v_x_992_);
v___x_994_ = lean_task_pure(v_a_993_);
return v___x_994_;
}
else
{
lean_object* v_a_995_; 
v_a_995_ = lean_ctor_get(v_x_992_, 0);
lean_inc_ref(v_a_995_);
lean_dec_ref(v_x_992_);
return v_a_995_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_toTask(lean_object* v_00_u03b1_996_, lean_object* v_x_997_){
_start:
{
if (lean_obj_tag(v_x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_999_; 
v_a_998_ = lean_ctor_get(v_x_997_, 0);
lean_inc(v_a_998_);
lean_dec_ref(v_x_997_);
v___x_999_ = lean_task_pure(v_a_998_);
return v___x_999_;
}
else
{
lean_object* v_a_1000_; 
v_a_1000_ = lean_ctor_get(v_x_997_, 0);
lean_inc_ref(v_a_1000_);
lean_dec_ref(v_x_997_);
return v_a_1000_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_get___redArg(lean_object* v_x_1001_){
_start:
{
if (lean_obj_tag(v_x_1001_) == 0)
{
lean_object* v_a_1002_; 
v_a_1002_ = lean_ctor_get(v_x_1001_, 0);
lean_inc(v_a_1002_);
lean_dec_ref(v_x_1001_);
return v_a_1002_;
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1004_; 
v_a_1003_ = lean_ctor_get(v_x_1001_, 0);
lean_inc_ref(v_a_1003_);
lean_dec_ref(v_x_1001_);
v___x_1004_ = lean_task_get_own(v_a_1003_);
return v___x_1004_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_get(lean_object* v_00_u03b1_1005_, lean_object* v_x_1006_){
_start:
{
if (lean_obj_tag(v_x_1006_) == 0)
{
lean_object* v_a_1007_; 
v_a_1007_ = lean_ctor_get(v_x_1006_, 0);
lean_inc(v_a_1007_);
lean_dec_ref(v_x_1006_);
return v_a_1007_;
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1009_; 
v_a_1008_ = lean_ctor_get(v_x_1006_, 0);
lean_inc_ref(v_a_1008_);
lean_dec_ref(v_x_1006_);
v___x_1009_ = lean_task_get_own(v_a_1008_);
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_map___redArg(lean_object* v_f_1010_, lean_object* v_prio_1011_, uint8_t v_sync_1012_, lean_object* v_x_1013_){
_start:
{
if (lean_obj_tag(v_x_1013_) == 0)
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1022_; 
lean_dec(v_prio_1011_);
v_a_1014_ = lean_ctor_get(v_x_1013_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v_x_1013_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1016_ = v_x_1013_;
v_isShared_1017_ = v_isSharedCheck_1022_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v_x_1013_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1022_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1018_; lean_object* v___x_1020_; 
v___x_1018_ = lean_apply_1(v_f_1010_, v_a_1014_);
if (v_isShared_1017_ == 0)
{
lean_ctor_set(v___x_1016_, 0, v___x_1018_);
v___x_1020_ = v___x_1016_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v___x_1018_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
else
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1031_; 
v_a_1023_ = lean_ctor_get(v_x_1013_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v_x_1013_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1025_ = v_x_1013_;
v_isShared_1026_ = v_isSharedCheck_1031_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v_x_1013_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1031_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1027_; lean_object* v___x_1029_; 
v___x_1027_ = lean_task_map(v_f_1010_, v_a_1023_, v_prio_1011_, v_sync_1012_);
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 0, v___x_1027_);
v___x_1029_ = v___x_1025_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1027_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_map___redArg___boxed(lean_object* v_f_1032_, lean_object* v_prio_1033_, lean_object* v_sync_1034_, lean_object* v_x_1035_){
_start:
{
uint8_t v_sync_boxed_1036_; lean_object* v_res_1037_; 
v_sync_boxed_1036_ = lean_unbox(v_sync_1034_);
v_res_1037_ = l_Std_Internal_IO_Async_MaybeTask_map___redArg(v_f_1032_, v_prio_1033_, v_sync_boxed_1036_, v_x_1035_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_map(lean_object* v_00_u03b1_1038_, lean_object* v_00_u03b2_1039_, lean_object* v_f_1040_, lean_object* v_prio_1041_, uint8_t v_sync_1042_, lean_object* v_x_1043_){
_start:
{
if (lean_obj_tag(v_x_1043_) == 0)
{
lean_object* v_a_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1052_; 
lean_dec(v_prio_1041_);
v_a_1044_ = lean_ctor_get(v_x_1043_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v_x_1043_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1046_ = v_x_1043_;
v_isShared_1047_ = v_isSharedCheck_1052_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_a_1044_);
lean_dec(v_x_1043_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1052_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1048_; lean_object* v___x_1050_; 
v___x_1048_ = lean_apply_1(v_f_1040_, v_a_1044_);
if (v_isShared_1047_ == 0)
{
lean_ctor_set(v___x_1046_, 0, v___x_1048_);
v___x_1050_ = v___x_1046_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1061_; 
v_a_1053_ = lean_ctor_get(v_x_1043_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v_x_1043_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1055_ = v_x_1043_;
v_isShared_1056_ = v_isSharedCheck_1061_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v_x_1043_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1061_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1057_; lean_object* v___x_1059_; 
v___x_1057_ = lean_task_map(v_f_1040_, v_a_1053_, v_prio_1041_, v_sync_1042_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 0, v___x_1057_);
v___x_1059_ = v___x_1055_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1057_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_map___boxed(lean_object* v_00_u03b1_1062_, lean_object* v_00_u03b2_1063_, lean_object* v_f_1064_, lean_object* v_prio_1065_, lean_object* v_sync_1066_, lean_object* v_x_1067_){
_start:
{
uint8_t v_sync_boxed_1068_; lean_object* v_res_1069_; 
v_sync_boxed_1068_ = lean_unbox(v_sync_1066_);
v_res_1069_ = l_Std_Internal_IO_Async_MaybeTask_map(v_00_u03b1_1062_, v_00_u03b2_1063_, v_f_1064_, v_prio_1065_, v_sync_boxed_1068_, v_x_1067_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_bind___redArg___lam__0(lean_object* v_f_1070_, lean_object* v_x_1071_){
_start:
{
lean_object* v___x_1072_; 
v___x_1072_ = lean_apply_1(v_f_1070_, v_x_1071_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v_a_1073_; lean_object* v___x_1074_; 
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
lean_inc(v_a_1073_);
lean_dec_ref(v___x_1072_);
v___x_1074_ = lean_task_pure(v_a_1073_);
return v___x_1074_;
}
else
{
lean_object* v_a_1075_; 
v_a_1075_ = lean_ctor_get(v___x_1072_, 0);
lean_inc_ref(v_a_1075_);
lean_dec_ref(v___x_1072_);
return v_a_1075_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_bind___redArg(lean_object* v_t_1076_, lean_object* v_f_1077_, lean_object* v_prio_1078_, uint8_t v_sync_1079_){
_start:
{
if (lean_obj_tag(v_t_1076_) == 0)
{
lean_object* v_a_1080_; lean_object* v___x_1081_; 
lean_dec(v_prio_1078_);
v_a_1080_ = lean_ctor_get(v_t_1076_, 0);
lean_inc(v_a_1080_);
lean_dec_ref(v_t_1076_);
v___x_1081_ = lean_apply_1(v_f_1077_, v_a_1080_);
return v___x_1081_;
}
else
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1091_; 
v_a_1082_ = lean_ctor_get(v_t_1076_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_t_1076_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1084_ = v_t_1076_;
v_isShared_1085_ = v_isSharedCheck_1091_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v_t_1076_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1091_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___f_1086_; lean_object* v___x_1087_; lean_object* v___x_1089_; 
v___f_1086_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_MaybeTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1086_, 0, v_f_1077_);
v___x_1087_ = lean_task_bind(v_a_1082_, v___f_1086_, v_prio_1078_, v_sync_1079_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set(v___x_1084_, 0, v___x_1087_);
v___x_1089_ = v___x_1084_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1087_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_bind___redArg___boxed(lean_object* v_t_1092_, lean_object* v_f_1093_, lean_object* v_prio_1094_, lean_object* v_sync_1095_){
_start:
{
uint8_t v_sync_boxed_1096_; lean_object* v_res_1097_; 
v_sync_boxed_1096_ = lean_unbox(v_sync_1095_);
v_res_1097_ = l_Std_Internal_IO_Async_MaybeTask_bind___redArg(v_t_1092_, v_f_1093_, v_prio_1094_, v_sync_boxed_1096_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_bind(lean_object* v_00_u03b1_1098_, lean_object* v_00_u03b2_1099_, lean_object* v_t_1100_, lean_object* v_f_1101_, lean_object* v_prio_1102_, uint8_t v_sync_1103_){
_start:
{
if (lean_obj_tag(v_t_1100_) == 0)
{
lean_object* v_a_1104_; lean_object* v___x_1105_; 
lean_dec(v_prio_1102_);
v_a_1104_ = lean_ctor_get(v_t_1100_, 0);
lean_inc(v_a_1104_);
lean_dec_ref(v_t_1100_);
v___x_1105_ = lean_apply_1(v_f_1101_, v_a_1104_);
return v___x_1105_;
}
else
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1115_; 
v_a_1106_ = lean_ctor_get(v_t_1100_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v_t_1100_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1108_ = v_t_1100_;
v_isShared_1109_ = v_isSharedCheck_1115_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v_t_1100_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1115_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___f_1110_; lean_object* v___x_1111_; lean_object* v___x_1113_; 
v___f_1110_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_MaybeTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1110_, 0, v_f_1101_);
v___x_1111_ = lean_task_bind(v_a_1106_, v___f_1110_, v_prio_1102_, v_sync_1103_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 0, v___x_1111_);
v___x_1113_ = v___x_1108_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1111_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_bind___boxed(lean_object* v_00_u03b1_1116_, lean_object* v_00_u03b2_1117_, lean_object* v_t_1118_, lean_object* v_f_1119_, lean_object* v_prio_1120_, lean_object* v_sync_1121_){
_start:
{
uint8_t v_sync_boxed_1122_; lean_object* v_res_1123_; 
v_sync_boxed_1122_ = lean_unbox(v_sync_1121_);
v_res_1123_ = l_Std_Internal_IO_Async_MaybeTask_bind(v_00_u03b1_1116_, v_00_u03b2_1117_, v_t_1118_, v_f_1119_, v_prio_1120_, v_sync_boxed_1122_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___lam__0(lean_object* v_x_1124_){
_start:
{
if (lean_obj_tag(v_x_1124_) == 0)
{
lean_object* v_a_1125_; lean_object* v___x_1126_; 
v_a_1125_ = lean_ctor_get(v_x_1124_, 0);
lean_inc(v_a_1125_);
lean_dec_ref(v_x_1124_);
v___x_1126_ = lean_task_pure(v_a_1125_);
return v___x_1126_;
}
else
{
lean_object* v_a_1127_; 
v_a_1127_ = lean_ctor_get(v_x_1124_, 0);
lean_inc_ref(v_a_1127_);
lean_dec_ref(v_x_1124_);
return v_a_1127_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg(lean_object* v_t_1129_){
_start:
{
lean_object* v___f_1130_; lean_object* v___x_1131_; uint8_t v___x_1132_; lean_object* v___x_1133_; 
v___f_1130_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1131_ = lean_unsigned_to_nat(0u);
v___x_1132_ = 1;
v___x_1133_ = lean_task_bind(v_t_1129_, v___f_1130_, v___x_1131_, v___x_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_joinTask(lean_object* v_00_u03b1_1134_, lean_object* v_t_1135_){
_start:
{
lean_object* v___f_1136_; lean_object* v___x_1137_; uint8_t v___x_1138_; lean_object* v___x_1139_; 
v___f_1136_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1137_ = lean_unsigned_to_nat(0u);
v___x_1138_ = 1;
v___x_1139_ = lean_task_bind(v_t_1135_, v___f_1136_, v___x_1137_, v___x_1138_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instFunctor___lam__0(lean_object* v_00_u03b1_1140_, lean_object* v_00_u03b2_1141_, lean_object* v_f_1142_, lean_object* v___y_1143_){
_start:
{
if (lean_obj_tag(v___y_1143_) == 0)
{
lean_object* v_a_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1152_; 
v_a_1144_ = lean_ctor_get(v___y_1143_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___y_1143_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1146_ = v___y_1143_;
v_isShared_1147_ = v_isSharedCheck_1152_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_a_1144_);
lean_dec(v___y_1143_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1152_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1148_; lean_object* v___x_1150_; 
v___x_1148_ = lean_apply_1(v_f_1142_, v_a_1144_);
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v___x_1148_);
v___x_1150_ = v___x_1146_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v___x_1148_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
else
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1163_; 
v_a_1153_ = lean_ctor_get(v___y_1143_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___y_1143_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1155_ = v___y_1143_;
v_isShared_1156_ = v_isSharedCheck_1163_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___y_1143_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1163_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1157_; uint8_t v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1161_; 
v___x_1157_ = lean_unsigned_to_nat(0u);
v___x_1158_ = 0;
v___x_1159_ = lean_task_map(v_f_1142_, v_a_1153_, v___x_1157_, v___x_1158_);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 0, v___x_1159_);
v___x_1161_ = v___x_1155_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v___x_1159_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instFunctor___lam__1(lean_object* v___f_1164_, lean_object* v_00_u03b1_1165_, lean_object* v_00_u03b2_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_){
_start:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1169_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_1169_, 0, lean_box(0));
lean_closure_set(v___x_1169_, 1, lean_box(0));
lean_closure_set(v___x_1169_, 2, v___y_1167_);
v___x_1170_ = lean_apply_4(v___f_1164_, lean_box(0), lean_box(0), v___x_1169_, v___y_1168_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__0(lean_object* v_00_u03b1_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v___x_1180_; 
v___x_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1180_, 0, v___y_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__1(lean_object* v_x_1181_, lean_object* v_y_1182_){
_start:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1183_ = lean_box(0);
v___x_1184_ = lean_apply_1(v_x_1181_, v___x_1183_);
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1193_; 
v_a_1185_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1187_ = v___x_1184_;
v_isShared_1188_ = v_isSharedCheck_1193_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1184_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1193_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1189_; lean_object* v___x_1191_; 
v___x_1189_ = lean_apply_1(v_y_1182_, v_a_1185_);
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 0, v___x_1189_);
v___x_1191_ = v___x_1187_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v___x_1189_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1204_; 
v_a_1194_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1196_ = v___x_1184_;
v_isShared_1197_ = v_isSharedCheck_1204_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1184_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1204_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1198_; uint8_t v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1202_; 
v___x_1198_ = lean_unsigned_to_nat(0u);
v___x_1199_ = 0;
v___x_1200_ = lean_task_map(v_y_1182_, v_a_1194_, v___x_1198_, v___x_1199_);
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 0, v___x_1200_);
v___x_1202_ = v___x_1196_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v___x_1200_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__2(lean_object* v___f_1205_, lean_object* v_x_1206_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = lean_apply_1(v___f_1205_, v_x_1206_);
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v_a_1208_; lean_object* v___x_1209_; 
v_a_1208_ = lean_ctor_get(v___x_1207_, 0);
lean_inc(v_a_1208_);
lean_dec_ref(v___x_1207_);
v___x_1209_ = lean_task_pure(v_a_1208_);
return v___x_1209_;
}
else
{
lean_object* v_a_1210_; 
v_a_1210_ = lean_ctor_get(v___x_1207_, 0);
lean_inc_ref(v_a_1210_);
lean_dec_ref(v___x_1207_);
return v_a_1210_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__3(lean_object* v_00_u03b1_1211_, lean_object* v_00_u03b2_1212_, lean_object* v_f_1213_, lean_object* v_x_1214_){
_start:
{
lean_object* v___f_1215_; 
lean_inc_ref(v_x_1214_);
v___f_1215_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__1), 2, 1);
lean_closure_set(v___f_1215_, 0, v_x_1214_);
if (lean_obj_tag(v_f_1213_) == 0)
{
lean_object* v_a_1216_; lean_object* v___x_1217_; 
lean_dec_ref(v___f_1215_);
v_a_1216_ = lean_ctor_get(v_f_1213_, 0);
lean_inc(v_a_1216_);
lean_dec_ref(v_f_1213_);
v___x_1217_ = l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__1(v_x_1214_, v_a_1216_);
return v___x_1217_;
}
else
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1229_; 
lean_dec_ref(v_x_1214_);
v_a_1218_ = lean_ctor_get(v_f_1213_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v_f_1213_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1220_ = v_f_1213_;
v_isShared_1221_ = v_isSharedCheck_1229_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v_f_1213_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1229_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___f_1222_; lean_object* v___x_1223_; uint8_t v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1227_; 
v___f_1222_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__2), 2, 1);
lean_closure_set(v___f_1222_, 0, v___f_1215_);
v___x_1223_ = lean_unsigned_to_nat(0u);
v___x_1224_ = 0;
v___x_1225_ = lean_task_bind(v_a_1218_, v___f_1222_, v___x_1223_, v___x_1224_);
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 0, v___x_1225_);
v___x_1227_ = v___x_1220_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__5(lean_object* v_00_u03b1_1230_, lean_object* v_00_u03b2_1231_, lean_object* v_t_1232_, lean_object* v_f_1233_){
_start:
{
if (lean_obj_tag(v_t_1232_) == 0)
{
lean_object* v_a_1234_; lean_object* v___x_1235_; 
v_a_1234_ = lean_ctor_get(v_t_1232_, 0);
lean_inc(v_a_1234_);
lean_dec_ref(v_t_1232_);
v___x_1235_ = lean_apply_1(v_f_1233_, v_a_1234_);
return v___x_1235_;
}
else
{
lean_object* v_a_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1247_; 
v_a_1236_ = lean_ctor_get(v_t_1232_, 0);
v_isSharedCheck_1247_ = !lean_is_exclusive(v_t_1232_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1238_ = v_t_1232_;
v_isShared_1239_ = v_isSharedCheck_1247_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_a_1236_);
lean_dec(v_t_1232_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1247_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___f_1240_; lean_object* v___x_1241_; uint8_t v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1245_; 
v___f_1240_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_MaybeTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1240_, 0, v_f_1233_);
v___x_1241_ = lean_unsigned_to_nat(0u);
v___x_1242_ = 0;
v___x_1243_ = lean_task_bind(v_a_1236_, v___f_1240_, v___x_1241_, v___x_1242_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 0, v___x_1243_);
v___x_1245_ = v___x_1238_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1243_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
return v___x_1245_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__4(lean_object* v_a_1248_, lean_object* v_x_1249_){
_start:
{
lean_object* v___x_1250_; 
v___x_1250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1250_, 0, v_a_1248_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__4___boxed(lean_object* v_a_1251_, lean_object* v_x_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__4(v_a_1251_, v_x_1252_);
lean_dec(v_x_1252_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__6(lean_object* v_y_1254_, lean_object* v___f_1255_, lean_object* v_a_1256_){
_start:
{
lean_object* v___f_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___f_1257_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__4___boxed), 2, 1);
lean_closure_set(v___f_1257_, 0, v_a_1256_);
v___x_1258_ = lean_box(0);
v___x_1259_ = lean_apply_1(v_y_1254_, v___x_1258_);
v___x_1260_ = lean_apply_4(v___f_1255_, lean_box(0), lean_box(0), v___x_1259_, v___f_1257_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__7(lean_object* v___f_1261_, lean_object* v_00_u03b1_1262_, lean_object* v_00_u03b2_1263_, lean_object* v_x_1264_, lean_object* v_y_1265_){
_start:
{
lean_object* v___f_1266_; lean_object* v___x_1267_; 
lean_inc_ref(v___f_1261_);
v___f_1266_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__6), 3, 2);
lean_closure_set(v___f_1266_, 0, v_y_1265_);
lean_closure_set(v___f_1266_, 1, v___f_1261_);
v___x_1267_ = lean_apply_4(v___f_1261_, lean_box(0), lean_box(0), v_x_1264_, v___f_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__8(lean_object* v_y_1268_, lean_object* v_x_1269_){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1270_ = lean_box(0);
v___x_1271_ = lean_apply_1(v_y_1268_, v___x_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__8___boxed(lean_object* v_y_1272_, lean_object* v_x_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__8(v_y_1272_, v_x_1273_);
lean_dec(v_x_1273_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__9(lean_object* v___f_1275_, lean_object* v_x_1276_){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = lean_apply_1(v___f_1275_, v_x_1276_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v_a_1278_; lean_object* v___x_1279_; 
v_a_1278_ = lean_ctor_get(v___x_1277_, 0);
lean_inc(v_a_1278_);
lean_dec_ref(v___x_1277_);
v___x_1279_ = lean_task_pure(v_a_1278_);
return v___x_1279_;
}
else
{
lean_object* v_a_1280_; 
v_a_1280_ = lean_ctor_get(v___x_1277_, 0);
lean_inc_ref(v_a_1280_);
lean_dec_ref(v___x_1277_);
return v_a_1280_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__10(lean_object* v_00_u03b1_1281_, lean_object* v_00_u03b2_1282_, lean_object* v_x_1283_, lean_object* v_y_1284_){
_start:
{
lean_object* v___f_1285_; 
lean_inc_ref(v_y_1284_);
v___f_1285_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__8___boxed), 2, 1);
lean_closure_set(v___f_1285_, 0, v_y_1284_);
if (lean_obj_tag(v_x_1283_) == 0)
{
lean_object* v_a_1286_; lean_object* v___x_1287_; 
lean_dec_ref(v___f_1285_);
v_a_1286_ = lean_ctor_get(v_x_1283_, 0);
lean_inc(v_a_1286_);
lean_dec_ref(v_x_1283_);
v___x_1287_ = l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__8(v_y_1284_, v_a_1286_);
lean_dec(v_a_1286_);
return v___x_1287_;
}
else
{
lean_object* v_a_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1299_; 
lean_dec_ref(v_y_1284_);
v_a_1288_ = lean_ctor_get(v_x_1283_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v_x_1283_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1290_ = v_x_1283_;
v_isShared_1291_ = v_isSharedCheck_1299_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_a_1288_);
lean_dec(v_x_1283_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1299_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___f_1292_; lean_object* v___x_1293_; uint8_t v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1297_; 
v___f_1292_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_MaybeTask_instMonad___lam__9), 2, 1);
lean_closure_set(v___f_1292_, 0, v___f_1285_);
v___x_1293_ = lean_unsigned_to_nat(0u);
v___x_1294_ = 0;
v___x_1295_ = lean_task_bind(v_a_1288_, v___f_1292_, v___x_1293_, v___x_1294_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set(v___x_1290_, 0, v___x_1295_);
v___x_1297_ = v___x_1290_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1295_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_mk___redArg(lean_object* v_x_1316_){
_start:
{
lean_object* v___x_1318_; 
v___x_1318_ = lean_apply_1(v_x_1316_, lean_box(0));
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_mk___redArg___boxed(lean_object* v_x_1319_, lean_object* v_a_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l_Std_Internal_IO_Async_BaseAsync_mk___redArg(v_x_1319_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_mk(lean_object* v_00_u03b1_1322_, lean_object* v_x_1323_){
_start:
{
lean_object* v___x_1325_; 
v___x_1325_ = lean_apply_1(v_x_1323_, lean_box(0));
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_mk___boxed(lean_object* v_00_u03b1_1326_, lean_object* v_x_1327_, lean_object* v_a_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l_Std_Internal_IO_Async_BaseAsync_mk(v_00_u03b1_1326_, v_x_1327_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___redArg(lean_object* v_x_1330_){
_start:
{
lean_object* v___x_1332_; 
v___x_1332_ = lean_apply_1(v_x_1330_, lean_box(0));
return v___x_1332_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___redArg___boxed(lean_object* v_x_1333_, lean_object* v_a_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___redArg(v_x_1333_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO(lean_object* v_00_u03b1_1336_, lean_object* v_x_1337_){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = lean_apply_1(v_x_1337_, lean_box(0));
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed(lean_object* v_00_u03b1_1340_, lean_object* v_x_1341_, lean_object* v_a_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO(v_00_u03b1_1340_, v_x_1341_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toBaseIO___redArg(lean_object* v_x_1344_){
_start:
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_apply_1(v_x_1344_, lean_box(0));
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v_a_1347_; lean_object* v___x_1348_; 
v_a_1347_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_a_1347_);
lean_dec_ref(v___x_1346_);
v___x_1348_ = lean_task_pure(v_a_1347_);
return v___x_1348_;
}
else
{
lean_object* v_a_1349_; 
v_a_1349_ = lean_ctor_get(v___x_1346_, 0);
lean_inc_ref(v_a_1349_);
lean_dec_ref(v___x_1346_);
return v_a_1349_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toBaseIO___redArg___boxed(lean_object* v_x_1350_, lean_object* v_a_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_Std_Internal_IO_Async_BaseAsync_toBaseIO___redArg(v_x_1350_);
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toBaseIO(lean_object* v_00_u03b1_1353_, lean_object* v_x_1354_){
_start:
{
lean_object* v___x_1356_; 
v___x_1356_ = lean_apply_1(v_x_1354_, lean_box(0));
if (lean_obj_tag(v___x_1356_) == 0)
{
lean_object* v_a_1357_; lean_object* v___x_1358_; 
v_a_1357_ = lean_ctor_get(v___x_1356_, 0);
lean_inc(v_a_1357_);
lean_dec_ref(v___x_1356_);
v___x_1358_ = lean_task_pure(v_a_1357_);
return v___x_1358_;
}
else
{
lean_object* v_a_1359_; 
v_a_1359_ = lean_ctor_get(v___x_1356_, 0);
lean_inc_ref(v_a_1359_);
lean_dec_ref(v___x_1356_);
return v_a_1359_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_toBaseIO___boxed(lean_object* v_00_u03b1_1360_, lean_object* v_x_1361_, lean_object* v_a_1362_){
_start:
{
lean_object* v_res_1363_; 
v_res_1363_ = l_Std_Internal_IO_Async_BaseAsync_toBaseIO(v_00_u03b1_1360_, v_x_1361_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofTask___redArg(lean_object* v_x_1364_){
_start:
{
lean_object* v___x_1366_; 
v___x_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1366_, 0, v_x_1364_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofTask___redArg___boxed(lean_object* v_x_1367_, lean_object* v_a_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l_Std_Internal_IO_Async_BaseAsync_ofTask___redArg(v_x_1367_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofTask(lean_object* v_00_u03b1_1370_, lean_object* v_x_1371_){
_start:
{
lean_object* v___x_1373_; 
v___x_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1373_, 0, v_x_1371_);
return v___x_1373_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofTask___boxed(lean_object* v_00_u03b1_1374_, lean_object* v_x_1375_, lean_object* v_a_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = l_Std_Internal_IO_Async_BaseAsync_ofTask(v_00_u03b1_1374_, v_x_1375_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_pure___redArg(lean_object* v_a_1378_){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v_a_1378_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_pure___redArg___boxed(lean_object* v_a_1381_, lean_object* v_a_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_Std_Internal_IO_Async_BaseAsync_pure___redArg(v_a_1381_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_pure(lean_object* v_00_u03b1_1384_, lean_object* v_a_1385_){
_start:
{
lean_object* v___x_1387_; 
v___x_1387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1387_, 0, v_a_1385_);
return v___x_1387_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_pure___boxed(lean_object* v_00_u03b1_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_){
_start:
{
lean_object* v_res_1391_; 
v_res_1391_ = l_Std_Internal_IO_Async_BaseAsync_pure(v_00_u03b1_1388_, v_a_1389_);
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_map___redArg(lean_object* v_f_1392_, lean_object* v_self_1393_, lean_object* v_prio_1394_, uint8_t v_sync_1395_){
_start:
{
lean_object* v___x_1397_; 
v___x_1397_ = lean_apply_1(v_self_1393_, lean_box(0));
if (lean_obj_tag(v___x_1397_) == 0)
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1406_; 
lean_dec(v_prio_1394_);
v_a_1398_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1400_ = v___x_1397_;
v_isShared_1401_ = v_isSharedCheck_1406_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1397_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1406_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1402_; lean_object* v___x_1404_; 
v___x_1402_ = lean_apply_1(v_f_1392_, v_a_1398_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v___x_1402_);
v___x_1404_ = v___x_1400_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v___x_1402_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
else
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1415_; 
v_a_1407_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1409_ = v___x_1397_;
v_isShared_1410_ = v_isSharedCheck_1415_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v___x_1397_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1415_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1411_; lean_object* v___x_1413_; 
v___x_1411_ = lean_task_map(v_f_1392_, v_a_1407_, v_prio_1394_, v_sync_1395_);
if (v_isShared_1410_ == 0)
{
lean_ctor_set(v___x_1409_, 0, v___x_1411_);
v___x_1413_ = v___x_1409_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
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
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_map___redArg___boxed(lean_object* v_f_1416_, lean_object* v_self_1417_, lean_object* v_prio_1418_, lean_object* v_sync_1419_, lean_object* v_a_1420_){
_start:
{
uint8_t v_sync_boxed_1421_; lean_object* v_res_1422_; 
v_sync_boxed_1421_ = lean_unbox(v_sync_1419_);
v_res_1422_ = l_Std_Internal_IO_Async_BaseAsync_map___redArg(v_f_1416_, v_self_1417_, v_prio_1418_, v_sync_boxed_1421_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_map(lean_object* v_00_u03b1_1423_, lean_object* v_00_u03b2_1424_, lean_object* v_f_1425_, lean_object* v_self_1426_, lean_object* v_prio_1427_, uint8_t v_sync_1428_){
_start:
{
lean_object* v___x_1430_; 
v___x_1430_ = lean_apply_1(v_self_1426_, lean_box(0));
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1439_; 
lean_dec(v_prio_1427_);
v_a_1431_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1433_ = v___x_1430_;
v_isShared_1434_ = v_isSharedCheck_1439_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_dec(v___x_1430_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1439_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1435_; lean_object* v___x_1437_; 
v___x_1435_ = lean_apply_1(v_f_1425_, v_a_1431_);
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 0, v___x_1435_);
v___x_1437_ = v___x_1433_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v___x_1435_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
else
{
lean_object* v_a_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1448_; 
v_a_1440_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1442_ = v___x_1430_;
v_isShared_1443_ = v_isSharedCheck_1448_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_a_1440_);
lean_dec(v___x_1430_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1448_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1444_; lean_object* v___x_1446_; 
v___x_1444_ = lean_task_map(v_f_1425_, v_a_1440_, v_prio_1427_, v_sync_1428_);
if (v_isShared_1443_ == 0)
{
lean_ctor_set(v___x_1442_, 0, v___x_1444_);
v___x_1446_ = v___x_1442_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v___x_1444_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_map___boxed(lean_object* v_00_u03b1_1449_, lean_object* v_00_u03b2_1450_, lean_object* v_f_1451_, lean_object* v_self_1452_, lean_object* v_prio_1453_, lean_object* v_sync_1454_, lean_object* v_a_1455_){
_start:
{
uint8_t v_sync_boxed_1456_; lean_object* v_res_1457_; 
v_sync_boxed_1456_ = lean_unbox(v_sync_1454_);
v_res_1457_ = l_Std_Internal_IO_Async_BaseAsync_map(v_00_u03b1_1449_, v_00_u03b2_1450_, v_f_1451_, v_self_1452_, v_prio_1453_, v_sync_boxed_1456_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0(lean_object* v_f_1458_, lean_object* v_a_1459_){
_start:
{
lean_object* v___x_1461_; 
v___x_1461_ = lean_apply_2(v_f_1458_, v_a_1459_, lean_box(0));
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v_a_1462_; lean_object* v___x_1463_; 
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
lean_inc(v_a_1462_);
lean_dec_ref(v___x_1461_);
v___x_1463_ = lean_task_pure(v_a_1462_);
return v___x_1463_;
}
else
{
lean_object* v_a_1464_; 
v_a_1464_ = lean_ctor_get(v___x_1461_, 0);
lean_inc_ref(v_a_1464_);
lean_dec_ref(v___x_1461_);
return v_a_1464_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0___boxed(lean_object* v_f_1465_, lean_object* v_a_1466_, lean_object* v___y_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0(v_f_1465_, v_a_1466_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object* v_prio_1469_, uint8_t v_sync_1470_, lean_object* v_t_1471_, lean_object* v_f_1472_){
_start:
{
if (lean_obj_tag(v_t_1471_) == 0)
{
lean_object* v_a_1474_; lean_object* v___x_1475_; 
lean_dec(v_prio_1469_);
v_a_1474_ = lean_ctor_get(v_t_1471_, 0);
lean_inc(v_a_1474_);
lean_dec_ref(v_t_1471_);
v___x_1475_ = lean_apply_2(v_f_1472_, v_a_1474_, lean_box(0));
return v___x_1475_;
}
else
{
lean_object* v_a_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1485_; 
v_a_1476_ = lean_ctor_get(v_t_1471_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v_t_1471_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1478_ = v_t_1471_;
v_isShared_1479_ = v_isSharedCheck_1485_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_a_1476_);
lean_dec(v_t_1471_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1485_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___f_1480_; lean_object* v___x_1481_; lean_object* v___x_1483_; 
v___f_1480_ = lean_alloc_closure((void*)(l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1480_, 0, v_f_1472_);
v___x_1481_ = lean_io_bind_task(v_a_1476_, v___f_1480_, v_prio_1469_, v_sync_1470_);
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 0, v___x_1481_);
v___x_1483_ = v___x_1478_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v___x_1481_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg___boxed(lean_object* v_prio_1486_, lean_object* v_sync_1487_, lean_object* v_t_1488_, lean_object* v_f_1489_, lean_object* v_a_1490_){
_start:
{
uint8_t v_sync_boxed_1491_; lean_object* v_res_1492_; 
v_sync_boxed_1491_ = lean_unbox(v_sync_1487_);
v_res_1492_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1486_, v_sync_boxed_1491_, v_t_1488_, v_f_1489_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask(lean_object* v_00_u03b1_1493_, lean_object* v_00_u03b2_1494_, lean_object* v_prio_1495_, uint8_t v_sync_1496_, lean_object* v_t_1497_, lean_object* v_f_1498_){
_start:
{
lean_object* v___x_1500_; 
v___x_1500_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1495_, v_sync_1496_, v_t_1497_, v_f_1498_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___boxed(lean_object* v_00_u03b1_1501_, lean_object* v_00_u03b2_1502_, lean_object* v_prio_1503_, lean_object* v_sync_1504_, lean_object* v_t_1505_, lean_object* v_f_1506_, lean_object* v_a_1507_){
_start:
{
uint8_t v_sync_boxed_1508_; lean_object* v_res_1509_; 
v_sync_boxed_1508_ = lean_unbox(v_sync_1504_);
v_res_1509_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask(v_00_u03b1_1501_, v_00_u03b2_1502_, v_prio_1503_, v_sync_boxed_1508_, v_t_1505_, v_f_1506_);
return v_res_1509_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_bind___redArg(lean_object* v_self_1510_, lean_object* v_f_1511_, lean_object* v_prio_1512_, uint8_t v_sync_1513_){
_start:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1515_ = lean_apply_1(v_self_1510_, lean_box(0));
v___x_1516_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1512_, v_sync_1513_, v___x_1515_, v_f_1511_);
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_bind___redArg___boxed(lean_object* v_self_1517_, lean_object* v_f_1518_, lean_object* v_prio_1519_, lean_object* v_sync_1520_, lean_object* v_a_1521_){
_start:
{
uint8_t v_sync_boxed_1522_; lean_object* v_res_1523_; 
v_sync_boxed_1522_ = lean_unbox(v_sync_1520_);
v_res_1523_ = l_Std_Internal_IO_Async_BaseAsync_bind___redArg(v_self_1517_, v_f_1518_, v_prio_1519_, v_sync_boxed_1522_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_bind(lean_object* v_00_u03b1_1524_, lean_object* v_00_u03b2_1525_, lean_object* v_self_1526_, lean_object* v_f_1527_, lean_object* v_prio_1528_, uint8_t v_sync_1529_){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1531_ = lean_apply_1(v_self_1526_, lean_box(0));
v___x_1532_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1528_, v_sync_1529_, v___x_1531_, v_f_1527_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_bind___boxed(lean_object* v_00_u03b1_1533_, lean_object* v_00_u03b2_1534_, lean_object* v_self_1535_, lean_object* v_f_1536_, lean_object* v_prio_1537_, lean_object* v_sync_1538_, lean_object* v_a_1539_){
_start:
{
uint8_t v_sync_boxed_1540_; lean_object* v_res_1541_; 
v_sync_boxed_1540_ = lean_unbox(v_sync_1538_);
v_res_1541_ = l_Std_Internal_IO_Async_BaseAsync_bind(v_00_u03b1_1533_, v_00_u03b2_1534_, v_self_1535_, v_f_1536_, v_prio_1537_, v_sync_boxed_1540_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_lift___redArg(lean_object* v_x_1542_){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1544_ = lean_apply_1(v_x_1542_, lean_box(0));
v___x_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1544_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_lift___redArg___boxed(lean_object* v_x_1546_, lean_object* v_a_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l_Std_Internal_IO_Async_BaseAsync_lift___redArg(v_x_1546_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_lift(lean_object* v_00_u03b1_1549_, lean_object* v_x_1550_){
_start:
{
lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1552_ = lean_apply_1(v_x_1550_, lean_box(0));
v___x_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_lift___boxed(lean_object* v_00_u03b1_1554_, lean_object* v_x_1555_, lean_object* v_a_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_Std_Internal_IO_Async_BaseAsync_lift(v_00_u03b1_1554_, v_x_1555_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_wait___redArg(lean_object* v_self_1558_){
_start:
{
lean_object* v___x_1560_; lean_object* v_val_1562_; 
v___x_1560_ = lean_apply_1(v_self_1558_, lean_box(0));
if (lean_obj_tag(v___x_1560_) == 0)
{
lean_object* v_a_1564_; lean_object* v___x_1565_; 
v_a_1564_ = lean_ctor_get(v___x_1560_, 0);
lean_inc(v_a_1564_);
lean_dec_ref(v___x_1560_);
v___x_1565_ = lean_task_pure(v_a_1564_);
v_val_1562_ = v___x_1565_;
goto v___jp_1561_;
}
else
{
lean_object* v_a_1566_; 
v_a_1566_ = lean_ctor_get(v___x_1560_, 0);
lean_inc_ref(v_a_1566_);
lean_dec_ref(v___x_1560_);
v_val_1562_ = v_a_1566_;
goto v___jp_1561_;
}
v___jp_1561_:
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_task_get_own(v_val_1562_);
return v___x_1563_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_wait___redArg___boxed(lean_object* v_self_1567_, lean_object* v_a_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_Std_Internal_IO_Async_BaseAsync_wait___redArg(v_self_1567_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_wait(lean_object* v_00_u03b1_1570_, lean_object* v_self_1571_){
_start:
{
lean_object* v_val_1574_; lean_object* v___x_1576_; 
v___x_1576_ = lean_apply_1(v_self_1571_, lean_box(0));
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v___x_1578_; 
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_a_1577_);
lean_dec_ref(v___x_1576_);
v___x_1578_ = lean_task_pure(v_a_1577_);
v_val_1574_ = v___x_1578_;
goto v___jp_1573_;
}
else
{
lean_object* v_a_1579_; 
v_a_1579_ = lean_ctor_get(v___x_1576_, 0);
lean_inc_ref(v_a_1579_);
lean_dec_ref(v___x_1576_);
v_val_1574_ = v_a_1579_;
goto v___jp_1573_;
}
v___jp_1573_:
{
lean_object* v___x_1575_; 
v___x_1575_ = lean_task_get_own(v_val_1574_);
return v___x_1575_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_wait___boxed(lean_object* v_00_u03b1_1580_, lean_object* v_self_1581_, lean_object* v_a_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Std_Internal_IO_Async_BaseAsync_wait(v_00_u03b1_1580_, v_self_1581_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_asTask___redArg(lean_object* v_x_1584_, lean_object* v_prio_1585_){
_start:
{
lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___f_1589_; lean_object* v___x_1590_; uint8_t v___x_1591_; lean_object* v___x_1592_; 
v___x_1587_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1587_, 0, lean_box(0));
lean_closure_set(v___x_1587_, 1, v_x_1584_);
v___x_1588_ = lean_io_as_task(v___x_1587_, v_prio_1585_);
v___f_1589_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1590_ = lean_unsigned_to_nat(0u);
v___x_1591_ = 1;
v___x_1592_ = lean_task_bind(v___x_1588_, v___f_1589_, v___x_1590_, v___x_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_asTask___redArg___boxed(lean_object* v_x_1593_, lean_object* v_prio_1594_, lean_object* v_a_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = l_Std_Internal_IO_Async_BaseAsync_asTask___redArg(v_x_1593_, v_prio_1594_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_asTask(lean_object* v_00_u03b1_1597_, lean_object* v_x_1598_, lean_object* v_prio_1599_){
_start:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___f_1603_; lean_object* v___x_1604_; uint8_t v___x_1605_; lean_object* v___x_1606_; 
v___x_1601_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1601_, 0, lean_box(0));
lean_closure_set(v___x_1601_, 1, v_x_1598_);
v___x_1602_ = lean_io_as_task(v___x_1601_, v_prio_1599_);
v___f_1603_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1604_ = lean_unsigned_to_nat(0u);
v___x_1605_ = 1;
v___x_1606_ = lean_task_bind(v___x_1602_, v___f_1603_, v___x_1604_, v___x_1605_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_asTask___boxed(lean_object* v_00_u03b1_1607_, lean_object* v_x_1608_, lean_object* v_prio_1609_, lean_object* v_a_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Std_Internal_IO_Async_BaseAsync_asTask(v_00_u03b1_1607_, v_x_1608_, v_prio_1609_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_await___redArg(lean_object* v_t_1612_){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1614_, 0, v_t_1612_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_await___redArg___boxed(lean_object* v_t_1615_, lean_object* v_a_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_Std_Internal_IO_Async_BaseAsync_await___redArg(v_t_1615_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_await(lean_object* v_00_u03b1_1618_, lean_object* v_t_1619_){
_start:
{
lean_object* v___x_1621_; 
v___x_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1621_, 0, v_t_1619_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_await___boxed(lean_object* v_00_u03b1_1622_, lean_object* v_t_1623_, lean_object* v_a_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l_Std_Internal_IO_Async_BaseAsync_await(v_00_u03b1_1622_, v_t_1623_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_async___redArg(lean_object* v_self_1626_, lean_object* v_prio_1627_){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___f_1631_; lean_object* v___x_1632_; uint8_t v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1629_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1629_, 0, lean_box(0));
lean_closure_set(v___x_1629_, 1, v_self_1626_);
v___x_1630_ = lean_io_as_task(v___x_1629_, v_prio_1627_);
v___f_1631_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1632_ = lean_unsigned_to_nat(0u);
v___x_1633_ = 1;
v___x_1634_ = lean_task_bind(v___x_1630_, v___f_1631_, v___x_1632_, v___x_1633_);
v___x_1635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1634_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_async___redArg___boxed(lean_object* v_self_1636_, lean_object* v_prio_1637_, lean_object* v_a_1638_){
_start:
{
lean_object* v_res_1639_; 
v_res_1639_ = l_Std_Internal_IO_Async_BaseAsync_async___redArg(v_self_1636_, v_prio_1637_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_async(lean_object* v_00_u03b1_1640_, lean_object* v_self_1641_, lean_object* v_prio_1642_){
_start:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___f_1646_; lean_object* v___x_1647_; uint8_t v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1644_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1644_, 0, lean_box(0));
lean_closure_set(v___x_1644_, 1, v_self_1641_);
v___x_1645_ = lean_io_as_task(v___x_1644_, v_prio_1642_);
v___f_1646_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1647_ = lean_unsigned_to_nat(0u);
v___x_1648_ = 1;
v___x_1649_ = lean_task_bind(v___x_1645_, v___f_1646_, v___x_1647_, v___x_1648_);
v___x_1650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_async___boxed(lean_object* v_00_u03b1_1651_, lean_object* v_self_1652_, lean_object* v_prio_1653_, lean_object* v_a_1654_){
_start:
{
lean_object* v_res_1655_; 
v_res_1655_ = l_Std_Internal_IO_Async_BaseAsync_async(v_00_u03b1_1651_, v_self_1652_, v_prio_1653_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instFunctor___lam__0(lean_object* v_00_u03b1_1656_, lean_object* v_00_u03b2_1657_, lean_object* v_f_1658_, lean_object* v_self_1659_){
_start:
{
lean_object* v___x_1661_; 
v___x_1661_ = lean_apply_1(v_self_1659_, lean_box(0));
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1670_; 
v_a_1662_ = lean_ctor_get(v___x_1661_, 0);
v_isSharedCheck_1670_ = !lean_is_exclusive(v___x_1661_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1664_ = v___x_1661_;
v_isShared_1665_ = v_isSharedCheck_1670_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1661_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1670_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1666_; lean_object* v___x_1668_; 
v___x_1666_ = lean_apply_1(v_f_1658_, v_a_1662_);
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 0, v___x_1666_);
v___x_1668_ = v___x_1664_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v___x_1666_);
v___x_1668_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
return v___x_1668_;
}
}
}
else
{
lean_object* v_a_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1681_; 
v_a_1671_ = lean_ctor_get(v___x_1661_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1661_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1673_ = v___x_1661_;
v_isShared_1674_ = v_isSharedCheck_1681_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_a_1671_);
lean_dec(v___x_1661_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1681_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1675_; uint8_t v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1679_; 
v___x_1675_ = lean_unsigned_to_nat(0u);
v___x_1676_ = 0;
v___x_1677_ = lean_task_map(v_f_1658_, v_a_1671_, v___x_1675_, v___x_1676_);
if (v_isShared_1674_ == 0)
{
lean_ctor_set(v___x_1673_, 0, v___x_1677_);
v___x_1679_ = v___x_1673_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v___x_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instFunctor___lam__0___boxed(lean_object* v_00_u03b1_1682_, lean_object* v_00_u03b2_1683_, lean_object* v_f_1684_, lean_object* v_self_1685_, lean_object* v___y_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l_Std_Internal_IO_Async_BaseAsync_instFunctor___lam__0(v_00_u03b1_1682_, v_00_u03b2_1683_, v_f_1684_, v_self_1685_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instFunctor___lam__1(lean_object* v___f_1688_, lean_object* v_00_u03b1_1689_, lean_object* v_00_u03b2_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1694_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_1694_, 0, lean_box(0));
lean_closure_set(v___x_1694_, 1, lean_box(0));
lean_closure_set(v___x_1694_, 2, v___y_1691_);
v___x_1695_ = lean_apply_5(v___f_1688_, lean_box(0), lean_box(0), v___x_1694_, v___y_1692_, lean_box(0));
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instFunctor___lam__1___boxed(lean_object* v___f_1696_, lean_object* v_00_u03b1_1697_, lean_object* v_00_u03b2_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_Std_Internal_IO_Async_BaseAsync_instFunctor___lam__1(v___f_1696_, v_00_u03b1_1697_, v_00_u03b2_1698_, v___y_1699_, v___y_1700_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__0(lean_object* v_x_1710_, lean_object* v_y_1711_){
_start:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1713_ = lean_box(0);
v___x_1714_ = lean_apply_2(v_x_1710_, v___x_1713_, lean_box(0));
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_object* v_a_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1723_; 
v_a_1715_ = lean_ctor_get(v___x_1714_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1714_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1717_ = v___x_1714_;
v_isShared_1718_ = v_isSharedCheck_1723_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_a_1715_);
lean_dec(v___x_1714_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1723_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___x_1719_; lean_object* v___x_1721_; 
v___x_1719_ = lean_apply_1(v_y_1711_, v_a_1715_);
if (v_isShared_1718_ == 0)
{
lean_ctor_set(v___x_1717_, 0, v___x_1719_);
v___x_1721_ = v___x_1717_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v___x_1719_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
}
else
{
lean_object* v_a_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1734_; 
v_a_1724_ = lean_ctor_get(v___x_1714_, 0);
v_isSharedCheck_1734_ = !lean_is_exclusive(v___x_1714_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1726_ = v___x_1714_;
v_isShared_1727_ = v_isSharedCheck_1734_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_a_1724_);
lean_dec(v___x_1714_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1734_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1728_; uint8_t v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1732_; 
v___x_1728_ = lean_unsigned_to_nat(0u);
v___x_1729_ = 0;
v___x_1730_ = lean_task_map(v_y_1711_, v_a_1724_, v___x_1728_, v___x_1729_);
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 0, v___x_1730_);
v___x_1732_ = v___x_1726_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v___x_1730_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
return v___x_1732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__0___boxed(lean_object* v_x_1735_, lean_object* v_y_1736_, lean_object* v___y_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__0(v_x_1735_, v_y_1736_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__1(lean_object* v_00_u03b1_1739_, lean_object* v_00_u03b2_1740_, lean_object* v_f_1741_, lean_object* v_x_1742_){
_start:
{
lean_object* v___x_1744_; lean_object* v___f_1745_; lean_object* v___x_1746_; uint8_t v___x_1747_; lean_object* v___x_1748_; 
v___x_1744_ = lean_apply_1(v_f_1741_, lean_box(0));
v___f_1745_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1745_, 0, v_x_1742_);
v___x_1746_ = lean_unsigned_to_nat(0u);
v___x_1747_ = 0;
v___x_1748_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1746_, v___x_1747_, v___x_1744_, v___f_1745_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__1___boxed(lean_object* v_00_u03b1_1749_, lean_object* v_00_u03b2_1750_, lean_object* v_f_1751_, lean_object* v_x_1752_, lean_object* v___y_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__1(v_00_u03b1_1749_, v_00_u03b2_1750_, v_f_1751_, v_x_1752_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__2(lean_object* v_00_u03b1_1755_, lean_object* v_00_u03b2_1756_, lean_object* v_self_1757_, lean_object* v_f_1758_){
_start:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; uint8_t v___x_1762_; lean_object* v___x_1763_; 
v___x_1760_ = lean_apply_1(v_self_1757_, lean_box(0));
v___x_1761_ = lean_unsigned_to_nat(0u);
v___x_1762_ = 0;
v___x_1763_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1761_, v___x_1762_, v___x_1760_, v_f_1758_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__2___boxed(lean_object* v_00_u03b1_1764_, lean_object* v_00_u03b2_1765_, lean_object* v_self_1766_, lean_object* v_f_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__2(v_00_u03b1_1764_, v_00_u03b2_1765_, v_self_1766_, v_f_1767_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__3(lean_object* v_a_1770_, lean_object* v_x_1771_){
_start:
{
lean_object* v___x_1773_; 
v___x_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1773_, 0, v_a_1770_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__3___boxed(lean_object* v_a_1774_, lean_object* v_x_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__3(v_a_1774_, v_x_1775_);
lean_dec(v_x_1775_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__4(lean_object* v_y_1778_, lean_object* v___f_1779_, lean_object* v_a_1780_){
_start:
{
lean_object* v___f_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___f_1782_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1782_, 0, v_a_1780_);
v___x_1783_ = lean_box(0);
v___x_1784_ = lean_apply_1(v_y_1778_, v___x_1783_);
v___x_1785_ = lean_apply_5(v___f_1779_, lean_box(0), lean_box(0), v___x_1784_, v___f_1782_, lean_box(0));
return v___x_1785_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__4___boxed(lean_object* v_y_1786_, lean_object* v___f_1787_, lean_object* v_a_1788_, lean_object* v___y_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__4(v_y_1786_, v___f_1787_, v_a_1788_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__5(lean_object* v___f_1791_, lean_object* v_00_u03b1_1792_, lean_object* v_00_u03b2_1793_, lean_object* v_x_1794_, lean_object* v_y_1795_){
_start:
{
lean_object* v___f_1797_; lean_object* v___x_1798_; 
lean_inc_ref(v___f_1791_);
v___f_1797_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__4___boxed), 4, 2);
lean_closure_set(v___f_1797_, 0, v_y_1795_);
lean_closure_set(v___f_1797_, 1, v___f_1791_);
v___x_1798_ = lean_apply_5(v___f_1791_, lean_box(0), lean_box(0), v_x_1794_, v___f_1797_, lean_box(0));
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__5___boxed(lean_object* v___f_1799_, lean_object* v_00_u03b1_1800_, lean_object* v_00_u03b2_1801_, lean_object* v_x_1802_, lean_object* v_y_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__5(v___f_1799_, v_00_u03b1_1800_, v_00_u03b2_1801_, v_x_1802_, v_y_1803_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__6(lean_object* v_y_1806_, lean_object* v_x_1807_){
_start:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1809_ = lean_box(0);
v___x_1810_ = lean_apply_2(v_y_1806_, v___x_1809_, lean_box(0));
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__6___boxed(lean_object* v_y_1811_, lean_object* v_x_1812_, lean_object* v___y_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__6(v_y_1811_, v_x_1812_);
lean_dec(v_x_1812_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__7(lean_object* v_00_u03b1_1815_, lean_object* v_00_u03b2_1816_, lean_object* v_x_1817_, lean_object* v_y_1818_){
_start:
{
lean_object* v___x_1820_; lean_object* v___f_1821_; lean_object* v___x_1822_; uint8_t v___x_1823_; lean_object* v___x_1824_; 
v___x_1820_ = lean_apply_1(v_x_1817_, lean_box(0));
v___f_1821_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__6___boxed), 3, 1);
lean_closure_set(v___f_1821_, 0, v_y_1818_);
v___x_1822_ = lean_unsigned_to_nat(0u);
v___x_1823_ = 0;
v___x_1824_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1822_, v___x_1823_, v___x_1820_, v___f_1821_);
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__7___boxed(lean_object* v_00_u03b1_1825_, lean_object* v_00_u03b2_1826_, lean_object* v_x_1827_, lean_object* v_y_1828_, lean_object* v___y_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_Std_Internal_IO_Async_BaseAsync_instMonad___lam__7(v_00_u03b1_1825_, v_00_u03b2_1826_, v_x_1827_, v_y_1828_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadAsyncTask___lam__1(lean_object* v___f_1851_, lean_object* v_00_u03b1_1852_, lean_object* v_t_1853_, lean_object* v_prio_1854_){
_start:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; uint8_t v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1856_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1856_, 0, lean_box(0));
lean_closure_set(v___x_1856_, 1, v_t_1853_);
v___x_1857_ = lean_io_as_task(v___x_1856_, v_prio_1854_);
v___x_1858_ = lean_unsigned_to_nat(0u);
v___x_1859_ = 1;
v___x_1860_ = lean_task_bind(v___x_1857_, v___f_1851_, v___x_1858_, v___x_1859_);
v___x_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1861_, 0, v___x_1860_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadAsyncTask___lam__1___boxed(lean_object* v___f_1862_, lean_object* v_00_u03b1_1863_, lean_object* v_t_1864_, lean_object* v_prio_1865_, lean_object* v___y_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l_Std_Internal_IO_Async_BaseAsync_instMonadAsyncTask___lam__1(v___f_1862_, v_00_u03b1_1863_, v_t_1864_, v_prio_1865_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instInhabited___redArg___lam__0(lean_object* v___x_1871_){
_start:
{
lean_inc_ref(v___x_1871_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instInhabited___redArg___lam__0___boxed(lean_object* v___x_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = l_Std_Internal_IO_Async_BaseAsync_instInhabited___redArg___lam__0(v___x_1873_);
lean_dec_ref(v___x_1873_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instInhabited___redArg(lean_object* v_inst_1876_){
_start:
{
lean_object* v___x_1877_; lean_object* v___f_1878_; lean_object* v___x_1879_; 
v___x_1877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1877_, 0, v_inst_1876_);
v___f_1878_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_instInhabited___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1878_, 0, v___x_1877_);
v___x_1879_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_mk___boxed), 3, 2);
lean_closure_set(v___x_1879_, 0, lean_box(0));
lean_closure_set(v___x_1879_, 1, v___f_1878_);
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instInhabited(lean_object* v_00_u03b1_1880_, lean_object* v_inst_1881_){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = l_Std_Internal_IO_Async_BaseAsync_instInhabited___redArg(v_inst_1881_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__0(lean_object* v_res_1883_, lean_object* v_snd_1884_){
_start:
{
lean_object* v___x_1885_; 
v___x_1885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1885_, 0, v_res_1883_);
lean_ctor_set(v___x_1885_, 1, v_snd_1884_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__1(lean_object* v_f_1886_, lean_object* v_res_1887_){
_start:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; 
lean_inc(v_res_1887_);
v___x_1889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1889_, 0, v_res_1887_);
v___x_1890_ = lean_apply_2(v_f_1886_, v___x_1889_, lean_box(0));
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v_a_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1899_; 
v_a_1891_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1893_ = v___x_1890_;
v_isShared_1894_ = v_isSharedCheck_1899_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_a_1891_);
lean_dec(v___x_1890_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1899_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1895_; lean_object* v___x_1897_; 
v___x_1895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1895_, 0, v_res_1887_);
lean_ctor_set(v___x_1895_, 1, v_a_1891_);
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 0, v___x_1895_);
v___x_1897_ = v___x_1893_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v___x_1895_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
else
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1911_; 
v_a_1900_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1902_ = v___x_1890_;
v_isShared_1903_ = v_isSharedCheck_1911_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1890_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1911_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___f_1904_; lean_object* v___x_1905_; uint8_t v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1909_; 
v___f_1904_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__0), 2, 1);
lean_closure_set(v___f_1904_, 0, v_res_1887_);
v___x_1905_ = lean_unsigned_to_nat(0u);
v___x_1906_ = 0;
v___x_1907_ = lean_task_map(v___f_1904_, v_a_1900_, v___x_1905_, v___x_1906_);
if (v_isShared_1903_ == 0)
{
lean_ctor_set(v___x_1902_, 0, v___x_1907_);
v___x_1909_ = v___x_1902_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v___x_1907_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__1___boxed(lean_object* v_f_1912_, lean_object* v_res_1913_, lean_object* v___y_1914_){
_start:
{
lean_object* v_res_1915_; 
v_res_1915_ = l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__1(v_f_1912_, v_res_1913_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__2(lean_object* v_00_u03b1_1916_, lean_object* v_00_u03b2_1917_, lean_object* v_x_1918_, lean_object* v_f_1919_){
_start:
{
lean_object* v___x_1921_; lean_object* v___f_1922_; lean_object* v___x_1923_; uint8_t v___x_1924_; lean_object* v___x_1925_; 
v___x_1921_ = lean_apply_1(v_x_1918_, lean_box(0));
v___f_1922_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1922_, 0, v_f_1919_);
v___x_1923_ = lean_unsigned_to_nat(0u);
v___x_1924_ = 0;
v___x_1925_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1923_, v___x_1924_, v___x_1921_, v___f_1922_);
return v___x_1925_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__2___boxed(lean_object* v_00_u03b1_1926_, lean_object* v_00_u03b2_1927_, lean_object* v_x_1928_, lean_object* v_f_1929_, lean_object* v___y_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_Std_Internal_IO_Async_BaseAsync_instMonadFinally___lam__2(v_00_u03b1_1926_, v_00_u03b2_1927_, v_x_1928_, v_f_1929_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofExcept___redArg(lean_object* v_except_1934_){
_start:
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1943_; 
v_a_1936_ = lean_ctor_get(v_except_1934_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v_except_1934_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1938_ = v_except_1934_;
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v_except_1934_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
lean_ctor_set_tag(v___x_1938_, 0);
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofExcept___redArg___boxed(lean_object* v_except_1944_, lean_object* v_a_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l_Std_Internal_IO_Async_BaseAsync_ofExcept___redArg(v_except_1944_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofExcept(lean_object* v_00_u03b1_1947_, lean_object* v_except_1948_){
_start:
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
v_a_1950_ = lean_ctor_get(v_except_1948_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v_except_1948_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v_except_1948_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v_except_1948_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
lean_ctor_set_tag(v___x_1952_, 0);
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_ofExcept___boxed(lean_object* v_00_u03b1_1958_, lean_object* v_except_1959_, lean_object* v_a_1960_){
_start:
{
lean_object* v_res_1961_; 
v_res_1961_ = l_Std_Internal_IO_Async_BaseAsync_ofExcept(v_00_u03b1_1958_, v_except_1959_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__1(lean_object* v_resultX_1962_, lean_object* v_resultY_1963_){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1965_, 0, v_resultX_1962_);
lean_ctor_set(v___x_1965_, 1, v_resultY_1963_);
v___x_1966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1966_, 0, v___x_1965_);
return v___x_1966_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__1___boxed(lean_object* v_resultX_1967_, lean_object* v_resultY_1968_, lean_object* v___y_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__1(v_resultX_1967_, v_resultY_1968_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__0(lean_object* v_taskY_1971_, lean_object* v_resultX_1972_){
_start:
{
lean_object* v___f_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; uint8_t v___x_1977_; lean_object* v___x_1978_; 
v___f_1974_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1974_, 0, v_resultX_1972_);
v___x_1975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1975_, 0, v_taskY_1971_);
v___x_1976_ = lean_unsigned_to_nat(0u);
v___x_1977_ = 0;
v___x_1978_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1976_, v___x_1977_, v___x_1975_, v___f_1974_);
return v___x_1978_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__0___boxed(lean_object* v_taskY_1979_, lean_object* v_resultX_1980_, lean_object* v___y_1981_){
_start:
{
lean_object* v_res_1982_; 
v_res_1982_ = l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__0(v_taskY_1979_, v_resultX_1980_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__2(lean_object* v_taskX_1983_, lean_object* v_taskY_1984_){
_start:
{
lean_object* v___f_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; uint8_t v___x_1989_; lean_object* v___x_1990_; 
v___f_1986_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1986_, 0, v_taskY_1984_);
v___x_1987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1987_, 0, v_taskX_1983_);
v___x_1988_ = lean_unsigned_to_nat(0u);
v___x_1989_ = 0;
v___x_1990_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1988_, v___x_1989_, v___x_1987_, v___f_1986_);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__2___boxed(lean_object* v_taskX_1991_, lean_object* v_taskY_1992_, lean_object* v___y_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__2(v_taskX_1991_, v_taskY_1992_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__3(lean_object* v_y_1995_, lean_object* v_prio_1996_, lean_object* v___f_1997_, lean_object* v_taskX_1998_){
_start:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___f_2002_; lean_object* v___x_2003_; uint8_t v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; uint8_t v___x_2007_; lean_object* v___x_2008_; 
v___x_2000_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2000_, 0, lean_box(0));
lean_closure_set(v___x_2000_, 1, v_y_1995_);
v___x_2001_ = lean_io_as_task(v___x_2000_, v_prio_1996_);
v___f_2002_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2002_, 0, v_taskX_1998_);
v___x_2003_ = lean_unsigned_to_nat(0u);
v___x_2004_ = 1;
v___x_2005_ = lean_task_bind(v___x_2001_, v___f_1997_, v___x_2003_, v___x_2004_);
v___x_2006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2005_);
v___x_2007_ = 0;
v___x_2008_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2003_, v___x_2007_, v___x_2006_, v___f_2002_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__3___boxed(lean_object* v_y_2009_, lean_object* v_prio_2010_, lean_object* v___f_2011_, lean_object* v_taskX_2012_, lean_object* v___y_2013_){
_start:
{
lean_object* v_res_2014_; 
v_res_2014_ = l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__3(v_y_2009_, v_prio_2010_, v___f_2011_, v_taskX_2012_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg(lean_object* v_x_2015_, lean_object* v_y_2016_, lean_object* v_prio_2017_){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___f_2021_; lean_object* v___f_2022_; lean_object* v___x_2023_; uint8_t v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; uint8_t v___x_2027_; lean_object* v___x_2028_; 
v___x_2019_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2019_, 0, lean_box(0));
lean_closure_set(v___x_2019_, 1, v_x_2015_);
lean_inc(v_prio_2017_);
v___x_2020_ = lean_io_as_task(v___x_2019_, v_prio_2017_);
v___f_2021_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2022_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2022_, 0, v_y_2016_);
lean_closure_set(v___f_2022_, 1, v_prio_2017_);
lean_closure_set(v___f_2022_, 2, v___f_2021_);
v___x_2023_ = lean_unsigned_to_nat(0u);
v___x_2024_ = 1;
v___x_2025_ = lean_task_bind(v___x_2020_, v___f_2021_, v___x_2023_, v___x_2024_);
v___x_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
v___x_2027_ = 0;
v___x_2028_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2023_, v___x_2027_, v___x_2026_, v___f_2022_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___boxed(lean_object* v_x_2029_, lean_object* v_y_2030_, lean_object* v_prio_2031_, lean_object* v_a_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg(v_x_2029_, v_y_2030_, v_prio_2031_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently(lean_object* v_00_u03b1_2034_, lean_object* v_00_u03b2_2035_, lean_object* v_x_2036_, lean_object* v_y_2037_, lean_object* v_prio_2038_){
_start:
{
lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___f_2042_; lean_object* v___f_2043_; lean_object* v___x_2044_; uint8_t v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; uint8_t v___x_2048_; lean_object* v___x_2049_; 
v___x_2040_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2040_, 0, lean_box(0));
lean_closure_set(v___x_2040_, 1, v_x_2036_);
lean_inc(v_prio_2038_);
v___x_2041_ = lean_io_as_task(v___x_2040_, v_prio_2038_);
v___f_2042_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2043_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2043_, 0, v_y_2037_);
lean_closure_set(v___f_2043_, 1, v_prio_2038_);
lean_closure_set(v___f_2043_, 2, v___f_2042_);
v___x_2044_ = lean_unsigned_to_nat(0u);
v___x_2045_ = 1;
v___x_2046_ = lean_task_bind(v___x_2041_, v___f_2042_, v___x_2044_, v___x_2045_);
v___x_2047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2046_);
v___x_2048_ = 0;
v___x_2049_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2044_, v___x_2048_, v___x_2047_, v___f_2043_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrently___boxed(lean_object* v_00_u03b1_2050_, lean_object* v_00_u03b2_2051_, lean_object* v_x_2052_, lean_object* v_y_2053_, lean_object* v_prio_2054_, lean_object* v_a_2055_){
_start:
{
lean_object* v_res_2056_; 
v_res_2056_ = l_Std_Internal_IO_Async_BaseAsync_concurrently(v_00_u03b1_2050_, v_00_u03b2_2051_, v_x_2052_, v_y_2053_, v_prio_2054_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__2(lean_object* v_promise_2057_, lean_object* v_value_2058_){
_start:
{
lean_object* v___x_2060_; 
v___x_2060_ = lean_io_promise_resolve(v_value_2058_, v_promise_2057_);
return v___x_2060_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__2___boxed(lean_object* v_promise_2061_, lean_object* v_value_2062_, lean_object* v___y_2063_){
_start:
{
lean_object* v_res_2064_; 
v_res_2064_ = l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__2(v_promise_2061_, v_value_2062_);
lean_dec(v_promise_2061_);
return v_res_2064_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__0(lean_object* v_promise_2065_, lean_object* v_____r_2066_){
_start:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2068_ = l_IO_Promise_result_x21___redArg(v_promise_2065_);
v___x_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2068_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__0___boxed(lean_object* v_promise_2070_, lean_object* v_____r_2071_, lean_object* v___y_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__0(v_promise_2070_, v_____r_2071_);
lean_dec(v_promise_2070_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__1(lean_object* v_task_u2082_2074_, lean_object* v___x_2075_, lean_object* v___x_2076_, uint8_t v___x_2077_, lean_object* v___f_2078_, lean_object* v_____r_2079_){
_start:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
lean_inc(v___x_2076_);
v___x_2081_ = l_BaseIO_chainTask___redArg(v_task_u2082_2074_, v___x_2075_, v___x_2076_, v___x_2077_);
v___x_2082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
v___x_2083_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2076_, v___x_2077_, v___x_2082_, v___f_2078_);
return v___x_2083_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__1___boxed(lean_object* v_task_u2082_2084_, lean_object* v___x_2085_, lean_object* v___x_2086_, lean_object* v___x_2087_, lean_object* v___f_2088_, lean_object* v_____r_2089_, lean_object* v___y_2090_){
_start:
{
uint8_t v___x_616__boxed_2091_; lean_object* v_res_2092_; 
v___x_616__boxed_2091_ = lean_unbox(v___x_2087_);
v_res_2092_ = l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__1(v_task_u2082_2084_, v___x_2085_, v___x_2086_, v___x_616__boxed_2091_, v___f_2088_, v_____r_2089_);
return v_res_2092_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__3(lean_object* v___f_2093_, lean_object* v___f_2094_, lean_object* v_task_u2081_2095_, lean_object* v___f_2096_, lean_object* v_task_u2082_2097_){
_start:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; uint8_t v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___f_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; 
v___x_2099_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_2099_, 0, lean_box(0));
lean_closure_set(v___x_2099_, 1, lean_box(0));
lean_closure_set(v___x_2099_, 2, v___f_2093_);
lean_closure_set(v___x_2099_, 3, lean_box(0));
v___x_2100_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2100_, 0, lean_box(0));
lean_closure_set(v___x_2100_, 1, lean_box(0));
lean_closure_set(v___x_2100_, 2, lean_box(0));
lean_closure_set(v___x_2100_, 3, v___x_2099_);
lean_closure_set(v___x_2100_, 4, v___f_2094_);
v___x_2101_ = lean_unsigned_to_nat(0u);
v___x_2102_ = 0;
lean_inc_ref(v___x_2100_);
v___x_2103_ = l_BaseIO_chainTask___redArg(v_task_u2081_2095_, v___x_2100_, v___x_2101_, v___x_2102_);
v___x_2104_ = lean_box(v___x_2102_);
v___f_2105_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2105_, 0, v_task_u2082_2097_);
lean_closure_set(v___f_2105_, 1, v___x_2100_);
lean_closure_set(v___f_2105_, 2, v___x_2101_);
lean_closure_set(v___f_2105_, 3, v___x_2104_);
lean_closure_set(v___f_2105_, 4, v___f_2096_);
v___x_2106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2103_);
v___x_2107_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2101_, v___x_2102_, v___x_2106_, v___f_2105_);
return v___x_2107_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__3___boxed(lean_object* v___f_2108_, lean_object* v___f_2109_, lean_object* v_task_u2081_2110_, lean_object* v___f_2111_, lean_object* v_task_u2082_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__3(v___f_2108_, v___f_2109_, v_task_u2081_2110_, v___f_2111_, v_task_u2082_2112_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__4(lean_object* v_y_2115_, lean_object* v_prio_2116_, lean_object* v___f_2117_, lean_object* v___f_2118_, lean_object* v___f_2119_, lean_object* v___f_2120_, lean_object* v_task_u2081_2121_){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___f_2125_; lean_object* v___x_2126_; uint8_t v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; uint8_t v___x_2130_; lean_object* v___x_2131_; 
v___x_2123_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2123_, 0, lean_box(0));
lean_closure_set(v___x_2123_, 1, v_y_2115_);
v___x_2124_ = lean_io_as_task(v___x_2123_, v_prio_2116_);
v___f_2125_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__3___boxed), 6, 4);
lean_closure_set(v___f_2125_, 0, v___f_2117_);
lean_closure_set(v___f_2125_, 1, v___f_2118_);
lean_closure_set(v___f_2125_, 2, v_task_u2081_2121_);
lean_closure_set(v___f_2125_, 3, v___f_2119_);
v___x_2126_ = lean_unsigned_to_nat(0u);
v___x_2127_ = 1;
v___x_2128_ = lean_task_bind(v___x_2124_, v___f_2120_, v___x_2126_, v___x_2127_);
v___x_2129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2128_);
v___x_2130_ = 0;
v___x_2131_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2126_, v___x_2130_, v___x_2129_, v___f_2125_);
return v___x_2131_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__4___boxed(lean_object* v_y_2132_, lean_object* v_prio_2133_, lean_object* v___f_2134_, lean_object* v___f_2135_, lean_object* v___f_2136_, lean_object* v___f_2137_, lean_object* v_task_u2081_2138_, lean_object* v___y_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__4(v_y_2132_, v_prio_2133_, v___f_2134_, v___f_2135_, v___f_2136_, v___f_2137_, v_task_u2081_2138_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__5(lean_object* v_x_2141_, lean_object* v_prio_2142_, lean_object* v_y_2143_, lean_object* v___f_2144_, lean_object* v___f_2145_, lean_object* v___f_2146_, lean_object* v_promise_2147_){
_start:
{
lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___f_2151_; lean_object* v___f_2152_; lean_object* v___f_2153_; lean_object* v___x_2154_; uint8_t v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; uint8_t v___x_2158_; lean_object* v___x_2159_; 
v___x_2149_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2149_, 0, lean_box(0));
lean_closure_set(v___x_2149_, 1, v_x_2141_);
lean_inc(v_prio_2142_);
v___x_2150_ = lean_io_as_task(v___x_2149_, v_prio_2142_);
lean_inc(v_promise_2147_);
v___f_2151_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2151_, 0, v_promise_2147_);
v___f_2152_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2152_, 0, v_promise_2147_);
v___f_2153_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_2153_, 0, v_y_2143_);
lean_closure_set(v___f_2153_, 1, v_prio_2142_);
lean_closure_set(v___f_2153_, 2, v___f_2144_);
lean_closure_set(v___f_2153_, 3, v___f_2151_);
lean_closure_set(v___f_2153_, 4, v___f_2152_);
lean_closure_set(v___f_2153_, 5, v___f_2145_);
v___x_2154_ = lean_unsigned_to_nat(0u);
v___x_2155_ = 1;
v___x_2156_ = lean_task_bind(v___x_2150_, v___f_2146_, v___x_2154_, v___x_2155_);
v___x_2157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2157_, 0, v___x_2156_);
v___x_2158_ = 0;
v___x_2159_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2154_, v___x_2158_, v___x_2157_, v___f_2153_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__5___boxed(lean_object* v_x_2160_, lean_object* v_prio_2161_, lean_object* v_y_2162_, lean_object* v___f_2163_, lean_object* v___f_2164_, lean_object* v___f_2165_, lean_object* v_promise_2166_, lean_object* v___y_2167_){
_start:
{
lean_object* v_res_2168_; 
v_res_2168_ = l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__5(v_x_2160_, v_prio_2161_, v_y_2162_, v___f_2163_, v___f_2164_, v___f_2165_, v_promise_2166_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg(lean_object* v_x_2170_, lean_object* v_y_2171_, lean_object* v_prio_2172_){
_start:
{
lean_object* v___x_2174_; lean_object* v___f_2175_; lean_object* v___f_2176_; lean_object* v___f_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; uint8_t v___x_2180_; lean_object* v___x_2181_; 
v___x_2174_ = lean_io_promise_new();
v___f_2175_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2176_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0));
v___f_2177_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2177_, 0, v_x_2170_);
lean_closure_set(v___f_2177_, 1, v_prio_2172_);
lean_closure_set(v___f_2177_, 2, v_y_2171_);
lean_closure_set(v___f_2177_, 3, v___f_2176_);
lean_closure_set(v___f_2177_, 4, v___f_2175_);
lean_closure_set(v___f_2177_, 5, v___f_2175_);
v___x_2178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2178_, 0, v___x_2174_);
v___x_2179_ = lean_unsigned_to_nat(0u);
v___x_2180_ = 0;
v___x_2181_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2179_, v___x_2180_, v___x_2178_, v___f_2177_);
return v___x_2181_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___redArg___boxed(lean_object* v_x_2182_, lean_object* v_y_2183_, lean_object* v_prio_2184_, lean_object* v_a_2185_){
_start:
{
lean_object* v_res_2186_; 
v_res_2186_ = l_Std_Internal_IO_Async_BaseAsync_race___redArg(v_x_2182_, v_y_2183_, v_prio_2184_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race(lean_object* v_00_u03b1_2187_, lean_object* v_inst_2188_, lean_object* v_x_2189_, lean_object* v_y_2190_, lean_object* v_prio_2191_){
_start:
{
lean_object* v___x_2193_; lean_object* v___f_2194_; lean_object* v___f_2195_; lean_object* v___f_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; uint8_t v___x_2199_; lean_object* v___x_2200_; 
v___x_2193_ = lean_io_promise_new();
v___f_2194_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2195_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0));
v___f_2196_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2196_, 0, v_x_2189_);
lean_closure_set(v___f_2196_, 1, v_prio_2191_);
lean_closure_set(v___f_2196_, 2, v_y_2190_);
lean_closure_set(v___f_2196_, 3, v___f_2195_);
lean_closure_set(v___f_2196_, 4, v___f_2194_);
lean_closure_set(v___f_2196_, 5, v___f_2194_);
v___x_2197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2193_);
v___x_2198_ = lean_unsigned_to_nat(0u);
v___x_2199_ = 0;
v___x_2200_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2198_, v___x_2199_, v___x_2197_, v___f_2196_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_race___boxed(lean_object* v_00_u03b1_2201_, lean_object* v_inst_2202_, lean_object* v_x_2203_, lean_object* v_y_2204_, lean_object* v_prio_2205_, lean_object* v_a_2206_){
_start:
{
lean_object* v_res_2207_; 
v_res_2207_ = l_Std_Internal_IO_Async_BaseAsync_race(v_00_u03b1_2201_, v_inst_2202_, v_x_2203_, v_y_2204_, v_prio_2205_);
lean_dec(v_inst_2202_);
return v_res_2207_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__1(lean_object* v_prio_2208_, lean_object* v___f_2209_, lean_object* v_x_2210_){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; uint8_t v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2212_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2212_, 0, lean_box(0));
lean_closure_set(v___x_2212_, 1, v_x_2210_);
v___x_2213_ = lean_io_as_task(v___x_2212_, v_prio_2208_);
v___x_2214_ = lean_unsigned_to_nat(0u);
v___x_2215_ = 1;
v___x_2216_ = lean_task_bind(v___x_2213_, v___f_2209_, v___x_2214_, v___x_2215_);
v___x_2217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2216_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_2218_, lean_object* v___f_2219_, lean_object* v_x_2220_, lean_object* v___y_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__1(v_prio_2218_, v___f_2219_, v_x_2220_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__0(lean_object* v___x_2224_, lean_object* v_tasks_2225_){
_start:
{
lean_object* v___x_2227_; size_t v_sz_2228_; size_t v___x_2229_; lean_object* v___x_218__overap_2230_; lean_object* v___x_2231_; 
v___x_2227_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0));
v_sz_2228_ = lean_array_size(v_tasks_2225_);
v___x_2229_ = ((size_t)0ULL);
v___x_218__overap_2230_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2224_, v___x_2227_, v_sz_2228_, v___x_2229_, v_tasks_2225_);
v___x_2231_ = lean_apply_1(v___x_218__overap_2230_, lean_box(0));
return v___x_2231_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___x_2232_, lean_object* v_tasks_2233_, lean_object* v___y_2234_){
_start:
{
lean_object* v_res_2235_; 
v_res_2235_ = l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__0(v___x_2232_, v_tasks_2233_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg(lean_object* v_xs_2238_, lean_object* v_prio_2239_){
_start:
{
lean_object* v___f_2241_; lean_object* v___f_2242_; lean_object* v___x_2243_; size_t v_sz_2244_; size_t v___x_2245_; lean_object* v___x_167__overap_2246_; lean_object* v___x_2247_; lean_object* v___f_2248_; lean_object* v___x_2249_; uint8_t v___x_2250_; lean_object* v___x_2251_; 
v___f_2241_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2242_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2242_, 0, v_prio_2239_);
lean_closure_set(v___f_2242_, 1, v___f_2241_);
v___x_2243_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_instMonad));
v_sz_2244_ = lean_array_size(v_xs_2238_);
v___x_2245_ = ((size_t)0ULL);
v___x_167__overap_2246_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2243_, v___f_2242_, v_sz_2244_, v___x_2245_, v_xs_2238_);
v___x_2247_ = lean_apply_1(v___x_167__overap_2246_, lean_box(0));
v___f_2248_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___closed__0));
v___x_2249_ = lean_unsigned_to_nat(0u);
v___x_2250_ = 0;
v___x_2251_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2249_, v___x_2250_, v___x_2247_, v___f_2248_);
return v___x_2251_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___boxed(lean_object* v_xs_2252_, lean_object* v_prio_2253_, lean_object* v_a_2254_){
_start:
{
lean_object* v_res_2255_; 
v_res_2255_ = l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg(v_xs_2252_, v_prio_2253_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll(lean_object* v_00_u03b1_2256_, lean_object* v_xs_2257_, lean_object* v_prio_2258_){
_start:
{
lean_object* v___f_2260_; lean_object* v___f_2261_; lean_object* v___x_2262_; size_t v_sz_2263_; size_t v___x_2264_; lean_object* v___x_188__overap_2265_; lean_object* v___x_2266_; lean_object* v___f_2267_; lean_object* v___x_2268_; uint8_t v___x_2269_; lean_object* v___x_2270_; 
v___f_2260_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2261_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2261_, 0, v_prio_2258_);
lean_closure_set(v___f_2261_, 1, v___f_2260_);
v___x_2262_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_instMonad));
v_sz_2263_ = lean_array_size(v_xs_2257_);
v___x_2264_ = ((size_t)0ULL);
v___x_188__overap_2265_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2262_, v___f_2261_, v_sz_2263_, v___x_2264_, v_xs_2257_);
v___x_2266_ = lean_apply_1(v___x_188__overap_2265_, lean_box(0));
v___f_2267_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___redArg___closed__0));
v___x_2268_ = lean_unsigned_to_nat(0u);
v___x_2269_ = 0;
v___x_2270_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2268_, v___x_2269_, v___x_2266_, v___f_2267_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll___boxed(lean_object* v_00_u03b1_2271_, lean_object* v_xs_2272_, lean_object* v_prio_2273_, lean_object* v_a_2274_){
_start:
{
lean_object* v_res_2275_; 
v_res_2275_ = l_Std_Internal_IO_Async_BaseAsync_concurrentlyAll(v_00_u03b1_2271_, v_xs_2272_, v_prio_2273_);
return v_res_2275_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__2(lean_object* v___f_2276_, lean_object* v___f_2277_, lean_object* v_task_u2081_2278_){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; uint8_t v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2280_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_2280_, 0, lean_box(0));
lean_closure_set(v___x_2280_, 1, lean_box(0));
lean_closure_set(v___x_2280_, 2, v___f_2276_);
lean_closure_set(v___x_2280_, 3, lean_box(0));
v___x_2281_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2281_, 0, lean_box(0));
lean_closure_set(v___x_2281_, 1, lean_box(0));
lean_closure_set(v___x_2281_, 2, lean_box(0));
lean_closure_set(v___x_2281_, 3, v___x_2280_);
lean_closure_set(v___x_2281_, 4, v___f_2277_);
v___x_2282_ = lean_unsigned_to_nat(0u);
v___x_2283_ = 0;
v___x_2284_ = l_BaseIO_chainTask___redArg(v_task_u2081_2278_, v___x_2281_, v___x_2282_, v___x_2283_);
v___x_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2284_);
return v___x_2285_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__2___boxed(lean_object* v___f_2286_, lean_object* v___f_2287_, lean_object* v_task_u2081_2288_, lean_object* v___y_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__2(v___f_2286_, v___f_2287_, v_task_u2081_2288_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__0(lean_object* v_prio_2291_, lean_object* v___f_2292_, lean_object* v___f_2293_, lean_object* v_x_2294_){
_start:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; uint8_t v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; uint8_t v___x_2302_; lean_object* v___x_2303_; 
v___x_2296_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2296_, 0, lean_box(0));
lean_closure_set(v___x_2296_, 1, v_x_2294_);
v___x_2297_ = lean_io_as_task(v___x_2296_, v_prio_2291_);
v___x_2298_ = lean_unsigned_to_nat(0u);
v___x_2299_ = 1;
v___x_2300_ = lean_task_bind(v___x_2297_, v___f_2292_, v___x_2298_, v___x_2299_);
v___x_2301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2300_);
v___x_2302_ = 0;
v___x_2303_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2298_, v___x_2302_, v___x_2301_, v___f_2293_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__0___boxed(lean_object* v_prio_2304_, lean_object* v___f_2305_, lean_object* v___f_2306_, lean_object* v_x_2307_, lean_object* v___y_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__0(v_prio_2304_, v___f_2305_, v___f_2306_, v_x_2307_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__3(lean_object* v___f_2310_, lean_object* v_prio_2311_, lean_object* v___f_2312_, lean_object* v_inst_2313_, lean_object* v_xs_2314_, lean_object* v_promise_2315_){
_start:
{
lean_object* v___f_2317_; lean_object* v___f_2318_; lean_object* v___f_2319_; lean_object* v___x_2320_; lean_object* v___f_2321_; lean_object* v___x_2322_; uint8_t v___x_2323_; lean_object* v___x_2324_; 
lean_inc(v_promise_2315_);
v___f_2317_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2317_, 0, v_promise_2315_);
v___f_2318_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_2318_, 0, v___f_2310_);
lean_closure_set(v___f_2318_, 1, v___f_2317_);
v___f_2319_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2319_, 0, v_prio_2311_);
lean_closure_set(v___f_2319_, 1, v___f_2312_);
lean_closure_set(v___f_2319_, 2, v___f_2318_);
v___x_2320_ = lean_apply_3(v_inst_2313_, v_xs_2314_, v___f_2319_, lean_box(0));
v___f_2321_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2321_, 0, v_promise_2315_);
v___x_2322_ = lean_unsigned_to_nat(0u);
v___x_2323_ = 0;
v___x_2324_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2322_, v___x_2323_, v___x_2320_, v___f_2321_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__3___boxed(lean_object* v___f_2325_, lean_object* v_prio_2326_, lean_object* v___f_2327_, lean_object* v_inst_2328_, lean_object* v_xs_2329_, lean_object* v_promise_2330_, lean_object* v___y_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__3(v___f_2325_, v_prio_2326_, v___f_2327_, v_inst_2328_, v_xs_2329_, v_promise_2330_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg(lean_object* v_inst_2333_, lean_object* v_xs_2334_, lean_object* v_prio_2335_){
_start:
{
lean_object* v___x_2337_; lean_object* v___f_2338_; lean_object* v___f_2339_; lean_object* v___f_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; uint8_t v___x_2343_; lean_object* v___x_2344_; 
v___x_2337_ = lean_io_promise_new();
v___f_2338_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2339_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0));
v___f_2340_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v___f_2340_, 0, v___f_2339_);
lean_closure_set(v___f_2340_, 1, v_prio_2335_);
lean_closure_set(v___f_2340_, 2, v___f_2338_);
lean_closure_set(v___f_2340_, 3, v_inst_2333_);
lean_closure_set(v___f_2340_, 4, v_xs_2334_);
v___x_2341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2337_);
v___x_2342_ = lean_unsigned_to_nat(0u);
v___x_2343_ = 0;
v___x_2344_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2342_, v___x_2343_, v___x_2341_, v___f_2340_);
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___boxed(lean_object* v_inst_2345_, lean_object* v_xs_2346_, lean_object* v_prio_2347_, lean_object* v_a_2348_){
_start:
{
lean_object* v_res_2349_; 
v_res_2349_ = l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg(v_inst_2345_, v_xs_2346_, v_prio_2347_);
return v_res_2349_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll(lean_object* v_00_u03b1_2350_, lean_object* v_c_2351_, lean_object* v_inst_2352_, lean_object* v_inst_2353_, lean_object* v_xs_2354_, lean_object* v_prio_2355_){
_start:
{
lean_object* v___x_2357_; lean_object* v___f_2358_; lean_object* v___f_2359_; lean_object* v___f_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; uint8_t v___x_2363_; lean_object* v___x_2364_; 
v___x_2357_ = lean_io_promise_new();
v___f_2358_ = ((lean_object*)(l_Std_Internal_IO_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2359_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0));
v___f_2360_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_raceAll___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v___f_2360_, 0, v___f_2359_);
lean_closure_set(v___f_2360_, 1, v_prio_2355_);
lean_closure_set(v___f_2360_, 2, v___f_2358_);
lean_closure_set(v___f_2360_, 3, v_inst_2353_);
lean_closure_set(v___f_2360_, 4, v_xs_2354_);
v___x_2361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2361_, 0, v___x_2357_);
v___x_2362_ = lean_unsigned_to_nat(0u);
v___x_2363_ = 0;
v___x_2364_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2362_, v___x_2363_, v___x_2361_, v___f_2360_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_BaseAsync_raceAll___boxed(lean_object* v_00_u03b1_2365_, lean_object* v_c_2366_, lean_object* v_inst_2367_, lean_object* v_inst_2368_, lean_object* v_xs_2369_, lean_object* v_prio_2370_, lean_object* v_a_2371_){
_start:
{
lean_object* v_res_2372_; 
v_res_2372_ = l_Std_Internal_IO_Async_BaseAsync_raceAll(v_00_u03b1_2365_, v_c_2366_, v_inst_2367_, v_inst_2368_, v_xs_2369_, v_prio_2370_);
lean_dec(v_inst_2367_);
return v_res_2372_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toBaseIO___redArg(lean_object* v_x_2373_){
_start:
{
lean_object* v___x_2375_; 
v___x_2375_ = lean_apply_1(v_x_2373_, lean_box(0));
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v_a_2376_; lean_object* v___x_2377_; 
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
lean_inc(v_a_2376_);
lean_dec_ref(v___x_2375_);
v___x_2377_ = lean_task_pure(v_a_2376_);
return v___x_2377_;
}
else
{
lean_object* v_a_2378_; 
v_a_2378_ = lean_ctor_get(v___x_2375_, 0);
lean_inc_ref(v_a_2378_);
lean_dec_ref(v___x_2375_);
return v_a_2378_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toBaseIO___redArg___boxed(lean_object* v_x_2379_, lean_object* v_a_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l_Std_Internal_IO_Async_EAsync_toBaseIO___redArg(v_x_2379_);
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toBaseIO(lean_object* v_00_u03b5_2382_, lean_object* v_00_u03b1_2383_, lean_object* v_x_2384_){
_start:
{
lean_object* v___x_2386_; 
v___x_2386_ = lean_apply_1(v_x_2384_, lean_box(0));
if (lean_obj_tag(v___x_2386_) == 0)
{
lean_object* v_a_2387_; lean_object* v___x_2388_; 
v_a_2387_ = lean_ctor_get(v___x_2386_, 0);
lean_inc(v_a_2387_);
lean_dec_ref(v___x_2386_);
v___x_2388_ = lean_task_pure(v_a_2387_);
return v___x_2388_;
}
else
{
lean_object* v_a_2389_; 
v_a_2389_ = lean_ctor_get(v___x_2386_, 0);
lean_inc_ref(v_a_2389_);
lean_dec_ref(v___x_2386_);
return v_a_2389_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toBaseIO___boxed(lean_object* v_00_u03b5_2390_, lean_object* v_00_u03b1_2391_, lean_object* v_x_2392_, lean_object* v_a_2393_){
_start:
{
lean_object* v_res_2394_; 
v_res_2394_ = l_Std_Internal_IO_Async_EAsync_toBaseIO(v_00_u03b5_2390_, v_00_u03b1_2391_, v_x_2392_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofTask___redArg(lean_object* v_x_2395_){
_start:
{
lean_object* v___x_2397_; 
v___x_2397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2397_, 0, v_x_2395_);
return v___x_2397_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofTask___redArg___boxed(lean_object* v_x_2398_, lean_object* v_a_2399_){
_start:
{
lean_object* v_res_2400_; 
v_res_2400_ = l_Std_Internal_IO_Async_EAsync_ofTask___redArg(v_x_2398_);
return v_res_2400_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofTask(lean_object* v_00_u03b5_2401_, lean_object* v_00_u03b1_2402_, lean_object* v_x_2403_){
_start:
{
lean_object* v___x_2405_; 
v___x_2405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2405_, 0, v_x_2403_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofTask___boxed(lean_object* v_00_u03b5_2406_, lean_object* v_00_u03b1_2407_, lean_object* v_x_2408_, lean_object* v_a_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_Std_Internal_IO_Async_EAsync_ofTask(v_00_u03b5_2406_, v_00_u03b1_2407_, v_x_2408_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toEIO___redArg(lean_object* v_x_2411_){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = lean_apply_1(v_x_2411_, lean_box(0));
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2422_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2416_ = v___x_2413_;
v_isShared_2417_ = v_isSharedCheck_2422_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2413_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2422_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2418_; lean_object* v___x_2420_; 
v___x_2418_ = lean_task_pure(v_a_2414_);
if (v_isShared_2417_ == 0)
{
lean_ctor_set(v___x_2416_, 0, v___x_2418_);
v___x_2420_ = v___x_2416_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v___x_2418_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
else
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2430_; 
v_a_2423_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2425_ = v___x_2413_;
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2413_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2428_; 
if (v_isShared_2426_ == 0)
{
lean_ctor_set_tag(v___x_2425_, 0);
v___x_2428_ = v___x_2425_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_a_2423_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
return v___x_2428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toEIO___redArg___boxed(lean_object* v_x_2431_, lean_object* v_a_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l_Std_Internal_IO_Async_EAsync_toEIO___redArg(v_x_2431_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toEIO(lean_object* v_00_u03b5_2434_, lean_object* v_00_u03b1_2435_, lean_object* v_x_2436_){
_start:
{
lean_object* v___x_2438_; 
v___x_2438_ = lean_apply_1(v_x_2436_, lean_box(0));
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_object* v_a_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2447_; 
v_a_2439_ = lean_ctor_get(v___x_2438_, 0);
v_isSharedCheck_2447_ = !lean_is_exclusive(v___x_2438_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2441_ = v___x_2438_;
v_isShared_2442_ = v_isSharedCheck_2447_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_a_2439_);
lean_dec(v___x_2438_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2447_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
lean_object* v___x_2443_; lean_object* v___x_2445_; 
v___x_2443_ = lean_task_pure(v_a_2439_);
if (v_isShared_2442_ == 0)
{
lean_ctor_set(v___x_2441_, 0, v___x_2443_);
v___x_2445_ = v___x_2441_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v___x_2443_);
v___x_2445_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
return v___x_2445_;
}
}
}
else
{
lean_object* v_a_2448_; lean_object* v___x_2450_; uint8_t v_isShared_2451_; uint8_t v_isSharedCheck_2455_; 
v_a_2448_ = lean_ctor_get(v___x_2438_, 0);
v_isSharedCheck_2455_ = !lean_is_exclusive(v___x_2438_);
if (v_isSharedCheck_2455_ == 0)
{
v___x_2450_ = v___x_2438_;
v_isShared_2451_ = v_isSharedCheck_2455_;
goto v_resetjp_2449_;
}
else
{
lean_inc(v_a_2448_);
lean_dec(v___x_2438_);
v___x_2450_ = lean_box(0);
v_isShared_2451_ = v_isSharedCheck_2455_;
goto v_resetjp_2449_;
}
v_resetjp_2449_:
{
lean_object* v___x_2453_; 
if (v_isShared_2451_ == 0)
{
lean_ctor_set_tag(v___x_2450_, 0);
v___x_2453_ = v___x_2450_;
goto v_reusejp_2452_;
}
else
{
lean_object* v_reuseFailAlloc_2454_; 
v_reuseFailAlloc_2454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2454_, 0, v_a_2448_);
v___x_2453_ = v_reuseFailAlloc_2454_;
goto v_reusejp_2452_;
}
v_reusejp_2452_:
{
return v___x_2453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_toEIO___boxed(lean_object* v_00_u03b5_2456_, lean_object* v_00_u03b1_2457_, lean_object* v_x_2458_, lean_object* v_a_2459_){
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Std_Internal_IO_Async_EAsync_toEIO(v_00_u03b5_2456_, v_00_u03b1_2457_, v_x_2458_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofETask___redArg(lean_object* v_x_2461_){
_start:
{
lean_object* v___x_2463_; 
v___x_2463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2463_, 0, v_x_2461_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofETask___redArg___boxed(lean_object* v_x_2464_, lean_object* v_a_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l_Std_Internal_IO_Async_EAsync_ofETask___redArg(v_x_2464_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofETask(lean_object* v_00_u03b5_2467_, lean_object* v_00_u03b1_2468_, lean_object* v_x_2469_){
_start:
{
lean_object* v___x_2471_; 
v___x_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2471_, 0, v_x_2469_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofETask___boxed(lean_object* v_00_u03b5_2472_, lean_object* v_00_u03b1_2473_, lean_object* v_x_2474_, lean_object* v_a_2475_){
_start:
{
lean_object* v_res_2476_; 
v_res_2476_ = l_Std_Internal_IO_Async_EAsync_ofETask(v_00_u03b5_2472_, v_00_u03b1_2473_, v_x_2474_);
return v_res_2476_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_pure___redArg(lean_object* v_a_2477_){
_start:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; 
v___x_2479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2479_, 0, v_a_2477_);
v___x_2480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2480_, 0, v___x_2479_);
return v___x_2480_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_pure___redArg___boxed(lean_object* v_a_2481_, lean_object* v_a_2482_){
_start:
{
lean_object* v_res_2483_; 
v_res_2483_ = l_Std_Internal_IO_Async_EAsync_pure___redArg(v_a_2481_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_pure(lean_object* v_00_u03b1_2484_, lean_object* v_00_u03b5_2485_, lean_object* v_a_2486_){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2488_, 0, v_a_2486_);
v___x_2489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2488_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_pure___boxed(lean_object* v_00_u03b1_2490_, lean_object* v_00_u03b5_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l_Std_Internal_IO_Async_EAsync_pure(v_00_u03b1_2490_, v_00_u03b5_2491_, v_a_2492_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_map___redArg(lean_object* v_f_2495_, lean_object* v_self_2496_){
_start:
{
lean_object* v___x_2498_; lean_object* v___y_2500_; 
v___x_2498_ = lean_apply_1(v_self_2496_, lean_box(0));
if (lean_obj_tag(v___x_2498_) == 0)
{
lean_object* v_a_2502_; 
v_a_2502_ = lean_ctor_get(v___x_2498_, 0);
lean_inc(v_a_2502_);
lean_dec_ref(v___x_2498_);
if (lean_obj_tag(v_a_2502_) == 0)
{
lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2510_; 
lean_dec(v_f_2495_);
v_a_2503_ = lean_ctor_get(v_a_2502_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v_a_2502_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2505_ = v_a_2502_;
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v_a_2502_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2508_; 
if (v_isShared_2506_ == 0)
{
v___x_2508_ = v___x_2505_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_a_2503_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
v___y_2500_ = v___x_2508_;
goto v___jp_2499_;
}
}
}
else
{
lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2519_; 
v_a_2511_ = lean_ctor_get(v_a_2502_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v_a_2502_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2513_ = v_a_2502_;
v_isShared_2514_ = v_isSharedCheck_2519_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v_a_2502_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2519_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2515_; lean_object* v___x_2517_; 
v___x_2515_ = lean_apply_1(v_f_2495_, v_a_2511_);
if (v_isShared_2514_ == 0)
{
lean_ctor_set(v___x_2513_, 0, v___x_2515_);
v___x_2517_ = v___x_2513_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v___x_2515_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
v___y_2500_ = v___x_2517_;
goto v___jp_2499_;
}
}
}
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2531_; 
v_a_2520_ = lean_ctor_get(v___x_2498_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2498_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2522_ = v___x_2498_;
v_isShared_2523_ = v_isSharedCheck_2531_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2498_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2531_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; uint8_t v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2529_; 
v___x_2524_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_2524_, 0, lean_box(0));
lean_closure_set(v___x_2524_, 1, lean_box(0));
lean_closure_set(v___x_2524_, 2, lean_box(0));
lean_closure_set(v___x_2524_, 3, v_f_2495_);
v___x_2525_ = lean_unsigned_to_nat(0u);
v___x_2526_ = 0;
v___x_2527_ = lean_task_map(v___x_2524_, v_a_2520_, v___x_2525_, v___x_2526_);
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 0, v___x_2527_);
v___x_2529_ = v___x_2522_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v___x_2527_);
v___x_2529_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
return v___x_2529_;
}
}
}
v___jp_2499_:
{
lean_object* v___x_2501_; 
v___x_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2501_, 0, v___y_2500_);
return v___x_2501_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_map___redArg___boxed(lean_object* v_f_2532_, lean_object* v_self_2533_, lean_object* v_a_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Std_Internal_IO_Async_EAsync_map___redArg(v_f_2532_, v_self_2533_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_map(lean_object* v_00_u03b1_2536_, lean_object* v_00_u03b2_2537_, lean_object* v_00_u03b5_2538_, lean_object* v_f_2539_, lean_object* v_self_2540_){
_start:
{
lean_object* v___x_2542_; lean_object* v___y_2544_; 
v___x_2542_ = lean_apply_1(v_self_2540_, lean_box(0));
if (lean_obj_tag(v___x_2542_) == 0)
{
lean_object* v_a_2546_; 
v_a_2546_ = lean_ctor_get(v___x_2542_, 0);
lean_inc(v_a_2546_);
lean_dec_ref(v___x_2542_);
if (lean_obj_tag(v_a_2546_) == 0)
{
lean_object* v_a_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2554_; 
lean_dec(v_f_2539_);
v_a_2547_ = lean_ctor_get(v_a_2546_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v_a_2546_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2549_ = v_a_2546_;
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_a_2547_);
lean_dec(v_a_2546_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2552_; 
if (v_isShared_2550_ == 0)
{
v___x_2552_ = v___x_2549_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_a_2547_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
v___y_2544_ = v___x_2552_;
goto v___jp_2543_;
}
}
}
else
{
lean_object* v_a_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2563_; 
v_a_2555_ = lean_ctor_get(v_a_2546_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v_a_2546_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2557_ = v_a_2546_;
v_isShared_2558_ = v_isSharedCheck_2563_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_a_2555_);
lean_dec(v_a_2546_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2563_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2559_; lean_object* v___x_2561_; 
v___x_2559_ = lean_apply_1(v_f_2539_, v_a_2555_);
if (v_isShared_2558_ == 0)
{
lean_ctor_set(v___x_2557_, 0, v___x_2559_);
v___x_2561_ = v___x_2557_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v___x_2559_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
v___y_2544_ = v___x_2561_;
goto v___jp_2543_;
}
}
}
}
else
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2575_; 
v_a_2564_ = lean_ctor_get(v___x_2542_, 0);
v_isSharedCheck_2575_ = !lean_is_exclusive(v___x_2542_);
if (v_isSharedCheck_2575_ == 0)
{
v___x_2566_ = v___x_2542_;
v_isShared_2567_ = v_isSharedCheck_2575_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v___x_2542_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2575_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; uint8_t v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2573_; 
v___x_2568_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_2568_, 0, lean_box(0));
lean_closure_set(v___x_2568_, 1, lean_box(0));
lean_closure_set(v___x_2568_, 2, lean_box(0));
lean_closure_set(v___x_2568_, 3, v_f_2539_);
v___x_2569_ = lean_unsigned_to_nat(0u);
v___x_2570_ = 0;
v___x_2571_ = lean_task_map(v___x_2568_, v_a_2564_, v___x_2569_, v___x_2570_);
if (v_isShared_2567_ == 0)
{
lean_ctor_set(v___x_2566_, 0, v___x_2571_);
v___x_2573_ = v___x_2566_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v___x_2571_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
v___jp_2543_:
{
lean_object* v___x_2545_; 
v___x_2545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2545_, 0, v___y_2544_);
return v___x_2545_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_map___boxed(lean_object* v_00_u03b1_2576_, lean_object* v_00_u03b2_2577_, lean_object* v_00_u03b5_2578_, lean_object* v_f_2579_, lean_object* v_self_2580_, lean_object* v_a_2581_){
_start:
{
lean_object* v_res_2582_; 
v_res_2582_ = l_Std_Internal_IO_Async_EAsync_map(v_00_u03b1_2576_, v_00_u03b2_2577_, v_00_u03b5_2578_, v_f_2579_, v_self_2580_);
return v_res_2582_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_bind___redArg___lam__0(lean_object* v_f_2583_, lean_object* v_x_2584_){
_start:
{
if (lean_obj_tag(v_x_2584_) == 0)
{
lean_object* v_a_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2594_; 
lean_dec_ref(v_f_2583_);
v_a_2586_ = lean_ctor_get(v_x_2584_, 0);
v_isSharedCheck_2594_ = !lean_is_exclusive(v_x_2584_);
if (v_isSharedCheck_2594_ == 0)
{
v___x_2588_ = v_x_2584_;
v_isShared_2589_ = v_isSharedCheck_2594_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_a_2586_);
lean_dec(v_x_2584_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2594_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v___x_2591_; 
if (v_isShared_2589_ == 0)
{
v___x_2591_ = v___x_2588_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_a_2586_);
v___x_2591_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
lean_object* v___x_2592_; 
v___x_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
return v___x_2592_;
}
}
}
else
{
lean_object* v_a_2595_; lean_object* v___x_2596_; 
v_a_2595_ = lean_ctor_get(v_x_2584_, 0);
lean_inc(v_a_2595_);
lean_dec_ref(v_x_2584_);
v___x_2596_ = lean_apply_2(v_f_2583_, v_a_2595_, lean_box(0));
return v___x_2596_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_bind___redArg___lam__0___boxed(lean_object* v_f_2597_, lean_object* v_x_2598_, lean_object* v___y_2599_){
_start:
{
lean_object* v_res_2600_; 
v_res_2600_ = l_Std_Internal_IO_Async_EAsync_bind___redArg___lam__0(v_f_2597_, v_x_2598_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_bind___redArg(lean_object* v_self_2601_, lean_object* v_f_2602_){
_start:
{
lean_object* v___x_2604_; lean_object* v___f_2605_; lean_object* v___x_2606_; uint8_t v___x_2607_; lean_object* v___x_2608_; 
v___x_2604_ = lean_apply_1(v_self_2601_, lean_box(0));
v___f_2605_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_bind___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2605_, 0, v_f_2602_);
v___x_2606_ = lean_unsigned_to_nat(0u);
v___x_2607_ = 0;
v___x_2608_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2606_, v___x_2607_, v___x_2604_, v___f_2605_);
return v___x_2608_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_bind___redArg___boxed(lean_object* v_self_2609_, lean_object* v_f_2610_, lean_object* v_a_2611_){
_start:
{
lean_object* v_res_2612_; 
v_res_2612_ = l_Std_Internal_IO_Async_EAsync_bind___redArg(v_self_2609_, v_f_2610_);
return v_res_2612_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_bind(lean_object* v_00_u03b5_2613_, lean_object* v_00_u03b1_2614_, lean_object* v_00_u03b2_2615_, lean_object* v_self_2616_, lean_object* v_f_2617_){
_start:
{
lean_object* v___x_2619_; lean_object* v___f_2620_; lean_object* v___x_2621_; uint8_t v___x_2622_; lean_object* v___x_2623_; 
v___x_2619_ = lean_apply_1(v_self_2616_, lean_box(0));
v___f_2620_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_bind___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2620_, 0, v_f_2617_);
v___x_2621_ = lean_unsigned_to_nat(0u);
v___x_2622_ = 0;
v___x_2623_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2621_, v___x_2622_, v___x_2619_, v___f_2620_);
return v___x_2623_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_bind___boxed(lean_object* v_00_u03b5_2624_, lean_object* v_00_u03b1_2625_, lean_object* v_00_u03b2_2626_, lean_object* v_self_2627_, lean_object* v_f_2628_, lean_object* v_a_2629_){
_start:
{
lean_object* v_res_2630_; 
v_res_2630_ = l_Std_Internal_IO_Async_EAsync_bind(v_00_u03b5_2624_, v_00_u03b1_2625_, v_00_u03b2_2626_, v_self_2627_, v_f_2628_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_lift___redArg(lean_object* v_x_2631_){
_start:
{
lean_object* v_val_2634_; lean_object* v___x_2636_; 
v___x_2636_ = lean_apply_1(v_x_2631_, lean_box(0));
if (lean_obj_tag(v___x_2636_) == 0)
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2644_; 
v_a_2637_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_2644_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2644_ == 0)
{
v___x_2639_ = v___x_2636_;
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2636_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___x_2642_; 
if (v_isShared_2640_ == 0)
{
lean_ctor_set_tag(v___x_2639_, 1);
v___x_2642_ = v___x_2639_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v_a_2637_);
v___x_2642_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
v_val_2634_ = v___x_2642_;
goto v___jp_2633_;
}
}
}
else
{
lean_object* v_a_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2652_; 
v_a_2645_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2647_ = v___x_2636_;
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_a_2645_);
lean_dec(v___x_2636_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2650_; 
if (v_isShared_2648_ == 0)
{
lean_ctor_set_tag(v___x_2647_, 0);
v___x_2650_ = v___x_2647_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_a_2645_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
v_val_2634_ = v___x_2650_;
goto v___jp_2633_;
}
}
}
v___jp_2633_:
{
lean_object* v___x_2635_; 
v___x_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2635_, 0, v_val_2634_);
return v___x_2635_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_lift___redArg___boxed(lean_object* v_x_2653_, lean_object* v_a_2654_){
_start:
{
lean_object* v_res_2655_; 
v_res_2655_ = l_Std_Internal_IO_Async_EAsync_lift___redArg(v_x_2653_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_lift(lean_object* v_00_u03b5_2656_, lean_object* v_00_u03b1_2657_, lean_object* v_x_2658_){
_start:
{
lean_object* v_val_2661_; lean_object* v___x_2663_; 
v___x_2663_ = lean_apply_1(v_x_2658_, lean_box(0));
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v_a_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2671_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2671_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2666_ = v___x_2663_;
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_a_2664_);
lean_dec(v___x_2663_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2669_; 
if (v_isShared_2667_ == 0)
{
lean_ctor_set_tag(v___x_2666_, 1);
v___x_2669_ = v___x_2666_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v_a_2664_);
v___x_2669_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
v_val_2661_ = v___x_2669_;
goto v___jp_2660_;
}
}
}
else
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2679_; 
v_a_2672_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2674_ = v___x_2663_;
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2663_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2677_; 
if (v_isShared_2675_ == 0)
{
lean_ctor_set_tag(v___x_2674_, 0);
v___x_2677_ = v___x_2674_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2672_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
v_val_2661_ = v___x_2677_;
goto v___jp_2660_;
}
}
}
v___jp_2660_:
{
lean_object* v___x_2662_; 
v___x_2662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2662_, 0, v_val_2661_);
return v___x_2662_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_lift___boxed(lean_object* v_00_u03b5_2680_, lean_object* v_00_u03b1_2681_, lean_object* v_x_2682_, lean_object* v_a_2683_){
_start:
{
lean_object* v_res_2684_; 
v_res_2684_ = l_Std_Internal_IO_Async_EAsync_lift(v_00_u03b5_2680_, v_00_u03b1_2681_, v_x_2682_);
return v_res_2684_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_wait___redArg(lean_object* v_self_2685_){
_start:
{
lean_object* v___x_2687_; lean_object* v_val_2689_; 
v___x_2687_ = lean_apply_1(v_self_2685_, lean_box(0));
if (lean_obj_tag(v___x_2687_) == 0)
{
lean_object* v_a_2707_; lean_object* v___x_2708_; 
v_a_2707_ = lean_ctor_get(v___x_2687_, 0);
lean_inc(v_a_2707_);
lean_dec_ref(v___x_2687_);
v___x_2708_ = lean_task_pure(v_a_2707_);
v_val_2689_ = v___x_2708_;
goto v___jp_2688_;
}
else
{
lean_object* v_a_2709_; 
v_a_2709_ = lean_ctor_get(v___x_2687_, 0);
lean_inc_ref(v_a_2709_);
lean_dec_ref(v___x_2687_);
v_val_2689_ = v_a_2709_;
goto v___jp_2688_;
}
v___jp_2688_:
{
lean_object* v___x_2690_; 
v___x_2690_ = lean_task_get_own(v_val_2689_);
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
v_a_2691_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2690_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2690_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
lean_ctor_set_tag(v___x_2693_, 1);
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
else
{
lean_object* v_a_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2706_; 
v_a_2699_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2706_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2706_ == 0)
{
v___x_2701_ = v___x_2690_;
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_a_2699_);
lean_dec(v___x_2690_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2704_; 
if (v_isShared_2702_ == 0)
{
lean_ctor_set_tag(v___x_2701_, 0);
v___x_2704_ = v___x_2701_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_a_2699_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_wait___redArg___boxed(lean_object* v_self_2710_, lean_object* v_a_2711_){
_start:
{
lean_object* v_res_2712_; 
v_res_2712_ = l_Std_Internal_IO_Async_EAsync_wait___redArg(v_self_2710_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_wait(lean_object* v_00_u03b5_2713_, lean_object* v_00_u03b1_2714_, lean_object* v_self_2715_){
_start:
{
lean_object* v_val_2718_; lean_object* v___x_2736_; 
v___x_2736_ = lean_apply_1(v_self_2715_, lean_box(0));
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v_a_2737_; lean_object* v___x_2738_; 
v_a_2737_ = lean_ctor_get(v___x_2736_, 0);
lean_inc(v_a_2737_);
lean_dec_ref(v___x_2736_);
v___x_2738_ = lean_task_pure(v_a_2737_);
v_val_2718_ = v___x_2738_;
goto v___jp_2717_;
}
else
{
lean_object* v_a_2739_; 
v_a_2739_ = lean_ctor_get(v___x_2736_, 0);
lean_inc_ref(v_a_2739_);
lean_dec_ref(v___x_2736_);
v_val_2718_ = v_a_2739_;
goto v___jp_2717_;
}
v___jp_2717_:
{
lean_object* v___x_2719_; 
v___x_2719_ = lean_task_get_own(v_val_2718_);
if (lean_obj_tag(v___x_2719_) == 0)
{
lean_object* v_a_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2727_; 
v_a_2720_ = lean_ctor_get(v___x_2719_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2722_ = v___x_2719_;
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_a_2720_);
lean_dec(v___x_2719_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___x_2725_; 
if (v_isShared_2723_ == 0)
{
lean_ctor_set_tag(v___x_2722_, 1);
v___x_2725_ = v___x_2722_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v_a_2720_);
v___x_2725_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
return v___x_2725_;
}
}
}
else
{
lean_object* v_a_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2735_; 
v_a_2728_ = lean_ctor_get(v___x_2719_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2730_ = v___x_2719_;
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_a_2728_);
lean_dec(v___x_2719_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
lean_object* v___x_2733_; 
if (v_isShared_2731_ == 0)
{
lean_ctor_set_tag(v___x_2730_, 0);
v___x_2733_ = v___x_2730_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v_a_2728_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_wait___boxed(lean_object* v_00_u03b5_2740_, lean_object* v_00_u03b1_2741_, lean_object* v_self_2742_, lean_object* v_a_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l_Std_Internal_IO_Async_EAsync_wait(v_00_u03b5_2740_, v_00_u03b1_2741_, v_self_2742_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_asTask___redArg___lam__0(lean_object* v_x_2745_){
_start:
{
if (lean_obj_tag(v_x_2745_) == 0)
{
lean_object* v_a_2746_; lean_object* v___x_2747_; 
v_a_2746_ = lean_ctor_get(v_x_2745_, 0);
lean_inc(v_a_2746_);
lean_dec_ref(v_x_2745_);
v___x_2747_ = lean_task_pure(v_a_2746_);
return v___x_2747_;
}
else
{
lean_object* v_a_2748_; 
v_a_2748_ = lean_ctor_get(v_x_2745_, 0);
lean_inc_ref(v_a_2748_);
lean_dec_ref(v_x_2745_);
return v_a_2748_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_asTask___redArg(lean_object* v_x_2750_, lean_object* v_prio_2751_){
_start:
{
lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___f_2755_; lean_object* v___x_2756_; uint8_t v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2753_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2753_, 0, lean_box(0));
lean_closure_set(v___x_2753_, 1, v_x_2750_);
v___x_2754_ = lean_io_as_task(v___x_2753_, v_prio_2751_);
v___f_2755_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___x_2756_ = lean_unsigned_to_nat(0u);
v___x_2757_ = 1;
v___x_2758_ = lean_task_bind(v___x_2754_, v___f_2755_, v___x_2756_, v___x_2757_);
v___x_2759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2758_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_asTask___redArg___boxed(lean_object* v_x_2760_, lean_object* v_prio_2761_, lean_object* v_a_2762_){
_start:
{
lean_object* v_res_2763_; 
v_res_2763_ = l_Std_Internal_IO_Async_EAsync_asTask___redArg(v_x_2760_, v_prio_2761_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_asTask(lean_object* v_00_u03b5_2764_, lean_object* v_00_u03b1_2765_, lean_object* v_x_2766_, lean_object* v_prio_2767_){
_start:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___f_2771_; lean_object* v___x_2772_; uint8_t v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2769_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2769_, 0, lean_box(0));
lean_closure_set(v___x_2769_, 1, v_x_2766_);
v___x_2770_ = lean_io_as_task(v___x_2769_, v_prio_2767_);
v___f_2771_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___x_2772_ = lean_unsigned_to_nat(0u);
v___x_2773_ = 1;
v___x_2774_ = lean_task_bind(v___x_2770_, v___f_2771_, v___x_2772_, v___x_2773_);
v___x_2775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2774_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_asTask___boxed(lean_object* v_00_u03b5_2776_, lean_object* v_00_u03b1_2777_, lean_object* v_x_2778_, lean_object* v_prio_2779_, lean_object* v_a_2780_){
_start:
{
lean_object* v_res_2781_; 
v_res_2781_ = l_Std_Internal_IO_Async_EAsync_asTask(v_00_u03b5_2776_, v_00_u03b1_2777_, v_x_2778_, v_prio_2779_);
return v_res_2781_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_block___redArg(lean_object* v_x_2782_, lean_object* v_prio_2783_){
_start:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___f_2787_; lean_object* v___x_2788_; uint8_t v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2785_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2785_, 0, lean_box(0));
lean_closure_set(v___x_2785_, 1, v_x_2782_);
v___x_2786_ = lean_io_as_task(v___x_2785_, v_prio_2783_);
v___f_2787_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___x_2788_ = lean_unsigned_to_nat(0u);
v___x_2789_ = 1;
v___x_2790_ = lean_task_bind(v___x_2786_, v___f_2787_, v___x_2788_, v___x_2789_);
v___x_2791_ = lean_task_get_own(v___x_2790_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2799_; 
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
v_isSharedCheck_2799_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2799_ == 0)
{
v___x_2794_ = v___x_2791_;
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v___x_2791_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2797_; 
if (v_isShared_2795_ == 0)
{
lean_ctor_set_tag(v___x_2794_, 1);
v___x_2797_ = v___x_2794_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_a_2792_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
}
else
{
lean_object* v_a_2800_; lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2807_; 
v_a_2800_ = lean_ctor_get(v___x_2791_, 0);
v_isSharedCheck_2807_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2807_ == 0)
{
v___x_2802_ = v___x_2791_;
v_isShared_2803_ = v_isSharedCheck_2807_;
goto v_resetjp_2801_;
}
else
{
lean_inc(v_a_2800_);
lean_dec(v___x_2791_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2807_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v___x_2805_; 
if (v_isShared_2803_ == 0)
{
lean_ctor_set_tag(v___x_2802_, 0);
v___x_2805_ = v___x_2802_;
goto v_reusejp_2804_;
}
else
{
lean_object* v_reuseFailAlloc_2806_; 
v_reuseFailAlloc_2806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2806_, 0, v_a_2800_);
v___x_2805_ = v_reuseFailAlloc_2806_;
goto v_reusejp_2804_;
}
v_reusejp_2804_:
{
return v___x_2805_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_block___redArg___boxed(lean_object* v_x_2808_, lean_object* v_prio_2809_, lean_object* v_a_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_Std_Internal_IO_Async_EAsync_block___redArg(v_x_2808_, v_prio_2809_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_block(lean_object* v_00_u03b5_2812_, lean_object* v_00_u03b1_2813_, lean_object* v_x_2814_, lean_object* v_prio_2815_){
_start:
{
lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___f_2819_; lean_object* v___x_2820_; uint8_t v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; 
v___x_2817_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2817_, 0, lean_box(0));
lean_closure_set(v___x_2817_, 1, v_x_2814_);
v___x_2818_ = lean_io_as_task(v___x_2817_, v_prio_2815_);
v___f_2819_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___x_2820_ = lean_unsigned_to_nat(0u);
v___x_2821_ = 1;
v___x_2822_ = lean_task_bind(v___x_2818_, v___f_2819_, v___x_2820_, v___x_2821_);
v___x_2823_ = lean_task_get_own(v___x_2822_);
if (lean_obj_tag(v___x_2823_) == 0)
{
lean_object* v_a_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2831_; 
v_a_2824_ = lean_ctor_get(v___x_2823_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2823_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2826_ = v___x_2823_;
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_a_2824_);
lean_dec(v___x_2823_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2829_; 
if (v_isShared_2827_ == 0)
{
lean_ctor_set_tag(v___x_2826_, 1);
v___x_2829_ = v___x_2826_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v_a_2824_);
v___x_2829_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
return v___x_2829_;
}
}
}
else
{
lean_object* v_a_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2839_; 
v_a_2832_ = lean_ctor_get(v___x_2823_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2823_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2834_ = v___x_2823_;
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_a_2832_);
lean_dec(v___x_2823_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
lean_object* v___x_2837_; 
if (v_isShared_2835_ == 0)
{
lean_ctor_set_tag(v___x_2834_, 0);
v___x_2837_ = v___x_2834_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_a_2832_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_block___boxed(lean_object* v_00_u03b5_2840_, lean_object* v_00_u03b1_2841_, lean_object* v_x_2842_, lean_object* v_prio_2843_, lean_object* v_a_2844_){
_start:
{
lean_object* v_res_2845_; 
v_res_2845_ = l_Std_Internal_IO_Async_EAsync_block(v_00_u03b5_2840_, v_00_u03b1_2841_, v_x_2842_, v_prio_2843_);
return v_res_2845_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_throw___redArg(lean_object* v_e_2846_){
_start:
{
lean_object* v___x_2848_; lean_object* v___x_2849_; 
v___x_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2848_, 0, v_e_2846_);
v___x_2849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2849_, 0, v___x_2848_);
return v___x_2849_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_throw___redArg___boxed(lean_object* v_e_2850_, lean_object* v_a_2851_){
_start:
{
lean_object* v_res_2852_; 
v_res_2852_ = l_Std_Internal_IO_Async_EAsync_throw___redArg(v_e_2850_);
return v_res_2852_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_throw(lean_object* v_00_u03b5_2853_, lean_object* v_00_u03b1_2854_, lean_object* v_e_2855_){
_start:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2857_, 0, v_e_2855_);
v___x_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2857_);
return v___x_2858_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_throw___boxed(lean_object* v_00_u03b5_2859_, lean_object* v_00_u03b1_2860_, lean_object* v_e_2861_, lean_object* v_a_2862_){
_start:
{
lean_object* v_res_2863_; 
v_res_2863_ = l_Std_Internal_IO_Async_EAsync_throw(v_00_u03b5_2859_, v_00_u03b1_2860_, v_e_2861_);
return v_res_2863_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryCatch___redArg___lam__0(lean_object* v_f_2864_, lean_object* v_x_2865_){
_start:
{
if (lean_obj_tag(v_x_2865_) == 0)
{
lean_object* v_a_2867_; lean_object* v___x_2868_; 
v_a_2867_ = lean_ctor_get(v_x_2865_, 0);
lean_inc(v_a_2867_);
lean_dec_ref(v_x_2865_);
v___x_2868_ = lean_apply_2(v_f_2864_, v_a_2867_, lean_box(0));
return v___x_2868_;
}
else
{
lean_object* v___x_2869_; 
lean_dec_ref(v_f_2864_);
v___x_2869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2869_, 0, v_x_2865_);
return v___x_2869_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryCatch___redArg___lam__0___boxed(lean_object* v_f_2870_, lean_object* v_x_2871_, lean_object* v___y_2872_){
_start:
{
lean_object* v_res_2873_; 
v_res_2873_ = l_Std_Internal_IO_Async_EAsync_tryCatch___redArg___lam__0(v_f_2870_, v_x_2871_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryCatch___redArg(lean_object* v_x_2874_, lean_object* v_f_2875_, lean_object* v_prio_2876_, uint8_t v_sync_2877_){
_start:
{
lean_object* v___x_2879_; lean_object* v___f_2880_; lean_object* v___x_2881_; 
v___x_2879_ = lean_apply_1(v_x_2874_, lean_box(0));
v___f_2880_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2880_, 0, v_f_2875_);
v___x_2881_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2876_, v_sync_2877_, v___x_2879_, v___f_2880_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryCatch___redArg___boxed(lean_object* v_x_2882_, lean_object* v_f_2883_, lean_object* v_prio_2884_, lean_object* v_sync_2885_, lean_object* v_a_2886_){
_start:
{
uint8_t v_sync_boxed_2887_; lean_object* v_res_2888_; 
v_sync_boxed_2887_ = lean_unbox(v_sync_2885_);
v_res_2888_ = l_Std_Internal_IO_Async_EAsync_tryCatch___redArg(v_x_2882_, v_f_2883_, v_prio_2884_, v_sync_boxed_2887_);
return v_res_2888_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryCatch(lean_object* v_00_u03b5_2889_, lean_object* v_00_u03b1_2890_, lean_object* v_x_2891_, lean_object* v_f_2892_, lean_object* v_prio_2893_, uint8_t v_sync_2894_){
_start:
{
lean_object* v___x_2896_; lean_object* v___f_2897_; lean_object* v___x_2898_; 
v___x_2896_ = lean_apply_1(v_x_2891_, lean_box(0));
v___f_2897_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2897_, 0, v_f_2892_);
v___x_2898_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2893_, v_sync_2894_, v___x_2896_, v___f_2897_);
return v___x_2898_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryCatch___boxed(lean_object* v_00_u03b5_2899_, lean_object* v_00_u03b1_2900_, lean_object* v_x_2901_, lean_object* v_f_2902_, lean_object* v_prio_2903_, lean_object* v_sync_2904_, lean_object* v_a_2905_){
_start:
{
uint8_t v_sync_boxed_2906_; lean_object* v_res_2907_; 
v_sync_boxed_2906_ = lean_unbox(v_sync_2904_);
v_res_2907_ = l_Std_Internal_IO_Async_EAsync_tryCatch(v_00_u03b5_2899_, v_00_u03b1_2900_, v_x_2901_, v_f_2902_, v_prio_2903_, v_sync_boxed_2906_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__0(lean_object* v_a_2908_, lean_object* v_____do__lift_2909_){
_start:
{
if (lean_obj_tag(v_____do__lift_2909_) == 0)
{
lean_object* v_a_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2919_; 
lean_dec(v_a_2908_);
v_a_2911_ = lean_ctor_get(v_____do__lift_2909_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v_____do__lift_2909_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2913_ = v_____do__lift_2909_;
v_isShared_2914_ = v_isSharedCheck_2919_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_a_2911_);
lean_dec(v_____do__lift_2909_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2919_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v___x_2916_; 
if (v_isShared_2914_ == 0)
{
v___x_2916_ = v___x_2913_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2911_);
v___x_2916_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
lean_object* v___x_2917_; 
v___x_2917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2917_, 0, v___x_2916_);
return v___x_2917_;
}
}
}
else
{
lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2927_; 
v_isSharedCheck_2927_ = !lean_is_exclusive(v_____do__lift_2909_);
if (v_isSharedCheck_2927_ == 0)
{
lean_object* v_unused_2928_; 
v_unused_2928_ = lean_ctor_get(v_____do__lift_2909_, 0);
lean_dec(v_unused_2928_);
v___x_2921_ = v_____do__lift_2909_;
v_isShared_2922_ = v_isSharedCheck_2927_;
goto v_resetjp_2920_;
}
else
{
lean_dec(v_____do__lift_2909_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2927_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2924_; 
if (v_isShared_2922_ == 0)
{
lean_ctor_set_tag(v___x_2921_, 0);
lean_ctor_set(v___x_2921_, 0, v_a_2908_);
v___x_2924_ = v___x_2921_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_a_2908_);
v___x_2924_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
lean_object* v___x_2925_; 
v___x_2925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2924_);
return v___x_2925_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed(lean_object* v_a_2929_, lean_object* v_____do__lift_2930_, lean_object* v___y_2931_){
_start:
{
lean_object* v_res_2932_; 
v_res_2932_ = l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__0(v_a_2929_, v_____do__lift_2930_);
return v_res_2932_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__1(lean_object* v_a_2933_, lean_object* v_____do__lift_2934_){
_start:
{
if (lean_obj_tag(v_____do__lift_2934_) == 0)
{
lean_object* v_a_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2944_; 
lean_dec(v_a_2933_);
v_a_2936_ = lean_ctor_get(v_____do__lift_2934_, 0);
v_isSharedCheck_2944_ = !lean_is_exclusive(v_____do__lift_2934_);
if (v_isSharedCheck_2944_ == 0)
{
v___x_2938_ = v_____do__lift_2934_;
v_isShared_2939_ = v_isSharedCheck_2944_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_a_2936_);
lean_dec(v_____do__lift_2934_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2944_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2941_; 
if (v_isShared_2939_ == 0)
{
v___x_2941_ = v___x_2938_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v_a_2936_);
v___x_2941_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
lean_object* v___x_2942_; 
v___x_2942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2941_);
return v___x_2942_;
}
}
}
else
{
lean_object* v_a_2945_; lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_2954_; 
v_a_2945_ = lean_ctor_get(v_____do__lift_2934_, 0);
v_isSharedCheck_2954_ = !lean_is_exclusive(v_____do__lift_2934_);
if (v_isSharedCheck_2954_ == 0)
{
v___x_2947_ = v_____do__lift_2934_;
v_isShared_2948_ = v_isSharedCheck_2954_;
goto v_resetjp_2946_;
}
else
{
lean_inc(v_a_2945_);
lean_dec(v_____do__lift_2934_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_2954_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v___x_2949_; lean_object* v___x_2951_; 
v___x_2949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2949_, 0, v_a_2933_);
lean_ctor_set(v___x_2949_, 1, v_a_2945_);
if (v_isShared_2948_ == 0)
{
lean_ctor_set(v___x_2947_, 0, v___x_2949_);
v___x_2951_ = v___x_2947_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v___x_2949_);
v___x_2951_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
lean_object* v___x_2952_; 
v___x_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
return v___x_2952_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed(lean_object* v_a_2955_, lean_object* v_____do__lift_2956_, lean_object* v___y_2957_){
_start:
{
lean_object* v_res_2958_; 
v_res_2958_ = l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__1(v_a_2955_, v_____do__lift_2956_);
return v_res_2958_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__2(lean_object* v_f_2959_, lean_object* v_x_2960_){
_start:
{
if (lean_obj_tag(v_x_2960_) == 0)
{
lean_object* v_a_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___f_2965_; lean_object* v___x_2966_; uint8_t v___x_2967_; lean_object* v___x_2968_; 
v_a_2962_ = lean_ctor_get(v_x_2960_, 0);
lean_inc(v_a_2962_);
lean_dec_ref(v_x_2960_);
v___x_2963_ = lean_box(0);
v___x_2964_ = lean_apply_2(v_f_2959_, v___x_2963_, lean_box(0));
v___f_2965_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2965_, 0, v_a_2962_);
v___x_2966_ = lean_unsigned_to_nat(0u);
v___x_2967_ = 0;
v___x_2968_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2966_, v___x_2967_, v___x_2964_, v___f_2965_);
return v___x_2968_;
}
else
{
lean_object* v_a_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2981_; 
v_a_2969_ = lean_ctor_get(v_x_2960_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v_x_2960_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2971_ = v_x_2960_;
v_isShared_2972_ = v_isSharedCheck_2981_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_a_2969_);
lean_dec(v_x_2960_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2981_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2974_; 
lean_inc(v_a_2969_);
if (v_isShared_2972_ == 0)
{
v___x_2974_ = v___x_2971_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2969_);
v___x_2974_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
lean_object* v___x_2975_; lean_object* v___f_2976_; lean_object* v___x_2977_; uint8_t v___x_2978_; lean_object* v___x_2979_; 
v___x_2975_ = lean_apply_2(v_f_2959_, v___x_2974_, lean_box(0));
v___f_2976_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2976_, 0, v_a_2969_);
v___x_2977_ = lean_unsigned_to_nat(0u);
v___x_2978_ = 0;
v___x_2979_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2977_, v___x_2978_, v___x_2975_, v___f_2976_);
return v___x_2979_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed(lean_object* v_f_2982_, lean_object* v_x_2983_, lean_object* v___y_2984_){
_start:
{
lean_object* v_res_2985_; 
v_res_2985_ = l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__2(v_f_2982_, v_x_2983_);
return v_res_2985_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg(lean_object* v_x_2986_, lean_object* v_f_2987_, lean_object* v_prio_2988_, uint8_t v_sync_2989_){
_start:
{
lean_object* v___x_2991_; lean_object* v___f_2992_; lean_object* v___x_2993_; 
v___x_2991_ = lean_apply_1(v_x_2986_, lean_box(0));
v___f_2992_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2992_, 0, v_f_2987_);
v___x_2993_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2988_, v_sync_2989_, v___x_2991_, v___f_2992_);
return v___x_2993_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg___boxed(lean_object* v_x_2994_, lean_object* v_f_2995_, lean_object* v_prio_2996_, lean_object* v_sync_2997_, lean_object* v_a_2998_){
_start:
{
uint8_t v_sync_boxed_2999_; lean_object* v_res_3000_; 
v_sync_boxed_2999_ = lean_unbox(v_sync_2997_);
v_res_3000_ = l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg(v_x_2994_, v_f_2995_, v_prio_2996_, v_sync_boxed_2999_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27(lean_object* v_00_u03b5_3001_, lean_object* v_00_u03b1_3002_, lean_object* v_00_u03b2_3003_, lean_object* v_x_3004_, lean_object* v_f_3005_, lean_object* v_prio_3006_, uint8_t v_sync_3007_){
_start:
{
lean_object* v___x_3009_; 
v___x_3009_ = l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg(v_x_3004_, v_f_3005_, v_prio_3006_, v_sync_3007_);
return v___x_3009_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_tryFinally_x27___boxed(lean_object* v_00_u03b5_3010_, lean_object* v_00_u03b1_3011_, lean_object* v_00_u03b2_3012_, lean_object* v_x_3013_, lean_object* v_f_3014_, lean_object* v_prio_3015_, lean_object* v_sync_3016_, lean_object* v_a_3017_){
_start:
{
uint8_t v_sync_boxed_3018_; lean_object* v_res_3019_; 
v_sync_boxed_3018_ = lean_unbox(v_sync_3016_);
v_res_3019_ = l_Std_Internal_IO_Async_EAsync_tryFinally_x27(v_00_u03b5_3010_, v_00_u03b1_3011_, v_00_u03b2_3012_, v_x_3013_, v_f_3014_, v_prio_3015_, v_sync_boxed_3018_);
return v_res_3019_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_await___redArg(lean_object* v_x_3020_){
_start:
{
lean_object* v___x_3022_; 
v___x_3022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3022_, 0, v_x_3020_);
return v___x_3022_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_await___redArg___boxed(lean_object* v_x_3023_, lean_object* v_a_3024_){
_start:
{
lean_object* v_res_3025_; 
v_res_3025_ = l_Std_Internal_IO_Async_EAsync_await___redArg(v_x_3023_);
return v_res_3025_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_await(lean_object* v_00_u03b5_3026_, lean_object* v_00_u03b1_3027_, lean_object* v_x_3028_){
_start:
{
lean_object* v___x_3030_; 
v___x_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3030_, 0, v_x_3028_);
return v___x_3030_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_await___boxed(lean_object* v_00_u03b5_3031_, lean_object* v_00_u03b1_3032_, lean_object* v_x_3033_, lean_object* v_a_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_Std_Internal_IO_Async_EAsync_await(v_00_u03b5_3031_, v_00_u03b1_3032_, v_x_3033_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_async___redArg(lean_object* v_self_3036_, lean_object* v_prio_3037_){
_start:
{
lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___f_3041_; lean_object* v___x_3042_; uint8_t v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3039_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3039_, 0, lean_box(0));
lean_closure_set(v___x_3039_, 1, v_self_3036_);
v___x_3040_ = lean_io_as_task(v___x_3039_, v_prio_3037_);
v___f_3041_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___x_3042_ = lean_unsigned_to_nat(0u);
v___x_3043_ = 1;
v___x_3044_ = lean_task_bind(v___x_3040_, v___f_3041_, v___x_3042_, v___x_3043_);
v___x_3045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3045_, 0, v___x_3044_);
v___x_3046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3045_);
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_async___redArg___boxed(lean_object* v_self_3047_, lean_object* v_prio_3048_, lean_object* v_a_3049_){
_start:
{
lean_object* v_res_3050_; 
v_res_3050_ = l_Std_Internal_IO_Async_EAsync_async___redArg(v_self_3047_, v_prio_3048_);
return v_res_3050_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_async(lean_object* v_00_u03b5_3051_, lean_object* v_00_u03b1_3052_, lean_object* v_self_3053_, lean_object* v_prio_3054_){
_start:
{
lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___f_3058_; lean_object* v___x_3059_; uint8_t v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3056_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3056_, 0, lean_box(0));
lean_closure_set(v___x_3056_, 1, v_self_3053_);
v___x_3057_ = lean_io_as_task(v___x_3056_, v_prio_3054_);
v___f_3058_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___x_3059_ = lean_unsigned_to_nat(0u);
v___x_3060_ = 1;
v___x_3061_ = lean_task_bind(v___x_3057_, v___f_3058_, v___x_3059_, v___x_3060_);
v___x_3062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3062_, 0, v___x_3061_);
v___x_3063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3062_);
return v___x_3063_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_async___boxed(lean_object* v_00_u03b5_3064_, lean_object* v_00_u03b1_3065_, lean_object* v_self_3066_, lean_object* v_prio_3067_, lean_object* v_a_3068_){
_start:
{
lean_object* v_res_3069_; 
v_res_3069_ = l_Std_Internal_IO_Async_EAsync_async(v_00_u03b5_3064_, v_00_u03b1_3065_, v_self_3066_, v_prio_3067_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instFunctor___lam__0(lean_object* v_00_u03b1_3070_, lean_object* v_00_u03b2_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_){
_start:
{
lean_object* v___x_3075_; lean_object* v___y_3077_; 
v___x_3075_ = lean_apply_1(v___y_3073_, lean_box(0));
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_a_3079_; 
v_a_3079_ = lean_ctor_get(v___x_3075_, 0);
lean_inc(v_a_3079_);
lean_dec_ref(v___x_3075_);
if (lean_obj_tag(v_a_3079_) == 0)
{
lean_object* v_a_3080_; lean_object* v___x_3082_; uint8_t v_isShared_3083_; uint8_t v_isSharedCheck_3087_; 
lean_dec(v___y_3072_);
v_a_3080_ = lean_ctor_get(v_a_3079_, 0);
v_isSharedCheck_3087_ = !lean_is_exclusive(v_a_3079_);
if (v_isSharedCheck_3087_ == 0)
{
v___x_3082_ = v_a_3079_;
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
else
{
lean_inc(v_a_3080_);
lean_dec(v_a_3079_);
v___x_3082_ = lean_box(0);
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
v_resetjp_3081_:
{
lean_object* v___x_3085_; 
if (v_isShared_3083_ == 0)
{
v___x_3085_ = v___x_3082_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v_a_3080_);
v___x_3085_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
v___y_3077_ = v___x_3085_;
goto v___jp_3076_;
}
}
}
else
{
lean_object* v_a_3088_; lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3096_; 
v_a_3088_ = lean_ctor_get(v_a_3079_, 0);
v_isSharedCheck_3096_ = !lean_is_exclusive(v_a_3079_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3090_ = v_a_3079_;
v_isShared_3091_ = v_isSharedCheck_3096_;
goto v_resetjp_3089_;
}
else
{
lean_inc(v_a_3088_);
lean_dec(v_a_3079_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3096_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v___x_3092_; lean_object* v___x_3094_; 
v___x_3092_ = lean_apply_1(v___y_3072_, v_a_3088_);
if (v_isShared_3091_ == 0)
{
lean_ctor_set(v___x_3090_, 0, v___x_3092_);
v___x_3094_ = v___x_3090_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v___x_3092_);
v___x_3094_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
v___y_3077_ = v___x_3094_;
goto v___jp_3076_;
}
}
}
}
else
{
lean_object* v_a_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3108_; 
v_a_3097_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3108_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3108_ == 0)
{
v___x_3099_ = v___x_3075_;
v_isShared_3100_ = v_isSharedCheck_3108_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_a_3097_);
lean_dec(v___x_3075_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3108_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; uint8_t v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3106_; 
v___x_3101_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_3101_, 0, lean_box(0));
lean_closure_set(v___x_3101_, 1, lean_box(0));
lean_closure_set(v___x_3101_, 2, lean_box(0));
lean_closure_set(v___x_3101_, 3, v___y_3072_);
v___x_3102_ = lean_unsigned_to_nat(0u);
v___x_3103_ = 0;
v___x_3104_ = lean_task_map(v___x_3101_, v_a_3097_, v___x_3102_, v___x_3103_);
if (v_isShared_3100_ == 0)
{
lean_ctor_set(v___x_3099_, 0, v___x_3104_);
v___x_3106_ = v___x_3099_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v___x_3104_);
v___x_3106_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
return v___x_3106_;
}
}
}
v___jp_3076_:
{
lean_object* v___x_3078_; 
v___x_3078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3078_, 0, v___y_3077_);
return v___x_3078_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instFunctor___lam__0___boxed(lean_object* v_00_u03b1_3109_, lean_object* v_00_u03b2_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_){
_start:
{
lean_object* v_res_3114_; 
v_res_3114_ = l_Std_Internal_IO_Async_EAsync_instFunctor___lam__0(v_00_u03b1_3109_, v_00_u03b2_3110_, v___y_3111_, v___y_3112_);
return v_res_3114_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instFunctor___lam__1(lean_object* v___f_3115_, lean_object* v_00_u03b1_3116_, lean_object* v_00_u03b2_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_){
_start:
{
lean_object* v___x_3121_; lean_object* v___x_3122_; 
v___x_3121_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_3121_, 0, lean_box(0));
lean_closure_set(v___x_3121_, 1, lean_box(0));
lean_closure_set(v___x_3121_, 2, v___y_3118_);
v___x_3122_ = lean_apply_5(v___f_3115_, lean_box(0), lean_box(0), v___x_3121_, v___y_3119_, lean_box(0));
return v___x_3122_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instFunctor___lam__1___boxed(lean_object* v___f_3123_, lean_object* v_00_u03b1_3124_, lean_object* v_00_u03b2_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_){
_start:
{
lean_object* v_res_3129_; 
v_res_3129_ = l_Std_Internal_IO_Async_EAsync_instFunctor___lam__1(v___f_3123_, v_00_u03b1_3124_, v_00_u03b2_3125_, v___y_3126_, v___y_3127_);
return v_res_3129_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instFunctor(lean_object* v_00_u03b5_3136_){
_start:
{
lean_object* v___x_3137_; 
v___x_3137_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instFunctor___closed__2));
return v___x_3137_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__0(lean_object* v_00_u03b1_3138_, lean_object* v___y_3139_){
_start:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3141_, 0, v___y_3139_);
v___x_3142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
return v___x_3142_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__0___boxed(lean_object* v_00_u03b1_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_){
_start:
{
lean_object* v_res_3146_; 
v_res_3146_ = l_Std_Internal_IO_Async_EAsync_instMonad___lam__0(v_00_u03b1_3143_, v___y_3144_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__1(lean_object* v_x_3147_, lean_object* v_x_3148_){
_start:
{
if (lean_obj_tag(v_x_3148_) == 0)
{
lean_object* v_a_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3158_; 
lean_dec_ref(v_x_3147_);
v_a_3150_ = lean_ctor_get(v_x_3148_, 0);
v_isSharedCheck_3158_ = !lean_is_exclusive(v_x_3148_);
if (v_isSharedCheck_3158_ == 0)
{
v___x_3152_ = v_x_3148_;
v_isShared_3153_ = v_isSharedCheck_3158_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_a_3150_);
lean_dec(v_x_3148_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3158_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v___x_3155_; 
if (v_isShared_3153_ == 0)
{
v___x_3155_ = v___x_3152_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v_a_3150_);
v___x_3155_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
lean_object* v___x_3156_; 
v___x_3156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3156_, 0, v___x_3155_);
return v___x_3156_;
}
}
}
else
{
lean_object* v_a_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___y_3163_; 
v_a_3159_ = lean_ctor_get(v_x_3148_, 0);
lean_inc(v_a_3159_);
lean_dec_ref(v_x_3148_);
v___x_3160_ = lean_box(0);
v___x_3161_ = lean_apply_2(v_x_3147_, v___x_3160_, lean_box(0));
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_object* v_a_3165_; 
v_a_3165_ = lean_ctor_get(v___x_3161_, 0);
lean_inc(v_a_3165_);
lean_dec_ref(v___x_3161_);
if (lean_obj_tag(v_a_3165_) == 0)
{
lean_object* v_a_3166_; lean_object* v___x_3168_; uint8_t v_isShared_3169_; uint8_t v_isSharedCheck_3173_; 
lean_dec(v_a_3159_);
v_a_3166_ = lean_ctor_get(v_a_3165_, 0);
v_isSharedCheck_3173_ = !lean_is_exclusive(v_a_3165_);
if (v_isSharedCheck_3173_ == 0)
{
v___x_3168_ = v_a_3165_;
v_isShared_3169_ = v_isSharedCheck_3173_;
goto v_resetjp_3167_;
}
else
{
lean_inc(v_a_3166_);
lean_dec(v_a_3165_);
v___x_3168_ = lean_box(0);
v_isShared_3169_ = v_isSharedCheck_3173_;
goto v_resetjp_3167_;
}
v_resetjp_3167_:
{
lean_object* v___x_3171_; 
if (v_isShared_3169_ == 0)
{
v___x_3171_ = v___x_3168_;
goto v_reusejp_3170_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v_a_3166_);
v___x_3171_ = v_reuseFailAlloc_3172_;
goto v_reusejp_3170_;
}
v_reusejp_3170_:
{
v___y_3163_ = v___x_3171_;
goto v___jp_3162_;
}
}
}
else
{
lean_object* v_a_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3182_; 
v_a_3174_ = lean_ctor_get(v_a_3165_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v_a_3165_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3176_ = v_a_3165_;
v_isShared_3177_ = v_isSharedCheck_3182_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_a_3174_);
lean_dec(v_a_3165_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3182_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v___x_3178_; lean_object* v___x_3180_; 
v___x_3178_ = lean_apply_1(v_a_3159_, v_a_3174_);
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 0, v___x_3178_);
v___x_3180_ = v___x_3176_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v___x_3178_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
v___y_3163_ = v___x_3180_;
goto v___jp_3162_;
}
}
}
}
else
{
lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3194_; 
v_a_3183_ = lean_ctor_get(v___x_3161_, 0);
v_isSharedCheck_3194_ = !lean_is_exclusive(v___x_3161_);
if (v_isSharedCheck_3194_ == 0)
{
v___x_3185_ = v___x_3161_;
v_isShared_3186_ = v_isSharedCheck_3194_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_dec(v___x_3161_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3194_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v___x_3187_; lean_object* v___x_3188_; uint8_t v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3192_; 
v___x_3187_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_3187_, 0, lean_box(0));
lean_closure_set(v___x_3187_, 1, lean_box(0));
lean_closure_set(v___x_3187_, 2, lean_box(0));
lean_closure_set(v___x_3187_, 3, v_a_3159_);
v___x_3188_ = lean_unsigned_to_nat(0u);
v___x_3189_ = 0;
v___x_3190_ = lean_task_map(v___x_3187_, v_a_3183_, v___x_3188_, v___x_3189_);
if (v_isShared_3186_ == 0)
{
lean_ctor_set(v___x_3185_, 0, v___x_3190_);
v___x_3192_ = v___x_3185_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v___x_3190_);
v___x_3192_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
return v___x_3192_;
}
}
}
v___jp_3162_:
{
lean_object* v___x_3164_; 
v___x_3164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3164_, 0, v___y_3163_);
return v___x_3164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__1___boxed(lean_object* v_x_3195_, lean_object* v_x_3196_, lean_object* v___y_3197_){
_start:
{
lean_object* v_res_3198_; 
v_res_3198_ = l_Std_Internal_IO_Async_EAsync_instMonad___lam__1(v_x_3195_, v_x_3196_);
return v_res_3198_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__2(lean_object* v_00_u03b1_3199_, lean_object* v_00_u03b2_3200_, lean_object* v_f_3201_, lean_object* v_x_3202_){
_start:
{
lean_object* v___x_3204_; lean_object* v___f_3205_; lean_object* v___x_3206_; uint8_t v___x_3207_; lean_object* v___x_3208_; 
v___x_3204_ = lean_apply_1(v_f_3201_, lean_box(0));
v___f_3205_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_instMonad___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3205_, 0, v_x_3202_);
v___x_3206_ = lean_unsigned_to_nat(0u);
v___x_3207_ = 0;
v___x_3208_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3206_, v___x_3207_, v___x_3204_, v___f_3205_);
return v___x_3208_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__2___boxed(lean_object* v_00_u03b1_3209_, lean_object* v_00_u03b2_3210_, lean_object* v_f_3211_, lean_object* v_x_3212_, lean_object* v___y_3213_){
_start:
{
lean_object* v_res_3214_; 
v_res_3214_ = l_Std_Internal_IO_Async_EAsync_instMonad___lam__2(v_00_u03b1_3209_, v_00_u03b2_3210_, v_f_3211_, v_x_3212_);
return v_res_3214_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__3(lean_object* v___f_3215_, lean_object* v_a_3216_, lean_object* v_x_3217_){
_start:
{
if (lean_obj_tag(v_x_3217_) == 0)
{
lean_object* v_a_3219_; lean_object* v___x_3221_; uint8_t v_isShared_3222_; uint8_t v_isSharedCheck_3227_; 
lean_dec(v_a_3216_);
lean_dec_ref(v___f_3215_);
v_a_3219_ = lean_ctor_get(v_x_3217_, 0);
v_isSharedCheck_3227_ = !lean_is_exclusive(v_x_3217_);
if (v_isSharedCheck_3227_ == 0)
{
v___x_3221_ = v_x_3217_;
v_isShared_3222_ = v_isSharedCheck_3227_;
goto v_resetjp_3220_;
}
else
{
lean_inc(v_a_3219_);
lean_dec(v_x_3217_);
v___x_3221_ = lean_box(0);
v_isShared_3222_ = v_isSharedCheck_3227_;
goto v_resetjp_3220_;
}
v_resetjp_3220_:
{
lean_object* v___x_3224_; 
if (v_isShared_3222_ == 0)
{
v___x_3224_ = v___x_3221_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v_a_3219_);
v___x_3224_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
lean_object* v___x_3225_; 
v___x_3225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3224_);
return v___x_3225_;
}
}
}
else
{
lean_object* v___x_3228_; 
lean_dec_ref(v_x_3217_);
v___x_3228_ = lean_apply_3(v___f_3215_, lean_box(0), v_a_3216_, lean_box(0));
return v___x_3228_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__3___boxed(lean_object* v___f_3229_, lean_object* v_a_3230_, lean_object* v_x_3231_, lean_object* v___y_3232_){
_start:
{
lean_object* v_res_3233_; 
v_res_3233_ = l_Std_Internal_IO_Async_EAsync_instMonad___lam__3(v___f_3229_, v_a_3230_, v_x_3231_);
return v_res_3233_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__4(lean_object* v_y_3234_, lean_object* v___f_3235_, lean_object* v_x_3236_){
_start:
{
if (lean_obj_tag(v_x_3236_) == 0)
{
lean_object* v___x_3238_; 
lean_dec_ref(v___f_3235_);
lean_dec_ref(v_y_3234_);
v___x_3238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3238_, 0, v_x_3236_);
return v___x_3238_;
}
else
{
lean_object* v_a_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___f_3242_; lean_object* v___x_3243_; uint8_t v___x_3244_; lean_object* v___x_3245_; 
v_a_3239_ = lean_ctor_get(v_x_3236_, 0);
lean_inc(v_a_3239_);
lean_dec_ref(v_x_3236_);
v___x_3240_ = lean_box(0);
v___x_3241_ = lean_apply_2(v_y_3234_, v___x_3240_, lean_box(0));
v___f_3242_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_instMonad___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3242_, 0, v___f_3235_);
lean_closure_set(v___f_3242_, 1, v_a_3239_);
v___x_3243_ = lean_unsigned_to_nat(0u);
v___x_3244_ = 0;
v___x_3245_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3243_, v___x_3244_, v___x_3241_, v___f_3242_);
return v___x_3245_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__4___boxed(lean_object* v_y_3246_, lean_object* v___f_3247_, lean_object* v_x_3248_, lean_object* v___y_3249_){
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l_Std_Internal_IO_Async_EAsync_instMonad___lam__4(v_y_3246_, v___f_3247_, v_x_3248_);
return v_res_3250_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__5(lean_object* v___f_3251_, lean_object* v_00_u03b1_3252_, lean_object* v_00_u03b2_3253_, lean_object* v_x_3254_, lean_object* v_y_3255_){
_start:
{
lean_object* v___x_3257_; lean_object* v___f_3258_; lean_object* v___x_3259_; uint8_t v___x_3260_; lean_object* v___x_3261_; 
v___x_3257_ = lean_apply_1(v_x_3254_, lean_box(0));
v___f_3258_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_instMonad___lam__4___boxed), 4, 2);
lean_closure_set(v___f_3258_, 0, v_y_3255_);
lean_closure_set(v___f_3258_, 1, v___f_3251_);
v___x_3259_ = lean_unsigned_to_nat(0u);
v___x_3260_ = 0;
v___x_3261_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3259_, v___x_3260_, v___x_3257_, v___f_3258_);
return v___x_3261_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__5___boxed(lean_object* v___f_3262_, lean_object* v_00_u03b1_3263_, lean_object* v_00_u03b2_3264_, lean_object* v_x_3265_, lean_object* v_y_3266_, lean_object* v___y_3267_){
_start:
{
lean_object* v_res_3268_; 
v_res_3268_ = l_Std_Internal_IO_Async_EAsync_instMonad___lam__5(v___f_3262_, v_00_u03b1_3263_, v_00_u03b2_3264_, v_x_3265_, v_y_3266_);
return v_res_3268_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__6(lean_object* v_y_3269_, lean_object* v_x_3270_){
_start:
{
if (lean_obj_tag(v_x_3270_) == 0)
{
lean_object* v_a_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3280_; 
lean_dec_ref(v_y_3269_);
v_a_3272_ = lean_ctor_get(v_x_3270_, 0);
v_isSharedCheck_3280_ = !lean_is_exclusive(v_x_3270_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3274_ = v_x_3270_;
v_isShared_3275_ = v_isSharedCheck_3280_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_a_3272_);
lean_dec(v_x_3270_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3280_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3277_; 
if (v_isShared_3275_ == 0)
{
v___x_3277_ = v___x_3274_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v_a_3272_);
v___x_3277_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
lean_object* v___x_3278_; 
v___x_3278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3277_);
return v___x_3278_;
}
}
}
else
{
lean_object* v___x_3281_; lean_object* v___x_3282_; 
lean_dec_ref(v_x_3270_);
v___x_3281_ = lean_box(0);
v___x_3282_ = lean_apply_2(v_y_3269_, v___x_3281_, lean_box(0));
return v___x_3282_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__6___boxed(lean_object* v_y_3283_, lean_object* v_x_3284_, lean_object* v___y_3285_){
_start:
{
lean_object* v_res_3286_; 
v_res_3286_ = l_Std_Internal_IO_Async_EAsync_instMonad___lam__6(v_y_3283_, v_x_3284_);
return v_res_3286_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__7(lean_object* v_00_u03b1_3287_, lean_object* v_00_u03b2_3288_, lean_object* v_x_3289_, lean_object* v_y_3290_){
_start:
{
lean_object* v___x_3292_; lean_object* v___f_3293_; lean_object* v___x_3294_; uint8_t v___x_3295_; lean_object* v___x_3296_; 
v___x_3292_ = lean_apply_1(v_x_3289_, lean_box(0));
v___f_3293_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_instMonad___lam__6___boxed), 3, 1);
lean_closure_set(v___f_3293_, 0, v_y_3290_);
v___x_3294_ = lean_unsigned_to_nat(0u);
v___x_3295_ = 0;
v___x_3296_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3294_, v___x_3295_, v___x_3292_, v___f_3293_);
return v___x_3296_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad___lam__7___boxed(lean_object* v_00_u03b1_3297_, lean_object* v_00_u03b2_3298_, lean_object* v_x_3299_, lean_object* v_y_3300_, lean_object* v___y_3301_){
_start:
{
lean_object* v_res_3302_; 
v_res_3302_ = l_Std_Internal_IO_Async_EAsync_instMonad___lam__7(v_00_u03b1_3297_, v_00_u03b2_3298_, v_x_3299_, v_y_3300_);
return v_res_3302_;
}
}
static lean_object* _init_l_Std_Internal_IO_Async_EAsync_instMonad___closed__4(void){
_start:
{
lean_object* v___x_3308_; 
v___x_3308_ = l_Std_Internal_IO_Async_EAsync_instFunctor(lean_box(0));
return v___x_3308_;
}
}
static lean_object* _init_l_Std_Internal_IO_Async_EAsync_instMonad___closed__5(void){
_start:
{
lean_object* v___f_3309_; lean_object* v___f_3310_; lean_object* v___f_3311_; lean_object* v___f_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; 
v___f_3309_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonad___closed__3));
v___f_3310_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonad___closed__2));
v___f_3311_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonad___closed__1));
v___f_3312_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonad___closed__0));
v___x_3313_ = lean_obj_once(&l_Std_Internal_IO_Async_EAsync_instMonad___closed__4, &l_Std_Internal_IO_Async_EAsync_instMonad___closed__4_once, _init_l_Std_Internal_IO_Async_EAsync_instMonad___closed__4);
v___x_3314_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3314_, 0, v___x_3313_);
lean_ctor_set(v___x_3314_, 1, v___f_3312_);
lean_ctor_set(v___x_3314_, 2, v___f_3311_);
lean_ctor_set(v___x_3314_, 3, v___f_3310_);
lean_ctor_set(v___x_3314_, 4, v___f_3309_);
return v___x_3314_;
}
}
static lean_object* _init_l_Std_Internal_IO_Async_EAsync_instMonad___closed__7(void){
_start:
{
lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; 
v___x_3316_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonad___closed__6));
v___x_3317_ = lean_obj_once(&l_Std_Internal_IO_Async_EAsync_instMonad___closed__5, &l_Std_Internal_IO_Async_EAsync_instMonad___closed__5_once, _init_l_Std_Internal_IO_Async_EAsync_instMonad___closed__5);
v___x_3318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
lean_ctor_set(v___x_3318_, 1, v___x_3316_);
return v___x_3318_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonad(lean_object* v_00_u03b5_3319_){
_start:
{
lean_object* v___x_3320_; 
v___x_3320_ = lean_obj_once(&l_Std_Internal_IO_Async_EAsync_instMonad___closed__7, &l_Std_Internal_IO_Async_EAsync_instMonad___closed__7_once, _init_l_Std_Internal_IO_Async_EAsync_instMonad___closed__7);
return v___x_3320_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO(lean_object* v_00_u03b5_3322_){
_start:
{
lean_object* v___x_3323_; 
v___x_3323_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO___closed__0));
return v___x_3323_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadExcept___lam__1(lean_object* v_00_u03b1_3324_, lean_object* v_x_3325_, lean_object* v_f_3326_){
_start:
{
lean_object* v___x_3328_; lean_object* v___f_3329_; lean_object* v___x_3330_; uint8_t v___x_3331_; lean_object* v___x_3332_; 
v___x_3328_ = lean_apply_1(v_x_3325_, lean_box(0));
v___f_3329_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3329_, 0, v_f_3326_);
v___x_3330_ = lean_unsigned_to_nat(0u);
v___x_3331_ = 0;
v___x_3332_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3330_, v___x_3331_, v___x_3328_, v___f_3329_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadExcept___lam__1___boxed(lean_object* v_00_u03b1_3333_, lean_object* v_x_3334_, lean_object* v_f_3335_, lean_object* v___y_3336_){
_start:
{
lean_object* v_res_3337_; 
v_res_3337_ = l_Std_Internal_IO_Async_EAsync_instMonadExcept___lam__1(v_00_u03b1_3333_, v_x_3334_, v_f_3335_);
return v_res_3337_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadExcept(lean_object* v_00_u03b5_3343_){
_start:
{
lean_object* v___x_3344_; 
v___x_3344_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadExcept___closed__2));
return v___x_3344_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadExceptOf(lean_object* v_00_u03b5_3348_){
_start:
{
lean_object* v___x_3349_; 
v___x_3349_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadExceptOf___closed__0));
return v___x_3349_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadFinally___lam__0(lean_object* v_00_u03b1_3350_, lean_object* v_00_u03b2_3351_, lean_object* v_x_3352_, lean_object* v_f_3353_){
_start:
{
lean_object* v___x_3355_; uint8_t v___x_3356_; lean_object* v___x_3357_; 
v___x_3355_ = lean_unsigned_to_nat(0u);
v___x_3356_ = 0;
v___x_3357_ = l_Std_Internal_IO_Async_EAsync_tryFinally_x27___redArg(v_x_3352_, v_f_3353_, v___x_3355_, v___x_3356_);
return v___x_3357_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadFinally___lam__0___boxed(lean_object* v_00_u03b1_3358_, lean_object* v_00_u03b2_3359_, lean_object* v_x_3360_, lean_object* v_f_3361_, lean_object* v___y_3362_){
_start:
{
lean_object* v_res_3363_; 
v_res_3363_ = l_Std_Internal_IO_Async_EAsync_instMonadFinally___lam__0(v_00_u03b1_3358_, v_00_u03b2_3359_, v_x_3360_, v_f_3361_);
return v_res_3363_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadFinally(lean_object* v_00_u03b5_3365_){
_start:
{
lean_object* v___f_3366_; 
v___f_3366_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadFinally___closed__0));
return v___f_3366_;
}
}
static lean_object* _init_l_Std_Internal_IO_Async_EAsync_instOrElse___closed__0(void){
_start:
{
lean_object* v___x_3367_; 
v___x_3367_ = l_Std_Internal_IO_Async_EAsync_instMonadExcept(lean_box(0));
return v___x_3367_;
}
}
static lean_object* _init_l_Std_Internal_IO_Async_EAsync_instOrElse___closed__1(void){
_start:
{
lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3368_ = lean_obj_once(&l_Std_Internal_IO_Async_EAsync_instOrElse___closed__0, &l_Std_Internal_IO_Async_EAsync_instOrElse___closed__0_once, _init_l_Std_Internal_IO_Async_EAsync_instOrElse___closed__0);
v___x_3369_ = lean_alloc_closure((void*)(l_MonadExcept_orElse), 6, 4);
lean_closure_set(v___x_3369_, 0, lean_box(0));
lean_closure_set(v___x_3369_, 1, lean_box(0));
lean_closure_set(v___x_3369_, 2, v___x_3368_);
lean_closure_set(v___x_3369_, 3, lean_box(0));
return v___x_3369_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instOrElse(lean_object* v_00_u03b5_3370_, lean_object* v_00_u03b1_3371_){
_start:
{
lean_object* v___x_3372_; 
v___x_3372_ = lean_obj_once(&l_Std_Internal_IO_Async_EAsync_instOrElse___closed__1, &l_Std_Internal_IO_Async_EAsync_instOrElse___closed__1_once, _init_l_Std_Internal_IO_Async_EAsync_instOrElse___closed__1);
return v___x_3372_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instInhabited___redArg(lean_object* v_inst_3373_){
_start:
{
lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; 
v___x_3374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3374_, 0, v_inst_3373_);
v___x_3375_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_pure___boxed), 3, 2);
lean_closure_set(v___x_3375_, 0, lean_box(0));
lean_closure_set(v___x_3375_, 1, v___x_3374_);
v___x_3376_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_mk___boxed), 3, 2);
lean_closure_set(v___x_3376_, 0, lean_box(0));
lean_closure_set(v___x_3376_, 1, v___x_3375_);
return v___x_3376_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instInhabited(lean_object* v_00_u03b5_3377_, lean_object* v_00_u03b1_3378_, lean_object* v_inst_3379_){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = l_Std_Internal_IO_Async_EAsync_instInhabited___redArg(v_inst_3379_);
return v___x_3380_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitETask___lam__0(lean_object* v_00_u03b1_3381_, lean_object* v_t_3382_){
_start:
{
lean_object* v___x_3384_; 
v___x_3384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3384_, 0, v_t_3382_);
return v___x_3384_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitETask___lam__0___boxed(lean_object* v_00_u03b1_3385_, lean_object* v_t_3386_, lean_object* v___y_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l_Std_Internal_IO_Async_EAsync_instMonadAwaitETask___lam__0(v_00_u03b1_3385_, v_t_3386_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitETask(lean_object* v_00_u03b5_3390_){
_start:
{
lean_object* v___f_3391_; 
v___f_3391_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAwaitETask___closed__0));
return v___f_3391_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitTask___lam__1(lean_object* v___f_3392_, lean_object* v_00_u03b1_3393_, lean_object* v_t_3394_){
_start:
{
lean_object* v___x_3396_; uint8_t v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3396_ = lean_unsigned_to_nat(0u);
v___x_3397_ = 0;
v___x_3398_ = lean_task_map(v___f_3392_, v_t_3394_, v___x_3396_, v___x_3397_);
v___x_3399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3398_);
return v___x_3399_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitTask___lam__1___boxed(lean_object* v___f_3400_, lean_object* v_00_u03b1_3401_, lean_object* v_t_3402_, lean_object* v___y_3403_){
_start:
{
lean_object* v_res_3404_; 
v_res_3404_ = l_Std_Internal_IO_Async_EAsync_instMonadAwaitTask___lam__1(v___f_3400_, v_00_u03b1_3401_, v_t_3402_);
return v_res_3404_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitTask(lean_object* v_00_u03b5_3407_){
_start:
{
lean_object* v___f_3408_; 
v___f_3408_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAwaitTask___closed__0));
return v___f_3408_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(lean_object* v_00_u03b1_3409_, lean_object* v_t_3410_){
_start:
{
lean_object* v___x_3412_; 
v___x_3412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3412_, 0, v_t_3410_);
return v___x_3412_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0___boxed(lean_object* v_00_u03b1_3413_, lean_object* v_t_3414_, lean_object* v___y_3415_){
_start:
{
lean_object* v_res_3416_; 
v_res_3416_ = l_Std_Internal_IO_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(v_00_u03b1_3413_, v_t_3414_);
return v_res_3416_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitPromise___lam__1(lean_object* v___f_3419_, lean_object* v_00_u03b1_3420_, lean_object* v_t_3421_){
_start:
{
lean_object* v___x_3423_; lean_object* v___x_3424_; uint8_t v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; 
v___x_3423_ = l_IO_Promise_result_x21___redArg(v_t_3421_);
v___x_3424_ = lean_unsigned_to_nat(0u);
v___x_3425_ = 0;
v___x_3426_ = lean_task_map(v___f_3419_, v___x_3423_, v___x_3424_, v___x_3425_);
v___x_3427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3427_, 0, v___x_3426_);
return v___x_3427_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitPromise___lam__1___boxed(lean_object* v___f_3428_, lean_object* v_00_u03b1_3429_, lean_object* v_t_3430_, lean_object* v___y_3431_){
_start:
{
lean_object* v_res_3432_; 
v_res_3432_ = l_Std_Internal_IO_Async_EAsync_instMonadAwaitPromise___lam__1(v___f_3428_, v_00_u03b1_3429_, v_t_3430_);
lean_dec(v_t_3430_);
return v_res_3432_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAwaitPromise(lean_object* v_00_u03b5_3435_){
_start:
{
lean_object* v___f_3436_; 
v___f_3436_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAwaitPromise___closed__0));
return v___f_3436_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncETask___lam__1(lean_object* v___f_3437_, lean_object* v_00_u03b1_3438_, lean_object* v_t_3439_, lean_object* v_prio_3440_){
_start:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; uint8_t v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3442_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3442_, 0, lean_box(0));
lean_closure_set(v___x_3442_, 1, v_t_3439_);
v___x_3443_ = lean_io_as_task(v___x_3442_, v_prio_3440_);
v___x_3444_ = lean_unsigned_to_nat(0u);
v___x_3445_ = 1;
v___x_3446_ = lean_task_bind(v___x_3443_, v___f_3437_, v___x_3444_, v___x_3445_);
v___x_3447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3446_);
v___x_3448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3447_);
return v___x_3448_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncETask___lam__1___boxed(lean_object* v___f_3449_, lean_object* v_00_u03b1_3450_, lean_object* v_t_3451_, lean_object* v_prio_3452_, lean_object* v___y_3453_){
_start:
{
lean_object* v_res_3454_; 
v_res_3454_ = l_Std_Internal_IO_Async_EAsync_instMonadAsyncETask___lam__1(v___f_3449_, v_00_u03b1_3450_, v_t_3451_, v_prio_3452_);
return v_res_3454_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncETask(lean_object* v_00_u03b5_3457_){
_start:
{
lean_object* v___f_3458_; 
v___f_3458_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAsyncETask___closed__0));
return v___f_3458_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___lam__0(lean_object* v_x_3459_){
_start:
{
if (lean_obj_tag(v_x_3459_) == 0)
{
lean_object* v_a_3460_; lean_object* v___x_3461_; 
v_a_3460_ = lean_ctor_get(v_x_3459_, 0);
lean_inc(v_a_3460_);
lean_dec_ref(v_x_3459_);
v___x_3461_ = lean_task_pure(v_a_3460_);
return v___x_3461_;
}
else
{
lean_object* v_a_3462_; 
v_a_3462_ = lean_ctor_get(v_x_3459_, 0);
lean_inc_ref(v_a_3462_);
lean_dec_ref(v_x_3459_);
return v_a_3462_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(lean_object* v___f_3463_, lean_object* v_00_u03b1_3464_, lean_object* v_t_3465_, lean_object* v_prio_3466_){
_start:
{
lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; uint8_t v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; 
v___x_3468_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3468_, 0, lean_box(0));
lean_closure_set(v___x_3468_, 1, v_t_3465_);
v___x_3469_ = lean_io_as_task(v___x_3468_, v_prio_3466_);
v___x_3470_ = lean_unsigned_to_nat(0u);
v___x_3471_ = 1;
v___x_3472_ = lean_task_bind(v___x_3469_, v___f_3463_, v___x_3470_, v___x_3471_);
v___x_3473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3473_, 0, v___x_3472_);
v___x_3474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3474_, 0, v___x_3473_);
return v___x_3474_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1___boxed(lean_object* v___f_3475_, lean_object* v_00_u03b1_3476_, lean_object* v_t_3477_, lean_object* v_prio_3478_, lean_object* v___y_3479_){
_start:
{
lean_object* v_res_3480_; 
v_res_3480_ = l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(v___f_3475_, v_00_u03b1_3476_, v_t_3477_, v_prio_3478_);
return v_res_3480_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseIO___lam__0(lean_object* v_00_u03b1_3485_, lean_object* v_x_3486_){
_start:
{
lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
v___x_3488_ = lean_apply_1(v_x_3486_, lean_box(0));
v___x_3489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3489_, 0, v___x_3488_);
v___x_3490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3489_);
return v___x_3490_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseIO___lam__0___boxed(lean_object* v_00_u03b1_3491_, lean_object* v_x_3492_, lean_object* v___y_3493_){
_start:
{
lean_object* v_res_3494_; 
v_res_3494_ = l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseIO___lam__0(v_00_u03b1_3491_, v_x_3492_);
return v_res_3494_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseIO(lean_object* v_00_u03b5_3496_){
_start:
{
lean_object* v___f_3497_; 
v___f_3497_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseIO___closed__0));
return v___f_3497_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO__1___lam__0(lean_object* v_00_u03b1_3498_, lean_object* v_x_3499_){
_start:
{
lean_object* v_val_3502_; lean_object* v___x_3504_; 
v___x_3504_ = lean_apply_1(v_x_3499_, lean_box(0));
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3512_; 
v_a_3505_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3507_ = v___x_3504_;
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_3504_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3510_; 
if (v_isShared_3508_ == 0)
{
lean_ctor_set_tag(v___x_3507_, 1);
v___x_3510_ = v___x_3507_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_a_3505_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
v_val_3502_ = v___x_3510_;
goto v___jp_3501_;
}
}
}
else
{
lean_object* v_a_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3520_; 
v_a_3513_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3520_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3520_ == 0)
{
v___x_3515_ = v___x_3504_;
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_a_3513_);
lean_dec(v___x_3504_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3518_; 
if (v_isShared_3516_ == 0)
{
lean_ctor_set_tag(v___x_3515_, 0);
v___x_3518_ = v___x_3515_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_a_3513_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
v_val_3502_ = v___x_3518_;
goto v___jp_3501_;
}
}
}
v___jp_3501_:
{
lean_object* v___x_3503_; 
v___x_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3503_, 0, v_val_3502_);
return v___x_3503_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO__1___lam__0___boxed(lean_object* v_00_u03b1_3521_, lean_object* v_x_3522_, lean_object* v___y_3523_){
_start:
{
lean_object* v_res_3524_; 
v_res_3524_ = l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO__1___lam__0(v_00_u03b1_3521_, v_x_3522_);
return v_res_3524_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO__1(lean_object* v_00_u03b5_3526_){
_start:
{
lean_object* v___f_3527_; 
v___f_3527_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadLiftEIO__1___closed__0));
return v___f_3527_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseAsync___lam__1(lean_object* v___f_3528_, lean_object* v_00_u03b1_3529_, lean_object* v_x_3530_){
_start:
{
lean_object* v___x_3532_; 
v___x_3532_ = lean_apply_1(v_x_3530_, lean_box(0));
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v_a_3533_; lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3541_; 
lean_dec_ref(v___f_3528_);
v_a_3533_ = lean_ctor_get(v___x_3532_, 0);
v_isSharedCheck_3541_ = !lean_is_exclusive(v___x_3532_);
if (v_isSharedCheck_3541_ == 0)
{
v___x_3535_ = v___x_3532_;
v_isShared_3536_ = v_isSharedCheck_3541_;
goto v_resetjp_3534_;
}
else
{
lean_inc(v_a_3533_);
lean_dec(v___x_3532_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3541_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v___x_3537_; lean_object* v___x_3539_; 
v___x_3537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3537_, 0, v_a_3533_);
if (v_isShared_3536_ == 0)
{
lean_ctor_set(v___x_3535_, 0, v___x_3537_);
v___x_3539_ = v___x_3535_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v___x_3537_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
return v___x_3539_;
}
}
}
else
{
lean_object* v_a_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3552_; 
v_a_3542_ = lean_ctor_get(v___x_3532_, 0);
v_isSharedCheck_3552_ = !lean_is_exclusive(v___x_3532_);
if (v_isSharedCheck_3552_ == 0)
{
v___x_3544_ = v___x_3532_;
v_isShared_3545_ = v_isSharedCheck_3552_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_a_3542_);
lean_dec(v___x_3532_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3552_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v___x_3546_; uint8_t v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3550_; 
v___x_3546_ = lean_unsigned_to_nat(0u);
v___x_3547_ = 0;
v___x_3548_ = lean_task_map(v___f_3528_, v_a_3542_, v___x_3546_, v___x_3547_);
if (v_isShared_3545_ == 0)
{
lean_ctor_set(v___x_3544_, 0, v___x_3548_);
v___x_3550_ = v___x_3544_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v___x_3548_);
v___x_3550_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
return v___x_3550_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseAsync___lam__1___boxed(lean_object* v___f_3553_, lean_object* v_00_u03b1_3554_, lean_object* v_x_3555_, lean_object* v___y_3556_){
_start:
{
lean_object* v_res_3557_; 
v_res_3557_ = l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseAsync___lam__1(v___f_3553_, v_00_u03b1_3554_, v_x_3555_);
return v_res_3557_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseAsync(lean_object* v_00_u03b5_3560_){
_start:
{
lean_object* v___f_3561_; 
v___f_3561_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadLiftBaseAsync___closed__0));
return v___f_3561_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg___lam__0___boxed(lean_object* v_promise_3562_, lean_object* v_f_3563_, lean_object* v_prio_3564_, lean_object* v_x_3565_, lean_object* v___y_3566_){
_start:
{
lean_object* v_res_3567_; 
v_res_3567_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg___lam__0(v_promise_3562_, v_f_3563_, v_prio_3564_, v_x_3565_);
return v_res_3567_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg(lean_object* v_f_3568_, lean_object* v_prio_3569_, lean_object* v_promise_3570_, lean_object* v_b_3571_){
_start:
{
lean_object* v___x_3573_; lean_object* v___x_3574_; 
v___x_3573_ = lean_box(0);
lean_inc_ref(v_f_3568_);
v___x_3574_ = lean_apply_3(v_f_3568_, v___x_3573_, v_b_3571_, lean_box(0));
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v_a_3575_; 
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
lean_inc(v_a_3575_);
lean_dec_ref(v___x_3574_);
if (lean_obj_tag(v_a_3575_) == 0)
{
lean_object* v_a_3576_; lean_object* v___x_3578_; uint8_t v_isShared_3579_; uint8_t v_isSharedCheck_3584_; 
lean_dec(v_prio_3569_);
lean_dec_ref(v_f_3568_);
v_a_3576_ = lean_ctor_get(v_a_3575_, 0);
v_isSharedCheck_3584_ = !lean_is_exclusive(v_a_3575_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3578_ = v_a_3575_;
v_isShared_3579_ = v_isSharedCheck_3584_;
goto v_resetjp_3577_;
}
else
{
lean_inc(v_a_3576_);
lean_dec(v_a_3575_);
v___x_3578_ = lean_box(0);
v_isShared_3579_ = v_isSharedCheck_3584_;
goto v_resetjp_3577_;
}
v_resetjp_3577_:
{
lean_object* v___x_3581_; 
if (v_isShared_3579_ == 0)
{
v___x_3581_ = v___x_3578_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v_a_3576_);
v___x_3581_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
lean_object* v___x_3582_; 
v___x_3582_ = lean_io_promise_resolve(v___x_3581_, v_promise_3570_);
lean_dec(v_promise_3570_);
return v___x_3582_;
}
}
}
else
{
lean_object* v_a_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3596_; 
v_a_3585_ = lean_ctor_get(v_a_3575_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v_a_3575_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3587_ = v_a_3575_;
v_isShared_3588_ = v_isSharedCheck_3596_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_a_3585_);
lean_dec(v_a_3575_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3596_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
if (lean_obj_tag(v_a_3585_) == 0)
{
lean_object* v_a_3589_; lean_object* v___x_3591_; 
lean_dec(v_prio_3569_);
lean_dec_ref(v_f_3568_);
v_a_3589_ = lean_ctor_get(v_a_3585_, 0);
lean_inc(v_a_3589_);
lean_dec_ref(v_a_3585_);
if (v_isShared_3588_ == 0)
{
lean_ctor_set(v___x_3587_, 0, v_a_3589_);
v___x_3591_ = v___x_3587_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3593_; 
v_reuseFailAlloc_3593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3593_, 0, v_a_3589_);
v___x_3591_ = v_reuseFailAlloc_3593_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
lean_object* v___x_3592_; 
v___x_3592_ = lean_io_promise_resolve(v___x_3591_, v_promise_3570_);
lean_dec(v_promise_3570_);
return v___x_3592_;
}
}
else
{
lean_object* v_a_3594_; 
lean_del_object(v___x_3587_);
v_a_3594_ = lean_ctor_get(v_a_3585_, 0);
lean_inc(v_a_3594_);
lean_dec_ref(v_a_3585_);
v_b_3571_ = v_a_3594_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3597_; lean_object* v___f_3598_; uint8_t v___x_3599_; lean_object* v___x_3600_; 
v_a_3597_ = lean_ctor_get(v___x_3574_, 0);
lean_inc_ref(v_a_3597_);
lean_dec_ref(v___x_3574_);
lean_inc(v_prio_3569_);
v___f_3598_ = lean_alloc_closure((void*)(l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3598_, 0, v_promise_3570_);
lean_closure_set(v___f_3598_, 1, v_f_3568_);
lean_closure_set(v___f_3598_, 2, v_prio_3569_);
v___x_3599_ = 0;
v___x_3600_ = l_BaseIO_chainTask___redArg(v_a_3597_, v___f_3598_, v_prio_3569_, v___x_3599_);
return v___x_3600_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg___lam__0(lean_object* v_promise_3601_, lean_object* v_f_3602_, lean_object* v_prio_3603_, lean_object* v_x_3604_){
_start:
{
if (lean_obj_tag(v_x_3604_) == 0)
{
lean_object* v_a_3606_; lean_object* v___x_3608_; uint8_t v_isShared_3609_; uint8_t v_isSharedCheck_3614_; 
lean_dec(v_prio_3603_);
lean_dec_ref(v_f_3602_);
v_a_3606_ = lean_ctor_get(v_x_3604_, 0);
v_isSharedCheck_3614_ = !lean_is_exclusive(v_x_3604_);
if (v_isSharedCheck_3614_ == 0)
{
v___x_3608_ = v_x_3604_;
v_isShared_3609_ = v_isSharedCheck_3614_;
goto v_resetjp_3607_;
}
else
{
lean_inc(v_a_3606_);
lean_dec(v_x_3604_);
v___x_3608_ = lean_box(0);
v_isShared_3609_ = v_isSharedCheck_3614_;
goto v_resetjp_3607_;
}
v_resetjp_3607_:
{
lean_object* v___x_3611_; 
if (v_isShared_3609_ == 0)
{
v___x_3611_ = v___x_3608_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3613_; 
v_reuseFailAlloc_3613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3613_, 0, v_a_3606_);
v___x_3611_ = v_reuseFailAlloc_3613_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
lean_object* v___x_3612_; 
v___x_3612_ = lean_io_promise_resolve(v___x_3611_, v_promise_3601_);
lean_dec(v_promise_3601_);
return v___x_3612_;
}
}
}
else
{
lean_object* v_a_3615_; lean_object* v___x_3617_; uint8_t v_isShared_3618_; uint8_t v_isSharedCheck_3626_; 
v_a_3615_ = lean_ctor_get(v_x_3604_, 0);
v_isSharedCheck_3626_ = !lean_is_exclusive(v_x_3604_);
if (v_isSharedCheck_3626_ == 0)
{
v___x_3617_ = v_x_3604_;
v_isShared_3618_ = v_isSharedCheck_3626_;
goto v_resetjp_3616_;
}
else
{
lean_inc(v_a_3615_);
lean_dec(v_x_3604_);
v___x_3617_ = lean_box(0);
v_isShared_3618_ = v_isSharedCheck_3626_;
goto v_resetjp_3616_;
}
v_resetjp_3616_:
{
if (lean_obj_tag(v_a_3615_) == 0)
{
lean_object* v_a_3619_; lean_object* v___x_3621_; 
lean_dec(v_prio_3603_);
lean_dec_ref(v_f_3602_);
v_a_3619_ = lean_ctor_get(v_a_3615_, 0);
lean_inc(v_a_3619_);
lean_dec_ref(v_a_3615_);
if (v_isShared_3618_ == 0)
{
lean_ctor_set(v___x_3617_, 0, v_a_3619_);
v___x_3621_ = v___x_3617_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_a_3619_);
v___x_3621_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
lean_object* v___x_3622_; 
v___x_3622_ = lean_io_promise_resolve(v___x_3621_, v_promise_3601_);
lean_dec(v_promise_3601_);
return v___x_3622_;
}
}
else
{
lean_object* v_a_3624_; lean_object* v___x_3625_; 
lean_del_object(v___x_3617_);
v_a_3624_ = lean_ctor_get(v_a_3615_, 0);
lean_inc(v_a_3624_);
lean_dec_ref(v_a_3615_);
v___x_3625_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg(v_f_3602_, v_prio_3603_, v_promise_3601_, v_a_3624_);
return v___x_3625_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg___boxed(lean_object* v_f_3627_, lean_object* v_prio_3628_, lean_object* v_promise_3629_, lean_object* v_b_3630_, lean_object* v_a_3631_){
_start:
{
lean_object* v_res_3632_; 
v_res_3632_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg(v_f_3627_, v_prio_3628_, v_promise_3629_, v_b_3630_);
return v_res_3632_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop(lean_object* v_00_u03b5_3633_, lean_object* v_00_u03b2_3634_, lean_object* v_f_3635_, lean_object* v_prio_3636_, lean_object* v_promise_3637_, lean_object* v_b_3638_){
_start:
{
lean_object* v___x_3640_; 
v___x_3640_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg(v_f_3635_, v_prio_3636_, v_promise_3637_, v_b_3638_);
return v___x_3640_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___boxed(lean_object* v_00_u03b5_3641_, lean_object* v_00_u03b2_3642_, lean_object* v_f_3643_, lean_object* v_prio_3644_, lean_object* v_promise_3645_, lean_object* v_b_3646_, lean_object* v_a_3647_){
_start:
{
lean_object* v_res_3648_; 
v_res_3648_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop(v_00_u03b5_3641_, v_00_u03b2_3642_, v_f_3643_, v_prio_3644_, v_promise_3645_, v_b_3646_);
return v_res_3648_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__0(lean_object* v_a_3649_, lean_object* v_x_3650_){
_start:
{
if (lean_obj_tag(v_x_3650_) == 0)
{
lean_object* v_a_3652_; lean_object* v___x_3654_; uint8_t v_isShared_3655_; uint8_t v_isSharedCheck_3660_; 
v_a_3652_ = lean_ctor_get(v_x_3650_, 0);
v_isSharedCheck_3660_ = !lean_is_exclusive(v_x_3650_);
if (v_isSharedCheck_3660_ == 0)
{
v___x_3654_ = v_x_3650_;
v_isShared_3655_ = v_isSharedCheck_3660_;
goto v_resetjp_3653_;
}
else
{
lean_inc(v_a_3652_);
lean_dec(v_x_3650_);
v___x_3654_ = lean_box(0);
v_isShared_3655_ = v_isSharedCheck_3660_;
goto v_resetjp_3653_;
}
v_resetjp_3653_:
{
lean_object* v___x_3657_; 
if (v_isShared_3655_ == 0)
{
v___x_3657_ = v___x_3654_;
goto v_reusejp_3656_;
}
else
{
lean_object* v_reuseFailAlloc_3659_; 
v_reuseFailAlloc_3659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3659_, 0, v_a_3652_);
v___x_3657_ = v_reuseFailAlloc_3659_;
goto v_reusejp_3656_;
}
v_reusejp_3656_:
{
lean_object* v___x_3658_; 
v___x_3658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3658_, 0, v___x_3657_);
return v___x_3658_;
}
}
}
else
{
lean_object* v___x_3661_; lean_object* v___x_3662_; 
lean_dec_ref(v_x_3650_);
v___x_3661_ = l_IO_Promise_result_x21___redArg(v_a_3649_);
v___x_3662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3661_);
return v___x_3662_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__0___boxed(lean_object* v_a_3663_, lean_object* v_x_3664_, lean_object* v___y_3665_){
_start:
{
lean_object* v_res_3666_; 
v_res_3666_ = l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__0(v_a_3663_, v_x_3664_);
lean_dec(v_a_3663_);
return v_res_3666_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__1(lean_object* v_f_3667_, lean_object* v_prio_3668_, lean_object* v_init_3669_, lean_object* v_x_3670_){
_start:
{
if (lean_obj_tag(v_x_3670_) == 0)
{
lean_object* v_a_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3680_; 
lean_dec(v_init_3669_);
lean_dec(v_prio_3668_);
lean_dec_ref(v_f_3667_);
v_a_3672_ = lean_ctor_get(v_x_3670_, 0);
v_isSharedCheck_3680_ = !lean_is_exclusive(v_x_3670_);
if (v_isSharedCheck_3680_ == 0)
{
v___x_3674_ = v_x_3670_;
v_isShared_3675_ = v_isSharedCheck_3680_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_a_3672_);
lean_dec(v_x_3670_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3680_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3677_; 
if (v_isShared_3675_ == 0)
{
v___x_3677_ = v___x_3674_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v_a_3672_);
v___x_3677_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
lean_object* v___x_3678_; 
v___x_3678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3678_, 0, v___x_3677_);
return v___x_3678_;
}
}
}
else
{
lean_object* v_a_3681_; lean_object* v___x_3683_; uint8_t v_isShared_3684_; uint8_t v_isSharedCheck_3694_; 
v_a_3681_ = lean_ctor_get(v_x_3670_, 0);
v_isSharedCheck_3694_ = !lean_is_exclusive(v_x_3670_);
if (v_isSharedCheck_3694_ == 0)
{
v___x_3683_ = v_x_3670_;
v_isShared_3684_ = v_isSharedCheck_3694_;
goto v_resetjp_3682_;
}
else
{
lean_inc(v_a_3681_);
lean_dec(v_x_3670_);
v___x_3683_ = lean_box(0);
v_isShared_3684_ = v_isSharedCheck_3694_;
goto v_resetjp_3682_;
}
v_resetjp_3682_:
{
lean_object* v___x_3685_; lean_object* v___f_3686_; lean_object* v___x_3688_; 
lean_inc(v_a_3681_);
v___x_3685_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg(v_f_3667_, v_prio_3668_, v_a_3681_, v_init_3669_);
v___f_3686_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3686_, 0, v_a_3681_);
if (v_isShared_3684_ == 0)
{
lean_ctor_set(v___x_3683_, 0, v___x_3685_);
v___x_3688_ = v___x_3683_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v___x_3685_);
v___x_3688_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
lean_object* v___x_3689_; lean_object* v___x_3690_; uint8_t v___x_3691_; lean_object* v___x_3692_; 
v___x_3689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3688_);
v___x_3690_ = lean_unsigned_to_nat(0u);
v___x_3691_ = 0;
v___x_3692_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3690_, v___x_3691_, v___x_3689_, v___f_3686_);
return v___x_3692_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__1___boxed(lean_object* v_f_3695_, lean_object* v_prio_3696_, lean_object* v_init_3697_, lean_object* v_x_3698_, lean_object* v___y_3699_){
_start:
{
lean_object* v_res_3700_; 
v_res_3700_ = l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__1(v_f_3695_, v_prio_3696_, v_init_3697_, v_x_3698_);
return v_res_3700_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___redArg(lean_object* v_init_3701_, lean_object* v_f_3702_, lean_object* v_prio_3703_){
_start:
{
lean_object* v___x_3705_; lean_object* v___f_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; uint8_t v___x_3710_; lean_object* v___x_3711_; 
v___x_3705_ = lean_io_promise_new();
v___f_3706_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3706_, 0, v_f_3702_);
lean_closure_set(v___f_3706_, 1, v_prio_3703_);
lean_closure_set(v___f_3706_, 2, v_init_3701_);
v___x_3707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3707_, 0, v___x_3705_);
v___x_3708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3708_, 0, v___x_3707_);
v___x_3709_ = lean_unsigned_to_nat(0u);
v___x_3710_ = 0;
v___x_3711_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3709_, v___x_3710_, v___x_3708_, v___f_3706_);
return v___x_3711_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___redArg___boxed(lean_object* v_init_3712_, lean_object* v_f_3713_, lean_object* v_prio_3714_, lean_object* v_a_3715_){
_start:
{
lean_object* v_res_3716_; 
v_res_3716_ = l_Std_Internal_IO_Async_EAsync_forIn___redArg(v_init_3712_, v_f_3713_, v_prio_3714_);
return v_res_3716_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn(lean_object* v_00_u03b5_3717_, lean_object* v_00_u03b2_3718_, lean_object* v_init_3719_, lean_object* v_f_3720_, lean_object* v_prio_3721_){
_start:
{
lean_object* v___x_3723_; lean_object* v___f_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; uint8_t v___x_3728_; lean_object* v___x_3729_; 
v___x_3723_ = lean_io_promise_new();
v___f_3724_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3724_, 0, v_f_3720_);
lean_closure_set(v___f_3724_, 1, v_prio_3721_);
lean_closure_set(v___f_3724_, 2, v_init_3719_);
v___x_3725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3723_);
v___x_3726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3726_, 0, v___x_3725_);
v___x_3727_ = lean_unsigned_to_nat(0u);
v___x_3728_ = 0;
v___x_3729_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3727_, v___x_3728_, v___x_3726_, v___f_3724_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_forIn___boxed(lean_object* v_00_u03b5_3730_, lean_object* v_00_u03b2_3731_, lean_object* v_init_3732_, lean_object* v_f_3733_, lean_object* v_prio_3734_, lean_object* v_a_3735_){
_start:
{
lean_object* v_res_3736_; 
v_res_3736_ = l_Std_Internal_IO_Async_EAsync_forIn(v_00_u03b5_3730_, v_00_u03b2_3731_, v_init_3732_, v_f_3733_, v_prio_3734_);
return v_res_3736_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___lam__1(lean_object* v_f_3737_, lean_object* v___x_3738_, lean_object* v_init_3739_, lean_object* v_x_3740_){
_start:
{
if (lean_obj_tag(v_x_3740_) == 0)
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3750_; 
lean_dec(v_init_3739_);
lean_dec(v___x_3738_);
lean_dec_ref(v_f_3737_);
v_a_3742_ = lean_ctor_get(v_x_3740_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v_x_3740_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3744_ = v_x_3740_;
v_isShared_3745_ = v_isSharedCheck_3750_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v_x_3740_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3750_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3742_);
v___x_3747_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
lean_object* v___x_3748_; 
v___x_3748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3747_);
return v___x_3748_;
}
}
}
else
{
lean_object* v_a_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3763_; 
v_a_3751_ = lean_ctor_get(v_x_3740_, 0);
v_isSharedCheck_3763_ = !lean_is_exclusive(v_x_3740_);
if (v_isSharedCheck_3763_ == 0)
{
v___x_3753_ = v_x_3740_;
v_isShared_3754_ = v_isSharedCheck_3763_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_a_3751_);
lean_dec(v_x_3740_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3763_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v___x_3755_; lean_object* v___f_3756_; lean_object* v___x_3758_; 
lean_inc(v_a_3751_);
lean_inc(v___x_3738_);
v___x_3755_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_EAsync_forIn_loop___redArg(v_f_3737_, v___x_3738_, v_a_3751_, v_init_3739_);
v___f_3756_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_forIn___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3756_, 0, v_a_3751_);
if (v_isShared_3754_ == 0)
{
lean_ctor_set(v___x_3753_, 0, v___x_3755_);
v___x_3758_ = v___x_3753_;
goto v_reusejp_3757_;
}
else
{
lean_object* v_reuseFailAlloc_3762_; 
v_reuseFailAlloc_3762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3762_, 0, v___x_3755_);
v___x_3758_ = v_reuseFailAlloc_3762_;
goto v_reusejp_3757_;
}
v_reusejp_3757_:
{
lean_object* v___x_3759_; uint8_t v___x_3760_; lean_object* v___x_3761_; 
v___x_3759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3759_, 0, v___x_3758_);
v___x_3760_ = 0;
v___x_3761_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3738_, v___x_3760_, v___x_3759_, v___f_3756_);
return v___x_3761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___lam__1___boxed(lean_object* v_f_3764_, lean_object* v___x_3765_, lean_object* v_init_3766_, lean_object* v_x_3767_, lean_object* v___y_3768_){
_start:
{
lean_object* v_res_3769_; 
v_res_3769_ = l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___lam__1(v_f_3764_, v___x_3765_, v_init_3766_, v_x_3767_);
return v_res_3769_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___lam__0(lean_object* v_00_u03b2_3770_, lean_object* v_x_3771_, lean_object* v_init_3772_, lean_object* v_f_3773_){
_start:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___f_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; uint8_t v___x_3780_; lean_object* v___x_3781_; 
v___x_3775_ = lean_io_promise_new();
v___x_3776_ = lean_unsigned_to_nat(0u);
v___f_3777_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3777_, 0, v_f_3773_);
lean_closure_set(v___f_3777_, 1, v___x_3776_);
lean_closure_set(v___f_3777_, 2, v_init_3772_);
v___x_3778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3778_, 0, v___x_3775_);
v___x_3779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3779_, 0, v___x_3778_);
v___x_3780_ = 0;
v___x_3781_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3776_, v___x_3780_, v___x_3779_, v___f_3777_);
return v___x_3781_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___lam__0___boxed(lean_object* v_00_u03b2_3782_, lean_object* v_x_3783_, lean_object* v_init_3784_, lean_object* v_f_3785_, lean_object* v___y_3786_){
_start:
{
lean_object* v_res_3787_; 
v_res_3787_ = l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___lam__0(v_00_u03b2_3782_, v_x_3783_, v_init_3784_, v_f_3785_);
return v_res_3787_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_instForInLoopUnit(lean_object* v_00_u03b5_3789_){
_start:
{
lean_object* v___f_3790_; 
v___f_3790_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instForInLoopUnit___closed__0));
return v___f_3790_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofExcept___redArg(lean_object* v_except_3791_){
_start:
{
lean_object* v___x_3793_; 
v___x_3793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3793_, 0, v_except_3791_);
return v___x_3793_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofExcept___redArg___boxed(lean_object* v_except_3794_, lean_object* v_a_3795_){
_start:
{
lean_object* v_res_3796_; 
v_res_3796_ = l_Std_Internal_IO_Async_EAsync_ofExcept___redArg(v_except_3794_);
return v_res_3796_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofExcept(lean_object* v_00_u03b5_3797_, lean_object* v_00_u03b1_3798_, lean_object* v_except_3799_){
_start:
{
lean_object* v___x_3801_; 
v___x_3801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3801_, 0, v_except_3799_);
return v___x_3801_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_ofExcept___boxed(lean_object* v_00_u03b5_3802_, lean_object* v_00_u03b1_3803_, lean_object* v_except_3804_, lean_object* v_a_3805_){
_start:
{
lean_object* v_res_3806_; 
v_res_3806_ = l_Std_Internal_IO_Async_EAsync_ofExcept(v_00_u03b5_3802_, v_00_u03b1_3803_, v_except_3804_);
return v_res_3806_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__1(lean_object* v_a_3807_, lean_object* v_x_3808_){
_start:
{
if (lean_obj_tag(v_x_3808_) == 0)
{
lean_object* v_a_3810_; lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3818_; 
lean_dec(v_a_3807_);
v_a_3810_ = lean_ctor_get(v_x_3808_, 0);
v_isSharedCheck_3818_ = !lean_is_exclusive(v_x_3808_);
if (v_isSharedCheck_3818_ == 0)
{
v___x_3812_ = v_x_3808_;
v_isShared_3813_ = v_isSharedCheck_3818_;
goto v_resetjp_3811_;
}
else
{
lean_inc(v_a_3810_);
lean_dec(v_x_3808_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3818_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
lean_object* v___x_3815_; 
if (v_isShared_3813_ == 0)
{
v___x_3815_ = v___x_3812_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v_a_3810_);
v___x_3815_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
lean_object* v___x_3816_; 
v___x_3816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3816_, 0, v___x_3815_);
return v___x_3816_;
}
}
}
else
{
lean_object* v_a_3819_; lean_object* v___x_3821_; uint8_t v_isShared_3822_; uint8_t v_isSharedCheck_3828_; 
v_a_3819_ = lean_ctor_get(v_x_3808_, 0);
v_isSharedCheck_3828_ = !lean_is_exclusive(v_x_3808_);
if (v_isSharedCheck_3828_ == 0)
{
v___x_3821_ = v_x_3808_;
v_isShared_3822_ = v_isSharedCheck_3828_;
goto v_resetjp_3820_;
}
else
{
lean_inc(v_a_3819_);
lean_dec(v_x_3808_);
v___x_3821_ = lean_box(0);
v_isShared_3822_ = v_isSharedCheck_3828_;
goto v_resetjp_3820_;
}
v_resetjp_3820_:
{
lean_object* v___x_3823_; lean_object* v___x_3825_; 
v___x_3823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3823_, 0, v_a_3807_);
lean_ctor_set(v___x_3823_, 1, v_a_3819_);
if (v_isShared_3822_ == 0)
{
lean_ctor_set(v___x_3821_, 0, v___x_3823_);
v___x_3825_ = v___x_3821_;
goto v_reusejp_3824_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v___x_3823_);
v___x_3825_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3824_;
}
v_reusejp_3824_:
{
lean_object* v___x_3826_; 
v___x_3826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3826_, 0, v___x_3825_);
return v___x_3826_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__1___boxed(lean_object* v_a_3829_, lean_object* v_x_3830_, lean_object* v___y_3831_){
_start:
{
lean_object* v_res_3832_; 
v_res_3832_ = l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__1(v_a_3829_, v_x_3830_);
return v_res_3832_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__0(lean_object* v_a_3833_, lean_object* v_x_3834_){
_start:
{
if (lean_obj_tag(v_x_3834_) == 0)
{
lean_object* v_a_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3844_; 
lean_dec_ref(v_a_3833_);
v_a_3836_ = lean_ctor_get(v_x_3834_, 0);
v_isSharedCheck_3844_ = !lean_is_exclusive(v_x_3834_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3838_ = v_x_3834_;
v_isShared_3839_ = v_isSharedCheck_3844_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_a_3836_);
lean_dec(v_x_3834_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3844_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3841_; 
if (v_isShared_3839_ == 0)
{
v___x_3841_ = v___x_3838_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v_a_3836_);
v___x_3841_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
lean_object* v___x_3842_; 
v___x_3842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3842_, 0, v___x_3841_);
return v___x_3842_;
}
}
}
else
{
lean_object* v_a_3845_; lean_object* v___f_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; uint8_t v___x_3849_; lean_object* v___x_3850_; 
v_a_3845_ = lean_ctor_get(v_x_3834_, 0);
lean_inc(v_a_3845_);
lean_dec_ref(v_x_3834_);
v___f_3846_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3846_, 0, v_a_3845_);
v___x_3847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3847_, 0, v_a_3833_);
v___x_3848_ = lean_unsigned_to_nat(0u);
v___x_3849_ = 0;
v___x_3850_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3848_, v___x_3849_, v___x_3847_, v___f_3846_);
return v___x_3850_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__0___boxed(lean_object* v_a_3851_, lean_object* v_x_3852_, lean_object* v___y_3853_){
_start:
{
lean_object* v_res_3854_; 
v_res_3854_ = l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__0(v_a_3851_, v_x_3852_);
return v_res_3854_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__2(lean_object* v_a_3855_, lean_object* v_x_3856_){
_start:
{
if (lean_obj_tag(v_x_3856_) == 0)
{
lean_object* v_a_3858_; lean_object* v___x_3860_; uint8_t v_isShared_3861_; uint8_t v_isSharedCheck_3866_; 
lean_dec_ref(v_a_3855_);
v_a_3858_ = lean_ctor_get(v_x_3856_, 0);
v_isSharedCheck_3866_ = !lean_is_exclusive(v_x_3856_);
if (v_isSharedCheck_3866_ == 0)
{
v___x_3860_ = v_x_3856_;
v_isShared_3861_ = v_isSharedCheck_3866_;
goto v_resetjp_3859_;
}
else
{
lean_inc(v_a_3858_);
lean_dec(v_x_3856_);
v___x_3860_ = lean_box(0);
v_isShared_3861_ = v_isSharedCheck_3866_;
goto v_resetjp_3859_;
}
v_resetjp_3859_:
{
lean_object* v___x_3863_; 
if (v_isShared_3861_ == 0)
{
v___x_3863_ = v___x_3860_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v_a_3858_);
v___x_3863_ = v_reuseFailAlloc_3865_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
lean_object* v___x_3864_; 
v___x_3864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3864_, 0, v___x_3863_);
return v___x_3864_;
}
}
}
else
{
lean_object* v_a_3867_; lean_object* v___f_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; uint8_t v___x_3871_; lean_object* v___x_3872_; 
v_a_3867_ = lean_ctor_get(v_x_3856_, 0);
lean_inc(v_a_3867_);
lean_dec_ref(v_x_3856_);
v___f_3868_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3868_, 0, v_a_3867_);
v___x_3869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3869_, 0, v_a_3855_);
v___x_3870_ = lean_unsigned_to_nat(0u);
v___x_3871_ = 0;
v___x_3872_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3870_, v___x_3871_, v___x_3869_, v___f_3868_);
return v___x_3872_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__2___boxed(lean_object* v_a_3873_, lean_object* v_x_3874_, lean_object* v___y_3875_){
_start:
{
lean_object* v_res_3876_; 
v_res_3876_ = l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__2(v_a_3873_, v_x_3874_);
return v_res_3876_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__3(lean_object* v_y_3877_, lean_object* v_prio_3878_, lean_object* v___f_3879_, lean_object* v_x_3880_){
_start:
{
if (lean_obj_tag(v_x_3880_) == 0)
{
lean_object* v_a_3882_; lean_object* v___x_3884_; uint8_t v_isShared_3885_; uint8_t v_isSharedCheck_3890_; 
lean_dec_ref(v___f_3879_);
lean_dec(v_prio_3878_);
lean_dec_ref(v_y_3877_);
v_a_3882_ = lean_ctor_get(v_x_3880_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v_x_3880_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3884_ = v_x_3880_;
v_isShared_3885_ = v_isSharedCheck_3890_;
goto v_resetjp_3883_;
}
else
{
lean_inc(v_a_3882_);
lean_dec(v_x_3880_);
v___x_3884_ = lean_box(0);
v_isShared_3885_ = v_isSharedCheck_3890_;
goto v_resetjp_3883_;
}
v_resetjp_3883_:
{
lean_object* v___x_3887_; 
if (v_isShared_3885_ == 0)
{
v___x_3887_ = v___x_3884_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_a_3882_);
v___x_3887_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
lean_object* v___x_3888_; 
v___x_3888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3888_, 0, v___x_3887_);
return v___x_3888_;
}
}
}
else
{
lean_object* v_a_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3907_; 
v_a_3891_ = lean_ctor_get(v_x_3880_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v_x_3880_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3893_ = v_x_3880_;
v_isShared_3894_ = v_isSharedCheck_3907_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_a_3891_);
lean_dec(v_x_3880_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3907_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___f_3897_; lean_object* v___x_3898_; uint8_t v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3902_; 
v___x_3895_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3895_, 0, lean_box(0));
lean_closure_set(v___x_3895_, 1, v_y_3877_);
v___x_3896_ = lean_io_as_task(v___x_3895_, v_prio_3878_);
v___f_3897_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3897_, 0, v_a_3891_);
v___x_3898_ = lean_unsigned_to_nat(0u);
v___x_3899_ = 1;
v___x_3900_ = lean_task_bind(v___x_3896_, v___f_3879_, v___x_3898_, v___x_3899_);
if (v_isShared_3894_ == 0)
{
lean_ctor_set(v___x_3893_, 0, v___x_3900_);
v___x_3902_ = v___x_3893_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v___x_3900_);
v___x_3902_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
lean_object* v___x_3903_; uint8_t v___x_3904_; lean_object* v___x_3905_; 
v___x_3903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3903_, 0, v___x_3902_);
v___x_3904_ = 0;
v___x_3905_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3898_, v___x_3904_, v___x_3903_, v___f_3897_);
return v___x_3905_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__3___boxed(lean_object* v_y_3908_, lean_object* v_prio_3909_, lean_object* v___f_3910_, lean_object* v_x_3911_, lean_object* v___y_3912_){
_start:
{
lean_object* v_res_3913_; 
v_res_3913_ = l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__3(v_y_3908_, v_prio_3909_, v___f_3910_, v_x_3911_);
return v_res_3913_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg(lean_object* v_x_3914_, lean_object* v_y_3915_, lean_object* v_prio_3916_){
_start:
{
lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___f_3920_; lean_object* v___f_3921_; lean_object* v___x_3922_; uint8_t v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; uint8_t v___x_3927_; lean_object* v___x_3928_; 
v___x_3918_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3918_, 0, lean_box(0));
lean_closure_set(v___x_3918_, 1, v_x_3914_);
lean_inc(v_prio_3916_);
v___x_3919_ = lean_io_as_task(v___x_3918_, v_prio_3916_);
v___f_3920_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___f_3921_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_3921_, 0, v_y_3915_);
lean_closure_set(v___f_3921_, 1, v_prio_3916_);
lean_closure_set(v___f_3921_, 2, v___f_3920_);
v___x_3922_ = lean_unsigned_to_nat(0u);
v___x_3923_ = 1;
v___x_3924_ = lean_task_bind(v___x_3919_, v___f_3920_, v___x_3922_, v___x_3923_);
v___x_3925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3925_, 0, v___x_3924_);
v___x_3926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3926_, 0, v___x_3925_);
v___x_3927_ = 0;
v___x_3928_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3922_, v___x_3927_, v___x_3926_, v___f_3921_);
return v___x_3928_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___redArg___boxed(lean_object* v_x_3929_, lean_object* v_y_3930_, lean_object* v_prio_3931_, lean_object* v_a_3932_){
_start:
{
lean_object* v_res_3933_; 
v_res_3933_ = l_Std_Internal_IO_Async_EAsync_concurrently___redArg(v_x_3929_, v_y_3930_, v_prio_3931_);
return v_res_3933_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently(lean_object* v_00_u03b5_3934_, lean_object* v_00_u03b1_3935_, lean_object* v_00_u03b2_3936_, lean_object* v_x_3937_, lean_object* v_y_3938_, lean_object* v_prio_3939_){
_start:
{
lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___f_3943_; lean_object* v___f_3944_; lean_object* v___x_3945_; uint8_t v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; uint8_t v___x_3950_; lean_object* v___x_3951_; 
v___x_3941_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3941_, 0, lean_box(0));
lean_closure_set(v___x_3941_, 1, v_x_3937_);
lean_inc(v_prio_3939_);
v___x_3942_ = lean_io_as_task(v___x_3941_, v_prio_3939_);
v___f_3943_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___f_3944_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_3944_, 0, v_y_3938_);
lean_closure_set(v___f_3944_, 1, v_prio_3939_);
lean_closure_set(v___f_3944_, 2, v___f_3943_);
v___x_3945_ = lean_unsigned_to_nat(0u);
v___x_3946_ = 1;
v___x_3947_ = lean_task_bind(v___x_3942_, v___f_3943_, v___x_3945_, v___x_3946_);
v___x_3948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3948_, 0, v___x_3947_);
v___x_3949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3948_);
v___x_3950_ = 0;
v___x_3951_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3945_, v___x_3950_, v___x_3949_, v___f_3944_);
return v___x_3951_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrently___boxed(lean_object* v_00_u03b5_3952_, lean_object* v_00_u03b1_3953_, lean_object* v_00_u03b2_3954_, lean_object* v_x_3955_, lean_object* v_y_3956_, lean_object* v_prio_3957_, lean_object* v_a_3958_){
_start:
{
lean_object* v_res_3959_; 
v_res_3959_ = l_Std_Internal_IO_Async_EAsync_concurrently(v_00_u03b5_3952_, v_00_u03b1_3953_, v_00_u03b2_3954_, v_x_3955_, v_y_3956_, v_prio_3957_);
return v_res_3959_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__1(lean_object* v_x_3960_){
_start:
{
if (lean_obj_tag(v_x_3960_) == 0)
{
lean_object* v_a_3962_; lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_3970_; 
v_a_3962_ = lean_ctor_get(v_x_3960_, 0);
v_isSharedCheck_3970_ = !lean_is_exclusive(v_x_3960_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3964_ = v_x_3960_;
v_isShared_3965_ = v_isSharedCheck_3970_;
goto v_resetjp_3963_;
}
else
{
lean_inc(v_a_3962_);
lean_dec(v_x_3960_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_3970_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
lean_object* v___x_3967_; 
if (v_isShared_3965_ == 0)
{
v___x_3967_ = v___x_3964_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3969_; 
v_reuseFailAlloc_3969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3969_, 0, v_a_3962_);
v___x_3967_ = v_reuseFailAlloc_3969_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
lean_object* v___x_3968_; 
v___x_3968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3968_, 0, v___x_3967_);
return v___x_3968_;
}
}
}
else
{
lean_object* v_a_3971_; lean_object* v___x_3972_; 
v_a_3971_ = lean_ctor_get(v_x_3960_, 0);
lean_inc(v_a_3971_);
lean_dec_ref(v_x_3960_);
v___x_3972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3972_, 0, v_a_3971_);
return v___x_3972_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__1___boxed(lean_object* v_x_3973_, lean_object* v___y_3974_){
_start:
{
lean_object* v_res_3975_; 
v_res_3975_ = l_Std_Internal_IO_Async_EAsync_race___redArg___lam__1(v_x_3973_);
return v_res_3975_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__0(lean_object* v_a_3976_){
_start:
{
lean_object* v___x_3977_; 
v___x_3977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3977_, 0, v_a_3976_);
return v___x_3977_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__3(lean_object* v_a_3978_, lean_object* v_value_3979_){
_start:
{
lean_object* v___x_3981_; 
v___x_3981_ = lean_io_promise_resolve(v_value_3979_, v_a_3978_);
return v___x_3981_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__3___boxed(lean_object* v_a_3982_, lean_object* v_value_3983_, lean_object* v___y_3984_){
_start:
{
lean_object* v_res_3985_; 
v_res_3985_ = l_Std_Internal_IO_Async_EAsync_race___redArg___lam__3(v_a_3982_, v_value_3983_);
lean_dec(v_a_3982_);
return v_res_3985_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__2(lean_object* v_a_3986_, lean_object* v___f_3987_, lean_object* v___f_3988_, lean_object* v_x_3989_){
_start:
{
if (lean_obj_tag(v_x_3989_) == 0)
{
lean_object* v_a_3991_; lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_3999_; 
lean_dec_ref(v___f_3988_);
lean_dec_ref(v___f_3987_);
v_a_3991_ = lean_ctor_get(v_x_3989_, 0);
v_isSharedCheck_3999_ = !lean_is_exclusive(v_x_3989_);
if (v_isSharedCheck_3999_ == 0)
{
v___x_3993_ = v_x_3989_;
v_isShared_3994_ = v_isSharedCheck_3999_;
goto v_resetjp_3992_;
}
else
{
lean_inc(v_a_3991_);
lean_dec(v_x_3989_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_3999_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
lean_object* v___x_3996_; 
if (v_isShared_3994_ == 0)
{
v___x_3996_ = v___x_3993_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_3998_; 
v_reuseFailAlloc_3998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3998_, 0, v_a_3991_);
v___x_3996_ = v_reuseFailAlloc_3998_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
lean_object* v___x_3997_; 
v___x_3997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3997_, 0, v___x_3996_);
return v___x_3997_;
}
}
}
else
{
lean_object* v___x_4000_; lean_object* v___x_4001_; uint8_t v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
lean_dec_ref(v_x_3989_);
v___x_4000_ = l_IO_Promise_result_x21___redArg(v_a_3986_);
v___x_4001_ = lean_unsigned_to_nat(0u);
v___x_4002_ = 0;
v___x_4003_ = lean_task_map(v___f_3987_, v___x_4000_, v___x_4001_, v___x_4002_);
v___x_4004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4004_, 0, v___x_4003_);
v___x_4005_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4001_, v___x_4002_, v___x_4004_, v___f_3988_);
return v___x_4005_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__2___boxed(lean_object* v_a_4006_, lean_object* v___f_4007_, lean_object* v___f_4008_, lean_object* v_x_4009_, lean_object* v___y_4010_){
_start:
{
lean_object* v_res_4011_; 
v_res_4011_ = l_Std_Internal_IO_Async_EAsync_race___redArg___lam__2(v_a_4006_, v___f_4007_, v___f_4008_, v_x_4009_);
lean_dec(v_a_4006_);
return v_res_4011_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__4(lean_object* v_a_4012_, lean_object* v___x_4013_, lean_object* v___x_4014_, uint8_t v___x_4015_, lean_object* v___f_4016_, lean_object* v_x_4017_){
_start:
{
if (lean_obj_tag(v_x_4017_) == 0)
{
lean_object* v_a_4019_; lean_object* v___x_4021_; uint8_t v_isShared_4022_; uint8_t v_isSharedCheck_4027_; 
lean_dec_ref(v___f_4016_);
lean_dec(v___x_4014_);
lean_dec_ref(v___x_4013_);
lean_dec_ref(v_a_4012_);
v_a_4019_ = lean_ctor_get(v_x_4017_, 0);
v_isSharedCheck_4027_ = !lean_is_exclusive(v_x_4017_);
if (v_isSharedCheck_4027_ == 0)
{
v___x_4021_ = v_x_4017_;
v_isShared_4022_ = v_isSharedCheck_4027_;
goto v_resetjp_4020_;
}
else
{
lean_inc(v_a_4019_);
lean_dec(v_x_4017_);
v___x_4021_ = lean_box(0);
v_isShared_4022_ = v_isSharedCheck_4027_;
goto v_resetjp_4020_;
}
v_resetjp_4020_:
{
lean_object* v___x_4024_; 
if (v_isShared_4022_ == 0)
{
v___x_4024_ = v___x_4021_;
goto v_reusejp_4023_;
}
else
{
lean_object* v_reuseFailAlloc_4026_; 
v_reuseFailAlloc_4026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4026_, 0, v_a_4019_);
v___x_4024_ = v_reuseFailAlloc_4026_;
goto v_reusejp_4023_;
}
v_reusejp_4023_:
{
lean_object* v___x_4025_; 
v___x_4025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4025_, 0, v___x_4024_);
return v___x_4025_;
}
}
}
else
{
lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4037_; 
v_isSharedCheck_4037_ = !lean_is_exclusive(v_x_4017_);
if (v_isSharedCheck_4037_ == 0)
{
lean_object* v_unused_4038_; 
v_unused_4038_ = lean_ctor_get(v_x_4017_, 0);
lean_dec(v_unused_4038_);
v___x_4029_ = v_x_4017_;
v_isShared_4030_ = v_isSharedCheck_4037_;
goto v_resetjp_4028_;
}
else
{
lean_dec(v_x_4017_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4037_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
lean_object* v___x_4031_; lean_object* v___x_4033_; 
lean_inc(v___x_4014_);
v___x_4031_ = l_BaseIO_chainTask___redArg(v_a_4012_, v___x_4013_, v___x_4014_, v___x_4015_);
if (v_isShared_4030_ == 0)
{
lean_ctor_set(v___x_4029_, 0, v___x_4031_);
v___x_4033_ = v___x_4029_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4036_; 
v_reuseFailAlloc_4036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4036_, 0, v___x_4031_);
v___x_4033_ = v_reuseFailAlloc_4036_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
lean_object* v___x_4034_; lean_object* v___x_4035_; 
v___x_4034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4034_, 0, v___x_4033_);
v___x_4035_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4014_, v___x_4015_, v___x_4034_, v___f_4016_);
return v___x_4035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__4___boxed(lean_object* v_a_4039_, lean_object* v___x_4040_, lean_object* v___x_4041_, lean_object* v___x_4042_, lean_object* v___f_4043_, lean_object* v_x_4044_, lean_object* v___y_4045_){
_start:
{
uint8_t v___x_1297__boxed_4046_; lean_object* v_res_4047_; 
v___x_1297__boxed_4046_ = lean_unbox(v___x_4042_);
v_res_4047_ = l_Std_Internal_IO_Async_EAsync_race___redArg___lam__4(v_a_4039_, v___x_4040_, v___x_4041_, v___x_1297__boxed_4046_, v___f_4043_, v_x_4044_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__5(lean_object* v___f_4048_, lean_object* v___f_4049_, lean_object* v_a_4050_, lean_object* v___f_4051_, lean_object* v_x_4052_){
_start:
{
if (lean_obj_tag(v_x_4052_) == 0)
{
lean_object* v_a_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4062_; 
lean_dec_ref(v___f_4051_);
lean_dec_ref(v_a_4050_);
lean_dec_ref(v___f_4049_);
lean_dec(v___f_4048_);
v_a_4054_ = lean_ctor_get(v_x_4052_, 0);
v_isSharedCheck_4062_ = !lean_is_exclusive(v_x_4052_);
if (v_isSharedCheck_4062_ == 0)
{
v___x_4056_ = v_x_4052_;
v_isShared_4057_ = v_isSharedCheck_4062_;
goto v_resetjp_4055_;
}
else
{
lean_inc(v_a_4054_);
lean_dec(v_x_4052_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4062_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
lean_object* v___x_4059_; 
if (v_isShared_4057_ == 0)
{
v___x_4059_ = v___x_4056_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v_a_4054_);
v___x_4059_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
lean_object* v___x_4060_; 
v___x_4060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4060_, 0, v___x_4059_);
return v___x_4060_;
}
}
}
else
{
lean_object* v_a_4063_; lean_object* v___x_4065_; uint8_t v_isShared_4066_; uint8_t v_isSharedCheck_4079_; 
v_a_4063_ = lean_ctor_get(v_x_4052_, 0);
v_isSharedCheck_4079_ = !lean_is_exclusive(v_x_4052_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4065_ = v_x_4052_;
v_isShared_4066_ = v_isSharedCheck_4079_;
goto v_resetjp_4064_;
}
else
{
lean_inc(v_a_4063_);
lean_dec(v_x_4052_);
v___x_4065_ = lean_box(0);
v_isShared_4066_ = v_isSharedCheck_4079_;
goto v_resetjp_4064_;
}
v_resetjp_4064_:
{
lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; uint8_t v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___f_4073_; lean_object* v___x_4075_; 
v___x_4067_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_4067_, 0, lean_box(0));
lean_closure_set(v___x_4067_, 1, lean_box(0));
lean_closure_set(v___x_4067_, 2, v___f_4048_);
lean_closure_set(v___x_4067_, 3, lean_box(0));
v___x_4068_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4068_, 0, lean_box(0));
lean_closure_set(v___x_4068_, 1, lean_box(0));
lean_closure_set(v___x_4068_, 2, lean_box(0));
lean_closure_set(v___x_4068_, 3, v___x_4067_);
lean_closure_set(v___x_4068_, 4, v___f_4049_);
v___x_4069_ = lean_unsigned_to_nat(0u);
v___x_4070_ = 0;
lean_inc_ref(v___x_4068_);
v___x_4071_ = l_BaseIO_chainTask___redArg(v_a_4050_, v___x_4068_, v___x_4069_, v___x_4070_);
v___x_4072_ = lean_box(v___x_4070_);
v___f_4073_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_4073_, 0, v_a_4063_);
lean_closure_set(v___f_4073_, 1, v___x_4068_);
lean_closure_set(v___f_4073_, 2, v___x_4069_);
lean_closure_set(v___f_4073_, 3, v___x_4072_);
lean_closure_set(v___f_4073_, 4, v___f_4051_);
if (v_isShared_4066_ == 0)
{
lean_ctor_set(v___x_4065_, 0, v___x_4071_);
v___x_4075_ = v___x_4065_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v___x_4071_);
v___x_4075_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
lean_object* v___x_4076_; lean_object* v___x_4077_; 
v___x_4076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4076_, 0, v___x_4075_);
v___x_4077_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4069_, v___x_4070_, v___x_4076_, v___f_4073_);
return v___x_4077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__5___boxed(lean_object* v___f_4080_, lean_object* v___f_4081_, lean_object* v_a_4082_, lean_object* v___f_4083_, lean_object* v_x_4084_, lean_object* v___y_4085_){
_start:
{
lean_object* v_res_4086_; 
v_res_4086_ = l_Std_Internal_IO_Async_EAsync_race___redArg___lam__5(v___f_4080_, v___f_4081_, v_a_4082_, v___f_4083_, v_x_4084_);
return v_res_4086_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__6(lean_object* v_y_4087_, lean_object* v_prio_4088_, lean_object* v___f_4089_, lean_object* v___f_4090_, lean_object* v___f_4091_, lean_object* v___f_4092_, lean_object* v_x_4093_){
_start:
{
if (lean_obj_tag(v_x_4093_) == 0)
{
lean_object* v_a_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4103_; 
lean_dec_ref(v___f_4092_);
lean_dec_ref(v___f_4091_);
lean_dec_ref(v___f_4090_);
lean_dec(v___f_4089_);
lean_dec(v_prio_4088_);
lean_dec_ref(v_y_4087_);
v_a_4095_ = lean_ctor_get(v_x_4093_, 0);
v_isSharedCheck_4103_ = !lean_is_exclusive(v_x_4093_);
if (v_isSharedCheck_4103_ == 0)
{
v___x_4097_ = v_x_4093_;
v_isShared_4098_ = v_isSharedCheck_4103_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_a_4095_);
lean_dec(v_x_4093_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4103_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v___x_4100_; 
if (v_isShared_4098_ == 0)
{
v___x_4100_ = v___x_4097_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4102_; 
v_reuseFailAlloc_4102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4102_, 0, v_a_4095_);
v___x_4100_ = v_reuseFailAlloc_4102_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
lean_object* v___x_4101_; 
v___x_4101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4101_, 0, v___x_4100_);
return v___x_4101_;
}
}
}
else
{
lean_object* v_a_4104_; lean_object* v___x_4106_; uint8_t v_isShared_4107_; uint8_t v_isSharedCheck_4120_; 
v_a_4104_ = lean_ctor_get(v_x_4093_, 0);
v_isSharedCheck_4120_ = !lean_is_exclusive(v_x_4093_);
if (v_isSharedCheck_4120_ == 0)
{
v___x_4106_ = v_x_4093_;
v_isShared_4107_ = v_isSharedCheck_4120_;
goto v_resetjp_4105_;
}
else
{
lean_inc(v_a_4104_);
lean_dec(v_x_4093_);
v___x_4106_ = lean_box(0);
v_isShared_4107_ = v_isSharedCheck_4120_;
goto v_resetjp_4105_;
}
v_resetjp_4105_:
{
lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___f_4110_; lean_object* v___x_4111_; uint8_t v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4115_; 
v___x_4108_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4108_, 0, lean_box(0));
lean_closure_set(v___x_4108_, 1, v_y_4087_);
v___x_4109_ = lean_io_as_task(v___x_4108_, v_prio_4088_);
v___f_4110_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_race___redArg___lam__5___boxed), 6, 4);
lean_closure_set(v___f_4110_, 0, v___f_4089_);
lean_closure_set(v___f_4110_, 1, v___f_4090_);
lean_closure_set(v___f_4110_, 2, v_a_4104_);
lean_closure_set(v___f_4110_, 3, v___f_4091_);
v___x_4111_ = lean_unsigned_to_nat(0u);
v___x_4112_ = 1;
v___x_4113_ = lean_task_bind(v___x_4109_, v___f_4092_, v___x_4111_, v___x_4112_);
if (v_isShared_4107_ == 0)
{
lean_ctor_set(v___x_4106_, 0, v___x_4113_);
v___x_4115_ = v___x_4106_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4119_; 
v_reuseFailAlloc_4119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4119_, 0, v___x_4113_);
v___x_4115_ = v_reuseFailAlloc_4119_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
lean_object* v___x_4116_; uint8_t v___x_4117_; lean_object* v___x_4118_; 
v___x_4116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4115_);
v___x_4117_ = 0;
v___x_4118_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4111_, v___x_4117_, v___x_4116_, v___f_4110_);
return v___x_4118_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__6___boxed(lean_object* v_y_4121_, lean_object* v_prio_4122_, lean_object* v___f_4123_, lean_object* v___f_4124_, lean_object* v___f_4125_, lean_object* v___f_4126_, lean_object* v_x_4127_, lean_object* v___y_4128_){
_start:
{
lean_object* v_res_4129_; 
v_res_4129_ = l_Std_Internal_IO_Async_EAsync_race___redArg___lam__6(v_y_4121_, v_prio_4122_, v___f_4123_, v___f_4124_, v___f_4125_, v___f_4126_, v_x_4127_);
return v_res_4129_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__7(lean_object* v_x_4130_, lean_object* v_prio_4131_, lean_object* v___f_4132_, lean_object* v___f_4133_, lean_object* v_y_4134_, lean_object* v___f_4135_, lean_object* v___f_4136_, lean_object* v___f_4137_, lean_object* v_x_4138_){
_start:
{
if (lean_obj_tag(v_x_4138_) == 0)
{
lean_object* v_a_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4148_; 
lean_dec_ref(v___f_4137_);
lean_dec_ref(v___f_4136_);
lean_dec(v___f_4135_);
lean_dec_ref(v_y_4134_);
lean_dec_ref(v___f_4133_);
lean_dec_ref(v___f_4132_);
lean_dec(v_prio_4131_);
lean_dec_ref(v_x_4130_);
v_a_4140_ = lean_ctor_get(v_x_4138_, 0);
v_isSharedCheck_4148_ = !lean_is_exclusive(v_x_4138_);
if (v_isSharedCheck_4148_ == 0)
{
v___x_4142_ = v_x_4138_;
v_isShared_4143_ = v_isSharedCheck_4148_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_a_4140_);
lean_dec(v_x_4138_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4148_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v___x_4145_; 
if (v_isShared_4143_ == 0)
{
v___x_4145_ = v___x_4142_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4147_; 
v_reuseFailAlloc_4147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4147_, 0, v_a_4140_);
v___x_4145_ = v_reuseFailAlloc_4147_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
lean_object* v___x_4146_; 
v___x_4146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4146_, 0, v___x_4145_);
return v___x_4146_;
}
}
}
else
{
lean_object* v_a_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4167_; 
v_a_4149_ = lean_ctor_get(v_x_4138_, 0);
v_isSharedCheck_4167_ = !lean_is_exclusive(v_x_4138_);
if (v_isSharedCheck_4167_ == 0)
{
v___x_4151_ = v_x_4138_;
v_isShared_4152_ = v_isSharedCheck_4167_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_a_4149_);
lean_dec(v_x_4138_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4167_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___f_4155_; lean_object* v___f_4156_; lean_object* v___f_4157_; lean_object* v___x_4158_; uint8_t v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4162_; 
v___x_4153_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4153_, 0, lean_box(0));
lean_closure_set(v___x_4153_, 1, v_x_4130_);
lean_inc(v_prio_4131_);
v___x_4154_ = lean_io_as_task(v___x_4153_, v_prio_4131_);
lean_inc(v_a_4149_);
v___f_4155_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4155_, 0, v_a_4149_);
v___f_4156_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4156_, 0, v_a_4149_);
lean_closure_set(v___f_4156_, 1, v___f_4132_);
lean_closure_set(v___f_4156_, 2, v___f_4133_);
v___f_4157_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_race___redArg___lam__6___boxed), 8, 6);
lean_closure_set(v___f_4157_, 0, v_y_4134_);
lean_closure_set(v___f_4157_, 1, v_prio_4131_);
lean_closure_set(v___f_4157_, 2, v___f_4135_);
lean_closure_set(v___f_4157_, 3, v___f_4155_);
lean_closure_set(v___f_4157_, 4, v___f_4156_);
lean_closure_set(v___f_4157_, 5, v___f_4136_);
v___x_4158_ = lean_unsigned_to_nat(0u);
v___x_4159_ = 1;
v___x_4160_ = lean_task_bind(v___x_4154_, v___f_4137_, v___x_4158_, v___x_4159_);
if (v_isShared_4152_ == 0)
{
lean_ctor_set(v___x_4151_, 0, v___x_4160_);
v___x_4162_ = v___x_4151_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v___x_4160_);
v___x_4162_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
lean_object* v___x_4163_; uint8_t v___x_4164_; lean_object* v___x_4165_; 
v___x_4163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4163_, 0, v___x_4162_);
v___x_4164_ = 0;
v___x_4165_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4158_, v___x_4164_, v___x_4163_, v___f_4157_);
return v___x_4165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___lam__7___boxed(lean_object* v_x_4168_, lean_object* v_prio_4169_, lean_object* v___f_4170_, lean_object* v___f_4171_, lean_object* v_y_4172_, lean_object* v___f_4173_, lean_object* v___f_4174_, lean_object* v___f_4175_, lean_object* v_x_4176_, lean_object* v___y_4177_){
_start:
{
lean_object* v_res_4178_; 
v_res_4178_ = l_Std_Internal_IO_Async_EAsync_race___redArg___lam__7(v_x_4168_, v_prio_4169_, v___f_4170_, v___f_4171_, v_y_4172_, v___f_4173_, v___f_4174_, v___f_4175_, v_x_4176_);
return v_res_4178_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg(lean_object* v_x_4181_, lean_object* v_y_4182_, lean_object* v_prio_4183_){
_start:
{
lean_object* v___x_4185_; lean_object* v___f_4186_; lean_object* v___f_4187_; lean_object* v___f_4188_; lean_object* v___f_4189_; lean_object* v___f_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; uint8_t v___x_4194_; lean_object* v___x_4195_; 
v___x_4185_ = lean_io_promise_new();
v___f_4186_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___f_4187_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_race___redArg___closed__0));
v___f_4188_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_race___redArg___closed__1));
v___f_4189_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0));
v___f_4190_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_4190_, 0, v_x_4181_);
lean_closure_set(v___f_4190_, 1, v_prio_4183_);
lean_closure_set(v___f_4190_, 2, v___f_4188_);
lean_closure_set(v___f_4190_, 3, v___f_4187_);
lean_closure_set(v___f_4190_, 4, v_y_4182_);
lean_closure_set(v___f_4190_, 5, v___f_4189_);
lean_closure_set(v___f_4190_, 6, v___f_4186_);
lean_closure_set(v___f_4190_, 7, v___f_4186_);
v___x_4191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4191_, 0, v___x_4185_);
v___x_4192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4192_, 0, v___x_4191_);
v___x_4193_ = lean_unsigned_to_nat(0u);
v___x_4194_ = 0;
v___x_4195_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4193_, v___x_4194_, v___x_4192_, v___f_4190_);
return v___x_4195_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___redArg___boxed(lean_object* v_x_4196_, lean_object* v_y_4197_, lean_object* v_prio_4198_, lean_object* v_a_4199_){
_start:
{
lean_object* v_res_4200_; 
v_res_4200_ = l_Std_Internal_IO_Async_EAsync_race___redArg(v_x_4196_, v_y_4197_, v_prio_4198_);
return v_res_4200_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race(lean_object* v_00_u03b1_4201_, lean_object* v_00_u03b5_4202_, lean_object* v_inst_4203_, lean_object* v_x_4204_, lean_object* v_y_4205_, lean_object* v_prio_4206_){
_start:
{
lean_object* v___x_4208_; lean_object* v___f_4209_; lean_object* v___f_4210_; lean_object* v___f_4211_; lean_object* v___f_4212_; lean_object* v___f_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; uint8_t v___x_4217_; lean_object* v___x_4218_; 
v___x_4208_ = lean_io_promise_new();
v___f_4209_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___f_4210_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_race___redArg___closed__0));
v___f_4211_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_race___redArg___closed__1));
v___f_4212_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0));
v___f_4213_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_4213_, 0, v_x_4204_);
lean_closure_set(v___f_4213_, 1, v_prio_4206_);
lean_closure_set(v___f_4213_, 2, v___f_4211_);
lean_closure_set(v___f_4213_, 3, v___f_4210_);
lean_closure_set(v___f_4213_, 4, v_y_4205_);
lean_closure_set(v___f_4213_, 5, v___f_4212_);
lean_closure_set(v___f_4213_, 6, v___f_4209_);
lean_closure_set(v___f_4213_, 7, v___f_4209_);
v___x_4214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4214_, 0, v___x_4208_);
v___x_4215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4215_, 0, v___x_4214_);
v___x_4216_ = lean_unsigned_to_nat(0u);
v___x_4217_ = 0;
v___x_4218_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4216_, v___x_4217_, v___x_4215_, v___f_4213_);
return v___x_4218_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_race___boxed(lean_object* v_00_u03b1_4219_, lean_object* v_00_u03b5_4220_, lean_object* v_inst_4221_, lean_object* v_x_4222_, lean_object* v_y_4223_, lean_object* v_prio_4224_, lean_object* v_a_4225_){
_start:
{
lean_object* v_res_4226_; 
v_res_4226_ = l_Std_Internal_IO_Async_EAsync_race(v_00_u03b1_4219_, v_00_u03b5_4220_, v_inst_4221_, v_x_4222_, v_y_4223_, v_prio_4224_);
lean_dec(v_inst_4221_);
return v_res_4226_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__1(lean_object* v_prio_4227_, lean_object* v___f_4228_, lean_object* v_x_4229_){
_start:
{
lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; uint8_t v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; 
v___x_4231_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4231_, 0, lean_box(0));
lean_closure_set(v___x_4231_, 1, v_x_4229_);
v___x_4232_ = lean_io_as_task(v___x_4231_, v_prio_4227_);
v___x_4233_ = lean_unsigned_to_nat(0u);
v___x_4234_ = 1;
v___x_4235_ = lean_task_bind(v___x_4232_, v___f_4228_, v___x_4233_, v___x_4234_);
v___x_4236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4235_);
v___x_4237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4237_, 0, v___x_4236_);
return v___x_4237_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_4238_, lean_object* v___f_4239_, lean_object* v_x_4240_, lean_object* v___y_4241_){
_start:
{
lean_object* v_res_4242_; 
v_res_4242_ = l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__1(v_prio_4238_, v___f_4239_, v_x_4240_);
return v_res_4242_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__0(lean_object* v___y_4243_){
_start:
{
lean_object* v___x_4245_; 
v___x_4245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4245_, 0, v___y_4243_);
return v___x_4245_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___y_4246_, lean_object* v___y_4247_){
_start:
{
lean_object* v_res_4248_; 
v_res_4248_ = l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__0(v___y_4246_);
return v_res_4248_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__2(lean_object* v___x_4249_, lean_object* v___f_4250_, lean_object* v_x_4251_){
_start:
{
if (lean_obj_tag(v_x_4251_) == 0)
{
lean_object* v_a_4253_; lean_object* v___x_4255_; uint8_t v_isShared_4256_; uint8_t v_isSharedCheck_4261_; 
lean_dec_ref(v___f_4250_);
lean_dec_ref(v___x_4249_);
v_a_4253_ = lean_ctor_get(v_x_4251_, 0);
v_isSharedCheck_4261_ = !lean_is_exclusive(v_x_4251_);
if (v_isSharedCheck_4261_ == 0)
{
v___x_4255_ = v_x_4251_;
v_isShared_4256_ = v_isSharedCheck_4261_;
goto v_resetjp_4254_;
}
else
{
lean_inc(v_a_4253_);
lean_dec(v_x_4251_);
v___x_4255_ = lean_box(0);
v_isShared_4256_ = v_isSharedCheck_4261_;
goto v_resetjp_4254_;
}
v_resetjp_4254_:
{
lean_object* v___x_4258_; 
if (v_isShared_4256_ == 0)
{
v___x_4258_ = v___x_4255_;
goto v_reusejp_4257_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v_a_4253_);
v___x_4258_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4257_;
}
v_reusejp_4257_:
{
lean_object* v___x_4259_; 
v___x_4259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4259_, 0, v___x_4258_);
return v___x_4259_;
}
}
}
else
{
lean_object* v_a_4262_; size_t v_sz_4263_; size_t v___x_4264_; lean_object* v___x_290__overap_4265_; lean_object* v___x_4266_; 
v_a_4262_ = lean_ctor_get(v_x_4251_, 0);
lean_inc(v_a_4262_);
lean_dec_ref(v_x_4251_);
v_sz_4263_ = lean_array_size(v_a_4262_);
v___x_4264_ = ((size_t)0ULL);
v___x_290__overap_4265_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4249_, v___f_4250_, v_sz_4263_, v___x_4264_, v_a_4262_);
v___x_4266_ = lean_apply_1(v___x_290__overap_4265_, lean_box(0));
return v___x_4266_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed(lean_object* v___x_4267_, lean_object* v___f_4268_, lean_object* v_x_4269_, lean_object* v___y_4270_){
_start:
{
lean_object* v_res_4271_; 
v_res_4271_ = l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__2(v___x_4267_, v___f_4268_, v_x_4269_);
return v_res_4271_;
}
}
static lean_object* _init_l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0(void){
_start:
{
lean_object* v___x_4272_; 
v___x_4272_ = l_Std_Internal_IO_Async_EAsync_instMonad(lean_box(0));
return v___x_4272_;
}
}
static lean_object* _init_l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__2(void){
_start:
{
lean_object* v___f_4274_; lean_object* v___x_4275_; lean_object* v___f_4276_; 
v___f_4274_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__1));
v___x_4275_ = lean_obj_once(&l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0, &l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0_once, _init_l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0);
v___f_4276_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4276_, 0, v___x_4275_);
lean_closure_set(v___f_4276_, 1, v___f_4274_);
return v___f_4276_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg(lean_object* v_xs_4277_, lean_object* v_prio_4278_){
_start:
{
lean_object* v___f_4280_; lean_object* v___f_4281_; lean_object* v___x_4282_; size_t v_sz_4283_; size_t v___x_4284_; lean_object* v___x_217__overap_4285_; lean_object* v___x_4286_; lean_object* v___f_4287_; lean_object* v___x_4288_; uint8_t v___x_4289_; lean_object* v___x_4290_; 
v___f_4280_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___f_4281_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4281_, 0, v_prio_4278_);
lean_closure_set(v___f_4281_, 1, v___f_4280_);
v___x_4282_ = lean_obj_once(&l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0, &l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0_once, _init_l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0);
v_sz_4283_ = lean_array_size(v_xs_4277_);
v___x_4284_ = ((size_t)0ULL);
v___x_217__overap_4285_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4282_, v___f_4281_, v_sz_4283_, v___x_4284_, v_xs_4277_);
v___x_4286_ = lean_apply_1(v___x_217__overap_4285_, lean_box(0));
v___f_4287_ = lean_obj_once(&l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__2, &l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__2_once, _init_l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__2);
v___x_4288_ = lean_unsigned_to_nat(0u);
v___x_4289_ = 0;
v___x_4290_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4288_, v___x_4289_, v___x_4286_, v___f_4287_);
return v___x_4290_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___boxed(lean_object* v_xs_4291_, lean_object* v_prio_4292_, lean_object* v_a_4293_){
_start:
{
lean_object* v_res_4294_; 
v_res_4294_ = l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg(v_xs_4291_, v_prio_4292_);
return v_res_4294_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll(lean_object* v_00_u03b5_4295_, lean_object* v_00_u03b1_4296_, lean_object* v_xs_4297_, lean_object* v_prio_4298_){
_start:
{
lean_object* v___f_4300_; lean_object* v___f_4301_; lean_object* v___x_4302_; size_t v_sz_4303_; size_t v___x_4304_; lean_object* v___x_239__overap_4305_; lean_object* v___x_4306_; lean_object* v___f_4307_; lean_object* v___x_4308_; uint8_t v___x_4309_; lean_object* v___x_4310_; 
v___f_4300_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___f_4301_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4301_, 0, v_prio_4298_);
lean_closure_set(v___f_4301_, 1, v___f_4300_);
v___x_4302_ = lean_obj_once(&l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0, &l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0_once, _init_l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0);
v_sz_4303_ = lean_array_size(v_xs_4297_);
v___x_4304_ = ((size_t)0ULL);
v___x_239__overap_4305_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4302_, v___f_4301_, v_sz_4303_, v___x_4304_, v_xs_4297_);
v___x_4306_ = lean_apply_1(v___x_239__overap_4305_, lean_box(0));
v___f_4307_ = lean_obj_once(&l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__2, &l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__2_once, _init_l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__2);
v___x_4308_ = lean_unsigned_to_nat(0u);
v___x_4309_ = 0;
v___x_4310_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4308_, v___x_4309_, v___x_4306_, v___f_4307_);
return v___x_4310_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_concurrentlyAll___boxed(lean_object* v_00_u03b5_4311_, lean_object* v_00_u03b1_4312_, lean_object* v_xs_4313_, lean_object* v_prio_4314_, lean_object* v_a_4315_){
_start:
{
lean_object* v_res_4316_; 
v_res_4316_ = l_Std_Internal_IO_Async_EAsync_concurrentlyAll(v_00_u03b5_4311_, v_00_u03b1_4312_, v_xs_4313_, v_prio_4314_);
return v_res_4316_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__4(lean_object* v___f_4317_, lean_object* v___f_4318_, lean_object* v_x_4319_){
_start:
{
if (lean_obj_tag(v_x_4319_) == 0)
{
lean_object* v_a_4321_; lean_object* v___x_4323_; uint8_t v_isShared_4324_; uint8_t v_isSharedCheck_4329_; 
lean_dec_ref(v___f_4318_);
lean_dec(v___f_4317_);
v_a_4321_ = lean_ctor_get(v_x_4319_, 0);
v_isSharedCheck_4329_ = !lean_is_exclusive(v_x_4319_);
if (v_isSharedCheck_4329_ == 0)
{
v___x_4323_ = v_x_4319_;
v_isShared_4324_ = v_isSharedCheck_4329_;
goto v_resetjp_4322_;
}
else
{
lean_inc(v_a_4321_);
lean_dec(v_x_4319_);
v___x_4323_ = lean_box(0);
v_isShared_4324_ = v_isSharedCheck_4329_;
goto v_resetjp_4322_;
}
v_resetjp_4322_:
{
lean_object* v___x_4326_; 
if (v_isShared_4324_ == 0)
{
v___x_4326_ = v___x_4323_;
goto v_reusejp_4325_;
}
else
{
lean_object* v_reuseFailAlloc_4328_; 
v_reuseFailAlloc_4328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4328_, 0, v_a_4321_);
v___x_4326_ = v_reuseFailAlloc_4328_;
goto v_reusejp_4325_;
}
v_reusejp_4325_:
{
lean_object* v___x_4327_; 
v___x_4327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4327_, 0, v___x_4326_);
return v___x_4327_;
}
}
}
else
{
lean_object* v_a_4330_; lean_object* v___x_4332_; uint8_t v_isShared_4333_; uint8_t v_isSharedCheck_4343_; 
v_a_4330_ = lean_ctor_get(v_x_4319_, 0);
v_isSharedCheck_4343_ = !lean_is_exclusive(v_x_4319_);
if (v_isSharedCheck_4343_ == 0)
{
v___x_4332_ = v_x_4319_;
v_isShared_4333_ = v_isSharedCheck_4343_;
goto v_resetjp_4331_;
}
else
{
lean_inc(v_a_4330_);
lean_dec(v_x_4319_);
v___x_4332_ = lean_box(0);
v_isShared_4333_ = v_isSharedCheck_4343_;
goto v_resetjp_4331_;
}
v_resetjp_4331_:
{
lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; uint8_t v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4340_; 
v___x_4334_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_4334_, 0, lean_box(0));
lean_closure_set(v___x_4334_, 1, lean_box(0));
lean_closure_set(v___x_4334_, 2, v___f_4317_);
lean_closure_set(v___x_4334_, 3, lean_box(0));
v___x_4335_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4335_, 0, lean_box(0));
lean_closure_set(v___x_4335_, 1, lean_box(0));
lean_closure_set(v___x_4335_, 2, lean_box(0));
lean_closure_set(v___x_4335_, 3, v___x_4334_);
lean_closure_set(v___x_4335_, 4, v___f_4318_);
v___x_4336_ = lean_unsigned_to_nat(0u);
v___x_4337_ = 0;
v___x_4338_ = l_BaseIO_chainTask___redArg(v_a_4330_, v___x_4335_, v___x_4336_, v___x_4337_);
if (v_isShared_4333_ == 0)
{
lean_ctor_set(v___x_4332_, 0, v___x_4338_);
v___x_4340_ = v___x_4332_;
goto v_reusejp_4339_;
}
else
{
lean_object* v_reuseFailAlloc_4342_; 
v_reuseFailAlloc_4342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4342_, 0, v___x_4338_);
v___x_4340_ = v_reuseFailAlloc_4342_;
goto v_reusejp_4339_;
}
v_reusejp_4339_:
{
lean_object* v___x_4341_; 
v___x_4341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4341_, 0, v___x_4340_);
return v___x_4341_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__4___boxed(lean_object* v___f_4344_, lean_object* v___f_4345_, lean_object* v_x_4346_, lean_object* v___y_4347_){
_start:
{
lean_object* v_res_4348_; 
v_res_4348_ = l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__4(v___f_4344_, v___f_4345_, v_x_4346_);
return v_res_4348_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__0(lean_object* v_prio_4349_, lean_object* v___f_4350_, lean_object* v___f_4351_, lean_object* v_x_4352_){
_start:
{
lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; uint8_t v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; uint8_t v___x_4361_; lean_object* v___x_4362_; 
v___x_4354_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4354_, 0, lean_box(0));
lean_closure_set(v___x_4354_, 1, v_x_4352_);
v___x_4355_ = lean_io_as_task(v___x_4354_, v_prio_4349_);
v___x_4356_ = lean_unsigned_to_nat(0u);
v___x_4357_ = 1;
v___x_4358_ = lean_task_bind(v___x_4355_, v___f_4350_, v___x_4356_, v___x_4357_);
v___x_4359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4359_, 0, v___x_4358_);
v___x_4360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4360_, 0, v___x_4359_);
v___x_4361_ = 0;
v___x_4362_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4356_, v___x_4361_, v___x_4360_, v___f_4351_);
return v___x_4362_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__0___boxed(lean_object* v_prio_4363_, lean_object* v___f_4364_, lean_object* v___f_4365_, lean_object* v_x_4366_, lean_object* v___y_4367_){
_start:
{
lean_object* v_res_4368_; 
v_res_4368_ = l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__0(v_prio_4363_, v___f_4364_, v___f_4365_, v_x_4366_);
return v_res_4368_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__2(lean_object* v___f_4369_, lean_object* v_prio_4370_, lean_object* v___f_4371_, lean_object* v_inst_4372_, lean_object* v_xs_4373_, lean_object* v___f_4374_, lean_object* v___f_4375_, lean_object* v_x_4376_){
_start:
{
if (lean_obj_tag(v_x_4376_) == 0)
{
lean_object* v_a_4378_; lean_object* v___x_4380_; uint8_t v_isShared_4381_; uint8_t v_isSharedCheck_4386_; 
lean_dec_ref(v___f_4375_);
lean_dec_ref(v___f_4374_);
lean_dec(v_xs_4373_);
lean_dec_ref(v_inst_4372_);
lean_dec_ref(v___f_4371_);
lean_dec(v_prio_4370_);
lean_dec(v___f_4369_);
v_a_4378_ = lean_ctor_get(v_x_4376_, 0);
v_isSharedCheck_4386_ = !lean_is_exclusive(v_x_4376_);
if (v_isSharedCheck_4386_ == 0)
{
v___x_4380_ = v_x_4376_;
v_isShared_4381_ = v_isSharedCheck_4386_;
goto v_resetjp_4379_;
}
else
{
lean_inc(v_a_4378_);
lean_dec(v_x_4376_);
v___x_4380_ = lean_box(0);
v_isShared_4381_ = v_isSharedCheck_4386_;
goto v_resetjp_4379_;
}
v_resetjp_4379_:
{
lean_object* v___x_4383_; 
if (v_isShared_4381_ == 0)
{
v___x_4383_ = v___x_4380_;
goto v_reusejp_4382_;
}
else
{
lean_object* v_reuseFailAlloc_4385_; 
v_reuseFailAlloc_4385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4385_, 0, v_a_4378_);
v___x_4383_ = v_reuseFailAlloc_4385_;
goto v_reusejp_4382_;
}
v_reusejp_4382_:
{
lean_object* v___x_4384_; 
v___x_4384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4384_, 0, v___x_4383_);
return v___x_4384_;
}
}
}
else
{
lean_object* v_a_4387_; lean_object* v___f_4388_; lean_object* v___f_4389_; lean_object* v___f_4390_; lean_object* v___x_4391_; lean_object* v___f_4392_; lean_object* v___x_4393_; uint8_t v___x_4394_; lean_object* v___x_4395_; 
v_a_4387_ = lean_ctor_get(v_x_4376_, 0);
lean_inc(v_a_4387_);
lean_dec_ref(v_x_4376_);
lean_inc(v_a_4387_);
v___f_4388_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4388_, 0, v_a_4387_);
v___f_4389_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_4389_, 0, v___f_4369_);
lean_closure_set(v___f_4389_, 1, v___f_4388_);
v___f_4390_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4390_, 0, v_prio_4370_);
lean_closure_set(v___f_4390_, 1, v___f_4371_);
lean_closure_set(v___f_4390_, 2, v___f_4389_);
v___x_4391_ = lean_apply_3(v_inst_4372_, v_xs_4373_, v___f_4390_, lean_box(0));
v___f_4392_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4392_, 0, v_a_4387_);
lean_closure_set(v___f_4392_, 1, v___f_4374_);
lean_closure_set(v___f_4392_, 2, v___f_4375_);
v___x_4393_ = lean_unsigned_to_nat(0u);
v___x_4394_ = 0;
v___x_4395_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4393_, v___x_4394_, v___x_4391_, v___f_4392_);
return v___x_4395_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__2___boxed(lean_object* v___f_4396_, lean_object* v_prio_4397_, lean_object* v___f_4398_, lean_object* v_inst_4399_, lean_object* v_xs_4400_, lean_object* v___f_4401_, lean_object* v___f_4402_, lean_object* v_x_4403_, lean_object* v___y_4404_){
_start:
{
lean_object* v_res_4405_; 
v_res_4405_ = l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__2(v___f_4396_, v_prio_4397_, v___f_4398_, v_inst_4399_, v_xs_4400_, v___f_4401_, v___f_4402_, v_x_4403_);
return v_res_4405_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg(lean_object* v_inst_4406_, lean_object* v_xs_4407_, lean_object* v_prio_4408_){
_start:
{
lean_object* v___x_4410_; lean_object* v___f_4411_; lean_object* v___f_4412_; lean_object* v___f_4413_; lean_object* v___f_4414_; lean_object* v___f_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; uint8_t v___x_4419_; lean_object* v___x_4420_; 
v___x_4410_ = lean_io_promise_new();
v___f_4411_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_race___redArg___closed__1));
v___f_4412_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_race___redArg___closed__0));
v___f_4413_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___f_4414_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0));
v___f_4415_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_4415_, 0, v___f_4414_);
lean_closure_set(v___f_4415_, 1, v_prio_4408_);
lean_closure_set(v___f_4415_, 2, v___f_4413_);
lean_closure_set(v___f_4415_, 3, v_inst_4406_);
lean_closure_set(v___f_4415_, 4, v_xs_4407_);
lean_closure_set(v___f_4415_, 5, v___f_4411_);
lean_closure_set(v___f_4415_, 6, v___f_4412_);
v___x_4416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4416_, 0, v___x_4410_);
v___x_4417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4417_, 0, v___x_4416_);
v___x_4418_ = lean_unsigned_to_nat(0u);
v___x_4419_ = 0;
v___x_4420_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4418_, v___x_4419_, v___x_4417_, v___f_4415_);
return v___x_4420_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___redArg___boxed(lean_object* v_inst_4421_, lean_object* v_xs_4422_, lean_object* v_prio_4423_, lean_object* v_a_4424_){
_start:
{
lean_object* v_res_4425_; 
v_res_4425_ = l_Std_Internal_IO_Async_EAsync_raceAll___redArg(v_inst_4421_, v_xs_4422_, v_prio_4423_);
return v_res_4425_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll(lean_object* v_00_u03b1_4426_, lean_object* v_00_u03b5_4427_, lean_object* v_c_4428_, lean_object* v_inst_4429_, lean_object* v_inst_4430_, lean_object* v_xs_4431_, lean_object* v_prio_4432_){
_start:
{
lean_object* v___x_4434_; lean_object* v___f_4435_; lean_object* v___f_4436_; lean_object* v___f_4437_; lean_object* v___f_4438_; lean_object* v___f_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; uint8_t v___x_4443_; lean_object* v___x_4444_; 
v___x_4434_ = lean_io_promise_new();
v___f_4435_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_race___redArg___closed__1));
v___f_4436_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_race___redArg___closed__0));
v___f_4437_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_asTask___redArg___closed__0));
v___f_4438_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0));
v___f_4439_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_EAsync_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_4439_, 0, v___f_4438_);
lean_closure_set(v___f_4439_, 1, v_prio_4432_);
lean_closure_set(v___f_4439_, 2, v___f_4437_);
lean_closure_set(v___f_4439_, 3, v_inst_4430_);
lean_closure_set(v___f_4439_, 4, v_xs_4431_);
lean_closure_set(v___f_4439_, 5, v___f_4435_);
lean_closure_set(v___f_4439_, 6, v___f_4436_);
v___x_4440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4440_, 0, v___x_4434_);
v___x_4441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4441_, 0, v___x_4440_);
v___x_4442_ = lean_unsigned_to_nat(0u);
v___x_4443_ = 0;
v___x_4444_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4442_, v___x_4443_, v___x_4441_, v___f_4439_);
return v___x_4444_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_EAsync_raceAll___boxed(lean_object* v_00_u03b1_4445_, lean_object* v_00_u03b5_4446_, lean_object* v_c_4447_, lean_object* v_inst_4448_, lean_object* v_inst_4449_, lean_object* v_xs_4450_, lean_object* v_prio_4451_, lean_object* v_a_4452_){
_start:
{
lean_object* v_res_4453_; 
v_res_4453_ = l_Std_Internal_IO_Async_EAsync_raceAll(v_00_u03b1_4445_, v_00_u03b5_4446_, v_c_4447_, v_inst_4448_, v_inst_4449_, v_xs_4450_, v_prio_4451_);
lean_dec(v_inst_4448_);
return v_res_4453_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_toIO___redArg(lean_object* v_x_4454_){
_start:
{
lean_object* v___x_4456_; 
v___x_4456_ = lean_apply_1(v_x_4454_, lean_box(0));
if (lean_obj_tag(v___x_4456_) == 0)
{
lean_object* v_a_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4465_; 
v_a_4457_ = lean_ctor_get(v___x_4456_, 0);
v_isSharedCheck_4465_ = !lean_is_exclusive(v___x_4456_);
if (v_isSharedCheck_4465_ == 0)
{
v___x_4459_ = v___x_4456_;
v_isShared_4460_ = v_isSharedCheck_4465_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_a_4457_);
lean_dec(v___x_4456_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4465_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4461_; lean_object* v___x_4463_; 
v___x_4461_ = lean_task_pure(v_a_4457_);
if (v_isShared_4460_ == 0)
{
lean_ctor_set(v___x_4459_, 0, v___x_4461_);
v___x_4463_ = v___x_4459_;
goto v_reusejp_4462_;
}
else
{
lean_object* v_reuseFailAlloc_4464_; 
v_reuseFailAlloc_4464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4464_, 0, v___x_4461_);
v___x_4463_ = v_reuseFailAlloc_4464_;
goto v_reusejp_4462_;
}
v_reusejp_4462_:
{
return v___x_4463_;
}
}
}
else
{
lean_object* v_a_4466_; lean_object* v___x_4468_; uint8_t v_isShared_4469_; uint8_t v_isSharedCheck_4473_; 
v_a_4466_ = lean_ctor_get(v___x_4456_, 0);
v_isSharedCheck_4473_ = !lean_is_exclusive(v___x_4456_);
if (v_isSharedCheck_4473_ == 0)
{
v___x_4468_ = v___x_4456_;
v_isShared_4469_ = v_isSharedCheck_4473_;
goto v_resetjp_4467_;
}
else
{
lean_inc(v_a_4466_);
lean_dec(v___x_4456_);
v___x_4468_ = lean_box(0);
v_isShared_4469_ = v_isSharedCheck_4473_;
goto v_resetjp_4467_;
}
v_resetjp_4467_:
{
lean_object* v___x_4471_; 
if (v_isShared_4469_ == 0)
{
lean_ctor_set_tag(v___x_4468_, 0);
v___x_4471_ = v___x_4468_;
goto v_reusejp_4470_;
}
else
{
lean_object* v_reuseFailAlloc_4472_; 
v_reuseFailAlloc_4472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4472_, 0, v_a_4466_);
v___x_4471_ = v_reuseFailAlloc_4472_;
goto v_reusejp_4470_;
}
v_reusejp_4470_:
{
return v___x_4471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_toIO___redArg___boxed(lean_object* v_x_4474_, lean_object* v_a_4475_){
_start:
{
lean_object* v_res_4476_; 
v_res_4476_ = l_Std_Internal_IO_Async_Async_toIO___redArg(v_x_4474_);
return v_res_4476_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_toIO(lean_object* v_00_u03b1_4477_, lean_object* v_x_4478_){
_start:
{
lean_object* v___x_4480_; 
v___x_4480_ = lean_apply_1(v_x_4478_, lean_box(0));
if (lean_obj_tag(v___x_4480_) == 0)
{
lean_object* v_a_4481_; lean_object* v___x_4483_; uint8_t v_isShared_4484_; uint8_t v_isSharedCheck_4489_; 
v_a_4481_ = lean_ctor_get(v___x_4480_, 0);
v_isSharedCheck_4489_ = !lean_is_exclusive(v___x_4480_);
if (v_isSharedCheck_4489_ == 0)
{
v___x_4483_ = v___x_4480_;
v_isShared_4484_ = v_isSharedCheck_4489_;
goto v_resetjp_4482_;
}
else
{
lean_inc(v_a_4481_);
lean_dec(v___x_4480_);
v___x_4483_ = lean_box(0);
v_isShared_4484_ = v_isSharedCheck_4489_;
goto v_resetjp_4482_;
}
v_resetjp_4482_:
{
lean_object* v___x_4485_; lean_object* v___x_4487_; 
v___x_4485_ = lean_task_pure(v_a_4481_);
if (v_isShared_4484_ == 0)
{
lean_ctor_set(v___x_4483_, 0, v___x_4485_);
v___x_4487_ = v___x_4483_;
goto v_reusejp_4486_;
}
else
{
lean_object* v_reuseFailAlloc_4488_; 
v_reuseFailAlloc_4488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4488_, 0, v___x_4485_);
v___x_4487_ = v_reuseFailAlloc_4488_;
goto v_reusejp_4486_;
}
v_reusejp_4486_:
{
return v___x_4487_;
}
}
}
else
{
lean_object* v_a_4490_; lean_object* v___x_4492_; uint8_t v_isShared_4493_; uint8_t v_isSharedCheck_4497_; 
v_a_4490_ = lean_ctor_get(v___x_4480_, 0);
v_isSharedCheck_4497_ = !lean_is_exclusive(v___x_4480_);
if (v_isSharedCheck_4497_ == 0)
{
v___x_4492_ = v___x_4480_;
v_isShared_4493_ = v_isSharedCheck_4497_;
goto v_resetjp_4491_;
}
else
{
lean_inc(v_a_4490_);
lean_dec(v___x_4480_);
v___x_4492_ = lean_box(0);
v_isShared_4493_ = v_isSharedCheck_4497_;
goto v_resetjp_4491_;
}
v_resetjp_4491_:
{
lean_object* v___x_4495_; 
if (v_isShared_4493_ == 0)
{
lean_ctor_set_tag(v___x_4492_, 0);
v___x_4495_ = v___x_4492_;
goto v_reusejp_4494_;
}
else
{
lean_object* v_reuseFailAlloc_4496_; 
v_reuseFailAlloc_4496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4496_, 0, v_a_4490_);
v___x_4495_ = v_reuseFailAlloc_4496_;
goto v_reusejp_4494_;
}
v_reusejp_4494_:
{
return v___x_4495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_toIO___boxed(lean_object* v_00_u03b1_4498_, lean_object* v_x_4499_, lean_object* v_a_4500_){
_start:
{
lean_object* v_res_4501_; 
v_res_4501_ = l_Std_Internal_IO_Async_Async_toIO(v_00_u03b1_4498_, v_x_4499_);
return v_res_4501_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_block___redArg(lean_object* v_x_4502_, lean_object* v_prio_4503_){
_start:
{
lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___f_4507_; lean_object* v___x_4508_; uint8_t v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; 
v___x_4505_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4505_, 0, lean_box(0));
lean_closure_set(v___x_4505_, 1, v_x_4502_);
v___x_4506_ = lean_io_as_task(v___x_4505_, v_prio_4503_);
v___f_4507_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___x_4508_ = lean_unsigned_to_nat(0u);
v___x_4509_ = 1;
v___x_4510_ = lean_task_bind(v___x_4506_, v___f_4507_, v___x_4508_, v___x_4509_);
v___x_4511_ = lean_task_get_own(v___x_4510_);
if (lean_obj_tag(v___x_4511_) == 0)
{
lean_object* v_a_4512_; lean_object* v___x_4514_; uint8_t v_isShared_4515_; uint8_t v_isSharedCheck_4519_; 
v_a_4512_ = lean_ctor_get(v___x_4511_, 0);
v_isSharedCheck_4519_ = !lean_is_exclusive(v___x_4511_);
if (v_isSharedCheck_4519_ == 0)
{
v___x_4514_ = v___x_4511_;
v_isShared_4515_ = v_isSharedCheck_4519_;
goto v_resetjp_4513_;
}
else
{
lean_inc(v_a_4512_);
lean_dec(v___x_4511_);
v___x_4514_ = lean_box(0);
v_isShared_4515_ = v_isSharedCheck_4519_;
goto v_resetjp_4513_;
}
v_resetjp_4513_:
{
lean_object* v___x_4517_; 
if (v_isShared_4515_ == 0)
{
lean_ctor_set_tag(v___x_4514_, 1);
v___x_4517_ = v___x_4514_;
goto v_reusejp_4516_;
}
else
{
lean_object* v_reuseFailAlloc_4518_; 
v_reuseFailAlloc_4518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4518_, 0, v_a_4512_);
v___x_4517_ = v_reuseFailAlloc_4518_;
goto v_reusejp_4516_;
}
v_reusejp_4516_:
{
return v___x_4517_;
}
}
}
else
{
lean_object* v_a_4520_; lean_object* v___x_4522_; uint8_t v_isShared_4523_; uint8_t v_isSharedCheck_4527_; 
v_a_4520_ = lean_ctor_get(v___x_4511_, 0);
v_isSharedCheck_4527_ = !lean_is_exclusive(v___x_4511_);
if (v_isSharedCheck_4527_ == 0)
{
v___x_4522_ = v___x_4511_;
v_isShared_4523_ = v_isSharedCheck_4527_;
goto v_resetjp_4521_;
}
else
{
lean_inc(v_a_4520_);
lean_dec(v___x_4511_);
v___x_4522_ = lean_box(0);
v_isShared_4523_ = v_isSharedCheck_4527_;
goto v_resetjp_4521_;
}
v_resetjp_4521_:
{
lean_object* v___x_4525_; 
if (v_isShared_4523_ == 0)
{
lean_ctor_set_tag(v___x_4522_, 0);
v___x_4525_ = v___x_4522_;
goto v_reusejp_4524_;
}
else
{
lean_object* v_reuseFailAlloc_4526_; 
v_reuseFailAlloc_4526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4526_, 0, v_a_4520_);
v___x_4525_ = v_reuseFailAlloc_4526_;
goto v_reusejp_4524_;
}
v_reusejp_4524_:
{
return v___x_4525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_block___redArg___boxed(lean_object* v_x_4528_, lean_object* v_prio_4529_, lean_object* v_a_4530_){
_start:
{
lean_object* v_res_4531_; 
v_res_4531_ = l_Std_Internal_IO_Async_Async_block___redArg(v_x_4528_, v_prio_4529_);
return v_res_4531_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_block(lean_object* v_00_u03b1_4532_, lean_object* v_x_4533_, lean_object* v_prio_4534_){
_start:
{
lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___f_4538_; lean_object* v___x_4539_; uint8_t v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; 
v___x_4536_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4536_, 0, lean_box(0));
lean_closure_set(v___x_4536_, 1, v_x_4533_);
v___x_4537_ = lean_io_as_task(v___x_4536_, v_prio_4534_);
v___f_4538_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___x_4539_ = lean_unsigned_to_nat(0u);
v___x_4540_ = 1;
v___x_4541_ = lean_task_bind(v___x_4537_, v___f_4538_, v___x_4539_, v___x_4540_);
v___x_4542_ = lean_task_get_own(v___x_4541_);
if (lean_obj_tag(v___x_4542_) == 0)
{
lean_object* v_a_4543_; lean_object* v___x_4545_; uint8_t v_isShared_4546_; uint8_t v_isSharedCheck_4550_; 
v_a_4543_ = lean_ctor_get(v___x_4542_, 0);
v_isSharedCheck_4550_ = !lean_is_exclusive(v___x_4542_);
if (v_isSharedCheck_4550_ == 0)
{
v___x_4545_ = v___x_4542_;
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
else
{
lean_inc(v_a_4543_);
lean_dec(v___x_4542_);
v___x_4545_ = lean_box(0);
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
v_resetjp_4544_:
{
lean_object* v___x_4548_; 
if (v_isShared_4546_ == 0)
{
lean_ctor_set_tag(v___x_4545_, 1);
v___x_4548_ = v___x_4545_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4549_; 
v_reuseFailAlloc_4549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4549_, 0, v_a_4543_);
v___x_4548_ = v_reuseFailAlloc_4549_;
goto v_reusejp_4547_;
}
v_reusejp_4547_:
{
return v___x_4548_;
}
}
}
else
{
lean_object* v_a_4551_; lean_object* v___x_4553_; uint8_t v_isShared_4554_; uint8_t v_isSharedCheck_4558_; 
v_a_4551_ = lean_ctor_get(v___x_4542_, 0);
v_isSharedCheck_4558_ = !lean_is_exclusive(v___x_4542_);
if (v_isSharedCheck_4558_ == 0)
{
v___x_4553_ = v___x_4542_;
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
else
{
lean_inc(v_a_4551_);
lean_dec(v___x_4542_);
v___x_4553_ = lean_box(0);
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
v_resetjp_4552_:
{
lean_object* v___x_4556_; 
if (v_isShared_4554_ == 0)
{
lean_ctor_set_tag(v___x_4553_, 0);
v___x_4556_ = v___x_4553_;
goto v_reusejp_4555_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v_a_4551_);
v___x_4556_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4555_;
}
v_reusejp_4555_:
{
return v___x_4556_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_block___boxed(lean_object* v_00_u03b1_4559_, lean_object* v_x_4560_, lean_object* v_prio_4561_, lean_object* v_a_4562_){
_start:
{
lean_object* v_res_4563_; 
v_res_4563_ = l_Std_Internal_IO_Async_Async_block(v_00_u03b1_4559_, v_x_4560_, v_prio_4561_);
return v_res_4563_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPromise___redArg___lam__1(lean_object* v___f_4564_, lean_object* v_x_4565_){
_start:
{
if (lean_obj_tag(v_x_4565_) == 0)
{
lean_object* v_a_4567_; lean_object* v___x_4569_; uint8_t v_isShared_4570_; uint8_t v_isSharedCheck_4575_; 
lean_dec_ref(v___f_4564_);
v_a_4567_ = lean_ctor_get(v_x_4565_, 0);
v_isSharedCheck_4575_ = !lean_is_exclusive(v_x_4565_);
if (v_isSharedCheck_4575_ == 0)
{
v___x_4569_ = v_x_4565_;
v_isShared_4570_ = v_isSharedCheck_4575_;
goto v_resetjp_4568_;
}
else
{
lean_inc(v_a_4567_);
lean_dec(v_x_4565_);
v___x_4569_ = lean_box(0);
v_isShared_4570_ = v_isSharedCheck_4575_;
goto v_resetjp_4568_;
}
v_resetjp_4568_:
{
lean_object* v___x_4572_; 
if (v_isShared_4570_ == 0)
{
v___x_4572_ = v___x_4569_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4574_; 
v_reuseFailAlloc_4574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4574_, 0, v_a_4567_);
v___x_4572_ = v_reuseFailAlloc_4574_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
lean_object* v___x_4573_; 
v___x_4573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4573_, 0, v___x_4572_);
return v___x_4573_;
}
}
}
else
{
lean_object* v_a_4576_; 
v_a_4576_ = lean_ctor_get(v_x_4565_, 0);
lean_inc(v_a_4576_);
lean_dec_ref(v_x_4565_);
if (lean_obj_tag(v_a_4576_) == 0)
{
lean_object* v_a_4577_; lean_object* v___x_4579_; uint8_t v_isShared_4580_; uint8_t v_isSharedCheck_4585_; 
lean_dec_ref(v___f_4564_);
v_a_4577_ = lean_ctor_get(v_a_4576_, 0);
v_isSharedCheck_4585_ = !lean_is_exclusive(v_a_4576_);
if (v_isSharedCheck_4585_ == 0)
{
v___x_4579_ = v_a_4576_;
v_isShared_4580_ = v_isSharedCheck_4585_;
goto v_resetjp_4578_;
}
else
{
lean_inc(v_a_4577_);
lean_dec(v_a_4576_);
v___x_4579_ = lean_box(0);
v_isShared_4580_ = v_isSharedCheck_4585_;
goto v_resetjp_4578_;
}
v_resetjp_4578_:
{
lean_object* v___x_4582_; 
if (v_isShared_4580_ == 0)
{
v___x_4582_ = v___x_4579_;
goto v_reusejp_4581_;
}
else
{
lean_object* v_reuseFailAlloc_4584_; 
v_reuseFailAlloc_4584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4584_, 0, v_a_4577_);
v___x_4582_ = v_reuseFailAlloc_4584_;
goto v_reusejp_4581_;
}
v_reusejp_4581_:
{
lean_object* v___x_4583_; 
v___x_4583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4583_, 0, v___x_4582_);
return v___x_4583_;
}
}
}
else
{
lean_object* v_a_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; uint8_t v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; 
v_a_4586_ = lean_ctor_get(v_a_4576_, 0);
lean_inc(v_a_4586_);
lean_dec_ref(v_a_4576_);
v___x_4587_ = lean_io_promise_result_opt(v_a_4586_);
lean_dec(v_a_4586_);
v___x_4588_ = lean_unsigned_to_nat(0u);
v___x_4589_ = 0;
v___x_4590_ = lean_task_map(v___f_4564_, v___x_4587_, v___x_4588_, v___x_4589_);
v___x_4591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4591_, 0, v___x_4590_);
return v___x_4591_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPromise___redArg___lam__1___boxed(lean_object* v___f_4592_, lean_object* v_x_4593_, lean_object* v___y_4594_){
_start:
{
lean_object* v_res_4595_; 
v_res_4595_ = l_Std_Internal_IO_Async_Async_ofPromise___redArg___lam__1(v___f_4592_, v_x_4593_);
return v_res_4595_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPromise___redArg(lean_object* v_task_4596_, lean_object* v_error_4597_){
_start:
{
lean_object* v___f_4599_; lean_object* v___f_4600_; lean_object* v_val_4602_; lean_object* v___x_4608_; 
v___f_4599_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4599_, 0, v_error_4597_);
v___f_4600_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_ofPromise___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4600_, 0, v___f_4599_);
v___x_4608_ = lean_apply_1(v_task_4596_, lean_box(0));
if (lean_obj_tag(v___x_4608_) == 0)
{
lean_object* v_a_4609_; lean_object* v___x_4611_; uint8_t v_isShared_4612_; uint8_t v_isSharedCheck_4616_; 
v_a_4609_ = lean_ctor_get(v___x_4608_, 0);
v_isSharedCheck_4616_ = !lean_is_exclusive(v___x_4608_);
if (v_isSharedCheck_4616_ == 0)
{
v___x_4611_ = v___x_4608_;
v_isShared_4612_ = v_isSharedCheck_4616_;
goto v_resetjp_4610_;
}
else
{
lean_inc(v_a_4609_);
lean_dec(v___x_4608_);
v___x_4611_ = lean_box(0);
v_isShared_4612_ = v_isSharedCheck_4616_;
goto v_resetjp_4610_;
}
v_resetjp_4610_:
{
lean_object* v___x_4614_; 
if (v_isShared_4612_ == 0)
{
lean_ctor_set_tag(v___x_4611_, 1);
v___x_4614_ = v___x_4611_;
goto v_reusejp_4613_;
}
else
{
lean_object* v_reuseFailAlloc_4615_; 
v_reuseFailAlloc_4615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4615_, 0, v_a_4609_);
v___x_4614_ = v_reuseFailAlloc_4615_;
goto v_reusejp_4613_;
}
v_reusejp_4613_:
{
v_val_4602_ = v___x_4614_;
goto v___jp_4601_;
}
}
}
else
{
lean_object* v_a_4617_; lean_object* v___x_4619_; uint8_t v_isShared_4620_; uint8_t v_isSharedCheck_4624_; 
v_a_4617_ = lean_ctor_get(v___x_4608_, 0);
v_isSharedCheck_4624_ = !lean_is_exclusive(v___x_4608_);
if (v_isSharedCheck_4624_ == 0)
{
v___x_4619_ = v___x_4608_;
v_isShared_4620_ = v_isSharedCheck_4624_;
goto v_resetjp_4618_;
}
else
{
lean_inc(v_a_4617_);
lean_dec(v___x_4608_);
v___x_4619_ = lean_box(0);
v_isShared_4620_ = v_isSharedCheck_4624_;
goto v_resetjp_4618_;
}
v_resetjp_4618_:
{
lean_object* v___x_4622_; 
if (v_isShared_4620_ == 0)
{
lean_ctor_set_tag(v___x_4619_, 0);
v___x_4622_ = v___x_4619_;
goto v_reusejp_4621_;
}
else
{
lean_object* v_reuseFailAlloc_4623_; 
v_reuseFailAlloc_4623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4623_, 0, v_a_4617_);
v___x_4622_ = v_reuseFailAlloc_4623_;
goto v_reusejp_4621_;
}
v_reusejp_4621_:
{
v_val_4602_ = v___x_4622_;
goto v___jp_4601_;
}
}
}
v___jp_4601_:
{
lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; uint8_t v___x_4606_; lean_object* v___x_4607_; 
v___x_4603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4603_, 0, v_val_4602_);
v___x_4604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4604_, 0, v___x_4603_);
v___x_4605_ = lean_unsigned_to_nat(0u);
v___x_4606_ = 0;
v___x_4607_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4605_, v___x_4606_, v___x_4604_, v___f_4600_);
return v___x_4607_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPromise___redArg___boxed(lean_object* v_task_4625_, lean_object* v_error_4626_, lean_object* v_a_4627_){
_start:
{
lean_object* v_res_4628_; 
v_res_4628_ = l_Std_Internal_IO_Async_Async_ofPromise___redArg(v_task_4625_, v_error_4626_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPromise(lean_object* v_00_u03b1_4629_, lean_object* v_task_4630_, lean_object* v_error_4631_){
_start:
{
lean_object* v___f_4633_; lean_object* v___f_4634_; lean_object* v_val_4636_; lean_object* v___x_4642_; 
v___f_4633_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4633_, 0, v_error_4631_);
v___f_4634_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_ofPromise___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4634_, 0, v___f_4633_);
v___x_4642_ = lean_apply_1(v_task_4630_, lean_box(0));
if (lean_obj_tag(v___x_4642_) == 0)
{
lean_object* v_a_4643_; lean_object* v___x_4645_; uint8_t v_isShared_4646_; uint8_t v_isSharedCheck_4650_; 
v_a_4643_ = lean_ctor_get(v___x_4642_, 0);
v_isSharedCheck_4650_ = !lean_is_exclusive(v___x_4642_);
if (v_isSharedCheck_4650_ == 0)
{
v___x_4645_ = v___x_4642_;
v_isShared_4646_ = v_isSharedCheck_4650_;
goto v_resetjp_4644_;
}
else
{
lean_inc(v_a_4643_);
lean_dec(v___x_4642_);
v___x_4645_ = lean_box(0);
v_isShared_4646_ = v_isSharedCheck_4650_;
goto v_resetjp_4644_;
}
v_resetjp_4644_:
{
lean_object* v___x_4648_; 
if (v_isShared_4646_ == 0)
{
lean_ctor_set_tag(v___x_4645_, 1);
v___x_4648_ = v___x_4645_;
goto v_reusejp_4647_;
}
else
{
lean_object* v_reuseFailAlloc_4649_; 
v_reuseFailAlloc_4649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4649_, 0, v_a_4643_);
v___x_4648_ = v_reuseFailAlloc_4649_;
goto v_reusejp_4647_;
}
v_reusejp_4647_:
{
v_val_4636_ = v___x_4648_;
goto v___jp_4635_;
}
}
}
else
{
lean_object* v_a_4651_; lean_object* v___x_4653_; uint8_t v_isShared_4654_; uint8_t v_isSharedCheck_4658_; 
v_a_4651_ = lean_ctor_get(v___x_4642_, 0);
v_isSharedCheck_4658_ = !lean_is_exclusive(v___x_4642_);
if (v_isSharedCheck_4658_ == 0)
{
v___x_4653_ = v___x_4642_;
v_isShared_4654_ = v_isSharedCheck_4658_;
goto v_resetjp_4652_;
}
else
{
lean_inc(v_a_4651_);
lean_dec(v___x_4642_);
v___x_4653_ = lean_box(0);
v_isShared_4654_ = v_isSharedCheck_4658_;
goto v_resetjp_4652_;
}
v_resetjp_4652_:
{
lean_object* v___x_4656_; 
if (v_isShared_4654_ == 0)
{
lean_ctor_set_tag(v___x_4653_, 0);
v___x_4656_ = v___x_4653_;
goto v_reusejp_4655_;
}
else
{
lean_object* v_reuseFailAlloc_4657_; 
v_reuseFailAlloc_4657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4657_, 0, v_a_4651_);
v___x_4656_ = v_reuseFailAlloc_4657_;
goto v_reusejp_4655_;
}
v_reusejp_4655_:
{
v_val_4636_ = v___x_4656_;
goto v___jp_4635_;
}
}
}
v___jp_4635_:
{
lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; uint8_t v___x_4640_; lean_object* v___x_4641_; 
v___x_4637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4637_, 0, v_val_4636_);
v___x_4638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4638_, 0, v___x_4637_);
v___x_4639_ = lean_unsigned_to_nat(0u);
v___x_4640_ = 0;
v___x_4641_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4639_, v___x_4640_, v___x_4638_, v___f_4634_);
return v___x_4641_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPromise___boxed(lean_object* v_00_u03b1_4659_, lean_object* v_task_4660_, lean_object* v_error_4661_, lean_object* v_a_4662_){
_start:
{
lean_object* v_res_4663_; 
v_res_4663_ = l_Std_Internal_IO_Async_Async_ofPromise(v_00_u03b1_4659_, v_task_4660_, v_error_4661_);
return v_res_4663_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofAsyncTask___redArg(lean_object* v_task_4664_){
_start:
{
lean_object* v___x_4666_; 
v___x_4666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4666_, 0, v_task_4664_);
return v___x_4666_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofAsyncTask___redArg___boxed(lean_object* v_task_4667_, lean_object* v_a_4668_){
_start:
{
lean_object* v_res_4669_; 
v_res_4669_ = l_Std_Internal_IO_Async_Async_ofAsyncTask___redArg(v_task_4667_);
return v_res_4669_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofAsyncTask(lean_object* v_00_u03b1_4670_, lean_object* v_task_4671_){
_start:
{
lean_object* v___x_4673_; 
v___x_4673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4673_, 0, v_task_4671_);
return v___x_4673_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofAsyncTask___boxed(lean_object* v_00_u03b1_4674_, lean_object* v_task_4675_, lean_object* v_a_4676_){
_start:
{
lean_object* v_res_4677_; 
v_res_4677_ = l_Std_Internal_IO_Async_Async_ofAsyncTask(v_00_u03b1_4674_, v_task_4675_);
return v_res_4677_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___redArg___lam__0(lean_object* v_a_4678_){
_start:
{
lean_object* v___x_4679_; 
v___x_4679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4679_, 0, v_a_4678_);
return v___x_4679_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___redArg___lam__1(lean_object* v___f_4680_, lean_object* v_x_4681_){
_start:
{
if (lean_obj_tag(v_x_4681_) == 0)
{
lean_object* v_a_4683_; lean_object* v___x_4685_; uint8_t v_isShared_4686_; uint8_t v_isSharedCheck_4691_; 
lean_dec_ref(v___f_4680_);
v_a_4683_ = lean_ctor_get(v_x_4681_, 0);
v_isSharedCheck_4691_ = !lean_is_exclusive(v_x_4681_);
if (v_isSharedCheck_4691_ == 0)
{
v___x_4685_ = v_x_4681_;
v_isShared_4686_ = v_isSharedCheck_4691_;
goto v_resetjp_4684_;
}
else
{
lean_inc(v_a_4683_);
lean_dec(v_x_4681_);
v___x_4685_ = lean_box(0);
v_isShared_4686_ = v_isSharedCheck_4691_;
goto v_resetjp_4684_;
}
v_resetjp_4684_:
{
lean_object* v___x_4688_; 
if (v_isShared_4686_ == 0)
{
v___x_4688_ = v___x_4685_;
goto v_reusejp_4687_;
}
else
{
lean_object* v_reuseFailAlloc_4690_; 
v_reuseFailAlloc_4690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4690_, 0, v_a_4683_);
v___x_4688_ = v_reuseFailAlloc_4690_;
goto v_reusejp_4687_;
}
v_reusejp_4687_:
{
lean_object* v___x_4689_; 
v___x_4689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4689_, 0, v___x_4688_);
return v___x_4689_;
}
}
}
else
{
lean_object* v_a_4692_; 
v_a_4692_ = lean_ctor_get(v_x_4681_, 0);
lean_inc(v_a_4692_);
lean_dec_ref(v_x_4681_);
if (lean_obj_tag(v_a_4692_) == 0)
{
lean_object* v_a_4693_; lean_object* v___x_4695_; uint8_t v_isShared_4696_; uint8_t v_isSharedCheck_4701_; 
lean_dec_ref(v___f_4680_);
v_a_4693_ = lean_ctor_get(v_a_4692_, 0);
v_isSharedCheck_4701_ = !lean_is_exclusive(v_a_4692_);
if (v_isSharedCheck_4701_ == 0)
{
v___x_4695_ = v_a_4692_;
v_isShared_4696_ = v_isSharedCheck_4701_;
goto v_resetjp_4694_;
}
else
{
lean_inc(v_a_4693_);
lean_dec(v_a_4692_);
v___x_4695_ = lean_box(0);
v_isShared_4696_ = v_isSharedCheck_4701_;
goto v_resetjp_4694_;
}
v_resetjp_4694_:
{
lean_object* v___x_4698_; 
if (v_isShared_4696_ == 0)
{
v___x_4698_ = v___x_4695_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4700_; 
v_reuseFailAlloc_4700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4700_, 0, v_a_4693_);
v___x_4698_ = v_reuseFailAlloc_4700_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
lean_object* v___x_4699_; 
v___x_4699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4699_, 0, v___x_4698_);
return v___x_4699_;
}
}
}
else
{
lean_object* v_a_4702_; lean_object* v___x_4703_; uint8_t v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; 
v_a_4702_ = lean_ctor_get(v_a_4692_, 0);
lean_inc(v_a_4702_);
lean_dec_ref(v_a_4692_);
v___x_4703_ = lean_unsigned_to_nat(0u);
v___x_4704_ = 0;
v___x_4705_ = lean_task_map(v___f_4680_, v_a_4702_, v___x_4703_, v___x_4704_);
v___x_4706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4706_, 0, v___x_4705_);
return v___x_4706_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___redArg___lam__1___boxed(lean_object* v___f_4707_, lean_object* v_x_4708_, lean_object* v___y_4709_){
_start:
{
lean_object* v_res_4710_; 
v_res_4710_ = l_Std_Internal_IO_Async_Async_ofIOTask___redArg___lam__1(v___f_4707_, v_x_4708_);
return v_res_4710_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___redArg(lean_object* v_task_4714_){
_start:
{
lean_object* v___f_4716_; lean_object* v_val_4718_; lean_object* v___x_4724_; 
v___f_4716_ = ((lean_object*)(l_Std_Internal_IO_Async_Async_ofIOTask___redArg___closed__1));
v___x_4724_ = lean_apply_1(v_task_4714_, lean_box(0));
if (lean_obj_tag(v___x_4724_) == 0)
{
lean_object* v_a_4725_; lean_object* v___x_4727_; uint8_t v_isShared_4728_; uint8_t v_isSharedCheck_4732_; 
v_a_4725_ = lean_ctor_get(v___x_4724_, 0);
v_isSharedCheck_4732_ = !lean_is_exclusive(v___x_4724_);
if (v_isSharedCheck_4732_ == 0)
{
v___x_4727_ = v___x_4724_;
v_isShared_4728_ = v_isSharedCheck_4732_;
goto v_resetjp_4726_;
}
else
{
lean_inc(v_a_4725_);
lean_dec(v___x_4724_);
v___x_4727_ = lean_box(0);
v_isShared_4728_ = v_isSharedCheck_4732_;
goto v_resetjp_4726_;
}
v_resetjp_4726_:
{
lean_object* v___x_4730_; 
if (v_isShared_4728_ == 0)
{
lean_ctor_set_tag(v___x_4727_, 1);
v___x_4730_ = v___x_4727_;
goto v_reusejp_4729_;
}
else
{
lean_object* v_reuseFailAlloc_4731_; 
v_reuseFailAlloc_4731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4731_, 0, v_a_4725_);
v___x_4730_ = v_reuseFailAlloc_4731_;
goto v_reusejp_4729_;
}
v_reusejp_4729_:
{
v_val_4718_ = v___x_4730_;
goto v___jp_4717_;
}
}
}
else
{
lean_object* v_a_4733_; lean_object* v___x_4735_; uint8_t v_isShared_4736_; uint8_t v_isSharedCheck_4740_; 
v_a_4733_ = lean_ctor_get(v___x_4724_, 0);
v_isSharedCheck_4740_ = !lean_is_exclusive(v___x_4724_);
if (v_isSharedCheck_4740_ == 0)
{
v___x_4735_ = v___x_4724_;
v_isShared_4736_ = v_isSharedCheck_4740_;
goto v_resetjp_4734_;
}
else
{
lean_inc(v_a_4733_);
lean_dec(v___x_4724_);
v___x_4735_ = lean_box(0);
v_isShared_4736_ = v_isSharedCheck_4740_;
goto v_resetjp_4734_;
}
v_resetjp_4734_:
{
lean_object* v___x_4738_; 
if (v_isShared_4736_ == 0)
{
lean_ctor_set_tag(v___x_4735_, 0);
v___x_4738_ = v___x_4735_;
goto v_reusejp_4737_;
}
else
{
lean_object* v_reuseFailAlloc_4739_; 
v_reuseFailAlloc_4739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4739_, 0, v_a_4733_);
v___x_4738_ = v_reuseFailAlloc_4739_;
goto v_reusejp_4737_;
}
v_reusejp_4737_:
{
v_val_4718_ = v___x_4738_;
goto v___jp_4717_;
}
}
}
v___jp_4717_:
{
lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; uint8_t v___x_4722_; lean_object* v___x_4723_; 
v___x_4719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4719_, 0, v_val_4718_);
v___x_4720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4720_, 0, v___x_4719_);
v___x_4721_ = lean_unsigned_to_nat(0u);
v___x_4722_ = 0;
v___x_4723_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4721_, v___x_4722_, v___x_4720_, v___f_4716_);
return v___x_4723_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___redArg___boxed(lean_object* v_task_4741_, lean_object* v_a_4742_){
_start:
{
lean_object* v_res_4743_; 
v_res_4743_ = l_Std_Internal_IO_Async_Async_ofIOTask___redArg(v_task_4741_);
return v_res_4743_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask(lean_object* v_00_u03b1_4744_, lean_object* v_task_4745_){
_start:
{
lean_object* v___f_4747_; lean_object* v_val_4749_; lean_object* v___x_4755_; 
v___f_4747_ = ((lean_object*)(l_Std_Internal_IO_Async_Async_ofIOTask___redArg___closed__1));
v___x_4755_ = lean_apply_1(v_task_4745_, lean_box(0));
if (lean_obj_tag(v___x_4755_) == 0)
{
lean_object* v_a_4756_; lean_object* v___x_4758_; uint8_t v_isShared_4759_; uint8_t v_isSharedCheck_4763_; 
v_a_4756_ = lean_ctor_get(v___x_4755_, 0);
v_isSharedCheck_4763_ = !lean_is_exclusive(v___x_4755_);
if (v_isSharedCheck_4763_ == 0)
{
v___x_4758_ = v___x_4755_;
v_isShared_4759_ = v_isSharedCheck_4763_;
goto v_resetjp_4757_;
}
else
{
lean_inc(v_a_4756_);
lean_dec(v___x_4755_);
v___x_4758_ = lean_box(0);
v_isShared_4759_ = v_isSharedCheck_4763_;
goto v_resetjp_4757_;
}
v_resetjp_4757_:
{
lean_object* v___x_4761_; 
if (v_isShared_4759_ == 0)
{
lean_ctor_set_tag(v___x_4758_, 1);
v___x_4761_ = v___x_4758_;
goto v_reusejp_4760_;
}
else
{
lean_object* v_reuseFailAlloc_4762_; 
v_reuseFailAlloc_4762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4762_, 0, v_a_4756_);
v___x_4761_ = v_reuseFailAlloc_4762_;
goto v_reusejp_4760_;
}
v_reusejp_4760_:
{
v_val_4749_ = v___x_4761_;
goto v___jp_4748_;
}
}
}
else
{
lean_object* v_a_4764_; lean_object* v___x_4766_; uint8_t v_isShared_4767_; uint8_t v_isSharedCheck_4771_; 
v_a_4764_ = lean_ctor_get(v___x_4755_, 0);
v_isSharedCheck_4771_ = !lean_is_exclusive(v___x_4755_);
if (v_isSharedCheck_4771_ == 0)
{
v___x_4766_ = v___x_4755_;
v_isShared_4767_ = v_isSharedCheck_4771_;
goto v_resetjp_4765_;
}
else
{
lean_inc(v_a_4764_);
lean_dec(v___x_4755_);
v___x_4766_ = lean_box(0);
v_isShared_4767_ = v_isSharedCheck_4771_;
goto v_resetjp_4765_;
}
v_resetjp_4765_:
{
lean_object* v___x_4769_; 
if (v_isShared_4767_ == 0)
{
lean_ctor_set_tag(v___x_4766_, 0);
v___x_4769_ = v___x_4766_;
goto v_reusejp_4768_;
}
else
{
lean_object* v_reuseFailAlloc_4770_; 
v_reuseFailAlloc_4770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4770_, 0, v_a_4764_);
v___x_4769_ = v_reuseFailAlloc_4770_;
goto v_reusejp_4768_;
}
v_reusejp_4768_:
{
v_val_4749_ = v___x_4769_;
goto v___jp_4748_;
}
}
}
v___jp_4748_:
{
lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; uint8_t v___x_4753_; lean_object* v___x_4754_; 
v___x_4750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4750_, 0, v_val_4749_);
v___x_4751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4751_, 0, v___x_4750_);
v___x_4752_ = lean_unsigned_to_nat(0u);
v___x_4753_ = 0;
v___x_4754_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4752_, v___x_4753_, v___x_4751_, v___f_4747_);
return v___x_4754_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofIOTask___boxed(lean_object* v_00_u03b1_4772_, lean_object* v_task_4773_, lean_object* v_a_4774_){
_start:
{
lean_object* v_res_4775_; 
v_res_4775_ = l_Std_Internal_IO_Async_Async_ofIOTask(v_00_u03b1_4772_, v_task_4773_);
return v_res_4775_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofExcept___redArg(lean_object* v_except_4776_){
_start:
{
lean_object* v___x_4778_; 
v___x_4778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4778_, 0, v_except_4776_);
return v___x_4778_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofExcept___redArg___boxed(lean_object* v_except_4779_, lean_object* v_a_4780_){
_start:
{
lean_object* v_res_4781_; 
v_res_4781_ = l_Std_Internal_IO_Async_Async_ofExcept___redArg(v_except_4779_);
return v_res_4781_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofExcept(lean_object* v_00_u03b1_4782_, lean_object* v_except_4783_){
_start:
{
lean_object* v___x_4785_; 
v___x_4785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4785_, 0, v_except_4783_);
return v___x_4785_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofExcept___boxed(lean_object* v_00_u03b1_4786_, lean_object* v_except_4787_, lean_object* v_a_4788_){
_start:
{
lean_object* v_res_4789_; 
v_res_4789_ = l_Std_Internal_IO_Async_Async_ofExcept(v_00_u03b1_4786_, v_except_4787_);
return v_res_4789_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofTask___redArg(lean_object* v_task_4790_){
_start:
{
lean_object* v___f_4792_; lean_object* v___x_4793_; uint8_t v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; 
v___f_4792_ = ((lean_object*)(l_Std_Internal_IO_Async_Async_ofIOTask___redArg___closed__0));
v___x_4793_ = lean_unsigned_to_nat(0u);
v___x_4794_ = 0;
v___x_4795_ = lean_task_map(v___f_4792_, v_task_4790_, v___x_4793_, v___x_4794_);
v___x_4796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4796_, 0, v___x_4795_);
return v___x_4796_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofTask___redArg___boxed(lean_object* v_task_4797_, lean_object* v_a_4798_){
_start:
{
lean_object* v_res_4799_; 
v_res_4799_ = l_Std_Internal_IO_Async_Async_ofTask___redArg(v_task_4797_);
return v_res_4799_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofTask(lean_object* v_00_u03b1_4800_, lean_object* v_task_4801_){
_start:
{
lean_object* v___f_4803_; lean_object* v___x_4804_; uint8_t v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; 
v___f_4803_ = ((lean_object*)(l_Std_Internal_IO_Async_Async_ofIOTask___redArg___closed__0));
v___x_4804_ = lean_unsigned_to_nat(0u);
v___x_4805_ = 0;
v___x_4806_ = lean_task_map(v___f_4803_, v_task_4801_, v___x_4804_, v___x_4805_);
v___x_4807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4807_, 0, v___x_4806_);
return v___x_4807_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofTask___boxed(lean_object* v_00_u03b1_4808_, lean_object* v_task_4809_, lean_object* v_a_4810_){
_start:
{
lean_object* v_res_4811_; 
v_res_4811_ = l_Std_Internal_IO_Async_Async_ofTask(v_00_u03b1_4808_, v_task_4809_);
return v_res_4811_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPurePromise___redArg(lean_object* v_task_4812_, lean_object* v_error_4813_){
_start:
{
lean_object* v___x_4815_; 
v___x_4815_ = lean_apply_1(v_task_4812_, lean_box(0));
if (lean_obj_tag(v___x_4815_) == 0)
{
lean_object* v_a_4816_; lean_object* v___x_4818_; uint8_t v_isShared_4819_; uint8_t v_isSharedCheck_4828_; 
v_a_4816_ = lean_ctor_get(v___x_4815_, 0);
v_isSharedCheck_4828_ = !lean_is_exclusive(v___x_4815_);
if (v_isSharedCheck_4828_ == 0)
{
v___x_4818_ = v___x_4815_;
v_isShared_4819_ = v_isSharedCheck_4828_;
goto v_resetjp_4817_;
}
else
{
lean_inc(v_a_4816_);
lean_dec(v___x_4815_);
v___x_4818_ = lean_box(0);
v_isShared_4819_ = v_isSharedCheck_4828_;
goto v_resetjp_4817_;
}
v_resetjp_4817_:
{
lean_object* v___f_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; uint8_t v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4826_; 
v___f_4820_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4820_, 0, v_error_4813_);
v___x_4821_ = lean_io_promise_result_opt(v_a_4816_);
lean_dec(v_a_4816_);
v___x_4822_ = lean_unsigned_to_nat(0u);
v___x_4823_ = 0;
v___x_4824_ = lean_task_map(v___f_4820_, v___x_4821_, v___x_4822_, v___x_4823_);
if (v_isShared_4819_ == 0)
{
lean_ctor_set_tag(v___x_4818_, 1);
lean_ctor_set(v___x_4818_, 0, v___x_4824_);
v___x_4826_ = v___x_4818_;
goto v_reusejp_4825_;
}
else
{
lean_object* v_reuseFailAlloc_4827_; 
v_reuseFailAlloc_4827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4827_, 0, v___x_4824_);
v___x_4826_ = v_reuseFailAlloc_4827_;
goto v_reusejp_4825_;
}
v_reusejp_4825_:
{
return v___x_4826_;
}
}
}
else
{
lean_object* v_a_4829_; lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4837_; 
lean_dec_ref(v_error_4813_);
v_a_4829_ = lean_ctor_get(v___x_4815_, 0);
v_isSharedCheck_4837_ = !lean_is_exclusive(v___x_4815_);
if (v_isSharedCheck_4837_ == 0)
{
v___x_4831_ = v___x_4815_;
v_isShared_4832_ = v_isSharedCheck_4837_;
goto v_resetjp_4830_;
}
else
{
lean_inc(v_a_4829_);
lean_dec(v___x_4815_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4837_;
goto v_resetjp_4830_;
}
v_resetjp_4830_:
{
lean_object* v___x_4834_; 
if (v_isShared_4832_ == 0)
{
lean_ctor_set_tag(v___x_4831_, 0);
v___x_4834_ = v___x_4831_;
goto v_reusejp_4833_;
}
else
{
lean_object* v_reuseFailAlloc_4836_; 
v_reuseFailAlloc_4836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4836_, 0, v_a_4829_);
v___x_4834_ = v_reuseFailAlloc_4836_;
goto v_reusejp_4833_;
}
v_reusejp_4833_:
{
lean_object* v___x_4835_; 
v___x_4835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4835_, 0, v___x_4834_);
return v___x_4835_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPurePromise___redArg___boxed(lean_object* v_task_4838_, lean_object* v_error_4839_, lean_object* v_a_4840_){
_start:
{
lean_object* v_res_4841_; 
v_res_4841_ = l_Std_Internal_IO_Async_Async_ofPurePromise___redArg(v_task_4838_, v_error_4839_);
return v_res_4841_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPurePromise(lean_object* v_00_u03b1_4842_, lean_object* v_task_4843_, lean_object* v_error_4844_){
_start:
{
lean_object* v___x_4846_; 
v___x_4846_ = lean_apply_1(v_task_4843_, lean_box(0));
if (lean_obj_tag(v___x_4846_) == 0)
{
lean_object* v_a_4847_; lean_object* v___x_4849_; uint8_t v_isShared_4850_; uint8_t v_isSharedCheck_4859_; 
v_a_4847_ = lean_ctor_get(v___x_4846_, 0);
v_isSharedCheck_4859_ = !lean_is_exclusive(v___x_4846_);
if (v_isSharedCheck_4859_ == 0)
{
v___x_4849_ = v___x_4846_;
v_isShared_4850_ = v_isSharedCheck_4859_;
goto v_resetjp_4848_;
}
else
{
lean_inc(v_a_4847_);
lean_dec(v___x_4846_);
v___x_4849_ = lean_box(0);
v_isShared_4850_ = v_isSharedCheck_4859_;
goto v_resetjp_4848_;
}
v_resetjp_4848_:
{
lean_object* v___f_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; uint8_t v___x_4854_; lean_object* v___x_4855_; lean_object* v___x_4857_; 
v___f_4851_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4851_, 0, v_error_4844_);
v___x_4852_ = lean_io_promise_result_opt(v_a_4847_);
lean_dec(v_a_4847_);
v___x_4853_ = lean_unsigned_to_nat(0u);
v___x_4854_ = 0;
v___x_4855_ = lean_task_map(v___f_4851_, v___x_4852_, v___x_4853_, v___x_4854_);
if (v_isShared_4850_ == 0)
{
lean_ctor_set_tag(v___x_4849_, 1);
lean_ctor_set(v___x_4849_, 0, v___x_4855_);
v___x_4857_ = v___x_4849_;
goto v_reusejp_4856_;
}
else
{
lean_object* v_reuseFailAlloc_4858_; 
v_reuseFailAlloc_4858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4858_, 0, v___x_4855_);
v___x_4857_ = v_reuseFailAlloc_4858_;
goto v_reusejp_4856_;
}
v_reusejp_4856_:
{
return v___x_4857_;
}
}
}
else
{
lean_object* v_a_4860_; lean_object* v___x_4862_; uint8_t v_isShared_4863_; uint8_t v_isSharedCheck_4868_; 
lean_dec_ref(v_error_4844_);
v_a_4860_ = lean_ctor_get(v___x_4846_, 0);
v_isSharedCheck_4868_ = !lean_is_exclusive(v___x_4846_);
if (v_isSharedCheck_4868_ == 0)
{
v___x_4862_ = v___x_4846_;
v_isShared_4863_ = v_isSharedCheck_4868_;
goto v_resetjp_4861_;
}
else
{
lean_inc(v_a_4860_);
lean_dec(v___x_4846_);
v___x_4862_ = lean_box(0);
v_isShared_4863_ = v_isSharedCheck_4868_;
goto v_resetjp_4861_;
}
v_resetjp_4861_:
{
lean_object* v___x_4865_; 
if (v_isShared_4863_ == 0)
{
lean_ctor_set_tag(v___x_4862_, 0);
v___x_4865_ = v___x_4862_;
goto v_reusejp_4864_;
}
else
{
lean_object* v_reuseFailAlloc_4867_; 
v_reuseFailAlloc_4867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4867_, 0, v_a_4860_);
v___x_4865_ = v_reuseFailAlloc_4867_;
goto v_reusejp_4864_;
}
v_reusejp_4864_:
{
lean_object* v___x_4866_; 
v___x_4866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4866_, 0, v___x_4865_);
return v___x_4866_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_ofPurePromise___boxed(lean_object* v_00_u03b1_4869_, lean_object* v_task_4870_, lean_object* v_error_4871_, lean_object* v_a_4872_){
_start:
{
lean_object* v_res_4873_; 
v_res_4873_ = l_Std_Internal_IO_Async_Async_ofPurePromise(v_00_u03b1_4869_, v_task_4870_, v_error_4871_);
return v_res_4873_;
}
}
static lean_object* _init_l_Std_Internal_IO_Async_Async_instMonadAwaitPromise___closed__0(void){
_start:
{
lean_object* v___x_4876_; 
v___x_4876_ = l_Std_Internal_IO_Async_EAsync_instMonadAwaitPromise(lean_box(0));
return v___x_4876_;
}
}
static lean_object* _init_l_Std_Internal_IO_Async_Async_instMonadAwaitPromise(void){
_start:
{
lean_object* v___x_4877_; 
v___x_4877_ = lean_obj_once(&l_Std_Internal_IO_Async_Async_instMonadAwaitPromise___closed__0, &l_Std_Internal_IO_Async_Async_instMonadAwaitPromise___closed__0_once, _init_l_Std_Internal_IO_Async_Async_instMonadAwaitPromise___closed__0);
return v___x_4877_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__1(lean_object* v_a_4878_, lean_object* v_x_4879_){
_start:
{
if (lean_obj_tag(v_x_4879_) == 0)
{
lean_object* v_a_4881_; lean_object* v___x_4883_; uint8_t v_isShared_4884_; uint8_t v_isSharedCheck_4889_; 
lean_dec(v_a_4878_);
v_a_4881_ = lean_ctor_get(v_x_4879_, 0);
v_isSharedCheck_4889_ = !lean_is_exclusive(v_x_4879_);
if (v_isSharedCheck_4889_ == 0)
{
v___x_4883_ = v_x_4879_;
v_isShared_4884_ = v_isSharedCheck_4889_;
goto v_resetjp_4882_;
}
else
{
lean_inc(v_a_4881_);
lean_dec(v_x_4879_);
v___x_4883_ = lean_box(0);
v_isShared_4884_ = v_isSharedCheck_4889_;
goto v_resetjp_4882_;
}
v_resetjp_4882_:
{
lean_object* v___x_4886_; 
if (v_isShared_4884_ == 0)
{
v___x_4886_ = v___x_4883_;
goto v_reusejp_4885_;
}
else
{
lean_object* v_reuseFailAlloc_4888_; 
v_reuseFailAlloc_4888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4888_, 0, v_a_4881_);
v___x_4886_ = v_reuseFailAlloc_4888_;
goto v_reusejp_4885_;
}
v_reusejp_4885_:
{
lean_object* v___x_4887_; 
v___x_4887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4887_, 0, v___x_4886_);
return v___x_4887_;
}
}
}
else
{
lean_object* v_a_4890_; lean_object* v___x_4892_; uint8_t v_isShared_4893_; uint8_t v_isSharedCheck_4899_; 
v_a_4890_ = lean_ctor_get(v_x_4879_, 0);
v_isSharedCheck_4899_ = !lean_is_exclusive(v_x_4879_);
if (v_isSharedCheck_4899_ == 0)
{
v___x_4892_ = v_x_4879_;
v_isShared_4893_ = v_isSharedCheck_4899_;
goto v_resetjp_4891_;
}
else
{
lean_inc(v_a_4890_);
lean_dec(v_x_4879_);
v___x_4892_ = lean_box(0);
v_isShared_4893_ = v_isSharedCheck_4899_;
goto v_resetjp_4891_;
}
v_resetjp_4891_:
{
lean_object* v___x_4894_; lean_object* v___x_4896_; 
v___x_4894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4894_, 0, v_a_4878_);
lean_ctor_set(v___x_4894_, 1, v_a_4890_);
if (v_isShared_4893_ == 0)
{
lean_ctor_set(v___x_4892_, 0, v___x_4894_);
v___x_4896_ = v___x_4892_;
goto v_reusejp_4895_;
}
else
{
lean_object* v_reuseFailAlloc_4898_; 
v_reuseFailAlloc_4898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4898_, 0, v___x_4894_);
v___x_4896_ = v_reuseFailAlloc_4898_;
goto v_reusejp_4895_;
}
v_reusejp_4895_:
{
lean_object* v___x_4897_; 
v___x_4897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4897_, 0, v___x_4896_);
return v___x_4897_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__1___boxed(lean_object* v_a_4900_, lean_object* v_x_4901_, lean_object* v___y_4902_){
_start:
{
lean_object* v_res_4903_; 
v_res_4903_ = l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__1(v_a_4900_, v_x_4901_);
return v_res_4903_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__0(lean_object* v_a_4904_, lean_object* v_x_4905_){
_start:
{
if (lean_obj_tag(v_x_4905_) == 0)
{
lean_object* v_a_4907_; lean_object* v___x_4909_; uint8_t v_isShared_4910_; uint8_t v_isSharedCheck_4915_; 
lean_dec_ref(v_a_4904_);
v_a_4907_ = lean_ctor_get(v_x_4905_, 0);
v_isSharedCheck_4915_ = !lean_is_exclusive(v_x_4905_);
if (v_isSharedCheck_4915_ == 0)
{
v___x_4909_ = v_x_4905_;
v_isShared_4910_ = v_isSharedCheck_4915_;
goto v_resetjp_4908_;
}
else
{
lean_inc(v_a_4907_);
lean_dec(v_x_4905_);
v___x_4909_ = lean_box(0);
v_isShared_4910_ = v_isSharedCheck_4915_;
goto v_resetjp_4908_;
}
v_resetjp_4908_:
{
lean_object* v___x_4912_; 
if (v_isShared_4910_ == 0)
{
v___x_4912_ = v___x_4909_;
goto v_reusejp_4911_;
}
else
{
lean_object* v_reuseFailAlloc_4914_; 
v_reuseFailAlloc_4914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4914_, 0, v_a_4907_);
v___x_4912_ = v_reuseFailAlloc_4914_;
goto v_reusejp_4911_;
}
v_reusejp_4911_:
{
lean_object* v___x_4913_; 
v___x_4913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4913_, 0, v___x_4912_);
return v___x_4913_;
}
}
}
else
{
lean_object* v_a_4916_; lean_object* v___f_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; uint8_t v___x_4920_; lean_object* v___x_4921_; 
v_a_4916_ = lean_ctor_get(v_x_4905_, 0);
lean_inc(v_a_4916_);
lean_dec_ref(v_x_4905_);
v___f_4917_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4917_, 0, v_a_4916_);
v___x_4918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4918_, 0, v_a_4904_);
v___x_4919_ = lean_unsigned_to_nat(0u);
v___x_4920_ = 0;
v___x_4921_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4919_, v___x_4920_, v___x_4918_, v___f_4917_);
return v___x_4921_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__0___boxed(lean_object* v_a_4922_, lean_object* v_x_4923_, lean_object* v___y_4924_){
_start:
{
lean_object* v_res_4925_; 
v_res_4925_ = l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__0(v_a_4922_, v_x_4923_);
return v_res_4925_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__2(lean_object* v_a_4926_, lean_object* v_x_4927_){
_start:
{
if (lean_obj_tag(v_x_4927_) == 0)
{
lean_object* v_a_4929_; lean_object* v___x_4931_; uint8_t v_isShared_4932_; uint8_t v_isSharedCheck_4937_; 
lean_dec_ref(v_a_4926_);
v_a_4929_ = lean_ctor_get(v_x_4927_, 0);
v_isSharedCheck_4937_ = !lean_is_exclusive(v_x_4927_);
if (v_isSharedCheck_4937_ == 0)
{
v___x_4931_ = v_x_4927_;
v_isShared_4932_ = v_isSharedCheck_4937_;
goto v_resetjp_4930_;
}
else
{
lean_inc(v_a_4929_);
lean_dec(v_x_4927_);
v___x_4931_ = lean_box(0);
v_isShared_4932_ = v_isSharedCheck_4937_;
goto v_resetjp_4930_;
}
v_resetjp_4930_:
{
lean_object* v___x_4934_; 
if (v_isShared_4932_ == 0)
{
v___x_4934_ = v___x_4931_;
goto v_reusejp_4933_;
}
else
{
lean_object* v_reuseFailAlloc_4936_; 
v_reuseFailAlloc_4936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4936_, 0, v_a_4929_);
v___x_4934_ = v_reuseFailAlloc_4936_;
goto v_reusejp_4933_;
}
v_reusejp_4933_:
{
lean_object* v___x_4935_; 
v___x_4935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4935_, 0, v___x_4934_);
return v___x_4935_;
}
}
}
else
{
lean_object* v_a_4938_; lean_object* v___f_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; uint8_t v___x_4942_; lean_object* v___x_4943_; 
v_a_4938_ = lean_ctor_get(v_x_4927_, 0);
lean_inc(v_a_4938_);
lean_dec_ref(v_x_4927_);
v___f_4939_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4939_, 0, v_a_4938_);
v___x_4940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4940_, 0, v_a_4926_);
v___x_4941_ = lean_unsigned_to_nat(0u);
v___x_4942_ = 0;
v___x_4943_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4941_, v___x_4942_, v___x_4940_, v___f_4939_);
return v___x_4943_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__2___boxed(lean_object* v_a_4944_, lean_object* v_x_4945_, lean_object* v___y_4946_){
_start:
{
lean_object* v_res_4947_; 
v_res_4947_ = l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__2(v_a_4944_, v_x_4945_);
return v_res_4947_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__3(lean_object* v_y_4948_, lean_object* v_prio_4949_, lean_object* v___f_4950_, lean_object* v_x_4951_){
_start:
{
if (lean_obj_tag(v_x_4951_) == 0)
{
lean_object* v_a_4953_; lean_object* v___x_4955_; uint8_t v_isShared_4956_; uint8_t v_isSharedCheck_4961_; 
lean_dec_ref(v___f_4950_);
lean_dec(v_prio_4949_);
lean_dec_ref(v_y_4948_);
v_a_4953_ = lean_ctor_get(v_x_4951_, 0);
v_isSharedCheck_4961_ = !lean_is_exclusive(v_x_4951_);
if (v_isSharedCheck_4961_ == 0)
{
v___x_4955_ = v_x_4951_;
v_isShared_4956_ = v_isSharedCheck_4961_;
goto v_resetjp_4954_;
}
else
{
lean_inc(v_a_4953_);
lean_dec(v_x_4951_);
v___x_4955_ = lean_box(0);
v_isShared_4956_ = v_isSharedCheck_4961_;
goto v_resetjp_4954_;
}
v_resetjp_4954_:
{
lean_object* v___x_4958_; 
if (v_isShared_4956_ == 0)
{
v___x_4958_ = v___x_4955_;
goto v_reusejp_4957_;
}
else
{
lean_object* v_reuseFailAlloc_4960_; 
v_reuseFailAlloc_4960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4960_, 0, v_a_4953_);
v___x_4958_ = v_reuseFailAlloc_4960_;
goto v_reusejp_4957_;
}
v_reusejp_4957_:
{
lean_object* v___x_4959_; 
v___x_4959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4959_, 0, v___x_4958_);
return v___x_4959_;
}
}
}
else
{
lean_object* v_a_4962_; lean_object* v___x_4964_; uint8_t v_isShared_4965_; uint8_t v_isSharedCheck_4978_; 
v_a_4962_ = lean_ctor_get(v_x_4951_, 0);
v_isSharedCheck_4978_ = !lean_is_exclusive(v_x_4951_);
if (v_isSharedCheck_4978_ == 0)
{
v___x_4964_ = v_x_4951_;
v_isShared_4965_ = v_isSharedCheck_4978_;
goto v_resetjp_4963_;
}
else
{
lean_inc(v_a_4962_);
lean_dec(v_x_4951_);
v___x_4964_ = lean_box(0);
v_isShared_4965_ = v_isSharedCheck_4978_;
goto v_resetjp_4963_;
}
v_resetjp_4963_:
{
lean_object* v___x_4966_; lean_object* v___x_4967_; lean_object* v___f_4968_; lean_object* v___x_4969_; uint8_t v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4973_; 
v___x_4966_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4966_, 0, lean_box(0));
lean_closure_set(v___x_4966_, 1, v_y_4948_);
v___x_4967_ = lean_io_as_task(v___x_4966_, v_prio_4949_);
v___f_4968_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4968_, 0, v_a_4962_);
v___x_4969_ = lean_unsigned_to_nat(0u);
v___x_4970_ = 1;
v___x_4971_ = lean_task_bind(v___x_4967_, v___f_4950_, v___x_4969_, v___x_4970_);
if (v_isShared_4965_ == 0)
{
lean_ctor_set(v___x_4964_, 0, v___x_4971_);
v___x_4973_ = v___x_4964_;
goto v_reusejp_4972_;
}
else
{
lean_object* v_reuseFailAlloc_4977_; 
v_reuseFailAlloc_4977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4977_, 0, v___x_4971_);
v___x_4973_ = v_reuseFailAlloc_4977_;
goto v_reusejp_4972_;
}
v_reusejp_4972_:
{
lean_object* v___x_4974_; uint8_t v___x_4975_; lean_object* v___x_4976_; 
v___x_4974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4974_, 0, v___x_4973_);
v___x_4975_ = 0;
v___x_4976_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4969_, v___x_4975_, v___x_4974_, v___f_4968_);
return v___x_4976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__3___boxed(lean_object* v_y_4979_, lean_object* v_prio_4980_, lean_object* v___f_4981_, lean_object* v_x_4982_, lean_object* v___y_4983_){
_start:
{
lean_object* v_res_4984_; 
v_res_4984_ = l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__3(v_y_4979_, v_prio_4980_, v___f_4981_, v_x_4982_);
return v_res_4984_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg(lean_object* v_x_4985_, lean_object* v_y_4986_, lean_object* v_prio_4987_){
_start:
{
lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___f_4991_; lean_object* v___f_4992_; lean_object* v___x_4993_; uint8_t v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; uint8_t v___x_4998_; lean_object* v___x_4999_; 
v___x_4989_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4989_, 0, lean_box(0));
lean_closure_set(v___x_4989_, 1, v_x_4985_);
lean_inc(v_prio_4987_);
v___x_4990_ = lean_io_as_task(v___x_4989_, v_prio_4987_);
v___f_4991_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_4992_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_4992_, 0, v_y_4986_);
lean_closure_set(v___f_4992_, 1, v_prio_4987_);
lean_closure_set(v___f_4992_, 2, v___f_4991_);
v___x_4993_ = lean_unsigned_to_nat(0u);
v___x_4994_ = 1;
v___x_4995_ = lean_task_bind(v___x_4990_, v___f_4991_, v___x_4993_, v___x_4994_);
v___x_4996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4996_, 0, v___x_4995_);
v___x_4997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4997_, 0, v___x_4996_);
v___x_4998_ = 0;
v___x_4999_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4993_, v___x_4998_, v___x_4997_, v___f_4992_);
return v___x_4999_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___redArg___boxed(lean_object* v_x_5000_, lean_object* v_y_5001_, lean_object* v_prio_5002_, lean_object* v_a_5003_){
_start:
{
lean_object* v_res_5004_; 
v_res_5004_ = l_Std_Internal_IO_Async_Async_concurrently___redArg(v_x_5000_, v_y_5001_, v_prio_5002_);
return v_res_5004_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently(lean_object* v_00_u03b1_5005_, lean_object* v_00_u03b2_5006_, lean_object* v_x_5007_, lean_object* v_y_5008_, lean_object* v_prio_5009_){
_start:
{
lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v___f_5013_; lean_object* v___f_5014_; lean_object* v___x_5015_; uint8_t v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; uint8_t v___x_5020_; lean_object* v___x_5021_; 
v___x_5011_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5011_, 0, lean_box(0));
lean_closure_set(v___x_5011_, 1, v_x_5007_);
lean_inc(v_prio_5009_);
v___x_5012_ = lean_io_as_task(v___x_5011_, v_prio_5009_);
v___f_5013_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5014_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5014_, 0, v_y_5008_);
lean_closure_set(v___f_5014_, 1, v_prio_5009_);
lean_closure_set(v___f_5014_, 2, v___f_5013_);
v___x_5015_ = lean_unsigned_to_nat(0u);
v___x_5016_ = 1;
v___x_5017_ = lean_task_bind(v___x_5012_, v___f_5013_, v___x_5015_, v___x_5016_);
v___x_5018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5018_, 0, v___x_5017_);
v___x_5019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5019_, 0, v___x_5018_);
v___x_5020_ = 0;
v___x_5021_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5015_, v___x_5020_, v___x_5019_, v___f_5014_);
return v___x_5021_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrently___boxed(lean_object* v_00_u03b1_5022_, lean_object* v_00_u03b2_5023_, lean_object* v_x_5024_, lean_object* v_y_5025_, lean_object* v_prio_5026_, lean_object* v_a_5027_){
_start:
{
lean_object* v_res_5028_; 
v_res_5028_ = l_Std_Internal_IO_Async_Async_concurrently(v_00_u03b1_5022_, v_00_u03b2_5023_, v_x_5024_, v_y_5025_, v_prio_5026_);
return v_res_5028_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__1(lean_object* v_x_5029_){
_start:
{
if (lean_obj_tag(v_x_5029_) == 0)
{
lean_object* v_a_5031_; lean_object* v___x_5033_; uint8_t v_isShared_5034_; uint8_t v_isSharedCheck_5039_; 
v_a_5031_ = lean_ctor_get(v_x_5029_, 0);
v_isSharedCheck_5039_ = !lean_is_exclusive(v_x_5029_);
if (v_isSharedCheck_5039_ == 0)
{
v___x_5033_ = v_x_5029_;
v_isShared_5034_ = v_isSharedCheck_5039_;
goto v_resetjp_5032_;
}
else
{
lean_inc(v_a_5031_);
lean_dec(v_x_5029_);
v___x_5033_ = lean_box(0);
v_isShared_5034_ = v_isSharedCheck_5039_;
goto v_resetjp_5032_;
}
v_resetjp_5032_:
{
lean_object* v___x_5036_; 
if (v_isShared_5034_ == 0)
{
v___x_5036_ = v___x_5033_;
goto v_reusejp_5035_;
}
else
{
lean_object* v_reuseFailAlloc_5038_; 
v_reuseFailAlloc_5038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5038_, 0, v_a_5031_);
v___x_5036_ = v_reuseFailAlloc_5038_;
goto v_reusejp_5035_;
}
v_reusejp_5035_:
{
lean_object* v___x_5037_; 
v___x_5037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5037_, 0, v___x_5036_);
return v___x_5037_;
}
}
}
else
{
lean_object* v_a_5040_; lean_object* v___x_5041_; 
v_a_5040_ = lean_ctor_get(v_x_5029_, 0);
lean_inc(v_a_5040_);
lean_dec_ref(v_x_5029_);
v___x_5041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5041_, 0, v_a_5040_);
return v___x_5041_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__1___boxed(lean_object* v_x_5042_, lean_object* v___y_5043_){
_start:
{
lean_object* v_res_5044_; 
v_res_5044_ = l_Std_Internal_IO_Async_Async_race___redArg___lam__1(v_x_5042_);
return v_res_5044_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__0(lean_object* v_a_5045_){
_start:
{
lean_object* v___x_5046_; 
v___x_5046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5046_, 0, v_a_5045_);
return v___x_5046_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__3(lean_object* v_a_5047_, lean_object* v_value_5048_){
_start:
{
lean_object* v___x_5050_; 
v___x_5050_ = lean_io_promise_resolve(v_value_5048_, v_a_5047_);
return v___x_5050_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__3___boxed(lean_object* v_a_5051_, lean_object* v_value_5052_, lean_object* v___y_5053_){
_start:
{
lean_object* v_res_5054_; 
v_res_5054_ = l_Std_Internal_IO_Async_Async_race___redArg___lam__3(v_a_5051_, v_value_5052_);
lean_dec(v_a_5051_);
return v_res_5054_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__2(lean_object* v_a_5055_, lean_object* v___f_5056_, lean_object* v___f_5057_, lean_object* v_x_5058_){
_start:
{
if (lean_obj_tag(v_x_5058_) == 0)
{
lean_object* v_a_5060_; lean_object* v___x_5062_; uint8_t v_isShared_5063_; uint8_t v_isSharedCheck_5068_; 
lean_dec_ref(v___f_5057_);
lean_dec_ref(v___f_5056_);
v_a_5060_ = lean_ctor_get(v_x_5058_, 0);
v_isSharedCheck_5068_ = !lean_is_exclusive(v_x_5058_);
if (v_isSharedCheck_5068_ == 0)
{
v___x_5062_ = v_x_5058_;
v_isShared_5063_ = v_isSharedCheck_5068_;
goto v_resetjp_5061_;
}
else
{
lean_inc(v_a_5060_);
lean_dec(v_x_5058_);
v___x_5062_ = lean_box(0);
v_isShared_5063_ = v_isSharedCheck_5068_;
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
lean_object* v_reuseFailAlloc_5067_; 
v_reuseFailAlloc_5067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5067_, 0, v_a_5060_);
v___x_5065_ = v_reuseFailAlloc_5067_;
goto v_reusejp_5064_;
}
v_reusejp_5064_:
{
lean_object* v___x_5066_; 
v___x_5066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5066_, 0, v___x_5065_);
return v___x_5066_;
}
}
}
else
{
lean_object* v___x_5069_; lean_object* v___x_5070_; uint8_t v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; 
lean_dec_ref(v_x_5058_);
v___x_5069_ = l_IO_Promise_result_x21___redArg(v_a_5055_);
v___x_5070_ = lean_unsigned_to_nat(0u);
v___x_5071_ = 0;
v___x_5072_ = lean_task_map(v___f_5056_, v___x_5069_, v___x_5070_, v___x_5071_);
v___x_5073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5073_, 0, v___x_5072_);
v___x_5074_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5070_, v___x_5071_, v___x_5073_, v___f_5057_);
return v___x_5074_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__2___boxed(lean_object* v_a_5075_, lean_object* v___f_5076_, lean_object* v___f_5077_, lean_object* v_x_5078_, lean_object* v___y_5079_){
_start:
{
lean_object* v_res_5080_; 
v_res_5080_ = l_Std_Internal_IO_Async_Async_race___redArg___lam__2(v_a_5075_, v___f_5076_, v___f_5077_, v_x_5078_);
lean_dec(v_a_5075_);
return v_res_5080_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__4(lean_object* v_a_5081_, lean_object* v___x_5082_, lean_object* v___x_5083_, uint8_t v___x_5084_, lean_object* v___f_5085_, lean_object* v_x_5086_){
_start:
{
if (lean_obj_tag(v_x_5086_) == 0)
{
lean_object* v_a_5088_; lean_object* v___x_5090_; uint8_t v_isShared_5091_; uint8_t v_isSharedCheck_5096_; 
lean_dec_ref(v___f_5085_);
lean_dec(v___x_5083_);
lean_dec_ref(v___x_5082_);
lean_dec_ref(v_a_5081_);
v_a_5088_ = lean_ctor_get(v_x_5086_, 0);
v_isSharedCheck_5096_ = !lean_is_exclusive(v_x_5086_);
if (v_isSharedCheck_5096_ == 0)
{
v___x_5090_ = v_x_5086_;
v_isShared_5091_ = v_isSharedCheck_5096_;
goto v_resetjp_5089_;
}
else
{
lean_inc(v_a_5088_);
lean_dec(v_x_5086_);
v___x_5090_ = lean_box(0);
v_isShared_5091_ = v_isSharedCheck_5096_;
goto v_resetjp_5089_;
}
v_resetjp_5089_:
{
lean_object* v___x_5093_; 
if (v_isShared_5091_ == 0)
{
v___x_5093_ = v___x_5090_;
goto v_reusejp_5092_;
}
else
{
lean_object* v_reuseFailAlloc_5095_; 
v_reuseFailAlloc_5095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5095_, 0, v_a_5088_);
v___x_5093_ = v_reuseFailAlloc_5095_;
goto v_reusejp_5092_;
}
v_reusejp_5092_:
{
lean_object* v___x_5094_; 
v___x_5094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5094_, 0, v___x_5093_);
return v___x_5094_;
}
}
}
else
{
lean_object* v___x_5098_; uint8_t v_isShared_5099_; uint8_t v_isSharedCheck_5106_; 
v_isSharedCheck_5106_ = !lean_is_exclusive(v_x_5086_);
if (v_isSharedCheck_5106_ == 0)
{
lean_object* v_unused_5107_; 
v_unused_5107_ = lean_ctor_get(v_x_5086_, 0);
lean_dec(v_unused_5107_);
v___x_5098_ = v_x_5086_;
v_isShared_5099_ = v_isSharedCheck_5106_;
goto v_resetjp_5097_;
}
else
{
lean_dec(v_x_5086_);
v___x_5098_ = lean_box(0);
v_isShared_5099_ = v_isSharedCheck_5106_;
goto v_resetjp_5097_;
}
v_resetjp_5097_:
{
lean_object* v___x_5100_; lean_object* v___x_5102_; 
lean_inc(v___x_5083_);
v___x_5100_ = l_BaseIO_chainTask___redArg(v_a_5081_, v___x_5082_, v___x_5083_, v___x_5084_);
if (v_isShared_5099_ == 0)
{
lean_ctor_set(v___x_5098_, 0, v___x_5100_);
v___x_5102_ = v___x_5098_;
goto v_reusejp_5101_;
}
else
{
lean_object* v_reuseFailAlloc_5105_; 
v_reuseFailAlloc_5105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5105_, 0, v___x_5100_);
v___x_5102_ = v_reuseFailAlloc_5105_;
goto v_reusejp_5101_;
}
v_reusejp_5101_:
{
lean_object* v___x_5103_; lean_object* v___x_5104_; 
v___x_5103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5103_, 0, v___x_5102_);
v___x_5104_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5083_, v___x_5084_, v___x_5103_, v___f_5085_);
return v___x_5104_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__4___boxed(lean_object* v_a_5108_, lean_object* v___x_5109_, lean_object* v___x_5110_, lean_object* v___x_5111_, lean_object* v___f_5112_, lean_object* v_x_5113_, lean_object* v___y_5114_){
_start:
{
uint8_t v___x_1301__boxed_5115_; lean_object* v_res_5116_; 
v___x_1301__boxed_5115_ = lean_unbox(v___x_5111_);
v_res_5116_ = l_Std_Internal_IO_Async_Async_race___redArg___lam__4(v_a_5108_, v___x_5109_, v___x_5110_, v___x_1301__boxed_5115_, v___f_5112_, v_x_5113_);
return v_res_5116_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__5(lean_object* v___f_5117_, lean_object* v___f_5118_, lean_object* v_a_5119_, lean_object* v___f_5120_, lean_object* v_x_5121_){
_start:
{
if (lean_obj_tag(v_x_5121_) == 0)
{
lean_object* v_a_5123_; lean_object* v___x_5125_; uint8_t v_isShared_5126_; uint8_t v_isSharedCheck_5131_; 
lean_dec_ref(v___f_5120_);
lean_dec_ref(v_a_5119_);
lean_dec_ref(v___f_5118_);
lean_dec(v___f_5117_);
v_a_5123_ = lean_ctor_get(v_x_5121_, 0);
v_isSharedCheck_5131_ = !lean_is_exclusive(v_x_5121_);
if (v_isSharedCheck_5131_ == 0)
{
v___x_5125_ = v_x_5121_;
v_isShared_5126_ = v_isSharedCheck_5131_;
goto v_resetjp_5124_;
}
else
{
lean_inc(v_a_5123_);
lean_dec(v_x_5121_);
v___x_5125_ = lean_box(0);
v_isShared_5126_ = v_isSharedCheck_5131_;
goto v_resetjp_5124_;
}
v_resetjp_5124_:
{
lean_object* v___x_5128_; 
if (v_isShared_5126_ == 0)
{
v___x_5128_ = v___x_5125_;
goto v_reusejp_5127_;
}
else
{
lean_object* v_reuseFailAlloc_5130_; 
v_reuseFailAlloc_5130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5130_, 0, v_a_5123_);
v___x_5128_ = v_reuseFailAlloc_5130_;
goto v_reusejp_5127_;
}
v_reusejp_5127_:
{
lean_object* v___x_5129_; 
v___x_5129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5129_, 0, v___x_5128_);
return v___x_5129_;
}
}
}
else
{
lean_object* v_a_5132_; lean_object* v___x_5134_; uint8_t v_isShared_5135_; uint8_t v_isSharedCheck_5148_; 
v_a_5132_ = lean_ctor_get(v_x_5121_, 0);
v_isSharedCheck_5148_ = !lean_is_exclusive(v_x_5121_);
if (v_isSharedCheck_5148_ == 0)
{
v___x_5134_ = v_x_5121_;
v_isShared_5135_ = v_isSharedCheck_5148_;
goto v_resetjp_5133_;
}
else
{
lean_inc(v_a_5132_);
lean_dec(v_x_5121_);
v___x_5134_ = lean_box(0);
v_isShared_5135_ = v_isSharedCheck_5148_;
goto v_resetjp_5133_;
}
v_resetjp_5133_:
{
lean_object* v___x_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; uint8_t v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; lean_object* v___f_5142_; lean_object* v___x_5144_; 
v___x_5136_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_5136_, 0, lean_box(0));
lean_closure_set(v___x_5136_, 1, lean_box(0));
lean_closure_set(v___x_5136_, 2, v___f_5117_);
lean_closure_set(v___x_5136_, 3, lean_box(0));
v___x_5137_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_5137_, 0, lean_box(0));
lean_closure_set(v___x_5137_, 1, lean_box(0));
lean_closure_set(v___x_5137_, 2, lean_box(0));
lean_closure_set(v___x_5137_, 3, v___x_5136_);
lean_closure_set(v___x_5137_, 4, v___f_5118_);
v___x_5138_ = lean_unsigned_to_nat(0u);
v___x_5139_ = 0;
lean_inc_ref(v___x_5137_);
v___x_5140_ = l_BaseIO_chainTask___redArg(v_a_5119_, v___x_5137_, v___x_5138_, v___x_5139_);
v___x_5141_ = lean_box(v___x_5139_);
v___f_5142_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_5142_, 0, v_a_5132_);
lean_closure_set(v___f_5142_, 1, v___x_5137_);
lean_closure_set(v___f_5142_, 2, v___x_5138_);
lean_closure_set(v___f_5142_, 3, v___x_5141_);
lean_closure_set(v___f_5142_, 4, v___f_5120_);
if (v_isShared_5135_ == 0)
{
lean_ctor_set(v___x_5134_, 0, v___x_5140_);
v___x_5144_ = v___x_5134_;
goto v_reusejp_5143_;
}
else
{
lean_object* v_reuseFailAlloc_5147_; 
v_reuseFailAlloc_5147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5147_, 0, v___x_5140_);
v___x_5144_ = v_reuseFailAlloc_5147_;
goto v_reusejp_5143_;
}
v_reusejp_5143_:
{
lean_object* v___x_5145_; lean_object* v___x_5146_; 
v___x_5145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5145_, 0, v___x_5144_);
v___x_5146_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5138_, v___x_5139_, v___x_5145_, v___f_5142_);
return v___x_5146_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__5___boxed(lean_object* v___f_5149_, lean_object* v___f_5150_, lean_object* v_a_5151_, lean_object* v___f_5152_, lean_object* v_x_5153_, lean_object* v___y_5154_){
_start:
{
lean_object* v_res_5155_; 
v_res_5155_ = l_Std_Internal_IO_Async_Async_race___redArg___lam__5(v___f_5149_, v___f_5150_, v_a_5151_, v___f_5152_, v_x_5153_);
return v_res_5155_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__6(lean_object* v_y_5156_, lean_object* v_prio_5157_, lean_object* v___f_5158_, lean_object* v___f_5159_, lean_object* v___f_5160_, lean_object* v___f_5161_, lean_object* v_x_5162_){
_start:
{
if (lean_obj_tag(v_x_5162_) == 0)
{
lean_object* v_a_5164_; lean_object* v___x_5166_; uint8_t v_isShared_5167_; uint8_t v_isSharedCheck_5172_; 
lean_dec_ref(v___f_5161_);
lean_dec_ref(v___f_5160_);
lean_dec_ref(v___f_5159_);
lean_dec(v___f_5158_);
lean_dec(v_prio_5157_);
lean_dec_ref(v_y_5156_);
v_a_5164_ = lean_ctor_get(v_x_5162_, 0);
v_isSharedCheck_5172_ = !lean_is_exclusive(v_x_5162_);
if (v_isSharedCheck_5172_ == 0)
{
v___x_5166_ = v_x_5162_;
v_isShared_5167_ = v_isSharedCheck_5172_;
goto v_resetjp_5165_;
}
else
{
lean_inc(v_a_5164_);
lean_dec(v_x_5162_);
v___x_5166_ = lean_box(0);
v_isShared_5167_ = v_isSharedCheck_5172_;
goto v_resetjp_5165_;
}
v_resetjp_5165_:
{
lean_object* v___x_5169_; 
if (v_isShared_5167_ == 0)
{
v___x_5169_ = v___x_5166_;
goto v_reusejp_5168_;
}
else
{
lean_object* v_reuseFailAlloc_5171_; 
v_reuseFailAlloc_5171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5171_, 0, v_a_5164_);
v___x_5169_ = v_reuseFailAlloc_5171_;
goto v_reusejp_5168_;
}
v_reusejp_5168_:
{
lean_object* v___x_5170_; 
v___x_5170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5170_, 0, v___x_5169_);
return v___x_5170_;
}
}
}
else
{
lean_object* v_a_5173_; lean_object* v___x_5175_; uint8_t v_isShared_5176_; uint8_t v_isSharedCheck_5189_; 
v_a_5173_ = lean_ctor_get(v_x_5162_, 0);
v_isSharedCheck_5189_ = !lean_is_exclusive(v_x_5162_);
if (v_isSharedCheck_5189_ == 0)
{
v___x_5175_ = v_x_5162_;
v_isShared_5176_ = v_isSharedCheck_5189_;
goto v_resetjp_5174_;
}
else
{
lean_inc(v_a_5173_);
lean_dec(v_x_5162_);
v___x_5175_ = lean_box(0);
v_isShared_5176_ = v_isSharedCheck_5189_;
goto v_resetjp_5174_;
}
v_resetjp_5174_:
{
lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___f_5179_; lean_object* v___x_5180_; uint8_t v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5184_; 
v___x_5177_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5177_, 0, lean_box(0));
lean_closure_set(v___x_5177_, 1, v_y_5156_);
v___x_5178_ = lean_io_as_task(v___x_5177_, v_prio_5157_);
v___f_5179_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_race___redArg___lam__5___boxed), 6, 4);
lean_closure_set(v___f_5179_, 0, v___f_5158_);
lean_closure_set(v___f_5179_, 1, v___f_5159_);
lean_closure_set(v___f_5179_, 2, v_a_5173_);
lean_closure_set(v___f_5179_, 3, v___f_5160_);
v___x_5180_ = lean_unsigned_to_nat(0u);
v___x_5181_ = 1;
v___x_5182_ = lean_task_bind(v___x_5178_, v___f_5161_, v___x_5180_, v___x_5181_);
if (v_isShared_5176_ == 0)
{
lean_ctor_set(v___x_5175_, 0, v___x_5182_);
v___x_5184_ = v___x_5175_;
goto v_reusejp_5183_;
}
else
{
lean_object* v_reuseFailAlloc_5188_; 
v_reuseFailAlloc_5188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5188_, 0, v___x_5182_);
v___x_5184_ = v_reuseFailAlloc_5188_;
goto v_reusejp_5183_;
}
v_reusejp_5183_:
{
lean_object* v___x_5185_; uint8_t v___x_5186_; lean_object* v___x_5187_; 
v___x_5185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5185_, 0, v___x_5184_);
v___x_5186_ = 0;
v___x_5187_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5180_, v___x_5186_, v___x_5185_, v___f_5179_);
return v___x_5187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__6___boxed(lean_object* v_y_5190_, lean_object* v_prio_5191_, lean_object* v___f_5192_, lean_object* v___f_5193_, lean_object* v___f_5194_, lean_object* v___f_5195_, lean_object* v_x_5196_, lean_object* v___y_5197_){
_start:
{
lean_object* v_res_5198_; 
v_res_5198_ = l_Std_Internal_IO_Async_Async_race___redArg___lam__6(v_y_5190_, v_prio_5191_, v___f_5192_, v___f_5193_, v___f_5194_, v___f_5195_, v_x_5196_);
return v_res_5198_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__7(lean_object* v_x_5199_, lean_object* v_prio_5200_, lean_object* v___f_5201_, lean_object* v___f_5202_, lean_object* v_y_5203_, lean_object* v___f_5204_, lean_object* v___f_5205_, lean_object* v___f_5206_, lean_object* v_x_5207_){
_start:
{
if (lean_obj_tag(v_x_5207_) == 0)
{
lean_object* v_a_5209_; lean_object* v___x_5211_; uint8_t v_isShared_5212_; uint8_t v_isSharedCheck_5217_; 
lean_dec_ref(v___f_5206_);
lean_dec_ref(v___f_5205_);
lean_dec(v___f_5204_);
lean_dec_ref(v_y_5203_);
lean_dec_ref(v___f_5202_);
lean_dec_ref(v___f_5201_);
lean_dec(v_prio_5200_);
lean_dec_ref(v_x_5199_);
v_a_5209_ = lean_ctor_get(v_x_5207_, 0);
v_isSharedCheck_5217_ = !lean_is_exclusive(v_x_5207_);
if (v_isSharedCheck_5217_ == 0)
{
v___x_5211_ = v_x_5207_;
v_isShared_5212_ = v_isSharedCheck_5217_;
goto v_resetjp_5210_;
}
else
{
lean_inc(v_a_5209_);
lean_dec(v_x_5207_);
v___x_5211_ = lean_box(0);
v_isShared_5212_ = v_isSharedCheck_5217_;
goto v_resetjp_5210_;
}
v_resetjp_5210_:
{
lean_object* v___x_5214_; 
if (v_isShared_5212_ == 0)
{
v___x_5214_ = v___x_5211_;
goto v_reusejp_5213_;
}
else
{
lean_object* v_reuseFailAlloc_5216_; 
v_reuseFailAlloc_5216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5216_, 0, v_a_5209_);
v___x_5214_ = v_reuseFailAlloc_5216_;
goto v_reusejp_5213_;
}
v_reusejp_5213_:
{
lean_object* v___x_5215_; 
v___x_5215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5215_, 0, v___x_5214_);
return v___x_5215_;
}
}
}
else
{
lean_object* v_a_5218_; lean_object* v___x_5220_; uint8_t v_isShared_5221_; uint8_t v_isSharedCheck_5236_; 
v_a_5218_ = lean_ctor_get(v_x_5207_, 0);
v_isSharedCheck_5236_ = !lean_is_exclusive(v_x_5207_);
if (v_isSharedCheck_5236_ == 0)
{
v___x_5220_ = v_x_5207_;
v_isShared_5221_ = v_isSharedCheck_5236_;
goto v_resetjp_5219_;
}
else
{
lean_inc(v_a_5218_);
lean_dec(v_x_5207_);
v___x_5220_ = lean_box(0);
v_isShared_5221_ = v_isSharedCheck_5236_;
goto v_resetjp_5219_;
}
v_resetjp_5219_:
{
lean_object* v___x_5222_; lean_object* v___x_5223_; lean_object* v___f_5224_; lean_object* v___f_5225_; lean_object* v___f_5226_; lean_object* v___x_5227_; uint8_t v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5231_; 
v___x_5222_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5222_, 0, lean_box(0));
lean_closure_set(v___x_5222_, 1, v_x_5199_);
lean_inc(v_prio_5200_);
v___x_5223_ = lean_io_as_task(v___x_5222_, v_prio_5200_);
lean_inc(v_a_5218_);
v___f_5224_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5224_, 0, v_a_5218_);
v___f_5225_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_5225_, 0, v_a_5218_);
lean_closure_set(v___f_5225_, 1, v___f_5201_);
lean_closure_set(v___f_5225_, 2, v___f_5202_);
v___f_5226_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_race___redArg___lam__6___boxed), 8, 6);
lean_closure_set(v___f_5226_, 0, v_y_5203_);
lean_closure_set(v___f_5226_, 1, v_prio_5200_);
lean_closure_set(v___f_5226_, 2, v___f_5204_);
lean_closure_set(v___f_5226_, 3, v___f_5224_);
lean_closure_set(v___f_5226_, 4, v___f_5225_);
lean_closure_set(v___f_5226_, 5, v___f_5205_);
v___x_5227_ = lean_unsigned_to_nat(0u);
v___x_5228_ = 1;
v___x_5229_ = lean_task_bind(v___x_5223_, v___f_5206_, v___x_5227_, v___x_5228_);
if (v_isShared_5221_ == 0)
{
lean_ctor_set(v___x_5220_, 0, v___x_5229_);
v___x_5231_ = v___x_5220_;
goto v_reusejp_5230_;
}
else
{
lean_object* v_reuseFailAlloc_5235_; 
v_reuseFailAlloc_5235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5235_, 0, v___x_5229_);
v___x_5231_ = v_reuseFailAlloc_5235_;
goto v_reusejp_5230_;
}
v_reusejp_5230_:
{
lean_object* v___x_5232_; uint8_t v___x_5233_; lean_object* v___x_5234_; 
v___x_5232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5232_, 0, v___x_5231_);
v___x_5233_ = 0;
v___x_5234_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5227_, v___x_5233_, v___x_5232_, v___f_5226_);
return v___x_5234_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___lam__7___boxed(lean_object* v_x_5237_, lean_object* v_prio_5238_, lean_object* v___f_5239_, lean_object* v___f_5240_, lean_object* v_y_5241_, lean_object* v___f_5242_, lean_object* v___f_5243_, lean_object* v___f_5244_, lean_object* v_x_5245_, lean_object* v___y_5246_){
_start:
{
lean_object* v_res_5247_; 
v_res_5247_ = l_Std_Internal_IO_Async_Async_race___redArg___lam__7(v_x_5237_, v_prio_5238_, v___f_5239_, v___f_5240_, v_y_5241_, v___f_5242_, v___f_5243_, v___f_5244_, v_x_5245_);
return v_res_5247_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg(lean_object* v_x_5250_, lean_object* v_y_5251_, lean_object* v_prio_5252_){
_start:
{
lean_object* v___x_5254_; lean_object* v___f_5255_; lean_object* v___f_5256_; lean_object* v___f_5257_; lean_object* v___f_5258_; lean_object* v___f_5259_; lean_object* v___x_5260_; lean_object* v___x_5261_; lean_object* v___x_5262_; uint8_t v___x_5263_; lean_object* v___x_5264_; 
v___x_5254_ = lean_io_promise_new();
v___f_5255_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5256_ = ((lean_object*)(l_Std_Internal_IO_Async_Async_race___redArg___closed__0));
v___f_5257_ = ((lean_object*)(l_Std_Internal_IO_Async_Async_race___redArg___closed__1));
v___f_5258_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0));
v___f_5259_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_5259_, 0, v_x_5250_);
lean_closure_set(v___f_5259_, 1, v_prio_5252_);
lean_closure_set(v___f_5259_, 2, v___f_5257_);
lean_closure_set(v___f_5259_, 3, v___f_5256_);
lean_closure_set(v___f_5259_, 4, v_y_5251_);
lean_closure_set(v___f_5259_, 5, v___f_5258_);
lean_closure_set(v___f_5259_, 6, v___f_5255_);
lean_closure_set(v___f_5259_, 7, v___f_5255_);
v___x_5260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5260_, 0, v___x_5254_);
v___x_5261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5261_, 0, v___x_5260_);
v___x_5262_ = lean_unsigned_to_nat(0u);
v___x_5263_ = 0;
v___x_5264_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5262_, v___x_5263_, v___x_5261_, v___f_5259_);
return v___x_5264_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___redArg___boxed(lean_object* v_x_5265_, lean_object* v_y_5266_, lean_object* v_prio_5267_, lean_object* v_a_5268_){
_start:
{
lean_object* v_res_5269_; 
v_res_5269_ = l_Std_Internal_IO_Async_Async_race___redArg(v_x_5265_, v_y_5266_, v_prio_5267_);
return v_res_5269_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race(lean_object* v_00_u03b1_5270_, lean_object* v_inst_5271_, lean_object* v_x_5272_, lean_object* v_y_5273_, lean_object* v_prio_5274_){
_start:
{
lean_object* v___x_5276_; lean_object* v___f_5277_; lean_object* v___f_5278_; lean_object* v___f_5279_; lean_object* v___f_5280_; lean_object* v___f_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; uint8_t v___x_5285_; lean_object* v___x_5286_; 
v___x_5276_ = lean_io_promise_new();
v___f_5277_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5278_ = ((lean_object*)(l_Std_Internal_IO_Async_Async_race___redArg___closed__0));
v___f_5279_ = ((lean_object*)(l_Std_Internal_IO_Async_Async_race___redArg___closed__1));
v___f_5280_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0));
v___f_5281_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_5281_, 0, v_x_5272_);
lean_closure_set(v___f_5281_, 1, v_prio_5274_);
lean_closure_set(v___f_5281_, 2, v___f_5279_);
lean_closure_set(v___f_5281_, 3, v___f_5278_);
lean_closure_set(v___f_5281_, 4, v_y_5273_);
lean_closure_set(v___f_5281_, 5, v___f_5280_);
lean_closure_set(v___f_5281_, 6, v___f_5277_);
lean_closure_set(v___f_5281_, 7, v___f_5277_);
v___x_5282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5282_, 0, v___x_5276_);
v___x_5283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5283_, 0, v___x_5282_);
v___x_5284_ = lean_unsigned_to_nat(0u);
v___x_5285_ = 0;
v___x_5286_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5284_, v___x_5285_, v___x_5283_, v___f_5281_);
return v___x_5286_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_race___boxed(lean_object* v_00_u03b1_5287_, lean_object* v_inst_5288_, lean_object* v_x_5289_, lean_object* v_y_5290_, lean_object* v_prio_5291_, lean_object* v_a_5292_){
_start:
{
lean_object* v_res_5293_; 
v_res_5293_ = l_Std_Internal_IO_Async_Async_race(v_00_u03b1_5287_, v_inst_5288_, v_x_5289_, v_y_5290_, v_prio_5291_);
lean_dec(v_inst_5288_);
return v_res_5293_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__1(lean_object* v_prio_5294_, lean_object* v___f_5295_, lean_object* v_x_5296_){
_start:
{
lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; uint8_t v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; 
v___x_5298_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5298_, 0, lean_box(0));
lean_closure_set(v___x_5298_, 1, v_x_5296_);
v___x_5299_ = lean_io_as_task(v___x_5298_, v_prio_5294_);
v___x_5300_ = lean_unsigned_to_nat(0u);
v___x_5301_ = 1;
v___x_5302_ = lean_task_bind(v___x_5299_, v___f_5295_, v___x_5300_, v___x_5301_);
v___x_5303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5303_, 0, v___x_5302_);
v___x_5304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5304_, 0, v___x_5303_);
return v___x_5304_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_5305_, lean_object* v___f_5306_, lean_object* v_x_5307_, lean_object* v___y_5308_){
_start:
{
lean_object* v_res_5309_; 
v_res_5309_ = l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__1(v_prio_5305_, v___f_5306_, v_x_5307_);
return v_res_5309_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__0(lean_object* v___y_5310_){
_start:
{
lean_object* v___x_5312_; 
v___x_5312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5312_, 0, v___y_5310_);
return v___x_5312_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___y_5313_, lean_object* v___y_5314_){
_start:
{
lean_object* v_res_5315_; 
v_res_5315_ = l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__0(v___y_5313_);
return v_res_5315_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__2(lean_object* v___x_5316_, lean_object* v___f_5317_, lean_object* v_x_5318_){
_start:
{
if (lean_obj_tag(v_x_5318_) == 0)
{
lean_object* v_a_5320_; lean_object* v___x_5322_; uint8_t v_isShared_5323_; uint8_t v_isSharedCheck_5328_; 
lean_dec_ref(v___f_5317_);
lean_dec_ref(v___x_5316_);
v_a_5320_ = lean_ctor_get(v_x_5318_, 0);
v_isSharedCheck_5328_ = !lean_is_exclusive(v_x_5318_);
if (v_isSharedCheck_5328_ == 0)
{
v___x_5322_ = v_x_5318_;
v_isShared_5323_ = v_isSharedCheck_5328_;
goto v_resetjp_5321_;
}
else
{
lean_inc(v_a_5320_);
lean_dec(v_x_5318_);
v___x_5322_ = lean_box(0);
v_isShared_5323_ = v_isSharedCheck_5328_;
goto v_resetjp_5321_;
}
v_resetjp_5321_:
{
lean_object* v___x_5325_; 
if (v_isShared_5323_ == 0)
{
v___x_5325_ = v___x_5322_;
goto v_reusejp_5324_;
}
else
{
lean_object* v_reuseFailAlloc_5327_; 
v_reuseFailAlloc_5327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5327_, 0, v_a_5320_);
v___x_5325_ = v_reuseFailAlloc_5327_;
goto v_reusejp_5324_;
}
v_reusejp_5324_:
{
lean_object* v___x_5326_; 
v___x_5326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5326_, 0, v___x_5325_);
return v___x_5326_;
}
}
}
else
{
lean_object* v_a_5329_; size_t v_sz_5330_; size_t v___x_5331_; lean_object* v___x_292__overap_5332_; lean_object* v___x_5333_; 
v_a_5329_ = lean_ctor_get(v_x_5318_, 0);
lean_inc(v_a_5329_);
lean_dec_ref(v_x_5318_);
v_sz_5330_ = lean_array_size(v_a_5329_);
v___x_5331_ = ((size_t)0ULL);
v___x_292__overap_5332_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5316_, v___f_5317_, v_sz_5330_, v___x_5331_, v_a_5329_);
v___x_5333_ = lean_apply_1(v___x_292__overap_5332_, lean_box(0));
return v___x_5333_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__2___boxed(lean_object* v___x_5334_, lean_object* v___f_5335_, lean_object* v_x_5336_, lean_object* v___y_5337_){
_start:
{
lean_object* v_res_5338_; 
v_res_5338_ = l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__2(v___x_5334_, v___f_5335_, v_x_5336_);
return v_res_5338_;
}
}
static lean_object* _init_l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___closed__1(void){
_start:
{
lean_object* v___f_5340_; lean_object* v___x_5341_; lean_object* v___f_5342_; 
v___f_5340_ = ((lean_object*)(l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___closed__0));
v___x_5341_ = lean_obj_once(&l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0, &l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0_once, _init_l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0);
v___f_5342_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5342_, 0, v___x_5341_);
lean_closure_set(v___f_5342_, 1, v___f_5340_);
return v___f_5342_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg(lean_object* v_xs_5343_, lean_object* v_prio_5344_){
_start:
{
lean_object* v___f_5346_; lean_object* v___f_5347_; lean_object* v___x_5348_; size_t v_sz_5349_; size_t v___x_5350_; lean_object* v___x_219__overap_5351_; lean_object* v___x_5352_; lean_object* v___f_5353_; lean_object* v___x_5354_; uint8_t v___x_5355_; lean_object* v___x_5356_; 
v___f_5346_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5347_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5347_, 0, v_prio_5344_);
lean_closure_set(v___f_5347_, 1, v___f_5346_);
v___x_5348_ = lean_obj_once(&l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0, &l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0_once, _init_l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0);
v_sz_5349_ = lean_array_size(v_xs_5343_);
v___x_5350_ = ((size_t)0ULL);
v___x_219__overap_5351_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5348_, v___f_5347_, v_sz_5349_, v___x_5350_, v_xs_5343_);
v___x_5352_ = lean_apply_1(v___x_219__overap_5351_, lean_box(0));
v___f_5353_ = lean_obj_once(&l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___closed__1, &l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___closed__1);
v___x_5354_ = lean_unsigned_to_nat(0u);
v___x_5355_ = 0;
v___x_5356_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5354_, v___x_5355_, v___x_5352_, v___f_5353_);
return v___x_5356_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___boxed(lean_object* v_xs_5357_, lean_object* v_prio_5358_, lean_object* v_a_5359_){
_start:
{
lean_object* v_res_5360_; 
v_res_5360_ = l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg(v_xs_5357_, v_prio_5358_);
return v_res_5360_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll(lean_object* v_00_u03b1_5361_, lean_object* v_xs_5362_, lean_object* v_prio_5363_){
_start:
{
lean_object* v___f_5365_; lean_object* v___f_5366_; lean_object* v___x_5367_; size_t v_sz_5368_; size_t v___x_5369_; lean_object* v___x_241__overap_5370_; lean_object* v___x_5371_; lean_object* v___f_5372_; lean_object* v___x_5373_; uint8_t v___x_5374_; lean_object* v___x_5375_; 
v___f_5365_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5366_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5366_, 0, v_prio_5363_);
lean_closure_set(v___f_5366_, 1, v___f_5365_);
v___x_5367_ = lean_obj_once(&l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0, &l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0_once, _init_l_Std_Internal_IO_Async_EAsync_concurrentlyAll___redArg___closed__0);
v_sz_5368_ = lean_array_size(v_xs_5362_);
v___x_5369_ = ((size_t)0ULL);
v___x_241__overap_5370_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5367_, v___f_5366_, v_sz_5368_, v___x_5369_, v_xs_5362_);
v___x_5371_ = lean_apply_1(v___x_241__overap_5370_, lean_box(0));
v___f_5372_ = lean_obj_once(&l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___closed__1, &l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Internal_IO_Async_Async_concurrentlyAll___redArg___closed__1);
v___x_5373_ = lean_unsigned_to_nat(0u);
v___x_5374_ = 0;
v___x_5375_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5373_, v___x_5374_, v___x_5371_, v___f_5372_);
return v___x_5375_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_concurrentlyAll___boxed(lean_object* v_00_u03b1_5376_, lean_object* v_xs_5377_, lean_object* v_prio_5378_, lean_object* v_a_5379_){
_start:
{
lean_object* v_res_5380_; 
v_res_5380_ = l_Std_Internal_IO_Async_Async_concurrentlyAll(v_00_u03b1_5376_, v_xs_5377_, v_prio_5378_);
return v_res_5380_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__4(lean_object* v___f_5381_, lean_object* v___f_5382_, lean_object* v_x_5383_){
_start:
{
if (lean_obj_tag(v_x_5383_) == 0)
{
lean_object* v_a_5385_; lean_object* v___x_5387_; uint8_t v_isShared_5388_; uint8_t v_isSharedCheck_5393_; 
lean_dec_ref(v___f_5382_);
lean_dec(v___f_5381_);
v_a_5385_ = lean_ctor_get(v_x_5383_, 0);
v_isSharedCheck_5393_ = !lean_is_exclusive(v_x_5383_);
if (v_isSharedCheck_5393_ == 0)
{
v___x_5387_ = v_x_5383_;
v_isShared_5388_ = v_isSharedCheck_5393_;
goto v_resetjp_5386_;
}
else
{
lean_inc(v_a_5385_);
lean_dec(v_x_5383_);
v___x_5387_ = lean_box(0);
v_isShared_5388_ = v_isSharedCheck_5393_;
goto v_resetjp_5386_;
}
v_resetjp_5386_:
{
lean_object* v___x_5390_; 
if (v_isShared_5388_ == 0)
{
v___x_5390_ = v___x_5387_;
goto v_reusejp_5389_;
}
else
{
lean_object* v_reuseFailAlloc_5392_; 
v_reuseFailAlloc_5392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5392_, 0, v_a_5385_);
v___x_5390_ = v_reuseFailAlloc_5392_;
goto v_reusejp_5389_;
}
v_reusejp_5389_:
{
lean_object* v___x_5391_; 
v___x_5391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5391_, 0, v___x_5390_);
return v___x_5391_;
}
}
}
else
{
lean_object* v_a_5394_; lean_object* v___x_5396_; uint8_t v_isShared_5397_; uint8_t v_isSharedCheck_5407_; 
v_a_5394_ = lean_ctor_get(v_x_5383_, 0);
v_isSharedCheck_5407_ = !lean_is_exclusive(v_x_5383_);
if (v_isSharedCheck_5407_ == 0)
{
v___x_5396_ = v_x_5383_;
v_isShared_5397_ = v_isSharedCheck_5407_;
goto v_resetjp_5395_;
}
else
{
lean_inc(v_a_5394_);
lean_dec(v_x_5383_);
v___x_5396_ = lean_box(0);
v_isShared_5397_ = v_isSharedCheck_5407_;
goto v_resetjp_5395_;
}
v_resetjp_5395_:
{
lean_object* v___x_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; uint8_t v___x_5401_; lean_object* v___x_5402_; lean_object* v___x_5404_; 
v___x_5398_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_5398_, 0, lean_box(0));
lean_closure_set(v___x_5398_, 1, lean_box(0));
lean_closure_set(v___x_5398_, 2, v___f_5381_);
lean_closure_set(v___x_5398_, 3, lean_box(0));
v___x_5399_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_5399_, 0, lean_box(0));
lean_closure_set(v___x_5399_, 1, lean_box(0));
lean_closure_set(v___x_5399_, 2, lean_box(0));
lean_closure_set(v___x_5399_, 3, v___x_5398_);
lean_closure_set(v___x_5399_, 4, v___f_5382_);
v___x_5400_ = lean_unsigned_to_nat(0u);
v___x_5401_ = 0;
v___x_5402_ = l_BaseIO_chainTask___redArg(v_a_5394_, v___x_5399_, v___x_5400_, v___x_5401_);
if (v_isShared_5397_ == 0)
{
lean_ctor_set(v___x_5396_, 0, v___x_5402_);
v___x_5404_ = v___x_5396_;
goto v_reusejp_5403_;
}
else
{
lean_object* v_reuseFailAlloc_5406_; 
v_reuseFailAlloc_5406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5406_, 0, v___x_5402_);
v___x_5404_ = v_reuseFailAlloc_5406_;
goto v_reusejp_5403_;
}
v_reusejp_5403_:
{
lean_object* v___x_5405_; 
v___x_5405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5405_, 0, v___x_5404_);
return v___x_5405_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__4___boxed(lean_object* v___f_5408_, lean_object* v___f_5409_, lean_object* v_x_5410_, lean_object* v___y_5411_){
_start:
{
lean_object* v_res_5412_; 
v_res_5412_ = l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__4(v___f_5408_, v___f_5409_, v_x_5410_);
return v_res_5412_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__0(lean_object* v_prio_5413_, lean_object* v___f_5414_, lean_object* v___f_5415_, lean_object* v_x_5416_){
_start:
{
lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; uint8_t v___x_5421_; lean_object* v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; uint8_t v___x_5425_; lean_object* v___x_5426_; 
v___x_5418_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5418_, 0, lean_box(0));
lean_closure_set(v___x_5418_, 1, v_x_5416_);
v___x_5419_ = lean_io_as_task(v___x_5418_, v_prio_5413_);
v___x_5420_ = lean_unsigned_to_nat(0u);
v___x_5421_ = 1;
v___x_5422_ = lean_task_bind(v___x_5419_, v___f_5414_, v___x_5420_, v___x_5421_);
v___x_5423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5423_, 0, v___x_5422_);
v___x_5424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5424_, 0, v___x_5423_);
v___x_5425_ = 0;
v___x_5426_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5420_, v___x_5425_, v___x_5424_, v___f_5415_);
return v___x_5426_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__0___boxed(lean_object* v_prio_5427_, lean_object* v___f_5428_, lean_object* v___f_5429_, lean_object* v_x_5430_, lean_object* v___y_5431_){
_start:
{
lean_object* v_res_5432_; 
v_res_5432_ = l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__0(v_prio_5427_, v___f_5428_, v___f_5429_, v_x_5430_);
return v_res_5432_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__2(lean_object* v___f_5433_, lean_object* v_prio_5434_, lean_object* v___f_5435_, lean_object* v_inst_5436_, lean_object* v_xs_5437_, lean_object* v___f_5438_, lean_object* v___f_5439_, lean_object* v_x_5440_){
_start:
{
if (lean_obj_tag(v_x_5440_) == 0)
{
lean_object* v_a_5442_; lean_object* v___x_5444_; uint8_t v_isShared_5445_; uint8_t v_isSharedCheck_5450_; 
lean_dec_ref(v___f_5439_);
lean_dec_ref(v___f_5438_);
lean_dec(v_xs_5437_);
lean_dec_ref(v_inst_5436_);
lean_dec_ref(v___f_5435_);
lean_dec(v_prio_5434_);
lean_dec(v___f_5433_);
v_a_5442_ = lean_ctor_get(v_x_5440_, 0);
v_isSharedCheck_5450_ = !lean_is_exclusive(v_x_5440_);
if (v_isSharedCheck_5450_ == 0)
{
v___x_5444_ = v_x_5440_;
v_isShared_5445_ = v_isSharedCheck_5450_;
goto v_resetjp_5443_;
}
else
{
lean_inc(v_a_5442_);
lean_dec(v_x_5440_);
v___x_5444_ = lean_box(0);
v_isShared_5445_ = v_isSharedCheck_5450_;
goto v_resetjp_5443_;
}
v_resetjp_5443_:
{
lean_object* v___x_5447_; 
if (v_isShared_5445_ == 0)
{
v___x_5447_ = v___x_5444_;
goto v_reusejp_5446_;
}
else
{
lean_object* v_reuseFailAlloc_5449_; 
v_reuseFailAlloc_5449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5449_, 0, v_a_5442_);
v___x_5447_ = v_reuseFailAlloc_5449_;
goto v_reusejp_5446_;
}
v_reusejp_5446_:
{
lean_object* v___x_5448_; 
v___x_5448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5448_, 0, v___x_5447_);
return v___x_5448_;
}
}
}
else
{
lean_object* v_a_5451_; lean_object* v___f_5452_; lean_object* v___f_5453_; lean_object* v___f_5454_; lean_object* v___x_5455_; lean_object* v___f_5456_; lean_object* v___x_5457_; uint8_t v___x_5458_; lean_object* v___x_5459_; 
v_a_5451_ = lean_ctor_get(v_x_5440_, 0);
lean_inc(v_a_5451_);
lean_dec_ref(v_x_5440_);
lean_inc(v_a_5451_);
v___f_5452_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5452_, 0, v_a_5451_);
v___f_5453_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_5453_, 0, v___f_5433_);
lean_closure_set(v___f_5453_, 1, v___f_5452_);
v___f_5454_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_5454_, 0, v_prio_5434_);
lean_closure_set(v___f_5454_, 1, v___f_5435_);
lean_closure_set(v___f_5454_, 2, v___f_5453_);
v___x_5455_ = lean_apply_3(v_inst_5436_, v_xs_5437_, v___f_5454_, lean_box(0));
v___f_5456_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_5456_, 0, v_a_5451_);
lean_closure_set(v___f_5456_, 1, v___f_5438_);
lean_closure_set(v___f_5456_, 2, v___f_5439_);
v___x_5457_ = lean_unsigned_to_nat(0u);
v___x_5458_ = 0;
v___x_5459_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5457_, v___x_5458_, v___x_5455_, v___f_5456_);
return v___x_5459_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__2___boxed(lean_object* v___f_5460_, lean_object* v_prio_5461_, lean_object* v___f_5462_, lean_object* v_inst_5463_, lean_object* v_xs_5464_, lean_object* v___f_5465_, lean_object* v___f_5466_, lean_object* v_x_5467_, lean_object* v___y_5468_){
_start:
{
lean_object* v_res_5469_; 
v_res_5469_ = l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__2(v___f_5460_, v_prio_5461_, v___f_5462_, v_inst_5463_, v_xs_5464_, v___f_5465_, v___f_5466_, v_x_5467_);
return v_res_5469_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg(lean_object* v_inst_5470_, lean_object* v_xs_5471_, lean_object* v_prio_5472_){
_start:
{
lean_object* v___x_5474_; lean_object* v___f_5475_; lean_object* v___f_5476_; lean_object* v___f_5477_; lean_object* v___f_5478_; lean_object* v___f_5479_; lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; uint8_t v___x_5483_; lean_object* v___x_5484_; 
v___x_5474_ = lean_io_promise_new();
v___f_5475_ = ((lean_object*)(l_Std_Internal_IO_Async_Async_race___redArg___closed__1));
v___f_5476_ = ((lean_object*)(l_Std_Internal_IO_Async_Async_race___redArg___closed__0));
v___f_5477_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5478_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0));
v___f_5479_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_5479_, 0, v___f_5478_);
lean_closure_set(v___f_5479_, 1, v_prio_5472_);
lean_closure_set(v___f_5479_, 2, v___f_5477_);
lean_closure_set(v___f_5479_, 3, v_inst_5470_);
lean_closure_set(v___f_5479_, 4, v_xs_5471_);
lean_closure_set(v___f_5479_, 5, v___f_5475_);
lean_closure_set(v___f_5479_, 6, v___f_5476_);
v___x_5480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5480_, 0, v___x_5474_);
v___x_5481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5481_, 0, v___x_5480_);
v___x_5482_ = lean_unsigned_to_nat(0u);
v___x_5483_ = 0;
v___x_5484_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5482_, v___x_5483_, v___x_5481_, v___f_5479_);
return v___x_5484_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___redArg___boxed(lean_object* v_inst_5485_, lean_object* v_xs_5486_, lean_object* v_prio_5487_, lean_object* v_a_5488_){
_start:
{
lean_object* v_res_5489_; 
v_res_5489_ = l_Std_Internal_IO_Async_Async_raceAll___redArg(v_inst_5485_, v_xs_5486_, v_prio_5487_);
return v_res_5489_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll(lean_object* v_c_5490_, lean_object* v_00_u03b1_5491_, lean_object* v_inst_5492_, lean_object* v_xs_5493_, lean_object* v_prio_5494_){
_start:
{
lean_object* v___x_5496_; lean_object* v___f_5497_; lean_object* v___f_5498_; lean_object* v___f_5499_; lean_object* v___f_5500_; lean_object* v___f_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; uint8_t v___x_5505_; lean_object* v___x_5506_; 
v___x_5496_ = lean_io_promise_new();
v___f_5497_ = ((lean_object*)(l_Std_Internal_IO_Async_Async_race___redArg___closed__1));
v___f_5498_ = ((lean_object*)(l_Std_Internal_IO_Async_Async_race___redArg___closed__0));
v___f_5499_ = ((lean_object*)(l_Std_Internal_IO_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5500_ = ((lean_object*)(l_Std_Internal_IO_Async_BaseAsync_race___redArg___closed__0));
v___f_5501_ = lean_alloc_closure((void*)(l_Std_Internal_IO_Async_Async_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_5501_, 0, v___f_5500_);
lean_closure_set(v___f_5501_, 1, v_prio_5494_);
lean_closure_set(v___f_5501_, 2, v___f_5499_);
lean_closure_set(v___f_5501_, 3, v_inst_5492_);
lean_closure_set(v___f_5501_, 4, v_xs_5493_);
lean_closure_set(v___f_5501_, 5, v___f_5497_);
lean_closure_set(v___f_5501_, 6, v___f_5498_);
v___x_5502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5502_, 0, v___x_5496_);
v___x_5503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5503_, 0, v___x_5502_);
v___x_5504_ = lean_unsigned_to_nat(0u);
v___x_5505_ = 0;
v___x_5506_ = l___private_Std_Internal_Async_Basic_0__Std_Internal_IO_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5504_, v___x_5505_, v___x_5503_, v___f_5501_);
return v___x_5506_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_Async_raceAll___boxed(lean_object* v_c_5507_, lean_object* v_00_u03b1_5508_, lean_object* v_inst_5509_, lean_object* v_xs_5510_, lean_object* v_prio_5511_, lean_object* v_a_5512_){
_start:
{
lean_object* v_res_5513_; 
v_res_5513_ = l_Std_Internal_IO_Async_Async_raceAll(v_c_5507_, v_00_u03b1_5508_, v_inst_5509_, v_xs_5510_, v_prio_5511_);
return v_res_5513_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_background___redArg(lean_object* v_inst_5514_, lean_object* v_inst_5515_, lean_object* v_action_5516_, lean_object* v_prio_5517_){
_start:
{
lean_object* v_toApplicative_5518_; lean_object* v_toFunctor_5519_; lean_object* v_mapConst_5520_; lean_object* v___x_5521_; lean_object* v___x_5522_; lean_object* v___x_5523_; 
v_toApplicative_5518_ = lean_ctor_get(v_inst_5514_, 0);
lean_inc_ref(v_toApplicative_5518_);
lean_dec_ref(v_inst_5514_);
v_toFunctor_5519_ = lean_ctor_get(v_toApplicative_5518_, 0);
lean_inc_ref(v_toFunctor_5519_);
lean_dec_ref(v_toApplicative_5518_);
v_mapConst_5520_ = lean_ctor_get(v_toFunctor_5519_, 1);
lean_inc(v_mapConst_5520_);
lean_dec_ref(v_toFunctor_5519_);
v___x_5521_ = lean_apply_3(v_inst_5515_, lean_box(0), v_action_5516_, v_prio_5517_);
v___x_5522_ = lean_box(0);
v___x_5523_ = lean_apply_4(v_mapConst_5520_, lean_box(0), lean_box(0), v___x_5522_, v___x_5521_);
return v___x_5523_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IO_Async_background(lean_object* v_m_5524_, lean_object* v_t_5525_, lean_object* v_00_u03b1_5526_, lean_object* v_inst_5527_, lean_object* v_inst_5528_, lean_object* v_action_5529_, lean_object* v_prio_5530_){
_start:
{
lean_object* v_toApplicative_5531_; lean_object* v_toFunctor_5532_; lean_object* v_mapConst_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; lean_object* v___x_5536_; 
v_toApplicative_5531_ = lean_ctor_get(v_inst_5527_, 0);
lean_inc_ref(v_toApplicative_5531_);
lean_dec_ref(v_inst_5527_);
v_toFunctor_5532_ = lean_ctor_get(v_toApplicative_5531_, 0);
lean_inc_ref(v_toFunctor_5532_);
lean_dec_ref(v_toApplicative_5531_);
v_mapConst_5533_ = lean_ctor_get(v_toFunctor_5532_, 1);
lean_inc(v_mapConst_5533_);
lean_dec_ref(v_toFunctor_5532_);
v___x_5534_ = lean_apply_3(v_inst_5528_, lean_box(0), v_action_5529_, v_prio_5530_);
v___x_5535_ = lean_box(0);
v___x_5536_ = lean_apply_4(v_mapConst_5533_, lean_box(0), lean_box(0), v___x_5535_, v___x_5534_);
return v___x_5536_;
}
}
lean_object* runtime_initialize_Init_System_Promise(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Internal_Async_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_System_Promise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Internal_IO_Async_Async_instMonadAwaitPromise = _init_l_Std_Internal_IO_Async_Async_instMonadAwaitPromise();
lean_mark_persistent(l_Std_Internal_IO_Async_Async_instMonadAwaitPromise);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Internal_Async_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_Promise(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Internal_Async_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_Promise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Async_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Internal_Async_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Internal_Async_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
