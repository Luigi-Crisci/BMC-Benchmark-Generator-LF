list of functions:
   assert_create(param: __cs_param_assert_create_ss, __cs_param_assert_create_size)  call count 0
   lfds711_misc_force_store(param: )  call count 1
   exponential_backoff(param: )  call count 3
   __CSEQ_atomic_swap_stack_top(param: __cs_param___CSEQ_atomic_swap_stack_top_top, __cs_param___CSEQ_atomic_swap_stack_top_oldtop, __cs_param___CSEQ_atomic_swap_stack_top_newtop)  call count 3
   lfds711_misc_internal_backoff_init(param: __cs_param_lfds711_misc_internal_backoff_init_bs)  call count 2
   lfds711_stack_init_valid_on_current_logical_core(param: __cs_param_lfds711_stack_init_valid_on_current_logical_core_ss, __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state)  call count 1
   lfds711_stack_pop(param: __cs_param_lfds711_stack_pop_ss, __cs_param_lfds711_stack_pop_se)  call count 4
   lfds711_stack_push(param: __cs_param_lfds711_stack_push_ss, __cs_param_lfds711_stack_push_se)  call count 3
   __CSEQ_atomic_compare_and_exchange(param: __cs_param___CSEQ_atomic_compare_and_exchange_mptr, __cs_param___CSEQ_atomic_compare_and_exchange_eptr, __cs_param___CSEQ_atomic_compare_and_exchange_newval, __cs_param___CSEQ_atomic_compare_and_exchange_weak_p, __cs_param___CSEQ_atomic_compare_and_exchange_sm, __cs_param___CSEQ_atomic_compare_and_exchange_fm)  call count 1
   __atomic_compare_exchange_n(param: __cs_param___atomic_compare_exchange_n_mptr, __cs_param___atomic_compare_exchange_n_eptr, __cs_param___atomic_compare_exchange_n_newval, __cs_param___atomic_compare_exchange_n_weak_p, __cs_param___atomic_compare_exchange_n_sm, __cs_param___atomic_compare_exchange_n_fm)  call count 0
   __CSEQ_atomic_exchange(param: __cs_param___CSEQ_atomic_exchange_previous, __cs_param___CSEQ_atomic_exchange_new, __cs_param___CSEQ_atomic_exchange_memorder)  call count 1
   __atomic_exchange_n(param: __cs_param___atomic_exchange_n_previous, __cs_param___atomic_exchange_n_new, __cs_param___atomic_exchange_n_memorder)  call count 0
   __atomic_thread_fence(param: __cs_param___atomic_thread_fence_i)  call count 0
   init(param: )  call count 1
   insert(param: __cs_param_insert_s, __cs_param_insert_id)  call count 1
   delete(param: __cs_param_delete_s)  call count 1
   contains(param: __cs_param_contains_s, __cs_param_contains_id)  call count 0
   get_size(param: __cs_param_get_size_s)  call count 1
   is_empty(param: __cs_param_is_empty_s)  call count 0
   push(param: __cs_param_push___cs_unused)  call count 0
   pop(param: __cs_param_pop___cs_unused)  call count 0
   main(param: )  call count 0

list of thread functions:
   push  call count 1
   pop  call count 1

parameters for main():
   (no params)

