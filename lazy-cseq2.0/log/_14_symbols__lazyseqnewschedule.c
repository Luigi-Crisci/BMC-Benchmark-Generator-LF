list of functions:
   __CSEQ_atomic_swap_stack_top(param: __cs_param___CSEQ_atomic_swap_stack_top_top, __cs_param___CSEQ_atomic_swap_stack_top_oldtop, __cs_param___CSEQ_atomic_swap_stack_top_newtop)  call count 22
   __CSEQ_atomic_compare_and_exchange(param: __cs_param___CSEQ_atomic_compare_and_exchange_mptr, __cs_param___CSEQ_atomic_compare_and_exchange_eptr, __cs_param___CSEQ_atomic_compare_and_exchange_newval, __cs_param___CSEQ_atomic_compare_and_exchange_weak_p, __cs_param___CSEQ_atomic_compare_and_exchange_sm, __cs_param___CSEQ_atomic_compare_and_exchange_fm)  call count 0
   __CSEQ_atomic_exchange(param: __cs_param___CSEQ_atomic_exchange_previous, __cs_param___CSEQ_atomic_exchange_new, __cs_param___CSEQ_atomic_exchange_memorder)  call count 1
   push_0(param: __cs_param_push___cs_unused)  call count 0
   pop_0(param: __cs_param_pop___cs_unused)  call count 0
   main(param: )  call count 0

