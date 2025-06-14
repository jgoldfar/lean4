// Lean compiler output
// Module: Lean.Data.Lsp.Ipc
// Imports: Init.System.IO Lean.Data.Json Lean.Data.Lsp.Communication Lean.Data.Lsp.Diagnostics Lean.Data.Lsp.Extra
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
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__53;
static lean_object* l_Lean_Lsp_Ipc_runWith___rarg___closed__1;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__58;
lean_object* l_Lean_Json_compress(lean_object*);
uint8_t l_Lean_Json_isNull(lean_object*);
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__12;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__27;
lean_object* l_Lean_JsonNumber_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_runWith(lean_object*);
static lean_object* l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForMessage_loop___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__2;
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_waitForILeans___spec__3(lean_object*);
lean_object* l_EStateM_instInhabited___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__60;
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__2;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__41;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readMessage(lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__50;
static lean_object* l_Lean_Lsp_Ipc_ipcStdioConfig___closed__1;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__1;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForExit(lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__22;
uint8_t lean_usize_dec_eq(size_t, size_t);
static lean_object* l_Lean_Lsp_Ipc_waitForILeans___closed__1;
static lean_object* l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2;
lean_object* l_instInhabitedReaderT___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__44;
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_toJsonWaitForILeansParams____x40_Lean_Data_Lsp_Extra___hyg_702_(lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__18;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__45;
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Lsp_Ipc_waitForMessage_loop___spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_collectDiagnostics(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_collectDiagnostics_loop___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__25;
extern lean_object* l_instInhabitedError;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__52;
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Lsp_Ipc_waitForILeans___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__20;
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__7;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_shutdown(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__8;
lean_object* l_IO_FS_Stream_readLspRequestAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__46;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__17;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__5;
static lean_object* l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1;
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at_Lean_Lsp_Ipc_waitForILeans___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_stdout(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspRequest___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__2;
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_collectDiagnostics___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Lsp_Ipc_collectDiagnostics___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_shutdown___spec__2(lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__31;
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_IO_FS_Stream_readLspMessage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest(lean_object*);
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__5;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__34;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__32;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__30;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__61;
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10;
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__9;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__4;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_ipcStdioConfig;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__26;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__36;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeNotification___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__14;
lean_object* lean_stream_of_handle(lean_object*);
lean_object* lean_io_process_spawn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeNotification(lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__39;
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_waitForILeans___closed__2;
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeLspNotification___at_Lean_Lsp_Ipc_shutdown___spec__4(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__15;
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Lsp_Ipc_waitForMessage_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__6;
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__6;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__16;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__28;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__43;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__24;
static lean_object* l_Lean_Lsp_Ipc_shutdown___closed__1;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__21;
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_stdin(lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__48;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__35;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__7;
LEAN_EXPORT lean_object* l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__23;
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__59;
lean_object* l_Lean_Json_Structured_toJson(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Lsp_Ipc_shutdown___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__9;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__56;
lean_object* l_IO_FS_Stream_writeLspMessage(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__55;
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_2516_(lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__49;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__19;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_runWith___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspNotification___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__33;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__13;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__38;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__3;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__51;
lean_object* lean_panic_fn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForExit___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__4;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__47;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__11;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__10;
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__3;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__40;
static lean_object* l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3___closed__2;
lean_object* l_Lean_Json_Structured_fromJson_x3f(lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__3;
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__3;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at_Lean_Lsp_Ipc_collectDiagnostics___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_collectDiagnostics_loop(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_toJsonWaitForDiagnosticsParams____x40_Lean_Data_Lsp_Extra___hyg_487_(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__1;
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_int_neg(lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__54;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForMessage_loop___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__12;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForMessage_loop(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__57;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForMessage(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__8;
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_toJsonLeanModule____x40_Lean_Data_Lsp_Extra___hyg_2262____spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__42;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__3;
static lean_object* l_Lean_Lsp_Ipc_collectDiagnostics___closed__1;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForILeans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForMessage_loop___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readRequestAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForMessage___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__29;
static lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__1;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___closed__37;
static lean_object* _init_l_Lean_Lsp_Ipc_ipcStdioConfig___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; lean_object* x_3; 
x_1 = 0;
x_2 = 1;
x_3 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, 1, x_1);
lean_ctor_set_uint8(x_3, 2, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_ipcStdioConfig() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Lsp_Ipc_ipcStdioConfig___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_stdin(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_stream_of_handle(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_stdout(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_stream_of_handle(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Lean_Lsp_Ipc_stdin(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_IO_FS_Stream_writeLspRequest___rarg(x_1, x_6, x_2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_Ipc_writeRequest___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeNotification___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Lean_Lsp_Ipc_stdin(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_IO_FS_Stream_writeLspNotification___rarg(x_1, x_6, x_2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeNotification(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_Ipc_writeNotification___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_shutdown___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Json_Structured_fromJson_x3f(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Lsp_Ipc_shutdown___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 2);
x_6 = l_Lean_Json_Structured_fromJson_x3f(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
x_7 = lean_box(0);
lean_ctor_set(x_2, 2, x_7);
x_8 = l_IO_FS_Stream_writeLspMessage(x_1, x_2, x_3);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; 
lean_ctor_set(x_2, 2, x_6);
x_10 = l_IO_FS_Stream_writeLspMessage(x_1, x_2, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_2, 2, x_12);
x_13 = l_IO_FS_Stream_writeLspMessage(x_1, x_2, x_3);
return x_13;
}
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
x_16 = lean_ctor_get(x_2, 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_17 = l_Lean_Json_Structured_fromJson_x3f(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_17);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_15);
lean_ctor_set(x_19, 2, x_18);
x_20 = l_IO_FS_Stream_writeLspMessage(x_1, x_19, x_3);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_22 = x_17;
} else {
 lean_dec_ref(x_17);
 x_22 = lean_box(0);
}
if (lean_is_scalar(x_22)) {
 x_23 = lean_alloc_ctor(1, 1, 0);
} else {
 x_23 = x_22;
}
lean_ctor_set(x_23, 0, x_21);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_14);
lean_ctor_set(x_24, 1, x_15);
lean_ctor_set(x_24, 2, x_23);
x_25 = l_IO_FS_Stream_writeLspMessage(x_1, x_24, x_3);
return x_25;
}
}
}
}
static lean_object* _init_l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instInhabitedError;
x_2 = lean_alloc_closure((void*)(l_EStateM_instInhabited___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3___closed__1;
x_2 = lean_alloc_closure((void*)(l_instInhabitedReaderT___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3___closed__2;
x_5 = lean_panic_fn(x_4, x_1);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeLspNotification___at_Lean_Lsp_Ipc_shutdown___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = l_Lean_Json_Structured_fromJson_x3f(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
x_7 = lean_box(0);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_7);
x_8 = l_IO_FS_Stream_writeLspMessage(x_1, x_2, x_3);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; 
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_6);
x_10 = l_IO_FS_Stream_writeLspMessage(x_1, x_2, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_12);
x_13 = l_IO_FS_Stream_writeLspMessage(x_1, x_2, x_3);
return x_13;
}
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_16 = l_Lean_Json_Structured_fromJson_x3f(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_16);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_IO_FS_Stream_writeLspMessage(x_1, x_18, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_16, 0);
lean_inc(x_20);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 x_21 = x_16;
} else {
 lean_dec_ref(x_16);
 x_21 = lean_box(0);
}
if (lean_is_scalar(x_21)) {
 x_22 = lean_alloc_ctor(1, 1, 0);
} else {
 x_22 = x_21;
}
lean_ctor_set(x_22, 0, x_20);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_IO_FS_Stream_writeLspMessage(x_1, x_23, x_3);
return x_24;
}
}
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("exit", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__1;
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__2;
x_6 = l_IO_FS_Stream_writeLspNotification___at_Lean_Lsp_Ipc_shutdown___spec__4(x_1, x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
x_9 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__3;
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__3;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
return x_6;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("assertion violation: ", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("result.isNull\n      ", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__2;
x_2 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__3;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Data.Lsp.Ipc", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Lsp.Ipc.shutdown", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__5;
x_2 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__6;
x_3 = lean_unsigned_to_nat(51u);
x_4 = lean_unsigned_to_nat(6u);
x_5 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__4;
x_6 = l_mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Expected id ", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", got id ", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\"", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_15; 
lean_dec(x_5);
lean_inc(x_2);
x_15 = l_IO_FS_Stream_readLspMessage(x_2, x_7);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 2)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_ctor_get(x_15, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_16, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_dec(x_16);
x_22 = l_Lean_Json_isNull(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_20);
lean_free_object(x_15);
x_23 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__7;
lean_inc(x_6);
x_24 = l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3(x_23, x_6, x_18);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_8 = x_25;
x_9 = x_26;
goto block_14;
}
else
{
uint8_t x_27; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
return x_24;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_24, 0);
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_24);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
x_31 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(x_20, x_4);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_32 = l_Nat_reprFast(x_1);
x_33 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__8;
x_34 = lean_string_append(x_33, x_32);
lean_dec(x_32);
x_35 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__9;
x_36 = lean_string_append(x_34, x_35);
switch (lean_obj_tag(x_20)) {
case 0:
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_20);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_20, 0);
x_39 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10;
x_40 = lean_string_append(x_39, x_38);
lean_dec(x_38);
x_41 = lean_string_append(x_40, x_39);
x_42 = lean_string_append(x_36, x_41);
lean_dec(x_41);
x_43 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_44 = lean_string_append(x_42, x_43);
lean_ctor_set_tag(x_20, 18);
lean_ctor_set(x_20, 0, x_44);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_45 = lean_ctor_get(x_20, 0);
lean_inc(x_45);
lean_dec(x_20);
x_46 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10;
x_47 = lean_string_append(x_46, x_45);
lean_dec(x_45);
x_48 = lean_string_append(x_47, x_46);
x_49 = lean_string_append(x_36, x_48);
lean_dec(x_48);
x_50 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_51 = lean_string_append(x_49, x_50);
x_52 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_52);
return x_15;
}
}
case 1:
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_20);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = lean_ctor_get(x_20, 0);
x_55 = l_Lean_JsonNumber_toString(x_54);
x_56 = lean_string_append(x_36, x_55);
lean_dec(x_55);
x_57 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_58 = lean_string_append(x_56, x_57);
lean_ctor_set_tag(x_20, 18);
lean_ctor_set(x_20, 0, x_58);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_59 = lean_ctor_get(x_20, 0);
lean_inc(x_59);
lean_dec(x_20);
x_60 = l_Lean_JsonNumber_toString(x_59);
x_61 = lean_string_append(x_36, x_60);
lean_dec(x_60);
x_62 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_63 = lean_string_append(x_61, x_62);
x_64 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_64);
return x_15;
}
}
default: 
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_65 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__12;
x_66 = lean_string_append(x_36, x_65);
x_67 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_68 = lean_string_append(x_66, x_67);
x_69 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_69);
return x_15;
}
}
}
else
{
lean_object* x_70; lean_object* x_71; 
lean_dec(x_20);
lean_free_object(x_15);
x_70 = lean_box(0);
lean_inc(x_3);
x_71 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1(x_3, x_70, x_6, x_18);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_8 = x_72;
x_9 = x_73;
goto block_14;
}
else
{
uint8_t x_74; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_71);
if (x_74 == 0)
{
return x_71;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_71, 0);
x_76 = lean_ctor_get(x_71, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_71);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_78 = lean_ctor_get(x_15, 1);
lean_inc(x_78);
lean_dec(x_15);
x_79 = lean_ctor_get(x_16, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_16, 1);
lean_inc(x_80);
lean_dec(x_16);
x_81 = l_Lean_Json_isNull(x_80);
lean_dec(x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; 
lean_dec(x_79);
x_82 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__7;
lean_inc(x_6);
x_83 = l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3(x_82, x_6, x_78);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_8 = x_84;
x_9 = x_85;
goto block_14;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_86 = lean_ctor_get(x_83, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_83, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_88 = x_83;
} else {
 lean_dec_ref(x_83);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
else
{
uint8_t x_90; 
x_90 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(x_79, x_4);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_91 = l_Nat_reprFast(x_1);
x_92 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__8;
x_93 = lean_string_append(x_92, x_91);
lean_dec(x_91);
x_94 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__9;
x_95 = lean_string_append(x_93, x_94);
switch (lean_obj_tag(x_79)) {
case 0:
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_96 = lean_ctor_get(x_79, 0);
lean_inc(x_96);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 x_97 = x_79;
} else {
 lean_dec_ref(x_79);
 x_97 = lean_box(0);
}
x_98 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10;
x_99 = lean_string_append(x_98, x_96);
lean_dec(x_96);
x_100 = lean_string_append(x_99, x_98);
x_101 = lean_string_append(x_95, x_100);
lean_dec(x_100);
x_102 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_103 = lean_string_append(x_101, x_102);
if (lean_is_scalar(x_97)) {
 x_104 = lean_alloc_ctor(18, 1, 0);
} else {
 x_104 = x_97;
 lean_ctor_set_tag(x_104, 18);
}
lean_ctor_set(x_104, 0, x_103);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_78);
return x_105;
}
case 1:
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_106 = lean_ctor_get(x_79, 0);
lean_inc(x_106);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 x_107 = x_79;
} else {
 lean_dec_ref(x_79);
 x_107 = lean_box(0);
}
x_108 = l_Lean_JsonNumber_toString(x_106);
x_109 = lean_string_append(x_95, x_108);
lean_dec(x_108);
x_110 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_111 = lean_string_append(x_109, x_110);
if (lean_is_scalar(x_107)) {
 x_112 = lean_alloc_ctor(18, 1, 0);
} else {
 x_112 = x_107;
 lean_ctor_set_tag(x_112, 18);
}
lean_ctor_set(x_112, 0, x_111);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_78);
return x_113;
}
default: 
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_114 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__12;
x_115 = lean_string_append(x_95, x_114);
x_116 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_117 = lean_string_append(x_115, x_116);
x_118 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_118, 0, x_117);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_78);
return x_119;
}
}
}
else
{
lean_object* x_120; lean_object* x_121; 
lean_dec(x_79);
x_120 = lean_box(0);
lean_inc(x_3);
x_121 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1(x_3, x_120, x_6, x_78);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_8 = x_122;
x_9 = x_123;
goto block_14;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_124 = lean_ctor_get(x_121, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_121, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_126 = x_121;
} else {
 lean_dec_ref(x_121);
 x_126 = lean_box(0);
}
if (lean_is_scalar(x_126)) {
 x_127 = lean_alloc_ctor(1, 2, 0);
} else {
 x_127 = x_126;
}
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_125);
return x_127;
}
}
}
}
}
else
{
lean_object* x_128; lean_object* x_129; 
lean_dec(x_16);
x_128 = lean_ctor_get(x_15, 1);
lean_inc(x_128);
lean_dec(x_15);
x_129 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__1;
x_8 = x_129;
x_9 = x_128;
goto block_14;
}
}
else
{
uint8_t x_130; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_130 = !lean_is_exclusive(x_15);
if (x_130 == 0)
{
return x_15;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_15, 0);
x_132 = lean_ctor_get(x_15, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_15);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
}
block_14:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_5 = x_12;
x_7 = x_9;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_shutdown___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("shutdown", 8, 8);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_shutdown(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_2);
x_4 = l_Lean_Lsp_Ipc_stdout(x_2, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
lean_inc(x_2);
x_7 = l_Lean_Lsp_Ipc_stdin(x_2, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_1);
x_10 = l_Lean_JsonNumber_fromNat(x_1);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = l_Lean_Lsp_Ipc_shutdown___closed__1;
x_13 = lean_box(0);
lean_inc(x_11);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_12);
lean_ctor_set(x_14, 2, x_13);
lean_inc(x_8);
x_15 = l_IO_FS_Stream_writeLspRequest___at_Lean_Lsp_Ipc_shutdown___spec__1(x_8, x_14, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5(x_1, x_5, x_8, x_11, x_17, x_2, x_16);
lean_dec(x_11);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_15);
if (x_27 == 0)
{
return x_15;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_15, 0);
x_29 = lean_ctor_get(x_15, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_15);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readMessage(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Lean_Lsp_Ipc_stdout(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_IO_FS_Stream_readLspMessage(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readRequestAs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_Lean_Lsp_Ipc_stdout(x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_IO_FS_Stream_readLspRequestAs(x_7, x_1, lean_box(0), x_3, x_8);
return x_9;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Unexpected result '", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'\n", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("2.0", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__3;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("jsonrpc", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__5;
x_2 = l_Lean_Lsp_Ipc_readResponseAs___closed__4;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("message", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("data", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("id", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("code", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("error", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Expected JSON-RPC response, got: '", 34, 34);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32700u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__14;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__15;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__16;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32600u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__18;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__19;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__20;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32601u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__22;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__23;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__24;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32602u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__26;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__27;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__28;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32603u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__30;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__31;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__32;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32002u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__34;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__35;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__36;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__38() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32001u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__38;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__40() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__39;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__40;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32801u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__42;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__44() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__43;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__45() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__44;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32800u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__47() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__46;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__47;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__48;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__50() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32900u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__50;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__51;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__53() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__52;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__54() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32901u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__55() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__54;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__56() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__55;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__57() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__56;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__58() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32902u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__59() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__58;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__60() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__59;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___closed__61() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_Ipc_readResponseAs___closed__60;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_4);
x_6 = l_Lean_Lsp_Ipc_stdout(x_4, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
x_10 = l_IO_FS_Stream_readLspMessage(x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
switch (lean_obj_tag(x_11)) {
case 2:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_4);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_13 = x_10;
} else {
 lean_dec_ref(x_10);
 x_13 = lean_box(0);
}
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_61; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
x_61 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(x_15, x_1);
if (x_61 == 0)
{
lean_free_object(x_11);
lean_dec(x_16);
lean_free_object(x_6);
lean_dec(x_3);
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_1, 0);
lean_inc(x_62);
lean_dec(x_1);
x_63 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10;
x_64 = lean_string_append(x_63, x_62);
lean_dec(x_62);
x_65 = lean_string_append(x_64, x_63);
x_17 = x_65;
goto block_60;
}
case 1:
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_1, 0);
lean_inc(x_66);
lean_dec(x_1);
x_67 = l_Lean_JsonNumber_toString(x_66);
x_17 = x_67;
goto block_60;
}
default: 
{
lean_object* x_68; 
x_68 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__12;
x_17 = x_68;
goto block_60;
}
}
}
else
{
lean_object* x_69; 
lean_dec(x_15);
lean_dec(x_13);
lean_inc(x_16);
x_69 = lean_apply_1(x_3, x_16);
if (lean_obj_tag(x_69) == 0)
{
uint8_t x_70; 
lean_free_object(x_11);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_71 = lean_ctor_get(x_69, 0);
x_72 = l_Lean_Json_compress(x_16);
x_73 = l_Lean_Lsp_Ipc_readResponseAs___closed__1;
x_74 = lean_string_append(x_73, x_72);
lean_dec(x_72);
x_75 = l_Lean_Lsp_Ipc_readResponseAs___closed__2;
x_76 = lean_string_append(x_74, x_75);
x_77 = lean_string_append(x_76, x_71);
lean_dec(x_71);
x_78 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_79 = lean_string_append(x_77, x_78);
lean_ctor_set_tag(x_69, 18);
lean_ctor_set(x_69, 0, x_79);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 1, x_12);
lean_ctor_set(x_6, 0, x_69);
return x_6;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_80 = lean_ctor_get(x_69, 0);
lean_inc(x_80);
lean_dec(x_69);
x_81 = l_Lean_Json_compress(x_16);
x_82 = l_Lean_Lsp_Ipc_readResponseAs___closed__1;
x_83 = lean_string_append(x_82, x_81);
lean_dec(x_81);
x_84 = l_Lean_Lsp_Ipc_readResponseAs___closed__2;
x_85 = lean_string_append(x_83, x_84);
x_86 = lean_string_append(x_85, x_80);
lean_dec(x_80);
x_87 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_88 = lean_string_append(x_86, x_87);
x_89 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 1, x_12);
lean_ctor_set(x_6, 0, x_89);
return x_6;
}
}
else
{
lean_object* x_90; 
lean_dec(x_16);
x_90 = lean_ctor_get(x_69, 0);
lean_inc(x_90);
lean_dec(x_69);
lean_ctor_set_tag(x_11, 0);
lean_ctor_set(x_11, 1, x_90);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_6, 1, x_12);
lean_ctor_set(x_6, 0, x_11);
return x_6;
}
}
block_60:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__8;
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__9;
x_21 = lean_string_append(x_19, x_20);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_15, 0);
x_24 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10;
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = lean_string_append(x_25, x_24);
x_27 = lean_string_append(x_21, x_26);
lean_dec(x_26);
x_28 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_29 = lean_string_append(x_27, x_28);
lean_ctor_set_tag(x_15, 18);
lean_ctor_set(x_15, 0, x_29);
if (lean_is_scalar(x_13)) {
 x_30 = lean_alloc_ctor(1, 2, 0);
} else {
 x_30 = x_13;
 lean_ctor_set_tag(x_30, 1);
}
lean_ctor_set(x_30, 0, x_15);
lean_ctor_set(x_30, 1, x_12);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_31 = lean_ctor_get(x_15, 0);
lean_inc(x_31);
lean_dec(x_15);
x_32 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10;
x_33 = lean_string_append(x_32, x_31);
lean_dec(x_31);
x_34 = lean_string_append(x_33, x_32);
x_35 = lean_string_append(x_21, x_34);
lean_dec(x_34);
x_36 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_37 = lean_string_append(x_35, x_36);
x_38 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_38, 0, x_37);
if (lean_is_scalar(x_13)) {
 x_39 = lean_alloc_ctor(1, 2, 0);
} else {
 x_39 = x_13;
 lean_ctor_set_tag(x_39, 1);
}
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_12);
return x_39;
}
}
case 1:
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_15);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = l_Lean_JsonNumber_toString(x_41);
x_43 = lean_string_append(x_21, x_42);
lean_dec(x_42);
x_44 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_45 = lean_string_append(x_43, x_44);
lean_ctor_set_tag(x_15, 18);
lean_ctor_set(x_15, 0, x_45);
if (lean_is_scalar(x_13)) {
 x_46 = lean_alloc_ctor(1, 2, 0);
} else {
 x_46 = x_13;
 lean_ctor_set_tag(x_46, 1);
}
lean_ctor_set(x_46, 0, x_15);
lean_ctor_set(x_46, 1, x_12);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_47 = lean_ctor_get(x_15, 0);
lean_inc(x_47);
lean_dec(x_15);
x_48 = l_Lean_JsonNumber_toString(x_47);
x_49 = lean_string_append(x_21, x_48);
lean_dec(x_48);
x_50 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_51 = lean_string_append(x_49, x_50);
x_52 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_52, 0, x_51);
if (lean_is_scalar(x_13)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_13;
 lean_ctor_set_tag(x_53, 1);
}
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_12);
return x_53;
}
}
default: 
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_54 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__12;
x_55 = lean_string_append(x_21, x_54);
x_56 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_57 = lean_string_append(x_55, x_56);
x_58 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_58, 0, x_57);
if (lean_is_scalar(x_13)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_13;
 lean_ctor_set_tag(x_59, 1);
}
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_12);
return x_59;
}
}
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_123; 
x_91 = lean_ctor_get(x_11, 0);
x_92 = lean_ctor_get(x_11, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_11);
x_123 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(x_91, x_1);
if (x_123 == 0)
{
lean_dec(x_92);
lean_free_object(x_6);
lean_dec(x_3);
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_124 = lean_ctor_get(x_1, 0);
lean_inc(x_124);
lean_dec(x_1);
x_125 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10;
x_126 = lean_string_append(x_125, x_124);
lean_dec(x_124);
x_127 = lean_string_append(x_126, x_125);
x_93 = x_127;
goto block_122;
}
case 1:
{
lean_object* x_128; lean_object* x_129; 
x_128 = lean_ctor_get(x_1, 0);
lean_inc(x_128);
lean_dec(x_1);
x_129 = l_Lean_JsonNumber_toString(x_128);
x_93 = x_129;
goto block_122;
}
default: 
{
lean_object* x_130; 
x_130 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__12;
x_93 = x_130;
goto block_122;
}
}
}
else
{
lean_object* x_131; 
lean_dec(x_91);
lean_dec(x_13);
lean_inc(x_92);
x_131 = lean_apply_1(x_3, x_92);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_1);
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 x_133 = x_131;
} else {
 lean_dec_ref(x_131);
 x_133 = lean_box(0);
}
x_134 = l_Lean_Json_compress(x_92);
x_135 = l_Lean_Lsp_Ipc_readResponseAs___closed__1;
x_136 = lean_string_append(x_135, x_134);
lean_dec(x_134);
x_137 = l_Lean_Lsp_Ipc_readResponseAs___closed__2;
x_138 = lean_string_append(x_136, x_137);
x_139 = lean_string_append(x_138, x_132);
lean_dec(x_132);
x_140 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_141 = lean_string_append(x_139, x_140);
if (lean_is_scalar(x_133)) {
 x_142 = lean_alloc_ctor(18, 1, 0);
} else {
 x_142 = x_133;
 lean_ctor_set_tag(x_142, 18);
}
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 1, x_12);
lean_ctor_set(x_6, 0, x_142);
return x_6;
}
else
{
lean_object* x_143; lean_object* x_144; 
lean_dec(x_92);
x_143 = lean_ctor_get(x_131, 0);
lean_inc(x_143);
lean_dec(x_131);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_1);
lean_ctor_set(x_144, 1, x_143);
lean_ctor_set(x_6, 1, x_12);
lean_ctor_set(x_6, 0, x_144);
return x_6;
}
}
block_122:
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_94 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__8;
x_95 = lean_string_append(x_94, x_93);
lean_dec(x_93);
x_96 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__9;
x_97 = lean_string_append(x_95, x_96);
switch (lean_obj_tag(x_91)) {
case 0:
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_98 = lean_ctor_get(x_91, 0);
lean_inc(x_98);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 x_99 = x_91;
} else {
 lean_dec_ref(x_91);
 x_99 = lean_box(0);
}
x_100 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10;
x_101 = lean_string_append(x_100, x_98);
lean_dec(x_98);
x_102 = lean_string_append(x_101, x_100);
x_103 = lean_string_append(x_97, x_102);
lean_dec(x_102);
x_104 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_105 = lean_string_append(x_103, x_104);
if (lean_is_scalar(x_99)) {
 x_106 = lean_alloc_ctor(18, 1, 0);
} else {
 x_106 = x_99;
 lean_ctor_set_tag(x_106, 18);
}
lean_ctor_set(x_106, 0, x_105);
if (lean_is_scalar(x_13)) {
 x_107 = lean_alloc_ctor(1, 2, 0);
} else {
 x_107 = x_13;
 lean_ctor_set_tag(x_107, 1);
}
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_12);
return x_107;
}
case 1:
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_108 = lean_ctor_get(x_91, 0);
lean_inc(x_108);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 x_109 = x_91;
} else {
 lean_dec_ref(x_91);
 x_109 = lean_box(0);
}
x_110 = l_Lean_JsonNumber_toString(x_108);
x_111 = lean_string_append(x_97, x_110);
lean_dec(x_110);
x_112 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_113 = lean_string_append(x_111, x_112);
if (lean_is_scalar(x_109)) {
 x_114 = lean_alloc_ctor(18, 1, 0);
} else {
 x_114 = x_109;
 lean_ctor_set_tag(x_114, 18);
}
lean_ctor_set(x_114, 0, x_113);
if (lean_is_scalar(x_13)) {
 x_115 = lean_alloc_ctor(1, 2, 0);
} else {
 x_115 = x_13;
 lean_ctor_set_tag(x_115, 1);
}
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_12);
return x_115;
}
default: 
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_116 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__12;
x_117 = lean_string_append(x_97, x_116);
x_118 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_119 = lean_string_append(x_117, x_118);
x_120 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_120, 0, x_119);
if (lean_is_scalar(x_13)) {
 x_121 = lean_alloc_ctor(1, 2, 0);
} else {
 x_121 = x_13;
 lean_ctor_set_tag(x_121, 1);
}
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_12);
return x_121;
}
}
}
}
}
case 3:
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
lean_free_object(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_145 = lean_ctor_get(x_10, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_146 = x_10;
} else {
 lean_dec_ref(x_10);
 x_146 = lean_box(0);
}
x_147 = lean_ctor_get(x_11, 0);
lean_inc(x_147);
x_148 = lean_ctor_get_uint8(x_11, sizeof(void*)*3);
x_149 = lean_ctor_get(x_11, 1);
lean_inc(x_149);
x_150 = lean_ctor_get(x_11, 2);
lean_inc(x_150);
lean_dec(x_11);
x_151 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_151, 0, x_149);
x_152 = l_Lean_Lsp_Ipc_readResponseAs___closed__7;
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_151);
x_154 = lean_box(0);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
x_156 = l_Lean_Lsp_Ipc_readResponseAs___closed__8;
x_157 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_toJsonLeanModule____x40_Lean_Data_Lsp_Extra___hyg_2262____spec__1(x_156, x_150);
lean_dec(x_150);
switch (lean_obj_tag(x_147)) {
case 0:
{
uint8_t x_195; 
x_195 = !lean_is_exclusive(x_147);
if (x_195 == 0)
{
lean_ctor_set_tag(x_147, 3);
x_158 = x_147;
goto block_194;
}
else
{
lean_object* x_196; lean_object* x_197; 
x_196 = lean_ctor_get(x_147, 0);
lean_inc(x_196);
lean_dec(x_147);
x_197 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_197, 0, x_196);
x_158 = x_197;
goto block_194;
}
}
case 1:
{
uint8_t x_198; 
x_198 = !lean_is_exclusive(x_147);
if (x_198 == 0)
{
lean_ctor_set_tag(x_147, 2);
x_158 = x_147;
goto block_194;
}
else
{
lean_object* x_199; lean_object* x_200; 
x_199 = lean_ctor_get(x_147, 0);
lean_inc(x_199);
lean_dec(x_147);
x_200 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_200, 0, x_199);
x_158 = x_200;
goto block_194;
}
}
default: 
{
lean_object* x_201; 
x_201 = lean_box(0);
x_158 = x_201;
goto block_194;
}
}
block_194:
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = l_Lean_Lsp_Ipc_readResponseAs___closed__9;
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_158);
switch (x_148) {
case 0:
{
lean_object* x_182; 
x_182 = l_Lean_Lsp_Ipc_readResponseAs___closed__17;
x_161 = x_182;
goto block_181;
}
case 1:
{
lean_object* x_183; 
x_183 = l_Lean_Lsp_Ipc_readResponseAs___closed__21;
x_161 = x_183;
goto block_181;
}
case 2:
{
lean_object* x_184; 
x_184 = l_Lean_Lsp_Ipc_readResponseAs___closed__25;
x_161 = x_184;
goto block_181;
}
case 3:
{
lean_object* x_185; 
x_185 = l_Lean_Lsp_Ipc_readResponseAs___closed__29;
x_161 = x_185;
goto block_181;
}
case 4:
{
lean_object* x_186; 
x_186 = l_Lean_Lsp_Ipc_readResponseAs___closed__33;
x_161 = x_186;
goto block_181;
}
case 5:
{
lean_object* x_187; 
x_187 = l_Lean_Lsp_Ipc_readResponseAs___closed__37;
x_161 = x_187;
goto block_181;
}
case 6:
{
lean_object* x_188; 
x_188 = l_Lean_Lsp_Ipc_readResponseAs___closed__41;
x_161 = x_188;
goto block_181;
}
case 7:
{
lean_object* x_189; 
x_189 = l_Lean_Lsp_Ipc_readResponseAs___closed__45;
x_161 = x_189;
goto block_181;
}
case 8:
{
lean_object* x_190; 
x_190 = l_Lean_Lsp_Ipc_readResponseAs___closed__49;
x_161 = x_190;
goto block_181;
}
case 9:
{
lean_object* x_191; 
x_191 = l_Lean_Lsp_Ipc_readResponseAs___closed__53;
x_161 = x_191;
goto block_181;
}
case 10:
{
lean_object* x_192; 
x_192 = l_Lean_Lsp_Ipc_readResponseAs___closed__57;
x_161 = x_192;
goto block_181;
}
default: 
{
lean_object* x_193; 
x_193 = l_Lean_Lsp_Ipc_readResponseAs___closed__61;
x_161 = x_193;
goto block_181;
}
}
block_181:
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_162 = l_Lean_Lsp_Ipc_readResponseAs___closed__10;
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_161);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_155);
x_165 = l_List_appendTR___rarg(x_164, x_157);
x_166 = l_Lean_Json_mkObj(x_165);
x_167 = l_Lean_Lsp_Ipc_readResponseAs___closed__11;
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_166);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_154);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_160);
lean_ctor_set(x_170, 1, x_169);
x_171 = l_Lean_Lsp_Ipc_readResponseAs___closed__6;
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_170);
x_173 = l_Lean_Json_mkObj(x_172);
x_174 = l_Lean_Json_compress(x_173);
x_175 = l_Lean_Lsp_Ipc_readResponseAs___closed__12;
x_176 = lean_string_append(x_175, x_174);
lean_dec(x_174);
x_177 = l_Lean_Lsp_Ipc_readResponseAs___closed__13;
x_178 = lean_string_append(x_176, x_177);
x_179 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_179, 0, x_178);
if (lean_is_scalar(x_146)) {
 x_180 = lean_alloc_ctor(1, 2, 0);
} else {
 x_180 = x_146;
 lean_ctor_set_tag(x_180, 1);
}
lean_ctor_set(x_180, 0, x_179);
lean_ctor_set(x_180, 1, x_145);
return x_180;
}
}
}
default: 
{
lean_object* x_202; 
lean_dec(x_11);
lean_free_object(x_6);
x_202 = lean_ctor_get(x_10, 1);
lean_inc(x_202);
lean_dec(x_10);
x_2 = lean_box(0);
x_5 = x_202;
goto _start;
}
}
}
else
{
uint8_t x_204; 
lean_free_object(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_204 = !lean_is_exclusive(x_10);
if (x_204 == 0)
{
return x_10;
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_205 = lean_ctor_get(x_10, 0);
x_206 = lean_ctor_get(x_10, 1);
lean_inc(x_206);
lean_inc(x_205);
lean_dec(x_10);
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_205);
lean_ctor_set(x_207, 1, x_206);
return x_207;
}
}
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_208 = lean_ctor_get(x_6, 0);
x_209 = lean_ctor_get(x_6, 1);
lean_inc(x_209);
lean_inc(x_208);
lean_dec(x_6);
x_210 = l_IO_FS_Stream_readLspMessage(x_208, x_209);
if (lean_obj_tag(x_210) == 0)
{
lean_object* x_211; 
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
switch (lean_obj_tag(x_211)) {
case 2:
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_247; 
lean_dec(x_4);
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 lean_ctor_release(x_210, 1);
 x_213 = x_210;
} else {
 lean_dec_ref(x_210);
 x_213 = lean_box(0);
}
x_214 = lean_ctor_get(x_211, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_211, 1);
lean_inc(x_215);
if (lean_is_exclusive(x_211)) {
 lean_ctor_release(x_211, 0);
 lean_ctor_release(x_211, 1);
 x_216 = x_211;
} else {
 lean_dec_ref(x_211);
 x_216 = lean_box(0);
}
x_247 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(x_214, x_1);
if (x_247 == 0)
{
lean_dec(x_216);
lean_dec(x_215);
lean_dec(x_3);
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_248 = lean_ctor_get(x_1, 0);
lean_inc(x_248);
lean_dec(x_1);
x_249 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10;
x_250 = lean_string_append(x_249, x_248);
lean_dec(x_248);
x_251 = lean_string_append(x_250, x_249);
x_217 = x_251;
goto block_246;
}
case 1:
{
lean_object* x_252; lean_object* x_253; 
x_252 = lean_ctor_get(x_1, 0);
lean_inc(x_252);
lean_dec(x_1);
x_253 = l_Lean_JsonNumber_toString(x_252);
x_217 = x_253;
goto block_246;
}
default: 
{
lean_object* x_254; 
x_254 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__12;
x_217 = x_254;
goto block_246;
}
}
}
else
{
lean_object* x_255; 
lean_dec(x_214);
lean_dec(x_213);
lean_inc(x_215);
x_255 = lean_apply_1(x_3, x_215);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
lean_dec(x_216);
lean_dec(x_1);
x_256 = lean_ctor_get(x_255, 0);
lean_inc(x_256);
if (lean_is_exclusive(x_255)) {
 lean_ctor_release(x_255, 0);
 x_257 = x_255;
} else {
 lean_dec_ref(x_255);
 x_257 = lean_box(0);
}
x_258 = l_Lean_Json_compress(x_215);
x_259 = l_Lean_Lsp_Ipc_readResponseAs___closed__1;
x_260 = lean_string_append(x_259, x_258);
lean_dec(x_258);
x_261 = l_Lean_Lsp_Ipc_readResponseAs___closed__2;
x_262 = lean_string_append(x_260, x_261);
x_263 = lean_string_append(x_262, x_256);
lean_dec(x_256);
x_264 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_265 = lean_string_append(x_263, x_264);
if (lean_is_scalar(x_257)) {
 x_266 = lean_alloc_ctor(18, 1, 0);
} else {
 x_266 = x_257;
 lean_ctor_set_tag(x_266, 18);
}
lean_ctor_set(x_266, 0, x_265);
x_267 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_267, 0, x_266);
lean_ctor_set(x_267, 1, x_212);
return x_267;
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; 
lean_dec(x_215);
x_268 = lean_ctor_get(x_255, 0);
lean_inc(x_268);
lean_dec(x_255);
if (lean_is_scalar(x_216)) {
 x_269 = lean_alloc_ctor(0, 2, 0);
} else {
 x_269 = x_216;
 lean_ctor_set_tag(x_269, 0);
}
lean_ctor_set(x_269, 0, x_1);
lean_ctor_set(x_269, 1, x_268);
x_270 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_270, 0, x_269);
lean_ctor_set(x_270, 1, x_212);
return x_270;
}
}
block_246:
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_218 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__8;
x_219 = lean_string_append(x_218, x_217);
lean_dec(x_217);
x_220 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__9;
x_221 = lean_string_append(x_219, x_220);
switch (lean_obj_tag(x_214)) {
case 0:
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_222 = lean_ctor_get(x_214, 0);
lean_inc(x_222);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 x_223 = x_214;
} else {
 lean_dec_ref(x_214);
 x_223 = lean_box(0);
}
x_224 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10;
x_225 = lean_string_append(x_224, x_222);
lean_dec(x_222);
x_226 = lean_string_append(x_225, x_224);
x_227 = lean_string_append(x_221, x_226);
lean_dec(x_226);
x_228 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_229 = lean_string_append(x_227, x_228);
if (lean_is_scalar(x_223)) {
 x_230 = lean_alloc_ctor(18, 1, 0);
} else {
 x_230 = x_223;
 lean_ctor_set_tag(x_230, 18);
}
lean_ctor_set(x_230, 0, x_229);
if (lean_is_scalar(x_213)) {
 x_231 = lean_alloc_ctor(1, 2, 0);
} else {
 x_231 = x_213;
 lean_ctor_set_tag(x_231, 1);
}
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_212);
return x_231;
}
case 1:
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_232 = lean_ctor_get(x_214, 0);
lean_inc(x_232);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 x_233 = x_214;
} else {
 lean_dec_ref(x_214);
 x_233 = lean_box(0);
}
x_234 = l_Lean_JsonNumber_toString(x_232);
x_235 = lean_string_append(x_221, x_234);
lean_dec(x_234);
x_236 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_237 = lean_string_append(x_235, x_236);
if (lean_is_scalar(x_233)) {
 x_238 = lean_alloc_ctor(18, 1, 0);
} else {
 x_238 = x_233;
 lean_ctor_set_tag(x_238, 18);
}
lean_ctor_set(x_238, 0, x_237);
if (lean_is_scalar(x_213)) {
 x_239 = lean_alloc_ctor(1, 2, 0);
} else {
 x_239 = x_213;
 lean_ctor_set_tag(x_239, 1);
}
lean_ctor_set(x_239, 0, x_238);
lean_ctor_set(x_239, 1, x_212);
return x_239;
}
default: 
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_240 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__12;
x_241 = lean_string_append(x_221, x_240);
x_242 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_243 = lean_string_append(x_241, x_242);
x_244 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_244, 0, x_243);
if (lean_is_scalar(x_213)) {
 x_245 = lean_alloc_ctor(1, 2, 0);
} else {
 x_245 = x_213;
 lean_ctor_set_tag(x_245, 1);
}
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_212);
return x_245;
}
}
}
}
case 3:
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; uint8_t x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_271 = lean_ctor_get(x_210, 1);
lean_inc(x_271);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 lean_ctor_release(x_210, 1);
 x_272 = x_210;
} else {
 lean_dec_ref(x_210);
 x_272 = lean_box(0);
}
x_273 = lean_ctor_get(x_211, 0);
lean_inc(x_273);
x_274 = lean_ctor_get_uint8(x_211, sizeof(void*)*3);
x_275 = lean_ctor_get(x_211, 1);
lean_inc(x_275);
x_276 = lean_ctor_get(x_211, 2);
lean_inc(x_276);
lean_dec(x_211);
x_277 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_277, 0, x_275);
x_278 = l_Lean_Lsp_Ipc_readResponseAs___closed__7;
x_279 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_279, 0, x_278);
lean_ctor_set(x_279, 1, x_277);
x_280 = lean_box(0);
x_281 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_281, 0, x_279);
lean_ctor_set(x_281, 1, x_280);
x_282 = l_Lean_Lsp_Ipc_readResponseAs___closed__8;
x_283 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_toJsonLeanModule____x40_Lean_Data_Lsp_Extra___hyg_2262____spec__1(x_282, x_276);
lean_dec(x_276);
switch (lean_obj_tag(x_273)) {
case 0:
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; 
x_321 = lean_ctor_get(x_273, 0);
lean_inc(x_321);
if (lean_is_exclusive(x_273)) {
 lean_ctor_release(x_273, 0);
 x_322 = x_273;
} else {
 lean_dec_ref(x_273);
 x_322 = lean_box(0);
}
if (lean_is_scalar(x_322)) {
 x_323 = lean_alloc_ctor(3, 1, 0);
} else {
 x_323 = x_322;
 lean_ctor_set_tag(x_323, 3);
}
lean_ctor_set(x_323, 0, x_321);
x_284 = x_323;
goto block_320;
}
case 1:
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; 
x_324 = lean_ctor_get(x_273, 0);
lean_inc(x_324);
if (lean_is_exclusive(x_273)) {
 lean_ctor_release(x_273, 0);
 x_325 = x_273;
} else {
 lean_dec_ref(x_273);
 x_325 = lean_box(0);
}
if (lean_is_scalar(x_325)) {
 x_326 = lean_alloc_ctor(2, 1, 0);
} else {
 x_326 = x_325;
 lean_ctor_set_tag(x_326, 2);
}
lean_ctor_set(x_326, 0, x_324);
x_284 = x_326;
goto block_320;
}
default: 
{
lean_object* x_327; 
x_327 = lean_box(0);
x_284 = x_327;
goto block_320;
}
}
block_320:
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; 
x_285 = l_Lean_Lsp_Ipc_readResponseAs___closed__9;
x_286 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_286, 0, x_285);
lean_ctor_set(x_286, 1, x_284);
switch (x_274) {
case 0:
{
lean_object* x_308; 
x_308 = l_Lean_Lsp_Ipc_readResponseAs___closed__17;
x_287 = x_308;
goto block_307;
}
case 1:
{
lean_object* x_309; 
x_309 = l_Lean_Lsp_Ipc_readResponseAs___closed__21;
x_287 = x_309;
goto block_307;
}
case 2:
{
lean_object* x_310; 
x_310 = l_Lean_Lsp_Ipc_readResponseAs___closed__25;
x_287 = x_310;
goto block_307;
}
case 3:
{
lean_object* x_311; 
x_311 = l_Lean_Lsp_Ipc_readResponseAs___closed__29;
x_287 = x_311;
goto block_307;
}
case 4:
{
lean_object* x_312; 
x_312 = l_Lean_Lsp_Ipc_readResponseAs___closed__33;
x_287 = x_312;
goto block_307;
}
case 5:
{
lean_object* x_313; 
x_313 = l_Lean_Lsp_Ipc_readResponseAs___closed__37;
x_287 = x_313;
goto block_307;
}
case 6:
{
lean_object* x_314; 
x_314 = l_Lean_Lsp_Ipc_readResponseAs___closed__41;
x_287 = x_314;
goto block_307;
}
case 7:
{
lean_object* x_315; 
x_315 = l_Lean_Lsp_Ipc_readResponseAs___closed__45;
x_287 = x_315;
goto block_307;
}
case 8:
{
lean_object* x_316; 
x_316 = l_Lean_Lsp_Ipc_readResponseAs___closed__49;
x_287 = x_316;
goto block_307;
}
case 9:
{
lean_object* x_317; 
x_317 = l_Lean_Lsp_Ipc_readResponseAs___closed__53;
x_287 = x_317;
goto block_307;
}
case 10:
{
lean_object* x_318; 
x_318 = l_Lean_Lsp_Ipc_readResponseAs___closed__57;
x_287 = x_318;
goto block_307;
}
default: 
{
lean_object* x_319; 
x_319 = l_Lean_Lsp_Ipc_readResponseAs___closed__61;
x_287 = x_319;
goto block_307;
}
}
block_307:
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_288 = l_Lean_Lsp_Ipc_readResponseAs___closed__10;
x_289 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_287);
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_281);
x_291 = l_List_appendTR___rarg(x_290, x_283);
x_292 = l_Lean_Json_mkObj(x_291);
x_293 = l_Lean_Lsp_Ipc_readResponseAs___closed__11;
x_294 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_294, 1, x_292);
x_295 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_295, 0, x_294);
lean_ctor_set(x_295, 1, x_280);
x_296 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_296, 0, x_286);
lean_ctor_set(x_296, 1, x_295);
x_297 = l_Lean_Lsp_Ipc_readResponseAs___closed__6;
x_298 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_298, 0, x_297);
lean_ctor_set(x_298, 1, x_296);
x_299 = l_Lean_Json_mkObj(x_298);
x_300 = l_Lean_Json_compress(x_299);
x_301 = l_Lean_Lsp_Ipc_readResponseAs___closed__12;
x_302 = lean_string_append(x_301, x_300);
lean_dec(x_300);
x_303 = l_Lean_Lsp_Ipc_readResponseAs___closed__13;
x_304 = lean_string_append(x_302, x_303);
x_305 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_305, 0, x_304);
if (lean_is_scalar(x_272)) {
 x_306 = lean_alloc_ctor(1, 2, 0);
} else {
 x_306 = x_272;
 lean_ctor_set_tag(x_306, 1);
}
lean_ctor_set(x_306, 0, x_305);
lean_ctor_set(x_306, 1, x_271);
return x_306;
}
}
}
default: 
{
lean_object* x_328; 
lean_dec(x_211);
x_328 = lean_ctor_get(x_210, 1);
lean_inc(x_328);
lean_dec(x_210);
x_2 = lean_box(0);
x_5 = x_328;
goto _start;
}
}
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_330 = lean_ctor_get(x_210, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_210, 1);
lean_inc(x_331);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 lean_ctor_release(x_210, 1);
 x_332 = x_210;
} else {
 lean_dec_ref(x_210);
 x_332 = lean_box(0);
}
if (lean_is_scalar(x_332)) {
 x_333 = lean_alloc_ctor(1, 2, 0);
} else {
 x_333 = x_332;
}
lean_ctor_set(x_333, 0, x_330);
lean_ctor_set(x_333, 1, x_331);
return x_333;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForExit(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Lsp_Ipc_ipcStdioConfig;
x_4 = lean_io_process_child_wait(x_3, x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForExit___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Lsp_Ipc_waitForExit(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("textDocument/publishDiagnostics", 31, 31);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Cannot decode publishDiagnostics parameters\n", 44, 44);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Waiting for diagnostics failed: ", 32, 32);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_collectDiagnostics_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_2);
x_4 = l_Lean_Lsp_Ipc_readMessage(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
switch (lean_obj_tag(x_5)) {
case 0:
{
lean_object* x_6; 
lean_dec(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_3 = x_6;
goto _start;
}
case 1:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_4, 1);
x_10 = lean_ctor_get(x_4, 0);
lean_dec(x_10);
x_11 = !lean_is_exclusive(x_5);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 1);
x_14 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1;
x_15 = lean_string_dec_eq(x_12, x_14);
lean_dec(x_12);
if (x_15 == 0)
{
lean_free_object(x_5);
lean_dec(x_13);
lean_free_object(x_4);
x_3 = x_9;
goto _start;
}
else
{
if (lean_obj_tag(x_13) == 0)
{
lean_free_object(x_5);
lean_free_object(x_4);
x_3 = x_9;
goto _start;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = l_Lean_Json_Structured_toJson(x_19);
x_21 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_2516_(x_20);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
lean_free_object(x_13);
lean_free_object(x_5);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2;
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_27 = lean_string_append(x_25, x_26);
lean_ctor_set_tag(x_21, 18);
lean_ctor_set(x_21, 0, x_27);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_21);
return x_4;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
x_29 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2;
x_30 = lean_string_append(x_29, x_28);
lean_dec(x_28);
x_31 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_32 = lean_string_append(x_30, x_31);
x_33 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_33);
return x_4;
}
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_free_object(x_4);
x_34 = lean_ctor_get(x_21, 0);
lean_inc(x_34);
lean_dec(x_21);
x_35 = l_Lean_Lsp_Ipc_collectDiagnostics_loop(x_1, x_2, x_9);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_35);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_35, 0);
lean_dec(x_38);
lean_ctor_set_tag(x_5, 0);
lean_ctor_set(x_5, 1, x_34);
lean_ctor_set(x_5, 0, x_14);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_35, 0, x_13);
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_35, 1);
lean_inc(x_39);
lean_dec(x_35);
lean_ctor_set_tag(x_5, 0);
lean_ctor_set(x_5, 1, x_34);
lean_ctor_set(x_5, 0, x_14);
lean_ctor_set(x_13, 0, x_5);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_13);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_34);
lean_free_object(x_13);
lean_free_object(x_5);
x_41 = !lean_is_exclusive(x_35);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_35, 0);
lean_dec(x_42);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_35;
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_36, 0);
lean_inc(x_44);
lean_dec(x_36);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_35, 0, x_45);
return x_35;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_35, 1);
lean_inc(x_46);
lean_dec(x_35);
x_47 = lean_ctor_get(x_36, 0);
lean_inc(x_47);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 x_48 = x_36;
} else {
 lean_dec_ref(x_36);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(1, 1, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_47);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_46);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_34);
