// Lean compiler output
// Module: Lean.Util.MonadCache
// Imports: public import Std.Data.HashMap.Basic
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
lean_object* l_StateRefT_x27_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_get(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__0 = (const lean_object*)&l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__0_value;
static const lean_closure_object l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__1 = (const lean_object*)&l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_cache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_cache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_cache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_instMonadCacheOfMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_instMonadCacheOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__3(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MonadCacheT_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadCacheT_run___redArg___closed__0;
static lean_once_cell_t l_Lean_MonadCacheT_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadCacheT_run___redArg___closed__1;
static lean_once_cell_t l_Lean_MonadCacheT_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadCacheT_run___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_MonadStateCacheT_run___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MonadStateCacheT_run___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MonadStateCacheT_run___redArg___closed__0 = (const lean_object*)&l_Lean_MonadStateCacheT_run___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_b_2_, lean_object* v_____r_3_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_apply_2(v_toPure_1_, lean_box(0), v_b_2_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg___lam__1(lean_object* v_toPure_5_, lean_object* v_cache_6_, lean_object* v_a_7_, lean_object* v_toBind_8_, lean_object* v_b_9_){
_start:
{
lean_object* v___f_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
lean_inc(v_b_9_);
v___f_10_ = lean_alloc_closure((void*)(l_Lean_checkCache___redArg___lam__0), 3, 2);
lean_closure_set(v___f_10_, 0, v_toPure_5_);
lean_closure_set(v___f_10_, 1, v_b_9_);
v___x_11_ = lean_apply_2(v_cache_6_, v_a_7_, v_b_9_);
v___x_12_ = lean_apply_4(v_toBind_8_, lean_box(0), lean_box(0), v___x_11_, v___f_10_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg___lam__2(lean_object* v_f_13_, lean_object* v_toBind_14_, lean_object* v___f_15_, lean_object* v_toPure_16_, lean_object* v_____do__lift_17_){
_start:
{
if (lean_obj_tag(v_____do__lift_17_) == 0)
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
lean_dec(v_toPure_16_);
v___x_18_ = lean_box(0);
v___x_19_ = lean_apply_1(v_f_13_, v___x_18_);
v___x_20_ = lean_apply_4(v_toBind_14_, lean_box(0), lean_box(0), v___x_19_, v___f_15_);
return v___x_20_;
}
else
{
lean_object* v_val_21_; lean_object* v___x_22_; 
lean_dec(v___f_15_);
lean_dec(v_toBind_14_);
lean_dec(v_f_13_);
v_val_21_ = lean_ctor_get(v_____do__lift_17_, 0);
lean_inc(v_val_21_);
lean_dec_ref(v_____do__lift_17_);
v___x_22_ = lean_apply_2(v_toPure_16_, lean_box(0), v_val_21_);
return v___x_22_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg(lean_object* v_inst_23_, lean_object* v_inst_24_, lean_object* v_a_25_, lean_object* v_f_26_){
_start:
{
lean_object* v_toApplicative_27_; lean_object* v_toBind_28_; lean_object* v_findCached_x3f_29_; lean_object* v_cache_30_; lean_object* v_toPure_31_; lean_object* v___x_32_; lean_object* v___f_33_; lean_object* v___f_34_; lean_object* v___x_35_; 
v_toApplicative_27_ = lean_ctor_get(v_inst_24_, 0);
lean_inc_ref(v_toApplicative_27_);
v_toBind_28_ = lean_ctor_get(v_inst_24_, 1);
lean_inc(v_toBind_28_);
lean_dec_ref(v_inst_24_);
v_findCached_x3f_29_ = lean_ctor_get(v_inst_23_, 0);
lean_inc(v_findCached_x3f_29_);
v_cache_30_ = lean_ctor_get(v_inst_23_, 1);
lean_inc(v_cache_30_);
lean_dec_ref(v_inst_23_);
v_toPure_31_ = lean_ctor_get(v_toApplicative_27_, 1);
lean_inc(v_toPure_31_);
lean_dec_ref(v_toApplicative_27_);
lean_inc(v_a_25_);
v___x_32_ = lean_apply_1(v_findCached_x3f_29_, v_a_25_);
lean_inc(v_toBind_28_);
lean_inc(v_toPure_31_);
v___f_33_ = lean_alloc_closure((void*)(l_Lean_checkCache___redArg___lam__1), 5, 4);
lean_closure_set(v___f_33_, 0, v_toPure_31_);
lean_closure_set(v___f_33_, 1, v_cache_30_);
lean_closure_set(v___f_33_, 2, v_a_25_);
lean_closure_set(v___f_33_, 3, v_toBind_28_);
lean_inc(v_toBind_28_);
v___f_34_ = lean_alloc_closure((void*)(l_Lean_checkCache___redArg___lam__2), 5, 4);
lean_closure_set(v___f_34_, 0, v_f_26_);
lean_closure_set(v___f_34_, 1, v_toBind_28_);
lean_closure_set(v___f_34_, 2, v___f_33_);
lean_closure_set(v___f_34_, 3, v_toPure_31_);
v___x_35_ = lean_apply_4(v_toBind_28_, lean_box(0), lean_box(0), v___x_32_, v___f_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkCache(lean_object* v_00_u03b1_36_, lean_object* v_00_u03b2_37_, lean_object* v_m_38_, lean_object* v_inst_39_, lean_object* v_inst_40_, lean_object* v_a_41_, lean_object* v_f_42_){
_start:
{
lean_object* v_toApplicative_43_; lean_object* v_toBind_44_; lean_object* v_findCached_x3f_45_; lean_object* v_cache_46_; lean_object* v_toPure_47_; lean_object* v___x_48_; lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___x_51_; 
v_toApplicative_43_ = lean_ctor_get(v_inst_40_, 0);
lean_inc_ref(v_toApplicative_43_);
v_toBind_44_ = lean_ctor_get(v_inst_40_, 1);
lean_inc(v_toBind_44_);
lean_dec_ref(v_inst_40_);
v_findCached_x3f_45_ = lean_ctor_get(v_inst_39_, 0);
lean_inc(v_findCached_x3f_45_);
v_cache_46_ = lean_ctor_get(v_inst_39_, 1);
lean_inc(v_cache_46_);
lean_dec_ref(v_inst_39_);
v_toPure_47_ = lean_ctor_get(v_toApplicative_43_, 1);
lean_inc(v_toPure_47_);
lean_dec_ref(v_toApplicative_43_);
lean_inc(v_a_41_);
v___x_48_ = lean_apply_1(v_findCached_x3f_45_, v_a_41_);
lean_inc(v_toBind_44_);
lean_inc(v_toPure_47_);
v___f_49_ = lean_alloc_closure((void*)(l_Lean_checkCache___redArg___lam__1), 5, 4);
lean_closure_set(v___f_49_, 0, v_toPure_47_);
lean_closure_set(v___f_49_, 1, v_cache_46_);
lean_closure_set(v___f_49_, 2, v_a_41_);
lean_closure_set(v___f_49_, 3, v_toBind_44_);
lean_inc(v_toBind_44_);
v___f_50_ = lean_alloc_closure((void*)(l_Lean_checkCache___redArg___lam__2), 5, 4);
lean_closure_set(v___f_50_, 0, v_f_42_);
lean_closure_set(v___f_50_, 1, v_toBind_44_);
lean_closure_set(v___f_50_, 2, v___f_49_);
lean_closure_set(v___f_50_, 3, v_toPure_47_);
v___x_51_ = lean_apply_4(v_toBind_44_, lean_box(0), lean_box(0), v___x_48_, v___f_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__0(lean_object* v_inst_52_, lean_object* v_a_53_, lean_object* v_x_54_){
_start:
{
lean_object* v_findCached_x3f_55_; lean_object* v___x_56_; 
v_findCached_x3f_55_ = lean_ctor_get(v_inst_52_, 0);
lean_inc(v_findCached_x3f_55_);
lean_dec_ref(v_inst_52_);
v___x_56_ = lean_apply_1(v_findCached_x3f_55_, v_a_53_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__0___boxed(lean_object* v_inst_57_, lean_object* v_a_58_, lean_object* v_x_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lean_instMonadCacheReaderT___redArg___lam__0(v_inst_57_, v_a_58_, v_x_59_);
lean_dec(v_x_59_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__1(lean_object* v_inst_61_, lean_object* v_a_62_, lean_object* v_b_63_, lean_object* v_x_64_){
_start:
{
lean_object* v_cache_65_; lean_object* v___x_66_; 
v_cache_65_ = lean_ctor_get(v_inst_61_, 1);
lean_inc(v_cache_65_);
lean_dec_ref(v_inst_61_);
v___x_66_ = lean_apply_2(v_cache_65_, v_a_62_, v_b_63_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__1___boxed(lean_object* v_inst_67_, lean_object* v_a_68_, lean_object* v_b_69_, lean_object* v_x_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lean_instMonadCacheReaderT___redArg___lam__1(v_inst_67_, v_a_68_, v_b_69_, v_x_70_);
lean_dec(v_x_70_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg(lean_object* v_inst_72_){
_start:
{
lean_object* v___f_73_; lean_object* v___f_74_; lean_object* v___x_75_; 
lean_inc_ref(v_inst_72_);
v___f_73_ = lean_alloc_closure((void*)(l_Lean_instMonadCacheReaderT___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_73_, 0, v_inst_72_);
v___f_74_ = lean_alloc_closure((void*)(l_Lean_instMonadCacheReaderT___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_74_, 0, v_inst_72_);
v___x_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_75_, 0, v___f_73_);
lean_ctor_set(v___x_75_, 1, v___f_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT(lean_object* v_00_u03b1_76_, lean_object* v_00_u03b2_77_, lean_object* v_00_u03c1_78_, lean_object* v_m_79_, lean_object* v_inst_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l_Lean_instMonadCacheReaderT___redArg(v_inst_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__0(lean_object* v_a_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_83_, 0, v_a_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__1(lean_object* v_inst_84_, lean_object* v_inst_85_, lean_object* v___f_86_, lean_object* v_a_87_){
_start:
{
lean_object* v_toApplicative_88_; lean_object* v_toFunctor_89_; lean_object* v_findCached_x3f_90_; lean_object* v_map_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v_toApplicative_88_ = lean_ctor_get(v_inst_85_, 0);
lean_inc_ref(v_toApplicative_88_);
lean_dec_ref(v_inst_85_);
v_toFunctor_89_ = lean_ctor_get(v_toApplicative_88_, 0);
lean_inc_ref(v_toFunctor_89_);
lean_dec_ref(v_toApplicative_88_);
v_findCached_x3f_90_ = lean_ctor_get(v_inst_84_, 0);
lean_inc(v_findCached_x3f_90_);
lean_dec_ref(v_inst_84_);
v_map_91_ = lean_ctor_get(v_toFunctor_89_, 0);
lean_inc(v_map_91_);
lean_dec_ref(v_toFunctor_89_);
v___x_92_ = lean_apply_1(v_findCached_x3f_90_, v_a_87_);
v___x_93_ = lean_apply_4(v_map_91_, lean_box(0), lean_box(0), v___f_86_, v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__2(lean_object* v_a_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_95_, 0, v_a_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__3(lean_object* v_inst_96_, lean_object* v_inst_97_, lean_object* v___f_98_, lean_object* v_a_99_, lean_object* v_b_100_){
_start:
{
lean_object* v_toApplicative_101_; lean_object* v_toFunctor_102_; lean_object* v_cache_103_; lean_object* v_map_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v_toApplicative_101_ = lean_ctor_get(v_inst_97_, 0);
lean_inc_ref(v_toApplicative_101_);
lean_dec_ref(v_inst_97_);
v_toFunctor_102_ = lean_ctor_get(v_toApplicative_101_, 0);
lean_inc_ref(v_toFunctor_102_);
lean_dec_ref(v_toApplicative_101_);
v_cache_103_ = lean_ctor_get(v_inst_96_, 1);
lean_inc(v_cache_103_);
lean_dec_ref(v_inst_96_);
v_map_104_ = lean_ctor_get(v_toFunctor_102_, 0);
lean_inc(v_map_104_);
lean_dec_ref(v_toFunctor_102_);
v___x_105_ = lean_apply_2(v_cache_103_, v_a_99_, v_b_100_);
v___x_106_ = lean_apply_4(v_map_104_, lean_box(0), lean_box(0), v___f_98_, v___x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg(lean_object* v_inst_109_, lean_object* v_inst_110_){
_start:
{
lean_object* v___f_111_; lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___f_114_; lean_object* v___x_115_; 
v___f_111_ = ((lean_object*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__0));
lean_inc_ref(v_inst_110_);
lean_inc_ref(v_inst_109_);
v___f_112_ = lean_alloc_closure((void*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__1), 4, 3);
lean_closure_set(v___f_112_, 0, v_inst_109_);
lean_closure_set(v___f_112_, 1, v_inst_110_);
lean_closure_set(v___f_112_, 2, v___f_111_);
v___f_113_ = ((lean_object*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__1));
v___f_114_ = lean_alloc_closure((void*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__3), 5, 3);
lean_closure_set(v___f_114_, 0, v_inst_109_);
lean_closure_set(v___f_114_, 1, v_inst_110_);
lean_closure_set(v___f_114_, 2, v___f_113_);
v___x_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_115_, 0, v___f_112_);
lean_ctor_set(v___x_115_, 1, v___f_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad(lean_object* v_00_u03b1_116_, lean_object* v_00_u03b2_117_, lean_object* v_00_u03b5_118_, lean_object* v_m_119_, lean_object* v_inst_120_, lean_object* v_inst_121_){
_start:
{
lean_object* v___f_122_; lean_object* v___f_123_; lean_object* v___f_124_; lean_object* v___f_125_; lean_object* v___x_126_; 
v___f_122_ = ((lean_object*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__0));
lean_inc_ref(v_inst_121_);
lean_inc_ref(v_inst_120_);
v___f_123_ = lean_alloc_closure((void*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__1), 4, 3);
lean_closure_set(v___f_123_, 0, v_inst_120_);
lean_closure_set(v___f_123_, 1, v_inst_121_);
lean_closure_set(v___f_123_, 2, v___f_122_);
v___f_124_ = ((lean_object*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__1));
v___f_125_ = lean_alloc_closure((void*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__3), 5, 3);
lean_closure_set(v___f_125_, 0, v_inst_120_);
lean_closure_set(v___f_125_, 1, v_inst_121_);
lean_closure_set(v___f_125_, 2, v___f_124_);
v___x_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_126_, 0, v___f_123_);
lean_ctor_set(v___x_126_, 1, v___f_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0(lean_object* v_inst_127_, lean_object* v_inst_128_, lean_object* v_a_129_, lean_object* v_toPure_130_, lean_object* v_c_131_){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_127_, v_inst_128_, v_c_131_, v_a_129_);
v___x_133_ = lean_apply_2(v_toPure_130_, lean_box(0), v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0___boxed(lean_object* v_inst_134_, lean_object* v_inst_135_, lean_object* v_a_136_, lean_object* v_toPure_137_, lean_object* v_c_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0(v_inst_134_, v_inst_135_, v_a_136_, v_toPure_137_, v_c_138_);
lean_dec_ref(v_c_138_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg(lean_object* v_inst_140_, lean_object* v_inst_141_, lean_object* v_inst_142_, lean_object* v_inst_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_toApplicative_145_; lean_object* v_toBind_146_; lean_object* v_getCache_147_; lean_object* v_toPure_148_; lean_object* v___f_149_; lean_object* v___x_150_; 
v_toApplicative_145_ = lean_ctor_get(v_inst_142_, 0);
lean_inc_ref(v_toApplicative_145_);
v_toBind_146_ = lean_ctor_get(v_inst_142_, 1);
lean_inc(v_toBind_146_);
lean_dec_ref(v_inst_142_);
v_getCache_147_ = lean_ctor_get(v_inst_143_, 0);
lean_inc(v_getCache_147_);
lean_dec_ref(v_inst_143_);
v_toPure_148_ = lean_ctor_get(v_toApplicative_145_, 1);
lean_inc(v_toPure_148_);
lean_dec_ref(v_toApplicative_145_);
v___f_149_ = lean_alloc_closure((void*)(l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_149_, 0, v_inst_140_);
lean_closure_set(v___f_149_, 1, v_inst_141_);
lean_closure_set(v___f_149_, 2, v_a_144_);
lean_closure_set(v___f_149_, 3, v_toPure_148_);
v___x_150_ = lean_apply_4(v_toBind_146_, lean_box(0), lean_box(0), v_getCache_147_, v___f_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f(lean_object* v_00_u03b1_151_, lean_object* v_00_u03b2_152_, lean_object* v_m_153_, lean_object* v_inst_154_, lean_object* v_inst_155_, lean_object* v_inst_156_, lean_object* v_inst_157_, lean_object* v_a_158_){
_start:
{
lean_object* v_toApplicative_159_; lean_object* v_toBind_160_; lean_object* v_getCache_161_; lean_object* v_toPure_162_; lean_object* v___f_163_; lean_object* v___x_164_; 
v_toApplicative_159_ = lean_ctor_get(v_inst_156_, 0);
lean_inc_ref(v_toApplicative_159_);
v_toBind_160_ = lean_ctor_get(v_inst_156_, 1);
lean_inc(v_toBind_160_);
lean_dec_ref(v_inst_156_);
v_getCache_161_ = lean_ctor_get(v_inst_157_, 0);
lean_inc(v_getCache_161_);
lean_dec_ref(v_inst_157_);
v_toPure_162_ = lean_ctor_get(v_toApplicative_159_, 1);
lean_inc(v_toPure_162_);
lean_dec_ref(v_toApplicative_159_);
v___f_163_ = lean_alloc_closure((void*)(l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_163_, 0, v_inst_154_);
lean_closure_set(v___f_163_, 1, v_inst_155_);
lean_closure_set(v___f_163_, 2, v_a_158_);
lean_closure_set(v___f_163_, 3, v_toPure_162_);
v___x_164_ = lean_apply_4(v_toBind_160_, lean_box(0), lean_box(0), v_getCache_161_, v___f_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_cache___redArg___lam__0(lean_object* v_inst_165_, lean_object* v_inst_166_, lean_object* v_a_167_, lean_object* v_b_168_, lean_object* v_s_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_165_, v_inst_166_, v_s_169_, v_a_167_, v_b_168_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_cache___redArg(lean_object* v_inst_171_, lean_object* v_inst_172_, lean_object* v_inst_173_, lean_object* v_a_174_, lean_object* v_b_175_){
_start:
{
lean_object* v_modifyCache_176_; lean_object* v___f_177_; lean_object* v___x_178_; 
v_modifyCache_176_ = lean_ctor_get(v_inst_173_, 1);
lean_inc(v_modifyCache_176_);
lean_dec_ref(v_inst_173_);
v___f_177_ = lean_alloc_closure((void*)(l_Lean_MonadHashMapCacheAdapter_cache___redArg___lam__0), 5, 4);
lean_closure_set(v___f_177_, 0, v_inst_171_);
lean_closure_set(v___f_177_, 1, v_inst_172_);
lean_closure_set(v___f_177_, 2, v_a_174_);
lean_closure_set(v___f_177_, 3, v_b_175_);
v___x_178_ = lean_apply_1(v_modifyCache_176_, v___f_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_cache(lean_object* v_00_u03b1_179_, lean_object* v_00_u03b2_180_, lean_object* v_m_181_, lean_object* v_inst_182_, lean_object* v_inst_183_, lean_object* v_inst_184_, lean_object* v_a_185_, lean_object* v_b_186_){
_start:
{
lean_object* v_modifyCache_187_; lean_object* v___f_188_; lean_object* v___x_189_; 
v_modifyCache_187_ = lean_ctor_get(v_inst_184_, 1);
lean_inc(v_modifyCache_187_);
lean_dec_ref(v_inst_184_);
v___f_188_ = lean_alloc_closure((void*)(l_Lean_MonadHashMapCacheAdapter_cache___redArg___lam__0), 5, 4);
lean_closure_set(v___f_188_, 0, v_inst_182_);
lean_closure_set(v___f_188_, 1, v_inst_183_);
lean_closure_set(v___f_188_, 2, v_a_185_);
lean_closure_set(v___f_188_, 3, v_b_186_);
v___x_189_ = lean_apply_1(v_modifyCache_187_, v___f_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_instMonadCacheOfMonad___redArg(lean_object* v_inst_190_, lean_object* v_inst_191_, lean_object* v_inst_192_, lean_object* v_inst_193_){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
lean_inc_ref(v_inst_193_);
lean_inc_ref(v_inst_191_);
lean_inc_ref(v_inst_190_);
v___x_194_ = lean_alloc_closure((void*)(l_Lean_MonadHashMapCacheAdapter_findCached_x3f), 8, 7);
lean_closure_set(v___x_194_, 0, lean_box(0));
lean_closure_set(v___x_194_, 1, lean_box(0));
lean_closure_set(v___x_194_, 2, lean_box(0));
lean_closure_set(v___x_194_, 3, v_inst_190_);
lean_closure_set(v___x_194_, 4, v_inst_191_);
lean_closure_set(v___x_194_, 5, v_inst_192_);
lean_closure_set(v___x_194_, 6, v_inst_193_);
v___x_195_ = lean_alloc_closure((void*)(l_Lean_MonadHashMapCacheAdapter_cache), 8, 6);
lean_closure_set(v___x_195_, 0, lean_box(0));
lean_closure_set(v___x_195_, 1, lean_box(0));
lean_closure_set(v___x_195_, 2, lean_box(0));
lean_closure_set(v___x_195_, 3, v_inst_190_);
lean_closure_set(v___x_195_, 4, v_inst_191_);
lean_closure_set(v___x_195_, 5, v_inst_193_);
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_instMonadCacheOfMonad(lean_object* v_00_u03b1_197_, lean_object* v_00_u03b2_198_, lean_object* v_m_199_, lean_object* v_inst_200_, lean_object* v_inst_201_, lean_object* v_inst_202_, lean_object* v_inst_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Lean_MonadHashMapCacheAdapter_instMonadCacheOfMonad___redArg(v_inst_200_, v_inst_201_, v_inst_202_, v_inst_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__0(lean_object* v_f_205_, lean_object* v_s_206_){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_207_ = lean_box(0);
v___x_208_ = lean_apply_1(v_f_205_, v_s_206_);
v___x_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_207_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1(lean_object* v_inst_210_, lean_object* v_f_211_, lean_object* v___y_212_){
_start:
{
lean_object* v___f_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___f_213_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__0), 2, 1);
lean_closure_set(v___f_213_, 0, v_f_211_);
v___x_214_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_214_, 0, lean_box(0));
lean_closure_set(v___x_214_, 1, lean_box(0));
lean_closure_set(v___x_214_, 2, lean_box(0));
lean_closure_set(v___x_214_, 3, v___y_212_);
lean_closure_set(v___x_214_, 4, v___f_213_);
v___x_215_ = lean_apply_2(v_inst_210_, lean_box(0), v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg(lean_object* v_inst_216_){
_start:
{
lean_object* v___f_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
lean_inc(v_inst_216_);
v___f_217_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1), 3, 1);
lean_closure_set(v___f_217_, 0, v_inst_216_);
v___x_218_ = lean_alloc_closure((void*)(l_StateRefT_x27_get), 5, 4);
lean_closure_set(v___x_218_, 0, lean_box(0));
lean_closure_set(v___x_218_, 1, lean_box(0));
lean_closure_set(v___x_218_, 2, lean_box(0));
lean_closure_set(v___x_218_, 3, v_inst_216_);
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
lean_ctor_set(v___x_219_, 1, v___f_217_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter(lean_object* v_00_u03c9_220_, lean_object* v_00_u03b1_221_, lean_object* v_00_u03b2_222_, lean_object* v_m_223_, lean_object* v_inst_224_, lean_object* v_inst_225_, lean_object* v_inst_226_, lean_object* v_inst_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg(v_inst_227_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___boxed(lean_object* v_00_u03c9_229_, lean_object* v_00_u03b1_230_, lean_object* v_00_u03b2_231_, lean_object* v_m_232_, lean_object* v_inst_233_, lean_object* v_inst_234_, lean_object* v_inst_235_, lean_object* v_inst_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lean_MonadCacheT_instMonadHashMapCacheAdapter(v_00_u03c9_229_, v_00_u03b1_230_, v_00_u03b2_231_, v_m_232_, v_inst_233_, v_inst_234_, v_inst_235_, v_inst_236_);
lean_dec_ref(v_inst_235_);
lean_dec_ref(v_inst_234_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__0(lean_object* v_a_238_, lean_object* v_toPure_239_, lean_object* v_s_240_){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_241_, 0, v_a_238_);
lean_ctor_set(v___x_241_, 1, v_s_240_);
v___x_242_ = lean_apply_2(v_toPure_239_, lean_box(0), v___x_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__1(lean_object* v_toPure_243_, lean_object* v_ref_244_, lean_object* v_inst_245_, lean_object* v_toBind_246_, lean_object* v_a_247_){
_start:
{
lean_object* v___f_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___f_248_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__0), 3, 2);
lean_closure_set(v___f_248_, 0, v_a_247_);
lean_closure_set(v___f_248_, 1, v_toPure_243_);
v___x_249_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_249_, 0, lean_box(0));
lean_closure_set(v___x_249_, 1, lean_box(0));
lean_closure_set(v___x_249_, 2, v_ref_244_);
v___x_250_ = lean_apply_2(v_inst_245_, lean_box(0), v___x_249_);
v___x_251_ = lean_apply_4(v_toBind_246_, lean_box(0), lean_box(0), v___x_250_, v___f_248_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__2(lean_object* v_toPure_252_, lean_object* v_inst_253_, lean_object* v_toBind_254_, lean_object* v_x_255_, lean_object* v_ref_256_){
_start:
{
lean_object* v___f_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
lean_inc(v_toBind_254_);
lean_inc(v_ref_256_);
v___f_257_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__1), 5, 4);
lean_closure_set(v___f_257_, 0, v_toPure_252_);
lean_closure_set(v___f_257_, 1, v_ref_256_);
lean_closure_set(v___f_257_, 2, v_inst_253_);
lean_closure_set(v___f_257_, 3, v_toBind_254_);
v___x_258_ = lean_apply_1(v_x_255_, v_ref_256_);
v___x_259_ = lean_apply_4(v_toBind_254_, lean_box(0), lean_box(0), v___x_258_, v___f_257_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__3(lean_object* v_toPure_260_, lean_object* v_____x_261_){
_start:
{
lean_object* v_fst_262_; lean_object* v___x_263_; 
v_fst_262_ = lean_ctor_get(v_____x_261_, 0);
lean_inc(v_fst_262_);
lean_dec_ref(v_____x_261_);
v___x_263_ = lean_apply_2(v_toPure_260_, lean_box(0), v_fst_262_);
return v___x_263_;
}
}
static lean_object* _init_l_Lean_MonadCacheT_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_264_ = lean_box(0);
v___x_265_ = lean_unsigned_to_nat(16u);
v___x_266_ = lean_mk_array(v___x_265_, v___x_264_);
return v___x_266_;
}
}
static lean_object* _init_l_Lean_MonadCacheT_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_267_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__0, &l_Lean_MonadCacheT_run___redArg___closed__0_once, _init_l_Lean_MonadCacheT_run___redArg___closed__0);
v___x_268_ = lean_unsigned_to_nat(0u);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set(v___x_269_, 1, v___x_267_);
return v___x_269_;
}
}
static lean_object* _init_l_Lean_MonadCacheT_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__1, &l_Lean_MonadCacheT_run___redArg___closed__1_once, _init_l_Lean_MonadCacheT_run___redArg___closed__1);
v___x_271_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_271_, 0, lean_box(0));
lean_closure_set(v___x_271_, 1, lean_box(0));
lean_closure_set(v___x_271_, 2, v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg(lean_object* v_inst_272_, lean_object* v_inst_273_, lean_object* v_x_274_){
_start:
{
lean_object* v_toApplicative_275_; lean_object* v_toBind_276_; lean_object* v_toPure_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___f_280_; lean_object* v___f_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v_toApplicative_275_ = lean_ctor_get(v_inst_273_, 0);
lean_inc_ref(v_toApplicative_275_);
v_toBind_276_ = lean_ctor_get(v_inst_273_, 1);
lean_inc(v_toBind_276_);
lean_dec_ref(v_inst_273_);
v_toPure_277_ = lean_ctor_get(v_toApplicative_275_, 1);
lean_inc(v_toPure_277_);
lean_dec_ref(v_toApplicative_275_);
v___x_278_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__2, &l_Lean_MonadCacheT_run___redArg___closed__2_once, _init_l_Lean_MonadCacheT_run___redArg___closed__2);
lean_inc(v_inst_272_);
v___x_279_ = lean_apply_2(v_inst_272_, lean_box(0), v___x_278_);
lean_inc(v_toBind_276_);
lean_inc(v_toPure_277_);
v___f_280_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_280_, 0, v_toPure_277_);
lean_closure_set(v___f_280_, 1, v_inst_272_);
lean_closure_set(v___f_280_, 2, v_toBind_276_);
lean_closure_set(v___f_280_, 3, v_x_274_);
v___f_281_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__3), 2, 1);
lean_closure_set(v___f_281_, 0, v_toPure_277_);
lean_inc(v_toBind_276_);
v___x_282_ = lean_apply_4(v_toBind_276_, lean_box(0), lean_box(0), v___x_279_, v___f_280_);
v___x_283_ = lean_apply_4(v_toBind_276_, lean_box(0), lean_box(0), v___x_282_, v___f_281_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run(lean_object* v_00_u03c9_284_, lean_object* v_00_u03b1_285_, lean_object* v_00_u03b2_286_, lean_object* v_m_287_, lean_object* v_inst_288_, lean_object* v_inst_289_, lean_object* v_inst_290_, lean_object* v_inst_291_, lean_object* v_inst_292_, lean_object* v_00_u03c3_293_, lean_object* v_x_294_){
_start:
{
lean_object* v_toApplicative_295_; lean_object* v_toBind_296_; lean_object* v_toPure_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___f_300_; lean_object* v___f_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v_toApplicative_295_ = lean_ctor_get(v_inst_292_, 0);
lean_inc_ref(v_toApplicative_295_);
v_toBind_296_ = lean_ctor_get(v_inst_292_, 1);
lean_inc(v_toBind_296_);
lean_dec_ref(v_inst_292_);
v_toPure_297_ = lean_ctor_get(v_toApplicative_295_, 1);
lean_inc(v_toPure_297_);
lean_dec_ref(v_toApplicative_295_);
v___x_298_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__2, &l_Lean_MonadCacheT_run___redArg___closed__2_once, _init_l_Lean_MonadCacheT_run___redArg___closed__2);
lean_inc(v_inst_291_);
v___x_299_ = lean_apply_2(v_inst_291_, lean_box(0), v___x_298_);
lean_inc(v_toBind_296_);
lean_inc(v_toPure_297_);
v___f_300_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_300_, 0, v_toPure_297_);
lean_closure_set(v___f_300_, 1, v_inst_291_);
lean_closure_set(v___f_300_, 2, v_toBind_296_);
lean_closure_set(v___f_300_, 3, v_x_294_);
v___f_301_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__3), 2, 1);
lean_closure_set(v___f_301_, 0, v_toPure_297_);
lean_inc(v_toBind_296_);
v___x_302_ = lean_apply_4(v_toBind_296_, lean_box(0), lean_box(0), v___x_299_, v___f_300_);
v___x_303_ = lean_apply_4(v_toBind_296_, lean_box(0), lean_box(0), v___x_302_, v___f_301_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___boxed(lean_object* v_00_u03c9_304_, lean_object* v_00_u03b1_305_, lean_object* v_00_u03b2_306_, lean_object* v_m_307_, lean_object* v_inst_308_, lean_object* v_inst_309_, lean_object* v_inst_310_, lean_object* v_inst_311_, lean_object* v_inst_312_, lean_object* v_00_u03c3_313_, lean_object* v_x_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l_Lean_MonadCacheT_run(v_00_u03c9_304_, v_00_u03b1_305_, v_00_u03b2_306_, v_m_307_, v_inst_308_, v_inst_309_, v_inst_310_, v_inst_311_, v_inst_312_, v_00_u03c3_313_, v_x_314_);
lean_dec_ref(v_inst_310_);
lean_dec_ref(v_inst_309_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1___redArg(lean_object* v_inst_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
lean_object* v_toApplicative_320_; lean_object* v_toFunctor_321_; lean_object* v_map_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v_toApplicative_320_ = lean_ctor_get(v_inst_316_, 0);
lean_inc_ref(v_toApplicative_320_);
lean_dec_ref(v_inst_316_);
v_toFunctor_321_ = lean_ctor_get(v_toApplicative_320_, 0);
lean_inc_ref(v_toFunctor_321_);
lean_dec_ref(v_toApplicative_320_);
v_map_322_ = lean_ctor_get(v_toFunctor_321_, 0);
lean_inc(v_map_322_);
lean_dec_ref(v_toFunctor_321_);
v___x_323_ = lean_apply_1(v_a_318_, v_a_319_);
v___x_324_ = lean_apply_4(v_map_322_, lean_box(0), lean_box(0), v_a_317_, v___x_323_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1(lean_object* v_00_u03c9_325_, lean_object* v_00_u03b1_326_, lean_object* v_00_u03b2_327_, lean_object* v_m_328_, lean_object* v_inst_329_, lean_object* v_inst_330_, lean_object* v_inst_331_, lean_object* v_inst_332_, lean_object* v_00_u03b1_333_, lean_object* v_00_u03b2_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v_toApplicative_338_; lean_object* v_toFunctor_339_; lean_object* v_map_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v_toApplicative_338_ = lean_ctor_get(v_inst_332_, 0);
lean_inc_ref(v_toApplicative_338_);
lean_dec_ref(v_inst_332_);
v_toFunctor_339_ = lean_ctor_get(v_toApplicative_338_, 0);
lean_inc_ref(v_toFunctor_339_);
lean_dec_ref(v_toApplicative_338_);
v_map_340_ = lean_ctor_get(v_toFunctor_339_, 0);
lean_inc(v_map_340_);
lean_dec_ref(v_toFunctor_339_);
v___x_341_ = lean_apply_1(v_a_336_, v_a_337_);
v___x_342_ = lean_apply_4(v_map_340_, lean_box(0), lean_box(0), v_a_335_, v___x_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1___boxed(lean_object* v_00_u03c9_343_, lean_object* v_00_u03b1_344_, lean_object* v_00_u03b2_345_, lean_object* v_m_346_, lean_object* v_inst_347_, lean_object* v_inst_348_, lean_object* v_inst_349_, lean_object* v_inst_350_, lean_object* v_00_u03b1_351_, lean_object* v_00_u03b2_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lean_MonadCacheT_instMonad___aux__1(v_00_u03c9_343_, v_00_u03b1_344_, v_00_u03b2_345_, v_m_346_, v_inst_347_, v_inst_348_, v_inst_349_, v_inst_350_, v_00_u03b1_351_, v_00_u03b2_352_, v_a_353_, v_a_354_, v_a_355_);
lean_dec_ref(v_inst_349_);
lean_dec_ref(v_inst_348_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3___redArg(lean_object* v_inst_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v_toApplicative_361_; lean_object* v_toFunctor_362_; lean_object* v_mapConst_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v_toApplicative_361_ = lean_ctor_get(v_inst_357_, 0);
lean_inc_ref(v_toApplicative_361_);
lean_dec_ref(v_inst_357_);
v_toFunctor_362_ = lean_ctor_get(v_toApplicative_361_, 0);
lean_inc_ref(v_toFunctor_362_);
lean_dec_ref(v_toApplicative_361_);
v_mapConst_363_ = lean_ctor_get(v_toFunctor_362_, 1);
lean_inc(v_mapConst_363_);
lean_dec_ref(v_toFunctor_362_);
v___x_364_ = lean_apply_1(v_a_359_, v_a_360_);
v___x_365_ = lean_apply_4(v_mapConst_363_, lean_box(0), lean_box(0), v_a_358_, v___x_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3(lean_object* v_00_u03c9_366_, lean_object* v_00_u03b1_367_, lean_object* v_00_u03b2_368_, lean_object* v_m_369_, lean_object* v_inst_370_, lean_object* v_inst_371_, lean_object* v_inst_372_, lean_object* v_inst_373_, lean_object* v_00_u03b1_374_, lean_object* v_00_u03b2_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_){
_start:
{
lean_object* v_toApplicative_379_; lean_object* v_toFunctor_380_; lean_object* v_mapConst_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v_toApplicative_379_ = lean_ctor_get(v_inst_373_, 0);
lean_inc_ref(v_toApplicative_379_);
lean_dec_ref(v_inst_373_);
v_toFunctor_380_ = lean_ctor_get(v_toApplicative_379_, 0);
lean_inc_ref(v_toFunctor_380_);
lean_dec_ref(v_toApplicative_379_);
v_mapConst_381_ = lean_ctor_get(v_toFunctor_380_, 1);
lean_inc(v_mapConst_381_);
lean_dec_ref(v_toFunctor_380_);
v___x_382_ = lean_apply_1(v_a_377_, v_a_378_);
v___x_383_ = lean_apply_4(v_mapConst_381_, lean_box(0), lean_box(0), v_a_376_, v___x_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3___boxed(lean_object* v_00_u03c9_384_, lean_object* v_00_u03b1_385_, lean_object* v_00_u03b2_386_, lean_object* v_m_387_, lean_object* v_inst_388_, lean_object* v_inst_389_, lean_object* v_inst_390_, lean_object* v_inst_391_, lean_object* v_00_u03b1_392_, lean_object* v_00_u03b2_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lean_MonadCacheT_instMonad___aux__3(v_00_u03c9_384_, v_00_u03b1_385_, v_00_u03b2_386_, v_m_387_, v_inst_388_, v_inst_389_, v_inst_390_, v_inst_391_, v_00_u03b1_392_, v_00_u03b2_393_, v_a_394_, v_a_395_, v_a_396_);
lean_dec_ref(v_inst_390_);
lean_dec_ref(v_inst_389_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__5___redArg(lean_object* v_inst_398_, lean_object* v_a_399_){
_start:
{
lean_object* v_toApplicative_400_; lean_object* v_toPure_401_; lean_object* v___x_402_; 
v_toApplicative_400_ = lean_ctor_get(v_inst_398_, 0);
lean_inc_ref(v_toApplicative_400_);
lean_dec_ref(v_inst_398_);
v_toPure_401_ = lean_ctor_get(v_toApplicative_400_, 1);
lean_inc(v_toPure_401_);
lean_dec_ref(v_toApplicative_400_);
v___x_402_ = lean_apply_2(v_toPure_401_, lean_box(0), v_a_399_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__5(lean_object* v_00_u03c9_403_, lean_object* v_00_u03b1_404_, lean_object* v_00_u03b2_405_, lean_object* v_m_406_, lean_object* v_inst_407_, lean_object* v_inst_408_, lean_object* v_inst_409_, lean_object* v_inst_410_, lean_object* v_00_u03b1_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
lean_object* v_toApplicative_414_; lean_object* v_toPure_415_; lean_object* v___x_416_; 
v_toApplicative_414_ = lean_ctor_get(v_inst_410_, 0);
lean_inc_ref(v_toApplicative_414_);
lean_dec_ref(v_inst_410_);
v_toPure_415_ = lean_ctor_get(v_toApplicative_414_, 1);
lean_inc(v_toPure_415_);
lean_dec_ref(v_toApplicative_414_);
v___x_416_ = lean_apply_2(v_toPure_415_, lean_box(0), v_a_412_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__5___boxed(lean_object* v_00_u03c9_417_, lean_object* v_00_u03b1_418_, lean_object* v_00_u03b2_419_, lean_object* v_m_420_, lean_object* v_inst_421_, lean_object* v_inst_422_, lean_object* v_inst_423_, lean_object* v_inst_424_, lean_object* v_00_u03b1_425_, lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lean_MonadCacheT_instMonad___aux__5(v_00_u03c9_417_, v_00_u03b1_418_, v_00_u03b2_419_, v_m_420_, v_inst_421_, v_inst_422_, v_inst_423_, v_inst_424_, v_00_u03b1_425_, v_a_426_, v_a_427_);
lean_dec(v_a_427_);
lean_dec_ref(v_inst_423_);
lean_dec_ref(v_inst_422_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0(lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_x_431_){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_432_ = lean_box(0);
v___x_433_ = lean_apply_2(v_a_429_, v___x_432_, v_a_430_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___redArg(lean_object* v_inst_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_){
_start:
{
lean_object* v_toApplicative_438_; lean_object* v_toSeq_439_; lean_object* v___f_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v_toApplicative_438_ = lean_ctor_get(v_inst_434_, 0);
lean_inc_ref(v_toApplicative_438_);
lean_dec_ref(v_inst_434_);
v_toSeq_439_ = lean_ctor_get(v_toApplicative_438_, 2);
lean_inc(v_toSeq_439_);
lean_dec_ref(v_toApplicative_438_);
lean_inc(v_a_437_);
v___f_440_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0), 3, 2);
lean_closure_set(v___f_440_, 0, v_a_436_);
lean_closure_set(v___f_440_, 1, v_a_437_);
v___x_441_ = lean_apply_1(v_a_435_, v_a_437_);
v___x_442_ = lean_apply_4(v_toSeq_439_, lean_box(0), lean_box(0), v___x_441_, v___f_440_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7(lean_object* v_00_u03c9_443_, lean_object* v_00_u03b1_444_, lean_object* v_00_u03b2_445_, lean_object* v_m_446_, lean_object* v_inst_447_, lean_object* v_inst_448_, lean_object* v_inst_449_, lean_object* v_inst_450_, lean_object* v_00_u03b1_451_, lean_object* v_00_u03b2_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_){
_start:
{
lean_object* v_toApplicative_456_; lean_object* v_toSeq_457_; lean_object* v___f_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v_toApplicative_456_ = lean_ctor_get(v_inst_450_, 0);
lean_inc_ref(v_toApplicative_456_);
lean_dec_ref(v_inst_450_);
v_toSeq_457_ = lean_ctor_get(v_toApplicative_456_, 2);
lean_inc(v_toSeq_457_);
lean_dec_ref(v_toApplicative_456_);
lean_inc(v_a_455_);
v___f_458_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0), 3, 2);
lean_closure_set(v___f_458_, 0, v_a_454_);
lean_closure_set(v___f_458_, 1, v_a_455_);
v___x_459_ = lean_apply_1(v_a_453_, v_a_455_);
v___x_460_ = lean_apply_4(v_toSeq_457_, lean_box(0), lean_box(0), v___x_459_, v___f_458_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___boxed(lean_object* v_00_u03c9_461_, lean_object* v_00_u03b1_462_, lean_object* v_00_u03b2_463_, lean_object* v_m_464_, lean_object* v_inst_465_, lean_object* v_inst_466_, lean_object* v_inst_467_, lean_object* v_inst_468_, lean_object* v_00_u03b1_469_, lean_object* v_00_u03b2_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Lean_MonadCacheT_instMonad___aux__7(v_00_u03c9_461_, v_00_u03b1_462_, v_00_u03b2_463_, v_m_464_, v_inst_465_, v_inst_466_, v_inst_467_, v_inst_468_, v_00_u03b1_469_, v_00_u03b2_470_, v_a_471_, v_a_472_, v_a_473_);
lean_dec_ref(v_inst_467_);
lean_dec_ref(v_inst_466_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___redArg(lean_object* v_inst_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_){
_start:
{
lean_object* v_toApplicative_479_; lean_object* v_toSeqLeft_480_; lean_object* v___f_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v_toApplicative_479_ = lean_ctor_get(v_inst_475_, 0);
lean_inc_ref(v_toApplicative_479_);
lean_dec_ref(v_inst_475_);
v_toSeqLeft_480_ = lean_ctor_get(v_toApplicative_479_, 3);
lean_inc(v_toSeqLeft_480_);
lean_dec_ref(v_toApplicative_479_);
lean_inc(v_a_478_);
v___f_481_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0), 3, 2);
lean_closure_set(v___f_481_, 0, v_a_477_);
lean_closure_set(v___f_481_, 1, v_a_478_);
v___x_482_ = lean_apply_1(v_a_476_, v_a_478_);
v___x_483_ = lean_apply_4(v_toSeqLeft_480_, lean_box(0), lean_box(0), v___x_482_, v___f_481_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9(lean_object* v_00_u03c9_484_, lean_object* v_00_u03b1_485_, lean_object* v_00_u03b2_486_, lean_object* v_m_487_, lean_object* v_inst_488_, lean_object* v_inst_489_, lean_object* v_inst_490_, lean_object* v_inst_491_, lean_object* v_00_u03b1_492_, lean_object* v_00_u03b2_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_){
_start:
{
lean_object* v_toApplicative_497_; lean_object* v_toSeqLeft_498_; lean_object* v___f_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v_toApplicative_497_ = lean_ctor_get(v_inst_491_, 0);
lean_inc_ref(v_toApplicative_497_);
lean_dec_ref(v_inst_491_);
v_toSeqLeft_498_ = lean_ctor_get(v_toApplicative_497_, 3);
lean_inc(v_toSeqLeft_498_);
lean_dec_ref(v_toApplicative_497_);
lean_inc(v_a_496_);
v___f_499_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0), 3, 2);
lean_closure_set(v___f_499_, 0, v_a_495_);
lean_closure_set(v___f_499_, 1, v_a_496_);
v___x_500_ = lean_apply_1(v_a_494_, v_a_496_);
v___x_501_ = lean_apply_4(v_toSeqLeft_498_, lean_box(0), lean_box(0), v___x_500_, v___f_499_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___boxed(lean_object* v_00_u03c9_502_, lean_object* v_00_u03b1_503_, lean_object* v_00_u03b2_504_, lean_object* v_m_505_, lean_object* v_inst_506_, lean_object* v_inst_507_, lean_object* v_inst_508_, lean_object* v_inst_509_, lean_object* v_00_u03b1_510_, lean_object* v_00_u03b2_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lean_MonadCacheT_instMonad___aux__9(v_00_u03c9_502_, v_00_u03b1_503_, v_00_u03b2_504_, v_m_505_, v_inst_506_, v_inst_507_, v_inst_508_, v_inst_509_, v_00_u03b1_510_, v_00_u03b2_511_, v_a_512_, v_a_513_, v_a_514_);
lean_dec_ref(v_inst_508_);
lean_dec_ref(v_inst_507_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11___redArg(lean_object* v_inst_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_){
_start:
{
lean_object* v_toApplicative_520_; lean_object* v_toSeqRight_521_; lean_object* v___f_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v_toApplicative_520_ = lean_ctor_get(v_inst_516_, 0);
lean_inc_ref(v_toApplicative_520_);
lean_dec_ref(v_inst_516_);
v_toSeqRight_521_ = lean_ctor_get(v_toApplicative_520_, 4);
lean_inc(v_toSeqRight_521_);
lean_dec_ref(v_toApplicative_520_);
lean_inc(v_a_519_);
v___f_522_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0), 3, 2);
lean_closure_set(v___f_522_, 0, v_a_518_);
lean_closure_set(v___f_522_, 1, v_a_519_);
v___x_523_ = lean_apply_1(v_a_517_, v_a_519_);
v___x_524_ = lean_apply_4(v_toSeqRight_521_, lean_box(0), lean_box(0), v___x_523_, v___f_522_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11(lean_object* v_00_u03c9_525_, lean_object* v_00_u03b1_526_, lean_object* v_00_u03b2_527_, lean_object* v_m_528_, lean_object* v_inst_529_, lean_object* v_inst_530_, lean_object* v_inst_531_, lean_object* v_inst_532_, lean_object* v_00_u03b1_533_, lean_object* v_00_u03b2_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_){
_start:
{
lean_object* v_toApplicative_538_; lean_object* v_toSeqRight_539_; lean_object* v___f_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v_toApplicative_538_ = lean_ctor_get(v_inst_532_, 0);
lean_inc_ref(v_toApplicative_538_);
lean_dec_ref(v_inst_532_);
v_toSeqRight_539_ = lean_ctor_get(v_toApplicative_538_, 4);
lean_inc(v_toSeqRight_539_);
lean_dec_ref(v_toApplicative_538_);
lean_inc(v_a_537_);
v___f_540_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0), 3, 2);
lean_closure_set(v___f_540_, 0, v_a_536_);
lean_closure_set(v___f_540_, 1, v_a_537_);
v___x_541_ = lean_apply_1(v_a_535_, v_a_537_);
v___x_542_ = lean_apply_4(v_toSeqRight_539_, lean_box(0), lean_box(0), v___x_541_, v___f_540_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11___boxed(lean_object* v_00_u03c9_543_, lean_object* v_00_u03b1_544_, lean_object* v_00_u03b2_545_, lean_object* v_m_546_, lean_object* v_inst_547_, lean_object* v_inst_548_, lean_object* v_inst_549_, lean_object* v_inst_550_, lean_object* v_00_u03b1_551_, lean_object* v_00_u03b2_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lean_MonadCacheT_instMonad___aux__11(v_00_u03c9_543_, v_00_u03b1_544_, v_00_u03b2_545_, v_m_546_, v_inst_547_, v_inst_548_, v_inst_549_, v_inst_550_, v_00_u03b1_551_, v_00_u03b2_552_, v_a_553_, v_a_554_, v_a_555_);
lean_dec_ref(v_inst_549_);
lean_dec_ref(v_inst_548_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___redArg___lam__0(lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = lean_apply_2(v_a_557_, v_a_559_, v_a_558_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___redArg(lean_object* v_inst_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_){
_start:
{
lean_object* v_toBind_565_; lean_object* v___f_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v_toBind_565_ = lean_ctor_get(v_inst_561_, 1);
lean_inc(v_toBind_565_);
lean_dec_ref(v_inst_561_);
lean_inc(v_a_564_);
v___f_566_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___redArg___lam__0), 3, 2);
lean_closure_set(v___f_566_, 0, v_a_563_);
lean_closure_set(v___f_566_, 1, v_a_564_);
v___x_567_ = lean_apply_1(v_a_562_, v_a_564_);
v___x_568_ = lean_apply_4(v_toBind_565_, lean_box(0), lean_box(0), v___x_567_, v___f_566_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13(lean_object* v_00_u03c9_569_, lean_object* v_00_u03b1_570_, lean_object* v_00_u03b2_571_, lean_object* v_m_572_, lean_object* v_inst_573_, lean_object* v_inst_574_, lean_object* v_inst_575_, lean_object* v_inst_576_, lean_object* v_00_u03b1_577_, lean_object* v_00_u03b2_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
lean_object* v_toBind_582_; lean_object* v___f_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v_toBind_582_ = lean_ctor_get(v_inst_576_, 1);
lean_inc(v_toBind_582_);
lean_dec_ref(v_inst_576_);
lean_inc(v_a_581_);
v___f_583_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___redArg___lam__0), 3, 2);
lean_closure_set(v___f_583_, 0, v_a_580_);
lean_closure_set(v___f_583_, 1, v_a_581_);
v___x_584_ = lean_apply_1(v_a_579_, v_a_581_);
v___x_585_ = lean_apply_4(v_toBind_582_, lean_box(0), lean_box(0), v___x_584_, v___f_583_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___boxed(lean_object* v_00_u03c9_586_, lean_object* v_00_u03b1_587_, lean_object* v_00_u03b2_588_, lean_object* v_m_589_, lean_object* v_inst_590_, lean_object* v_inst_591_, lean_object* v_inst_592_, lean_object* v_inst_593_, lean_object* v_00_u03b1_594_, lean_object* v_00_u03b2_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Lean_MonadCacheT_instMonad___aux__13(v_00_u03c9_586_, v_00_u03b1_587_, v_00_u03b2_588_, v_m_589_, v_inst_590_, v_inst_591_, v_inst_592_, v_inst_593_, v_00_u03b1_594_, v_00_u03b2_595_, v_a_596_, v_a_597_, v_a_598_);
lean_dec_ref(v_inst_592_);
lean_dec_ref(v_inst_591_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object* v_inst_600_, lean_object* v_inst_601_, lean_object* v_inst_602_, lean_object* v_inst_603_){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
lean_inc_ref(v_inst_603_);
lean_inc_ref(v_inst_602_);
lean_inc_ref(v_inst_601_);
v___x_604_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__1___boxed), 13, 8);
lean_closure_set(v___x_604_, 0, lean_box(0));
lean_closure_set(v___x_604_, 1, lean_box(0));
lean_closure_set(v___x_604_, 2, lean_box(0));
lean_closure_set(v___x_604_, 3, lean_box(0));
lean_closure_set(v___x_604_, 4, v_inst_600_);
lean_closure_set(v___x_604_, 5, v_inst_601_);
lean_closure_set(v___x_604_, 6, v_inst_602_);
lean_closure_set(v___x_604_, 7, v_inst_603_);
lean_inc_ref(v_inst_603_);
lean_inc_ref(v_inst_602_);
lean_inc_ref(v_inst_601_);
v___x_605_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__3___boxed), 13, 8);
lean_closure_set(v___x_605_, 0, lean_box(0));
lean_closure_set(v___x_605_, 1, lean_box(0));
lean_closure_set(v___x_605_, 2, lean_box(0));
lean_closure_set(v___x_605_, 3, lean_box(0));
lean_closure_set(v___x_605_, 4, v_inst_600_);
lean_closure_set(v___x_605_, 5, v_inst_601_);
lean_closure_set(v___x_605_, 6, v_inst_602_);
lean_closure_set(v___x_605_, 7, v_inst_603_);
v___x_606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_606_, 0, v___x_604_);
lean_ctor_set(v___x_606_, 1, v___x_605_);
lean_inc_ref(v_inst_603_);
lean_inc_ref(v_inst_602_);
lean_inc_ref(v_inst_601_);
v___x_607_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__5___boxed), 11, 8);
lean_closure_set(v___x_607_, 0, lean_box(0));
lean_closure_set(v___x_607_, 1, lean_box(0));
lean_closure_set(v___x_607_, 2, lean_box(0));
lean_closure_set(v___x_607_, 3, lean_box(0));
lean_closure_set(v___x_607_, 4, v_inst_600_);
lean_closure_set(v___x_607_, 5, v_inst_601_);
lean_closure_set(v___x_607_, 6, v_inst_602_);
lean_closure_set(v___x_607_, 7, v_inst_603_);
lean_inc_ref(v_inst_603_);
lean_inc_ref(v_inst_602_);
lean_inc_ref(v_inst_601_);
v___x_608_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__7___boxed), 13, 8);
lean_closure_set(v___x_608_, 0, lean_box(0));
lean_closure_set(v___x_608_, 1, lean_box(0));
lean_closure_set(v___x_608_, 2, lean_box(0));
lean_closure_set(v___x_608_, 3, lean_box(0));
lean_closure_set(v___x_608_, 4, v_inst_600_);
lean_closure_set(v___x_608_, 5, v_inst_601_);
lean_closure_set(v___x_608_, 6, v_inst_602_);
lean_closure_set(v___x_608_, 7, v_inst_603_);
lean_inc_ref(v_inst_603_);
lean_inc_ref(v_inst_602_);
lean_inc_ref(v_inst_601_);
v___x_609_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__9___boxed), 13, 8);
lean_closure_set(v___x_609_, 0, lean_box(0));
lean_closure_set(v___x_609_, 1, lean_box(0));
lean_closure_set(v___x_609_, 2, lean_box(0));
lean_closure_set(v___x_609_, 3, lean_box(0));
lean_closure_set(v___x_609_, 4, v_inst_600_);
lean_closure_set(v___x_609_, 5, v_inst_601_);
lean_closure_set(v___x_609_, 6, v_inst_602_);
lean_closure_set(v___x_609_, 7, v_inst_603_);
lean_inc_ref(v_inst_603_);
lean_inc_ref(v_inst_602_);
lean_inc_ref(v_inst_601_);
v___x_610_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__11___boxed), 13, 8);
lean_closure_set(v___x_610_, 0, lean_box(0));
lean_closure_set(v___x_610_, 1, lean_box(0));
lean_closure_set(v___x_610_, 2, lean_box(0));
lean_closure_set(v___x_610_, 3, lean_box(0));
lean_closure_set(v___x_610_, 4, v_inst_600_);
lean_closure_set(v___x_610_, 5, v_inst_601_);
lean_closure_set(v___x_610_, 6, v_inst_602_);
lean_closure_set(v___x_610_, 7, v_inst_603_);
v___x_611_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_611_, 0, v___x_606_);
lean_ctor_set(v___x_611_, 1, v___x_607_);
lean_ctor_set(v___x_611_, 2, v___x_608_);
lean_ctor_set(v___x_611_, 3, v___x_609_);
lean_ctor_set(v___x_611_, 4, v___x_610_);
v___x_612_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___boxed), 13, 8);
lean_closure_set(v___x_612_, 0, lean_box(0));
lean_closure_set(v___x_612_, 1, lean_box(0));
lean_closure_set(v___x_612_, 2, lean_box(0));
lean_closure_set(v___x_612_, 3, lean_box(0));
lean_closure_set(v___x_612_, 4, v_inst_600_);
lean_closure_set(v___x_612_, 5, v_inst_601_);
lean_closure_set(v___x_612_, 6, v_inst_602_);
lean_closure_set(v___x_612_, 7, v_inst_603_);
v___x_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_611_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad(lean_object* v_00_u03c9_614_, lean_object* v_00_u03b1_615_, lean_object* v_00_u03b2_616_, lean_object* v_m_617_, lean_object* v_inst_618_, lean_object* v_inst_619_, lean_object* v_inst_620_, lean_object* v_inst_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l_Lean_MonadCacheT_instMonad___redArg(v_inst_618_, v_inst_619_, v_inst_620_, v_inst_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___redArg(lean_object* v_x_623_){
_start:
{
lean_inc(v_x_623_);
return v_x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___redArg___boxed(lean_object* v_x_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lean_MonadCacheT_instMonadLift___aux__1___redArg(v_x_624_);
lean_dec(v_x_624_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1(lean_object* v_00_u03c9_626_, lean_object* v_00_u03b1_627_, lean_object* v_00_u03b2_628_, lean_object* v_m_629_, lean_object* v_inst_630_, lean_object* v_inst_631_, lean_object* v_inst_632_, lean_object* v_00_u03b1_633_, lean_object* v_x_634_, lean_object* v_a_635_){
_start:
{
lean_inc(v_x_634_);
return v_x_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___boxed(lean_object* v_00_u03c9_636_, lean_object* v_00_u03b1_637_, lean_object* v_00_u03b2_638_, lean_object* v_m_639_, lean_object* v_inst_640_, lean_object* v_inst_641_, lean_object* v_inst_642_, lean_object* v_00_u03b1_643_, lean_object* v_x_644_, lean_object* v_a_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lean_MonadCacheT_instMonadLift___aux__1(v_00_u03c9_636_, v_00_u03b1_637_, v_00_u03b2_638_, v_m_639_, v_inst_640_, v_inst_641_, v_inst_642_, v_00_u03b1_643_, v_x_644_, v_a_645_);
lean_dec(v_a_645_);
lean_dec(v_x_644_);
lean_dec_ref(v_inst_642_);
lean_dec_ref(v_inst_641_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___redArg(lean_object* v_inst_647_, lean_object* v_inst_648_, lean_object* v_inst_649_){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadLift___aux__1___boxed), 10, 7);
lean_closure_set(v___x_650_, 0, lean_box(0));
lean_closure_set(v___x_650_, 1, lean_box(0));
lean_closure_set(v___x_650_, 2, lean_box(0));
lean_closure_set(v___x_650_, 3, lean_box(0));
lean_closure_set(v___x_650_, 4, v_inst_647_);
lean_closure_set(v___x_650_, 5, v_inst_648_);
lean_closure_set(v___x_650_, 6, v_inst_649_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift(lean_object* v_00_u03c9_651_, lean_object* v_00_u03b1_652_, lean_object* v_00_u03b2_653_, lean_object* v_m_654_, lean_object* v_inst_655_, lean_object* v_inst_656_, lean_object* v_inst_657_){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadLift___aux__1___boxed), 10, 7);
lean_closure_set(v___x_658_, 0, lean_box(0));
lean_closure_set(v___x_658_, 1, lean_box(0));
lean_closure_set(v___x_658_, 2, lean_box(0));
lean_closure_set(v___x_658_, 3, lean_box(0));
lean_closure_set(v___x_658_, 4, v_inst_655_);
lean_closure_set(v___x_658_, 5, v_inst_656_);
lean_closure_set(v___x_658_, 6, v_inst_657_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__1___redArg(lean_object* v_inst_659_, lean_object* v_a_660_){
_start:
{
lean_object* v_throw_661_; lean_object* v___x_662_; 
v_throw_661_ = lean_ctor_get(v_inst_659_, 0);
lean_inc(v_throw_661_);
lean_dec_ref(v_inst_659_);
v___x_662_ = lean_apply_2(v_throw_661_, lean_box(0), v_a_660_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__1(lean_object* v_00_u03c9_663_, lean_object* v_00_u03b1_664_, lean_object* v_00_u03b2_665_, lean_object* v_m_666_, lean_object* v_inst_667_, lean_object* v_inst_668_, lean_object* v_inst_669_, lean_object* v_00_u03b5_670_, lean_object* v_inst_671_, lean_object* v_00_u03b1_672_, lean_object* v_a_673_, lean_object* v_a_674_){
_start:
{
lean_object* v_throw_675_; lean_object* v___x_676_; 
v_throw_675_ = lean_ctor_get(v_inst_671_, 0);
lean_inc(v_throw_675_);
lean_dec_ref(v_inst_671_);
v___x_676_ = lean_apply_2(v_throw_675_, lean_box(0), v_a_673_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__1___boxed(lean_object* v_00_u03c9_677_, lean_object* v_00_u03b1_678_, lean_object* v_00_u03b2_679_, lean_object* v_m_680_, lean_object* v_inst_681_, lean_object* v_inst_682_, lean_object* v_inst_683_, lean_object* v_00_u03b5_684_, lean_object* v_inst_685_, lean_object* v_00_u03b1_686_, lean_object* v_a_687_, lean_object* v_a_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lean_MonadCacheT_instMonadExceptOf___aux__1(v_00_u03c9_677_, v_00_u03b1_678_, v_00_u03b2_679_, v_m_680_, v_inst_681_, v_inst_682_, v_inst_683_, v_00_u03b5_684_, v_inst_685_, v_00_u03b1_686_, v_a_687_, v_a_688_);
lean_dec(v_a_688_);
lean_dec_ref(v_inst_683_);
lean_dec_ref(v_inst_682_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg___lam__0(lean_object* v_c_690_, lean_object* v_s_691_, lean_object* v_e_692_){
_start:
{
lean_object* v___x_693_; 
v___x_693_ = lean_apply_2(v_c_690_, v_e_692_, v_s_691_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg(lean_object* v_inst_694_, lean_object* v_x_695_, lean_object* v_c_696_, lean_object* v_s_697_){
_start:
{
lean_object* v_tryCatch_698_; lean_object* v___f_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v_tryCatch_698_ = lean_ctor_get(v_inst_694_, 1);
lean_inc(v_tryCatch_698_);
lean_dec_ref(v_inst_694_);
lean_inc(v_s_697_);
v___f_699_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_699_, 0, v_c_696_);
lean_closure_set(v___f_699_, 1, v_s_697_);
v___x_700_ = lean_apply_1(v_x_695_, v_s_697_);
v___x_701_ = lean_apply_3(v_tryCatch_698_, lean_box(0), v___x_700_, v___f_699_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3(lean_object* v_00_u03c9_702_, lean_object* v_00_u03b1_703_, lean_object* v_00_u03b2_704_, lean_object* v_m_705_, lean_object* v_inst_706_, lean_object* v_inst_707_, lean_object* v_inst_708_, lean_object* v_00_u03b5_709_, lean_object* v_inst_710_, lean_object* v_00_u03b1_711_, lean_object* v_x_712_, lean_object* v_c_713_, lean_object* v_s_714_){
_start:
{
lean_object* v_tryCatch_715_; lean_object* v___f_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v_tryCatch_715_ = lean_ctor_get(v_inst_710_, 1);
lean_inc(v_tryCatch_715_);
lean_dec_ref(v_inst_710_);
lean_inc(v_s_714_);
v___f_716_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_716_, 0, v_c_713_);
lean_closure_set(v___f_716_, 1, v_s_714_);
v___x_717_ = lean_apply_1(v_x_712_, v_s_714_);
v___x_718_ = lean_apply_3(v_tryCatch_715_, lean_box(0), v___x_717_, v___f_716_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___boxed(lean_object* v_00_u03c9_719_, lean_object* v_00_u03b1_720_, lean_object* v_00_u03b2_721_, lean_object* v_m_722_, lean_object* v_inst_723_, lean_object* v_inst_724_, lean_object* v_inst_725_, lean_object* v_00_u03b5_726_, lean_object* v_inst_727_, lean_object* v_00_u03b1_728_, lean_object* v_x_729_, lean_object* v_c_730_, lean_object* v_s_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lean_MonadCacheT_instMonadExceptOf___aux__3(v_00_u03c9_719_, v_00_u03b1_720_, v_00_u03b2_721_, v_m_722_, v_inst_723_, v_inst_724_, v_inst_725_, v_00_u03b5_726_, v_inst_727_, v_00_u03b1_728_, v_x_729_, v_c_730_, v_s_731_);
lean_dec_ref(v_inst_725_);
lean_dec_ref(v_inst_724_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg(lean_object* v_inst_733_, lean_object* v_inst_734_, lean_object* v_inst_735_, lean_object* v_inst_736_){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
lean_inc_ref(v_inst_736_);
lean_inc_ref(v_inst_735_);
lean_inc_ref(v_inst_734_);
v___x_737_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadExceptOf___aux__1___boxed), 12, 9);
lean_closure_set(v___x_737_, 0, lean_box(0));
lean_closure_set(v___x_737_, 1, lean_box(0));
lean_closure_set(v___x_737_, 2, lean_box(0));
lean_closure_set(v___x_737_, 3, lean_box(0));
lean_closure_set(v___x_737_, 4, v_inst_733_);
lean_closure_set(v___x_737_, 5, v_inst_734_);
lean_closure_set(v___x_737_, 6, v_inst_735_);
lean_closure_set(v___x_737_, 7, lean_box(0));
lean_closure_set(v___x_737_, 8, v_inst_736_);
v___x_738_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadExceptOf___aux__3___boxed), 13, 9);
lean_closure_set(v___x_738_, 0, lean_box(0));
lean_closure_set(v___x_738_, 1, lean_box(0));
lean_closure_set(v___x_738_, 2, lean_box(0));
lean_closure_set(v___x_738_, 3, lean_box(0));
lean_closure_set(v___x_738_, 4, v_inst_733_);
lean_closure_set(v___x_738_, 5, v_inst_734_);
lean_closure_set(v___x_738_, 6, v_inst_735_);
lean_closure_set(v___x_738_, 7, lean_box(0));
lean_closure_set(v___x_738_, 8, v_inst_736_);
v___x_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_737_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf(lean_object* v_00_u03c9_740_, lean_object* v_00_u03b1_741_, lean_object* v_00_u03b2_742_, lean_object* v_m_743_, lean_object* v_inst_744_, lean_object* v_inst_745_, lean_object* v_inst_746_, lean_object* v_00_u03b5_747_, lean_object* v_inst_748_){
_start:
{
lean_object* v___x_749_; 
v___x_749_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg(v_inst_744_, v_inst_745_, v_inst_746_, v_inst_748_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___redArg___lam__0(lean_object* v_a_750_, lean_object* v_00_u03b2_751_, lean_object* v_x_752_){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = lean_apply_1(v_x_752_, v_a_750_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___redArg(lean_object* v_a_754_, lean_object* v_a_755_){
_start:
{
lean_object* v___f_756_; lean_object* v___x_757_; 
v___f_756_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadControl___aux__1___redArg___lam__0), 3, 1);
lean_closure_set(v___f_756_, 0, v_a_755_);
v___x_757_ = lean_apply_1(v_a_754_, v___f_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1(lean_object* v_00_u03c9_758_, lean_object* v_00_u03b1_759_, lean_object* v_00_u03b2_760_, lean_object* v_m_761_, lean_object* v_inst_762_, lean_object* v_inst_763_, lean_object* v_inst_764_, lean_object* v_00_u03b1_765_, lean_object* v_a_766_, lean_object* v_a_767_){
_start:
{
lean_object* v___f_768_; lean_object* v___x_769_; 
v___f_768_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadControl___aux__1___redArg___lam__0), 3, 1);
lean_closure_set(v___f_768_, 0, v_a_767_);
v___x_769_ = lean_apply_1(v_a_766_, v___f_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___boxed(lean_object* v_00_u03c9_770_, lean_object* v_00_u03b1_771_, lean_object* v_00_u03b2_772_, lean_object* v_m_773_, lean_object* v_inst_774_, lean_object* v_inst_775_, lean_object* v_inst_776_, lean_object* v_00_u03b1_777_, lean_object* v_a_778_, lean_object* v_a_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lean_MonadCacheT_instMonadControl___aux__1(v_00_u03c9_770_, v_00_u03b1_771_, v_00_u03b2_772_, v_m_773_, v_inst_774_, v_inst_775_, v_inst_776_, v_00_u03b1_777_, v_a_778_, v_a_779_);
lean_dec_ref(v_inst_776_);
lean_dec_ref(v_inst_775_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3___redArg(lean_object* v_a_781_){
_start:
{
lean_inc(v_a_781_);
return v_a_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3___redArg___boxed(lean_object* v_a_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_Lean_MonadCacheT_instMonadControl___aux__3___redArg(v_a_782_);
lean_dec(v_a_782_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3(lean_object* v_00_u03c9_784_, lean_object* v_00_u03b1_785_, lean_object* v_00_u03b2_786_, lean_object* v_m_787_, lean_object* v_inst_788_, lean_object* v_inst_789_, lean_object* v_inst_790_, lean_object* v_00_u03b1_791_, lean_object* v_a_792_, lean_object* v_a_793_){
_start:
{
lean_inc(v_a_792_);
return v_a_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3___boxed(lean_object* v_00_u03c9_794_, lean_object* v_00_u03b1_795_, lean_object* v_00_u03b2_796_, lean_object* v_m_797_, lean_object* v_inst_798_, lean_object* v_inst_799_, lean_object* v_inst_800_, lean_object* v_00_u03b1_801_, lean_object* v_a_802_, lean_object* v_a_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l_Lean_MonadCacheT_instMonadControl___aux__3(v_00_u03c9_794_, v_00_u03b1_795_, v_00_u03b2_796_, v_m_797_, v_inst_798_, v_inst_799_, v_inst_800_, v_00_u03b1_801_, v_a_802_, v_a_803_);
lean_dec(v_a_803_);
lean_dec(v_a_802_);
lean_dec_ref(v_inst_800_);
lean_dec_ref(v_inst_799_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg(lean_object* v_inst_805_, lean_object* v_inst_806_, lean_object* v_inst_807_){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
lean_inc_ref(v_inst_807_);
lean_inc_ref(v_inst_806_);
v___x_808_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadControl___aux__1___boxed), 10, 7);
lean_closure_set(v___x_808_, 0, lean_box(0));
lean_closure_set(v___x_808_, 1, lean_box(0));
lean_closure_set(v___x_808_, 2, lean_box(0));
lean_closure_set(v___x_808_, 3, lean_box(0));
lean_closure_set(v___x_808_, 4, v_inst_805_);
lean_closure_set(v___x_808_, 5, v_inst_806_);
lean_closure_set(v___x_808_, 6, v_inst_807_);
v___x_809_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadControl___aux__3___boxed), 10, 7);
lean_closure_set(v___x_809_, 0, lean_box(0));
lean_closure_set(v___x_809_, 1, lean_box(0));
lean_closure_set(v___x_809_, 2, lean_box(0));
lean_closure_set(v___x_809_, 3, lean_box(0));
lean_closure_set(v___x_809_, 4, v_inst_805_);
lean_closure_set(v___x_809_, 5, v_inst_806_);
lean_closure_set(v___x_809_, 6, v_inst_807_);
v___x_810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_810_, 0, v___x_808_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl(lean_object* v_00_u03c9_811_, lean_object* v_00_u03b1_812_, lean_object* v_00_u03b2_813_, lean_object* v_m_814_, lean_object* v_inst_815_, lean_object* v_inst_816_, lean_object* v_inst_817_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_inst_815_, v_inst_816_, v_inst_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg___lam__0(lean_object* v_f_819_, lean_object* v_a_820_, lean_object* v_a_x3f_821_){
_start:
{
lean_object* v___x_822_; 
v___x_822_ = lean_apply_2(v_f_819_, v_a_x3f_821_, v_a_820_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg(lean_object* v_inst_823_, lean_object* v_x_824_, lean_object* v_f_825_, lean_object* v_a_826_){
_start:
{
lean_object* v___f_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
lean_inc(v_a_826_);
v___f_827_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_827_, 0, v_f_825_);
lean_closure_set(v___f_827_, 1, v_a_826_);
v___x_828_ = lean_apply_1(v_x_824_, v_a_826_);
v___x_829_ = lean_apply_4(v_inst_823_, lean_box(0), lean_box(0), v___x_828_, v___f_827_);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1(lean_object* v_00_u03c9_830_, lean_object* v_00_u03b1_831_, lean_object* v_00_u03b2_832_, lean_object* v_m_833_, lean_object* v_inst_834_, lean_object* v_inst_835_, lean_object* v_inst_836_, lean_object* v_inst_837_, lean_object* v_00_u03b1_838_, lean_object* v_00_u03b2_839_, lean_object* v_x_840_, lean_object* v_f_841_, lean_object* v_a_842_){
_start:
{
lean_object* v___f_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
lean_inc(v_a_842_);
v___f_843_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_843_, 0, v_f_841_);
lean_closure_set(v___f_843_, 1, v_a_842_);
v___x_844_ = lean_apply_1(v_x_840_, v_a_842_);
v___x_845_ = lean_apply_4(v_inst_837_, lean_box(0), lean_box(0), v___x_844_, v___f_843_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___boxed(lean_object* v_00_u03c9_846_, lean_object* v_00_u03b1_847_, lean_object* v_00_u03b2_848_, lean_object* v_m_849_, lean_object* v_inst_850_, lean_object* v_inst_851_, lean_object* v_inst_852_, lean_object* v_inst_853_, lean_object* v_00_u03b1_854_, lean_object* v_00_u03b2_855_, lean_object* v_x_856_, lean_object* v_f_857_, lean_object* v_a_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Lean_MonadCacheT_instMonadFinally___aux__1(v_00_u03c9_846_, v_00_u03b1_847_, v_00_u03b2_848_, v_m_849_, v_inst_850_, v_inst_851_, v_inst_852_, v_inst_853_, v_00_u03b1_854_, v_00_u03b2_855_, v_x_856_, v_f_857_, v_a_858_);
lean_dec_ref(v_inst_852_);
lean_dec_ref(v_inst_851_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg(lean_object* v_inst_860_, lean_object* v_inst_861_, lean_object* v_inst_862_, lean_object* v_inst_863_){
_start:
{
lean_object* v___x_864_; 
v___x_864_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadFinally___aux__1___boxed), 13, 8);
lean_closure_set(v___x_864_, 0, lean_box(0));
lean_closure_set(v___x_864_, 1, lean_box(0));
lean_closure_set(v___x_864_, 2, lean_box(0));
lean_closure_set(v___x_864_, 3, lean_box(0));
lean_closure_set(v___x_864_, 4, v_inst_860_);
lean_closure_set(v___x_864_, 5, v_inst_861_);
lean_closure_set(v___x_864_, 6, v_inst_862_);
lean_closure_set(v___x_864_, 7, v_inst_863_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally(lean_object* v_00_u03c9_865_, lean_object* v_00_u03b1_866_, lean_object* v_00_u03b2_867_, lean_object* v_m_868_, lean_object* v_inst_869_, lean_object* v_inst_870_, lean_object* v_inst_871_, lean_object* v_inst_872_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadFinally___aux__1___boxed), 13, 8);
lean_closure_set(v___x_873_, 0, lean_box(0));
lean_closure_set(v___x_873_, 1, lean_box(0));
lean_closure_set(v___x_873_, 2, lean_box(0));
lean_closure_set(v___x_873_, 3, lean_box(0));
lean_closure_set(v___x_873_, 4, v_inst_869_);
lean_closure_set(v___x_873_, 5, v_inst_870_);
lean_closure_set(v___x_873_, 6, v_inst_871_);
lean_closure_set(v___x_873_, 7, v_inst_872_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1___redArg(lean_object* v_inst_874_){
_start:
{
lean_object* v_getRef_875_; 
v_getRef_875_ = lean_ctor_get(v_inst_874_, 0);
lean_inc(v_getRef_875_);
return v_getRef_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1___redArg___boxed(lean_object* v_inst_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l_Lean_MonadCacheT_instMonadRef___aux__1___redArg(v_inst_876_);
lean_dec_ref(v_inst_876_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1(lean_object* v_00_u03c9_878_, lean_object* v_00_u03b1_879_, lean_object* v_00_u03b2_880_, lean_object* v_m_881_, lean_object* v_inst_882_, lean_object* v_inst_883_, lean_object* v_inst_884_, lean_object* v_inst_885_, lean_object* v_a_886_){
_start:
{
lean_object* v_getRef_887_; 
v_getRef_887_ = lean_ctor_get(v_inst_885_, 0);
lean_inc(v_getRef_887_);
return v_getRef_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1___boxed(lean_object* v_00_u03c9_888_, lean_object* v_00_u03b1_889_, lean_object* v_00_u03b2_890_, lean_object* v_m_891_, lean_object* v_inst_892_, lean_object* v_inst_893_, lean_object* v_inst_894_, lean_object* v_inst_895_, lean_object* v_a_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lean_MonadCacheT_instMonadRef___aux__1(v_00_u03c9_888_, v_00_u03b1_889_, v_00_u03b2_890_, v_m_891_, v_inst_892_, v_inst_893_, v_inst_894_, v_inst_895_, v_a_896_);
lean_dec(v_a_896_);
lean_dec_ref(v_inst_895_);
lean_dec_ref(v_inst_894_);
lean_dec_ref(v_inst_893_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3___redArg(lean_object* v_inst_898_, lean_object* v_ref_899_, lean_object* v_x_900_, lean_object* v_a_901_){
_start:
{
lean_object* v_withRef_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v_withRef_902_ = lean_ctor_get(v_inst_898_, 1);
lean_inc(v_withRef_902_);
lean_dec_ref(v_inst_898_);
v___x_903_ = lean_apply_1(v_x_900_, v_a_901_);
v___x_904_ = lean_apply_3(v_withRef_902_, lean_box(0), v_ref_899_, v___x_903_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3(lean_object* v_00_u03c9_905_, lean_object* v_00_u03b1_906_, lean_object* v_00_u03b2_907_, lean_object* v_m_908_, lean_object* v_inst_909_, lean_object* v_inst_910_, lean_object* v_inst_911_, lean_object* v_inst_912_, lean_object* v_00_u03b1_913_, lean_object* v_ref_914_, lean_object* v_x_915_, lean_object* v_a_916_){
_start:
{
lean_object* v_withRef_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v_withRef_917_ = lean_ctor_get(v_inst_912_, 1);
lean_inc(v_withRef_917_);
lean_dec_ref(v_inst_912_);
v___x_918_ = lean_apply_1(v_x_915_, v_a_916_);
v___x_919_ = lean_apply_3(v_withRef_917_, lean_box(0), v_ref_914_, v___x_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3___boxed(lean_object* v_00_u03c9_920_, lean_object* v_00_u03b1_921_, lean_object* v_00_u03b2_922_, lean_object* v_m_923_, lean_object* v_inst_924_, lean_object* v_inst_925_, lean_object* v_inst_926_, lean_object* v_inst_927_, lean_object* v_00_u03b1_928_, lean_object* v_ref_929_, lean_object* v_x_930_, lean_object* v_a_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_MonadCacheT_instMonadRef___aux__3(v_00_u03c9_920_, v_00_u03b1_921_, v_00_u03b2_922_, v_m_923_, v_inst_924_, v_inst_925_, v_inst_926_, v_inst_927_, v_00_u03b1_928_, v_ref_929_, v_x_930_, v_a_931_);
lean_dec_ref(v_inst_926_);
lean_dec_ref(v_inst_925_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg(lean_object* v_inst_933_, lean_object* v_inst_934_, lean_object* v_inst_935_, lean_object* v_inst_936_){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
lean_inc_ref(v_inst_936_);
lean_inc_ref(v_inst_935_);
lean_inc_ref(v_inst_934_);
v___x_937_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadRef___aux__1___boxed), 9, 8);
lean_closure_set(v___x_937_, 0, lean_box(0));
lean_closure_set(v___x_937_, 1, lean_box(0));
lean_closure_set(v___x_937_, 2, lean_box(0));
lean_closure_set(v___x_937_, 3, lean_box(0));
lean_closure_set(v___x_937_, 4, v_inst_933_);
lean_closure_set(v___x_937_, 5, v_inst_934_);
lean_closure_set(v___x_937_, 6, v_inst_935_);
lean_closure_set(v___x_937_, 7, v_inst_936_);
v___x_938_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadRef___aux__3___boxed), 12, 8);
lean_closure_set(v___x_938_, 0, lean_box(0));
lean_closure_set(v___x_938_, 1, lean_box(0));
lean_closure_set(v___x_938_, 2, lean_box(0));
lean_closure_set(v___x_938_, 3, lean_box(0));
lean_closure_set(v___x_938_, 4, v_inst_933_);
lean_closure_set(v___x_938_, 5, v_inst_934_);
lean_closure_set(v___x_938_, 6, v_inst_935_);
lean_closure_set(v___x_938_, 7, v_inst_936_);
v___x_939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_939_, 0, v___x_937_);
lean_ctor_set(v___x_939_, 1, v___x_938_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef(lean_object* v_00_u03c9_940_, lean_object* v_00_u03b1_941_, lean_object* v_00_u03b2_942_, lean_object* v_m_943_, lean_object* v_inst_944_, lean_object* v_inst_945_, lean_object* v_inst_946_, lean_object* v_inst_947_){
_start:
{
lean_object* v___x_948_; 
v___x_948_ = l_Lean_MonadCacheT_instMonadRef___redArg(v_inst_944_, v_inst_945_, v_inst_946_, v_inst_947_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__1___redArg(lean_object* v_inst_949_){
_start:
{
lean_object* v_failure_950_; lean_object* v___x_951_; 
v_failure_950_ = lean_ctor_get(v_inst_949_, 1);
lean_inc(v_failure_950_);
lean_dec_ref(v_inst_949_);
v___x_951_ = lean_apply_1(v_failure_950_, lean_box(0));
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__1(lean_object* v_00_u03c9_952_, lean_object* v_00_u03b1_953_, lean_object* v_00_u03b2_954_, lean_object* v_m_955_, lean_object* v_inst_956_, lean_object* v_inst_957_, lean_object* v_inst_958_, lean_object* v_inst_959_, lean_object* v_00_u03b1_960_, lean_object* v_a_961_){
_start:
{
lean_object* v_failure_962_; lean_object* v___x_963_; 
v_failure_962_ = lean_ctor_get(v_inst_959_, 1);
lean_inc(v_failure_962_);
lean_dec_ref(v_inst_959_);
v___x_963_ = lean_apply_1(v_failure_962_, lean_box(0));
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__1___boxed(lean_object* v_00_u03c9_964_, lean_object* v_00_u03b1_965_, lean_object* v_00_u03b2_966_, lean_object* v_m_967_, lean_object* v_inst_968_, lean_object* v_inst_969_, lean_object* v_inst_970_, lean_object* v_inst_971_, lean_object* v_00_u03b1_972_, lean_object* v_a_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Lean_MonadCacheT_instAlternative___aux__1(v_00_u03c9_964_, v_00_u03b1_965_, v_00_u03b2_966_, v_m_967_, v_inst_968_, v_inst_969_, v_inst_970_, v_inst_971_, v_00_u03b1_972_, v_a_973_);
lean_dec(v_a_973_);
lean_dec_ref(v_inst_970_);
lean_dec_ref(v_inst_969_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___redArg(lean_object* v_inst_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_){
_start:
{
lean_object* v_orElse_979_; lean_object* v___f_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v_orElse_979_ = lean_ctor_get(v_inst_975_, 2);
lean_inc(v_orElse_979_);
lean_dec_ref(v_inst_975_);
lean_inc(v_a_978_);
v___f_980_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0), 3, 2);
lean_closure_set(v___f_980_, 0, v_a_977_);
lean_closure_set(v___f_980_, 1, v_a_978_);
v___x_981_ = lean_apply_1(v_a_976_, v_a_978_);
v___x_982_ = lean_apply_3(v_orElse_979_, lean_box(0), v___x_981_, v___f_980_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3(lean_object* v_00_u03c9_983_, lean_object* v_00_u03b1_984_, lean_object* v_00_u03b2_985_, lean_object* v_m_986_, lean_object* v_inst_987_, lean_object* v_inst_988_, lean_object* v_inst_989_, lean_object* v_inst_990_, lean_object* v_00_u03b1_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_){
_start:
{
lean_object* v_orElse_995_; lean_object* v___f_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v_orElse_995_ = lean_ctor_get(v_inst_990_, 2);
lean_inc(v_orElse_995_);
lean_dec_ref(v_inst_990_);
lean_inc(v_a_994_);
v___f_996_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0), 3, 2);
lean_closure_set(v___f_996_, 0, v_a_993_);
lean_closure_set(v___f_996_, 1, v_a_994_);
v___x_997_ = lean_apply_1(v_a_992_, v_a_994_);
v___x_998_ = lean_apply_3(v_orElse_995_, lean_box(0), v___x_997_, v___f_996_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___boxed(lean_object* v_00_u03c9_999_, lean_object* v_00_u03b1_1000_, lean_object* v_00_u03b2_1001_, lean_object* v_m_1002_, lean_object* v_inst_1003_, lean_object* v_inst_1004_, lean_object* v_inst_1005_, lean_object* v_inst_1006_, lean_object* v_00_u03b1_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lean_MonadCacheT_instAlternative___aux__3(v_00_u03c9_999_, v_00_u03b1_1000_, v_00_u03b2_1001_, v_m_1002_, v_inst_1003_, v_inst_1004_, v_inst_1005_, v_inst_1006_, v_00_u03b1_1007_, v_a_1008_, v_a_1009_, v_a_1010_);
lean_dec_ref(v_inst_1005_);
lean_dec_ref(v_inst_1004_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg(lean_object* v_inst_1012_, lean_object* v_inst_1013_, lean_object* v_inst_1014_, lean_object* v_inst_1015_, lean_object* v_inst_1016_){
_start:
{
lean_object* v___x_1017_; lean_object* v_toApplicative_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
lean_inc_ref(v_inst_1014_);
lean_inc_ref(v_inst_1013_);
v___x_1017_ = l_Lean_MonadCacheT_instMonad___redArg(v_inst_1012_, v_inst_1013_, v_inst_1014_, v_inst_1015_);
v_toApplicative_1018_ = lean_ctor_get(v___x_1017_, 0);
lean_inc_ref(v_toApplicative_1018_);
lean_dec_ref(v___x_1017_);
lean_inc_ref(v_inst_1016_);
lean_inc_ref(v_inst_1014_);
lean_inc_ref(v_inst_1013_);
v___x_1019_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instAlternative___aux__1___boxed), 10, 8);
lean_closure_set(v___x_1019_, 0, lean_box(0));
lean_closure_set(v___x_1019_, 1, lean_box(0));
lean_closure_set(v___x_1019_, 2, lean_box(0));
lean_closure_set(v___x_1019_, 3, lean_box(0));
lean_closure_set(v___x_1019_, 4, v_inst_1012_);
lean_closure_set(v___x_1019_, 5, v_inst_1013_);
lean_closure_set(v___x_1019_, 6, v_inst_1014_);
lean_closure_set(v___x_1019_, 7, v_inst_1016_);
v___x_1020_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instAlternative___aux__3___boxed), 12, 8);
lean_closure_set(v___x_1020_, 0, lean_box(0));
lean_closure_set(v___x_1020_, 1, lean_box(0));
lean_closure_set(v___x_1020_, 2, lean_box(0));
lean_closure_set(v___x_1020_, 3, lean_box(0));
lean_closure_set(v___x_1020_, 4, v_inst_1012_);
lean_closure_set(v___x_1020_, 5, v_inst_1013_);
lean_closure_set(v___x_1020_, 6, v_inst_1014_);
lean_closure_set(v___x_1020_, 7, v_inst_1016_);
v___x_1021_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1021_, 0, v_toApplicative_1018_);
lean_ctor_set(v___x_1021_, 1, v___x_1019_);
lean_ctor_set(v___x_1021_, 2, v___x_1020_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative(lean_object* v_00_u03c9_1022_, lean_object* v_00_u03b1_1023_, lean_object* v_00_u03b2_1024_, lean_object* v_m_1025_, lean_object* v_inst_1026_, lean_object* v_inst_1027_, lean_object* v_inst_1028_, lean_object* v_inst_1029_, lean_object* v_inst_1030_){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Lean_MonadCacheT_instAlternative___redArg(v_inst_1026_, v_inst_1027_, v_inst_1028_, v_inst_1029_, v_inst_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg___lam__0(lean_object* v_inst_1032_, lean_object* v_f_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v_toApplicative_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1046_; 
v_toApplicative_1035_ = lean_ctor_get(v_inst_1032_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v_inst_1032_);
if (v_isSharedCheck_1046_ == 0)
{
lean_object* v_unused_1047_; 
v_unused_1047_ = lean_ctor_get(v_inst_1032_, 1);
lean_dec(v_unused_1047_);
v___x_1037_ = v_inst_1032_;
v_isShared_1038_ = v_isSharedCheck_1046_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_toApplicative_1035_);
lean_dec(v_inst_1032_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1046_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v_toPure_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1043_; 
v_toPure_1039_ = lean_ctor_get(v_toApplicative_1035_, 1);
lean_inc(v_toPure_1039_);
lean_dec_ref(v_toApplicative_1035_);
v___x_1040_ = lean_box(0);
v___x_1041_ = lean_apply_1(v_f_1033_, v___y_1034_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 1, v___x_1041_);
lean_ctor_set(v___x_1037_, 0, v___x_1040_);
v___x_1043_ = v___x_1037_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_1040_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v___x_1041_);
v___x_1043_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
lean_object* v___x_1044_; 
v___x_1044_ = lean_apply_2(v_toPure_1039_, lean_box(0), v___x_1043_);
return v___x_1044_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg(lean_object* v_inst_1048_){
_start:
{
lean_object* v___f_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
lean_inc_ref(v_inst_1048_);
v___f_1049_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1049_, 0, v_inst_1048_);
v___x_1050_ = lean_alloc_closure((void*)(l_StateT_get), 4, 3);
lean_closure_set(v___x_1050_, 0, lean_box(0));
lean_closure_set(v___x_1050_, 1, lean_box(0));
lean_closure_set(v___x_1050_, 2, v_inst_1048_);
v___x_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
lean_ctor_set(v___x_1051_, 1, v___f_1049_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter(lean_object* v_00_u03b1_1052_, lean_object* v_00_u03b2_1053_, lean_object* v_m_1054_, lean_object* v_inst_1055_, lean_object* v_inst_1056_, lean_object* v_inst_1057_){
_start:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg(v_inst_1057_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___boxed(lean_object* v_00_u03b1_1059_, lean_object* v_00_u03b2_1060_, lean_object* v_m_1061_, lean_object* v_inst_1062_, lean_object* v_inst_1063_, lean_object* v_inst_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter(v_00_u03b1_1059_, v_00_u03b2_1060_, v_m_1061_, v_inst_1062_, v_inst_1063_, v_inst_1064_);
lean_dec_ref(v_inst_1063_);
lean_dec_ref(v_inst_1062_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg___lam__0(lean_object* v_x_1066_){
_start:
{
lean_object* v_fst_1067_; 
v_fst_1067_ = lean_ctor_get(v_x_1066_, 0);
lean_inc(v_fst_1067_);
return v_fst_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg___lam__0___boxed(lean_object* v_x_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lean_MonadStateCacheT_run___redArg___lam__0(v_x_1068_);
lean_dec_ref(v_x_1068_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg(lean_object* v_inst_1071_, lean_object* v_x_1072_){
_start:
{
lean_object* v_toApplicative_1073_; lean_object* v_toFunctor_1074_; lean_object* v_map_1075_; lean_object* v___f_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
v_toApplicative_1073_ = lean_ctor_get(v_inst_1071_, 0);
lean_inc_ref(v_toApplicative_1073_);
lean_dec_ref(v_inst_1071_);
v_toFunctor_1074_ = lean_ctor_get(v_toApplicative_1073_, 0);
lean_inc_ref(v_toFunctor_1074_);
lean_dec_ref(v_toApplicative_1073_);
v_map_1075_ = lean_ctor_get(v_toFunctor_1074_, 0);
lean_inc(v_map_1075_);
lean_dec_ref(v_toFunctor_1074_);
v___f_1076_ = ((lean_object*)(l_Lean_MonadStateCacheT_run___redArg___closed__0));
v___x_1077_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__1, &l_Lean_MonadCacheT_run___redArg___closed__1_once, _init_l_Lean_MonadCacheT_run___redArg___closed__1);
v___x_1078_ = lean_apply_1(v_x_1072_, v___x_1077_);
v___x_1079_ = lean_apply_4(v_map_1075_, lean_box(0), lean_box(0), v___f_1076_, v___x_1078_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run(lean_object* v_00_u03b1_1080_, lean_object* v_00_u03b2_1081_, lean_object* v_m_1082_, lean_object* v_inst_1083_, lean_object* v_inst_1084_, lean_object* v_inst_1085_, lean_object* v_00_u03c3_1086_, lean_object* v_x_1087_){
_start:
{
lean_object* v_toApplicative_1088_; lean_object* v_toFunctor_1089_; lean_object* v_map_1090_; lean_object* v___f_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v_toApplicative_1088_ = lean_ctor_get(v_inst_1085_, 0);
lean_inc_ref(v_toApplicative_1088_);
lean_dec_ref(v_inst_1085_);
v_toFunctor_1089_ = lean_ctor_get(v_toApplicative_1088_, 0);
lean_inc_ref(v_toFunctor_1089_);
lean_dec_ref(v_toApplicative_1088_);
v_map_1090_ = lean_ctor_get(v_toFunctor_1089_, 0);
lean_inc(v_map_1090_);
lean_dec_ref(v_toFunctor_1089_);
v___f_1091_ = ((lean_object*)(l_Lean_MonadStateCacheT_run___redArg___closed__0));
v___x_1092_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__1, &l_Lean_MonadCacheT_run___redArg___closed__1_once, _init_l_Lean_MonadCacheT_run___redArg___closed__1);
v___x_1093_ = lean_apply_1(v_x_1087_, v___x_1092_);
v___x_1094_ = lean_apply_4(v_map_1090_, lean_box(0), lean_box(0), v___f_1091_, v___x_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___boxed(lean_object* v_00_u03b1_1095_, lean_object* v_00_u03b2_1096_, lean_object* v_m_1097_, lean_object* v_inst_1098_, lean_object* v_inst_1099_, lean_object* v_inst_1100_, lean_object* v_00_u03c3_1101_, lean_object* v_x_1102_){
_start:
{
lean_object* v_res_1103_; 
v_res_1103_ = l_Lean_MonadStateCacheT_run(v_00_u03b1_1095_, v_00_u03b2_1096_, v_m_1097_, v_inst_1098_, v_inst_1099_, v_inst_1100_, v_00_u03c3_1101_, v_x_1102_);
lean_dec_ref(v_inst_1099_);
lean_dec_ref(v_inst_1098_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1___redArg___lam__0(lean_object* v_f_1104_, lean_object* v_toPure_1105_, lean_object* v_____x_1106_){
_start:
{
lean_object* v_fst_1107_; lean_object* v_snd_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1117_; 
v_fst_1107_ = lean_ctor_get(v_____x_1106_, 0);
v_snd_1108_ = lean_ctor_get(v_____x_1106_, 1);
v_isSharedCheck_1117_ = !lean_is_exclusive(v_____x_1106_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1110_ = v_____x_1106_;
v_isShared_1111_ = v_isSharedCheck_1117_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_snd_1108_);
lean_inc(v_fst_1107_);
lean_dec(v_____x_1106_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1117_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1112_; lean_object* v___x_1114_; 
v___x_1112_ = lean_apply_1(v_f_1104_, v_fst_1107_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 0, v___x_1112_);
v___x_1114_ = v___x_1110_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1112_);
lean_ctor_set(v_reuseFailAlloc_1116_, 1, v_snd_1108_);
v___x_1114_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
lean_object* v___x_1115_; 
v___x_1115_ = lean_apply_2(v_toPure_1105_, lean_box(0), v___x_1114_);
return v___x_1115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1___redArg(lean_object* v_inst_1118_, lean_object* v_f_1119_, lean_object* v_x_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v_toApplicative_1122_; lean_object* v_toBind_1123_; lean_object* v_toPure_1124_; lean_object* v___x_1125_; lean_object* v___f_1126_; lean_object* v___x_1127_; 
v_toApplicative_1122_ = lean_ctor_get(v_inst_1118_, 0);
lean_inc_ref(v_toApplicative_1122_);
v_toBind_1123_ = lean_ctor_get(v_inst_1118_, 1);
lean_inc(v_toBind_1123_);
lean_dec_ref(v_inst_1118_);
v_toPure_1124_ = lean_ctor_get(v_toApplicative_1122_, 1);
lean_inc(v_toPure_1124_);
lean_dec_ref(v_toApplicative_1122_);
v___x_1125_ = lean_apply_1(v_x_1120_, v_a_1121_);
v___f_1126_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1126_, 0, v_f_1119_);
lean_closure_set(v___f_1126_, 1, v_toPure_1124_);
v___x_1127_ = lean_apply_4(v_toBind_1123_, lean_box(0), lean_box(0), v___x_1125_, v___f_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1(lean_object* v_00_u03b1_1128_, lean_object* v_00_u03b2_1129_, lean_object* v_m_1130_, lean_object* v_inst_1131_, lean_object* v_inst_1132_, lean_object* v_inst_1133_, lean_object* v_00_u03b1_1134_, lean_object* v_00_u03b2_1135_, lean_object* v_f_1136_, lean_object* v_x_1137_, lean_object* v_a_1138_){
_start:
{
lean_object* v_toApplicative_1139_; lean_object* v_toBind_1140_; lean_object* v_toPure_1141_; lean_object* v___x_1142_; lean_object* v___f_1143_; lean_object* v___x_1144_; 
v_toApplicative_1139_ = lean_ctor_get(v_inst_1133_, 0);
lean_inc_ref(v_toApplicative_1139_);
v_toBind_1140_ = lean_ctor_get(v_inst_1133_, 1);
lean_inc(v_toBind_1140_);
lean_dec_ref(v_inst_1133_);
v_toPure_1141_ = lean_ctor_get(v_toApplicative_1139_, 1);
lean_inc(v_toPure_1141_);
lean_dec_ref(v_toApplicative_1139_);
v___x_1142_ = lean_apply_1(v_x_1137_, v_a_1138_);
v___f_1143_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1143_, 0, v_f_1136_);
lean_closure_set(v___f_1143_, 1, v_toPure_1141_);
v___x_1144_ = lean_apply_4(v_toBind_1140_, lean_box(0), lean_box(0), v___x_1142_, v___f_1143_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1___boxed(lean_object* v_00_u03b1_1145_, lean_object* v_00_u03b2_1146_, lean_object* v_m_1147_, lean_object* v_inst_1148_, lean_object* v_inst_1149_, lean_object* v_inst_1150_, lean_object* v_00_u03b1_1151_, lean_object* v_00_u03b2_1152_, lean_object* v_f_1153_, lean_object* v_x_1154_, lean_object* v_a_1155_){
_start:
{
lean_object* v_res_1156_; 
v_res_1156_ = l_Lean_MonadStateCacheT_instMonad___aux__1(v_00_u03b1_1145_, v_00_u03b2_1146_, v_m_1147_, v_inst_1148_, v_inst_1149_, v_inst_1150_, v_00_u03b1_1151_, v_00_u03b2_1152_, v_f_1153_, v_x_1154_, v_a_1155_);
lean_dec_ref(v_inst_1149_);
lean_dec_ref(v_inst_1148_);
return v_res_1156_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3___redArg___lam__0(lean_object* v_a_1157_, lean_object* v_toPure_1158_, lean_object* v_____x_1159_){
_start:
{
lean_object* v_snd_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1168_; 
v_snd_1160_ = lean_ctor_get(v_____x_1159_, 1);
v_isSharedCheck_1168_ = !lean_is_exclusive(v_____x_1159_);
if (v_isSharedCheck_1168_ == 0)
{
lean_object* v_unused_1169_; 
v_unused_1169_ = lean_ctor_get(v_____x_1159_, 0);
lean_dec(v_unused_1169_);
v___x_1162_ = v_____x_1159_;
v_isShared_1163_ = v_isSharedCheck_1168_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_snd_1160_);
lean_dec(v_____x_1159_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1168_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1165_; 
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v_a_1157_);
v___x_1165_ = v___x_1162_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_a_1157_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v_snd_1160_);
v___x_1165_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
lean_object* v___x_1166_; 
v___x_1166_ = lean_apply_2(v_toPure_1158_, lean_box(0), v___x_1165_);
return v___x_1166_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3___redArg(lean_object* v_inst_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_){
_start:
{
lean_object* v_toApplicative_1174_; lean_object* v_toBind_1175_; lean_object* v_toPure_1176_; lean_object* v___x_1177_; lean_object* v___f_1178_; lean_object* v___x_1179_; 
v_toApplicative_1174_ = lean_ctor_get(v_inst_1170_, 0);
lean_inc_ref(v_toApplicative_1174_);
v_toBind_1175_ = lean_ctor_get(v_inst_1170_, 1);
lean_inc(v_toBind_1175_);
lean_dec_ref(v_inst_1170_);
v_toPure_1176_ = lean_ctor_get(v_toApplicative_1174_, 1);
lean_inc(v_toPure_1176_);
lean_dec_ref(v_toApplicative_1174_);
v___x_1177_ = lean_apply_1(v_a_1172_, v_a_1173_);
v___f_1178_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1178_, 0, v_a_1171_);
lean_closure_set(v___f_1178_, 1, v_toPure_1176_);
v___x_1179_ = lean_apply_4(v_toBind_1175_, lean_box(0), lean_box(0), v___x_1177_, v___f_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3(lean_object* v_00_u03b1_1180_, lean_object* v_00_u03b2_1181_, lean_object* v_m_1182_, lean_object* v_inst_1183_, lean_object* v_inst_1184_, lean_object* v_inst_1185_, lean_object* v_00_u03b1_1186_, lean_object* v_00_u03b2_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_){
_start:
{
lean_object* v_toApplicative_1191_; lean_object* v_toBind_1192_; lean_object* v_toPure_1193_; lean_object* v___x_1194_; lean_object* v___f_1195_; lean_object* v___x_1196_; 
v_toApplicative_1191_ = lean_ctor_get(v_inst_1185_, 0);
lean_inc_ref(v_toApplicative_1191_);
v_toBind_1192_ = lean_ctor_get(v_inst_1185_, 1);
lean_inc(v_toBind_1192_);
lean_dec_ref(v_inst_1185_);
v_toPure_1193_ = lean_ctor_get(v_toApplicative_1191_, 1);
lean_inc(v_toPure_1193_);
lean_dec_ref(v_toApplicative_1191_);
v___x_1194_ = lean_apply_1(v_a_1189_, v_a_1190_);
v___f_1195_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1195_, 0, v_a_1188_);
lean_closure_set(v___f_1195_, 1, v_toPure_1193_);
v___x_1196_ = lean_apply_4(v_toBind_1192_, lean_box(0), lean_box(0), v___x_1194_, v___f_1195_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3___boxed(lean_object* v_00_u03b1_1197_, lean_object* v_00_u03b2_1198_, lean_object* v_m_1199_, lean_object* v_inst_1200_, lean_object* v_inst_1201_, lean_object* v_inst_1202_, lean_object* v_00_u03b1_1203_, lean_object* v_00_u03b2_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l_Lean_MonadStateCacheT_instMonad___aux__3(v_00_u03b1_1197_, v_00_u03b2_1198_, v_m_1199_, v_inst_1200_, v_inst_1201_, v_inst_1202_, v_00_u03b1_1203_, v_00_u03b2_1204_, v_a_1205_, v_a_1206_, v_a_1207_);
lean_dec_ref(v_inst_1201_);
lean_dec_ref(v_inst_1200_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__5___redArg(lean_object* v_inst_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_){
_start:
{
lean_object* v_toApplicative_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1221_; 
v_toApplicative_1212_ = lean_ctor_get(v_inst_1209_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v_inst_1209_);
if (v_isSharedCheck_1221_ == 0)
{
lean_object* v_unused_1222_; 
v_unused_1222_ = lean_ctor_get(v_inst_1209_, 1);
lean_dec(v_unused_1222_);
v___x_1214_ = v_inst_1209_;
v_isShared_1215_ = v_isSharedCheck_1221_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_toApplicative_1212_);
lean_dec(v_inst_1209_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1221_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v_toPure_1216_; lean_object* v___x_1218_; 
v_toPure_1216_ = lean_ctor_get(v_toApplicative_1212_, 1);
lean_inc(v_toPure_1216_);
lean_dec_ref(v_toApplicative_1212_);
if (v_isShared_1215_ == 0)
{
lean_ctor_set(v___x_1214_, 1, v_a_1211_);
lean_ctor_set(v___x_1214_, 0, v_a_1210_);
v___x_1218_ = v___x_1214_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1210_);
lean_ctor_set(v_reuseFailAlloc_1220_, 1, v_a_1211_);
v___x_1218_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
lean_object* v___x_1219_; 
v___x_1219_ = lean_apply_2(v_toPure_1216_, lean_box(0), v___x_1218_);
return v___x_1219_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__5(lean_object* v_00_u03b1_1223_, lean_object* v_00_u03b2_1224_, lean_object* v_m_1225_, lean_object* v_inst_1226_, lean_object* v_inst_1227_, lean_object* v_inst_1228_, lean_object* v_00_u03b1_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_){
_start:
{
lean_object* v_toApplicative_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1241_; 
v_toApplicative_1232_ = lean_ctor_get(v_inst_1228_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_inst_1228_);
if (v_isSharedCheck_1241_ == 0)
{
lean_object* v_unused_1242_; 
v_unused_1242_ = lean_ctor_get(v_inst_1228_, 1);
lean_dec(v_unused_1242_);
v___x_1234_ = v_inst_1228_;
v_isShared_1235_ = v_isSharedCheck_1241_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_toApplicative_1232_);
lean_dec(v_inst_1228_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1241_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v_toPure_1236_; lean_object* v___x_1238_; 
v_toPure_1236_ = lean_ctor_get(v_toApplicative_1232_, 1);
lean_inc(v_toPure_1236_);
lean_dec_ref(v_toApplicative_1232_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 1, v_a_1231_);
lean_ctor_set(v___x_1234_, 0, v_a_1230_);
v___x_1238_ = v___x_1234_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1230_);
lean_ctor_set(v_reuseFailAlloc_1240_, 1, v_a_1231_);
v___x_1238_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
lean_object* v___x_1239_; 
v___x_1239_ = lean_apply_2(v_toPure_1236_, lean_box(0), v___x_1238_);
return v___x_1239_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__5___boxed(lean_object* v_00_u03b1_1243_, lean_object* v_00_u03b2_1244_, lean_object* v_m_1245_, lean_object* v_inst_1246_, lean_object* v_inst_1247_, lean_object* v_inst_1248_, lean_object* v_00_u03b1_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Lean_MonadStateCacheT_instMonad___aux__5(v_00_u03b1_1243_, v_00_u03b2_1244_, v_m_1245_, v_inst_1246_, v_inst_1247_, v_inst_1248_, v_00_u03b1_1249_, v_a_1250_, v_a_1251_);
lean_dec_ref(v_inst_1247_);
lean_dec_ref(v_inst_1246_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__0(lean_object* v_fst_1253_, lean_object* v_toPure_1254_, lean_object* v_____x_1255_){
_start:
{
lean_object* v_fst_1256_; lean_object* v_snd_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1266_; 
v_fst_1256_ = lean_ctor_get(v_____x_1255_, 0);
v_snd_1257_ = lean_ctor_get(v_____x_1255_, 1);
v_isSharedCheck_1266_ = !lean_is_exclusive(v_____x_1255_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1259_ = v_____x_1255_;
v_isShared_1260_ = v_isSharedCheck_1266_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_snd_1257_);
lean_inc(v_fst_1256_);
lean_dec(v_____x_1255_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1266_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1261_; lean_object* v___x_1263_; 
v___x_1261_ = lean_apply_1(v_fst_1253_, v_fst_1256_);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 0, v___x_1261_);
v___x_1263_ = v___x_1259_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1261_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v_snd_1257_);
v___x_1263_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
lean_object* v___x_1264_; 
v___x_1264_ = lean_apply_2(v_toPure_1254_, lean_box(0), v___x_1263_);
return v___x_1264_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__1(lean_object* v_toApplicative_1267_, lean_object* v_x_1268_, lean_object* v_toBind_1269_, lean_object* v_____x_1270_){
_start:
{
lean_object* v_fst_1271_; lean_object* v_snd_1272_; lean_object* v_toPure_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___f_1276_; lean_object* v___x_1277_; 
v_fst_1271_ = lean_ctor_get(v_____x_1270_, 0);
lean_inc(v_fst_1271_);
v_snd_1272_ = lean_ctor_get(v_____x_1270_, 1);
lean_inc(v_snd_1272_);
lean_dec_ref(v_____x_1270_);
v_toPure_1273_ = lean_ctor_get(v_toApplicative_1267_, 1);
lean_inc(v_toPure_1273_);
lean_dec_ref(v_toApplicative_1267_);
v___x_1274_ = lean_box(0);
v___x_1275_ = lean_apply_2(v_x_1268_, v___x_1274_, v_snd_1272_);
v___f_1276_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1276_, 0, v_fst_1271_);
lean_closure_set(v___f_1276_, 1, v_toPure_1273_);
v___x_1277_ = lean_apply_4(v_toBind_1269_, lean_box(0), lean_box(0), v___x_1275_, v___f_1276_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___redArg(lean_object* v_inst_1278_, lean_object* v_f_1279_, lean_object* v_x_1280_, lean_object* v_a_1281_){
_start:
{
lean_object* v_toApplicative_1282_; lean_object* v_toBind_1283_; lean_object* v___f_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v_toApplicative_1282_ = lean_ctor_get(v_inst_1278_, 0);
lean_inc_ref(v_toApplicative_1282_);
v_toBind_1283_ = lean_ctor_get(v_inst_1278_, 1);
lean_inc(v_toBind_1283_);
lean_dec_ref(v_inst_1278_);
lean_inc(v_toBind_1283_);
v___f_1284_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1284_, 0, v_toApplicative_1282_);
lean_closure_set(v___f_1284_, 1, v_x_1280_);
lean_closure_set(v___f_1284_, 2, v_toBind_1283_);
v___x_1285_ = lean_apply_1(v_f_1279_, v_a_1281_);
v___x_1286_ = lean_apply_4(v_toBind_1283_, lean_box(0), lean_box(0), v___x_1285_, v___f_1284_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7(lean_object* v_00_u03b1_1287_, lean_object* v_00_u03b2_1288_, lean_object* v_m_1289_, lean_object* v_inst_1290_, lean_object* v_inst_1291_, lean_object* v_inst_1292_, lean_object* v_00_u03b1_1293_, lean_object* v_00_u03b2_1294_, lean_object* v_f_1295_, lean_object* v_x_1296_, lean_object* v_a_1297_){
_start:
{
lean_object* v_toApplicative_1298_; lean_object* v_toBind_1299_; lean_object* v___f_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v_toApplicative_1298_ = lean_ctor_get(v_inst_1292_, 0);
lean_inc_ref(v_toApplicative_1298_);
v_toBind_1299_ = lean_ctor_get(v_inst_1292_, 1);
lean_inc(v_toBind_1299_);
lean_dec_ref(v_inst_1292_);
lean_inc(v_toBind_1299_);
v___f_1300_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1300_, 0, v_toApplicative_1298_);
lean_closure_set(v___f_1300_, 1, v_x_1296_);
lean_closure_set(v___f_1300_, 2, v_toBind_1299_);
v___x_1301_ = lean_apply_1(v_f_1295_, v_a_1297_);
v___x_1302_ = lean_apply_4(v_toBind_1299_, lean_box(0), lean_box(0), v___x_1301_, v___f_1300_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___boxed(lean_object* v_00_u03b1_1303_, lean_object* v_00_u03b2_1304_, lean_object* v_m_1305_, lean_object* v_inst_1306_, lean_object* v_inst_1307_, lean_object* v_inst_1308_, lean_object* v_00_u03b1_1309_, lean_object* v_00_u03b2_1310_, lean_object* v_f_1311_, lean_object* v_x_1312_, lean_object* v_a_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Lean_MonadStateCacheT_instMonad___aux__7(v_00_u03b1_1303_, v_00_u03b2_1304_, v_m_1305_, v_inst_1306_, v_inst_1307_, v_inst_1308_, v_00_u03b1_1309_, v_00_u03b2_1310_, v_f_1311_, v_x_1312_, v_a_1313_);
lean_dec_ref(v_inst_1307_);
lean_dec_ref(v_inst_1306_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__0(lean_object* v_toApplicative_1315_, lean_object* v_fst_1316_, lean_object* v_____x_1317_){
_start:
{
lean_object* v_snd_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1327_; 
v_snd_1318_ = lean_ctor_get(v_____x_1317_, 1);
v_isSharedCheck_1327_ = !lean_is_exclusive(v_____x_1317_);
if (v_isSharedCheck_1327_ == 0)
{
lean_object* v_unused_1328_; 
v_unused_1328_ = lean_ctor_get(v_____x_1317_, 0);
lean_dec(v_unused_1328_);
v___x_1320_ = v_____x_1317_;
v_isShared_1321_ = v_isSharedCheck_1327_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_snd_1318_);
lean_dec(v_____x_1317_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1327_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v_toPure_1322_; lean_object* v___x_1324_; 
v_toPure_1322_ = lean_ctor_get(v_toApplicative_1315_, 1);
lean_inc(v_toPure_1322_);
lean_dec_ref(v_toApplicative_1315_);
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 0, v_fst_1316_);
v___x_1324_ = v___x_1320_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_fst_1316_);
lean_ctor_set(v_reuseFailAlloc_1326_, 1, v_snd_1318_);
v___x_1324_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_object* v___x_1325_; 
v___x_1325_ = lean_apply_2(v_toPure_1322_, lean_box(0), v___x_1324_);
return v___x_1325_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__1(lean_object* v_toApplicative_1329_, lean_object* v_y_1330_, lean_object* v_toBind_1331_, lean_object* v_____x_1332_){
_start:
{
lean_object* v_fst_1333_; lean_object* v_snd_1334_; lean_object* v___f_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v_fst_1333_ = lean_ctor_get(v_____x_1332_, 0);
lean_inc(v_fst_1333_);
v_snd_1334_ = lean_ctor_get(v_____x_1332_, 1);
lean_inc(v_snd_1334_);
lean_dec_ref(v_____x_1332_);
v___f_1335_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1335_, 0, v_toApplicative_1329_);
lean_closure_set(v___f_1335_, 1, v_fst_1333_);
v___x_1336_ = lean_box(0);
v___x_1337_ = lean_apply_2(v_y_1330_, v___x_1336_, v_snd_1334_);
v___x_1338_ = lean_apply_4(v_toBind_1331_, lean_box(0), lean_box(0), v___x_1337_, v___f_1335_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___redArg(lean_object* v_inst_1339_, lean_object* v_x_1340_, lean_object* v_y_1341_, lean_object* v_a_1342_){
_start:
{
lean_object* v_toApplicative_1343_; lean_object* v_toBind_1344_; lean_object* v___f_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v_toApplicative_1343_ = lean_ctor_get(v_inst_1339_, 0);
lean_inc_ref(v_toApplicative_1343_);
v_toBind_1344_ = lean_ctor_get(v_inst_1339_, 1);
lean_inc(v_toBind_1344_);
lean_dec_ref(v_inst_1339_);
lean_inc(v_toBind_1344_);
v___f_1345_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1345_, 0, v_toApplicative_1343_);
lean_closure_set(v___f_1345_, 1, v_y_1341_);
lean_closure_set(v___f_1345_, 2, v_toBind_1344_);
v___x_1346_ = lean_apply_1(v_x_1340_, v_a_1342_);
v___x_1347_ = lean_apply_4(v_toBind_1344_, lean_box(0), lean_box(0), v___x_1346_, v___f_1345_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9(lean_object* v_00_u03b1_1348_, lean_object* v_00_u03b2_1349_, lean_object* v_m_1350_, lean_object* v_inst_1351_, lean_object* v_inst_1352_, lean_object* v_inst_1353_, lean_object* v_00_u03b1_1354_, lean_object* v_00_u03b2_1355_, lean_object* v_x_1356_, lean_object* v_y_1357_, lean_object* v_a_1358_){
_start:
{
lean_object* v_toApplicative_1359_; lean_object* v_toBind_1360_; lean_object* v___f_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v_toApplicative_1359_ = lean_ctor_get(v_inst_1353_, 0);
lean_inc_ref(v_toApplicative_1359_);
v_toBind_1360_ = lean_ctor_get(v_inst_1353_, 1);
lean_inc(v_toBind_1360_);
lean_dec_ref(v_inst_1353_);
lean_inc(v_toBind_1360_);
v___f_1361_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1361_, 0, v_toApplicative_1359_);
lean_closure_set(v___f_1361_, 1, v_y_1357_);
lean_closure_set(v___f_1361_, 2, v_toBind_1360_);
v___x_1362_ = lean_apply_1(v_x_1356_, v_a_1358_);
v___x_1363_ = lean_apply_4(v_toBind_1360_, lean_box(0), lean_box(0), v___x_1362_, v___f_1361_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___boxed(lean_object* v_00_u03b1_1364_, lean_object* v_00_u03b2_1365_, lean_object* v_m_1366_, lean_object* v_inst_1367_, lean_object* v_inst_1368_, lean_object* v_inst_1369_, lean_object* v_00_u03b1_1370_, lean_object* v_00_u03b2_1371_, lean_object* v_x_1372_, lean_object* v_y_1373_, lean_object* v_a_1374_){
_start:
{
lean_object* v_res_1375_; 
v_res_1375_ = l_Lean_MonadStateCacheT_instMonad___aux__9(v_00_u03b1_1364_, v_00_u03b2_1365_, v_m_1366_, v_inst_1367_, v_inst_1368_, v_inst_1369_, v_00_u03b1_1370_, v_00_u03b2_1371_, v_x_1372_, v_y_1373_, v_a_1374_);
lean_dec_ref(v_inst_1368_);
lean_dec_ref(v_inst_1367_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11___redArg___lam__0(lean_object* v_y_1376_, lean_object* v_____x_1377_){
_start:
{
lean_object* v_snd_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v_snd_1378_ = lean_ctor_get(v_____x_1377_, 1);
lean_inc(v_snd_1378_);
lean_dec_ref(v_____x_1377_);
v___x_1379_ = lean_box(0);
v___x_1380_ = lean_apply_2(v_y_1376_, v___x_1379_, v_snd_1378_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11___redArg(lean_object* v_inst_1381_, lean_object* v_x_1382_, lean_object* v_y_1383_, lean_object* v_a_1384_){
_start:
{
lean_object* v_toBind_1385_; lean_object* v___f_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
v_toBind_1385_ = lean_ctor_get(v_inst_1381_, 1);
lean_inc(v_toBind_1385_);
lean_dec_ref(v_inst_1381_);
v___f_1386_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__11___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1386_, 0, v_y_1383_);
v___x_1387_ = lean_apply_1(v_x_1382_, v_a_1384_);
v___x_1388_ = lean_apply_4(v_toBind_1385_, lean_box(0), lean_box(0), v___x_1387_, v___f_1386_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11(lean_object* v_00_u03b1_1389_, lean_object* v_00_u03b2_1390_, lean_object* v_m_1391_, lean_object* v_inst_1392_, lean_object* v_inst_1393_, lean_object* v_inst_1394_, lean_object* v_00_u03b1_1395_, lean_object* v_00_u03b2_1396_, lean_object* v_x_1397_, lean_object* v_y_1398_, lean_object* v_a_1399_){
_start:
{
lean_object* v_toBind_1400_; lean_object* v___f_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v_toBind_1400_ = lean_ctor_get(v_inst_1394_, 1);
lean_inc(v_toBind_1400_);
lean_dec_ref(v_inst_1394_);
v___f_1401_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__11___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1401_, 0, v_y_1398_);
v___x_1402_ = lean_apply_1(v_x_1397_, v_a_1399_);
v___x_1403_ = lean_apply_4(v_toBind_1400_, lean_box(0), lean_box(0), v___x_1402_, v___f_1401_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11___boxed(lean_object* v_00_u03b1_1404_, lean_object* v_00_u03b2_1405_, lean_object* v_m_1406_, lean_object* v_inst_1407_, lean_object* v_inst_1408_, lean_object* v_inst_1409_, lean_object* v_00_u03b1_1410_, lean_object* v_00_u03b2_1411_, lean_object* v_x_1412_, lean_object* v_y_1413_, lean_object* v_a_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_Lean_MonadStateCacheT_instMonad___aux__11(v_00_u03b1_1404_, v_00_u03b2_1405_, v_m_1406_, v_inst_1407_, v_inst_1408_, v_inst_1409_, v_00_u03b1_1410_, v_00_u03b2_1411_, v_x_1412_, v_y_1413_, v_a_1414_);
lean_dec_ref(v_inst_1408_);
lean_dec_ref(v_inst_1407_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13___redArg___lam__0(lean_object* v_f_1416_, lean_object* v_____x_1417_){
_start:
{
lean_object* v_fst_1418_; lean_object* v_snd_1419_; lean_object* v___x_1420_; 
v_fst_1418_ = lean_ctor_get(v_____x_1417_, 0);
lean_inc(v_fst_1418_);
v_snd_1419_ = lean_ctor_get(v_____x_1417_, 1);
lean_inc(v_snd_1419_);
lean_dec_ref(v_____x_1417_);
v___x_1420_ = lean_apply_2(v_f_1416_, v_fst_1418_, v_snd_1419_);
return v___x_1420_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13___redArg(lean_object* v_inst_1421_, lean_object* v_x_1422_, lean_object* v_f_1423_, lean_object* v_a_1424_){
_start:
{
lean_object* v_toBind_1425_; lean_object* v___f_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v_toBind_1425_ = lean_ctor_get(v_inst_1421_, 1);
lean_inc(v_toBind_1425_);
lean_dec_ref(v_inst_1421_);
v___f_1426_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__13___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1426_, 0, v_f_1423_);
v___x_1427_ = lean_apply_1(v_x_1422_, v_a_1424_);
v___x_1428_ = lean_apply_4(v_toBind_1425_, lean_box(0), lean_box(0), v___x_1427_, v___f_1426_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13(lean_object* v_00_u03b1_1429_, lean_object* v_00_u03b2_1430_, lean_object* v_m_1431_, lean_object* v_inst_1432_, lean_object* v_inst_1433_, lean_object* v_inst_1434_, lean_object* v_00_u03b1_1435_, lean_object* v_00_u03b2_1436_, lean_object* v_x_1437_, lean_object* v_f_1438_, lean_object* v_a_1439_){
_start:
{
lean_object* v_toBind_1440_; lean_object* v___f_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v_toBind_1440_ = lean_ctor_get(v_inst_1434_, 1);
lean_inc(v_toBind_1440_);
lean_dec_ref(v_inst_1434_);
v___f_1441_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__13___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1441_, 0, v_f_1438_);
v___x_1442_ = lean_apply_1(v_x_1437_, v_a_1439_);
v___x_1443_ = lean_apply_4(v_toBind_1440_, lean_box(0), lean_box(0), v___x_1442_, v___f_1441_);
return v___x_1443_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13___boxed(lean_object* v_00_u03b1_1444_, lean_object* v_00_u03b2_1445_, lean_object* v_m_1446_, lean_object* v_inst_1447_, lean_object* v_inst_1448_, lean_object* v_inst_1449_, lean_object* v_00_u03b1_1450_, lean_object* v_00_u03b2_1451_, lean_object* v_x_1452_, lean_object* v_f_1453_, lean_object* v_a_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l_Lean_MonadStateCacheT_instMonad___aux__13(v_00_u03b1_1444_, v_00_u03b2_1445_, v_m_1446_, v_inst_1447_, v_inst_1448_, v_inst_1449_, v_00_u03b1_1450_, v_00_u03b2_1451_, v_x_1452_, v_f_1453_, v_a_1454_);
lean_dec_ref(v_inst_1448_);
lean_dec_ref(v_inst_1447_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg(lean_object* v_inst_1456_, lean_object* v_inst_1457_, lean_object* v_inst_1458_){
_start:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
lean_inc_ref(v_inst_1458_);
lean_inc_ref(v_inst_1457_);
lean_inc_ref(v_inst_1456_);
v___x_1459_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__1___boxed), 11, 6);
lean_closure_set(v___x_1459_, 0, lean_box(0));
lean_closure_set(v___x_1459_, 1, lean_box(0));
lean_closure_set(v___x_1459_, 2, lean_box(0));
lean_closure_set(v___x_1459_, 3, v_inst_1456_);
lean_closure_set(v___x_1459_, 4, v_inst_1457_);
lean_closure_set(v___x_1459_, 5, v_inst_1458_);
lean_inc_ref(v_inst_1458_);
lean_inc_ref(v_inst_1457_);
lean_inc_ref(v_inst_1456_);
v___x_1460_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__3___boxed), 11, 6);
lean_closure_set(v___x_1460_, 0, lean_box(0));
lean_closure_set(v___x_1460_, 1, lean_box(0));
lean_closure_set(v___x_1460_, 2, lean_box(0));
lean_closure_set(v___x_1460_, 3, v_inst_1456_);
lean_closure_set(v___x_1460_, 4, v_inst_1457_);
lean_closure_set(v___x_1460_, 5, v_inst_1458_);
v___x_1461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1459_);
lean_ctor_set(v___x_1461_, 1, v___x_1460_);
lean_inc_ref(v_inst_1458_);
lean_inc_ref(v_inst_1457_);
lean_inc_ref(v_inst_1456_);
v___x_1462_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__5___boxed), 9, 6);
lean_closure_set(v___x_1462_, 0, lean_box(0));
lean_closure_set(v___x_1462_, 1, lean_box(0));
lean_closure_set(v___x_1462_, 2, lean_box(0));
lean_closure_set(v___x_1462_, 3, v_inst_1456_);
lean_closure_set(v___x_1462_, 4, v_inst_1457_);
lean_closure_set(v___x_1462_, 5, v_inst_1458_);
lean_inc_ref(v_inst_1458_);
lean_inc_ref(v_inst_1457_);
lean_inc_ref(v_inst_1456_);
v___x_1463_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__7___boxed), 11, 6);
lean_closure_set(v___x_1463_, 0, lean_box(0));
lean_closure_set(v___x_1463_, 1, lean_box(0));
lean_closure_set(v___x_1463_, 2, lean_box(0));
lean_closure_set(v___x_1463_, 3, v_inst_1456_);
lean_closure_set(v___x_1463_, 4, v_inst_1457_);
lean_closure_set(v___x_1463_, 5, v_inst_1458_);
lean_inc_ref(v_inst_1458_);
lean_inc_ref(v_inst_1457_);
lean_inc_ref(v_inst_1456_);
v___x_1464_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__9___boxed), 11, 6);
lean_closure_set(v___x_1464_, 0, lean_box(0));
lean_closure_set(v___x_1464_, 1, lean_box(0));
lean_closure_set(v___x_1464_, 2, lean_box(0));
lean_closure_set(v___x_1464_, 3, v_inst_1456_);
lean_closure_set(v___x_1464_, 4, v_inst_1457_);
lean_closure_set(v___x_1464_, 5, v_inst_1458_);
lean_inc_ref(v_inst_1458_);
lean_inc_ref(v_inst_1457_);
lean_inc_ref(v_inst_1456_);
v___x_1465_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__11___boxed), 11, 6);
lean_closure_set(v___x_1465_, 0, lean_box(0));
lean_closure_set(v___x_1465_, 1, lean_box(0));
lean_closure_set(v___x_1465_, 2, lean_box(0));
lean_closure_set(v___x_1465_, 3, v_inst_1456_);
lean_closure_set(v___x_1465_, 4, v_inst_1457_);
lean_closure_set(v___x_1465_, 5, v_inst_1458_);
v___x_1466_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1461_);
lean_ctor_set(v___x_1466_, 1, v___x_1462_);
lean_ctor_set(v___x_1466_, 2, v___x_1463_);
lean_ctor_set(v___x_1466_, 3, v___x_1464_);
lean_ctor_set(v___x_1466_, 4, v___x_1465_);
v___x_1467_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__13___boxed), 11, 6);
lean_closure_set(v___x_1467_, 0, lean_box(0));
lean_closure_set(v___x_1467_, 1, lean_box(0));
lean_closure_set(v___x_1467_, 2, lean_box(0));
lean_closure_set(v___x_1467_, 3, v_inst_1456_);
lean_closure_set(v___x_1467_, 4, v_inst_1457_);
lean_closure_set(v___x_1467_, 5, v_inst_1458_);
v___x_1468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1466_);
lean_ctor_set(v___x_1468_, 1, v___x_1467_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad(lean_object* v_00_u03b1_1469_, lean_object* v_00_u03b2_1470_, lean_object* v_m_1471_, lean_object* v_inst_1472_, lean_object* v_inst_1473_, lean_object* v_inst_1474_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = l_Lean_MonadStateCacheT_instMonad___redArg(v_inst_1472_, v_inst_1473_, v_inst_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg___lam__0(lean_object* v_a_1476_, lean_object* v_toPure_1477_, lean_object* v_a_1478_){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1479_, 0, v_a_1478_);
lean_ctor_set(v___x_1479_, 1, v_a_1476_);
v___x_1480_ = lean_apply_2(v_toPure_1477_, lean_box(0), v___x_1479_);
return v___x_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg(lean_object* v_inst_1481_, lean_object* v_t_1482_, lean_object* v_a_1483_){
_start:
{
lean_object* v_toApplicative_1484_; lean_object* v_toBind_1485_; lean_object* v_toPure_1486_; lean_object* v___f_1487_; lean_object* v___x_1488_; 
v_toApplicative_1484_ = lean_ctor_get(v_inst_1481_, 0);
lean_inc_ref(v_toApplicative_1484_);
v_toBind_1485_ = lean_ctor_get(v_inst_1481_, 1);
lean_inc(v_toBind_1485_);
lean_dec_ref(v_inst_1481_);
v_toPure_1486_ = lean_ctor_get(v_toApplicative_1484_, 1);
lean_inc(v_toPure_1486_);
lean_dec_ref(v_toApplicative_1484_);
v___f_1487_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1487_, 0, v_a_1483_);
lean_closure_set(v___f_1487_, 1, v_toPure_1486_);
v___x_1488_ = lean_apply_4(v_toBind_1485_, lean_box(0), lean_box(0), v_t_1482_, v___f_1487_);
return v___x_1488_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1(lean_object* v_00_u03b1_1489_, lean_object* v_00_u03b2_1490_, lean_object* v_m_1491_, lean_object* v_inst_1492_, lean_object* v_inst_1493_, lean_object* v_inst_1494_, lean_object* v_00_u03b1_1495_, lean_object* v_t_1496_, lean_object* v_a_1497_){
_start:
{
lean_object* v_toApplicative_1498_; lean_object* v_toBind_1499_; lean_object* v_toPure_1500_; lean_object* v___f_1501_; lean_object* v___x_1502_; 
v_toApplicative_1498_ = lean_ctor_get(v_inst_1494_, 0);
lean_inc_ref(v_toApplicative_1498_);
v_toBind_1499_ = lean_ctor_get(v_inst_1494_, 1);
lean_inc(v_toBind_1499_);
lean_dec_ref(v_inst_1494_);
v_toPure_1500_ = lean_ctor_get(v_toApplicative_1498_, 1);
lean_inc(v_toPure_1500_);
lean_dec_ref(v_toApplicative_1498_);
v___f_1501_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1501_, 0, v_a_1497_);
lean_closure_set(v___f_1501_, 1, v_toPure_1500_);
v___x_1502_ = lean_apply_4(v_toBind_1499_, lean_box(0), lean_box(0), v_t_1496_, v___f_1501_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1___boxed(lean_object* v_00_u03b1_1503_, lean_object* v_00_u03b2_1504_, lean_object* v_m_1505_, lean_object* v_inst_1506_, lean_object* v_inst_1507_, lean_object* v_inst_1508_, lean_object* v_00_u03b1_1509_, lean_object* v_t_1510_, lean_object* v_a_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l_Lean_MonadStateCacheT_instMonadLift___aux__1(v_00_u03b1_1503_, v_00_u03b2_1504_, v_m_1505_, v_inst_1506_, v_inst_1507_, v_inst_1508_, v_00_u03b1_1509_, v_t_1510_, v_a_1511_);
lean_dec_ref(v_inst_1507_);
lean_dec_ref(v_inst_1506_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___redArg(lean_object* v_inst_1513_, lean_object* v_inst_1514_, lean_object* v_inst_1515_){
_start:
{
lean_object* v___x_1516_; 
v___x_1516_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___aux__1___boxed), 9, 6);
lean_closure_set(v___x_1516_, 0, lean_box(0));
lean_closure_set(v___x_1516_, 1, lean_box(0));
lean_closure_set(v___x_1516_, 2, lean_box(0));
lean_closure_set(v___x_1516_, 3, v_inst_1513_);
lean_closure_set(v___x_1516_, 4, v_inst_1514_);
lean_closure_set(v___x_1516_, 5, v_inst_1515_);
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift(lean_object* v_00_u03b1_1517_, lean_object* v_00_u03b2_1518_, lean_object* v_m_1519_, lean_object* v_inst_1520_, lean_object* v_inst_1521_, lean_object* v_inst_1522_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___aux__1___boxed), 9, 6);
lean_closure_set(v___x_1523_, 0, lean_box(0));
lean_closure_set(v___x_1523_, 1, lean_box(0));
lean_closure_set(v___x_1523_, 2, lean_box(0));
lean_closure_set(v___x_1523_, 3, v_inst_1520_);
lean_closure_set(v___x_1523_, 4, v_inst_1521_);
lean_closure_set(v___x_1523_, 5, v_inst_1522_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1___redArg(lean_object* v_inst_1524_, lean_object* v_inst_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_){
_start:
{
lean_object* v_toApplicative_1528_; lean_object* v_throw_1529_; lean_object* v_toBind_1530_; lean_object* v_toPure_1531_; lean_object* v___x_1532_; lean_object* v___f_1533_; lean_object* v___x_1534_; 
v_toApplicative_1528_ = lean_ctor_get(v_inst_1524_, 0);
lean_inc_ref(v_toApplicative_1528_);
v_throw_1529_ = lean_ctor_get(v_inst_1525_, 0);
lean_inc(v_throw_1529_);
lean_dec_ref(v_inst_1525_);
v_toBind_1530_ = lean_ctor_get(v_inst_1524_, 1);
lean_inc(v_toBind_1530_);
lean_dec_ref(v_inst_1524_);
v_toPure_1531_ = lean_ctor_get(v_toApplicative_1528_, 1);
lean_inc(v_toPure_1531_);
lean_dec_ref(v_toApplicative_1528_);
v___x_1532_ = lean_apply_2(v_throw_1529_, lean_box(0), v_a_1526_);
v___f_1533_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1533_, 0, v_a_1527_);
lean_closure_set(v___f_1533_, 1, v_toPure_1531_);
v___x_1534_ = lean_apply_4(v_toBind_1530_, lean_box(0), lean_box(0), v___x_1532_, v___f_1533_);
return v___x_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1(lean_object* v_00_u03b1_1535_, lean_object* v_00_u03b2_1536_, lean_object* v_m_1537_, lean_object* v_inst_1538_, lean_object* v_inst_1539_, lean_object* v_inst_1540_, lean_object* v_00_u03b5_1541_, lean_object* v_inst_1542_, lean_object* v_00_u03b1_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v_toApplicative_1546_; lean_object* v_throw_1547_; lean_object* v_toBind_1548_; lean_object* v_toPure_1549_; lean_object* v___x_1550_; lean_object* v___f_1551_; lean_object* v___x_1552_; 
v_toApplicative_1546_ = lean_ctor_get(v_inst_1540_, 0);
lean_inc_ref(v_toApplicative_1546_);
v_throw_1547_ = lean_ctor_get(v_inst_1542_, 0);
lean_inc(v_throw_1547_);
lean_dec_ref(v_inst_1542_);
v_toBind_1548_ = lean_ctor_get(v_inst_1540_, 1);
lean_inc(v_toBind_1548_);
lean_dec_ref(v_inst_1540_);
v_toPure_1549_ = lean_ctor_get(v_toApplicative_1546_, 1);
lean_inc(v_toPure_1549_);
lean_dec_ref(v_toApplicative_1546_);
v___x_1550_ = lean_apply_2(v_throw_1547_, lean_box(0), v_a_1544_);
v___f_1551_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1551_, 0, v_a_1545_);
lean_closure_set(v___f_1551_, 1, v_toPure_1549_);
v___x_1552_ = lean_apply_4(v_toBind_1548_, lean_box(0), lean_box(0), v___x_1550_, v___f_1551_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1___boxed(lean_object* v_00_u03b1_1553_, lean_object* v_00_u03b2_1554_, lean_object* v_m_1555_, lean_object* v_inst_1556_, lean_object* v_inst_1557_, lean_object* v_inst_1558_, lean_object* v_00_u03b5_1559_, lean_object* v_inst_1560_, lean_object* v_00_u03b1_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1(v_00_u03b1_1553_, v_00_u03b2_1554_, v_m_1555_, v_inst_1556_, v_inst_1557_, v_inst_1558_, v_00_u03b5_1559_, v_inst_1560_, v_00_u03b1_1561_, v_a_1562_, v_a_1563_);
lean_dec_ref(v_inst_1557_);
lean_dec_ref(v_inst_1556_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___redArg___lam__0(lean_object* v_c_1565_, lean_object* v_s_1566_, lean_object* v_e_1567_){
_start:
{
lean_object* v___x_1568_; 
v___x_1568_ = lean_apply_2(v_c_1565_, v_e_1567_, v_s_1566_);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___redArg(lean_object* v_inst_1569_, lean_object* v_x_1570_, lean_object* v_c_1571_, lean_object* v_s_1572_){
_start:
{
lean_object* v_tryCatch_1573_; lean_object* v___f_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; 
v_tryCatch_1573_ = lean_ctor_get(v_inst_1569_, 1);
lean_inc(v_tryCatch_1573_);
lean_dec_ref(v_inst_1569_);
lean_inc_ref(v_s_1572_);
v___f_1574_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1574_, 0, v_c_1571_);
lean_closure_set(v___f_1574_, 1, v_s_1572_);
v___x_1575_ = lean_apply_1(v_x_1570_, v_s_1572_);
v___x_1576_ = lean_apply_3(v_tryCatch_1573_, lean_box(0), v___x_1575_, v___f_1574_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3(lean_object* v_00_u03b1_1577_, lean_object* v_00_u03b2_1578_, lean_object* v_m_1579_, lean_object* v_inst_1580_, lean_object* v_inst_1581_, lean_object* v_00_u03b5_1582_, lean_object* v_inst_1583_, lean_object* v_00_u03b1_1584_, lean_object* v_x_1585_, lean_object* v_c_1586_, lean_object* v_s_1587_){
_start:
{
lean_object* v_tryCatch_1588_; lean_object* v___f_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v_tryCatch_1588_ = lean_ctor_get(v_inst_1583_, 1);
lean_inc(v_tryCatch_1588_);
lean_dec_ref(v_inst_1583_);
lean_inc_ref(v_s_1587_);
v___f_1589_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1589_, 0, v_c_1586_);
lean_closure_set(v___f_1589_, 1, v_s_1587_);
v___x_1590_ = lean_apply_1(v_x_1585_, v_s_1587_);
v___x_1591_ = lean_apply_3(v_tryCatch_1588_, lean_box(0), v___x_1590_, v___f_1589_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___boxed(lean_object* v_00_u03b1_1592_, lean_object* v_00_u03b2_1593_, lean_object* v_m_1594_, lean_object* v_inst_1595_, lean_object* v_inst_1596_, lean_object* v_00_u03b5_1597_, lean_object* v_inst_1598_, lean_object* v_00_u03b1_1599_, lean_object* v_x_1600_, lean_object* v_c_1601_, lean_object* v_s_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3(v_00_u03b1_1592_, v_00_u03b2_1593_, v_m_1594_, v_inst_1595_, v_inst_1596_, v_00_u03b5_1597_, v_inst_1598_, v_00_u03b1_1599_, v_x_1600_, v_c_1601_, v_s_1602_);
lean_dec_ref(v_inst_1596_);
lean_dec_ref(v_inst_1595_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___redArg(lean_object* v_inst_1604_, lean_object* v_inst_1605_, lean_object* v_inst_1606_, lean_object* v_inst_1607_){
_start:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
lean_inc_ref(v_inst_1607_);
lean_inc_ref(v_inst_1605_);
lean_inc_ref(v_inst_1604_);
v___x_1608_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1___boxed), 11, 8);
lean_closure_set(v___x_1608_, 0, lean_box(0));
lean_closure_set(v___x_1608_, 1, lean_box(0));
lean_closure_set(v___x_1608_, 2, lean_box(0));
lean_closure_set(v___x_1608_, 3, v_inst_1604_);
lean_closure_set(v___x_1608_, 4, v_inst_1605_);
lean_closure_set(v___x_1608_, 5, v_inst_1606_);
lean_closure_set(v___x_1608_, 6, lean_box(0));
lean_closure_set(v___x_1608_, 7, v_inst_1607_);
v___x_1609_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___boxed), 11, 7);
lean_closure_set(v___x_1609_, 0, lean_box(0));
lean_closure_set(v___x_1609_, 1, lean_box(0));
lean_closure_set(v___x_1609_, 2, lean_box(0));
lean_closure_set(v___x_1609_, 3, v_inst_1604_);
lean_closure_set(v___x_1609_, 4, v_inst_1605_);
lean_closure_set(v___x_1609_, 5, lean_box(0));
lean_closure_set(v___x_1609_, 6, v_inst_1607_);
v___x_1610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1608_);
lean_ctor_set(v___x_1610_, 1, v___x_1609_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf(lean_object* v_00_u03b1_1611_, lean_object* v_00_u03b2_1612_, lean_object* v_m_1613_, lean_object* v_inst_1614_, lean_object* v_inst_1615_, lean_object* v_inst_1616_, lean_object* v_00_u03b5_1617_, lean_object* v_inst_1618_){
_start:
{
lean_object* v___x_1619_; 
v___x_1619_ = l_Lean_MonadStateCacheT_instMonadExceptOf___redArg(v_inst_1614_, v_inst_1615_, v_inst_1616_, v_inst_1618_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__0(lean_object* v_fst_1620_, lean_object* v_00_u03b2_1621_, lean_object* v_x_1622_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = lean_apply_1(v_x_1622_, v_fst_1620_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__1(lean_object* v_snd_1624_, lean_object* v_toPure_1625_, lean_object* v_a_1626_){
_start:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1627_, 0, v_a_1626_);
lean_ctor_set(v___x_1627_, 1, v_snd_1624_);
v___x_1628_ = lean_apply_2(v_toPure_1625_, lean_box(0), v___x_1627_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__2(lean_object* v_f_1629_, lean_object* v_toPure_1630_, lean_object* v_toBind_1631_, lean_object* v_____x_1632_){
_start:
{
lean_object* v_fst_1633_; lean_object* v_snd_1634_; lean_object* v___f_1635_; lean_object* v___x_1636_; lean_object* v___f_1637_; lean_object* v___x_1638_; 
v_fst_1633_ = lean_ctor_get(v_____x_1632_, 0);
lean_inc(v_fst_1633_);
v_snd_1634_ = lean_ctor_get(v_____x_1632_, 1);
lean_inc(v_snd_1634_);
lean_dec_ref(v_____x_1632_);
v___f_1635_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1635_, 0, v_fst_1633_);
v___x_1636_ = lean_apply_1(v_f_1629_, v___f_1635_);
v___f_1637_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1637_, 0, v_snd_1634_);
lean_closure_set(v___f_1637_, 1, v_toPure_1630_);
v___x_1638_ = lean_apply_4(v_toBind_1631_, lean_box(0), lean_box(0), v___x_1636_, v___f_1637_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg(lean_object* v_inst_1639_, lean_object* v_f_1640_, lean_object* v_a_1641_){
_start:
{
lean_object* v_toApplicative_1642_; lean_object* v_toBind_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1654_; 
v_toApplicative_1642_ = lean_ctor_get(v_inst_1639_, 0);
v_toBind_1643_ = lean_ctor_get(v_inst_1639_, 1);
v_isSharedCheck_1654_ = !lean_is_exclusive(v_inst_1639_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1645_ = v_inst_1639_;
v_isShared_1646_ = v_isSharedCheck_1654_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_toBind_1643_);
lean_inc(v_toApplicative_1642_);
lean_dec(v_inst_1639_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1654_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v_toPure_1647_; lean_object* v___f_1648_; lean_object* v___x_1650_; 
v_toPure_1647_ = lean_ctor_get(v_toApplicative_1642_, 1);
lean_inc(v_toPure_1647_);
lean_dec_ref(v_toApplicative_1642_);
lean_inc(v_toBind_1643_);
lean_inc(v_toPure_1647_);
v___f_1648_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1648_, 0, v_f_1640_);
lean_closure_set(v___f_1648_, 1, v_toPure_1647_);
lean_closure_set(v___f_1648_, 2, v_toBind_1643_);
lean_inc_ref(v_a_1641_);
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 1, v_a_1641_);
lean_ctor_set(v___x_1645_, 0, v_a_1641_);
v___x_1650_ = v___x_1645_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1641_);
lean_ctor_set(v_reuseFailAlloc_1653_, 1, v_a_1641_);
v___x_1650_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1651_ = lean_apply_2(v_toPure_1647_, lean_box(0), v___x_1650_);
v___x_1652_ = lean_apply_4(v_toBind_1643_, lean_box(0), lean_box(0), v___x_1651_, v___f_1648_);
return v___x_1652_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1(lean_object* v_00_u03b1_1655_, lean_object* v_00_u03b2_1656_, lean_object* v_m_1657_, lean_object* v_inst_1658_, lean_object* v_inst_1659_, lean_object* v_inst_1660_, lean_object* v_00_u03b1_1661_, lean_object* v_f_1662_, lean_object* v_a_1663_){
_start:
{
lean_object* v_toApplicative_1664_; lean_object* v_toBind_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1676_; 
v_toApplicative_1664_ = lean_ctor_get(v_inst_1660_, 0);
v_toBind_1665_ = lean_ctor_get(v_inst_1660_, 1);
v_isSharedCheck_1676_ = !lean_is_exclusive(v_inst_1660_);
if (v_isSharedCheck_1676_ == 0)
{
v___x_1667_ = v_inst_1660_;
v_isShared_1668_ = v_isSharedCheck_1676_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_toBind_1665_);
lean_inc(v_toApplicative_1664_);
lean_dec(v_inst_1660_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1676_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v_toPure_1669_; lean_object* v___f_1670_; lean_object* v___x_1672_; 
v_toPure_1669_ = lean_ctor_get(v_toApplicative_1664_, 1);
lean_inc(v_toPure_1669_);
lean_dec_ref(v_toApplicative_1664_);
lean_inc(v_toBind_1665_);
lean_inc(v_toPure_1669_);
v___f_1670_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1670_, 0, v_f_1662_);
lean_closure_set(v___f_1670_, 1, v_toPure_1669_);
lean_closure_set(v___f_1670_, 2, v_toBind_1665_);
lean_inc_ref(v_a_1663_);
if (v_isShared_1668_ == 0)
{
lean_ctor_set(v___x_1667_, 1, v_a_1663_);
lean_ctor_set(v___x_1667_, 0, v_a_1663_);
v___x_1672_ = v___x_1667_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_a_1663_);
lean_ctor_set(v_reuseFailAlloc_1675_, 1, v_a_1663_);
v___x_1672_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1673_ = lean_apply_2(v_toPure_1669_, lean_box(0), v___x_1672_);
v___x_1674_ = lean_apply_4(v_toBind_1665_, lean_box(0), lean_box(0), v___x_1673_, v___f_1670_);
return v___x_1674_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___boxed(lean_object* v_00_u03b1_1677_, lean_object* v_00_u03b2_1678_, lean_object* v_m_1679_, lean_object* v_inst_1680_, lean_object* v_inst_1681_, lean_object* v_inst_1682_, lean_object* v_00_u03b1_1683_, lean_object* v_f_1684_, lean_object* v_a_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Lean_MonadStateCacheT_instMonadControl___aux__1(v_00_u03b1_1677_, v_00_u03b2_1678_, v_m_1679_, v_inst_1680_, v_inst_1681_, v_inst_1682_, v_00_u03b1_1683_, v_f_1684_, v_a_1685_);
lean_dec_ref(v_inst_1681_);
lean_dec_ref(v_inst_1680_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__0(lean_object* v_fst_1687_, lean_object* v_toPure_1688_, lean_object* v_____x_1689_){
_start:
{
lean_object* v_snd_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1698_; 
v_snd_1690_ = lean_ctor_get(v_____x_1689_, 1);
v_isSharedCheck_1698_ = !lean_is_exclusive(v_____x_1689_);
if (v_isSharedCheck_1698_ == 0)
{
lean_object* v_unused_1699_; 
v_unused_1699_ = lean_ctor_get(v_____x_1689_, 0);
lean_dec(v_unused_1699_);
v___x_1692_ = v_____x_1689_;
v_isShared_1693_ = v_isSharedCheck_1698_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_snd_1690_);
lean_dec(v_____x_1689_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1698_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
lean_ctor_set(v___x_1692_, 0, v_fst_1687_);
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v_fst_1687_);
lean_ctor_set(v_reuseFailAlloc_1697_, 1, v_snd_1690_);
v___x_1695_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
lean_object* v___x_1696_; 
v___x_1696_ = lean_apply_2(v_toPure_1688_, lean_box(0), v___x_1695_);
return v___x_1696_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__1(lean_object* v_toPure_1700_, lean_object* v_toBind_1701_, lean_object* v_____x_1702_){
_start:
{
lean_object* v_fst_1703_; lean_object* v_fst_1704_; lean_object* v_snd_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1716_; 
v_fst_1703_ = lean_ctor_get(v_____x_1702_, 0);
lean_inc(v_fst_1703_);
lean_dec_ref(v_____x_1702_);
v_fst_1704_ = lean_ctor_get(v_fst_1703_, 0);
v_snd_1705_ = lean_ctor_get(v_fst_1703_, 1);
v_isSharedCheck_1716_ = !lean_is_exclusive(v_fst_1703_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1707_ = v_fst_1703_;
v_isShared_1708_ = v_isSharedCheck_1716_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_snd_1705_);
lean_inc(v_fst_1704_);
lean_dec(v_fst_1703_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1716_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___f_1709_; lean_object* v___x_1710_; lean_object* v___x_1712_; 
lean_inc(v_toPure_1700_);
v___f_1709_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1709_, 0, v_fst_1704_);
lean_closure_set(v___f_1709_, 1, v_toPure_1700_);
v___x_1710_ = lean_box(0);
if (v_isShared_1708_ == 0)
{
lean_ctor_set(v___x_1707_, 0, v___x_1710_);
v___x_1712_ = v___x_1707_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v___x_1710_);
lean_ctor_set(v_reuseFailAlloc_1715_, 1, v_snd_1705_);
v___x_1712_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1713_ = lean_apply_2(v_toPure_1700_, lean_box(0), v___x_1712_);
v___x_1714_ = lean_apply_4(v_toBind_1701_, lean_box(0), lean_box(0), v___x_1713_, v___f_1709_);
return v___x_1714_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__2(lean_object* v_a_1717_, lean_object* v_toPure_1718_, lean_object* v_a_1719_){
_start:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1720_, 0, v_a_1719_);
lean_ctor_set(v___x_1720_, 1, v_a_1717_);
v___x_1721_ = lean_apply_2(v_toPure_1718_, lean_box(0), v___x_1720_);
return v___x_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg(lean_object* v_inst_1722_, lean_object* v_x_1723_, lean_object* v_a_1724_){
_start:
{
lean_object* v_toApplicative_1725_; lean_object* v_toBind_1726_; lean_object* v_toPure_1727_; lean_object* v___f_1728_; lean_object* v___f_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v_toApplicative_1725_ = lean_ctor_get(v_inst_1722_, 0);
lean_inc_ref(v_toApplicative_1725_);
v_toBind_1726_ = lean_ctor_get(v_inst_1722_, 1);
lean_inc(v_toBind_1726_);
lean_dec_ref(v_inst_1722_);
v_toPure_1727_ = lean_ctor_get(v_toApplicative_1725_, 1);
lean_inc(v_toPure_1727_);
lean_dec_ref(v_toApplicative_1725_);
lean_inc(v_toBind_1726_);
lean_inc(v_toPure_1727_);
v___f_1728_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1728_, 0, v_toPure_1727_);
lean_closure_set(v___f_1728_, 1, v_toBind_1726_);
v___f_1729_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__2), 3, 2);
lean_closure_set(v___f_1729_, 0, v_a_1724_);
lean_closure_set(v___f_1729_, 1, v_toPure_1727_);
lean_inc(v_toBind_1726_);
v___x_1730_ = lean_apply_4(v_toBind_1726_, lean_box(0), lean_box(0), v_x_1723_, v___f_1729_);
v___x_1731_ = lean_apply_4(v_toBind_1726_, lean_box(0), lean_box(0), v___x_1730_, v___f_1728_);
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3(lean_object* v_00_u03b1_1732_, lean_object* v_00_u03b2_1733_, lean_object* v_m_1734_, lean_object* v_inst_1735_, lean_object* v_inst_1736_, lean_object* v_inst_1737_, lean_object* v_00_u03b1_1738_, lean_object* v_x_1739_, lean_object* v_a_1740_){
_start:
{
lean_object* v_toApplicative_1741_; lean_object* v_toBind_1742_; lean_object* v_toPure_1743_; lean_object* v___f_1744_; lean_object* v___f_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v_toApplicative_1741_ = lean_ctor_get(v_inst_1737_, 0);
lean_inc_ref(v_toApplicative_1741_);
v_toBind_1742_ = lean_ctor_get(v_inst_1737_, 1);
lean_inc(v_toBind_1742_);
lean_dec_ref(v_inst_1737_);
v_toPure_1743_ = lean_ctor_get(v_toApplicative_1741_, 1);
lean_inc(v_toPure_1743_);
lean_dec_ref(v_toApplicative_1741_);
lean_inc(v_toBind_1742_);
lean_inc(v_toPure_1743_);
v___f_1744_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1744_, 0, v_toPure_1743_);
lean_closure_set(v___f_1744_, 1, v_toBind_1742_);
v___f_1745_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__2), 3, 2);
lean_closure_set(v___f_1745_, 0, v_a_1740_);
lean_closure_set(v___f_1745_, 1, v_toPure_1743_);
lean_inc(v_toBind_1742_);
v___x_1746_ = lean_apply_4(v_toBind_1742_, lean_box(0), lean_box(0), v_x_1739_, v___f_1745_);
v___x_1747_ = lean_apply_4(v_toBind_1742_, lean_box(0), lean_box(0), v___x_1746_, v___f_1744_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___boxed(lean_object* v_00_u03b1_1748_, lean_object* v_00_u03b2_1749_, lean_object* v_m_1750_, lean_object* v_inst_1751_, lean_object* v_inst_1752_, lean_object* v_inst_1753_, lean_object* v_00_u03b1_1754_, lean_object* v_x_1755_, lean_object* v_a_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l_Lean_MonadStateCacheT_instMonadControl___aux__3(v_00_u03b1_1748_, v_00_u03b2_1749_, v_m_1750_, v_inst_1751_, v_inst_1752_, v_inst_1753_, v_00_u03b1_1754_, v_x_1755_, v_a_1756_);
lean_dec_ref(v_inst_1752_);
lean_dec_ref(v_inst_1751_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg(lean_object* v_inst_1758_, lean_object* v_inst_1759_, lean_object* v_inst_1760_){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
lean_inc_ref(v_inst_1760_);
lean_inc_ref(v_inst_1759_);
lean_inc_ref(v_inst_1758_);
v___x_1761_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__1___boxed), 9, 6);
lean_closure_set(v___x_1761_, 0, lean_box(0));
lean_closure_set(v___x_1761_, 1, lean_box(0));
lean_closure_set(v___x_1761_, 2, lean_box(0));
lean_closure_set(v___x_1761_, 3, v_inst_1758_);
lean_closure_set(v___x_1761_, 4, v_inst_1759_);
lean_closure_set(v___x_1761_, 5, v_inst_1760_);
v___x_1762_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__3___boxed), 9, 6);
lean_closure_set(v___x_1762_, 0, lean_box(0));
lean_closure_set(v___x_1762_, 1, lean_box(0));
lean_closure_set(v___x_1762_, 2, lean_box(0));
lean_closure_set(v___x_1762_, 3, v_inst_1758_);
lean_closure_set(v___x_1762_, 4, v_inst_1759_);
lean_closure_set(v___x_1762_, 5, v_inst_1760_);
v___x_1763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1761_);
lean_ctor_set(v___x_1763_, 1, v___x_1762_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl(lean_object* v_00_u03b1_1764_, lean_object* v_00_u03b2_1765_, lean_object* v_m_1766_, lean_object* v_inst_1767_, lean_object* v_inst_1768_, lean_object* v_inst_1769_){
_start:
{
lean_object* v___x_1770_; 
v___x_1770_ = l_Lean_MonadStateCacheT_instMonadControl___redArg(v_inst_1767_, v_inst_1768_, v_inst_1769_);
return v___x_1770_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__0(lean_object* v_h_1771_, lean_object* v_s_1772_, lean_object* v_x_1773_){
_start:
{
if (lean_obj_tag(v_x_1773_) == 0)
{
lean_object* v___x_1774_; lean_object* v___x_1775_; 
v___x_1774_ = lean_box(0);
v___x_1775_ = lean_apply_2(v_h_1771_, v___x_1774_, v_s_1772_);
return v___x_1775_;
}
else
{
lean_object* v_val_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1786_; 
lean_dec_ref(v_s_1772_);
v_val_1776_ = lean_ctor_get(v_x_1773_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v_x_1773_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1778_ = v_x_1773_;
v_isShared_1779_ = v_isSharedCheck_1786_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_val_1776_);
lean_dec(v_x_1773_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1786_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v_fst_1780_; lean_object* v_snd_1781_; lean_object* v___x_1783_; 
v_fst_1780_ = lean_ctor_get(v_val_1776_, 0);
lean_inc(v_fst_1780_);
v_snd_1781_ = lean_ctor_get(v_val_1776_, 1);
lean_inc(v_snd_1781_);
lean_dec(v_val_1776_);
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v_fst_1780_);
v___x_1783_ = v___x_1778_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_fst_1780_);
v___x_1783_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
lean_object* v___x_1784_; 
v___x_1784_ = lean_apply_2(v_h_1771_, v___x_1783_, v_snd_1781_);
return v___x_1784_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__1(lean_object* v_toPure_1787_, lean_object* v_____x_1788_){
_start:
{
lean_object* v_fst_1789_; lean_object* v_snd_1790_; lean_object* v_fst_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1808_; 
v_fst_1789_ = lean_ctor_get(v_____x_1788_, 0);
lean_inc(v_fst_1789_);
v_snd_1790_ = lean_ctor_get(v_____x_1788_, 1);
lean_inc(v_snd_1790_);
lean_dec_ref(v_____x_1788_);
v_fst_1791_ = lean_ctor_get(v_fst_1789_, 0);
v_isSharedCheck_1808_ = !lean_is_exclusive(v_fst_1789_);
if (v_isSharedCheck_1808_ == 0)
{
lean_object* v_unused_1809_; 
v_unused_1809_ = lean_ctor_get(v_fst_1789_, 1);
lean_dec(v_unused_1809_);
v___x_1793_ = v_fst_1789_;
v_isShared_1794_ = v_isSharedCheck_1808_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_fst_1791_);
lean_dec(v_fst_1789_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1808_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v_fst_1795_; lean_object* v_snd_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1807_; 
v_fst_1795_ = lean_ctor_get(v_snd_1790_, 0);
v_snd_1796_ = lean_ctor_get(v_snd_1790_, 1);
v_isSharedCheck_1807_ = !lean_is_exclusive(v_snd_1790_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1798_ = v_snd_1790_;
v_isShared_1799_ = v_isSharedCheck_1807_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_snd_1796_);
lean_inc(v_fst_1795_);
lean_dec(v_snd_1790_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1807_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1801_; 
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 1, v_fst_1795_);
lean_ctor_set(v___x_1798_, 0, v_fst_1791_);
v___x_1801_ = v___x_1798_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_fst_1791_);
lean_ctor_set(v_reuseFailAlloc_1806_, 1, v_fst_1795_);
v___x_1801_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
lean_object* v___x_1803_; 
if (v_isShared_1794_ == 0)
{
lean_ctor_set(v___x_1793_, 1, v_snd_1796_);
lean_ctor_set(v___x_1793_, 0, v___x_1801_);
v___x_1803_ = v___x_1793_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v___x_1801_);
lean_ctor_set(v_reuseFailAlloc_1805_, 1, v_snd_1796_);
v___x_1803_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
lean_object* v___x_1804_; 
v___x_1804_ = lean_apply_2(v_toPure_1787_, lean_box(0), v___x_1803_);
return v___x_1804_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg(lean_object* v_inst_1810_, lean_object* v_inst_1811_, lean_object* v_x_1812_, lean_object* v_h_1813_, lean_object* v_s_1814_){
_start:
{
lean_object* v_toApplicative_1815_; lean_object* v_toBind_1816_; lean_object* v_toPure_1817_; lean_object* v___f_1818_; lean_object* v___x_1819_; lean_object* v___f_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; 
v_toApplicative_1815_ = lean_ctor_get(v_inst_1810_, 0);
lean_inc_ref(v_toApplicative_1815_);
v_toBind_1816_ = lean_ctor_get(v_inst_1810_, 1);
lean_inc(v_toBind_1816_);
lean_dec_ref(v_inst_1810_);
v_toPure_1817_ = lean_ctor_get(v_toApplicative_1815_, 1);
lean_inc(v_toPure_1817_);
lean_dec_ref(v_toApplicative_1815_);
lean_inc_ref(v_s_1814_);
v___f_1818_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1818_, 0, v_h_1813_);
lean_closure_set(v___f_1818_, 1, v_s_1814_);
v___x_1819_ = lean_apply_1(v_x_1812_, v_s_1814_);
v___f_1820_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1820_, 0, v_toPure_1817_);
v___x_1821_ = lean_apply_4(v_inst_1811_, lean_box(0), lean_box(0), v___x_1819_, v___f_1818_);
v___x_1822_ = lean_apply_4(v_toBind_1816_, lean_box(0), lean_box(0), v___x_1821_, v___f_1820_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1(lean_object* v_00_u03b1_1823_, lean_object* v_00_u03b2_1824_, lean_object* v_m_1825_, lean_object* v_inst_1826_, lean_object* v_inst_1827_, lean_object* v_inst_1828_, lean_object* v_inst_1829_, lean_object* v_00_u03b1_1830_, lean_object* v_00_u03b2_1831_, lean_object* v_x_1832_, lean_object* v_h_1833_, lean_object* v_s_1834_){
_start:
{
lean_object* v_toApplicative_1835_; lean_object* v_toBind_1836_; lean_object* v_toPure_1837_; lean_object* v___f_1838_; lean_object* v___x_1839_; lean_object* v___f_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v_toApplicative_1835_ = lean_ctor_get(v_inst_1828_, 0);
lean_inc_ref(v_toApplicative_1835_);
v_toBind_1836_ = lean_ctor_get(v_inst_1828_, 1);
lean_inc(v_toBind_1836_);
lean_dec_ref(v_inst_1828_);
v_toPure_1837_ = lean_ctor_get(v_toApplicative_1835_, 1);
lean_inc(v_toPure_1837_);
lean_dec_ref(v_toApplicative_1835_);
lean_inc_ref(v_s_1834_);
v___f_1838_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1838_, 0, v_h_1833_);
lean_closure_set(v___f_1838_, 1, v_s_1834_);
v___x_1839_ = lean_apply_1(v_x_1832_, v_s_1834_);
v___f_1840_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1840_, 0, v_toPure_1837_);
v___x_1841_ = lean_apply_4(v_inst_1829_, lean_box(0), lean_box(0), v___x_1839_, v___f_1838_);
v___x_1842_ = lean_apply_4(v_toBind_1836_, lean_box(0), lean_box(0), v___x_1841_, v___f_1840_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___boxed(lean_object* v_00_u03b1_1843_, lean_object* v_00_u03b2_1844_, lean_object* v_m_1845_, lean_object* v_inst_1846_, lean_object* v_inst_1847_, lean_object* v_inst_1848_, lean_object* v_inst_1849_, lean_object* v_00_u03b1_1850_, lean_object* v_00_u03b2_1851_, lean_object* v_x_1852_, lean_object* v_h_1853_, lean_object* v_s_1854_){
_start:
{
lean_object* v_res_1855_; 
v_res_1855_ = l_Lean_MonadStateCacheT_instMonadFinally___aux__1(v_00_u03b1_1843_, v_00_u03b2_1844_, v_m_1845_, v_inst_1846_, v_inst_1847_, v_inst_1848_, v_inst_1849_, v_00_u03b1_1850_, v_00_u03b2_1851_, v_x_1852_, v_h_1853_, v_s_1854_);
lean_dec_ref(v_inst_1847_);
lean_dec_ref(v_inst_1846_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___redArg(lean_object* v_inst_1856_, lean_object* v_inst_1857_, lean_object* v_inst_1858_, lean_object* v_inst_1859_){
_start:
{
lean_object* v___x_1860_; 
v___x_1860_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___aux__1___boxed), 12, 7);
lean_closure_set(v___x_1860_, 0, lean_box(0));
lean_closure_set(v___x_1860_, 1, lean_box(0));
lean_closure_set(v___x_1860_, 2, lean_box(0));
lean_closure_set(v___x_1860_, 3, v_inst_1856_);
lean_closure_set(v___x_1860_, 4, v_inst_1857_);
lean_closure_set(v___x_1860_, 5, v_inst_1858_);
lean_closure_set(v___x_1860_, 6, v_inst_1859_);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally(lean_object* v_00_u03b1_1861_, lean_object* v_00_u03b2_1862_, lean_object* v_m_1863_, lean_object* v_inst_1864_, lean_object* v_inst_1865_, lean_object* v_inst_1866_, lean_object* v_inst_1867_){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___aux__1___boxed), 12, 7);
lean_closure_set(v___x_1868_, 0, lean_box(0));
lean_closure_set(v___x_1868_, 1, lean_box(0));
lean_closure_set(v___x_1868_, 2, lean_box(0));
lean_closure_set(v___x_1868_, 3, v_inst_1864_);
lean_closure_set(v___x_1868_, 4, v_inst_1865_);
lean_closure_set(v___x_1868_, 5, v_inst_1866_);
lean_closure_set(v___x_1868_, 6, v_inst_1867_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1___redArg___lam__0(lean_object* v_a_1869_, lean_object* v_toPure_1870_, lean_object* v_a_1871_){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1872_, 0, v_a_1871_);
lean_ctor_set(v___x_1872_, 1, v_a_1869_);
v___x_1873_ = lean_apply_2(v_toPure_1870_, lean_box(0), v___x_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1___redArg(lean_object* v_inst_1874_, lean_object* v_inst_1875_, lean_object* v_a_1876_){
_start:
{
lean_object* v_toApplicative_1877_; lean_object* v_getRef_1878_; lean_object* v_toBind_1879_; lean_object* v_toPure_1880_; lean_object* v___f_1881_; lean_object* v___x_1882_; 
v_toApplicative_1877_ = lean_ctor_get(v_inst_1874_, 0);
lean_inc_ref(v_toApplicative_1877_);
v_getRef_1878_ = lean_ctor_get(v_inst_1875_, 0);
lean_inc(v_getRef_1878_);
lean_dec_ref(v_inst_1875_);
v_toBind_1879_ = lean_ctor_get(v_inst_1874_, 1);
lean_inc(v_toBind_1879_);
lean_dec_ref(v_inst_1874_);
v_toPure_1880_ = lean_ctor_get(v_toApplicative_1877_, 1);
lean_inc(v_toPure_1880_);
lean_dec_ref(v_toApplicative_1877_);
v___f_1881_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadRef___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1881_, 0, v_a_1876_);
lean_closure_set(v___f_1881_, 1, v_toPure_1880_);
v___x_1882_ = lean_apply_4(v_toBind_1879_, lean_box(0), lean_box(0), v_getRef_1878_, v___f_1881_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1(lean_object* v_00_u03b1_1883_, lean_object* v_00_u03b2_1884_, lean_object* v_m_1885_, lean_object* v_inst_1886_, lean_object* v_inst_1887_, lean_object* v_inst_1888_, lean_object* v_inst_1889_, lean_object* v_a_1890_){
_start:
{
lean_object* v_toApplicative_1891_; lean_object* v_getRef_1892_; lean_object* v_toBind_1893_; lean_object* v_toPure_1894_; lean_object* v___f_1895_; lean_object* v___x_1896_; 
v_toApplicative_1891_ = lean_ctor_get(v_inst_1888_, 0);
lean_inc_ref(v_toApplicative_1891_);
v_getRef_1892_ = lean_ctor_get(v_inst_1889_, 0);
lean_inc(v_getRef_1892_);
lean_dec_ref(v_inst_1889_);
v_toBind_1893_ = lean_ctor_get(v_inst_1888_, 1);
lean_inc(v_toBind_1893_);
lean_dec_ref(v_inst_1888_);
v_toPure_1894_ = lean_ctor_get(v_toApplicative_1891_, 1);
lean_inc(v_toPure_1894_);
lean_dec_ref(v_toApplicative_1891_);
v___f_1895_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadRef___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1895_, 0, v_a_1890_);
lean_closure_set(v___f_1895_, 1, v_toPure_1894_);
v___x_1896_ = lean_apply_4(v_toBind_1893_, lean_box(0), lean_box(0), v_getRef_1892_, v___f_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1___boxed(lean_object* v_00_u03b1_1897_, lean_object* v_00_u03b2_1898_, lean_object* v_m_1899_, lean_object* v_inst_1900_, lean_object* v_inst_1901_, lean_object* v_inst_1902_, lean_object* v_inst_1903_, lean_object* v_a_1904_){
_start:
{
lean_object* v_res_1905_; 
v_res_1905_ = l_Lean_MonadStateCacheT_instMonadRef___aux__1(v_00_u03b1_1897_, v_00_u03b2_1898_, v_m_1899_, v_inst_1900_, v_inst_1901_, v_inst_1902_, v_inst_1903_, v_a_1904_);
lean_dec_ref(v_inst_1901_);
lean_dec_ref(v_inst_1900_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__3___redArg(lean_object* v_inst_1906_, lean_object* v_ref_1907_, lean_object* v_x_1908_, lean_object* v_a_1909_){
_start:
{
lean_object* v_withRef_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
v_withRef_1910_ = lean_ctor_get(v_inst_1906_, 1);
lean_inc(v_withRef_1910_);
lean_dec_ref(v_inst_1906_);
v___x_1911_ = lean_apply_1(v_x_1908_, v_a_1909_);
v___x_1912_ = lean_apply_3(v_withRef_1910_, lean_box(0), v_ref_1907_, v___x_1911_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__3(lean_object* v_00_u03b1_1913_, lean_object* v_00_u03b2_1914_, lean_object* v_m_1915_, lean_object* v_inst_1916_, lean_object* v_inst_1917_, lean_object* v_inst_1918_, lean_object* v_00_u03b1_1919_, lean_object* v_ref_1920_, lean_object* v_x_1921_, lean_object* v_a_1922_){
_start:
{
lean_object* v_withRef_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; 
v_withRef_1923_ = lean_ctor_get(v_inst_1918_, 1);
lean_inc(v_withRef_1923_);
lean_dec_ref(v_inst_1918_);
v___x_1924_ = lean_apply_1(v_x_1921_, v_a_1922_);
v___x_1925_ = lean_apply_3(v_withRef_1923_, lean_box(0), v_ref_1920_, v___x_1924_);
return v___x_1925_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__3___boxed(lean_object* v_00_u03b1_1926_, lean_object* v_00_u03b2_1927_, lean_object* v_m_1928_, lean_object* v_inst_1929_, lean_object* v_inst_1930_, lean_object* v_inst_1931_, lean_object* v_00_u03b1_1932_, lean_object* v_ref_1933_, lean_object* v_x_1934_, lean_object* v_a_1935_){
_start:
{
lean_object* v_res_1936_; 
v_res_1936_ = l_Lean_MonadStateCacheT_instMonadRef___aux__3(v_00_u03b1_1926_, v_00_u03b2_1927_, v_m_1928_, v_inst_1929_, v_inst_1930_, v_inst_1931_, v_00_u03b1_1932_, v_ref_1933_, v_x_1934_, v_a_1935_);
lean_dec_ref(v_inst_1930_);
lean_dec_ref(v_inst_1929_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___redArg(lean_object* v_inst_1937_, lean_object* v_inst_1938_, lean_object* v_inst_1939_, lean_object* v_inst_1940_){
_start:
{
lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
lean_inc_ref(v_inst_1940_);
lean_inc_ref(v_inst_1938_);
lean_inc_ref(v_inst_1937_);
v___x_1941_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadRef___aux__1___boxed), 8, 7);
lean_closure_set(v___x_1941_, 0, lean_box(0));
lean_closure_set(v___x_1941_, 1, lean_box(0));
lean_closure_set(v___x_1941_, 2, lean_box(0));
lean_closure_set(v___x_1941_, 3, v_inst_1937_);
lean_closure_set(v___x_1941_, 4, v_inst_1938_);
lean_closure_set(v___x_1941_, 5, v_inst_1939_);
lean_closure_set(v___x_1941_, 6, v_inst_1940_);
v___x_1942_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadRef___aux__3___boxed), 10, 6);
lean_closure_set(v___x_1942_, 0, lean_box(0));
lean_closure_set(v___x_1942_, 1, lean_box(0));
lean_closure_set(v___x_1942_, 2, lean_box(0));
lean_closure_set(v___x_1942_, 3, v_inst_1937_);
lean_closure_set(v___x_1942_, 4, v_inst_1938_);
lean_closure_set(v___x_1942_, 5, v_inst_1940_);
v___x_1943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1941_);
lean_ctor_set(v___x_1943_, 1, v___x_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef(lean_object* v_00_u03b1_1944_, lean_object* v_00_u03b2_1945_, lean_object* v_m_1946_, lean_object* v_inst_1947_, lean_object* v_inst_1948_, lean_object* v_inst_1949_, lean_object* v_inst_1950_){
_start:
{
lean_object* v___x_1951_; 
v___x_1951_ = l_Lean_MonadStateCacheT_instMonadRef___redArg(v_inst_1947_, v_inst_1948_, v_inst_1949_, v_inst_1950_);
return v___x_1951_;
}
}
lean_object* runtime_initialize_Std_Data_HashMap_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_MonadCache(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_MonadCache(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data_HashMap_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_MonadCache(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_MonadCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_MonadCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_MonadCache(builtin);
}
#ifdef __cplusplus
}
#endif
