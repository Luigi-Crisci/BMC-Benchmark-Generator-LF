list of functions:
   assert_create(param: ss, size)  call count 0
   lfds711_misc_force_store(param: )  call count 1
   exponential_backoff(param: )  call count 3
   __CSEQ_atomic_swap_stack_top(param: top, oldtop, newtop)  call count 3
   lfds711_misc_internal_backoff_init(param: bs)  call count 2
   lfds711_stack_init_valid_on_current_logical_core(param: ss, user_state)  call count 1
   lfds711_stack_pop(param: ss, se)  call count 4
   lfds711_stack_push(param: ss, se)  call count 3
   __CSEQ_atomic_compare_and_exchange(param: mptr, eptr, newval, weak_p, sm, fm)  call count 1
   __atomic_compare_exchange_n(param: mptr, eptr, newval, weak_p, sm, fm)  call count 0
   __CSEQ_atomic_exchange(param: previous, new, memorder)  call count 1
   __atomic_exchange_n(param: previous, new, memorder)  call count 0
   __atomic_thread_fence(param: i)  call count 0
   init(param: )  call count 1
   insert(param: s, id)  call count 2
   delete(param: s)  call count 2
   contains(param: s, id)  call count 0
   get_size(param: s)  call count 0
   is_empty(param: s)  call count 0
   push(param: __cs_unused)  call count 0
   pop(param: __cs_unused)  call count 0
   main(param: )  call count 0

list of thread functions:
   push  call count 1
   pop  call count 1

parameters for main():
   (no params)

