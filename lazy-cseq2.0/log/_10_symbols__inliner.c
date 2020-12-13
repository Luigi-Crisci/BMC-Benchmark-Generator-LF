list of functions:
   check(param: __cs_param_check_ss)  call count 1
   lfds711_misc_force_store(param: )  call count 1
   exponential_backoff(param: )  call count 3
   __CSEQ_atomic_swap_stack_top(param: __cs_param___CSEQ_atomic_swap_stack_top_top, __cs_param___CSEQ_atomic_swap_stack_top_oldtop, __cs_param___CSEQ_atomic_swap_stack_top_newtop)  call count 3
   lfds711_misc_internal_backoff_init(param: __cs_param_lfds711_misc_internal_backoff_init_bs)  call count 2
   lfds711_stack_init_valid_on_current_logical_core(param: __cs_param_lfds711_stack_init_valid_on_current_logical_core_ss, __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state)  call count 1
   lfds711_stack_pop(param: __cs_param_lfds711_stack_pop_ss, __cs_param_lfds711_stack_pop_se)  call count 4
   lfds711_stack_push(param: __cs_param_lfds711_stack_push_ss, __cs_param_lfds711_stack_push_se)  call count 4
   __CSEQ_atomic_compare_and_exchange(param: __cs_param___CSEQ_atomic_compare_and_exchange_mptr, __cs_param___CSEQ_atomic_compare_and_exchange_eptr, __cs_param___CSEQ_atomic_compare_and_exchange_newval, __cs_param___CSEQ_atomic_compare_and_exchange_weak_p, __cs_param___CSEQ_atomic_compare_and_exchange_sm, __cs_param___CSEQ_atomic_compare_and_exchange_fm)  call count 1
   __atomic_compare_exchange_n(param: __cs_param___atomic_compare_exchange_n_mptr, __cs_param___atomic_compare_exchange_n_eptr, __cs_param___atomic_compare_exchange_n_newval, __cs_param___atomic_compare_exchange_n_weak_p, __cs_param___atomic_compare_exchange_n_sm, __cs_param___atomic_compare_exchange_n_fm)  call count 0
   __CSEQ_atomic_exchange(param: __cs_param___CSEQ_atomic_exchange_previous, __cs_param___CSEQ_atomic_exchange_new, __cs_param___CSEQ_atomic_exchange_memorder)  call count 1
   __atomic_exchange_n(param: __cs_param___atomic_exchange_n_previous, __cs_param___atomic_exchange_n_new, __cs_param___atomic_exchange_n_memorder)  call count 0
   __atomic_thread_fence(param: __cs_param___atomic_thread_fence_i)  call count 0
   init(param: )  call count 1
   insert(param: __cs_param_insert_s, __cs_param_insert_id)  call count 3
   delete(param: __cs_param_delete_s)  call count 1
   contains(param: __cs_param_contains_s, __cs_param_contains_id)  call count 1
   get_size(param: __cs_param_get_size_s)  call count 0
   is_empty(param: __cs_param_is_empty_s)  call count 0
   thread1(param: __cs_param_thread1___cs_unused)  call count 0
   thread2(param: __cs_param_thread2___cs_unused)  call count 0
   main(param: )  call count 0

list of thread functions:
   thread1  call count 1
   thread2  call count 1

parameters for main():
   (no params)

