Counterexample:

State 219
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  thread 0 (main) scheduled

State 232 file ../workspace/multithread/../inteface/stack/stack_interface.c line 17 function init thread 0
----------------------------------------------------
  ss=mystack.top

State 233 file ../workspace/multithread/../inteface/stack/stack_interface.c line 17 function init thread 0
----------------------------------------------------
  user_state=NULL

State 247 file ../workspace/multithread/../inteface/stack/stack_methods.c line 54 function lfds711_stack_init_valid_on_current_logical_core thread 0
----------------------------------------------------
  c=((char *)NULL)

State 251 file ../workspace/multithread/../inteface/stack/stack_methods.c line 57 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&library_lock)

State 256 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 260 file ../workspace/multithread/../inteface/stack/stack_methods.c line 58 function lfds711_stack_init_valid_on_current_logical_core thread 0
----------------------------------------------------
  mystack.top[0]=((struct lfds711_stack_element *)NULL)

State 261 file ../workspace/multithread/../inteface/stack/stack_methods.c line 59 function lfds711_stack_init_valid_on_current_logical_core thread 0
----------------------------------------------------
  mystack.top[1]=((struct lfds711_stack_element *)NULL)

State 262 file ../workspace/multithread/../inteface/stack/stack_methods.c line 61 function lfds711_stack_init_valid_on_current_logical_core thread 0
----------------------------------------------------
  mystack.user_state=NULL

State 263 file ../workspace/multithread/../inteface/stack/stack_methods.c line 63 function lfds711_stack_init_valid_on_current_logical_core thread 0
----------------------------------------------------
  bs=&mystack.pop_backoff.lock

State 268 file ../workspace/multithread/../inteface/stack/stack_methods.c line 37 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  c=((char *)NULL)

State 270 file ../workspace/multithread/../inteface/stack/stack_methods.c line 39 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  mystack.pop_backoff.lock=0ull

State 271 file ../workspace/multithread/../inteface/stack/stack_methods.c line 40 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  mystack.pop_backoff.backoff_iteration_frequency_counters[0]=0ull

State 272 file ../workspace/multithread/../inteface/stack/stack_methods.c line 41 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  mystack.pop_backoff.backoff_iteration_frequency_counters[1]=0ull

State 273 file ../workspace/multithread/../inteface/stack/stack_methods.c line 42 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  mystack.pop_backoff.metric=1ull

State 274 file ../workspace/multithread/../inteface/stack/stack_methods.c line 43 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  mystack.pop_backoff.total_operations=0ull

State 276 file ../workspace/multithread/../inteface/stack/stack_methods.c line 64 function lfds711_stack_init_valid_on_current_logical_core thread 0
----------------------------------------------------
  bs=&mystack.push_backoff.lock

State 281 file ../workspace/multithread/../inteface/stack/stack_methods.c line 37 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  c=((char *)NULL)

State 283 file ../workspace/multithread/../inteface/stack/stack_methods.c line 39 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  mystack.push_backoff.lock=0ull

State 284 file ../workspace/multithread/../inteface/stack/stack_methods.c line 40 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  mystack.push_backoff.backoff_iteration_frequency_counters[0]=0ull

State 285 file ../workspace/multithread/../inteface/stack/stack_methods.c line 41 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  mystack.push_backoff.backoff_iteration_frequency_counters[1]=0ull

State 286 file ../workspace/multithread/../inteface/stack/stack_methods.c line 42 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  mystack.push_backoff.metric=1ull

State 287 file ../workspace/multithread/../inteface/stack/stack_methods.c line 43 function lfds711_misc_internal_backoff_init thread 0
----------------------------------------------------
  mystack.push_backoff.total_operations=0ull

State 315 file ../liblfds7.1.1/liblfds711/inc/liblfds711/lfds711_misc.h line 229 function lfds711_misc_force_store thread 0
----------------------------------------------------
  previous=&destination

State 316 file ../liblfds7.1.1/liblfds711/inc/liblfds711/lfds711_misc.h line 229 function lfds711_misc_force_store thread 0
----------------------------------------------------
  new=0ull

