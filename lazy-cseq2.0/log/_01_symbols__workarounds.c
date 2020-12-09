list of functions:
   lfds711_misc_force_store(param: )  call count 1
<<<<<<< HEAD
<<<<<<< HEAD
   __VERIFIER_atomic_compare_and_exchange(param: mptr, eptr, newval, weak_p, sm, fm)  call count 0
=======
   __atomic_compare_exchange_n(param: mptr, eptr, newval, weak_p, sm, fm)  call count 0
   __VERIFIER_atomic_compare_and_exchange(param: mptr, eptr, newval, weak_p, sm, fm)  call count 0
   __atomic_exchange_n(param: previous, new, memorder)  call count 0
>>>>>>> origin/main
   __VERIFIER_atomic_exchange(param: previous, new, memorder)  call count 0
   __atomic_thread_fence(param: i)  call count 1
   __VERIFIER_atomic_swap_stack_top(param: top, oldtop, newtop)  call count 2
=======
>>>>>>> origin/main
   exponential_backoff(param: )  call count 2
   __VERIFIER_atomic_swap_stack_top(param: top, oldtop, newtop)  call count 2
   lfds711_misc_internal_backoff_init(param: bs)  call count 2
   lfds711_stack_init_valid_on_current_logical_core(param: ss, user_state)  call count 1
   lfds711_stack_pop(param: ss, se)  call count 2
   lfds711_stack_push(param: ss, se)  call count 2
   __VERIFIER_atomic_compare_and_exchange(param: mptr, eptr, newval, weak_p, sm, fm)  call count 1
   __atomic_compare_exchange_n(param: mptr, eptr, newval, weak_p, sm, fm)  call count 0
   __VERIFIER_atomic_exchange(param: previous, new, memorder)  call count 1
   __atomic_exchange_n(param: previous, new, memorder)  call count 0
   __atomic_thread_fence(param: i)  call count 0
   init(param: )  call count 1
   insert(param: s, id)  call count 1
   delete(param: s)  call count 1
   contains(param: s, id)  call count 0
   push(param: )  call count 0
   pop(param: )  call count 0
   main(param: )  call count 0

list of thread functions:
   push  call count 1
   pop  call count 1

parameters for main():
   (no params)

Variables:
   (global)
      id2  'ps'  
         type 'struct lfds711_prng_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id3  'seed'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id4  'psts'  
         type 'struct lfds711_prng_st_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id5  'None'  
         type 'enum lfds711_stack_query {LFDS711_STACK_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_STACK_QUERY_SINGLETHREADED_VALIDATE}'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id13  'lfds711_misc_globals'  
         type 'extern struct lfds711_misc_globals'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id14  'query_type'  
         type 'enum lfds711_stack_query'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id15  'query_input'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id16  'query_output'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id29  'baus'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id30  'key_compare_function'  
         type 'int (*)(const void, const void)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id31  'existing_key'  
         type 'const void'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id32  'user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id33  'element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id34  'baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id35  'existing_baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id36  'key'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id37  'absolute_position'  
         type 'enum lfds711_btree_au_absolute_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id38  'relative_position'  
         type 'enum lfds711_btree_au_relative_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id48  'fs'  
         type 'struct lfds711_freelist_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id49  'elimination_array'  
         type 'struct lfds711_freelist_element * volatile (*)'  kind 'p'  arity '1'  
         size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id50  'elimination_array_size_in_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id51  'fe'  
         type 'struct lfds711_freelist_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id70  'has'  
         type 'struct lfds711_hash_a_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id71  'baus_array'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id72  'array_size'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id73  'key_hash_function'  
         type 'void (*)(const void, lfds711_pal_uint_t)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id74  'element_cleanup_function'  
         type 'void (*)(struct lfds711_hash_a_state, struct lfds711_hash_a_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id75  'hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id76  'existing_hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id77  'hai'  
         type 'struct lfds711_hash_a_iterate *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id88  'lasos'  
         type 'struct lfds711_list_aso_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id89  'lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id90  'existing_lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id101  'lasus'  
         type 'struct lfds711_list_asu_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id102  'lasue'  
         type 'struct lfds711_list_asu_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id103  'lasue_predecessor'  
         type 'struct lfds711_list_asu_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id104  'position'  
         type 'enum lfds711_list_asu_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id116  'qbmms'  
         type 'struct lfds711_queue_bmm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id117  'element_array'  
         type 'struct lfds711_queue_bss_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id118  'number_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id119  'value'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id128  'qbsss'  
         type 'struct lfds711_queue_bss_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id138  'qumms'  
         type 'struct lfds711_queue_umm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id139  'qumme_dummy'  
         type 'struct lfds711_queue_umm_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id140  'qumme'  
         type 'struct lfds711_queue_umm_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id154  'rs'  
         type 'struct lfds711_ringbuffer_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id155  're_array_inc_dummy'  
         type 'struct lfds711_ringbuffer_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id156  'number_elements_inc_dummy'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id157  'overwrite_occurred_flag'  
         type 'enum lfds711_misc_flag *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id158  'overwritten_key'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id159  'overwritten_value'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id167  'ss'  
         type 'void *'  kind 'g'  arity '0'  
         size '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         ref '[1600, 1618, 1653, 1658, 1736]'  
         deref '[]'  
         occurs '[1600, 1618, 1653, 1658, 1736]'  
=======
         ref '[1620, 1638, 1673, 1678, 1756]'  
         deref '[]'  
         occurs '[1620, 1638, 1673, 1678, 1756]'  
>>>>>>> origin/main
=======
         ref '[]'  
         deref '[]'  
         occurs '[1332, 1345, 1356]'  
>>>>>>> origin/main
      id168  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id169  'bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
      id185  'lock'  
         type 'pthread_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[1073, 1081, 1093, 1117, 1118, 1137, 1139, 1145, 1146, 1185, 1187, 1193, 1195, 1597, 1601, 1617, 1619, 1739]'  
         deref '[]'  
         occurs '[1073, 1081, 1093, 1117, 1118, 1137, 1139, 1145, 1146, 1185, 1187, 1193, 1195, 1597, 1601, 1617, 1619, 1739]'  
=======
      id170  'lock'  
         type 'pthread_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[1092, 1100, 1112, 1136, 1137, 1156, 1158, 1164, 1165, 1204, 1206, 1212, 1214]'  
         deref '[]'  
         occurs '[1092, 1100, 1112, 1136, 1137, 1156, 1158, 1164, 1165, 1204, 1206, 1212, 1214]'  
>>>>>>> origin/main
   lfds711_misc_force_store
      id17  'destination'  
         type 'volatile lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[292]'  
         deref '[]'  
         occurs '[292]'  
<<<<<<< HEAD
   __VERIFIER_atomic_compare_and_exchange
      id170  'mptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1009, 1011]'  
         occurs '[1009, 1011]'  
      id171  'eptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1009, 1016]'  
         occurs '[1009, 1016]'  
      id172  'newval'  
=======
   __atomic_compare_exchange_n
      id171  'mptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1017]'  
      id172  'eptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1017]'  
      id173  'newval'  
         type 'volatile int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1017]'  
      id174  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1017]'  
      id175  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1017]'  
      id176  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1017]'  
      id177  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1019]'  
   __VERIFIER_atomic_compare_and_exchange
      id178  'mptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1024, 1026]'  
         occurs '[1024, 1026]'  
      id179  'eptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1024, 1031]'  
         occurs '[1024, 1031]'  
      id180  'newval'  
>>>>>>> origin/main
         type 'volatile int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1011, 1016]'  
      id173  'weak_p'  
=======
         occurs '[1026, 1031]'  
      id181  'weak_p'  
>>>>>>> origin/main
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
<<<<<<< HEAD
      id174  'sm'  
=======
      id182  'sm'  
>>>>>>> origin/main
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
<<<<<<< HEAD
      id175  'fm'  
=======
      id183  'fm'  
>>>>>>> origin/main
         type 'int'  kind 'p'  arity '0'  
=======
      id170  'library_lock'  
         type 'pthread_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[1055, 1062, 1074, 1098, 1099, 1118, 1120, 1126, 1127, 1167, 1170, 1176, 1178]'  
         deref '[]'  
         occurs '[1055, 1062, 1074, 1098, 1099, 1118, 1120, 1126, 1127, 1167, 1170, 1176, 1178]'  
      id218  'mystack'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
>>>>>>> origin/main
         size '[]'  
         ref '[1246, 1247, 1262]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[]'  
<<<<<<< HEAD
   __VERIFIER_atomic_exchange
      id176  'previous'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1023, 1024]'  
         occurs '[1023, 1024]'  
      id177  'new'  
=======
   __atomic_exchange_n
      id184  'previous'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
=======
         occurs '[1246, 1247, 1262]'  
      id239  'ATOMIC_OPERATION'  
         type 'volatile int'  kind 'g'  arity '0'  
>>>>>>> origin/main
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1331, 1333, 1344, 1346]'  
      id240  'lock'  
         type 'pthread_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[1331, 1333, 1344, 1346, 1355]'  
         deref '[]'  
         occurs '[1331, 1333, 1344, 1346, 1355]'  
   lfds711_misc_force_store
      id17  'destination'  
         type 'volatile lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[294]'  
         deref '[]'  
         occurs '[294]'  
   exponential_backoff
      id171  'loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1040]'  
   __VERIFIER_atomic_exchange
      id188  'previous'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1045, 1046]'  
         occurs '[1045, 1046]'  
      id189  'new'  
>>>>>>> origin/main
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1024]'  
      id178  'memorder'  
=======
         occurs '[1046]'  
      id190  'memorder'  
>>>>>>> origin/main
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
<<<<<<< HEAD
      id179  'old'  
=======
      id191  'old'  
>>>>>>> origin/main
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1025]'  
   __atomic_thread_fence
      id180  'i'  
=======
         occurs '[1047]'  
   __atomic_thread_fence
      id192  'i'  
>>>>>>> origin/main
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   __VERIFIER_atomic_swap_stack_top
<<<<<<< HEAD
      id181  'top'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1035, 1037, 1042]'  
         occurs '[1035, 1037, 1042]'  
      id182  'oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1035, 1042]'  
         occurs '[1035, 1042]'  
      id183  'newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1037]'  
         occurs '[1037]'  
   exponential_backoff
      id184  'loop'  
=======
      id193  'top'  
=======
         occurs '[1018, 1018, 1018]'  
   __VERIFIER_atomic_swap_stack_top
      id172  'top'  
>>>>>>> origin/main
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1025, 1027, 1032]'  
         occurs '[1025, 1027, 1032]'  
      id173  'oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1025, 1032]'  
         occurs '[1025, 1032]'  
      id174  'newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
<<<<<<< HEAD
         deref '[1058]'  
         occurs '[1058]'  
   exponential_backoff
      id196  'loop'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1053, 1053, 1053]'  
   lfds711_misc_internal_backoff_init
      id186  'bs'  
=======
         occurs '[1074, 1074, 1074]'  
   lfds711_misc_internal_backoff_init
      id197  'bs'  
>>>>>>> origin/main
=======
         deref '[1027]'  
         occurs '[1027]'  
   lfds711_misc_internal_backoff_init
      id175  'bs'  
>>>>>>> origin/main
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1059, 1060, 1062, 1063, 1064, 1065, 1066]'  
      id187  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1059, 1060]'  
         occurs '[1059, 1060]'  
   lfds711_stack_init_valid_on_current_logical_core
      id188  'ss'  
=======
         occurs '[1078, 1079, 1081, 1082, 1083, 1084, 1085]'  
      id198  'c'  
=======
         occurs '[1041, 1042, 1044, 1045, 1046, 1047, 1048]'  
      id176  'c'  
>>>>>>> origin/main
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1041, 1042]'  
         occurs '[1041, 1042]'  
   lfds711_stack_init_valid_on_current_logical_core
<<<<<<< HEAD
      id199  'ss'  
>>>>>>> origin/main
=======
      id177  'ss'  
>>>>>>> origin/main
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1076, 1077, 1078, 1082, 1083, 1085, 1087, 1088]'  
      id189  'user_state'  
