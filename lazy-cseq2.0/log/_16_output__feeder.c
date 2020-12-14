<<<<<<< HEAD
<<<<<<< HEAD
CBMC version 5.19.0 (cbmc-5.19.0) 64-bit x86_64 linux
Parsing ../workspace/multithread/_cs_generalized.c
Converting
<<<<<<< HEAD
Type-checking _cs_stack_with_while
<<<<<<< HEAD
=======
=======
Type-checking _cs_generalized
>>>>>>> origin/main
=======
CBMC version 5.19.0 (cbmc-5.19.0) 64-bit x86_64 linux
Parsing ../workspace/multithread/_cs_generalized.c
Converting
Type-checking _cs_generalized
>>>>>>> origin/main
Generating GOTO Program
Adding CPROVER library (x86_64)
Removal of function pointers and virtual functions
Generic Property Instrumentation
Running with 8 object bits, 24 offset bits (default)
Starting Bounded Model Checking
<<<<<<< HEAD
Runtime Symex: 4.60591s
size of program expression: 18522 steps
simple slicing removed 18 assignments
Generated 510 VCC(s), 502 remaining after simplification
Runtime Postprocess Equation: 0.0022037s
Passing problem to propositional reduction
converting SSA
Runtime Convert SSA: 0.250964s
Running propositional reduction
Post-processing
Runtime Post-process: 3.47e-05s
Solving with MiniSAT 2.2.1 with simplifier
136711 variables, 508455 clauses
SAT checker: instance is SATISFIABLE
Runtime Solver: 16.046s
Runtime decision procedure: 16.2987s
=======
Runtime Symex: 1.93669s
size of program expression: 17668 steps
simple slicing removed 91 assignments
Generated 491 VCC(s), 479 remaining after simplification
Runtime Postprocess Equation: 0.0020962s
Passing problem to propositional reduction
converting SSA
Runtime Convert SSA: 0.226974s
Running propositional reduction
Post-processing
Runtime Post-process: 3.45e-05s
Solving with MiniSAT 2.2.1 with simplifier
132095 variables, 483974 clauses
SAT checker: instance is SATISFIABLE
Runtime Solver: 5.24829s
Runtime decision procedure: 5.47722s
>>>>>>> origin/main
Building error trace
Counterexample:

State 26 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 58 thread 0
----------------------------------------------------
  __cs_active_thread[0]=1 (1)

State 27 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 58 thread 0
----------------------------------------------------
  __cs_active_thread[1]=0 (0)

State 28 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 58 thread 0
----------------------------------------------------
  __cs_active_thread[2]=0 (0)

State 31 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 59 thread 0
----------------------------------------------------
<<<<<<< HEAD
  __cs_pc[0]=0 (00000000 0)

State 32 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 59 thread 0
----------------------------------------------------
  __cs_pc[1]=0 (00000000 0)

State 33 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 59 thread 0
----------------------------------------------------
  __cs_pc[2]=0 (00000000 0)

State 35 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 60 thread 0
----------------------------------------------------
  __cs_pc_cs[0]=0 (00000000 00)

State 36 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 60 thread 0
----------------------------------------------------
  __cs_pc_cs[1]=0 (00000000 00)

State 37 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 60 thread 0
----------------------------------------------------
  __cs_pc_cs[2]=0 (00000000 00)
=======
  __cs_pc[0]=0 (0000000)

State 32 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 59 thread 0
----------------------------------------------------
  __cs_pc[1]=0 (0000000)

State 33 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 59 thread 0
----------------------------------------------------
  __cs_pc[2]=0 (0000000)

State 35 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 60 thread 0
----------------------------------------------------
  __cs_pc_cs[0]=0 (00000000)

State 36 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 60 thread 0
----------------------------------------------------
  __cs_pc_cs[1]=0 (00000000)

State 37 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 60 thread 0
----------------------------------------------------
  __cs_pc_cs[2]=0 (00000000)
>>>>>>> origin/main

State 39 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 83 thread 0
----------------------------------------------------
  __cs_thread_joinargs[0]=NULL (00000000 00000000 00000000 00000000)

State 40 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 83 thread 0
----------------------------------------------------
  __cs_thread_joinargs[1]=NULL (00000000 00000000 00000000 00000000)

State 41 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 83 thread 0
----------------------------------------------------
  __cs_thread_joinargs[2]=NULL (00000000 00000000 00000000 00000000)

State 43 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 62 thread 0
----------------------------------------------------
<<<<<<< HEAD
  __cs_thread_lines[0]=4 (00000010 0)

State 44 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 62 thread 0
----------------------------------------------------
  __cs_thread_lines[1]=302 (10010111 0)

State 45 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 62 thread 0
----------------------------------------------------
  __cs_thread_lines[2]=387 (11000001 1)
=======
  __cs_thread_lines[0]=126 (1111110)

State 44 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 62 thread 0
----------------------------------------------------
  __cs_thread_lines[1]=61 (0111101)

State 45 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 62 thread 0
----------------------------------------------------
  __cs_thread_lines[2]=78 (1001110)
>>>>>>> origin/main

State 47 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 82 thread 0
----------------------------------------------------
  __cs_threadargs[0]=NULL (00000000 00000000 00000000 00000000)

State 48 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 82 thread 0
----------------------------------------------------
  __cs_threadargs[1]=NULL (00000000 00000000 00000000 00000000)

State 49 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 82 thread 0
----------------------------------------------------
  __cs_threadargs[2]=NULL (00000000 00000000 00000000 00000000)

<<<<<<< HEAD
State 81 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 739 thread 0
----------------------------------------------------
  mystack.top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 82 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 739 thread 0
----------------------------------------------------
  mystack.top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 87 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 739 thread 0
----------------------------------------------------
  mystack.pop_backoff.backoff_iteration_frequency_counters[0]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 88 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 739 thread 0
----------------------------------------------------
  mystack.pop_backoff.backoff_iteration_frequency_counters[1]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 93 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 739 thread 0
----------------------------------------------------
  mystack.push_backoff.backoff_iteration_frequency_counters[0]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 94 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 739 thread 0
----------------------------------------------------
  mystack.push_backoff.backoff_iteration_frequency_counters[1]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 129 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 3629 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 130 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 3629 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 132 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 3630 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 133 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 3630 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 179 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 4399 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 180 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 4399 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 182 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 4400 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 183 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 4400 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 229 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 5169 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 230 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 5169 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 232 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 5170 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 233 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 5170 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 279 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 5939 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 280 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 5939 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 282 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 5940 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 283 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 5940 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 329 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 6709 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 330 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 6709 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 332 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 6710 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 333 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 6710 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 372 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 791 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 373 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 791 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 375 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 792 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 376 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 792 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 407 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 1355 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 408 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 1355 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 410 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 1356 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 411 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 1356 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 442 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 1919 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 443 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 1919 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 445 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 1920 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 446 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 1920 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 477 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 2483 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 478 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 2483 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 480 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 2484 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 481 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 2484 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 512 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 3047 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 513 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 3047 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 515 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 3048 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 516 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 3048 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 532 file ../workspace/multithread/_cs_generalized.c function main line 7717 thread 0
----------------------------------------------------
  __cs_tmp_t0_r0=2 (010)

State 533 file ../workspace/multithread/_cs_generalized.c function main line 7718 thread 0
----------------------------------------------------
  __cs_pc_cs[0]=2 (00000000 10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7719 function main
  (signed int)__cs_pc_cs[0] > 0

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7720 function main
  (signed int)__cs_pc_cs[0] <= 4

State 541 file ../workspace/multithread/_cs_generalized.c function main_thread line 7461 thread 0
----------------------------------------------------
  __cs_m=&lock (00001101 00000000 00000000 00000000)

State 542 file ../workspace/multithread/_cs_generalized.c function main_thread line 7461 thread 0
----------------------------------------------------
  __cs_val=0 (00000000 00000000 00000000 00000000)

State 543 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_init line 112 thread 0
----------------------------------------------------
  lock=-1 (11111111 11111111 11111111 11111111)

State 546 file ../workspace/multithread/_cs_generalized.c function main_thread line 7466 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_init_valid_on_current_logical_core_ss=&mystack (00000011 00000000 00000000 00000000)

State 547 file ../workspace/multithread/_cs_generalized.c function main_thread line 7468 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state=NULL (00000000 00000000 00000000 00000000)

State 550 file ../workspace/multithread/_cs_generalized.c function main_thread line 7469 thread 0
----------------------------------------------------
  __cs_m=&library_lock (00001110 00000000 00000000 00000000)

State 551 file ../workspace/multithread/_cs_generalized.c function main_thread line 7469 thread 0
----------------------------------------------------
  __cs_val=0 (00000000 00000000 00000000 00000000)

State 552 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_init line 112 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 555 file ../workspace/multithread/_cs_generalized.c function main_thread line 7473 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3=FALSE (00000000)

State 557 file ../workspace/multithread/_cs_generalized.c function main_thread line 7488 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4=FALSE (00000000)

State 559 file ../workspace/multithread/_cs_generalized.c function main_thread line 7503 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5=TRUE (00000001)

State 561 file ../workspace/multithread/_cs_generalized.c function main_thread line 7507 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_init_valid_on_current_logical_core_c=((char *)NULL) (00000000 00000000 00000000 00000000)

State 565 file ../workspace/multithread/_cs_generalized.c function main_thread line 7515 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 566 file ../workspace/multithread/_cs_generalized.c function main_thread line 7515 thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)

State 567 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=1 (00000000 00000000 00000000 00000001)

State 570 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 574 file ../workspace/multithread/_cs_generalized.c function main_thread line 7516 thread 0
----------------------------------------------------
  mystack.top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 575 file ../workspace/multithread/_cs_generalized.c function main_thread line 7517 thread 0
----------------------------------------------------
  mystack.top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 576 file ../workspace/multithread/_cs_generalized.c function main_thread line 7518 thread 0
----------------------------------------------------
  mystack.user_state=NULL (00000000 00000000 00000000 00000000)

State 577 file ../workspace/multithread/_cs_generalized.c function main_thread line 7521 thread 0
----------------------------------------------------
  __cs_param_lfds711_misc_internal_backoff_init_bs=&mystack.pop_backoff (00000011 00000000 00000000 00010000)

State 578 file ../workspace/multithread/_cs_generalized.c function main_thread line 7525 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1=FALSE (00000000)

State 580 file ../workspace/multithread/_cs_generalized.c function main_thread line 7540 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2=TRUE (00000001)

State 582 file ../workspace/multithread/_cs_generalized.c function main_thread line 7544 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init_c=((char *)NULL) (00000000 00000000 00000000 00000000)

State 584 file ../workspace/multithread/_cs_generalized.c function main_thread line 7552 thread 0
----------------------------------------------------
  mystack.pop_backoff.lock=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 585 file ../workspace/multithread/_cs_generalized.c function main_thread line 7553 thread 0
----------------------------------------------------
  mystack.pop_backoff.backoff_iteration_frequency_counters[0]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 586 file ../workspace/multithread/_cs_generalized.c function main_thread line 7554 thread 0
----------------------------------------------------
  mystack.pop_backoff.backoff_iteration_frequency_counters[1]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 587 file ../workspace/multithread/_cs_generalized.c function main_thread line 7555 thread 0
----------------------------------------------------
  mystack.pop_backoff.metric=1ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001)

State 588 file ../workspace/multithread/_cs_generalized.c function main_thread line 7556 thread 0
=======
State 109 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 2233 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 110 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 2233 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 112 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 2234 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 113 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 2234 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 139 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 2868 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 140 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 2868 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 142 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 2869 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 143 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 2869 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 157 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 739 thread 0
----------------------------------------------------
  mystack.top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 158 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 739 thread 0
----------------------------------------------------
  mystack.top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 163 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 739 thread 0
----------------------------------------------------
  mystack.pop_backoff.backoff_iteration_frequency_counters[0]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 164 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 739 thread 0
----------------------------------------------------
  mystack.pop_backoff.backoff_iteration_frequency_counters[1]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 169 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 739 thread 0
----------------------------------------------------
  mystack.push_backoff.backoff_iteration_frequency_counters[0]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 170 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 739 thread 0
----------------------------------------------------
  mystack.push_backoff.backoff_iteration_frequency_counters[1]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 205 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 1302 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 206 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 1302 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 208 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 1303 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 209 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 1303 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 248 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 790 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 249 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 790 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 251 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 791 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 252 file ../workspace/multithread/_cs_generalized.c function __CPROVER_initialize line 791 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 268 file ../workspace/multithread/_cs_generalized.c function main line 3340 thread 0
----------------------------------------------------
  __cs_tmp_t0_r0=2 (0000010)

State 269 file ../workspace/multithread/_cs_generalized.c function main line 3341 thread 0
----------------------------------------------------
  __cs_pc_cs[0]=2 (00000010)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3342 function main
  (signed int)__cs_pc_cs[0] > 0

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3343 function main
  (signed int)__cs_pc_cs[0] <= 126

State 277 file ../workspace/multithread/_cs_generalized.c function main_thread line 1973 thread 0
----------------------------------------------------
  __cs_m=&lock (00000111 00000000 00000000 00000000)

State 278 file ../workspace/multithread/_cs_generalized.c function main_thread line 1973 thread 0
----------------------------------------------------
  __cs_val=0 (00000000 00000000 00000000 00000000)

State 279 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_init line 112 thread 0
----------------------------------------------------
  lock=-1 (11111111 11111111 11111111 11111111)

State 282 file ../workspace/multithread/_cs_generalized.c function main_thread line 1978 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_init_valid_on_current_logical_core_ss=&mystack (00000011 00000000 00000000 00000000)

State 283 file ../workspace/multithread/_cs_generalized.c function main_thread line 1980 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state=NULL (00000000 00000000 00000000 00000000)

State 286 file ../workspace/multithread/_cs_generalized.c function main_thread line 1981 thread 0
----------------------------------------------------
  __cs_m=&library_lock (00001000 00000000 00000000 00000000)

State 287 file ../workspace/multithread/_cs_generalized.c function main_thread line 1981 thread 0
----------------------------------------------------
  __cs_val=0 (00000000 00000000 00000000 00000000)

State 288 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_init line 112 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 291 file ../workspace/multithread/_cs_generalized.c function main_thread line 1985 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3=FALSE (00000000)

State 293 file ../workspace/multithread/_cs_generalized.c function main_thread line 2000 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4=FALSE (00000000)

State 295 file ../workspace/multithread/_cs_generalized.c function main_thread line 2015 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5=TRUE (00000001)

State 297 file ../workspace/multithread/_cs_generalized.c function main_thread line 2019 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_init_valid_on_current_logical_core_c=((char *)NULL) (00000000 00000000 00000000 00000000)

State 301 file ../workspace/multithread/_cs_generalized.c function main_thread line 2027 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 302 file ../workspace/multithread/_cs_generalized.c function main_thread line 2027 thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)

State 303 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=1 (00000000 00000000 00000000 00000001)

State 306 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 310 file ../workspace/multithread/_cs_generalized.c function main_thread line 2028 thread 0
----------------------------------------------------
  mystack.top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 311 file ../workspace/multithread/_cs_generalized.c function main_thread line 2029 thread 0