State 317 file ../liblfds7.1.1/liblfds711/inc/liblfds711/lfds711_misc.h line 229 function lfds711_misc_force_store thread 0
----------------------------------------------------
  memorder=0

State 321 file ../workspace/multithread/../inteface/stack/../../placeholder_library.c line 35 function __atomic_exchange_n thread 0
----------------------------------------------------
  previous=&destination

State 322 file ../workspace/multithread/../inteface/stack/../../placeholder_library.c line 35 function __atomic_exchange_n thread 0
----------------------------------------------------
  new=0ull

State 324 file ../workspace/multithread/../inteface/stack/../../placeholder_library.c line 28 function __VERIFIER_atomic_exchange thread 0
----------------------------------------------------
  old=0u

State 325 file ../workspace/multithread/../inteface/stack/../../placeholder_library.c line 29 function __VERIFIER_atomic_exchange thread 0
----------------------------------------------------
  destination=0ull

State 330 file ../workspace/multithread/../inteface/stack/../../placeholder_library.c line 35 function __atomic_exchange_n thread 0
----------------------------------------------------
  res=0

State 336 file ../workspace/multithread/../inteface/stack/stack_methods.c line 69 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&library_lock)

State 341 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 348 file ../workspace/multithread/generalized.c line 48 function main thread 0
----------------------------------------------------
  ss=mystack.top

State 355 file ../workspace/multithread/generalized.c line 51 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_create(thread 1)

State 362 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  thread spawned

State 373 file ../workspace/multithread/generalized.c line 57 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_create(thread 2)

State 380 thread 0
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  thread spawned

State 398
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  thread 1 (push) scheduled

State 404 file ../workspace/multithread/generalized.c line 23 function push thread 1
----------------------------------------------------
  loop=0ull

State 410 file ../workspace/multithread/generalized.c line 26 function push thread 1
----------------------------------------------------
  s=mystack.top

State 411 file ../workspace/multithread/generalized.c line 26 function push thread 1
----------------------------------------------------
  id=0ull

State 441 file ../workspace/multithread/../inteface/stack/stack_interface.c line 23 function insert thread 1
----------------------------------------------------
  td=&dynamic_object2.se.next

State 443 file ../workspace/multithread/../inteface/stack/stack_interface.c line 24 function insert thread 1
----------------------------------------------------
  dynamic_object2.user_id=0ull

State 445 file ../workspace/multithread/../inteface/stack/stack_interface.c line 25 function insert thread 1
----------------------------------------------------
  dynamic_object2.se.value=&dynamic_object2.se.next

State 447 file ../workspace/multithread/../inteface/stack/stack_interface.c line 26 function insert thread 1
----------------------------------------------------
  ss=mystack.top

State 449 file ../workspace/multithread/../inteface/stack/stack_interface.c line 26 function insert thread 1
----------------------------------------------------
  se=&dynamic_object2.se.next

State 450 file ../workspace/multithread/../inteface/stack/stack_methods.c line 142 function lfds711_stack_push thread 1
----------------------------------------------------
  backoff_iteration=0ull

State 465 file ../workspace/multithread/../inteface/stack/stack_methods.c line 156 function lfds711_stack_push thread 1
----------------------------------------------------
  result=0

State 466 file ../workspace/multithread/../inteface/stack/stack_methods.c line 157 function lfds711_stack_push thread 1
----------------------------------------------------
  i=0

State 471 file ../workspace/multithread/../inteface/stack/stack_methods.c line 162 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&library_lock)

State 479 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 484 file ../workspace/multithread/../inteface/stack/stack_methods.c line 164 function lfds711_stack_push thread 1
----------------------------------------------------
  dynamic_object2.se.next=((struct lfds711_stack_element *)NULL)

State 488 file ../workspace/multithread/../inteface/stack/stack_methods.c line 165 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&library_lock)

State 496 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 505 file ../workspace/multithread/../inteface/stack/stack_methods.c line 171 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&library_lock)

State 513 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 521 file ../workspace/multithread/../inteface/stack/stack_methods.c line 172 function lfds711_stack_push thread 1
----------------------------------------------------
  top=mystack.top

