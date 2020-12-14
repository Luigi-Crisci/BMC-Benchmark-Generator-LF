list of functions:
   __CSEQ_atomic_swap_stack_top(param: __cs_param___CSEQ_atomic_swap_stack_top_top, __cs_param___CSEQ_atomic_swap_stack_top_oldtop, __cs_param___CSEQ_atomic_swap_stack_top_newtop)  call count 3
   __CSEQ_atomic_compare_and_exchange(param: __cs_param___CSEQ_atomic_compare_and_exchange_mptr, __cs_param___CSEQ_atomic_compare_and_exchange_eptr, __cs_param___CSEQ_atomic_compare_and_exchange_newval, __cs_param___CSEQ_atomic_compare_and_exchange_weak_p, __cs_param___CSEQ_atomic_compare_and_exchange_sm, __cs_param___CSEQ_atomic_compare_and_exchange_fm)  call count 0
   __CSEQ_atomic_exchange(param: __cs_param___CSEQ_atomic_exchange_previous, __cs_param___CSEQ_atomic_exchange_new, __cs_param___CSEQ_atomic_exchange_memorder)  call count 1
   thread1(param: __cs_param_thread1___cs_unused)  call count 0
   main(param: )  call count 0

list of thread functions:
   thread1  call count 1

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
      id29  '__cs_param__baus'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id30  '__cs_param__key_compare_function'  
         type 'int (*)(const void, const void)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id31  '__cs_param__existing_key'  
         type 'enum lfds711_list_aso_existing_key'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id32  '__cs_param__user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id33  '__cs_param__element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id34  '__cs_param__baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id35  '__cs_param__existing_baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id36  '__cs_param__key'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id37  '__cs_param__absolute_position'  
         type 'enum lfds711_btree_au_absolute_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id38  '__cs_param__relative_position'  
         type 'enum lfds711_btree_au_relative_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id48  '__cs_param__fs'  
         type 'struct lfds711_freelist_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id49  '__cs_param__elimination_array'  
         type 'struct lfds711_freelist_element * volatile (*)'  kind 'p'  arity '1'  
         size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id50  '__cs_param__elimination_array_size_in_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id51  '__cs_param__fe'  
         type 'struct lfds711_freelist_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id71  '__cs_param__has'  
         type 'struct lfds711_hash_a_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id72  '__cs_param__baus_array'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id73  '__cs_param__array_size'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id74  '__cs_param__key_hash_function'  
         type 'void (*)(const void, lfds711_pal_uint_t)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id75  '__cs_param__element_cleanup_function'  
         type 'void (*)(struct lfds711_hash_a_state, struct lfds711_hash_a_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id76  '__cs_param__hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id77  '__cs_param__existing_hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id78  '__cs_param__hai'  
         type 'struct lfds711_hash_a_iterate *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id90  '__cs_param__lasos'  
         type 'struct lfds711_list_aso_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id91  '__cs_param__lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id92  '__cs_param__existing_lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id103  '__cs_param__lasus'  
         type 'struct lfds711_list_asu_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id104  '__cs_param__lasue'  
         type 'struct lfds711_list_asu_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id105  '__cs_param__lasue_predecessor'  
         type 'struct lfds711_list_asu_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id106  '__cs_param__position'  
         type 'enum lfds711_list_asu_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id118  '__cs_param__qbmms'  
         type 'struct lfds711_queue_bmm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id119  '__cs_param__element_array'  
         type 'struct lfds711_queue_bss_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id120  '__cs_param__number_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id121  '__cs_param__value'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id130  '__cs_param__qbsss'  
         type 'struct lfds711_queue_bss_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id140  '__cs_param__qumms'  
         type 'struct lfds711_queue_umm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id141  '__cs_param__qumme_dummy'  
         type 'struct lfds711_queue_umm_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id142  '__cs_param__qumme'  
         type 'struct lfds711_queue_umm_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id156  '__cs_param__rs'  
         type 'struct lfds711_ringbuffer_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id157  '__cs_param__re_array_inc_dummy'  
         type 'struct lfds711_ringbuffer_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id158  '__cs_param__number_elements_inc_dummy'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id159  '__cs_param__overwrite_occurred_flag'  
         type 'enum lfds711_misc_flag *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id160  '__cs_param__overwritten_key'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id161  '__cs_param__overwritten_value'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id169  '__cs_param__ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id170  '__cs_param__se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id171  '__cs_param__bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id172  'library_lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[661, 663, 665, 667, 713, 747, 832, 888, 889, 908, 910, 924, 925, 949, 951, 965, 966]'  
         deref '[]'  
         occurs '[661, 663, 665, 667, 713, 747, 832, 888, 889, 908, 910, 924, 925, 949, 951, 965, 966]'  
      id188  'mystack'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[712, 836]'  
         deref '[]'  
         occurs '[712, 836]'  
      id191  'ATOMIC_OPERATION'  
         type 'int'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[612, 698]'  
      id192  'ss'  
         type 'struct lfds711_stack_state *'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[619, 839, 844]'  
      id193  'lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[615, 701, 708]'  
         deref '[]'  
         occurs '[615, 701, 708]'  
   __CSEQ_atomic_swap_stack_top
      id173  '__cs_param___CSEQ_atomic_swap_stack_top_top'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[564, 567, 572]'  
         occurs '[564, 567, 572]'  
      id174  '__cs_param___CSEQ_atomic_swap_stack_top_oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[564, 572]'  
         occurs '[564, 572]'  
      id175  '__cs_param___CSEQ_atomic_swap_stack_top_newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[567]'  
         occurs '[567]'  
      id176  '__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[564, 565]'  
   __CSEQ_atomic_compare_and_exchange
      id177  '__cs_param___CSEQ_atomic_compare_and_exchange_mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[580, 583]'  
         occurs '[580, 583]'  
      id178  '__cs_param___CSEQ_atomic_compare_and_exchange_eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[580, 588]'  
         occurs '[580, 588]'  
      id179  '__cs_param___CSEQ_atomic_compare_and_exchange_newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[583, 588]'  
      id180  '__cs_param___CSEQ_atomic_compare_and_exchange_weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id181  '__cs_param___CSEQ_atomic_compare_and_exchange_sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id182  '__cs_param___CSEQ_atomic_compare_and_exchange_fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id183  '__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[580, 581]'  
   __CSEQ_atomic_exchange
      id184  '__cs_param___CSEQ_atomic_exchange_previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[595, 596]'  
         occurs '[595, 596]'  
      id185  '__cs_param___CSEQ_atomic_exchange_new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[596]'  
      id186  '__cs_param___CSEQ_atomic_exchange_memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id187  '__cs_local___CSEQ_atomic_exchange_old'  
         type 'static unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[595, 597]'  
   thread1
      id194  '__cs_param_thread1___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id195  '__cs_local_thread1___cs_tmp_if_cond_25'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[612, 613]'  
      id196  '__cs_param_insert_s'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[619, 625]'  
      id197  '__cs_param_insert_id'  
         type 'static int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[619, 622]'  
      id198  '__cs_local_insert_td'  
         type 'static struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[622, 623, 625]'  
         occurs '[621, 622, 623, 623, 625]'  
      id199  '__cs_param_lfds711_stack_push_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[654, 655, 666]'  
         occurs '[625, 633, 654, 655, 666]'  
      id200  '__cs_param_lfds711_stack_push_se'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[662]'  
         occurs '[625, 644, 653, 662]'  
      id201  '__cs_local_lfds711_stack_push_result'  
         type 'static char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[656, 659, 666, 670]'  
      id202  '__cs_local_lfds711_stack_push_backoff_iteration'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[628]'  
      id203  '__cs_local_lfds711_stack_push_new_top'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[666]'  
         deref '[]'  
         occurs '[653, 664, 666]'  
      id204  '__cs_local_lfds711_stack_push_original_top'  
         type 'static struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[666]'  
         deref '[]'  
         occurs '[654, 655, 662, 664, 666]'  
      id205  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[633, 634]'  
      id206  '__cs_local_lfds711_stack_push_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[638, 649]'  
         occurs '[637, 638, 648, 649]'  
      id207  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[644, 645]'  
      id208  '__cs_local_lfds711_stack_push_i'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[658, 682, 685]'  
      id209  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[670, 671]'  
      id210  '__cs_local_exponential_backoff_loop'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[675, 675, 675]'  
      id211  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[685, 686]'  
      id212  '__cs_local_thread1___cs_tmp_if_cond_26'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[698, 699]'  
   main
      id213  '__cs_retval__init_1'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[836, 839]'  
      id214  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[727, 738, 748, 749, 750, 752, 784]'  
         occurs '[712, 716, 727, 738, 748, 749, 750, 752, 784]'  
      id215  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state'  
         type 'static void *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[712, 750]'  
      id216  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[716, 717]'  
      id217  '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[721, 732, 743]'  
         occurs '[720, 721, 731, 732, 742, 743]'  
      id218  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[727, 728]'  
      id219  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[738, 739]'  
      id220  '__cs_param_lfds711_misc_internal_backoff_init_bs'  
         type 'static struct lfds711_misc_backoff_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[766, 775, 776, 777, 778, 779, 798, 807, 808, 809, 810, 811]'  
         occurs '[752, 755, 766, 775, 776, 777, 778, 779, 784, 787, 798, 807, 808, 809, 810, 811]'  
      id221  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[755, 756, 787, 788]'  
      id222  '__cs_local_lfds711_misc_internal_backoff_init_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[760, 771, 792, 803]'  
         occurs '[759, 760, 770, 771, 791, 792, 802, 803]'  
      id223  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[766, 767, 798, 799]'  
      id224  '__cs_local_lfds711_misc_force_store_destination'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[816, 820]'  
         deref '[]'  
         occurs '[816, 820]'  
      id225  '__cs_retval____atomic_exchange_n_1'  
         type 'static unsigned long'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[823, 826]'  
      id226  '__cs_param___atomic_exchange_n_previous'  
         type 'static int long long unsigned *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[820, 822]'  
      id227  '__cs_param___atomic_exchange_n_new'  
         type 'static int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[820, 822]'  
      id228  '__cs_param___atomic_exchange_n_memorder'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[820, 822]'  
      id229  '__cs_local___atomic_exchange_n_res'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[822, 823]'  
      id230  '__cs_local_main_t1'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[841]'  
         deref '[]'  
         occurs '[841, 842]'  
      id231  '__cs_param_check_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[844, 849]'  
      id232  '__cs_local_check_ids'  
         type 'static int *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[845, 849, 1000]'  
      id233  '__cs_local_check_size'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[999, 1000]'  
      id234  '__cs_retval__dump_structure_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[987, 996, 999]'  
      id235  '__cs_param_dump_structure_s'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[849, 860]'  
      id236  '__cs_param_dump_structure_size'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[849]'  
      id237  '__cs_param_dump_structure_ids'  
         type 'static int *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[849, 993]'  
      id238  '__cs_local_dump_structure_res'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[851, 856, 981, 984]'  
      id239  '__cs_local_dump_structure_data_structure_size'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[853, 987, 989, 989, 996]'  
      id240  '__cs_local_dump_structure_data'  
         type 'static struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[992, 993]'  
         occurs '[990, 992, 993, 994]'  
      id241  '__cs_local_dump_structure_se'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[860]'  
         deref '[990]'  
         occurs '[860, 990]'  
      id242  '__cs_retval__lfds711_stack_pop_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[904, 945, 978, 981]'  
      id243  '__cs_param_lfds711_stack_pop_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[890, 891, 909, 950]'  
         occurs '[860, 868, 890, 891, 909, 950]'  
      id244  '__cs_param_lfds711_stack_pop_se'  
         type 'static struct lfds711_stack_element **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[903, 944, 977]'  
         occurs '[860, 879, 903, 944, 977]'  
      id245  '__cs_local_lfds711_stack_pop_result'  
         type 'static char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[909, 913, 937, 950, 954, 978]'  
      id246  '__cs_local_lfds711_stack_pop_backoff_iteration'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[863]'  
      id247  '__cs_local_lfds711_stack_pop_new_top'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[909, 950]'  
         deref '[]'  
         occurs '[906, 907, 909, 947, 948, 950]'  
      id248  '__cs_local_lfds711_stack_pop_original_top'  
         type 'static struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[909, 950]'  
         deref '[907, 948]'  
         occurs '[890, 891, 900, 906, 907, 909, 941, 947, 948, 950, 977]'  
      id249  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[868, 869]'  
      id250  '__cs_local_lfds711_stack_pop_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[873, 884]'  
         occurs '[872, 873, 883, 884]'  
      id251  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[879, 880]'  
      id252  '__cs_local_lfds711_stack_pop_i'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[893, 927, 930, 968, 971]'  
      id253  '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[896, 896, 896]'  
      id254  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[900, 901]'  
      id255  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[913, 914]'  
      id256  '__cs_local_exponential_backoff_loop'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[918, 918, 918, 959, 959, 959]'  
      id257  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[930, 931]'  
      id258  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[941, 942]'  
      id259  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[954, 955]'  
      id260  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[971, 972]'  
      id261  '__cs_local_dump_structure___cs_tmp_if_cond_24'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[984, 985]'  
      id262  '__cs_local_dump_structure_id_found'  
         type 'static unsigned long long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[992]'  

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
      id17  'left'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id18  'right'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id19  'up'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id20  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id21  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_btree_au_state
      id22  'root'  type 'struct lfds711_btree_au_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id23  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id24  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id25  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id26  'existing_key'  type 'enum lfds711_btree_au_existing_key'  kind 'f'  arity '0'  size '[]'  
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
      id58  'existing_key'  type 'enum lfds711_hash_a_existing_key'  kind 'f'  arity '0'  size '[]'  
      id59  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id60  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id61  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id62  'array_size'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id63  'baus_array'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id64  '__cs_param__has'  type 'struct lfds711_hash_a_state *'  kind 'f'  arity '0'  size '[]'  
      id65  '__cs_param__hae'  type 'struct lfds711_hash_a_element *'  kind 'f'  arity '0'  size '[]'  
      id66  'element_cleanup_callback'  type 'void (*)(struct lfds711_hash_a_state *__cs_param__has, struct lfds711_hash_a_element *__cs_param__hae)'  kind 'f'  arity '0'  size '[]'  
      id67  '__cs_param__key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id68  '__cs_param__hash'  type 'lfds711_pal_uint_t *'  kind 'f'  arity '0'  size '[]'  
      id69  'key_hash_function'  type 'void (*)(const void *__cs_param__key, lfds711_pal_uint_t *__cs_param__hash)'  kind 'f'  arity '0'  size '[]'  
      id70  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_element
      id79  'next'  type 'struct lfds711_list_aso_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id80  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id81  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_state
      id82  'dummy_element'  type 'struct lfds711_list_aso_element'  kind 'f'  arity '0'  size '[]'  
      id83  'start'  type 'struct lfds711_list_aso_element *'  kind 'f'  arity '0'  size '[]'  
      id84  '__cs_param__new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id85  '__cs_param__existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id86  'key_compare_function'  type 'int (*)(const void *__cs_param__new_key, const void *__cs_param__existing_key)'  kind 'f'  arity '0'  size '[]'  
      id87  'existing_key'  type 'enum lfds711_list_aso_existing_key'  kind 'f'  arity '0'  size '[]'  
      id88  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id89  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_element
      id93  'next'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id94  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id95  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_state
      id96  'dummy_element'  type 'struct lfds711_list_asu_element'  kind 'f'  arity '0'  size '[]'  
      id97  'end'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id98  'start'  type 'struct lfds711_list_asu_element *'  kind 'f'  arity '0'  size '[]'  
      id99  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id100  'after_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id101  'end_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id102  'start_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_element
      id107  'sequence_number'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id108  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id109  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_state
      id110  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id111  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id112  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id113  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id114  'element_array'  type 'struct lfds711_queue_bmm_element *'  kind 'f'  arity '0'  size '[]'  
      id115  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id116  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id117  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_element
      id122  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id123  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_state
      id124  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id125  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id126  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id127  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id128  'element_array'  type 'struct lfds711_queue_bss_element *'  kind 'f'  arity '0'  size '[]'  
      id129  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_element
      id131  'next'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id132  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id133  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_state
      id134  'enqueue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id135  'dequeue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id136  'aba_counter'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id137  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id138  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id139  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_element
      id143  'fe'  type 'struct lfds711_freelist_element'  kind 'f'  arity '0'  size '[]'  
      id144  'qumme'  type 'struct lfds711_queue_umm_element'  kind 'f'  arity '0'  size '[]'  
      id145  'qumme_use'  type 'struct lfds711_queue_umm_element *'  kind 'f'  arity '0'  size '[]'  
      id146  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id147  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_state
      id148  'fs'  type 'struct lfds711_freelist_state'  kind 'f'  arity '0'  size '[]'  
      id149  'qumms'  type 'struct lfds711_queue_umm_state'  kind 'f'  arity '0'  size '[]'  
      id150  '__cs_param__rs'  type 'struct lfds711_ringbuffer_state *'  kind 'f'  arity '0'  size '[]'  
      id151  '__cs_param__key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id152  '__cs_param__value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id153  '__cs_param__unread_flag'  type 'enum lfds711_misc_flag'  kind 'f'  arity '0'  size '[]'  
      id154  'element_cleanup_callback'  type 'void (*)(struct lfds711_ringbuffer_state *__cs_param__rs, void *__cs_param__key, void *__cs_param__value, enum lfds711_misc_flag __cs_param__unread_flag)'  kind 'f'  arity '0'  size '[]'  
      id155  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_element
      id162  'next'  type 'struct lfds711_stack_element *'  kind 'f'  arity '0'  size '[]'  
      id163  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id164  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_state
      id165  'top'  type 'struct lfds711_stack_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id166  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id167  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id168  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   test_data
      id189  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id190  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  

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
   __CSEQ_atomic_swap_stack_top
       var '__cs_param___CSEQ_atomic_swap_stack_top_top'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param___CSEQ_atomic_swap_stack_top_oldtop'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param___CSEQ_atomic_swap_stack_top_newtop'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
   __CSEQ_atomic_compare_and_exchange
       var '__cs_param___CSEQ_atomic_compare_and_exchange_mptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param___CSEQ_atomic_compare_and_exchange_eptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __CSEQ_atomic_exchange
       var '__cs_param___CSEQ_atomic_exchange_previous'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   thread1
       var '__cs_param_thread1___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param_insert_s'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_insert_td'   type 'static struct test_data *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_push_ss'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_push_se'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_push_new_top'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var '__cs_local_lfds711_stack_push_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   
   main
       var '__cs_retval__init_1'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state'   type 'static void *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_misc_internal_backoff_init_bs'   type 'static struct lfds711_misc_backoff_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_misc_internal_backoff_init_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param___atomic_exchange_n_previous'   type 'static int long long unsigned *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_check_ss'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_check_ids'   type 'static int *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_dump_structure_s'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_dump_structure_ids'   type 'static int *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_dump_structure_data'   type 'static struct test_data *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_dump_structure_se'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_pop_ss'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_pop_se'   type 'static struct lfds711_stack_element **'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_pop_new_top'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var '__cs_local_lfds711_stack_pop_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   

