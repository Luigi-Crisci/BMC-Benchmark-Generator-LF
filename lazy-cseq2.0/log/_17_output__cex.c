Counterexample:

State 247
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  thread 0 (main) scheduled

State 253 file ../workspace/multithread/stack_with_while.c line 177 function main thread 0
----------------------------------------------------
  listHead=((struct LIST_NODE_S { struct LIST_NODE_S *next; __CPROVER_size_t $pad1; struct NODE_PAYLOAD_S { struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } se; __CPROVER_size_t $pad1; lfds711_pal_uint_t user_id; } payload; } *)NULL)

State 254 file ../workspace/multithread/stack_with_while.c line 179 function main thread 0
----------------------------------------------------
  ss=ss.top

State 255 file ../workspace/multithread/stack_with_while.c line 179 function main thread 0
----------------------------------------------------
  user_state=NULL

State 269 file ../workspace/multithread/../library_barrier.c line 137 function lfds711_stack_init_valid_on_current_logical_core thread 0
----------------------------------------------------
  c=((char *)NULL)

State 273 file ../workspace/multithread/../library_barrier.c line 140 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&lock)

State 278 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 282 file ../workspace/multithread/../library_barrier.c line 141 function lfds711_stack_init_valid_on_current_logical_core thread 0
----------------------------------------------------
  ss.top[0]=((struct lfds711_stack_element *)NULL)

State 283 file ../workspace/multithread/../library_barrier.c line 142 function lfds711_stack_init_valid_on_current_logical_core thread 0
----------------------------------------------------
  ss.top[1]=((struct lfds711_stack_element *)NULL)

State 284 file ../workspace/multithread/../library_barrier.c line 144 function lfds711_stack_init_valid_on_current_logical_core thread 0
----------------------------------------------------
  ss.user_state=NULL

State 285 file ../workspace/multithread/../library_barrier.c line 146 function lfds711_stack_init_valid_on_current_logical_core thread 0
----------------------------------------------------
  bs=&ss.pop_backoff.lock

State 290 file ../workspace/multithread/../library_barrier.c line 119 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  c=((char *)NULL)

State 292 file ../workspace/multithread/../library_barrier.c line 121 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  ss.pop_backoff.lock=0ull

State 293 file ../workspace/multithread/../library_barrier.c line 122 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  ss.pop_backoff.backoff_iteration_frequency_counters[0]=0ull

State 294 file ../workspace/multithread/../library_barrier.c line 123 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  ss.pop_backoff.backoff_iteration_frequency_counters[1]=0ull

State 295 file ../workspace/multithread/../library_barrier.c line 124 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  ss.pop_backoff.metric=1ull

State 296 file ../workspace/multithread/../library_barrier.c line 125 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  ss.pop_backoff.total_operations=0ull

State 298 file ../workspace/multithread/../library_barrier.c line 147 function lfds711_stack_init_valid_on_current_logical_core thread 0
----------------------------------------------------
  bs=&ss.push_backoff.lock

State 303 file ../workspace/multithread/../library_barrier.c line 119 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  c=((char *)NULL)

State 305 file ../workspace/multithread/../library_barrier.c line 121 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  ss.push_backoff.lock=0ull

State 306 file ../workspace/multithread/../library_barrier.c line 122 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  ss.push_backoff.backoff_iteration_frequency_counters[0]=0ull

State 307 file ../workspace/multithread/../library_barrier.c line 123 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  ss.push_backoff.backoff_iteration_frequency_counters[1]=0ull

State 308 file ../workspace/multithread/../library_barrier.c line 124 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  ss.push_backoff.metric=1ull

State 309 file ../workspace/multithread/../library_barrier.c line 125 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  ss.push_backoff.total_operations=0ull

State 337 file ../liblfds7.1.1/liblfds711/inc/liblfds711/lfds711_misc.h line 229 function lfds711_misc_force_store thread 0
----------------------------------------------------
  previous=&destination

State 338 file ../liblfds7.1.1/liblfds711/inc/liblfds711/lfds711_misc.h line 229 function lfds711_misc_force_store thread 0
----------------------------------------------------
  new=0ull

State 339 file ../liblfds7.1.1/liblfds711/inc/liblfds711/lfds711_misc.h line 229 function lfds711_misc_force_store thread 0
----------------------------------------------------
  memorder=0