=======
         occurs '[1095, 1096, 1097, 1101, 1102, 1104, 1106, 1107]'  
      id200  'user_state'  
>>>>>>> origin/main
=======
         occurs '[1057, 1058, 1059, 1063, 1064, 1066, 1068, 1069]'  
      id178  'user_state'  
>>>>>>> origin/main
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1085]'  
      id190  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1076, 1077, 1078]'  
         occurs '[1076, 1077, 1078]'  
   lfds711_stack_pop
      id191  'ss'  
=======
         occurs '[1104]'  
      id201  'c'  
=======
         occurs '[1066]'  
      id179  'c'  
>>>>>>> origin/main
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1057, 1058, 1059]'  
         occurs '[1057, 1058, 1059]'  
   lfds711_stack_pop
<<<<<<< HEAD
      id202  'ss'  
>>>>>>> origin/main
=======
      id180  'ss'  
>>>>>>> origin/main
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1110, 1120, 1121, 1138]'  
      id192  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1129, 1153]'  
         occurs '[1111, 1129, 1153]'  
      id193  'result'  
=======
         occurs '[1129, 1139, 1140, 1157]'  
      id203  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1148, 1172]'  
         occurs '[1130, 1148, 1172]'  
      id204  'result'  
>>>>>>> origin/main
=======
         occurs '[1091, 1101, 1102, 1119]'  
      id181  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1110, 1134]'  
         occurs '[1092, 1110, 1134]'  
      id182  'result'  
>>>>>>> origin/main
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1138, 1141, 1151]'  
      id194  'backoff_iteration'  
=======
         occurs '[1157, 1160, 1170]'  
      id205  'backoff_iteration'  
>>>>>>> origin/main
=======
         occurs '[1119, 1122, 1132, 1138]'  
      id183  'backoff_iteration'  
>>>>>>> origin/main
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
      id195  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1138]'  
         deref '[]'  
         occurs '[1133, 1134, 1138]'  
      id196  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1138]'  
         deref '[]'  
         occurs '[1120, 1121, 1127, 1133, 1134, 1138, 1153]'  
      id197  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1110, 1111]'  
         occurs '[1110, 1111]'  
      id198  'i'  
=======
      id206  'new_top'  
=======
      id184  'new_top'  
>>>>>>> origin/main
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1119]'  
         deref '[]'  
         occurs '[1114, 1115, 1119]'  
      id185  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1119]'  
         deref '[]'  
         occurs '[1101, 1102, 1108, 1114, 1115, 1119, 1134]'  
      id186  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
<<<<<<< HEAD
         deref '[1129, 1130]'  
         occurs '[1129, 1130]'  
      id209  'i'  
>>>>>>> origin/main
=======
         deref '[1091, 1092]'  
         occurs '[1091, 1092]'  
      id187  'i'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1148, 1149]'  
   lfds711_stack_push
      id199  'ss'  
=======
         occurs '[1167, 1168]'  
   lfds711_stack_push
      id210  'ss'  
>>>>>>> origin/main
=======
         occurs '[1129, 1130]'  
   lfds711_stack_push
      id188  'ss'  
>>>>>>> origin/main
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1172, 1177, 1178, 1194]'  
      id200  'se'  
=======
         occurs '[1191, 1196, 1197, 1213]'  
      id211  'se'  
>>>>>>> origin/main
=======
         occurs '[1153, 1158, 1159, 1177]'  
      id189  'se'  
>>>>>>> origin/main
         type 'struct lfds711_stack_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1173, 1175, 1186]'  
      id201  'result'  
=======
         occurs '[1192, 1194, 1205]'  
      id212  'result'  
>>>>>>> origin/main
=======
         occurs '[1154, 1156, 1169]'  
      id190  'result'  
>>>>>>> origin/main
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1180, 1182, 1194, 1197]'  
      id202  'backoff_iteration'  
=======
         occurs '[1199, 1201, 1213, 1216]'  
      id213  'backoff_iteration'  
>>>>>>> origin/main
=======
         occurs '[1161, 1163, 1177, 1180]'  
      id191  'backoff_iteration'  
>>>>>>> origin/main
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
      id203  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1194]'  
         deref '[]'  
         occurs '[1175, 1190, 1194]'  
      id204  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1194]'  
         deref '[]'  
         occurs '[1177, 1178, 1186, 1190, 1194]'  
      id205  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1172, 1173]'  
         occurs '[1172, 1173]'  
      id206  'i'  
=======
      id214  'new_top'  
=======
      id192  'new_top'  
>>>>>>> origin/main
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1177]'  
         deref '[]'  
         occurs '[1156, 1173, 1177]'  
      id193  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1177]'  
         deref '[]'  
         occurs '[1158, 1159, 1169, 1173, 1177]'  
      id194  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
<<<<<<< HEAD
         deref '[1191, 1192]'  
         occurs '[1191, 1192]'  
      id217  'i'  
>>>>>>> origin/main
=======
         deref '[1153, 1154]'  
         occurs '[1153, 1154]'  
      id195  'i'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1200, 1201]'  
   lfds711_stack_cleanup
      id207  'ss'  
=======
         occurs '[1219, 1220]'  
   lfds711_stack_cleanup
      id218  'ss'  
>>>>>>> origin/main
         type 'struct lfds711_stack_state'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1218, 1225, 1232]'  
      id208  'element_cleanup_callback'  
=======
         occurs '[1237, 1244, 1251]'  
      id219  'element_cleanup_callback'  
>>>>>>> origin/main
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1223, 1232]'  ptr-to-f 'True'
      id209  'se'  
=======
         occurs '[1242, 1251]'  ptr-to-f 'True'
      id220  'se'  
>>>>>>> origin/main
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1225, 1227, 1229, 1230, 1230]'  
      id210  'se_temp'  
=======
         occurs '[1244, 1246, 1248, 1249, 1249]'  
      id221  'se_temp'  
>>>>>>> origin/main
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1229, 1232]'  
      id211  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1218]'  
         occurs '[1218]'  
   LIST_InsertHeadNode
      id216  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1273, 1274]'  
         occurs '[1273, 1274]'  
      id217  'I__se'  
=======
         occurs '[1248, 1251]'  
      id222  'c'  
         type 'char *'  kind 'l'  arity '0'  
=======
         occurs '[1183, 1184]'  
   __VERIFIER_atomic_compare_and_exchange
      id196  'mptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
>>>>>>> origin/main
         size '[]'  
         ref '[]'  
         deref '[1198, 1200]'  
         occurs '[1198, 1200]'  
      id197  'eptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
<<<<<<< HEAD
         deref '[1293, 1294]'  
         occurs '[1293, 1294]'  
      id228  'I__se'  
>>>>>>> origin/main
         type 'struct lfds711_stack_element'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1269]'  
      id218  'I__user_id'  
=======
         occurs '[1289]'  
      id229  'I__user_id'  
>>>>>>> origin/main
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1270]'  
      id219  'rCode'  
=======
         occurs '[1290]'  
      id230  'rCode'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1263, 1278]'  
      id220  'newNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1260, 1260]'  
         occurs '[1260, 1260, 1260, 1261, 1269, 1270, 1273, 1274]'  
   PrintListPayloads
      id221  'head'  
=======
         occurs '[1283, 1298]'  
      id231  'newNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1280, 1280]'  
         occurs '[1280, 1280, 1280, 1281, 1289, 1290, 1293, 1294]'  
   PrintListPayloads
      id232  'head'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1287]'  
      id222  'rCode'  
=======
         occurs '[1307]'  
      id233  'rCode'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1299]'  
      id223  'cur'  
=======
         occurs '[1319]'  
      id234  'cur'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1289, 1292, 1293, 1293, 1294]'  
   GetListSize
      id224  'head'  
=======
         occurs '[1309, 1312, 1313, 1313, 1314]'  
   GetListSize
      id235  'head'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1308]'  
      id225  'cur'  
=======
         occurs '[1328]'  
      id236  'cur'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1310, 1313, 1313]'  
      id226  'nodeCnt'  
=======
         occurs '[1330, 1333, 1333]'  
      id237  'nodeCnt'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1312, 1315]'  
   LIST_GetTailNode
      id227  'I__listHead'  
=======
         occurs '[1332, 1335]'  
   LIST_GetTailNode
      id238  'I__listHead'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1325]'  
      id228  '_O_listTail'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1337]'  
         occurs '[1336, 1337]'  
      id229  'rCode'  
=======
         occurs '[1345]'  
      id239  '_O_listTail'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1357]'  
         occurs '[1356, 1357]'  
      id240  'rCode'  
>>>>>>> origin/main
=======
         deref '[1198, 1205]'  
         occurs '[1198, 1205]'  
      id198  'newval'  
         type 'volatile int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1200, 1205]'  
      id199  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id200  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id201  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   __atomic_compare_exchange_n
      id202  'mptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1212]'  
      id203  'eptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1212]'  
      id204  'newval'  
         type 'volatile int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1212]'  
      id205  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1212]'  
      id206  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1212]'  
      id207  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1212]'  
      id208  'res'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1339]'  
      id230  'curNode'  
=======
         occurs '[1359]'  
      id241  'curNode'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1329, 1331, 1332, 1332, 1337]'  
   LIST_InsertTailNode
      id231  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1352, 1377]'  
         occurs '[1352, 1377]'  
      id232  'I__se'  
=======
         occurs '[1349, 1351, 1352, 1352, 1357]'  
   LIST_InsertTailNode
      id242  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1372, 1397]'  
         occurs '[1372, 1397]'  
      id243  'I__se'  
>>>>>>> origin/main
         type 'struct lfds711_stack_element'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1370]'  
      id233  'I__user_id'  
=======
         occurs '[1390]'  
      id244  'I__user_id'  
>>>>>>> origin/main
=======
         occurs '[1213]'  
   __VERIFIER_atomic_exchange
      id209  'previous'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1218, 1219]'  
         occurs '[1218, 1219]'  
      id210  'new'  
>>>>>>> origin/main
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1369]'  
      id234  'rCode'  
=======
         occurs '[1389]'  
      id245  'rCode'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1352, 1353, 1355, 1363, 1381]'  
      id235  'tailNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1352]'  
         deref '[]'  
         occurs '[1352, 1374, 1375]'  
      id236  'newNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1360, 1360]'  
         occurs '[1360, 1360, 1360, 1361, 1369, 1370, 1373, 1375, 1377]'  
   LIST_FetchParentNodeById
      id237  'I__head'  
=======
         occurs '[1372, 1373, 1375, 1383, 1401]'  
      id246  'tailNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1372]'  
         deref '[]'  
         occurs '[1372, 1394, 1395]'  
      id247  'newNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1380, 1380]'  
         occurs '[1380, 1380, 1380, 1381, 1389, 1390, 1393, 1395, 1397]'  
   LIST_FetchParentNodeById
      id248  'I__head'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1391, 1394]'  
      id238  'I__user_id'  
=======
         occurs '[1411, 1414]'  
      id249  'I__user_id'  
>>>>>>> origin/main
=======
         occurs '[1219]'  
      id211  'memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id212  'old'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1220]'  
   __atomic_exchange_n
      id213  'previous'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1225]'  
      id214  'new'  
>>>>>>> origin/main
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1403]'  
      id239  '_O_parent'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1412]'  
         occurs '[1411, 1412]'  
      id240  'rCode'  
=======
         occurs '[1423]'  
      id250  '_O_parent'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1432]'  
         occurs '[1431, 1432]'  
      id251  'rCode'  
>>>>>>> origin/main
=======
         occurs '[1225]'  
      id215  'memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1225]'  
      id216  'res'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1396, 1416]'  
      id241  'parent'  
=======
         occurs '[1416, 1436]'  
      id252  'parent'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1406, 1412]'  
      id242  'curNode'  
=======
         occurs '[1426, 1432]'  
      id253  'curNode'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1401, 1403, 1406, 1407, 1407]'  
   LIST_InsertNodeById
      id243  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1443, 1452, 1465, 1466]'  
         occurs '[1443, 1452, 1465, 1466]'  
      id244  'I__user_id'  
