list of functions:
   lfds711_misc_force_store(param: )  call count 1
   __atomic_compare_exchange_n(param: __cs_param___atomic_compare_exchange_n_mptr, __cs_param___atomic_compare_exchange_n_eptr, __cs_param___atomic_compare_exchange_n_newval, __cs_param___atomic_compare_exchange_n_weak_p, __cs_param___atomic_compare_exchange_n_sm, __cs_param___atomic_compare_exchange_n_fm)  call count 0
   __atomic_exchange_n(param: __cs_param___atomic_exchange_n_previous, __cs_param___atomic_exchange_n_new, __cs_param___atomic_exchange_n_memorder)  call count 0
   __atomic_thread_fence(param: __cs_param___atomic_thread_fence_i)  call count 1
   swap_stack_top(param: __cs_param_swap_stack_top_top, __cs_param_swap_stack_top_oldtop, __cs_param_swap_stack_top_newtop)  call count 3
   exponential_backoff(param: )  call count 3
   lfds711_misc_internal_backoff_init(param: __cs_param_lfds711_misc_internal_backoff_init_bs)  call count 2
   lfds711_stack_init_valid_on_current_logical_core(param: __cs_param_lfds711_stack_init_valid_on_current_logical_core_ss, __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state)  call count 1
   lfds711_stack_pop(param: __cs_param_lfds711_stack_pop_ss, __cs_param_lfds711_stack_pop_se)  call count 1
   lfds711_stack_push(param: __cs_param_lfds711_stack_push_ss, __cs_param_lfds711_stack_push_se)  call count 1
   lfds711_stack_cleanup(param: __cs_param_lfds711_stack_cleanup_ss, ss, se, __cs_param_lfds711_stack_cleanup_element_cleanup_callback)  call count 0
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
      id190  'lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[653, 687, 694, 727, 728, 747, 749, 756, 757, 781, 783, 790, 791, 843, 845, 847, 849, 953]'  
         deref '[]'  
         occurs '[653, 687, 694, 727, 728, 747, 749, 756, 757, 781, 783, 790, 791, 843, 845, 847, 849, 953]'  
      id237  'ss'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[917, 933, 950]'  
         deref '[]'  
         occurs '[917, 933, 950]'  
   lfds711_misc_force_store
      id17  '__cs_local_lfds711_misc_force_store_destination'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[201]'  
         deref '[]'  
         occurs '[201]'  
   __atomic_compare_exchange_n
      id173  '__cs_param___atomic_compare_exchange_n_mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[571, 574]'  
         occurs '[571, 574]'  
      id174  '__cs_param___atomic_compare_exchange_n_eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[571, 579]'  
         occurs '[571, 579]'  
      id175  '__cs_param___atomic_compare_exchange_n_newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[574, 579]'  
      id176  '__cs_param___atomic_compare_exchange_n_weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id177  '__cs_param___atomic_compare_exchange_n_sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id178  '__cs_param___atomic_compare_exchange_n_fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id179  '__cs_local___atomic_compare_exchange_n___cs_tmp_if_cond_0'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[571, 572]'  
   __atomic_exchange_n
      id180  '__cs_param___atomic_exchange_n_previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[586, 587]'  
         occurs '[586, 587]'  
      id181  '__cs_param___atomic_exchange_n_new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[587]'  
      id182  '__cs_param___atomic_exchange_n_memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id183  '__cs_local___atomic_exchange_n_old'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[586, 588]'  
   __atomic_thread_fence
      id184  '__cs_param___atomic_thread_fence_i'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   swap_stack_top
      id185  '__cs_param_swap_stack_top_top'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[598, 601, 606]'  
         occurs '[598, 601, 606]'  
      id186  '__cs_param_swap_stack_top_oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[598, 606]'  
         occurs '[598, 606]'  
      id187  '__cs_param_swap_stack_top_newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[601]'  
         occurs '[601]'  
      id188  '__cs_local_swap_stack_top___cs_tmp_if_cond_1'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[598, 599]'  
   exponential_backoff
      id189  '__cs_local_exponential_backoff_loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[613, 613, 613]'  
   lfds711_misc_internal_backoff_init
      id191  '__cs_param_lfds711_misc_internal_backoff_init_bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[634, 643, 644, 645, 646, 647]'  
         occurs '[623, 634, 643, 644, 645, 646, 647]'  
      id192  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[623, 624]'  
      id193  '__cs_local_lfds711_misc_internal_backoff_init_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[628, 639]'  
         occurs '[627, 628, 638, 639]'  
      id194  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[634, 635]'  
   lfds711_stack_init_valid_on_current_logical_core
      id195  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[667, 678, 688, 689, 690, 691, 692]'  
         occurs '[656, 667, 678, 688, 689, 690, 691, 692]'  
      id196  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[690]'  
      id197  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[656, 657]'  
      id198  '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[661, 672, 683]'  
         occurs '[660, 661, 671, 672, 682, 683]'  
      id199  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[667, 668]'  
      id200  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[678, 679]'  
   lfds711_stack_pop
      id201  '__cs_param_lfds711_stack_pop_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[729, 730, 748, 782]'  
         occurs '[707, 729, 730, 748, 782]'  
      id202  '__cs_param_lfds711_stack_pop_se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[742, 776, 802]'  
         occurs '[718, 742, 776, 802]'  
      id203  '__cs_local_lfds711_stack_pop_result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[748, 752, 769, 782, 786]'  
      id204  '__cs_local_lfds711_stack_pop_backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[702]'  
      id205  '__cs_local_lfds711_stack_pop_new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[748, 782]'  
         deref '[]'  
         occurs '[745, 746, 748, 779, 780, 782]'  
      id206  '__cs_local_lfds711_stack_pop_original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[748, 782]'  
         deref '[746, 780]'  
         occurs '[729, 730, 739, 745, 746, 748, 773, 779, 780, 782, 802]'  
      id207  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[707, 708]'  
      id208  '__cs_local_lfds711_stack_pop_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[712, 723]'  
         occurs '[711, 712, 722, 723]'  
      id209  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[718, 719]'  
      id210  '__cs_local_lfds711_stack_pop_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[732, 759, 762, 793, 796]'  
      id211  '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[735, 735, 735]'  
      id212  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[739, 740]'  
      id213  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[752, 753]'  
      id214  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[762, 763]'  
      id215  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[773, 774]'  
      id216  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[786, 787]'  
      id217  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[796, 797]'  
   lfds711_stack_push
      id218  '__cs_param_lfds711_stack_push_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[836, 837, 848]'  
         occurs '[815, 836, 837, 848]'  
      id219  '__cs_param_lfds711_stack_push_se'  
         type 'struct lfds711_stack_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[844]'  
         occurs '[826, 835, 844]'  
      id220  '__cs_local_lfds711_stack_push_result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[838, 841, 848, 852]'  
      id221  '__cs_local_lfds711_stack_push_backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[810]'  
      id222  '__cs_local_lfds711_stack_push_new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[848]'  
         deref '[]'  
         occurs '[835, 846, 848]'  
      id223  '__cs_local_lfds711_stack_push_original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[848]'  
         deref '[]'  
         occurs '[836, 837, 844, 846, 848]'  
      id224  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[815, 816]'  
      id225  '__cs_local_lfds711_stack_push_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[820, 831]'  
         occurs '[819, 820, 830, 831]'  
      id226  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[826, 827]'  
      id227  '__cs_local_lfds711_stack_push_i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[840, 857, 860]'  
      id228  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[852, 853]'  
      id229  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_18'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[860, 861]'  
   lfds711_stack_cleanup
      id230  '__cs_param_lfds711_stack_cleanup_ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[890]'  
         occurs '[875, 890, 895]'  
      id231  '__cs_param_lfds711_stack_cleanup_element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[887, 895]'  ptr-to-f 'True'
      id232  '__cs_local_lfds711_stack_cleanup_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[894]'  
         occurs '[890, 891, 893, 894, 894]'  
      id233  '__cs_local_lfds711_stack_cleanup_se_temp'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[893, 895]'  
      id234  '__cs_local_lfds711_stack_cleanup___cs_tmp_if_cond_19'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[875, 876]'  
      id235  '__cs_local_lfds711_stack_cleanup_c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[880]'  
         occurs '[879, 880]'  
      id236  '__cs_local_lfds711_stack_cleanup___cs_tmp_if_cond_20'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[887, 888]'  
   push
      id240  '__cs_param_push___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id241  '__cs_local_push_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[916, 917]'  
         deref '[]'  
         occurs '[911, 915, 916, 916, 917]'  
      id242  '__cs_local_push_loop'  
         type 'int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[912, 912, 912, 915, 915, 916, 916, 917]'  
   pop
      id243  '__cs_param_pop___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id244  '__cs_local_pop_loop'  
         type 'int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[929, 929, 929]'  
      id245  '__cs_local_pop_se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[933]'  
         deref '[942]'  
         occurs '[933, 942]'  
      id246  '__cs_local_pop_temp_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[944]'  
         occurs '[931, 942, 944]'  
      id247  '__cs_local_pop_res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[933, 937]'  
      id248  '__cs_local_pop_count'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[928, 943, 946]'  
      id249  '__cs_local_pop___cs_tmp_if_cond_21'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[937, 938]'  
   main
      id250  '__cs_local_main_t1'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[954]'  
         deref '[]'  
         occurs '[954, 956]'  
      id251  '__cs_local_main_t2'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[955]'  
         deref '[]'  
         occurs '[955, 957]'  

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
      id238  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id239  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  

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
   lfds711_misc_force_store
   __atomic_compare_exchange_n
       var '__cs_param___atomic_compare_exchange_n_mptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param___atomic_compare_exchange_n_eptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_exchange_n
       var '__cs_param___atomic_exchange_n_previous'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_thread_fence
   swap_stack_top
       var '__cs_param_swap_stack_top_top'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param_swap_stack_top_oldtop'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param_swap_stack_top_newtop'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
   exponential_backoff
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
   lfds711_stack_cleanup
       var '__cs_param_lfds711_stack_cleanup_ss'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_cleanup_se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_cleanup_se_temp'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_cleanup_c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   push
       var '__cs_param_push___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_push_td'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
   pop
       var '__cs_param_pop___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_pop_se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_pop_temp_td'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
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
function '__atomic_compare_exchange_n' ----------------------------------:
_Bool __atomic_compare_exchange_n(int long long unsigned *__cs_param___atomic_compare_exchange_n_mptr, int long long unsigned *__cs_param___atomic_compare_exchange_n_eptr, int long long unsigned __cs_param___atomic_compare_exchange_n_newval, _Bool __cs_param___atomic_compare_exchange_n_weak_p, int __cs_param___atomic_compare_exchange_n_sm, int __cs_param___atomic_compare_exchange_n_fm)
{
    ;
    _Bool __cs_local___atomic_compare_exchange_n___cs_tmp_if_cond_0;
    __cs_local___atomic_compare_exchange_n___cs_tmp_if_cond_0 = (*__cs_param___atomic_compare_exchange_n_mptr) == (*__cs_param___atomic_compare_exchange_n_eptr);
    if (__cs_local___atomic_compare_exchange_n___cs_tmp_if_cond_0)
    {
        *__cs_param___atomic_compare_exchange_n_mptr = __cs_param___atomic_compare_exchange_n_newval;
        return 1;
    }
    else
    {
        *__cs_param___atomic_compare_exchange_n_eptr = __cs_param___atomic_compare_exchange_n_newval;
        return 0;
    }

}