State 343 file ../workspace/multithread/../library_barrier.c line 35 function __atomic_exchange_n thread 0
----------------------------------------------------
  previous=&destination

State 344 file ../workspace/multithread/../library_barrier.c line 35 function __atomic_exchange_n thread 0
----------------------------------------------------
  new=0ull

State 346 file ../workspace/multithread/../library_barrier.c line 42 function __VERIFIER_atomic_exchange thread 0
----------------------------------------------------
  old=0u

State 347 file ../workspace/multithread/../library_barrier.c line 43 function __VERIFIER_atomic_exchange thread 0
----------------------------------------------------
  destination=0ull

State 352 file ../workspace/multithread/../library_barrier.c line 35 function __atomic_exchange_n thread 0
----------------------------------------------------
  res=0

State 358 file ../workspace/multithread/../library_barrier.c line 152 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&lock)

State 363 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 374 file ../workspace/multithread/stack_with_while.c line 183 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_create(thread 1)

State 381 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  thread spawned

State 392 file ../workspace/multithread/stack_with_while.c line 184 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_create(thread 2)

State 399 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  thread spawned

State 657
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  thread 1 (push) scheduled

State 691 file ../workspace/multithread/stack_with_while.c line 36 function push thread 1
----------------------------------------------------
  td=&dynamic_object5.se.next

State 692 file ../workspace/multithread/stack_with_while.c line 38 function push thread 1
----------------------------------------------------
  loop=0ull

State 694 file ../workspace/multithread/stack_with_while.c line 41 function push thread 1
----------------------------------------------------
  dynamic_object5={ .se={ .next=((struct lfds711_stack_element *)NULL), .key=NULL,    .value=NULL }, .$pad1=0u,    .user_id=0ull }

State 696 file ../workspace/multithread/stack_with_while.c line 42 function push thread 1
----------------------------------------------------
  dynamic_object5={ .se={ .next=((struct lfds711_stack_element *)NULL), .key=NULL,    .value=&dynamic_object5.se.next }, .$pad1=0u,    .user_id=0ull }

State 698 file ../workspace/multithread/stack_with_while.c line 43 function push thread 1
----------------------------------------------------
  ss=ss.top

State 700 file ../workspace/multithread/stack_with_while.c line 43 function push thread 1
----------------------------------------------------
  se=&dynamic_object5.se.next

State 701 file ../workspace/multithread/../library_barrier.c line 225 function lfds711_stack_push thread 1
----------------------------------------------------
  backoff_iteration=0ull

State 716 file ../workspace/multithread/../library_barrier.c line 239 function lfds711_stack_push thread 1
----------------------------------------------------
  result=0

State 717 file ../workspace/multithread/../library_barrier.c line 240 function lfds711_stack_push thread 1
----------------------------------------------------
  i=0

State 722 file ../workspace/multithread/../library_barrier.c line 244 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&lock)

State 730 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 735 file ../workspace/multithread/../library_barrier.c line 245 function lfds711_stack_push thread 1
----------------------------------------------------
  dynamic_object5.se.next=((struct lfds711_stack_element *)NULL)

State 739 file ../workspace/multithread/../library_barrier.c line 246 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&lock)

State 747 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 756 file ../workspace/multithread/../library_barrier.c line 252 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&lock)

State 764 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 772 file ../workspace/multithread/../library_barrier.c line 253 function lfds711_stack_push thread 1
----------------------------------------------------
  top=ss.top

State 773 file ../workspace/multithread/../library_barrier.c line 253 function lfds711_stack_push thread 1
----------------------------------------------------
  oldtop=original_top

State 774 file ../workspace/multithread/../library_barrier.c line 253 function lfds711_stack_push thread 1
----------------------------------------------------
  newtop=new_top

State 777 file ../workspace/multithread/../library_barrier.c line 83 function __VERIFIER_atomic_swap_stack_top thread 1
----------------------------------------------------
  ss={ .top={ &dynamic_object5.se.next, ((struct lfds711_stack_element *)NULL) }, .user_state=NULL,    .$pad2=0u, .pop_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,    .total_operations=0ull }, .push_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,    .total_operations=0ull } }

State 782 file ../workspace/multithread/../library_barrier.c line 253 function lfds711_stack_push thread 1
----------------------------------------------------
  result=1

State 786 file ../workspace/multithread/../library_barrier.c line 254 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&lock)

State 794 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 801 file ../workspace/multithread/../library_barrier.c line 259 function lfds711_stack_push thread 1
----------------------------------------------------
  i=1

