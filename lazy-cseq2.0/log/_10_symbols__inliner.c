list of functions:
   check(param: __cs_param_check_ss)  call count 0
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
   insert(param: __cs_param_insert_s, __cs_param_insert_id)  call count 1
   delete(param: __cs_param_delete_s)  call count 1
   contains(param: __cs_param_contains_s, __cs_param_contains_id)  call count 0
   get_size(param: __cs_param_get_size_s)  call count 0
   is_empty(param: __cs_param_is_empty_s)  call count 1
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
      id3  '__cs_param__ps'  
         type 'struct lfds711_prng_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id4  '__cs_param__seed'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id5  '__cs_param__psts'  
         type 'struct lfds711_prng_st_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id6  'None'  
         type 'enum lfds711_stack_query {LFDS711_STACK_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_STACK_QUERY_SINGLETHREADED_VALIDATE}'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id14  'lfds711_misc_globals'  
         type 'struct lfds711_misc_globals'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id15  '__cs_param__query_type'  
         type 'enum lfds711_stack_query'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id16  '__cs_param__query_input'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id17  '__cs_param__query_output'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id31  '__cs_param__baus'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id32  '__cs_param__key_compare_function'  
         type 'int (*)(const void, const void)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id33  '__cs_param__existing_key'  
         type 'enum lfds711_list_aso_existing_key'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id34  '__cs_param__user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id35  '__cs_param__element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id36  '__cs_param__baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id37  '__cs_param__existing_baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id38  '__cs_param__key'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id39  '__cs_param__absolute_position'  
         type 'enum lfds711_btree_au_absolute_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id40  '__cs_param__relative_position'  
         type 'enum lfds711_btree_au_relative_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id50  '__cs_param__fs'  
         type 'struct lfds711_freelist_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id51  '__cs_param__elimination_array'  
         type 'struct lfds711_freelist_element * volatile (*)'  kind 'p'  arity '1'  
         size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id52  '__cs_param__elimination_array_size_in_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id53  '__cs_param__fe'  
         type 'struct lfds711_freelist_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id73  '__cs_param__has'  
         type 'struct lfds711_hash_a_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id74  '__cs_param__baus_array'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id75  '__cs_param__array_size'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id76  '__cs_param__key_hash_function'  
         type 'void (*)(const void, lfds711_pal_uint_t)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id77  '__cs_param__element_cleanup_function'  
         type 'void (*)(struct lfds711_hash_a_state, struct lfds711_hash_a_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id78  '__cs_param__hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id79  '__cs_param__existing_hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id80  '__cs_param__hai'  
         type 'struct lfds711_hash_a_iterate *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id92  '__cs_param__lasos'  
         type 'struct lfds711_list_aso_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id93  '__cs_param__lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id94  '__cs_param__existing_lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id105  '__cs_param__lasus'  
         type 'struct lfds711_list_asu_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id106  '__cs_param__lasue'  
         type 'struct lfds711_list_asu_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id107  '__cs_param__lasue_predecessor'  
         type 'struct lfds711_list_asu_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id108  '__cs_param__position'  
         type 'enum lfds711_list_asu_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id120  '__cs_param__qbmms'  
         type 'struct lfds711_queue_bmm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id121  '__cs_param__element_array'  
         type 'struct lfds711_queue_bss_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id122  '__cs_param__number_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id123  '__cs_param__value'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id132  '__cs_param__qbsss'  
         type 'struct lfds711_queue_bss_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id142  '__cs_param__qumms'  
         type 'struct lfds711_queue_umm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id143  '__cs_param__qumme_dummy'  
         type 'struct lfds711_queue_umm_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id144  '__cs_param__qumme'  
         type 'struct lfds711_queue_umm_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id158  '__cs_param__rs'  
         type 'struct lfds711_ringbuffer_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id159  '__cs_param__re_array_inc_dummy'  
         type 'struct lfds711_ringbuffer_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id160  '__cs_param__number_elements_inc_dummy'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id161  '__cs_param__overwrite_occurred_flag'  
         type 'enum lfds711_misc_flag *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id162  '__cs_param__overwritten_key'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id163  '__cs_param__overwritten_value'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id171  '__cs_param__ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id172  '__cs_param__se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id173  '__cs_param__bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id174  'library_lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[631, 665, 672, 705, 706, 725, 727, 734, 735, 759, 761, 768, 769, 821, 823, 825, 827]'  
         deref '[]'  
         occurs '[631, 665, 672, 705, 706, 725, 727, 734, 735, 759, 761, 768, 769, 821, 823, 825, 827]'  
      id242  'mystack'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[892, 893, 908]'  
         deref '[]'  
         occurs '[892, 893, 908]'  
      id279  'ATOMIC_OPERATION'  
         type 'int'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1023, 1032, 1047, 1056]'  
      id280  'ss'  
         type 'void *'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1029, 1053, 1066, 1081]'  
      id281  'lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[1026, 1035, 1050, 1059, 1065]'  
         deref '[]'  
         occurs '[1026, 1035, 1050, 1059, 1065]'  
   check
      id0  '__cs_param_check_ss'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[157]'  
   lfds711_misc_force_store
      id18  '__cs_local_lfds711_misc_force_store_destination'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[205]'  
         deref '[]'  
         occurs '[205]'  
   exponential_backoff
      id175  '__cs_local_exponential_backoff_loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[575, 575, 575]'  
   __CSEQ_atomic_swap_stack_top
      id176  '__cs_param___CSEQ_atomic_swap_stack_top_top'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[585, 588, 593]'  
         occurs '[585, 588, 593]'  
      id177  '__cs_param___CSEQ_atomic_swap_stack_top_oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[585, 593]'  
         occurs '[585, 593]'  
      id178  '__cs_param___CSEQ_atomic_swap_stack_top_newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[588]'  
         occurs '[588]'  
      id179  '__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[585, 586]'  
   lfds711_misc_internal_backoff_init
      id180  '__cs_param_lfds711_misc_internal_backoff_init_bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[612, 621, 622, 623, 624, 625]'  
         occurs '[601, 612, 621, 622, 623, 624, 625]'  
      id181  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[601, 602]'  
      id182  '__cs_local_lfds711_misc_internal_backoff_init_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[606, 617]'  
         occurs '[605, 606, 616, 617]'  
      id183  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[612, 613]'  
   lfds711_stack_init_valid_on_current_logical_core
      id184  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[645, 656, 666, 667, 668, 669, 670]'  
         occurs '[634, 645, 656, 666, 667, 668, 669, 670]'  
      id185  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[668]'  
      id186  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[634, 635]'  
      id187  '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[639, 650, 661]'  
         occurs '[638, 639, 649, 650, 660, 661]'  
      id188  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[645, 646]'  
      id189  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[656, 657]'  
   lfds711_stack_pop
      id190  '__cs_param_lfds711_stack_pop_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[707, 708, 726, 760]'  
         occurs '[685, 707, 708, 726, 760]'  
      id191  '__cs_param_lfds711_stack_pop_se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[720, 754, 780]'  
         occurs '[696, 720, 754, 780]'  
      id192  '__cs_local_lfds711_stack_pop_result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[726, 730, 747, 760, 764, 781]'  
      id193  '__cs_local_lfds711_stack_pop_backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[680]'  
      id194  '__cs_local_lfds711_stack_pop_new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[726, 760]'  
         deref '[]'  
         occurs '[723, 724, 726, 757, 758, 760]'  
      id195  '__cs_local_lfds711_stack_pop_original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[726, 760]'  
         deref '[724, 758]'  
         occurs '[707, 708, 717, 723, 724, 726, 751, 757, 758, 760, 780]'  
      id196  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[685, 686]'  
      id197  '__cs_local_lfds711_stack_pop_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[690, 701]'  
         occurs '[689, 690, 700, 701]'  
      id198  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[696, 697]'  
      id199  '__cs_local_lfds711_stack_pop_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[710, 737, 740, 771, 774]'  
      id200  '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[713, 713, 713]'  
      id201  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[717, 718]'  
      id202  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[730, 731]'  
      id203  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[740, 741]'  
      id204  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[751, 752]'  
      id205  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[764, 765]'  
      id206  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[774, 775]'  
   lfds711_stack_push
      id207  '__cs_param_lfds711_stack_push_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[814, 815, 826]'  
         occurs '[793, 814, 815, 826]'  
      id208  '__cs_param_lfds711_stack_push_se'  
         type 'struct lfds711_stack_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[822]'  
         occurs '[804, 813, 822]'  
      id209  '__cs_local_lfds711_stack_push_result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[816, 819, 826, 830]'  
      id210  '__cs_local_lfds711_stack_push_backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[788]'  
      id211  '__cs_local_lfds711_stack_push_new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[826]'  
         deref '[]'  
         occurs '[813, 824, 826]'  
      id212  '__cs_local_lfds711_stack_push_original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[826]'  
         deref '[]'  
         occurs '[814, 815, 822, 824, 826]'  
      id213  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[793, 794]'  
      id214  '__cs_local_lfds711_stack_push_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[798, 809]'  
         occurs '[797, 798, 808, 809]'  
      id215  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[804, 805]'  
      id216  '__cs_local_lfds711_stack_push_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[818, 835, 838]'  
      id217  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[830, 831]'  
      id218  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[838, 839]'  
   __CSEQ_atomic_compare_and_exchange
      id219  '__cs_param___CSEQ_atomic_compare_and_exchange_mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[850, 853]'  
         occurs '[850, 853]'  
      id220  '__cs_param___CSEQ_atomic_compare_and_exchange_eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[850, 858]'  
         occurs '[850, 858]'  
      id221  '__cs_param___CSEQ_atomic_compare_and_exchange_newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[853, 858]'  
      id222  '__cs_param___CSEQ_atomic_compare_and_exchange_weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id223  '__cs_param___CSEQ_atomic_compare_and_exchange_sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id224  '__cs_param___CSEQ_atomic_compare_and_exchange_fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id225  '__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[850, 851]'  
   __atomic_compare_exchange_n
      id226  '__cs_param___atomic_compare_exchange_n_mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865]'  
      id227  '__cs_param___atomic_compare_exchange_n_eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865]'  
      id228  '__cs_param___atomic_compare_exchange_n_newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865]'  
      id229  '__cs_param___atomic_compare_exchange_n_weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865]'  
      id230  '__cs_param___atomic_compare_exchange_n_sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865]'  
      id231  '__cs_param___atomic_compare_exchange_n_fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865]'  
      id232  '__cs_local___atomic_compare_exchange_n_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[865, 866]'  
   __CSEQ_atomic_exchange
      id233  '__cs_param___CSEQ_atomic_exchange_previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[871, 872]'  
         occurs '[871, 872]'  
      id234  '__cs_param___CSEQ_atomic_exchange_new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[872]'  
      id235  '__cs_param___CSEQ_atomic_exchange_memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id236  '__cs_local___CSEQ_atomic_exchange_old'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[871, 873]'  
   __atomic_exchange_n
      id237  '__cs_param___atomic_exchange_n_previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[878]'  
      id238  '__cs_param___atomic_exchange_n_new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[878]'  
      id239  '__cs_param___atomic_exchange_n_memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[878]'  
      id240  '__cs_local___atomic_exchange_n_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[878, 879]'  
   __atomic_thread_fence
      id241  '__cs_param___atomic_thread_fence_i'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   init
   insert
      id245  '__cs_param_insert_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[901]'  
      id246  '__cs_param_insert_id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[899]'  
      id247  '__cs_local_insert_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[899, 900, 901]'  
         occurs '[898, 899, 900, 900, 901]'  
   delete
      id248  '__cs_param_delete_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id249  '__cs_local_delete_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[908]'  
         deref '[916]'  
         occurs '[908, 916]'  
      id250  '__cs_local_delete_temp_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[918, 919]'  
         occurs '[916, 918, 919]'  
      id251  '__cs_local_delete_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[908, 911, 914, 920]'  
      id252  '__cs_local_delete___cs_tmp_if_cond_19'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[911, 912]'  
      id253  '__cs_local_delete_id_popped'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[918]'  
   contains
      id254  '__cs_param_contains_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[939, 961]'  
      id255  '__cs_param_contains_id'  
         type 'unsigned long long int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[950]'  
      id256  '__cs_local_contains_max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[925, 935]'  
      id257  '__cs_local_contains_actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[927, 937, 947, 950, 955, 955, 959]'  
      id258  '__cs_local_contains_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[929, 939, 942]'  
      id259  '__cs_local_contains_found'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[931, 953, 964]'  
      id260  '__cs_local_contains_dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[933]'  
      id261  '__cs_local_contains_datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[950, 961]'  
         occurs '[935, 947, 950, 961]'  
      id262  '__cs_local_contains_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[939]'  
         deref '[947]'  
         occurs '[939, 947]'  
      id263  '__cs_local_contains___cs_tmp_if_cond_20'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[942, 943]'  
      id264  '__cs_local_contains___cs_tmp_if_cond_21'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[950, 951]'  
      id265  '__cs_local_contains_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[958, 959, 961, 962]'  
   get_size
      id266  '__cs_param_get_size_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[981, 995]'  
      id267  '__cs_local_get_size_max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[969, 977]'  
      id268  '__cs_local_get_size_actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[971, 979, 989, 989, 993, 998]'  
      id269  '__cs_local_get_size_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[973, 981, 984]'  
      id270  '__cs_local_get_size_dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[975]'  
      id271  '__cs_local_get_size_datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[995]'  
         occurs '[977, 995]'  
      id272  '__cs_local_get_size_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[981]'  
         deref '[]'  
         occurs '[981]'  
      id273  '__cs_local_get_size___cs_tmp_if_cond_22'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[984, 985]'  
      id274  '__cs_local_get_size_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[992, 993, 995, 996]'  
   is_empty
      id275  '__cs_param_is_empty_s'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1004, 1010]'  
      id276  '__cs_local_is_empty_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1004]'  
         deref '[]'  
         occurs '[1004, 1010]'  
      id277  '__cs_local_is_empty_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1004, 1007]'  
      id278  '__cs_local_is_empty___cs_tmp_if_cond_23'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1007, 1008]'  
   push
      id282  '__cs_param_push___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id283  '__cs_local_push_loop'  
         type 'int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1029]'  
      id284  '__cs_local_push___cs_tmp_if_cond_24'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1023, 1024]'  
      id285  '__cs_local_push___cs_tmp_if_cond_25'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1032, 1033]'  
   pop
      id286  '__cs_param_pop___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id287  '__cs_local_pop_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id288  '__cs_local_pop_count'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1043]'  
      id289  '__cs_local_pop_loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id290  '__cs_local_pop___cs_tmp_if_cond_26'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1047, 1048]'  
      id291  '__cs_local_pop___cs_tmp_if_cond_27'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1056, 1057]'  
   main
      id292  '__cs_local_main_t1'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1077]'  
         deref '[]'  
         occurs '[1077, 1079]'  
      id293  '__cs_local_main_t2'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id294  '__cs_local_main_t3'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id295  '__cs_local_main_t4'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id296  '__cs_local_main_t5'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id297  '__cs_local_main_t6'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1078]'  
         deref '[]'  
         occurs '[1078, 1080]'  
      id298  '__cs_local_main_t7'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id299  '__cs_local_main_t8'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id300  '__cs_local_main_t9'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id301  '__cs_local_main_t10'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  