int long long unsigned *__cs_param___atomic_compare_exchange_n_mptr, int long long unsigned *__cs_param___atomic_compare_exchange_n_eptr, int long long unsigned __cs_param___atomic_compare_exchange_n_newval, _Bool __cs_param___atomic_compare_exchange_n_weak_p, int __cs_param___atomic_compare_exchange_n_sm, int __cs_param___atomic_compare_exchange_n_fm
_Bool
function '__atomic_exchange_n' ----------------------------------:
unsigned long __atomic_exchange_n(int long long unsigned *__cs_param___atomic_exchange_n_previous, int long long unsigned __cs_param___atomic_exchange_n_new, int __cs_param___atomic_exchange_n_memorder)
{
    unsigned long int __cs_local___atomic_exchange_n_old;
    __cs_local___atomic_exchange_n_old = *__cs_param___atomic_exchange_n_previous;
    *__cs_param___atomic_exchange_n_previous = __cs_param___atomic_exchange_n_new;
    return __cs_local___atomic_exchange_n_old;
}


int long long unsigned *__cs_param___atomic_exchange_n_previous, int long long unsigned __cs_param___atomic_exchange_n_new, int __cs_param___atomic_exchange_n_memorder
unsigned long
function '__atomic_thread_fence' ----------------------------------:
void __atomic_thread_fence(int __cs_param___atomic_thread_fence_i)
{
}