State 808 file ../workspace/multithread/stack_with_while.c line 38 function push thread 1
----------------------------------------------------
  loop=1ull

State 825
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  thread 2 (pop) scheduled

State 831 file ../workspace/multithread/stack_with_while.c line 55 function pop thread 2
----------------------------------------------------
  count=0

State 832 file ../workspace/multithread/stack_with_while.c line 57 function pop thread 2
----------------------------------------------------
  loop=0

State 834 file ../workspace/multithread/stack_with_while.c line 59 function pop thread 2
----------------------------------------------------
  temp_td=((struct test_data { struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } se; __CPROVER_size_t $pad1; lfds711_pal_uint_t user_id; } *)NULL)

State 836 file ../workspace/multithread/stack_with_while.c line 61 function pop thread 2
----------------------------------------------------
  ss=ss.top

State 838 file ../workspace/multithread/stack_with_while.c line 61 function pop thread 2
----------------------------------------------------
  se=&se

State 839 file ../workspace/multithread/../library_barrier.c line 163 function lfds711_stack_pop thread 2
----------------------------------------------------
  backoff_iteration=0ull

State 851 file ../workspace/multithread/../library_barrier.c line 176 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&lock)

State 859 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 866 file ../workspace/multithread/../library_barrier.c line 177 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&lock)

State 874 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 882 file ../workspace/multithread/../library_barrier.c line 182 function lfds711_stack_pop thread 2
----------------------------------------------------
  i=0

State 894 file ../workspace/multithread/../library_barrier.c line 196 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&lock)

State 902 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 910 file ../workspace/multithread/../library_barrier.c line 197 function lfds711_stack_pop thread 2
----------------------------------------------------
  top=ss.top

State 911 file ../workspace/multithread/../library_barrier.c line 197 function lfds711_stack_pop thread 2
----------------------------------------------------
  oldtop=original_top

State 912 file ../workspace/multithread/../library_barrier.c line 197 function lfds711_stack_pop thread 2
----------------------------------------------------
  newtop=new_top

State 915 file ../workspace/multithread/../library_barrier.c line 83 function __VERIFIER_atomic_swap_stack_top thread 2
----------------------------------------------------
  ss={ .top={ ((struct lfds711_stack_element *)NULL), ((struct lfds711_stack_element *)NULL) }, .user_state=NULL,    .$pad2=0u, .pop_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,    .total_operations=0ull }, .push_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,    .total_operations=0ull } }

State 920 file ../workspace/multithread/../library_barrier.c line 197 function lfds711_stack_pop thread 2
----------------------------------------------------
  result=1

State 924 file ../workspace/multithread/../library_barrier.c line 198 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&lock)

State 932 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 939 file ../workspace/multithread/../library_barrier.c line 207 function lfds711_stack_pop thread 2
----------------------------------------------------
  i=1

State 950 file ../workspace/multithread/../library_barrier.c line 212 function lfds711_stack_pop thread 2
----------------------------------------------------
  se=&dynamic_object5.se.next

State 953 file ../workspace/multithread/stack_with_while.c line 61 function pop thread 2
----------------------------------------------------
  res=1

State 957 file ../workspace/multithread/stack_with_while.c line 66 function pop thread 2
----------------------------------------------------
  temp_td=&dynamic_object5.se.next

State 958 file ../workspace/multithread/stack_with_while.c line 67 function pop thread 2
----------------------------------------------------
  count=1

State 959 file ../workspace/multithread/stack_with_while.c line 57 function pop thread 2
----------------------------------------------------
  loop=1

State 977
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  thread 0 (main) scheduled

State 1003 file ../workspace/multithread/stack_with_while.c line 188 function main thread 0
----------------------------------------------------
  listHead=((struct LIST_NODE_S { struct LIST_NODE_S *next; __CPROVER_size_t $pad1; struct NODE_PAYLOAD_S { struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } se; __CPROVER_size_t $pad1; lfds711_pal_uint_t user_id; } payload; } *)NULL)

State 1005 file ../workspace/multithread/stack_with_while.c line 96 function createList thread 0
----------------------------------------------------
  ss=ss.top

State 1007 file ../workspace/multithread/stack_with_while.c line 96 function createList thread 0
----------------------------------------------------
  se=&se

State 1008 file ../workspace/multithread/../library_barrier.c line 163 function lfds711_stack_pop thread 0
----------------------------------------------------
  backoff_iteration=0ull

