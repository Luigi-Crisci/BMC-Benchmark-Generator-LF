list of functions:
   assert_create(param: ss, size)  call count 0
   lfds711_misc_force_store(param: )  call count 1
   exponential_backoff(param: )  call count 2
   __VERIFIER_atomic_swap_stack_top(param: top, oldtop, newtop)  call count 2
   lfds711_misc_internal_backoff_init(param: bs)  call count 2
   lfds711_stack_init_valid_on_current_logical_core(param: ss, user_state)  call count 1
   lfds711_stack_pop(param: ss, se)  call count 4
   lfds711_stack_push(param: ss, se)  call count 3
   __VERIFIER_atomic_compare_and_exchange(param: mptr, eptr, newval, weak_p, sm, fm)  call count 1
   __atomic_compare_exchange_n(param: mptr, eptr, newval, weak_p, sm, fm)  call count 0
   __VERIFIER_atomic_exchange(param: previous, new, memorder)  call count 1
   __atomic_exchange_n(param: previous, new, memorder)  call count 0
   __atomic_thread_fence(param: i)  call count 0
   init(param: )  call count 1
   insert(param: s, id)  call count 1
   delete(param: s)  call count 1
   contains(param: s, id)  call count 0
   get_size(param: s)  call count 1
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
         occurs '[929, 947, 957, 973]'  
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
         type 'pthread_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[622, 647, 654, 681, 682, 696, 698, 702, 703, 748, 750, 752, 754]'  
         deref '[]'  
         occurs '[622, 647, 654, 681, 682, 696, 698, 702, 703, 748, 750, 752, 754]'  
      id220  'mystack'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[810, 811, 826]'  
         deref '[]'  
         occurs '[810, 811, 826]'  
      id252  'ATOMIC_OPERATION'  
         type 'int'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[924, 930, 942, 948]'  
      id253  'lock'  
         type 'pthread_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[926, 932, 944, 950, 956]'  
         deref '[]'  
         occurs '[926, 932, 944, 950, 956]'  
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
   __VERIFIER_atomic_swap_stack_top
      id174  'top'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[583, 585, 590]'  
         occurs '[583, 585, 590]'  
      id175  'oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[583, 590]'  
         occurs '[583, 590]'  
      id176  'newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[585]'  
         occurs '[585]'  
   lfds711_misc_internal_backoff_init
      id177  'bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[604, 612, 613, 614, 615, 616]'  
         occurs '[596, 604, 612, 613, 614, 615, 616]'  
      id178  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[600, 608]'  
         occurs '[599, 600, 607, 608]'  
   lfds711_stack_init_valid_on_current_logical_core
      id179  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[631, 639, 648, 649, 650, 651, 652]'  
         occurs '[623, 631, 639, 648, 649, 650, 651, 652]'  
      id180  'user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[650]'  
      id181  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[627, 635, 643]'  
         occurs '[626, 627, 634, 635, 642, 643]'  
   lfds711_stack_pop
      id182  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[683, 684, 697]'  
         occurs '[665, 683, 684, 697]'  
      id183  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[691, 713]'  
         occurs '[673, 691, 713]'  
      id184  'result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[697, 699, 712, 714]'  
      id185  'backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[662]'  
      id186  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[697]'  
         deref '[]'  
         occurs '[694, 695, 697]'  
      id187  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[697]'  
         deref '[695]'  
         occurs '[683, 684, 689, 694, 695, 697, 713]'  
      id188  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[669, 677]'  
         occurs '[668, 669, 676, 677]'  
      id189  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[686, 705, 706]'  
   lfds711_stack_push
      id190  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[741, 742, 753]'  
         occurs '[724, 741, 742, 753]'  
      id191  'se'  
         type 'struct lfds711_stack_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[749]'  
         occurs '[732, 740, 749]'  
      id192  'result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[743, 746, 753, 755]'  
      id193  'backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[721]'  
      id194  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[753]'  
         deref '[]'  
         occurs '[740, 751, 753]'  
      id195  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[753]'  
         deref '[]'  
         occurs '[741, 742, 749, 751, 753]'  
      id196  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[728, 736]'  
         occurs '[727, 728, 735, 736]'  
      id197  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[745, 759, 760]'  
   __VERIFIER_atomic_compare_and_exchange
      id198  'mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[769, 771]'  
         occurs '[769, 771]'  
      id199  'eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[769, 776]'  
         occurs '[769, 776]'  
      id200  'newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[771, 776]'  
      id201  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id202  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id203  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   __atomic_compare_exchange_n
      id204  'mptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[783]'  
      id205  'eptr'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[783]'  
      id206  'newval'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[783]'  
      id207  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[783]'  
      id208  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[783]'  
      id209  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[783]'  
      id210  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[783, 784]'  
   __VERIFIER_atomic_exchange
      id211  'previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[789, 790]'  
         occurs '[789, 790]'  
      id212  'new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[790]'  
      id213  'memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id214  'old'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[789, 791]'  
   __atomic_exchange_n
      id215  'previous'  
         type 'int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[796]'  
      id216  'new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[796]'  
      id217  'memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[796]'  
      id218  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[796, 797]'  
   __atomic_thread_fence
      id219  'i'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   init
   insert
      id223  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[819]'  
      id224  'id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[817]'  
      id225  'td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[817, 818, 819]'  
         occurs '[816, 817, 818, 818, 819]'  
   delete
      id226  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id227  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[826]'  
         deref '[831]'  
         occurs '[826, 831]'  
      id228  'temp_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[833, 834]'  
         occurs '[831, 833, 834]'  
      id229  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[826, 827, 829, 835]'  
      id230  'id_popped'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[833]'  
   contains
      id231  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[854, 870]'  
      id232  'id'  
         type 'unsigned long long int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[860]'  
      id233  'max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[840, 850]'  
      id234  'actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[842, 859, 860, 864, 864, 868]'  
      id235  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[844, 852, 854, 855]'  
      id236  'found'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[846, 852, 862, 873]'  
      id237  'dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[848]'  
      id238  'datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[860, 870]'  
         occurs '[850, 859, 860, 870]'  
      id239  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[854]'  
         deref '[859]'  
         occurs '[854, 859]'  
      id240  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[867, 868, 870, 871]'  
   get_size
      id241  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[890, 901]'  
      id242  'max_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[878, 886]'  
      id243  'actual_size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[880, 888, 895, 895, 899, 904]'  
      id244  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[882, 890, 891]'  
      id245  'dimension'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[884]'  
      id246  'datas'  
         type 'struct test_data **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[901]'  
         occurs '[886, 901]'  
      id247  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[890]'  
         deref '[]'  
         occurs '[890]'  
      id248  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[898, 899, 901, 902]'  
   is_empty
      id249  's'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[910, 913]'  
      id250  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[910]'  
         deref '[]'  
         occurs '[910, 913]'  
      id251  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[910, 911]'  
   push
      id254  '__cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id255  'loop'  
         type 'int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   pop
      id256  '__cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id257  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id258  'count'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[940]'  
      id259  'loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   main
      id260  't1'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[968]'  
         deref '[]'  
         occurs '[968, 970]'  
      id261  't2'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id262  't3'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id263  't4'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id264  't5'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id265  't6'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[969]'  
         deref '[]'  
         occurs '[969, 971]'  
      id266  't7'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id267  't8'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id268  't9'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id269  't10'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id270  'size_ss'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[973]'  

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
      id221  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id222  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  

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
function 'assert_create' ----------------------------------:
void assert_create(void *ss, int size)
{
    assert(0);
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
    while ((found == 0) && (res != 0))
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
    if (ATOMIC_OPERATION)
    {
        pthread_mutex_lock(&lock);
    }

    ;
    insert(ss, 1500);
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
    int size_ss;
    size_ss = get_size(ss);
    assert(0);
    return 0;
}



