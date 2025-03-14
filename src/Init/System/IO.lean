/-
Copyright (c) 2017 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Luke Nelson, Jared Roesch, Leonardo de Moura, Sebastian Ullrich, Mac Malone
-/
prelude
import Init.System.IOError
import Init.System.FilePath
import Init.System.ST
import Init.Data.Ord

open System

/-- Like <https://hackage.haskell.org/package/ghc-Prim-0.5.2.0/docs/GHC-Prim.html#t:RealWorld>.
    Makes sure we never reorder `IO` operations.

    TODO: mark opaque -/
def IO.RealWorld : Type := Unit

/- TODO(Leo): mark it as an opaque definition. Reason: prevent
   functions defined in other modules from accessing `IO.RealWorld`.
   We don't want action such as
   ```
   def getWorld : IO (IO.RealWorld) := get
   ```
-/
def EIO (ε : Type) : Type → Type := EStateM ε IO.RealWorld

instance : Monad (EIO ε) := inferInstanceAs (Monad (EStateM ε IO.RealWorld))
instance : MonadFinally (EIO ε) := inferInstanceAs (MonadFinally (EStateM ε IO.RealWorld))
instance : MonadExceptOf ε (EIO ε) := inferInstanceAs (MonadExceptOf ε (EStateM ε IO.RealWorld))
instance : OrElse (EIO ε α) := ⟨MonadExcept.orElse⟩
instance [Inhabited ε] : Inhabited (EIO ε α) := inferInstanceAs (Inhabited (EStateM ε IO.RealWorld α))

/-- An `EIO` monad that cannot throw exceptions. -/
def BaseIO := EIO Empty

instance : Monad BaseIO := inferInstanceAs (Monad (EIO Empty))
instance : MonadFinally BaseIO := inferInstanceAs (MonadFinally (EIO Empty))

@[always_inline, inline]
def BaseIO.toEIO (act : BaseIO α) : EIO ε α :=
  fun s => match act s with
  | EStateM.Result.ok a s => EStateM.Result.ok a s

instance : MonadLift BaseIO (EIO ε) := ⟨BaseIO.toEIO⟩

@[always_inline, inline]
def EIO.toBaseIO (act : EIO ε α) : BaseIO (Except ε α) :=
  fun s => match act s with
  | EStateM.Result.ok a s     => EStateM.Result.ok (Except.ok a) s
  | EStateM.Result.error ex s => EStateM.Result.ok (Except.error ex) s

@[always_inline, inline]
def EIO.catchExceptions (act : EIO ε α) (h : ε → BaseIO α) : BaseIO α :=
  fun s => match act s with
  | EStateM.Result.ok a s     => EStateM.Result.ok a s
  | EStateM.Result.error ex s => h ex s

def EIO.ofExcept (e : Except ε α) : EIO ε α :=
  match e with
  | Except.ok a    => pure a
  | Except.error e => throw e

open IO (Error) in
abbrev IO : Type → Type := EIO Error

@[inline] def BaseIO.toIO (act : BaseIO α) : IO α :=
  act

@[inline] def EIO.toIO (f : ε → IO.Error) (act : EIO ε α) : IO α :=
  act.adaptExcept f

@[inline] def EIO.toIO' (act : EIO ε α) : IO (Except ε α) :=
  act.toBaseIO

@[inline] def IO.toEIO (f : IO.Error → ε) (act : IO α) : EIO ε α :=
  act.adaptExcept f

/- After we inline `EState.run'`, the closed term `((), ())` is generated, where the second `()`
   represents the "initial world". We don't want to cache this closed term. So, we disable
   the "extract closed terms" optimization. -/
set_option compiler.extract_closed false in
@[inline] unsafe def unsafeBaseIO (fn : BaseIO α) : α :=
  match fn.run () with
  | EStateM.Result.ok a _ => a

@[inline] unsafe def unsafeEIO (fn : EIO ε α) : Except ε α :=
  unsafeBaseIO fn.toBaseIO

@[inline] unsafe def unsafeIO (fn : IO α) : Except IO.Error α :=
  unsafeEIO fn

@[extern "lean_io_timeit"] opaque timeit (msg : @& String) (fn : IO α) : IO α
@[extern "lean_io_allocprof"] opaque allocprof (msg : @& String) (fn : IO α) : IO α

/-- Programs can execute IO actions during initialization that occurs before
   the `main` function is executed. The attribute `[init <action>]` specifies
   which IO action is executed to set the value of an opaque constant.

   The action `initializing` returns `true` iff it is invoked during initialization. -/
@[extern "lean_io_initializing"] opaque IO.initializing : BaseIO Bool

namespace BaseIO

/--
  Run `act` in a separate `Task`.
  This is similar to Haskell's [`unsafeInterleaveIO`](http://hackage.haskell.org/package/base-4.14.0.0/docs/System-IO-Unsafe.html#v:unsafeInterleaveIO),
  except that the `Task` is started eagerly as usual. Thus pure accesses to the `Task` do not influence the impure `act`
  computation.
  Unlike with pure tasks created by `Task.spawn`, tasks created by this function will be run even if the last reference
  to the task is dropped. The `act` should manually check for cancellation via `IO.checkCanceled` if it wants to react
  to that. -/