Function blocks:
function '__CSEQ_atomic_swap_stack_top' ----------------------------------:
int __CSEQ_atomic_swap_stack_top(struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_top, struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_oldtop, struct lfds711_stack_element **__cs_param___CSEQ_atomic_swap_stack_top_newtop)
{
    ;
    static _Bool __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0;
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
function '__CSEQ_atomic_compare_and_exchange' ----------------------------------:
_Bool __CSEQ_atomic_compare_and_exchange(int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_mptr, int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_eptr, int long long unsigned __cs_param___CSEQ_atomic_compare_and_exchange_newval, _Bool __cs_param___CSEQ_atomic_compare_and_exchange_weak_p, int __cs_param___CSEQ_atomic_compare_and_exchange_sm, int __cs_param___CSEQ_atomic_compare_and_exchange_fm)
{
    ;
    static _Bool __cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18;
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
function '__CSEQ_atomic_exchange' ----------------------------------:
unsigned long __CSEQ_atomic_exchange(int long long unsigned *__cs_param___CSEQ_atomic_exchange_previous, int long long unsigned __cs_param___CSEQ_atomic_exchange_new, int __cs_param___CSEQ_atomic_exchange_memorder)
{
    static unsigned long int __cs_local___CSEQ_atomic_exchange_old;
    __cs_local___CSEQ_atomic_exchange_old = *__cs_param___CSEQ_atomic_exchange_previous;
    *__cs_param___CSEQ_atomic_exchange_previous = __cs_param___CSEQ_atomic_exchange_new;
    return __cs_local___CSEQ_atomic_exchange_old;
}


int long long unsigned *__cs_param___CSEQ_atomic_exchange_previous, int long long unsigned __cs_param___CSEQ_atomic_exchange_new, int __cs_param___CSEQ_atomic_exchange_memorder
unsigned long
function 'thread1' ----------------------------------:
void *thread1(void *__cs_param_thread1___cs_unused)
{
    ;
    static _Bool __cs_local_thread1___cs_tmp_if_cond_25;
    __cs_local_thread1___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
    if (__cs_local_thread1___cs_tmp_if_cond_25)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    {
        static struct lfds711_stack_state *__cs_param_insert_s;
        __cs_param_insert_s = ss;
        static int long long unsigned __cs_param_insert_id;
        __cs_param_insert_id = 0;
        static struct test_data *__cs_local_insert_td;
        __cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
        (*__cs_local_insert_td).user_id = __cs_param_insert_id;
        (*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);
        {
            static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
            __cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
            static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
            __cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
            static char unsigned __cs_local_lfds711_stack_push_result;
            static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
            __cs_local_lfds711_stack_push_backoff_iteration = 0;
            static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
            static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
            ;
            static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
            __cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
            if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)
            {
                static char *__cs_local_lfds711_stack_push_c;
                __cs_local_lfds711_stack_push_c = 0;
                *__cs_local_lfds711_stack_push_c = 0;
            }

            ;
            ;
            ;
            static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
            __cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
            if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)
            {
                static char *__cs_local_lfds711_stack_push_c;
                __cs_local_lfds711_stack_push_c = 0;
                *__cs_local_lfds711_stack_push_c = 0;
            }

            ;
            ;
            __cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
            __cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
            __cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
            __cs_local_lfds711_stack_push_result = 0;
            static int __cs_local_lfds711_stack_push_i;
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
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        for (__cs_local_exponential_backoff_loop = 0; __cs_local_exponential_backoff_loop < 3; __cs_local_exponential_backoff_loop++)
                        {
                            ;
                        }

                        __exit__exponential_backoff_1:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    break;
                }

            }

            goto __exit__lfds711_stack_push_1;
            __exit__lfds711_stack_push_1:
            ;

        }
        __exit__insert_1:
        ;

    }
    ;
    static _Bool __cs_local_thread1___cs_tmp_if_cond_26;
    __cs_local_thread1___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
    if (__cs_local_thread1___cs_tmp_if_cond_26)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
    __exit_thread1:
    ;

    __cs_exit(0);
}