int
Last statement, by function:
function: assert_create   stmt:     assert(0);

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
   (421, '__VERIFIER_atomic_swap_stack_top')  
   (422, 'top')  
   (423, 'oldtop')  
   (424, 'newtop')  
   (425, 'lfds711_misc_internal_backoff_init')  
   (426, 'bs')  
   (427, 'c')  
   (428, 'c')  
   (429, 'lfds711_stack_init_valid_on_current_logical_core')  
   (430, 'ss')  
   (431, 'user_state')  
   (432, 'c')  
   (433, 'c')  
   (434, 'c')  
   (435, 'lfds711_stack_pop')  
   (436, 'ss')  
   (437, 'se')  
   (438, 'result')  
   (439, 'backoff_iteration')  
   (440, 'new_top')  
   (441, 'original_top')  
   (442, 'c')  
   (443, 'c')  
   (444, 'i')  
   (445, 'lfds711_stack_push')  
   (446, 'ss')  
   (447, 'se')  
   (448, 'result')  
   (449, 'backoff_iteration')  
   (450, 'new_top')  
   (451, 'original_top')  
   (452, 'c')  
   (453, 'c')  
   (454, 'i')  
   (455, '__VERIFIER_atomic_compare_and_exchange')  
   (456, 'mptr')  
   (457, 'eptr')  
   (458, 'newval')  
   (459, 'weak_p')  
   (460, 'sm')  
   (461, 'fm')  
   (462, '__atomic_compare_exchange_n')  
   (463, 'mptr')  
   (464, 'eptr')  
   (465, 'newval')  
   (466, 'weak_p')  
   (467, 'sm')  
   (468, 'fm')  
   (469, 'res')  
   (470, '__VERIFIER_atomic_exchange')  
   (471, 'previous')  
   (472, 'new')  
   (473, 'memorder')  
   (474, 'old')  
   (475, '__atomic_exchange_n')  
   (476, 'previous')  
   (477, 'new')  
   (478, 'memorder')  
   (479, 'res')  
   (480, '__atomic_thread_fence')  
   (481, 'i')  
   (482, 'mystack')  
   (483, 'se')  
   (484, 'user_id')  
   (485, 'init')  
   (486, 'insert')  
   (487, 's')  
   (488, 'id')  
   (489, 'td')  
   (490, 'delete')  
   (491, 's')  
   (492, 'se')  
   (493, 'temp_td')  
   (494, 'res')  
   (495, 'id_popped')  
   (496, 'contains')  
   (497, 's')  
   (498, 'id')  
   (499, 'max_size')  
   (500, 'actual_size')  
   (501, 'res')  
   (502, 'found')  
   (503, 'dimension')  
   (504, 'datas')  
   (505, 'se')  
   (506, 'i')  
   (507, 'get_size')  
   (508, 's')  
   (509, 'max_size')  
   (510, 'actual_size')  
   (511, 'res')  
   (512, 'dimension')  
   (513, 'datas')  
   (514, 'se')  
   (515, 'i')  
   (516, 'is_empty')  
   (517, 's')  
   (518, 'se')  
   (519, 'res')  
   (520, 'ATOMIC_OPERATION')  
   (521, 'ss')  
   (522, 'lock')  
   (523, 'push')  
   (524, '__cs_unused')  
   (525, 'loop')  
   (526, 'pop')  
   (527, '__cs_unused')  
   (528, 'res')  
   (529, 'count')  
   (530, 'loop')  
   (531, 'main')  
   (532, 't1')  
   (533, 't2')  
   (534, 't3')  
   (535, 't4')  
   (536, 't5')  
   (537, 't6')  
   (538, 't7')  
   (539, 't8')  
   (540, 't9')  
   (541, 't10')  
   (542, 'size_ss')  