State 1020 file ../workspace/multithread/../library_barrier.c line 176 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&lock)

State 1028 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 1035 file ../workspace/multithread/../library_barrier.c line 177 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&lock)

State 1043 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 1051 file ../workspace/multithread/../library_barrier.c line 182 function lfds711_stack_pop thread 0
----------------------------------------------------
  i=0

State 1056 file ../workspace/multithread/../library_barrier.c line 188 function lfds711_stack_pop thread 0
----------------------------------------------------
  se=((struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } *)NULL)

State 1060 file ../workspace/multithread/stack_with_while.c line 96 function createList thread 0
----------------------------------------------------
  res=0

State 1068 file ../workspace/multithread/stack_with_while.c line 188 function main thread 0
----------------------------------------------------
  listHead=((struct LIST_NODE_S { struct LIST_NODE_S *next; __CPROVER_size_t $pad1; struct NODE_PAYLOAD_S { struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } se; __CPROVER_size_t $pad1; lfds711_pal_uint_t user_id; } payload; } *)NULL)

State 1070 file ../workspace/multithread/stack_with_while.c line 189 function main thread 0
----------------------------------------------------
  filename="foo.txt"

State 1072 file ../workspace/multithread/stack_with_while.c line 189 function main thread 0
----------------------------------------------------
  listHead=((struct LIST_NODE_S { struct LIST_NODE_S *next; __CPROVER_size_t $pad1; struct NODE_PAYLOAD_S { struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } se; __CPROVER_size_t $pad1; lfds711_pal_uint_t user_id; } payload; } *)NULL)

State 1074 file ../workspace/multithread/stack_with_while.c line 112 function readFile thread 0
----------------------------------------------------
  line=((char *)NULL)

State 1075 file ../workspace/multithread/stack_with_while.c line 113 function readFile thread 0
----------------------------------------------------
  len=0u

State 1077 file ../workspace/multithread/stack_with_while.c line 116 function readFile thread 0
----------------------------------------------------
  parent=((struct LIST_NODE_S { struct LIST_NODE_S *next; __CPROVER_size_t $pad1; struct NODE_PAYLOAD_S { struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } se; __CPROVER_size_t $pad1; lfds711_pal_uint_t user_id; } payload; } *)NULL)

State 1079 file ../workspace/multithread/stack_with_while.c line 117 function readFile thread 0
----------------------------------------------------
  curNode=((struct LIST_NODE_S { struct LIST_NODE_S *next; __CPROVER_size_t $pad1; struct NODE_PAYLOAD_S { struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } se; __CPROVER_size_t $pad1; lfds711_pal_uint_t user_id; } payload; } *)NULL)

State 1080 file ../workspace/multithread/stack_with_while.c line 120 function readFile thread 0
----------------------------------------------------
  i=0

State 1082 file ../workspace/multithread/stack_with_while.c line 122 function readFile thread 0
----------------------------------------------------
  head=((struct LIST_NODE_S { struct LIST_NODE_S *next; __CPROVER_size_t $pad1; struct NODE_PAYLOAD_S { struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } se; __CPROVER_size_t $pad1; lfds711_pal_uint_t user_id; } payload; } *)NULL)

State 1084 file ../workspace/multithread/../list.c line 76 function GetListSize thread 0
----------------------------------------------------
  cur=((struct LIST_NODE_S { struct LIST_NODE_S *next; __CPROVER_size_t $pad1; struct NODE_PAYLOAD_S { struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } se; __CPROVER_size_t $pad1; lfds711_pal_uint_t user_id; } payload; } *)NULL)

State 1085 file ../workspace/multithread/../list.c line 77 function GetListSize thread 0
----------------------------------------------------
  nodeCnt=0

State 1092 file ../workspace/multithread/stack_with_while.c line 122 function readFile thread 0
----------------------------------------------------
  size=0

State 1096 file ../workspace/multithread/stack_with_while.c line 127 function readFile thread 0
----------------------------------------------------
  filename="foo.txt"

State 1097 file ../workspace/multithread/stack_with_while.c line 127 function readFile thread 0
----------------------------------------------------
  mode="r"