int __cs_param___atomic_thread_fence_i
void
function 'swap_stack_top' ----------------------------------:
int swap_stack_top(struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top, struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop, struct lfds711_stack_element **__cs_param_swap_stack_top_newtop)
{
    ;
    _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
    {
        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
        return 1;
    }
    else
    {
        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
        return 0;
    }

}


struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top, struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop, struct lfds711_stack_element **__cs_param_swap_stack_top_newtop
int
function 'exponential_backoff' ----------------------------------:
void exponential_backoff()
{
    int __cs_local_exponential_backoff_loop;
    for (__cs_local_exponential_backoff_loop = 0; __cs_local_exponential_backoff_loop < 10; __cs_local_exponential_backoff_loop)
    {
        ;
    }

}



void
function 'lfds711_misc_internal_backoff_init' ----------------------------------:
void lfds711_misc_internal_backoff_init(struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs)
{
    ;
    _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
    __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
    if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)
    {
        char *__cs_local_lfds711_misc_internal_backoff_init_c;
        __cs_local_lfds711_misc_internal_backoff_init_c = 0;
        *__cs_local_lfds711_misc_internal_backoff_init_c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3;
    __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
    if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3)
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
    __cs_mutex_init(&lock, 0);
    ;
    _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4;
    __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4 = !(__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss != 0);
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
    __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5 = !((((lfds711_pal_uint_t) (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top) % 128) == 0);
    if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5)
    {
        char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
        __cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
        *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6;
    __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state)) % 128) == 0);
    if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6)
    {
        char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
        __cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
        *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
    }

    ;
    ;
    __cs_mutex_lock(&lock);
    (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[0] = 0;
    (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[1] = 0;
    (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state = __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
    lfds711_misc_internal_backoff_init(&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).pop_backoff);
    lfds711_misc_internal_backoff_init(&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).push_backoff);
    lfds711_misc_force_store();
    __cs_mutex_unlock(&lock);
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
    _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
    __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_ss != 0);
    if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)
    {
        char *__cs_local_lfds711_stack_pop_c;
        __cs_local_lfds711_stack_pop_c = 0;
        *__cs_local_lfds711_stack_pop_c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
    __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = !(__cs_param_lfds711_stack_pop_se != 0);
    if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
    {
        char *__cs_local_lfds711_stack_pop_c;
        __cs_local_lfds711_stack_pop_c = 0;
        *__cs_local_lfds711_stack_pop_c = 0;
    }

    ;
    ;
    __cs_mutex_lock(&lock);
    __cs_mutex_unlock(&lock);
    __cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
    __cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
    int __cs_local_lfds711_stack_pop_i;
    __cs_local_lfds711_stack_pop_i = 0;
    ;
    int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
    for (__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0; __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1; __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++)
    {
        ;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
        {
            *__cs_param_lfds711_stack_pop_se = 0;
            return 0;
        }

        __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
        __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
        __cs_mutex_lock(&lock);
        __cs_local_lfds711_stack_pop_result = swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
        __cs_mutex_unlock(&lock);
        ;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
        {
            exponential_backoff();
            __cs_mutex_lock(&lock);
            __cs_mutex_unlock(&lock);
        }

        __cs_local_lfds711_stack_pop_i++;
        ;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 100;
        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
        {
            break;
        }

    }

    while (__cs_local_lfds711_stack_pop_result == 0)
    {
        ;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
        {
            *__cs_param_lfds711_stack_pop_se = 0;
            return 0;
        }

        __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
        __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
        __cs_mutex_lock(&lock);
        __cs_local_lfds711_stack_pop_result = swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
        __cs_mutex_unlock(&lock);
        ;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
        {
            exponential_backoff();
            __cs_mutex_lock(&lock);
            __cs_mutex_unlock(&lock);
        }

        __cs_local_lfds711_stack_pop_i++;
        ;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
        {
            break;
        }

    }

    *__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
    return 1;
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
    _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
    __cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_ss != 0);
    if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)
    {
        char *__cs_local_lfds711_stack_push_c;
        __cs_local_lfds711_stack_push_c = 0;
        *__cs_local_lfds711_stack_push_c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
    __cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = !(__cs_param_lfds711_stack_push_se != 0);
    if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
        __cs_mutex_lock(&lock);
        (*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
        __cs_mutex_unlock(&lock);
        __cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
        __cs_mutex_lock(&lock);
        __cs_local_lfds711_stack_push_result = swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
        __cs_mutex_unlock(&lock);
        ;
        _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
        __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
        if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
        {
            exponential_backoff();
        }

        __cs_local_lfds711_stack_push_i++;
        ;
        _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
        __cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
        if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)
        {
            break;
        }

    }

    return;
}


struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss, struct lfds711_stack_element *__cs_param_lfds711_stack_push_se
void
function 'lfds711_stack_cleanup' ----------------------------------:
void lfds711_stack_cleanup(struct lfds711_stack_state *__cs_param_lfds711_stack_cleanup_ss, void (*__cs_param_lfds711_stack_cleanup_element_cleanup_callback)(struct lfds711_stack_state, struct lfds711_stack_element))
{
    struct lfds711_stack_element *__cs_local_lfds711_stack_cleanup_se;
    struct lfds711_stack_element *__cs_local_lfds711_stack_cleanup_se_temp;
    ;
    _Bool __cs_local_lfds711_stack_cleanup___cs_tmp_if_cond_19;
    __cs_local_lfds711_stack_cleanup___cs_tmp_if_cond_19 = !(__cs_param_lfds711_stack_cleanup_ss != 0);
    if (__cs_local_lfds711_stack_cleanup___cs_tmp_if_cond_19)
    {
        char *__cs_local_lfds711_stack_cleanup_c;
        __cs_local_lfds711_stack_cleanup_c = 0;
        *__cs_local_lfds711_stack_cleanup_c = 0;
    }

    ;
    ;
    __atomic_thread_fence(2);
    ;
    _Bool __cs_local_lfds711_stack_cleanup___cs_tmp_if_cond_20;
    __cs_local_lfds711_stack_cleanup___cs_tmp_if_cond_20 = __cs_param_lfds711_stack_cleanup_element_cleanup_callback != 0;
    if (__cs_local_lfds711_stack_cleanup___cs_tmp_if_cond_20)
    {
        __cs_local_lfds711_stack_cleanup_se = (*__cs_param_lfds711_stack_cleanup_ss).top[0];
        while (__cs_local_lfds711_stack_cleanup_se != 0)
        {
            __cs_local_lfds711_stack_cleanup_se_temp = __cs_local_lfds711_stack_cleanup_se;
            __cs_local_lfds711_stack_cleanup_se = (*__cs_local_lfds711_stack_cleanup_se).next;
            __cs_param_lfds711_stack_cleanup_element_cleanup_callback(__cs_param_lfds711_stack_cleanup_ss, __cs_local_lfds711_stack_cleanup_se_temp);
        }

    }

    return;
}


