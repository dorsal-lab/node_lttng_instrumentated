#ifndef SRC_NODE_LTTNG_PROVIDER_H_
#define SRC_NODE_LTTNG_PROVIDER_H_
#define LTTNG_UST_TRACEPOINT_DEFINE
#include "node_lttng_tp.h"

namespace node {

#define FOR_ALL_GC_TYPES(APPLY) \
  APPLY(kGCTypeScavenge) \
  APPLY(kGCTypeMarkSweepCompact) \
  APPLY(kGCTypeAll)

#define FOR_ALL_GC_CALLBACK_FLAGS(APPLY) \
  APPLY(kNoGCCallbackFlags) \
  APPLY(kGCCallbackFlagConstructRetainedObjectInfos) \
  APPLY(kGCCallbackFlagForced) \
  APPLY(kGCCallbackFlagSynchronousPhantomCallbackProcessing)

void NODE_GLOBAL_ENTRY(node_lttng_global_event_t* obj) {
   lttng_ust_tracepoint(node, global_entry, obj->uid, obj->method);
}

void NODE_GLOBAL_EXIT(node_lttng_global_event_t* obj) {
  lttng_ust_tracepoint(node, global_exit, obj->uid, obj->method);
}

void NODE_HTTP_SERVER_REQUEST(node_lttng_http_server_request_t* req,
                              node_lttng_connection_t* conn,
                              const char *remote, int port,
                              const char *method, const char *url,
                              int fd) {
   lttng_ust_tracepoint(node, http_server_request, 3, req->url, req->method, \
             req->forwardedFor);
}

void NODE_HTTP_SERVER_RESPONSE(node_lttng_connection_t* conn,
                              const char *remote, int port, int fd) {
  lttng_ust_tracepoint(node, http_server_response, 3, port, conn->remote, fd);
}

void NODE_HTTP_CLIENT_REQUEST(node_lttng_http_client_request_t* req,
                              node_lttng_connection_t* conn,
                              const char *remote, int port,
                              const char *method, const char *url,
                              int fd) {
  lttng_ust_tracepoint(node, http_client_request, 44, 23, req->url, req->method);
}

void NODE_HTTP_CLIENT_RESPONSE(node_lttng_connection_t* conn,
                               const char *remote, int port, int fd) {
  lttng_ust_tracepoint(node, http_client_response, 11, 22, port, conn->remote, fd);
}

void NODE_NET_SERVER_CONNECTION(node_lttng_connection_t* conn,
                                const char *remote, int port, int fd) {
  lttng_ust_tracepoint(node, net_server_connection, conn->remote, port, fd, conn->buffered);
}

void NODE_NET_STREAM_END(node_lttng_connection_t* conn,
                        const char *remote, int port, int fd) {
  lttng_ust_tracepoint(node, net_stream_end, conn->remote, port, fd);
}

void NODE_GC_START(v8::GCType type,
                   v8::GCCallbackFlags flags,
                   v8::Isolate* isolate) {
  const char* typeStr = "Unkown GC Type";
  const char* flagsStr = "Unknown GC Flag";

#define BUILD_IF(f) if (type == v8::GCType::f) { typeStr = #f; }
  FOR_ALL_GC_TYPES(BUILD_IF);
#undef BUILD_IF

#define BUILD_IF(f) if (flags == v8::GCCallbackFlags::f) { flagsStr = #f; }
  FOR_ALL_GC_CALLBACK_FLAGS(BUILD_IF);
#undef BUILD_IF

  lttng_ust_tracepoint(node, gc_start, typeStr, flagsStr);
}

void NODE_GC_DONE(v8::GCType type,
                  v8::GCCallbackFlags flags,
                  v8::Isolate* isolate) {
  const char* typeStr = "Unkown GC Type";
  const char* flagsStr = "Unknown GC Flag";

#define BUILD_IF(f) if (type == v8::GCType::f) { typeStr = #f; }
  FOR_ALL_GC_TYPES(BUILD_IF);
#undef BUILD_IF

#define BUILD_IF(f) if (flags == v8::GCCallbackFlags::f) { flagsStr = #f; }
  FOR_ALL_GC_CALLBACK_FLAGS(BUILD_IF);
#undef BUILD_IF

  lttng_ust_tracepoint(node, gc_done, typeStr, flagsStr);
}

bool NODE_HTTP_SERVER_REQUEST_ENABLED() { return true; }
bool NODE_HTTP_SERVER_RESPONSE_ENABLED() { return true; }
bool NODE_HTTP_CLIENT_REQUEST_ENABLED() { return true; }
bool NODE_HTTP_CLIENT_RESPONSE_ENABLED() { return true; }
bool NODE_NET_SERVER_CONNECTION_ENABLED() { return true; }
bool NODE_NET_STREAM_END_ENABLED() { return true; }
bool NODE_GLOBAL_ENTRY_ENABLED() { return true; }
bool NODE_GLOBAL_EXIT_ENABLED() { return true; }

}  // namespace node

#endif  // SRC_NODE_LTTNG_PROVIDER_H_
