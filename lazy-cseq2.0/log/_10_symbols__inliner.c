list of functions:
   lfds711_misc_force_store(param: )  call count 1
   exponential_backoff(param: )  call count 3
   __CSEQ_atomic_swap_stack_top(param: __cs_param___CSEQ_atomic_swap_stack_top_top, __cs_param___CSEQ_atomic_swap_stack_top_oldtop, __cs_param___CSEQ_atomic_swap_stack_top_newtop)  call count 3
   lfds711_misc_internal_backoff_init(param: __cs_param_lfds711_misc_internal_backoff_init_bs)  call count 2
   lfds711_stack_init_valid_on_current_logical_core(param: __cs_param_lfds711_stack_init_valid_on_current_logical_core_ss, __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state)  call count 1
   lfds711_stack_pop(param: __cs_param_lfds711_stack_pop_ss, __cs_param_lfds711_stack_pop_se)  call count 5
   lfds711_stack_push(param: __cs_param_lfds711_stack_push_ss, __cs_param_lfds711_stack_push_se)  call count 4
   __CSEQ_atomic_compare_and_exchange(param: __cs_param___CSEQ_atomic_compare_and_exchange_mptr, __cs_param___CSEQ_atomic_compare_and_exchange_eptr, __cs_param___CSEQ_atomic_compare_and_exchange_newval, __cs_param___CSEQ_atomic_compare_and_exchange_weak_p, __cs_param___CSEQ_atomic_compare_and_exchange_sm, __cs_param___CSEQ_atomic_compare_and_exchange_fm)  call count 1
   __atomic_compare_exchange_n(param: __cs_param___atomic_compare_exchange_n_mptr, __cs_param___atomic_compare_exchange_n_eptr, __cs_param___atomic_compare_exchange_n_newval, __cs_param___atomic_compare_exchange_n_weak_p, __cs_param___atomic_compare_exchange_n_sm, __cs_param___atomic_compare_exchange_n_fm)  call count 0
   __CSEQ_atomic_exchange(param: __cs_param___CSEQ_atomic_exchange_previous, __cs_param___CSEQ_atomic_exchange_new, __cs_param___CSEQ_atomic_exchange_memorder)  call count 1
   __atomic_exchange_n(param: __cs_param___atomic_exchange_n_previous, __cs_param___atomic_exchange_n_new, __cs_param___atomic_exchange_n_memorder)  call count 0
   __atomic_thread_fence(param: __cs_param___atomic_thread_fence_i)  call count 0
   init(param: )  call count 1
   insert(param: __cs_param_insert_s, __cs_param_insert_id)  call count 3
   delete(param: __cs_param_delete_s)  call count 1
   contains(param: __cs_param_contains_s, __cs_param_contains_id)  call count 0
   get_size(param: __cs_param_get_size_s)  call count 0
   is_empty(param: __cs_param_is_empty_s)  call count 0
   dump_structure(param: __cs_param_dump_structure_s, __cs_param_dump_structure_size, __cs_param_dump_structure_ids)  call count 1
   check(param: __cs_param_check_ss)  call count 1
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
      id2  '__cs_param__ps'  
         type 'struct lfds711_prng_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id3  '__cs_param__seed'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id4  '__cs_param__psts'  
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
         type 'struct lfds711_misc_globals'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id14  '__cs_param__query_type'  
         type 'enum lfds711_stack_query'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id15  '__cs_param__query_input'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id16  '__cs_param__query_output'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id30  '__cs_param__baus'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id31  '__cs_param__key_compare_function'  
         type 'int (*)(const void, const void)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id32  '__cs_param__existing_key'  
         type 'enum lfds711_list_aso_existing_key'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id33  '__cs_param__user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id34  '__cs_param__element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id35  '__cs_param__baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id36  '__cs_param__existing_baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id37  '__cs_param__key'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id38  '__cs_param__absolute_position'  
         type 'enum lfds711_btree_au_absolute_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id39  '__cs_param__relative_position'  
         type 'enum lfds711_btree_au_relative_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id49  '__cs_param__fs'  
         type 'struct lfds711_freelist_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id50  '__cs_param__elimination_array'  
         type 'struct lfds711_freelist_element * volatile (*)'  kind 'p'  arity '1'  
         size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id51  '__cs_param__elimination_array_size_in_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id52  '__cs_param__fe'  
         type 'struct lfds711_freelist_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id72  '__cs_param__has'  
         type 'struct lfds711_hash_a_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id73  '__cs_param__baus_array'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id74  '__cs_param__array_size'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id75  '__cs_param__key_hash_function'  
         type 'void (*)(const void, lfds711_pal_uint_t)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id76  '__cs_param__element_cleanup_function'  
         type 'void (*)(struct lfds711_hash_a_state, struct lfds711_hash_a_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id77  '__cs_param__hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id78  '__cs_param__existing_hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id79  '__cs_param__hai'  
         type 'struct lfds711_hash_a_iterate *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id91  '__cs_param__lasos'  
         type 'struct lfds711_list_aso_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id92  '__cs_param__lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id93  '__cs_param__existing_lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id104  '__cs_param__lasus'  
         type 'struct lfds711_list_asu_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id105  '__cs_param__lasue'  
         type 'struct lfds711_list_asu_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id106  '__cs_param__lasue_predecessor'  
         type 'struct lfds711_list_asu_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id107  '__cs_param__position'  
         type 'enum lfds711_list_asu_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id119  '__cs_param__qbmms'  
         type 'struct lfds711_queue_bmm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id120  '__cs_param__element_array'  
         type 'struct lfds711_queue_bss_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id121  '__cs_param__number_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id122  '__cs_param__value'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id131  '__cs_param__qbsss'  
         type 'struct lfds711_queue_bss_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id141  '__cs_param__qumms'  
         type 'struct lfds711_queue_umm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id142  '__cs_param__qumme_dummy'  
         type 'struct lfds711_queue_umm_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id143  '__cs_param__qumme'  
         type 'struct lfds711_queue_umm_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id157  '__cs_param__rs'  
         type 'struct lfds711_ringbuffer_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id158  '__cs_param__re_array_inc_dummy'  
         type 'struct lfds711_ringbuffer_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id159  '__cs_param__number_elements_inc_dummy'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id160  '__cs_param__overwrite_occurred_flag'  
         type 'enum lfds711_misc_flag *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id161  '__cs_param__overwritten_key'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id162  '__cs_param__overwritten_value'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id170  '__cs_param__ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id171  '__cs_param__se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id172  '__cs_param__bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id173  'library_lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[627, 661, 668, 701, 702, 721, 723, 730, 731, 755, 757, 764, 765, 817, 819, 821, 823]'  
         deref '[]'  
         occurs '[627, 661, 668, 701, 702, 721, 723, 730, 731, 755, 757, 764, 765, 817, 819, 821, 823]'  
      id241  'mystack'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[888, 889, 974]'  
         deref '[]'  
         occurs '[888, 889, 974]'  
      id289  'ATOMIC_OPERATION'  
         type 'int'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1050, 1059, 1067, 1076, 1087, 1096, 1104, 1113]'  
      id290  'ss'  
         type 'struct lfds711_stack_state *'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1056, 1073, 1093, 1110, 1123, 1130]'  
      id291  'lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[1053, 1062, 1070, 1079, 1090, 1099, 1107, 1116, 1122]'  
         deref '[]'  
         occurs '[1053, 1062, 1070, 1079, 1090, 1099, 1107, 1116, 1122]'  
   lfds711_misc_force_store
      id17  '__cs_local_lfds711_misc_force_store_destination'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[201]'  
         deref '[]'  
         occurs '[201]'  
   exponential_backoff
      id174  '__cs_local_exponential_backoff_loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[571, 571, 571]'  
   __CSEQ_atomic_swap_stack_top
      id175  '__cs_param___CSEQ_atomic_swap_stack_top_top'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[581, 584, 589]'  
         occurs '[581, 584, 589]'  
      id176  '__cs_param___CSEQ_atomic_swap_stack_top_oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[581, 589]'  
         occurs '[581, 589]'  
      id177  '__cs_param___CSEQ_atomic_swap_stack_top_newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[584]'  
         occurs '[584]'  
      id178  '__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[581, 582]'  
   lfds711_misc_internal_backoff_init
      id179  '__cs_param_lfds711_misc_internal_backoff_init_bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[608, 617, 618, 619, 620, 621]'  
         occurs '[597, 608, 617, 618, 619, 620, 621]'  
      id180  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[597, 598]'  
      id181  '__cs_local_lfds711_misc_internal_backoff_init_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[602, 613]'  
         occurs '[601, 602, 612, 613]'  
      id182  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[608, 609]'  
   lfds711_stack_init_valid_on_current_logical_core
      id183  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[641, 652, 662, 663, 664, 665, 666]'  
         occurs '[630, 641, 652, 662, 663, 664, 665, 666]'  
      id184  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[664]'  
      id185  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[630, 631]'  
      id186  '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[635, 646, 657]'  
         occurs '[634, 635, 645, 646, 656, 657]'  
      id187  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[641, 642]'  
      id188  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[652, 653]'  
   lfds711_stack_pop
      id189  '__cs_param_lfds711_stack_pop_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[703, 704, 722, 756]'  
         occurs '[681, 703, 704, 722, 756]'  
      id190  '__cs_param_lfds711_stack_pop_se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[716, 750, 776]'  
         occurs '[692, 716, 750, 776]'  
      id191  '__cs_local_lfds711_stack_pop_result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[722, 726, 743, 756, 760, 777]'  
      id192  '__cs_local_lfds711_stack_pop_backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[676]'  
      id193  '__cs_local_lfds711_stack_pop_new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[722, 756]'  
         deref '[]'  
         occurs '[719, 720, 722, 753, 754, 756]'  
      id194  '__cs_local_lfds711_stack_pop_original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[722, 756]'  
         deref '[720, 754]'  
         occurs '[703, 704, 713, 719, 720, 722, 747, 753, 754, 756, 776]'  
      id195  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[681, 682]'  
      id196  '__cs_local_lfds711_stack_pop_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[686, 697]'  
         occurs '[685, 686, 696, 697]'  
      id197  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[692, 693]'  
      id198  '__cs_local_lfds711_stack_pop_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[706, 733, 736, 767, 770]'  
      id199  '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[709, 709, 709]'  
      id200  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[713, 714]'  
      id201  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[726, 727]'  
      id202  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[736, 737]'  
      id203  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[747, 748]'  
      id204  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[760, 761]'  
      id205  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[770, 771]'  
   lfds711_stack_push
      id206  '__cs_param_lfds711_stack_push_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[810, 811, 822]'  
         occurs '[789, 810, 811, 822]'  
      id207  '__cs_param_lfds711_stack_push_se'  
         type 'struct lfds711_stack_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[818]'  
         occurs '[800, 809, 818]'  
      id208  '__cs_local_lfds711_stack_push_result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[812, 815, 822, 826]'  
      id209  '__cs_local_lfds711_stack_push_backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[784]'  
      id210  '__cs_local_lfds711_stack_push_new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[822]'  
         deref '[]'  
         occurs '[809, 820, 822]'  
      id211  '__cs_local_lfds711_stack_push_original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[822]'  
         deref '[]'  
         occurs '[810, 811, 818, 820, 822]'  
      id212  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[789, 790]'  
      id213  '__cs_local_lfds711_stack_push_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[794, 805]'  
         occurs '[793, 794, 804, 805]'  
      id214  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[800, 801]'  
      id215  '__cs_local_lfds711_stack_push_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[814, 831, 834]'  
      id216  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[826, 827]'  
      id217  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[834, 835]'  
   __CSEQ_atomic_compare_and_exchange
      id218  '__cs_param___CSEQ_atomic_compare_and_exchange_mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[846, 849]'  
         occurs '[846, 849]'  
      id219  '__cs_param___CSEQ_atomic_compare_and_exchange_eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[846, 854]'  
         occurs '[846, 854]'  
      id220  '__cs_param___CSEQ_atomic_compare_and_exchange_newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[849, 854]'  
      id221  '__cs_param___CSEQ_atomic_compare_and_exchange_weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id222  '__cs_param___CSEQ_atomic_compare_and_exchange_sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id223  '__cs_param___CSEQ_atomic_compare_and_exchange_fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id224  '__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[846, 847]'  
   __atomic_compare_exchange_n
      id225  '__cs_param___atomic_compare_exchange_n_mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[861]'  
      id226  '__cs_param___atomic_compare_exchange_n_eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[861]'  
      id227  '__cs_param___atomic_compare_exchange_n_newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[861]'  
      id228  '__cs_param___atomic_compare_exchange_n_weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[861]'  
      id229  '__cs_param___atomic_compare_exchange_n_sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[861]'  
      id230  '__cs_param___atomic_compare_exchange_n_fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[861]'  
      id231  '__cs_local___atomic_compare_exchange_n_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[861, 862]'  
   __CSEQ_atomic_exchange
      id232  '__cs_param___CSEQ_atomic_exchange_previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[867, 868]'  
         occurs '[867, 868]'  
      id233  '__cs_param___CSEQ_atomic_exchange_new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[868]'  
      id234  '__cs_param___CSEQ_atomic_exchange_memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id235  '__cs_local___CSEQ_atomic_exchange_old'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[867, 869]'  
   __atomic_exchange_n
      id236  '__cs_param___atomic_exchange_n_previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[874]'  
      id237  '__cs_param___atomic_exchange_n_new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[874]'  
      id238  '__cs_param___atomic_exchange_n_memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[874]'  
      id239  '__cs_local___atomic_exchange_n_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[874, 875]'  
   __atomic_thread_fence
      id240  '__cs_param___atomic_thread_fence_i'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   init
   insert
      id244  '__cs_param_insert_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[897]'  
      id245  '__cs_param_insert_id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[895]'  
      id246  '__cs_local_insert_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[895, 896, 897]'  
         occurs '[894, 895, 896, 896, 897]'  
   delete
      id247  '__cs_param_delete_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[904]'  
      id248  '__cs_local_delete_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[904]'  
         deref '[910]'  
         occurs '[904, 910]'  
      id249  '__cs_local_delete_temp_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id250  '__cs_local_delete_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[904, 907, 912]'  
      id251  '__cs_local_delete___cs_tmp_if_cond_19'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[907, 908]'  
   contains
      id252  '__cs_param_contains_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[931, 954]'  
      id253  '__cs_param_contains_id'  
         type 'unsigned long long int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[943]'  
      id254  '__cs_local_contains_max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[917, 927]'  
      id255  '__cs_local_contains_actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[919, 939, 940, 940, 943, 948, 948, 952]'  
      id256  '__cs_local_contains_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[921, 929, 931, 934]'  
      id257  '__cs_local_contains_found'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[923, 929, 946, 957]'  
      id258  '__cs_local_contains_dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[925]'  
      id259  '__cs_local_contains_datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[940, 943, 954]'  
         occurs '[927, 939, 940, 943, 954]'  
      id260  '__cs_local_contains_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[931]'  
         deref '[939]'  
         occurs '[931, 939]'  
      id261  '__cs_local_contains___cs_tmp_if_cond_20'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[934, 935]'  
      id262  '__cs_local_contains___cs_tmp_if_cond_21'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[943, 944]'  
      id263  '__cs_local_contains_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[951, 952, 954, 955]'  
   get_size
      id264  '__cs_param_get_size_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[989]'  
      id265  '__cs_local_get_size_max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[962, 970]'  
      id266  '__cs_local_get_size_actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[964, 975, 983, 983, 987, 992]'  
      id267  '__cs_local_get_size_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[966, 972, 974, 978]'  
      id268  '__cs_local_get_size_dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[968]'  
      id269  '__cs_local_get_size_datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[989]'  
         occurs '[970, 975, 989]'  
      id270  '__cs_local_get_size_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[974]'  
         deref '[975]'  
         occurs '[974, 975]'  
      id271  '__cs_local_get_size___cs_tmp_if_cond_22'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[978, 979]'  
      id272  '__cs_local_get_size_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[986, 987, 989, 990]'  
   is_empty
      id273  '__cs_param_is_empty_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[998, 1004]'  
      id274  '__cs_local_is_empty_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[998]'  
         deref '[]'  
         occurs '[998, 1004]'  
      id275  '__cs_local_is_empty_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[998, 1001]'  
      id276  '__cs_local_is_empty___cs_tmp_if_cond_23'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1001, 1002]'  
   dump_structure
      id277  '__cs_param_dump_structure_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1019]'  
      id278  '__cs_param_dump_structure_size'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id279  '__cs_param_dump_structure_ids'  
         type 'int *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1031]'  
      id280  '__cs_local_dump_structure_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1012, 1017, 1019, 1022]'  
      id281  '__cs_local_dump_structure_data_structure_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1014, 1025, 1027, 1027, 1034]'  
      id282  '__cs_local_dump_structure_data'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1030, 1031]'  
         occurs '[1028, 1030, 1031, 1032]'  
      id283  '__cs_local_dump_structure_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1019]'  
         deref '[1028]'  
         occurs '[1019, 1028]'  
      id284  '__cs_local_dump_structure___cs_tmp_if_cond_24'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1022, 1023]'  
      id285  '__cs_local_dump_structure_id_found'  
         type 'unsigned long long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1030]'  
   check
      id286  '__cs_param_check_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1040]'  
      id287  '__cs_local_check_ids'  
         type 'int'  kind 'l'  arity '1'  
         size '[3]'  
         ref '[]'  
         deref '[]'  
         occurs '[1040, 1041, 1041, 1041, 1041, 1041, 1041, 1041]'  
      id288  '__cs_local_check_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1040, 1041, 1041, 1041]'  
   thread1
      id292  '__cs_param_thread1___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id293  '__cs_local_thread1___cs_tmp_if_cond_25'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1050, 1051]'  
      id294  '__cs_local_thread1___cs_tmp_if_cond_26'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1059, 1060]'  
      id295  '__cs_local_thread1___cs_tmp_if_cond_27'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1067, 1068]'  
      id296  '__cs_local_thread1___cs_tmp_if_cond_28'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1076, 1077]'  
   thread2
      id297  '__cs_param_thread2___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id298  '__cs_local_thread2___cs_tmp_if_cond_29'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1087, 1088]'  
      id299  '__cs_local_thread2___cs_tmp_if_cond_30'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1096, 1097]'  
      id300  '__cs_local_thread2___cs_tmp_if_cond_31'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1104, 1105]'  
      id301  '__cs_local_thread2___cs_tmp_if_cond_32'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1113, 1114]'  
   main
      id302  '__cs_local_main_t1'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1126]'  
         deref '[]'  
         occurs '[1126, 1128]'  
      id303  '__cs_local_main_t2'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1127]'  
         deref '[]'  
         occurs '[1127, 1129]'  