=======
         occurs '[1421, 1423, 1426, 1427, 1427]'  
   LIST_InsertNodeById
      id254  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1463, 1472, 1485, 1486]'  
         occurs '[1463, 1472, 1485, 1486]'  
      id255  'I__user_id'  
>>>>>>> origin/main
=======
         occurs '[1226]'  
   __atomic_thread_fence
      id217  'i'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   init
   insert
      id221  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1255]'  
      id222  'id'  
>>>>>>> origin/main
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1439, 1443]'  
      id245  'I__se'  
=======
         occurs '[1459, 1463]'  
      id256  'I__se'  
>>>>>>> origin/main
         type 'struct lfds711_stack_element'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1440]'  
      id246  'rCode'  
=======
         occurs '[1460]'  
      id257  'rCode'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1433, 1443, 1444, 1453, 1457, 1476]'  
      id247  'parent'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1443]'  
         deref '[]'  
         occurs '[1443, 1463, 1471, 1472]'  
      id248  'newNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1430, 1430]'  
         occurs '[1430, 1430, 1430, 1431, 1439, 1440, 1451, 1452, 1465, 1466, 1471, 1472]'  
   LIST_FetchNodeById
      id249  'I__head'  
=======
         occurs '[1453, 1463, 1464, 1473, 1477, 1496]'  
      id258  'parent'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1463]'  
         deref '[]'  
         occurs '[1463, 1483, 1491, 1492]'  
      id259  'newNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1450, 1450]'  
         occurs '[1450, 1450, 1450, 1451, 1459, 1460, 1471, 1472, 1485, 1486, 1491, 1492]'  
   LIST_FetchNodeById
      id260  'I__head'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1486]'  
      id250  'I__user_id'  
=======
         occurs '[1506]'  
      id261  'I__user_id'  
>>>>>>> origin/main
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1491]'  
      id251  '_O_node'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1507]'  
         occurs '[1506, 1507]'  
      id252  '_O_parent'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1511]'  
         occurs '[1510, 1511]'  
      id253  'rCode'  
=======
         occurs '[1511]'  
      id262  '_O_node'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1527]'  
         occurs '[1526, 1527]'  
      id263  '_O_parent'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1531]'  
         occurs '[1530, 1531]'  
      id264  'rCode'  
>>>>>>> origin/main
=======
         occurs '[1253]'  
      id223  'td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1253, 1254, 1254, 1255]'  
   delete
      id224  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id225  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1262]'  
         deref '[1267]'  
         occurs '[1262, 1267]'  
      id226  'temp_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1267, 1268, 1269]'  
      id227  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1265, 1266, 1271]'  
      id228  'id_popped'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1501, 1515]'  
      id254  'parent'  
=======
         occurs '[1521, 1535]'  
      id265  'parent'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1494, 1511]'  
      id255  'curNode'  
=======
         occurs '[1514, 1531]'  
      id266  'curNode'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1489, 1491, 1494, 1495, 1495, 1499, 1507]'  
   LIST_DeleteNodeById
      id256  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1528, 1545]'  
         occurs '[1528, 1545]'  
      id257  'I__user_id'  
=======
         occurs '[1509, 1511, 1514, 1515, 1515, 1519, 1527]'  
   LIST_DeleteNodeById
      id267  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1548, 1565]'  
         occurs '[1548, 1565]'  
      id268  'I__user_id'  
>>>>>>> origin/main
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1528]'  
      id258  'rCode'  
=======
         occurs '[1548]'  
      id269  'rCode'  
>>>>>>> origin/main
=======
         occurs '[]'  
   contains
      id229  's'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1294, 1307]'  
      id230  'id'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1299]'  
      id231  'max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1283, 1288, 1290, 1291]'  
      id232  'actual_size'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1528, 1529, 1539, 1554]'  
      id259  'parent'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1528]'  
         deref '[]'  
         occurs '[1528, 1544, 1547]'  
      id260  'delNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1528]'  
         deref '[]'  
         occurs '[1528, 1545, 1547, 1550]'  
   LIST_Destroy
      id261  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1564, 1566, 1568, 1568]'  
         occurs '[1564, 1566, 1568, 1568]'  
      id262  'rCode'  
=======
         occurs '[1548, 1549, 1559, 1574]'  
      id270  'parent'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1548]'  
         deref '[]'  
         occurs '[1548, 1564, 1567]'  
      id271  'delNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1548]'  
         deref '[]'  
         occurs '[1548, 1565, 1567, 1570]'  
   LIST_Destroy
      id272  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1584, 1586, 1588, 1588]'  
         occurs '[1584, 1586, 1588, 1588]'  
      id273  'rCode'  
>>>>>>> origin/main
=======
         occurs '[1288, 1298, 1299, 1301, 1306]'  
      id233  'res'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1572]'  
      id263  'delNode'  
=======
         occurs '[1592]'  
      id274  'delNode'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1569]'  
   push
      id266  'td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1599, 1600]'  
         deref '[]'  
         occurs '[1593, 1598, 1599, 1599, 1600]'  
      id267  'loop'  
=======
         occurs '[1589]'  
   push
      id277  'td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
=======
         occurs '[1286, 1294, 1295]'  
      id234  'found'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1286, 1300, 1312]'  
      id235  'dimension'  
         type 'int'  kind 'l'  arity '0'  
>>>>>>> origin/main
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1613, 1618, 1619, 1619, 1620]'  
      id278  'loop'  
>>>>>>> origin/main
         type 'int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1595, 1595, 1595, 1598, 1598, 1599, 1599, 1600]'  
   pop
      id268  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1618]'  
         deref '[1623]'  
         occurs '[1618, 1623]'  
      id269  'temp_td'  
=======
         occurs '[1615, 1615, 1615, 1618, 1618, 1619, 1619, 1620]'  
   pop
      id279  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1638]'  
         deref '[1643]'  
         occurs '[1638, 1643]'  
      id280  'temp_td'  
>>>>>>> origin/main
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1616, 1623]'  
      id270  'res'  
=======
         occurs '[1636, 1643]'  
      id281  'res'  
>>>>>>> origin/main
=======
         occurs '[1290, 1291]'  
      id236  'datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1290, 1290, 1298, 1299, 1307, 1311]'  
      id237  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1294]'  
         deref '[1298]'  
         occurs '[1294, 1298]'  
      id238  'i'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1618, 1621]'  
      id271  'count'  
=======
         occurs '[1638, 1641]'  
      id282  'count'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1624]'  
      id272  'loop'  
=======
         occurs '[1644]'  
      id283  'loop'  
>>>>>>> origin/main
=======
         occurs '[1306, 1307, 1308]'  
   push
      id241  'loop'  
         type 'int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1329, 1329, 1329, 1332]'  
   pop
      id242  'res'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1614, 1614, 1614]'  
   writeIntofile
      id273  'filename'  
=======
         occurs '[1634, 1634, 1634]'  
   writeIntofile
      id284  'filename'  
>>>>>>> origin/main
         type 'char *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1634]'  
      id274  'listHead'  
=======
         occurs '[1654]'  
      id285  'listHead'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1638]'  
      id275  'filefd'  
=======
         occurs '[1658]'  
      id286  'filefd'  
>>>>>>> origin/main
=======
         occurs '[]'  
      id243  'count'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1637, 1639]'  
      id276  'saved'  
=======
         occurs '[1657, 1659]'  
      id287  'saved'  
>>>>>>> origin/main
=======
         occurs '[]'  
      id244  'loop'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
<<<<<<< HEAD
         occurs '[1641, 1642]'  
   createList
      id277  'listHead'  
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[1657]'  
         deref '[]'  
         occurs '[1657, 1661]'  
      id278  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1653, 1658]'  
         deref '[1656]'  
         occurs '[1653, 1656, 1658]'  
      id279  'temp_td'  
=======
         occurs '[1661, 1662]'  
   createList
      id288  'listHead'  
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
=======
         occurs '[1342, 1342, 1342]'  
   main
      id245  't1'  
         type 'pthread_t'  kind 'l'  arity '0'  
>>>>>>> origin/main
         size '[]'  
         ref '[1359]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1677, 1681]'  
      id289  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1673, 1678]'  
         deref '[1676]'  
         occurs '[1673, 1676, 1678]'  
      id290  'temp_td'  
>>>>>>> origin/main
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1656, 1657, 1657]'  
      id280  'res'  
=======
         occurs '[1676, 1677, 1677]'  
      id291  'res'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1653, 1654, 1658]'  
   readFile
      id281  'filename'  
=======
         occurs '[1673, 1674, 1678]'  
   readFile
      id292  'filename'  
>>>>>>> origin/main
         type 'char *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1684, 1687, 1723]'  
      id282  'listHead'  
=======
         occurs '[1704, 1707, 1743]'  
      id293  'listHead'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1674, 1687, 1723]'  
      id283  'line'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1693]'  
         deref '[]'  
         occurs '[1693, 1696]'  
      id284  'len'  
         type 'size_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1693]'  
         deref '[]'  
         occurs '[1693]'  
      id285  'read'  
=======
         occurs '[1694, 1707, 1743]'  
      id294  'line'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1713]'  
         deref '[]'  
         occurs '[1713, 1716]'  
      id295  'len'  
         type 'size_t'  kind 'l'  arity '0'  
=======
         occurs '[1359, 1370]'  
      id246  't2'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id247  't3'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id248  't4'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id249  't5'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id250  't6'  
         type 'pthread_t'  kind 'l'  arity '0'  
>>>>>>> origin/main
         size '[]'  
         ref '[1365]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1713]'  
      id296  'read'  
>>>>>>> origin/main
         type 'ssize_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1693]'  
      id286  'parent'  
=======
         occurs '[1713]'  
      id297  'parent'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1704]'  
      id287  'curNode'  
=======
         occurs '[1724]'  
      id298  'curNode'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1679, 1699, 1701, 1704, 1705, 1705]'  
      id288  'delim'  
=======
         occurs '[1699, 1719, 1721, 1724, 1725, 1725]'  
      id299  'delim'  
>>>>>>> origin/main
         type 'char'  kind 'l'  arity '1'  
         size '[-1]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1696, 1706]'  
      id289  'i'  
=======
         occurs '[1716, 1726]'  
      id300  'i'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1703, 1710, 1716, 1721]'  
      id290  'size'  
=======
         occurs '[1723, 1730, 1736, 1741]'  
      id301  'size'  
>>>>>>> origin/main
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1710, 1721]'  
      id291  'fp'  
=======
         occurs '[1730, 1741]'  
      id302  'fp'  
>>>>>>> origin/main
         type 'FILE *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1685, 1693, 1712]'  
      id292  'ptr'  
=======
         occurs '[1705, 1713, 1732]'  
      id303  'ptr'  
>>>>>>> origin/main
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1701, 1706]'  
   main
      id293  'listHead'  
=======
         occurs '[1721, 1726]'  
   main
      id304  'listHead'  
>>>>>>> origin/main
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
<<<<<<< HEAD
         occurs '[1745, 1745, 1746]'  
      id294  't1'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1740]'  
         deref '[]'  
         occurs '[1740, 1742]'  
      id295  't2'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1741]'  
         deref '[]'  
         occurs '[1741, 1743]'  
=======
         occurs '[1765, 1765, 1766]'  
      id305  't1'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1760]'  
         deref '[]'  
         occurs '[1760, 1762]'  
      id306  't2'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1761]'  
         deref '[]'  
         occurs '[1761, 1763]'  
>>>>>>> origin/main
=======
         occurs '[1365, 1375]'  
      id251  't7'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id252  't8'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id253  't9'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id254  't10'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
>>>>>>> origin/main