Variables:
   (global)
      id6  '__cs_param__ps'  
         type 'struct lfds711_prng_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id7  '__cs_param__seed'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id8  '__cs_param__psts'  
         type 'struct lfds711_prng_st_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id9  'None'  
         type 'enum lfds711_stack_query {LFDS711_STACK_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_STACK_QUERY_SINGLETHREADED_VALIDATE}'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id17  'lfds711_misc_globals'  
         type 'struct lfds711_misc_globals'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id18  '__cs_param__query_type'  
         type 'enum lfds711_stack_query'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id19  '__cs_param__query_input'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id20  '__cs_param__query_output'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id34  '__cs_param__baus'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id35  '__cs_param__key_compare_function'  
         type 'int (*)(const void, const void)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id36  '__cs_param__existing_key'  
         type 'enum lfds711_list_aso_existing_key'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id37  '__cs_param__user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id38  '__cs_param__element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id39  '__cs_param__baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id40  '__cs_param__existing_baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id41  '__cs_param__key'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id42  '__cs_param__absolute_position'  
         type 'enum lfds711_btree_au_absolute_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id43  '__cs_param__relative_position'  
         type 'enum lfds711_btree_au_relative_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id53  '__cs_param__fs'  
         type 'struct lfds711_freelist_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id54  '__cs_param__elimination_array'  
         type 'struct lfds711_freelist_element * volatile (*)'  kind 'p'  arity '1'  
         size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id55  '__cs_param__elimination_array_size_in_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id56  '__cs_param__fe'  
         type 'struct lfds711_freelist_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id76  '__cs_param__has'  
         type 'struct lfds711_hash_a_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id77  '__cs_param__baus_array'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id78  '__cs_param__array_size'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id79  '__cs_param__key_hash_function'  
         type 'void (*)(const void, lfds711_pal_uint_t)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id80  '__cs_param__element_cleanup_function'  
         type 'void (*)(struct lfds711_hash_a_state, struct lfds711_hash_a_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id81  '__cs_param__hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id82  '__cs_param__existing_hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id83  '__cs_param__hai'  
         type 'struct lfds711_hash_a_iterate *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id95  '__cs_param__lasos'  
         type 'struct lfds711_list_aso_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id96  '__cs_param__lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id97  '__cs_param__existing_lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id108  '__cs_param__lasus'  
         type 'struct lfds711_list_asu_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id109  '__cs_param__lasue'  
         type 'struct lfds711_list_asu_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id110  '__cs_param__lasue_predecessor'  
         type 'struct lfds711_list_asu_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id111  '__cs_param__position'  
         type 'enum lfds711_list_asu_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id123  '__cs_param__qbmms'  
         type 'struct lfds711_queue_bmm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id124  '__cs_param__element_array'  
         type 'struct lfds711_queue_bss_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id125  '__cs_param__number_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id126  '__cs_param__value'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id135  '__cs_param__qbsss'  
         type 'struct lfds711_queue_bss_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id145  '__cs_param__qumms'  
         type 'struct lfds711_queue_umm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id146  '__cs_param__qumme_dummy'  
         type 'struct lfds711_queue_umm_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id147  '__cs_param__qumme'  
         type 'struct lfds711_queue_umm_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id161  '__cs_param__rs'  
         type 'struct lfds711_ringbuffer_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id162  '__cs_param__re_array_inc_dummy'  
         type 'struct lfds711_ringbuffer_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id163  '__cs_param__number_elements_inc_dummy'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id164  '__cs_param__overwrite_occurred_flag'  
         type 'enum lfds711_misc_flag *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id165  '__cs_param__overwritten_key'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id166  '__cs_param__overwritten_value'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id174  '__cs_param__ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id175  '__cs_param__se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id176  '__cs_param__bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id177  'library_lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[637, 671, 678, 711, 712, 731, 733, 740, 741, 765, 767, 774, 775, 827, 829, 831, 833]'  
         deref '[]'  
         occurs '[637, 671, 678, 711, 712, 731, 733, 740, 741, 765, 767, 774, 775, 827, 829, 831, 833]'  
      id245  'mystack'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[898, 899, 914]'  
         deref '[]'  
         occurs '[898, 899, 914]'  
      id281  'ATOMIC_OPERATION'  
         type 'int'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1026, 1035, 1043, 1052, 1063, 1072, 1080, 1089]'  
      id282  'ss'  
         type 'void *'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1032, 1049, 1069, 1086, 1099, 1106]'  
      id283  'lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[1029, 1038, 1046, 1055, 1066, 1075, 1083, 1092, 1098]'  
         deref '[]'  
         occurs '[1029, 1038, 1046, 1055, 1066, 1075, 1083, 1092, 1098]'  
   check
      id0  '__cs_param_check_ss'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[160, 162]'  
      id1  '__cs_local_check_size'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[158, 163]'  
      id2  '__cs_local_check_c0'  
         type 'long unsigned int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[160, 163]'  
      id3  '__cs_local_check_c2'  
         type 'long unsigned int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[162, 163]'  
   lfds711_misc_force_store
      id21  '__cs_local_lfds711_misc_force_store_destination'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[211]'  
         deref '[]'  
         occurs '[211]'  
   exponential_backoff
      id178  '__cs_local_exponential_backoff_loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[581, 581, 581]'  
   __CSEQ_atomic_swap_stack_top
      id179  '__cs_param___CSEQ_atomic_swap_stack_top_top'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[591, 594, 599]'  
         occurs '[591, 594, 599]'  
      id180  '__cs_param___CSEQ_atomic_swap_stack_top_oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[591, 599]'  
         occurs '[591, 599]'  
      id181  '__cs_param___CSEQ_atomic_swap_stack_top_newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[594]'  
         occurs '[594]'  
      id182  '__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[591, 592]'  
   lfds711_misc_internal_backoff_init
      id183  '__cs_param_lfds711_misc_internal_backoff_init_bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[618, 627, 628, 629, 630, 631]'  
         occurs '[607, 618, 627, 628, 629, 630, 631]'  
      id184  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[607, 608]'  
      id185  '__cs_local_lfds711_misc_internal_backoff_init_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[612, 623]'  
         occurs '[611, 612, 622, 623]'  
      id186  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[618, 619]'  
   lfds711_stack_init_valid_on_current_logical_core
      id187  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[651, 662, 672, 673, 674, 675, 676]'  
         occurs '[640, 651, 662, 672, 673, 674, 675, 676]'  
      id188  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[674]'  
      id189  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[640, 641]'  
      id190  '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[645, 656, 667]'  
         occurs '[644, 645, 655, 656, 666, 667]'  
      id191  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[651, 652]'  
      id192  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[662, 663]'  
   lfds711_stack_pop
      id193  '__cs_param_lfds711_stack_pop_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[713, 714, 732, 766]'  
         occurs '[691, 713, 714, 732, 766]'  
      id194  '__cs_param_lfds711_stack_pop_se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[726, 760, 786]'  
         occurs '[702, 726, 760, 786]'  
      id195  '__cs_local_lfds711_stack_pop_result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[732, 736, 753, 766, 770, 787]'  
      id196  '__cs_local_lfds711_stack_pop_backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[686]'  
      id197  '__cs_local_lfds711_stack_pop_new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[732, 766]'  
         deref '[]'  
         occurs '[729, 730, 732, 763, 764, 766]'  
      id198  '__cs_local_lfds711_stack_pop_original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[732, 766]'  
         deref '[730, 764]'  
         occurs '[713, 714, 723, 729, 730, 732, 757, 763, 764, 766, 786]'  
      id199  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[691, 692]'  
      id200  '__cs_local_lfds711_stack_pop_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[696, 707]'  
         occurs '[695, 696, 706, 707]'  
      id201  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[702, 703]'  
      id202  '__cs_local_lfds711_stack_pop_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[716, 743, 746, 777, 780]'  
      id203  '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[719, 719, 719]'  
      id204  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[723, 724]'  
      id205  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[736, 737]'  
      id206  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[746, 747]'  
      id207  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[757, 758]'  
      id208  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[770, 771]'  
      id209  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[780, 781]'  
   lfds711_stack_push
      id210  '__cs_param_lfds711_stack_push_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[820, 821, 832]'  
         occurs '[799, 820, 821, 832]'  
      id211  '__cs_param_lfds711_stack_push_se'  
         type 'struct lfds711_stack_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[828]'  
         occurs '[810, 819, 828]'  
      id212  '__cs_local_lfds711_stack_push_result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[822, 825, 832, 836]'  
      id213  '__cs_local_lfds711_stack_push_backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[794]'  
      id214  '__cs_local_lfds711_stack_push_new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[832]'  
         deref '[]'  
         occurs '[819, 830, 832]'  
      id215  '__cs_local_lfds711_stack_push_original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[832]'  
         deref '[]'  
         occurs '[820, 821, 828, 830, 832]'  
      id216  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[799, 800]'  
      id217  '__cs_local_lfds711_stack_push_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[804, 815]'  
         occurs '[803, 804, 814, 815]'  
      id218  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[810, 811]'  
      id219  '__cs_local_lfds711_stack_push_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[824, 841, 844]'  
      id220  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[836, 837]'  
      id221  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[844, 845]'  
   __CSEQ_atomic_compare_and_exchange
      id222  '__cs_param___CSEQ_atomic_compare_and_exchange_mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[856, 859]'  
         occurs '[856, 859]'  
      id223  '__cs_param___CSEQ_atomic_compare_and_exchange_eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[856, 864]'  
         occurs '[856, 864]'  
      id224  '__cs_param___CSEQ_atomic_compare_and_exchange_newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[859, 864]'  
      id225  '__cs_param___CSEQ_atomic_compare_and_exchange_weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id226  '__cs_param___CSEQ_atomic_compare_and_exchange_sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id227  '__cs_param___CSEQ_atomic_compare_and_exchange_fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id228  '__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[856, 857]'  
   __atomic_compare_exchange_n
      id229  '__cs_param___atomic_compare_exchange_n_mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[871]'  
      id230  '__cs_param___atomic_compare_exchange_n_eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[871]'  
      id231  '__cs_param___atomic_compare_exchange_n_newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[871]'  
      id232  '__cs_param___atomic_compare_exchange_n_weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[871]'  
      id233  '__cs_param___atomic_compare_exchange_n_sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[871]'  
      id234  '__cs_param___atomic_compare_exchange_n_fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[871]'  
      id235  '__cs_local___atomic_compare_exchange_n_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[871, 872]'  
   __CSEQ_atomic_exchange
      id236  '__cs_param___CSEQ_atomic_exchange_previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[877, 878]'  
         occurs '[877, 878]'  
      id237  '__cs_param___CSEQ_atomic_exchange_new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[878]'  
      id238  '__cs_param___CSEQ_atomic_exchange_memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id239  '__cs_local___CSEQ_atomic_exchange_old'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[877, 879]'  
   __atomic_exchange_n
      id240  '__cs_param___atomic_exchange_n_previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[884]'  
      id241  '__cs_param___atomic_exchange_n_new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[884]'  
      id242  '__cs_param___atomic_exchange_n_memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[884]'  
      id243  '__cs_local___atomic_exchange_n_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[884, 885]'  
   __atomic_thread_fence
      id244  '__cs_param___atomic_thread_fence_i'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   init
   insert
      id248  '__cs_param_insert_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[907]'  
      id249  '__cs_param_insert_id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[905]'  
      id250  '__cs_local_insert_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[905, 906, 907]'  
         occurs '[904, 905, 906, 906, 907]'  
   delete
      id251  '__cs_param_delete_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id252  '__cs_local_delete_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[914]'  
         deref '[920]'  
         occurs '[914, 920]'  
      id253  '__cs_local_delete_temp_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id254  '__cs_local_delete_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[914, 917, 922]'  
      id255  '__cs_local_delete___cs_tmp_if_cond_19'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[917, 918]'  
   contains
      id256  '__cs_param_contains_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[941, 964]'  
      id257  '__cs_param_contains_id'  
         type 'unsigned long long int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[953]'  
      id258  '__cs_local_contains_max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[927, 937]'  
      id259  '__cs_local_contains_actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[929, 949, 950, 950, 953, 958, 958, 962]'  
      id260  '__cs_local_contains_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[931, 939, 941, 944]'  
      id261  '__cs_local_contains_found'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[933, 939, 956, 967]'  
      id262  '__cs_local_contains_dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[935]'  
      id263  '__cs_local_contains_datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[950, 953, 964]'  
         occurs '[937, 949, 950, 953, 964]'  
      id264  '__cs_local_contains_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[941]'  
         deref '[949]'  
         occurs '[941, 949]'  
      id265  '__cs_local_contains___cs_tmp_if_cond_20'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[944, 945]'  
      id266  '__cs_local_contains___cs_tmp_if_cond_21'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[953, 954]'  
      id267  '__cs_local_contains_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[961, 962, 964, 965]'  
   get_size
      id268  '__cs_param_get_size_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[984, 999]'  
      id269  '__cs_local_get_size_max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[972, 980]'  
      id270  '__cs_local_get_size_actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[974, 985, 993, 993, 997, 1002]'  
      id271  '__cs_local_get_size_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[976, 982, 984, 988]'  
      id272  '__cs_local_get_size_dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[978]'  
      id273  '__cs_local_get_size_datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[999]'  
         occurs '[980, 985, 999]'  
      id274  '__cs_local_get_size_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[984]'  
         deref '[985]'  
         occurs '[984, 985]'  
      id275  '__cs_local_get_size___cs_tmp_if_cond_22'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[988, 989]'  
      id276  '__cs_local_get_size_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[996, 997, 999, 1000]'  
   is_empty
      id277  '__cs_param_is_empty_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1008, 1014]'  
      id278  '__cs_local_is_empty_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1008]'  
         deref '[]'  
         occurs '[1008, 1014]'  
      id279  '__cs_local_is_empty_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1008, 1011]'  
      id280  '__cs_local_is_empty___cs_tmp_if_cond_23'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1011, 1012]'  
   thread1
      id284  '__cs_param_thread1___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id285  '__cs_local_thread1___cs_tmp_if_cond_24'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1026, 1027]'  
      id286  '__cs_local_thread1___cs_tmp_if_cond_25'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1035, 1036]'  
      id287  '__cs_local_thread1___cs_tmp_if_cond_26'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1043, 1044]'  
      id288  '__cs_local_thread1___cs_tmp_if_cond_27'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1052, 1053]'  
   thread2
      id289  '__cs_param_thread2___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id290  '__cs_local_thread2___cs_tmp_if_cond_28'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1063, 1064]'  
      id291  '__cs_local_thread2___cs_tmp_if_cond_29'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1072, 1073]'  
      id292  '__cs_local_thread2___cs_tmp_if_cond_30'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1080, 1081]'  
      id293  '__cs_local_thread2___cs_tmp_if_cond_31'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1089, 1090]'  
   main
      id294  '__cs_local_main_t1'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1102]'  
         deref '[]'  
         occurs '[1102, 1104]'  
      id295  '__cs_local_main_t2'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1103]'  
         deref '[]'  
         occurs '[1103, 1105]'  