Fields:
   lfds711_prng_state
      id0  'entropy'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_prng_st_state
      id1  'entropy'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_backoff_state
      id6  'lock'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
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
      id24  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id25  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id26  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id27  'existing_key'  type 'enum lfds711_btree_au_existing_key'  kind 'f'  arity '0'  size '[]'  
      id28  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id29  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_element
      id40  'next'  type 'struct lfds711_freelist_element *'  kind 'f'  arity '0'  size '[]'  
      id41  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id42  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_state
      id43  'top'  type 'struct lfds711_freelist_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id44  'elimination_array_size_in_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id45  'elimination_array'  type 'struct lfds711_freelist_element * volatile (*)'  kind 'f'  arity '1'  size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
      id46  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id47  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id48  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_element
      id53  'baue'  type 'struct lfds711_btree_au_element'  kind 'f'  arity '0'  size '[]'  
      id54  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id55  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_iterate
      id56  'baue'  type 'struct lfds711_btree_au_element *'  kind 'f'  arity '0'  size '[]'  
      id57  'baus'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id58  'baus_end'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_state
      id59  'existing_key'  type 'enum lfds711_hash_a_existing_key'  kind 'f'  arity '0'  size '[]'  
      id60  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id61  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id62  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id63  'array_size'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id64  'baus_array'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id65  '__cs_param__has'  type 'struct lfds711_hash_a_state *'  kind 'f'  arity '0'  size '[]'  
      id66  '__cs_param__hae'  type 'struct lfds711_hash_a_element *'  kind 'f'  arity '0'  size '[]'  
      id67  'element_cleanup_callback'  type 'void (*)(struct lfds711_hash_a_state *__cs_param__has, struct lfds711_hash_a_element *__cs_param__hae)'  kind 'f'  arity '0'  size '[]'  
      id68  '__cs_param__key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id69  '__cs_param__hash'  type 'lfds711_pal_uint_t *'  kind 'f'  arity '0'  size '[]'  
      id70  'key_hash_function'  type 'void (*)(const void *__cs_param__key, lfds711_pal_uint_t *__cs_param__hash)'  kind 'f'  arity '0'  size '[]'  
      id71  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_element
      id80  'next'  type 'struct lfds711_list_aso_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id81  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id82  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_state
      id83  'dummy_element'  type 'struct lfds711_list_aso_element'  kind 'f'  arity '0'  size '[]'  
      id84  'start'  type 'struct lfds711_list_aso_element *'  kind 'f'  arity '0'  size '[]'  
      id85  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id86  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id87  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id88  'existing_key'  type 'enum lfds711_list_aso_existing_key'  kind 'f'  arity '0'  size '[]'  
      id89  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id90  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_element
      id94  'next'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id95  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id96  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_state
      id97  'dummy_element'  type 'struct lfds711_list_asu_element'  kind 'f'  arity '0'  size '[]'  
      id98  'end'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id99  'start'  type 'struct lfds711_list_asu_element *'  kind 'f'  arity '0'  size '[]'  
      id100  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id101  'after_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id102  'end_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id103  'start_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_element
      id108  'sequence_number'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id109  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id110  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_state
      id111  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id112  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id113  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id114  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id115  'element_array'  type 'struct lfds711_queue_bmm_element *'  kind 'f'  arity '0'  size '[]'  
      id116  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id117  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id118  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_element
      id123  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id124  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_state
      id125  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id126  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id127  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id128  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id129  'element_array'  type 'struct lfds711_queue_bss_element *'  kind 'f'  arity '0'  size '[]'  
      id130  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_element
      id132  'next'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id133  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id134  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_state
      id135  'enqueue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id136  'dequeue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id137  'aba_counter'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id138  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id139  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id140  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_element
      id144  'fe'  type 'struct lfds711_freelist_element'  kind 'f'  arity '0'  size '[]'  
      id145  'qumme'  type 'struct lfds711_queue_umm_element'  kind 'f'  arity '0'  size '[]'  
      id146  'qumme_use'  type 'struct lfds711_queue_umm_element *'  kind 'f'  arity '0'  size '[]'  
      id147  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id148  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_state
      id149  'fs'  type 'struct lfds711_freelist_state'  kind 'f'  arity '0'  size '[]'  
      id150  'qumms'  type 'struct lfds711_queue_umm_state'  kind 'f'  arity '0'  size '[]'  
      id151  '__cs_param__rs'  type 'struct lfds711_ringbuffer_state *'  kind 'f'  arity '0'  size '[]'  
      id152  '__cs_param__key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id153  '__cs_param__value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id154  '__cs_param__unread_flag'  type 'enum lfds711_misc_flag'  kind 'f'  arity '0'  size '[]'  
      id155  'element_cleanup_callback'  type 'void (*)(struct lfds711_ringbuffer_state *__cs_param__rs, void *__cs_param__key, void *__cs_param__value, enum lfds711_misc_flag __cs_param__unread_flag)'  kind 'f'  arity '0'  size '[]'  
      id156  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_element
      id163  'next'  type 'struct lfds711_stack_element *'  kind 'f'  arity '0'  size '[]'  
      id164  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id165  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_state
      id166  'top'  type 'struct lfds711_stack_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id167  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id168  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id169  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   test_data
      id242  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id243  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  

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
       var 'ss'   type 'struct lfds711_stack_state *'   kind 'g'   arity '0'   size '[]'   
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
   dump_structure
       var '__cs_param_dump_structure_s'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param_dump_structure_ids'   type 'int *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_dump_structure_data'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_dump_structure_se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
   check
       var '__cs_param_check_ss'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
   thread1
       var '__cs_param_thread1___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   thread2
       var '__cs_param_thread2___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   main

