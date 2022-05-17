#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER uv_provider

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./uv-tp.h"

#if !defined(_UV_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _UV_TP_H

#include <lttng/tracepoint.h>

                    
           TRACEPOINT_EVENT(
               uv_provider,
               uv_runpending_event,
               TP_ARGS(
                   int, areq,
                   int, size_hdlq,
                   int, ahdl,
                   int, backend_fd,
                   int, ind30
               ),
               TP_FIELDS(
                   ctf_integer(int, active_req, areq)
                   ctf_integer(int, size_hdl_q, size_hdlq)
                   ctf_integer(int, active_handle, ahdl)
                   ctf_integer(int, backend_fd, backend_fd)
                   ctf_integer(int, index, ind30)
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_runpending_event,
               TP_ARGS(
                   int, areq,
                   int, size_hdlq,
                   int, ahdl,
                   int, ret,
                   int, backend_fd1,
                   int, ind31
               ),
               TP_FIELDS(
                   ctf_integer(int, active_reqs, areq)
                   ctf_integer(int, size_hdl_q, size_hdlq)
                   ctf_integer(int, active_handles, ahdl)
                   ctf_integer(int, ret, ret)
                   ctf_integer(int, backend_fd, backend_fd1)
                   ctf_integer(int, index, ind31)
               )
           )

        
           TRACEPOINT_EVENT(
               uv_provider,
               uv_updatetime_event,
               TP_ARGS(
                   int, t,
                   int, backend_fd2
               ),
               TP_FIELDS(
                   ctf_integer(int, ts, t)
                   ctf_integer(int, backend_fd, backend_fd2)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_run_event,
               TP_ARGS(
                   int, r,
                   int, backend_fd3
               ),
               TP_FIELDS(
                   ctf_integer(int, backend_fd, backend_fd3)
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_enqueue_microtask,
               TP_ARGS(
                   int, w
               ),
               TP_FIELDS(
                   ctf_integer(int, ret, w)
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_dequeue_microtask,
               TP_ARGS(
                   int, t
               ),
               TP_FIELDS(
                   ctf_integer(int, ret, t)
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_run_event,
               TP_ARGS(
                   int, r,
                   int, backend_fd4
               ),
               TP_FIELDS(
                   ctf_integer(int, backend_fd, backend_fd4)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_loop_alive_event,
               TP_ARGS(
                   int, r,
                   int, backend_fd5
               ),
               TP_FIELDS(
                   ctf_integer(int, ret, r)
                   ctf_integer(int, backend_fd, backend_fd5)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_update_time_event,
               TP_ARGS(    
                   int, r,
                   int, backend_fd6        
               ),
               TP_FIELDS(
                   ctf_integer(int, ret, r)
                   ctf_integer(int, backend_fd, backend_fd6)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_run_timers_event,
               TP_ARGS(    
                   int, fd,
                   int, add,
                   int, backend_fd7
                       
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, fd)
                   ctf_integer_hex(uint64_t, addr, add)
                   ctf_integer(int, backend_fd, backend_fd7)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_timerPhase_event,
               TP_ARGS(    
                  int, ind10
                       
               ),
               TP_FIELDS(
                   ctf_integer(int, index, ind10)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_timerphase_event,
               TP_ARGS(    
                  int, ind11
                      
               ),
               TP_FIELDS(
                   ctf_integer(int, index, ind11)
                    
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_preparephase_event,
               TP_ARGS(    
                  int, ind5
                      
               ),
               TP_FIELDS(
                   
                    ctf_integer(int, index, ind5)
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_preparephase_event,
               TP_ARGS(    
                  int, ind6
                      
               ),
               TP_FIELDS(
                   
                    ctf_integer(int, index, ind6)
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_runcheck_event,
               TP_ARGS(    
                  
                      
               ),
               TP_FIELDS(
                   
                    
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_runcheck_event,
               TP_ARGS(    
                  
                      
               ),
               TP_FIELDS(
                   
                    
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_closinghandle_event,
               TP_ARGS(    
                  int, ind2
                      
               ),
               TP_FIELDS(
                   
                ctf_integer(int, index, ind2)
            )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_closinghandle_event,
               TP_ARGS(    
                  int, ind1
                      
               ),
               TP_FIELDS(
                   
                    ctf_integer(int, index, ind1)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_run_timers_event,
               TP_ARGS(    
                   int, r,
                   int, backend_fd8        
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, r)
                   ctf_integer(int, backend_fd, backend_fd8)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_runpending_cb_event,
               TP_ARGS(    
                   int, fd,
                   int, events,
                   int, pevents,
                   int, add_cb,
                   int, backend_fd9
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, fd)
                   ctf_integer(int, events, events)
                   ctf_integer(int, pevents, pevents)
                   ctf_integer_hex(uint64_t, cb_addr, add_cb)
                   ctf_integer(int, backend_fd, backend_fd9)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_run_idle_event,
               TP_ARGS(    
                   int, r2,
                   int, ind3,
                   int, backend_fd10        
               ),
               TP_FIELDS(
                   ctf_integer(int, ret, r2)
                   ctf_integer(int, index, ind3)
                   ctf_integer(int, backend_fd, backend_fd10)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_run_idle_event,
               TP_ARGS(    
                   int, r1,
                   int, ind4,
                   int, backend_fd11        
               ),
               TP_FIELDS(
                   ctf_integer(int, ret, r1)
                   ctf_integer(int, index, ind4)
                   ctf_integer(int, backend_fd, backend_fd11)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_io_feed_event,
               TP_ARGS(    
                   int, fd32,
                   int, add_cb32,
                   int, backend_fd12        
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, fd32)
                   ctf_integer_hex(uint64_t, cb_addr, add_cb32)
                   ctf_integer(int, backend_fd, backend_fd12)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_out_iopoll_event,
               TP_ARGS(    
                   int, fd31,
                   int, ind7,
                   int, backend_fd13
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, fd31)
                   ctf_integer(int, index, ind7)
                   ctf_integer(int, backend_fd, backend_fd13)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_watcherq_remove_event,
               TP_ARGS(    
                   int, fd30,
                   int, loop_add1,
                   int, backend_fd14
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, fd30)
                   ctf_integer(int, loop_add, loop_add1)
                   ctf_integer(int, backend_fd, backend_fd14)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_watcherq_insert_event,
               TP_ARGS(    
                   int, fd21,
                   int, loop_add2,
                   int, backend_fd15
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, fd21)
                   ctf_integer(int, loop_add, loop_add2)
                   ctf_integer(int, backend_fd, backend_fd15)
                   
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_timersq_insert_event,
               TP_ARGS(    
                   int, fd20,
                   int, data_addr2,
                   int, backend_fd16
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, fd20)
                   ctf_integer(uint64_t, data, data_addr2)
                   ctf_integer(int, backend_fd, backend_fd16)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_timersq_remove_event,
               TP_ARGS(    
                   int, fd_2,
                   int, data_addr_2,
                   int, backend_fd17
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, fd_2)
                   ctf_integer(uint64_t, data, data_addr_2)
                   ctf_integer(int, backend_fd, backend_fd17)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_pendingq_remove_event,
               TP_ARGS(    

                  int, fd40,
                  int, backend_fd18 
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, fd40)
                   ctf_integer(int, backend_fd, backend_fd18)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_fs_read_event,
               TP_ARGS(    
                   int, ptr9,
                   int, backend_fd19
                   
                   
                           
               ),
               TP_FIELDS(
                   ctf_integer(uint64_t, ptr, ptr9)
                   ctf_integer(int, backend_fd, backend_fd19)
                   
                   
                   
               )
           )


            TRACEPOINT_EVENT(
               uv_provider,
               uv_fs_open_event,
               TP_ARGS(    
                   int, ofd,
                   int, path1,
                   int, backend_fd20                                        
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, ofd)
                   ctf_integer_hex(uint64_t, path, path1)   
                   ctf_integer(int, backend_fd, backend_fd20)           
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_fs_open_event,
               TP_ARGS(    
                   int, ofd1,
                   int, backend_fd21,
                   int, id99
                                                       
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, ofd1)
                   ctf_integer(int, backend_fd, backend_fd21)
                   ctf_integer(int, id, id99)
                                                  
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_async_file_event,
               TP_ARGS(    
                   int, _id100,
                   const char*, oper100,
                   int, b_fd100
                                                       
               ),
               TP_FIELDS(
                   ctf_integer(int, id, _id100)
                   ctf_integer(int, backend_fd, b_fd100)
                   ctf_string(oper, oper100)

               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_work_submit_event,
               TP_ARGS(    
                   int, add_loop,
                   int, add_work,
                   int, add_w,
                   int, add_done,
                   int, backend_fd22
                                                       
               ),
               TP_FIELDS(
                   ctf_integer_hex(uint64_t, add_loop, add_loop)
                   ctf_integer_hex(uint64_t, add_work, add_work)
                   ctf_integer_hex(uint64_t, add_w, add_w)
                   ctf_integer_hex(uint64_t, add_done, add_done)  
                   ctf_integer(int, backend_fd, backend_fd22)                                           
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_work_submit_event,
               TP_ARGS(    
                   int, add_loop1,
                   int, add_work1,
                   int, add_w1,
                   int, add_done1,
                   int, backend_fd23
                                                       
               ),
               TP_FIELDS(
                   ctf_integer_hex(uint64_t, add_loop, add_loop1)
                   ctf_integer_hex(uint64_t, add_work, add_work1)
                   ctf_integer_hex(uint64_t, add_w, add_w1)
                   ctf_integer_hex(uint64_t, add_done, add_done1)  
                   ctf_integer(int, backend_fd, backend_fd23)                                           
               )
           )
           
           TRACEPOINT_EVENT(
               uv_provider,
               uv_write_stream,
               TP_ARGS(    
                   int, _id97,
                   int, nbufs,
                   int, ba_fd
                                                       
               ),
               TP_FIELDS(
                   ctf_integer(int, id, _id97)
                   ctf_integer(int, backend_fd, ba_fd)
                   ctf_integer(int, nbufs, nbufs)

               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_write_stream,
               TP_ARGS(    
                   int, _id96,
                   int, nbufs0,
                   int, ba_fd1
                                                       
               ),
               TP_FIELDS(
                   ctf_integer(int, id, _id96)
                   ctf_integer(int, backend_fd, ba_fd1)
                   ctf_integer(int, nbufs, nbufs0)

               )
           )

            TRACEPOINT_EVENT(
               uv_provider,
               uv_read_stream,
               TP_ARGS(    
                   int, _id96,
                   
                   int, ba_fd96
                                                       
               ),
               TP_FIELDS(
                   ctf_integer(int, id, _id96)
                   ctf_integer(uint64_t, backend_fd, ba_fd96)              
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_read_stream,
               TP_ARGS(    
                   int, _id95,
                   
                   int, ba_fd95
                                                       
               ),
               TP_FIELDS(
                   ctf_integer(int, id, _id95)
                   ctf_integer(int, backend_fd, ba_fd95)              
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_done_event,
               TP_ARGS(    
                   int, _id94,
                   
                   int, ba_fd94
                                                       
               ),
               TP_FIELDS(
                   ctf_integer(int, id, _id94)
                   ctf_integer(int, backend_fd, ba_fd94)              
               )
           )


            TRACEPOINT_EVENT(
               uv_provider,
               uv_insertslowio_pendwq_event,
               TP_ARGS(    
                   int, add_q,
                   
                   int, add_slow_io_pending,

                   int, add_wq,

                   int, backend_fd24
                           
               ),
               TP_FIELDS(
                   ctf_integer_hex(uint64_t, add_q, add_q)
                   
                   ctf_integer_hex(uint64_t, add_slow_io_pending, add_slow_io_pending)

                   ctf_integer_hex(uint64_t, add_wq, add_wq)

                   ctf_integer(int, backend_fd, backend_fd24)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_worker_event,
               TP_ARGS(    
                   int, add_wq1,
                   
                   int, async_id
                  
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, tid, add_wq1)
                   
                   ctf_integer(int, asyncid, async_id)
                  
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_worker_event,
               TP_ARGS(    
                   int, add_wq2,
                   
                   int, add_slow_io_pending2,

                   int, add_arg2,

                   int, backend_fd26                  
                           
               ),
               TP_FIELDS(
                   ctf_integer_hex(uint64_t, add_arg, add_arg2)
                   
                   ctf_integer_hex(uint64_t, add_slow_io_pending, add_slow_io_pending2)

                   ctf_integer_hex(uint64_t, add_wq, add_wq2)

                   ctf_integer(int, backend_fd, backend_fd26)

                   
                   
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_workerq_remove_event,
               TP_ARGS(    
                   int, add_wq3,
                   int, backend_fd27               
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, add_wq, add_wq3)  
                   ctf_integer(int, backend_fd, backend_fd27)                          
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_mutex_event,
               TP_ARGS(    
                   int, loc_mutex,
                   
                   int, glob_mutex,

                   int, backend_fd28

                           
               ),
               TP_FIELDS(
                   ctf_integer(int, loc_mutex, loc_mutex)
                   
                   ctf_integer(int, glob_mutex, glob_mutex)

                   ctf_integer(int, backend_fd, backend_fd28)
                   
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_insert_workq_event,
               TP_ARGS(    
                   int, add_q,
                   
                   int, add_slow_io_pending,

                   int, add_wq,

                   int, backend_fd29
                           
               ),
               TP_FIELDS(
                   ctf_integer_hex(uint64_t, add_q, add_q)
                   
                   ctf_integer_hex(uint64_t, add_slow_io_pending, add_slow_io_pending)

                   ctf_integer_hex(uint64_t, add_wq, add_wq)

                   ctf_integer(int, backend_fd, backend_fd29)
                   
               )
           )



           TRACEPOINT_EVENT(
               uv_provider,
               uv_insert_reschedule_workq_event,
               TP_ARGS(    
                   int, add_q5,
                   
                   int, add_wq5,
                   int, add_slow_io_pending5,

                   int, backend_fd30
                           
               ),
               TP_FIELDS(
                   ctf_integer_hex(uint64_t, add_q, add_q5)

                   ctf_integer_hex(uint64_t, add_wq, add_wq5)

                   ctf_integer_hex(uint64_t, add_slow_io_pending, add_slow_io_pending5)

                   ctf_integer(int, backend_fd, backend_fd30)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_fs_read_event,
               TP_ARGS(    
                   int, ptr0,
                   
                   int, ret0,

                   int, backend_fd31
                           
               ),
               TP_FIELDS(
                   ctf_integer(uint64_t, ptr, ptr0)
                   
                   ctf_integer(int, ret, ret0)

                   ctf_integer(int, backend_fd, backend_fd31)
                   
               )
           )



           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_out_iopoll_event,
               TP_ARGS(    
                   int, timeout1,
                   int, ind8,
                   int, backend_fd32
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, timeout, timeout1)
                   ctf_integer(int, index, ind8)
                   ctf_integer(int, backend_fd, backend_fd32)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_async_send_event,
               TP_ARGS(    
                   int, fd14,
                   int, buf14,
                   int, backend_fd33

                   
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, fd14)
                   ctf_integer(uint64_t, buf_add, buf14)
                   ctf_integer(int, backend_fd, backend_fd33)
                   
               )
           )

            TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_async_send_event,
               TP_ARGS(    
                   int, fd15,
                   int, buf6,
                   int, bytes6,
                   int, backend_fd34                                       
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, fd15)
                   ctf_integer(uint64_t, buf_add, buf6)
                   ctf_integer(int, bytes, bytes6)
                   ctf_integer(int, backend_fd, backend_fd34)
                   
               )
           )

             TRACEPOINT_EVENT(
               uv_provider,
               uv_async_start_event,
               TP_ARGS(    
                   int, pipfd5,
                   int, asyncio_watcher5,
                   int, backend_fd35
                                                         
               ),
               TP_FIELDS(
                   ctf_integer(int, pipe_fd, pipfd5)
                   
                   ctf_integer(int, as_io_watcher, asyncio_watcher5)
                   ctf_integer(int, backend_fd, backend_fd35)
                   
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_async_start_event,
               TP_ARGS(    
                   int, pipfd4,
                   int, asyncio_watcher4,
                   int, backend_fd36
                                                         
               ),
               TP_FIELDS(
                   ctf_integer(int, pipe_fd, pipfd4)
                   
                   ctf_integer(int, as_io_watcher, asyncio_watcher4)

                   ctf_integer(int, backend_fd, backend_fd36)
                   
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_close_asyncfd_event,
               TP_ARGS(    
                   int, afd3,
                   int, backend_fd37
                                                                       
               ),
               TP_FIELDS(
                   ctf_integer(int, async_fd, afd3)
                   ctf_integer(int, backend_fd, backend_fd37)
                                     
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_asyncio_event,
               TP_ARGS(    
                   int, iofd3,
                   int, e3,
                   int, backend_fd38

                   
                                                                       
               ),
               TP_FIELDS(
                   ctf_integer(int, io_fd, iofd3)
                   ctf_integer(int, event, e3)
                   ctf_integer(int, backend_fd, backend_fd38)
                  
                                     
               )
           )

            TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_asyncio_event,
               TP_ARGS(    
                  int, iofd2,
                  int, e2,
                  int, cb2,
                  int, backend_fdo                                                                    
               ),
               TP_FIELDS(
                  ctf_integer(int, io_fd, iofd2)
                  ctf_integer(int, event, e2)
                  ctf_integer_hex(uint64_t, cb_add, cb2)
                  ctf_integer(int, backend_fd, backend_fdo)
                                     
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_run_async_cb_event,
               TP_ARGS(    
                  int, iofd1,
                  int, e1,
                  int, cb1,
                  int, add_hq1,
                  int, backend_fdn                                                                  
               ),
               TP_FIELDS(
                  ctf_integer(int, io_fd, iofd1)
                  ctf_integer(int, event, e1)
                  ctf_integer_hex(uint64_t, cb_add, cb1)
                  ctf_integer_hex(uint64_t, hq_add, add_hq1)
                  ctf_integer(int, backend_fd, backend_fdn)
                                     
               )
           )

            TRACEPOINT_EVENT(
               uv_provider,
               uv_async_spin_event,
               TP_ARGS(    
                  int, sfd8,
                  int, pend8,
                  int, backend_fdm
                                                                                     
               ),
               TP_FIELDS(
                  ctf_integer(int, fd, sfd8)
                  ctf_integer(int, pending, pend8)
                  ctf_integer(int, backend_fd, backend_fdm)
                  
                                     
               )
           )


            TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_async_spin_event,
               TP_ARGS(    
                  int, sfd7,
                  int, pend7,
                  int, rc7,
                  int, backend_fdl
                 
                                                                                     
               ),
               TP_FIELDS(
                  ctf_integer(int, fd, sfd7)
                  ctf_integer(int, pending, pend7)
                  ctf_integer(int, rc, rc7)
                  ctf_integer(int, backend_fd, backend_fdl)
                  
                  
                                     
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_socket_event,
               TP_ARGS(    
                  int, sockfd6,
                  int, type6,
                  int, protocol6,
                  int, backend_fdk
                 
                                                                                     
               ),
               TP_FIELDS(
                  ctf_integer(int, socketfd, sockfd6)
                  ctf_integer(int, type, type6)
                  ctf_integer(int, protocol, protocol6)
                  ctf_integer(int, backend_fd, backend_fdk)
                  
                  
                                     
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_close_event,
               TP_ARGS(    
                  int, cfd5,
                  int, ret5,
                  int, backend_fdj
                                                                           
               ),
               TP_FIELDS(
                  ctf_integer(int, socketfd, cfd5)  
                  ctf_integer(int, ret, ret5)    
                  ctf_integer(int, backend_fd, backend_fdj)                                 
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_nonblock_ioctl_event,
               TP_ARGS(    
                  int, ctlfd4,
                  int, ret4,
                  int, backend_fdi
                                                                           
               ),
               TP_FIELDS(
                  ctf_integer(int, ctlfd, ctlfd4)  
                  ctf_integer(int, ret, ret4)  
                  ctf_integer(int, backend_fd, backend_fdi)                                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_nonblock_fcntl_event,
               TP_ARGS(    
                  int, cnlfd3,
                  int, ret3,
                  int, backend_fdh
                                                                           
               ),
               TP_FIELDS(
                  ctf_integer(int, ctlfd, cnlfd3)  
                  ctf_integer(int, ret, ret3)  
                  ctf_integer(int, backend_fd, backend_fdh)                                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_nonblock_fcntl_event,
               TP_ARGS(    
                  int, cnlfd2,
                  int, set2,
                  int, ret2,
                  int, backend_fdg
                                                                           
               ),
               TP_FIELDS(
                  ctf_integer(int, ctlfd, cnlfd2)  
                  ctf_integer(int, set, set2) 
                  ctf_integer(int, ret, ret2)    
                  ctf_integer(int, backend_fd, backend_fdg)                                 
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_recvmsg_event,
               TP_ARGS(    
                  int, recfd1,
                  int, backend_fdf
                  
                  
                                                                           
               ),
               TP_FIELDS(
                  ctf_integer(int, ctlfd, recfd1)  
                  ctf_integer(int, backend_fd, backend_fdf)
                  
                                                      
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_recvmsg_event,
               TP_ARGS(    
                  int, cnlfd1,
                  
                  int, ret1,

                  int, backend_fde
                                                                           
               ),
               TP_FIELDS(
                  ctf_integer(int, ctlfd, cnlfd1)  
                  
                  ctf_integer(int, ret, ret1)   

                  ctf_integer(int, backend_fd, backend_fde)                                  
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_resolvePromise_event,
               TP_ARGS(    
                   int, ptr,
                   int, cb,

                   const char*, path,
                   int, backend_fdd
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, ptr, ptr)
                   ctf_integer(uint64_t, cb_add, cb)
                   ctf_string(path, path)
                   ctf_integer(int, backend_fd, backend_fdd)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_opensync_event,
               TP_ARGS(    
                   
                   int, req_add,
                   int, path1,
                   char *, fl11,
                   int, backend_fdc
                           
               ),
               TP_FIELDS(
                   
                   ctf_integer(uint32_t, req_add, req_add)
                   ctf_string(flag, fl11)
                   ctf_integer(uint32_t, path_addr, path1)
                   ctf_integer(int, backend_fd, backend_fdc)
                   
               )
           )


           TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_opensync_event,
               TP_ARGS(    
                   int, fd20,
                   int, req_add,
                   int, path,
                   char *, fl11,
                   int, backend_fdb
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, fd20)
                   ctf_integer(uint32_t, req_add, req_add)
                   ctf_string(flag, fl11)
                   ctf_integer(uint32_t, path_addr, path)
                   ctf_integer(int, backend_fd, backend_fdb)
                   
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_RejectPromise_event,
               TP_ARGS(    
                   int, fd10,
                   int, req_add,
                   char*, fl,
                   int, backend_fda
                           
               ),
               TP_FIELDS(
                   ctf_integer(int, fd, fd10)
                   ctf_integer(uint32_t, req_add, req_add)
                   ctf_string(flag, fl)
                   ctf_integer(int, backend_fd, backend_fda)
                   
               )
           )

            TRACEPOINT_EVENT(
               uv_provider,
               uv_send_event,
               TP_ARGS(    
                  char*, id,
                  char*, channel,
                  char*, method,
                  int, backend_fdz                         
               ),
               TP_FIELDS(
                   ctf_string(id, id)
                   ctf_string(channel, channel)
                   ctf_string(method, method)
                   ctf_integer(int, backend_fd, backend_fdz)
               )
           )

           TRACEPOINT_EVENT(
               uv_provider,
               uv_io_poll_event,
               TP_ARGS(    
                   int, ipevents,
                   int, ifd,
                   int, ievents,
                   int, ibackend_fd,
                   int, iop,
                   int, infds,
                   int, pe_fd,
                   int, data_addr,
                   int, backend_fdy
               ),
               TP_FIELDS(
                   ctf_integer(int, pevents, ipevents)
                   ctf_integer(int, fd, ifd)
                   ctf_integer(int, events, ievents)
                   ctf_integer(int, backend_fd, ibackend_fd)
                   ctf_integer(int, op, iop)
                   ctf_integer(int, nfds, infds)
                   ctf_integer(int, pe_fd, pe_fd)
                   ctf_integer_hex(uint64_t, data_addr, data_addr)
                   ctf_integer(int, backend_fd, backend_fdy)
               )
           )

            TRACEPOINT_EVENT(
               uv_provider,
               uv_exit_io_poll_event,
               TP_ARGS(    
                   int, ipevents,
                   int, ifd,
                   int, ievents,
                   int, ibackend_fd,
                   int, iop,
                   int, infds,
                   int, pe_fd,
                   int, data_addr,
                   int, backend_fdx
               ),
               TP_FIELDS(
                   ctf_integer(int, pevents, ipevents)
                   ctf_integer(int, fd, ifd)
                   ctf_integer(int, events, ievents)
                   ctf_integer(int, backend_fd, ibackend_fd)
                   ctf_integer(int, op, iop)
                   ctf_integer(int, nfds, infds)
                   ctf_integer(int, pe_fd, pe_fd)
                   ctf_integer_hex(uint64_t, data_addr, data_addr)
                   ctf_integer(int, backend_fd, backend_fdx)
               )
           )           
#endif /* _UV_TP_H */

#include <lttng/tracepoint-event.h>