State 522 file ../workspace/multithread/../inteface/stack/stack_methods.c line 172 function lfds711_stack_push thread 1
----------------------------------------------------
  oldtop=original_top

State 523 file ../workspace/multithread/../inteface/stack/stack_methods.c line 172 function lfds711_stack_push thread 1
----------------------------------------------------
  newtop=new_top

State 526 file ../workspace/multithread/../inteface/stack/stack_methods.c line 22 function __VERIFIER_atomic_swap_stack_top thread 1
----------------------------------------------------
  mystack={ .top={ &dynamic_object2.se.next, ((struct lfds711_stack_element *)NULL) }, .user_state=NULL,    .$pad2=0u, .pop_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,    .total_operations=0ull }, .push_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,    .total_operations=0ull } }

State 531 file ../workspace/multithread/../inteface/stack/stack_methods.c line 172 function lfds711_stack_push thread 1
----------------------------------------------------
  result=1

State 535 file ../workspace/multithread/../inteface/stack/stack_methods.c line 173 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&library_lock)

State 543 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 550 file ../workspace/multithread/../inteface/stack/stack_methods.c line 178 function lfds711_stack_push thread 1
----------------------------------------------------
  i=1

State 562 file ../workspace/multithread/generalized.c line 23 function push thread 1
----------------------------------------------------
  loop=1ull

State 568 file ../workspace/multithread/generalized.c line 26 function push thread 1
----------------------------------------------------
  s=mystack.top

State 569 file ../workspace/multithread/generalized.c line 26 function push thread 1
----------------------------------------------------
  id=1ull

State 599 file ../workspace/multithread/../inteface/stack/stack_interface.c line 23 function insert thread 1
----------------------------------------------------
  td=&dynamic_object3.se.next

State 601 file ../workspace/multithread/../inteface/stack/stack_interface.c line 24 function insert thread 1
----------------------------------------------------
  dynamic_object3.user_id=1ull

State 603 file ../workspace/multithread/../inteface/stack/stack_interface.c line 25 function insert thread 1
----------------------------------------------------
  dynamic_object3.se.value=&dynamic_object3.se.next

State 605 file ../workspace/multithread/../inteface/stack/stack_interface.c line 26 function insert thread 1
----------------------------------------------------
  ss=mystack.top

State 607 file ../workspace/multithread/../inteface/stack/stack_interface.c line 26 function insert thread 1
----------------------------------------------------
  se=&dynamic_object3.se.next

State 608 file ../workspace/multithread/../inteface/stack/stack_methods.c line 142 function lfds711_stack_push thread 1
----------------------------------------------------
  backoff_iteration=0ull

State 623 file ../workspace/multithread/../inteface/stack/stack_methods.c line 156 function lfds711_stack_push thread 1
----------------------------------------------------
  result=0

State 624 file ../workspace/multithread/../inteface/stack/stack_methods.c line 157 function lfds711_stack_push thread 1
----------------------------------------------------
  i=0

State 629 file ../workspace/multithread/../inteface/stack/stack_methods.c line 162 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&library_lock)

State 637 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 642 file ../workspace/multithread/../inteface/stack/stack_methods.c line 164 function lfds711_stack_push thread 1
----------------------------------------------------
  dynamic_object3.se.next=&dynamic_object2.se.next

State 646 file ../workspace/multithread/../inteface/stack/stack_methods.c line 165 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&library_lock)

State 654 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 663 file ../workspace/multithread/../inteface/stack/stack_methods.c line 171 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&library_lock)

State 671 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 679 file ../workspace/multithread/../inteface/stack/stack_methods.c line 172 function lfds711_stack_push thread 1
----------------------------------------------------
  top=mystack.top

State 680 file ../workspace/multithread/../inteface/stack/stack_methods.c line 172 function lfds711_stack_push thread 1
----------------------------------------------------
  oldtop=original_top

State 681 file ../workspace/multithread/../inteface/stack/stack_methods.c line 172 function lfds711_stack_push thread 1
----------------------------------------------------
  newtop=new_top

