list of functions:
   lfds711_misc_force_store(param: )  call count 1
   __atomic_compare_exchange_n(param: mptr, eptr, newval, weak_p, sm, fm)  call count 0
   __VERIFIER_atomic_compare_and_exchange(param: mptr, eptr, newval, weak_p, sm, fm)  call count 0
   __atomic_exchange_n(param: previous, new, memorder)  call count 0
   __VERIFIER_atomic_exchange(param: previous, new, memorder)  call count 0
   __atomic_thread_fence(param: i)  call count 1
   __VERIFIER_atomic_swap_stack_top(param: top, oldtop, newtop)  call count 2
   exponential_backoff(param: )  call count 2
   lfds711_misc_internal_backoff_init(param: bs)  call count 2
   lfds711_stack_init_valid_on_current_logical_core(param: ss, user_state)  call count 1
   lfds711_stack_pop(param: ss, se)  call count 3
   lfds711_stack_push(param: ss, se)  call count 1
   lfds711_stack_cleanup(param: ss, ss, se, element_cleanup_callback)  call count 0
   LIST_InsertHeadNode(param: IO_head, I__se, I__user_id)  call count 1
   PrintListPayloads(param: head)  call count 1
   GetListSize(param: head)  call count 1
   LIST_GetTailNode(param: I__listHead, _O_listTail)  call count 1
   LIST_InsertTailNode(param: IO_head, I__se, I__user_id)  call count 0
   LIST_FetchParentNodeById(param: I__head, I__user_id, _O_parent)  call count 1
   LIST_InsertNodeById(param: IO_head, I__user_id, I__se)  call count 0
   LIST_FetchNodeById(param: I__head, I__user_id, _O_node, _O_parent)  call count 1
   LIST_DeleteNodeById(param: IO_head, I__user_id)  call count 0
   LIST_Destroy(param: IO_head)  call count 0
   push(param: )  call count 0
   pop(param: )  call count 0
   writeIntofile(param: filename, listHead)  call count 2
   createList(param: listHead)  call count 1
   readFile(param: filename, listHead)  call count 1
   main(param: )  call count 0

list of thread functions:
   push  call count 1
   pop  call count 1

parameters for main():
   (no params)