struct lfds711_stack_state *__cs_param_lfds711_stack_cleanup_ss, void (*__cs_param_lfds711_stack_cleanup_element_cleanup_callback)(struct lfds711_stack_state, struct lfds711_stack_element)
void
function 'push' ----------------------------------:
void *push(void *__cs_param_push___cs_unused)
{
    struct test_data *__cs_local_push_td;
    int long long unsigned __cs_local_push_loop;
    __cs_local_push_td = __cs_safe_malloc((sizeof(struct test_data)) * 3);
    for (__cs_local_push_loop = 0; __cs_local_push_loop < 3; __cs_local_push_loop++)
    {
        ;
        __cs_local_push_td[__cs_local_push_loop].user_id = __cs_local_push_loop;
        __cs_local_push_td[__cs_local_push_loop].se.value = (void *) ((lfds711_pal_uint_t) (&__cs_local_push_td[__cs_local_push_loop]));
        lfds711_stack_push(&ss, &__cs_local_push_td[__cs_local_push_loop].se);
        ;
    }

}


void *__cs_param_push___cs_unused
void *
function 'pop' ----------------------------------:
void *pop(void *__cs_param_pop___cs_unused)
{
    int long long unsigned __cs_local_pop_loop;
    struct lfds711_stack_element *__cs_local_pop_se;
    struct test_data *__cs_local_pop_temp_td;
    int __cs_local_pop_res;
    int __cs_local_pop_count;
    __cs_local_pop_count = 0;
    for (__cs_local_pop_loop = 0; __cs_local_pop_loop < 3; __cs_local_pop_loop++)
    {
        __cs_local_pop_temp_td = 0;
        ;
        __cs_local_pop_res = lfds711_stack_pop(&ss, &__cs_local_pop_se);
        ;
        ;
        _Bool __cs_local_pop___cs_tmp_if_cond_21;
        __cs_local_pop___cs_tmp_if_cond_21 = __cs_local_pop_res == 0;
        if (__cs_local_pop___cs_tmp_if_cond_21)
        {
            continue;
        }

        __cs_local_pop_temp_td = (*__cs_local_pop_se).value;
        __cs_local_pop_count++;
        printf("%llu\n", (*__cs_local_pop_temp_td).user_id);
    }

    __CSEQ_assert(__cs_local_pop_count == 3);
}


