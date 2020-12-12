list of functions:
   check(param: ss)  call count 0
   lfds711_misc_force_store(param: )  call count 1
   exponential_backoff(param: )  call count 2
   __VERIFIER_atomic_swap_stack_top(param: top, oldtop, newtop)  call count 2
   lfds711_misc_internal_backoff_init(param: bs)  call count 2
   lfds711_stack_init_valid_on_current_logical_core(param: ss, user_state)  call count 1
   lfds711_stack_pop(param: ss, se)  call count 4
   lfds711_stack_push(param: ss, se)  call count 4
   __VERIFIER_atomic_compare_and_exchange(param: mptr, eptr, newval, weak_p, sm, fm)  call count 1
   __atomic_compare_exchange_n(param: mptr, eptr, newval, weak_p, sm, fm)  call count 0
   __VERIFIER_atomic_exchange(param: previous, new, memorder)  call count 1
   __atomic_exchange_n(param: previous, new, memorder)  call count 0
   __atomic_thread_fence(param: i)  call count 0
   init(param: )  call count 1
   insert(param: s, id)  call count 1
   delete(param: s)  call count 1
   contains(param: s, id)  call count 0
   get_size(param: s)  call count 0
   is_empty(param: s)  call count 1
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
      id3  'ps'  
         type 'struct lfds711_prng_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id4  'seed'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id5  'psts'  
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
      id15  'query_type'  
         type 'enum lfds711_stack_query'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id16  'query_input'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id17  'query_output'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id30  'baus'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id31  'key_compare_function'  
         type 'int (*)(const void, const void)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id32  'existing_key'  
         type 'const void'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id33  'user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id34  'element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id35  'baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id36  'existing_baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id37  'key'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id38  'absolute_position'  
         type 'enum lfds711_btree_au_absolute_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id39  'relative_position'  
         type 'enum lfds711_btree_au_relative_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id49  'fs'  
         type 'struct lfds711_freelist_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id50  'elimination_array'  
         type 'struct lfds711_freelist_element * volatile (*)'  kind 'p'  arity '1'  
         size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id51  'elimination_array_size_in_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id52  'fe'  
         type 'struct lfds711_freelist_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id71  'has'  
         type 'struct lfds711_hash_a_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id72  'baus_array'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id73  'array_size'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id74  'key_hash_function'  
         type 'void (*)(const void, lfds711_pal_uint_t)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id75  'element_cleanup_function'  
         type 'void (*)(struct lfds711_hash_a_state, struct lfds711_hash_a_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id76  'hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id77  'existing_hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id78  'hai'  
         type 'struct lfds711_hash_a_iterate *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id89  'lasos'  
         type 'struct lfds711_list_aso_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id90  'lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id91  'existing_lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id102  'lasus'  
         type 'struct lfds711_list_asu_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id103  'lasue'  
         type 'struct lfds711_list_asu_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id104  'lasue_predecessor'  
         type 'struct lfds711_list_asu_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id105  'position'  
         type 'enum lfds711_list_asu_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id117  'qbmms'  
         type 'struct lfds711_queue_bmm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id118  'element_array'  
         type 'struct lfds711_queue_bss_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id119  'number_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id120  'value'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id129  'qbsss'  
         type 'struct lfds711_queue_bss_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id139  'qumms'  
         type 'struct lfds711_queue_umm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id140  'qumme_dummy'  
         type 'struct lfds711_queue_umm_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id141  'qumme'  
         type 'struct lfds711_queue_umm_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id155  'rs'  
         type 'struct lfds711_ringbuffer_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id156  're_array_inc_dummy'  
         type 'struct lfds711_ringbuffer_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id157  'number_elements_inc_dummy'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id158  'overwrite_occurred_flag'  
         type 'enum lfds711_misc_flag *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id159  'overwritten_key'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id160  'overwritten_value'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id168  'ss'  
         type 'void *'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[896, 913, 923, 938]'  
      id169  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id170  'bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id171  'library_lock'  
         type 'pthread_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[620, 642, 649, 673, 674, 687, 689, 693, 694, 735, 737, 739, 741]'  
         deref '[]'  
         occurs '[620, 642, 649, 673, 674, 687, 689, 693, 694, 735, 737, 739, 741]'  
      id219  'mystack'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[794, 795, 808]'  
         deref '[]'  
         occurs '[794, 795, 808]'  
      id251  'ATOMIC_OPERATION'  
         type 'int'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[891, 897, 908, 914]'  
      id252  'lock'  
         type 'pthread_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[893, 899, 910, 916, 922]'  
         deref '[]'  
         occurs '[893, 899, 910, 916, 922]'  
   check
      id0  'ss'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[157]'  
   lfds711_misc_force_store
      id18  'destination'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[205]'  
         deref '[]'  
         occurs '[205]'  
   exponential_backoff
      id172  'loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[575, 575, 575]'  
   __VERIFIER_atomic_swap_stack_top
      id173  'top'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[583, 585, 590]'  
         occurs '[583, 585, 590]'  
      id174  'oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[583, 590]'  
         occurs '[583, 590]'  
      id175  'newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[585]'  
         occurs '[585]'  
   lfds711_misc_internal_backoff_init
      id176  'bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[603, 610, 611, 612, 613, 614]'  
         occurs '[596, 603, 610, 611, 612, 613, 614]'  
      id177  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[599, 606]'  
         occurs '[598, 599, 605, 606]'  
   lfds711_stack_init_valid_on_current_logical_core
      id178  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[628, 635, 643, 644, 645, 646, 647]'  
         occurs '[621, 628, 635, 643, 644, 645, 646, 647]'  
      id179  'user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[645]'  
      id180  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[624, 631, 638]'  
         occurs '[623, 624, 630, 631, 637, 638]'  
   lfds711_stack_pop
      id181  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[675, 676, 688]'  
         occurs '[659, 675, 676, 688]'  
      id182  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[682, 704]'  
         occurs '[666, 682, 704]'  
      id183  'result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[688, 690, 703, 705]'  
      id184  'backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[656]'  
      id185  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[688]'  
         deref '[]'  
         occurs '[685, 686, 688]'  
      id186  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[688]'  
         deref '[686]'  
         occurs '[675, 676, 680, 685, 686, 688, 704]'  
      id187  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[662, 669]'  
         occurs '[661, 662, 668, 669]'  
      id188  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[677, 696, 697]'  
   lfds711_stack_push
      id189  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[729, 730, 740]'  
         occurs '[714, 729, 730, 740]'  
      id190  'se'  
         type 'struct lfds711_stack_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[736]'  
         occurs '[721, 728, 736]'  
      id191  'result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[731, 733, 740, 742]'  
      id192  'backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[711]'  
      id193  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[740]'  
         deref '[]'  
         occurs '[728, 738, 740]'  
      id194  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[740]'  
         deref '[]'  
         occurs '[729, 730, 736, 738, 740]'  
      id195  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[717, 724]'  
         occurs '[716, 717, 723, 724]'  
      id196  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[732, 746, 747]'  
   __VERIFIER_atomic_compare_and_exchange
      id197  'mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[756, 758]'  
         occurs '[756, 758]'  
      id198  'eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[756, 763]'  
         occurs '[756, 763]'  
      id199  'newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[758, 763]'  
      id200  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id201  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id202  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   __atomic_compare_exchange_n
      id203  'mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[769]'  
      id204  'eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[769]'  
      id205  'newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[769]'  
      id206  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[769]'  
      id207  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[769]'  
      id208  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[769]'  
      id209  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[769, 770]'  
   __VERIFIER_atomic_exchange
      id210  'previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[774, 775]'  
         occurs '[774, 775]'  
      id211  'new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[775]'  
      id212  'memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id213  'old'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[774, 776]'  
   __atomic_exchange_n
      id214  'previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[780]'  
      id215  'new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[780]'  
      id216  'memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[780]'  
      id217  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[780, 781]'  
   __atomic_thread_fence
      id218  'i'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   init
   insert
      id222  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[802]'  
      id223  'id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[800]'  
      id224  'td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[800, 801, 802]'  
         occurs '[799, 800, 801, 801, 802]'  
   delete
      id225  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id226  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[808]'  
         deref '[813]'  
         occurs '[808, 813]'  
      id227  'temp_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[814, 815]'  
         occurs '[813, 814, 815]'  
      id228  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[808, 809, 811, 816]'  
      id229  'id_popped'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[814]'  
   contains
      id230  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[829, 844]'  
      id231  'id'  
         type 'unsigned long long int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[835]'  
      id232  'max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[820, 825]'  
      id233  'actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[821, 827, 834, 835, 839, 839, 842]'  
      id234  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[822, 829, 830]'  
      id235  'found'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[823, 837, 847]'  
      id236  'dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[824]'  
      id237  'datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[835, 844]'  
         occurs '[825, 834, 835, 844]'  
      id238  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[829]'  
         deref '[834]'  
         occurs '[829, 834]'  
      id239  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[841, 842, 844, 845]'  
   get_size
      id240  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[859, 869]'  
      id241  'max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[851, 855]'  
      id242  'actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[852, 857, 864, 864, 867, 872]'  
      id243  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[853, 859, 860]'  
      id244  'dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[854]'  
      id245  'datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[869]'  
         occurs '[855, 869]'  
      id246  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[859]'  
         deref '[]'  
         occurs '[859]'  
      id247  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[866, 867, 869, 870]'  
   is_empty
      id248  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[877, 880]'  
      id249  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[877]'  
         deref '[]'  
         occurs '[877, 880]'  
      id250  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[877, 878]'  
   push
      id253  '__cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id254  'loop'  
         type 'int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[896]'  
   pop
      id255  '__cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id256  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id257  'count'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[906]'  
      id258  'loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   main
      id259  't1'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[934]'  
         deref '[]'  
         occurs '[934, 936]'  
      id260  't2'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id261  't3'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id262  't4'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id263  't5'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id264  't6'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[935]'  
         deref '[]'  
         occurs '[935, 937]'  
      id265  't7'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id266  't8'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id267  't9'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id268  't10'  
         type 'pthread_t'  kind 'l'  arity '0'  
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
      id25  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id26  'existing_key'  type 'enum lfds711_btree_au_existing_key'  kind 'f'  arity '0'  size '[]'  
      id27  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
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
      id59  'existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id60  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id61  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id62  'array_size'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id63  'baus_array'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id64  'has'  type 'struct lfds711_hash_a_state *'  kind 'f'  arity '0'  size '[]'  
      id65  'hae'  type 'struct lfds711_hash_a_element *'  kind 'f'  arity '0'  size '[]'  
      id66  'element_cleanup_callback'  type 'void (*)(struct lfds711_hash_a_state *has, struct lfds711_hash_a_element *hae)'  kind 'f'  arity '0'  size '[]'  
      id67  'key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id68  'hash'  type 'lfds711_pal_uint_t *'  kind 'f'  arity '0'  size '[]'  
      id69  'key_hash_function'  type 'void (*)(const void *key, lfds711_pal_uint_t *hash)'  kind 'f'  arity '0'  size '[]'  
      id70  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_element
      id79  'next'  type 'struct lfds711_list_aso_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id80  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id81  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_state
      id82  'dummy_element'  type 'struct lfds711_list_aso_element'  kind 'f'  arity '0'  size '[]'  
      id83  'start'  type 'struct lfds711_list_aso_element *'  kind 'f'  arity '0'  size '[]'  
      id84  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id85  'existing_key'  type 'enum lfds711_list_aso_existing_key'  kind 'f'  arity '0'  size '[]'  
      id86  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id87  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id88  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_element
      id92  'next'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id93  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id94  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_state
      id95  'dummy_element'  type 'struct lfds711_list_asu_element'  kind 'f'  arity '0'  size '[]'  
      id96  'end'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id97  'start'  type 'struct lfds711_list_asu_element *'  kind 'f'  arity '0'  size '[]'  
      id98  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id99  'after_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id100  'end_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id101  'start_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_element
      id106  'sequence_number'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id107  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id108  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_state
      id109  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id110  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id111  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id112  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id113  'element_array'  type 'struct lfds711_queue_bmm_element *'  kind 'f'  arity '0'  size '[]'  
      id114  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id115  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id116  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_element
      id121  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id122  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_state
      id123  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id124  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id125  'read_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id126  'write_index'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id127  'element_array'  type 'struct lfds711_queue_bss_element *'  kind 'f'  arity '0'  size '[]'  
      id128  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_element
      id130  'next'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id131  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id132  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_state
      id133  'enqueue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id134  'dequeue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id135  'aba_counter'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id136  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id137  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id138  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_element
      id142  'fe'  type 'struct lfds711_freelist_element'  kind 'f'  arity '0'  size '[]'  
      id143  'qumme'  type 'struct lfds711_queue_umm_element'  kind 'f'  arity '0'  size '[]'  
      id144  'qumme_use'  type 'struct lfds711_queue_umm_element *'  kind 'f'  arity '0'  size '[]'  
      id145  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id146  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_state
      id147  'fs'  type 'struct lfds711_freelist_state'  kind 'f'  arity '0'  size '[]'  
      id148  'qumms'  type 'struct lfds711_queue_umm_state'  kind 'f'  arity '0'  size '[]'  
      id149  'rs'  type 'struct lfds711_ringbuffer_state *'  kind 'f'  arity '0'  size '[]'  
      id150  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id151  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id152  'unread_flag'  type 'enum lfds711_misc_flag'  kind 'f'  arity '0'  size '[]'  
      id153  'element_cleanup_callback'  type 'void (*)(struct lfds711_ringbuffer_state *rs, void *key, void *value, enum lfds711_misc_flag unread_flag)'  kind 'f'  arity '0'  size '[]'  
      id154  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_element
      id161  'next'  type 'struct lfds711_stack_element *'  kind 'f'  arity '0'  size '[]'  
      id162  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id163  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_state
      id164  'top'  type 'struct lfds711_stack_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id165  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id166  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id167  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   test_data
      id220  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id221  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  

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
   check
       var 'ss'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   lfds711_misc_force_store
   exponential_backoff
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
       var 'mptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_compare_exchange_n
       var 'mptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __VERIFIER_atomic_exchange
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
function 'check' ----------------------------------:
void check(void *ss)
{
    assert(contains(ss, 0));
}