----------------------------------------------------
  mystack.top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 312 file ../workspace/multithread/_cs_generalized.c function main_thread line 2030 thread 0
----------------------------------------------------
  mystack.user_state=NULL (00000000 00000000 00000000 00000000)

State 313 file ../workspace/multithread/_cs_generalized.c function main_thread line 2033 thread 0
----------------------------------------------------
  __cs_param_lfds711_misc_internal_backoff_init_bs=&mystack.pop_backoff (00000011 00000000 00000000 00010000)

State 314 file ../workspace/multithread/_cs_generalized.c function main_thread line 2037 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1=FALSE (00000000)

State 316 file ../workspace/multithread/_cs_generalized.c function main_thread line 2052 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2=TRUE (00000001)

State 318 file ../workspace/multithread/_cs_generalized.c function main_thread line 2056 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init_c=((char *)NULL) (00000000 00000000 00000000 00000000)

State 320 file ../workspace/multithread/_cs_generalized.c function main_thread line 2064 thread 0
----------------------------------------------------
  mystack.pop_backoff.lock=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 321 file ../workspace/multithread/_cs_generalized.c function main_thread line 2065 thread 0
----------------------------------------------------
  mystack.pop_backoff.backoff_iteration_frequency_counters[0]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 322 file ../workspace/multithread/_cs_generalized.c function main_thread line 2066 thread 0
----------------------------------------------------
  mystack.pop_backoff.backoff_iteration_frequency_counters[1]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 323 file ../workspace/multithread/_cs_generalized.c function main_thread line 2067 thread 0
----------------------------------------------------
  mystack.pop_backoff.metric=1ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001)

State 324 file ../workspace/multithread/_cs_generalized.c function main_thread line 2068 thread 0
>>>>>>> origin/main
----------------------------------------------------
  mystack.pop_backoff.total_operations=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

Assumption:
<<<<<<< HEAD
  file ../workspace/multithread/_cs_generalized.c line 7560 function main_thread
  (signed int)__cs_pc_cs[0] >= 1

State 590 file ../workspace/multithread/_cs_generalized.c function main_thread line 7567 thread 0
----------------------------------------------------
  __cs_param_lfds711_misc_internal_backoff_init_bs=&mystack.push_backoff (00000011 00000000 00000000 00111000)

State 591 file ../workspace/multithread/_cs_generalized.c function main_thread line 7571 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1=FALSE (00000000)

State 593 file ../workspace/multithread/_cs_generalized.c function main_thread line 7586 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2=TRUE (00000001)

State 595 file ../workspace/multithread/_cs_generalized.c function main_thread line 7590 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init_c=((char *)NULL) (00000000 00000000 00000000 00000000)

State 597 file ../workspace/multithread/_cs_generalized.c function main_thread line 7598 thread 0
----------------------------------------------------
  mystack.push_backoff.lock=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 598 file ../workspace/multithread/_cs_generalized.c function main_thread line 7599 thread 0
----------------------------------------------------
  mystack.push_backoff.backoff_iteration_frequency_counters[0]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 599 file ../workspace/multithread/_cs_generalized.c function main_thread line 7600 thread 0
----------------------------------------------------
  mystack.push_backoff.backoff_iteration_frequency_counters[1]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 600 file ../workspace/multithread/_cs_generalized.c function main_thread line 7601 thread 0
----------------------------------------------------
  mystack.push_backoff.metric=1ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001)

State 601 file ../workspace/multithread/_cs_generalized.c function main_thread line 7602 thread 0
=======
  file ../workspace/multithread/_cs_generalized.c line 2072 function main_thread
  (signed int)__cs_pc_cs[0] >= 1

State 326 file ../workspace/multithread/_cs_generalized.c function main_thread line 2079 thread 0
----------------------------------------------------
  __cs_param_lfds711_misc_internal_backoff_init_bs=&mystack.push_backoff (00000011 00000000 00000000 00111000)

State 327 file ../workspace/multithread/_cs_generalized.c function main_thread line 2083 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1=FALSE (00000000)

State 329 file ../workspace/multithread/_cs_generalized.c function main_thread line 2098 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2=TRUE (00000001)

State 331 file ../workspace/multithread/_cs_generalized.c function main_thread line 2102 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init_c=((char *)NULL) (00000000 00000000 00000000 00000000)

State 333 file ../workspace/multithread/_cs_generalized.c function main_thread line 2110 thread 0
----------------------------------------------------
  mystack.push_backoff.lock=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 334 file ../workspace/multithread/_cs_generalized.c function main_thread line 2111 thread 0
----------------------------------------------------
  mystack.push_backoff.backoff_iteration_frequency_counters[0]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 335 file ../workspace/multithread/_cs_generalized.c function main_thread line 2112 thread 0
----------------------------------------------------
  mystack.push_backoff.backoff_iteration_frequency_counters[1]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 336 file ../workspace/multithread/_cs_generalized.c function main_thread line 2113 thread 0
----------------------------------------------------
  mystack.push_backoff.metric=1ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001)

State 337 file ../workspace/multithread/_cs_generalized.c function main_thread line 2114 thread 0
>>>>>>> origin/main
----------------------------------------------------
  mystack.push_backoff.total_operations=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

Assumption:
<<<<<<< HEAD
  file ../workspace/multithread/_cs_generalized.c line 7606 function main_thread
  (signed int)__cs_pc_cs[0] >= 1

State 605 file ../workspace/multithread/_cs_generalized.c function main_thread line 7613 thread 0
----------------------------------------------------
  __cs_var=(const void *)&__cs_local_lfds711_misc_force_store_destination (00010000 00000000 00000000 00000000)

State 606 file ../workspace/multithread/_cs_generalized.c function main_thread line 7613 thread 0
----------------------------------------------------
  __cs_size=8u (00000000 00000000 00000000 00001000)

State 610 file ../workspace/multithread/_cs_generalized.c function __cs_init_scalar line 74 thread 0
----------------------------------------------------
  malloc_size=8u (00000000 00000000 00000000 00001000)

State 629 file ../workspace/multithread/_cs_generalized.c function __cs_init_scalar line 74 thread 0
----------------------------------------------------
  __cs_var=(const void *)&dynamic_object1 (00010001 00000000 00000000 00000000)

State 631 file ../workspace/multithread/_cs_generalized.c function main_thread line 7618 thread 0
----------------------------------------------------
  __cs_param___atomic_exchange_n_previous=&__cs_local_lfds711_misc_force_store_destination (00010000 00000000 00000000 00000000)

State 632 file ../workspace/multithread/_cs_generalized.c function main_thread line 7620 thread 0
----------------------------------------------------
  __cs_param___atomic_exchange_n_new=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 633 file ../workspace/multithread/_cs_generalized.c function main_thread line 7622 thread 0
----------------------------------------------------
  __cs_param___atomic_exchange_n_memorder=0 (00000000 00000000 00000000 00000000)

State 637 file ../workspace/multithread/_cs_generalized.c function main_thread line 7624 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_exchange_previous=&__cs_local_lfds711_misc_force_store_destination (00010000 00000000 00000000 00000000)

State 638 file ../workspace/multithread/_cs_generalized.c function main_thread line 7624 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_exchange_new=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 639 file ../workspace/multithread/_cs_generalized.c function main_thread line 7624 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_exchange_memorder=0 (00000000 00000000 00000000 00000000)

State 640 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_exchange line 734 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_exchange_old=0u (00000000 00000000 00000000 00000000)

State 641 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_exchange line 735 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_force_store_destination=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 646 file ../workspace/multithread/_cs_generalized.c function main_thread line 7624 thread 0
----------------------------------------------------
  __cs_local___atomic_exchange_n_res=0 (00000000 00000000 00000000 00000000)

State 647 file ../workspace/multithread/_cs_generalized.c function main_thread line 7625 thread 0
=======
  file ../workspace/multithread/_cs_generalized.c line 2118 function main_thread
  (signed int)__cs_pc_cs[0] >= 1

State 341 file ../workspace/multithread/_cs_generalized.c function main_thread line 2125 thread 0
----------------------------------------------------
  __cs_var=(const void *)&__cs_local_lfds711_misc_force_store_destination (00001010 00000000 00000000 00000000)

State 342 file ../workspace/multithread/_cs_generalized.c function main_thread line 2125 thread 0
----------------------------------------------------
  __cs_size=8u (00000000 00000000 00000000 00001000)

State 346 file ../workspace/multithread/_cs_generalized.c function __cs_init_scalar line 74 thread 0
----------------------------------------------------
  malloc_size=8u (00000000 00000000 00000000 00001000)

State 365 file ../workspace/multithread/_cs_generalized.c function __cs_init_scalar line 74 thread 0
----------------------------------------------------
  __cs_var=(const void *)&dynamic_object1 (00001011 00000000 00000000 00000000)

State 367 file ../workspace/multithread/_cs_generalized.c function main_thread line 2130 thread 0
----------------------------------------------------
  __cs_param___atomic_exchange_n_previous=&__cs_local_lfds711_misc_force_store_destination (00001010 00000000 00000000 00000000)

State 368 file ../workspace/multithread/_cs_generalized.c function main_thread line 2132 thread 0
----------------------------------------------------
  __cs_param___atomic_exchange_n_new=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 369 file ../workspace/multithread/_cs_generalized.c function main_thread line 2134 thread 0
----------------------------------------------------
  __cs_param___atomic_exchange_n_memorder=0 (00000000 00000000 00000000 00000000)

State 373 file ../workspace/multithread/_cs_generalized.c function main_thread line 2136 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_exchange_previous=&__cs_local_lfds711_misc_force_store_destination (00001010 00000000 00000000 00000000)

State 374 file ../workspace/multithread/_cs_generalized.c function main_thread line 2136 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_exchange_new=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 375 file ../workspace/multithread/_cs_generalized.c function main_thread line 2136 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_exchange_memorder=0 (00000000 00000000 00000000 00000000)

State 376 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_exchange line 734 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_exchange_old=0u (00000000 00000000 00000000 00000000)

State 377 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_exchange line 735 thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_force_store_destination=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 382 file ../workspace/multithread/_cs_generalized.c function main_thread line 2136 thread 0
----------------------------------------------------
  __cs_local___atomic_exchange_n_res=0 (00000000 00000000 00000000 00000000)

State 383 file ../workspace/multithread/_cs_generalized.c function main_thread line 2137 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_retval____atomic_exchange_n_1=0u (00000000 00000000 00000000 00000000)

Assumption:
<<<<<<< HEAD
  file ../workspace/multithread/_cs_generalized.c line 7629 function main_thread
  (signed int)__cs_pc_cs[0] >= 1

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7642 function main_thread
  (signed int)__cs_pc_cs[0] >= 1

State 652 file ../workspace/multithread/_cs_generalized.c function main_thread line 7647 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 653 file ../workspace/multithread/_cs_generalized.c function main_thread line 7647 thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)

State 654 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 657 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7651 function main_thread
  (signed int)__cs_pc_cs[0] >= 1

State 662 file ../workspace/multithread/_cs_generalized.c function main_thread line 7656 thread 0
=======
  file ../workspace/multithread/_cs_generalized.c line 2141 function main_thread
  (signed int)__cs_pc_cs[0] >= 1

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2154 function main_thread
  (signed int)__cs_pc_cs[0] >= 1

State 388 file ../workspace/multithread/_cs_generalized.c function main_thread line 2159 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 389 file ../workspace/multithread/_cs_generalized.c function main_thread line 2159 thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)

State 390 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 393 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2163 function main_thread
  (signed int)__cs_pc_cs[0] >= 1

State 398 file ../workspace/multithread/_cs_generalized.c function main_thread line 2168 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_retval__init_1=(const void *)mystack.top (00000011 00000000 00000000 00000000)

Assumption:
<<<<<<< HEAD
  file ../workspace/multithread/_cs_generalized.c line 7660 function main_thread
  (signed int)__cs_pc_cs[0] >= 1

State 664 file ../workspace/multithread/_cs_generalized.c function main_thread line 7665 thread 0
----------------------------------------------------
  ss=(const void *)mystack.top (00000011 00000000 00000000 00000000)

State 667 file ../workspace/multithread/_cs_generalized.c function main_thread line 7696 thread 0
----------------------------------------------------
  __cs_new_thread_id=&__cs_local_main_t1 (00010011 00000000 00000000 00000000)

State 668 file ../workspace/multithread/_cs_generalized.c function main_thread line 7696 thread 0
----------------------------------------------------
  __cs_attr=NULL (00000000 00000000 00000000 00000000)

State 669 file ../workspace/multithread/_cs_generalized.c function main_thread line 7696 thread 0
----------------------------------------------------
  __cs_thread_function=push_0 (00010100 00000000 00000000 00000000)

State 670 file ../workspace/multithread/_cs_generalized.c function main_thread line 7696 thread 0
----------------------------------------------------
  __cs_arg=NULL (00000000 00000000 00000000 00000000)

State 671 file ../workspace/multithread/_cs_generalized.c function main_thread line 7696 thread 0
----------------------------------------------------
  __cs_threadID=1 (00000000 00000000 00000000 00000001)

State 673 file ../workspace/multithread/_cs_generalized.c function __cs_create line 88 thread 0
----------------------------------------------------
  __cs_local_main_t1=1 (00000000 00000000 00000000 00000001)

State 674 file ../workspace/multithread/_cs_generalized.c function __cs_create line 89 thread 0
----------------------------------------------------
  __cs_active_thread[1]=1 (1)

State 675 file ../workspace/multithread/_cs_generalized.c function __cs_create line 90 thread 0
----------------------------------------------------
  __cs_threadargs[1]=NULL (00000000 00000000 00000000 00000000)

State 678 file ../workspace/multithread/_cs_generalized.c function __cs_create line 91 thread 0
----------------------------------------------------
  __cs_message="thread spawned" (00010101 00000000 00000000 00000000)

State 685 file ../workspace/multithread/_cs_generalized.c function main_thread line 7698 thread 0
----------------------------------------------------
  __cs_new_thread_id=&__cs_local_main_t6 (00010110 00000000 00000000 00000000)

State 686 file ../workspace/multithread/_cs_generalized.c function main_thread line 7698 thread 0
----------------------------------------------------
  __cs_attr=NULL (00000000 00000000 00000000 00000000)

State 687 file ../workspace/multithread/_cs_generalized.c function main_thread line 7698 thread 0
----------------------------------------------------
  __cs_thread_function=pop_0 (00010111 00000000 00000000 00000000)

State 688 file ../workspace/multithread/_cs_generalized.c function main_thread line 7698 thread 0
----------------------------------------------------
  __cs_arg=NULL (00000000 00000000 00000000 00000000)

State 689 file ../workspace/multithread/_cs_generalized.c function main_thread line 7698 thread 0
----------------------------------------------------
  __cs_threadID=2 (00000000 00000000 00000000 00000010)

State 691 file ../workspace/multithread/_cs_generalized.c function __cs_create line 88 thread 0
----------------------------------------------------
  __cs_local_main_t6=2 (00000000 00000000 00000000 00000010)

State 692 file ../workspace/multithread/_cs_generalized.c function __cs_create line 89 thread 0
----------------------------------------------------
  __cs_active_thread[2]=1 (1)

State 693 file ../workspace/multithread/_cs_generalized.c function __cs_create line 90 thread 0
----------------------------------------------------
  __cs_threadargs[2]=NULL (00000000 00000000 00000000 00000000)