Variables:
   (global)
      id2  'ps'  
         type 'struct lfds711_prng_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id3  'seed'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id4  'psts'  
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
         type 'extern struct lfds711_misc_globals'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id14  'query_type'  
         type 'enum lfds711_stack_query'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id15  'query_input'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id16  'query_output'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id29  'baus'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id30  'key_compare_function'  
         type 'int (*)(const void, const void)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id31  'existing_key'  
         type 'const void'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id32  'user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id33  'element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id34  'baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id35  'existing_baue'  
         type 'struct lfds711_btree_au_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id36  'key'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id37  'absolute_position'  
         type 'enum lfds711_btree_au_absolute_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id38  'relative_position'  
         type 'enum lfds711_btree_au_relative_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id48  'fs'  
         type 'struct lfds711_freelist_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id49  'elimination_array'  
         type 'struct lfds711_freelist_element * volatile (*)'  kind 'p'  arity '1'  
         size '['128 / (sizeof(struct lfds711_freelist_element *))']'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id50  'elimination_array_size_in_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id51  'fe'  
         type 'struct lfds711_freelist_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id70  'has'  
         type 'struct lfds711_hash_a_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id71  'baus_array'  
         type 'struct lfds711_btree_au_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id72  'array_size'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id73  'key_hash_function'  
         type 'void (*)(const void, lfds711_pal_uint_t)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id74  'element_cleanup_function'  
         type 'void (*)(struct lfds711_hash_a_state, struct lfds711_hash_a_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  ptr-to-f 'True'
      id75  'hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id76  'existing_hae'  
         type 'struct lfds711_hash_a_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id77  'hai'  
         type 'struct lfds711_hash_a_iterate *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id88  'lasos'  
         type 'struct lfds711_list_aso_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id89  'lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id90  'existing_lasoe'  
         type 'struct lfds711_list_aso_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id101  'lasus'  
         type 'struct lfds711_list_asu_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id102  'lasue'  
         type 'struct lfds711_list_asu_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id103  'lasue_predecessor'  
         type 'struct lfds711_list_asu_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id104  'position'  
         type 'enum lfds711_list_asu_position'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id116  'qbmms'  
         type 'struct lfds711_queue_bmm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id117  'element_array'  
         type 'struct lfds711_queue_bss_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id118  'number_elements'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id119  'value'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id128  'qbsss'  
         type 'struct lfds711_queue_bss_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id138  'qumms'  
         type 'struct lfds711_queue_umm_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id139  'qumme_dummy'  
         type 'struct lfds711_queue_umm_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id140  'qumme'  
         type 'struct lfds711_queue_umm_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id154  'rs'  
         type 'struct lfds711_ringbuffer_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id155  're_array_inc_dummy'  
         type 'struct lfds711_ringbuffer_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id156  'number_elements_inc_dummy'  
         type 'lfds711_pal_uint_t'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id157  'overwrite_occurred_flag'  
         type 'enum lfds711_misc_flag *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id158  'overwritten_key'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id159  'overwritten_value'  
         type 'void **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id167  'ss'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[1620, 1638, 1673, 1678, 1756]'  
         deref '[]'  
         occurs '[1620, 1638, 1673, 1678, 1756]'  
      id168  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id169  'bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id170  'lock'  
         type 'pthread_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[1092, 1100, 1112, 1136, 1137, 1156, 1158, 1164, 1165, 1204, 1206, 1212, 1214]'  
         deref '[]'  
         occurs '[1092, 1100, 1112, 1136, 1137, 1156, 1158, 1164, 1165, 1204, 1206, 1212, 1214]'  
   lfds711_misc_force_store
      id17  'destination'  
         type 'volatile lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[292]'  
         deref '[]'  
         occurs '[292]'  
   __atomic_compare_exchange_n
      id171  'mptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1017]'  
      id172  'eptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1017]'  
      id173  'newval'  
         type 'volatile int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1017]'  
      id174  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1017]'  
      id175  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1017]'  
      id176  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1017]'  
      id177  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1019]'  
   __VERIFIER_atomic_compare_and_exchange
      id178  'mptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1024, 1026]'  
         occurs '[1024, 1026]'  
      id179  'eptr'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1024, 1031]'  
         occurs '[1024, 1031]'  
      id180  'newval'  
         type 'volatile int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1026, 1031]'  
      id181  'weak_p'  
         type '_Bool'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id182  'sm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id183  'fm'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   __atomic_exchange_n
      id184  'previous'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1038]'  
      id185  'new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1038]'  
      id186  'memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1038]'  
      id187  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1040]'  
   __VERIFIER_atomic_exchange
      id188  'previous'  
         type 'volatile int long long unsigned *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1045, 1046]'  
         occurs '[1045, 1046]'  
      id189  'new'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1046]'  
      id190  'memorder'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id191  'old'  
         type 'unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1047]'  
   __atomic_thread_fence
      id192  'i'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
   __VERIFIER_atomic_swap_stack_top
      id193  'top'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1056, 1058, 1063]'  
         occurs '[1056, 1058, 1063]'  
      id194  'oldtop'  
         type 'struct lfds711_stack_element * volatile *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1056, 1063]'  
         occurs '[1056, 1063]'  
      id195  'newtop'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1058]'  
         occurs '[1058]'  
   exponential_backoff
      id196  'loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1074, 1074, 1074]'  
   lfds711_misc_internal_backoff_init
      id197  'bs'  
         type 'struct lfds711_misc_backoff_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1078, 1079, 1081, 1082, 1083, 1084, 1085]'  
      id198  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1078, 1079]'  
         occurs '[1078, 1079]'  
   lfds711_stack_init_valid_on_current_logical_core
      id199  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1095, 1096, 1097, 1101, 1102, 1104, 1106, 1107]'  
      id200  'user_state'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1104]'  
      id201  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1095, 1096, 1097]'  
         occurs '[1095, 1096, 1097]'  
   lfds711_stack_pop
      id202  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1129, 1139, 1140, 1157]'  
      id203  'se'  
         type 'struct lfds711_stack_element **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1148, 1172]'  
         occurs '[1130, 1148, 1172]'  
      id204  'result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1157, 1160, 1170]'  
      id205  'backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id206  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1157]'  
         deref '[]'  
         occurs '[1152, 1153, 1157]'  
      id207  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1157]'  
         deref '[]'  
         occurs '[1139, 1140, 1146, 1152, 1153, 1157, 1172]'  
      id208  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1129, 1130]'  
         occurs '[1129, 1130]'  
      id209  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1167, 1168]'  
   lfds711_stack_push
      id210  'ss'  
         type 'struct lfds711_stack_state *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1191, 1196, 1197, 1213]'  
      id211  'se'  
         type 'struct lfds711_stack_element *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1192, 1194, 1205]'  
      id212  'result'  
         type 'char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1199, 1201, 1213, 1216]'  
      id213  'backoff_iteration'  
         type 'lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id214  'new_top'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1213]'  
         deref '[]'  
         occurs '[1194, 1209, 1213]'  
      id215  'original_top'  
         type 'struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1213]'  
         deref '[]'  
         occurs '[1196, 1197, 1205, 1209, 1213]'  
      id216  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1191, 1192]'  
         occurs '[1191, 1192]'  
      id217  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1219, 1220]'  
   lfds711_stack_cleanup
      id218  'ss'  
         type 'struct lfds711_stack_state'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1237, 1244, 1251]'  
      id219  'element_cleanup_callback'  
         type 'void (*)(struct lfds711_stack_state, struct lfds711_stack_element)'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1242, 1251]'  ptr-to-f 'True'
      id220  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1244, 1246, 1248, 1249, 1249]'  
      id221  'se_temp'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1248, 1251]'  
      id222  'c'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1237]'  
         occurs '[1237]'  
   LIST_InsertHeadNode
      id227  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1293, 1294]'  
         occurs '[1293, 1294]'  
      id228  'I__se'  
         type 'struct lfds711_stack_element'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1289]'  
      id229  'I__user_id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1290]'  
      id230  'rCode'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1283, 1298]'  
      id231  'newNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1280, 1280]'  
         occurs '[1280, 1280, 1280, 1281, 1289, 1290, 1293, 1294]'  
   PrintListPayloads
      id232  'head'  
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1307]'  
      id233  'rCode'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1319]'  
      id234  'cur'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1309, 1312, 1313, 1313, 1314]'  
   GetListSize
      id235  'head'  
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1328]'  
      id236  'cur'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1330, 1333, 1333]'  
      id237  'nodeCnt'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1332, 1335]'  
   LIST_GetTailNode
      id238  'I__listHead'  
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1345]'  
      id239  '_O_listTail'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1357]'  
         occurs '[1356, 1357]'  
      id240  'rCode'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1359]'  
      id241  'curNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1349, 1351, 1352, 1352, 1357]'  
   LIST_InsertTailNode
      id242  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1372, 1397]'  
         occurs '[1372, 1397]'  
      id243  'I__se'  
         type 'struct lfds711_stack_element'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1390]'  
      id244  'I__user_id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1389]'  
      id245  'rCode'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1372, 1373, 1375, 1383, 1401]'  
      id246  'tailNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1372]'  
         deref '[]'  
         occurs '[1372, 1394, 1395]'  
      id247  'newNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1380, 1380]'  
         occurs '[1380, 1380, 1380, 1381, 1389, 1390, 1393, 1395, 1397]'  
   LIST_FetchParentNodeById
      id248  'I__head'  
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1411, 1414]'  
      id249  'I__user_id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1423]'  
      id250  '_O_parent'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1432]'  
         occurs '[1431, 1432]'  
      id251  'rCode'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1416, 1436]'  
      id252  'parent'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1426, 1432]'  
      id253  'curNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1421, 1423, 1426, 1427, 1427]'  
   LIST_InsertNodeById
      id254  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1463, 1472, 1485, 1486]'  
         occurs '[1463, 1472, 1485, 1486]'  
      id255  'I__user_id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1459, 1463]'  
      id256  'I__se'  
         type 'struct lfds711_stack_element'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1460]'  
      id257  'rCode'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1453, 1463, 1464, 1473, 1477, 1496]'  
      id258  'parent'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1463]'  
         deref '[]'  
         occurs '[1463, 1483, 1491, 1492]'  
      id259  'newNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1450, 1450]'  
         occurs '[1450, 1450, 1450, 1451, 1459, 1460, 1471, 1472, 1485, 1486, 1491, 1492]'  
   LIST_FetchNodeById
      id260  'I__head'  
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1506]'  
      id261  'I__user_id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1511]'  
      id262  '_O_node'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1527]'  
         occurs '[1526, 1527]'  
      id263  '_O_parent'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1531]'  
         occurs '[1530, 1531]'  
      id264  'rCode'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1521, 1535]'  
      id265  'parent'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1514, 1531]'  
      id266  'curNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1509, 1511, 1514, 1515, 1515, 1519, 1527]'  
   LIST_DeleteNodeById
      id267  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1548, 1565]'  
         occurs '[1548, 1565]'  
      id268  'I__user_id'  
         type 'int long long unsigned'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1548]'  
      id269  'rCode'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1548, 1549, 1559, 1574]'  
      id270  'parent'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1548]'  
         deref '[]'  
         occurs '[1548, 1564, 1567]'  
      id271  'delNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1548]'  
         deref '[]'  
         occurs '[1548, 1565, 1567, 1570]'  
   LIST_Destroy
      id272  'IO_head'  
         type 'struct LIST_NODE_S **'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1584, 1586, 1588, 1588]'  
         occurs '[1584, 1586, 1588, 1588]'  
      id273  'rCode'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1592]'  
      id274  'delNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1589]'  
   push
      id277  'td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1619, 1620]'  
         deref '[]'  
         occurs '[1613, 1618, 1619, 1619, 1620]'  
      id278  'loop'  
         type 'int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1615, 1615, 1615, 1618, 1618, 1619, 1619, 1620]'  
   pop
      id279  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1638]'  
         deref '[1643]'  
         occurs '[1638, 1643]'  
      id280  'temp_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1636, 1643]'  
      id281  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1638, 1641]'  
      id282  'count'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1644]'  
      id283  'loop'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1634, 1634, 1634]'  
   writeIntofile
      id284  'filename'  
         type 'char *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1654]'  
      id285  'listHead'  
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1658]'  
      id286  'filefd'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1657, 1659]'  
      id287  'saved'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1661, 1662]'  
   createList
      id288  'listHead'  
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[1677]'  
         deref '[]'  
         occurs '[1677, 1681]'  
      id289  'se'  
         type 'struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1673, 1678]'  
         deref '[1676]'  
         occurs '[1673, 1676, 1678]'  
      id290  'temp_td'  
         type 'struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1676, 1677, 1677]'  
      id291  'res'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1673, 1674, 1678]'  
   readFile
      id292  'filename'  
         type 'char *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1704, 1707, 1743]'  
      id293  'listHead'  
         type 'struct LIST_NODE_S *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1694, 1707, 1743]'  
      id294  'line'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1713]'  
         deref '[]'  
         occurs '[1713, 1716]'  
      id295  'len'  
         type 'size_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1713]'  
         deref '[]'  
         occurs '[1713]'  
      id296  'read'  
         type 'ssize_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1713]'  
      id297  'parent'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1724]'  
      id298  'curNode'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1699, 1719, 1721, 1724, 1725, 1725]'  
      id299  'delim'  
         type 'char'  kind 'l'  arity '1'  
         size '[-1]'  
         ref '[]'  
         deref '[]'  
         occurs '[1716, 1726]'  
      id300  'i'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1723, 1730, 1736, 1741]'  
      id301  'size'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1730, 1741]'  
      id302  'fp'  
         type 'FILE *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1705, 1713, 1732]'  
      id303  'ptr'  
         type 'char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1721, 1726]'  
   main
      id304  'listHead'  
         type 'struct LIST_NODE_S *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1765, 1765, 1766]'  
      id305  't1'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1760]'  
         deref '[]'  
         occurs '[1760, 1762]'  
      id306  't2'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1761]'  
         deref '[]'  
         occurs '[1761, 1763]'  