Fields:
   lfds711_prng_state
      id4  'entropy'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_prng_st_state
      id5  'entropy'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_backoff_state
      id10  'lock'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id11  'backoff_iteration_frequency_counters'  type 'lfds711_pal_uint_t'  kind 'f'  arity '1'  size '[2]'  
      id12  'metric'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id13  'total_operations'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_globals
      id14  'ps'  type 'struct lfds711_prng_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_validation_info
      id15  'min_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id16  'max_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_btree_au_element
      id22  'left'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id23  'right'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id24  'up'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id25  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id26  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_btree_au_state
      id27  'root'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id28  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id29  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id30  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id31  'existing_key'  type 'enum lfds711_btree_au_existing_key'  kind 'f'  arity '0'  size '[]'  
      id32  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id33  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_element
      id44  'next'  type 'struct lfds711_freelist_element *'  kind 'f'  arity '0'  size '[]'  
      id45  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id46  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_state
      id47  'top'  type 'struct lfds711_freelist_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id48  'elimination_array_size_in_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id49  'elimination_array'  type 'struct lfds711_freelist_element * volatile (*)'  kind 'f'  arity '1'  size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
      id50  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id51  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id52  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_element
      id57  'baue'  type 'struct lfds711_btree_au_element'  kind 'f'  arity '0'  size '[]'  
      id58  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id59  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_iterate
      id60  'baue'  type 'struct lfds711_btree_au_element *'  kind 'f'  arity '0'  size '[]'  
      id61  'baus'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id62  'baus_end'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_state
      id63  'existing_key'  type 'enum lfds711_hash_a_existing_key'  kind 'f'  arity '0'  size '[]'  
      id64  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id65  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id66  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id67  'array_size'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id68  'baus_array'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id69  '__cs_param__has'  type 'struct lfds711_hash_a_state *'  kind 'f'  arity '0'  size '[]'  
      id70  '__cs_param__hae'  type 'struct lfds711_hash_a_element *'  kind 'f'  arity '0'  size '[]'  
      id71  'element_cleanup_callback'  type 'void (*)(struct lfds711_hash_a_state *__cs_param__has, struct lfds711_hash_a_element *__cs_param__hae)'  kind 'f'  arity '0'  size '[]'  
      id72  '__cs_param__key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id73  '__cs_param__hash'  type 'lfds711_pal_uint_t *'  kind 'f'  arity '0'  size '[]'  
      id74  'key_hash_function'  type 'void (*)(const void *__cs_param__key, lfds711_pal_uint_t *__cs_param__hash)'  kind 'f'  arity '0'  size '[]'  
      id75  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_element
      id84  'next'  type 'struct lfds711_list_aso_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id85  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id86  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_state
      id87  'dummy_element'  type 'struct lfds711_list_aso_element'  kind 'f'  arity '0'  size '[]'  
      id88  'start'  type 'struct lfds711_list_aso_element *'  kind 'f'  arity '0'  size '[]'  
      id89  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id90  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id91  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id92  'existing_key'  type 'enum lfds711_list_aso_existing_key'  kind 'f'  arity '0'  size '[]'  
      id93  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id94  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_element
      id98  'next'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id99  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id100  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_state
      id101  'dummy_element'  type 'struct lfds711_list_asu_element'  kind 'f'  arity '0'  size '[]'  
      id102  'end'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id103  'start'  type 'struct lfds711_list_asu_element *'  kind 'f'  arity '0'  size '[]'  
      id104  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id105  'after_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id106  'end_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id107  'start_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_element
      id112  'sequence_number'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id113  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id114  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_state
      id115  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id116  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id117  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id118  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id119  'element_array'  type 'struct lfds711_queue_bmm_element *'  kind 'f'  arity '0'  size '[]'  
      id120  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id121  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id122  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_element
      id127  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id128  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_state
      id129  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id130  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id131  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id132  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id133  'element_array'  type 'struct lfds711_queue_bss_element *'  kind 'f'  arity '0'  size '[]'  
      id134  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_element
      id136  'next'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id137  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id138  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_state
      id139  'enqueue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id140  'dequeue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id141  'aba_counter'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id142  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id143  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id144  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_element
      id148  'fe'  type 'struct lfds711_freelist_element'  kind 'f'  arity '0'  size '[]'  
      id149  'qumme'  type 'struct lfds711_queue_umm_element'  kind 'f'  arity '0'  size '[]'  
      id150  'qumme_use'  type 'struct lfds711_queue_umm_element *'  kind 'f'  arity '0'  size '[]'  
      id151  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id152  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_state
      id153  'fs'  type 'struct lfds711_freelist_state'  kind 'f'  arity '0'  size '[]'  
      id154  'qumms'  type 'struct lfds711_queue_umm_state'  kind 'f'  arity '0'  size '[]'  
      id155  '__cs_param__rs'  type 'struct lfds711_ringbuffer_state *'  kind 'f'  arity '0'  size '[]'  
      id156  '__cs_param__key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id157  '__cs_param__value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id158  '__cs_param__unread_flag'  type 'enum lfds711_misc_flag'  kind 'f'  arity '0'  size '[]'  
      id159  'element_cleanup_callback'  type 'void (*)(struct lfds711_ringbuffer_state *__cs_param__rs, void *__cs_param__key, void *__cs_param__value, enum lfds711_misc_flag __cs_param__unread_flag)'  kind 'f'  arity '0'  size '[]'  
      id160  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_element
      id167  'next'  type 'struct lfds711_stack_element *'  kind 'f'  arity '0'  size '[]'  
      id168  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id169  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_state
      id170  'top'  type 'struct lfds711_stack_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id171  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id172  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id173  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   test_data
      id246  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id247  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  

Typedefs:

Pointer variables:
   (global)
       var '__cs_param__ps'   type 'struct lfds711_prng_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__psts'   type 'struct lfds711_prng_st_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__query_input'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__query_output'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__baus'   type 'struct lfds711_btree_au_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__user_state'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__baue'   type 'struct lfds711_btree_au_element **'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__existing_baue'   type 'struct lfds711_btree_au_element **'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__key'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__fs'   type 'struct lfds711_freelist_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__fe'   type 'struct lfds711_freelist_element **'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__has'   type 'struct lfds711_hash_a_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__baus_array'   type 'struct lfds711_btree_au_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__hae'   type 'struct lfds711_hash_a_element **'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__existing_hae'   type 'struct lfds711_hash_a_element **'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__hai'   type 'struct lfds711_hash_a_iterate *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__lasos'   type 'struct lfds711_list_aso_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__lasoe'   type 'struct lfds711_list_aso_element **'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__existing_lasoe'   type 'struct lfds711_list_aso_element **'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__lasus'   type 'struct lfds711_list_asu_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__lasue'   type 'struct lfds711_list_asu_element **'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__lasue_predecessor'   type 'struct lfds711_list_asu_element *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__qbmms'   type 'struct lfds711_queue_bmm_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__element_array'   type 'struct lfds711_queue_bss_element *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__value'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__qbsss'   type 'struct lfds711_queue_bss_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__qumms'   type 'struct lfds711_queue_umm_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__qumme_dummy'   type 'struct lfds711_queue_umm_element *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__qumme'   type 'struct lfds711_queue_umm_element **'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__rs'   type 'struct lfds711_ringbuffer_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__re_array_inc_dummy'   type 'struct lfds711_ringbuffer_element *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__overwrite_occurred_flag'   type 'enum lfds711_misc_flag *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__overwritten_key'   type 'void **'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__overwritten_value'   type 'void **'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__ss'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__se'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param__bs'   type 'struct lfds711_misc_backoff_state *'   kind 'p'   arity '0'   size '[]'   
       var 'ss'   type 'void *'   kind 'g'   arity '0'   size '[]'   
   check
       var '__cs_param_check_ss'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   lfds711_misc_force_store
   exponential_backoff
   __CSEQ_atomic_swap_stack_top
       var '__cs_param___CSEQ_atomic_swap_stack_top_top'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param___CSEQ_atomic_swap_stack_top_oldtop'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param___CSEQ_atomic_swap_stack_top_newtop'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
   lfds711_misc_internal_backoff_init
       var '__cs_param_lfds711_misc_internal_backoff_init_bs'   type 'struct lfds711_misc_backoff_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_lfds711_misc_internal_backoff_init_c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   lfds711_stack_init_valid_on_current_logical_core
       var '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   lfds711_stack_pop
       var '__cs_param_lfds711_stack_pop_ss'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_pop_se'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_pop_new_top'   type 'struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var '__cs_local_lfds711_stack_pop_c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   lfds711_stack_push
       var '__cs_param_lfds711_stack_push_ss'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_push_se'   type 'struct lfds711_stack_element *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_push_new_top'   type 'struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var '__cs_local_lfds711_stack_push_c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   __CSEQ_atomic_compare_and_exchange
       var '__cs_param___CSEQ_atomic_compare_and_exchange_mptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param___CSEQ_atomic_compare_and_exchange_eptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_compare_exchange_n
       var '__cs_param___atomic_compare_exchange_n_mptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param___atomic_compare_exchange_n_eptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __CSEQ_atomic_exchange
       var '__cs_param___CSEQ_atomic_exchange_previous'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_exchange_n
       var '__cs_param___atomic_exchange_n_previous'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_thread_fence
   init
   insert
       var '__cs_param_insert_s'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_insert_td'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
   delete
       var '__cs_param_delete_s'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_delete_se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_delete_temp_td'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
   contains
       var '__cs_param_contains_s'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_contains_datas'   type 'struct test_data **'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_contains_se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
   get_size
       var '__cs_param_get_size_s'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_get_size_datas'   type 'struct test_data **'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_get_size_se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
   is_empty
       var '__cs_param_is_empty_s'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_is_empty_se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
   thread1
       var '__cs_param_thread1___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   thread2
       var '__cs_param_thread2___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   main

Function blocks:
function 'check' ----------------------------------:
void check(void *__cs_param_check_ss)
{
    unsigned long int __cs_local_check_size;
    __cs_local_check_size = 14;
    long unsigned int __cs_local_check_c0;
    __cs_local_check_c0 = contains(__cs_param_check_ss, 0);
    long unsigned int __cs_local_check_c2;
    __cs_local_check_c2 = contains(__cs_param_check_ss, 2);
    __CSEQ_assert(((__cs_local_check_size == 2) && __cs_local_check_c0) && __cs_local_check_c2);
}


void *__cs_param_check_ss
void
function 'lfds711_misc_force_store' ----------------------------------:
void lfds711_misc_force_store()
{
    lfds711_pal_uint_t __cs_local_lfds711_misc_force_store_destination;
    {
        (void) __atomic_exchange_n(&__cs_local_lfds711_misc_force_store_destination, 0, 0);
    }
    ;
    return;
}