Variables:
   (global)
      id4  'ps'  
         type 'struct lfds711_prng_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id5  'seed'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id6  'psts'  
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
      id16  'query_type'  
         type 'enum lfds711_stack_query'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id17  'query_input'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id18  'query_output'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id31  'baus'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id32  'key_compare_function'  
         type 'int (*)(const void, const void)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id33  'existing_key'  
         type 'const void'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id34  'user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id35  'element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id36  'baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id37  'existing_baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id38  'key'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id39  'absolute_position'  
         type 'enum lfds711_btree_au_absolute_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id40  'relative_position'  
         type 'enum lfds711_btree_au_relative_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id50  'fs'  
         type 'struct lfds711_freelist_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id51  'elimination_array'  
         type 'struct lfds711_freelist_element * volatile (*)'  kind 'p'  arity '1'  
         size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id52  'elimination_array_size_in_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id53  'fe'  
         type 'struct lfds711_freelist_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id72  'has'  
         type 'struct lfds711_hash_a_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id73  'baus_array'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id74  'array_size'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id75  'key_hash_function'  
         type 'void (*)(const void, lfds711_pal_uint_t)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id76  'element_cleanup_function'  
         type 'void (*)(struct lfds711_hash_a_state, struct lfds711_hash_a_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id77  'hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id78  'existing_hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id79  'hai'  
         type 'struct lfds711_hash_a_iterate *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id90  'lasos'  
         type 'struct lfds711_list_aso_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id91  'lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id92  'existing_lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id103  'lasus'  
         type 'struct lfds711_list_asu_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id104  'lasue'  
         type 'struct lfds711_list_asu_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id105  'lasue_predecessor'  
         type 'struct lfds711_list_asu_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id106  'position'  
         type 'enum lfds711_list_asu_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id118  'qbmms'  
         type 'struct lfds711_queue_bmm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id119  'element_array'  
         type 'struct lfds711_queue_bss_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id120  'number_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id121  'value'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id130  'qbsss'  
         type 'struct lfds711_queue_bss_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id140  'qumms'  
         type 'struct lfds711_queue_umm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id141  'qumme_dummy'  
         type 'struct lfds711_queue_umm_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id142  'qumme'  
         type 'struct lfds711_queue_umm_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id156  'rs'  
         type 'struct lfds711_ringbuffer_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id157  're_array_inc_dummy'  
         type 'struct lfds711_ringbuffer_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id158  'number_elements_inc_dummy'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id159  'overwrite_occurred_flag'  
         type 'enum lfds711_misc_flag *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id160  'overwritten_key'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id161  'overwritten_value'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id169  'ss'  
         type 'void *'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[981, 994, 1016, 1029, 1040]'  
      id170  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id171  'bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id172  'library_lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[625, 653, 660, 689, 690, 707, 709, 714, 715, 735, 737, 742, 743, 789, 791, 793, 795]'  
         deref '[]'  
         occurs '[625, 653, 660, 689, 690, 707, 709, 714, 715, 735, 737, 742, 743, 789, 791, 793, 795]'  
      id240  'mystack'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[854, 855, 870]'  
         deref '[]'  
         occurs '[854, 855, 870]'  
      id277  'ATOMIC_OPERATION'  
         type 'int'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[973, 982, 988, 995, 1008, 1017, 1023, 1030]'  
      id278  'lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[976, 985, 991, 998, 1011, 1020, 1026, 1033, 1039]'  
         deref '[]'  
         occurs '[976, 985, 991, 998, 1011, 1020, 1026, 1033, 1039]'  
   assert_create
      id0  'ss'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id1  'size'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   lfds711_misc_force_store
      id19  'destination'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[205]'  
         deref '[]'  
         occurs '[205]'  
   exponential_backoff
      id173  'loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[575, 575, 575]'  
   __CSEQ_atomic_swap_stack_top
      id174  'top'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[583, 586, 591]'  
         occurs '[583, 586, 591]'  
      id175  'oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[583, 591]'  
         occurs '[583, 591]'  
      id176  'newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[586]'  
         occurs '[586]'  
      id177  '__cs_tmp_if_cond_0'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[583, 584]'  
   lfds711_misc_internal_backoff_init
      id178  'bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[606, 615, 616, 617, 618, 619]'  
         occurs '[597, 606, 615, 616, 617, 618, 619]'  
      id179  '__cs_tmp_if_cond_1'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[597, 598]'  
      id180  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[602, 611]'  
         occurs '[601, 602, 610, 611]'  
      id181  '__cs_tmp_if_cond_2'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[606, 607]'  
   lfds711_stack_init_valid_on_current_logical_core
      id182  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[635, 644, 654, 655, 656, 657, 658]'  
         occurs '[626, 635, 644, 654, 655, 656, 657, 658]'  
      id183  'user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[656]'  
      id184  '__cs_tmp_if_cond_3'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[626, 627]'  
      id185  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[631, 640, 649]'  
         occurs '[630, 631, 639, 640, 648, 649]'  
      id186  '__cs_tmp_if_cond_4'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[635, 636]'  
      id187  '__cs_tmp_if_cond_5'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[644, 645]'  
   lfds711_stack_pop
      id188  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[691, 692, 708, 736]'  
         occurs '[671, 691, 692, 708, 736]'  
      id189  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[702, 730, 752]'  
         occurs '[680, 702, 730, 752]'  
      id190  'result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[708, 710, 725, 736, 738, 753]'  
      id191  'backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[668]'  
      id192  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[708, 736]'  
         deref '[]'  
         occurs '[705, 706, 708, 733, 734, 736]'  
      id193  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[708, 736]'  
         deref '[706, 734]'  
         occurs '[691, 692, 699, 705, 706, 708, 727, 733, 734, 736, 752]'  
      id194  '__cs_tmp_if_cond_6'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[671, 672]'  
      id195  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[676, 685]'  
         occurs '[675, 676, 684, 685]'  
      id196  '__cs_tmp_if_cond_7'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[680, 681]'  
      id197  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[694, 717, 718, 745, 746]'  
      id198  '__cs_dowhile_onetime_1'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[697, 697, 697]'  
      id199  '__cs_tmp_if_cond_8'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[699, 700]'  
      id200  '__cs_tmp_if_cond_9'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[710, 711]'  
      id201  '__cs_tmp_if_cond_10'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[718, 719]'  
      id202  '__cs_tmp_if_cond_11'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[727, 728]'  
      id203  '__cs_tmp_if_cond_12'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[738, 739]'  
      id204  '__cs_tmp_if_cond_13'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[746, 747]'  
   lfds711_stack_push
      id205  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[782, 783, 794]'  
         occurs '[763, 782, 783, 794]'  
      id206  'se'  
         type 'struct lfds711_stack_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[790]'  
         occurs '[772, 781, 790]'  
      id207  'result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[784, 787, 794, 796]'  
      id208  'backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[760]'  
      id209  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[794]'  
         deref '[]'  
         occurs '[781, 792, 794]'  
      id210  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[794]'  
         deref '[]'  
         occurs '[782, 783, 790, 792, 794]'  
      id211  '__cs_tmp_if_cond_14'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[763, 764]'  
      id212  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[768, 777]'  
         occurs '[767, 768, 776, 777]'  
      id213  '__cs_tmp_if_cond_15'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[772, 773]'  
      id214  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[786, 801, 802]'  
      id215  '__cs_tmp_if_cond_16'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[796, 797]'  
      id216  '__cs_tmp_if_cond_17'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[802, 803]'  
   __CSEQ_atomic_compare_and_exchange
      id217  'mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[812, 815]'  
         occurs '[812, 815]'  
      id218  'eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[812, 820]'  
         occurs '[812, 820]'  
      id219  'newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[815, 820]'  
      id220  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id221  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id222  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id223  '__cs_tmp_if_cond_18'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[812, 813]'  
   __atomic_compare_exchange_n
      id224  'mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[827]'  
      id225  'eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[827]'  
      id226  'newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[827]'  
      id227  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[827]'  
      id228  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[827]'  
      id229  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[827]'  
      id230  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[827, 828]'  
   __CSEQ_atomic_exchange
      id231  'previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[833, 834]'  
         occurs '[833, 834]'  
      id232  'new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[834]'  
      id233  'memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id234  'old'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[833, 835]'  
   __atomic_exchange_n
      id235  'previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[840]'  
      id236  'new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[840]'  
      id237  'memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[840]'  
      id238  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[840, 841]'  
   __atomic_thread_fence
      id239  'i'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   init
   insert
      id243  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[863]'  
      id244  'id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[861]'  
      id245  'td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[861, 862, 863]'  
         occurs '[860, 861, 862, 862, 863]'  
   delete
      id246  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id247  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[870]'  
         deref '[876]'  
         occurs '[870, 876]'  
      id248  'temp_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[878, 879]'  
         occurs '[876, 878, 879]'  
      id249  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[870, 871, 874, 880]'  
      id250  '__cs_tmp_if_cond_19'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[871, 872]'  
      id251  'id_popped'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[878]'  
   contains
      id252  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[899, 917]'  
      id253  'id'  
         type 'unsigned long long int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[906]'  
      id254  'max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[885, 895]'  
      id255  'actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[887, 905, 906, 911, 911, 915]'  
      id256  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[889, 897, 899, 900]'  
      id257  'found'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[891, 897, 909, 920]'  
      id258  'dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[893]'  
      id259  'datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[906, 917]'  
         occurs '[895, 905, 906, 917]'  
      id260  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[899]'  
         deref '[905]'  
         occurs '[899, 905]'  
      id261  '__cs_tmp_if_cond_20'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[900, 901]'  
      id262  '__cs_tmp_if_cond_21'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[906, 907]'  
      id263  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[914, 915, 917, 918]'  
   get_size
      id264  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[937, 949]'  
      id265  'max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[925, 933]'  
      id266  'actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[927, 943, 943, 947, 952]'  
      id267  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[929, 935, 937, 938]'  
      id268  'dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[931]'  
      id269  'datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[949]'  
         occurs '[933, 949]'  
      id270  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[937]'  
         deref '[]'  
         occurs '[937]'  
      id271  '__cs_tmp_if_cond_22'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[938, 939]'  
      id272  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[946, 947, 949, 950]'  
   is_empty
      id273  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[958, 962]'  
      id274  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[958]'  
         deref '[]'  
         occurs '[958, 962]'  
      id275  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[958, 959]'  
      id276  '__cs_tmp_if_cond_23'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[959, 960]'  
   push
      id279  '__cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id280  'loop'  
         type 'int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id281  '__cs_tmp_if_cond_24'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[973, 974]'  
      id282  'qwerty'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[980]'  
      id283  '__cs_tmp_if_cond_25'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[982, 983]'  
      id284  '__cs_tmp_if_cond_26'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[988, 989]'  
      id285  '__cs_tmp_if_cond_27'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[995, 996]'  
   pop
      id286  '__cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id287  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id288  'count'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1006]'  
      id289  'loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id290  '__cs_tmp_if_cond_28'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1008, 1009]'  
      id291  'ytrewq'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1015]'  
      id292  '__cs_tmp_if_cond_29'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1017, 1018]'  
      id293  '__cs_tmp_if_cond_30'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1023, 1024]'  
      id294  '__cs_tmp_if_cond_31'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1030, 1031]'  
   main
      id295  't1'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1051]'  
         deref '[]'  
         occurs '[1051, 1053]'  
      id296  't2'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id297  't3'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id298  't4'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id299  't5'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id300  't6'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1052]'  
         deref '[]'  
         occurs '[1052, 1054]'  
      id301  't7'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id302  't8'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id303  't9'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id304  't10'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  

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
      id26  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id27  'existing_key'  type 'enum lfds711_btree_au_existing_key'  kind 'f'  arity '0'  size '[]'  
      id28  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
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
      id60  'existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id61  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id62  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id63  'array_size'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id64  'baus_array'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id65  'has'  type 'struct lfds711_hash_a_state *'  kind 'f'  arity '0'  size '[]'  
      id66  'hae'  type 'struct lfds711_hash_a_element *'  kind 'f'  arity '0'  size '[]'  
      id67  'element_cleanup_callback'  type 'void (*)(struct lfds711_hash_a_state *has, struct lfds711_hash_a_element *hae)'  kind 'f'  arity '0'  size '[]'  
      id68  'key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id69  'hash'  type 'lfds711_pal_uint_t *'  kind 'f'  arity '0'  size '[]'  
      id70  'key_hash_function'  type 'void (*)(const void *key, lfds711_pal_uint_t *hash)'  kind 'f'  arity '0'  size '[]'  
      id71  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_element
      id80  'next'  type 'struct lfds711_list_aso_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id81  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id82  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_state
      id83  'dummy_element'  type 'struct lfds711_list_aso_element'  kind 'f'  arity '0'  size '[]'  
      id84  'start'  type 'struct lfds711_list_aso_element *'  kind 'f'  arity '0'  size '[]'  
      id85  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id86  'existing_key'  type 'enum lfds711_list_aso_existing_key'  kind 'f'  arity '0'  size '[]'  
      id87  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
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
      id150  'rs'  type 'struct lfds711_ringbuffer_state *'  kind 'f'  arity '0'  size '[]'  
      id151  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id152  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id153  'unread_flag'  type 'enum lfds711_misc_flag'  kind 'f'  arity '0'  size '[]'  
      id154  'element_cleanup_callback'  type 'void (*)(struct lfds711_ringbuffer_state *rs, void *key, void *value, enum lfds711_misc_flag unread_flag)'  kind 'f'  arity '0'  size '[]'  
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
      id241  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id242  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  

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
   assert_create
       var 'ss'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   lfds711_misc_force_store
   exponential_backoff
   __CSEQ_atomic_swap_stack_top
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
   __CSEQ_atomic_compare_and_exchange
       var 'mptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_compare_exchange_n
       var 'mptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __CSEQ_atomic_exchange
       var 'previous'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_exchange_n
       var 'previous'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
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
       var 's'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'datas'   type 'struct test_data **'   kind 'l'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
   get_size
       var 's'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'datas'   type 'struct test_data **'   kind 'l'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
   is_empty
       var 's'   type 'struct lfds711_stack_state *'   kind 'p'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
   push
       var '__cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   pop
       var '__cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   main