Fields:
   lfds711_prng_state
      id0  'entropy'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_prng_st_state
      id1  'entropy'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
   lfds711_misc_backoff_state
      id6  'lock'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
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
      id24  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id25  'existing_key'  type 'enum lfds711_btree_au_existing_key'  kind 'f'  arity '0'  size '[]'  
      id26  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
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
      id58  'existing_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id59  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id60  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id61  'array_size'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id62  'baus_array'  type 'struct lfds711_btree_au_state *'  kind 'f'  arity '0'  size '[]'  
      id63  'has'  type 'struct lfds711_hash_a_state *'  kind 'f'  arity '0'  size '[]'  
      id64  'hae'  type 'struct lfds711_hash_a_element *'  kind 'f'  arity '0'  size '[]'  
      id65  'element_cleanup_callback'  type 'void (*)(struct lfds711_hash_a_state *has, struct lfds711_hash_a_element *hae)'  kind 'f'  arity '0'  size '[]'  
      id66  'key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id67  'hash'  type 'lfds711_pal_uint_t *'  kind 'f'  arity '0'  size '[]'  
      id68  'key_hash_function'  type 'void (*)(const void *key, lfds711_pal_uint_t *hash)'  kind 'f'  arity '0'  size '[]'  
      id69  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_element
      id78  'next'  type 'struct lfds711_list_aso_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id79  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id80  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_aso_state
      id81  'dummy_element'  type 'struct lfds711_list_aso_element'  kind 'f'  arity '0'  size '[]'  
      id82  'start'  type 'struct lfds711_list_aso_element *'  kind 'f'  arity '0'  size '[]'  
      id83  'new_key'  type 'const void *'  kind 'f'  arity '0'  size '[]'  
      id84  'existing_key'  type 'enum lfds711_list_aso_existing_key'  kind 'f'  arity '0'  size '[]'  
      id85  'key_compare_function'  type 'int (*)(const void *new_key, const void *existing_key)'  kind 'f'  arity '0'  size '[]'  
      id86  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id87  'insert_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_element
      id91  'next'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id92  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id93  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_list_asu_state
      id94  'dummy_element'  type 'struct lfds711_list_asu_element'  kind 'f'  arity '0'  size '[]'  
      id95  'end'  type 'struct lfds711_list_asu_element * volatile'  kind 'f'  arity '0'  size '[]'  
      id96  'start'  type 'struct lfds711_list_asu_element *'  kind 'f'  arity '0'  size '[]'  
      id97  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id98  'after_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id99  'end_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id100  'start_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_element
      id105  'sequence_number'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id106  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id107  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bmm_state
      id108  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id109  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id110  'read_index'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id111  'write_index'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id112  'element_array'  type 'struct lfds711_queue_bmm_element *'  kind 'f'  arity '0'  size '[]'  
      id113  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id114  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id115  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_element
      id120  'key'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
      id121  'value'  type 'void * volatile'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_bss_state
      id122  'number_elements'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id123  'mask'  type 'lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id124  'read_index'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id125  'write_index'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id126  'element_array'  type 'struct lfds711_queue_bss_element *'  kind 'f'  arity '0'  size '[]'  
      id127  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_element
      id129  'next'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id130  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id131  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_queue_umm_state
      id132  'enqueue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id133  'dequeue'  type 'struct lfds711_queue_umm_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id134  'aba_counter'  type 'volatile lfds711_pal_uint_t'  kind 'f'  arity '0'  size '[]'  
      id135  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id136  'dequeue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id137  'enqueue_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_element
      id141  'fe'  type 'struct lfds711_freelist_element'  kind 'f'  arity '0'  size '[]'  
      id142  'qumme'  type 'struct lfds711_queue_umm_element'  kind 'f'  arity '0'  size '[]'  
      id143  'qumme_use'  type 'struct lfds711_queue_umm_element *'  kind 'f'  arity '0'  size '[]'  
      id144  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id145  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_ringbuffer_state
      id146  'fs'  type 'struct lfds711_freelist_state'  kind 'f'  arity '0'  size '[]'  
      id147  'qumms'  type 'struct lfds711_queue_umm_state'  kind 'f'  arity '0'  size '[]'  
      id148  'rs'  type 'struct lfds711_ringbuffer_state *'  kind 'f'  arity '0'  size '[]'  
      id149  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id150  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id151  'unread_flag'  type 'enum lfds711_misc_flag'  kind 'f'  arity '0'  size '[]'  
      id152  'element_cleanup_callback'  type 'void (*)(struct lfds711_ringbuffer_state *rs, void *key, void *value, enum lfds711_misc_flag unread_flag)'  kind 'f'  arity '0'  size '[]'  
      id153  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_element
      id160  'next'  type 'struct lfds711_stack_element *'  kind 'f'  arity '0'  size '[]'  
      id161  'key'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id162  'value'  type 'void *'  kind 'f'  arity '0'  size '[]'  
   lfds711_stack_state
      id163  'top'  type 'struct lfds711_stack_element * volatile'  kind 'f'  arity '1'  size '[2]'  
      id164  'user_state'  type 'void *'  kind 'f'  arity '0'  size '[]'  
      id165  'pop_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
      id166  'push_backoff'  type 'struct lfds711_misc_backoff_state'  kind 'f'  arity '0'  size '[]'  
   NODE_PAYLOAD_S
      id223  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id224  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  
   LIST_NODE_S
      id225  'next'  type 'struct LIST_NODE_S *'  kind 'f'  arity '0'  size '[]'  
      id226  'payload'  type 'struct NODE_PAYLOAD_S'  kind 'f'  arity '0'  size '[]'  
   test_data
      id275  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id276  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  