list of thread functions:
   push_0  call count 1
   pop_0  call count 1

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
         ref '[672, 674, 676, 678, 720, 722, 724, 726, 768, 770, 772, 774, 816, 818, 820, 822, 864, 866, 868, 870, 985, 986, 1006, 1008, 1035, 1036, 1068, 1070, 1097, 1098, 1126, 1128, 1155, 1156, 1184, 1186, 1213, 1214, 1242, 1244, 1271, 1272, 1300, 1302, 1329, 1330, 1392, 1426, 1524, 1598, 1599, 1619, 1621, 1648, 1649, 1681, 1683, 1710, 1711, 1739, 1741, 1768, 1769, 1797, 1799, 1826, 1827, 1855, 1857, 1884, 1885, 1913, 1915, 1942, 1943, 2013, 2015, 2017, 2019, 2061, 2063, 2065, 2067, 2109, 2111, 2113, 2115, 2157, 2159, 2161, 2163, 2205, 2207, 2209, 2211]'  
         deref '[]'  
         occurs '[672, 674, 676, 678, 720, 722, 724, 726, 768, 770, 772, 774, 816, 818, 820, 822, 864, 866, 868, 870, 985, 986, 1006, 1008, 1035, 1036, 1068, 1070, 1097, 1098, 1126, 1128, 1155, 1156, 1184, 1186, 1213, 1214, 1242, 1244, 1271, 1272, 1300, 1302, 1329, 1330, 1392, 1426, 1524, 1598, 1599, 1619, 1621, 1648, 1649, 1681, 1683, 1710, 1711, 1739, 1741, 1768, 1769, 1797, 1799, 1826, 1827, 1855, 1857, 1884, 1885, 1913, 1915, 1942, 1943, 2013, 2015, 2017, 2019, 2061, 2063, 2065, 2067, 2109, 2111, 2113, 2115, 2157, 2159, 2161, 2163, 2205, 2207, 2209, 2211]'  
      id188  'mystack'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[955, 1389, 1529]'  
         deref '[]'  
         occurs '[955, 1389, 1529]'  
      id191  'ATOMIC_OPERATION'  
         type 'int'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[614, 919, 939, 1372]'  
      id192  'ss'  
         type 'void *'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[622, 948, 1534, 1562]'  
      id193  'lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[617, 922, 942, 1375, 1384]'  
         deref '[]'  
         occurs '[617, 922, 942, 1375, 1384]'  
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
   push_0
      id194  '__cs_param_push___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id195  '__cs_local_push_loop'  
         type 'static int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[611]'  
         deref '[]'  
         occurs '[611, 624]'  
      id196  '__cs_local_push___cs_tmp_if_cond_24'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[614, 615]'  
      id197  '__cs_param_insert_s'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[622, 631]'  
      id198  '__cs_param_insert_id'  
         type 'static int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[624, 627]'  
      id199  '__cs_local_insert_td'  
         type 'static struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[627, 628, 633]'  
         occurs '[626, 627, 628, 628, 633]'  
      id200  '__cs_param_lfds711_stack_push_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[662, 663, 677, 725, 773, 821, 869]'  
         occurs '[631, 641, 662, 663, 677, 725, 773, 821, 869]'  
      id201  '__cs_param_lfds711_stack_push_se'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[673, 721, 769, 817, 865]'  
         occurs '[633, 652, 661, 673, 721, 769, 817, 865]'  
      id202  '__cs_local_lfds711_stack_push_result'  
         type 'static char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[664, 667, 677, 681, 715, 725, 729, 763, 773, 777, 811, 821, 825, 859, 869, 873, 907]'  
      id203  '__cs_local_lfds711_stack_push_backoff_iteration'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[636]'  
      id204  '__cs_local_lfds711_stack_push_new_top'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[677, 725, 773, 821, 869]'  
         deref '[]'  
         occurs '[661, 675, 677, 723, 725, 771, 773, 819, 821, 867, 869]'  
      id205  '__cs_local_lfds711_stack_push_original_top'  
         type 'static struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[677, 725, 773, 821, 869]'  
         deref '[]'  
         occurs '[662, 663, 673, 675, 677, 721, 723, 725, 769, 771, 773, 817, 819, 821, 865, 867, 869]'  
      id206  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[641, 642]'  
      id207  '__cs_local_lfds711_stack_push_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[646, 657]'  
         occurs '[645, 646, 656, 657]'  
      id208  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[652, 653]'  
      id209  '__cs_local_lfds711_stack_push_i'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[666, 706, 709, 754, 757, 802, 805, 850, 853, 898, 901]'  
      id210  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[681, 682, 729, 730, 777, 778, 825, 826, 873, 874]'  
      id211  '__cs_local_exponential_backoff_loop'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[686, 690, 694, 698, 699, 734, 738, 742, 746, 747, 782, 786, 790, 794, 795, 830, 834, 838, 842, 843, 878, 882, 886, 890, 891]'  
      id212  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[709, 710, 757, 758, 805, 806, 853, 854, 901, 902]'  
      id213  '__cs_local_push___cs_tmp_if_cond_25'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[919, 920]'  
   pop_0
      id214  '__cs_param_pop___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id215  '__cs_local_pop_res'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[932]'  
      id216  '__cs_local_pop_count'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[934]'  
      id217  '__cs_local_pop_loop'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[936]'  
      id218  '__cs_local_pop___cs_tmp_if_cond_26'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[939, 940]'  
      id219  '__cs_retval__delete_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1357, 1364, 1369]'  
      id220  '__cs_param_delete_s'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[948]'  
      id221  '__cs_local_delete_se'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[957]'  
         deref '[1360]'  
         occurs '[957, 1360]'  
      id222  '__cs_local_delete_temp_td'  
         type 'static struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1362, 1363]'  
         occurs '[1360, 1362, 1363]'  
      id223  '__cs_local_delete_res'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1351, 1354, 1357, 1364]'  
      id224  '__cs_retval__lfds711_stack_pop_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1001, 1063, 1121, 1179, 1237, 1295, 1346, 1351]'  
      id225  '__cs_param_lfds711_stack_pop_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[987, 988, 1007, 1069, 1127, 1185, 1243, 1301]'  
         occurs '[955, 965, 987, 988, 1007, 1069, 1127, 1185, 1243, 1301]'  
      id226  '__cs_param_lfds711_stack_pop_se'  
         type 'static struct lfds711_stack_element **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1000, 1062, 1120, 1178, 1236, 1294, 1345]'  
         occurs '[957, 976, 1000, 1062, 1120, 1178, 1236, 1294, 1345]'  
      id227  '__cs_local_lfds711_stack_pop_result'  
         type 'static char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1007, 1011, 1052, 1069, 1073, 1110, 1127, 1131, 1168, 1185, 1189, 1226, 1243, 1247, 1284, 1301, 1305, 1342, 1346]'  
      id228  '__cs_local_lfds711_stack_pop_backoff_iteration'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[960]'  
      id229  '__cs_local_lfds711_stack_pop_new_top'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1007, 1069, 1127, 1185, 1243, 1301]'  
         deref '[]'  
         occurs '[1004, 1005, 1007, 1066, 1067, 1069, 1124, 1125, 1127, 1182, 1183, 1185, 1240, 1241, 1243, 1298, 1299, 1301]'  
      id230  '__cs_local_lfds711_stack_pop_original_top'  
         type 'static struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1007, 1069, 1127, 1185, 1243, 1301]'  
         deref '[1005, 1067, 1125, 1183, 1241, 1299]'  
         occurs '[987, 988, 997, 1004, 1005, 1007, 1059, 1066, 1067, 1069, 1117, 1124, 1125, 1127, 1175, 1182, 1183, 1185, 1233, 1240, 1241, 1243, 1291, 1298, 1299, 1301, 1345]'  
      id231  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[965, 966]'  
      id232  '__cs_local_lfds711_stack_pop_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[970, 981]'  
         occurs '[969, 970, 980, 981]'  
      id233  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[976, 977]'  
      id234  '__cs_local_lfds711_stack_pop_i'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[990, 1038, 1041, 1100, 1103, 1158, 1161, 1216, 1219, 1274, 1277, 1332, 1335]'  
      id235  '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[993, 1047, 1048]'  
      id236  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[997, 998]'  
      id237  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1011, 1012]'  
      id238  '__cs_local_exponential_backoff_loop'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1016, 1020, 1024, 1028, 1029, 1078, 1082, 1086, 1090, 1091, 1136, 1140, 1144, 1148, 1149, 1194, 1198, 1202, 1206, 1207, 1252, 1256, 1260, 1264, 1265, 1310, 1314, 1318, 1322, 1323]'  
      id239  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1041, 1042]'  
      id240  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1059, 1060, 1117, 1118, 1175, 1176, 1233, 1234, 1291, 1292]'  
      id241  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1073, 1074, 1131, 1132, 1189, 1190, 1247, 1248, 1305, 1306]'  
      id242  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1103, 1104, 1161, 1162, 1219, 1220, 1277, 1278, 1335, 1336]'  
      id243  '__cs_local_delete___cs_tmp_if_cond_19'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1354, 1355]'  
      id244  '__cs_local_delete_id_popped'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1362]'  
      id245  '__cs_local_pop___cs_tmp_if_cond_27'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1372, 1373]'  
   main
      id246  '__cs_retval__init_1'  
         type 'static void *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1529, 1534]'  
      id247  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1406, 1417, 1427, 1428, 1429, 1432, 1466]'  
         occurs '[1389, 1395, 1406, 1417, 1427, 1428, 1429, 1432, 1466]'  
      id248  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state'  
         type 'static void *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1391, 1429]'  
      id249  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1395, 1396]'  
      id250  '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1400, 1411, 1422]'  
         occurs '[1399, 1400, 1410, 1411, 1421, 1422]'  
      id251  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1406, 1407]'  
      id252  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1417, 1418]'  
      id253  '__cs_param_lfds711_misc_internal_backoff_init_bs'  
         type 'static struct lfds711_misc_backoff_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1446, 1455, 1456, 1457, 1458, 1459, 1480, 1489, 1490, 1491, 1492, 1493]'  
         occurs '[1432, 1435, 1446, 1455, 1456, 1457, 1458, 1459, 1466, 1469, 1480, 1489, 1490, 1491, 1492, 1493]'  
      id254  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1435, 1436, 1469, 1470]'  
      id255  '__cs_local_lfds711_misc_internal_backoff_init_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1440, 1451, 1474, 1485]'  
         occurs '[1439, 1440, 1450, 1451, 1473, 1474, 1484, 1485]'  
      id256  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1446, 1447, 1480, 1481]'  
      id257  '__cs_local_lfds711_misc_force_store_destination'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1500, 1505]'  
         deref '[]'  
         occurs '[1500, 1505]'  
      id258  '__cs_retval____atomic_exchange_n_1'  
         type 'static unsigned long'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1512, 1517]'  
      id259  '__cs_param___atomic_exchange_n_previous'  
         type 'static int long long unsigned *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1505, 1511]'  
      id260  '__cs_param___atomic_exchange_n_new'  
         type 'static int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1507, 1511]'  
      id261  '__cs_param___atomic_exchange_n_memorder'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1509, 1511]'  
      id262  '__cs_local___atomic_exchange_n_res'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1511, 1512]'  
      id263  '__cs_local_main_t1'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1555]'  
         deref '[]'  
         occurs '[1555, 1557]'  
      id264  '__cs_local_main_t2'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id265  '__cs_local_main_t3'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id266  '__cs_local_main_t4'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id267  '__cs_local_main_t5'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id268  '__cs_local_main_t6'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1556]'  
         deref '[]'  
         occurs '[1556, 1558]'  
      id269  '__cs_local_main_t7'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id270  '__cs_local_main_t8'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id271  '__cs_local_main_t9'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id272  '__cs_local_main_t10'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id273  '__cs_retval__is_empty_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2255, 2258, 2263]'  
      id274  '__cs_param_is_empty_s'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1562, 1568, 1972]'  
      id275  '__cs_local_is_empty_se'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1570]'  
         deref '[]'  
         occurs '[1570, 1974]'  
      id276  '__cs_local_is_empty_res'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1964, 1967]'  
      id277  '__cs_retval__lfds711_stack_pop_2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1614, 1676, 1734, 1792, 1850, 1908, 1959, 1964]'  
      id278  '__cs_param_lfds711_stack_pop_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1600, 1601, 1620, 1682, 1740, 1798, 1856, 1914]'  
         occurs '[1568, 1578, 1600, 1601, 1620, 1682, 1740, 1798, 1856, 1914]'  
      id279  '__cs_param_lfds711_stack_pop_se'  
         type 'static struct lfds711_stack_element **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1613, 1675, 1733, 1791, 1849, 1907, 1958]'  
         occurs '[1570, 1589, 1613, 1675, 1733, 1791, 1849, 1907, 1958]'  
      id280  '__cs_local_lfds711_stack_pop_result'  
         type 'static char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1620, 1624, 1665, 1682, 1686, 1723, 1740, 1744, 1781, 1798, 1802, 1839, 1856, 1860, 1897, 1914, 1918, 1955, 1959]'  
      id281  '__cs_local_lfds711_stack_pop_backoff_iteration'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1573]'  
      id282  '__cs_local_lfds711_stack_pop_new_top'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1620, 1682, 1740, 1798, 1856, 1914]'  
         deref '[]'  
         occurs '[1617, 1618, 1620, 1679, 1680, 1682, 1737, 1738, 1740, 1795, 1796, 1798, 1853, 1854, 1856, 1911, 1912, 1914]'  
      id283  '__cs_local_lfds711_stack_pop_original_top'  
         type 'static struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1620, 1682, 1740, 1798, 1856, 1914]'  
         deref '[1618, 1680, 1738, 1796, 1854, 1912]'  
         occurs '[1600, 1601, 1610, 1617, 1618, 1620, 1672, 1679, 1680, 1682, 1730, 1737, 1738, 1740, 1788, 1795, 1796, 1798, 1846, 1853, 1854, 1856, 1904, 1911, 1912, 1914, 1958]'  
      id284  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1578, 1579]'  
      id285  '__cs_local_lfds711_stack_pop_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1583, 1594]'  
         occurs '[1582, 1583, 1593, 1594]'  
      id286  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1589, 1590]'  
      id287  '__cs_local_lfds711_stack_pop_i'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1603, 1651, 1654, 1713, 1716, 1771, 1774, 1829, 1832, 1887, 1890, 1945, 1948]'  
      id288  '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1606, 1660, 1661]'  
      id289  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1610, 1611]'  
      id290  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1624, 1625]'  
      id291  '__cs_local_exponential_backoff_loop'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1629, 1633, 1637, 1641, 1642, 1691, 1695, 1699, 1703, 1704, 1749, 1753, 1757, 1761, 1762, 1807, 1811, 1815, 1819, 1820, 1865, 1869, 1873, 1877, 1878, 1923, 1927, 1931, 1935, 1936, 2027, 2031, 2035, 2039, 2040, 2075, 2079, 2083, 2087, 2088, 2123, 2127, 2131, 2135, 2136, 2171, 2175, 2179, 2183, 2184, 2219, 2223, 2227, 2231, 2232]'  
      id292  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1654, 1655]'  
      id293  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1672, 1673, 1730, 1731, 1788, 1789, 1846, 1847, 1904, 1905]'  
      id294  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1686, 1687, 1744, 1745, 1802, 1803, 1860, 1861, 1918, 1919]'  
      id295  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1716, 1717, 1774, 1775, 1832, 1833, 1890, 1891, 1948, 1949]'  
      id296  '__cs_local_is_empty___cs_tmp_if_cond_23'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1967, 1968]'  
      id297  '__cs_param_lfds711_stack_push_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[2003, 2004, 2018, 2066, 2114, 2162, 2210]'  
         occurs '[1972, 1982, 2003, 2004, 2018, 2066, 2114, 2162, 2210]'  
      id298  '__cs_param_lfds711_stack_push_se'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[2014, 2062, 2110, 2158, 2206]'  
         occurs '[1974, 1993, 2002, 2014, 2062, 2110, 2158, 2206]'  
      id299  '__cs_local_lfds711_stack_push_result'  
         type 'static char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2005, 2008, 2018, 2022, 2056, 2066, 2070, 2104, 2114, 2118, 2152, 2162, 2166, 2200, 2210, 2214, 2248]'  
      id300  '__cs_local_lfds711_stack_push_backoff_iteration'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1977]'  
      id301  '__cs_local_lfds711_stack_push_new_top'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[2018, 2066, 2114, 2162, 2210]'  
         deref '[]'  
         occurs '[2002, 2016, 2018, 2064, 2066, 2112, 2114, 2160, 2162, 2208, 2210]'  
      id302  '__cs_local_lfds711_stack_push_original_top'  
         type 'static struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[2018, 2066, 2114, 2162, 2210]'  
         deref '[]'  
         occurs '[2003, 2004, 2014, 2016, 2018, 2062, 2064, 2066, 2110, 2112, 2114, 2158, 2160, 2162, 2206, 2208, 2210]'  
      id303  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1982, 1983]'  
      id304  '__cs_local_lfds711_stack_push_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1987, 1998]'  
         occurs '[1986, 1987, 1997, 1998]'  
      id305  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1993, 1994]'  
      id306  '__cs_local_lfds711_stack_push_i'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2007, 2047, 2050, 2095, 2098, 2143, 2146, 2191, 2194, 2239, 2242]'  
      id307  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2022, 2023, 2070, 2071, 2118, 2119, 2166, 2167, 2214, 2215]'  
      id308  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2050, 2051, 2098, 2099, 2146, 2147, 2194, 2195, 2242, 2243]'  

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
       var 'ss'   type 'void *'   kind 'g'   arity '0'   size '[]'   
   __CSEQ_atomic_swap_stack_top
       var '__cs_param___CSEQ_atomic_swap_stack_top_top'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param___CSEQ_atomic_swap_stack_top_oldtop'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param___CSEQ_atomic_swap_stack_top_newtop'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
   __CSEQ_atomic_compare_and_exchange
       var '__cs_param___CSEQ_atomic_compare_and_exchange_mptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param___CSEQ_atomic_compare_and_exchange_eptr'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __CSEQ_atomic_exchange
       var '__cs_param___CSEQ_atomic_exchange_previous'   type 'int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   push_0
       var '__cs_param_push___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param_insert_s'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_insert_td'   type 'static struct test_data *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_push_ss'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_push_se'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_push_new_top'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var '__cs_local_lfds711_stack_push_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   
   pop_0
       var '__cs_param_pop___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param_delete_s'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_delete_se'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_delete_temp_td'   type 'static struct test_data *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_pop_ss'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_pop_se'   type 'static struct lfds711_stack_element **'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_pop_new_top'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var '__cs_local_lfds711_stack_pop_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   
   main
       var '__cs_retval__init_1'   type 'static void *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state'   type 'static void *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_misc_internal_backoff_init_bs'   type 'static struct lfds711_misc_backoff_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_misc_internal_backoff_init_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param___atomic_exchange_n_previous'   type 'static int long long unsigned *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_is_empty_s'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_is_empty_se'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_pop_ss'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_pop_se'   type 'static struct lfds711_stack_element **'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_pop_new_top'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var '__cs_local_lfds711_stack_pop_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_push_ss'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_push_se'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_push_new_top'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var '__cs_local_lfds711_stack_push_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   

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
function 'push_0' ----------------------------------:
void *push_0(void *__cs_param_push___cs_unused)
{
    static int long long unsigned __cs_local_push_loop;
    __cs_init_scalar(&__cs_local_push_loop, sizeof(int long long unsigned));
    ;
    static _Bool __cs_local_push___cs_tmp_if_cond_24;
    __cs_local_push___cs_tmp_if_cond_24 = ATOMIC_OPERATION;
    if (__cs_local_push___cs_tmp_if_cond_24)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    {
        static struct lfds711_stack_state *__cs_param_insert_s;
        __cs_param_insert_s = ss;
        static int long long unsigned __cs_param_insert_id;
        __cs_param_insert_id = __cs_local_push_loop;
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
            if (!(__cs_local_lfds711_stack_push_result == 0))
            {
                goto __exit_loop_1;
            }

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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_2:
                        ;

                        __exit__exponential_backoff_1_0:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    goto __exit_loop_1;
                }

            }
            if (!(__cs_local_lfds711_stack_push_result == 0))
            {
                goto __exit_loop_1;
            }

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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_3:
                        ;

                        __exit__exponential_backoff_1_1:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    goto __exit_loop_1;
                }

            }
            if (!(__cs_local_lfds711_stack_push_result == 0))
            {
                goto __exit_loop_1;
            }

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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_4:
                        ;

                        __exit__exponential_backoff_1_2:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    goto __exit_loop_1;
                }

            }
            if (!(__cs_local_lfds711_stack_push_result == 0))
            {
                goto __exit_loop_1;
            }

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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_5:
                        ;

                        __exit__exponential_backoff_1_3:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    goto __exit_loop_1;
                }

            }
            if (!(__cs_local_lfds711_stack_push_result == 0))
            {
                goto __exit_loop_1;
            }

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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_6:
                        ;

                        __exit__exponential_backoff_1_4:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    goto __exit_loop_1;
                }

            }
            __CSEQ_assume(!(__cs_local_lfds711_stack_push_result == 0));
            __exit_loop_1:
            ;

            goto __exit__lfds711_stack_push_1;
            __exit__lfds711_stack_push_1:
            ;

        }
        __exit__insert_1:
        ;

    }
    ;
    static _Bool __cs_local_push___cs_tmp_if_cond_25;
    __cs_local_push___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
    if (__cs_local_push___cs_tmp_if_cond_25)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
    __exit_push:
    ;

    __cs_exit(0);
}