Function blocks:
function 'assert_create' ----------------------------------:
void assert_create(void *ss, int size)
{
    __CSEQ_assert(0);
}


void *ss, int size
void
function 'lfds711_misc_force_store' ----------------------------------:
void lfds711_misc_force_store()
{
    lfds711_pal_uint_t destination;
    {
        (void) __atomic_exchange_n(&destination, 0, 0);
    }
    ;
    return;
}



void
function 'exponential_backoff' ----------------------------------:
void exponential_backoff()
{
    int loop;
    for (loop = 0; loop < 3; loop++)
    {
        ;
    }

}



void
function '__CSEQ_atomic_swap_stack_top' ----------------------------------:
int __CSEQ_atomic_swap_stack_top(struct lfds711_stack_element * volatile *top, struct lfds711_stack_element * volatile *oldtop, struct lfds711_stack_element **newtop)
{
    ;
    _Bool __cs_tmp_if_cond_0;
    __cs_tmp_if_cond_0 = (*oldtop) == (*top);
    if (__cs_tmp_if_cond_0)
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
    ;
    _Bool __cs_tmp_if_cond_1;
    __cs_tmp_if_cond_1 = !(bs != 0);
    if (__cs_tmp_if_cond_1)
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_tmp_if_cond_2;
    __cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*bs).lock)) % 128) == 0);
    if (__cs_tmp_if_cond_2)
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    (*bs).lock = LFDS711_MISC_FLAG_LOWERED;
    (*bs).backoff_iteration_frequency_counters[0] = 0;
    (*bs).backoff_iteration_frequency_counters[1] = 0;
    (*bs).metric = 1;
    (*bs).total_operations = 0;
    return;
}


struct lfds711_misc_backoff_state *bs
void
function 'lfds711_stack_init_valid_on_current_logical_core' ----------------------------------:
void lfds711_stack_init_valid_on_current_logical_core(struct lfds711_stack_state *ss, void *user_state)
{
    __cs_mutex_init(&library_lock, 0);
    ;
    _Bool __cs_tmp_if_cond_3;
    __cs_tmp_if_cond_3 = !(ss != 0);
    if (__cs_tmp_if_cond_3)
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_tmp_if_cond_4;
    __cs_tmp_if_cond_4 = !((((lfds711_pal_uint_t) (*ss).top) % 128) == 0);
    if (__cs_tmp_if_cond_4)
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_tmp_if_cond_5;
    __cs_tmp_if_cond_5 = !((((lfds711_pal_uint_t) (&(*ss).user_state)) % 128) == 0);
    if (__cs_tmp_if_cond_5)
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    __cs_mutex_lock(&library_lock);
    (*ss).top[0] = 0;
    (*ss).top[1] = 0;
    (*ss).user_state = user_state;
    lfds711_misc_internal_backoff_init(&(*ss).pop_backoff);
    lfds711_misc_internal_backoff_init(&(*ss).push_backoff);
    lfds711_misc_force_store();
    __cs_mutex_unlock(&library_lock);
    return;
}