State 696 file ../workspace/multithread/_cs_generalized.c function __cs_create line 91 thread 0
----------------------------------------------------
  __cs_message="thread spawned" (00010101 00000000 00000000 00000000)

State 704 file ../workspace/multithread/_cs_generalized.c function main_thread line 7711 thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 705 file ../workspace/multithread/_cs_generalized.c function main_thread line 7711 thread 0
----------------------------------------------------
  __cs_thread_index=0u (00000000 00000000 00000000 00000000)

State 706 file ../workspace/multithread/_cs_generalized.c function __cs_exit line 102 thread 0
----------------------------------------------------
  __cs_thread_joinargs[0]=NULL (00000000 00000000 00000000 00000000)

State 711 file ../workspace/multithread/_cs_generalized.c function main line 7722 thread 0
----------------------------------------------------
  __cs_pc[0]=2 (00000001 0)

State 712 file ../workspace/multithread/_cs_generalized.c function main line 7724 thread 0
----------------------------------------------------
  __cs_tmp_t1_r0=302 (10010111 0)

State 714 file ../workspace/multithread/_cs_generalized.c function main line 7727 thread 0
----------------------------------------------------
  __cs_pc_cs[1]=302 (01001011 10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7728 function main
  (signed int)__cs_pc_cs[1] <= 302

State 718 file ../workspace/multithread/_cs_generalized.c function main line 7729 thread 0
----------------------------------------------------
  __cs_param_push___cs_unused=NULL (00000000 00000000 00000000 00000000)

State 720 file ../workspace/multithread/_cs_generalized.c function push_0 line 752 thread 0
----------------------------------------------------
  __cs_local_push_loop=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 722 file ../workspace/multithread/_cs_generalized.c function push_0 line 758 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_23=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 764 function push_0
  (signed int)__cs_pc_cs[1] >= 3

State 726 file ../workspace/multithread/_cs_generalized.c function push_0 line 771 thread 0
----------------------------------------------------
  __cs_param_insert_s=&mystack (00000011 00000000 00000000 00000000)

State 727 file ../workspace/multithread/_cs_generalized.c function push_0 line 773 thread 0
----------------------------------------------------
  __cs_param_insert_id=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 732 file ../workspace/multithread/_cs_generalized.c function push_0 line 776 thread 0
----------------------------------------------------
  __cs_size=24u (00000000 00000000 00000000 00011000)

State 733 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  __cs_ptr=NULL (00000000 00000000 00000000 00000000)

State 736 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  malloc_size=24u (00000000 00000000 00000000 00011000)

State 742 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object2.se.next=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 743 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object2.se.key=NULL (00000000 00000000 00000000 00000000)

State 744 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object2.se.value=NULL (00000000 00000000 00000000 00000000)

State 745 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object2.$pad1=0u (00000000 00000000 00000000 00000000)

State 746 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object2.user_id=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 760 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  __cs_ptr=(const void *)&dynamic_object2.se.next (00000010 00000000 00000000 00000000)

State 764 file ../workspace/multithread/_cs_generalized.c function push_0 line 776 thread 0
----------------------------------------------------
  __cs_local_insert_td=&dynamic_object2 (00000010 00000000 00000000 00000000)

State 766 file ../workspace/multithread/_cs_generalized.c function push_0 line 778 thread 0
----------------------------------------------------
  dynamic_object2.user_id=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 768 file ../workspace/multithread/_cs_generalized.c function push_0 line 780 thread 0
----------------------------------------------------
  dynamic_object2.se.value=(const void *)&dynamic_object2.se.next (00000010 00000000 00000000 00000000)

State 770 file ../workspace/multithread/_cs_generalized.c function push_0 line 784 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_ss=&mystack (00000011 00000000 00000000 00000000)

State 772 file ../workspace/multithread/_cs_generalized.c function push_0 line 787 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_se=&dynamic_object2.se (00000010 00000000 00000000 00000000)

State 773 file ../workspace/multithread/_cs_generalized.c function push_0 line 790 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 775 file ../workspace/multithread/_cs_generalized.c function push_0 line 797 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_14=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 806 function push_0
  (signed int)__cs_pc_cs[1] >= 12

State 779 file ../workspace/multithread/_cs_generalized.c function push_0 line 816 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_15=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 825 function push_0
  (signed int)__cs_pc_cs[1] >= 15

State 783 file ../workspace/multithread/_cs_generalized.c function push_0 line 832 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=&dynamic_object2.se (00000010 00000000 00000000 00000000)

State 785 file ../workspace/multithread/_cs_generalized.c function push_0 line 834 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 787 file ../workspace/multithread/_cs_generalized.c function push_0 line 836 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 788 file ../workspace/multithread/_cs_generalized.c function push_0 line 837 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=0 (00000000)

State 789 file ../workspace/multithread/_cs_generalized.c function push_0 line 839 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=0 (00000000 00000000 00000000 00000000)

State 794 file ../workspace/multithread/_cs_generalized.c function push_0 line 848 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 795 file ../workspace/multithread/_cs_generalized.c function push_0 line 848 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 799 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 802 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 807 file ../workspace/multithread/_cs_generalized.c function push_0 line 850 thread 0
----------------------------------------------------
  dynamic_object2.se.next=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 811 file ../workspace/multithread/_cs_generalized.c function push_0 line 852 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 812 file ../workspace/multithread/_cs_generalized.c function push_0 line 852 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 816 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 819 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 824 file ../workspace/multithread/_cs_generalized.c function push_0 line 854 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 828 file ../workspace/multithread/_cs_generalized.c function push_0 line 856 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 829 file ../workspace/multithread/_cs_generalized.c function push_0 line 856 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 833 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 836 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 844 file ../workspace/multithread/_cs_generalized.c function push_0 line 858 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 845 file ../workspace/multithread/_cs_generalized.c function push_0 line 858 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_push_original_top (00011000 00000000 00000000 00000000)

State 846 file ../workspace/multithread/_cs_generalized.c function push_0 line 858 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_push_new_top (00011001 00000000 00000000 00000000)

State 847 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 696 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 849 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 699 thread 0
----------------------------------------------------
  mystack.top[0]=&dynamic_object2.se (00000010 00000000 00000000 00000000)

State 854 file ../workspace/multithread/_cs_generalized.c function push_0 line 858 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=1 (00000001)

State 858 file ../workspace/multithread/_cs_generalized.c function push_0 line 860 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 859 file ../workspace/multithread/_cs_generalized.c function push_0 line 860 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 863 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 866 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 870 file ../workspace/multithread/_cs_generalized.c function push_0 line 864 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_16=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 913 function push_0
  (signed int)__cs_pc_cs[1] >= 26

State 873 file ../workspace/multithread/_cs_generalized.c function push_0 line 915 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=1 (00000000 00000000 00000000 00000001)

State 874 file ../workspace/multithread/_cs_generalized.c function push_0 line 919 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_17=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1283 function push_0
  (signed int)__cs_pc_cs[1] >= 59

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1289 function push_0
  (signed int)__cs_pc_cs[1] >= 59

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1295 function push_0
  (signed int)__cs_pc_cs[1] >= 59

State 882 file ../workspace/multithread/_cs_generalized.c function push_0 line 1304 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_24=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1310 function push_0
  (signed int)__cs_pc_cs[1] >= 61

State 885 file ../workspace/multithread/_cs_generalized.c function push_0 line 1316 thread 0
----------------------------------------------------
  __cs_local_push_loop=1ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001)

State 887 file ../workspace/multithread/_cs_generalized.c function push_0 line 1322 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_23=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1328 function push_0
  (signed int)__cs_pc_cs[1] >= 63

State 891 file ../workspace/multithread/_cs_generalized.c function push_0 line 1335 thread 0
----------------------------------------------------
  __cs_param_insert_s=&mystack (00000011 00000000 00000000 00000000)

State 892 file ../workspace/multithread/_cs_generalized.c function push_0 line 1337 thread 0
----------------------------------------------------
  __cs_param_insert_id=1ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001)

State 897 file ../workspace/multithread/_cs_generalized.c function push_0 line 1340 thread 0
----------------------------------------------------
  __cs_size=24u (00000000 00000000 00000000 00011000)

State 898 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  __cs_ptr=NULL (00000000 00000000 00000000 00000000)

State 901 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  malloc_size=24u (00000000 00000000 00000000 00011000)

State 907 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object3.se.next=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 908 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object3.se.key=NULL (00000000 00000000 00000000 00000000)

State 909 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object3.se.value=NULL (00000000 00000000 00000000 00000000)

State 910 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object3.$pad1=0u (00000000 00000000 00000000 00000000)

State 911 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object3.user_id=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 925 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  __cs_ptr=(const void *)&dynamic_object3.se.next (00000100 00000000 00000000 00000000)

State 929 file ../workspace/multithread/_cs_generalized.c function push_0 line 1340 thread 0
----------------------------------------------------
  __cs_local_insert_td=&dynamic_object3 (00000100 00000000 00000000 00000000)

State 931 file ../workspace/multithread/_cs_generalized.c function push_0 line 1342 thread 0
----------------------------------------------------
  dynamic_object3.user_id=1ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001)

State 933 file ../workspace/multithread/_cs_generalized.c function push_0 line 1344 thread 0
----------------------------------------------------
  dynamic_object3.se.value=(const void *)&dynamic_object3.se.next (00000100 00000000 00000000 00000000)

State 935 file ../workspace/multithread/_cs_generalized.c function push_0 line 1348 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_ss=&mystack (00000011 00000000 00000000 00000000)

State 937 file ../workspace/multithread/_cs_generalized.c function push_0 line 1351 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_se=&dynamic_object3.se (00000100 00000000 00000000 00000000)

State 938 file ../workspace/multithread/_cs_generalized.c function push_0 line 1354 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 940 file ../workspace/multithread/_cs_generalized.c function push_0 line 1361 thread 0
=======
  file ../workspace/multithread/_cs_generalized.c line 2172 function main_thread
  (signed int)__cs_pc_cs[0] >= 1

State 400 file ../workspace/multithread/_cs_generalized.c function main_thread line 2177 thread 0
----------------------------------------------------
  ss=(const void *)mystack.top (00000011 00000000 00000000 00000000)

State 403 file ../workspace/multithread/_cs_generalized.c function main_thread line 2208 thread 0
----------------------------------------------------
  __cs_new_thread_id=&__cs_local_main_t1 (00001101 00000000 00000000 00000000)

State 404 file ../workspace/multithread/_cs_generalized.c function main_thread line 2208 thread 0
----------------------------------------------------
  __cs_attr=NULL (00000000 00000000 00000000 00000000)

State 405 file ../workspace/multithread/_cs_generalized.c function main_thread line 2208 thread 0
----------------------------------------------------
  __cs_thread_function=push_0 (00001110 00000000 00000000 00000000)

State 406 file ../workspace/multithread/_cs_generalized.c function main_thread line 2208 thread 0
----------------------------------------------------
  __cs_arg=NULL (00000000 00000000 00000000 00000000)

State 407 file ../workspace/multithread/_cs_generalized.c function main_thread line 2208 thread 0
----------------------------------------------------
  __cs_threadID=1 (00000000 00000000 00000000 00000001)

State 409 file ../workspace/multithread/_cs_generalized.c function __cs_create line 88 thread 0
----------------------------------------------------
  __cs_local_main_t1=1 (00000000 00000000 00000000 00000001)

State 410 file ../workspace/multithread/_cs_generalized.c function __cs_create line 89 thread 0
----------------------------------------------------
  __cs_active_thread[1]=1 (1)

State 411 file ../workspace/multithread/_cs_generalized.c function __cs_create line 90 thread 0
----------------------------------------------------
  __cs_threadargs[1]=NULL (00000000 00000000 00000000 00000000)

State 414 file ../workspace/multithread/_cs_generalized.c function __cs_create line 91 thread 0
----------------------------------------------------
  __cs_message="thread spawned" (00001111 00000000 00000000 00000000)

State 421 file ../workspace/multithread/_cs_generalized.c function main_thread line 2210 thread 0
----------------------------------------------------
  __cs_new_thread_id=&__cs_local_main_t6 (00010000 00000000 00000000 00000000)

State 422 file ../workspace/multithread/_cs_generalized.c function main_thread line 2210 thread 0
----------------------------------------------------
  __cs_attr=NULL (00000000 00000000 00000000 00000000)

State 423 file ../workspace/multithread/_cs_generalized.c function main_thread line 2210 thread 0
----------------------------------------------------
  __cs_thread_function=pop_0 (00010001 00000000 00000000 00000000)

State 424 file ../workspace/multithread/_cs_generalized.c function main_thread line 2210 thread 0
----------------------------------------------------
  __cs_arg=NULL (00000000 00000000 00000000 00000000)

State 425 file ../workspace/multithread/_cs_generalized.c function main_thread line 2210 thread 0
----------------------------------------------------
  __cs_threadID=2 (00000000 00000000 00000000 00000010)

State 427 file ../workspace/multithread/_cs_generalized.c function __cs_create line 88 thread 0
----------------------------------------------------
  __cs_local_main_t6=2 (00000000 00000000 00000000 00000010)

State 428 file ../workspace/multithread/_cs_generalized.c function __cs_create line 89 thread 0
----------------------------------------------------
  __cs_active_thread[2]=1 (1)

State 429 file ../workspace/multithread/_cs_generalized.c function __cs_create line 90 thread 0
----------------------------------------------------
  __cs_threadargs[2]=NULL (00000000 00000000 00000000 00000000)

State 432 file ../workspace/multithread/_cs_generalized.c function __cs_create line 91 thread 0
----------------------------------------------------
  __cs_message="thread spawned" (00001111 00000000 00000000 00000000)

State 573 file ../workspace/multithread/_cs_generalized.c function main_thread line 3334 thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 574 file ../workspace/multithread/_cs_generalized.c function main_thread line 3334 thread 0
----------------------------------------------------
  __cs_thread_index=0u (00000000 00000000 00000000 00000000)

State 575 file ../workspace/multithread/_cs_generalized.c function __cs_exit line 102 thread 0
----------------------------------------------------
  __cs_thread_joinargs[0]=NULL (00000000 00000000 00000000 00000000)

State 580 file ../workspace/multithread/_cs_generalized.c function main line 3345 thread 0
----------------------------------------------------
  __cs_pc[0]=2 (0000010)

State 581 file ../workspace/multithread/_cs_generalized.c function main line 3347 thread 0
----------------------------------------------------
  __cs_tmp_t1_r0=0 (000000)

