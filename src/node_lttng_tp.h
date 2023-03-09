#undef LTTNG_UST_TRACEPOINT_PROVIDER
#define LTTNG_UST_TRACEPOINT_PROVIDER node

#undef LTTNG_UST_TRACEPOINT_INCLUDE
#define LTTNG_UST_TRACEPOINT_INCLUDE "./node_lttng_tp.h"

#if !defined(_NODE_LTTNG_TP_H) || defined(LTTNG_UST_TRACEPOINT_HEADER_MULTI_READ)
#define _NODE_LTTNG_TP_H

#include <lttng/tracepoint.h>

LTTNG_UST_TRACEPOINT_EVENT(
  node,
  global_entry,
  LTTNG_UST_TP_ARGS(
    int, id,
    const char*, method
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, id, id)
    ctf_string(method, method)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  node,
  global_exit,
  LTTNG_UST_TP_ARGS(
    int, id,
    const char*, res
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, id, id)
    ctf_string(res, res)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  node,
  http_server_request,
  LTTNG_UST_TP_ARGS(
    int, traceid,
    const char*, url,
    const char*, method,
    const char*, forwardedFor
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, traceid, traceid)
    ctf_string(url, url)
    ctf_string(method, method)
    ctf_string(forwardedFor, forwardedFor)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  node,
  http_server_response,
  LTTNG_UST_TP_ARGS(
    int, traceid,
    int, port,
    const char*, remote,
    int, fd
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, traceid, traceid)
    ctf_integer(int, port, port)
    ctf_string(remote, remote)
    ctf_integer(int, fd, fd)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  node,
  http_client_request,
  LTTNG_UST_TP_ARGS(
    int, traceid,
    int, spanid,
    const char*, url,
    const char*, method
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, traceid, traceid)
    ctf_integer(int, spanid, spanid)
    ctf_string(url, url)
    ctf_string(method, method)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  node,
  http_client_response,
  LTTNG_UST_TP_ARGS(
    int, traceid,
    int, spanid,
    int, port,
    const char*, remote,
    int, fd
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_integer(int, traceid, traceid)
    ctf_integer(int, spanid, spanid)
    ctf_integer(int, port, port)
    ctf_string(remote, remote)
    ctf_integer(int, fd, fd)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  node,
  net_server_connection,
  LTTNG_UST_TP_ARGS(
    const char*, remote,
    int, port,
    int, fd,
    int, buffered
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_string(remote, remote)
    ctf_integer(int, port, port)
    ctf_integer(int, fd, fd)
    ctf_integer(int, buffered, buffered)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  node,
  net_stream_end,
  LTTNG_UST_TP_ARGS(
    const char*, remote,
    int, port,
    int, fd
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_string(remote, remote)
    ctf_integer(int, port, port)
    ctf_integer(int, fd, fd)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  node,
  gc_start,
  LTTNG_UST_TP_ARGS(
    const char*, gctype,
    const char*, gcflags
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_string(gctype, gctype)
    ctf_string(gcflags, gcflags)
  )
)

LTTNG_UST_TRACEPOINT_EVENT(
  node,
  gc_done,
  LTTNG_UST_TP_ARGS(
    const char*, gctype,
    const char*, gcflags
  ),
  LTTNG_UST_TP_FIELDS(
    ctf_string(gctype, gctype)
    ctf_string(gcflags, gcflags)
  )
)

#endif // _NODE_LTTNG_TP_H
#include <lttng/tracepoint-event.h>