void *ss
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
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) (&(*bs).lock)) % 128) == 0))
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
    pthread_mutex_init(&library_lock, 0);
    if (!(ss != 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) (*ss).top) % 128) == 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) (&(*ss).user_state)) % 128) == 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    pthread_mutex_lock(&library_lock);
    (*ss).top[0] = 0;
    (*ss).top[1] = 0;
    (*ss).user_state = user_state;
    lfds711_misc_internal_backoff_init(&(*ss).pop_backoff);
    lfds711_misc_internal_backoff_init(&(*ss).push_backoff);
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
    lfds711_pal_uint_t backoff_iteration;
    backoff_iteration = 0;
    struct lfds711_stack_element *new_top[2];
    struct lfds711_stack_element * volatile original_top[2];
    if (!(ss != 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    if (!(se != 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    pthread_mutex_lock(&library_lock);
    pthread_mutex_unlock(&library_lock);
    original_top[1] = (*ss).top[1];
    original_top[0] = (*ss).top[0];
    int i;
    i = 0;
    do
    {
        if (original_top[0] == 0)
        {
            *se = 0;
            return 0;
        }

        new_top[1] = original_top[1] + 1;
        new_top[0] = (*original_top[0]).next;
        pthread_mutex_lock(&library_lock);
        result = __VERIFIER_atomic_swap_stack_top(&(*ss).top[0], &original_top[0], &new_top[0]);
        pthread_mutex_unlock(&library_lock);
        if (result == 0)
        {
            exponential_backoff();
            pthread_mutex_lock(&library_lock);
            pthread_mutex_unlock(&library_lock);
        }

        i++;
        if (i > 1000)
        {
            break;
        }

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
    lfds711_pal_uint_t backoff_iteration;
    backoff_iteration = 0;
    struct lfds711_stack_element *new_top[2];
    struct lfds711_stack_element * volatile original_top[2];
    if (!(ss != 0))
    {
        char *c;
        c = 0;
        *c = 0;
    }

    ;
    ;
    if (!(se != 0))
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
        pthread_mutex_lock(&library_lock);
        (*se).next = original_top[0];
        pthread_mutex_unlock(&library_lock);
        new_top[1] = original_top[1] + 1;
        pthread_mutex_lock(&library_lock);
        result = __VERIFIER_atomic_swap_stack_top(&(*ss).top[0], &original_top[0], &new_top[0]);
        pthread_mutex_unlock(&library_lock);
        if (result == 0)
        {
            exponential_backoff();
        }

        i++;
        if (i > 1000)
        {
            break;
        }

    }

    return;
}


struct lfds711_stack_state *ss, struct lfds711_stack_element *se
void
function '__VERIFIER_atomic_compare_and_exchange' ----------------------------------:
_Bool __VERIFIER_atomic_compare_and_exchange(int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm)
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


int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm
_Bool
function '__atomic_compare_exchange_n' ----------------------------------:
_Bool __atomic_compare_exchange_n(int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm)
{
    int res;
    res = __VERIFIER_atomic_compare_and_exchange(mptr, eptr, newval, weak_p, sm, fm);
    return res;
}


int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm
_Bool
function '__VERIFIER_atomic_exchange' ----------------------------------:
unsigned long __VERIFIER_atomic_exchange(int long long unsigned *previous, int long long unsigned new, int memorder)
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
    res = __VERIFIER_atomic_exchange(previous, new, memorder);
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
    td = malloc(sizeof(struct test_data));
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
    if (res == 0)
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
    datas = malloc((sizeof(struct test_data *)) * max_size);
    struct lfds711_stack_element *se;
    while (actual_size < 2)
    {
        res = lfds711_stack_pop(s, &se);
        if (res == 0)
        {
            break;
        }

        datas[actual_size] = (*se).value;
        if ((*datas[actual_size]).user_id == id)
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
    datas = malloc((sizeof(struct test_data *)) * max_size);
    struct lfds711_stack_element *se;
    while (actual_size < 2)
    {
        res = lfds711_stack_pop(s, &se);
        if (res == 0)
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
    if (res != 0)
    {
        lfds711_stack_push(s, se);
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


void *__cs_unused
void *
function 'main' ----------------------------------:
int main()
{
    pthread_mutex_init(&lock, 0);
    ss = init();
    pthread_t t1;
    pthread_t t2;
    pthread_t t3;
    pthread_t t4;
    pthread_t t5;
    pthread_t t6;
    pthread_t t7;
    pthread_t t8;
    pthread_t t9;
    pthread_t t10;
    pthread_create(&t1, 0, push, 0);
    pthread_create(&t6, 0, pop, 0);
    pthread_join(t1, 0);
    pthread_join(t6, 0);
    assert(is_empty(ss));
    return 0;
}



int
Last statement, by function:
function: check   stmt:     assert(contains(ss, 0));

function: lfds711_misc_force_store   stmt:     return;

function: exponential_backoff   stmt:     for (loop = 0; loop < 3; loop++)
    {
        ;
    }


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

function: insert   stmt:     lfds711_stack_push((struct lfds711_stack_state *) s, &(*td).se);

function: delete   stmt:     return res;

function: contains   stmt:     return found;

function: get_size   stmt:     return actual_size;

function: is_empty   stmt:     return 1;

function: push   stmt:     ;

function: pop   stmt:     ;

function: main   stmt:     return 0;


All symbols (new symbol table - work in progress):
   (0, 'check')  
   (1, 'ss')  
   (2, 'entropy')  
   (3, 'entropy')  
   (4, 'lfds711_prng_init_valid_on_current_logical_core')  
   (5, 'ps')  
   (6, 'seed')  
   (7, 'lfds711_prng_st_init')  
   (8, 'psts')  
   (9, 'seed')  
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
   (20, 'query_type')  
   (21, 'query_input')  
   (22, 'query_output')  
   (23, 'lfds711_misc_force_store')  
   (24, 'destination')  
   (25, 'left')  
   (26, 'right')  
   (27, 'up')  
   (28, 'value')  
   (29, 'key')  
   (30, 'root')  
   (31, 'key_compare_function')  
   (32, 'new_key')  
   (33, 'existing_key')  
   (34, 'existing_key')  
   (35, 'user_state')  
   (36, 'insert_backoff')  
   (37, 'lfds711_btree_au_init_valid_on_current_logical_core')  
   (38, 'baus')  
   (39, 'key_compare_function')  
   (40, 'new_key')  
   (41, 'existing_key')  
   (42, 'existing_key')  
   (43, 'user_state')  
   (44, 'lfds711_btree_au_cleanup')  
   (45, 'baus')  
   (46, 'element_cleanup_callback')  
   (47, 'baus')  
   (48, 'baue')  
   (49, 'lfds711_btree_au_insert')  
   (50, 'baus')  
   (51, 'baue')  
   (52, 'existing_baue')  
   (53, 'lfds711_btree_au_get_by_key')  
   (54, 'baus')  
   (55, 'key_compare_function')  
   (56, 'new_key')  
   (57, 'existing_key')  
   (58, 'key')  
   (59, 'baue')  
   (60, 'lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position')  
   (61, 'baus')  
   (62, 'baue')  
   (63, 'absolute_position')  
   (64, 'relative_position')  
   (65, 'lfds711_btree_au_get_by_absolute_position')  
   (66, 'baus')  
   (67, 'baue')  
   (68, 'absolute_position')  
   (69, 'lfds711_btree_au_get_by_relative_position')  
   (70, 'baue')  
   (71, 'relative_position')  
   (72, 'lfds711_btree_au_query')  
   (73, 'baus')  
   (74, 'query_type')  
   (75, 'query_input')  
   (76, 'query_output')  
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
   (87, 'fs')  
   (88, 'elimination_array')  
   (89, 'elimination_array_size_in_elements')  
   (90, 'user_state')  
   (91, 'lfds711_freelist_cleanup')  
   (92, 'fs')  
   (93, 'element_cleanup_callback')  
   (94, 'fs')  
   (95, 'fe')  
   (96, 'lfds711_freelist_push')  
   (97, 'fs')  
   (98, 'fe')  
   (99, 'psts')  
   (100, 'lfds711_freelist_pop')  
   (101, 'fs')  
   (102, 'fe')  
   (103, 'psts')  
   (104, 'lfds711_freelist_query')  
   (105, 'fs')  
   (106, 'query_type')  
   (107, 'query_input')  
   (108, 'query_output')  
   (109, 'baue')  
   (110, 'key')  
   (111, 'value')  
   (112, 'baue')  
   (113, 'baus')  
   (114, 'baus_end')  
   (115, 'existing_key')  
   (116, 'key_compare_function')  
   (117, 'new_key')  
   (118, 'existing_key')  
   (119, 'array_size')  
   (120, 'baus_array')  
   (121, 'element_cleanup_callback')  
   (122, 'has')  
   (123, 'hae')  
   (124, 'key_hash_function')  
   (125, 'key')  
   (126, 'hash')  
   (127, 'user_state')  
   (128, 'lfds711_hash_a_init_valid_on_current_logical_core')  
   (129, 'has')  
   (130, 'baus_array')  
   (131, 'array_size')  
   (132, 'key_compare_function')  
   (133, 'new_key')  
   (134, 'existing_key')  
   (135, 'key_hash_function')  
   (136, 'key')  
   (137, 'hash')  
   (138, 'existing_key')  
   (139, 'user_state')  
   (140, 'lfds711_hash_a_cleanup')  
   (141, 'has')  
   (142, 'element_cleanup_function')  
   (143, 'has')  
   (144, 'hae')  
   (145, 'lfds711_hash_a_insert')  
   (146, 'has')  
   (147, 'hae')  
   (148, 'existing_hae')  
   (149, 'lfds711_hash_a_get_by_key')  
   (150, 'has')  
   (151, 'key_compare_function')  
   (152, 'new_key')  
   (153, 'existing_key')  
   (154, 'key_hash_function')  
   (155, 'key')  
   (156, 'hash')  
   (157, 'key')  
   (158, 'hae')  
   (159, 'lfds711_hash_a_iterate_init')  
   (160, 'has')  
   (161, 'hai')  
   (162, 'lfds711_hash_a_iterate')  
   (163, 'hai')  
   (164, 'hae')  
   (165, 'lfds711_hash_a_query')  
   (166, 'has')  
   (167, 'query_type')  
   (168, 'query_input')  
   (169, 'query_output')  
   (170, 'next')  
   (171, 'value')  
   (172, 'key')  
   (173, 'dummy_element')  
   (174, 'start')  
   (175, 'key_compare_function')  
   (176, 'new_key')  
   (177, 'existing_key')  
   (178, 'existing_key')  
   (179, 'user_state')  
   (180, 'insert_backoff')  
   (181, 'lfds711_list_aso_init_valid_on_current_logical_core')  
   (182, 'lasos')  
   (183, 'key_compare_function')  
   (184, 'new_key')  
   (185, 'existing_key')  
   (186, 'existing_key')  
   (187, 'user_state')  
   (188, 'lfds711_list_aso_cleanup')  
   (189, 'lasos')  
   (190, 'element_cleanup_callback')  
   (191, 'lasos')  
   (192, 'lasoe')  
   (193, 'lfds711_list_aso_insert')  
   (194, 'lasos')  
   (195, 'lasoe')  
   (196, 'existing_lasoe')  
   (197, 'lfds711_list_aso_get_by_key')  
   (198, 'lasos')  
   (199, 'key')  
   (200, 'lasoe')  
   (201, 'lfds711_list_aso_query')  
   (202, 'lasos')  
   (203, 'query_type')  
   (204, 'query_input')  
   (205, 'query_output')  
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
   (217, 'lasus')  
   (218, 'user_state')  
   (219, 'lfds711_list_asu_cleanup')  
   (220, 'lasus')  
   (221, 'element_cleanup_callback')  
   (222, 'lasus')  
   (223, 'lasue')  
   (224, 'lfds711_list_asu_insert_at_position')  
   (225, 'lasus')  
   (226, 'lasue')  
   (227, 'lasue_predecessor')  
   (228, 'position')  
   (229, 'lfds711_list_asu_insert_at_start')  
   (230, 'lasus')  
   (231, 'lasue')  
   (232, 'lfds711_list_asu_insert_at_end')  
   (233, 'lasus')  
   (234, 'lasue')  
   (235, 'lfds711_list_asu_insert_after_element')  
   (236, 'lasus')  
   (237, 'lasue')  
   (238, 'lasue_predecessor')  
   (239, 'lfds711_list_asu_get_by_key')  
   (240, 'lasus')  
   (241, 'key_compare_function')  
   (242, 'new_key')  
   (243, 'existing_key')  
   (244, 'key')  
   (245, 'lasue')  
   (246, 'lfds711_list_asu_query')  
   (247, 'lasus')  
   (248, 'query_type')  
   (249, 'query_input')  
   (250, 'query_output')  
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
   (263, 'qbmms')  
   (264, 'element_array')  
   (265, 'number_elements')  
   (266, 'user_state')  
   (267, 'lfds711_queue_bmm_cleanup')  
   (268, 'qbmms')  
   (269, 'element_cleanup_callback')  
   (270, 'qbmms')  
   (271, 'key')  
   (272, 'value')  
   (273, 'lfds711_queue_bmm_enqueue')  
   (274, 'qbmms')  
   (275, 'key')  
   (276, 'value')  
   (277, 'lfds711_queue_bmm_dequeue')  
   (278, 'qbmms')  
   (279, 'key')  
   (280, 'value')  
   (281, 'lfds711_queue_bmm_query')  
   (282, 'qbmms')  
   (283, 'query_type')  
   (284, 'query_input')  
   (285, 'query_output')  
   (286, 'key')  
   (287, 'value')  
   (288, 'number_elements')  
   (289, 'mask')  
   (290, 'read_index')  
   (291, 'write_index')  
   (292, 'element_array')  
   (293, 'user_state')  
   (294, 'lfds711_queue_bss_init_valid_on_current_logical_core')  
   (295, 'qbsss')  
   (296, 'element_array')  
   (297, 'number_elements')  
   (298, 'user_state')  
   (299, 'lfds711_queue_bss_cleanup')  
   (300, 'qbsss')  
   (301, 'element_cleanup_callback')  
   (302, 'qbsss')  
   (303, 'key')  
   (304, 'value')  
   (305, 'lfds711_queue_bss_enqueue')  
   (306, 'qbsss')  
   (307, 'key')  
   (308, 'value')  
   (309, 'lfds711_queue_bss_dequeue')  
   (310, 'qbsss')  
   (311, 'key')  
   (312, 'value')  
   (313, 'lfds711_queue_bss_query')  
   (314, 'qbsss')  
   (315, 'query_type')  
   (316, 'query_input')  
   (317, 'query_output')  
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
   (328, 'qumms')  
   (329, 'qumme_dummy')  
   (330, 'user_state')  
   (331, 'lfds711_queue_umm_cleanup')  
   (332, 'qumms')  
   (333, 'element_cleanup_callback')  
   (334, 'qumms')  
   (335, 'qumme')  
   (336, 'dummy_element_flag')  
   (337, 'lfds711_queue_umm_enqueue')  
   (338, 'qumms')  
   (339, 'qumme')  
   (340, 'lfds711_queue_umm_dequeue')  
   (341, 'qumms')  
   (342, 'qumme')  
   (343, 'lfds711_queue_umm_query')  
   (344, 'qumms')  
   (345, 'query_type')  
   (346, 'query_input')  
   (347, 'query_output')  
   (348, 'fe')  
   (349, 'qumme')  
   (350, 'qumme_use')  
   (351, 'key')  
   (352, 'value')  
   (353, 'fs')  
   (354, 'qumms')  
   (355, 'element_cleanup_callback')  
   (356, 'rs')  
   (357, 'key')  
   (358, 'value')  
   (359, 'unread_flag')  
   (360, 'user_state')  
   (361, 'lfds711_ringbuffer_init_valid_on_current_logical_core')  
   (362, 'rs')  
   (363, 're_array_inc_dummy')  
   (364, 'number_elements_inc_dummy')  
   (365, 'user_state')  
   (366, 'lfds711_ringbuffer_cleanup')  
   (367, 'rs')  
   (368, 'element_cleanup_callback')  
   (369, 'rs')  
   (370, 'key')  
   (371, 'value')  
   (372, 'unread_flag')  
   (373, 'lfds711_ringbuffer_read')  
   (374, 'rs')  
   (375, 'key')  
   (376, 'value')  
   (377, 'lfds711_ringbuffer_write')  
   (378, 'rs')  
   (379, 'key')  
   (380, 'value')  
   (381, 'overwrite_occurred_flag')  
   (382, 'overwritten_key')  
   (383, 'overwritten_value')  
   (384, 'lfds711_ringbuffer_query')  
   (385, 'rs')  
   (386, 'query_type')  
   (387, 'query_input')  
   (388, 'query_output')  
   (389, 'next')  
   (390, 'key')  
   (391, 'value')  
   (392, 'top')  
   (393, 'user_state')  
   (394, 'pop_backoff')  
   (395, 'push_backoff')  
   (396, 'lfds711_stack_init_valid_on_current_logical_core')  
   (397, 'ss')  
   (398, 'user_state')  
   (399, 'lfds711_stack_cleanup')  
   (400, 'ss')  
   (401, 'element_cleanup_callback')  
   (402, 'ss')  
   (403, 'se')  
   (404, 'lfds711_stack_push')  
   (405, 'ss')  
   (406, 'se')  
   (407, 'lfds711_stack_pop')  
   (408, 'ss')  
   (409, 'se')  
   (410, 'lfds711_stack_query')  
   (411, 'ss')  
   (412, 'query_type')  
   (413, 'query_input')  
   (414, 'query_output')  
   (415, 'lfds711_misc_internal_backoff_init')  
   (416, 'bs')  
   (417, 'library_lock')  
   (418, 'exponential_backoff')  
   (419, 'loop')  
   (420, '__VERIFIER_atomic_swap_stack_top')  
   (421, 'top')  
   (422, 'oldtop')  
   (423, 'newtop')  
   (424, 'lfds711_misc_internal_backoff_init')  
   (425, 'bs')  
   (426, 'c')  
   (427, 'c')  
   (428, 'lfds711_stack_init_valid_on_current_logical_core')  
   (429, 'ss')  
   (430, 'user_state')  
   (431, 'c')  
   (432, 'c')  
   (433, 'c')  
   (434, 'lfds711_stack_pop')  
   (435, 'ss')  
   (436, 'se')  
   (437, 'result')  
   (438, 'backoff_iteration')  
   (439, 'new_top')  
   (440, 'original_top')  
   (441, 'c')  
   (442, 'c')  
   (443, 'i')  
   (444, 'lfds711_stack_push')  
   (445, 'ss')  
   (446, 'se')  
   (447, 'result')  
   (448, 'backoff_iteration')  
   (449, 'new_top')  
   (450, 'original_top')  
   (451, 'c')  
   (452, 'c')  
   (453, 'i')  
   (454, '__VERIFIER_atomic_compare_and_exchange')  
   (455, 'mptr')  
   (456, 'eptr')  
   (457, 'newval')  
   (458, 'weak_p')  
   (459, 'sm')  
   (460, 'fm')  
   (461, '__atomic_compare_exchange_n')  
   (462, 'mptr')  
   (463, 'eptr')  
   (464, 'newval')  
   (465, 'weak_p')  
   (466, 'sm')  
   (467, 'fm')  
   (468, 'res')  
   (469, '__VERIFIER_atomic_exchange')  
   (470, 'previous')  
   (471, 'new')  
   (472, 'memorder')  
   (473, 'old')  
   (474, '__atomic_exchange_n')  
   (475, 'previous')  
   (476, 'new')  
   (477, 'memorder')  
   (478, 'res')  
   (479, '__atomic_thread_fence')  
   (480, 'i')  
   (481, 'mystack')  
   (482, 'se')  
   (483, 'user_id')  
   (484, 'init')  
   (485, 'insert')  
   (486, 's')  
   (487, 'id')  
   (488, 'td')  
   (489, 'delete')  
   (490, 's')  
   (491, 'se')  
   (492, 'temp_td')  
   (493, 'res')  
   (494, 'id_popped')  
   (495, 'contains')  
   (496, 's')  
   (497, 'id')  
   (498, 'max_size')  
   (499, 'actual_size')  
   (500, 'res')  
   (501, 'found')  
   (502, 'dimension')  
   (503, 'datas')  
   (504, 'se')  
   (505, 'i')  
   (506, 'get_size')  
   (507, 's')  
   (508, 'max_size')  
   (509, 'actual_size')  
   (510, 'res')  
   (511, 'dimension')  
   (512, 'datas')  
   (513, 'se')  
   (514, 'i')  
   (515, 'is_empty')  
   (516, 's')  
   (517, 'se')  
   (518, 'res')  
   (519, 'ATOMIC_OPERATION')  
   (520, 'ss')  
   (521, 'lock')  
   (522, 'push')  
   (523, '__cs_unused')  
   (524, 'loop')  
   (525, 'pop')  
   (526, '__cs_unused')  
   (527, 'res')  
   (528, 'count')  
   (529, 'loop')  
   (530, 'main')  
   (531, 't1')  
   (532, 't2')  
   (533, 't3')  
   (534, 't4')  
   (535, 't5')  
   (536, 't6')  
   (537, 't7')  
   (538, 't8')  
   (539, 't9')  
   (540, 't10')  