Function blocks:
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
struct lfds711_stack_state *init()
{
    lfds711_stack_init_valid_on_current_logical_core(&mystack, 0);
    return &mystack;
}



struct lfds711_stack_state *
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
    __cs_local_delete_res = lfds711_stack_pop((struct lfds711_stack_state *) __cs_param_delete_s, &__cs_local_delete_se);
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
        __cs_local_get_size_res = lfds711_stack_pop(&mystack, &__cs_local_get_size_se);
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
function 'dump_structure' ----------------------------------:
int dump_structure(struct lfds711_stack_state *__cs_param_dump_structure_s, int __cs_param_dump_structure_size, int *__cs_param_dump_structure_ids)
{
    int __cs_local_dump_structure_res;
    __cs_local_dump_structure_res = 1;
    int __cs_local_dump_structure_data_structure_size;
    __cs_local_dump_structure_data_structure_size = 0;
    struct test_data *__cs_local_dump_structure_data;
    struct lfds711_stack_element *__cs_local_dump_structure_se;
    while (__cs_local_dump_structure_res != 0)
    {
        __cs_local_dump_structure_res = lfds711_stack_pop(__cs_param_dump_structure_s, &__cs_local_dump_structure_se);
        ;
        _Bool __cs_local_dump_structure___cs_tmp_if_cond_24;
        __cs_local_dump_structure___cs_tmp_if_cond_24 = __cs_local_dump_structure_res == 0;
        if (__cs_local_dump_structure___cs_tmp_if_cond_24)
        {
            return __cs_local_dump_structure_data_structure_size;
        }

        __cs_local_dump_structure_data_structure_size = __cs_local_dump_structure_data_structure_size + 1;
        __cs_local_dump_structure_data = (*__cs_local_dump_structure_se).value;
        unsigned long long int __cs_local_dump_structure_id_found;
        __cs_local_dump_structure_id_found = (*__cs_local_dump_structure_data).user_id;
        __cs_param_dump_structure_ids[(*__cs_local_dump_structure_data).user_id] = 1;
        free(__cs_local_dump_structure_data);
    }

    return __cs_local_dump_structure_data_structure_size;
}