Fields:
   lfds711_prng_state
      id1  'entropy'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_prng_st_state
      id2  'entropy'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_backoff_state
      id7  'lock'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id8  'backoff_iteration_frequency_counters'  type 'lfds711_pal_uint_t'  kind 'f'  arity '1'  size '[2]'  
      id9  'metric'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id10  'total_operations'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_globals
      id11  'ps'  type 'struct lfds711_prng_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_validation_info
      id12  'min_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id13  'max_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_btree_au_element
      id19  'left'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id20  'right'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id21  'up'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id22  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id23  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_btree_au_state
      id24  'root'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id25  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id26  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id27  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id28  'existing_key'  type 'enum lfds711_btree_au_existing_key'  kind 'f'  arity '0'  size '[]'  
      id29  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id30  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_element
      id41  'next'  type 'struct lfds711_freelist_element *'  kind 'f'  arity '0'  size '[]'  
      id42  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id43  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_freelist_state
      id44  'top'  type 'struct lfds711_freelist_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id45  'elimination_array_size_in_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id46  'elimination_array'  type 'struct lfds711_freelist_element * volatile (*)'  kind 'f'  arity '1'  size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
      id47  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id48  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id49  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_element
      id54  'baue'  type 'struct lfds711_btree_au_element'  kind 'f'  arity '0'  size '[]'  
      id55  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id56  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_iterate
      id57  'baue'  type 'struct lfds711_btree_au_element *'  kind 'f'  arity '0'  size '[]'  
      id58  'baus'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id59  'baus_end'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
   lfds711_hash_a_state
      id60  'existing_key'  type 'enum lfds711_hash_a_existing_key'  kind 'f'  arity '0'  size '[]'  
      id61  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id62  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id63  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id64  'array_size'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id65  'baus_array'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id66  '__cs_param__has'  type 'struct lfds711_hash_a_state *'  kind 'f'  arity '0'  size '[]'  
      id67  '__cs_param__hae'  type 'struct lfds711_hash_a_element *'  kind 'f'  arity '0'  size '[]'  
      id68  'element_cleanup_callback'  type 'void (*)(struct lfds711_hash_a_state *__cs_param__has, struct lfds711_hash_a_element *__cs_param__hae)'  kind 'f'  arity '0'  size '[]'  
      id69  '__cs_param__key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id70  '__cs_param__hash'  type 'lfds711_pal_uint_t *'  kind 'f'  arity '0'  size '[]'  
      id71  'key_hash_function'  type 'void (*)(const void *__cs_param__key, lfds711_pal_uint_t *__cs_param__hash)'  kind 'f'  arity '0'  size '[]'  
      id72  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_element
      id81  'next'  type 'struct lfds711_list_aso_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id82  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id83  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_state
      id84  'dummy_element'  type 'struct lfds711_list_aso_element'  kind 'f'  arity '0'  size '[]'  
      id85  'start'  type 'struct lfds711_list_aso_element *'  kind 'f'  arity '0'  size '[]'  
      id86  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id87  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id88  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id89  'existing_key'  type 'enum lfds711_list_aso_existing_key'  kind 'f'  arity '0'  size '[]'  
      id90  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id91  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_element
      id95  'next'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id96  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id97  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_state
      id98  'dummy_element'  type 'struct lfds711_list_asu_element'  kind 'f'  arity '0'  size '[]'  
      id99  'end'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id100  'start'  type 'struct lfds711_list_asu_element *'  kind 'f'  arity '0'  size '[]'  
      id101  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id102  'after_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id103  'end_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id104  'start_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_element
      id109  'sequence_number'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id110  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id111  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_state
      id112  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id113  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id114  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id115  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id116  'element_array'  type 'struct lfds711_queue_bmm_element *'  kind 'f'  arity '0'  size '[]'  
      id117  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id118  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id119  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_element
      id124  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id125  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_state
      id126  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id127  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id128  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id129  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id130  'element_array'  type 'struct lfds711_queue_bss_element *'  kind 'f'  arity '0'  size '[]'  
      id131  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_element
      id133  'next'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id134  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id135  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_state
      id136  'enqueue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id137  'dequeue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id138  'aba_counter'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id139  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id140  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id141  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_element
      id145  'fe'  type 'struct lfds711_freelist_element'  kind 'f'  arity '0'  size '[]'  
      id146  'qumme'  type 'struct lfds711_queue_umm_element'  kind 'f'  arity '0'  size '[]'  
      id147  'qumme_use'  type 'struct lfds711_queue_umm_element *'  kind 'f'  arity '0'  size '[]'  
      id148  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id149  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_state
      id150  'fs'  type 'struct lfds711_freelist_state'  kind 'f'  arity '0'  size '[]'  
      id151  'qumms'  type 'struct lfds711_queue_umm_state'  kind 'f'  arity '0'  size '[]'  
      id152  '__cs_param__rs'  type 'struct lfds711_ringbuffer_state *'  kind 'f'  arity '0'  size '[]'  
      id153  '__cs_param__key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id154  '__cs_param__value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id155  '__cs_param__unread_flag'  type 'enum lfds711_misc_flag'  kind 'f'  arity '0'  size '[]'  
      id156  'element_cleanup_callback'  type 'void (*)(struct lfds711_ringbuffer_state *__cs_param__rs, void *__cs_param__key, void *__cs_param__value, enum lfds711_misc_flag __cs_param__unread_flag)'  kind 'f'  arity '0'  size '[]'  
      id157  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_element
      id164  'next'  type 'struct lfds711_stack_element *'  kind 'f'  arity '0'  size '[]'  
      id165  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id166  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_state
      id167  'top'  type 'struct lfds711_stack_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id168  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id169  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id170  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   test_data
      id243  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id244  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  

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
   push
       var '__cs_param_push___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   pop
       var '__cs_param_pop___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   main