State 583 file ../workspace/multithread/_cs_generalized.c function main line 3350 thread 0
----------------------------------------------------
  __cs_pc_cs[1]=0 (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3351 function main
  (signed int)__cs_pc_cs[1] <= 61

State 587 file ../workspace/multithread/_cs_generalized.c function main line 3352 thread 0
----------------------------------------------------
  __cs_param_push___cs_unused=NULL (00000000 00000000 00000000 00000000)

State 657 file ../workspace/multithread/_cs_generalized.c function push_0 line 1258 thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 658 file ../workspace/multithread/_cs_generalized.c function push_0 line 1258 thread 0
----------------------------------------------------
  __cs_thread_index=1u (00000000 00000000 00000000 00000001)

State 659 file ../workspace/multithread/_cs_generalized.c function __cs_exit line 102 thread 0
----------------------------------------------------
  __cs_thread_joinargs[1]=NULL (00000000 00000000 00000000 00000000)

State 664 file ../workspace/multithread/_cs_generalized.c function main line 3353 thread 0
----------------------------------------------------
  __cs_pc[1]=0 (0000000)

State 665 file ../workspace/multithread/_cs_generalized.c function main line 3356 thread 0
----------------------------------------------------
  __cs_tmp_t2_r0=76 (1001100)

State 667 file ../workspace/multithread/_cs_generalized.c function main line 3359 thread 0
----------------------------------------------------
  __cs_pc_cs[2]=76 (01001100)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3360 function main
  (signed int)__cs_pc_cs[2] <= 78

State 671 file ../workspace/multithread/_cs_generalized.c function main line 3361 thread 0
----------------------------------------------------
  __cs_param_pop___cs_unused=NULL (00000000 00000000 00000000 00000000)

State 673 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1264 thread 0
----------------------------------------------------
  __cs_local_pop_res=0 (00000000 00000000 00000000 00000000)

State 674 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1266 thread 0
----------------------------------------------------
  __cs_local_pop_count=0 (00000000 00000000 00000000 00000000)

State 675 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1268 thread 0
----------------------------------------------------
  __cs_local_pop_loop=0 (00000000 00000000 00000000 00000000)

State 677 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1273 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_26=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1279 function pop_0
  (signed int)__cs_pc_cs[2] >= 3

State 681 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1287 thread 0
----------------------------------------------------
  __cs_param_delete_s=&mystack (00000011 00000000 00000000 00000000)

State 683 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1295 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_ss=&mystack (00000011 00000000 00000000 00000000)

State 685 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1298 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_se=&__cs_local_delete_se (00000101 00000000 00000000 00000000)

State 686 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1301 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 688 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1308 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1317 function pop_0
  (signed int)__cs_pc_cs[2] >= 9

State 692 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1327 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1336 function pop_0
  (signed int)__cs_pc_cs[2] >= 12

State 698 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1343 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 699 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1343 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 703 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 706 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 713 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1345 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 714 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1345 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 718 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 721 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 726 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1347 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 728 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1349 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 729 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1351 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=0 (00000000 00000000 00000000 00000000)

State 730 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1355 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=0 (00000000 00000000 00000000 00000000)

State 731 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1360 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8=TRUE (00000001)

State 734 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1364 thread 0
----------------------------------------------------
  __cs_local_delete_se=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 735 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1365 thread 0
----------------------------------------------------
  __cs_retval__lfds711_stack_pop_1=0 (00000000 00000000 00000000 00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1915 function pop_0
  (signed int)__cs_pc_cs[2] >= 73

State 738 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1920 thread 0
----------------------------------------------------
  __cs_local_delete_res=0 (00000000 00000000 00000000 00000000)

State 739 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1924 thread 0
----------------------------------------------------
  __cs_local_delete___cs_tmp_if_cond_19=TRUE (00000001)

State 741 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1927 thread 0
----------------------------------------------------
  __cs_retval__delete_1=0 (00000000 00000000 00000000 00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1943 function pop_0
  (signed int)__cs_pc_cs[2] >= 76

State 748 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1968 thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 749 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1968 thread 0
----------------------------------------------------
  __cs_thread_index=2u (00000000 00000000 00000000 00000010)

State 750 file ../workspace/multithread/_cs_generalized.c function __cs_exit line 102 thread 0
----------------------------------------------------
  __cs_thread_joinargs[2]=NULL (00000000 00000000 00000000 00000000)

State 755 file ../workspace/multithread/_cs_generalized.c function main line 3362 thread 0
----------------------------------------------------
  __cs_pc[2]=76 (1001100)

State 756 file ../workspace/multithread/_cs_generalized.c function main line 3366 thread 0
----------------------------------------------------
  __cs_tmp_t0_r1=0 (0000000)

State 758 file ../workspace/multithread/_cs_generalized.c function main line 3369 thread 0
----------------------------------------------------
  __cs_pc_cs[0]=2 (00000010)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3370 function main
  (signed int)__cs_pc_cs[0] >= (signed int)__cs_pc[0]

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3371 function main
  (signed int)__cs_pc_cs[0] <= 126

State 902 file ../workspace/multithread/_cs_generalized.c function main_thread line 3334 thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 903 file ../workspace/multithread/_cs_generalized.c function main_thread line 3334 thread 0
----------------------------------------------------
  __cs_thread_index=0u (00000000 00000000 00000000 00000000)

State 904 file ../workspace/multithread/_cs_generalized.c function __cs_exit line 102 thread 0
----------------------------------------------------
  __cs_thread_joinargs[0]=NULL (00000000 00000000 00000000 00000000)

State 909 file ../workspace/multithread/_cs_generalized.c function main line 3373 thread 0
----------------------------------------------------
  __cs_pc[0]=2 (0000010)

State 910 file ../workspace/multithread/_cs_generalized.c function main line 3376 thread 0
----------------------------------------------------
  __cs_tmp_t1_r1=61 (111101)

State 912 file ../workspace/multithread/_cs_generalized.c function main line 3379 thread 0
----------------------------------------------------
  __cs_pc_cs[1]=61 (00111101)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3380 function main
  (signed int)__cs_pc_cs[1] >= (signed int)__cs_pc[1]

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3381 function main
  (signed int)__cs_pc_cs[1] <= 61

State 917 file ../workspace/multithread/_cs_generalized.c function main line 3382 thread 0
----------------------------------------------------
  __cs_param_push___cs_unused=NULL (00000000 00000000 00000000 00000000)

State 921 file ../workspace/multithread/_cs_generalized.c function push_0 line 752 thread 0
----------------------------------------------------
  __cs_var=(const void *)&__cs_local_push_loop (00010110 00000000 00000000 00000000)

State 922 file ../workspace/multithread/_cs_generalized.c function push_0 line 752 thread 0
----------------------------------------------------
  __cs_size=8u (00000000 00000000 00000000 00001000)

State 926 file ../workspace/multithread/_cs_generalized.c function __cs_init_scalar line 74 thread 0
----------------------------------------------------
  malloc_size=8u (00000000 00000000 00000000 00001000)

State 945 file ../workspace/multithread/_cs_generalized.c function __cs_init_scalar line 74 thread 0
----------------------------------------------------
  __cs_var=(const void *)&dynamic_object5 (00100000 00000000 00000000 00000000)

State 948 file ../workspace/multithread/_cs_generalized.c function push_0 line 757 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_24=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 763 function push_0
  (signed int)__cs_pc_cs[1] >= 3

State 952 file ../workspace/multithread/_cs_generalized.c function push_0 line 770 thread 0
----------------------------------------------------
  __cs_param_insert_s=&mystack (00000011 00000000 00000000 00000000)

State 953 file ../workspace/multithread/_cs_generalized.c function push_0 line 772 thread 0
----------------------------------------------------
  __cs_param_insert_id=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 958 file ../workspace/multithread/_cs_generalized.c function push_0 line 775 thread 0
----------------------------------------------------
  __cs_size=24u (00000000 00000000 00000000 00011000)

State 959 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  __cs_ptr=NULL (00000000 00000000 00000000 00000000)

State 962 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  malloc_size=24u (00000000 00000000 00000000 00011000)

State 968 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object6.se.next=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 969 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object6.se.key=NULL (00000000 00000000 00000000 00000000)

State 970 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object6.se.value=NULL (00000000 00000000 00000000 00000000)

State 971 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object6.$pad1=0u (00000000 00000000 00000000 00000000)

State 972 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object6.user_id=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 986 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  __cs_ptr=(const void *)&dynamic_object6.se.next (00000110 00000000 00000000 00000000)

State 990 file ../workspace/multithread/_cs_generalized.c function push_0 line 775 thread 0
----------------------------------------------------
  __cs_local_insert_td=&dynamic_object6 (00000110 00000000 00000000 00000000)

State 992 file ../workspace/multithread/_cs_generalized.c function push_0 line 777 thread 0
----------------------------------------------------
  dynamic_object6.user_id=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 994 file ../workspace/multithread/_cs_generalized.c function push_0 line 779 thread 0
----------------------------------------------------
  dynamic_object6.se.value=(const void *)&dynamic_object6.se.next (00000110 00000000 00000000 00000000)

State 996 file ../workspace/multithread/_cs_generalized.c function push_0 line 783 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_ss=&mystack (00000011 00000000 00000000 00000000)

State 998 file ../workspace/multithread/_cs_generalized.c function push_0 line 786 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_se=&dynamic_object6.se (00000110 00000000 00000000 00000000)

State 999 file ../workspace/multithread/_cs_generalized.c function push_0 line 789 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 1001 file ../workspace/multithread/_cs_generalized.c function push_0 line 796 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_14=FALSE (00000000)

Assumption:
<<<<<<< HEAD
  file ../workspace/multithread/_cs_generalized.c line 1370 function push_0
  (signed int)__cs_pc_cs[1] >= 72

State 944 file ../workspace/multithread/_cs_generalized.c function push_0 line 1380 thread 0
=======
  file ../workspace/multithread/_cs_generalized.c line 805 function push_0
  (signed int)__cs_pc_cs[1] >= 12

State 1005 file ../workspace/multithread/_cs_generalized.c function push_0 line 815 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_15=FALSE (00000000)

Assumption:
<<<<<<< HEAD
  file ../workspace/multithread/_cs_generalized.c line 1389 function push_0
  (signed int)__cs_pc_cs[1] >= 75

State 948 file ../workspace/multithread/_cs_generalized.c function push_0 line 1396 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=&dynamic_object3.se (00000100 00000000 00000000 00000000)

State 950 file ../workspace/multithread/_cs_generalized.c function push_0 line 1398 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 952 file ../workspace/multithread/_cs_generalized.c function push_0 line 1400 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=&dynamic_object2.se (00000010 00000000 00000000 00000000)

State 953 file ../workspace/multithread/_cs_generalized.c function push_0 line 1401 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=0 (00000000)

State 954 file ../workspace/multithread/_cs_generalized.c function push_0 line 1403 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=0 (00000000 00000000 00000000 00000000)

State 959 file ../workspace/multithread/_cs_generalized.c function push_0 line 1412 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 960 file ../workspace/multithread/_cs_generalized.c function push_0 line 1412 thread 0
=======
  file ../workspace/multithread/_cs_generalized.c line 824 function push_0
  (signed int)__cs_pc_cs[1] >= 15

State 1009 file ../workspace/multithread/_cs_generalized.c function push_0 line 831 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=&dynamic_object6.se (00000110 00000000 00000000 00000000)

State 1011 file ../workspace/multithread/_cs_generalized.c function push_0 line 833 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1013 file ../workspace/multithread/_cs_generalized.c function push_0 line 835 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1014 file ../workspace/multithread/_cs_generalized.c function push_0 line 836 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=0 (00000000)

State 1015 file ../workspace/multithread/_cs_generalized.c function push_0 line 838 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=0 (00000000 00000000 00000000 00000000)

State 1020 file ../workspace/multithread/_cs_generalized.c function push_0 line 847 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 1021 file ../workspace/multithread/_cs_generalized.c function push_0 line 847 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

<<<<<<< HEAD
State 964 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 967 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 972 file ../workspace/multithread/_cs_generalized.c function push_0 line 1414 thread 0
----------------------------------------------------
  dynamic_object3.se.next=&dynamic_object2.se (00000010 00000000 00000000 00000000)

State 976 file ../workspace/multithread/_cs_generalized.c function push_0 line 1416 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 977 file ../workspace/multithread/_cs_generalized.c function push_0 line 1416 thread 0
=======
State 1025 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 1028 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 1033 file ../workspace/multithread/_cs_generalized.c function push_0 line 849 thread 0
----------------------------------------------------
  dynamic_object6.se.next=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1037 file ../workspace/multithread/_cs_generalized.c function push_0 line 851 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 1038 file ../workspace/multithread/_cs_generalized.c function push_0 line 851 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

<<<<<<< HEAD
State 981 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 984 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 989 file ../workspace/multithread/_cs_generalized.c function push_0 line 1418 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 993 file ../workspace/multithread/_cs_generalized.c function push_0 line 1420 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 994 file ../workspace/multithread/_cs_generalized.c function push_0 line 1420 thread 0
=======
State 1042 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1045 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 1050 file ../workspace/multithread/_cs_generalized.c function push_0 line 853 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 1054 file ../workspace/multithread/_cs_generalized.c function push_0 line 855 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 1055 file ../workspace/multithread/_cs_generalized.c function push_0 line 855 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

<<<<<<< HEAD
State 998 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 1001 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 1009 file ../workspace/multithread/_cs_generalized.c function push_0 line 1422 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 1010 file ../workspace/multithread/_cs_generalized.c function push_0 line 1422 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_push_original_top (00011010 00000000 00000000 00000000)

State 1011 file ../workspace/multithread/_cs_generalized.c function push_0 line 1422 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_push_new_top (00011011 00000000 00000000 00000000)

State 1012 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 696 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 1014 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 699 thread 0
----------------------------------------------------
  mystack.top[0]=&dynamic_object3.se (00000100 00000000 00000000 00000000)

State 1019 file ../workspace/multithread/_cs_generalized.c function push_0 line 1422 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=1 (00000001)

State 1023 file ../workspace/multithread/_cs_generalized.c function push_0 line 1424 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 1024 file ../workspace/multithread/_cs_generalized.c function push_0 line 1424 thread 0
=======
State 1059 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 1062 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 1070 file ../workspace/multithread/_cs_generalized.c function push_0 line 857 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 1071 file ../workspace/multithread/_cs_generalized.c function push_0 line 857 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_push_original_top (00011000 00000000 00000000 00000000)

State 1072 file ../workspace/multithread/_cs_generalized.c function push_0 line 857 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_push_new_top (00011001 00000000 00000000 00000000)

State 1073 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 696 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 1075 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 699 thread 0
----------------------------------------------------
  mystack.top[0]=&dynamic_object6.se (00000110 00000000 00000000 00000000)

State 1080 file ../workspace/multithread/_cs_generalized.c function push_0 line 857 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=1 (00000001)

State 1084 file ../workspace/multithread/_cs_generalized.c function push_0 line 859 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 1085 file ../workspace/multithread/_cs_generalized.c function push_0 line 859 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

<<<<<<< HEAD
State 1028 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1031 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 1035 file ../workspace/multithread/_cs_generalized.c function push_0 line 1428 thread 0
=======
State 1089 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1092 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 1096 file ../workspace/multithread/_cs_generalized.c function push_0 line 863 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_16=FALSE (00000000)

Assumption:
<<<<<<< HEAD
  file ../workspace/multithread/_cs_generalized.c line 1477 function push_0
  (signed int)__cs_pc_cs[1] >= 86

State 1038 file ../workspace/multithread/_cs_generalized.c function push_0 line 1479 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=1 (00000000 00000000 00000000 00000001)

State 1039 file ../workspace/multithread/_cs_generalized.c function push_0 line 1483 thread 0
=======
  file ../workspace/multithread/_cs_generalized.c line 900 function push_0
  (signed int)__cs_pc_cs[1] >= 26

State 1099 file ../workspace/multithread/_cs_generalized.c function push_0 line 902 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=1 (00000000 00000000 00000000 00000001)

State 1100 file ../workspace/multithread/_cs_generalized.c function push_0 line 906 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_17=FALSE (00000000)

Assumption:
<<<<<<< HEAD
  file ../workspace/multithread/_cs_generalized.c line 1847 function push_0
  (signed int)__cs_pc_cs[1] >= 119

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1853 function push_0
  (signed int)__cs_pc_cs[1] >= 119

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1859 function push_0
  (signed int)__cs_pc_cs[1] >= 119

State 1047 file ../workspace/multithread/_cs_generalized.c function push_0 line 1868 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_24=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1874 function push_0
  (signed int)__cs_pc_cs[1] >= 121

State 1050 file ../workspace/multithread/_cs_generalized.c function push_0 line 1880 thread 0
----------------------------------------------------
  __cs_local_push_loop=2ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000010)

State 1052 file ../workspace/multithread/_cs_generalized.c function push_0 line 1886 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_23=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1892 function push_0
  (signed int)__cs_pc_cs[1] >= 123

State 1056 file ../workspace/multithread/_cs_generalized.c function push_0 line 1899 thread 0
----------------------------------------------------
  __cs_param_insert_s=&mystack (00000011 00000000 00000000 00000000)

State 1057 file ../workspace/multithread/_cs_generalized.c function push_0 line 1901 thread 0
----------------------------------------------------
  __cs_param_insert_id=2ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000010)

State 1062 file ../workspace/multithread/_cs_generalized.c function push_0 line 1904 thread 0
----------------------------------------------------
  __cs_size=24u (00000000 00000000 00000000 00011000)

State 1063 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  __cs_ptr=NULL (00000000 00000000 00000000 00000000)

State 1066 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  malloc_size=24u (00000000 00000000 00000000 00011000)

State 1072 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object4.se.next=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1073 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object4.se.key=NULL (00000000 00000000 00000000 00000000)

State 1074 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object4.se.value=NULL (00000000 00000000 00000000 00000000)

State 1075 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object4.$pad1=0u (00000000 00000000 00000000 00000000)

State 1076 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object4.user_id=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 1090 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  __cs_ptr=(const void *)&dynamic_object4.se.next (00000101 00000000 00000000 00000000)

State 1094 file ../workspace/multithread/_cs_generalized.c function push_0 line 1904 thread 0
----------------------------------------------------
  __cs_local_insert_td=&dynamic_object4 (00000101 00000000 00000000 00000000)

State 1096 file ../workspace/multithread/_cs_generalized.c function push_0 line 1906 thread 0
----------------------------------------------------
  dynamic_object4.user_id=2ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000010)