Variables:
   (global)
      id4  '__cs_param__ps'  
         type 'struct lfds711_prng_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id5  '__cs_param__seed'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id6  '__cs_param__psts'  
         type 'struct lfds711_prng_st_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id7  'None'  
         type 'enum lfds711_stack_query {LFDS711_STACK_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_STACK_QUERY_SINGLETHREADED_VALIDATE}'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id15  'lfds711_misc_globals'  
         type 'struct lfds711_misc_globals'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id16  '__cs_param__query_type'  
         type 'enum lfds711_stack_query'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id17  '__cs_param__query_input'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id18  '__cs_param__query_output'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id32  '__cs_param__baus'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id33  '__cs_param__key_compare_function'  
         type 'int (*)(const void, const void)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id34  '__cs_param__existing_key'  
         type 'enum lfds711_list_aso_existing_key'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id35  '__cs_param__user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id36  '__cs_param__element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id37  '__cs_param__baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id38  '__cs_param__existing_baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id39  '__cs_param__key'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id40  '__cs_param__absolute_position'  
         type 'enum lfds711_btree_au_absolute_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id41  '__cs_param__relative_position'  
         type 'enum lfds711_btree_au_relative_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id51  '__cs_param__fs'  
         type 'struct lfds711_freelist_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id52  '__cs_param__elimination_array'  
         type 'struct lfds711_freelist_element * volatile (*)'  kind 'p'  arity '1'  
         size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id53  '__cs_param__elimination_array_size_in_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id54  '__cs_param__fe'  
         type 'struct lfds711_freelist_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id74  '__cs_param__has'  
         type 'struct lfds711_hash_a_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id75  '__cs_param__baus_array'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id76  '__cs_param__array_size'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id77  '__cs_param__key_hash_function'  
         type 'void (*)(const void, lfds711_pal_uint_t)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id78  '__cs_param__element_cleanup_function'  
         type 'void (*)(struct lfds711_hash_a_state, struct lfds711_hash_a_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id79  '__cs_param__hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id80  '__cs_param__existing_hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id81  '__cs_param__hai'  
         type 'struct lfds711_hash_a_iterate *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id93  '__cs_param__lasos'  
         type 'struct lfds711_list_aso_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id94  '__cs_param__lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id95  '__cs_param__existing_lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id106  '__cs_param__lasus'  
         type 'struct lfds711_list_asu_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id107  '__cs_param__lasue'  
         type 'struct lfds711_list_asu_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id108  '__cs_param__lasue_predecessor'  
         type 'struct lfds711_list_asu_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id109  '__cs_param__position'  
         type 'enum lfds711_list_asu_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id121  '__cs_param__qbmms'  
         type 'struct lfds711_queue_bmm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id122  '__cs_param__element_array'  
         type 'struct lfds711_queue_bss_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id123  '__cs_param__number_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id124  '__cs_param__value'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id133  '__cs_param__qbsss'  
         type 'struct lfds711_queue_bss_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id143  '__cs_param__qumms'  
         type 'struct lfds711_queue_umm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id144  '__cs_param__qumme_dummy'  
         type 'struct lfds711_queue_umm_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id145  '__cs_param__qumme'  
         type 'struct lfds711_queue_umm_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id159  '__cs_param__rs'  
         type 'struct lfds711_ringbuffer_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id160  '__cs_param__re_array_inc_dummy'  
         type 'struct lfds711_ringbuffer_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id161  '__cs_param__number_elements_inc_dummy'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id162  '__cs_param__overwrite_occurred_flag'  
         type 'enum lfds711_misc_flag *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id163  '__cs_param__overwritten_key'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id164  '__cs_param__overwritten_value'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id172  '__cs_param__ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id173  '__cs_param__se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id174  '__cs_param__bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id175  'library_lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[631, 665, 672, 705, 706, 725, 727, 734, 735, 759, 761, 768, 769, 821, 823, 825, 827]'  
         deref '[]'  
         occurs '[631, 665, 672, 705, 706, 725, 727, 734, 735, 759, 761, 768, 769, 821, 823, 825, 827]'  
      id243  'mystack'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[892, 893, 908]'  
         deref '[]'  
         occurs '[892, 893, 908]'  
      id280  'ATOMIC_OPERATION'  
         type 'int'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1023, 1032, 1047, 1056]'  
      id281  'ss'  
         type 'void *'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1029, 1053, 1066, 1082]'  
      id282  'lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[1026, 1035, 1050, 1059, 1065]'  
         deref '[]'  
         occurs '[1026, 1035, 1050, 1059, 1065]'  
   assert_create
      id0  '__cs_param_assert_create_ss'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id1  '__cs_param_assert_create_size'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   lfds711_misc_force_store
      id19  '__cs_local_lfds711_misc_force_store_destination'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[205]'  
         deref '[]'  
         occurs '[205]'  
   exponential_backoff
      id176  '__cs_local_exponential_backoff_loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[575, 575, 575]'  
   __CSEQ_atomic_swap_stack_top
      id177  '__cs_param___CSEQ_atomic_swap_stack_top_top'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[585, 588, 593]'  
         occurs '[585, 588, 593]'  
      id178  '__cs_param___CSEQ_atomic_swap_stack_top_oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[585, 593]'  
         occurs '[585, 593]'  
      id179  '__cs_param___CSEQ_atomic_swap_stack_top_newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[588]'  
         occurs '[588]'  
      id180  '__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[585, 586]'  
   lfds711_misc_internal_backoff_init
      id181  '__cs_param_lfds711_misc_internal_backoff_init_bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[612, 621, 622, 623, 624, 625]'  
         occurs '[601, 612, 621, 622, 623, 624, 625]'  
      id182  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[601, 602]'  
      id183  '__cs_local_lfds711_misc_internal_backoff_init_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[606, 617]'  
         occurs '[605, 606, 616, 617]'  
      id184  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[612, 613]'  
   lfds711_stack_init_valid_on_current_logical_core
      id185  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[645, 656, 666, 667, 668, 669, 670]'  
         occurs '[634, 645, 656, 666, 667, 668, 669, 670]'  
      id186  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[668]'  
      id187  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[634, 635]'  
      id188  '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[639, 650, 661]'  
         occurs '[638, 639, 649, 650, 660, 661]'  
      id189  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[645, 646]'  
      id190  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[656, 657]'  
   lfds711_stack_pop
      id191  '__cs_param_lfds711_stack_pop_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[707, 708, 726, 760]'  
         occurs '[685, 707, 708, 726, 760]'  
      id192  '__cs_param_lfds711_stack_pop_se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[720, 754, 780]'  
         occurs '[696, 720, 754, 780]'  
      id193  '__cs_local_lfds711_stack_pop_result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[726, 730, 747, 760, 764, 781]'  
      id194  '__cs_local_lfds711_stack_pop_backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[680]'  
      id195  '__cs_local_lfds711_stack_pop_new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[726, 760]'  
         deref '[]'  
         occurs '[723, 724, 726, 757, 758, 760]'  
      id196  '__cs_local_lfds711_stack_pop_original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[726, 760]'  
         deref '[724, 758]'  
         occurs '[707, 708, 717, 723, 724, 726, 751, 757, 758, 760, 780]'  
      id197  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[685, 686]'  
      id198  '__cs_local_lfds711_stack_pop_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[690, 701]'  
         occurs '[689, 690, 700, 701]'  
      id199  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[696, 697]'  
      id200  '__cs_local_lfds711_stack_pop_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[710, 737, 740, 771, 774]'  
      id201  '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[713, 713, 713]'  
      id202  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[717, 718]'  
      id203  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[730, 731]'  
      id204  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[740, 741]'  
      id205  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[751, 752]'  
      id206  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[764, 765]'  
      id207  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[774, 775]'  
   lfds711_stack_push
      id208  '__cs_param_lfds711_stack_push_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[814, 815, 826]'  
         occurs '[793, 814, 815, 826]'  
      id209  '__cs_param_lfds711_stack_push_se'  
         type 'struct lfds711_stack_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[822]'  
         occurs '[804, 813, 822]'  
      id210  '__cs_local_lfds711_stack_push_result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[816, 819, 826, 830]'  
      id211  '__cs_local_lfds711_stack_push_backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[788]'  
      id212  '__cs_local_lfds711_stack_push_new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[826]'  
         deref '[]'  
         occurs '[813, 824, 826]'  
      id213  '__cs_local_lfds711_stack_push_original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[826]'  
         deref '[]'  
         occurs '[814, 815, 822, 824, 826]'  
      id214  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[793, 794]'  
      id215  '__cs_local_lfds711_stack_push_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[798, 809]'  
         occurs '[797, 798, 808, 809]'  
      id216  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[804, 805]'  
      id217  '__cs_local_lfds711_stack_push_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[818, 835, 838]'  
      id218  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[830, 831]'  
      id219  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[838, 839]'  
   __CSEQ_atomic_compare_and_exchange
      id220  '__cs_param___CSEQ_atomic_compare_and_exchange_mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[850, 853]'  
         occurs '[850, 853]'  
      id221  '__cs_param___CSEQ_atomic_compare_and_exchange_eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[850, 858]'  
         occurs '[850, 858]'  
      id222  '__cs_param___CSEQ_atomic_compare_and_exchange_newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[853, 858]'  
      id223  '__cs_param___CSEQ_atomic_compare_and_exchange_weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id224  '__cs_param___CSEQ_atomic_compare_and_exchange_sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id225  '__cs_param___CSEQ_atomic_compare_and_exchange_fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id226  '__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[850, 851]'  
   __atomic_compare_exchange_n
      id227  '__cs_param___atomic_compare_exchange_n_mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865]'  
      id228  '__cs_param___atomic_compare_exchange_n_eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865]'  
      id229  '__cs_param___atomic_compare_exchange_n_newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865]'  
      id230  '__cs_param___atomic_compare_exchange_n_weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865]'  
      id231  '__cs_param___atomic_compare_exchange_n_sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865]'  
      id232  '__cs_param___atomic_compare_exchange_n_fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865]'  
      id233  '__cs_local___atomic_compare_exchange_n_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865, 866]'  
   __CSEQ_atomic_exchange
      id234  '__cs_param___CSEQ_atomic_exchange_previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[871, 872]'  
         occurs '[871, 872]'  
      id235  '__cs_param___CSEQ_atomic_exchange_new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[872]'  
      id236  '__cs_param___CSEQ_atomic_exchange_memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id237  '__cs_local___CSEQ_atomic_exchange_old'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[871, 873]'  
   __atomic_exchange_n
      id238  '__cs_param___atomic_exchange_n_previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[878]'  
      id239  '__cs_param___atomic_exchange_n_new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[878]'  
      id240  '__cs_param___atomic_exchange_n_memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[878]'  
      id241  '__cs_local___atomic_exchange_n_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[878, 879]'  
   __atomic_thread_fence
      id242  '__cs_param___atomic_thread_fence_i'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   init
   insert
      id246  '__cs_param_insert_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[901]'  
      id247  '__cs_param_insert_id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[899]'  
      id248  '__cs_local_insert_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[899, 900, 901]'  
         occurs '[898, 899, 900, 900, 901]'  
   delete
      id249  '__cs_param_delete_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id250  '__cs_local_delete_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[908]'  
         deref '[916]'  
         occurs '[908, 916]'  
      id251  '__cs_local_delete_temp_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[918, 919]'  
         occurs '[916, 918, 919]'  
      id252  '__cs_local_delete_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[908, 911, 914, 920]'  
      id253  '__cs_local_delete___cs_tmp_if_cond_19'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[911, 912]'  
      id254  '__cs_local_delete_id_popped'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[918]'  
   contains
      id255  '__cs_param_contains_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[939, 961]'  
      id256  '__cs_param_contains_id'  
         type 'unsigned long long int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[950]'  
      id257  '__cs_local_contains_max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[925, 935]'  
      id258  '__cs_local_contains_actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[927, 947, 950, 955, 955, 959]'  
      id259  '__cs_local_contains_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[929, 937, 939, 942]'  
      id260  '__cs_local_contains_found'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[931, 937, 953, 964]'  
      id261  '__cs_local_contains_dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[933]'  
      id262  '__cs_local_contains_datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[950, 961]'  
         occurs '[935, 947, 950, 961]'  
      id263  '__cs_local_contains_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[939]'  
         deref '[947]'  
         occurs '[939, 947]'  
      id264  '__cs_local_contains___cs_tmp_if_cond_20'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[942, 943]'  
      id265  '__cs_local_contains___cs_tmp_if_cond_21'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[950, 951]'  
      id266  '__cs_local_contains_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[958, 959, 961, 962]'  
   get_size
      id267  '__cs_param_get_size_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[981, 995]'  
      id268  '__cs_local_get_size_max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[969, 977]'  
      id269  '__cs_local_get_size_actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[971, 979, 989, 989, 993, 998]'  
      id270  '__cs_local_get_size_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[973, 981, 984]'  
      id271  '__cs_local_get_size_dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[975]'  
      id272  '__cs_local_get_size_datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[995]'  
         occurs '[977, 995]'  
      id273  '__cs_local_get_size_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[981]'  
         deref '[]'  
         occurs '[981]'  
      id274  '__cs_local_get_size___cs_tmp_if_cond_22'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[984, 985]'  
      id275  '__cs_local_get_size_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[992, 993, 995, 996]'  
   is_empty
      id276  '__cs_param_is_empty_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1004, 1010]'  
      id277  '__cs_local_is_empty_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1004]'  
         deref '[]'  
         occurs '[1004, 1010]'  
      id278  '__cs_local_is_empty_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1004, 1007]'  
      id279  '__cs_local_is_empty___cs_tmp_if_cond_23'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1007, 1008]'  
   push
      id283  '__cs_param_push___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id284  '__cs_local_push_loop'  
         type 'int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id285  '__cs_local_push___cs_tmp_if_cond_24'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1023, 1024]'  
      id286  '__cs_local_push___cs_tmp_if_cond_25'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1032, 1033]'  
   pop
      id287  '__cs_param_pop___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id288  '__cs_local_pop_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id289  '__cs_local_pop_count'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1043]'  
      id290  '__cs_local_pop_loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id291  '__cs_local_pop___cs_tmp_if_cond_26'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1047, 1048]'  
      id292  '__cs_local_pop___cs_tmp_if_cond_27'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1056, 1057]'  
   main
      id293  '__cs_local_main_t1'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1077]'  
         deref '[]'  
         occurs '[1077, 1079]'  
      id294  '__cs_local_main_t2'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id295  '__cs_local_main_t3'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id296  '__cs_local_main_t4'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id297  '__cs_local_main_t5'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id298  '__cs_local_main_t6'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1078]'  
         deref '[]'  
         occurs '[1078, 1080]'  
      id299  '__cs_local_main_t7'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id300  '__cs_local_main_t8'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id301  '__cs_local_main_t9'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id302  '__cs_local_main_t10'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id303  '__cs_local_main_size_ss'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1082]'  