@[extern "lean_io_as_task"]
opaque asTask (act : BaseIO α) (prio := Task.Priority.default) : BaseIO (Task α) :=
  Task.pure <$> act

/-- See `BaseIO.asTask`. -/
@[extern "lean_io_map_task"]
opaque mapTask (f : α → BaseIO β) (t : Task α) (prio := Task.Priority.default) (sync := false) :
    BaseIO (Task β) :=
  Task.pure <$> f t.get

/-- See `BaseIO.asTask`. -/
@[extern "lean_io_bind_task"]
opaque bindTask (t : Task α) (f : α → BaseIO (Task β)) (prio := Task.Priority.default)
    (sync := false) : BaseIO (Task β) :=
  f t.get

/-- Like `BaseIO.mapTask, but ignores the result. -/
def chainTask (t : Task α) (f : α → BaseIO Unit) (prio := Task.Priority.default)
    (sync := false) : BaseIO Unit :=
  discard <| BaseIO.mapTask f t prio sync

def mapTasks (f : List α → BaseIO β) (tasks : List (Task α)) (prio := Task.Priority.default)
    (sync := false) : BaseIO (Task β) :=
  go tasks []
where
  go
    | t::ts, as =>
      BaseIO.bindTask t (fun a => go ts (a :: as)) prio sync
    | [], as => f as.reverse |>.asTask prio

end BaseIO

namespace EIO

/-- `EIO` specialization of `BaseIO.asTask`. -/
@[inline] def asTask (act : EIO ε α) (prio := Task.Priority.default) : BaseIO (Task (Except ε α)) :=
  act.toBaseIO.asTask prio

/-- `EIO` specialization of `BaseIO.mapTask`. -/
@[inline] def mapTask (f : α → EIO ε β) (t : Task α) (prio := Task.Priority.default)
    (sync := false) : BaseIO (Task (Except ε β)) :=
  BaseIO.mapTask (fun a => f a |>.toBaseIO) t prio sync

/-- `EIO` specialization of `BaseIO.bindTask`. -/
@[inline] def bindTask (t : Task α) (f : α → EIO ε (Task (Except ε β)))
    (prio := Task.Priority.default) (sync := false) : BaseIO (Task (Except ε β)) :=
  BaseIO.bindTask t (fun a => f a |>.catchExceptions fun e => return Task.pure <| Except.error e)
    prio sync

/-- `EIO` specialization of `BaseIO.chainTask`. -/
def chainTask (t : Task α) (f : α → EIO ε Unit) (prio := Task.Priority.default)
    (sync := false) : EIO ε Unit :=
  discard <| EIO.mapTask f t prio sync

/-- `EIO` specialization of `BaseIO.mapTasks`. -/
@[inline] def mapTasks (f : List α → EIO ε β) (tasks : List (Task α))
    (prio := Task.Priority.default) (sync := false) : BaseIO (Task (Except ε β)) :=
  BaseIO.mapTasks (fun as => f as |>.toBaseIO) tasks prio sync

end EIO

namespace IO

def ofExcept [ToString ε] (e : Except ε α) : IO α :=
  match e with
  | Except.ok a    => pure a
  | Except.error e => throw (IO.userError (toString e))

def lazyPure (fn : Unit → α) : IO α :=
  pure (fn ())

/-- Monotonically increasing time since an unspecified past point in milliseconds. No relation to wall clock time. -/
@[extern "lean_io_mono_ms_now"] opaque monoMsNow : BaseIO Nat

/-- Monotonically increasing time since an unspecified past point in nanoseconds. No relation to wall clock time. -/
@[extern "lean_io_mono_nanos_now"] opaque monoNanosNow : BaseIO Nat

/-- Read bytes from a system entropy source. Not guaranteed to be cryptographically secure.
If `nBytes = 0`, return immediately with an empty buffer. -/
@[extern "lean_io_get_random_bytes"] opaque getRandomBytes (nBytes : USize) : IO ByteArray

def sleep (ms : UInt32) : BaseIO Unit :=
  -- TODO: add a proper primitive for IO.sleep
  fun s => dbgSleep ms fun _ => EStateM.Result.ok () s

/-- `IO` specialization of `EIO.asTask`. -/
@[inline] def asTask (act : IO α) (prio := Task.Priority.default) : BaseIO (Task (Except IO.Error α)) :=
  EIO.asTask act prio

/-- `IO` specialization of `EIO.mapTask`. -/
@[inline] def mapTask (f : α → IO β) (t : Task α) (prio := Task.Priority.default) (sync := false) :
    BaseIO (Task (Except IO.Error β)) :=
  EIO.mapTask f t prio sync

/-- `IO` specialization of `EIO.bindTask`. -/
@[inline] def bindTask (t : Task α) (f : α → IO (Task (Except IO.Error β)))
    (prio := Task.Priority.default) (sync := false) : BaseIO (Task (Except IO.Error β)) :=
  EIO.bindTask t f prio sync

/-- `IO` specialization of `EIO.chainTask`. -/
def chainTask (t : Task α) (f : α → IO Unit) (prio := Task.Priority.default)
    (sync := false) : IO Unit :=
  EIO.chainTask t f prio sync

/-- `IO` specialization of `EIO.mapTasks`. -/
@[inline] def mapTasks (f : List α → IO β) (tasks : List (Task α)) (prio := Task.Priority.default)
    (sync := false) : BaseIO (Task (Except IO.Error β)) :=
  EIO.mapTasks f tasks prio sync

/-- Check if the task's cancellation flag has been set by calling `IO.cancel` or dropping the last reference to the task. -/
@[extern "lean_io_check_canceled"] opaque checkCanceled : BaseIO Bool

/-- Request cooperative cancellation of the task. The task must explicitly call `IO.checkCanceled` to react to the cancellation. -/
@[extern "lean_io_cancel"] opaque cancel : @& Task α → BaseIO Unit

/-- The current state of a `Task` in the Lean runtime's task manager. -/
inductive TaskState
  /--
  The `Task` is waiting to be run.
  It can be waiting for dependencies to complete or
  sitting in the task manager queue waiting for a thread to run on.
  -/
  | waiting
  /--
  The `Task` is actively running on a thread or,
  in the case of a `Promise`, waiting for a call to `IO.Promise.resolve`.
  -/
  | running
  /--
  The `Task` has finished running and its result is available.
  Calling `Task.get` or `IO.wait` on the task will not block.
  -/
  | finished
  deriving Inhabited, Repr, DecidableEq, Ord

instance : LT TaskState := ltOfOrd
instance : LE TaskState := leOfOrd
instance : Min TaskState := minOfLe
instance : Max TaskState := maxOfLe

protected def TaskState.toString : TaskState → String
  | .waiting => "waiting"
  | .running => "running"
  | .finished => "finished"

instance : ToString TaskState := ⟨TaskState.toString⟩

/--
Returns current state of the `Task` in the Lean runtime's task manager.

Note that for tasks derived from `Promise`s, `waiting` and `running` should be considered
equivalent.
-/
@[extern "lean_io_get_task_state"] opaque getTaskState : @& Task α → BaseIO TaskState

/-- Check if the task has finished execution, at which point calling `Task.get` will return immediately. -/
@[inline] def hasFinished (task : Task α) : BaseIO Bool := do
  return (← getTaskState task) matches .finished

/-- Wait for the task to finish, then return its result. -/
@[extern "lean_io_wait"] opaque wait (t : Task α) : BaseIO α :=
  return t.get

/-- Wait until any of the tasks in the given list has finished, then return its result. -/
@[extern "lean_io_wait_any"] opaque waitAny (tasks : @& List (Task α))
    (h : tasks.length > 0 := by exact Nat.zero_lt_succ _) : BaseIO α :=
  return tasks[0].get

/-- Helper method for implementing "deterministic" timeouts. It is the number of "small" memory allocations performed by the current execution thread. -/
@[extern "lean_io_get_num_heartbeats"] opaque getNumHeartbeats : BaseIO Nat

/--
Adjusts the heartbeat counter of the current thread by the given amount. This can be useful to give
allocation-avoiding code additional "weight" and is also used to adjust the counter after resuming
from a snapshot.
-/
@[extern "lean_io_add_heartbeats"] opaque addHeartbeats (count : UInt64) : BaseIO Unit

/--
The mode of a file handle (i.e., a set of `open` flags and an `fdopen` mode).

All modes do not translate line endings (i.e., `O_BINARY` on Windows) and
are not inherited across process creation (i.e., `O_NOINHERIT` on Windows,
`O_CLOEXEC` elsewhere).

**References:**
* Windows:
  [`_open`](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/open-wopen?view=msvc-170),
  [`_fdopen`](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/fdopen-wfdopen?view=msvc-170)
* Linux:
  [`open`](https://linux.die.net/man/2/open),
  [`fdopen`](https://linux.die.net/man/3/fdopen)
-/
inductive FS.Mode where
  /--
  File opened for reading.
  On open, the stream is positioned at the beginning of the file.
  Errors if the file does not exist.

  * `open` flags: `O_RDONLY`
  * `fdopen` mode: `r`
  -/
  | read
  /--
  File opened for writing.
  On open, truncate an existing file to zero length or create a new file.
  The stream is positioned at the beginning of the file.

  * `open` flags: `O_WRONLY | O_CREAT | O_TRUNC`
  * `fdopen` mode: `w`
  -/
  | write
  /--
  New file opened for writing.
  On open, create a new file with the stream positioned at the start.
  Errors if the file already exists.

  * `open` flags: `O_WRONLY | O_CREAT | O_TRUNC | O_EXCL`
  * `fdopen` mode: `w`
  -/
  | writeNew
  /--
  File opened for reading and writing.
  On open, the stream is positioned at the beginning of the file.
  Errors if the file does not exist.

  * `open` flags: `O_RDWR`
  * `fdopen` mode: `r+`
  -/
  | readWrite
  /--
  File opened for writing.
  On open, create a new file if it does not exist.
  The stream is positioned at the end of the file.

  * `open` flags: `O_WRONLY | O_CREAT | O_APPEND`
  * `fdopen` mode: `a`
  -/
  | append

opaque FS.Handle : Type := Unit

/--
  A pure-Lean abstraction of POSIX streams. We use `Stream`s for the standard streams stdin/stdout/stderr so we can
  capture output of `#eval` commands into memory. -/