State 1108 file ../workspace/multithread/stack_with_while.c line 127 function readFile thread 0
----------------------------------------------------
  fp=((struct _IO_FILE { signed int _flags; char *_IO_read_ptr; char *_IO_read_end; char *_IO_read_base; char *_IO_write_base; char *_IO_write_ptr; char *_IO_write_end; char *_IO_buf_base; char *_IO_buf_end; char *_IO_save_base; char *_IO_backup_base; char *_IO_save_end; struct _IO_marker *_markers; struct _IO_FILE *_chain; signed int _fileno; signed int _flags2; __off_t _old_offset; unsigned short int _cur_column; char _vtable_offset; char _shortbuf[1]; const void *_lock; __off_t _offset; struct _IO_codecvt *_codecvt; struct _IO_wide_data *_wide_data; struct _IO_FILE *_freeres_list; const void *_freeres_buf; __CPROVER_size_t __pad5; signed int _mode; char _unused2[(signed int)(sizeof(signed int) * 10u) /*40*/ ]; } *)NULL)

State 1113 file ../workspace/multithread/stack_with_while.c line 130 function readFile thread 0
----------------------------------------------------
  filename="foo.txt"

State 1115 file ../workspace/multithread/stack_with_while.c line 130 function readFile thread 0
----------------------------------------------------
  listHead=((struct LIST_NODE_S { struct LIST_NODE_S *next; __CPROVER_size_t $pad1; struct NODE_PAYLOAD_S { struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } se; __CPROVER_size_t $pad1; lfds711_pal_uint_t user_id; } payload; } *)NULL)

State 1120 file ../workspace/multithread/stack_with_while.c line 77 function writeIntofile thread 0
----------------------------------------------------
  filefd=-2146615296

State 1124 file ../workspace/multithread/stack_with_while.c line 78 function writeIntofile thread 0
----------------------------------------------------
  saved=-100876287

State 1127 file ../workspace/multithread/stack_with_while.c line 79 function writeIntofile thread 0
----------------------------------------------------
  fildes=1

State 1136 file ../workspace/multithread/stack_with_while.c line 81 function writeIntofile thread 0
----------------------------------------------------
  head=((struct LIST_NODE_S { struct LIST_NODE_S *next; __CPROVER_size_t $pad1; struct NODE_PAYLOAD_S { struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } se; __CPROVER_size_t $pad1; lfds711_pal_uint_t user_id; } payload; } *)NULL)

State 1137 file ../workspace/multithread/../list.c line 54 function PrintListPayloads thread 0
----------------------------------------------------
  rCode=0

State 1139 file ../workspace/multithread/../list.c line 55 function PrintListPayloads thread 0
----------------------------------------------------
  cur=((struct LIST_NODE_S { struct LIST_NODE_S *next; __CPROVER_size_t $pad1; struct NODE_PAYLOAD_S { struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } se; __CPROVER_size_t $pad1; lfds711_pal_uint_t user_id; } payload; } *)NULL)

State 1149 file ../workspace/multithread/stack_with_while.c line 82 function writeIntofile thread 0
----------------------------------------------------
  fildes=-2146615296

State 1156 file ../workspace/multithread/stack_with_while.c line 83 function writeIntofile thread 0
----------------------------------------------------
  stream=((struct _IO_FILE { signed int _flags; char *_IO_read_ptr; char *_IO_read_end; char *_IO_read_base; char *_IO_write_base; char *_IO_write_ptr; char *_IO_write_end; char *_IO_buf_base; char *_IO_buf_end; char *_IO_save_base; char *_IO_backup_base; char *_IO_save_end; struct _IO_marker *_markers; struct _IO_FILE *_chain; signed int _fileno; signed int _flags2; __off_t _old_offset; unsigned short int _cur_column; char _vtable_offset; char _shortbuf[1]; const void *_lock; __off_t _offset; struct _IO_codecvt *_codecvt; struct _IO_wide_data *_wide_data; struct _IO_FILE *_freeres_list; const void *_freeres_buf; __CPROVER_size_t __pad5; signed int _mode; char _unused2[(signed int)(sizeof(signed int) * 10u) /*40*/ ]; } *)NULL)

State 1166 file ../workspace/multithread/stack_with_while.c line 85 function writeIntofile thread 0
----------------------------------------------------
  fildes=-100876287

Violated property:
  file ../workspace/multithread/stack_with_while.c line 131
  assertion 0
  0 != 0

VERIFICATION FAILED

../workspace/multithread/stack_with_while.c, [91mUNSAFE[0m, 42.97, 346.86MB