struct lfds711_stack_state *__cs_param_dump_structure_s, int __cs_param_dump_structure_size, int *__cs_param_dump_structure_ids
int
function 'check' ----------------------------------:
void check(struct lfds711_stack_state *__cs_param_check_ss)
{
    int __cs_local_check_ids[3];
    int __cs_local_check_size;
    __cs_local_check_size = dump_structure(__cs_param_check_ss, 3, __cs_local_check_ids);
    __CSEQ_assert(((((__cs_local_check_size == 2) && (__cs_local_check_ids[0] == 1)) && (__cs_local_check_ids[2] == 1)) || (((__cs_local_check_size == 2) && (__cs_local_check_ids[1] == 1)) && (__cs_local_check_ids[2] == 1))) || ((((__cs_local_check_size == 3) && (__cs_local_check_ids[0] == 1)) && (__cs_local_check_ids[1] == 1)) && (__cs_local_check_ids[2] == 1)));
}


struct lfds711_stack_state *__cs_param_check_ss
void
function 'thread1' ----------------------------------:
void *thread1(void *__cs_param_thread1___cs_unused)
{
    ;
    _Bool __cs_local_thread1___cs_tmp_if_cond_25;
    __cs_local_thread1___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
    if (__cs_local_thread1___cs_tmp_if_cond_25)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    insert(ss, 0);
    ;
    _Bool __cs_local_thread1___cs_tmp_if_cond_26;
    __cs_local_thread1___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
    if (__cs_local_thread1___cs_tmp_if_cond_26)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
    ;
    _Bool __cs_local_thread1___cs_tmp_if_cond_27;
    __cs_local_thread1___cs_tmp_if_cond_27 = ATOMIC_OPERATION;
    if (__cs_local_thread1___cs_tmp_if_cond_27)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    insert(ss, 1);
    ;
    _Bool __cs_local_thread1___cs_tmp_if_cond_28;
    __cs_local_thread1___cs_tmp_if_cond_28 = ATOMIC_OPERATION;
    if (__cs_local_thread1___cs_tmp_if_cond_28)
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
    _Bool __cs_local_thread2___cs_tmp_if_cond_29;
    __cs_local_thread2___cs_tmp_if_cond_29 = ATOMIC_OPERATION;
    if (__cs_local_thread2___cs_tmp_if_cond_29)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    delete(ss);
    ;
    _Bool __cs_local_thread2___cs_tmp_if_cond_30;
    __cs_local_thread2___cs_tmp_if_cond_30 = ATOMIC_OPERATION;
    if (__cs_local_thread2___cs_tmp_if_cond_30)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
    ;
    _Bool __cs_local_thread2___cs_tmp_if_cond_31;
    __cs_local_thread2___cs_tmp_if_cond_31 = ATOMIC_OPERATION;
    if (__cs_local_thread2___cs_tmp_if_cond_31)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    insert(ss, 2);
    ;
    _Bool __cs_local_thread2___cs_tmp_if_cond_32;
    __cs_local_thread2___cs_tmp_if_cond_32 = ATOMIC_OPERATION;
    if (__cs_local_thread2___cs_tmp_if_cond_32)
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

function: init   stmt:     return &mystack;

function: insert   stmt:     lfds711_stack_push((struct lfds711_stack_state *) __cs_param_insert_s, &(*__cs_local_insert_td).se);

function: delete   stmt:     return __cs_local_delete_res;

function: contains   stmt:     return __cs_local_contains_found;

function: get_size   stmt:     return __cs_local_get_size_actual_size;

function: is_empty   stmt:     return 1;

function: dump_structure   stmt:     return __cs_local_dump_structure_data_structure_size;

function: check   stmt:     __CSEQ_assert(((((__cs_local_check_size == 2) && (__cs_local_check_ids[0] == 1)) && (__cs_local_check_ids[2] == 1)) || (((__cs_local_check_size == 2) && (__cs_local_check_ids[1] == 1)) && (__cs_local_check_ids[2] == 1))) || ((((__cs_local_check_size == 3) && (__cs_local_check_ids[0] == 1)) && (__cs_local_check_ids[1] == 1)) && (__cs_local_check_ids[2] == 1)));

function: thread1   stmt:     ;

function: thread2   stmt:     ;

function: main   stmt:     return 0;


All symbols (new symbol table - work in progress):
   (0, 'entropy')  
   (1, 'entropy')  
   (2, 'lfds711_prng_init_valid_on_current_logical_core')  
   (3, '__cs_param__ps')  
   (4, '__cs_param__seed')  
   (5, 'lfds711_prng_st_init')  
   (6, '__cs_param__psts')  
   (7, '__cs_param__seed')  
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
   (18, '__cs_param__query_type')  
   (19, '__cs_param__query_input')  
   (20, '__cs_param__query_output')  
   (21, 'lfds711_misc_force_store')  
   (22, '__cs_local_lfds711_misc_force_store_destination')  
   (23, 'left')  
   (24, 'right')  
   (25, 'up')  
   (26, 'value')  
   (27, 'key')  
   (28, 'root')  
   (29, 'key_compare_function')  
   (30, '__cs_param__new_key')  
   (31, '__cs_param__existing_key')  
   (32, 'existing_key')  
   (33, 'user_state')  
   (34, 'insert_backoff')  
   (35, 'lfds711_btree_au_init_valid_on_current_logical_core')  
   (36, '__cs_param__baus')  
   (37, '__cs_param__key_compare_function')  
   (38, 'new_key')  
   (39, 'existing_key')  
   (40, '__cs_param__existing_key')  
   (41, '__cs_param__user_state')  
   (42, 'lfds711_btree_au_cleanup')  
   (43, '__cs_param__baus')  
   (44, '__cs_param__element_cleanup_callback')  
   (45, 'baus')  
   (46, 'baue')  
   (47, 'lfds711_btree_au_insert')  
   (48, '__cs_param__baus')  
   (49, '__cs_param__baue')  
   (50, '__cs_param__existing_baue')  
   (51, 'lfds711_btree_au_get_by_key')  
   (52, '__cs_param__baus')  
   (53, '__cs_param__key_compare_function')  
   (54, 'new_key')  
   (55, 'existing_key')  
   (56, '__cs_param__key')  
   (57, '__cs_param__baue')  
   (58, 'lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position')  
   (59, '__cs_param__baus')  
   (60, '__cs_param__baue')  
   (61, '__cs_param__absolute_position')  
   (62, '__cs_param__relative_position')  
   (63, 'lfds711_btree_au_get_by_absolute_position')  
   (64, '__cs_param__baus')  
   (65, '__cs_param__baue')  
   (66, '__cs_param__absolute_position')  
   (67, 'lfds711_btree_au_get_by_relative_position')  
   (68, '__cs_param__baue')  
   (69, '__cs_param__relative_position')  
   (70, 'lfds711_btree_au_query')  
   (71, '__cs_param__baus')  
   (72, '__cs_param__query_type')  
   (73, '__cs_param__query_input')  
   (74, '__cs_param__query_output')  
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
   (85, '__cs_param__fs')  
   (86, '__cs_param__elimination_array')  
   (87, '__cs_param__elimination_array_size_in_elements')  
   (88, '__cs_param__user_state')  
   (89, 'lfds711_freelist_cleanup')  
   (90, '__cs_param__fs')  
   (91, '__cs_param__element_cleanup_callback')  
   (92, 'fs')  
   (93, 'fe')  
   (94, 'lfds711_freelist_push')  
   (95, '__cs_param__fs')  
   (96, '__cs_param__fe')  
   (97, '__cs_param__psts')  
   (98, 'lfds711_freelist_pop')  
   (99, '__cs_param__fs')  
   (100, '__cs_param__fe')  
   (101, '__cs_param__psts')  
   (102, 'lfds711_freelist_query')  
   (103, '__cs_param__fs')  
   (104, '__cs_param__query_type')  
   (105, '__cs_param__query_input')  
   (106, '__cs_param__query_output')  
   (107, 'baue')  
   (108, 'key')  
   (109, 'value')  
   (110, 'baue')  
   (111, 'baus')  
   (112, 'baus_end')  
   (113, 'existing_key')  
   (114, 'key_compare_function')  
   (115, '__cs_param__new_key')  
   (116, '__cs_param__existing_key')  
   (117, 'array_size')  
   (118, 'baus_array')  
   (119, 'element_cleanup_callback')  
   (120, '__cs_param__has')  
   (121, '__cs_param__hae')  
   (122, 'key_hash_function')  
   (123, '__cs_param__key')  
   (124, '__cs_param__hash')  
   (125, 'user_state')  
   (126, 'lfds711_hash_a_init_valid_on_current_logical_core')  
   (127, '__cs_param__has')  
   (128, '__cs_param__baus_array')  
   (129, '__cs_param__array_size')  
   (130, '__cs_param__key_compare_function')  
   (131, 'new_key')  
   (132, 'existing_key')  
   (133, '__cs_param__key_hash_function')  
   (134, 'key')  
   (135, 'hash')  
   (136, '__cs_param__existing_key')  
   (137, '__cs_param__user_state')  
   (138, 'lfds711_hash_a_cleanup')  
   (139, '__cs_param__has')  
   (140, '__cs_param__element_cleanup_function')  
   (141, 'has')  
   (142, 'hae')  
   (143, 'lfds711_hash_a_insert')  
   (144, '__cs_param__has')  
   (145, '__cs_param__hae')  
   (146, '__cs_param__existing_hae')  
   (147, 'lfds711_hash_a_get_by_key')  
   (148, '__cs_param__has')  
   (149, '__cs_param__key_compare_function')  
   (150, 'new_key')  
   (151, 'existing_key')  
   (152, '__cs_param__key_hash_function')  
   (153, 'key')  
   (154, 'hash')  
   (155, '__cs_param__key')  
   (156, '__cs_param__hae')  
   (157, 'lfds711_hash_a_iterate_init')  
   (158, '__cs_param__has')  
   (159, '__cs_param__hai')  
   (160, 'lfds711_hash_a_iterate')  
   (161, '__cs_param__hai')  
   (162, '__cs_param__hae')  
   (163, 'lfds711_hash_a_query')  
   (164, '__cs_param__has')  
   (165, '__cs_param__query_type')  
   (166, '__cs_param__query_input')  
   (167, '__cs_param__query_output')  
   (168, 'next')  
   (169, 'value')  
   (170, 'key')  
   (171, 'dummy_element')  
   (172, 'start')  
   (173, 'key_compare_function')  
   (174, '__cs_param__new_key')  
   (175, '__cs_param__existing_key')  
   (176, 'existing_key')  
   (177, 'user_state')  
   (178, 'insert_backoff')  
   (179, 'lfds711_list_aso_init_valid_on_current_logical_core')  
   (180, '__cs_param__lasos')  
   (181, '__cs_param__key_compare_function')  
   (182, 'new_key')  
   (183, 'existing_key')  
   (184, '__cs_param__existing_key')  
   (185, '__cs_param__user_state')  
   (186, 'lfds711_list_aso_cleanup')  
   (187, '__cs_param__lasos')  
   (188, '__cs_param__element_cleanup_callback')  
   (189, 'lasos')  
   (190, 'lasoe')  
   (191, 'lfds711_list_aso_insert')  
   (192, '__cs_param__lasos')  
   (193, '__cs_param__lasoe')  
   (194, '__cs_param__existing_lasoe')  
   (195, 'lfds711_list_aso_get_by_key')  
   (196, '__cs_param__lasos')  
   (197, '__cs_param__key')  
   (198, '__cs_param__lasoe')  
   (199, 'lfds711_list_aso_query')  
   (200, '__cs_param__lasos')  
   (201, '__cs_param__query_type')  
   (202, '__cs_param__query_input')  
   (203, '__cs_param__query_output')  
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
   (215, '__cs_param__lasus')  
   (216, '__cs_param__user_state')  
   (217, 'lfds711_list_asu_cleanup')  
   (218, '__cs_param__lasus')  
   (219, '__cs_param__element_cleanup_callback')  
   (220, 'lasus')  
   (221, 'lasue')  
   (222, 'lfds711_list_asu_insert_at_position')  
   (223, '__cs_param__lasus')  
   (224, '__cs_param__lasue')  
   (225, '__cs_param__lasue_predecessor')  
   (226, '__cs_param__position')  
   (227, 'lfds711_list_asu_insert_at_start')  
   (228, '__cs_param__lasus')  
   (229, '__cs_param__lasue')  
   (230, 'lfds711_list_asu_insert_at_end')  
   (231, '__cs_param__lasus')  
   (232, '__cs_param__lasue')  
   (233, 'lfds711_list_asu_insert_after_element')  
   (234, '__cs_param__lasus')  
   (235, '__cs_param__lasue')  
   (236, '__cs_param__lasue_predecessor')  
   (237, 'lfds711_list_asu_get_by_key')  
   (238, '__cs_param__lasus')  
   (239, '__cs_param__key_compare_function')  
   (240, 'new_key')  
   (241, 'existing_key')  
   (242, '__cs_param__key')  
   (243, '__cs_param__lasue')  
   (244, 'lfds711_list_asu_query')  
   (245, '__cs_param__lasus')  
   (246, '__cs_param__query_type')  
   (247, '__cs_param__query_input')  
   (248, '__cs_param__query_output')  
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
   (261, '__cs_param__qbmms')  
   (262, '__cs_param__element_array')  
   (263, '__cs_param__number_elements')  
   (264, '__cs_param__user_state')  
   (265, 'lfds711_queue_bmm_cleanup')  
   (266, '__cs_param__qbmms')  
   (267, '__cs_param__element_cleanup_callback')  
   (268, 'qbmms')  
   (269, 'key')  
   (270, 'value')  
   (271, 'lfds711_queue_bmm_enqueue')  
   (272, '__cs_param__qbmms')  
   (273, '__cs_param__key')  
   (274, '__cs_param__value')  
   (275, 'lfds711_queue_bmm_dequeue')  
   (276, '__cs_param__qbmms')  
   (277, '__cs_param__key')  
   (278, '__cs_param__value')  
   (279, 'lfds711_queue_bmm_query')  
   (280, '__cs_param__qbmms')  
   (281, '__cs_param__query_type')  
   (282, '__cs_param__query_input')  
   (283, '__cs_param__query_output')  
   (284, 'key')  
   (285, 'value')  
   (286, 'number_elements')  
   (287, 'mask')  
   (288, 'read_index')  
   (289, 'write_index')  
   (290, 'element_array')  
   (291, 'user_state')  
   (292, 'lfds711_queue_bss_init_valid_on_current_logical_core')  
   (293, '__cs_param__qbsss')  
   (294, '__cs_param__element_array')  
   (295, '__cs_param__number_elements')  
   (296, '__cs_param__user_state')  
   (297, 'lfds711_queue_bss_cleanup')  
   (298, '__cs_param__qbsss')  
   (299, '__cs_param__element_cleanup_callback')  
   (300, 'qbsss')  
   (301, 'key')  
   (302, 'value')  
   (303, 'lfds711_queue_bss_enqueue')  
   (304, '__cs_param__qbsss')  
   (305, '__cs_param__key')  
   (306, '__cs_param__value')  
   (307, 'lfds711_queue_bss_dequeue')  
   (308, '__cs_param__qbsss')  
   (309, '__cs_param__key')  
   (310, '__cs_param__value')  
   (311, 'lfds711_queue_bss_query')  
   (312, '__cs_param__qbsss')  
   (313, '__cs_param__query_type')  
   (314, '__cs_param__query_input')  
   (315, '__cs_param__query_output')  
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
   (326, '__cs_param__qumms')  
   (327, '__cs_param__qumme_dummy')  
   (328, '__cs_param__user_state')  
   (329, 'lfds711_queue_umm_cleanup')  
   (330, '__cs_param__qumms')  
   (331, '__cs_param__element_cleanup_callback')  
   (332, 'qumms')  
   (333, 'qumme')  
   (334, 'dummy_element_flag')  
   (335, 'lfds711_queue_umm_enqueue')  
   (336, '__cs_param__qumms')  
   (337, '__cs_param__qumme')  
   (338, 'lfds711_queue_umm_dequeue')  
   (339, '__cs_param__qumms')  
   (340, '__cs_param__qumme')  
   (341, 'lfds711_queue_umm_query')  
   (342, '__cs_param__qumms')  
   (343, '__cs_param__query_type')  
   (344, '__cs_param__query_input')  
   (345, '__cs_param__query_output')  
   (346, 'fe')  
   (347, 'qumme')  
   (348, 'qumme_use')  
   (349, 'key')  
   (350, 'value')  
   (351, 'fs')  
   (352, 'qumms')  
   (353, 'element_cleanup_callback')  
   (354, '__cs_param__rs')  
   (355, '__cs_param__key')  
   (356, '__cs_param__value')  
   (357, '__cs_param__unread_flag')  
   (358, 'user_state')  
   (359, 'lfds711_ringbuffer_init_valid_on_current_logical_core')  
   (360, '__cs_param__rs')  
   (361, '__cs_param__re_array_inc_dummy')  
   (362, '__cs_param__number_elements_inc_dummy')  
   (363, '__cs_param__user_state')  
   (364, 'lfds711_ringbuffer_cleanup')  
   (365, '__cs_param__rs')  
   (366, '__cs_param__element_cleanup_callback')  
   (367, 'rs')  
   (368, 'key')  
   (369, 'value')  
   (370, 'unread_flag')  
   (371, 'lfds711_ringbuffer_read')  
   (372, '__cs_param__rs')  
   (373, '__cs_param__key')  
   (374, '__cs_param__value')  
   (375, 'lfds711_ringbuffer_write')  
   (376, '__cs_param__rs')  
   (377, '__cs_param__key')  
   (378, '__cs_param__value')  
   (379, '__cs_param__overwrite_occurred_flag')  
   (380, '__cs_param__overwritten_key')  
   (381, '__cs_param__overwritten_value')  
   (382, 'lfds711_ringbuffer_query')  
   (383, '__cs_param__rs')  
   (384, '__cs_param__query_type')  
   (385, '__cs_param__query_input')  
   (386, '__cs_param__query_output')  
   (387, 'next')  
   (388, 'key')  
   (389, 'value')  
   (390, 'top')  
   (391, 'user_state')  
   (392, 'pop_backoff')  
   (393, 'push_backoff')  
   (394, 'lfds711_stack_init_valid_on_current_logical_core')  
   (395, '__cs_param__ss')  
   (396, '__cs_param__user_state')  
   (397, 'lfds711_stack_cleanup')  
   (398, '__cs_param__ss')  
   (399, '__cs_param__element_cleanup_callback')  
   (400, 'ss')  
   (401, 'se')  
   (402, 'lfds711_stack_push')  
   (403, '__cs_param__ss')  
   (404, '__cs_param__se')  
   (405, 'lfds711_stack_pop')  
   (406, '__cs_param__ss')  
   (407, '__cs_param__se')  
   (408, 'lfds711_stack_query')  
   (409, '__cs_param__ss')  
   (410, '__cs_param__query_type')  
   (411, '__cs_param__query_input')  
   (412, '__cs_param__query_output')  
   (413, 'lfds711_misc_internal_backoff_init')  
   (414, '__cs_param__bs')  
   (415, 'library_lock')  
   (416, 'exponential_backoff')  
   (417, '__cs_local_exponential_backoff_loop')  
   (418, '__CSEQ_atomic_swap_stack_top')  
   (419, '__cs_param___CSEQ_atomic_swap_stack_top_top')  
   (420, '__cs_param___CSEQ_atomic_swap_stack_top_oldtop')  
   (421, '__cs_param___CSEQ_atomic_swap_stack_top_newtop')  
   (422, '__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0')  
   (423, 'lfds711_misc_internal_backoff_init')  
   (424, '__cs_param_lfds711_misc_internal_backoff_init_bs')  
   (425, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1')  
   (426, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (427, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2')  
   (428, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (429, 'lfds711_stack_init_valid_on_current_logical_core')  
   (430, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss')  
   (431, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state')  
   (432, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3')  
   (433, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (434, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4')  
   (435, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (436, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5')  
   (437, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (438, 'lfds711_stack_pop')  
   (439, '__cs_param_lfds711_stack_pop_ss')  
   (440, '__cs_param_lfds711_stack_pop_se')  
   (441, '__cs_local_lfds711_stack_pop_result')  
   (442, '__cs_local_lfds711_stack_pop_backoff_iteration')  
   (443, '__cs_local_lfds711_stack_pop_new_top')  
   (444, '__cs_local_lfds711_stack_pop_original_top')  
   (445, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6')  
   (446, '__cs_local_lfds711_stack_pop_c')  
   (447, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7')  
   (448, '__cs_local_lfds711_stack_pop_c')  
   (449, '__cs_local_lfds711_stack_pop_i')  
   (450, '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1')  
   (451, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8')  
   (452, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9')  
   (453, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10')  
   (454, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (455, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (456, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (457, 'lfds711_stack_push')  
   (458, '__cs_param_lfds711_stack_push_ss')  
   (459, '__cs_param_lfds711_stack_push_se')  
   (460, '__cs_local_lfds711_stack_push_result')  
   (461, '__cs_local_lfds711_stack_push_backoff_iteration')  
   (462, '__cs_local_lfds711_stack_push_new_top')  
   (463, '__cs_local_lfds711_stack_push_original_top')  
   (464, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14')  
   (465, '__cs_local_lfds711_stack_push_c')  
   (466, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15')  
   (467, '__cs_local_lfds711_stack_push_c')  
   (468, '__cs_local_lfds711_stack_push_i')  
   (469, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (470, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (471, '__CSEQ_atomic_compare_and_exchange')  
   (472, '__cs_param___CSEQ_atomic_compare_and_exchange_mptr')  
   (473, '__cs_param___CSEQ_atomic_compare_and_exchange_eptr')  
   (474, '__cs_param___CSEQ_atomic_compare_and_exchange_newval')  
   (475, '__cs_param___CSEQ_atomic_compare_and_exchange_weak_p')  
   (476, '__cs_param___CSEQ_atomic_compare_and_exchange_sm')  
   (477, '__cs_param___CSEQ_atomic_compare_and_exchange_fm')  
   (478, '__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18')  
   (479, '__atomic_compare_exchange_n')  
   (480, '__cs_param___atomic_compare_exchange_n_mptr')  
   (481, '__cs_param___atomic_compare_exchange_n_eptr')  
   (482, '__cs_param___atomic_compare_exchange_n_newval')  
   (483, '__cs_param___atomic_compare_exchange_n_weak_p')  
   (484, '__cs_param___atomic_compare_exchange_n_sm')  
   (485, '__cs_param___atomic_compare_exchange_n_fm')  
   (486, '__cs_local___atomic_compare_exchange_n_res')  
   (487, '__CSEQ_atomic_exchange')  
   (488, '__cs_param___CSEQ_atomic_exchange_previous')  
   (489, '__cs_param___CSEQ_atomic_exchange_new')  
   (490, '__cs_param___CSEQ_atomic_exchange_memorder')  
   (491, '__cs_local___CSEQ_atomic_exchange_old')  
   (492, '__atomic_exchange_n')  
   (493, '__cs_param___atomic_exchange_n_previous')  
   (494, '__cs_param___atomic_exchange_n_new')  
   (495, '__cs_param___atomic_exchange_n_memorder')  
   (496, '__cs_local___atomic_exchange_n_res')  
   (497, '__atomic_thread_fence')  
   (498, '__cs_param___atomic_thread_fence_i')  
   (499, 'mystack')  
   (500, 'se')  
   (501, 'user_id')  
   (502, 'init')  
   (503, 'insert')  
   (504, '__cs_param_insert_s')  
   (505, '__cs_param_insert_id')  
   (506, '__cs_local_insert_td')  
   (507, 'delete')  
   (508, '__cs_param_delete_s')  
   (509, '__cs_local_delete_se')  
   (510, '__cs_local_delete_temp_td')  
   (511, '__cs_local_delete_res')  
   (512, '__cs_local_delete___cs_tmp_if_cond_19')  
   (513, 'contains')  
   (514, '__cs_param_contains_s')  
   (515, '__cs_param_contains_id')  
   (516, '__cs_local_contains_max_size')  
   (517, '__cs_local_contains_actual_size')  
   (518, '__cs_local_contains_res')  
   (519, '__cs_local_contains_found')  
   (520, '__cs_local_contains_dimension')  
   (521, '__cs_local_contains_datas')  
   (522, '__cs_local_contains_se')  
   (523, '__cs_local_contains___cs_tmp_if_cond_20')  
   (524, '__cs_local_contains___cs_tmp_if_cond_21')  
   (525, '__cs_local_contains_i')  
   (526, 'get_size')  
   (527, '__cs_param_get_size_s')  
   (528, '__cs_local_get_size_max_size')  
   (529, '__cs_local_get_size_actual_size')  
   (530, '__cs_local_get_size_res')  
   (531, '__cs_local_get_size_dimension')  
   (532, '__cs_local_get_size_datas')  
   (533, '__cs_local_get_size_se')  
   (534, '__cs_local_get_size___cs_tmp_if_cond_22')  
   (535, '__cs_local_get_size_i')  
   (536, 'is_empty')  
   (537, '__cs_param_is_empty_s')  
   (538, '__cs_local_is_empty_se')  
   (539, '__cs_local_is_empty_res')  
   (540, '__cs_local_is_empty___cs_tmp_if_cond_23')  
   (541, 'dump_structure')  
   (542, '__cs_param_dump_structure_s')  
   (543, '__cs_param_dump_structure_size')  
   (544, '__cs_param_dump_structure_ids')  
   (545, '__cs_local_dump_structure_res')  
   (546, '__cs_local_dump_structure_data_structure_size')  
   (547, '__cs_local_dump_structure_data')  
   (548, '__cs_local_dump_structure_se')  
   (549, '__cs_local_dump_structure___cs_tmp_if_cond_24')  
   (550, '__cs_local_dump_structure_id_found')  
   (551, 'check')  
   (552, '__cs_param_check_ss')  
   (553, '__cs_local_check_ids')  
   (554, '__cs_local_check_size')  
   (555, 'ATOMIC_OPERATION')  
   (556, 'ss')  
   (557, 'lock')  
   (558, 'thread1')  
   (559, '__cs_param_thread1___cs_unused')  
   (560, '__cs_local_thread1___cs_tmp_if_cond_25')  
   (561, '__cs_local_thread1___cs_tmp_if_cond_26')  
   (562, '__cs_local_thread1___cs_tmp_if_cond_27')  
   (563, '__cs_local_thread1___cs_tmp_if_cond_28')  
   (564, 'thread2')  
   (565, '__cs_param_thread2___cs_unused')  
   (566, '__cs_local_thread2___cs_tmp_if_cond_29')  
   (567, '__cs_local_thread2___cs_tmp_if_cond_30')  
   (568, '__cs_local_thread2___cs_tmp_if_cond_31')  
   (569, '__cs_local_thread2___cs_tmp_if_cond_32')  
   (570, 'main')  
   (571, '__cs_local_main_t1')  
   (572, '__cs_local_main_t2')  
