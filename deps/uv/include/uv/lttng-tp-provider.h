#undef LTTNG_UST_TRACEPOINT_PROVIDER
#define LTTNG_UST_TRACEPOINT_PROVIDER uv

#undef LTTNG_UST_TRACEPOINT_INCLUDE
#define LTTNG_UST_TRACEPOINT_INCLUDE "uv/lttng-tp-provider.h"

#if !defined(_LTTNG_TP_PROVIDER_H) || defined(LTTNG_UST_TRACEPOINT_HEADER_MULTI_READ)
#define _LTTNG_TP_PROVIDER_H

#include <lttng/tracepoint.h>
#include "uv.h"

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  socketopt_event,
  LTTNG_UST_TP_ARGS(
    int, optname,
    int, handle_type,
    int, fd
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, optname, optname)
    ctf_integer(int, handletype, handle_type)
    ctf_integer(int, fd, fd)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  fileno_event,
  LTTNG_UST_TP_ARGS(
    int, handletype,
    int, fd1
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, handletype, handletype)
    ctf_integer(int, fd, fd1)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  rcvmessage_event,
  LTTNG_UST_TP_ARGS(
    int, msg_fd,
    int, msg_flags
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, rcv_fd, msg_fd)
    ctf_integer(int, rcv_flags, msg_flags)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  nonblockfcntl_event,
  LTTNG_UST_TP_ARGS(
    int, fcntl_fd,
    int, fcntl_set
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fcntlfd, fcntl_fd)
    ctf_integer(int, fcntlset, fcntl_set)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  nonblockioctl_event,
  LTTNG_UST_TP_ARGS(
    int, ioctl_fd,
    int, ioctl_set
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ioctlfd, ioctl_fd)
    ctf_integer(int, ioctlset, ioctl_set)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  accept_event,
  LTTNG_UST_TP_ARGS(
    int, ac_fd
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, socketfd, ac_fd)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  runpending_event,
  LTTNG_UST_TP_ARGS(
    int, areq,
    int, size_hdlq,
    int, ahdl,
    int, backend_fd,
    int, ind30
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, active_req, areq)
    ctf_integer(int, size_hdl_q, size_hdlq)
    ctf_integer(int, active_handle, ahdl)
    ctf_integer(int, backend_fd, backend_fd)
    ctf_integer(int, index, ind30)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_runpending_event,
  LTTNG_UST_TP_ARGS(
    int, areq,
    int, size_hdlq,
    int, ahdl,
    int, ret,
    int, backend_fd1,
    int, ind31
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, active_reqs, areq)
    ctf_integer(int, size_hdl_q, size_hdlq)
    ctf_integer(int, active_handles, ahdl)
    ctf_integer(int, ret, ret)
    ctf_integer(int, backend_fd, backend_fd1)
    ctf_integer(int, index, ind31)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  update_time_event,
  LTTNG_UST_TP_ARGS(
    int, t,
    int, backend_fd2
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ts, t)
    ctf_integer(int, backend_fd, backend_fd2)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  run_event,
  LTTNG_UST_TP_ARGS(
    int, r,
    int, backend_fd3
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, backend_fd, backend_fd3)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  enqueue_microtask,
  LTTNG_UST_TP_ARGS(
    int, w
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ret, w)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  dequeue_microtask,
  LTTNG_UST_TP_ARGS(
    int, t
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ret, t)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_run_event,
  LTTNG_UST_TP_ARGS(
    int, r,
    int, backend_fd4
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, backend_fd, backend_fd4)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  loop_alive_event,
  LTTNG_UST_TP_ARGS(
    int, r,
    int, backend_fd5
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ret, r)
    ctf_integer(int, backend_fd, backend_fd5)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_update_time_event,
  LTTNG_UST_TP_ARGS(
    int, r,
    int, backend_fd6
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ret, r)
    ctf_integer(int, backend_fd, backend_fd6)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  run_timers_event,
  LTTNG_UST_TP_ARGS(
    int, fd,
    void*, add,
    int, backend_fd7
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, fd)
    ctf_integer_hex(uint64_t, addr, add)
    ctf_integer(int, backend_fd, backend_fd7)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  timer_phase_event,
  LTTNG_UST_TP_ARGS(
    int, ind10
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, index, ind10)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_timer_phase_event,
  LTTNG_UST_TP_ARGS(
    int, ind11
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, index, ind11)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  preparephase_event,
  LTTNG_UST_TP_ARGS(
    int, ind5
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, index, ind5)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_preparephase_event,
  LTTNG_UST_TP_ARGS(
    int, ind6
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, index, ind6)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  runcheck_event,
  LTTNG_UST_TP_ARGS(
  ),
  LTTNG_UST_TP_FIELDS(
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_runcheck_event,
  LTTNG_UST_TP_ARGS(
  ),
  LTTNG_UST_TP_FIELDS(
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  closinghandle_event,
  LTTNG_UST_TP_ARGS(
    int, ind2
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, index, ind2)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_closinghandle_event,
  LTTNG_UST_TP_ARGS(
    int, ind1
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, index, ind1)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_run_timers_event,
  LTTNG_UST_TP_ARGS(
    int, r,
    int, backend_fd8
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, r)
    ctf_integer(int, backend_fd, backend_fd8)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  runpending_cb_event,
  LTTNG_UST_TP_ARGS(    
    int, fd,
    int, events,
    int, pevents,
    int, add_cb,
    int, backend_fd9
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, fd)
    ctf_integer(int, events, events)
    ctf_integer(int, pevents, pevents)
    ctf_integer_hex(uint64_t, cb_addr, add_cb)
    ctf_integer(int, backend_fd, backend_fd9)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  run_idle_event,
  LTTNG_UST_TP_ARGS(
    int, r2,
    int, ind3,
    int, backend_fd10
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ret, r2)
    ctf_integer(int, index, ind3)
    ctf_integer(int, backend_fd, backend_fd10)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_run_idle_event,
  LTTNG_UST_TP_ARGS(
    int, r1,
    int, ind4,
    int, backend_fd11
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ret, r1)
    ctf_integer(int, index, ind4)
    ctf_integer(int, backend_fd, backend_fd11)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  io_feed_event,
  LTTNG_UST_TP_ARGS(
    int, fd32,
    int, add_cb32,
    int, backend_fd12
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, fd32)
    ctf_integer_hex(uint64_t, cb_addr, add_cb32)
    ctf_integer(int, backend_fd, backend_fd12)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  out_io_poll_event,
  LTTNG_UST_TP_ARGS(
    int, fd31,
    int, ind7,
    int, backend_fd13
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, fd31)
    ctf_integer(int, index, ind7)
    ctf_integer(int, backend_fd, backend_fd13)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  watcherq_remove_event,
  LTTNG_UST_TP_ARGS(
    int, fd30,
    int, loop_add1,
    int, backend_fd14
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, fd30)
    ctf_integer(int, loop_add, loop_add1)
    ctf_integer(int, backend_fd, backend_fd14)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  watcherq_insert_event,
  LTTNG_UST_TP_ARGS(
    int, fd21,
    int, loop_add2,
    int, backend_fd15
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, fd21)
    ctf_integer(int, loop_add, loop_add2)
    ctf_integer(int, backend_fd, backend_fd15)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  timersq_insert_event,
  LTTNG_UST_TP_ARGS(
    int, fd20,
    int, data_addr2,
    int, backend_fd16
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, fd20)
    ctf_integer(uint64_t, data, data_addr2)
    ctf_integer(int, backend_fd, backend_fd16)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  timersq_remove_event,
  LTTNG_UST_TP_ARGS(
    int, fd_2,
    int, data_addr_2,
    int, backend_fd17
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, fd_2)
    ctf_integer(uint64_t, data, data_addr_2)
    ctf_integer(int, backend_fd, backend_fd17)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  pendingq_remove_event,
  LTTNG_UST_TP_ARGS(
    int, fd40,
    int, backend_fd18 
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, fd40)
    ctf_integer(int, backend_fd, backend_fd18)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  fs_read_event,
  LTTNG_UST_TP_ARGS(
    int, ptr9,
    int, backend_fd19
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(uint64_t, ptr, ptr9)
    ctf_integer(int, backend_fd, backend_fd19)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  fs_open_event,
  LTTNG_UST_TP_ARGS(
    int, ofd,
    int, path1,
    int, backend_fd20
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, ofd)
    ctf_integer_hex(uint64_t, path, path1)
    ctf_integer(int, backend_fd, backend_fd20)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_fs_open_event,
  LTTNG_UST_TP_ARGS(
    int, ofd1,
    int, backend_fd21,
    int, id99
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, ofd1)
    ctf_integer(int, backend_fd, backend_fd21)
    ctf_integer(int, id, id99)
  )
)

LTTNG_UST_TRACEPOINT_ENUM(
  uv,
  file_operation,
  LTTNG_UST_TP_ENUM_VALUES(
    lttng_ust_field_enum_value("unknown", UV_FS_UNKNOWN)
    lttng_ust_field_enum_value("custom", UV_FS_CUSTOM)
    lttng_ust_field_enum_value("open", UV_FS_OPEN)
    lttng_ust_field_enum_value("close", UV_FS_CLOSE)
    lttng_ust_field_enum_value("read", UV_FS_READ)
    lttng_ust_field_enum_value("write", UV_FS_WRITE)
    lttng_ust_field_enum_value("sendFile", UV_FS_SENDFILE)
    lttng_ust_field_enum_value("stat", UV_FS_STAT)
    lttng_ust_field_enum_value("lstat", UV_FS_LSTAT)
    lttng_ust_field_enum_value("fstat", UV_FS_FSTAT)
    lttng_ust_field_enum_value("ftruncate", UV_FS_FTRUNCATE)
    lttng_ust_field_enum_value("utime", UV_FS_UTIME)
    lttng_ust_field_enum_value("futime", UV_FS_FUTIME)
    lttng_ust_field_enum_value("access", UV_FS_ACCESS)
    lttng_ust_field_enum_value("chmod", UV_FS_CHMOD)
    lttng_ust_field_enum_value("fchmod", UV_FS_FCHMOD)
    lttng_ust_field_enum_value("fsync", UV_FS_FSYNC)
    lttng_ust_field_enum_value("fdatasync", UV_FS_FDATASYNC)
    lttng_ust_field_enum_value("unlink", UV_FS_UNLINK)
    lttng_ust_field_enum_value("rmdir", UV_FS_RMDIR)
    lttng_ust_field_enum_value("mkdir", UV_FS_MKDIR)
    lttng_ust_field_enum_value("mkdtemp", UV_FS_MKDTEMP)
    lttng_ust_field_enum_value("rename", UV_FS_RENAME)
    lttng_ust_field_enum_value("scandir", UV_FS_SCANDIR)
    lttng_ust_field_enum_value("link", UV_FS_LINK)
    lttng_ust_field_enum_value("symlink", UV_FS_SYMLINK)
    lttng_ust_field_enum_value("readlink", UV_FS_READLINK)
    lttng_ust_field_enum_value("chown", UV_FS_CHOWN)
    lttng_ust_field_enum_value("fchown", UV_FS_FCHOWN)
    lttng_ust_field_enum_value("realpath", UV_FS_REALPATH)
    lttng_ust_field_enum_value("copyfile", UV_FS_COPYFILE)
    lttng_ust_field_enum_value("lchown", UV_FS_LCHOWN)
    lttng_ust_field_enum_value("opendir", UV_FS_OPENDIR)
    lttng_ust_field_enum_value("readdir", UV_FS_READDIR)
    lttng_ust_field_enum_value("closedir", UV_FS_CLOSEDIR)
    lttng_ust_field_enum_value("statfs", UV_FS_STATFS)
    lttng_ust_field_enum_value("mkstemp", UV_FS_MKSTEMP)
    lttng_ust_field_enum_value("lutime", UV_FS_LUTIME)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  async_file_event,
  LTTNG_UST_TP_ARGS(
    int, _id100,
    uv_fs_type, oper100,
    int, b_fd100
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, id, _id100)
    ctf_integer(int, backend_fd, b_fd100)
    ctf_enum(uv, file_operation, int, operation, oper100)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  work_submit_event,
  LTTNG_UST_TP_ARGS(
    int, add_loop,
    int, add_work,
    int, add_w,
    int, add_done,
    int, backend_fd22
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer_hex(uint64_t, add_loop, add_loop)
    ctf_integer_hex(uint64_t, add_work, add_work)
    ctf_integer_hex(uint64_t, add_w, add_w)
    ctf_integer_hex(uint64_t, add_done, add_done)
    ctf_integer(int, backend_fd, backend_fd22)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_work_submit_event,
  LTTNG_UST_TP_ARGS(
    int, add_loop1,
    int, add_work1,
    int, add_w1,
    int, add_done1,
    int, backend_fd23
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer_hex(uint64_t, add_loop, add_loop1)
    ctf_integer_hex(uint64_t, add_work, add_work1)
    ctf_integer_hex(uint64_t, add_w, add_w1)
    ctf_integer_hex(uint64_t, add_done, add_done1)
    ctf_integer(int, backend_fd, backend_fd23)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  write_stream,
  LTTNG_UST_TP_ARGS(
    int, _id97,
    int, nbufs,
    int, ba_fd
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, id, _id97)
    ctf_integer(int, backend_fd, ba_fd)
    ctf_integer(int, nbufs, nbufs)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_write_stream,
  LTTNG_UST_TP_ARGS(
    int, _id96,
    int, nbufs0,
    int, ba_fd1
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, id, _id96)
    ctf_integer(int, backend_fd, ba_fd1)
    ctf_integer(int, nbufs, nbufs0)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  read_stream,
  LTTNG_UST_TP_ARGS(
    int, _id96,
    int, ba_fd96
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, id, _id96)
    ctf_integer(uint64_t, backend_fd, ba_fd96)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_read_stream,
  LTTNG_UST_TP_ARGS(
    int, _id95,
    int, ba_fd95
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, id, _id95)
    ctf_integer(int, backend_fd, ba_fd95)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  done_event,
  LTTNG_UST_TP_ARGS(
    int, _id94,
    int, ba_fd94
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, id, _id94)
    ctf_integer(int, backend_fd, ba_fd94)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  insertslowio_pendwq_event,
  LTTNG_UST_TP_ARGS(
    int, add_q,
    int, add_slow_io_pending,
    int, add_wq,
    int, backend_fd24
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer_hex(uint64_t, add_q, add_q)
    ctf_integer_hex(uint64_t, add_slow_io_pending, add_slow_io_pending)
    ctf_integer_hex(uint64_t, add_wq, add_wq)
    ctf_integer(int, backend_fd, backend_fd24)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  worker_event,
  LTTNG_UST_TP_ARGS(
    int, add_wq1,
    int, async_id
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, tid, add_wq1)
    ctf_integer(int, asyncid, async_id)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_worker_event,
  LTTNG_UST_TP_ARGS(
    int, add_wq2,
    int, add_slow_io_pending2,
    int, add_arg2,
    int, backend_fd26
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer_hex(uint64_t, add_arg, add_arg2)
    ctf_integer_hex(uint64_t, add_slow_io_pending, add_slow_io_pending2)
    ctf_integer_hex(uint64_t, add_wq, add_wq2)
    ctf_integer(int, backend_fd, backend_fd26)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  workerq_remove_event,
  LTTNG_UST_TP_ARGS(
    int, add_wq3,
    int, backend_fd27
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, add_wq, add_wq3)
    ctf_integer(int, backend_fd, backend_fd27)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  insert_workq_event,
  LTTNG_UST_TP_ARGS(
    int, add_q,
    int, add_slow_io_pending,
    int, add_wq,
    int, backend_fd29
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer_hex(uint64_t, add_q, add_q)
    ctf_integer_hex(uint64_t, add_slow_io_pending, add_slow_io_pending)
    ctf_integer_hex(uint64_t, add_wq, add_wq)
    ctf_integer(int, backend_fd, backend_fd29)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  insert_reschedule_workq_event,
  LTTNG_UST_TP_ARGS(
    int, add_q5,
    int, add_wq5,
    int, add_slow_io_pending5,
    int, backend_fd30
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer_hex(uint64_t, add_q, add_q5)
    ctf_integer_hex(uint64_t, add_wq, add_wq5)
    ctf_integer_hex(uint64_t, add_slow_io_pending, add_slow_io_pending5)
    ctf_integer(int, backend_fd, backend_fd30)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_fs_read_event,
  LTTNG_UST_TP_ARGS(
    int, ptr0,
    int, ret0,
    int, backend_fd31
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(uint64_t, ptr, ptr0)
    ctf_integer(int, ret, ret0)
    ctf_integer(int, backend_fd, backend_fd31)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_out_io_poll_event,
  LTTNG_UST_TP_ARGS(
    int, timeout1,
    int, ind8,
    int, backend_fd32
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, timeout, timeout1)
    ctf_integer(int, index, ind8)
    ctf_integer(int, backend_fd, backend_fd32)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  async_send_event,
  LTTNG_UST_TP_ARGS(
    int, fd14,
    int, buf14,
    int, backend_fd33
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, fd14)
    ctf_integer(uint64_t, buf_add, buf14)
    ctf_integer(int, backend_fd, backend_fd33)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_async_send_event,
  LTTNG_UST_TP_ARGS(
    int, fd15,
    int, buf6,
    int, bytes6,
    int, backend_fd34
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, fd15)
    ctf_integer(uint64_t, buf_add, buf6)
    ctf_integer(int, bytes, bytes6)
    ctf_integer(int, backend_fd, backend_fd34)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  async_start_event,
  LTTNG_UST_TP_ARGS(
    int, pipfd5,
    int, asyncio_watcher5,
    int, backend_fd35
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, pipe_fd, pipfd5)
    ctf_integer(int, as_io_watcher, asyncio_watcher5)
    ctf_integer(int, backend_fd, backend_fd35)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_async_start_event,
  LTTNG_UST_TP_ARGS(
    int, pipfd4,
    int, asyncio_watcher4,
    int, backend_fd36
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, pipe_fd, pipfd4)
    ctf_integer(int, as_io_watcher, asyncio_watcher4)
    ctf_integer(int, backend_fd, backend_fd36)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  close_asyncfd_event,
  LTTNG_UST_TP_ARGS(
    int, afd3,
    int, backend_fd37
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, async_fd, afd3)
    ctf_integer(int, backend_fd, backend_fd37)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  asyncio_event,
  LTTNG_UST_TP_ARGS(
    int, iofd3,
    int, e3,
    int, backend_fd38
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, io_fd, iofd3)
    ctf_integer(int, event, e3)
    ctf_integer(int, backend_fd, backend_fd38)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_asyncio_event,
  LTTNG_UST_TP_ARGS(
    int, iofd2,
    int, e2,
    int, cb2,
    int, backend_fdo
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, io_fd, iofd2)
    ctf_integer(int, event, e2)
    ctf_integer_hex(uint64_t, cb_add, cb2)
    ctf_integer(int, backend_fd, backend_fdo)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  run_async_cb_event,
  LTTNG_UST_TP_ARGS(
    int, iofd1,
    int, e1,
    int, cb1,
    int, add_hq1,
    int, backend_fdn
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, io_fd, iofd1)
    ctf_integer(int, event, e1)
    ctf_integer_hex(uint64_t, cb_add, cb1)
    ctf_integer_hex(uint64_t, hq_add, add_hq1)
    ctf_integer(int, backend_fd, backend_fdn)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  async_spin_event,
  LTTNG_UST_TP_ARGS(
    int, sfd8,
    int, pend8,
    int, backend_fdm
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, sfd8)
    ctf_integer(int, pending, pend8)
    ctf_integer(int, backend_fd, backend_fdm)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_async_spin_event,
  LTTNG_UST_TP_ARGS(
    int, sfd7,
    int, pend7,
    int, rc7,
    int, backend_fdl
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, sfd7)
    ctf_integer(int, pending, pend7)
    ctf_integer(int, rc, rc7)
    ctf_integer(int, backend_fd, backend_fdl)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  socket_event,
  LTTNG_UST_TP_ARGS(
    int, sockfd6,
    int, type6,
    int, protocol6,
    int, backend_fdk
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, socketfd, sockfd6)
    ctf_integer(int, type, type6)
    ctf_integer(int, protocol, protocol6)
    ctf_integer(int, backend_fd, backend_fdk)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  close_event,
  LTTNG_UST_TP_ARGS(
    int, cfd5,
    int, ret5,
    int, backend_fdj
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, socketfd, cfd5)
    ctf_integer(int, ret, ret5)
    ctf_integer(int, backend_fd, backend_fdj)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  nonblock_ioctl_event,
  LTTNG_UST_TP_ARGS(
    int, ctlfd4,
    int, ret4,
    int, backend_fdi
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ctlfd, ctlfd4)
    ctf_integer(int, ret, ret4)
    ctf_integer(int, backend_fd, backend_fdi)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  nonblock_fcntl_event,
  LTTNG_UST_TP_ARGS(
    int, cnlfd3,
    int, ret3,
    int, backend_fdh
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ctlfd, cnlfd3)
    ctf_integer(int, ret, ret3)
    ctf_integer(int, backend_fd, backend_fdh)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_nonblock_fcntl_event,
  LTTNG_UST_TP_ARGS(
    int, cnlfd2,
    int, set2,
    int, ret2,
    int, backend_fdg
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ctlfd, cnlfd2)
    ctf_integer(int, set, set2)
    ctf_integer(int, ret, ret2)
    ctf_integer(int, backend_fd, backend_fdg)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  recvmsg_event,
  LTTNG_UST_TP_ARGS(
    int, recfd1,
    int, backend_fdf
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ctlfd, recfd1)
    ctf_integer(int, backend_fd, backend_fdf)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_recvmsg_event,
  LTTNG_UST_TP_ARGS(
    int, cnlfd1,
    int, ret1,
    int, backend_fde
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ctlfd, cnlfd1)
    ctf_integer(int, ret, ret1)
    ctf_integer(int, backend_fd, backend_fde)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  resolvePromise_event,
  LTTNG_UST_TP_ARGS(
    int, ptr,
    int, cb,
    const char*, path,
    int, backend_fdd
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, ptr, ptr)
    ctf_integer(uint64_t, cb_add, cb)
    ctf_string(path, path)
    ctf_integer(int, backend_fd, backend_fdd)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  opensync_event,
  LTTNG_UST_TP_ARGS(
    int, req_add,
    int, path1,
    char *, fl11,
    int, backend_fdc
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(uint32_t, req_add, req_add)
    ctf_string(flag, fl11)
    ctf_integer(uint32_t, path_addr, path1)
    ctf_integer(int, backend_fd, backend_fdc)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_opensync_event,
  LTTNG_UST_TP_ARGS(
    int, fd20,
    int, req_add,
    int, path,
    char *, fl11,
    int, backend_fdb
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, fd20)
    ctf_integer(uint32_t, req_add, req_add)
    ctf_string(flag, fl11)
    ctf_integer(uint32_t, path_addr, path)
    ctf_integer(int, backend_fd, backend_fdb)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  RejectPromise_event,
  LTTNG_UST_TP_ARGS(
    int, fd10,
    int, req_add,
    char*, fl,
    int, backend_fda
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, fd, fd10)
    ctf_integer(uint32_t, req_add, req_add)
    ctf_string(flag, fl)
    ctf_integer(int, backend_fd, backend_fda)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  send_event,
  LTTNG_UST_TP_ARGS(
    char*, id,
    char*, channel,
    char*, method,
    int, backend_fdz
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_string(id, id)
    ctf_string(channel, channel)
    ctf_string(method, method)
    ctf_integer(int, backend_fd, backend_fdz)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  io_poll_event,
  LTTNG_UST_TP_ARGS(
    int, ipevents,
    int, ifd,
    int, ievents,
    int, ibackend_fd,
    int, iop,
    int, infds,
    int, pe_fd,
    int, data_addr
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, pevents, ipevents)
    ctf_integer(int, fd, ifd)
    ctf_integer(int, events, ievents)
    ctf_integer(int, backend_fd, ibackend_fd)
    ctf_integer(int, op, iop)
    ctf_integer(int, nfds, infds)
    ctf_integer(int, pe_fd, pe_fd)
    ctf_integer_hex(uint64_t, data_addr, data_addr)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  uv,
  exit_io_poll_event,
  LTTNG_UST_TP_ARGS(
    int, ipevents,
    int, ifd,
    int, ievents,
    int, ibackend_fd,
    int, iop,
    int, infds,
    int, pe_fd,
    int, data_addr
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, pevents, ipevents)
    ctf_integer(int, fd, ifd)
    ctf_integer(int, events, ievents)
    ctf_integer(int, backend_fd, ibackend_fd)
    ctf_integer(int, op, iop)
    ctf_integer(int, nfds, infds)
    ctf_integer(int, pe_fd, pe_fd)
    ctf_integer_hex(uint64_t, data_addr, data_addr)
  )
)

#endif /* _LTTNG_TP_PROVIDER_H */

#include <lttng/tracepoint-event.h>