void *__cs_param_thread1___cs_unused
void *
function 'main' ----------------------------------:
int main()
{
    __cs_mutex_init(&lock, 0);
    static struct lfds711_stack_state *__cs_retval__init_1;
    {
        {
            static struct lfds711_stack_state *__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss;
            __cs_param_lfds711_stack_init_valid_on_current_logical_core_ss = &mystack;
            static void *__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
            __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state = 0;
            __cs_mutex_init(&library_lock, 0);
            ;
            static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3;
            __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3 = !(__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss != 0);
            if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3)
            {
                static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                __cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
            }

            ;
            ;
            ;
            static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4;
            __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4 = !((((lfds711_pal_uint_t) (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top) % 128) == 0);
            if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4)
            {
                static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                __cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
            }

            ;
            ;
            ;
            static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5;
            __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state)) % 128) == 0);
            if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5)
            {
                static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                __cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
            }

            ;
            ;
            __cs_mutex_lock(&library_lock);
            (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[0] = 0;
            (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[1] = 0;
            (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state = __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
            {
                static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
                __cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).pop_backoff;
                ;
                static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
                __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
                if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)
                {
                    static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                    __cs_local_lfds711_misc_internal_backoff_init_c = 0;
                    *__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                }

                ;
                ;
                ;
                static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
                __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
                if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)
                {
                    static char *__cs_local_lfds711_misc_internal_backoff_init_c;
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
                goto __exit__lfds711_misc_internal_backoff_init_1;
                __exit__lfds711_misc_internal_backoff_init_1:
                ;

            }
            {
                static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
                __cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).push_backoff;
                ;
                static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
                __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
                if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)
                {
                    static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                    __cs_local_lfds711_misc_internal_backoff_init_c = 0;
                    *__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                }

                ;
                ;
                ;
                static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
                __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
                if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)
                {
                    static char *__cs_local_lfds711_misc_internal_backoff_init_c;
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
                goto __exit__lfds711_misc_internal_backoff_init_2;
                __exit__lfds711_misc_internal_backoff_init_2:
                ;

            }
            {
                static lfds711_pal_uint_t __cs_local_lfds711_misc_force_store_destination;
                __cs_init_scalar(&__cs_local_lfds711_misc_force_store_destination, sizeof(lfds711_pal_uint_t));
                {
                    static unsigned long __cs_retval____atomic_exchange_n_1;
                    {
                        static int long long unsigned *__cs_param___atomic_exchange_n_previous;
                        __cs_param___atomic_exchange_n_previous = &__cs_local_lfds711_misc_force_store_destination;
                        static int long long unsigned __cs_param___atomic_exchange_n_new;
                        __cs_param___atomic_exchange_n_new = 0;
                        static int __cs_param___atomic_exchange_n_memorder;
                        __cs_param___atomic_exchange_n_memorder = 0;
                        static int __cs_local___atomic_exchange_n_res;
                        __cs_local___atomic_exchange_n_res = __CSEQ_atomic_exchange(__cs_param___atomic_exchange_n_previous, __cs_param___atomic_exchange_n_new, __cs_param___atomic_exchange_n_memorder);
                        __cs_retval____atomic_exchange_n_1 = __cs_local___atomic_exchange_n_res;
                        goto __exit____atomic_exchange_n_1;
                        __exit____atomic_exchange_n_1:
                        ;

                    }
                    (void) __cs_retval____atomic_exchange_n_1;
                }
                ;
                goto __exit__lfds711_misc_force_store_1;
                __exit__lfds711_misc_force_store_1:
                ;

            }
            __cs_mutex_unlock(&library_lock);
            goto __exit__lfds711_stack_init_valid_on_current_logical_core_1;
            __exit__lfds711_stack_init_valid_on_current_logical_core_1:
            ;

        }
        __cs_retval__init_1 = &mystack;
        goto __exit__init_1;
        __exit__init_1:
        ;

    }
    ss = __cs_retval__init_1;
    static __cs_t __cs_local_main_t1;
    ;
    __cs_create(&__cs_local_main_t1, 0, thread1, 0);
    __cs_join(__cs_local_main_t1, 0);
    {
        static struct lfds711_stack_state *__cs_param_check_ss;
        __cs_param_check_ss = ss;
        static int *__cs_local_check_ids;
        __cs_local_check_ids = (int *) __cs_safe_malloc((sizeof(int)) * 1);
        static int __cs_local_check_size;
        static int __cs_retval__dump_structure_1;
        {
            static struct lfds711_stack_state *__cs_param_dump_structure_s;
            __cs_param_dump_structure_s = __cs_param_check_ss;
            static int __cs_param_dump_structure_size;
            __cs_param_dump_structure_size = 1;
            static int *__cs_param_dump_structure_ids;
            __cs_param_dump_structure_ids = __cs_local_check_ids;
            static int __cs_local_dump_structure_res;
            __cs_local_dump_structure_res = 1;
            static int __cs_local_dump_structure_data_structure_size;
            __cs_local_dump_structure_data_structure_size = 0;
            static struct test_data *__cs_local_dump_structure_data;
            static struct lfds711_stack_element *__cs_local_dump_structure_se;
            while (__cs_local_dump_structure_res != 0)
            {
                static int __cs_retval__lfds711_stack_pop_1;
                {
                    static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                    __cs_param_lfds711_stack_pop_ss = __cs_param_dump_structure_s;
                    static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                    __cs_param_lfds711_stack_pop_se = &__cs_local_dump_structure_se;
                    static char unsigned __cs_local_lfds711_stack_pop_result;
                    static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                    __cs_local_lfds711_stack_pop_backoff_iteration = 0;
                    static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                    static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                    ;
                    static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                    __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                    if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)
                    {
                        static char *__cs_local_lfds711_stack_pop_c;
                        __cs_local_lfds711_stack_pop_c = 0;
                        *__cs_local_lfds711_stack_pop_c = 0;
                    }

                    ;
                    ;
                    ;
                    static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                    __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                    if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)
                    {
                        static char *__cs_local_lfds711_stack_pop_c;
                        __cs_local_lfds711_stack_pop_c = 0;
                        *__cs_local_lfds711_stack_pop_c = 0;
                    }

                    ;
                    ;
                    __cs_mutex_lock(&library_lock);
                    __cs_mutex_unlock(&library_lock);
                    __cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                    __cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                    static int __cs_local_lfds711_stack_pop_i;
                    __cs_local_lfds711_stack_pop_i = 0;
                    ;
                    static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                    for (__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0; __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1; __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++)
                    {
                        ;
                        static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
                        {
                            *__cs_param_lfds711_stack_pop_se = 0;
                            __cs_retval__lfds711_stack_pop_1 = 0;
                            goto __exit__lfds711_stack_pop_1;
                        }

                        __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                        __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                        __cs_mutex_lock(&library_lock);
                        __cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                        __cs_mutex_unlock(&library_lock);
                        ;
                        static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
                        {
                            {
                                static int __cs_local_exponential_backoff_loop;
                                for (__cs_local_exponential_backoff_loop = 0; __cs_local_exponential_backoff_loop < 3; __cs_local_exponential_backoff_loop++)
                                {
                                    ;
                                }

                                __exit__exponential_backoff_2:
                                ;

                            }
                            __cs_mutex_lock(&library_lock);
                            __cs_mutex_unlock(&library_lock);
                        }

                        __cs_local_lfds711_stack_pop_i++;
                        ;
                        static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                        {
                            break;
                        }

                    }

                    while (__cs_local_lfds711_stack_pop_result == 0)
                    {
                        ;
                        static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                        {
                            *__cs_param_lfds711_stack_pop_se = 0;
                            __cs_retval__lfds711_stack_pop_1 = 0;
                            goto __exit__lfds711_stack_pop_1;
                        }

                        __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                        __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                        __cs_mutex_lock(&library_lock);
                        __cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                        __cs_mutex_unlock(&library_lock);
                        ;
                        static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                        {
                            {
                                static int __cs_local_exponential_backoff_loop;
                                for (__cs_local_exponential_backoff_loop = 0; __cs_local_exponential_backoff_loop < 3; __cs_local_exponential_backoff_loop++)
                                {
                                    ;
                                }

                                __exit__exponential_backoff_3:
                                ;

                            }
                            __cs_mutex_lock(&library_lock);
                            __cs_mutex_unlock(&library_lock);
                        }

                        __cs_local_lfds711_stack_pop_i++;
                        ;
                        static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                        if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                        {
                            break;
                        }

                    }

                    *__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                    __cs_retval__lfds711_stack_pop_1 = __cs_local_lfds711_stack_pop_result;
                    goto __exit__lfds711_stack_pop_1;
                    __exit__lfds711_stack_pop_1:
                    ;

                }
                __cs_local_dump_structure_res = __cs_retval__lfds711_stack_pop_1;
                ;
                static _Bool __cs_local_dump_structure___cs_tmp_if_cond_24;
                __cs_local_dump_structure___cs_tmp_if_cond_24 = __cs_local_dump_structure_res == 0;
                if (__cs_local_dump_structure___cs_tmp_if_cond_24)
                {
                    __cs_retval__dump_structure_1 = __cs_local_dump_structure_data_structure_size;
                    goto __exit__dump_structure_1;
                }

                __cs_local_dump_structure_data_structure_size = __cs_local_dump_structure_data_structure_size + 1;
                __cs_local_dump_structure_data = (*__cs_local_dump_structure_se).value;
                static unsigned long long int __cs_local_dump_structure_id_found;
                __cs_local_dump_structure_id_found = (*__cs_local_dump_structure_data).user_id;
                __cs_param_dump_structure_ids[(*__cs_local_dump_structure_data).user_id] = 1;
                free(__cs_local_dump_structure_data);
            }

            __cs_retval__dump_structure_1 = __cs_local_dump_structure_data_structure_size;
            goto __exit__dump_structure_1;
            __exit__dump_structure_1:
            ;

        }
        __cs_local_check_size = __cs_retval__dump_structure_1;
        __CSEQ_assert((__cs_local_check_size == 1) && (__cs_local_check_ids[0] == 1));
        __exit__check_1:
        ;

    }
    goto __exit_main;
    __exit_main:
    ;

    __cs_exit(0);
}