Typedefs:
NODE_PAYLOAD_T -> struct NODE_PAYLOAD_S
LIST_NODE_T -> struct LIST_NODE_S

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
       var 'se'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
       var 'bs'   type 'struct lfds711_misc_backoff_state *'   kind 'p'   arity '0'   size '[]'   
   lfds711_misc_force_store
   __atomic_compare_exchange_n
       var 'mptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __VERIFIER_atomic_compare_and_exchange
       var 'mptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
       var 'eptr'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_exchange_n
       var 'previous'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __VERIFIER_atomic_exchange
       var 'previous'   type 'volatile int long long unsigned *'   kind 'p'   arity '0'   size '[]'   
   __atomic_thread_fence
   __VERIFIER_atomic_swap_stack_top
       var 'top'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var 'oldtop'   type 'struct lfds711_stack_element * volatile *'   kind 'p'   arity '0'   size '[]'   
       var 'newtop'   type 'struct lfds711_stack_element **'   kind 'p'   arity '0'   size '[]'   
   exponential_backoff
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
   lfds711_stack_cleanup
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var 'se_temp'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var 'c'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   LIST_InsertHeadNode
       var 'IO_head'   type 'struct LIST_NODE_S **'   kind 'p'   arity '0'   size '[]'   
       var 'newNode'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
   PrintListPayloads
       var 'head'   type 'struct LIST_NODE_S *'   kind 'p'   arity '0'   size '[]'   
       var 'cur'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
   GetListSize
       var 'head'   type 'struct LIST_NODE_S *'   kind 'p'   arity '0'   size '[]'   
       var 'cur'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
   LIST_GetTailNode
       var 'I__listHead'   type 'struct LIST_NODE_S *'   kind 'p'   arity '0'   size '[]'   
       var '_O_listTail'   type 'struct LIST_NODE_S **'   kind 'p'   arity '0'   size '[]'   
       var 'curNode'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
   LIST_InsertTailNode
       var 'IO_head'   type 'struct LIST_NODE_S **'   kind 'p'   arity '0'   size '[]'   
       var 'tailNode'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
       var 'newNode'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
   LIST_FetchParentNodeById
       var 'I__head'   type 'struct LIST_NODE_S *'   kind 'p'   arity '0'   size '[]'   
       var '_O_parent'   type 'struct LIST_NODE_S **'   kind 'p'   arity '0'   size '[]'   
       var 'parent'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
       var 'curNode'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
   LIST_InsertNodeById
       var 'IO_head'   type 'struct LIST_NODE_S **'   kind 'p'   arity '0'   size '[]'   
       var 'parent'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
       var 'newNode'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
   LIST_FetchNodeById
       var 'I__head'   type 'struct LIST_NODE_S *'   kind 'p'   arity '0'   size '[]'   
       var '_O_node'   type 'struct LIST_NODE_S **'   kind 'p'   arity '0'   size '[]'   
       var '_O_parent'   type 'struct LIST_NODE_S **'   kind 'p'   arity '0'   size '[]'   
       var 'parent'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
       var 'curNode'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
   LIST_DeleteNodeById
       var 'IO_head'   type 'struct LIST_NODE_S **'   kind 'p'   arity '0'   size '[]'   
       var 'parent'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
       var 'delNode'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
   LIST_Destroy
       var 'IO_head'   type 'struct LIST_NODE_S **'   kind 'p'   arity '0'   size '[]'   
       var 'delNode'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
   push
       var 'td'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
   pop
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var 'temp_td'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
   writeIntofile
       var 'filename'   type 'char *'   kind 'p'   arity '0'   size '[]'   
       var 'listHead'   type 'struct LIST_NODE_S *'   kind 'p'   arity '0'   size '[]'   
   createList
       var 'listHead'   type 'struct LIST_NODE_S *'   kind 'p'   arity '0'   size '[]'   
       var 'se'   type 'struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var 'temp_td'   type 'struct test_data *'   kind 'l'   arity '0'   size '[]'   
   readFile
       var 'filename'   type 'char *'   kind 'p'   arity '0'   size '[]'   
       var 'listHead'   type 'struct LIST_NODE_S *'   kind 'p'   arity '0'   size '[]'   
       var 'line'   type 'char *'   kind 'l'   arity '0'   size '[]'   
       var 'parent'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
       var 'curNode'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   
       var 'fp'   type 'FILE *'   kind 'l'   arity '0'   size '[]'   
       var 'ptr'   type 'char *'   kind 'l'   arity '0'   size '[]'   
   main
       var 'listHead'   type 'struct LIST_NODE_S *'   kind 'l'   arity '0'   size '[]'   

Function blocks:
function 'lfds711_misc_force_store' ----------------------------------:
inline static void lfds711_misc_force_store()
{
    volatile lfds711_pal_uint_t destination;
    {
        (void) __atomic_exchange_n(&destination, 0, 0);
    }
    ;
    return;
}



inline static void
function '__atomic_compare_exchange_n' ----------------------------------:
static _Bool __atomic_compare_exchange_n(volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm)
{
    int res = __VERIFIER_atomic_compare_and_exchange(mptr, eptr, newval, weak_p, sm, fm);
    return res;
}


volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm
static _Bool
function '__VERIFIER_atomic_compare_and_exchange' ----------------------------------:
static _Bool __VERIFIER_atomic_compare_and_exchange(volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm)
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


volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, _Bool weak_p, int sm, int fm
static _Bool
function '__atomic_exchange_n' ----------------------------------:
unsigned long __atomic_exchange_n(volatile int long long unsigned *previous, int long long unsigned new, int memorder)
{
    int res = __VERIFIER_atomic_exchange(previous, new, memorder);
    return res;
}


volatile int long long unsigned *previous, int long long unsigned new, int memorder
unsigned long
function '__VERIFIER_atomic_exchange' ----------------------------------:
unsigned long __VERIFIER_atomic_exchange(volatile int long long unsigned *previous, int long long unsigned new, int memorder)
{
    unsigned long int old = *previous;
    *previous = new;
    return old;
}


volatile int long long unsigned *previous, int long long unsigned new, int memorder
unsigned long
function '__atomic_thread_fence' ----------------------------------:
void __atomic_thread_fence(int i)
{
}


int i
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
function 'exponential_backoff' ----------------------------------:
void exponential_backoff()
{
    int loop;
    for (loop = 0; loop < 10; loop++)
            ;

}



void
function 'lfds711_misc_internal_backoff_init' ----------------------------------:
void lfds711_misc_internal_backoff_init(struct lfds711_misc_backoff_state *bs)
{
    if (!(bs != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) (&bs->lock)) % 128) == 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    bs->lock = LFDS711_MISC_FLAG_LOWERED;
    bs->backoff_iteration_frequency_counters[0] = 0;
    bs->backoff_iteration_frequency_counters[1] = 0;
    bs->metric = 1;
    bs->total_operations = 0;
    return;
}


struct lfds711_misc_backoff_state *bs
void
function 'lfds711_stack_init_valid_on_current_logical_core' ----------------------------------:
void lfds711_stack_init_valid_on_current_logical_core(struct lfds711_stack_state *ss, void *user_state)
{
    pthread_mutex_init(&lock, 0);
    if (!(ss != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) ss->top) % 128) == 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!((((lfds711_pal_uint_t) (&ss->user_state)) % 128) == 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    pthread_mutex_lock(&lock);
    ss->top[0] = 0;
    ss->top[1] = 0;
    ss->user_state = user_state;
    lfds711_misc_internal_backoff_init(&ss->pop_backoff);
    lfds711_misc_internal_backoff_init(&ss->push_backoff);
    lfds711_misc_force_store();
    pthread_mutex_unlock(&lock);
    return;
}