structure FS.Stream where
  flush   : IO Unit
  /--
Read up to the given number of bytes from the stream.
If the returned array is empty, an end-of-file marker has been reached.
Note that EOF does not actually close a stream, so further reads may block and return more data.
  -/
  read    : USize → IO ByteArray
  write   : ByteArray → IO Unit
  /--
Read text up to (including) the next line break from the stream.
If the returned string is empty, an end-of-file marker has been reached.
Note that EOF does not actually close a stream, so further reads may block and return more data.
  -/
  getLine : IO String
  putStr  : String → IO Unit
  /-- Returns true if a stream refers to a Windows console or Unix terminal. -/
  isTty   : BaseIO Bool
  deriving Inhabited

open FS

@[extern "lean_get_stdin"] opaque getStdin  : BaseIO FS.Stream
@[extern "lean_get_stdout"] opaque getStdout : BaseIO FS.Stream
@[extern "lean_get_stderr"] opaque getStderr : BaseIO FS.Stream

/-- Replaces the stdin stream of the current thread and returns its previous value. -/
@[extern "lean_get_set_stdin"] opaque setStdin  : FS.Stream → BaseIO FS.Stream
/-- Replaces the stdout stream of the current thread and returns its previous value. -/
@[extern "lean_get_set_stdout"] opaque setStdout : FS.Stream → BaseIO FS.Stream
/-- Replaces the stderr stream of the current thread and returns its previous value. -/
@[extern "lean_get_set_stderr"] opaque setStderr : FS.Stream → BaseIO FS.Stream