lean_free_object(x_13);
lean_free_object(x_5);
x_51 = !lean_is_exclusive(x_35);
if (x_51 == 0)
{
return x_35;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_35, 0);
x_53 = lean_ctor_get(x_35, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_35);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_13, 0);
lean_inc(x_55);
lean_dec(x_13);
x_56 = l_Lean_Json_Structured_toJson(x_55);
x_57 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_2516_(x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_free_object(x_5);
lean_dec(x_2);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_59 = x_57;
} else {
 lean_dec_ref(x_57);
 x_59 = lean_box(0);
}
x_60 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2;
x_61 = lean_string_append(x_60, x_58);
lean_dec(x_58);
x_62 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_63 = lean_string_append(x_61, x_62);
if (lean_is_scalar(x_59)) {
 x_64 = lean_alloc_ctor(18, 1, 0);
} else {
 x_64 = x_59;
 lean_ctor_set_tag(x_64, 18);
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_64);
return x_4;
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_free_object(x_4);
x_65 = lean_ctor_get(x_57, 0);
lean_inc(x_65);
lean_dec(x_57);
x_66 = l_Lean_Lsp_Ipc_collectDiagnostics_loop(x_1, x_2, x_9);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_69 = x_66;
} else {
 lean_dec_ref(x_66);
 x_69 = lean_box(0);
}
lean_ctor_set_tag(x_5, 0);
lean_ctor_set(x_5, 1, x_65);
lean_ctor_set(x_5, 0, x_14);
x_70 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_70, 0, x_5);
if (lean_is_scalar(x_69)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_69;
}
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_68);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_65);
lean_free_object(x_5);
x_72 = lean_ctor_get(x_66, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_73 = x_66;
} else {
 lean_dec_ref(x_66);
 x_73 = lean_box(0);
}
x_74 = lean_ctor_get(x_67, 0);
lean_inc(x_74);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 x_75 = x_67;
} else {
 lean_dec_ref(x_67);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_74);