Fields:
   lfds711_prng_state
      id2  'entropy'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_prng_st_state
      id3  'entropy'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_backoff_state
      id8  'lock'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id9  'backoff_iteration_frequency_counters'  type 'lfds711_pal_uint_t'  kind 'f'  arity '1'  size '[2]'  
      id10  'metric'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id11  'total_operations'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_globals
      id12  'ps'  type 'struct lfds711_prng_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_validation_info
      id13  'min_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id14  'max_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_btree_au_element
      id20  'left'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id21  'right'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id22  'up'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id23  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id24  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_btree_au_state
      id25  'root'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id26  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id27  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id28  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id29  'existing_key'  type 'enum lfds711_btree_au_existing_key'  kind 'f'  arity '0'  size '[]'  
      id30  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id31  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_element
      id42  'next'  type 'struct lfds711_freelist_element *'  kind 'f'  arity '0'  size '[]'  
      id43  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id44  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_state
      id45  'top'  type 'struct lfds711_freelist_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id46  'elimination_array_size_in_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id47  'elimination_array'  type 'struct lfds711_freelist_element * volatile (*)'  kind 'f'  arity '1'  size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
      id48  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id49  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id50  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_element
      id55  'baue'  type 'struct lfds711_btree_au_element'  kind 'f'  arity '0'  size '[]'  
      id56  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id57  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_iterate
      id58  'baue'  type 'struct lfds711_btree_au_element *'  kind 'f'  arity '0'  size '[]'  
      id59  'baus'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id60  'baus_end'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_state
      id61  'existing_key'  type 'enum lfds711_hash_a_existing_key'  kind 'f'  arity '0'  size '[]'  
      id62  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id63  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id64  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id65  'array_size'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id66  'baus_array'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id67  '__cs_param__has'  type 'struct lfds711_hash_a_state *'  kind 'f'  arity '0'  size '[]'  
      id68  '__cs_param__hae'  type 'struct lfds711_hash_a_element *'  kind 'f'  arity '0'  size '[]'  
      id69  'element_cleanup_callback'  type 'void (*)(struct lfds711_hash_a_state *__cs_param__has, struct lfds711_hash_a_element *__cs_param__hae)'  kind 'f'  arity '0'  size '[]'  
      id70  '__cs_param__key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id71  '__cs_param__hash'  type 'lfds711_pal_uint_t *'  kind 'f'  arity '0'  size '[]'  
      id72  'key_hash_function'  type 'void (*)(const void *__cs_param__key, lfds711_pal_uint_t *__cs_param__hash)'  kind 'f'  arity '0'  size '[]'  
      id73  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_element
      id82  'next'  type 'struct lfds711_list_aso_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id83  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id84  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_state
      id85  'dummy_element'  type 'struct lfds711_list_aso_element'  kind 'f'  arity '0'  size '[]'  
      id86  'start'  type 'struct lfds711_list_aso_element *'  kind 'f'  arity '0'  size '[]'  
      id87  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id88  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id89  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id90  'existing_key'  type 'enum lfds711_list_aso_existing_key'  kind 'f'  arity '0'  size '[]'  
      id91  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id92  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_element
      id96  'next'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id97  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id98  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_state
      id99  'dummy_element'  type 'struct lfds711_list_asu_element'  kind 'f'  arity '0'  size '[]'  
      id100  'end'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id101  'start'  type 'struct lfds711_list_asu_element *'  kind 'f'  arity '0'  size '[]'  
      id102  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id103  'after_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id104  'end_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id105  'start_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_element
      id110  'sequence_number'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id111  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id112  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_state
      id113  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id114  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id115  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id116  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id117  'element_array'  type 'struct lfds711_queue_bmm_element *'  kind 'f'  arity '0'  size '[]'  
      id118  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id119  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id120  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_element
      id125  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id126  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_state
      id127  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id128  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id129  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id130  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id131  'element_array'  type 'struct lfds711_queue_bss_element *'  kind 'f'  arity '0'  size '[]'  
      id132  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_element
      id134  'next'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id135  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id136  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_state
      id137  'enqueue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id138  'dequeue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id139  'aba_counter'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id140  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id141  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id142  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_element
      id146  'fe'  type 'struct lfds711_freelist_element'  kind 'f'  arity '0'  size '[]'  
      id147  'qumme'  type 'struct lfds711_queue_umm_element'  kind 'f'  arity '0'  size '[]'  
      id148  'qumme_use'  type 'struct lfds711_queue_umm_element *'  kind 'f'  arity '0'  size '[]'  
      id149  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id150  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_state
      id151  'fs'  type 'struct lfds711_freelist_state'  kind 'f'  arity '0'  size '[]'  
      id152  'qumms'  type 'struct lfds711_queue_umm_state'  kind 'f'  arity '0'  size '[]'  
      id153  '__cs_param__rs'  type 'struct lfds711_ringbuffer_state *'  kind 'f'  arity '0'  size '[]'  
      id154  '__cs_param__key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id155  '__cs_param__value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id156  '__cs_param__unread_flag'  type 'enum lfds711_misc_flag'  kind 'f'  arity '0'  size '[]'  
      id157  'element_cleanup_callback'  type 'void (*)(struct lfds711_ringbuffer_state *__cs_param__rs, void *__cs_param__key, void *__cs_param__value, enum lfds711_misc_flag __cs_param__unread_flag)'  kind 'f'  arity '0'  size '[]'  
      id158  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_element
      id165  'next'  type 'struct lfds711_stack_element *'  kind 'f'  arity '0'  size '[]'  
      id166  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id167  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_state
      id168  'top'  type 'struct lfds711_stack_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id169  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id170  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id171  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   test_data
      id244  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id245  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  

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
   assert_create
       var '__cs_param_assert_create_ss'   type 'void *'   kind 'p'   arity '0'   size '[]'   
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
   push
       var '__cs_param_push___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   pop
       var '__cs_param_pop___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   main