State 1098 file ../workspace/multithread/_cs_generalized.c function push_0 line 1908 thread 0
----------------------------------------------------
  dynamic_object4.se.value=(const void *)&dynamic_object4.se.next (00000101 00000000 00000000 00000000)

State 1100 file ../workspace/multithread/_cs_generalized.c function push_0 line 1912 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_ss=&mystack (00000011 00000000 00000000 00000000)

State 1102 file ../workspace/multithread/_cs_generalized.c function push_0 line 1915 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_se=&dynamic_object4.se (00000101 00000000 00000000 00000000)

State 1103 file ../workspace/multithread/_cs_generalized.c function push_0 line 1918 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 1105 file ../workspace/multithread/_cs_generalized.c function push_0 line 1925 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_14=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1934 function push_0
  (signed int)__cs_pc_cs[1] >= 132

State 1109 file ../workspace/multithread/_cs_generalized.c function push_0 line 1944 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_15=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1953 function push_0
  (signed int)__cs_pc_cs[1] >= 135

State 1113 file ../workspace/multithread/_cs_generalized.c function push_0 line 1960 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=&dynamic_object4.se (00000101 00000000 00000000 00000000)

State 1115 file ../workspace/multithread/_cs_generalized.c function push_0 line 1962 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1117 file ../workspace/multithread/_cs_generalized.c function push_0 line 1964 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=&dynamic_object3.se (00000100 00000000 00000000 00000000)

State 1118 file ../workspace/multithread/_cs_generalized.c function push_0 line 1965 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=0 (00000000)

State 1119 file ../workspace/multithread/_cs_generalized.c function push_0 line 1967 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=0 (00000000 00000000 00000000 00000000)

State 1124 file ../workspace/multithread/_cs_generalized.c function push_0 line 1976 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 1125 file ../workspace/multithread/_cs_generalized.c function push_0 line 1976 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 1129 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 1132 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 1137 file ../workspace/multithread/_cs_generalized.c function push_0 line 1978 thread 0
----------------------------------------------------
  dynamic_object4.se.next=&dynamic_object3.se (00000100 00000000 00000000 00000000)

State 1141 file ../workspace/multithread/_cs_generalized.c function push_0 line 1980 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 1142 file ../workspace/multithread/_cs_generalized.c function push_0 line 1980 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 1146 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1149 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 1154 file ../workspace/multithread/_cs_generalized.c function push_0 line 1982 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 1158 file ../workspace/multithread/_cs_generalized.c function push_0 line 1984 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 1159 file ../workspace/multithread/_cs_generalized.c function push_0 line 1984 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 1163 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 1166 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 1174 file ../workspace/multithread/_cs_generalized.c function push_0 line 1986 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 1175 file ../workspace/multithread/_cs_generalized.c function push_0 line 1986 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_push_original_top (00011100 00000000 00000000 00000000)

State 1176 file ../workspace/multithread/_cs_generalized.c function push_0 line 1986 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_push_new_top (00011101 00000000 00000000 00000000)

State 1177 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 696 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 1179 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 699 thread 0
----------------------------------------------------
  mystack.top[0]=&dynamic_object4.se (00000101 00000000 00000000 00000000)

State 1184 file ../workspace/multithread/_cs_generalized.c function push_0 line 1986 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=1 (00000001)

State 1188 file ../workspace/multithread/_cs_generalized.c function push_0 line 1988 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 1189 file ../workspace/multithread/_cs_generalized.c function push_0 line 1988 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 1193 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1196 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 1200 file ../workspace/multithread/_cs_generalized.c function push_0 line 1992 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_16=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2041 function push_0
  (signed int)__cs_pc_cs[1] >= 146

State 1203 file ../workspace/multithread/_cs_generalized.c function push_0 line 2043 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=1 (00000000 00000000 00000000 00000001)

State 1204 file ../workspace/multithread/_cs_generalized.c function push_0 line 2047 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_17=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2411 function push_0
  (signed int)__cs_pc_cs[1] >= 179

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2417 function push_0
  (signed int)__cs_pc_cs[1] >= 179

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2423 function push_0
  (signed int)__cs_pc_cs[1] >= 179

State 1212 file ../workspace/multithread/_cs_generalized.c function push_0 line 2432 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_24=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2438 function push_0
  (signed int)__cs_pc_cs[1] >= 181

State 1215 file ../workspace/multithread/_cs_generalized.c function push_0 line 2444 thread 0
----------------------------------------------------
  __cs_local_push_loop=3ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000011)

State 1217 file ../workspace/multithread/_cs_generalized.c function push_0 line 2450 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_23=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2456 function push_0
  (signed int)__cs_pc_cs[1] >= 183

State 1221 file ../workspace/multithread/_cs_generalized.c function push_0 line 2463 thread 0
----------------------------------------------------
  __cs_param_insert_s=&mystack (00000011 00000000 00000000 00000000)

State 1222 file ../workspace/multithread/_cs_generalized.c function push_0 line 2465 thread 0
----------------------------------------------------
  __cs_param_insert_id=3ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000011)

State 1227 file ../workspace/multithread/_cs_generalized.c function push_0 line 2468 thread 0
----------------------------------------------------
  __cs_size=24u (00000000 00000000 00000000 00011000)

State 1228 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  __cs_ptr=NULL (00000000 00000000 00000000 00000000)

State 1231 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  malloc_size=24u (00000000 00000000 00000000 00011000)

State 1237 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object5.se.next=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1238 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object5.se.key=NULL (00000000 00000000 00000000 00000000)

State 1239 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object5.se.value=NULL (00000000 00000000 00000000 00000000)

State 1240 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object5.$pad1=0u (00000000 00000000 00000000 00000000)

State 1241 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object5.user_id=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 1255 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  __cs_ptr=(const void *)&dynamic_object5.se.next (00000110 00000000 00000000 00000000)

State 1259 file ../workspace/multithread/_cs_generalized.c function push_0 line 2468 thread 0
----------------------------------------------------
  __cs_local_insert_td=&dynamic_object5 (00000110 00000000 00000000 00000000)

State 1261 file ../workspace/multithread/_cs_generalized.c function push_0 line 2470 thread 0
----------------------------------------------------
  dynamic_object5.user_id=3ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000011)

State 1263 file ../workspace/multithread/_cs_generalized.c function push_0 line 2472 thread 0
----------------------------------------------------
  dynamic_object5.se.value=(const void *)&dynamic_object5.se.next (00000110 00000000 00000000 00000000)

State 1265 file ../workspace/multithread/_cs_generalized.c function push_0 line 2476 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_ss=&mystack (00000011 00000000 00000000 00000000)

State 1267 file ../workspace/multithread/_cs_generalized.c function push_0 line 2479 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_se=&dynamic_object5.se (00000110 00000000 00000000 00000000)

State 1268 file ../workspace/multithread/_cs_generalized.c function push_0 line 2482 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 1270 file ../workspace/multithread/_cs_generalized.c function push_0 line 2489 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_14=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2498 function push_0
  (signed int)__cs_pc_cs[1] >= 192

State 1274 file ../workspace/multithread/_cs_generalized.c function push_0 line 2508 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_15=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2517 function push_0
  (signed int)__cs_pc_cs[1] >= 195

State 1278 file ../workspace/multithread/_cs_generalized.c function push_0 line 2524 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=&dynamic_object5.se (00000110 00000000 00000000 00000000)

State 1280 file ../workspace/multithread/_cs_generalized.c function push_0 line 2526 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1282 file ../workspace/multithread/_cs_generalized.c function push_0 line 2528 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=&dynamic_object4.se (00000101 00000000 00000000 00000000)

State 1283 file ../workspace/multithread/_cs_generalized.c function push_0 line 2529 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=0 (00000000)

State 1284 file ../workspace/multithread/_cs_generalized.c function push_0 line 2531 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=0 (00000000 00000000 00000000 00000000)

State 1289 file ../workspace/multithread/_cs_generalized.c function push_0 line 2540 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 1290 file ../workspace/multithread/_cs_generalized.c function push_0 line 2540 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 1294 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 1297 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 1302 file ../workspace/multithread/_cs_generalized.c function push_0 line 2542 thread 0
----------------------------------------------------
  dynamic_object5.se.next=&dynamic_object4.se (00000101 00000000 00000000 00000000)

State 1306 file ../workspace/multithread/_cs_generalized.c function push_0 line 2544 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 1307 file ../workspace/multithread/_cs_generalized.c function push_0 line 2544 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 1311 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1314 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 1319 file ../workspace/multithread/_cs_generalized.c function push_0 line 2546 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 1323 file ../workspace/multithread/_cs_generalized.c function push_0 line 2548 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 1324 file ../workspace/multithread/_cs_generalized.c function push_0 line 2548 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 1328 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 1331 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 1339 file ../workspace/multithread/_cs_generalized.c function push_0 line 2550 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 1340 file ../workspace/multithread/_cs_generalized.c function push_0 line 2550 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_push_original_top (00011110 00000000 00000000 00000000)

State 1341 file ../workspace/multithread/_cs_generalized.c function push_0 line 2550 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_push_new_top (00011111 00000000 00000000 00000000)

State 1342 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 696 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 1344 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 699 thread 0
----------------------------------------------------
  mystack.top[0]=&dynamic_object5.se (00000110 00000000 00000000 00000000)

State 1349 file ../workspace/multithread/_cs_generalized.c function push_0 line 2550 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=1 (00000001)

State 1353 file ../workspace/multithread/_cs_generalized.c function push_0 line 2552 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 1354 file ../workspace/multithread/_cs_generalized.c function push_0 line 2552 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 1358 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1361 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 1365 file ../workspace/multithread/_cs_generalized.c function push_0 line 2556 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_16=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2605 function push_0
  (signed int)__cs_pc_cs[1] >= 206

State 1368 file ../workspace/multithread/_cs_generalized.c function push_0 line 2607 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=1 (00000000 00000000 00000000 00000001)

State 1369 file ../workspace/multithread/_cs_generalized.c function push_0 line 2611 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_17=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2975 function push_0
  (signed int)__cs_pc_cs[1] >= 239

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2981 function push_0
  (signed int)__cs_pc_cs[1] >= 239

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2987 function push_0
  (signed int)__cs_pc_cs[1] >= 239

State 1377 file ../workspace/multithread/_cs_generalized.c function push_0 line 2996 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_24=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3002 function push_0
  (signed int)__cs_pc_cs[1] >= 241

State 1380 file ../workspace/multithread/_cs_generalized.c function push_0 line 3008 thread 0
----------------------------------------------------
  __cs_local_push_loop=4ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000100)

State 1382 file ../workspace/multithread/_cs_generalized.c function push_0 line 3014 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_23=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3020 function push_0
  (signed int)__cs_pc_cs[1] >= 243

State 1386 file ../workspace/multithread/_cs_generalized.c function push_0 line 3027 thread 0
----------------------------------------------------
  __cs_param_insert_s=&mystack (00000011 00000000 00000000 00000000)

State 1387 file ../workspace/multithread/_cs_generalized.c function push_0 line 3029 thread 0
----------------------------------------------------
  __cs_param_insert_id=4ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000100)

State 1392 file ../workspace/multithread/_cs_generalized.c function push_0 line 3032 thread 0
----------------------------------------------------
  __cs_size=24u (00000000 00000000 00000000 00011000)

State 1393 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  __cs_ptr=NULL (00000000 00000000 00000000 00000000)

State 1396 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  malloc_size=24u (00000000 00000000 00000000 00011000)

State 1402 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object6.se.next=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1403 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object6.se.key=NULL (00000000 00000000 00000000 00000000)

State 1404 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object6.se.value=NULL (00000000 00000000 00000000 00000000)

State 1405 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object6.$pad1=0u (00000000 00000000 00000000 00000000)

State 1406 file <builtin-library-malloc> function malloc line 38 thread 0
----------------------------------------------------
  dynamic_object6.user_id=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 1420 file ../workspace/multithread/_cs_generalized.c function __cs_safe_malloc line 65 thread 0
----------------------------------------------------
  __cs_ptr=(const void *)&dynamic_object6.se.next (00000111 00000000 00000000 00000000)

State 1424 file ../workspace/multithread/_cs_generalized.c function push_0 line 3032 thread 0
----------------------------------------------------
  __cs_local_insert_td=&dynamic_object6 (00000111 00000000 00000000 00000000)

State 1426 file ../workspace/multithread/_cs_generalized.c function push_0 line 3034 thread 0
----------------------------------------------------
  dynamic_object6.user_id=4ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000100)