Fields:
   lfds711_prng_state
      id0  'entropy'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_prng_st_state
      id1  'entropy'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_backoff_state
      id6  'lock'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id7  'backoff_iteration_frequency_counters'  type 'lfds711_pal_uint_t'  kind 'f'  arity '1'  size '[2]'  
      id8  'metric'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id9  'total_operations'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_globals
      id10  'ps'  type 'struct lfds711_prng_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_validation_info
      id11  'min_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id12  'max_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_btree_au_element
      id18  'left'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id19  'right'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id20  'up'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id21  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id22  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_btree_au_state
      id23  'root'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id24  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id25  'existing_key'  type 'enum lfds711_btree_au_existing_key'  kind 'f'  arity '0'  size '[]'  
      id26  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id27  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id28  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_element
      id39  'next'  type 'struct lfds711_freelist_element *'  kind 'f'  arity '0'  size '[]'  
      id40  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id41  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_state
      id42  'top'  type 'struct lfds711_freelist_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id43  'elimination_array_size_in_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id44  'elimination_array'  type 'struct lfds711_freelist_element * volatile (*)'  kind 'f'  arity '1'  size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
      id45  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id46  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id47  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_element
      id52  'baue'  type 'struct lfds711_btree_au_element'  kind 'f'  arity '0'  size '[]'  
      id53  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id54  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_iterate
      id55  'baue'  type 'struct lfds711_btree_au_element *'  kind 'f'  arity '0'  size '[]'  
      id56  'baus'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id57  'baus_end'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_state
      id58  'existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id59  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id60  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id61  'array_size'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id62  'baus_array'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id63  'has'  type 'struct lfds711_hash_a_state *'  kind 'f'  arity '0'  size '[]'  
      id64  'hae'  type 'struct lfds711_hash_a_element *'  kind 'f'  arity '0'  size '[]'  
      id65  'element_cleanup_callback'  type 'void (*)(struct lfds711_hash_a_state *has, struct lfds711_hash_a_element *hae)'  kind 'f'  arity '0'  size '[]'  
      id66  'key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id67  'hash'  type 'lfds711_pal_uint_t *'  kind 'f'  arity '0'  size '[]'  
      id68  'key_hash_function'  type 'void (*)(const void *key, lfds711_pal_uint_t *hash)'  kind 'f'  arity '0'  size '[]'  
      id69  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_element
      id78  'next'  type 'struct lfds711_list_aso_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id79  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id80  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_state
      id81  'dummy_element'  type 'struct lfds711_list_aso_element'  kind 'f'  arity '0'  size '[]'  
      id82  'start'  type 'struct lfds711_list_aso_element *'  kind 'f'  arity '0'  size '[]'  
      id83  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id84  'existing_key'  type 'enum lfds711_list_aso_existing_key'  kind 'f'  arity '0'  size '[]'  
      id85  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id86  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id87  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_element
      id91  'next'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id92  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id93  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_state
      id94  'dummy_element'  type 'struct lfds711_list_asu_element'  kind 'f'  arity '0'  size '[]'  
      id95  'end'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id96  'start'  type 'struct lfds711_list_asu_element *'  kind 'f'  arity '0'  size '[]'  
      id97  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id98  'after_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id99  'end_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id100  'start_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_element
      id105  'sequence_number'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id106  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id107  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_state
      id108  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id109  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id110  'read_index'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id111  'write_index'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id112  'element_array'  type 'struct lfds711_queue_bmm_element *'  kind 'f'  arity '0'  size '[]'  
      id113  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id114  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id115  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_element
      id120  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id121  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_state
      id122  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id123  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id124  'read_index'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id125  'write_index'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id126  'element_array'  type 'struct lfds711_queue_bss_element *'  kind 'f'  arity '0'  size '[]'  
      id127  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_element
      id129  'next'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id130  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id131  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_state
      id132  'enqueue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id133  'dequeue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id134  'aba_counter'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id135  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id136  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id137  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_element
      id141  'fe'  type 'struct lfds711_freelist_element'  kind 'f'  arity '0'  size '[]'  
      id142  'qumme'  type 'struct lfds711_queue_umm_element'  kind 'f'  arity '0'  size '[]'  
      id143  'qumme_use'  type 'struct lfds711_queue_umm_element *'  kind 'f'  arity '0'  size '[]'  
      id144  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id145  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_state
      id146  'fs'  type 'struct lfds711_freelist_state'  kind 'f'  arity '0'  size '[]'  
      id147  'qumms'  type 'struct lfds711_queue_umm_state'  kind 'f'  arity '0'  size '[]'  
      id148  'rs'  type 'struct lfds711_ringbuffer_state *'  kind 'f'  arity '0'  size '[]'  
      id149  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id150  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id151  'unread_flag'  type 'enum lfds711_misc_flag'  kind 'f'  arity '0'  size '[]'  
      id152  'element_cleanup_callback'  type 'void (*)(struct lfds711_ringbuffer_state *rs, void *key, void *value, enum lfds711_misc_flag unread_flag)'  kind 'f'  arity '0'  size '[]'  
      id153  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_element
      id160  'next'  type 'struct lfds711_stack_element *'  kind 'f'  arity '0'  size '[]'  
      id161  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id162  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_state
      id163  'top'  type 'struct lfds711_stack_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id164  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id165  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id166  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
<<<<<<< HEAD
   NODE_PAYLOAD_S
<<<<<<< HEAD
      id212  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id213  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  
   LIST_NODE_S
      id214  'next'  type 'struct LIST_NODE_S *'  kind 'f'  arity '0'  size '[]'  
      id215  'payload'  type 'struct NODE_PAYLOAD_S'  kind 'f'  arity '0'  size '[]'  
   test_data
      id264  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id265  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  
=======
      id223  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id224  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  
   LIST_NODE_S
      id225  'next'  type 'struct LIST_NODE_S *'  kind 'f'  arity '0'  size '[]'  
      id226  'payload'  type 'struct NODE_PAYLOAD_S'  kind 'f'  arity '0'  size '[]'  
   test_data
      id275  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id276  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  
>>>>>>> origin/main
=======
   test_data
      id219  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id220  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  
>>>>>>> origin/main

Typedefs:

Pointer variables:
   (global)
       var 'ps'   type 'struct lfds711_prng_state *'   kind 'p'   arity '0'   size '[]'   
       var 'psts'   type 'struct lfds711_prng_st_state *'   kind 'p'   arity '0'   size '[]'   
       var 'query_input'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var 'query_output'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var 'baus'   type 'struct lfds711_btree_au_state *'   kind 'p'   arity '0'   size '[]'   
       var 'user_state'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var 'baue'   type 'struct lfds711_btree_au_element **'   kind 'p'   arity '0'   size '[]'   
       var 'existing_baue'   type 'struct lfds711_btree_au_element **'   kind 'p'   arity '0'   size '[]'   
       var 'key'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var 'fs'   type 'struct lfds711_freelist_state *'   kind 'p'   arity '0'   size '[]'   
       var 'fe'   type 'struct lfds711_freelist_element **'   kind 'p'   arity '0'   size '[]'   
       var 'has'   type 'struct lfds711_hash_a_state *'   kind 'p'   arity '0'   size '[]'   
       var 'baus_array'   type 'struct lfds711_btree_au_state *'   kind 'p'   arity '0'   size '[]'   
       var 'hae'   type 'struct lfds711_hash_a_element **'   kind 'p'   arity '0'   size '[]'   
       var 'existing_hae'   type 'struct lfds711_hash_a_element **'   kind 'p'   arity '0'   size '[]'   
       var 'hai'   type 'struct lfds711_hash_a_iterate *'   kind 'p'   arity '0'   size '[]'   
       var 'lasos'   type 'struct lfds711_list_aso_state *'   kind 'p'   arity '0'   size '[]'   
       var 'lasoe'   type 'struct lfds711_list_aso_element **'   kind 'p'   arity '0'   size '[]'   
       var 'existing_lasoe'   type 'struct lfds711_list_aso_element **'   kind 'p'   arity '0'   size '[]'   
       var 'lasus'   type 'struct lfds711_list_asu_state *'   kind 'p'   arity '0'   size '[]'   
       var 'lasue'   type 'struct lfds711_list_asu_element **'   kind 'p'   arity '0'   size '[]'   
       var 'lasue_predecessor'   type 'struct lfds711_list_asu_element *'   kind 'p'   arity '0'   size '[]'   
       var 'qbmms'   type 'struct lfds711_queue_bmm_state *'   kind 'p'   arity '0'   size '[]'   
       var 'element_array'   type 'struct lfds711_queue_bss_element *'   kind 'p'   arity '0'   size '[]'   
       var 'value'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var 'qbsss'   type 'struct lfds711_queue_bss_state *'   kind 'p'   arity '0'   size '[]'   
       var 'qumms'   type 'struct lfds711_queue_umm_state *'   kind 'p'   arity '0'   size '[]'   
       var 'qumme_dummy'   type 'struct lfds711_queue_umm_element *'   kind 'p'   arity '0'   size '[]'   
       var 'qumme'   type 'struct lfds711_queue_umm_element **'   kind 'p'   arity '0'   size '[]'   
       var 'rs'   type 'struct lfds711_ringbuffer_state *'   kind 'p'   arity '0'   size '[]'   
       var 're_array_inc_dummy'   type 'struct lfds711_ringbuffer_element *'   kind 'p'   arity '0'   size '[]'   
       var 'overwrite_occurred_flag'   type 'enum lfds711_misc_flag *'   kind 'p'   arity '0'   size '[]'   
       var 'overwritten_key'   type 'void **'   kind 'p'   arity '0'   size '[]'   
       var 'overwritten_value'   type 'void **'   kind 'p'   arity '0'   size '[]'   
       var 'ss'   type 'void *'   kind 'g'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
       var 'bs'   type 'struct lfds711_misc_backoff_state *'   kind 'p'   arity '0'   size '[]'   
   lfds711_misc_force_store
<<<<<<< HEAD
<<<<<<< HEAD
   __VERIFIER_atomic_compare_and_exchange
       var 'mptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
=======
   __atomic_compare_exchange_n
       var 'mptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __VERIFIER_atomic_compare_and_exchange
       var 'mptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_exchange_n
       var 'previous'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
>>>>>>> origin/main
   __VERIFIER_atomic_exchange
       var 'previous'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_thread_fence
=======
   exponential_backoff
>>>>>>> origin/main
   __VERIFIER_atomic_swap_stack_top
       var 'top'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var 'oldtop'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var 'newtop'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
   lfds711_misc_internal_backoff_init
       var 'bs'   type 'struct lfds711_misc_backoff_state *'   kind 'p'   arity '0'   size '[]'   
       var 'c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   lfds711_stack_init_valid_on_current_logical_core
       var 'ss'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'user_state'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var 'c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   lfds711_stack_pop
       var 'ss'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
       var 'new_top'   type 'struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var 'c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   lfds711_stack_push
       var 'ss'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element *'   kind 'p'   arity '0'   size '[]'   
       var 'new_top'   type 'struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var 'c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   __VERIFIER_atomic_compare_and_exchange
       var 'mptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_compare_exchange_n
       var 'mptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __VERIFIER_atomic_exchange
       var 'previous'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_exchange_n
       var 'previous'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_thread_fence
   init
   insert
       var 's'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'td'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
   delete
       var 's'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var 'temp_td'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
   contains
       var 's'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var 'datas'   type 'struct test_data **'   kind 'l'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
   push
   pop
   main

Function blocks:
function 'lfds711_misc_force_store' ----------------------------------:
inline static void lfds711_misc_force_store()
{
    volatile lfds711_pal_uint_t destination;
    {
        (void) __atomic_exchange_n(&destination, 0, 0);
    }
    ;
    return;
}



inline static void
<<<<<<< HEAD
<<<<<<< HEAD
=======
function '__atomic_compare_exchange_n' ----------------------------------:
static _Bool __atomic_compare_exchange_n(volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm)
{
    int res = __VERIFIER_atomic_compare_and_exchange(mptr, eptr, newval, weak_p, sm, fm);
    return res;
}


volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm
static _Bool
>>>>>>> origin/main
function '__VERIFIER_atomic_compare_and_exchange' ----------------------------------:
static _Bool __VERIFIER_atomic_compare_and_exchange(volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm)
{
    if ((*mptr) == (*eptr))
    {
        *mptr = newval;
        return 1;
    }
    else
    {
        *eptr = newval;
        return 0;
    }

}


volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm
static _Bool
<<<<<<< HEAD
=======
function '__atomic_exchange_n' ----------------------------------:
unsigned long __atomic_exchange_n(volatile int long long unsigned *previous, int long long unsigned new, int memorder)
=======
function 'exponential_backoff' ----------------------------------:
void exponential_backoff()
>>>>>>> origin/main
{
    int loop;
    for (loop = 0; loop < 10; loop++)
            ;

<<<<<<< HEAD
volatile int long long unsigned *previous, int long long unsigned new, int memorder
unsigned long
>>>>>>> origin/main
function '__VERIFIER_atomic_exchange' ----------------------------------:
unsigned long __VERIFIER_atomic_exchange(volatile int long long unsigned *previous, int long long unsigned new, int memorder)
{
    unsigned long int old = *previous;
    *previous = new;
    return old;
=======
>>>>>>> origin/main
}



void
function '__VERIFIER_atomic_swap_stack_top' ----------------------------------:
int __VERIFIER_atomic_swap_stack_top(struct lfds711_stack_element * volatile *top, struct lfds711_stack_element * volatile *oldtop, struct lfds711_stack_element **newtop)
{
    if ((*oldtop) == (*top))
    {
        *top = *newtop;
        return 1;
    }
    else
    {
        *oldtop = *top;
        return 0;
    }

}


struct lfds711_stack_element * volatile *top, struct lfds711_stack_element * volatile *oldtop, struct lfds711_stack_element **newtop
int
function 'lfds711_misc_internal_backoff_init' ----------------------------------:
void lfds711_misc_internal_backoff_init(struct lfds711_misc_backoff_state *bs)
{
    if (!(bs != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) (&bs->lock)) % 128) == 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    bs->lock = LFDS711_MISC_FLAG_LOWERED;
    bs->backoff_iteration_frequency_counters[0] = 0;
    bs->backoff_iteration_frequency_counters[1] = 0;
    bs->metric = 1;
    bs->total_operations = 0;
    return;
}


struct lfds711_misc_backoff_state *bs
void
function 'lfds711_stack_init_valid_on_current_logical_core' ----------------------------------:
void lfds711_stack_init_valid_on_current_logical_core(struct lfds711_stack_state *ss, void *user_state)
{
    pthread_mutex_init(&library_lock, 0);
    if (!(ss != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) ss->top) % 128) == 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) (&ss->user_state)) % 128) == 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    pthread_mutex_lock(&library_lock);
    ss->top[0] = 0;
    ss->top[1] = 0;
    ss->user_state = user_state;
    lfds711_misc_internal_backoff_init(&ss->pop_backoff);
    lfds711_misc_internal_backoff_init(&ss->push_backoff);
    lfds711_misc_force_store();
    pthread_mutex_unlock(&library_lock);
    return;
}