void *__cs_param_push___cs_unused
void *
function 'pop_0' ----------------------------------:
void *pop_0(void *__cs_param_pop___cs_unused)
{
    static int __cs_local_pop_res;
    __cs_local_pop_res = __CSEQ_nondet_int();
    static int __cs_local_pop_count;
    __cs_local_pop_count = 0;
    static int __cs_local_pop_loop;
    __cs_local_pop_loop = __CSEQ_nondet_int();
    ;
    static _Bool __cs_local_pop___cs_tmp_if_cond_26;
    __cs_local_pop___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
    if (__cs_local_pop___cs_tmp_if_cond_26)
    {
        __cs_mutex_lock(&lock);
    }

    ;
    static int __cs_retval__delete_1;
    {
        static struct lfds711_stack_state *__cs_param_delete_s;
        __cs_param_delete_s = ss;
        static struct lfds711_stack_element *__cs_local_delete_se;
        static struct test_data *__cs_local_delete_temp_td;
        static int __cs_local_delete_res;
        static int __cs_retval__lfds711_stack_pop_1;
        {
            static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
            __cs_param_lfds711_stack_pop_ss = &mystack;
            static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
            __cs_param_lfds711_stack_pop_se = &__cs_local_delete_se;
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
            __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;
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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_8:
                        ;

                        __exit__exponential_backoff_2_0:
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
                    goto __exit_loop_7;
                }

            }
            __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
            __CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
            __exit_loop_7:
            ;

            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_9;
            }

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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_10:
                        ;

                        __exit__exponential_backoff_3_0:
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
                    goto __exit_loop_9;
                }

            }
            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_9;
            }

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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_11:
                        ;

                        __exit__exponential_backoff_3_1:
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
                    goto __exit_loop_9;
                }

            }
            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_9;
            }

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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_12:
                        ;

                        __exit__exponential_backoff_3_2:
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
                    goto __exit_loop_9;
                }

            }
            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_9;
            }

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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_13:
                        ;

                        __exit__exponential_backoff_3_3:
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
                    goto __exit_loop_9;
                }

            }
            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_9;
            }

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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_14:
                        ;

                        __exit__exponential_backoff_3_4:
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
                    goto __exit_loop_9;
                }

            }
            __CSEQ_assume(!(__cs_local_lfds711_stack_pop_result == 0));
            __exit_loop_9:
            ;

            *__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
            __cs_retval__lfds711_stack_pop_1 = __cs_local_lfds711_stack_pop_result;
            goto __exit__lfds711_stack_pop_1;
            __exit__lfds711_stack_pop_1:
            ;

        }
        __cs_local_delete_res = __cs_retval__lfds711_stack_pop_1;
        ;
        static _Bool __cs_local_delete___cs_tmp_if_cond_19;
        __cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res == 0;
        if (__cs_local_delete___cs_tmp_if_cond_19)
        {
            __cs_retval__delete_1 = __cs_local_delete_res;
            goto __exit__delete_1;
        }

        __cs_local_delete_temp_td = (*__cs_local_delete_se).value;
        static int __cs_local_delete_id_popped;
        __cs_local_delete_id_popped = (*__cs_local_delete_temp_td).user_id;
        printf("%llu\n", (*__cs_local_delete_temp_td).user_id);
        __cs_retval__delete_1 = __cs_local_delete_res;
        goto __exit__delete_1;
        __exit__delete_1:
        ;

    }
    __cs_retval__delete_1;
    ;
    static _Bool __cs_local_pop___cs_tmp_if_cond_27;
    __cs_local_pop___cs_tmp_if_cond_27 = ATOMIC_OPERATION;
    if (__cs_local_pop___cs_tmp_if_cond_27)
    {
        __cs_mutex_unlock(&lock);
    }

    ;
    __exit_pop:
    ;

    __cs_exit(0);
}