void *__cs_param_pop___cs_unused
void *
function 'main' ----------------------------------:
int main()
{
    lfds711_stack_init_valid_on_current_logical_core(&ss, 0);
    __cs_t __cs_local_main_t1;
    __cs_t __cs_local_main_t2;
    __cs_mutex_init(&lock, 0);
    __cs_create(&__cs_local_main_t1, 0, push, 0);
    __cs_create(&__cs_local_main_t2, 0, pop, 0);
    __cs_join(__cs_local_main_t1, 0);
    __cs_join(__cs_local_main_t2, 0);
    return 0;
}



int
Last statement, by function:
function: lfds711_misc_force_store   stmt:     return;

function: __atomic_compare_exchange_n   stmt:     if (__cs_local___atomic_compare_exchange_n___cs_tmp_if_cond_0)
    {
        *__cs_param___atomic_compare_exchange_n_mptr = __cs_param___atomic_compare_exchange_n_newval;
        return 1;
    }
    else
    {
        *__cs_param___atomic_compare_exchange_n_eptr = __cs_param___atomic_compare_exchange_n_newval;
        return 0;
    }


function: __atomic_exchange_n   stmt:     return __cs_local___atomic_exchange_n_old;

function: __atomic_thread_fence   stmt:     return __cs_local___atomic_exchange_n_old;

function: swap_stack_top   stmt:     if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
    {
        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
        return 1;
    }
    else
    {
        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
        return 0;
    }


function: exponential_backoff   stmt:     for (__cs_local_exponential_backoff_loop = 0; __cs_local_exponential_backoff_loop < 10; __cs_local_exponential_backoff_loop)
    {
        ;
    }


function: lfds711_misc_internal_backoff_init   stmt:     return;

function: lfds711_stack_init_valid_on_current_logical_core   stmt:     return;

function: lfds711_stack_pop   stmt:     return 1;

function: lfds711_stack_push   stmt:     return;

function: lfds711_stack_cleanup   stmt:     return;

function: push   stmt:     for (__cs_local_push_loop = 0; __cs_local_push_loop < 3; __cs_local_push_loop++)
    {
        ;
        __cs_local_push_td[__cs_local_push_loop].user_id = __cs_local_push_loop;
        __cs_local_push_td[__cs_local_push_loop].se.value = (void *) ((lfds711_pal_uint_t) (&__cs_local_push_td[__cs_local_push_loop]));
        lfds711_stack_push(&ss, &__cs_local_push_td[__cs_local_push_loop].se);
        ;
    }


