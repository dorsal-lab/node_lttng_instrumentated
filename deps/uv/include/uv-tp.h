#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER uv_provider

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./uv-tp.h"

#if !defined(_UV_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _UV_TP_H

#include <lttng/tracepoint.h>

           TRACEPOINT_EVENT(
               uv_provider,
               uv_close_event,
               TP_ARGS(
                   int, my_stamp
               ),
               TP_FIELDS(
                   ctf_integer(int, stamp, my_stamp)
               )
           )
           
            TRACEPOINT_EVENT(
               uv_provider,
               uv_socketopt_event,
               TP_ARGS(
                   int, uv_optname,
                   int, uv_handle_type,
                   int, uv_fd
               ),
               TP_FIELDS(
                   ctf_integer(int, optname, uv_optname)
                   ctf_integer(int, handletype, uv_handle_type)
                   ctf_integer(int, handletype, uv_handle_type)
                   ctf_integer(int, fd, uv_fd)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_fileno_event,
               TP_ARGS(
                   int, uv_handletype,
                   int, uv_fd1
               ),
               TP_FIELDS(
                   ctf_integer(int, handletype, uv_handletype)
                   ctf_integer(int, fd, uv_fd1)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_runpending_event,
               TP_ARGS(
                   int, uv_cp
               ),
               TP_FIELDS(
                   ctf_integer(int, cp, uv_cp)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_rcvmessage_event,
               TP_ARGS(
                   int, msg_fd,
                   int, msg_flags
               ),
               TP_FIELDS(
                   ctf_integer(int, rcv_fd, msg_fd)
                   ctf_integer(int, rcv_flags, msg_flags)
               )
           )

            TRACEPOINT_EVENT(
               uv_provider,
               uv_nonblockfcntl_event,
               TP_ARGS(
                   int, fcntl_fd,
                   int, fcntl_set
               ),
               TP_FIELDS(
                   ctf_integer(int, fcntlfd, fcntl_fd)
                   ctf_integer(int, fcntlset, fcntl_set)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_nonblockioctl_event,
               TP_ARGS(
                   int, ioctl_fd,
                   int, ioctl_set
               ),
               TP_FIELDS(
                   ctf_integer(int, ioctlfd, ioctl_fd)
                   ctf_integer(int, ioctlset, ioctl_set)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_accept_event,
               TP_ARGS(
                   int, ac_fd
               ),
               TP_FIELDS(
                   ctf_integer(int, socketfd, ac_fd)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_open_event,
               TP_ARGS(
                   int, f_fd,
                   const char*, f_path
               ),
               TP_FIELDS(
                   ctf_integer(int, filefd, f_fd)
                   ctf_string(path, f_path)
               )
           )

            TRACEPOINT_EVENT(
               uv_provider,
               uv_socket_event,
               TP_ARGS(
                   int, s_domain,
                   int, s_type,
                   int, s_protocol
               ),
               TP_FIELDS(
                   ctf_integer(int, domain, s_domain)
                   ctf_integer(int, type, s_type)
                   ctf_integer(int, protocol, s_protocol)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_updatetime_event,
               TP_ARGS(
                   int, t
               ),
               TP_FIELDS(
                   ctf_integer(int, ts, t)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_run_event,
               TP_ARGS(
                   int, r
               ),
               TP_FIELDS(
                   ctf_integer(int, rs, r)
               )
           )

#endif /* _UV_TP_H */

#include <lttng/tracepoint-event.h>