struct lfds711_stack_state *ss, void *user_state
void
function 'lfds711_stack_pop' ----------------------------------:
int lfds711_stack_pop(struct lfds711_stack_state *ss, struct lfds711_stack_element **se)
{
    char unsigned result;
    lfds711_pal_uint_t backoff_iteration;
    backoff_iteration = 0;
    struct lfds711_stack_element *new_top[2];
    struct lfds711_stack_element * volatile original_top[2];
    ;
    _Bool __cs_tmp_if_cond_6;
    __cs_tmp_if_cond_6 = !(ss != 0);
    if (__cs_tmp_if_cond_6)
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_tmp_if_cond_7;
    __cs_tmp_if_cond_7 = !(se != 0);
    if (__cs_tmp_if_cond_7)
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    __cs_mutex_lock(&library_lock);
    __cs_mutex_unlock(&library_lock);
    original_top[1] = (*ss).top[1];
    original_top[0] = (*ss).top[0];
    int i;
    i = 0;
    ;
    int __cs_dowhile_onetime_1;
    for (__cs_dowhile_onetime_1 = 0; __cs_dowhile_onetime_1 < 1; __cs_dowhile_onetime_1++)
    {
        ;
        _Bool __cs_tmp_if_cond_8;
        __cs_tmp_if_cond_8 = original_top[0] == 0;
        if (__cs_tmp_if_cond_8)
        {
            *se = 0;
            return 0;
        }

        new_top[1] = original_top[1] + 1;
        new_top[0] = (*original_top[0]).next;
        __cs_mutex_lock(&library_lock);
        result = __CSEQ_atomic_swap_stack_top(&(*ss).top[0], &original_top[0], &new_top[0]);
        __cs_mutex_unlock(&library_lock);
        ;
        _Bool __cs_tmp_if_cond_9;
        __cs_tmp_if_cond_9 = result == 0;
        if (__cs_tmp_if_cond_9)
        {
            exponential_backoff();
            __cs_mutex_lock(&library_lock);
            __cs_mutex_unlock(&library_lock);
        }

        i++;
        ;
        _Bool __cs_tmp_if_cond_10;
        __cs_tmp_if_cond_10 = i > 1000;
        if (__cs_tmp_if_cond_10)
        {
            break;
        }

    }

    while (result == 0)
    {
        ;
        _Bool __cs_tmp_if_cond_11;
        __cs_tmp_if_cond_11 = original_top[0] == 0;
        if (__cs_tmp_if_cond_11)
        {
            *se = 0;
            return 0;
        }

        new_top[1] = original_top[1] + 1;
        new_top[0] = (*original_top[0]).next;
        __cs_mutex_lock(&library_lock);
        result = __CSEQ_atomic_swap_stack_top(&(*ss).top[0], &original_top[0], &new_top[0]);
        __cs_mutex_unlock(&library_lock);
        ;
        _Bool __cs_tmp_if_cond_12;
        __cs_tmp_if_cond_12 = result == 0;
        if (__cs_tmp_if_cond_12)
        {
            exponential_backoff();
            __cs_mutex_lock(&library_lock);
            __cs_mutex_unlock(&library_lock);
        }

        i++;
        ;
        _Bool __cs_tmp_if_cond_13;
        __cs_tmp_if_cond_13 = i > 1000;
        if (__cs_tmp_if_cond_13)
        {
            break;
        }

    }

    *se = original_top[0];
    return result;
}


struct lfds711_stack_state *ss, struct lfds711_stack_element **se
int
function 'lfds711_stack_push' ----------------------------------:
void lfds711_stack_push(struct lfds711_stack_state *ss, struct lfds711_stack_element *se)
{
    char unsigned result;
    lfds711_pal_uint_t backoff_iteration;
    backoff_iteration = 0;
    struct lfds711_stack_element *new_top[2];
    struct lfds711_stack_element * volatile original_top[2];
    ;
    _Bool __cs_tmp_if_cond_14;
    __cs_tmp_if_cond_14 = !(ss != 0);
    if (__cs_tmp_if_cond_14)
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    ;
    _Bool __cs_tmp_if_cond_15;
    __cs_tmp_if_cond_15 = !(se != 0);
    if (__cs_tmp_if_cond_15)
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    new_top[0] = se;
    original_top[1] = (*ss).top[1];
    original_top[0] = (*ss).top[0];
    result = 0;
    int i;
    i = 0;
    while (result == 0)
    {
        __cs_mutex_lock(&library_lock);
        (*se).next = original_top[0];
        __cs_mutex_unlock(&library_lock);
        new_top[1] = original_top[1] + 1;
        __cs_mutex_lock(&library_lock);
        result = __CSEQ_atomic_swap_stack_top(&(*ss).top[0], &original_top[0], &new_top[0]);
        __cs_mutex_unlock(&library_lock);
        ;
        _Bool __cs_tmp_if_cond_16;
        __cs_tmp_if_cond_16 = result == 0;
        if (__cs_tmp_if_cond_16)
        {
            exponential_backoff();
        }

        i++;
        ;
        _Bool __cs_tmp_if_cond_17;
        __cs_tmp_if_cond_17 = i > 1000;
        if (__cs_tmp_if_cond_17)
        {
            break;
        }

    }

    return;
}


struct lfds711_stack_state *ss, struct lfds711_stack_element *se
void
function '__CSEQ_atomic_compare_and_exchange' ----------------------------------:
_Bool __CSEQ_atomic_compare_and_exchange(int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm)
{
    ;
    _Bool __cs_tmp_if_cond_18;
    __cs_tmp_if_cond_18 = (*mptr) == (*eptr);
    if (__cs_tmp_if_cond_18)
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


int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm
_Bool
function '__atomic_compare_exchange_n' ----------------------------------:
_Bool __atomic_compare_exchange_n(int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm)
{
    int res;
    res = __CSEQ_atomic_compare_and_exchange(mptr, eptr, newval, weak_p, sm, fm);
    return res;
}


int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm
_Bool
function '__CSEQ_atomic_exchange' ----------------------------------:
unsigned long __CSEQ_atomic_exchange(int long long unsigned *previous, int long long unsigned new, int memorder)
{
    unsigned long int old;
    old = *previous;
    *previous = new;
    return old;
}


int long long unsigned *previous, int long long unsigned new, int memorder
unsigned long
function '__atomic_exchange_n' ----------------------------------:
unsigned long __atomic_exchange_n(int long long unsigned *previous, int long long unsigned new, int memorder)
{
    int res;
    res = __CSEQ_atomic_exchange(previous, new, memorder);
    return res;
}


int long long unsigned *previous, int long long unsigned new, int memorder
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
    lfds711_stack_init_valid_on_current_logical_core(&mystack, 0);
    return (void *) (&mystack);
}