function: pop   stmt:     __CSEQ_assert(__cs_local_pop_count == 3);

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
   (415, '__atomic_compare_exchange_n')  
   (416, '__cs_param___atomic_compare_exchange_n_mptr')  
   (417, '__cs_param___atomic_compare_exchange_n_eptr')  
   (418, '__cs_param___atomic_compare_exchange_n_newval')  
   (419, '__cs_param___atomic_compare_exchange_n_weak_p')  
   (420, '__cs_param___atomic_compare_exchange_n_sm')  
   (421, '__cs_param___atomic_compare_exchange_n_fm')  
   (422, '__cs_local___atomic_compare_exchange_n___cs_tmp_if_cond_0')  
   (423, '__atomic_exchange_n')  
   (424, '__cs_param___atomic_exchange_n_previous')  
   (425, '__cs_param___atomic_exchange_n_new')  
   (426, '__cs_param___atomic_exchange_n_memorder')  
   (427, '__cs_local___atomic_exchange_n_old')  
   (428, '__atomic_thread_fence')  
   (429, '__cs_param___atomic_thread_fence_i')  
   (430, 'swap_stack_top')  
   (431, '__cs_param_swap_stack_top_top')  
   (432, '__cs_param_swap_stack_top_oldtop')  
   (433, '__cs_param_swap_stack_top_newtop')  
   (434, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (435, 'exponential_backoff')  
   (436, '__cs_local_exponential_backoff_loop')  
   (437, 'lock')  
   (438, 'lfds711_misc_internal_backoff_init')  
   (439, '__cs_param_lfds711_misc_internal_backoff_init_bs')  
   (440, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2')  
   (441, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (442, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3')  
   (443, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (444, 'lfds711_stack_init_valid_on_current_logical_core')  
   (445, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss')  
   (446, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state')  
   (447, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4')  
   (448, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (449, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5')  
   (450, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (451, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6')  
   (452, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (453, 'lfds711_stack_pop')  
   (454, '__cs_param_lfds711_stack_pop_ss')  
   (455, '__cs_param_lfds711_stack_pop_se')  
   (456, '__cs_local_lfds711_stack_pop_result')  
   (457, '__cs_local_lfds711_stack_pop_backoff_iteration')  
   (458, '__cs_local_lfds711_stack_pop_new_top')  
   (459, '__cs_local_lfds711_stack_pop_original_top')  
   (460, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7')  
   (461, '__cs_local_lfds711_stack_pop_c')  
   (462, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8')  
   (463, '__cs_local_lfds711_stack_pop_c')  
   (464, '__cs_local_lfds711_stack_pop_i')  
   (465, '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1')  
   (466, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9')  
   (467, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10')  
   (468, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (469, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (470, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (471, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14')  
   (472, 'lfds711_stack_push')  
   (473, '__cs_param_lfds711_stack_push_ss')  
   (474, '__cs_param_lfds711_stack_push_se')  
   (475, '__cs_local_lfds711_stack_push_result')  
   (476, '__cs_local_lfds711_stack_push_backoff_iteration')  
   (477, '__cs_local_lfds711_stack_push_new_top')  
   (478, '__cs_local_lfds711_stack_push_original_top')  
   (479, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15')  
   (480, '__cs_local_lfds711_stack_push_c')  
   (481, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (482, '__cs_local_lfds711_stack_push_c')  
   (483, '__cs_local_lfds711_stack_push_i')  
   (484, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (485, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_18')  
   (486, 'lfds711_stack_cleanup')  
   (487, '__cs_param_lfds711_stack_cleanup_ss')  
   (488, '__cs_param_lfds711_stack_cleanup_element_cleanup_callback')  
   (489, 'ss')  
   (490, 'se')  
   (491, '__cs_local_lfds711_stack_cleanup_se')  
   (492, '__cs_local_lfds711_stack_cleanup_se_temp')  
   (493, '__cs_local_lfds711_stack_cleanup___cs_tmp_if_cond_19')  
   (494, '__cs_local_lfds711_stack_cleanup_c')  
   (495, '__cs_local_lfds711_stack_cleanup___cs_tmp_if_cond_20')  
   (496, 'ss')  
   (497, 'lock')  
   (498, 'se')  
   (499, 'user_id')  
   (500, 'push')  
   (501, '__cs_param_push___cs_unused')  
   (502, '__cs_local_push_td')  
   (503, '__cs_local_push_loop')  
   (504, 'pop')  
   (505, '__cs_param_pop___cs_unused')  
   (506, '__cs_local_pop_loop')  
   (507, '__cs_local_pop_se')  
   (508, '__cs_local_pop_temp_td')  
   (509, '__cs_local_pop_res')  
   (510, '__cs_local_pop_count')  
   (511, '__cs_local_pop___cs_tmp_if_cond_21')  
   (512, 'main')  
   (513, '__cs_local_main_t1')  
   (514, '__cs_local_main_t2')  