void *__cs_param_pop___cs_unused
void *
function 'main' ----------------------------------:
int main()
{
    __cs_mutex_init(&lock, 0);
    static void *__cs_retval__init_1;
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
        __cs_retval__init_1 = (void *) (&mystack);
        goto __exit__init_1;
        __exit__init_1:
        ;

    }
    ss = __cs_retval__init_1;
    static __cs_t __cs_local_main_t1;
    ;
    static __cs_t __cs_local_main_t2;
    ;
    static __cs_t __cs_local_main_t3;
    ;
    static __cs_t __cs_local_main_t4;
    ;
    static __cs_t __cs_local_main_t5;
    ;
    static __cs_t __cs_local_main_t6;
    ;
    static __cs_t __cs_local_main_t7;
    ;
    static __cs_t __cs_local_main_t8;
    ;
    static __cs_t __cs_local_main_t9;
    ;
    static __cs_t __cs_local_main_t10;
    ;
    __cs_create(&__cs_local_main_t1, 0, push_0, 0);
    __cs_create(&__cs_local_main_t6, 0, pop_0, 0);
    __cs_join(__cs_local_main_t1, 0);
    __cs_join(__cs_local_main_t6, 0);
    static int __cs_retval__is_empty_1;
    {
        static struct lfds711_stack_state *__cs_param_is_empty_s;
        __cs_param_is_empty_s = ss;
        static struct lfds711_stack_element *__cs_local_is_empty_se;
        static int __cs_local_is_empty_res;
        static int __cs_retval__lfds711_stack_pop_2;
        {
            static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
            __cs_param_lfds711_stack_pop_ss = __cs_param_is_empty_s;
            static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
            __cs_param_lfds711_stack_pop_se = &__cs_local_is_empty_se;
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
            __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;
            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_2 = 0;
                    goto __exit__lfds711_stack_pop_2;
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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_16:
                        ;

                        __exit__exponential_backoff_4_0:
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
                    goto __exit_loop_15;
                }

            }
            __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
            __CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
            __exit_loop_15:
            ;

            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_17;
            }

            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_2 = 0;
                    goto __exit__lfds711_stack_pop_2;
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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_18:
                        ;

                        __exit__exponential_backoff_5_0:
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
                    goto __exit_loop_17;
                }

            }
            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_17;
            }

            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_2 = 0;
                    goto __exit__lfds711_stack_pop_2;
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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_19:
                        ;

                        __exit__exponential_backoff_5_1:
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
                    goto __exit_loop_17;
                }

            }
            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_17;
            }

            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_2 = 0;
                    goto __exit__lfds711_stack_pop_2;
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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_20:
                        ;

                        __exit__exponential_backoff_5_2:
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
                    goto __exit_loop_17;
                }

            }
            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_17;
            }

            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_2 = 0;
                    goto __exit__lfds711_stack_pop_2;
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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_21:
                        ;

                        __exit__exponential_backoff_5_3:
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
                    goto __exit_loop_17;
                }

            }
            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_17;
            }

            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_2 = 0;
                    goto __exit__lfds711_stack_pop_2;
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
                        __cs_local_exponential_backoff_loop = 0;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop++;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_22:
                        ;

                        __exit__exponential_backoff_5_4:
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
                    goto __exit_loop_17;
                }

            }
            __CSEQ_assume(!(__cs_local_lfds711_stack_pop_result == 0));
            __exit_loop_17:
            ;

            *__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
            __cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
            goto __exit__lfds711_stack_pop_2;
            __exit__lfds711_stack_pop_2:
            ;

        }
        __cs_local_is_empty_res = __cs_retval__lfds711_stack_pop_2;
        ;
        static _Bool __cs_local_is_empty___cs_tmp_if_cond_23;
        __cs_local_is_empty___cs_tmp_if_cond_23 = __cs_local_is_empty_res != 0;
        if (__cs_local_is_empty___cs_tmp_if_cond_23)
        {
            {
                static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                __cs_param_lfds711_stack_push_ss = __cs_param_is_empty_s;
                static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                __cs_param_lfds711_stack_push_se = __cs_local_is_empty_se;
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
                if (!(__cs_local_lfds711_stack_push_result == 0))
                {
                    goto __exit_loop_23;
                }

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
                            __cs_local_exponential_backoff_loop = 0;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                            __exit_loop_24:
                            ;

                            __exit__exponential_backoff_6_0:
                            ;

                        }
                    }

                    __cs_local_lfds711_stack_push_i++;
                    ;
                    static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                    __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                    if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                    {
                        goto __exit_loop_23;
                    }

                }
                if (!(__cs_local_lfds711_stack_push_result == 0))
                {
                    goto __exit_loop_23;
                }

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
                            __cs_local_exponential_backoff_loop = 0;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                            __exit_loop_25:
                            ;

                            __exit__exponential_backoff_6_1:
                            ;

                        }
                    }

                    __cs_local_lfds711_stack_push_i++;
                    ;
                    static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                    __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                    if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                    {
                        goto __exit_loop_23;
                    }

                }
                if (!(__cs_local_lfds711_stack_push_result == 0))
                {
                    goto __exit_loop_23;
                }

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
                            __cs_local_exponential_backoff_loop = 0;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                            __exit_loop_26:
                            ;

                            __exit__exponential_backoff_6_2:
                            ;

                        }
                    }

                    __cs_local_lfds711_stack_push_i++;
                    ;
                    static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                    __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                    if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                    {
                        goto __exit_loop_23;
                    }

                }
                if (!(__cs_local_lfds711_stack_push_result == 0))
                {
                    goto __exit_loop_23;
                }

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
                            __cs_local_exponential_backoff_loop = 0;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                            __exit_loop_27:
                            ;

                            __exit__exponential_backoff_6_3:
                            ;

                        }
                    }

                    __cs_local_lfds711_stack_push_i++;
                    ;
                    static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                    __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                    if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                    {
                        goto __exit_loop_23;
                    }

                }
                if (!(__cs_local_lfds711_stack_push_result == 0))
                {
                    goto __exit_loop_23;
                }

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
                            __cs_local_exponential_backoff_loop = 0;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            {
                                ;
                            }
                            __cs_local_exponential_backoff_loop++;
                            __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                            __exit_loop_28:
                            ;

                            __exit__exponential_backoff_6_4:
                            ;

                        }
                    }

                    __cs_local_lfds711_stack_push_i++;
                    ;
                    static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                    __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                    if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                    {
                        goto __exit_loop_23;
                    }

                }
                __CSEQ_assume(!(__cs_local_lfds711_stack_push_result == 0));
                __exit_loop_23:
                ;

                goto __exit__lfds711_stack_push_2;
                __exit__lfds711_stack_push_2:
                ;

            }
            __cs_retval__is_empty_1 = 0;
            goto __exit__is_empty_1;
        }

        __cs_retval__is_empty_1 = 1;
        goto __exit__is_empty_1;
        __exit__is_empty_1:
        ;

    }
    __CSEQ_assert(__cs_retval__is_empty_1);
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