void *
function 'insert' ----------------------------------:
void insert(struct lfds711_stack_state *s, int long long unsigned id)
{
    struct test_data *td;
    td = __cs_safe_malloc(sizeof(struct test_data));
    (*td).user_id = id;
    (*td).se.value = (void *) ((lfds711_pal_uint_t) td);
    lfds711_stack_push((struct lfds711_stack_state *) s, &(*td).se);
}


struct lfds711_stack_state *s, int long long unsigned id
void
function 'delete' ----------------------------------:
int delete(struct lfds711_stack_state *s)
{
    struct lfds711_stack_element *se;
    struct test_data *temp_td;
    int res;
    res = lfds711_stack_pop(&mystack, &se);
    ;
    _Bool __cs_tmp_if_cond_19;
    __cs_tmp_if_cond_19 = res == 0;
    if (__cs_tmp_if_cond_19)
    {
        return res;
    }

    temp_td = (*se).value;
    int id_popped;
    id_popped = (*temp_td).user_id;
    printf("%llu\n", (*temp_td).user_id);
    return res;
}


struct lfds711_stack_state *s
int
function 'contains' ----------------------------------:
int contains(struct lfds711_stack_state *s, unsigned long long int id)
{
    int max_size;
    max_size = 2;
    int actual_size;
    actual_size = 0;
    int res;
    res = 1;
    int found;
    found = 0;
    int dimension;
    dimension = 2;
    struct test_data **datas;
    datas = __cs_safe_malloc((sizeof(struct test_data *)) * max_size);
    struct lfds711_stack_element *se;
    while ((found == 0) && (res != 0))
    {
        res = lfds711_stack_pop(s, &se);
        ;
        _Bool __cs_tmp_if_cond_20;
        __cs_tmp_if_cond_20 = res == 0;
        if (__cs_tmp_if_cond_20)
        {
            break;
        }

        datas[actual_size] = (*se).value;
        ;
        _Bool __cs_tmp_if_cond_21;
        __cs_tmp_if_cond_21 = (*datas[actual_size]).user_id == id;
        if (__cs_tmp_if_cond_21)
        {
            found = 1;
        }

        actual_size = actual_size + 1;
    }

    int i;
    i = 0;
    while (i < actual_size)
    {
        lfds711_stack_push(s, &(*datas[i]).se);
        i++;
    }

    return found;
}


struct lfds711_stack_state *s, unsigned long long int id
int
function 'get_size' ----------------------------------:
int get_size(struct lfds711_stack_state *s)
{
    int max_size;
    max_size = 2;
    int actual_size;
    actual_size = 0;
    int res;
    res = 1;
    int dimension;
    dimension = 2;
    struct test_data **datas;
    datas = __cs_safe_malloc((sizeof(struct test_data *)) * max_size);
    struct lfds711_stack_element *se;
    while (res != 0)
    {
        res = lfds711_stack_pop(s, &se);
        ;
        _Bool __cs_tmp_if_cond_22;
        __cs_tmp_if_cond_22 = res == 0;
        if (__cs_tmp_if_cond_22)
        {
            break;
        }

        actual_size = actual_size + 1;
    }

    int i;
    i = 0;
    while (i < actual_size)
    {
        lfds711_stack_push(s, &(*datas[i]).se);
        i++;
    }

    return actual_size;
}


struct lfds711_stack_state *s
int
function 'is_empty' ----------------------------------:
int is_empty(struct lfds711_stack_state *s)
{
    struct lfds711_stack_element *se;
    int res;
    res = lfds711_stack_pop(s, &se);
    ;
    _Bool __cs_tmp_if_cond_23;
    __cs_tmp_if_cond_23 = res != 0;
    if (__cs_tmp_if_cond_23)
    {
        fds711_stack_push(s, se);
        return 0;
    }

    return 1;
}


struct lfds711_stack_state *s
int
function 'push' ----------------------------------:
void *push(void *__cs_unused)
{
    int long long unsigned loop;
    ;
    _Bool __cs_tmp_if_cond_24;
    __cs_tmp_if_cond_24 = ATOMIC_OPERATION;
    if (__cs_tmp_if_cond_24)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    int qwerty;
    qwerty = 1050;
    insert(ss, 1500);
    ;
    _Bool __cs_tmp_if_cond_25;
    __cs_tmp_if_cond_25 = ATOMIC_OPERATION;
    if (__cs_tmp_if_cond_25)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
    ;
    _Bool __cs_tmp_if_cond_26;
    __cs_tmp_if_cond_26 = ATOMIC_OPERATION;
    if (__cs_tmp_if_cond_26)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    insert(ss, 1600);
    ;
    _Bool __cs_tmp_if_cond_27;
    __cs_tmp_if_cond_27 = ATOMIC_OPERATION;
    if (__cs_tmp_if_cond_27)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
}


void *__cs_unused
void *
function 'pop' ----------------------------------:
void *pop(void *__cs_unused)
{
    int res;
    int count;
    count = 0;
    int loop;
    ;
    _Bool __cs_tmp_if_cond_28;
    __cs_tmp_if_cond_28 = ATOMIC_OPERATION;
    if (__cs_tmp_if_cond_28)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    int ytrewq;
    ytrewq = 1050;
    delete(ss);
    ;
    _Bool __cs_tmp_if_cond_29;
    __cs_tmp_if_cond_29 = ATOMIC_OPERATION;
    if (__cs_tmp_if_cond_29)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
    ;
    _Bool __cs_tmp_if_cond_30;
    __cs_tmp_if_cond_30 = ATOMIC_OPERATION;
    if (__cs_tmp_if_cond_30)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    delete(ss);
    ;
    _Bool __cs_tmp_if_cond_31;
    __cs_tmp_if_cond_31 = ATOMIC_OPERATION;
    if (__cs_tmp_if_cond_31)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
}


void *__cs_unused
void *
function 'main' ----------------------------------:
int main()
{
    __cs_mutex_init(&lock, 0);
    ss = init();
    __cs_t t1;
    __cs_t t2;
    __cs_t t3;
    __cs_t t4;
    __cs_t t5;
    __cs_t t6;
    __cs_t t7;
    __cs_t t8;
    __cs_t t9;
    __cs_t t10;
    __cs_create(&t1, 0, push, 0);
    __cs_create(&t6, 0, pop, 0);
    __cs_join(t1, 0);
    __cs_join(t6, 0);
    __CSEQ_assert(0);
    return 0;
}



int
Last statement, by function:
function: assert_create   stmt:     __CSEQ_assert(0);