int
Last statement, by function:
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


function: __CSEQ_atomic_exchange   stmt:     return __cs_local___CSEQ_atomic_exchange_old;

function: thread1   stmt:     __cs_exit(0);

function: main   stmt:     __cs_exit(0);


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
   (21, 'left')  
   (22, 'right')  
   (23, 'up')  
   (24, 'value')  
   (25, 'key')  
   (26, 'root')  
   (27, 'key_compare_function')  
   (28, '__cs_param__new_key')  
   (29, '__cs_param__existing_key')  
   (30, 'existing_key')  
   (31, 'user_state')  
   (32, 'insert_backoff')  
   (33, 'lfds711_btree_au_init_valid_on_current_logical_core')  
   (34, '__cs_param__baus')  
   (35, '__cs_param__key_compare_function')  
   (36, 'new_key')  
   (37, 'existing_key')  
   (38, '__cs_param__existing_key')  
   (39, '__cs_param__user_state')  
   (40, 'lfds711_btree_au_cleanup')  
   (41, '__cs_param__baus')  
   (42, '__cs_param__element_cleanup_callback')  
   (43, 'baus')  
   (44, 'baue')  
   (45, 'lfds711_btree_au_insert')  
   (46, '__cs_param__baus')  
   (47, '__cs_param__baue')  
   (48, '__cs_param__existing_baue')  
   (49, 'lfds711_btree_au_get_by_key')  
   (50, '__cs_param__baus')  
   (51, '__cs_param__key_compare_function')  
   (52, 'new_key')  
   (53, 'existing_key')  
   (54, '__cs_param__key')  
   (55, '__cs_param__baue')  
   (56, 'lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position')  
   (57, '__cs_param__baus')  
   (58, '__cs_param__baue')  
   (59, '__cs_param__absolute_position')  
   (60, '__cs_param__relative_position')  
   (61, 'lfds711_btree_au_get_by_absolute_position')  
   (62, '__cs_param__baus')  
   (63, '__cs_param__baue')  
   (64, '__cs_param__absolute_position')  
   (65, 'lfds711_btree_au_get_by_relative_position')  
   (66, '__cs_param__baue')  
   (67, '__cs_param__relative_position')  
   (68, 'lfds711_btree_au_query')  
   (69, '__cs_param__baus')  
   (70, '__cs_param__query_type')  
   (71, '__cs_param__query_input')  
   (72, '__cs_param__query_output')  
   (73, 'next')  
   (74, 'key')  
   (75, 'value')  
   (76, 'top')  
   (77, 'elimination_array_size_in_elements')  
   (78, 'elimination_array')  
   (79, 'user_state')  
   (80, 'pop_backoff')  
   (81, 'push_backoff')  
   (82, 'lfds711_freelist_init_valid_on_current_logical_core')  
   (83, '__cs_param__fs')  
   (84, '__cs_param__elimination_array')  
   (85, '__cs_param__elimination_array_size_in_elements')  
   (86, '__cs_param__user_state')  
   (87, 'lfds711_freelist_cleanup')  
   (88, '__cs_param__fs')  
   (89, '__cs_param__element_cleanup_callback')  
   (90, 'fs')  
   (91, 'fe')  
   (92, 'lfds711_freelist_push')  
   (93, '__cs_param__fs')  
   (94, '__cs_param__fe')  
   (95, '__cs_param__psts')  
   (96, 'lfds711_freelist_pop')  
   (97, '__cs_param__fs')  
   (98, '__cs_param__fe')  
   (99, '__cs_param__psts')  
   (100, 'lfds711_freelist_query')  
   (101, '__cs_param__fs')  
   (102, '__cs_param__query_type')  
   (103, '__cs_param__query_input')  
   (104, '__cs_param__query_output')  
   (105, 'baue')  
   (106, 'key')  
   (107, 'value')  
   (108, 'baue')  
   (109, 'baus')  
   (110, 'baus_end')  
   (111, 'existing_key')  
   (112, 'key_compare_function')  
   (113, '__cs_param__new_key')  
   (114, '__cs_param__existing_key')  
   (115, 'array_size')  
   (116, 'baus_array')  
   (117, 'element_cleanup_callback')  
   (118, '__cs_param__has')  
   (119, '__cs_param__hae')  
   (120, 'key_hash_function')  
   (121, '__cs_param__key')  
   (122, '__cs_param__hash')  
   (123, 'user_state')  
   (124, 'lfds711_hash_a_init_valid_on_current_logical_core')  
   (125, '__cs_param__has')  
   (126, '__cs_param__baus_array')  
   (127, '__cs_param__array_size')  
   (128, '__cs_param__key_compare_function')  
   (129, 'new_key')  
   (130, 'existing_key')  
   (131, '__cs_param__key_hash_function')  
   (132, 'key')  
   (133, 'hash')  
   (134, '__cs_param__existing_key')  
   (135, '__cs_param__user_state')  
   (136, 'lfds711_hash_a_cleanup')  
   (137, '__cs_param__has')  
   (138, '__cs_param__element_cleanup_function')  
   (139, 'has')  
   (140, 'hae')  
   (141, 'lfds711_hash_a_insert')  
   (142, '__cs_param__has')  
   (143, '__cs_param__hae')  
   (144, '__cs_param__existing_hae')  
   (145, 'lfds711_hash_a_get_by_key')  
   (146, '__cs_param__has')  
   (147, '__cs_param__key_compare_function')  
   (148, 'new_key')  
   (149, 'existing_key')  
   (150, '__cs_param__key_hash_function')  
   (151, 'key')  
   (152, 'hash')  
   (153, '__cs_param__key')  
   (154, '__cs_param__hae')  
   (155, 'lfds711_hash_a_iterate_init')  
   (156, '__cs_param__has')  
   (157, '__cs_param__hai')  
   (158, 'lfds711_hash_a_iterate')  
   (159, '__cs_param__hai')  
   (160, '__cs_param__hae')  
   (161, 'lfds711_hash_a_query')  
   (162, '__cs_param__has')  
   (163, '__cs_param__query_type')  
   (164, '__cs_param__query_input')  
   (165, '__cs_param__query_output')  
   (166, 'next')  
   (167, 'value')  
   (168, 'key')  
   (169, 'dummy_element')  
   (170, 'start')  
   (171, 'key_compare_function')  
   (172, '__cs_param__new_key')  
   (173, '__cs_param__existing_key')  
   (174, 'existing_key')  
   (175, 'user_state')  
   (176, 'insert_backoff')  
   (177, 'lfds711_list_aso_init_valid_on_current_logical_core')  
   (178, '__cs_param__lasos')  
   (179, '__cs_param__key_compare_function')  
   (180, 'new_key')  
   (181, 'existing_key')  
   (182, '__cs_param__existing_key')  
   (183, '__cs_param__user_state')  
   (184, 'lfds711_list_aso_cleanup')  
   (185, '__cs_param__lasos')  
   (186, '__cs_param__element_cleanup_callback')  
   (187, 'lasos')  
   (188, 'lasoe')  
   (189, 'lfds711_list_aso_insert')  
   (190, '__cs_param__lasos')  
   (191, '__cs_param__lasoe')  
   (192, '__cs_param__existing_lasoe')  
   (193, 'lfds711_list_aso_get_by_key')  
   (194, '__cs_param__lasos')  
   (195, '__cs_param__key')  
   (196, '__cs_param__lasoe')  
   (197, 'lfds711_list_aso_query')  
   (198, '__cs_param__lasos')  
   (199, '__cs_param__query_type')  
   (200, '__cs_param__query_input')  
   (201, '__cs_param__query_output')  
   (202, 'next')  
   (203, 'value')  
   (204, 'key')  
   (205, 'dummy_element')  
   (206, 'end')  
   (207, 'start')  
   (208, 'user_state')  
   (209, 'after_backoff')  
   (210, 'end_backoff')  
   (211, 'start_backoff')  
   (212, 'lfds711_list_asu_init_valid_on_current_logical_core')  
   (213, '__cs_param__lasus')  
   (214, '__cs_param__user_state')  
   (215, 'lfds711_list_asu_cleanup')  
   (216, '__cs_param__lasus')  
   (217, '__cs_param__element_cleanup_callback')  
   (218, 'lasus')  
   (219, 'lasue')  
   (220, 'lfds711_list_asu_insert_at_position')  
   (221, '__cs_param__lasus')  
   (222, '__cs_param__lasue')  
   (223, '__cs_param__lasue_predecessor')  
   (224, '__cs_param__position')  
   (225, 'lfds711_list_asu_insert_at_start')  
   (226, '__cs_param__lasus')  
   (227, '__cs_param__lasue')  
   (228, 'lfds711_list_asu_insert_at_end')  
   (229, '__cs_param__lasus')  
   (230, '__cs_param__lasue')  
   (231, 'lfds711_list_asu_insert_after_element')  
   (232, '__cs_param__lasus')  
   (233, '__cs_param__lasue')  
   (234, '__cs_param__lasue_predecessor')  
   (235, 'lfds711_list_asu_get_by_key')  
   (236, '__cs_param__lasus')  
   (237, '__cs_param__key_compare_function')  
   (238, 'new_key')  
   (239, 'existing_key')  
   (240, '__cs_param__key')  
   (241, '__cs_param__lasue')  
   (242, 'lfds711_list_asu_query')  
   (243, '__cs_param__lasus')  
   (244, '__cs_param__query_type')  
   (245, '__cs_param__query_input')  
   (246, '__cs_param__query_output')  
   (247, 'sequence_number')  
   (248, 'key')  
   (249, 'value')  
   (250, 'number_elements')  
   (251, 'mask')  
   (252, 'read_index')  
   (253, 'write_index')  
   (254, 'element_array')  
   (255, 'user_state')  
   (256, 'dequeue_backoff')  
   (257, 'enqueue_backoff')  
   (258, 'lfds711_queue_bmm_init_valid_on_current_logical_core')  
   (259, '__cs_param__qbmms')  
   (260, '__cs_param__element_array')  
   (261, '__cs_param__number_elements')  
   (262, '__cs_param__user_state')  
   (263, 'lfds711_queue_bmm_cleanup')  
   (264, '__cs_param__qbmms')  
   (265, '__cs_param__element_cleanup_callback')  
   (266, 'qbmms')  
   (267, 'key')  
   (268, 'value')  
   (269, 'lfds711_queue_bmm_enqueue')  
   (270, '__cs_param__qbmms')  
   (271, '__cs_param__key')  
   (272, '__cs_param__value')  
   (273, 'lfds711_queue_bmm_dequeue')  
   (274, '__cs_param__qbmms')  
   (275, '__cs_param__key')  
   (276, '__cs_param__value')  
   (277, 'lfds711_queue_bmm_query')  
   (278, '__cs_param__qbmms')  
   (279, '__cs_param__query_type')  
   (280, '__cs_param__query_input')  
   (281, '__cs_param__query_output')  
   (282, 'key')  
   (283, 'value')  
   (284, 'number_elements')  
   (285, 'mask')  
   (286, 'read_index')  
   (287, 'write_index')  
   (288, 'element_array')  
   (289, 'user_state')  
   (290, 'lfds711_queue_bss_init_valid_on_current_logical_core')  
   (291, '__cs_param__qbsss')  
   (292, '__cs_param__element_array')  
   (293, '__cs_param__number_elements')  
   (294, '__cs_param__user_state')  
   (295, 'lfds711_queue_bss_cleanup')  
   (296, '__cs_param__qbsss')  
   (297, '__cs_param__element_cleanup_callback')  
   (298, 'qbsss')  
   (299, 'key')  
   (300, 'value')  
   (301, 'lfds711_queue_bss_enqueue')  
   (302, '__cs_param__qbsss')  
   (303, '__cs_param__key')  
   (304, '__cs_param__value')  
   (305, 'lfds711_queue_bss_dequeue')  
   (306, '__cs_param__qbsss')  
   (307, '__cs_param__key')  
   (308, '__cs_param__value')  
   (309, 'lfds711_queue_bss_query')  
   (310, '__cs_param__qbsss')  
   (311, '__cs_param__query_type')  
   (312, '__cs_param__query_input')  
   (313, '__cs_param__query_output')  
   (314, 'next')  
   (315, 'key')  
   (316, 'value')  
   (317, 'enqueue')  
   (318, 'dequeue')  
   (319, 'aba_counter')  
   (320, 'user_state')  
   (321, 'dequeue_backoff')  
   (322, 'enqueue_backoff')  
   (323, 'lfds711_queue_umm_init_valid_on_current_logical_core')  
   (324, '__cs_param__qumms')  
   (325, '__cs_param__qumme_dummy')  
   (326, '__cs_param__user_state')  
   (327, 'lfds711_queue_umm_cleanup')  
   (328, '__cs_param__qumms')  
   (329, '__cs_param__element_cleanup_callback')  
   (330, 'qumms')  
   (331, 'qumme')  
   (332, 'dummy_element_flag')  
   (333, 'lfds711_queue_umm_enqueue')  
   (334, '__cs_param__qumms')  
   (335, '__cs_param__qumme')  
   (336, 'lfds711_queue_umm_dequeue')  
   (337, '__cs_param__qumms')  
   (338, '__cs_param__qumme')  
   (339, 'lfds711_queue_umm_query')  
   (340, '__cs_param__qumms')  
   (341, '__cs_param__query_type')  
   (342, '__cs_param__query_input')  
   (343, '__cs_param__query_output')  
   (344, 'fe')  
   (345, 'qumme')  
   (346, 'qumme_use')  
   (347, 'key')  
   (348, 'value')  
   (349, 'fs')  
   (350, 'qumms')  
   (351, 'element_cleanup_callback')  
   (352, '__cs_param__rs')  
   (353, '__cs_param__key')  
   (354, '__cs_param__value')  
   (355, '__cs_param__unread_flag')  
   (356, 'user_state')  
   (357, 'lfds711_ringbuffer_init_valid_on_current_logical_core')  
   (358, '__cs_param__rs')  
   (359, '__cs_param__re_array_inc_dummy')  
   (360, '__cs_param__number_elements_inc_dummy')  
   (361, '__cs_param__user_state')  
   (362, 'lfds711_ringbuffer_cleanup')  
   (363, '__cs_param__rs')  
   (364, '__cs_param__element_cleanup_callback')  
   (365, 'rs')  
   (366, 'key')  
   (367, 'value')  
   (368, 'unread_flag')  
   (369, 'lfds711_ringbuffer_read')  
   (370, '__cs_param__rs')  
   (371, '__cs_param__key')  
   (372, '__cs_param__value')  
   (373, 'lfds711_ringbuffer_write')  
   (374, '__cs_param__rs')  
   (375, '__cs_param__key')  
   (376, '__cs_param__value')  
   (377, '__cs_param__overwrite_occurred_flag')  
   (378, '__cs_param__overwritten_key')  
   (379, '__cs_param__overwritten_value')  
   (380, 'lfds711_ringbuffer_query')  
   (381, '__cs_param__rs')  
   (382, '__cs_param__query_type')  
   (383, '__cs_param__query_input')  
   (384, '__cs_param__query_output')  
   (385, 'next')  
   (386, 'key')  
   (387, 'value')  
   (388, 'top')  
   (389, 'user_state')  
   (390, 'pop_backoff')  
   (391, 'push_backoff')  
   (392, 'lfds711_stack_init_valid_on_current_logical_core')  
   (393, '__cs_param__ss')  
   (394, '__cs_param__user_state')  
   (395, 'lfds711_stack_cleanup')  
   (396, '__cs_param__ss')  
   (397, '__cs_param__element_cleanup_callback')  
   (398, 'ss')  
   (399, 'se')  
   (400, 'lfds711_stack_push')  
   (401, '__cs_param__ss')  
   (402, '__cs_param__se')  
   (403, 'lfds711_stack_pop')  
   (404, '__cs_param__ss')  
   (405, '__cs_param__se')  
   (406, 'lfds711_stack_query')  
   (407, '__cs_param__ss')  
   (408, '__cs_param__query_type')  
   (409, '__cs_param__query_input')  
   (410, '__cs_param__query_output')  
   (411, 'lfds711_misc_internal_backoff_init')  
   (412, '__cs_param__bs')  
   (413, 'library_lock')  
   (414, '__CSEQ_atomic_swap_stack_top')  
   (415, '__cs_param___CSEQ_atomic_swap_stack_top_top')  
   (416, '__cs_param___CSEQ_atomic_swap_stack_top_oldtop')  
   (417, '__cs_param___CSEQ_atomic_swap_stack_top_newtop')  
   (418, '__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0')  
   (419, '__CSEQ_atomic_compare_and_exchange')  
   (420, '__cs_param___CSEQ_atomic_compare_and_exchange_mptr')  
   (421, '__cs_param___CSEQ_atomic_compare_and_exchange_eptr')  
   (422, '__cs_param___CSEQ_atomic_compare_and_exchange_newval')  
   (423, '__cs_param___CSEQ_atomic_compare_and_exchange_weak_p')  
   (424, '__cs_param___CSEQ_atomic_compare_and_exchange_sm')  
   (425, '__cs_param___CSEQ_atomic_compare_and_exchange_fm')  
   (426, '__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18')  
   (427, '__CSEQ_atomic_exchange')  
   (428, '__cs_param___CSEQ_atomic_exchange_previous')  
   (429, '__cs_param___CSEQ_atomic_exchange_new')  
   (430, '__cs_param___CSEQ_atomic_exchange_memorder')  
   (431, '__cs_local___CSEQ_atomic_exchange_old')  
   (432, 'mystack')  
   (433, 'se')  
   (434, 'user_id')  
   (435, 'ATOMIC_OPERATION')  
   (436, 'ss')  
   (437, 'lock')  
   (438, 'thread1')  
   (439, '__cs_param_thread1___cs_unused')  
   (440, '__cs_local_thread1___cs_tmp_if_cond_25')  
   (441, '__cs_param_insert_s')  
   (442, '__cs_param_insert_id')  
   (443, '__cs_local_insert_td')  
   (444, '__cs_param_lfds711_stack_push_ss')  
   (445, '__cs_param_lfds711_stack_push_se')  
   (446, '__cs_local_lfds711_stack_push_result')  
   (447, '__cs_local_lfds711_stack_push_backoff_iteration')  
   (448, '__cs_local_lfds711_stack_push_new_top')  
   (449, '__cs_local_lfds711_stack_push_original_top')  
   (450, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14')  
   (451, '__cs_local_lfds711_stack_push_c')  
   (452, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15')  
   (453, '__cs_local_lfds711_stack_push_c')  
   (454, '__cs_local_lfds711_stack_push_i')  
   (455, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (456, '__cs_local_exponential_backoff_loop')  
   (457, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (458, '__cs_local_thread1___cs_tmp_if_cond_26')  
   (459, 'main')  
   (460, '__cs_retval__init_1')  
   (461, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss')  
   (462, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state')  
   (463, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3')  
   (464, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (465, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4')  
   (466, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (467, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5')  
   (468, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (469, '__cs_param_lfds711_misc_internal_backoff_init_bs')  
   (470, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1')  
   (471, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (472, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2')  
   (473, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (474, '__cs_param_lfds711_misc_internal_backoff_init_bs')  
   (475, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1')  
   (476, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (477, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2')  
   (478, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (479, '__cs_local_lfds711_misc_force_store_destination')  
   (480, '__cs_retval____atomic_exchange_n_1')  
   (481, '__cs_param___atomic_exchange_n_previous')  
   (482, '__cs_param___atomic_exchange_n_new')  
   (483, '__cs_param___atomic_exchange_n_memorder')  
   (484, '__cs_local___atomic_exchange_n_res')  
   (485, '__cs_local_main_t1')  
   (486, '__cs_param_check_ss')  
   (487, '__cs_local_check_ids')  
   (488, '__cs_local_check_size')  
   (489, '__cs_retval__dump_structure_1')  
   (490, '__cs_param_dump_structure_s')  
   (491, '__cs_param_dump_structure_size')  
   (492, '__cs_param_dump_structure_ids')  
   (493, '__cs_local_dump_structure_res')  
   (494, '__cs_local_dump_structure_data_structure_size')  
   (495, '__cs_local_dump_structure_data')  
   (496, '__cs_local_dump_structure_se')  
   (497, '__cs_retval__lfds711_stack_pop_1')  
   (498, '__cs_param_lfds711_stack_pop_ss')  
   (499, '__cs_param_lfds711_stack_pop_se')  
   (500, '__cs_local_lfds711_stack_pop_result')  
   (501, '__cs_local_lfds711_stack_pop_backoff_iteration')  
   (502, '__cs_local_lfds711_stack_pop_new_top')  
   (503, '__cs_local_lfds711_stack_pop_original_top')  
   (504, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6')  
   (505, '__cs_local_lfds711_stack_pop_c')  
   (506, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7')  
   (507, '__cs_local_lfds711_stack_pop_c')  
   (508, '__cs_local_lfds711_stack_pop_i')  
   (509, '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1')  
   (510, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8')  
   (511, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9')  
   (512, '__cs_local_exponential_backoff_loop')  
   (513, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10')  
   (514, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (515, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (516, '__cs_local_exponential_backoff_loop')  
   (517, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (518, '__cs_local_dump_structure___cs_tmp_if_cond_24')  
   (519, '__cs_local_dump_structure_id_found')  