struct lfds711_stack_state *ss, void *user_state
void
function 'lfds711_stack_pop' ----------------------------------:
int lfds711_stack_pop(struct lfds711_stack_state *ss, struct lfds711_stack_element **se)
{
    char unsigned result;
    lfds711_pal_uint_t backoff_iteration = 0;
    struct lfds711_stack_element *new_top[2];
    struct lfds711_stack_element * volatile original_top[2];
    if (!(ss != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!(se != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    pthread_mutex_lock(&library_lock);
    pthread_mutex_unlock(&library_lock);
    original_top[1] = ss->top[1];
    original_top[0] = ss->top[0];
    int i = 0;
    do
    {
        if (original_top[0] == 0)
        {
            *se = 0;
            return 0;
        }

        new_top[1] = original_top[1] + 1;
        new_top[0] = original_top[0]->next;
        pthread_mutex_lock(&library_lock);
        result = __VERIFIER_atomic_swap_stack_top(&ss->top[0], &original_top[0], &new_top[0]);
        pthread_mutex_unlock(&library_lock);
        if (result == 0)
        {
            exponential_backoff();
            pthread_mutex_lock(&library_lock);
            pthread_mutex_unlock(&library_lock);
        }

        i++;
        if (i > 1000)
                break;

    }
    while (result == 0);
    *se = original_top[0];
    return result;
}


struct lfds711_stack_state *ss, struct lfds711_stack_element **se
int
function 'lfds711_stack_push' ----------------------------------:
void lfds711_stack_push(struct lfds711_stack_state *ss, struct lfds711_stack_element *se)
{
    char unsigned result;
    lfds711_pal_uint_t backoff_iteration = 0;
    struct lfds711_stack_element *new_top[2];
    struct lfds711_stack_element * volatile original_top[2];
    if (!(ss != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!(se != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    new_top[0] = se;
    original_top[1] = ss->top[1];
    original_top[0] = ss->top[0];
    result = 0;
    int i = 0;
    while (result == 0)
    {
        pthread_mutex_lock(&library_lock);
        se->next = original_top[0];
        pthread_mutex_unlock(&library_lock);
        new_top[1] = original_top[1] + 1;
        pthread_mutex_lock(&library_lock);
        result = __VERIFIER_atomic_swap_stack_top(&ss->top[0], &original_top[0], &new_top[0]);
        pthread_mutex_unlock(&library_lock);
        if (result == 0)
                exponential_backoff();

        i++;
        if (i > 1000)
                break;

    }

    return;
}


struct lfds711_stack_state *ss, struct lfds711_stack_element *se
void
function '__VERIFIER_atomic_compare_and_exchange' ----------------------------------:
static _Bool __VERIFIER_atomic_compare_and_exchange(volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm)
{
    if ((*mptr) == (*eptr))
    {
        *mptr = newval;
        return 1;
    }
    else
    {
        *eptr = newval;
        return 0;
    }

}


volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm
static _Bool
function '__atomic_compare_exchange_n' ----------------------------------:
static _Bool __atomic_compare_exchange_n(volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm)
{
<<<<<<< HEAD
    int rCode = 0;
    LIST_NODE_T *newNode = 0;
    newNode = malloc(sizeof(*newNode));
    if (0 == newNode)
    {
<<<<<<< HEAD
        rCode = ENOMEM;
=======
        rCode = 12;
>>>>>>> origin/main
        fprintf(stderr, "malloc() failed.\n");
        goto CLEANUP;
    }

    newNode->payload.se = I__se;
    newNode->payload.user_id = I__user_id;
    newNode->next = *IO_head;
    *IO_head = newNode;
    CLEANUP:
    return rCode;

=======
    int res = __VERIFIER_atomic_compare_and_exchange(mptr, eptr, newval, weak_p, sm, fm);
    return res;
>>>>>>> origin/main
}


volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm
static _Bool
function '__VERIFIER_atomic_exchange' ----------------------------------:
unsigned long __VERIFIER_atomic_exchange(volatile int long long unsigned *previous, int long long unsigned new, int memorder)
{
    unsigned long int old = *previous;
    *previous = new;
    return old;
}


volatile int long long unsigned *previous, int long long unsigned new, int memorder
unsigned long
function '__atomic_exchange_n' ----------------------------------:
unsigned long __atomic_exchange_n(volatile int long long unsigned *previous, int long long unsigned new, int memorder)
{
    int res = __VERIFIER_atomic_exchange(previous, new, memorder);
    return res;
}


volatile int long long unsigned *previous, int long long unsigned new, int memorder
unsigned long
function '__atomic_thread_fence' ----------------------------------:
void __atomic_thread_fence(int i)
{
}


int i
void
function 'init' ----------------------------------:
void *init()
{
<<<<<<< HEAD
    int rCode = 0;
    LIST_NODE_T *tailNode;
    LIST_NODE_T *newNode = 0;
    rCode = LIST_GetTailNode(*IO_head, &tailNode);
    if (rCode)
    {
        fprintf(stderr, "LIST_GetTailNode() reports: %d\n", rCode);
        goto CLEANUP;
    }

    newNode = malloc(sizeof(*newNode));
    if (0 == newNode)
    {
<<<<<<< HEAD
        rCode = ENOMEM;
=======
        rCode = 12;
>>>>>>> origin/main
        fprintf(stderr, "malloc() failed.\n");
        goto CLEANUP;
    }

    newNode->payload.user_id = I__user_id;
    newNode->payload.se = I__se;
    newNode->next = 0;
    if (tailNode)
            tailNode->next = newNode;
    else
            *IO_head = newNode;

    CLEANUP:
    return rCode;

=======
    lfds711_stack_init_valid_on_current_logical_core(&mystack, 0);
    return (void *) (&mystack);
>>>>>>> origin/main
}



void *
function 'insert' ----------------------------------:
void insert(struct lfds711_stack_state *s, int long long unsigned id)
{
<<<<<<< HEAD
    int rCode = 0;
    LIST_NODE_T *parent;
    LIST_NODE_T *newNode = 0;
    newNode = malloc(sizeof(*newNode));
    if (0 == newNode)
    {
<<<<<<< HEAD
        rCode = ENOMEM;
=======
        rCode = 12;
>>>>>>> origin/main
        fprintf(stderr, "malloc() failed.\n");
        goto CLEANUP;
    }

    newNode->payload.user_id = I__user_id;
    newNode->payload.se = I__se;
    rCode = LIST_FetchParentNodeById(*IO_head, I__user_id, &parent);
    switch (rCode)
    {
        case 0:
                break;

        case ENOENT:
                newNode->next = 0;
                *IO_head = newNode;
                rCode = 0;
                goto CLEANUP;

        default:
                fprintf(stderr, "LIST_FetchParentNodeByName() reports: %d\n", rCode);
                goto CLEANUP;

    }

    if (0 == parent)
    {
        newNode->next = *IO_head;
        *IO_head = newNode;
        goto CLEANUP;
    }

    newNode->next = parent->next;
    parent->next = newNode;
    CLEANUP:
    return rCode;

=======
    struct test_data *td = malloc(sizeof(struct test_data));
    td->user_id = id;
    td->se.value = (void *) ((lfds711_pal_uint_t) td);
    lfds711_stack_push((struct lfds711_stack_state *) s, &td->se);
>>>>>>> origin/main
}


struct lfds711_stack_state *s, int long long unsigned id
void
function 'delete' ----------------------------------:
int delete(struct lfds711_stack_state *s)
{
    struct lfds711_stack_element *se;
    struct test_data *temp_td;
    int res = lfds711_stack_pop(&mystack, &se);
    if (res == 0)
            return res;

    temp_td = (*se).value;
    int id_popped = temp_td->user_id;
    printf("%llu\n", temp_td->user_id);
    return res;
}


struct lfds711_stack_state *s
int
function 'contains' ----------------------------------:
int contains(void *s, int id)
{
    int max_size = 20;
    int actual_size = 0;
    int res = 1;
    int found = 0;
    int dimension = 2;
    struct test_data **datas = malloc((sizeof(struct test_data *)) * max_size);
    struct lfds711_stack_element *se;
    while ((found == 0) && (res != 0))
    {
        if (actual_size == max_size)
        {
            datas = realloc(datas, ((sizeof(struct test_data *)) * max_size) * dimension);
            max_size *= dimension;
        }

        res = lfds711_stack_pop((struct lfds711_stack_state *) s, &se);
        if (res == 0)
                continue;

        datas[actual_size] = (*se).value;
        if (datas[actual_size]->user_id == id)
                found = 1;

        actual_size++;
    }

    int i = 0;
    while (i < actual_size)
    {
        lfds711_stack_push((struct lfds711_stack_state *) s, datas[i]);
        i++;
    }

    free(datas);
    return found;
}


void *s, int id
int
function 'push' ----------------------------------:
void *push()
{
    int long long unsigned loop;
<<<<<<< HEAD
<<<<<<< HEAD
    td = malloc((sizeof(struct test_data)) * 10);
    for (loop = 0; loop < 10; loop++)
    {
        if (0)
        {
            pthread_mutex_lock(&lock);
        }

        ;
        td[loop].user_id = loop;
        td[loop].se.value = (void *) ((lfds711_pal_uint_t) (&td[loop]));
        lfds711_stack_push(&ss, &td[loop].se);
        if (0)
        {
            pthread_mutex_unlock(&lock);
        }

        ;
=======
    td = malloc((sizeof(struct test_data)) * 1);
    for (loop = 0; loop < 1; loop++)
    {
        td[loop].user_id = loop;
        td[loop].se.value = (void *) ((lfds711_pal_uint_t) (&td[loop]));
        lfds711_stack_push(&ss, &td[loop].se);
>>>>>>> origin/main
=======
    for (loop = 0; loop < 5; loop++)
    {
        if (ATOMIC_OPERATION)
        {
            pthread_mutex_lock(&lock);
        }

        ;
        insert(ss, loop);
        if (ATOMIC_OPERATION)
        {
            pthread_mutex_unlock(&lock);
        }

        ;
>>>>>>> origin/main
    }

}



void *
function 'pop' ----------------------------------:
void *pop()
{
    int res;
    int count = 0;
    int loop;
<<<<<<< HEAD
<<<<<<< HEAD
    for (loop = 0; loop < 10; loop++)
    {
        temp_td = 0;
        if (0)
        {
            pthread_mutex_lock(&lock);
        }

        ;
        res = lfds711_stack_pop(&ss, &se);
        if (0)
        {
            pthread_mutex_unlock(&lock);
        }

        ;
=======
    for (loop = 0; loop < 1; loop++)
    {
        temp_td = 0;
        res = lfds711_stack_pop(&ss, &se);
>>>>>>> origin/main
        if (res == 0)
                continue;

        temp_td = (*se).value;
        count++;
    }

}



void *
function 'writeIntofile' ----------------------------------:
void writeIntofile(char *filename, LIST_NODE_T *listHead)
{
    int filefd = open(filename, (O_WRONLY | O_CREAT) | O_APPEND, 0666);
    int saved = dup(1);
    close(1);
    dup(filefd);
    PrintListPayloads(listHead);
    close(filefd);
    fflush(stdout);
    dup2(saved, 1);
    close(saved);
}


char *filename, LIST_NODE_T *listHead
void
function 'createList' ----------------------------------:
LIST_NODE_T *createList(LIST_NODE_T *listHead)
{
    struct lfds711_stack_element *se;
    struct test_data *temp_td;
    int res;
    res = lfds711_stack_pop(&ss, &se);
    while (res != 0)
    {
        temp_td = (*se).value;
        LIST_InsertHeadNode(&listHead, temp_td->se, temp_td->user_id);
        res = lfds711_stack_pop(&ss, &se);
    }

    return listHead;
}


LIST_NODE_T *listHead
LIST_NODE_T *
function 'readFile' ----------------------------------:
void readFile(char *filename, LIST_NODE_T *listHead)
{
    char *line = 0;
    size_t len = 0;
    ssize_t read;
    LIST_NODE_T *parent = 0;
    LIST_NODE_T *curNode = listHead;
    char delim[] = ",";
    int i = 0;
    int size = GetListSize(curNode);
    FILE *fp = fopen(filename, "r");
    if (!fp)
    {
        writeIntofile(filename, listHead);
        assert(0);
        return;
    }

    while ((read = getline(&line, &len, fp)) != (-1))
    {
        char *ptr = strtok(line, delim);
        while (curNode)
=======
    for (loop = 0; loop < 5; loop++)
    {
        if (ATOMIC_OPERATION)
>>>>>>> origin/main
        {
            pthread_mutex_lock(&lock);
        }

        ;
        delete(ss);
        if (ATOMIC_OPERATION)
        {
            pthread_mutex_unlock(&lock);
        }

        ;
    }

}



void *
function 'main' ----------------------------------:
int main()
{
    pthread_mutex_init(&lock, 0);
    ss = init();
    pthread_t t1;
    pthread_t t2;
<<<<<<< HEAD
<<<<<<< HEAD
    pthread_mutex_init(&lock, 0);
=======
>>>>>>> origin/main
=======
    pthread_t t3;
    pthread_t t4;
    pthread_t t5;
    pthread_t t6;
    pthread_t t7;
    pthread_t t8;
    pthread_t t9;
    pthread_t t10;
>>>>>>> origin/main
    pthread_create(&t1, 0, push, 0);
    pthread_create(&t6, 0, pop, 0);
    pthread_join(t1, 0);
    pthread_join(t6, 0);
    assert(0);
    return 0;
}



int
Last statement, by function:
function: lfds711_misc_force_store   stmt:     return;

<<<<<<< HEAD
<<<<<<< HEAD
=======
function: __atomic_compare_exchange_n   stmt:     return res;

>>>>>>> origin/main
function: __VERIFIER_atomic_compare_and_exchange   stmt:     if ((*mptr) == (*eptr))
    {
        *mptr = newval;
        return 1;
    }
    else
    {
        *eptr = newval;
        return 0;
    }


<<<<<<< HEAD
=======
function: __atomic_exchange_n   stmt:     return res;

>>>>>>> origin/main
function: __VERIFIER_atomic_exchange   stmt:     return old;
=======
function: exponential_backoff   stmt:     for (loop = 0; loop < 10; loop++)
            ;
>>>>>>> origin/main


function: __VERIFIER_atomic_swap_stack_top   stmt:     if ((*oldtop) == (*top))
    {
        *top = *newtop;
        return 1;
    }
    else
    {
        *oldtop = *top;
        return 0;
    }


function: lfds711_misc_internal_backoff_init   stmt:     return;

function: lfds711_stack_init_valid_on_current_logical_core   stmt:     return;

function: lfds711_stack_pop   stmt:     return result;

function: lfds711_stack_push   stmt:     return;

function: __VERIFIER_atomic_compare_and_exchange   stmt:     if ((*mptr) == (*eptr))
    {
        *mptr = newval;
        return 1;
    }
    else
    {
        *eptr = newval;
        return 0;
    }


function: __atomic_compare_exchange_n   stmt:     return res;

function: __VERIFIER_atomic_exchange   stmt:     return old;

function: __atomic_exchange_n   stmt:     return res;

function: __atomic_thread_fence   stmt:     return res;

function: init   stmt:     return (void *) (&mystack);

function: insert   stmt:     lfds711_stack_push((struct lfds711_stack_state *) s, &td->se);

function: delete   stmt:     return res;

function: contains   stmt:     return found;

<<<<<<< HEAD
<<<<<<< HEAD
function: push   stmt:     for (loop = 0; loop < 10; loop++)
    {
        if (0)
        {
            pthread_mutex_lock(&lock);
        }

        ;
        td[loop].user_id = loop;
        td[loop].se.value = (void *) ((lfds711_pal_uint_t) (&td[loop]));
        lfds711_stack_push(&ss, &td[loop].se);
        if (0)
        {
            pthread_mutex_unlock(&lock);
        }

        ;
    }


function: pop   stmt:     for (loop = 0; loop < 10; loop++)
    {
        temp_td = 0;
        if (0)
        {
            pthread_mutex_lock(&lock);
        }

        ;
        res = lfds711_stack_pop(&ss, &se);
        if (0)
        {
            pthread_mutex_unlock(&lock);
        }

        ;
=======
function: push   stmt:     for (loop = 0; loop < 1; loop++)
=======
function: push   stmt:     for (loop = 0; loop < 5; loop++)
>>>>>>> origin/main
    {
        if (ATOMIC_OPERATION)
        {
            pthread_mutex_lock(&lock);
        }

<<<<<<< HEAD
function: pop   stmt:     for (loop = 0; loop < 1; loop++)
    {
        temp_td = 0;
        res = lfds711_stack_pop(&ss, &se);
>>>>>>> origin/main
        if (res == 0)
                continue;
=======
        ;
        insert(ss, loop);
        if (ATOMIC_OPERATION)
        {
            pthread_mutex_unlock(&lock);
        }
>>>>>>> origin/main

        ;
    }


function: pop   stmt:     for (loop = 0; loop < 5; loop++)
    {
        if (ATOMIC_OPERATION)
        {
            pthread_mutex_lock(&lock);
        }

        ;
        delete(ss);
        if (ATOMIC_OPERATION)
        {
            pthread_mutex_unlock(&lock);
        }

        ;
    }


function: main   stmt:     return 0;


All symbols (new symbol table - work in progress):
   (0, 'entropy')  
   (1, 'entropy')  
   (2, 'lfds711_prng_init_valid_on_current_logical_core')  
   (3, 'ps')  
   (4, 'seed')  
   (5, 'lfds711_prng_st_init')  
   (6, 'psts')  
   (7, 'seed')  
   (8, 'lock')  
   (9, 'backoff_iteration_frequency_counters')  
   (10, 'metric')  
   (11, 'total_operations')  
   (12, 'ps')  
   (13, 'min_elements')  
   (14, 'max_elements')  
   (15, 'lfds711_misc_globals')  
   (16, 'lfds711_misc_force_store')  
   (17, 'lfds711_misc_query')  
   (18, 'query_type')  
   (19, 'query_input')  
   (20, 'query_output')  
   (21, 'lfds711_misc_force_store')  
   (22, 'destination')  
   (23, 'left')  
   (24, 'right')  
   (25, 'up')  
   (26, 'value')  
   (27, 'key')  
   (28, 'root')  
   (29, 'key_compare_function')  
   (30, 'new_key')  
   (31, 'existing_key')  
   (32, 'existing_key')  
   (33, 'user_state')  
   (34, 'insert_backoff')  
   (35, 'lfds711_btree_au_init_valid_on_current_logical_core')  
   (36, 'baus')  
   (37, 'key_compare_function')  
   (38, 'new_key')  
   (39, 'existing_key')  
   (40, 'existing_key')  
   (41, 'user_state')  
   (42, 'lfds711_btree_au_cleanup')  
   (43, 'baus')  
   (44, 'element_cleanup_callback')  
   (45, 'baus')  
   (46, 'baue')  
   (47, 'lfds711_btree_au_insert')  
   (48, 'baus')  
   (49, 'baue')  
   (50, 'existing_baue')  
   (51, 'lfds711_btree_au_get_by_key')  
   (52, 'baus')  
   (53, 'key_compare_function')  
   (54, 'new_key')  
   (55, 'existing_key')  
   (56, 'key')  
   (57, 'baue')  
   (58, 'lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position')  
   (59, 'baus')  
   (60, 'baue')  
   (61, 'absolute_position')  
   (62, 'relative_position')  
   (63, 'lfds711_btree_au_get_by_absolute_position')  
   (64, 'baus')  
   (65, 'baue')  
   (66, 'absolute_position')  
   (67, 'lfds711_btree_au_get_by_relative_position')  
   (68, 'baue')  
   (69, 'relative_position')  
   (70, 'lfds711_btree_au_query')  
   (71, 'baus')  
   (72, 'query_type')  
   (73, 'query_input')  
   (74, 'query_output')  
   (75, 'next')  
   (76, 'key')  
   (77, 'value')  
   (78, 'top')  
   (79, 'elimination_array_size_in_elements')  
   (80, 'elimination_array')  
   (81, 'user_state')  
   (82, 'pop_backoff')  
   (83, 'push_backoff')  
   (84, 'lfds711_freelist_init_valid_on_current_logical_core')  
   (85, 'fs')  
   (86, 'elimination_array')  
   (87, 'elimination_array_size_in_elements')  
   (88, 'user_state')  
   (89, 'lfds711_freelist_cleanup')  
   (90, 'fs')  
   (91, 'element_cleanup_callback')  
   (92, 'fs')  
   (93, 'fe')  
   (94, 'lfds711_freelist_push')  
   (95, 'fs')  
   (96, 'fe')  
   (97, 'psts')  
   (98, 'lfds711_freelist_pop')  
   (99, 'fs')  
   (100, 'fe')  
   (101, 'psts')  
   (102, 'lfds711_freelist_query')  
   (103, 'fs')  
   (104, 'query_type')  
   (105, 'query_input')  
   (106, 'query_output')  
   (107, 'baue')  
   (108, 'key')  
   (109, 'value')  
   (110, 'baue')  
   (111, 'baus')  
   (112, 'baus_end')  
   (113, 'existing_key')  
   (114, 'key_compare_function')  
   (115, 'new_key')  
   (116, 'existing_key')  
   (117, 'array_size')  
   (118, 'baus_array')  
   (119, 'element_cleanup_callback')  
   (120, 'has')  
   (121, 'hae')  
   (122, 'key_hash_function')  
   (123, 'key')  
   (124, 'hash')  
   (125, 'user_state')  
   (126, 'lfds711_hash_a_init_valid_on_current_logical_core')  
   (127, 'has')  
   (128, 'baus_array')  
   (129, 'array_size')  
   (130, 'key_compare_function')  
   (131, 'new_key')  
   (132, 'existing_key')  
   (133, 'key_hash_function')  
   (134, 'key')  
   (135, 'hash')  
   (136, 'existing_key')  
   (137, 'user_state')  
   (138, 'lfds711_hash_a_cleanup')  
   (139, 'has')  
   (140, 'element_cleanup_function')  
   (141, 'has')  
   (142, 'hae')  
   (143, 'lfds711_hash_a_insert')  
   (144, 'has')  
   (145, 'hae')  
   (146, 'existing_hae')  
   (147, 'lfds711_hash_a_get_by_key')  
   (148, 'has')  
   (149, 'key_compare_function')  
   (150, 'new_key')  
   (151, 'existing_key')  
   (152, 'key_hash_function')  
   (153, 'key')  
   (154, 'hash')  
   (155, 'key')  
   (156, 'hae')  
   (157, 'lfds711_hash_a_iterate_init')  
   (158, 'has')  
   (159, 'hai')  
   (160, 'lfds711_hash_a_iterate')  
   (161, 'hai')  
   (162, 'hae')  
   (163, 'lfds711_hash_a_query')  
   (164, 'has')  
   (165, 'query_type')  
   (166, 'query_input')  
   (167, 'query_output')  
   (168, 'next')  
   (169, 'value')  
   (170, 'key')  
   (171, 'dummy_element')  
   (172, 'start')  
   (173, 'key_compare_function')  
   (174, 'new_key')  
   (175, 'existing_key')  
   (176, 'existing_key')  
   (177, 'user_state')  
   (178, 'insert_backoff')  
   (179, 'lfds711_list_aso_init_valid_on_current_logical_core')  
   (180, 'lasos')  
   (181, 'key_compare_function')  
   (182, 'new_key')  
   (183, 'existing_key')  
   (184, 'existing_key')  
   (185, 'user_state')  
   (186, 'lfds711_list_aso_cleanup')  
   (187, 'lasos')  
   (188, 'element_cleanup_callback')  
   (189, 'lasos')  
   (190, 'lasoe')  
   (191, 'lfds711_list_aso_insert')  
   (192, 'lasos')  
   (193, 'lasoe')  
   (194, 'existing_lasoe')  
   (195, 'lfds711_list_aso_get_by_key')  
   (196, 'lasos')  
   (197, 'key')  
   (198, 'lasoe')  
   (199, 'lfds711_list_aso_query')  
   (200, 'lasos')  
   (201, 'query_type')  
   (202, 'query_input')  
   (203, 'query_output')  
   (204, 'next')  
   (205, 'value')  
   (206, 'key')  
   (207, 'dummy_element')  
   (208, 'end')  
   (209, 'start')  
   (210, 'user_state')  
   (211, 'after_backoff')  
   (212, 'end_backoff')  
   (213, 'start_backoff')  
   (214, 'lfds711_list_asu_init_valid_on_current_logical_core')  
   (215, 'lasus')  
   (216, 'user_state')  
   (217, 'lfds711_list_asu_cleanup')  
   (218, 'lasus')  
   (219, 'element_cleanup_callback')  
   (220, 'lasus')  
   (221, 'lasue')  
   (222, 'lfds711_list_asu_insert_at_position')  
   (223, 'lasus')  
   (224, 'lasue')  
   (225, 'lasue_predecessor')  
   (226, 'position')  
   (227, 'lfds711_list_asu_insert_at_start')  
   (228, 'lasus')  
   (229, 'lasue')  
   (230, 'lfds711_list_asu_insert_at_end')  
   (231, 'lasus')  
   (232, 'lasue')  
   (233, 'lfds711_list_asu_insert_after_element')  
   (234, 'lasus')  
   (235, 'lasue')  
   (236, 'lasue_predecessor')  
   (237, 'lfds711_list_asu_get_by_key')  
   (238, 'lasus')  
   (239, 'key_compare_function')  
   (240, 'new_key')  
   (241, 'existing_key')  
   (242, 'key')  
   (243, 'lasue')  
   (244, 'lfds711_list_asu_query')  
   (245, 'lasus')  
   (246, 'query_type')  
   (247, 'query_input')  
   (248, 'query_output')  
   (249, 'sequence_number')  
   (250, 'key')  
   (251, 'value')  
   (252, 'number_elements')  
   (253, 'mask')  
   (254, 'read_index')  
   (255, 'write_index')  
   (256, 'element_array')  
   (257, 'user_state')  
   (258, 'dequeue_backoff')  
   (259, 'enqueue_backoff')  
   (260, 'lfds711_queue_bmm_init_valid_on_current_logical_core')  
   (261, 'qbmms')  
   (262, 'element_array')  
   (263, 'number_elements')  
   (264, 'user_state')  
   (265, 'lfds711_queue_bmm_cleanup')  
   (266, 'qbmms')  
   (267, 'element_cleanup_callback')  
   (268, 'qbmms')  
   (269, 'key')  
   (270, 'value')  
   (271, 'lfds711_queue_bmm_enqueue')  
   (272, 'qbmms')  
   (273, 'key')  
   (274, 'value')  
   (275, 'lfds711_queue_bmm_dequeue')  
   (276, 'qbmms')  
   (277, 'key')  
   (278, 'value')  
   (279, 'lfds711_queue_bmm_query')  
   (280, 'qbmms')  
   (281, 'query_type')  
   (282, 'query_input')  
   (283, 'query_output')  
   (284, 'key')  
   (285, 'value')  
   (286, 'number_elements')  
   (287, 'mask')  
   (288, 'read_index')  
   (289, 'write_index')  
   (290, 'element_array')  
   (291, 'user_state')  
   (292, 'lfds711_queue_bss_init_valid_on_current_logical_core')  
   (293, 'qbsss')  
   (294, 'element_array')  
   (295, 'number_elements')  
   (296, 'user_state')  
   (297, 'lfds711_queue_bss_cleanup')  
   (298, 'qbsss')  
   (299, 'element_cleanup_callback')  
   (300, 'qbsss')  
   (301, 'key')  
   (302, 'value')  
   (303, 'lfds711_queue_bss_enqueue')  
   (304, 'qbsss')  
   (305, 'key')  
   (306, 'value')  
   (307, 'lfds711_queue_bss_dequeue')  
   (308, 'qbsss')  
   (309, 'key')  
   (310, 'value')  
   (311, 'lfds711_queue_bss_query')  
   (312, 'qbsss')  
   (313, 'query_type')  
   (314, 'query_input')  
   (315, 'query_output')  
   (316, 'next')  
   (317, 'key')  
   (318, 'value')  
   (319, 'enqueue')  
   (320, 'dequeue')  
   (321, 'aba_counter')  
   (322, 'user_state')  
   (323, 'dequeue_backoff')  
   (324, 'enqueue_backoff')  
   (325, 'lfds711_queue_umm_init_valid_on_current_logical_core')  
   (326, 'qumms')  
   (327, 'qumme_dummy')  
   (328, 'user_state')  
   (329, 'lfds711_queue_umm_cleanup')  
   (330, 'qumms')  
   (331, 'element_cleanup_callback')  
   (332, 'qumms')  
   (333, 'qumme')  
   (334, 'dummy_element_flag')  
   (335, 'lfds711_queue_umm_enqueue')  
   (336, 'qumms')  
   (337, 'qumme')  
   (338, 'lfds711_queue_umm_dequeue')  
   (339, 'qumms')  
   (340, 'qumme')  
   (341, 'lfds711_queue_umm_query')  
   (342, 'qumms')  
   (343, 'query_type')  
   (344, 'query_input')  
   (345, 'query_output')  
   (346, 'fe')  
   (347, 'qumme')  
   (348, 'qumme_use')  
   (349, 'key')  
   (350, 'value')  
   (351, 'fs')  
   (352, 'qumms')  
   (353, 'element_cleanup_callback')  
   (354, 'rs')  
   (355, 'key')  
   (356, 'value')  
   (357, 'unread_flag')  
   (358, 'user_state')  
   (359, 'lfds711_ringbuffer_init_valid_on_current_logical_core')  
   (360, 'rs')  
   (361, 're_array_inc_dummy')  
   (362, 'number_elements_inc_dummy')  
   (363, 'user_state')  
   (364, 'lfds711_ringbuffer_cleanup')  
   (365, 'rs')  
   (366, 'element_cleanup_callback')  
   (367, 'rs')  
   (368, 'key')  
   (369, 'value')  
   (370, 'unread_flag')  
   (371, 'lfds711_ringbuffer_read')  
   (372, 'rs')  
   (373, 'key')  
   (374, 'value')  
   (375, 'lfds711_ringbuffer_write')  
   (376, 'rs')  
   (377, 'key')  
   (378, 'value')  
   (379, 'overwrite_occurred_flag')  
   (380, 'overwritten_key')  
   (381, 'overwritten_value')  
   (382, 'lfds711_ringbuffer_query')  
   (383, 'rs')  
   (384, 'query_type')  
   (385, 'query_input')  
   (386, 'query_output')  
   (387, 'next')  
   (388, 'key')  
   (389, 'value')  
   (390, 'top')  
   (391, 'user_state')  
   (392, 'pop_backoff')  
   (393, 'push_backoff')  
   (394, 'lfds711_stack_init_valid_on_current_logical_core')  
   (395, 'ss')  
   (396, 'user_state')  
   (397, 'lfds711_stack_cleanup')  
   (398, 'ss')  
   (399, 'element_cleanup_callback')  
   (400, 'ss')  
   (401, 'se')  
   (402, 'lfds711_stack_push')  
   (403, 'ss')  
   (404, 'se')  
   (405, 'lfds711_stack_pop')  
   (406, 'ss')  
   (407, 'se')  
   (408, 'lfds711_stack_query')  
   (409, 'ss')  
   (410, 'query_type')  
   (411, 'query_input')  
   (412, 'query_output')  
   (413, 'lfds711_misc_internal_backoff_init')  
   (414, 'bs')  
<<<<<<< HEAD
<<<<<<< HEAD
   (415, '__VERIFIER_atomic_compare_and_exchange')  
   (416, 'mptr')  
   (417, 'eptr')  
   (418, 'newval')  
   (419, 'weak_p')  
   (420, 'sm')  
   (421, 'fm')  
   (422, '__VERIFIER_atomic_exchange')  
   (423, 'previous')  
   (424, 'new')  
   (425, 'memorder')  
   (426, 'old')  
   (427, '__atomic_thread_fence')  
   (428, 'i')  
   (429, '__VERIFIER_atomic_swap_stack_top')  
   (430, 'top')  
   (431, 'oldtop')  
   (432, 'newtop')  
   (433, 'exponential_backoff')  
   (434, 'loop')  
   (435, 'lock')  
   (436, 'lfds711_misc_internal_backoff_init')  
   (437, 'bs')  
   (438, 'c')  
   (439, 'c')  
   (440, 'lfds711_stack_init_valid_on_current_logical_core')  
   (441, 'ss')  
   (442, 'user_state')  
   (443, 'c')  
   (444, 'c')  
   (445, 'c')  
   (446, 'lfds711_stack_pop')  
   (447, 'ss')  
   (448, 'se')  
   (449, 'result')  
   (450, 'backoff_iteration')  
   (451, 'new_top')  
   (452, 'original_top')  
   (453, 'c')  
   (454, 'c')  
   (455, 'i')  
   (456, 'lfds711_stack_push')  
   (457, 'ss')  
   (458, 'se')  
   (459, 'result')  
   (460, 'backoff_iteration')  
   (461, 'new_top')  
   (462, 'original_top')  
   (463, 'c')  
   (464, 'c')  
   (465, 'i')  
   (466, 'lfds711_stack_cleanup')  
   (467, 'ss')  
   (468, 'element_cleanup_callback')  
   (469, 'ss')  
   (470, 'se')  
   (471, 'se')  
   (472, 'se_temp')  
   (473, 'c')  
   (474, 'se')  
   (475, 'user_id')  
   (476, 'next')  
   (477, 'payload')  
   (478, 'LIST_InsertHeadNode')  
   (479, 'IO_head')  
   (480, 'I__se')  
   (481, 'I__user_id')  
   (482, 'rCode')  
   (483, 'newNode')  
   (484, 'PrintListPayloads')  
   (485, 'head')  
   (486, 'rCode')  
   (487, 'cur')  
   (488, 'GetListSize')  
   (489, 'head')  
   (490, 'cur')  
   (491, 'nodeCnt')  
   (492, 'LIST_GetTailNode')  
   (493, 'I__listHead')  
   (494, '_O_listTail')  
   (495, 'rCode')  
   (496, 'curNode')  
   (497, 'LIST_InsertTailNode')  
   (498, 'IO_head')  
   (499, 'I__se')  
   (500, 'I__user_id')  
   (501, 'rCode')  
   (502, 'tailNode')  
   (503, 'newNode')  
   (504, 'LIST_FetchParentNodeById')  
   (505, 'I__head')  
   (506, 'I__user_id')  
   (507, '_O_parent')  
   (508, 'rCode')  
   (509, 'parent')  
   (510, 'curNode')  
   (511, 'LIST_InsertNodeById')  
   (512, 'IO_head')  
   (513, 'I__user_id')  
   (514, 'I__se')  
   (515, 'rCode')  
   (516, 'parent')  
   (517, 'newNode')  
   (518, 'LIST_FetchNodeById')  
   (519, 'I__head')  
   (520, 'I__user_id')  
   (521, '_O_node')  
   (522, '_O_parent')  
   (523, 'rCode')  
   (524, 'parent')  
   (525, 'curNode')  
   (526, 'LIST_DeleteNodeById')  
   (527, 'IO_head')  
   (528, 'I__user_id')  
   (529, 'rCode')  
   (530, 'parent')  
   (531, 'delNode')  
   (532, 'LIST_Destroy')  
   (533, 'IO_head')  
   (534, 'rCode')  
   (535, 'delNode')  
   (536, 'ss')  
   (537, 'se')  
   (538, 'user_id')  
   (539, 'push')  
   (540, 'td')  
   (541, 'loop')  
   (542, 'pop')  
   (543, 'se')  
   (544, 'temp_td')  
   (545, 'res')  
   (546, 'count')  
   (547, 'loop')  
   (548, 'writeIntofile')  
   (549, 'filename')  
   (550, 'listHead')  
   (551, 'filefd')  
   (552, 'saved')  
   (553, 'createList')  
   (554, 'listHead')  
   (555, 'se')  
   (556, 'temp_td')  
   (557, 'res')  
   (558, 'readFile')  
   (559, 'filename')  
   (560, 'listHead')  
   (561, 'line')  
   (562, 'len')  
   (563, 'read')  
   (564, 'parent')  
   (565, 'curNode')  
   (566, 'delim')  
   (567, 'i')  
   (568, 'size')  
   (569, 'fp')  
   (570, 'ptr')  
   (571, 'main')  
   (572, 'listHead')  
   (573, 't1')  
   (574, 't2')  
=======
   (415, 'lock')  
   (416, '__atomic_compare_exchange_n')  
   (417, 'mptr')  
   (418, 'eptr')  
   (419, 'newval')  
   (420, 'weak_p')  
   (421, 'sm')  
   (422, 'fm')  
   (423, 'res')  
   (424, '__VERIFIER_atomic_compare_and_exchange')  
   (425, 'mptr')  
   (426, 'eptr')  
   (427, 'newval')  
   (428, 'weak_p')  
   (429, 'sm')  
   (430, 'fm')  
   (431, '__atomic_exchange_n')  
   (432, 'previous')  
   (433, 'new')  
   (434, 'memorder')  
   (435, 'res')  
   (436, '__VERIFIER_atomic_exchange')  
   (437, 'previous')  
   (438, 'new')  
   (439, 'memorder')  
   (440, 'old')  
   (441, '__atomic_thread_fence')  
   (442, 'i')  
   (443, '__VERIFIER_atomic_swap_stack_top')  
   (444, 'top')  
   (445, 'oldtop')  
   (446, 'newtop')  
   (447, 'exponential_backoff')  
   (448, 'loop')  
   (449, 'lfds711_misc_internal_backoff_init')  
   (450, 'bs')  
   (451, 'c')  
   (452, 'c')  
   (453, 'lfds711_stack_init_valid_on_current_logical_core')  
   (454, 'ss')  
   (455, 'user_state')  
   (456, 'c')  
   (457, 'c')  
   (458, 'c')  
   (459, 'lfds711_stack_pop')  
   (460, 'ss')  
   (461, 'se')  
   (462, 'result')  
   (463, 'backoff_iteration')  
   (464, 'new_top')  
   (465, 'original_top')  
   (466, 'c')  
   (467, 'c')  
   (468, 'i')  
   (469, 'lfds711_stack_push')  
   (470, 'ss')  
   (471, 'se')  
   (472, 'result')  
   (473, 'backoff_iteration')  
   (474, 'new_top')  
   (475, 'original_top')  
   (476, 'c')  
   (477, 'c')  
   (478, 'i')  
   (479, 'lfds711_stack_cleanup')  
   (480, 'ss')  
   (481, 'element_cleanup_callback')  
   (482, 'ss')  
   (483, 'se')  
   (484, 'se')  
   (485, 'se_temp')  
   (486, 'c')  
   (487, 'se')  
   (488, 'user_id')  
   (489, 'next')  
   (490, 'payload')  
   (491, 'LIST_InsertHeadNode')  
   (492, 'IO_head')  
   (493, 'I__se')  
   (494, 'I__user_id')  
   (495, 'rCode')  
   (496, 'newNode')  
   (497, 'PrintListPayloads')  
   (498, 'head')  
   (499, 'rCode')  
   (500, 'cur')  
   (501, 'GetListSize')  
   (502, 'head')  
   (503, 'cur')  
   (504, 'nodeCnt')  
   (505, 'LIST_GetTailNode')  
   (506, 'I__listHead')  
   (507, '_O_listTail')  
   (508, 'rCode')  
   (509, 'curNode')  
   (510, 'LIST_InsertTailNode')  
   (511, 'IO_head')  
   (512, 'I__se')  
   (513, 'I__user_id')  
   (514, 'rCode')  
   (515, 'tailNode')  
   (516, 'newNode')  
   (517, 'LIST_FetchParentNodeById')  
   (518, 'I__head')  
   (519, 'I__user_id')  
   (520, '_O_parent')  
   (521, 'rCode')  
   (522, 'parent')  
   (523, 'curNode')  
   (524, 'LIST_InsertNodeById')  
   (525, 'IO_head')  
   (526, 'I__user_id')  
   (527, 'I__se')  
   (528, 'rCode')  
   (529, 'parent')  
   (530, 'newNode')  
   (531, 'LIST_FetchNodeById')  
   (532, 'I__head')  
   (533, 'I__user_id')  
   (534, '_O_node')  
   (535, '_O_parent')  
   (536, 'rCode')  
   (537, 'parent')  
   (538, 'curNode')  
   (539, 'LIST_DeleteNodeById')  
   (540, 'IO_head')  
   (541, 'I__user_id')  
   (542, 'rCode')  
   (543, 'parent')  
   (544, 'delNode')  
   (545, 'LIST_Destroy')  
   (546, 'IO_head')  
   (547, 'rCode')  
   (548, 'delNode')  
   (549, 'ss')  
   (550, 'se')  
   (551, 'user_id')  
   (552, 'push')  
   (553, 'td')  
   (554, 'loop')  
   (555, 'pop')  
   (556, 'se')  
   (557, 'temp_td')  
   (558, 'res')  
   (559, 'count')  
   (560, 'loop')  
   (561, 'writeIntofile')  
   (562, 'filename')  
   (563, 'listHead')  
   (564, 'filefd')  
   (565, 'saved')  
   (566, 'createList')  
   (567, 'listHead')  
   (568, 'se')  
   (569, 'temp_td')  
   (570, 'res')  
   (571, 'readFile')  
   (572, 'filename')  
   (573, 'listHead')  
   (574, 'line')  
   (575, 'len')  
   (576, 'read')  
   (577, 'parent')  
   (578, 'curNode')  
   (579, 'delim')  
   (580, 'i')  
   (581, 'size')  
   (582, 'fp')  
   (583, 'ptr')  
   (584, 'main')  
   (585, 'listHead')  
   (586, 't1')  
   (587, 't2')  
>>>>>>> origin/main
=======
   (415, 'library_lock')  
   (416, 'exponential_backoff')  
   (417, 'loop')  
   (418, '__VERIFIER_atomic_swap_stack_top')  
   (419, 'top')  
   (420, 'oldtop')  
   (421, 'newtop')  
   (422, 'lfds711_misc_internal_backoff_init')  
   (423, 'bs')  
   (424, 'c')  
   (425, 'c')  
   (426, 'lfds711_stack_init_valid_on_current_logical_core')  
   (427, 'ss')  
   (428, 'user_state')  
   (429, 'c')  
   (430, 'c')  
   (431, 'c')  
   (432, 'lfds711_stack_pop')  
   (433, 'ss')  
   (434, 'se')  
   (435, 'result')  
   (436, 'backoff_iteration')  
   (437, 'new_top')  
   (438, 'original_top')  
   (439, 'c')  
   (440, 'c')  
   (441, 'i')  
   (442, 'lfds711_stack_push')  
   (443, 'ss')  
   (444, 'se')  
   (445, 'result')  
   (446, 'backoff_iteration')  
   (447, 'new_top')  
   (448, 'original_top')  
   (449, 'c')  
   (450, 'c')  
   (451, 'i')  
   (452, '__VERIFIER_atomic_compare_and_exchange')  
   (453, 'mptr')  
   (454, 'eptr')  
   (455, 'newval')  
   (456, 'weak_p')  
   (457, 'sm')  
   (458, 'fm')  
   (459, '__atomic_compare_exchange_n')  
   (460, 'mptr')  
   (461, 'eptr')  
   (462, 'newval')  
   (463, 'weak_p')  
   (464, 'sm')  
   (465, 'fm')  
   (466, 'res')  
   (467, '__VERIFIER_atomic_exchange')  
   (468, 'previous')  
   (469, 'new')  
   (470, 'memorder')  
   (471, 'old')  
   (472, '__atomic_exchange_n')  
   (473, 'previous')  
   (474, 'new')  
   (475, 'memorder')  
   (476, 'res')  
   (477, '__atomic_thread_fence')  
   (478, 'i')  
   (479, 'mystack')  
   (480, 'se')  
   (481, 'user_id')  
   (482, 'init')  
   (483, 'insert')  
   (484, 's')  
   (485, 'id')  
   (486, 'td')  
   (487, 'delete')  
   (488, 's')  
   (489, 'se')  
   (490, 'temp_td')  
   (491, 'res')  
   (492, 'id_popped')  
   (493, 'contains')  
   (494, 's')  
   (495, 'id')  
   (496, 'max_size')  
   (497, 'actual_size')  
   (498, 'res')  
   (499, 'found')  
   (500, 'dimension')  
   (501, 'datas')  
   (502, 'se')  
   (503, 'i')  
   (504, 'ATOMIC_OPERATION')  
   (505, 'ss')  
   (506, 'lock')  
   (507, 'push')  
   (508, 'loop')  
   (509, 'pop')  
   (510, 'res')  
   (511, 'count')  
   (512, 'loop')  
   (513, 'main')  
   (514, 't1')  
   (515, 't2')  
   (516, 't3')  
   (517, 't4')  
   (518, 't5')  
   (519, 't6')  
   (520, 't7')  
   (521, 't8')  
   (522, 't9')  
   (523, 't10')  
>>>>>>> origin/main