State 1428 file ../workspace/multithread/_cs_generalized.c function push_0 line 3036 thread 0
----------------------------------------------------
  dynamic_object6.se.value=(const void *)&dynamic_object6.se.next (00000111 00000000 00000000 00000000)

State 1430 file ../workspace/multithread/_cs_generalized.c function push_0 line 3040 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_ss=&mystack (00000011 00000000 00000000 00000000)

State 1432 file ../workspace/multithread/_cs_generalized.c function push_0 line 3043 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_se=&dynamic_object6.se (00000111 00000000 00000000 00000000)

State 1433 file ../workspace/multithread/_cs_generalized.c function push_0 line 3046 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 1435 file ../workspace/multithread/_cs_generalized.c function push_0 line 3053 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_14=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3062 function push_0
  (signed int)__cs_pc_cs[1] >= 252

State 1439 file ../workspace/multithread/_cs_generalized.c function push_0 line 3072 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_15=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3081 function push_0
  (signed int)__cs_pc_cs[1] >= 255

State 1443 file ../workspace/multithread/_cs_generalized.c function push_0 line 3088 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=&dynamic_object6.se (00000111 00000000 00000000 00000000)

State 1445 file ../workspace/multithread/_cs_generalized.c function push_0 line 3090 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1447 file ../workspace/multithread/_cs_generalized.c function push_0 line 3092 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=&dynamic_object5.se (00000110 00000000 00000000 00000000)

State 1448 file ../workspace/multithread/_cs_generalized.c function push_0 line 3093 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=0 (00000000)

State 1449 file ../workspace/multithread/_cs_generalized.c function push_0 line 3095 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=0 (00000000 00000000 00000000 00000000)

State 1454 file ../workspace/multithread/_cs_generalized.c function push_0 line 3104 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 1455 file ../workspace/multithread/_cs_generalized.c function push_0 line 3104 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 1459 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 1462 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 1467 file ../workspace/multithread/_cs_generalized.c function push_0 line 3106 thread 0
----------------------------------------------------
  dynamic_object6.se.next=&dynamic_object5.se (00000110 00000000 00000000 00000000)

State 1471 file ../workspace/multithread/_cs_generalized.c function push_0 line 3108 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 1472 file ../workspace/multithread/_cs_generalized.c function push_0 line 3108 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 1476 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1479 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 1484 file ../workspace/multithread/_cs_generalized.c function push_0 line 3110 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 1488 file ../workspace/multithread/_cs_generalized.c function push_0 line 3112 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 1489 file ../workspace/multithread/_cs_generalized.c function push_0 line 3112 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 1493 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 1496 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 1504 file ../workspace/multithread/_cs_generalized.c function push_0 line 3114 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 1505 file ../workspace/multithread/_cs_generalized.c function push_0 line 3114 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_push_original_top (00100000 00000000 00000000 00000000)

State 1506 file ../workspace/multithread/_cs_generalized.c function push_0 line 3114 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_push_new_top (00100001 00000000 00000000 00000000)

State 1507 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 696 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 1509 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 699 thread 0
----------------------------------------------------
  mystack.top[0]=&dynamic_object6.se (00000111 00000000 00000000 00000000)

State 1514 file ../workspace/multithread/_cs_generalized.c function push_0 line 3114 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=1 (00000001)

State 1518 file ../workspace/multithread/_cs_generalized.c function push_0 line 3116 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 1519 file ../workspace/multithread/_cs_generalized.c function push_0 line 3116 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 1523 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1526 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 1530 file ../workspace/multithread/_cs_generalized.c function push_0 line 3120 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_16=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3169 function push_0
  (signed int)__cs_pc_cs[1] >= 266

State 1533 file ../workspace/multithread/_cs_generalized.c function push_0 line 3171 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=1 (00000000 00000000 00000000 00000001)

State 1534 file ../workspace/multithread/_cs_generalized.c function push_0 line 3175 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_17=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3539 function push_0
  (signed int)__cs_pc_cs[1] >= 299

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3545 function push_0
  (signed int)__cs_pc_cs[1] >= 299

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3551 function push_0
  (signed int)__cs_pc_cs[1] >= 299

State 1542 file ../workspace/multithread/_cs_generalized.c function push_0 line 3560 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_24=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3566 function push_0
  (signed int)__cs_pc_cs[1] >= 301

State 1545 file ../workspace/multithread/_cs_generalized.c function push_0 line 3572 thread 0
----------------------------------------------------
  __cs_local_push_loop=5ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000101)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3574 function push_0
  !(__cs_local_push_loop < (unsigned long long int)5)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3576 function push_0
  (signed int)__cs_pc_cs[1] >= 302

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3580 function push_0
  (signed int)__cs_pc_cs[1] >= 302

State 1552 file ../workspace/multithread/_cs_generalized.c function push_0 line 3584 thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 1553 file ../workspace/multithread/_cs_generalized.c function push_0 line 3584 thread 0
----------------------------------------------------
  __cs_thread_index=1u (00000000 00000000 00000000 00000001)

State 1554 file ../workspace/multithread/_cs_generalized.c function __cs_exit line 102 thread 0
----------------------------------------------------
  __cs_thread_joinargs[1]=NULL (00000000 00000000 00000000 00000000)

State 1559 file ../workspace/multithread/_cs_generalized.c function main line 7730 thread 0
----------------------------------------------------
  __cs_pc[1]=302 (10010111 0)

State 1560 file ../workspace/multithread/_cs_generalized.c function main line 7733 thread 0
----------------------------------------------------
  __cs_tmp_t2_r0=387 (11000001 1)

State 1562 file ../workspace/multithread/_cs_generalized.c function main line 7736 thread 0
----------------------------------------------------
  __cs_pc_cs[2]=387 (01100000 11)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7737 function main
  (signed int)__cs_pc_cs[2] <= 387

State 1566 file ../workspace/multithread/_cs_generalized.c function main line 7738 thread 0
----------------------------------------------------
  __cs_param_pop___cs_unused=NULL (00000000 00000000 00000000 00000000)

State 1568 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3590 thread 0
----------------------------------------------------
  __cs_local_pop_res=0 (00000000 00000000 00000000 00000000)

State 1569 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3592 thread 0
----------------------------------------------------
  __cs_local_pop_count=0 (00000000 00000000 00000000 00000000)

State 1570 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3594 thread 0
----------------------------------------------------
  __cs_local_pop_loop=0 (00000000 00000000 00000000 00000000)

State 1572 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3600 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_25=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3606 function pop_0
  (signed int)__cs_pc_cs[2] >= 3

State 1576 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3614 thread 0
----------------------------------------------------
  __cs_param_delete_s=&mystack (00000011 00000000 00000000 00000000)

State 1578 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3622 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_ss=&mystack (00000011 00000000 00000000 00000000)

State 1580 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3625 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_se=&__cs_local_delete_se (00001000 00000000 00000000 00000000)

State 1581 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3628 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 1583 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3635 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3644 function pop_0
  (signed int)__cs_pc_cs[2] >= 9

State 1587 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3654 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3663 function pop_0
  (signed int)__cs_pc_cs[2] >= 12

State 1593 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3670 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 1594 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3670 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 1598 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 1601 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 1608 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3672 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 1609 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3672 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 1613 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1616 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 1621 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3674 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1623 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3676 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=&dynamic_object6.se (00000111 00000000 00000000 00000000)

State 1624 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3678 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=0 (00000000 00000000 00000000 00000000)

State 1625 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3682 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=0 (00000000 00000000 00000000 00000000)

State 1626 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3687 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3696 function pop_0
  (signed int)__cs_pc_cs[2] >= 17

State 1630 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3699 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 1632 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3701 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=&dynamic_object5.se (00000110 00000000 00000000 00000000)

State 1636 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3703 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 1637 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3703 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 1641 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 1644 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 1652 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3705 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 1653 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3705 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_pop_original_top (00100010 00000000 00000000 00000000)

State 1654 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3705 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_pop_new_top (00100011 00000000 00000000 00000000)

State 1655 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 696 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 1657 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 699 thread 0
----------------------------------------------------
  mystack.top[0]=&dynamic_object5.se (00000110 00000000 00000000 00000000)

State 1662 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3705 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_result=1 (00000001)

State 1666 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3707 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 1667 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3707 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 1671 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1674 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 1678 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3711 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3764 function pop_0
  (signed int)__cs_pc_cs[2] >= 25

State 1681 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3766 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=1 (00000000 00000000 00000000 00000001)

State 1682 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3770 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10=FALSE (00000000)