Function blocks:
function 'assert_create' ----------------------------------:
void assert_create(void *__cs_param_assert_create_ss, int __cs_param_assert_create_size)
{
    __CSEQ_assert(0);
}


void *__cs_param_assert_create_ss, int __cs_param_assert_create_size
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
    __cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res == 0;
    if (__cs_local_delete___cs_tmp_if_cond_19)
    {
        return __cs_local_delete_res;
    }

    __cs_local_delete_temp_td = (*__cs_local_delete_se).value;
    int __cs_local_delete_id_popped;
    __cs_local_delete_id_popped = (*__cs_local_delete_temp_td).user_id;
    printf("%llu\n", (*__cs_local_delete_temp_td).user_id);
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
    while (__cs_local_get_size_actual_size < 2)
    {
        __cs_local_get_size_res = lfds711_stack_pop(__cs_param_get_size_s, &__cs_local_get_size_se);
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
        fds711_stack_push(__cs_param_is_empty_s, __cs_local_is_empty_se);
        return 0;
    }

    return 1;
}


struct lfds711_stack_state *__cs_param_is_empty_s
int
function 'push' ----------------------------------:
void *push(void *__cs_param_push___cs_unused)
{
    int long long unsigned __cs_local_push_loop;
    ;
    _Bool __cs_local_push___cs_tmp_if_cond_24;
    __cs_local_push___cs_tmp_if_cond_24 = ATOMIC_OPERATION;
    if (__cs_local_push___cs_tmp_if_cond_24)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    insert(ss, 1500);
    ;
    _Bool __cs_local_push___cs_tmp_if_cond_25;
    __cs_local_push___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
    if (__cs_local_push___cs_tmp_if_cond_25)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
}


void *__cs_param_push___cs_unused
void *
function 'pop' ----------------------------------:
void *pop(void *__cs_param_pop___cs_unused)
{
    int __cs_local_pop_res;
    int __cs_local_pop_count;
    __cs_local_pop_count = 0;
    int __cs_local_pop_loop;
    ;
    _Bool __cs_local_pop___cs_tmp_if_cond_26;
    __cs_local_pop___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
    if (__cs_local_pop___cs_tmp_if_cond_26)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    delete(ss);
    ;
    _Bool __cs_local_pop___cs_tmp_if_cond_27;
    __cs_local_pop___cs_tmp_if_cond_27 = ATOMIC_OPERATION;
    if (__cs_local_pop___cs_tmp_if_cond_27)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
}