void
function 'exponential_backoff' ----------------------------------:
void exponential_backoff()
{
    int __cs_local_exponential_backoff_loop;
    for (__cs_local_exponential_backoff_loop = 0; __cs_local_exponential_backoff_loop < 3; __cs_local_exponential_backoff_loop++)
    {
        ;
    }

}



void
function '__CSEQ_atomic_swap_stack_top' ----------------------------------:
int __CSEQ_atomic_swap_stack_top(struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_top, struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_oldtop, struct lfds711_stack_element **__cs_param___CSEQ_atomic_swap_stack_top_newtop)
{
    ;
    _Bool __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0;
    __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0 = (*__cs_param___CSEQ_atomic_swap_stack_top_oldtop) == (*__cs_param___CSEQ_atomic_swap_stack_top_top);
    if (__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0)
    {
        *__cs_param___CSEQ_atomic_swap_stack_top_top = *__cs_param___CSEQ_atomic_swap_stack_top_newtop;
        return 1;
    }
    else
    {
        *__cs_param___CSEQ_atomic_swap_stack_top_oldtop = *__cs_param___CSEQ_atomic_swap_stack_top_top;
        return 0;
    }

}


struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_top, struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_oldtop, struct lfds711_stack_element **__cs_param___CSEQ_atomic_swap_stack_top_newtop
int
function 'lfds711_misc_internal_backoff_init' ----------------------------------:
void lfds711_misc_internal_backoff_init(struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs)
{
    ;
    _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
    __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
    if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)
    {
        char *__cs_local_lfds711_misc_internal_backoff_init_c;
        __cs_local_lfds711_misc_internal_backoff_init_c = 0;
        *__cs_local_lfds711_misc_internal_backoff_init_c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
    __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
    if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)
    {
        char *__cs_local_lfds711_misc_internal_backoff_init_c;
        __cs_local_lfds711_misc_internal_backoff_init_c = 0;
        *__cs_local_lfds711_misc_internal_backoff_init_c = 0;
    }

    ;
    ;
    (*__cs_param_lfds711_misc_internal_backoff_init_bs).lock = LFDS711_MISC_FLAG_LOWERED;
    (*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[0] = 0;
    (*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[1] = 0;
    (*__cs_param_lfds711_misc_internal_backoff_init_bs).metric = 1;
    (*__cs_param_lfds711_misc_internal_backoff_init_bs).total_operations = 0;
    return;
}


struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs
void
function 'lfds711_stack_init_valid_on_current_logical_core' ----------------------------------:
void lfds711_stack_init_valid_on_current_logical_core(struct lfds711_stack_state *__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss, void *__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state)
{
    __cs_mutex_init(&library_lock, 0);
    ;
    _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3;
    __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3 = !(__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss != 0);
    if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3)
    {
        char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
        __cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
        *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4;
    __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4 = !((((lfds711_pal_uint_t) (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top) % 128) == 0);
    if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4)
    {
        char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
        __cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
        *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5;
    __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state)) % 128) == 0);
    if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5)
    {
        char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
        __cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
        *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
    }

    ;
    ;
    __cs_mutex_lock(&library_lock);
    (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[0] = 0;
    (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[1] = 0;
    (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state = __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
    lfds711_misc_internal_backoff_init(&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).pop_backoff);
    lfds711_misc_internal_backoff_init(&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).push_backoff);
    lfds711_misc_force_store();
    __cs_mutex_unlock(&library_lock);
    return;
}


struct lfds711_stack_state *__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss, void *__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state
void
function 'lfds711_stack_pop' ----------------------------------:
int lfds711_stack_pop(struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss, struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se)
{
    char unsigned __cs_local_lfds711_stack_pop_result;
    lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
    __cs_local_lfds711_stack_pop_backoff_iteration = 0;
    struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
    struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
    ;
    _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
    __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
    if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)
    {
        char *__cs_local_lfds711_stack_pop_c;
        __cs_local_lfds711_stack_pop_c = 0;
        *__cs_local_lfds711_stack_pop_c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
    __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
    if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)
    {
        char *__cs_local_lfds711_stack_pop_c;
        __cs_local_lfds711_stack_pop_c = 0;
        *__cs_local_lfds711_stack_pop_c = 0;
    }

    ;
    ;
    __cs_mutex_lock(&library_lock);
    __cs_mutex_unlock(&library_lock);
    __cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
    __cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
    int __cs_local_lfds711_stack_pop_i;
    __cs_local_lfds711_stack_pop_i = 0;
    ;
    int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
    for (__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0; __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1; __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++)
    {
        ;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
        {
            *__cs_param_lfds711_stack_pop_se = 0;
            return 0;
        }

        __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
        __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
        __cs_mutex_lock(&library_lock);
        __cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
        __cs_mutex_unlock(&library_lock);
        ;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
        {
            exponential_backoff();
            __cs_mutex_lock(&library_lock);
            __cs_mutex_unlock(&library_lock);
        }

        __cs_local_lfds711_stack_pop_i++;
        ;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
        {
            break;
        }

    }

    while (__cs_local_lfds711_stack_pop_result == 0)
    {
        ;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
        {
            *__cs_param_lfds711_stack_pop_se = 0;
            return 0;
        }

        __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
        __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
        __cs_mutex_lock(&library_lock);
        __cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
        __cs_mutex_unlock(&library_lock);
        ;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
        {
            exponential_backoff();
            __cs_mutex_lock(&library_lock);
            __cs_mutex_unlock(&library_lock);
        }

        __cs_local_lfds711_stack_pop_i++;
        ;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
        {
            break;
        }

    }

    *__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
    return __cs_local_lfds711_stack_pop_result;
}


struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss, struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se
int
function 'lfds711_stack_push' ----------------------------------:
void lfds711_stack_push(struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss, struct lfds711_stack_element *__cs_param_lfds711_stack_push_se)
{
    char unsigned __cs_local_lfds711_stack_push_result;
    lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
    __cs_local_lfds711_stack_push_backoff_iteration = 0;
    struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
    struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
    ;
    _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
    __cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
    if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)
    {
        char *__cs_local_lfds711_stack_push_c;
        __cs_local_lfds711_stack_push_c = 0;
        *__cs_local_lfds711_stack_push_c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
    __cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
    if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)
    {
        char *__cs_local_lfds711_stack_push_c;
        __cs_local_lfds711_stack_push_c = 0;
        *__cs_local_lfds711_stack_push_c = 0;
    }

    ;
    ;
    __cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
    __cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
    __cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
    __cs_local_lfds711_stack_push_result = 0;
    int __cs_local_lfds711_stack_push_i;
    __cs_local_lfds711_stack_push_i = 0;
    while (__cs_local_lfds711_stack_push_result == 0)
    {
        __cs_mutex_lock(&library_lock);
        (*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
        __cs_mutex_unlock(&library_lock);
        __cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
        __cs_mutex_lock(&library_lock);
        __cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
        __cs_mutex_unlock(&library_lock);
        ;
        _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
        __cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
        if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
        {
            exponential_backoff();
        }

        __cs_local_lfds711_stack_push_i++;
        ;
        _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
        __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
        if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
        {
            break;
        }

    }

    return;
}


struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss, struct lfds711_stack_element *__cs_param_lfds711_stack_push_se
void
function '__CSEQ_atomic_compare_and_exchange' ----------------------------------:
_Bool __CSEQ_atomic_compare_and_exchange(int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_mptr, int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_eptr, int long long unsigned __cs_param___CSEQ_atomic_compare_and_exchange_newval, _Bool __cs_param___CSEQ_atomic_compare_and_exchange_weak_p, int __cs_param___CSEQ_atomic_compare_and_exchange_sm, int __cs_param___CSEQ_atomic_compare_and_exchange_fm)
{
    ;
    _Bool __cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18;
    __cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18 = (*__cs_param___CSEQ_atomic_compare_and_exchange_mptr) == (*__cs_param___CSEQ_atomic_compare_and_exchange_eptr);
    if (__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18)
    {
        *__cs_param___CSEQ_atomic_compare_and_exchange_mptr = __cs_param___CSEQ_atomic_compare_and_exchange_newval;
        return 1;
    }
    else
    {
        *__cs_param___CSEQ_atomic_compare_and_exchange_eptr = __cs_param___CSEQ_atomic_compare_and_exchange_newval;
        return 0;
    }

}


int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_mptr, int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_eptr, int long long unsigned __cs_param___CSEQ_atomic_compare_and_exchange_newval, _Bool __cs_param___CSEQ_atomic_compare_and_exchange_weak_p, int __cs_param___CSEQ_atomic_compare_and_exchange_sm, int __cs_param___CSEQ_atomic_compare_and_exchange_fm
_Bool
function '__atomic_compare_exchange_n' ----------------------------------:
_Bool __atomic_compare_exchange_n(int long long unsigned *__cs_param___atomic_compare_exchange_n_mptr, int long long unsigned *__cs_param___atomic_compare_exchange_n_eptr, int long long unsigned __cs_param___atomic_compare_exchange_n_newval, _Bool __cs_param___atomic_compare_exchange_n_weak_p, int __cs_param___atomic_compare_exchange_n_sm, int __cs_param___atomic_compare_exchange_n_fm)
{
    int __cs_local___atomic_compare_exchange_n_res;
    __cs_local___atomic_compare_exchange_n_res = __CSEQ_atomic_compare_and_exchange(__cs_param___atomic_compare_exchange_n_mptr, __cs_param___atomic_compare_exchange_n_eptr, __cs_param___atomic_compare_exchange_n_newval, __cs_param___atomic_compare_exchange_n_weak_p, __cs_param___atomic_compare_exchange_n_sm, __cs_param___atomic_compare_exchange_n_fm);
    return __cs_local___atomic_compare_exchange_n_res;
}