struct lfds711_stack_state *ss, void *user_state
void
function 'lfds711_stack_pop' ----------------------------------:
int lfds711_stack_pop(struct lfds711_stack_state *ss, struct lfds711_stack_element **se)
{
    char unsigned result;
    lfds711_pal_uint_t backoff_iteration = 0;
    struct lfds711_stack_element *new_top[2];
    struct lfds711_stack_element * volatile original_top[2];
    if (!(ss != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!(se != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    pthread_mutex_lock(&lock);
    pthread_mutex_unlock(&lock);
    original_top[1] = ss->top[1];
    original_top[0] = ss->top[0];
    int i = 0;
    do
    {
        if (original_top[0] == 0)
        {
            *se = 0;
            return 0;
        }

        new_top[1] = original_top[1] + 1;
        new_top[0] = original_top[0]->next;
        pthread_mutex_lock(&lock);
        result = __VERIFIER_atomic_swap_stack_top(&ss->top[0], &original_top[0], &new_top[0]);
        pthread_mutex_unlock(&lock);
        if (result == 0)
        {
            exponential_backoff();
            pthread_mutex_lock(&lock);
            pthread_mutex_unlock(&lock);
        }

        i++;
        if (i > 1000)
                break;

    }
    while (result == 0);
    *se = original_top[0];
    return 1;
}


struct lfds711_stack_state *ss, struct lfds711_stack_element **se
int
function 'lfds711_stack_push' ----------------------------------:
void lfds711_stack_push(struct lfds711_stack_state *ss, struct lfds711_stack_element *se)
{
    char unsigned result;
    lfds711_pal_uint_t backoff_iteration = 0;
    struct lfds711_stack_element *new_top[2];
    struct lfds711_stack_element * volatile original_top[2];
    if (!(ss != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    if (!(se != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    new_top[0] = se;
    original_top[1] = ss->top[1];
    original_top[0] = ss->top[0];
    result = 0;
    int i = 0;
    while (result == 0)
    {
        pthread_mutex_lock(&lock);
        se->next = original_top[0];
        pthread_mutex_unlock(&lock);
        new_top[1] = original_top[1] + 1;
        pthread_mutex_lock(&lock);
        result = __VERIFIER_atomic_swap_stack_top(&ss->top[0], &original_top[0], &new_top[0]);
        pthread_mutex_unlock(&lock);
        if (result == 0)
                exponential_backoff();

        i++;
        if (i > 1000)
                break;

    }

    return;
}


struct lfds711_stack_state *ss, struct lfds711_stack_element *se
void
function 'lfds711_stack_cleanup' ----------------------------------:
void lfds711_stack_cleanup(struct lfds711_stack_state *ss, void (*element_cleanup_callback)(struct lfds711_stack_state, struct lfds711_stack_element))
{
    struct lfds711_stack_element *se;
    struct lfds711_stack_element *se_temp;
    if (!(ss != 0))
    {
        char *c = 0;
        *c = 0;
    }

    ;
    ;
    __atomic_thread_fence(2);
    if (element_cleanup_callback != 0)
    {
        se = ss->top[0];
        while (se != 0)
        {
            se_temp = se;
            se = se->next;
            element_cleanup_callback(ss, se_temp);
        }

    }

    return;
}


struct lfds711_stack_state *ss, void (*element_cleanup_callback)(struct lfds711_stack_state, struct lfds711_stack_element)
void
function 'LIST_InsertHeadNode' ----------------------------------:
int LIST_InsertHeadNode(LIST_NODE_T **IO_head, struct lfds711_stack_element I__se, int long long unsigned I__user_id)
{
    int rCode = 0;
    LIST_NODE_T *newNode = 0;
    newNode = malloc(sizeof(*newNode));
    if (0 == newNode)
    {
        rCode = 12;
        fprintf(stderr, "malloc() failed.\n");
        goto CLEANUP;
    }

    newNode->payload.se = I__se;
    newNode->payload.user_id = I__user_id;
    newNode->next = *IO_head;
    *IO_head = newNode;
    CLEANUP:
    return rCode;

}


LIST_NODE_T **IO_head, struct lfds711_stack_element I__se, int long long unsigned I__user_id
int
function 'PrintListPayloads' ----------------------------------:
int PrintListPayloads(LIST_NODE_T *head)
{
    int rCode = 0;
    LIST_NODE_T *cur = head;
    while (cur)
    {
        printf("%lld", cur->payload.user_id);
        cur = cur->next;
        if (cur != 0)
                printf(",");

    }

    printf("\n");
    return rCode;
}


LIST_NODE_T *head
int
function 'GetListSize' ----------------------------------:
int GetListSize(LIST_NODE_T *head)
{
    LIST_NODE_T *cur = head;
    int nodeCnt = 0;
    while (cur)
    {
        ++nodeCnt;
        cur = cur->next;
    }

    return nodeCnt;
}


LIST_NODE_T *head
int
function 'LIST_GetTailNode' ----------------------------------:
int LIST_GetTailNode(LIST_NODE_T *I__listHead, LIST_NODE_T **_O_listTail)
{
    int rCode = 0;
    LIST_NODE_T *curNode = I__listHead;
    if (curNode)
    {
        while (curNode->next)
                curNode = curNode->next;

    }

    if (_O_listTail)
            *_O_listTail = curNode;

    return rCode;
}


LIST_NODE_T *I__listHead, LIST_NODE_T **_O_listTail
int
function 'LIST_InsertTailNode' ----------------------------------:
int LIST_InsertTailNode(LIST_NODE_T **IO_head, struct lfds711_stack_element I__se, int long long unsigned I__user_id)
{
    int rCode = 0;
    LIST_NODE_T *tailNode;
    LIST_NODE_T *newNode = 0;
    rCode = LIST_GetTailNode(*IO_head, &tailNode);
    if (rCode)
    {
        fprintf(stderr, "LIST_GetTailNode() reports: %d\n", rCode);
        goto CLEANUP;
    }

    newNode = malloc(sizeof(*newNode));
    if (0 == newNode)
    {
        rCode = 12;
        fprintf(stderr, "malloc() failed.\n");
        goto CLEANUP;
    }

    newNode->payload.user_id = I__user_id;
    newNode->payload.se = I__se;
    newNode->next = 0;
    if (tailNode)
            tailNode->next = newNode;
    else
            *IO_head = newNode;

    CLEANUP:
    return rCode;

}


LIST_NODE_T **IO_head, struct lfds711_stack_element I__se, int long long unsigned I__user_id
int
function 'LIST_FetchParentNodeById' ----------------------------------:
int LIST_FetchParentNodeById(LIST_NODE_T *I__head, int long long unsigned I__user_id, LIST_NODE_T **_O_parent)
{
    int rCode = 0;
    LIST_NODE_T *parent = 0;
    LIST_NODE_T *curNode = I__head;
    if (0 == I__head)
    {
        rCode = ENOENT;
        goto CLEANUP;
    }

    while (curNode)
    {
        if (curNode->payload.user_id > I__user_id)
                break;

        parent = curNode;
        curNode = curNode->next;
    }

    if (_O_parent)
            *_O_parent = parent;

    CLEANUP:
    return rCode;

}


LIST_NODE_T *I__head, int long long unsigned I__user_id, LIST_NODE_T **_O_parent
int
function 'LIST_InsertNodeById' ----------------------------------:
int LIST_InsertNodeById(LIST_NODE_T **IO_head, int long long unsigned I__user_id, struct lfds711_stack_element I__se)
{
    int rCode = 0;
    LIST_NODE_T *parent;
    LIST_NODE_T *newNode = 0;
    newNode = malloc(sizeof(*newNode));
    if (0 == newNode)
    {
        rCode = 12;
        fprintf(stderr, "malloc() failed.\n");
        goto CLEANUP;
    }

    newNode->payload.user_id = I__user_id;
    newNode->payload.se = I__se;
    rCode = LIST_FetchParentNodeById(*IO_head, I__user_id, &parent);
    switch (rCode)
    {
        case 0:
                break;

        case ENOENT:
                newNode->next = 0;
                *IO_head = newNode;
                rCode = 0;
                goto CLEANUP;

        default:
                fprintf(stderr, "LIST_FetchParentNodeByName() reports: %d\n", rCode);
                goto CLEANUP;

    }

    if (0 == parent)
    {
        newNode->next = *IO_head;
        *IO_head = newNode;
        goto CLEANUP;
    }

    newNode->next = parent->next;
    parent->next = newNode;
    CLEANUP:
    return rCode;

}


LIST_NODE_T **IO_head, int long long unsigned I__user_id, struct lfds711_stack_element I__se
int
function 'LIST_FetchNodeById' ----------------------------------:
int LIST_FetchNodeById(LIST_NODE_T *I__head, int long long unsigned I__user_id, LIST_NODE_T **_O_node, LIST_NODE_T **_O_parent)
{
    int rCode = 0;
    LIST_NODE_T *parent = 0;
    LIST_NODE_T *curNode = I__head;
    while (curNode)
    {
        if (curNode->payload.user_id == I__user_id)
                break;

        parent = curNode;
        curNode = curNode->next;
    }

    if (0 == curNode)
    {
        rCode = ENOENT;
        goto CLEANUP;
    }

    if (_O_node)
            *_O_node = curNode;

    if (_O_parent)
            *_O_parent = parent;

    CLEANUP:
    return rCode;

}


LIST_NODE_T *I__head, int long long unsigned I__user_id, LIST_NODE_T **_O_node, LIST_NODE_T **_O_parent
int
function 'LIST_DeleteNodeById' ----------------------------------:
int LIST_DeleteNodeById(LIST_NODE_T **IO_head, int long long unsigned I__user_id)
{
    int rCode = 0;
    LIST_NODE_T *parent;
    LIST_NODE_T *delNode = 0;
    rCode = LIST_FetchNodeById(*IO_head, I__user_id, &delNode, &parent);
    switch (rCode)
    {
        case 0:
                break;

        case ENOENT:
                fprintf(stderr, "Matching node not found.\n");
                goto CLEANUP;

        default:
                fprintf(stderr, "LIST_FetchNodeByName() reports: %d\n", rCode);
                goto CLEANUP;

    }

    if (0 == parent)
            *IO_head = delNode->next;
    else
            parent->next = delNode->next;

    free(delNode);
    CLEANUP:
    return rCode;

}


LIST_NODE_T **IO_head, int long long unsigned I__user_id
int
function 'LIST_Destroy' ----------------------------------:
int LIST_Destroy(LIST_NODE_T **IO_head)
{
    int rCode = 0;
    while (*IO_head)
    {
        LIST_NODE_T *delNode = *IO_head;
        *IO_head = (*IO_head)->next;
        free(delNode);
    }

    return rCode;
}


LIST_NODE_T **IO_head
int
function 'push' ----------------------------------:
void *push()
{
    struct test_data *td;
    int long long unsigned loop;
    td = malloc((sizeof(struct test_data)) * 1);
    for (loop = 0; loop < 1; loop++)
    {
        td[loop].user_id = loop;
        td[loop].se.value = (void *) ((lfds711_pal_uint_t) (&td[loop]));
        lfds711_stack_push(&ss, &td[loop].se);
    }

}



void *
function 'pop' ----------------------------------:
void *pop()
{
    struct lfds711_stack_element *se;
    struct test_data *temp_td;
    int res;
    int count = 0;
    int loop;
    for (loop = 0; loop < 1; loop++)
    {
        temp_td = 0;
        res = lfds711_stack_pop(&ss, &se);
        if (res == 0)
                continue;

        temp_td = (*se).value;
        count++;
    }

}



void *
function 'writeIntofile' ----------------------------------:
void writeIntofile(char *filename, LIST_NODE_T *listHead)
{
    int filefd = open(filename, (O_WRONLY | O_CREAT) | O_APPEND, 0666);
    int saved = dup(1);
    close(1);
    dup(filefd);
    PrintListPayloads(listHead);
    close(filefd);
    fflush(stdout);
    dup2(saved, 1);
    close(saved);
}


char *filename, LIST_NODE_T *listHead
void
function 'createList' ----------------------------------:
LIST_NODE_T *createList(LIST_NODE_T *listHead)
{
    struct lfds711_stack_element *se;
    struct test_data *temp_td;
    int res;
    res = lfds711_stack_pop(&ss, &se);
    while (res != 0)
    {
        temp_td = (*se).value;
        LIST_InsertHeadNode(&listHead, temp_td->se, temp_td->user_id);
        res = lfds711_stack_pop(&ss, &se);
    }

    return listHead;
}


LIST_NODE_T *listHead
LIST_NODE_T *
function 'readFile' ----------------------------------:
void readFile(char *filename, LIST_NODE_T *listHead)
{
    char *line = 0;
    size_t len = 0;
    ssize_t read;
    LIST_NODE_T *parent = 0;
    LIST_NODE_T *curNode = listHead;
    char delim[] = ",";
    int i = 0;
    int size = GetListSize(curNode);
    FILE *fp = fopen(filename, "r");
    if (!fp)
    {
        writeIntofile(filename, listHead);
        assert(0);
        return;
    }

    while ((read = getline(&line, &len, fp)) != (-1))
    {
        char *ptr = strtok(line, delim);
        while (curNode)
        {
            if (curNode->payload.user_id != atoi(ptr))
                    break;

            i++;
            parent = curNode;
            curNode = curNode->next;
            ptr = strtok(0, delim);
        }

        if (i == size)
        {
            fclose(fp);
            return;
        }

        i = 0;
    }

    if (i != size)
    {
        writeIntofile(filename, listHead);
        assert(0);
        return;
    }

}


char *filename, LIST_NODE_T *listHead
void
function 'main' ----------------------------------:
int main()
{
    LIST_NODE_T *listHead = 0;
    lfds711_stack_init_valid_on_current_logical_core(&ss, 0);
    pthread_t t1;
    pthread_t t2;
    pthread_create(&t1, 0, push, 0);
    pthread_create(&t2, 0, pop, 0);
    pthread_join(t1, 0);
    pthread_join(t2, 0);
    listHead = createList(listHead);
    readFile("foo.txt", listHead);
    return 0;
}



int
Last statement, by function:
function: lfds711_misc_force_store   stmt:     return;

function: __atomic_compare_exchange_n   stmt:     return res;

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


function: __atomic_exchange_n   stmt:     return res;

function: __VERIFIER_atomic_exchange   stmt:     return old;

function: __atomic_thread_fence   stmt:     return old;

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


function: exponential_backoff   stmt:     for (loop = 0; loop < 10; loop++)
            ;


function: lfds711_misc_internal_backoff_init   stmt:     return;

function: lfds711_stack_init_valid_on_current_logical_core   stmt:     return;

function: lfds711_stack_pop   stmt:     return 1;

function: lfds711_stack_push   stmt:     return;

function: lfds711_stack_cleanup   stmt:     return;

function: LIST_InsertHeadNode   stmt:     CLEANUP:
    return rCode;


function: PrintListPayloads   stmt:     return rCode;

function: GetListSize   stmt:     return nodeCnt;

function: LIST_GetTailNode   stmt:     return rCode;

function: LIST_InsertTailNode   stmt:     CLEANUP:
    return rCode;


function: LIST_FetchParentNodeById   stmt:     CLEANUP:
    return rCode;


function: LIST_InsertNodeById   stmt:     CLEANUP:
    return rCode;


function: LIST_FetchNodeById   stmt:     CLEANUP:
    return rCode;


function: LIST_DeleteNodeById   stmt:     CLEANUP:
    return rCode;


function: LIST_Destroy   stmt:     return rCode;

function: push   stmt:     for (loop = 0; loop < 1; loop++)
    {
        td[loop].user_id = loop;
        td[loop].se.value = (void *) ((lfds711_pal_uint_t) (&td[loop]));
        lfds711_stack_push(&ss, &td[loop].se);
    }


function: pop   stmt:     for (loop = 0; loop < 1; loop++)
    {
        temp_td = 0;
        res = lfds711_stack_pop(&ss, &se);
        if (res == 0)
                continue;

        temp_td = (*se).value;
        count++;
    }


function: writeIntofile   stmt:     close(saved);

function: createList   stmt:     return listHead;

function: readFile   stmt:     if (i != size)
    {
        writeIntofile(filename, listHead);
        assert(0);
        return;
    }


function: main   stmt:     return 0;


All symbols (new symbol table - work in progress):
   (0, 'entropy')  
   (1, 'entropy')  
   (2, 'lfds711_prng_init_valid_on_current_logical_core')  
   (3, 'ps')  
   (4, 'seed')  
   (5, 'lfds711_prng_st_init')  
   (6, 'psts')  
   (7, 'seed')  
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
   (18, 'query_type')  
   (19, 'query_input')  
   (20, 'query_output')  
   (21, 'lfds711_misc_force_store')  
   (22, 'destination')  
   (23, 'left')  
   (24, 'right')  
   (25, 'up')  
   (26, 'value')  
   (27, 'key')  
   (28, 'root')  
   (29, 'key_compare_function')  
   (30, 'new_key')  
   (31, 'existing_key')  
   (32, 'existing_key')  
   (33, 'user_state')  
   (34, 'insert_backoff')  
   (35, 'lfds711_btree_au_init_valid_on_current_logical_core')  
   (36, 'baus')  
   (37, 'key_compare_function')  
   (38, 'new_key')  
   (39, 'existing_key')  
   (40, 'existing_key')  
   (41, 'user_state')  
   (42, 'lfds711_btree_au_cleanup')  
   (43, 'baus')  
   (44, 'element_cleanup_callback')  
   (45, 'baus')  
   (46, 'baue')  
   (47, 'lfds711_btree_au_insert')  
   (48, 'baus')  
   (49, 'baue')  
   (50, 'existing_baue')  
   (51, 'lfds711_btree_au_get_by_key')  
   (52, 'baus')  
   (53, 'key_compare_function')  
   (54, 'new_key')  
   (55, 'existing_key')  
   (56, 'key')  
   (57, 'baue')  
   (58, 'lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position')  
   (59, 'baus')  
   (60, 'baue')  
   (61, 'absolute_position')  
   (62, 'relative_position')  
   (63, 'lfds711_btree_au_get_by_absolute_position')  
   (64, 'baus')  
   (65, 'baue')  
   (66, 'absolute_position')  
   (67, 'lfds711_btree_au_get_by_relative_position')  
   (68, 'baue')  
   (69, 'relative_position')  
   (70, 'lfds711_btree_au_query')  
   (71, 'baus')  
   (72, 'query_type')  
   (73, 'query_input')  
   (74, 'query_output')  
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
   (85, 'fs')  
   (86, 'elimination_array')  
   (87, 'elimination_array_size_in_elements')  
   (88, 'user_state')  
   (89, 'lfds711_freelist_cleanup')  
   (90, 'fs')  
   (91, 'element_cleanup_callback')  
   (92, 'fs')  
   (93, 'fe')  
   (94, 'lfds711_freelist_push')  
   (95, 'fs')  
   (96, 'fe')  
   (97, 'psts')  
   (98, 'lfds711_freelist_pop')  
   (99, 'fs')  
   (100, 'fe')  
   (101, 'psts')  
   (102, 'lfds711_freelist_query')  
   (103, 'fs')  
   (104, 'query_type')  
   (105, 'query_input')  
   (106, 'query_output')  
   (107, 'baue')  
   (108, 'key')  
   (109, 'value')  
   (110, 'baue')  
   (111, 'baus')  
   (112, 'baus_end')  
   (113, 'existing_key')  
   (114, 'key_compare_function')  
   (115, 'new_key')  
   (116, 'existing_key')  
   (117, 'array_size')  
   (118, 'baus_array')  
   (119, 'element_cleanup_callback')  
   (120, 'has')  
   (121, 'hae')  
   (122, 'key_hash_function')  
   (123, 'key')  
   (124, 'hash')  
   (125, 'user_state')  
   (126, 'lfds711_hash_a_init_valid_on_current_logical_core')  
   (127, 'has')  
   (128, 'baus_array')  
   (129, 'array_size')  
   (130, 'key_compare_function')  
   (131, 'new_key')  
   (132, 'existing_key')  
   (133, 'key_hash_function')  
   (134, 'key')  
   (135, 'hash')  
   (136, 'existing_key')  
   (137, 'user_state')  
   (138, 'lfds711_hash_a_cleanup')  
   (139, 'has')  
   (140, 'element_cleanup_function')  
   (141, 'has')  
   (142, 'hae')  
   (143, 'lfds711_hash_a_insert')  
   (144, 'has')  
   (145, 'hae')  
   (146, 'existing_hae')  
   (147, 'lfds711_hash_a_get_by_key')  
   (148, 'has')  
   (149, 'key_compare_function')  
   (150, 'new_key')  
   (151, 'existing_key')  
   (152, 'key_hash_function')  
   (153, 'key')  
   (154, 'hash')  
   (155, 'key')  
   (156, 'hae')  
   (157, 'lfds711_hash_a_iterate_init')  
   (158, 'has')  
   (159, 'hai')  
   (160, 'lfds711_hash_a_iterate')  
   (161, 'hai')  
   (162, 'hae')  
   (163, 'lfds711_hash_a_query')  
   (164, 'has')  
   (165, 'query_type')  
   (166, 'query_input')  
   (167, 'query_output')  
   (168, 'next')  
   (169, 'value')  
   (170, 'key')  
   (171, 'dummy_element')  
   (172, 'start')  
   (173, 'key_compare_function')  
   (174, 'new_key')  
   (175, 'existing_key')  
   (176, 'existing_key')  
   (177, 'user_state')  
   (178, 'insert_backoff')  
   (179, 'lfds711_list_aso_init_valid_on_current_logical_core')  
   (180, 'lasos')  
   (181, 'key_compare_function')  
   (182, 'new_key')  
   (183, 'existing_key')  
   (184, 'existing_key')  
   (185, 'user_state')  
   (186, 'lfds711_list_aso_cleanup')  
   (187, 'lasos')  
   (188, 'element_cleanup_callback')  
   (189, 'lasos')  
   (190, 'lasoe')  
   (191, 'lfds711_list_aso_insert')  
   (192, 'lasos')  
   (193, 'lasoe')  
   (194, 'existing_lasoe')  
   (195, 'lfds711_list_aso_get_by_key')  
   (196, 'lasos')  
   (197, 'key')  
   (198, 'lasoe')  
   (199, 'lfds711_list_aso_query')  
   (200, 'lasos')  
   (201, 'query_type')  
   (202, 'query_input')  
   (203, 'query_output')  
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
   (215, 'lasus')  
   (216, 'user_state')  
   (217, 'lfds711_list_asu_cleanup')  
   (218, 'lasus')  
   (219, 'element_cleanup_callback')  
   (220, 'lasus')  
   (221, 'lasue')  
   (222, 'lfds711_list_asu_insert_at_position')  
   (223, 'lasus')  
   (224, 'lasue')  
   (225, 'lasue_predecessor')  
   (226, 'position')  
   (227, 'lfds711_list_asu_insert_at_start')  
   (228, 'lasus')  
   (229, 'lasue')  
   (230, 'lfds711_list_asu_insert_at_end')  
   (231, 'lasus')  
   (232, 'lasue')  
   (233, 'lfds711_list_asu_insert_after_element')  
   (234, 'lasus')  
   (235, 'lasue')  
   (236, 'lasue_predecessor')  
   (237, 'lfds711_list_asu_get_by_key')  
   (238, 'lasus')  
   (239, 'key_compare_function')  
   (240, 'new_key')  
   (241, 'existing_key')  
   (242, 'key')  
   (243, 'lasue')  
   (244, 'lfds711_list_asu_query')  
   (245, 'lasus')  
   (246, 'query_type')  
   (247, 'query_input')  
   (248, 'query_output')  
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
   (261, 'qbmms')  
   (262, 'element_array')  
   (263, 'number_elements')  
   (264, 'user_state')  
   (265, 'lfds711_queue_bmm_cleanup')  
   (266, 'qbmms')  
   (267, 'element_cleanup_callback')  
   (268, 'qbmms')  
   (269, 'key')  
   (270, 'value')  
   (271, 'lfds711_queue_bmm_enqueue')  
   (272, 'qbmms')  
   (273, 'key')  
   (274, 'value')  
   (275, 'lfds711_queue_bmm_dequeue')  
   (276, 'qbmms')  
   (277, 'key')  
   (278, 'value')  
   (279, 'lfds711_queue_bmm_query')  
   (280, 'qbmms')  
   (281, 'query_type')  
   (282, 'query_input')  
   (283, 'query_output')  
   (284, 'key')  
   (285, 'value')  
   (286, 'number_elements')  
   (287, 'mask')  
   (288, 'read_index')  
   (289, 'write_index')  
   (290, 'element_array')  
   (291, 'user_state')  
   (292, 'lfds711_queue_bss_init_valid_on_current_logical_core')  
   (293, 'qbsss')  
   (294, 'element_array')  
   (295, 'number_elements')  
   (296, 'user_state')  
   (297, 'lfds711_queue_bss_cleanup')  
   (298, 'qbsss')  
   (299, 'element_cleanup_callback')  
   (300, 'qbsss')  
   (301, 'key')  
   (302, 'value')  
   (303, 'lfds711_queue_bss_enqueue')  
   (304, 'qbsss')  
   (305, 'key')  
   (306, 'value')  
   (307, 'lfds711_queue_bss_dequeue')  
   (308, 'qbsss')  
   (309, 'key')  
   (310, 'value')  
   (311, 'lfds711_queue_bss_query')  
   (312, 'qbsss')  
   (313, 'query_type')  
   (314, 'query_input')  
   (315, 'query_output')  
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
   (326, 'qumms')  
   (327, 'qumme_dummy')  
   (328, 'user_state')  
   (329, 'lfds711_queue_umm_cleanup')  
   (330, 'qumms')  
   (331, 'element_cleanup_callback')  
   (332, 'qumms')  
   (333, 'qumme')  
   (334, 'dummy_element_flag')  
   (335, 'lfds711_queue_umm_enqueue')  
   (336, 'qumms')  
   (337, 'qumme')  
   (338, 'lfds711_queue_umm_dequeue')  
   (339, 'qumms')  
   (340, 'qumme')  
   (341, 'lfds711_queue_umm_query')  
   (342, 'qumms')  
   (343, 'query_type')  
   (344, 'query_input')  
   (345, 'query_output')  
   (346, 'fe')  
   (347, 'qumme')  
   (348, 'qumme_use')  
   (349, 'key')  
   (350, 'value')  
   (351, 'fs')  
   (352, 'qumms')  
   (353, 'element_cleanup_callback')  
   (354, 'rs')  
   (355, 'key')  
   (356, 'value')  
   (357, 'unread_flag')  
   (358, 'user_state')  
   (359, 'lfds711_ringbuffer_init_valid_on_current_logical_core')  
   (360, 'rs')  
   (361, 're_array_inc_dummy')  
   (362, 'number_elements_inc_dummy')  
   (363, 'user_state')  
   (364, 'lfds711_ringbuffer_cleanup')  
   (365, 'rs')  
   (366, 'element_cleanup_callback')  
   (367, 'rs')  
   (368, 'key')  
   (369, 'value')  
   (370, 'unread_flag')  
   (371, 'lfds711_ringbuffer_read')  
   (372, 'rs')  
   (373, 'key')  
   (374, 'value')  
   (375, 'lfds711_ringbuffer_write')  
   (376, 'rs')  
   (377, 'key')  
   (378, 'value')  
   (379, 'overwrite_occurred_flag')  
   (380, 'overwritten_key')  
   (381, 'overwritten_value')  
   (382, 'lfds711_ringbuffer_query')  
   (383, 'rs')  
   (384, 'query_type')  
   (385, 'query_input')  
   (386, 'query_output')  
   (387, 'next')  
   (388, 'key')  
   (389, 'value')  
   (390, 'top')  
   (391, 'user_state')  
   (392, 'pop_backoff')  
   (393, 'push_backoff')  
   (394, 'lfds711_stack_init_valid_on_current_logical_core')  
   (395, 'ss')  
   (396, 'user_state')  
   (397, 'lfds711_stack_cleanup')  
   (398, 'ss')  
   (399, 'element_cleanup_callback')  
   (400, 'ss')  
   (401, 'se')  
   (402, 'lfds711_stack_push')  
   (403, 'ss')  
   (404, 'se')  
   (405, 'lfds711_stack_pop')  
   (406, 'ss')  
   (407, 'se')  
   (408, 'lfds711_stack_query')  
   (409, 'ss')  
   (410, 'query_type')  
   (411, 'query_input')  
   (412, 'query_output')  
   (413, 'lfds711_misc_internal_backoff_init')  
   (414, 'bs')  
   (415, 'lock')  
   (416, '__atomic_compare_exchange_n')  
   (417, 'mptr')  
   (418, 'eptr')  
   (419, 'newval')  
   (420, 'weak_p')  
   (421, 'sm')  
   (422, 'fm')  
   (423, 'res')  
   (424, '__VERIFIER_atomic_compare_and_exchange')  
   (425, 'mptr')  
   (426, 'eptr')  
   (427, 'newval')  
   (428, 'weak_p')  
   (429, 'sm')  
   (430, 'fm')  
   (431, '__atomic_exchange_n')  
   (432, 'previous')  
   (433, 'new')  
   (434, 'memorder')  
   (435, 'res')  
   (436, '__VERIFIER_atomic_exchange')  
   (437, 'previous')  
   (438, 'new')  
   (439, 'memorder')  
   (440, 'old')  
   (441, '__atomic_thread_fence')  
   (442, 'i')  
   (443, '__VERIFIER_atomic_swap_stack_top')  
   (444, 'top')  
   (445, 'oldtop')  
   (446, 'newtop')  
   (447, 'exponential_backoff')  
   (448, 'loop')  
   (449, 'lfds711_misc_internal_backoff_init')  
   (450, 'bs')  
   (451, 'c')  
   (452, 'c')  
   (453, 'lfds711_stack_init_valid_on_current_logical_core')  
   (454, 'ss')  
   (455, 'user_state')  
   (456, 'c')  
   (457, 'c')  
   (458, 'c')  
   (459, 'lfds711_stack_pop')  
   (460, 'ss')  
   (461, 'se')  
   (462, 'result')  
   (463, 'backoff_iteration')  
   (464, 'new_top')  
   (465, 'original_top')  
   (466, 'c')  
   (467, 'c')  
   (468, 'i')  
   (469, 'lfds711_stack_push')  
   (470, 'ss')  
   (471, 'se')  
   (472, 'result')  
   (473, 'backoff_iteration')  
   (474, 'new_top')  
   (475, 'original_top')  
   (476, 'c')  
   (477, 'c')  
   (478, 'i')  
   (479, 'lfds711_stack_cleanup')  
   (480, 'ss')  
   (481, 'element_cleanup_callback')  
   (482, 'ss')  
   (483, 'se')  
   (484, 'se')  
   (485, 'se_temp')  
   (486, 'c')  
   (487, 'se')  
   (488, 'user_id')  
   (489, 'next')  
   (490, 'payload')  
   (491, 'LIST_InsertHeadNode')  
   (492, 'IO_head')  
   (493, 'I__se')  
   (494, 'I__user_id')  
   (495, 'rCode')  
   (496, 'newNode')  
   (497, 'PrintListPayloads')  
   (498, 'head')  
   (499, 'rCode')  
   (500, 'cur')  
   (501, 'GetListSize')  
   (502, 'head')  
   (503, 'cur')  
   (504, 'nodeCnt')  
   (505, 'LIST_GetTailNode')  
   (506, 'I__listHead')  
   (507, '_O_listTail')  
   (508, 'rCode')  
   (509, 'curNode')  
   (510, 'LIST_InsertTailNode')  
   (511, 'IO_head')  
   (512, 'I__se')  
   (513, 'I__user_id')  
   (514, 'rCode')  
   (515, 'tailNode')  
   (516, 'newNode')  
   (517, 'LIST_FetchParentNodeById')  
   (518, 'I__head')  
   (519, 'I__user_id')  
   (520, '_O_parent')  
   (521, 'rCode')  
   (522, 'parent')  
   (523, 'curNode')  
   (524, 'LIST_InsertNodeById')  
   (525, 'IO_head')  
   (526, 'I__user_id')  
   (527, 'I__se')  
   (528, 'rCode')  
   (529, 'parent')  
   (530, 'newNode')  
   (531, 'LIST_FetchNodeById')  
   (532, 'I__head')  
   (533, 'I__user_id')  
   (534, '_O_node')  
   (535, '_O_parent')  
   (536, 'rCode')  
   (537, 'parent')  
   (538, 'curNode')  
   (539, 'LIST_DeleteNodeById')  
   (540, 'IO_head')  
   (541, 'I__user_id')  
   (542, 'rCode')  
   (543, 'parent')  
   (544, 'delNode')  
   (545, 'LIST_Destroy')  
   (546, 'IO_head')  
   (547, 'rCode')  
   (548, 'delNode')  
   (549, 'ss')  
   (550, 'se')  
   (551, 'user_id')  
   (552, 'push')  
   (553, 'td')  
   (554, 'loop')  
   (555, 'pop')  
   (556, 'se')  
   (557, 'temp_td')  
   (558, 'res')  
   (559, 'count')  
   (560, 'loop')  
   (561, 'writeIntofile')  
   (562, 'filename')  
   (563, 'listHead')  
   (564, 'filefd')  
   (565, 'saved')  
   (566, 'createList')  
   (567, 'listHead')  
   (568, 'se')  
   (569, 'temp_td')  
   (570, 'res')  
   (571, 'readFile')  
   (572, 'filename')  
   (573, 'listHead')  
   (574, 'line')  
   (575, 'len')  
   (576, 'read')  
   (577, 'parent')  
   (578, 'curNode')  
   (579, 'delim')  
   (580, 'i')  
   (581, 'size')  
   (582, 'fp')  
   (583, 'ptr')  
   (584, 'main')  
   (585, 'listHead')  
   (586, 't1')  
   (587, 't2')  