void *__cs_param_pop___cs_unused
void *
function 'main' ----------------------------------:
int main()
{
    __cs_mutex_init(&lock, 0);
    ss = init();
    __cs_t __cs_local_main_t1;
    __cs_t __cs_local_main_t2;
    __cs_t __cs_local_main_t3;
    __cs_t __cs_local_main_t4;
    __cs_t __cs_local_main_t5;
    __cs_t __cs_local_main_t6;
    __cs_t __cs_local_main_t7;
    __cs_t __cs_local_main_t8;
    __cs_t __cs_local_main_t9;
    __cs_t __cs_local_main_t10;
    __cs_create(&__cs_local_main_t1, 0, push, 0);
    __cs_create(&__cs_local_main_t6, 0, pop, 0);
    __cs_join(__cs_local_main_t1, 0);
    __cs_join(__cs_local_main_t6, 0);
    int __cs_local_main_size_ss;
    __cs_local_main_size_ss = get_size(ss);
    __CSEQ_assert(0);
    return 0;
}



int
Last statement, by function:
function: assert_create   stmt:     __CSEQ_assert(0);

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

function: push   stmt:     ;

function: pop   stmt:     ;

function: main   stmt:     return 0;


All symbols (new symbol table - work in progress):
   (0, 'assert_create')  
   (1, '__cs_param_assert_create_ss')  
   (2, '__cs_param_assert_create_size')  
   (3, 'entropy')  
   (4, 'entropy')  
   (5, 'lfds711_prng_init_valid_on_current_logical_core')  
   (6, '__cs_param__ps')  
   (7, '__cs_param__seed')  
   (8, 'lfds711_prng_st_init')  
   (9, '__cs_param__psts')  
   (10, '__cs_param__seed')  
   (11, 'lock')  
   (12, 'backoff_iteration_frequency_counters')  
   (13, 'metric')  
   (14, 'total_operations')  
   (15, 'ps')  
   (16, 'min_elements')  
   (17, 'max_elements')  
   (18, 'lfds711_misc_globals')  
   (19, 'lfds711_misc_force_store')  
   (20, 'lfds711_misc_query')  
   (21, '__cs_param__query_type')  
   (22, '__cs_param__query_input')  
   (23, '__cs_param__query_output')  
   (24, 'lfds711_misc_force_store')  
   (25, '__cs_local_lfds711_misc_force_store_destination')  
   (26, 'left')  
   (27, 'right')  
   (28, 'up')  
   (29, 'value')  
   (30, 'key')  
   (31, 'root')  
   (32, 'key_compare_function')  
   (33, '__cs_param__new_key')  
   (34, '__cs_param__existing_key')  
   (35, 'existing_key')  
   (36, 'user_state')  
   (37, 'insert_backoff')  
   (38, 'lfds711_btree_au_init_valid_on_current_logical_core')  
   (39, '__cs_param__baus')  
   (40, '__cs_param__key_compare_function')  
   (41, 'new_key')  
   (42, 'existing_key')  
   (43, '__cs_param__existing_key')  
   (44, '__cs_param__user_state')  
   (45, 'lfds711_btree_au_cleanup')  
   (46, '__cs_param__baus')  
   (47, '__cs_param__element_cleanup_callback')  
   (48, 'baus')  
   (49, 'baue')  
   (50, 'lfds711_btree_au_insert')  
   (51, '__cs_param__baus')  
   (52, '__cs_param__baue')  
   (53, '__cs_param__existing_baue')  
   (54, 'lfds711_btree_au_get_by_key')  
   (55, '__cs_param__baus')  
   (56, '__cs_param__key_compare_function')  
   (57, 'new_key')  
   (58, 'existing_key')  
   (59, '__cs_param__key')  
   (60, '__cs_param__baue')  
   (61, 'lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position')  
   (62, '__cs_param__baus')  
   (63, '__cs_param__baue')  
   (64, '__cs_param__absolute_position')  
   (65, '__cs_param__relative_position')  
   (66, 'lfds711_btree_au_get_by_absolute_position')  
   (67, '__cs_param__baus')  
   (68, '__cs_param__baue')  
   (69, '__cs_param__absolute_position')  
   (70, 'lfds711_btree_au_get_by_relative_position')  
   (71, '__cs_param__baue')  
   (72, '__cs_param__relative_position')  
   (73, 'lfds711_btree_au_query')  
   (74, '__cs_param__baus')  
   (75, '__cs_param__query_type')  
   (76, '__cs_param__query_input')  
   (77, '__cs_param__query_output')  
   (78, 'next')  
   (79, 'key')  
   (80, 'value')  
   (81, 'top')  
   (82, 'elimination_array_size_in_elements')  
   (83, 'elimination_array')  
   (84, 'user_state')  
   (85, 'pop_backoff')  
   (86, 'push_backoff')  
   (87, 'lfds711_freelist_init_valid_on_current_logical_core')  
   (88, '__cs_param__fs')  
   (89, '__cs_param__elimination_array')  
   (90, '__cs_param__elimination_array_size_in_elements')  
   (91, '__cs_param__user_state')  
   (92, 'lfds711_freelist_cleanup')  
   (93, '__cs_param__fs')  
   (94, '__cs_param__element_cleanup_callback')  
   (95, 'fs')  
   (96, 'fe')  
   (97, 'lfds711_freelist_push')  
   (98, '__cs_param__fs')  
   (99, '__cs_param__fe')  
   (100, '__cs_param__psts')  
   (101, 'lfds711_freelist_pop')  
   (102, '__cs_param__fs')  
   (103, '__cs_param__fe')  
   (104, '__cs_param__psts')  
   (105, 'lfds711_freelist_query')  
   (106, '__cs_param__fs')  
   (107, '__cs_param__query_type')  
   (108, '__cs_param__query_input')  
   (109, '__cs_param__query_output')  
   (110, 'baue')  
   (111, 'key')  
   (112, 'value')  
   (113, 'baue')  
   (114, 'baus')  
   (115, 'baus_end')  
   (116, 'existing_key')  
   (117, 'key_compare_function')  
   (118, '__cs_param__new_key')  
   (119, '__cs_param__existing_key')  
   (120, 'array_size')  
   (121, 'baus_array')  
   (122, 'element_cleanup_callback')  
   (123, '__cs_param__has')  
   (124, '__cs_param__hae')  
   (125, 'key_hash_function')  
   (126, '__cs_param__key')  
   (127, '__cs_param__hash')  
   (128, 'user_state')  
   (129, 'lfds711_hash_a_init_valid_on_current_logical_core')  
   (130, '__cs_param__has')  
   (131, '__cs_param__baus_array')  
   (132, '__cs_param__array_size')  
   (133, '__cs_param__key_compare_function')  
   (134, 'new_key')  
   (135, 'existing_key')  
   (136, '__cs_param__key_hash_function')  
   (137, 'key')  
   (138, 'hash')  
   (139, '__cs_param__existing_key')  
   (140, '__cs_param__user_state')  
   (141, 'lfds711_hash_a_cleanup')  
   (142, '__cs_param__has')  
   (143, '__cs_param__element_cleanup_function')  
   (144, 'has')  
   (145, 'hae')  
   (146, 'lfds711_hash_a_insert')  
   (147, '__cs_param__has')  
   (148, '__cs_param__hae')  
   (149, '__cs_param__existing_hae')  
   (150, 'lfds711_hash_a_get_by_key')  
   (151, '__cs_param__has')  
   (152, '__cs_param__key_compare_function')  
   (153, 'new_key')  
   (154, 'existing_key')  
   (155, '__cs_param__key_hash_function')  
   (156, 'key')  
   (157, 'hash')  
   (158, '__cs_param__key')  
   (159, '__cs_param__hae')  
   (160, 'lfds711_hash_a_iterate_init')  
   (161, '__cs_param__has')  
   (162, '__cs_param__hai')  
   (163, 'lfds711_hash_a_iterate')  
   (164, '__cs_param__hai')  
   (165, '__cs_param__hae')  
   (166, 'lfds711_hash_a_query')  
   (167, '__cs_param__has')  
   (168, '__cs_param__query_type')  
   (169, '__cs_param__query_input')  
   (170, '__cs_param__query_output')  
   (171, 'next')  
   (172, 'value')  
   (173, 'key')  
   (174, 'dummy_element')  
   (175, 'start')  
   (176, 'key_compare_function')  
   (177, '__cs_param__new_key')  
   (178, '__cs_param__existing_key')  
   (179, 'existing_key')  
   (180, 'user_state')  
   (181, 'insert_backoff')  
   (182, 'lfds711_list_aso_init_valid_on_current_logical_core')  
   (183, '__cs_param__lasos')  
   (184, '__cs_param__key_compare_function')  
   (185, 'new_key')  
   (186, 'existing_key')  
   (187, '__cs_param__existing_key')  
   (188, '__cs_param__user_state')  
   (189, 'lfds711_list_aso_cleanup')  
   (190, '__cs_param__lasos')  
   (191, '__cs_param__element_cleanup_callback')  
   (192, 'lasos')  
   (193, 'lasoe')  
   (194, 'lfds711_list_aso_insert')  
   (195, '__cs_param__lasos')  
   (196, '__cs_param__lasoe')  
   (197, '__cs_param__existing_lasoe')  
   (198, 'lfds711_list_aso_get_by_key')  
   (199, '__cs_param__lasos')  
   (200, '__cs_param__key')  
   (201, '__cs_param__lasoe')  
   (202, 'lfds711_list_aso_query')  
   (203, '__cs_param__lasos')  
   (204, '__cs_param__query_type')  
   (205, '__cs_param__query_input')  
   (206, '__cs_param__query_output')  
   (207, 'next')  
   (208, 'value')  
   (209, 'key')  
   (210, 'dummy_element')  
   (211, 'end')  
   (212, 'start')  
   (213, 'user_state')  
   (214, 'after_backoff')  
   (215, 'end_backoff')  
   (216, 'start_backoff')  
   (217, 'lfds711_list_asu_init_valid_on_current_logical_core')  
   (218, '__cs_param__lasus')  
   (219, '__cs_param__user_state')  
   (220, 'lfds711_list_asu_cleanup')  
   (221, '__cs_param__lasus')  
   (222, '__cs_param__element_cleanup_callback')  
   (223, 'lasus')  
   (224, 'lasue')  
   (225, 'lfds711_list_asu_insert_at_position')  
   (226, '__cs_param__lasus')  
   (227, '__cs_param__lasue')  
   (228, '__cs_param__lasue_predecessor')  
   (229, '__cs_param__position')  
   (230, 'lfds711_list_asu_insert_at_start')  
   (231, '__cs_param__lasus')  
   (232, '__cs_param__lasue')  
   (233, 'lfds711_list_asu_insert_at_end')  
   (234, '__cs_param__lasus')  
   (235, '__cs_param__lasue')  
   (236, 'lfds711_list_asu_insert_after_element')  
   (237, '__cs_param__lasus')  
   (238, '__cs_param__lasue')  
   (239, '__cs_param__lasue_predecessor')  
   (240, 'lfds711_list_asu_get_by_key')  
   (241, '__cs_param__lasus')  
   (242, '__cs_param__key_compare_function')  
   (243, 'new_key')  
   (244, 'existing_key')  
   (245, '__cs_param__key')  
   (246, '__cs_param__lasue')  
   (247, 'lfds711_list_asu_query')  
   (248, '__cs_param__lasus')  
   (249, '__cs_param__query_type')  
   (250, '__cs_param__query_input')  
   (251, '__cs_param__query_output')  
   (252, 'sequence_number')  
   (253, 'key')  
   (254, 'value')  
   (255, 'number_elements')  
   (256, 'mask')  
   (257, 'read_index')  
   (258, 'write_index')  
   (259, 'element_array')  
   (260, 'user_state')  
   (261, 'dequeue_backoff')  
   (262, 'enqueue_backoff')  
   (263, 'lfds711_queue_bmm_init_valid_on_current_logical_core')  
   (264, '__cs_param__qbmms')  
   (265, '__cs_param__element_array')  
   (266, '__cs_param__number_elements')  
   (267, '__cs_param__user_state')  
   (268, 'lfds711_queue_bmm_cleanup')  
   (269, '__cs_param__qbmms')  
   (270, '__cs_param__element_cleanup_callback')  
   (271, 'qbmms')  
   (272, 'key')  
   (273, 'value')  
   (274, 'lfds711_queue_bmm_enqueue')  
   (275, '__cs_param__qbmms')  
   (276, '__cs_param__key')  
   (277, '__cs_param__value')  
   (278, 'lfds711_queue_bmm_dequeue')  
   (279, '__cs_param__qbmms')  
   (280, '__cs_param__key')  
   (281, '__cs_param__value')  
   (282, 'lfds711_queue_bmm_query')  
   (283, '__cs_param__qbmms')  
   (284, '__cs_param__query_type')  
   (285, '__cs_param__query_input')  
   (286, '__cs_param__query_output')  
   (287, 'key')  
   (288, 'value')  
   (289, 'number_elements')  
   (290, 'mask')  
   (291, 'read_index')  
   (292, 'write_index')  
   (293, 'element_array')  
   (294, 'user_state')  
   (295, 'lfds711_queue_bss_init_valid_on_current_logical_core')  
   (296, '__cs_param__qbsss')  
   (297, '__cs_param__element_array')  
   (298, '__cs_param__number_elements')  
   (299, '__cs_param__user_state')  
   (300, 'lfds711_queue_bss_cleanup')  
   (301, '__cs_param__qbsss')  
   (302, '__cs_param__element_cleanup_callback')  
   (303, 'qbsss')  
   (304, 'key')  
   (305, 'value')  
   (306, 'lfds711_queue_bss_enqueue')  
   (307, '__cs_param__qbsss')  
   (308, '__cs_param__key')  
   (309, '__cs_param__value')  
   (310, 'lfds711_queue_bss_dequeue')  
   (311, '__cs_param__qbsss')  
   (312, '__cs_param__key')  
   (313, '__cs_param__value')  
   (314, 'lfds711_queue_bss_query')  
   (315, '__cs_param__qbsss')  
   (316, '__cs_param__query_type')  
   (317, '__cs_param__query_input')  
   (318, '__cs_param__query_output')  
   (319, 'next')  
   (320, 'key')  
   (321, 'value')  
   (322, 'enqueue')  
   (323, 'dequeue')  
   (324, 'aba_counter')  
   (325, 'user_state')  
   (326, 'dequeue_backoff')  
   (327, 'enqueue_backoff')  
   (328, 'lfds711_queue_umm_init_valid_on_current_logical_core')  
   (329, '__cs_param__qumms')  
   (330, '__cs_param__qumme_dummy')  
   (331, '__cs_param__user_state')  
   (332, 'lfds711_queue_umm_cleanup')  
   (333, '__cs_param__qumms')  
   (334, '__cs_param__element_cleanup_callback')  
   (335, 'qumms')  
   (336, 'qumme')  
   (337, 'dummy_element_flag')  
   (338, 'lfds711_queue_umm_enqueue')  
   (339, '__cs_param__qumms')  
   (340, '__cs_param__qumme')  
   (341, 'lfds711_queue_umm_dequeue')  
   (342, '__cs_param__qumms')  
   (343, '__cs_param__qumme')  
   (344, 'lfds711_queue_umm_query')  
   (345, '__cs_param__qumms')  
   (346, '__cs_param__query_type')  
   (347, '__cs_param__query_input')  
   (348, '__cs_param__query_output')  
   (349, 'fe')  
   (350, 'qumme')  
   (351, 'qumme_use')  
   (352, 'key')  
   (353, 'value')  
   (354, 'fs')  
   (355, 'qumms')  
   (356, 'element_cleanup_callback')  
   (357, '__cs_param__rs')  
   (358, '__cs_param__key')  
   (359, '__cs_param__value')  
   (360, '__cs_param__unread_flag')  
   (361, 'user_state')  
   (362, 'lfds711_ringbuffer_init_valid_on_current_logical_core')  
   (363, '__cs_param__rs')  
   (364, '__cs_param__re_array_inc_dummy')  
   (365, '__cs_param__number_elements_inc_dummy')  
   (366, '__cs_param__user_state')  
   (367, 'lfds711_ringbuffer_cleanup')  
   (368, '__cs_param__rs')  
   (369, '__cs_param__element_cleanup_callback')  
   (370, 'rs')  
   (371, 'key')  
   (372, 'value')  
   (373, 'unread_flag')  
   (374, 'lfds711_ringbuffer_read')  
   (375, '__cs_param__rs')  
   (376, '__cs_param__key')  
   (377, '__cs_param__value')  
   (378, 'lfds711_ringbuffer_write')  
   (379, '__cs_param__rs')  
   (380, '__cs_param__key')  
   (381, '__cs_param__value')  
   (382, '__cs_param__overwrite_occurred_flag')  
   (383, '__cs_param__overwritten_key')  
   (384, '__cs_param__overwritten_value')  
   (385, 'lfds711_ringbuffer_query')  
   (386, '__cs_param__rs')  
   (387, '__cs_param__query_type')  
   (388, '__cs_param__query_input')  
   (389, '__cs_param__query_output')  
   (390, 'next')  
   (391, 'key')  
   (392, 'value')  
   (393, 'top')  
   (394, 'user_state')  
   (395, 'pop_backoff')  
   (396, 'push_backoff')  
   (397, 'lfds711_stack_init_valid_on_current_logical_core')  
   (398, '__cs_param__ss')  
   (399, '__cs_param__user_state')  
   (400, 'lfds711_stack_cleanup')  
   (401, '__cs_param__ss')  
   (402, '__cs_param__element_cleanup_callback')  
   (403, 'ss')  
   (404, 'se')  
   (405, 'lfds711_stack_push')  
   (406, '__cs_param__ss')  
   (407, '__cs_param__se')  
   (408, 'lfds711_stack_pop')  
   (409, '__cs_param__ss')  
   (410, '__cs_param__se')  
   (411, 'lfds711_stack_query')  
   (412, '__cs_param__ss')  
   (413, '__cs_param__query_type')  
   (414, '__cs_param__query_input')  
   (415, '__cs_param__query_output')  
   (416, 'lfds711_misc_internal_backoff_init')  
   (417, '__cs_param__bs')  
   (418, 'library_lock')  
   (419, 'exponential_backoff')  
   (420, '__cs_local_exponential_backoff_loop')  
   (421, '__CSEQ_atomic_swap_stack_top')  
   (422, '__cs_param___CSEQ_atomic_swap_stack_top_top')  
   (423, '__cs_param___CSEQ_atomic_swap_stack_top_oldtop')  
   (424, '__cs_param___CSEQ_atomic_swap_stack_top_newtop')  
   (425, '__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0')  
   (426, 'lfds711_misc_internal_backoff_init')  
   (427, '__cs_param_lfds711_misc_internal_backoff_init_bs')  
   (428, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1')  
   (429, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (430, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2')  
   (431, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (432, 'lfds711_stack_init_valid_on_current_logical_core')  
   (433, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss')  
   (434, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state')  
   (435, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3')  
   (436, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (437, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4')  
   (438, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (439, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5')  
   (440, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (441, 'lfds711_stack_pop')  
   (442, '__cs_param_lfds711_stack_pop_ss')  
   (443, '__cs_param_lfds711_stack_pop_se')  
   (444, '__cs_local_lfds711_stack_pop_result')  
   (445, '__cs_local_lfds711_stack_pop_backoff_iteration')  
   (446, '__cs_local_lfds711_stack_pop_new_top')  
   (447, '__cs_local_lfds711_stack_pop_original_top')  
   (448, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6')  
   (449, '__cs_local_lfds711_stack_pop_c')  
   (450, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7')  
   (451, '__cs_local_lfds711_stack_pop_c')  
   (452, '__cs_local_lfds711_stack_pop_i')  
   (453, '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1')  
   (454, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8')  
   (455, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9')  
   (456, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10')  
   (457, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (458, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (459, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (460, 'lfds711_stack_push')  
   (461, '__cs_param_lfds711_stack_push_ss')  
   (462, '__cs_param_lfds711_stack_push_se')  
   (463, '__cs_local_lfds711_stack_push_result')  
   (464, '__cs_local_lfds711_stack_push_backoff_iteration')  
   (465, '__cs_local_lfds711_stack_push_new_top')  
   (466, '__cs_local_lfds711_stack_push_original_top')  
   (467, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14')  
   (468, '__cs_local_lfds711_stack_push_c')  
   (469, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15')  
   (470, '__cs_local_lfds711_stack_push_c')  
   (471, '__cs_local_lfds711_stack_push_i')  
   (472, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (473, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (474, '__CSEQ_atomic_compare_and_exchange')  
   (475, '__cs_param___CSEQ_atomic_compare_and_exchange_mptr')  
   (476, '__cs_param___CSEQ_atomic_compare_and_exchange_eptr')  
   (477, '__cs_param___CSEQ_atomic_compare_and_exchange_newval')  
   (478, '__cs_param___CSEQ_atomic_compare_and_exchange_weak_p')  
   (479, '__cs_param___CSEQ_atomic_compare_and_exchange_sm')  
   (480, '__cs_param___CSEQ_atomic_compare_and_exchange_fm')  
   (481, '__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18')  
   (482, '__atomic_compare_exchange_n')  
   (483, '__cs_param___atomic_compare_exchange_n_mptr')  
   (484, '__cs_param___atomic_compare_exchange_n_eptr')  
   (485, '__cs_param___atomic_compare_exchange_n_newval')  
   (486, '__cs_param___atomic_compare_exchange_n_weak_p')  
   (487, '__cs_param___atomic_compare_exchange_n_sm')  
   (488, '__cs_param___atomic_compare_exchange_n_fm')  
   (489, '__cs_local___atomic_compare_exchange_n_res')  
   (490, '__CSEQ_atomic_exchange')  
   (491, '__cs_param___CSEQ_atomic_exchange_previous')  
   (492, '__cs_param___CSEQ_atomic_exchange_new')  
   (493, '__cs_param___CSEQ_atomic_exchange_memorder')  
   (494, '__cs_local___CSEQ_atomic_exchange_old')  
   (495, '__atomic_exchange_n')  
   (496, '__cs_param___atomic_exchange_n_previous')  
   (497, '__cs_param___atomic_exchange_n_new')  
   (498, '__cs_param___atomic_exchange_n_memorder')  
   (499, '__cs_local___atomic_exchange_n_res')  
   (500, '__atomic_thread_fence')  
   (501, '__cs_param___atomic_thread_fence_i')  
   (502, 'mystack')  
   (503, 'se')  
   (504, 'user_id')  
   (505, 'init')  
   (506, 'insert')  
   (507, '__cs_param_insert_s')  
   (508, '__cs_param_insert_id')  
   (509, '__cs_local_insert_td')  
   (510, 'delete')  
   (511, '__cs_param_delete_s')  
   (512, '__cs_local_delete_se')  
   (513, '__cs_local_delete_temp_td')  
   (514, '__cs_local_delete_res')  
   (515, '__cs_local_delete___cs_tmp_if_cond_19')  
   (516, '__cs_local_delete_id_popped')  
   (517, 'contains')  
   (518, '__cs_param_contains_s')  
   (519, '__cs_param_contains_id')  
   (520, '__cs_local_contains_max_size')  
   (521, '__cs_local_contains_actual_size')  
   (522, '__cs_local_contains_res')  
   (523, '__cs_local_contains_found')  
   (524, '__cs_local_contains_dimension')  
   (525, '__cs_local_contains_datas')  
   (526, '__cs_local_contains_se')  
   (527, '__cs_local_contains___cs_tmp_if_cond_20')  
   (528, '__cs_local_contains___cs_tmp_if_cond_21')  
   (529, '__cs_local_contains_i')  
   (530, 'get_size')  
   (531, '__cs_param_get_size_s')  
   (532, '__cs_local_get_size_max_size')  
   (533, '__cs_local_get_size_actual_size')  
   (534, '__cs_local_get_size_res')  
   (535, '__cs_local_get_size_dimension')  
   (536, '__cs_local_get_size_datas')  
   (537, '__cs_local_get_size_se')  
   (538, '__cs_local_get_size___cs_tmp_if_cond_22')  
   (539, '__cs_local_get_size_i')  
   (540, 'is_empty')  
   (541, '__cs_param_is_empty_s')  
   (542, '__cs_local_is_empty_se')  
   (543, '__cs_local_is_empty_res')  
   (544, '__cs_local_is_empty___cs_tmp_if_cond_23')  
   (545, 'ATOMIC_OPERATION')  
   (546, 'ss')  
   (547, 'lock')  
   (548, 'push')  
   (549, '__cs_param_push___cs_unused')  
   (550, '__cs_local_push_loop')  
   (551, '__cs_local_push___cs_tmp_if_cond_24')  
   (552, '__cs_local_push___cs_tmp_if_cond_25')  
   (553, 'pop')  
   (554, '__cs_param_pop___cs_unused')  
   (555, '__cs_local_pop_res')  
   (556, '__cs_local_pop_count')  
   (557, '__cs_local_pop_loop')  
   (558, '__cs_local_pop___cs_tmp_if_cond_26')  
   (559, '__cs_local_pop___cs_tmp_if_cond_27')  
   (560, 'main')  
   (561, '__cs_local_main_t1')  
   (562, '__cs_local_main_t2')  
   (563, '__cs_local_main_t3')  
   (564, '__cs_local_main_t4')  
   (565, '__cs_local_main_t5')  
   (566, '__cs_local_main_t6')  
   (567, '__cs_local_main_t7')  
   (568, '__cs_local_main_t8')  
   (569, '__cs_local_main_t9')  
   (570, '__cs_local_main_t10')  
   (571, '__cs_local_main_size_ss')  