int long long unsigned *__cs_param___atomic_compare_exchange_n_mptr, int long long unsigned *__cs_param___atomic_compare_exchange_n_eptr, int long long unsigned __cs_param___atomic_compare_exchange_n_newval, _Bool __cs_param___atomic_compare_exchange_n_weak_p, int __cs_param___atomic_compare_exchange_n_sm, int __cs_param___atomic_compare_exchange_n_fm
_Bool
function '__CSEQ_atomic_exchange' ----------------------------------:
unsigned long __CSEQ_atomic_exchange(int long long unsigned *__cs_param___CSEQ_atomic_exchange_previous, int long long unsigned __cs_param___CSEQ_atomic_exchange_new, int __cs_param___CSEQ_atomic_exchange_memorder)
{
    unsigned long int __cs_local___CSEQ_atomic_exchange_old;
    __cs_local___CSEQ_atomic_exchange_old = *__cs_param___CSEQ_atomic_exchange_previous;
    *__cs_param___CSEQ_atomic_exchange_previous = __cs_param___CSEQ_atomic_exchange_new;
    return __cs_local___CSEQ_atomic_exchange_old;
}


int long long unsigned *__cs_param___CSEQ_atomic_exchange_previous, int long long unsigned __cs_param___CSEQ_atomic_exchange_new, int __cs_param___CSEQ_atomic_exchange_memorder
unsigned long
function '__atomic_exchange_n' ----------------------------------:
unsigned long __atomic_exchange_n(int long long unsigned *__cs_param___atomic_exchange_n_previous, int long long unsigned __cs_param___atomic_exchange_n_new, int __cs_param___atomic_exchange_n_memorder)
{
    int __cs_local___atomic_exchange_n_res;
    __cs_local___atomic_exchange_n_res = __CSEQ_atomic_exchange(__cs_param___atomic_exchange_n_previous, __cs_param___atomic_exchange_n_new, __cs_param___atomic_exchange_n_memorder);
    return __cs_local___atomic_exchange_n_res;
}


int long long unsigned *__cs_param___atomic_exchange_n_previous, int long long unsigned __cs_param___atomic_exchange_n_new, int __cs_param___atomic_exchange_n_memorder
unsigned long
function '__atomic_thread_fence' ----------------------------------:
void __atomic_thread_fence(int __cs_param___atomic_thread_fence_i)
{
}


int __cs_param___atomic_thread_fence_i
void
function 'init' ----------------------------------:
void *init()
{
    lfds711_stack_init_valid_on_current_logical_core(&mystack, 0);
    return (void *) (&mystack);
}



void *
function 'insert' ----------------------------------:
void insert(struct lfds711_stack_state *__cs_param_insert_s, int long long unsigned __cs_param_insert_id)
{
    struct test_data *__cs_local_insert_td;
    __cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
    (*__cs_local_insert_td).user_id = __cs_param_insert_id;
    (*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);
    lfds711_stack_push((struct lfds711_stack_state *) __cs_param_insert_s, &(*__cs_local_insert_td).se);
}


struct lfds711_stack_state *__cs_param_insert_s, int long long unsigned __cs_param_insert_id
void
function 'delete' ----------------------------------:
int delete(struct lfds711_stack_state *__cs_param_delete_s)
{
    struct lfds711_stack_element *__cs_local_delete_se;
    struct test_data *__cs_local_delete_temp_td;
    int __cs_local_delete_res;
    __cs_local_delete_res = lfds711_stack_pop(&mystack, &__cs_local_delete_se);
    ;
    _Bool __cs_local_delete___cs_tmp_if_cond_19;
    __cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res != 0;
    if (__cs_local_delete___cs_tmp_if_cond_19)
    {
        free((*__cs_local_delete_se).value);
    }

    return __cs_local_delete_res;
}


struct lfds711_stack_state *__cs_param_delete_s
int
function 'contains' ----------------------------------:
int contains(struct lfds711_stack_state *__cs_param_contains_s, unsigned long long int __cs_param_contains_id)
{
    int __cs_local_contains_max_size;
    __cs_local_contains_max_size = 2;
    int __cs_local_contains_actual_size;
    __cs_local_contains_actual_size = 0;
    int __cs_local_contains_res;
    __cs_local_contains_res = 1;
    int __cs_local_contains_found;
    __cs_local_contains_found = 0;
    int __cs_local_contains_dimension;
    __cs_local_contains_dimension = 2;
    struct test_data **__cs_local_contains_datas;
    __cs_local_contains_datas = __cs_safe_malloc((sizeof(struct test_data *)) * __cs_local_contains_max_size);
    struct lfds711_stack_element *__cs_local_contains_se;
    while ((__cs_local_contains_found == 0) && (__cs_local_contains_res != 0))
    {
        __cs_local_contains_res = lfds711_stack_pop(__cs_param_contains_s, &__cs_local_contains_se);
        ;
        _Bool __cs_local_contains___cs_tmp_if_cond_20;
        __cs_local_contains___cs_tmp_if_cond_20 = __cs_local_contains_res == 0;
        if (__cs_local_contains___cs_tmp_if_cond_20)
        {
            break;
        }

        __cs_local_contains_datas[__cs_local_contains_actual_size] = (*__cs_local_contains_se).value;
        printf("%d -- %d\n", (*__cs_local_contains_datas[__cs_local_contains_actual_size]).user_id, __cs_local_contains_actual_size);
        ;
        _Bool __cs_local_contains___cs_tmp_if_cond_21;
        __cs_local_contains___cs_tmp_if_cond_21 = (*__cs_local_contains_datas[__cs_local_contains_actual_size]).user_id == __cs_param_contains_id;
        if (__cs_local_contains___cs_tmp_if_cond_21)
        {
            __cs_local_contains_found = 1;
        }

        __cs_local_contains_actual_size = __cs_local_contains_actual_size + 1;
    }

    int __cs_local_contains_i;
    __cs_local_contains_i = 0;
    while (__cs_local_contains_i < __cs_local_contains_actual_size)
    {
        lfds711_stack_push(__cs_param_contains_s, &(*__cs_local_contains_datas[__cs_local_contains_i]).se);
        __cs_local_contains_i++;
    }

    return __cs_local_contains_found;
}


struct lfds711_stack_state *__cs_param_contains_s, unsigned long long int __cs_param_contains_id
int
function 'get_size' ----------------------------------:
int get_size(struct lfds711_stack_state *__cs_param_get_size_s)
{
    int __cs_local_get_size_max_size;
    __cs_local_get_size_max_size = 2;
    int __cs_local_get_size_actual_size;
    __cs_local_get_size_actual_size = 0;
    int __cs_local_get_size_res;
    __cs_local_get_size_res = 1;
    int __cs_local_get_size_dimension;
    __cs_local_get_size_dimension = 2;
    struct test_data **__cs_local_get_size_datas;
    __cs_local_get_size_datas = __cs_safe_malloc((sizeof(struct test_data *)) * __cs_local_get_size_max_size);
    struct lfds711_stack_element *__cs_local_get_size_se;
    while (__cs_local_get_size_res != 0)
    {
        __cs_local_get_size_res = lfds711_stack_pop(__cs_param_get_size_s, &__cs_local_get_size_se);
        __cs_local_get_size_datas[__cs_local_get_size_actual_size] = (*__cs_local_get_size_se).value;
        ;
        _Bool __cs_local_get_size___cs_tmp_if_cond_22;
        __cs_local_get_size___cs_tmp_if_cond_22 = __cs_local_get_size_res == 0;
        if (__cs_local_get_size___cs_tmp_if_cond_22)
        {
            break;
        }

        __cs_local_get_size_actual_size = __cs_local_get_size_actual_size + 1;
    }

    int __cs_local_get_size_i;
    __cs_local_get_size_i = 0;
    while (__cs_local_get_size_i < __cs_local_get_size_actual_size)
    {
        lfds711_stack_push(__cs_param_get_size_s, &(*__cs_local_get_size_datas[__cs_local_get_size_i]).se);
        __cs_local_get_size_i++;
    }

    return __cs_local_get_size_actual_size;
}


struct lfds711_stack_state *__cs_param_get_size_s
int
function 'is_empty' ----------------------------------:
int is_empty(struct lfds711_stack_state *__cs_param_is_empty_s)
{
    struct lfds711_stack_element *__cs_local_is_empty_se;
    int __cs_local_is_empty_res;
    __cs_local_is_empty_res = lfds711_stack_pop(__cs_param_is_empty_s, &__cs_local_is_empty_se);
    ;
    _Bool __cs_local_is_empty___cs_tmp_if_cond_23;
    __cs_local_is_empty___cs_tmp_if_cond_23 = __cs_local_is_empty_res != 0;
    if (__cs_local_is_empty___cs_tmp_if_cond_23)
    {
        lfds711_stack_push(__cs_param_is_empty_s, __cs_local_is_empty_se);
        return 0;
    }

    return 1;
}


struct lfds711_stack_state *__cs_param_is_empty_s
int
function 'thread1' ----------------------------------:
void *thread1(void *__cs_param_thread1___cs_unused)
{
    ;
    _Bool __cs_local_thread1___cs_tmp_if_cond_24;
    __cs_local_thread1___cs_tmp_if_cond_24 = ATOMIC_OPERATION;
    if (__cs_local_thread1___cs_tmp_if_cond_24)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    insert(ss, 0);
    ;
    _Bool __cs_local_thread1___cs_tmp_if_cond_25;
    __cs_local_thread1___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
    if (__cs_local_thread1___cs_tmp_if_cond_25)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
    ;
    _Bool __cs_local_thread1___cs_tmp_if_cond_26;
    __cs_local_thread1___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
    if (__cs_local_thread1___cs_tmp_if_cond_26)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    insert(ss, 1);
    ;
    _Bool __cs_local_thread1___cs_tmp_if_cond_27;
    __cs_local_thread1___cs_tmp_if_cond_27 = ATOMIC_OPERATION;
    if (__cs_local_thread1___cs_tmp_if_cond_27)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
}