State 684 file ../workspace/multithread/../inteface/stack/stack_methods.c line 22 function __VERIFIER_atomic_swap_stack_top thread 1
----------------------------------------------------
  mystack={ .top={ &dynamic_object3.se.next, ((struct lfds711_stack_element *)NULL) }, .user_state=NULL,    .$pad2=0u, .pop_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,    .total_operations=0ull }, .push_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,    .total_operations=0ull } }

State 689 file ../workspace/multithread/../inteface/stack/stack_methods.c line 172 function lfds711_stack_push thread 1
----------------------------------------------------
  result=1

State 693 file ../workspace/multithread/../inteface/stack/stack_methods.c line 173 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&library_lock)

State 701 thread 1
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 708 file ../workspace/multithread/../inteface/stack/stack_methods.c line 178 function lfds711_stack_push thread 1
----------------------------------------------------
  i=1

State 720 file ../workspace/multithread/generalized.c line 23 function push thread 1
----------------------------------------------------
  loop=2ull

State 737
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  thread 2 (pop) scheduled

State 744 file ../workspace/multithread/generalized.c line 34 function pop thread 2
----------------------------------------------------
  count=0

State 745 file ../workspace/multithread/generalized.c line 36 function pop thread 2
----------------------------------------------------
  loop=0

State 753 file ../workspace/multithread/../inteface/stack/stack_interface.c line 33 function delete thread 2
----------------------------------------------------
  ss=mystack.top

State 755 file ../workspace/multithread/../inteface/stack/stack_interface.c line 33 function delete thread 2
----------------------------------------------------
  se=&se

State 756 file ../workspace/multithread/../inteface/stack/stack_methods.c line 80 function lfds711_stack_pop thread 2
----------------------------------------------------
  backoff_iteration=0ull

State 768 file ../workspace/multithread/../inteface/stack/stack_methods.c line 93 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&library_lock)

State 776 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 783 file ../workspace/multithread/../inteface/stack/stack_methods.c line 94 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&library_lock)

State 791 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 799 file ../workspace/multithread/../inteface/stack/stack_methods.c line 99 function lfds711_stack_pop thread 2
----------------------------------------------------
  i=0

State 811 file ../workspace/multithread/../inteface/stack/stack_methods.c line 113 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&library_lock)

State 819 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 827 file ../workspace/multithread/../inteface/stack/stack_methods.c line 114 function lfds711_stack_pop thread 2
----------------------------------------------------
  top=mystack.top

State 828 file ../workspace/multithread/../inteface/stack/stack_methods.c line 114 function lfds711_stack_pop thread 2
----------------------------------------------------
  oldtop=original_top

State 829 file ../workspace/multithread/../inteface/stack/stack_methods.c line 114 function lfds711_stack_pop thread 2
----------------------------------------------------
  newtop=new_top

State 832 file ../workspace/multithread/../inteface/stack/stack_methods.c line 22 function __VERIFIER_atomic_swap_stack_top thread 2
----------------------------------------------------
  mystack={ .top={ &dynamic_object2.se.next, ((struct lfds711_stack_element *)NULL) }, .user_state=NULL,    .$pad2=0u, .pop_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,    .total_operations=0ull }, .push_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,    .total_operations=0ull } }

State 837 file ../workspace/multithread/../inteface/stack/stack_methods.c line 114 function lfds711_stack_pop thread 2
----------------------------------------------------
  result=1

State 841 file ../workspace/multithread/../inteface/stack/stack_methods.c line 115 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&library_lock)

State 849 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 856 file ../workspace/multithread/../inteface/stack/stack_methods.c line 124 function lfds711_stack_pop thread 2
----------------------------------------------------
  i=1

State 867 file ../workspace/multithread/../inteface/stack/stack_methods.c line 129 function lfds711_stack_pop thread 2
----------------------------------------------------
  se=&dynamic_object3.se.next

State 870 file ../workspace/multithread/../inteface/stack/stack_interface.c line 33 function delete thread 2
----------------------------------------------------
  res=1