State 1684 file ../workspace/multithread/_cs_generalized.c function pop_0 line 3779 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3781 function pop_0
  !(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3783 function pop_0
  (signed int)__cs_pc_cs[2] >= 26

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 4305 function pop_0
  (signed int)__cs_pc_cs[2] >= 72

State 1692 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4309 thread 0
----------------------------------------------------
  __cs_local_delete_se=&dynamic_object6.se (00000111 00000000 00000000 00000000)

State 1693 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4310 thread 0
----------------------------------------------------
  __cs_retval__lfds711_stack_pop_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 4314 function pop_0
  (signed int)__cs_pc_cs[2] >= 73

State 1695 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4319 thread 0
----------------------------------------------------
  __cs_local_delete_res=1 (00000000 00000000 00000000 00000001)

State 1696 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4323 thread 0
----------------------------------------------------
  __cs_local_delete___cs_tmp_if_cond_19=FALSE (00000000)

State 1699 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4332 thread 0
----------------------------------------------------
  __cs_local_delete_temp_td=&dynamic_object6 (00000111 00000000 00000000 00000000)

State 1701 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4335 thread 0
----------------------------------------------------
  __cs_local_delete_id_popped=4 (00000000 00000000 00000000 00000100)

State 1705 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4337 thread 0
----------------------------------------------------
  format="%llu\n" (00100100 00000000 00000000 00000000)

State 1711 file <builtin-library-printf> function printf line 19 thread 0
----------------------------------------------------
  va_args[0]=(const void *)&va_arg!0 (00100101 00000000 00000000 00000000)
%llu


State 1717 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4338 thread 0
----------------------------------------------------
  __cs_retval__delete_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 4342 function pop_0
  (signed int)__cs_pc_cs[2] >= 76

State 1720 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4352 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_26=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 4358 function pop_0
  (signed int)__cs_pc_cs[2] >= 78

State 1723 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4364 thread 0
----------------------------------------------------
  __cs_local_pop_loop=1 (00000000 00000000 00000000 00000001)

State 1725 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4370 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_25=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 4376 function pop_0
  (signed int)__cs_pc_cs[2] >= 80

State 1729 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4384 thread 0
----------------------------------------------------
  __cs_param_delete_s=&mystack (00000011 00000000 00000000 00000000)

State 1731 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4392 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_ss=&mystack (00000011 00000000 00000000 00000000)

State 1733 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4395 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_se=&__cs_local_delete_se (00001001 00000000 00000000 00000000)

State 1734 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4398 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 1736 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4405 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 4414 function pop_0
  (signed int)__cs_pc_cs[2] >= 86

State 1740 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4424 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 4433 function pop_0
  (signed int)__cs_pc_cs[2] >= 89

State 1746 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4440 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 1747 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4440 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 1751 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 1754 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 1761 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4442 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 1762 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4442 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 1766 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1769 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 1774 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4444 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1776 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4446 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=&dynamic_object5.se (00000110 00000000 00000000 00000000)

State 1777 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4448 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=0 (00000000 00000000 00000000 00000000)

State 1778 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4452 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=0 (00000000 00000000 00000000 00000000)

State 1779 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4457 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 4466 function pop_0
  (signed int)__cs_pc_cs[2] >= 94

State 1783 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4469 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 1785 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4471 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=&dynamic_object4.se (00000101 00000000 00000000 00000000)

State 1789 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4473 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 1790 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4473 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 1794 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 1797 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 1805 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4475 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 1806 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4475 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_pop_original_top (00100111 00000000 00000000 00000000)

State 1807 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4475 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_pop_new_top (00101000 00000000 00000000 00000000)

State 1808 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 696 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 1810 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 699 thread 0
----------------------------------------------------
  mystack.top[0]=&dynamic_object4.se (00000101 00000000 00000000 00000000)

State 1815 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4475 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_result=1 (00000001)

State 1819 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4477 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 1820 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4477 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 1824 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1827 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 1831 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4481 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 4534 function pop_0
  (signed int)__cs_pc_cs[2] >= 102

State 1834 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4536 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=1 (00000000 00000000 00000000 00000001)

State 1835 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4540 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10=FALSE (00000000)

State 1837 file ../workspace/multithread/_cs_generalized.c function pop_0 line 4549 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 4551 function pop_0
  !(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 4553 function pop_0
  (signed int)__cs_pc_cs[2] >= 103

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5075 function pop_0
  (signed int)__cs_pc_cs[2] >= 149

State 1845 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5079 thread 0
----------------------------------------------------
  __cs_local_delete_se=&dynamic_object5.se (00000110 00000000 00000000 00000000)

State 1846 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5080 thread 0
----------------------------------------------------
  __cs_retval__lfds711_stack_pop_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5084 function pop_0
  (signed int)__cs_pc_cs[2] >= 150

State 1848 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5089 thread 0
----------------------------------------------------
  __cs_local_delete_res=1 (00000000 00000000 00000000 00000001)

State 1849 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5093 thread 0
----------------------------------------------------
  __cs_local_delete___cs_tmp_if_cond_19=FALSE (00000000)

State 1852 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5102 thread 0
----------------------------------------------------
  __cs_local_delete_temp_td=&dynamic_object5 (00000110 00000000 00000000 00000000)

State 1854 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5105 thread 0
----------------------------------------------------
  __cs_local_delete_id_popped=3 (00000000 00000000 00000000 00000011)

State 1858 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5107 thread 0
----------------------------------------------------
  format="%llu\n" (00100100 00000000 00000000 00000000)

State 1864 file <builtin-library-printf> function printf line 19 thread 0
----------------------------------------------------
  va_args$0[0]=(const void *)&va_arg$0!0 (00101001 00000000 00000000 00000000)
%llu


State 1870 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5108 thread 0
----------------------------------------------------
  __cs_retval__delete_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5112 function pop_0
  (signed int)__cs_pc_cs[2] >= 153

State 1873 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5122 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_26=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5128 function pop_0
  (signed int)__cs_pc_cs[2] >= 155

State 1876 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5134 thread 0
----------------------------------------------------
  __cs_local_pop_loop=2 (00000000 00000000 00000000 00000010)

State 1878 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5140 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_25=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5146 function pop_0
  (signed int)__cs_pc_cs[2] >= 157

State 1882 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5154 thread 0
----------------------------------------------------
  __cs_param_delete_s=&mystack (00000011 00000000 00000000 00000000)

State 1884 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5162 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_ss=&mystack (00000011 00000000 00000000 00000000)

State 1886 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5165 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_se=&__cs_local_delete_se (00001010 00000000 00000000 00000000)

State 1887 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5168 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 1889 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5175 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5184 function pop_0
  (signed int)__cs_pc_cs[2] >= 163

State 1893 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5194 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5203 function pop_0
  (signed int)__cs_pc_cs[2] >= 166

State 1899 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5210 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 1900 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5210 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 1904 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 1907 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 1914 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5212 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 1915 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5212 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 1919 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1922 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 1927 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5214 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1929 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5216 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=&dynamic_object4.se (00000101 00000000 00000000 00000000)

State 1930 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5218 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=0 (00000000 00000000 00000000 00000000)

State 1931 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5222 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=0 (00000000 00000000 00000000 00000000)

State 1932 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5227 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5236 function pop_0
  (signed int)__cs_pc_cs[2] >= 171

State 1936 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5239 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 1938 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5241 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=&dynamic_object3.se (00000100 00000000 00000000 00000000)

State 1942 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5243 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 1943 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5243 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

State 1947 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 1950 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 1958 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5245 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 1959 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5245 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_pop_original_top (00101011 00000000 00000000 00000000)

State 1960 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5245 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_pop_new_top (00101100 00000000 00000000 00000000)

State 1961 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 696 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 1963 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 699 thread 0
----------------------------------------------------
  mystack.top[0]=&dynamic_object3.se (00000100 00000000 00000000 00000000)

State 1968 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5245 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_result=1 (00000001)

State 1972 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5247 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 1973 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5247 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

State 1977 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1980 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 1984 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5251 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5304 function pop_0
  (signed int)__cs_pc_cs[2] >= 179

State 1987 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5306 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=1 (00000000 00000000 00000000 00000001)

State 1988 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5310 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10=FALSE (00000000)

State 1990 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5319 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5321 function pop_0
  !(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5323 function pop_0
  (signed int)__cs_pc_cs[2] >= 180

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5845 function pop_0
  (signed int)__cs_pc_cs[2] >= 226

State 1998 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5849 thread 0
----------------------------------------------------
  __cs_local_delete_se=&dynamic_object4.se (00000101 00000000 00000000 00000000)

State 1999 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5850 thread 0
----------------------------------------------------
  __cs_retval__lfds711_stack_pop_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5854 function pop_0
  (signed int)__cs_pc_cs[2] >= 227

State 2001 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5859 thread 0
----------------------------------------------------
  __cs_local_delete_res=1 (00000000 00000000 00000000 00000001)

State 2002 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5863 thread 0
----------------------------------------------------
  __cs_local_delete___cs_tmp_if_cond_19=FALSE (00000000)

State 2005 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5872 thread 0
----------------------------------------------------
  __cs_local_delete_temp_td=&dynamic_object4 (00000101 00000000 00000000 00000000)

State 2007 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5875 thread 0
----------------------------------------------------
  __cs_local_delete_id_popped=2 (00000000 00000000 00000000 00000010)

State 2011 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5877 thread 0
----------------------------------------------------
  format="%llu\n" (00100100 00000000 00000000 00000000)

State 2017 file <builtin-library-printf> function printf line 19 thread 0
----------------------------------------------------
  va_args$1[0]=(const void *)&va_arg$1!0 (00101101 00000000 00000000 00000000)
%llu


State 2023 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5878 thread 0
----------------------------------------------------
  __cs_retval__delete_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5882 function pop_0
  (signed int)__cs_pc_cs[2] >= 230

State 2026 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5892 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_26=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5898 function pop_0
  (signed int)__cs_pc_cs[2] >= 232

State 2029 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5904 thread 0
----------------------------------------------------
  __cs_local_pop_loop=3 (00000000 00000000 00000000 00000011)

State 2031 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5910 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_25=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 5916 function pop_0
  (signed int)__cs_pc_cs[2] >= 234

State 2035 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5924 thread 0
----------------------------------------------------
  __cs_param_delete_s=&mystack (00000011 00000000 00000000 00000000)

State 2037 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5932 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_ss=&mystack (00000011 00000000 00000000 00000000)

State 2039 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5935 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_se=&__cs_local_delete_se (00001011 00000000 00000000 00000000)

State 2040 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5938 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 2042 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5945 thread 0
=======
  file ../workspace/multithread/_cs_generalized.c line 1222 function push_0
  (signed int)__cs_pc_cs[1] >= 59

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1228 function push_0
  (signed int)__cs_pc_cs[1] >= 59

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1234 function push_0
  (signed int)__cs_pc_cs[1] >= 59

State 1108 file ../workspace/multithread/_cs_generalized.c function push_0 line 1243 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_25=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1249 function push_0
  (signed int)__cs_pc_cs[1] >= 61

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1254 function push_0
  (signed int)__cs_pc_cs[1] >= 61

State 1114 file ../workspace/multithread/_cs_generalized.c function push_0 line 1258 thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 1115 file ../workspace/multithread/_cs_generalized.c function push_0 line 1258 thread 0
----------------------------------------------------
  __cs_thread_index=1u (00000000 00000000 00000000 00000001)

State 1116 file ../workspace/multithread/_cs_generalized.c function __cs_exit line 102 thread 0
----------------------------------------------------
  __cs_thread_joinargs[1]=NULL (00000000 00000000 00000000 00000000)

State 1121 file ../workspace/multithread/_cs_generalized.c function main line 3383 thread 0
----------------------------------------------------
  __cs_pc[1]=61 (0111101)

State 1122 file ../workspace/multithread/_cs_generalized.c function main line 3386 thread 0
----------------------------------------------------
  __cs_tmp_t2_r1=2 (0000010)

State 1124 file ../workspace/multithread/_cs_generalized.c function main line 3389 thread 0
----------------------------------------------------
  __cs_pc_cs[2]=78 (01001110)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3390 function main
  (signed int)__cs_pc_cs[2] >= (signed int)__cs_pc[2]

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3391 function main
  (signed int)__cs_pc_cs[2] <= 78

State 1129 file ../workspace/multithread/_cs_generalized.c function main line 3392 thread 0
----------------------------------------------------
  __cs_param_pop___cs_unused=NULL (00000000 00000000 00000000 00000000)

State 1213 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1953 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_27=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1959 function pop_0
  (signed int)__cs_pc_cs[2] >= 78

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 1964 function pop_0
  (signed int)__cs_pc_cs[2] >= 78

State 1219 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1968 thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 1220 file ../workspace/multithread/_cs_generalized.c function pop_0 line 1968 thread 0
----------------------------------------------------
  __cs_thread_index=2u (00000000 00000000 00000000 00000010)

State 1221 file ../workspace/multithread/_cs_generalized.c function __cs_exit line 102 thread 0
----------------------------------------------------
  __cs_thread_joinargs[2]=NULL (00000000 00000000 00000000 00000000)

State 1226 file ../workspace/multithread/_cs_generalized.c function main line 3393 thread 0
----------------------------------------------------
  __cs_pc[2]=78 (1001110)

State 1227 file ../workspace/multithread/_cs_generalized.c function main line 3395 thread 0
----------------------------------------------------
  __cs_tmp_t0_r2=124 (1111100)

State 1229 file ../workspace/multithread/_cs_generalized.c function main line 3398 thread 0
----------------------------------------------------
  __cs_pc_cs[0]=126 (01111110)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3399 function main
  (signed int)__cs_pc_cs[0] >= (signed int)__cs_pc[0]

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3400 function main
  (signed int)__cs_pc_cs[0] <= 126

State 1239 file ../workspace/multithread/_cs_generalized.c function main_thread line 2212 thread 0
----------------------------------------------------
  __cs_id=1 (00000000 00000000 00000000 00000001)

State 1240 file ../workspace/multithread/_cs_generalized.c function main_thread line 2212 thread 0
----------------------------------------------------
  __cs_value_ptr=((const void **)NULL) (00000000 00000000 00000000 00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 96 function __cs_join
  __cs_pc[__cs_id] == __cs_thread_lines[__cs_id]

State 1248 file ../workspace/multithread/_cs_generalized.c function main_thread line 2214 thread 0
----------------------------------------------------
  __cs_id=2 (00000000 00000000 00000000 00000010)

State 1249 file ../workspace/multithread/_cs_generalized.c function main_thread line 2214 thread 0
----------------------------------------------------
  __cs_value_ptr=((const void **)NULL) (00000000 00000000 00000000 00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 96 function __cs_join
  __cs_pc[__cs_id] == __cs_thread_lines[__cs_id]

State 1255 file ../workspace/multithread/_cs_generalized.c function main_thread line 2219 thread 0
----------------------------------------------------
  __cs_param_is_empty_s=&mystack (00000011 00000000 00000000 00000000)

State 1257 file ../workspace/multithread/_cs_generalized.c function main_thread line 2226 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_ss=&mystack (00000011 00000000 00000000 00000000)

State 1259 file ../workspace/multithread/_cs_generalized.c function main_thread line 2229 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_se=&__cs_local_is_empty_se (00000010 00000000 00000000 00000000)

State 1260 file ../workspace/multithread/_cs_generalized.c function main_thread line 2232 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 1262 file ../workspace/multithread/_cs_generalized.c function main_thread line 2239 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6=FALSE (00000000)

Assumption:
<<<<<<< HEAD
  file ../workspace/multithread/_cs_generalized.c line 5954 function pop_0
  (signed int)__cs_pc_cs[2] >= 240

State 2046 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5964 thread 0
=======
  file ../workspace/multithread/_cs_generalized.c line 2248 function main_thread
  (signed int)__cs_pc_cs[0] >= 10

State 1266 file ../workspace/multithread/_cs_generalized.c function main_thread line 2258 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7=FALSE (00000000)

Assumption:
<<<<<<< HEAD
  file ../workspace/multithread/_cs_generalized.c line 5973 function pop_0
  (signed int)__cs_pc_cs[2] >= 243

State 2052 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5980 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 2053 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5980 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)
=======
  file ../workspace/multithread/_cs_generalized.c line 2267 function main_thread
  (signed int)__cs_pc_cs[0] >= 13

State 1272 file ../workspace/multithread/_cs_generalized.c function main_thread line 2274 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 1273 file ../workspace/multithread/_cs_generalized.c function main_thread line 2274 thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)
>>>>>>> origin/main

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

<<<<<<< HEAD
State 2057 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 2060 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 2067 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5982 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 2068 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5982 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)
=======
State 1277 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=1 (00000000 00000000 00000000 00000001)

State 1280 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 1287 file ../workspace/multithread/_cs_generalized.c function main_thread line 2276 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 1288 file ../workspace/multithread/_cs_generalized.c function main_thread line 2276 thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)
>>>>>>> origin/main

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

<<<<<<< HEAD
State 2072 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 2075 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 2080 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5984 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 2082 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5986 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=&dynamic_object3.se (00000100 00000000 00000000 00000000)

State 2083 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5988 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=0 (00000000 00000000 00000000 00000000)

State 2084 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5992 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=0 (00000000 00000000 00000000 00000000)

State 2085 file ../workspace/multithread/_cs_generalized.c function pop_0 line 5997 thread 0
=======
State 1292 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1295 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 1300 file ../workspace/multithread/_cs_generalized.c function main_thread line 2278 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1302 file ../workspace/multithread/_cs_generalized.c function main_thread line 2280 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=&dynamic_object6.se (00000110 00000000 00000000 00000000)

State 1303 file ../workspace/multithread/_cs_generalized.c function main_thread line 2282 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=0 (00000000 00000000 00000000 00000000)

State 1304 file ../workspace/multithread/_cs_generalized.c function main_thread line 2286 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=0 (00000000 00000000 00000000 00000000)

State 1305 file ../workspace/multithread/_cs_generalized.c function main_thread line 2291 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8=FALSE (00000000)

Assumption:
<<<<<<< HEAD
  file ../workspace/multithread/_cs_generalized.c line 6006 function pop_0
  (signed int)__cs_pc_cs[2] >= 248

State 2089 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6009 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 2091 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6011 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=&dynamic_object2.se (00000010 00000000 00000000 00000000)

State 2095 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6013 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 2096 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6013 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)
=======
  file ../workspace/multithread/_cs_generalized.c line 2300 function main_thread
  (signed int)__cs_pc_cs[0] >= 18

State 1309 file ../workspace/multithread/_cs_generalized.c function main_thread line 2303 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 1311 file ../workspace/multithread/_cs_generalized.c function main_thread line 2305 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1315 file ../workspace/multithread/_cs_generalized.c function main_thread line 2307 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 1316 file ../workspace/multithread/_cs_generalized.c function main_thread line 2307 thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)
>>>>>>> origin/main

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

<<<<<<< HEAD
State 2100 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 2103 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 2111 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6015 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 2112 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6015 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_pop_original_top (00101111 00000000 00000000 00000000)

State 2113 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6015 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_pop_new_top (00110000 00000000 00000000 00000000)

State 2114 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 696 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 2116 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 699 thread 0
----------------------------------------------------
  mystack.top[0]=&dynamic_object2.se (00000010 00000000 00000000 00000000)

State 2121 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6015 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_result=1 (00000001)

State 2125 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6017 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 2126 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6017 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)
=======
State 1320 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=1 (00000000 00000000 00000000 00000001)

State 1323 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 1331 file ../workspace/multithread/_cs_generalized.c function main_thread line 2309 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 1332 file ../workspace/multithread/_cs_generalized.c function main_thread line 2309 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_pop_original_top (00010010 00000000 00000000 00000000)

State 1333 file ../workspace/multithread/_cs_generalized.c function main_thread line 2309 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_pop_new_top (00010011 00000000 00000000 00000000)

State 1334 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 696 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 1336 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 699 thread 0
----------------------------------------------------
  mystack.top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1341 file ../workspace/multithread/_cs_generalized.c function main_thread line 2309 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_result=1 (00000001)

State 1345 file ../workspace/multithread/_cs_generalized.c function main_thread line 2311 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 1346 file ../workspace/multithread/_cs_generalized.c function main_thread line 2311 thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)
>>>>>>> origin/main

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

<<<<<<< HEAD
State 2130 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 2133 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 2137 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6021 thread 0
=======
State 1350 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1353 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 1357 file ../workspace/multithread/_cs_generalized.c function main_thread line 2315 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9=FALSE (00000000)

Assumption:
<<<<<<< HEAD
  file ../workspace/multithread/_cs_generalized.c line 6074 function pop_0
  (signed int)__cs_pc_cs[2] >= 256

State 2140 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6076 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=1 (00000000 00000000 00000000 00000001)

State 2141 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6080 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10=FALSE (00000000)

State 2143 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6089 thread 0
=======
  file ../workspace/multithread/_cs_generalized.c line 2356 function main_thread
  (signed int)__cs_pc_cs[0] >= 26

State 1360 file ../workspace/multithread/_cs_generalized.c function main_thread line 2358 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=1 (00000000 00000000 00000000 00000001)

State 1361 file ../workspace/multithread/_cs_generalized.c function main_thread line 2362 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10=FALSE (00000000)

State 1363 file ../workspace/multithread/_cs_generalized.c function main_thread line 2371 thread 0
>>>>>>> origin/main
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=1 (00000000 00000000 00000000 00000001)