void *__cs_param_thread1___cs_unused
void *
function 'thread2' ----------------------------------:
void *thread2(void *__cs_param_thread2___cs_unused)
{
    ;
    _Bool __cs_local_thread2___cs_tmp_if_cond_28;
    __cs_local_thread2___cs_tmp_if_cond_28 = ATOMIC_OPERATION;
    if (__cs_local_thread2___cs_tmp_if_cond_28)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    delete(ss);
    ;
    _Bool __cs_local_thread2___cs_tmp_if_cond_29;
    __cs_local_thread2___cs_tmp_if_cond_29 = ATOMIC_OPERATION;
    if (__cs_local_thread2___cs_tmp_if_cond_29)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
    ;
    _Bool __cs_local_thread2___cs_tmp_if_cond_30;
    __cs_local_thread2___cs_tmp_if_cond_30 = ATOMIC_OPERATION;
    if (__cs_local_thread2___cs_tmp_if_cond_30)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    insert(ss, 2);
    ;
    _Bool __cs_local_thread2___cs_tmp_if_cond_31;
    __cs_local_thread2___cs_tmp_if_cond_31 = ATOMIC_OPERATION;
    if (__cs_local_thread2___cs_tmp_if_cond_31)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
}


void *__cs_param_thread2___cs_unused
void *
function 'main' ----------------------------------:
int main()
{
    __cs_mutex_init(&lock, 0);
    ss = init();
    __cs_t __cs_local_main_t1;
    __cs_t __cs_local_main_t2;
    __cs_create(&__cs_local_main_t1, 0, thread1, 0);
    __cs_create(&__cs_local_main_t2, 0, thread2, 0);
    __cs_join(__cs_local_main_t1, 0);
    __cs_join(__cs_local_main_t2, 0);
    check(ss);
    return 0;
}



int
Last statement, by function:
function: check   stmt:     __CSEQ_assert(((__cs_local_check_size == 2) && __cs_local_check_c0) && __cs_local_check_c2);

function: lfds711_misc_force_store   stmt:     return;

function: exponential_backoff   stmt:     for (__cs_local_exponential_backoff_loop = 0; __cs_local_exponential_backoff_loop < 3; __cs_local_exponential_backoff_loop++)
    {
        ;
    }


function: __CSEQ_atomic_swap_stack_top   stmt:     if (__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0)
    {
        *__cs_param___CSEQ_atomic_swap_stack_top_top = *__cs_param___CSEQ_atomic_swap_stack_top_newtop;
        return 1;
    }
    else
    {
        *__cs_param___CSEQ_atomic_swap_stack_top_oldtop = *__cs_param___CSEQ_atomic_swap_stack_top_top;
        return 0;
    }


function: lfds711_misc_internal_backoff_init   stmt:     return;

function: lfds711_stack_init_valid_on_current_logical_core   stmt:     return;

function: lfds711_stack_pop   stmt:     return __cs_local_lfds711_stack_pop_result;

function: lfds711_stack_push   stmt:     return;

function: __CSEQ_atomic_compare_and_exchange   stmt:     if (__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18)
    {
        *__cs_param___CSEQ_atomic_compare_and_exchange_mptr = __cs_param___CSEQ_atomic_compare_and_exchange_newval;
        return 1;
    }
    else
    {
        *__cs_param___CSEQ_atomic_compare_and_exchange_eptr = __cs_param___CSEQ_atomic_compare_and_exchange_newval;
        return 0;
    }


function: __atomic_compare_exchange_n   stmt:     return __cs_local___atomic_compare_exchange_n_res;

function: __CSEQ_atomic_exchange   stmt:     return __cs_local___CSEQ_atomic_exchange_old;

function: __atomic_exchange_n   stmt:     return __cs_local___atomic_exchange_n_res;

function: __atomic_thread_fence   stmt:     return __cs_local___atomic_exchange_n_res;

function: init   stmt:     return (void *) (&mystack);

function: insert   stmt:     lfds711_stack_push((struct lfds711_stack_state *) __cs_param_insert_s, &(*__cs_local_insert_td).se);

function: delete   stmt:     return __cs_local_delete_res;

function: contains   stmt:     return __cs_local_contains_found;

function: get_size   stmt:     return __cs_local_get_size_actual_size;

function: is_empty   stmt:     return 1;

function: thread1   stmt:     ;

function: thread2   stmt:     ;

function: main   stmt:     return 0;