Function blocks:
function 'check' ----------------------------------:
void check(void *__cs_param_check_ss)
{
    __CSEQ_assert(contains(__cs_param_check_ss, 0));
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
    while (__cs_local_contains_actual_size < 2)
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
        lfds711_stack_push(__cs_param_is_empty_s, __cs_local_is_empty_se);
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
    insert(ss, __cs_local_push_loop);
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
    __CSEQ_assert(is_empty(ss));
    return 0;
}



int
Last statement, by function:
function: check   stmt:     __CSEQ_assert(contains(__cs_param_check_ss, 0));

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
   (0, 'check')  
   (1, '__cs_param_check_ss')  
   (2, 'entropy')  
   (3, 'entropy')  
   (4, 'lfds711_prng_init_valid_on_current_logical_core')  
   (5, '__cs_param__ps')  
   (6, '__cs_param__seed')  
   (7, 'lfds711_prng_st_init')  
   (8, '__cs_param__psts')  
   (9, '__cs_param__seed')  
   (10, 'lock')  
   (11, 'backoff_iteration_frequency_counters')  
   (12, 'metric')  
   (13, 'total_operations')  
   (14, 'ps')  
   (15, 'min_elements')  
   (16, 'max_elements')  
   (17, 'lfds711_misc_globals')  
   (18, 'lfds711_misc_force_store')  
   (19, 'lfds711_misc_query')  
   (20, '__cs_param__query_type')  
   (21, '__cs_param__query_input')  
   (22, '__cs_param__query_output')  
   (23, 'lfds711_misc_force_store')  
   (24, '__cs_local_lfds711_misc_force_store_destination')  
   (25, 'left')  
   (26, 'right')  
   (27, 'up')  
   (28, 'value')  
   (29, 'key')  
   (30, 'root')  
   (31, 'key_compare_function')  
   (32, '__cs_param__new_key')  
   (33, '__cs_param__existing_key')  
   (34, 'existing_key')  
   (35, 'user_state')  
   (36, 'insert_backoff')  
   (37, 'lfds711_btree_au_init_valid_on_current_logical_core')  
   (38, '__cs_param__baus')  
   (39, '__cs_param__key_compare_function')  
   (40, 'new_key')  
   (41, 'existing_key')  
   (42, '__cs_param__existing_key')  
   (43, '__cs_param__user_state')  
   (44, 'lfds711_btree_au_cleanup')  
   (45, '__cs_param__baus')  
   (46, '__cs_param__element_cleanup_callback')  
   (47, 'baus')  
   (48, 'baue')  
   (49, 'lfds711_btree_au_insert')  
   (50, '__cs_param__baus')  
   (51, '__cs_param__baue')  
   (52, '__cs_param__existing_baue')  
   (53, 'lfds711_btree_au_get_by_key')  
   (54, '__cs_param__baus')  
   (55, '__cs_param__key_compare_function')  
   (56, 'new_key')  
   (57, 'existing_key')  
   (58, '__cs_param__key')  
   (59, '__cs_param__baue')  
   (60, 'lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position')  
   (61, '__cs_param__baus')  
   (62, '__cs_param__baue')  
   (63, '__cs_param__absolute_position')  
   (64, '__cs_param__relative_position')  
   (65, 'lfds711_btree_au_get_by_absolute_position')  
   (66, '__cs_param__baus')  
   (67, '__cs_param__baue')  
   (68, '__cs_param__absolute_position')  
   (69, 'lfds711_btree_au_get_by_relative_position')  
   (70, '__cs_param__baue')  
   (71, '__cs_param__relative_position')  
   (72, 'lfds711_btree_au_query')  
   (73, '__cs_param__baus')  
   (74, '__cs_param__query_type')  
   (75, '__cs_param__query_input')  
   (76, '__cs_param__query_output')  
   (77, 'next')  
   (78, 'key')  
   (79, 'value')  
   (80, 'top')  
   (81, 'elimination_array_size_in_elements')  
   (82, 'elimination_array')  
   (83, 'user_state')  
   (84, 'pop_backoff')  
   (85, 'push_backoff')  
   (86, 'lfds711_freelist_init_valid_on_current_logical_core')  
   (87, '__cs_param__fs')  
   (88, '__cs_param__elimination_array')  
   (89, '__cs_param__elimination_array_size_in_elements')  
   (90, '__cs_param__user_state')  
   (91, 'lfds711_freelist_cleanup')  
   (92, '__cs_param__fs')  
   (93, '__cs_param__element_cleanup_callback')  
   (94, 'fs')  
   (95, 'fe')  
   (96, 'lfds711_freelist_push')  
   (97, '__cs_param__fs')  
   (98, '__cs_param__fe')  
   (99, '__cs_param__psts')  
   (100, 'lfds711_freelist_pop')  
   (101, '__cs_param__fs')  
   (102, '__cs_param__fe')  
   (103, '__cs_param__psts')  
   (104, 'lfds711_freelist_query')  
   (105, '__cs_param__fs')  
   (106, '__cs_param__query_type')  
   (107, '__cs_param__query_input')  
   (108, '__cs_param__query_output')  
   (109, 'baue')  
   (110, 'key')  
   (111, 'value')  
   (112, 'baue')  
   (113, 'baus')  
   (114, 'baus_end')  
   (115, 'existing_key')  
   (116, 'key_compare_function')  
   (117, '__cs_param__new_key')  
   (118, '__cs_param__existing_key')  
   (119, 'array_size')  
   (120, 'baus_array')  
   (121, 'element_cleanup_callback')  
   (122, '__cs_param__has')  
   (123, '__cs_param__hae')  
   (124, 'key_hash_function')  
   (125, '__cs_param__key')  
   (126, '__cs_param__hash')  
   (127, 'user_state')  
   (128, 'lfds711_hash_a_init_valid_on_current_logical_core')  
   (129, '__cs_param__has')  
   (130, '__cs_param__baus_array')  
   (131, '__cs_param__array_size')  
   (132, '__cs_param__key_compare_function')  
   (133, 'new_key')  
   (134, 'existing_key')  
   (135, '__cs_param__key_hash_function')  
   (136, 'key')  
   (137, 'hash')  
   (138, '__cs_param__existing_key')  
   (139, '__cs_param__user_state')  
   (140, 'lfds711_hash_a_cleanup')  
   (141, '__cs_param__has')  
   (142, '__cs_param__element_cleanup_function')  
   (143, 'has')  
   (144, 'hae')  
   (145, 'lfds711_hash_a_insert')  
   (146, '__cs_param__has')  
   (147, '__cs_param__hae')  
   (148, '__cs_param__existing_hae')  
   (149, 'lfds711_hash_a_get_by_key')  
   (150, '__cs_param__has')  
   (151, '__cs_param__key_compare_function')  
   (152, 'new_key')  
   (153, 'existing_key')  
   (154, '__cs_param__key_hash_function')  
   (155, 'key')  
   (156, 'hash')  
   (157, '__cs_param__key')  
   (158, '__cs_param__hae')  
   (159, 'lfds711_hash_a_iterate_init')  
   (160, '__cs_param__has')  
   (161, '__cs_param__hai')  
   (162, 'lfds711_hash_a_iterate')  
   (163, '__cs_param__hai')  
   (164, '__cs_param__hae')  
   (165, 'lfds711_hash_a_query')  
   (166, '__cs_param__has')  
   (167, '__cs_param__query_type')  
   (168, '__cs_param__query_input')  
   (169, '__cs_param__query_output')  
   (170, 'next')  
   (171, 'value')  
   (172, 'key')  
   (173, 'dummy_element')  
   (174, 'start')  
   (175, 'key_compare_function')  
   (176, '__cs_param__new_key')  
   (177, '__cs_param__existing_key')  
   (178, 'existing_key')  
   (179, 'user_state')  
   (180, 'insert_backoff')  
   (181, 'lfds711_list_aso_init_valid_on_current_logical_core')  
   (182, '__cs_param__lasos')  
   (183, '__cs_param__key_compare_function')  
   (184, 'new_key')  
   (185, 'existing_key')  
   (186, '__cs_param__existing_key')  
   (187, '__cs_param__user_state')  
   (188, 'lfds711_list_aso_cleanup')  
   (189, '__cs_param__lasos')  
   (190, '__cs_param__element_cleanup_callback')  
   (191, 'lasos')  
   (192, 'lasoe')  
   (193, 'lfds711_list_aso_insert')  
   (194, '__cs_param__lasos')  
   (195, '__cs_param__lasoe')  
   (196, '__cs_param__existing_lasoe')  
   (197, 'lfds711_list_aso_get_by_key')  
   (198, '__cs_param__lasos')  
   (199, '__cs_param__key')  
   (200, '__cs_param__lasoe')  
   (201, 'lfds711_list_aso_query')  
   (202, '__cs_param__lasos')  
   (203, '__cs_param__query_type')  
   (204, '__cs_param__query_input')  
   (205, '__cs_param__query_output')  
   (206, 'next')  
   (207, 'value')  
   (208, 'key')  
   (209, 'dummy_element')  
   (210, 'end')  
   (211, 'start')  
   (212, 'user_state')  
   (213, 'after_backoff')  
   (214, 'end_backoff')  
   (215, 'start_backoff')  
   (216, 'lfds711_list_asu_init_valid_on_current_logical_core')  
   (217, '__cs_param__lasus')  
   (218, '__cs_param__user_state')  
   (219, 'lfds711_list_asu_cleanup')  
   (220, '__cs_param__lasus')  
   (221, '__cs_param__element_cleanup_callback')  
   (222, 'lasus')  
   (223, 'lasue')  
   (224, 'lfds711_list_asu_insert_at_position')  
   (225, '__cs_param__lasus')  
   (226, '__cs_param__lasue')  
   (227, '__cs_param__lasue_predecessor')  
   (228, '__cs_param__position')  
   (229, 'lfds711_list_asu_insert_at_start')  
   (230, '__cs_param__lasus')  
   (231, '__cs_param__lasue')  
   (232, 'lfds711_list_asu_insert_at_end')  
   (233, '__cs_param__lasus')  
   (234, '__cs_param__lasue')  
   (235, 'lfds711_list_asu_insert_after_element')  
   (236, '__cs_param__lasus')  
   (237, '__cs_param__lasue')  
   (238, '__cs_param__lasue_predecessor')  
   (239, 'lfds711_list_asu_get_by_key')  
   (240, '__cs_param__lasus')  
   (241, '__cs_param__key_compare_function')  
   (242, 'new_key')  
   (243, 'existing_key')  
   (244, '__cs_param__key')  
   (245, '__cs_param__lasue')  
   (246, 'lfds711_list_asu_query')  
   (247, '__cs_param__lasus')  
   (248, '__cs_param__query_type')  
   (249, '__cs_param__query_input')  
   (250, '__cs_param__query_output')  
   (251, 'sequence_number')  
   (252, 'key')  
   (253, 'value')  
   (254, 'number_elements')  
   (255, 'mask')  
   (256, 'read_index')  
   (257, 'write_index')  
   (258, 'element_array')  
   (259, 'user_state')  
   (260, 'dequeue_backoff')  
   (261, 'enqueue_backoff')  
   (262, 'lfds711_queue_bmm_init_valid_on_current_logical_core')  
   (263, '__cs_param__qbmms')  
   (264, '__cs_param__element_array')  
   (265, '__cs_param__number_elements')  
   (266, '__cs_param__user_state')  
   (267, 'lfds711_queue_bmm_cleanup')  
   (268, '__cs_param__qbmms')  
   (269, '__cs_param__element_cleanup_callback')  
   (270, 'qbmms')  
   (271, 'key')  
   (272, 'value')  
   (273, 'lfds711_queue_bmm_enqueue')  
   (274, '__cs_param__qbmms')  
   (275, '__cs_param__key')  
   (276, '__cs_param__value')  
   (277, 'lfds711_queue_bmm_dequeue')  
   (278, '__cs_param__qbmms')  
   (279, '__cs_param__key')  
   (280, '__cs_param__value')  
   (281, 'lfds711_queue_bmm_query')  
   (282, '__cs_param__qbmms')  
   (283, '__cs_param__query_type')  
   (284, '__cs_param__query_input')  
   (285, '__cs_param__query_output')  
   (286, 'key')  
   (287, 'value')  
   (288, 'number_elements')  
   (289, 'mask')  
   (290, 'read_index')  
   (291, 'write_index')  
   (292, 'element_array')  
   (293, 'user_state')  
   (294, 'lfds711_queue_bss_init_valid_on_current_logical_core')  
   (295, '__cs_param__qbsss')  
   (296, '__cs_param__element_array')  
   (297, '__cs_param__number_elements')  
   (298, '__cs_param__user_state')  
   (299, 'lfds711_queue_bss_cleanup')  
   (300, '__cs_param__qbsss')  
   (301, '__cs_param__element_cleanup_callback')  
   (302, 'qbsss')  
   (303, 'key')  
   (304, 'value')  
   (305, 'lfds711_queue_bss_enqueue')  
   (306, '__cs_param__qbsss')  
   (307, '__cs_param__key')  
   (308, '__cs_param__value')  
   (309, 'lfds711_queue_bss_dequeue')  
   (310, '__cs_param__qbsss')  
   (311, '__cs_param__key')  
   (312, '__cs_param__value')  
   (313, 'lfds711_queue_bss_query')  
   (314, '__cs_param__qbsss')  
   (315, '__cs_param__query_type')  
   (316, '__cs_param__query_input')  
   (317, '__cs_param__query_output')  
   (318, 'next')  
   (319, 'key')  
   (320, 'value')  
   (321, 'enqueue')  
   (322, 'dequeue')  
   (323, 'aba_counter')  
   (324, 'user_state')  
   (325, 'dequeue_backoff')  
   (326, 'enqueue_backoff')  
   (327, 'lfds711_queue_umm_init_valid_on_current_logical_core')  
   (328, '__cs_param__qumms')  
   (329, '__cs_param__qumme_dummy')  
   (330, '__cs_param__user_state')  
   (331, 'lfds711_queue_umm_cleanup')  
   (332, '__cs_param__qumms')  
   (333, '__cs_param__element_cleanup_callback')  
   (334, 'qumms')  
   (335, 'qumme')  
   (336, 'dummy_element_flag')  
   (337, 'lfds711_queue_umm_enqueue')  
   (338, '__cs_param__qumms')  
   (339, '__cs_param__qumme')  
   (340, 'lfds711_queue_umm_dequeue')  
   (341, '__cs_param__qumms')  
   (342, '__cs_param__qumme')  
   (343, 'lfds711_queue_umm_query')  
   (344, '__cs_param__qumms')  
   (345, '__cs_param__query_type')  
   (346, '__cs_param__query_input')  
   (347, '__cs_param__query_output')  
   (348, 'fe')  
   (349, 'qumme')  
   (350, 'qumme_use')  
   (351, 'key')  
   (352, 'value')  
   (353, 'fs')  
   (354, 'qumms')  
   (355, 'element_cleanup_callback')  
   (356, '__cs_param__rs')  
   (357, '__cs_param__key')  
   (358, '__cs_param__value')  
   (359, '__cs_param__unread_flag')  
   (360, 'user_state')  
   (361, 'lfds711_ringbuffer_init_valid_on_current_logical_core')  
   (362, '__cs_param__rs')  
   (363, '__cs_param__re_array_inc_dummy')  
   (364, '__cs_param__number_elements_inc_dummy')  
   (365, '__cs_param__user_state')  
   (366, 'lfds711_ringbuffer_cleanup')  
   (367, '__cs_param__rs')  
   (368, '__cs_param__element_cleanup_callback')  
   (369, 'rs')  
   (370, 'key')  
   (371, 'value')  
   (372, 'unread_flag')  
   (373, 'lfds711_ringbuffer_read')  
   (374, '__cs_param__rs')  
   (375, '__cs_param__key')  
   (376, '__cs_param__value')  
   (377, 'lfds711_ringbuffer_write')  
   (378, '__cs_param__rs')  
   (379, '__cs_param__key')  
   (380, '__cs_param__value')  
   (381, '__cs_param__overwrite_occurred_flag')  
   (382, '__cs_param__overwritten_key')  
   (383, '__cs_param__overwritten_value')  
   (384, 'lfds711_ringbuffer_query')  
   (385, '__cs_param__rs')  
   (386, '__cs_param__query_type')  
   (387, '__cs_param__query_input')  
   (388, '__cs_param__query_output')  
   (389, 'next')  
   (390, 'key')  
   (391, 'value')  
   (392, 'top')  
   (393, 'user_state')  
   (394, 'pop_backoff')  
   (395, 'push_backoff')  
   (396, 'lfds711_stack_init_valid_on_current_logical_core')  
   (397, '__cs_param__ss')  
   (398, '__cs_param__user_state')  
   (399, 'lfds711_stack_cleanup')  
   (400, '__cs_param__ss')  
   (401, '__cs_param__element_cleanup_callback')  
   (402, 'ss')  
   (403, 'se')  
   (404, 'lfds711_stack_push')  
   (405, '__cs_param__ss')  
   (406, '__cs_param__se')  
   (407, 'lfds711_stack_pop')  
   (408, '__cs_param__ss')  
   (409, '__cs_param__se')  
   (410, 'lfds711_stack_query')  
   (411, '__cs_param__ss')  
   (412, '__cs_param__query_type')  
   (413, '__cs_param__query_input')  
   (414, '__cs_param__query_output')  
   (415, 'lfds711_misc_internal_backoff_init')  
   (416, '__cs_param__bs')  
   (417, 'library_lock')  
   (418, 'exponential_backoff')  
   (419, '__cs_local_exponential_backoff_loop')  
   (420, '__CSEQ_atomic_swap_stack_top')  
   (421, '__cs_param___CSEQ_atomic_swap_stack_top_top')  
   (422, '__cs_param___CSEQ_atomic_swap_stack_top_oldtop')  
   (423, '__cs_param___CSEQ_atomic_swap_stack_top_newtop')  
   (424, '__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0')  
   (425, 'lfds711_misc_internal_backoff_init')  
   (426, '__cs_param_lfds711_misc_internal_backoff_init_bs')  
   (427, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1')  
   (428, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (429, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2')  
   (430, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (431, 'lfds711_stack_init_valid_on_current_logical_core')  
   (432, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss')  
   (433, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state')  
   (434, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3')  
   (435, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (436, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4')  
   (437, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (438, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5')  
   (439, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (440, 'lfds711_stack_pop')  
   (441, '__cs_param_lfds711_stack_pop_ss')  
   (442, '__cs_param_lfds711_stack_pop_se')  
   (443, '__cs_local_lfds711_stack_pop_result')  
   (444, '__cs_local_lfds711_stack_pop_backoff_iteration')  
   (445, '__cs_local_lfds711_stack_pop_new_top')  
   (446, '__cs_local_lfds711_stack_pop_original_top')  
   (447, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6')  
   (448, '__cs_local_lfds711_stack_pop_c')  
   (449, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7')  
   (450, '__cs_local_lfds711_stack_pop_c')  
   (451, '__cs_local_lfds711_stack_pop_i')  
   (452, '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1')  
   (453, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8')  
   (454, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9')  
   (455, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10')  
   (456, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (457, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (458, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (459, 'lfds711_stack_push')  
   (460, '__cs_param_lfds711_stack_push_ss')  
   (461, '__cs_param_lfds711_stack_push_se')  
   (462, '__cs_local_lfds711_stack_push_result')  
   (463, '__cs_local_lfds711_stack_push_backoff_iteration')  
   (464, '__cs_local_lfds711_stack_push_new_top')  
   (465, '__cs_local_lfds711_stack_push_original_top')  
   (466, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14')  
   (467, '__cs_local_lfds711_stack_push_c')  
   (468, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15')  
   (469, '__cs_local_lfds711_stack_push_c')  
   (470, '__cs_local_lfds711_stack_push_i')  
   (471, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (472, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (473, '__CSEQ_atomic_compare_and_exchange')  
   (474, '__cs_param___CSEQ_atomic_compare_and_exchange_mptr')  
   (475, '__cs_param___CSEQ_atomic_compare_and_exchange_eptr')  
   (476, '__cs_param___CSEQ_atomic_compare_and_exchange_newval')  
   (477, '__cs_param___CSEQ_atomic_compare_and_exchange_weak_p')  
   (478, '__cs_param___CSEQ_atomic_compare_and_exchange_sm')  
   (479, '__cs_param___CSEQ_atomic_compare_and_exchange_fm')  
   (480, '__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18')  
   (481, '__atomic_compare_exchange_n')  
   (482, '__cs_param___atomic_compare_exchange_n_mptr')  
   (483, '__cs_param___atomic_compare_exchange_n_eptr')  
   (484, '__cs_param___atomic_compare_exchange_n_newval')  
   (485, '__cs_param___atomic_compare_exchange_n_weak_p')  
   (486, '__cs_param___atomic_compare_exchange_n_sm')  
   (487, '__cs_param___atomic_compare_exchange_n_fm')  
   (488, '__cs_local___atomic_compare_exchange_n_res')  
   (489, '__CSEQ_atomic_exchange')  
   (490, '__cs_param___CSEQ_atomic_exchange_previous')  
   (491, '__cs_param___CSEQ_atomic_exchange_new')  
   (492, '__cs_param___CSEQ_atomic_exchange_memorder')  
   (493, '__cs_local___CSEQ_atomic_exchange_old')  
   (494, '__atomic_exchange_n')  
   (495, '__cs_param___atomic_exchange_n_previous')  
   (496, '__cs_param___atomic_exchange_n_new')  
   (497, '__cs_param___atomic_exchange_n_memorder')  
   (498, '__cs_local___atomic_exchange_n_res')  
   (499, '__atomic_thread_fence')  
   (500, '__cs_param___atomic_thread_fence_i')  
   (501, 'mystack')  
   (502, 'se')  
   (503, 'user_id')  
   (504, 'init')  
   (505, 'insert')  
   (506, '__cs_param_insert_s')  
   (507, '__cs_param_insert_id')  
   (508, '__cs_local_insert_td')  
   (509, 'delete')  
   (510, '__cs_param_delete_s')  
   (511, '__cs_local_delete_se')  
   (512, '__cs_local_delete_temp_td')  
   (513, '__cs_local_delete_res')  
   (514, '__cs_local_delete___cs_tmp_if_cond_19')  
   (515, '__cs_local_delete_id_popped')  
   (516, 'contains')  
   (517, '__cs_param_contains_s')  
   (518, '__cs_param_contains_id')  
   (519, '__cs_local_contains_max_size')  
   (520, '__cs_local_contains_actual_size')  
   (521, '__cs_local_contains_res')  
   (522, '__cs_local_contains_found')  
   (523, '__cs_local_contains_dimension')  
   (524, '__cs_local_contains_datas')  
   (525, '__cs_local_contains_se')  
   (526, '__cs_local_contains___cs_tmp_if_cond_20')  
   (527, '__cs_local_contains___cs_tmp_if_cond_21')  
   (528, '__cs_local_contains_i')  
   (529, 'get_size')  
   (530, '__cs_param_get_size_s')  
   (531, '__cs_local_get_size_max_size')  
   (532, '__cs_local_get_size_actual_size')  
   (533, '__cs_local_get_size_res')  
   (534, '__cs_local_get_size_dimension')  
   (535, '__cs_local_get_size_datas')  
   (536, '__cs_local_get_size_se')  
   (537, '__cs_local_get_size___cs_tmp_if_cond_22')  
   (538, '__cs_local_get_size_i')  
   (539, 'is_empty')  
   (540, '__cs_param_is_empty_s')  
   (541, '__cs_local_is_empty_se')  
   (542, '__cs_local_is_empty_res')  
   (543, '__cs_local_is_empty___cs_tmp_if_cond_23')  
   (544, 'ATOMIC_OPERATION')  
   (545, 'ss')  
   (546, 'lock')  
   (547, 'push')  
   (548, '__cs_param_push___cs_unused')  
   (549, '__cs_local_push_loop')  
   (550, '__cs_local_push___cs_tmp_if_cond_24')  
   (551, '__cs_local_push___cs_tmp_if_cond_25')  
   (552, 'pop')  
   (553, '__cs_param_pop___cs_unused')  
   (554, '__cs_local_pop_res')  
   (555, '__cs_local_pop_count')  
   (556, '__cs_local_pop_loop')  
   (557, '__cs_local_pop___cs_tmp_if_cond_26')  
   (558, '__cs_local_pop___cs_tmp_if_cond_27')  
   (559, 'main')  
   (560, '__cs_local_main_t1')  
   (561, '__cs_local_main_t2')  
   (562, '__cs_local_main_t3')  
   (563, '__cs_local_main_t4')  
   (564, '__cs_local_main_t5')  
   (565, '__cs_local_main_t6')  
   (566, '__cs_local_main_t7')  
   (567, '__cs_local_main_t8')  
   (568, '__cs_local_main_t9')  
   (569, '__cs_local_main_t10')  