if (lean_is_scalar(x_73)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_73;
}
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_72);
return x_77;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_65);
lean_free_object(x_5);
x_78 = lean_ctor_get(x_66, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_66, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_80 = x_66;
} else {
 lean_dec_ref(x_66);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(1, 2, 0);
} else {
 x_81 = x_80;
}
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_82 = lean_ctor_get(x_5, 0);
x_83 = lean_ctor_get(x_5, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_5);
x_84 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1;
x_85 = lean_string_dec_eq(x_82, x_84);
lean_dec(x_82);
if (x_85 == 0)
{
lean_dec(x_83);
lean_free_object(x_4);
x_3 = x_9;
goto _start;
}
else
{
if (lean_obj_tag(x_83) == 0)
{
lean_free_object(x_4);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_88 = lean_ctor_get(x_83, 0);
lean_inc(x_88);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 x_89 = x_83;
} else {
 lean_dec_ref(x_83);
 x_89 = lean_box(0);
}
x_90 = l_Lean_Json_Structured_toJson(x_88);
x_91 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_2516_(x_90);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_89);
lean_dec(x_2);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 x_93 = x_91;
} else {
 lean_dec_ref(x_91);
 x_93 = lean_box(0);
}
x_94 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2;
x_95 = lean_string_append(x_94, x_92);
lean_dec(x_92);
x_96 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_97 = lean_string_append(x_95, x_96);
if (lean_is_scalar(x_93)) {
 x_98 = lean_alloc_ctor(18, 1, 0);
} else {
 x_98 = x_93;
 lean_ctor_set_tag(x_98, 18);
}
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_98);
return x_4;
}
else
{
lean_object* x_99; lean_object* x_100; 
lean_free_object(x_4);
x_99 = lean_ctor_get(x_91, 0);
lean_inc(x_99);
lean_dec(x_91);
x_100 = l_Lean_Lsp_Ipc_collectDiagnostics_loop(x_1, x_2, x_9);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 x_103 = x_100;
} else {
 lean_dec_ref(x_100);
 x_103 = lean_box(0);
}
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_84);
lean_ctor_set(x_104, 1, x_99);
if (lean_is_scalar(x_89)) {
 x_105 = lean_alloc_ctor(1, 1, 0);
} else {
 x_105 = x_89;
}
lean_ctor_set(x_105, 0, x_104);
if (lean_is_scalar(x_103)) {
 x_106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_106 = x_103;
}
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_102);
return x_106;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_99);
lean_dec(x_89);
x_107 = lean_ctor_get(x_100, 1);
lean_inc(x_107);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 x_108 = x_100;
} else {
 lean_dec_ref(x_100);
 x_108 = lean_box(0);
}
x_109 = lean_ctor_get(x_101, 0);
lean_inc(x_109);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 x_110 = x_101;
} else {
 lean_dec_ref(x_101);
 x_110 = lean_box(0);
}
if (lean_is_scalar(x_110)) {
 x_111 = lean_alloc_ctor(1, 1, 0);
} else {
 x_111 = x_110;
}
lean_ctor_set(x_111, 0, x_109);
if (lean_is_scalar(x_108)) {
 x_112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_112 = x_108;
}
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_107);
return x_112;
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
lean_dec(x_99);
lean_dec(x_89);
x_113 = lean_ctor_get(x_100, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_100, 1);
lean_inc(x_114);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 x_115 = x_100;
} else {
 lean_dec_ref(x_100);
 x_115 = lean_box(0);
}
if (lean_is_scalar(x_115)) {
 x_116 = lean_alloc_ctor(1, 2, 0);
} else {
 x_116 = x_115;
}
lean_ctor_set(x_116, 0, x_113);
lean_ctor_set(x_116, 1, x_114);
return x_116;
}
}
}
}
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; 
x_117 = lean_ctor_get(x_4, 1);
lean_inc(x_117);
lean_dec(x_4);
x_118 = lean_ctor_get(x_5, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_5, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_120 = x_5;
} else {
 lean_dec_ref(x_5);
 x_120 = lean_box(0);
}
x_121 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1;
x_122 = lean_string_dec_eq(x_118, x_121);
lean_dec(x_118);
if (x_122 == 0)
{
lean_dec(x_120);
lean_dec(x_119);
x_3 = x_117;
goto _start;
}
else
{
if (lean_obj_tag(x_119) == 0)
{
lean_dec(x_120);
x_3 = x_117;
goto _start;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_125 = lean_ctor_get(x_119, 0);
lean_inc(x_125);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 x_126 = x_119;
} else {
 lean_dec_ref(x_119);
 x_126 = lean_box(0);
}
x_127 = l_Lean_Json_Structured_toJson(x_125);
x_128 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_2516_(x_127);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_126);
lean_dec(x_120);
lean_dec(x_2);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 x_130 = x_128;
} else {
 lean_dec_ref(x_128);
 x_130 = lean_box(0);
}
x_131 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2;
x_132 = lean_string_append(x_131, x_129);
lean_dec(x_129);
x_133 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_134 = lean_string_append(x_132, x_133);
if (lean_is_scalar(x_130)) {
 x_135 = lean_alloc_ctor(18, 1, 0);
} else {
 x_135 = x_130;
 lean_ctor_set_tag(x_135, 18);
}
lean_ctor_set(x_135, 0, x_134);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_117);
return x_136;
}
else
{
lean_object* x_137; lean_object* x_138; 
x_137 = lean_ctor_get(x_128, 0);
lean_inc(x_137);
lean_dec(x_128);
x_138 = l_Lean_Lsp_Ipc_collectDiagnostics_loop(x_1, x_2, x_117);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; 
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_140 = lean_ctor_get(x_138, 1);
lean_inc(x_140);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_141 = x_138;
} else {
 lean_dec_ref(x_138);
 x_141 = lean_box(0);
}
if (lean_is_scalar(x_120)) {
 x_142 = lean_alloc_ctor(0, 2, 0);
} else {
 x_142 = x_120;
 lean_ctor_set_tag(x_142, 0);
}
lean_ctor_set(x_142, 0, x_121);
lean_ctor_set(x_142, 1, x_137);
if (lean_is_scalar(x_126)) {
 x_143 = lean_alloc_ctor(1, 1, 0);
} else {
 x_143 = x_126;
}
lean_ctor_set(x_143, 0, x_142);
if (lean_is_scalar(x_141)) {
 x_144 = lean_alloc_ctor(0, 2, 0);
} else {
 x_144 = x_141;
}
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_140);
return x_144;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_137);
lean_dec(x_126);
lean_dec(x_120);
x_145 = lean_ctor_get(x_138, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_146 = x_138;
} else {
 lean_dec_ref(x_138);
 x_146 = lean_box(0);
}
x_147 = lean_ctor_get(x_139, 0);
lean_inc(x_147);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 x_148 = x_139;
} else {
 lean_dec_ref(x_139);
 x_148 = lean_box(0);
}
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 1, 0);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_147);
if (lean_is_scalar(x_146)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_146;
}
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_145);
return x_150;
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_137);
lean_dec(x_126);
lean_dec(x_120);
x_151 = lean_ctor_get(x_138, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_138, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_153 = x_138;
} else {
 lean_dec_ref(x_138);
 x_153 = lean_box(0);
}
if (lean_is_scalar(x_153)) {
 x_154 = lean_alloc_ctor(1, 2, 0);
} else {
 x_154 = x_153;
}
lean_ctor_set(x_154, 0, x_151);
lean_ctor_set(x_154, 1, x_152);
return x_154;
}
}
}
}
}
}
case 2:
{
uint8_t x_155; 
x_155 = !lean_is_exclusive(x_4);
if (x_155 == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
x_156 = lean_ctor_get(x_4, 1);
x_157 = lean_ctor_get(x_4, 0);
lean_dec(x_157);
x_158 = lean_ctor_get(x_5, 0);
lean_inc(x_158);
lean_dec(x_5);
x_159 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(x_158, x_1);
lean_dec(x_158);
if (x_159 == 0)
{
lean_free_object(x_4);
x_3 = x_156;
goto _start;
}
else
{
lean_object* x_161; 
lean_dec(x_2);
x_161 = lean_box(0);
lean_ctor_set(x_4, 0, x_161);
return x_4;
}
}
else
{
lean_object* x_162; lean_object* x_163; uint8_t x_164; 
x_162 = lean_ctor_get(x_4, 1);
lean_inc(x_162);
lean_dec(x_4);
x_163 = lean_ctor_get(x_5, 0);
lean_inc(x_163);
lean_dec(x_5);
x_164 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(x_163, x_1);
lean_dec(x_163);
if (x_164 == 0)
{
x_3 = x_162;
goto _start;
}
else
{
lean_object* x_166; lean_object* x_167; 
lean_dec(x_2);
x_166 = lean_box(0);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_162);
return x_167;
}
}
}
default: 
{
uint8_t x_168; 
x_168 = !lean_is_exclusive(x_4);
if (x_168 == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_169 = lean_ctor_get(x_4, 1);
x_170 = lean_ctor_get(x_4, 0);
lean_dec(x_170);
x_171 = lean_ctor_get(x_5, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_5, 1);
lean_inc(x_172);
lean_dec(x_5);
x_173 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(x_171, x_1);
lean_dec(x_171);
if (x_173 == 0)
{
lean_dec(x_172);
lean_free_object(x_4);
x_3 = x_169;
goto _start;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_2);
x_175 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__3;
x_176 = lean_string_append(x_175, x_172);
lean_dec(x_172);
x_177 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_178 = lean_string_append(x_176, x_177);
x_179 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_179);
return x_4;
}
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; uint8_t x_183; 
x_180 = lean_ctor_get(x_4, 1);
lean_inc(x_180);
lean_dec(x_4);
x_181 = lean_ctor_get(x_5, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_5, 1);
lean_inc(x_182);
lean_dec(x_5);
x_183 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(x_181, x_1);
lean_dec(x_181);
if (x_183 == 0)
{
lean_dec(x_182);
x_3 = x_180;
goto _start;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
lean_dec(x_2);
x_185 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__3;
x_186 = lean_string_append(x_185, x_182);
lean_dec(x_182);
x_187 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_188 = lean_string_append(x_186, x_187);
x_189 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_189, 0, x_188);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_180);
return x_190;
}
}
}
}
}
else
{
uint8_t x_191; 
lean_dec(x_2);
x_191 = !lean_is_exclusive(x_4);
if (x_191 == 0)
{
return x_4;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_192 = lean_ctor_get(x_4, 0);
x_193 = lean_ctor_get(x_4, 1);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_4);
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_192);
lean_ctor_set(x_194, 1, x_193);
return x_194;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_collectDiagnostics_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Lsp_Ipc_collectDiagnostics_loop(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_collectDiagnostics___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_toJsonWaitForDiagnosticsParams____x40_Lean_Data_Lsp_Extra___hyg_487_(x_1);
x_3 = l_Lean_Json_Structured_fromJson_x3f(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Lsp_Ipc_collectDiagnostics___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 2);
x_6 = l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_collectDiagnostics___spec__3(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
x_7 = lean_box(0);
lean_ctor_set(x_2, 2, x_7);
x_8 = l_IO_FS_Stream_writeLspMessage(x_1, x_2, x_3);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; 
lean_ctor_set(x_2, 2, x_6);
x_10 = l_IO_FS_Stream_writeLspMessage(x_1, x_2, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_2, 2, x_12);
x_13 = l_IO_FS_Stream_writeLspMessage(x_1, x_2, x_3);
return x_13;
}
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
x_16 = lean_ctor_get(x_2, 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_17 = l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_collectDiagnostics___spec__3(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_17);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_15);
lean_ctor_set(x_19, 2, x_18);
x_20 = l_IO_FS_Stream_writeLspMessage(x_1, x_19, x_3);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_22 = x_17;
} else {
 lean_dec_ref(x_17);
 x_22 = lean_box(0);
}
if (lean_is_scalar(x_22)) {
 x_23 = lean_alloc_ctor(1, 1, 0);
} else {
 x_23 = x_22;
}
lean_ctor_set(x_23, 0, x_21);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_14);
lean_ctor_set(x_24, 1, x_15);
lean_ctor_set(x_24, 2, x_23);
x_25 = l_IO_FS_Stream_writeLspMessage(x_1, x_24, x_3);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at_Lean_Lsp_Ipc_collectDiagnostics___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Lean_Lsp_Ipc_stdin(x_2, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_IO_FS_Stream_writeLspRequest___at_Lean_Lsp_Ipc_collectDiagnostics___spec__2(x_5, x_1, x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_collectDiagnostics___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("textDocument/waitForDiagnostics", 31, 31);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_collectDiagnostics(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
x_7 = l_Lean_Lsp_Ipc_collectDiagnostics___closed__1;
lean_inc(x_1);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
lean_ctor_set(x_8, 2, x_6);
lean_inc(x_4);
x_9 = l_Lean_Lsp_Ipc_writeRequest___at_Lean_Lsp_Ipc_collectDiagnostics___spec__1(x_8, x_4, x_5);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_Lsp_Ipc_collectDiagnostics_loop(x_1, x_4, x_10);
lean_dec(x_1);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_4);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_waitForILeans___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_toJsonWaitForILeansParams____x40_Lean_Data_Lsp_Extra___hyg_702_(x_1);
x_3 = l_Lean_Json_Structured_fromJson_x3f(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Lsp_Ipc_waitForILeans___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 2);
x_6 = l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_waitForILeans___spec__3(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
x_7 = lean_box(0);
lean_ctor_set(x_2, 2, x_7);
x_8 = l_IO_FS_Stream_writeLspMessage(x_1, x_2, x_3);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; 
lean_ctor_set(x_2, 2, x_6);
x_10 = l_IO_FS_Stream_writeLspMessage(x_1, x_2, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_2, 2, x_12);
x_13 = l_IO_FS_Stream_writeLspMessage(x_1, x_2, x_3);
return x_13;
}
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
x_16 = lean_ctor_get(x_2, 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_17 = l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_waitForILeans___spec__3(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_17);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_15);
lean_ctor_set(x_19, 2, x_18);
x_20 = l_IO_FS_Stream_writeLspMessage(x_1, x_19, x_3);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_22 = x_17;
} else {
 lean_dec_ref(x_17);
 x_22 = lean_box(0);
}
if (lean_is_scalar(x_22)) {
 x_23 = lean_alloc_ctor(1, 1, 0);
} else {
 x_23 = x_22;
}
lean_ctor_set(x_23, 0, x_21);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_14);
lean_ctor_set(x_24, 1, x_15);
lean_ctor_set(x_24, 2, x_23);
x_25 = l_IO_FS_Stream_writeLspMessage(x_1, x_24, x_3);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at_Lean_Lsp_Ipc_waitForILeans___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Lean_Lsp_Ipc_stdin(x_2, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_IO_FS_Stream_writeLspRequest___at_Lean_Lsp_Ipc_waitForILeans___spec__2(x_5, x_1, x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__1;
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Waiting for ILeans failed: ", 27, 27);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
x_6 = l_Lean_Lsp_Ipc_readMessage(x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
switch (lean_obj_tag(x_7)) {
case 2:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_6, 1);
x_10 = lean_ctor_get(x_6, 0);
lean_dec(x_10);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(x_11, x_1);
lean_dec(x_11);
if (x_12 == 0)
{
lean_free_object(x_6);
{
lean_object* _tmp_2 = x_2;
lean_object* _tmp_4 = x_9;
x_3 = _tmp_2;
x_5 = _tmp_4;
}
goto _start;
}
else
{
lean_object* x_14; 
lean_dec(x_4);
x_14 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__2;
lean_ctor_set(x_6, 0, x_14);
return x_6;
}
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_ctor_get(x_7, 0);
lean_inc(x_16);
lean_dec(x_7);
x_17 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(x_16, x_1);
lean_dec(x_16);
if (x_17 == 0)
{
{
lean_object* _tmp_2 = x_2;
lean_object* _tmp_4 = x_15;
x_3 = _tmp_2;
x_5 = _tmp_4;
}
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_4);
x_19 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__2;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_15);
return x_20;
}
}
}
case 3:
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_6);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_ctor_get(x_6, 1);
x_23 = lean_ctor_get(x_6, 0);
lean_dec(x_23);
x_24 = lean_ctor_get(x_7, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_7, 1);
lean_inc(x_25);
lean_dec(x_7);
x_26 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(x_24, x_1);
lean_dec(x_24);
if (x_26 == 0)
{
lean_dec(x_25);
lean_free_object(x_6);
{
lean_object* _tmp_2 = x_2;
lean_object* _tmp_4 = x_22;
x_3 = _tmp_2;
x_5 = _tmp_4;
}
goto _start;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_4);
x_28 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__3;
x_29 = lean_string_append(x_28, x_25);
lean_dec(x_25);
x_30 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_31 = lean_string_append(x_29, x_30);
x_32 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_32);
return x_6;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_33 = lean_ctor_get(x_6, 1);
lean_inc(x_33);
lean_dec(x_6);
x_34 = lean_ctor_get(x_7, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_7, 1);
lean_inc(x_35);
lean_dec(x_7);
x_36 = l_Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_45_(x_34, x_1);
lean_dec(x_34);
if (x_36 == 0)
{
lean_dec(x_35);
{
lean_object* _tmp_2 = x_2;
lean_object* _tmp_4 = x_33;
x_3 = _tmp_2;
x_5 = _tmp_4;
}
goto _start;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_4);
x_38 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__3;
x_39 = lean_string_append(x_38, x_35);
lean_dec(x_35);
x_40 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_41 = lean_string_append(x_39, x_40);
x_42 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_33);
return x_43;
}
}
}
default: 
{
lean_object* x_44; 
lean_dec(x_7);
x_44 = lean_ctor_get(x_6, 1);
lean_inc(x_44);
lean_dec(x_6);
{
lean_object* _tmp_2 = x_2;
lean_object* _tmp_4 = x_44;
x_3 = _tmp_2;
x_5 = _tmp_4;
}
goto _start;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_4);
x_46 = !lean_is_exclusive(x_6);
if (x_46 == 0)
{
return x_6;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_6, 0);
x_48 = lean_ctor_get(x_6, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_6);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_waitForILeans___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("$/lean/waitForILeans", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_waitForILeans___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForILeans(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
x_7 = l_Lean_Lsp_Ipc_waitForILeans___closed__1;
lean_inc(x_1);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
lean_ctor_set(x_8, 2, x_6);
lean_inc(x_4);
x_9 = l_Lean_Lsp_Ipc_writeRequest___at_Lean_Lsp_Ipc_waitForILeans___spec__1(x_8, x_4, x_5);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_Lsp_Ipc_waitForILeans___closed__2;
x_12 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4(x_1, x_11, x_11, x_4, x_10);
lean_dec(x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_12, 0, x_17);
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_12);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_12, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_14, 0);
lean_inc(x_23);
lean_dec(x_14);
lean_ctor_set(x_12, 0, x_23);
return x_12;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_dec(x_12);
x_25 = lean_ctor_get(x_14, 0);
lean_inc(x_25);
lean_dec(x_14);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_12);
if (x_27 == 0)
{
return x_12;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_12, 0);
x_29 = lean_ctor_get(x_12, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_12);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_4);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_9);
if (x_31 == 0)
{
return x_9;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_9, 0);
x_33 = lean_ctor_get(x_9, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_9);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Lsp_Ipc_waitForMessage_loop___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_6, 6);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_string_dec_eq(x_7, x_1);
lean_dec(x_7);
if (x_8 == 0)
{
size_t x_9; size_t x_10; 
x_9 = 1;
x_10 = lean_usize_add(x_3, x_9);
x_3 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
x_12 = 1;
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForMessage_loop___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Lsp_Ipc_waitForMessage_loop(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForMessage_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_2);
x_4 = l_Lean_Lsp_Ipc_readMessage(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 1)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_ctor_get(x_4, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1;
x_12 = lean_string_dec_eq(x_9, x_11);
lean_dec(x_9);
if (x_12 == 0)
{
lean_dec(x_10);
lean_free_object(x_4);
x_3 = x_7;
goto _start;
}
else
{
if (lean_obj_tag(x_10) == 0)
{
lean_free_object(x_4);
x_3 = x_7;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = l_Lean_Json_Structured_toJson(x_15);
x_17 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_2516_(x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2;
x_21 = lean_string_append(x_20, x_19);
lean_dec(x_19);
x_22 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_23 = lean_string_append(x_21, x_22);
lean_ctor_set_tag(x_17, 18);
lean_ctor_set(x_17, 0, x_23);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_17);
return x_4;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_17, 0);
lean_inc(x_24);
lean_dec(x_17);
x_25 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2;
x_26 = lean_string_append(x_25, x_24);
lean_dec(x_24);
x_27 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_28 = lean_string_append(x_26, x_27);
x_29 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_29);
return x_4;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_30 = lean_ctor_get(x_17, 0);
lean_inc(x_30);
lean_dec(x_17);
x_31 = lean_ctor_get(x_30, 2);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_array_get_size(x_31);
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_nat_dec_lt(x_33, x_32);
if (x_34 == 0)
{
lean_dec(x_32);
lean_dec(x_31);
lean_free_object(x_4);
x_3 = x_7;
goto _start;
}
else
{
size_t x_36; size_t x_37; uint8_t x_38; 
x_36 = 0;
x_37 = lean_usize_of_nat(x_32);
lean_dec(x_32);
x_38 = l_Array_anyMUnsafe_any___at_Lean_Lsp_Ipc_waitForMessage_loop___spec__1(x_1, x_31, x_36, x_37);
lean_dec(x_31);
if (x_38 == 0)
{
lean_free_object(x_4);
x_3 = x_7;
goto _start;
}
else
{
lean_object* x_40; 
lean_dec(x_2);
x_40 = lean_box(0);
lean_ctor_set(x_4, 0, x_40);
return x_4;
}
}
}
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_4, 1);
lean_inc(x_41);
lean_dec(x_4);
x_42 = lean_ctor_get(x_5, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_5, 1);
lean_inc(x_43);
lean_dec(x_5);
x_44 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1;
x_45 = lean_string_dec_eq(x_42, x_44);
lean_dec(x_42);
if (x_45 == 0)
{
lean_dec(x_43);
x_3 = x_41;
goto _start;
}
else
{
if (lean_obj_tag(x_43) == 0)
{
x_3 = x_41;
goto _start;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_43, 0);
lean_inc(x_48);
lean_dec(x_43);
x_49 = l_Lean_Json_Structured_toJson(x_48);
x_50 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_2516_(x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_2);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 x_52 = x_50;
} else {
 lean_dec_ref(x_50);
 x_52 = lean_box(0);
}
x_53 = l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2;
x_54 = lean_string_append(x_53, x_51);
lean_dec(x_51);
x_55 = l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11;
x_56 = lean_string_append(x_54, x_55);
if (lean_is_scalar(x_52)) {
 x_57 = lean_alloc_ctor(18, 1, 0);
} else {
 x_57 = x_52;
 lean_ctor_set_tag(x_57, 18);
}
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_41);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_59 = lean_ctor_get(x_50, 0);
lean_inc(x_59);
lean_dec(x_50);
x_60 = lean_ctor_get(x_59, 2);
lean_inc(x_60);
lean_dec(x_59);
x_61 = lean_array_get_size(x_60);
x_62 = lean_unsigned_to_nat(0u);
x_63 = lean_nat_dec_lt(x_62, x_61);
if (x_63 == 0)
{
lean_dec(x_61);
lean_dec(x_60);
x_3 = x_41;
goto _start;
}
else
{
size_t x_65; size_t x_66; uint8_t x_67; 
x_65 = 0;
x_66 = lean_usize_of_nat(x_61);
lean_dec(x_61);
x_67 = l_Array_anyMUnsafe_any___at_Lean_Lsp_Ipc_waitForMessage_loop___spec__1(x_1, x_60, x_65, x_66);
lean_dec(x_60);
if (x_67 == 0)
{
x_3 = x_41;
goto _start;
}
else
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_2);
x_69 = lean_box(0);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_41);
return x_70;
}
}
}
}
}
}
}
else
{
lean_object* x_71; 
lean_dec(x_5);
x_71 = lean_ctor_get(x_4, 1);
lean_inc(x_71);
lean_dec(x_4);
x_3 = x_71;
goto _start;
}
}
else
{
uint8_t x_73; 
lean_dec(x_2);
x_73 = !lean_is_exclusive(x_4);
if (x_73 == 0)
{
return x_4;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_4, 0);
x_75 = lean_ctor_get(x_4, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_4);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Lsp_Ipc_waitForMessage_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_Lsp_Ipc_waitForMessage_loop___spec__1(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForMessage_loop___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Lsp_Ipc_waitForMessage_loop___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForMessage_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Lsp_Ipc_waitForMessage_loop(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForMessage(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Lsp_Ipc_waitForMessage_loop(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForMessage___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Lsp_Ipc_waitForMessage(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_runWith___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_runWith___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_5 = l_Lean_Lsp_Ipc_ipcStdioConfig;
x_6 = lean_box(0);
x_7 = l_Lean_Lsp_Ipc_runWith___rarg___closed__1;
x_8 = 1;
x_9 = 0;
x_10 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_1);
lean_ctor_set(x_10, 2, x_2);
lean_ctor_set(x_10, 3, x_6);
lean_ctor_set(x_10, 4, x_7);
lean_ctor_set_uint8(x_10, sizeof(void*)*5, x_8);
lean_ctor_set_uint8(x_10, sizeof(void*)*5 + 1, x_9);
x_11 = lean_io_process_spawn(x_10, x_4);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_apply_2(x_3, x_12, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_3);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_runWith(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_Ipc_runWith___rarg), 4, 0);
return x_2;
}
}
lean_object* initialize_Init_System_IO(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Data_Json(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Data_Lsp_Communication(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Data_Lsp_Diagnostics(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Data_Lsp_Extra(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Lsp_Ipc(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_Communication(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_Diagnostics(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_Extra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Lsp_Ipc_ipcStdioConfig___closed__1 = _init_l_Lean_Lsp_Ipc_ipcStdioConfig___closed__1();
lean_mark_persistent(l_Lean_Lsp_Ipc_ipcStdioConfig___closed__1);
l_Lean_Lsp_Ipc_ipcStdioConfig = _init_l_Lean_Lsp_Ipc_ipcStdioConfig();
lean_mark_persistent(l_Lean_Lsp_Ipc_ipcStdioConfig);
l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3___closed__1 = _init_l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3___closed__1();
lean_mark_persistent(l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3___closed__1);
l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3___closed__2 = _init_l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3___closed__2();
lean_mark_persistent(l_panic___at_Lean_Lsp_Ipc_shutdown___spec__3___closed__2);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__1 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__1);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__2 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__2);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__3 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___lambda__1___closed__3);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__1 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__1();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__1);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__2 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__2();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__2);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__3 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__3();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__3);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__4 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__4();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__4);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__5 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__5();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__5);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__6 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__6();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__6);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__7 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__7();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__7);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__8 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__8();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__8);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__9 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__9();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__9);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__10);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__11);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__12 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__12();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_shutdown___spec__5___closed__12);
l_Lean_Lsp_Ipc_shutdown___closed__1 = _init_l_Lean_Lsp_Ipc_shutdown___closed__1();
lean_mark_persistent(l_Lean_Lsp_Ipc_shutdown___closed__1);
l_Lean_Lsp_Ipc_readResponseAs___closed__1 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__1();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__1);
l_Lean_Lsp_Ipc_readResponseAs___closed__2 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__2();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__2);
l_Lean_Lsp_Ipc_readResponseAs___closed__3 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__3();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__3);
l_Lean_Lsp_Ipc_readResponseAs___closed__4 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__4();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__4);
l_Lean_Lsp_Ipc_readResponseAs___closed__5 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__5();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__5);
l_Lean_Lsp_Ipc_readResponseAs___closed__6 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__6();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__6);
l_Lean_Lsp_Ipc_readResponseAs___closed__7 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__7();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__7);
l_Lean_Lsp_Ipc_readResponseAs___closed__8 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__8();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__8);
l_Lean_Lsp_Ipc_readResponseAs___closed__9 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__9();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__9);
l_Lean_Lsp_Ipc_readResponseAs___closed__10 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__10();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__10);
l_Lean_Lsp_Ipc_readResponseAs___closed__11 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__11();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__11);
l_Lean_Lsp_Ipc_readResponseAs___closed__12 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__12();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__12);
l_Lean_Lsp_Ipc_readResponseAs___closed__13 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__13();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__13);
l_Lean_Lsp_Ipc_readResponseAs___closed__14 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__14();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__14);
l_Lean_Lsp_Ipc_readResponseAs___closed__15 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__15();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__15);
l_Lean_Lsp_Ipc_readResponseAs___closed__16 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__16();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__16);
l_Lean_Lsp_Ipc_readResponseAs___closed__17 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__17();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__17);
l_Lean_Lsp_Ipc_readResponseAs___closed__18 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__18();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__18);
l_Lean_Lsp_Ipc_readResponseAs___closed__19 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__19();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__19);
l_Lean_Lsp_Ipc_readResponseAs___closed__20 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__20();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__20);
l_Lean_Lsp_Ipc_readResponseAs___closed__21 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__21();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__21);
l_Lean_Lsp_Ipc_readResponseAs___closed__22 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__22();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__22);
l_Lean_Lsp_Ipc_readResponseAs___closed__23 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__23();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__23);
l_Lean_Lsp_Ipc_readResponseAs___closed__24 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__24();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__24);
l_Lean_Lsp_Ipc_readResponseAs___closed__25 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__25();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__25);
l_Lean_Lsp_Ipc_readResponseAs___closed__26 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__26();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__26);
l_Lean_Lsp_Ipc_readResponseAs___closed__27 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__27();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__27);
l_Lean_Lsp_Ipc_readResponseAs___closed__28 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__28();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__28);
l_Lean_Lsp_Ipc_readResponseAs___closed__29 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__29();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__29);
l_Lean_Lsp_Ipc_readResponseAs___closed__30 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__30();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__30);
l_Lean_Lsp_Ipc_readResponseAs___closed__31 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__31();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__31);
l_Lean_Lsp_Ipc_readResponseAs___closed__32 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__32();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__32);
l_Lean_Lsp_Ipc_readResponseAs___closed__33 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__33();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__33);
l_Lean_Lsp_Ipc_readResponseAs___closed__34 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__34();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__34);
l_Lean_Lsp_Ipc_readResponseAs___closed__35 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__35();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__35);
l_Lean_Lsp_Ipc_readResponseAs___closed__36 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__36();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__36);
l_Lean_Lsp_Ipc_readResponseAs___closed__37 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__37();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__37);
l_Lean_Lsp_Ipc_readResponseAs___closed__38 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__38();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__38);
l_Lean_Lsp_Ipc_readResponseAs___closed__39 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__39();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__39);
l_Lean_Lsp_Ipc_readResponseAs___closed__40 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__40();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__40);
l_Lean_Lsp_Ipc_readResponseAs___closed__41 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__41();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__41);
l_Lean_Lsp_Ipc_readResponseAs___closed__42 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__42();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__42);
l_Lean_Lsp_Ipc_readResponseAs___closed__43 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__43();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__43);
l_Lean_Lsp_Ipc_readResponseAs___closed__44 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__44();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__44);
l_Lean_Lsp_Ipc_readResponseAs___closed__45 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__45();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__45);
l_Lean_Lsp_Ipc_readResponseAs___closed__46 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__46();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__46);
l_Lean_Lsp_Ipc_readResponseAs___closed__47 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__47();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__47);
l_Lean_Lsp_Ipc_readResponseAs___closed__48 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__48();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__48);
l_Lean_Lsp_Ipc_readResponseAs___closed__49 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__49();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__49);
l_Lean_Lsp_Ipc_readResponseAs___closed__50 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__50();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__50);
l_Lean_Lsp_Ipc_readResponseAs___closed__51 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__51();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__51);
l_Lean_Lsp_Ipc_readResponseAs___closed__52 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__52();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__52);
l_Lean_Lsp_Ipc_readResponseAs___closed__53 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__53();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__53);
l_Lean_Lsp_Ipc_readResponseAs___closed__54 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__54();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__54);
l_Lean_Lsp_Ipc_readResponseAs___closed__55 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__55();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__55);
l_Lean_Lsp_Ipc_readResponseAs___closed__56 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__56();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__56);
l_Lean_Lsp_Ipc_readResponseAs___closed__57 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__57();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__57);
l_Lean_Lsp_Ipc_readResponseAs___closed__58 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__58();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__58);
l_Lean_Lsp_Ipc_readResponseAs___closed__59 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__59();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__59);
l_Lean_Lsp_Ipc_readResponseAs___closed__60 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__60();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__60);
l_Lean_Lsp_Ipc_readResponseAs___closed__61 = _init_l_Lean_Lsp_Ipc_readResponseAs___closed__61();
lean_mark_persistent(l_Lean_Lsp_Ipc_readResponseAs___closed__61);
l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1 = _init_l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1();
lean_mark_persistent(l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1);
l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2 = _init_l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2();
lean_mark_persistent(l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2);
l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__3 = _init_l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__3();
lean_mark_persistent(l_Lean_Lsp_Ipc_collectDiagnostics_loop___closed__3);
l_Lean_Lsp_Ipc_collectDiagnostics___closed__1 = _init_l_Lean_Lsp_Ipc_collectDiagnostics___closed__1();
lean_mark_persistent(l_Lean_Lsp_Ipc_collectDiagnostics___closed__1);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__1 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__1();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__1);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__2 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__2();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__2);
l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__3 = _init_l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__3();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Lean_Lsp_Ipc_waitForILeans___spec__4___closed__3);
l_Lean_Lsp_Ipc_waitForILeans___closed__1 = _init_l_Lean_Lsp_Ipc_waitForILeans___closed__1();
lean_mark_persistent(l_Lean_Lsp_Ipc_waitForILeans___closed__1);
l_Lean_Lsp_Ipc_waitForILeans___closed__2 = _init_l_Lean_Lsp_Ipc_waitForILeans___closed__2();
lean_mark_persistent(l_Lean_Lsp_Ipc_waitForILeans___closed__2);
l_Lean_Lsp_Ipc_runWith___rarg___closed__1 = _init_l_Lean_Lsp_Ipc_runWith___rarg___closed__1();
lean_mark_persistent(l_Lean_Lsp_Ipc_runWith___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