function: lfds711_misc_force_store   stmt:     return;

function: exponential_backoff   stmt:     for (loop = 0; loop < 3; loop++)
    {
        ;
    }


function: __CSEQ_atomic_swap_stack_top   stmt:     if (__cs_tmp_if_cond_0)
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

function: __CSEQ_atomic_compare_and_exchange   stmt:     if (__cs_tmp_if_cond_18)
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

function: __CSEQ_atomic_exchange   stmt:     return old;

function: __atomic_exchange_n   stmt:     return res;

function: __atomic_thread_fence   stmt:     return res;

function: init   stmt:     return (void *) (&mystack);

function: insert   stmt:     lfds711_stack_push((struct lfds711_stack_state *) s, &(*td).se);

function: delete   stmt:     return res;

function: contains   stmt:     return found;

function: get_size   stmt:     return actual_size;

function: is_empty   stmt:     return 1;

function: push   stmt:     ;

function: pop   stmt:     ;

function: main   stmt:     return 0;


All symbols (new symbol table - work in progress):
   (0, 'assert_create')  
   (1, 'ss')  
   (2, 'size')  
   (3, 'entropy')  
   (4, 'entropy')  
   (5, 'lfds711_prng_init_valid_on_current_logical_core')  
   (6, 'ps')  
   (7, 'seed')  
   (8, 'lfds711_prng_st_init')  
   (9, 'psts')  
   (10, 'seed')  
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
   (21, 'query_type')  
   (22, 'query_input')  
   (23, 'query_output')  
   (24, 'lfds711_misc_force_store')  
   (25, 'destination')  
   (26, 'left')  
   (27, 'right')  
   (28, 'up')  
   (29, 'value')  
   (30, 'key')  
   (31, 'root')  
   (32, 'key_compare_function')  
   (33, 'new_key')  
   (34, 'existing_key')  
   (35, 'existing_key')  
   (36, 'user_state')  
   (37, 'insert_backoff')  
   (38, 'lfds711_btree_au_init_valid_on_current_logical_core')  
   (39, 'baus')  
   (40, 'key_compare_function')  
   (41, 'new_key')  
   (42, 'existing_key')  
   (43, 'existing_key')  
   (44, 'user_state')  
   (45, 'lfds711_btree_au_cleanup')  
   (46, 'baus')  
   (47, 'element_cleanup_callback')  
   (48, 'baus')  
   (49, 'baue')  
   (50, 'lfds711_btree_au_insert')  
   (51, 'baus')  
   (52, 'baue')  
   (53, 'existing_baue')  
   (54, 'lfds711_btree_au_get_by_key')  
   (55, 'baus')  
   (56, 'key_compare_function')  
   (57, 'new_key')  
   (58, 'existing_key')  
   (59, 'key')  
   (60, 'baue')  
   (61, 'lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position')  
   (62, 'baus')  
   (63, 'baue')  
   (64, 'absolute_position')  
   (65, 'relative_position')  
   (66, 'lfds711_btree_au_get_by_absolute_position')  
   (67, 'baus')  
   (68, 'baue')  
   (69, 'absolute_position')  
   (70, 'lfds711_btree_au_get_by_relative_position')  
   (71, 'baue')  
   (72, 'relative_position')  
   (73, 'lfds711_btree_au_query')  
   (74, 'baus')  
   (75, 'query_type')  
   (76, 'query_input')  
   (77, 'query_output')  
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
   (88, 'fs')  
   (89, 'elimination_array')  
   (90, 'elimination_array_size_in_elements')  
   (91, 'user_state')  
   (92, 'lfds711_freelist_cleanup')  
   (93, 'fs')  
   (94, 'element_cleanup_callback')  
   (95, 'fs')  
   (96, 'fe')  
   (97, 'lfds711_freelist_push')  
   (98, 'fs')  
   (99, 'fe')  
   (100, 'psts')  
   (101, 'lfds711_freelist_pop')  
   (102, 'fs')  
   (103, 'fe')  
   (104, 'psts')  
   (105, 'lfds711_freelist_query')  
   (106, 'fs')  
   (107, 'query_type')  
   (108, 'query_input')  
   (109, 'query_output')  
   (110, 'baue')  
   (111, 'key')  
   (112, 'value')  
   (113, 'baue')  
   (114, 'baus')  
   (115, 'baus_end')  
   (116, 'existing_key')  
   (117, 'key_compare_function')  
   (118, 'new_key')  
   (119, 'existing_key')  
   (120, 'array_size')  
   (121, 'baus_array')  
   (122, 'element_cleanup_callback')  
   (123, 'has')  
   (124, 'hae')  
   (125, 'key_hash_function')  
   (126, 'key')  
   (127, 'hash')  
   (128, 'user_state')  
   (129, 'lfds711_hash_a_init_valid_on_current_logical_core')  
   (130, 'has')  
   (131, 'baus_array')  
   (132, 'array_size')  
   (133, 'key_compare_function')  
   (134, 'new_key')  
   (135, 'existing_key')  
   (136, 'key_hash_function')  
   (137, 'key')  
   (138, 'hash')  
   (139, 'existing_key')  
   (140, 'user_state')  
   (141, 'lfds711_hash_a_cleanup')  
   (142, 'has')  
   (143, 'element_cleanup_function')  
   (144, 'has')  
   (145, 'hae')  
   (146, 'lfds711_hash_a_insert')  
   (147, 'has')  
   (148, 'hae')  
   (149, 'existing_hae')  
   (150, 'lfds711_hash_a_get_by_key')  
   (151, 'has')  
   (152, 'key_compare_function')  
   (153, 'new_key')  
   (154, 'existing_key')  
   (155, 'key_hash_function')  
   (156, 'key')  
   (157, 'hash')  
   (158, 'key')  
   (159, 'hae')  
   (160, 'lfds711_hash_a_iterate_init')  
   (161, 'has')  
   (162, 'hai')  
   (163, 'lfds711_hash_a_iterate')  
   (164, 'hai')  
   (165, 'hae')  
   (166, 'lfds711_hash_a_query')  
   (167, 'has')  
   (168, 'query_type')  
   (169, 'query_input')  
   (170, 'query_output')  
   (171, 'next')  
   (172, 'value')  
   (173, 'key')  
   (174, 'dummy_element')  
   (175, 'start')  
   (176, 'key_compare_function')  
   (177, 'new_key')  
   (178, 'existing_key')  
   (179, 'existing_key')  
   (180, 'user_state')  
   (181, 'insert_backoff')  
   (182, 'lfds711_list_aso_init_valid_on_current_logical_core')  
   (183, 'lasos')  
   (184, 'key_compare_function')  
   (185, 'new_key')  
   (186, 'existing_key')  
   (187, 'existing_key')  
   (188, 'user_state')  
   (189, 'lfds711_list_aso_cleanup')  
   (190, 'lasos')  
   (191, 'element_cleanup_callback')  
   (192, 'lasos')  
   (193, 'lasoe')  
   (194, 'lfds711_list_aso_insert')  
   (195, 'lasos')  
   (196, 'lasoe')  
   (197, 'existing_lasoe')  
   (198, 'lfds711_list_aso_get_by_key')  
   (199, 'lasos')  
   (200, 'key')  
   (201, 'lasoe')  
   (202, 'lfds711_list_aso_query')  
   (203, 'lasos')  
   (204, 'query_type')  
   (205, 'query_input')  
   (206, 'query_output')  
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
   (218, 'lasus')  
   (219, 'user_state')  
   (220, 'lfds711_list_asu_cleanup')  
   (221, 'lasus')  
   (222, 'element_cleanup_callback')  
   (223, 'lasus')  
   (224, 'lasue')  
   (225, 'lfds711_list_asu_insert_at_position')  
   (226, 'lasus')  
   (227, 'lasue')  
   (228, 'lasue_predecessor')  
   (229, 'position')  
   (230, 'lfds711_list_asu_insert_at_start')  
   (231, 'lasus')  
   (232, 'lasue')  
   (233, 'lfds711_list_asu_insert_at_end')  
   (234, 'lasus')  
   (235, 'lasue')  
   (236, 'lfds711_list_asu_insert_after_element')  
   (237, 'lasus')  
   (238, 'lasue')  
   (239, 'lasue_predecessor')  
   (240, 'lfds711_list_asu_get_by_key')  
   (241, 'lasus')  
   (242, 'key_compare_function')  
   (243, 'new_key')  
   (244, 'existing_key')  
   (245, 'key')  
   (246, 'lasue')  
   (247, 'lfds711_list_asu_query')  
   (248, 'lasus')  
   (249, 'query_type')  
   (250, 'query_input')  
   (251, 'query_output')  
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
   (264, 'qbmms')  
   (265, 'element_array')  
   (266, 'number_elements')  
   (267, 'user_state')  
   (268, 'lfds711_queue_bmm_cleanup')  
   (269, 'qbmms')  
   (270, 'element_cleanup_callback')  
   (271, 'qbmms')  
   (272, 'key')  
   (273, 'value')  
   (274, 'lfds711_queue_bmm_enqueue')  
   (275, 'qbmms')  
   (276, 'key')  
   (277, 'value')  
   (278, 'lfds711_queue_bmm_dequeue')  
   (279, 'qbmms')  
   (280, 'key')  
   (281, 'value')  
   (282, 'lfds711_queue_bmm_query')  
   (283, 'qbmms')  
   (284, 'query_type')  
   (285, 'query_input')  
   (286, 'query_output')  
   (287, 'key')  
   (288, 'value')  
   (289, 'number_elements')  
   (290, 'mask')  
   (291, 'read_index')  
   (292, 'write_index')  
   (293, 'element_array')  
   (294, 'user_state')  
   (295, 'lfds711_queue_bss_init_valid_on_current_logical_core')  
   (296, 'qbsss')  
   (297, 'element_array')  
   (298, 'number_elements')  
   (299, 'user_state')  
   (300, 'lfds711_queue_bss_cleanup')  
   (301, 'qbsss')  
   (302, 'element_cleanup_callback')  
   (303, 'qbsss')  
   (304, 'key')  
   (305, 'value')  
   (306, 'lfds711_queue_bss_enqueue')  
   (307, 'qbsss')  
   (308, 'key')  
   (309, 'value')  
   (310, 'lfds711_queue_bss_dequeue')  
   (311, 'qbsss')  
   (312, 'key')  
   (313, 'value')  
   (314, 'lfds711_queue_bss_query')  
   (315, 'qbsss')  
   (316, 'query_type')  
   (317, 'query_input')  
   (318, 'query_output')  
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
   (329, 'qumms')  
   (330, 'qumme_dummy')  
   (331, 'user_state')  
   (332, 'lfds711_queue_umm_cleanup')  
   (333, 'qumms')  
   (334, 'element_cleanup_callback')  
   (335, 'qumms')  
   (336, 'qumme')  
   (337, 'dummy_element_flag')  
   (338, 'lfds711_queue_umm_enqueue')  
   (339, 'qumms')  
   (340, 'qumme')  
   (341, 'lfds711_queue_umm_dequeue')  
   (342, 'qumms')  
   (343, 'qumme')  
   (344, 'lfds711_queue_umm_query')  
   (345, 'qumms')  
   (346, 'query_type')  
   (347, 'query_input')  
   (348, 'query_output')  
   (349, 'fe')  
   (350, 'qumme')  
   (351, 'qumme_use')  
   (352, 'key')  
   (353, 'value')  
   (354, 'fs')  
   (355, 'qumms')  
   (356, 'element_cleanup_callback')  
   (357, 'rs')  
   (358, 'key')  
   (359, 'value')  
   (360, 'unread_flag')  
   (361, 'user_state')  
   (362, 'lfds711_ringbuffer_init_valid_on_current_logical_core')  
   (363, 'rs')  
   (364, 're_array_inc_dummy')  
   (365, 'number_elements_inc_dummy')  
   (366, 'user_state')  
   (367, 'lfds711_ringbuffer_cleanup')  
   (368, 'rs')  
   (369, 'element_cleanup_callback')  
   (370, 'rs')  
   (371, 'key')  
   (372, 'value')  
   (373, 'unread_flag')  
   (374, 'lfds711_ringbuffer_read')  
   (375, 'rs')  
   (376, 'key')  
   (377, 'value')  
   (378, 'lfds711_ringbuffer_write')  
   (379, 'rs')  
   (380, 'key')  
   (381, 'value')  
   (382, 'overwrite_occurred_flag')  
   (383, 'overwritten_key')  
   (384, 'overwritten_value')  
   (385, 'lfds711_ringbuffer_query')  
   (386, 'rs')  
   (387, 'query_type')  
   (388, 'query_input')  
   (389, 'query_output')  
   (390, 'next')  
   (391, 'key')  
   (392, 'value')  
   (393, 'top')  
   (394, 'user_state')  
   (395, 'pop_backoff')  
   (396, 'push_backoff')  
   (397, 'lfds711_stack_init_valid_on_current_logical_core')  
   (398, 'ss')  
   (399, 'user_state')  
   (400, 'lfds711_stack_cleanup')  
   (401, 'ss')  
   (402, 'element_cleanup_callback')  
   (403, 'ss')  
   (404, 'se')  
   (405, 'lfds711_stack_push')  
   (406, 'ss')  
   (407, 'se')  
   (408, 'lfds711_stack_pop')  
   (409, 'ss')  
   (410, 'se')  
   (411, 'lfds711_stack_query')  
   (412, 'ss')  
   (413, 'query_type')  
   (414, 'query_input')  
   (415, 'query_output')  
   (416, 'lfds711_misc_internal_backoff_init')  
   (417, 'bs')  
   (418, 'library_lock')  
   (419, 'exponential_backoff')  
   (420, 'loop')  
   (421, '__CSEQ_atomic_swap_stack_top')  
   (422, 'top')  
   (423, 'oldtop')  
   (424, 'newtop')  
   (425, '__cs_tmp_if_cond_0')  
   (426, 'lfds711_misc_internal_backoff_init')  
   (427, 'bs')  
   (428, '__cs_tmp_if_cond_1')  
   (429, 'c')  
   (430, '__cs_tmp_if_cond_2')  
   (431, 'c')  
   (432, 'lfds711_stack_init_valid_on_current_logical_core')  
   (433, 'ss')  
   (434, 'user_state')  
   (435, '__cs_tmp_if_cond_3')  
   (436, 'c')  
   (437, '__cs_tmp_if_cond_4')  
   (438, 'c')  
   (439, '__cs_tmp_if_cond_5')  
   (440, 'c')  
   (441, 'lfds711_stack_pop')  
   (442, 'ss')  
   (443, 'se')  
   (444, 'result')  
   (445, 'backoff_iteration')  
   (446, 'new_top')  
   (447, 'original_top')  
   (448, '__cs_tmp_if_cond_6')  
   (449, 'c')  
   (450, '__cs_tmp_if_cond_7')  
   (451, 'c')  
   (452, 'i')  
   (453, '__cs_dowhile_onetime_1')  
   (454, '__cs_tmp_if_cond_8')  
   (455, '__cs_tmp_if_cond_9')  
   (456, '__cs_tmp_if_cond_10')  
   (457, '__cs_tmp_if_cond_11')  
   (458, '__cs_tmp_if_cond_12')  
   (459, '__cs_tmp_if_cond_13')  
   (460, 'lfds711_stack_push')  
   (461, 'ss')  
   (462, 'se')  
   (463, 'result')  
   (464, 'backoff_iteration')  
   (465, 'new_top')  
   (466, 'original_top')  
   (467, '__cs_tmp_if_cond_14')  
   (468, 'c')  
   (469, '__cs_tmp_if_cond_15')  
   (470, 'c')  
   (471, 'i')  
   (472, '__cs_tmp_if_cond_16')  
   (473, '__cs_tmp_if_cond_17')  
   (474, '__CSEQ_atomic_compare_and_exchange')  
   (475, 'mptr')  
   (476, 'eptr')  
   (477, 'newval')  
   (478, 'weak_p')  
   (479, 'sm')  
   (480, 'fm')  
   (481, '__cs_tmp_if_cond_18')  
   (482, '__atomic_compare_exchange_n')  
   (483, 'mptr')  
   (484, 'eptr')  
   (485, 'newval')  
   (486, 'weak_p')  
   (487, 'sm')  
   (488, 'fm')  
   (489, 'res')  
   (490, '__CSEQ_atomic_exchange')  
   (491, 'previous')  
   (492, 'new')  
   (493, 'memorder')  
   (494, 'old')  
   (495, '__atomic_exchange_n')  
   (496, 'previous')  
   (497, 'new')  
   (498, 'memorder')  
   (499, 'res')  
   (500, '__atomic_thread_fence')  
   (501, 'i')  
   (502, 'mystack')  
   (503, 'se')  
   (504, 'user_id')  
   (505, 'init')  
   (506, 'insert')  
   (507, 's')  
   (508, 'id')  
   (509, 'td')  
   (510, 'delete')  
   (511, 's')  
   (512, 'se')  
   (513, 'temp_td')  
   (514, 'res')  
   (515, '__cs_tmp_if_cond_19')  
   (516, 'id_popped')  
   (517, 'contains')  
   (518, 's')  
   (519, 'id')  
   (520, 'max_size')  
   (521, 'actual_size')  
   (522, 'res')  
   (523, 'found')  
   (524, 'dimension')  
   (525, 'datas')  
   (526, 'se')  
   (527, '__cs_tmp_if_cond_20')  
   (528, '__cs_tmp_if_cond_21')  
   (529, 'i')  
   (530, 'get_size')  
   (531, 's')  
   (532, 'max_size')  
   (533, 'actual_size')  
   (534, 'res')  
   (535, 'dimension')  
   (536, 'datas')  
   (537, 'se')  
   (538, '__cs_tmp_if_cond_22')  
   (539, 'i')  
   (540, 'is_empty')  
   (541, 's')  
   (542, 'se')  
   (543, 'res')  
   (544, '__cs_tmp_if_cond_23')  
   (545, 'ATOMIC_OPERATION')  
   (546, 'ss')  
   (547, 'lock')  
   (548, 'push')  
   (549, '__cs_unused')  
   (550, 'loop')  
   (551, '__cs_tmp_if_cond_24')  
   (552, 'qwerty')  
   (553, '__cs_tmp_if_cond_25')  
   (554, '__cs_tmp_if_cond_26')  
   (555, '__cs_tmp_if_cond_27')  
   (556, 'pop')  
   (557, '__cs_unused')  
   (558, 'res')  
   (559, 'count')  
   (560, 'loop')  
   (561, '__cs_tmp_if_cond_28')  
   (562, 'ytrewq')  
   (563, '__cs_tmp_if_cond_29')  
   (564, '__cs_tmp_if_cond_30')  
   (565, '__cs_tmp_if_cond_31')  
   (566, 'main')  
   (567, 't1')  
   (568, 't2')  
   (569, 't3')  
   (570, 't4')  
   (571, 't5')  
   (572, 't6')  
   (573, 't7')  
   (574, 't8')  
   (575, 't9')  
   (576, 't10')  