Assumption:
<<<<<<< HEAD
  file ../workspace/multithread/_cs_generalized.c line 6091 function pop_0
  !(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 6093 function pop_0
  (signed int)__cs_pc_cs[2] >= 257

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 6615 function pop_0
  (signed int)__cs_pc_cs[2] >= 303

State 2151 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6619 thread 0
----------------------------------------------------
  __cs_local_delete_se=&dynamic_object3.se (00000100 00000000 00000000 00000000)

State 2152 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6620 thread 0
----------------------------------------------------
  __cs_retval__lfds711_stack_pop_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 6624 function pop_0
  (signed int)__cs_pc_cs[2] >= 304

State 2154 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6629 thread 0
----------------------------------------------------
  __cs_local_delete_res=1 (00000000 00000000 00000000 00000001)

State 2155 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6633 thread 0
----------------------------------------------------
  __cs_local_delete___cs_tmp_if_cond_19=FALSE (00000000)

State 2158 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6642 thread 0
----------------------------------------------------
  __cs_local_delete_temp_td=&dynamic_object3 (00000100 00000000 00000000 00000000)

State 2160 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6645 thread 0
----------------------------------------------------
  __cs_local_delete_id_popped=1 (00000000 00000000 00000000 00000001)

State 2164 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6647 thread 0
----------------------------------------------------
  format="%llu\n" (00100100 00000000 00000000 00000000)

State 2170 file <builtin-library-printf> function printf line 19 thread 0
----------------------------------------------------
  va_args$2[0]=(const void *)&va_arg$2!0 (00110001 00000000 00000000 00000000)
%llu


State 2176 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6648 thread 0
----------------------------------------------------
  __cs_retval__delete_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 6652 function pop_0
  (signed int)__cs_pc_cs[2] >= 307

State 2179 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6662 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_26=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 6668 function pop_0
  (signed int)__cs_pc_cs[2] >= 309

State 2182 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6674 thread 0
----------------------------------------------------
  __cs_local_pop_loop=4 (00000000 00000000 00000000 00000100)

State 2184 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6680 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_25=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 6686 function pop_0
  (signed int)__cs_pc_cs[2] >= 311

State 2188 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6694 thread 0
----------------------------------------------------
  __cs_param_delete_s=&mystack (00000011 00000000 00000000 00000000)

State 2190 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6702 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_ss=&mystack (00000011 00000000 00000000 00000000)

State 2192 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6705 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_se=&__cs_local_delete_se (00001100 00000000 00000000 00000000)

State 2193 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6708 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 2195 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6715 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 6724 function pop_0
  (signed int)__cs_pc_cs[2] >= 317

State 2199 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6734 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 6743 function pop_0
  (signed int)__cs_pc_cs[2] >= 320

State 2205 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6750 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 2206 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6750 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)
=======
  file ../workspace/multithread/_cs_generalized.c line 2373 function main_thread
  !(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2375 function main_thread
  (signed int)__cs_pc_cs[0] >= 27

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2837 function main_thread
  (signed int)__cs_pc_cs[0] >= 73

State 1371 file ../workspace/multithread/_cs_generalized.c function main_thread line 2841 thread 0
----------------------------------------------------
  __cs_local_is_empty_se=&dynamic_object6.se (00000110 00000000 00000000 00000000)

State 1372 file ../workspace/multithread/_cs_generalized.c function main_thread line 2842 thread 0
----------------------------------------------------
  __cs_retval__lfds711_stack_pop_2=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2846 function main_thread
  (signed int)__cs_pc_cs[0] >= 74

State 1374 file ../workspace/multithread/_cs_generalized.c function main_thread line 2851 thread 0
----------------------------------------------------
  __cs_local_is_empty_res=1 (00000000 00000000 00000000 00000001)

State 1375 file ../workspace/multithread/_cs_generalized.c function main_thread line 2855 thread 0
----------------------------------------------------
  __cs_local_is_empty___cs_tmp_if_cond_23=TRUE (00000001)

State 1378 file ../workspace/multithread/_cs_generalized.c function main_thread line 2861 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_ss=&mystack (00000011 00000000 00000000 00000000)

State 1380 file ../workspace/multithread/_cs_generalized.c function main_thread line 2864 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_se=&dynamic_object6.se (00000110 00000000 00000000 00000000)

State 1381 file ../workspace/multithread/_cs_generalized.c function main_thread line 2867 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 1383 file ../workspace/multithread/_cs_generalized.c function main_thread line 2874 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_14=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2883 function main_thread
  (signed int)__cs_pc_cs[0] >= 79

State 1387 file ../workspace/multithread/_cs_generalized.c function main_thread line 2893 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_15=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2902 function main_thread
  (signed int)__cs_pc_cs[0] >= 82

State 1391 file ../workspace/multithread/_cs_generalized.c function main_thread line 2909 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=&dynamic_object6.se (00000110 00000000 00000000 00000000)

State 1393 file ../workspace/multithread/_cs_generalized.c function main_thread line 2911 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1395 file ../workspace/multithread/_cs_generalized.c function main_thread line 2913 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1396 file ../workspace/multithread/_cs_generalized.c function main_thread line 2914 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=0 (00000000)

State 1397 file ../workspace/multithread/_cs_generalized.c function main_thread line 2916 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=0 (00000000 00000000 00000000 00000000)

State 1402 file ../workspace/multithread/_cs_generalized.c function main_thread line 2925 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 1403 file ../workspace/multithread/_cs_generalized.c function main_thread line 2925 thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)
>>>>>>> origin/main

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

<<<<<<< HEAD
State 2210 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 2213 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 2220 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6752 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 2221 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6752 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)
=======
State 1407 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=1 (00000000 00000000 00000000 00000001)

State 1410 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 1415 file ../workspace/multithread/_cs_generalized.c function main_thread line 2927 thread 0
----------------------------------------------------
  dynamic_object6.se.next=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 1419 file ../workspace/multithread/_cs_generalized.c function main_thread line 2929 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 1420 file ../workspace/multithread/_cs_generalized.c function main_thread line 2929 thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)
>>>>>>> origin/main

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

<<<<<<< HEAD
State 2225 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 2228 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 2233 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6754 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 2235 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6756 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=&dynamic_object2.se (00000010 00000000 00000000 00000000)

State 2236 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6758 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=0 (00000000 00000000 00000000 00000000)

State 2237 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6762 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=0 (00000000 00000000 00000000 00000000)

State 2238 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6767 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 6776 function pop_0
  (signed int)__cs_pc_cs[2] >= 325

State 2242 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6779 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 2244 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6781 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 2248 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6783 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001110 00000000 00000000 00000000)

State 2249 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6783 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)
=======
State 1424 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1427 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 1432 file ../workspace/multithread/_cs_generalized.c function main_thread line 2931 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 1436 file ../workspace/multithread/_cs_generalized.c function main_thread line 2933 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 1437 file ../workspace/multithread/_cs_generalized.c function main_thread line 2933 thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)
>>>>>>> origin/main

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 128 function __cs_mutex_lock
  *__cs_mutex_to_lock == -1

<<<<<<< HEAD
State 2253 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 2256 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001111 00000000 00000000 00000000)

State 2264 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6785 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 2265 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6785 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_pop_original_top (00110011 00000000 00000000 00000000)

State 2266 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6785 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_pop_new_top (00110100 00000000 00000000 00000000)

State 2267 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 696 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 2269 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 699 thread 0
----------------------------------------------------
  mystack.top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 2274 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6785 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_result=1 (00000001)

State 2278 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6787 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001110 00000000 00000000 00000000)

State 2279 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6787 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)
=======
State 1441 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 129 thread 0
----------------------------------------------------
  library_lock=1 (00000000 00000000 00000000 00000001)

State 1444 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_lock line 130 thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 1452 file ../workspace/multithread/_cs_generalized.c function main_thread line 2935 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 1453 file ../workspace/multithread/_cs_generalized.c function main_thread line 2935 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_push_original_top (00010100 00000000 00000000 00000000)

State 1454 file ../workspace/multithread/_cs_generalized.c function main_thread line 2935 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_push_new_top (00010101 00000000 00000000 00000000)

State 1455 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 696 thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 1457 file ../workspace/multithread/_cs_generalized.c function __CSEQ_atomic_swap_stack_top line 699 thread 0
----------------------------------------------------
  mystack.top[0]=&dynamic_object6.se (00000110 00000000 00000000 00000000)

State 1462 file ../workspace/multithread/_cs_generalized.c function main_thread line 2935 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=1 (00000001)

State 1466 file ../workspace/multithread/_cs_generalized.c function main_thread line 2937 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 1467 file ../workspace/multithread/_cs_generalized.c function main_thread line 2937 thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)
>>>>>>> origin/main

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 137 function __cs_mutex_unlock
  *__cs_mutex_to_unlock == (signed int)__cs_thread_index + 1

<<<<<<< HEAD
State 2283 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 2286 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00010010 00000000 00000000 00000000)

State 2290 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6791 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 6844 function pop_0
  (signed int)__cs_pc_cs[2] >= 333

State 2293 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6846 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=1 (00000000 00000000 00000000 00000001)

State 2294 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6850 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10=FALSE (00000000)

State 2296 file ../workspace/multithread/_cs_generalized.c function pop_0 line 6859 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 6861 function pop_0
  !(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 6863 function pop_0
  (signed int)__cs_pc_cs[2] >= 334

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7385 function pop_0
  (signed int)__cs_pc_cs[2] >= 380

State 2304 file ../workspace/multithread/_cs_generalized.c function pop_0 line 7389 thread 0
----------------------------------------------------
  __cs_local_delete_se=&dynamic_object2.se (00000010 00000000 00000000 00000000)

State 2305 file ../workspace/multithread/_cs_generalized.c function pop_0 line 7390 thread 0
----------------------------------------------------
  __cs_retval__lfds711_stack_pop_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7394 function pop_0
  (signed int)__cs_pc_cs[2] >= 381

State 2307 file ../workspace/multithread/_cs_generalized.c function pop_0 line 7399 thread 0
----------------------------------------------------
  __cs_local_delete_res=1 (00000000 00000000 00000000 00000001)

State 2308 file ../workspace/multithread/_cs_generalized.c function pop_0 line 7403 thread 0
----------------------------------------------------
  __cs_local_delete___cs_tmp_if_cond_19=FALSE (00000000)

State 2311 file ../workspace/multithread/_cs_generalized.c function pop_0 line 7412 thread 0
----------------------------------------------------
  __cs_local_delete_temp_td=&dynamic_object2 (00000010 00000000 00000000 00000000)

State 2313 file ../workspace/multithread/_cs_generalized.c function pop_0 line 7415 thread 0
----------------------------------------------------
  __cs_local_delete_id_popped=0 (00000000 00000000 00000000 00000000)

State 2317 file ../workspace/multithread/_cs_generalized.c function pop_0 line 7417 thread 0
----------------------------------------------------
  format="%llu\n" (00100100 00000000 00000000 00000000)

State 2323 file <builtin-library-printf> function printf line 19 thread 0
----------------------------------------------------
  va_args$3[0]=(const void *)&va_arg$3!0 (00110101 00000000 00000000 00000000)
%llu


State 2329 file ../workspace/multithread/_cs_generalized.c function pop_0 line 7418 thread 0
----------------------------------------------------
  __cs_retval__delete_1=1 (00000000 00000000 00000000 00000001)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7422 function pop_0
  (signed int)__cs_pc_cs[2] >= 384

State 2332 file ../workspace/multithread/_cs_generalized.c function pop_0 line 7432 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_26=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7438 function pop_0
  (signed int)__cs_pc_cs[2] >= 386

State 2335 file ../workspace/multithread/_cs_generalized.c function pop_0 line 7444 thread 0
----------------------------------------------------
  __cs_local_pop_loop=5 (00000000 00000000 00000000 00000101)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7446 function pop_0
  !(__cs_local_pop_loop < 5)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7448 function pop_0
  (signed int)__cs_pc_cs[2] >= 387

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7452 function pop_0
  (signed int)__cs_pc_cs[2] >= 387

State 2342 file ../workspace/multithread/_cs_generalized.c function pop_0 line 7456 thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 2343 file ../workspace/multithread/_cs_generalized.c function pop_0 line 7456 thread 0
----------------------------------------------------
  __cs_thread_index=2u (00000000 00000000 00000000 00000010)

State 2344 file ../workspace/multithread/_cs_generalized.c function __cs_exit line 102 thread 0
----------------------------------------------------
  __cs_thread_joinargs[2]=NULL (00000000 00000000 00000000 00000000)

State 2349 file ../workspace/multithread/_cs_generalized.c function main line 7739 thread 0
----------------------------------------------------
  __cs_pc[2]=387 (11000001 1)

State 2350 file ../workspace/multithread/_cs_generalized.c function main line 7741 thread 0
----------------------------------------------------
  __cs_tmp_t0_r1=2 (010)

State 2352 file ../workspace/multithread/_cs_generalized.c function main line 7744 thread 0
----------------------------------------------------
  __cs_pc_cs[0]=4 (00000001 00)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7745 function main
  (signed int)__cs_pc_cs[0] >= (signed int)__cs_pc[0]

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 7746 function main
  (signed int)__cs_pc_cs[0] <= 4

State 2362 file ../workspace/multithread/_cs_generalized.c function main_thread line 7700 thread 0
----------------------------------------------------
  __cs_id=1 (00000000 00000000 00000000 00000001)

State 2363 file ../workspace/multithread/_cs_generalized.c function main_thread line 7700 thread 0
----------------------------------------------------
  __cs_value_ptr=((const void **)NULL) (00000000 00000000 00000000 00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 96 function __cs_join
  __cs_pc[__cs_id] == __cs_thread_lines[__cs_id]

State 2371 file ../workspace/multithread/_cs_generalized.c function main_thread line 7702 thread 0
----------------------------------------------------
  __cs_id=2 (00000000 00000000 00000000 00000010)

State 2372 file ../workspace/multithread/_cs_generalized.c function main_thread line 7702 thread 0
----------------------------------------------------
  __cs_value_ptr=((const void **)NULL) (00000000 00000000 00000000 00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 96 function __cs_join
  __cs_pc[__cs_id] == __cs_thread_lines[__cs_id]

Violated property:
  file ../workspace/multithread/_cs_generalized.c function main_thread line 7703 thread 0
  assertion 0
  0 != 0


VERIFICATION FAILED
>>>>>>> origin/main
=======
>>>>>>> origin/main
=======
State 1471 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 138 thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 1474 file ../workspace/multithread/_cs_generalized.c function __cs_mutex_unlock line 139 thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 1478 file ../workspace/multithread/_cs_generalized.c function main_thread line 2941 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_16=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 2978 function main_thread
  (signed int)__cs_pc_cs[0] >= 93

State 1481 file ../workspace/multithread/_cs_generalized.c function main_thread line 2980 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=1 (00000000 00000000 00000000 00000001)

State 1482 file ../workspace/multithread/_cs_generalized.c function main_thread line 2984 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_17=FALSE (00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3300 function main_thread
  (signed int)__cs_pc_cs[0] >= 126

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3306 function main_thread
  (signed int)__cs_pc_cs[0] >= 126

State 1488 file ../workspace/multithread/_cs_generalized.c function main_thread line 3311 thread 0
----------------------------------------------------
  __cs_retval__is_empty_1=0 (00000000 00000000 00000000 00000000)

Assumption:
  file ../workspace/multithread/_cs_generalized.c line 3321 function main_thread
  (signed int)__cs_pc_cs[0] >= 126

Violated property:
  file ../workspace/multithread/_cs_generalized.c function main_thread line 3326 thread 0
  assertion __cs_retval__is_empty_1
  __cs_retval__is_empty_1 != 0


VERIFICATION FAILED
>>>>>>> origin/main