State 874 file ../workspace/multithread/../inteface/stack/stack_interface.c line 38 function delete thread 2
----------------------------------------------------
  temp_td=&dynamic_object3.se.next

State 876 file ../workspace/multithread/../inteface/stack/stack_interface.c line 39 function delete thread 2
----------------------------------------------------
  id_popped=0

State 885 file ../workspace/multithread/generalized.c line 36 function pop thread 2
----------------------------------------------------
  loop=1

State 893 file ../workspace/multithread/../inteface/stack/stack_interface.c line 33 function delete thread 2
----------------------------------------------------
  ss=mystack.top

State 895 file ../workspace/multithread/../inteface/stack/stack_interface.c line 33 function delete thread 2
----------------------------------------------------
  se=&se

State 896 file ../workspace/multithread/../inteface/stack/stack_methods.c line 80 function lfds711_stack_pop thread 2
----------------------------------------------------
  backoff_iteration=0ull

State 908 file ../workspace/multithread/../inteface/stack/stack_methods.c line 93 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&library_lock)

State 916 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 923 file ../workspace/multithread/../inteface/stack/stack_methods.c line 94 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&library_lock)

State 931 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 939 file ../workspace/multithread/../inteface/stack/stack_methods.c line 99 function lfds711_stack_pop thread 2
----------------------------------------------------
  i=0

State 951 file ../workspace/multithread/../inteface/stack/stack_methods.c line 113 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_lock(&library_lock)

State 959 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock acquired

State 967 file ../workspace/multithread/../inteface/stack/stack_methods.c line 114 function lfds711_stack_pop thread 2
----------------------------------------------------
  top=mystack.top

State 968 file ../workspace/multithread/../inteface/stack/stack_methods.c line 114 function lfds711_stack_pop thread 2
----------------------------------------------------
  oldtop=original_top

State 969 file ../workspace/multithread/../inteface/stack/stack_methods.c line 114 function lfds711_stack_pop thread 2
----------------------------------------------------
  newtop=new_top

State 972 file ../workspace/multithread/../inteface/stack/stack_methods.c line 22 function __VERIFIER_atomic_swap_stack_top thread 2
----------------------------------------------------
  mystack={ .top={ ((struct lfds711_stack_element *)NULL), ((struct lfds711_stack_element *)NULL) }, .user_state=NULL,    .$pad2=0u, .pop_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,    .total_operations=0ull }, .push_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,    .total_operations=0ull } }

State 977 file ../workspace/multithread/../inteface/stack/stack_methods.c line 114 function lfds711_stack_pop thread 2
----------------------------------------------------
  result=1

State 981 file ../workspace/multithread/../inteface/stack/stack_methods.c line 115 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  pthread_mutex_unlock(&library_lock)

State 989 thread 2
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  lock released

State 996 file ../workspace/multithread/../inteface/stack/stack_methods.c line 124 function lfds711_stack_pop thread 2
----------------------------------------------------
  i=1

State 1007 file ../workspace/multithread/../inteface/stack/stack_methods.c line 129 function lfds711_stack_pop thread 2
----------------------------------------------------
  se=&dynamic_object2.se.next

State 1010 file ../workspace/multithread/../inteface/stack/stack_interface.c line 33 function delete thread 2
----------------------------------------------------
  res=1

State 1014 file ../workspace/multithread/../inteface/stack/stack_interface.c line 38 function delete thread 2
----------------------------------------------------
  temp_td=&dynamic_object2.se.next

State 1016 file ../workspace/multithread/../inteface/stack/stack_interface.c line 39 function delete thread 2
----------------------------------------------------
  id_popped=0

State 1025 file ../workspace/multithread/generalized.c line 36 function pop thread 2
----------------------------------------------------
  loop=2

State 1042
- - - - - - - - - - - - - - - - - - - - - - - - - - 
  thread 0 (main) scheduled

Violated property:
  file ../workspace/multithread/generalized.c line 75
  assertion 0
  0 != 0

VERIFICATION FAILED

../workspace/multithread/generalized.c, [91mUNSAFE[0m, 7.69, 90.86MB