All symbols (new symbol table - work in progress):
   (0, 'check')  
   (1, '__cs_param_check_ss')  
   (2, '__cs_local_check_size')  
   (3, '__cs_local_check_c0')  
   (4, '__cs_local_check_c2')  
   (5, 'entropy')  
   (6, 'entropy')  
   (7, 'lfds711_prng_init_valid_on_current_logical_core')  
   (8, '__cs_param__ps')  
   (9, '__cs_param__seed')  
   (10, 'lfds711_prng_st_init')  
   (11, '__cs_param__psts')  
   (12, '__cs_param__seed')  
   (13, 'lock')  
   (14, 'backoff_iteration_frequency_counters')  
   (15, 'metric')  
   (16, 'total_operations')  
   (17, 'ps')  
   (18, 'min_elements')  
   (19, 'max_elements')  
   (20, 'lfds711_misc_globals')  
   (21, 'lfds711_misc_force_store')  
   (22, 'lfds711_misc_query')  
   (23, '__cs_param__query_type')  
   (24, '__cs_param__query_input')  
   (25, '__cs_param__query_output')  
   (26, 'lfds711_misc_force_store')  
   (27, '__cs_local_lfds711_misc_force_store_destination')  
   (28, 'left')  
   (29, 'right')  
   (30, 'up')  
   (31, 'value')  
   (32, 'key')  
   (33, 'root')  
   (34, 'key_compare_function')  
   (35, '__cs_param__new_key')  
   (36, '__cs_param__existing_key')  
   (37, 'existing_key')  
   (38, 'user_state')  
   (39, 'insert_backoff')  
   (40, 'lfds711_btree_au_init_valid_on_current_logical_core')  
   (41, '__cs_param__baus')  
   (42, '__cs_param__key_compare_function')  
   (43, 'new_key')  
   (44, 'existing_key')  
   (45, '__cs_param__existing_key')  
   (46, '__cs_param__user_state')  
   (47, 'lfds711_btree_au_cleanup')  
   (48, '__cs_param__baus')  
   (49, '__cs_param__element_cleanup_callback')  
   (50, 'baus')  
   (51, 'baue')  
   (52, 'lfds711_btree_au_insert')  
   (53, '__cs_param__baus')  
   (54, '__cs_param__baue')  
   (55, '__cs_param__existing_baue')  
   (56, 'lfds711_btree_au_get_by_key')  
   (57, '__cs_param__baus')  
   (58, '__cs_param__key_compare_function')  
   (59, 'new_key')  
   (60, 'existing_key')  
   (61, '__cs_param__key')  
   (62, '__cs_param__baue')  
   (63, 'lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position')  
   (64, '__cs_param__baus')  
   (65, '__cs_param__baue')  
   (66, '__cs_param__absolute_position')  
   (67, '__cs_param__relative_position')  
   (68, 'lfds711_btree_au_get_by_absolute_position')  
   (69, '__cs_param__baus')  
   (70, '__cs_param__baue')  
   (71, '__cs_param__absolute_position')  
   (72, 'lfds711_btree_au_get_by_relative_position')  
   (73, '__cs_param__baue')  
   (74, '__cs_param__relative_position')  
   (75, 'lfds711_btree_au_query')  
   (76, '__cs_param__baus')  
   (77, '__cs_param__query_type')  
   (78, '__cs_param__query_input')  
   (79, '__cs_param__query_output')  
   (80, 'next')  
   (81, 'key')  
   (82, 'value')  
   (83, 'top')  
   (84, 'elimination_array_size_in_elements')  
   (85, 'elimination_array')  
   (86, 'user_state')  
   (87, 'pop_backoff')  
   (88, 'push_backoff')  
   (89, 'lfds711_freelist_init_valid_on_current_logical_core')  
   (90, '__cs_param__fs')  
   (91, '__cs_param__elimination_array')  
   (92, '__cs_param__elimination_array_size_in_elements')  
   (93, '__cs_param__user_state')  
   (94, 'lfds711_freelist_cleanup')  
   (95, '__cs_param__fs')  
   (96, '__cs_param__element_cleanup_callback')  
   (97, 'fs')  
   (98, 'fe')  
   (99, 'lfds711_freelist_push')  
   (100, '__cs_param__fs')  
   (101, '__cs_param__fe')  
   (102, '__cs_param__psts')  
   (103, 'lfds711_freelist_pop')  
   (104, '__cs_param__fs')  
   (105, '__cs_param__fe')  
   (106, '__cs_param__psts')  
   (107, 'lfds711_freelist_query')  
   (108, '__cs_param__fs')  
   (109, '__cs_param__query_type')  
   (110, '__cs_param__query_input')  
   (111, '__cs_param__query_output')  
   (112, 'baue')  
   (113, 'key')  
   (114, 'value')  
   (115, 'baue')  
   (116, 'baus')  
   (117, 'baus_end')  
   (118, 'existing_key')  
   (119, 'key_compare_function')  
   (120, '__cs_param__new_key')  
   (121, '__cs_param__existing_key')  
   (122, 'array_size')  
   (123, 'baus_array')  
   (124, 'element_cleanup_callback')  
   (125, '__cs_param__has')  
   (126, '__cs_param__hae')  
   (127, 'key_hash_function')  
   (128, '__cs_param__key')  
   (129, '__cs_param__hash')  
   (130, 'user_state')  
   (131, 'lfds711_hash_a_init_valid_on_current_logical_core')  
   (132, '__cs_param__has')  
   (133, '__cs_param__baus_array')  
   (134, '__cs_param__array_size')  
   (135, '__cs_param__key_compare_function')  
   (136, 'new_key')  
   (137, 'existing_key')  
   (138, '__cs_param__key_hash_function')  
   (139, 'key')  
   (140, 'hash')  
   (141, '__cs_param__existing_key')  
   (142, '__cs_param__user_state')  
   (143, 'lfds711_hash_a_cleanup')  
   (144, '__cs_param__has')  
   (145, '__cs_param__element_cleanup_function')  
   (146, 'has')  
   (147, 'hae')  
   (148, 'lfds711_hash_a_insert')  
   (149, '__cs_param__has')  
   (150, '__cs_param__hae')  
   (151, '__cs_param__existing_hae')  
   (152, 'lfds711_hash_a_get_by_key')  
   (153, '__cs_param__has')  
   (154, '__cs_param__key_compare_function')  
   (155, 'new_key')  
   (156, 'existing_key')  
   (157, '__cs_param__key_hash_function')  
   (158, 'key')  
   (159, 'hash')  
   (160, '__cs_param__key')  
   (161, '__cs_param__hae')  
   (162, 'lfds711_hash_a_iterate_init')  
   (163, '__cs_param__has')  
   (164, '__cs_param__hai')  
   (165, 'lfds711_hash_a_iterate')  
   (166, '__cs_param__hai')  
   (167, '__cs_param__hae')  
   (168, 'lfds711_hash_a_query')  
   (169, '__cs_param__has')  
   (170, '__cs_param__query_type')  
   (171, '__cs_param__query_input')  
   (172, '__cs_param__query_output')  
   (173, 'next')  
   (174, 'value')  
   (175, 'key')  
   (176, 'dummy_element')  
   (177, 'start')  
   (178, 'key_compare_function')  
   (179, '__cs_param__new_key')  
   (180, '__cs_param__existing_key')  
   (181, 'existing_key')  
   (182, 'user_state')  
   (183, 'insert_backoff')  
   (184, 'lfds711_list_aso_init_valid_on_current_logical_core')  
   (185, '__cs_param__lasos')  
   (186, '__cs_param__key_compare_function')  
   (187, 'new_key')  
   (188, 'existing_key')  
   (189, '__cs_param__existing_key')  
   (190, '__cs_param__user_state')  
   (191, 'lfds711_list_aso_cleanup')  
   (192, '__cs_param__lasos')  
   (193, '__cs_param__element_cleanup_callback')  
   (194, 'lasos')  
   (195, 'lasoe')  
   (196, 'lfds711_list_aso_insert')  
   (197, '__cs_param__lasos')  
   (198, '__cs_param__lasoe')  
   (199, '__cs_param__existing_lasoe')  
   (200, 'lfds711_list_aso_get_by_key')  
   (201, '__cs_param__lasos')  
   (202, '__cs_param__key')  
   (203, '__cs_param__lasoe')  
   (204, 'lfds711_list_aso_query')  
   (205, '__cs_param__lasos')  
   (206, '__cs_param__query_type')  
   (207, '__cs_param__query_input')  
   (208, '__cs_param__query_output')  
   (209, 'next')  
   (210, 'value')  
   (211, 'key')  
   (212, 'dummy_element')  
   (213, 'end')  
   (214, 'start')  
   (215, 'user_state')  
   (216, 'after_backoff')  
   (217, 'end_backoff')  
   (218, 'start_backoff')  
   (219, 'lfds711_list_asu_init_valid_on_current_logical_core')  
   (220, '__cs_param__lasus')  
   (221, '__cs_param__user_state')  
   (222, 'lfds711_list_asu_cleanup')  
   (223, '__cs_param__lasus')  
   (224, '__cs_param__element_cleanup_callback')  
   (225, 'lasus')  
   (226, 'lasue')  
   (227, 'lfds711_list_asu_insert_at_position')  
   (228, '__cs_param__lasus')  
   (229, '__cs_param__lasue')  
   (230, '__cs_param__lasue_predecessor')  
   (231, '__cs_param__position')  
   (232, 'lfds711_list_asu_insert_at_start')  
   (233, '__cs_param__lasus')  
   (234, '__cs_param__lasue')  
   (235, 'lfds711_list_asu_insert_at_end')  
   (236, '__cs_param__lasus')  
   (237, '__cs_param__lasue')  
   (238, 'lfds711_list_asu_insert_after_element')  
   (239, '__cs_param__lasus')  
   (240, '__cs_param__lasue')  
   (241, '__cs_param__lasue_predecessor')  
   (242, 'lfds711_list_asu_get_by_key')  
   (243, '__cs_param__lasus')  
   (244, '__cs_param__key_compare_function')  
   (245, 'new_key')  
   (246, 'existing_key')  
   (247, '__cs_param__key')  
   (248, '__cs_param__lasue')  
   (249, 'lfds711_list_asu_query')  
   (250, '__cs_param__lasus')  
   (251, '__cs_param__query_type')  
   (252, '__cs_param__query_input')  
   (253, '__cs_param__query_output')  
   (254, 'sequence_number')  
   (255, 'key')  
   (256, 'value')  
   (257, 'number_elements')  
   (258, 'mask')  
   (259, 'read_index')  
   (260, 'write_index')  
   (261, 'element_array')  
   (262, 'user_state')  
   (263, 'dequeue_backoff')  
   (264, 'enqueue_backoff')  
   (265, 'lfds711_queue_bmm_init_valid_on_current_logical_core')  
   (266, '__cs_param__qbmms')  
   (267, '__cs_param__element_array')  
   (268, '__cs_param__number_elements')  
   (269, '__cs_param__user_state')  
   (270, 'lfds711_queue_bmm_cleanup')  
   (271, '__cs_param__qbmms')  
   (272, '__cs_param__element_cleanup_callback')  
   (273, 'qbmms')  
   (274, 'key')  
   (275, 'value')  
   (276, 'lfds711_queue_bmm_enqueue')  
   (277, '__cs_param__qbmms')  
   (278, '__cs_param__key')  
   (279, '__cs_param__value')  
   (280, 'lfds711_queue_bmm_dequeue')  
   (281, '__cs_param__qbmms')  
   (282, '__cs_param__key')  
   (283, '__cs_param__value')  
   (284, 'lfds711_queue_bmm_query')  
   (285, '__cs_param__qbmms')  
   (286, '__cs_param__query_type')  
   (287, '__cs_param__query_input')  
   (288, '__cs_param__query_output')  
   (289, 'key')  
   (290, 'value')  
   (291, 'number_elements')  
   (292, 'mask')  
   (293, 'read_index')  
   (294, 'write_index')  
   (295, 'element_array')  
   (296, 'user_state')  
   (297, 'lfds711_queue_bss_init_valid_on_current_logical_core')  
   (298, '__cs_param__qbsss')  
   (299, '__cs_param__element_array')  
   (300, '__cs_param__number_elements')  
   (301, '__cs_param__user_state')  
   (302, 'lfds711_queue_bss_cleanup')  
   (303, '__cs_param__qbsss')  
   (304, '__cs_param__element_cleanup_callback')  
   (305, 'qbsss')  
   (306, 'key')  
   (307, 'value')  
   (308, 'lfds711_queue_bss_enqueue')  
   (309, '__cs_param__qbsss')  
   (310, '__cs_param__key')  
   (311, '__cs_param__value')  
   (312, 'lfds711_queue_bss_dequeue')  
   (313, '__cs_param__qbsss')  
   (314, '__cs_param__key')  
   (315, '__cs_param__value')  
   (316, 'lfds711_queue_bss_query')  
   (317, '__cs_param__qbsss')  
   (318, '__cs_param__query_type')  
   (319, '__cs_param__query_input')  
   (320, '__cs_param__query_output')  
   (321, 'next')  
   (322, 'key')  
   (323, 'value')  
   (324, 'enqueue')  
   (325, 'dequeue')  
   (326, 'aba_counter')  
   (327, 'user_state')  
   (328, 'dequeue_backoff')  
   (329, 'enqueue_backoff')  
   (330, 'lfds711_queue_umm_init_valid_on_current_logical_core')  
   (331, '__cs_param__qumms')  
   (332, '__cs_param__qumme_dummy')  
   (333, '__cs_param__user_state')  
   (334, 'lfds711_queue_umm_cleanup')  
   (335, '__cs_param__qumms')  
   (336, '__cs_param__element_cleanup_callback')  
   (337, 'qumms')  
   (338, 'qumme')  
   (339, 'dummy_element_flag')  
   (340, 'lfds711_queue_umm_enqueue')  
   (341, '__cs_param__qumms')  
   (342, '__cs_param__qumme')  
   (343, 'lfds711_queue_umm_dequeue')  
   (344, '__cs_param__qumms')  
   (345, '__cs_param__qumme')  
   (346, 'lfds711_queue_umm_query')  
   (347, '__cs_param__qumms')  
   (348, '__cs_param__query_type')  
   (349, '__cs_param__query_input')  
   (350, '__cs_param__query_output')  
   (351, 'fe')  
   (352, 'qumme')  
   (353, 'qumme_use')  
   (354, 'key')  
   (355, 'value')  
   (356, 'fs')  
   (357, 'qumms')  
   (358, 'element_cleanup_callback')  
   (359, '__cs_param__rs')  
   (360, '__cs_param__key')  
   (361, '__cs_param__value')  
   (362, '__cs_param__unread_flag')  
   (363, 'user_state')  
   (364, 'lfds711_ringbuffer_init_valid_on_current_logical_core')  
   (365, '__cs_param__rs')  
   (366, '__cs_param__re_array_inc_dummy')  
   (367, '__cs_param__number_elements_inc_dummy')  
   (368, '__cs_param__user_state')  
   (369, 'lfds711_ringbuffer_cleanup')  
   (370, '__cs_param__rs')  
   (371, '__cs_param__element_cleanup_callback')  
   (372, 'rs')  
   (373, 'key')  
   (374, 'value')  
   (375, 'unread_flag')  
   (376, 'lfds711_ringbuffer_read')  
   (377, '__cs_param__rs')  
   (378, '__cs_param__key')  
   (379, '__cs_param__value')  
   (380, 'lfds711_ringbuffer_write')  
   (381, '__cs_param__rs')  
   (382, '__cs_param__key')  
   (383, '__cs_param__value')  
   (384, '__cs_param__overwrite_occurred_flag')  
   (385, '__cs_param__overwritten_key')  
   (386, '__cs_param__overwritten_value')  
   (387, 'lfds711_ringbuffer_query')  
   (388, '__cs_param__rs')  
   (389, '__cs_param__query_type')  
   (390, '__cs_param__query_input')  
   (391, '__cs_param__query_output')  
   (392, 'next')  
   (393, 'key')  
   (394, 'value')  
   (395, 'top')  
   (396, 'user_state')  
   (397, 'pop_backoff')  
   (398, 'push_backoff')  
   (399, 'lfds711_stack_init_valid_on_current_logical_core')  
   (400, '__cs_param__ss')  
   (401, '__cs_param__user_state')  
   (402, 'lfds711_stack_cleanup')  
   (403, '__cs_param__ss')  
   (404, '__cs_param__element_cleanup_callback')  
   (405, 'ss')  
   (406, 'se')  
   (407, 'lfds711_stack_push')  
   (408, '__cs_param__ss')  
   (409, '__cs_param__se')  
   (410, 'lfds711_stack_pop')  
   (411, '__cs_param__ss')  
   (412, '__cs_param__se')  
   (413, 'lfds711_stack_query')  
   (414, '__cs_param__ss')  
   (415, '__cs_param__query_type')  
   (416, '__cs_param__query_input')  
   (417, '__cs_param__query_output')  
   (418, 'lfds711_misc_internal_backoff_init')  
   (419, '__cs_param__bs')  
   (420, 'library_lock')  
   (421, 'exponential_backoff')  
   (422, '__cs_local_exponential_backoff_loop')  
   (423, '__CSEQ_atomic_swap_stack_top')  
   (424, '__cs_param___CSEQ_atomic_swap_stack_top_top')  
   (425, '__cs_param___CSEQ_atomic_swap_stack_top_oldtop')  
   (426, '__cs_param___CSEQ_atomic_swap_stack_top_newtop')  
   (427, '__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0')  
   (428, 'lfds711_misc_internal_backoff_init')  
   (429, '__cs_param_lfds711_misc_internal_backoff_init_bs')  
   (430, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1')  
   (431, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (432, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2')  
   (433, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (434, 'lfds711_stack_init_valid_on_current_logical_core')  
   (435, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss')  
   (436, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state')  
   (437, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3')  
   (438, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (439, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4')  
   (440, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (441, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5')  
   (442, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (443, 'lfds711_stack_pop')  
   (444, '__cs_param_lfds711_stack_pop_ss')  
   (445, '__cs_param_lfds711_stack_pop_se')  
   (446, '__cs_local_lfds711_stack_pop_result')  
   (447, '__cs_local_lfds711_stack_pop_backoff_iteration')  
   (448, '__cs_local_lfds711_stack_pop_new_top')  
   (449, '__cs_local_lfds711_stack_pop_original_top')  
   (450, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6')  
   (451, '__cs_local_lfds711_stack_pop_c')  
   (452, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7')  
   (453, '__cs_local_lfds711_stack_pop_c')  
   (454, '__cs_local_lfds711_stack_pop_i')  
   (455, '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1')  
   (456, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8')  
   (457, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9')  
   (458, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10')  
   (459, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (460, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (461, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (462, 'lfds711_stack_push')  
   (463, '__cs_param_lfds711_stack_push_ss')  
   (464, '__cs_param_lfds711_stack_push_se')  
   (465, '__cs_local_lfds711_stack_push_result')  
   (466, '__cs_local_lfds711_stack_push_backoff_iteration')  
   (467, '__cs_local_lfds711_stack_push_new_top')  
   (468, '__cs_local_lfds711_stack_push_original_top')  
   (469, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14')  
   (470, '__cs_local_lfds711_stack_push_c')  
   (471, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15')  
   (472, '__cs_local_lfds711_stack_push_c')  
   (473, '__cs_local_lfds711_stack_push_i')  
   (474, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (475, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (476, '__CSEQ_atomic_compare_and_exchange')  
   (477, '__cs_param___CSEQ_atomic_compare_and_exchange_mptr')  
   (478, '__cs_param___CSEQ_atomic_compare_and_exchange_eptr')  
   (479, '__cs_param___CSEQ_atomic_compare_and_exchange_newval')  
   (480, '__cs_param___CSEQ_atomic_compare_and_exchange_weak_p')  
   (481, '__cs_param___CSEQ_atomic_compare_and_exchange_sm')  
   (482, '__cs_param___CSEQ_atomic_compare_and_exchange_fm')  
   (483, '__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18')  
   (484, '__atomic_compare_exchange_n')  
   (485, '__cs_param___atomic_compare_exchange_n_mptr')  
   (486, '__cs_param___atomic_compare_exchange_n_eptr')  
   (487, '__cs_param___atomic_compare_exchange_n_newval')  
   (488, '__cs_param___atomic_compare_exchange_n_weak_p')  
   (489, '__cs_param___atomic_compare_exchange_n_sm')  
   (490, '__cs_param___atomic_compare_exchange_n_fm')  
   (491, '__cs_local___atomic_compare_exchange_n_res')  
   (492, '__CSEQ_atomic_exchange')  
   (493, '__cs_param___CSEQ_atomic_exchange_previous')  
   (494, '__cs_param___CSEQ_atomic_exchange_new')  
   (495, '__cs_param___CSEQ_atomic_exchange_memorder')  
   (496, '__cs_local___CSEQ_atomic_exchange_old')  
   (497, '__atomic_exchange_n')  
   (498, '__cs_param___atomic_exchange_n_previous')  
   (499, '__cs_param___atomic_exchange_n_new')  
   (500, '__cs_param___atomic_exchange_n_memorder')  
   (501, '__cs_local___atomic_exchange_n_res')  
   (502, '__atomic_thread_fence')  
   (503, '__cs_param___atomic_thread_fence_i')  
   (504, 'mystack')  
   (505, 'se')  
   (506, 'user_id')  
   (507, 'init')  
   (508, 'insert')  
   (509, '__cs_param_insert_s')  
   (510, '__cs_param_insert_id')  
   (511, '__cs_local_insert_td')  
   (512, 'delete')  
   (513, '__cs_param_delete_s')  
   (514, '__cs_local_delete_se')  
   (515, '__cs_local_delete_temp_td')  
   (516, '__cs_local_delete_res')  
   (517, '__cs_local_delete___cs_tmp_if_cond_19')  
   (518, 'contains')  
   (519, '__cs_param_contains_s')  
   (520, '__cs_param_contains_id')  
   (521, '__cs_local_contains_max_size')  
   (522, '__cs_local_contains_actual_size')  
   (523, '__cs_local_contains_res')  
   (524, '__cs_local_contains_found')  
   (525, '__cs_local_contains_dimension')  
   (526, '__cs_local_contains_datas')  
   (527, '__cs_local_contains_se')  
   (528, '__cs_local_contains___cs_tmp_if_cond_20')  
   (529, '__cs_local_contains___cs_tmp_if_cond_21')  
   (530, '__cs_local_contains_i')  
   (531, 'get_size')  
   (532, '__cs_param_get_size_s')  
   (533, '__cs_local_get_size_max_size')  
   (534, '__cs_local_get_size_actual_size')  
   (535, '__cs_local_get_size_res')  
   (536, '__cs_local_get_size_dimension')  
   (537, '__cs_local_get_size_datas')  
   (538, '__cs_local_get_size_se')  
   (539, '__cs_local_get_size___cs_tmp_if_cond_22')  
   (540, '__cs_local_get_size_i')  
   (541, 'is_empty')  
   (542, '__cs_param_is_empty_s')  
   (543, '__cs_local_is_empty_se')  
   (544, '__cs_local_is_empty_res')  
   (545, '__cs_local_is_empty___cs_tmp_if_cond_23')  
   (546, 'ATOMIC_OPERATION')  
   (547, 'ss')  
   (548, 'lock')  
   (549, 'thread1')  
   (550, '__cs_param_thread1___cs_unused')  
   (551, '__cs_local_thread1___cs_tmp_if_cond_24')  
   (552, '__cs_local_thread1___cs_tmp_if_cond_25')  
   (553, '__cs_local_thread1___cs_tmp_if_cond_26')  
   (554, '__cs_local_thread1___cs_tmp_if_cond_27')  
   (555, 'thread2')  
   (556, '__cs_param_thread2___cs_unused')  
   (557, '__cs_local_thread2___cs_tmp_if_cond_28')  
   (558, '__cs_local_thread2___cs_tmp_if_cond_29')  
   (559, '__cs_local_thread2___cs_tmp_if_cond_30')  
   (560, '__cs_local_thread2___cs_tmp_if_cond_31')  
   (561, 'main')  
   (562, '__cs_local_main_t1')  
   (563, '__cs_local_main_t2')  