@[specialize] partial def iterate (a : α) (f : α → IO (Sum α β)) : IO β := do
  let v ← f a
  match v with
  | Sum.inl a => iterate a f
  | Sum.inr b => pure b

namespace FS

namespace Handle

@[extern "lean_io_prim_handle_mk"] opaque mk (fn : @& FilePath) (mode : FS.Mode) : IO Handle

/--
Acquires an exclusive or shared lock on the handle.
Will block to wait for the lock if necessary.

**NOTE:** Acquiring a exclusive lock while already possessing a shared lock
will NOT reliably succeed (i.e., it works on Unix but not on Windows).
-/
@[extern "lean_io_prim_handle_lock"] opaque lock (h : @& Handle) (exclusive := true) : IO Unit
/--
Tries to acquire an exclusive or shared lock on the handle.
Will NOT block for the lock, but instead return `false`.

**NOTE:** Acquiring a exclusive lock while already possessing a shared lock
will NOT reliably succeed (i.e., it works on Unix but not on Windows).
-/
@[extern "lean_io_prim_handle_try_lock"] opaque tryLock (h : @& Handle) (exclusive := true) : IO Bool
/--
Releases any previously acquired lock on the handle.
Will succeed even if no lock has been acquired.
-/
@[extern "lean_io_prim_handle_unlock"] opaque unlock (h : @& Handle) : IO Unit

/-- Returns true if a handle refers to a Windows console or Unix terminal. -/
@[extern "lean_io_prim_handle_is_tty"] opaque isTty (h : @& Handle) : BaseIO Bool

@[extern "lean_io_prim_handle_flush"] opaque flush (h : @& Handle) : IO Unit
/-- Rewinds the read/write cursor to the beginning of the handle. -/
@[extern "lean_io_prim_handle_rewind"] opaque rewind (h : @& Handle) : IO Unit
/--
Truncates the handle to the read/write cursor.

Does not automatically flush. Usually this is fine because the read/write
cursor includes buffered writes. However, the combination of buffered writes,
then `rewind`, then `truncate`, then close may lead to a file with content.
If unsure, flush before truncating.
-/
@[extern "lean_io_prim_handle_truncate"] opaque truncate (h : @& Handle) : IO Unit
/--
Read up to the given number of bytes from the handle.
If the returned array is empty, an end-of-file marker has been reached.
Note that EOF does not actually close a handle, so further reads may block and return more data.
-/
@[extern "lean_io_prim_handle_read"] opaque read (h : @& Handle) (bytes : USize) : IO ByteArray
@[extern "lean_io_prim_handle_write"] opaque write (h : @& Handle) (buffer : @& ByteArray) : IO Unit

/--
Read text up to (including) the next line break from the handle.
If the returned string is empty, an end-of-file marker has been reached.
Note that EOF does not actually close a handle, so further reads may block and return more data.
-/
@[extern "lean_io_prim_handle_get_line"] opaque getLine (h : @& Handle) : IO String
@[extern "lean_io_prim_handle_put_str"] opaque putStr (h : @& Handle) (s : @& String) : IO Unit