function: push_0   stmt:     __cs_exit(0);

function: pop_0   stmt:     __cs_exit(0);

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
   (438, 'push_0')  
   (439, '__cs_param_push___cs_unused')  
   (440, '__cs_local_push_loop')  
   (441, '__cs_local_push___cs_tmp_if_cond_24')  
   (442, '__cs_param_insert_s')  
   (443, '__cs_param_insert_id')  
   (444, '__cs_local_insert_td')  
   (445, '__cs_param_lfds711_stack_push_ss')  
   (446, '__cs_param_lfds711_stack_push_se')  
   (447, '__cs_local_lfds711_stack_push_result')  
   (448, '__cs_local_lfds711_stack_push_backoff_iteration')  
   (449, '__cs_local_lfds711_stack_push_new_top')  
   (450, '__cs_local_lfds711_stack_push_original_top')  
   (451, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14')  
   (452, '__cs_local_lfds711_stack_push_c')  
   (453, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15')  
   (454, '__cs_local_lfds711_stack_push_c')  
   (455, '__cs_local_lfds711_stack_push_i')  
   (456, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (457, '__cs_local_exponential_backoff_loop')  
   (458, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (459, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (460, '__cs_local_exponential_backoff_loop')  
   (461, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (462, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (463, '__cs_local_exponential_backoff_loop')  
   (464, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (465, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (466, '__cs_local_exponential_backoff_loop')  
   (467, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (468, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (469, '__cs_local_exponential_backoff_loop')  
   (470, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (471, '__cs_local_push___cs_tmp_if_cond_25')  
   (472, 'pop_0')  
   (473, '__cs_param_pop___cs_unused')  
   (474, '__cs_local_pop_res')  
   (475, '__cs_local_pop_count')  
   (476, '__cs_local_pop_loop')  
   (477, '__cs_local_pop___cs_tmp_if_cond_26')  
   (478, '__cs_retval__delete_1')  
   (479, '__cs_param_delete_s')  
   (480, '__cs_local_delete_se')  
   (481, '__cs_local_delete_temp_td')  
   (482, '__cs_local_delete_res')  
   (483, '__cs_retval__lfds711_stack_pop_1')  
   (484, '__cs_param_lfds711_stack_pop_ss')  
   (485, '__cs_param_lfds711_stack_pop_se')  
   (486, '__cs_local_lfds711_stack_pop_result')  
   (487, '__cs_local_lfds711_stack_pop_backoff_iteration')  
   (488, '__cs_local_lfds711_stack_pop_new_top')  
   (489, '__cs_local_lfds711_stack_pop_original_top')  
   (490, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6')  
   (491, '__cs_local_lfds711_stack_pop_c')  
   (492, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7')  
   (493, '__cs_local_lfds711_stack_pop_c')  
   (494, '__cs_local_lfds711_stack_pop_i')  
   (495, '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1')  
   (496, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8')  
   (497, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9')  
   (498, '__cs_local_exponential_backoff_loop')  
   (499, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10')  
   (500, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (501, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (502, '__cs_local_exponential_backoff_loop')  
   (503, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (504, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (505, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (506, '__cs_local_exponential_backoff_loop')  
   (507, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (508, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (509, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (510, '__cs_local_exponential_backoff_loop')  
   (511, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (512, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (513, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (514, '__cs_local_exponential_backoff_loop')  
   (515, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (516, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (517, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (518, '__cs_local_exponential_backoff_loop')  
   (519, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (520, '__cs_local_delete___cs_tmp_if_cond_19')  
   (521, '__cs_local_delete_id_popped')  
   (522, '__cs_local_pop___cs_tmp_if_cond_27')  
   (523, 'main')  
   (524, '__cs_retval__init_1')  
   (525, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss')  
   (526, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state')  
   (527, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3')  
   (528, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (529, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4')  
   (530, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (531, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5')  
   (532, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (533, '__cs_param_lfds711_misc_internal_backoff_init_bs')  
   (534, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1')  
   (535, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (536, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2')  
   (537, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (538, '__cs_param_lfds711_misc_internal_backoff_init_bs')  
   (539, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1')  
   (540, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (541, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2')  
   (542, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (543, '__cs_local_lfds711_misc_force_store_destination')  
   (544, '__cs_retval____atomic_exchange_n_1')  
   (545, '__cs_param___atomic_exchange_n_previous')  
   (546, '__cs_param___atomic_exchange_n_new')  
   (547, '__cs_param___atomic_exchange_n_memorder')  
   (548, '__cs_local___atomic_exchange_n_res')  
   (549, '__cs_local_main_t1')  
   (550, '__cs_local_main_t2')  
   (551, '__cs_local_main_t3')  
   (552, '__cs_local_main_t4')  
   (553, '__cs_local_main_t5')  
   (554, '__cs_local_main_t6')  
   (555, '__cs_local_main_t7')  
   (556, '__cs_local_main_t8')  
   (557, '__cs_local_main_t9')  
   (558, '__cs_local_main_t10')  
   (559, '__cs_retval__is_empty_1')  
   (560, '__cs_param_is_empty_s')  
   (561, '__cs_local_is_empty_se')  
   (562, '__cs_local_is_empty_res')  
   (563, '__cs_retval__lfds711_stack_pop_2')  
   (564, '__cs_param_lfds711_stack_pop_ss')  
   (565, '__cs_param_lfds711_stack_pop_se')  
   (566, '__cs_local_lfds711_stack_pop_result')  
   (567, '__cs_local_lfds711_stack_pop_backoff_iteration')  
   (568, '__cs_local_lfds711_stack_pop_new_top')  
   (569, '__cs_local_lfds711_stack_pop_original_top')  
   (570, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6')  
   (571, '__cs_local_lfds711_stack_pop_c')  
   (572, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7')  
   (573, '__cs_local_lfds711_stack_pop_c')  
   (574, '__cs_local_lfds711_stack_pop_i')  
   (575, '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1')  
   (576, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8')  
   (577, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9')  
   (578, '__cs_local_exponential_backoff_loop')  
   (579, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10')  
   (580, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (581, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (582, '__cs_local_exponential_backoff_loop')  
   (583, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (584, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (585, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (586, '__cs_local_exponential_backoff_loop')  
   (587, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (588, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (589, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (590, '__cs_local_exponential_backoff_loop')  
   (591, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (592, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (593, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (594, '__cs_local_exponential_backoff_loop')  
   (595, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (596, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (597, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (598, '__cs_local_exponential_backoff_loop')  
   (599, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (600, '__cs_local_is_empty___cs_tmp_if_cond_23')  
   (601, '__cs_param_lfds711_stack_push_ss')  
   (602, '__cs_param_lfds711_stack_push_se')  
   (603, '__cs_local_lfds711_stack_push_result')  
   (604, '__cs_local_lfds711_stack_push_backoff_iteration')  
   (605, '__cs_local_lfds711_stack_push_new_top')  
   (606, '__cs_local_lfds711_stack_push_original_top')  
   (607, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_14')  
   (608, '__cs_local_lfds711_stack_push_c')  
   (609, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15')  
   (610, '__cs_local_lfds711_stack_push_c')  
   (611, '__cs_local_lfds711_stack_push_i')  
   (612, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (613, '__cs_local_exponential_backoff_loop')  
   (614, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (615, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (616, '__cs_local_exponential_backoff_loop')  
   (617, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (618, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (619, '__cs_local_exponential_backoff_loop')  
   (620, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (621, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (622, '__cs_local_exponential_backoff_loop')  
   (623, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (624, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (625, '__cs_local_exponential_backoff_loop')  
   (626, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