end Handle

/--
Resolves a pathname to an absolute pathname with no '.', '..', or symbolic links.

This function coincides with the [POSIX `realpath` function](https://pubs.opengroup.org/onlinepubs/9699919799/functions/realpath.html),
see there for more information.
-/
@[extern "lean_io_realpath"] opaque realPath (fname : FilePath) : IO FilePath
@[extern "lean_io_remove_file"] opaque removeFile (fname : @& FilePath) : IO Unit
/-- Remove given directory. Fails if not empty; see also `IO.FS.removeDirAll`. -/
@[extern "lean_io_remove_dir"] opaque removeDir : @& FilePath → IO Unit
@[extern "lean_io_create_dir"] opaque createDir : @& FilePath → IO Unit


/--
Moves a file or directory `old` to the new location `new`.

This function coincides with the [POSIX `rename` function](https://pubs.opengroup.org/onlinepubs/9699919799/functions/rename.html),
see there for more information.
-/
@[extern "lean_io_rename"] opaque rename (old new : @& FilePath) : IO Unit

/--
Creates a temporary file in the most secure manner possible. There are no race conditions in the
file’s creation. The file is readable and writable only by the creating user ID. Additionally
on UNIX style platforms the file is executable by nobody. The function returns both a `Handle`
to the already opened file as well as its `FilePath`.

Note that it is the caller's job to remove the file after use.
-/
@[extern "lean_io_create_tempfile"] opaque createTempFile : IO (Handle × FilePath)

/--
Creates a temporary directory in the most secure manner possible. There are no race conditions in the
directory’s creation. The directory is readable and writable only by the creating user ID.

Returns the new directory's path.

It is the caller's job to remove the directory after use.
-/
@[extern "lean_io_create_tempdir"] opaque createTempDir : IO FilePath

end FS

@[extern "lean_io_getenv"] opaque getEnv (var : @& String) : BaseIO (Option String)
@[extern "lean_io_app_path"] opaque appPath : IO FilePath
@[extern "lean_io_current_dir"] opaque currentDir : IO FilePath

namespace FS

@[inline]
def withFile (fn : FilePath) (mode : Mode) (f : Handle → IO α) : IO α :=
  Handle.mk fn mode >>= f

def Handle.putStrLn (h : Handle) (s : String) : IO Unit :=
  h.putStr (s.push '\n')

partial def Handle.readBinToEndInto (h : Handle) (buf : ByteArray) : IO ByteArray := do
  let rec loop (acc : ByteArray) : IO ByteArray := do
    let buf ← h.read 1024
    if buf.isEmpty then
      return acc
    else
      loop (acc ++ buf)
  loop buf

partial def Handle.readBinToEnd (h : Handle) : IO ByteArray := do
  h.readBinToEndInto .empty

def Handle.readToEnd (h : Handle) : IO String := do
  let data ← h.readBinToEnd
  match String.fromUTF8? data with
  | some s => return s
  | none => throw <| .userError s!"Tried to read from handle containing non UTF-8 data."

partial def lines (fname : FilePath) : IO (Array String) := do
  let h ← Handle.mk fname Mode.read
  let rec read (lines : Array String) := do
    let line ← h.getLine
    if line.length == 0 then
      pure lines
    else if line.back == '\n' then
      let line := line.dropRight 1
      let line := if line.back == '\r' then line.dropRight 1 else line
      read <| lines.push line
    else
      pure <| lines.push line
  read #[]

def writeBinFile (fname : FilePath) (content : ByteArray) : IO Unit := do
  let h ← Handle.mk fname Mode.write
  h.write content

def writeFile (fname : FilePath) (content : String) : IO Unit := do
  let h ← Handle.mk fname Mode.write
  h.putStr content

def Stream.putStrLn (strm : FS.Stream) (s : String) : IO Unit :=
  strm.putStr (s.push '\n')

structure DirEntry where
  root     : FilePath
  fileName : String
  deriving Repr

def DirEntry.path (entry : DirEntry) : FilePath :=
  entry.root / entry.fileName

inductive FileType where
  | dir
  | file
  | symlink
  | other
  deriving Repr, BEq

structure SystemTime where
  sec  : Int
  nsec : UInt32
  deriving Repr, BEq, Ord, Inhabited

instance : LT SystemTime := ltOfOrd
instance : LE SystemTime := leOfOrd

structure Metadata where
  --permissions : ...
  accessed : SystemTime
  modified : SystemTime
  byteSize : UInt64
  type     : FileType
  deriving Repr

end FS
end IO

namespace System.FilePath
open IO

@[extern "lean_io_read_dir"]
opaque readDir : @& FilePath → IO (Array IO.FS.DirEntry)

@[extern "lean_io_metadata"]
opaque metadata : @& FilePath → IO IO.FS.Metadata

def isDir (p : FilePath) : BaseIO Bool := do
  match (← p.metadata.toBaseIO) with
  | Except.ok m => return m.type == IO.FS.FileType.dir
  | Except.error _ => return false

def pathExists (p : FilePath) : BaseIO Bool :=
  return (← p.metadata.toBaseIO).toBool

/--
  Return all filesystem entries of a preorder traversal of all directories satisfying `enter`, starting at `p`.
  Symbolic links are visited as well by default. -/
partial def walkDir (p : FilePath) (enter : FilePath → IO Bool := fun _ => pure true) : IO (Array FilePath) :=
  Prod.snd <$> StateT.run (go p) #[]
where
  go p := do
    if !(← enter p) then
      return ()
    for d in (← p.readDir) do
      modify (·.push d.path)
      match (← d.path.metadata.toBaseIO) with
      | .ok { type := .symlink, .. } =>
        let p' ← FS.realPath d.path
        if (← p'.isDir) then
          -- do not call `enter` on a non-directory symlink
          if (← enter p) then
            go p'
      | .ok { type := .dir, .. } => go d.path
      | .ok _ => pure ()
      -- entry vanished, ignore
      | .error (.noFileOrDirectory ..) => pure ()
      | .error e => throw e

end System.FilePath

namespace IO

namespace FS

def readBinFile (fname : FilePath) : IO ByteArray := do
  -- Requires metadata so defined after metadata
  let mdata ← fname.metadata
  let size := mdata.byteSize.toUSize
  let handle ← IO.FS.Handle.mk fname .read
  let buf ←
    if size > 0 then
      handle.read mdata.byteSize.toUSize
    else
      pure <| ByteArray.emptyWithCapacity 0
  handle.readBinToEndInto buf

def readFile (fname : FilePath) : IO String := do
  let data ← readBinFile fname
  match String.fromUTF8? data with
  | some s => return s
  | none => throw <| .userError s!"Tried to read file '{fname}' containing non UTF-8 data."

end FS

def withStdin [Monad m] [MonadFinally m] [MonadLiftT BaseIO m] (h : FS.Stream) (x : m α) : m α := do
  let prev ← setStdin h
  try x finally discard <| setStdin prev

def withStdout [Monad m] [MonadFinally m] [MonadLiftT BaseIO m] (h : FS.Stream) (x : m α) : m α := do
  let prev ← setStdout h
  try
    x
  finally
    discard <| setStdout prev

def withStderr [Monad m] [MonadFinally m] [MonadLiftT BaseIO m] (h : FS.Stream) (x : m α) : m α := do
  let prev ← setStderr h
  try x finally discard <| setStderr prev

def print [ToString α] (s : α) : IO Unit := do
  let out ← getStdout
  out.putStr <| toString s

def println [ToString α] (s : α) : IO Unit :=
  print ((toString s).push '\n')

def eprint [ToString α] (s : α) : IO Unit := do
  let out ← getStderr
  out.putStr <| toString s

def eprintln [ToString α] (s : α) : IO Unit :=
  eprint <| toString s |>.push '\n'

@[export lean_io_eprint]
private def eprintAux (s : String) : IO Unit :=
  eprint s

@[export lean_io_eprintln]
private def eprintlnAux (s : String) : IO Unit :=
  eprintln s

def appDir : IO FilePath := do
  let p ← appPath
  let some p ← pure p.parent
    | throw <| IO.userError s!"System.IO.appDir: unexpected filename '{p}'"
  FS.realPath p

namespace FS

/-- Create given path and all missing parents as directories. -/
partial def createDirAll (p : FilePath) : IO Unit := do
  if ← p.isDir then
    return ()
  if let some parent := p.parent then
    createDirAll parent
  try
    createDir p
  catch
    | e =>
      if ← p.isDir then
        pure ()  -- I guess someone else was faster
      else
        throw e

/--
  Fully remove given directory by deleting all contained files and directories in an unspecified order.
  Fails if any contained entry cannot be deleted or was newly created during execution. -/
partial def removeDirAll (p : FilePath) : IO Unit := do
  for ent in (← p.readDir) do
    if (← ent.path.isDir : Bool) then
      removeDirAll ent.path
    else
      removeFile ent.path
  removeDir p

/--
Like `createTempFile`, but also takes care of removing the file after usage.
-/
def withTempFile [Monad m] [MonadFinally m] [MonadLiftT IO m] (f : Handle → FilePath → m α) :
    m α := do
  let (handle, path) ← createTempFile
  try
    f handle path
  finally
    removeFile path

/--
Like `createTempDir`, but also takes care of removing the directory after usage.

All files in the directory are recursively deleted, regardless of how or when they were created.
-/
def withTempDir [Monad m] [MonadFinally m] [MonadLiftT IO m] (f : FilePath → m α) :
    m α := do
  let path ← createTempDir
  try
    f path
  finally
    removeDirAll path

end FS

namespace Process

/-- Returns the current working directory of the calling process. -/
@[extern "lean_io_process_get_current_dir"] opaque getCurrentDir : IO FilePath

/-- Sets the current working directory of the calling process. -/
@[extern "lean_io_process_set_current_dir"] opaque setCurrentDir (path : @& FilePath) : IO Unit

/-- Returns the process ID of the calling process. -/
@[extern "lean_io_process_get_pid"] opaque getPID : BaseIO UInt32

inductive Stdio where
  | piped
  | inherit
  | null

def Stdio.toHandleType : Stdio → Type
  | Stdio.piped   => FS.Handle
  | Stdio.inherit => Unit
  | Stdio.null    => Unit

structure StdioConfig where
  /-- Configuration for the process' stdin handle. -/
  stdin := Stdio.inherit
  /-- Configuration for the process' stdout handle. -/
  stdout := Stdio.inherit
  /-- Configuration for the process' stderr handle. -/
  stderr := Stdio.inherit

structure SpawnArgs extends StdioConfig where
  /-- Command name. -/
  cmd : String
  /-- Arguments for the process -/
  args : Array String := #[]
  /-- Working directory for the process. Inherit from current process if `none`. -/
  cwd : Option FilePath := none
  /-- Add or remove environment variables for the process. -/
  env : Array (String × Option String) := #[]
  /-- Start process in new session and process group using `setsid`. Currently a no-op on non-POSIX platforms. -/
  setsid : Bool := false

-- TODO(Sebastian): constructor must be private
structure Child (cfg : StdioConfig) where
  stdin  : cfg.stdin.toHandleType
  stdout : cfg.stdout.toHandleType
  stderr : cfg.stderr.toHandleType

@[extern "lean_io_process_spawn"] opaque spawn (args : SpawnArgs) : IO (Child args.toStdioConfig)

/--
Block until the child process has exited and return its exit code.
-/
@[extern "lean_io_process_child_wait"] opaque Child.wait {cfg : @& StdioConfig} : @& Child cfg → IO UInt32

/--
Check whether the child has exited yet. If it hasn't return none, otherwise its exit code.
-/
@[extern "lean_io_process_child_try_wait"] opaque Child.tryWait {cfg : @& StdioConfig} : @& Child cfg →
    IO (Option UInt32)

/-- Terminates the child process using the SIGTERM signal or a platform analogue.
    If the process was started using `SpawnArgs.setsid`, terminates the entire process group instead. -/
@[extern "lean_io_process_child_kill"] opaque Child.kill {cfg : @& StdioConfig} : @& Child cfg → IO Unit

/--
Extract the `stdin` field from a `Child` object, allowing them to be freed independently.
This operation is necessary for closing the child process' stdin while still holding on to a process handle,
e.g. for `Child.wait`. A file handle is closed when all references to it are dropped, which without this
operation includes the `Child` object.
-/
@[extern "lean_io_process_child_take_stdin"] opaque Child.takeStdin {cfg : @& StdioConfig} : Child cfg →
    IO (cfg.stdin.toHandleType × Child { cfg with stdin := Stdio.null })

structure Output where
  exitCode : UInt32
  stdout   : String
  stderr   : String

/--
Run process to completion and capture output.
The process does not inherit the standard input of the caller.
-/
def output (args : SpawnArgs) : IO Output := do
  let child ← spawn { args with stdout := .piped, stderr := .piped, stdin := .null }
  let stdout ← IO.asTask child.stdout.readToEnd Task.Priority.dedicated
  let stderr ← child.stderr.readToEnd
  let exitCode ← child.wait
  let stdout ← IO.ofExcept stdout.get
  pure { exitCode := exitCode, stdout := stdout, stderr := stderr }

/-- Run process to completion and return stdout on success. -/
def run (args : SpawnArgs) : IO String := do
  let out ← output args
  if out.exitCode != 0 then
    throw <| IO.userError <| "process '" ++ args.cmd ++ "' exited with code " ++ toString out.exitCode
  pure out.stdout

@[extern "lean_io_exit"] opaque exit : UInt8 → IO α

end Process

/-- Returns the thread ID of the calling thread. -/
@[extern "lean_io_get_tid"] opaque getTID : BaseIO UInt64

structure AccessRight where
  read : Bool := false
  write : Bool := false
  execution : Bool := false

def AccessRight.flags (acc : AccessRight) : UInt32 :=
  let r : UInt32 := if acc.read      then 0x4 else 0
  let w : UInt32 := if acc.write     then 0x2 else 0
  let x : UInt32 := if acc.execution then 0x1 else 0
  r.lor <| w.lor x

structure FileRight where
  user  : AccessRight := {}
  group : AccessRight := {}
  other : AccessRight := {}

def FileRight.flags (acc : FileRight) : UInt32 :=
  let u : UInt32 := acc.user.flags.shiftLeft 6
  let g : UInt32 := acc.group.flags.shiftLeft 3
  let o : UInt32 := acc.other.flags
  u.lor <| g.lor o

@[extern "lean_chmod"] opaque Prim.setAccessRights (filename : @& FilePath) (mode : UInt32) : IO Unit

def setAccessRights (filename : FilePath) (mode : FileRight) : IO Unit :=
  Prim.setAccessRights filename mode.flags

/-- References -/
abbrev Ref (α : Type) := ST.Ref IO.RealWorld α

instance : MonadLift (ST IO.RealWorld) BaseIO := ⟨id⟩

def mkRef (a : α) : BaseIO (IO.Ref α) :=
  ST.mkRef a

/--
Mutable cell that can be passed around for purposes of cooperative task cancellation: request
cancellation with `CancelToken.set` and check for it with `CancelToken.isSet`.

This is a more flexible alternative to `Task.cancel` as the token can be shared between multiple
tasks.
-/
structure CancelToken where
  private ref : IO.Ref Bool
deriving Nonempty

namespace CancelToken

/-- Creates a new cancellation token. -/
def new : BaseIO CancelToken :=
  CancelToken.mk <$> IO.mkRef false

/-- Activates a cancellation token. Idempotent. -/
def set (tk : CancelToken) : BaseIO Unit :=
  tk.ref.set true

/-- Checks whether the cancellation token has been activated. -/
def isSet (tk : CancelToken) : BaseIO Bool :=
  tk.ref.get

-- separate definition as otherwise no unboxed version is generated
@[export lean_io_cancel_token_is_set]
private def isSetExport := @isSet

end CancelToken

namespace FS
namespace Stream

@[export lean_stream_of_handle]
def ofHandle (h : Handle) : Stream where
  flush   := Handle.flush h
  read    := Handle.read h
  write   := Handle.write h
  getLine := Handle.getLine h
  putStr  := Handle.putStr h
  isTty   := Handle.isTty h

structure Buffer where
  data : ByteArray := ByteArray.empty
  pos  : Nat := 0

def ofBuffer (r : Ref Buffer) : Stream where
  flush   := pure ()
  read    := fun n => r.modifyGet fun b =>
    let data := b.data.extract b.pos (b.pos + n.toNat)
    (data, { b with pos := b.pos + data.size })
  write   := fun data => r.modify fun b =>
    -- set `exact` to `false` so that repeatedly writing to the stream does not impose quadratic run time
    { b with data := data.copySlice 0 b.data b.pos data.size false, pos := b.pos + data.size }
  getLine := do
    let buf ← r.modifyGet fun b =>
      let pos := match b.data.findIdx? (start := b.pos) fun u => u == 0 || u = '\n'.toNat.toUInt8 with
        -- include '\n', but not '\0'
        | some pos => if b.data.get! pos == 0 then pos else pos + 1
        | none     => b.data.size
      (b.data.extract b.pos pos, { b with pos := pos })
    match String.fromUTF8? buf with
    | some str => pure str
    | none => throw (.userError "invalid UTF-8")
  putStr  := fun s => r.modify fun b =>
    let data := s.toUTF8
    { b with data := data.copySlice 0 b.data b.pos data.size false, pos := b.pos + data.size }
  isTty   := pure false

end Stream

/-- Run action with `stdin` emptied and `stdout+stderr` captured into a `String`. -/
def withIsolatedStreams [Monad m] [MonadFinally m] [MonadLiftT BaseIO m] (x : m α)
    (isolateStderr := true) : m (String × α) := do
  let bIn ← mkRef { : Stream.Buffer }
  let bOut ← mkRef { : Stream.Buffer }
  let r ← withStdin (Stream.ofBuffer bIn) <|
    withStdout (Stream.ofBuffer bOut) <|
      (if isolateStderr then withStderr (Stream.ofBuffer bOut) else id) <|
        x
  let bOut ← liftM (m := BaseIO) bOut.get
  let out := String.fromUTF8! bOut.data
  pure (out, r)

end FS
end IO

syntax "println! " (interpolatedStr(term) <|> term) : term

macro_rules
  | `(println! $msg:interpolatedStr) => `((IO.println (s! $msg) : IO Unit))
  | `(println! $msg:term)            => `((IO.println $msg : IO Unit))

/--
  Marks given value and its object graph closure as multi-threaded if currently
  marked single-threaded. This will make reference counter updates atomic and
  thus more costly. It can still be useful to do eagerly when the value will be
  shared between threads later anyway and there is available time budget to mark
  it now. -/
@[extern "lean_runtime_mark_multi_threaded"]
def Runtime.markMultiThreaded (a : α) : BaseIO α := return a

/--
Marks given value and its object graph closure as persistent. This will remove
reference counter updates but prevent the closure from being deallocated until
the end of the process! It can still be useful to do eagerly when the value
will be marked persistent later anyway and there is available time budget to
mark it now or it would be unnecessarily marked multi-threaded in between.

This function is only safe to use on objects (in the full closure) which are
not used concurrently or which are already persistent.
-/
@[extern "lean_runtime_mark_persistent"]
unsafe def Runtime.markPersistent (a : α) : BaseIO α := return a

set_option linter.unusedVariables false in
/--
Discards the passed owned reference. This leads to `a` any any object reachable from it never being
freed. This can be a useful optimization for eliding deallocation time of big object graphs that are
kept alive close to the end of the process anyway (in which case calling `Runtime.markPersistent`
would be similarly costly to deallocation). It is still considered a safe operation as it cannot
lead to undefined behavior.
-/
@[extern "lean_runtime_forget"]
def Runtime.forget (a : α) : BaseIO Unit := return
