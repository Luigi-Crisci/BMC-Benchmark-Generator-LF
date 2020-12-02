list of functions:
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
      id172  'lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[616, 618, 620, 648, 688, 690, 692, 720, 760, 762, 764, 792, 882, 884, 886, 914, 954, 956, 958, 986, 1026, 1028, 1030, 1058, 1148, 1150, 1152, 1180, 1220, 1222, 1224, 1252, 1292, 1294, 1296, 1324, 1420, 1421, 1441, 1469, 1497, 1498, 1525, 1553, 1581, 1582, 1607, 1635, 1663, 1664, 1689, 1717, 1745, 1746, 1816, 1817, 1837, 1865, 1893, 1894, 1921, 1949, 1977, 1978, 2003, 2031, 2059, 2060, 2085, 2113, 2141, 2142, 2212, 2213, 2233, 2261, 2289, 2290, 2317, 2345, 2373, 2374, 2399, 2427, 2455, 2456, 2481, 2509, 2537, 2538, 2585, 2619, 2718, 2727]'  
         deref '[]'  
         occurs '[616, 618, 620, 648, 688, 690, 692, 720, 760, 762, 764, 792, 882, 884, 886, 914, 954, 956, 958, 986, 1026, 1028, 1030, 1058, 1148, 1150, 1152, 1180, 1220, 1222, 1224, 1252, 1292, 1294, 1296, 1324, 1420, 1421, 1441, 1469, 1497, 1498, 1525, 1553, 1581, 1582, 1607, 1635, 1663, 1664, 1689, 1717, 1745, 1746, 1816, 1817, 1837, 1865, 1893, 1894, 1921, 1949, 1977, 1978, 2003, 2031, 2059, 2060, 2085, 2113, 2141, 2142, 2212, 2213, 2233, 2261, 2289, 2290, 2317, 2345, 2373, 2374, 2399, 2427, 2455, 2456, 2481, 2509, 2537, 2538, 2585, 2619, 2718, 2727]'  
      id173  'ss'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[578, 844, 1110, 1390, 1786, 2182, 2582]'  
         deref '[]'  
         occurs '[578, 844, 1110, 1390, 1786, 2182, 2582]'  
   push
      id176  '__cs_param_push___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id177  '__cs_local_push_td'  
         type 'static struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[575, 580, 841, 846, 1107, 1112]'  
         deref '[]'  
         occurs '[570, 574, 575, 575, 580, 840, 841, 841, 846, 1106, 1107, 1107, 1112]'  
      id178  '__cs_local_push_loop'  
         type 'static int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[571, 574, 574, 575, 575, 580, 837, 840, 840, 841, 841, 846, 1103, 1106, 1106, 1107, 1107, 1112, 1369, 1370]'  
      id179  '__cs_param_lfds711_stack_push_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[609, 610, 624, 696, 768, 875, 876, 890, 962, 1034, 1141, 1142, 1156, 1228, 1300]'  
         occurs '[578, 588, 609, 610, 624, 696, 768, 844, 854, 875, 876, 890, 962, 1034, 1110, 1120, 1141, 1142, 1156, 1228, 1300]'  
      id180  '__cs_param_lfds711_stack_push_se'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[617, 689, 761, 883, 955, 1027, 1149, 1221, 1293]'  
         occurs '[580, 599, 608, 617, 689, 761, 846, 865, 874, 883, 955, 1027, 1112, 1131, 1140, 1149, 1221, 1293]'  
      id181  '__cs_local_lfds711_stack_push_result'  
         type 'static char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[611, 614, 647, 651, 686, 719, 723, 758, 791, 795, 830, 877, 880, 913, 917, 952, 985, 989, 1024, 1057, 1061, 1096, 1143, 1146, 1179, 1183, 1218, 1251, 1255, 1290, 1323, 1327, 1362]'  
      id182  '__cs_local_lfds711_stack_push_backoff_iteration'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[583, 849, 1115]'  
      id183  '__cs_local_lfds711_stack_push_new_top'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[628, 700, 772, 894, 966, 1038, 1160, 1232, 1304]'  
         deref '[]'  
         occurs '[608, 619, 628, 691, 700, 763, 772, 874, 885, 894, 957, 966, 1029, 1038, 1140, 1151, 1160, 1223, 1232, 1295, 1304]'  
      id184  '__cs_local_lfds711_stack_push_original_top'  
         type 'static struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[626, 698, 770, 892, 964, 1036, 1158, 1230, 1302]'  
         deref '[]'  
         occurs '[609, 610, 617, 619, 626, 689, 691, 698, 761, 763, 770, 875, 876, 883, 885, 892, 955, 957, 964, 1027, 1029, 1036, 1141, 1142, 1149, 1151, 1158, 1221, 1223, 1230, 1293, 1295, 1302]'  
      id185  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[588, 589, 854, 855, 1120, 1121]'  
      id186  '__cs_local_lfds711_stack_push_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[593, 604, 859, 870, 1125, 1136]'  
         occurs '[592, 593, 603, 604, 858, 859, 869, 870, 1124, 1125, 1135, 1136]'  
      id187  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[599, 600, 865, 866, 1131, 1132]'  
      id188  '__cs_local_lfds711_stack_push_i'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[613, 677, 680, 749, 752, 821, 824, 879, 943, 946, 1015, 1018, 1087, 1090, 1145, 1209, 1212, 1281, 1284, 1353, 1356]'  
      id189  '__cs_retval__swap_stack_top_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[635, 641, 647, 707, 713, 719, 779, 785, 791, 901, 907, 913, 973, 979, 985, 1045, 1051, 1057, 1167, 1173, 1179, 1239, 1245, 1251, 1311, 1317, 1323]'  
      id190  '__cs_param_swap_stack_top_top'  
         type 'static struct lfds711_stack_element * volatile *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[631, 634, 640, 703, 706, 712, 775, 778, 784, 897, 900, 906, 969, 972, 978, 1041, 1044, 1050, 1163, 1166, 1172, 1235, 1238, 1244, 1307, 1310, 1316]'  
         occurs '[624, 631, 634, 640, 696, 703, 706, 712, 768, 775, 778, 784, 890, 897, 900, 906, 962, 969, 972, 978, 1034, 1041, 1044, 1050, 1156, 1163, 1166, 1172, 1228, 1235, 1238, 1244, 1300, 1307, 1310, 1316]'  
      id191  '__cs_param_swap_stack_top_oldtop'  
         type 'static struct lfds711_stack_element * volatile *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[631, 640, 703, 712, 775, 784, 897, 906, 969, 978, 1041, 1050, 1163, 1172, 1235, 1244, 1307, 1316]'  
         occurs '[626, 631, 640, 698, 703, 712, 770, 775, 784, 892, 897, 906, 964, 969, 978, 1036, 1041, 1050, 1158, 1163, 1172, 1230, 1235, 1244, 1302, 1307, 1316]'  
      id192  '__cs_param_swap_stack_top_newtop'  
         type 'static struct lfds711_stack_element **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[634, 706, 778, 900, 972, 1044, 1166, 1238, 1310]'  
         occurs '[628, 634, 700, 706, 772, 778, 894, 900, 966, 972, 1038, 1044, 1160, 1166, 1232, 1238, 1304, 1310]'  
      id193  '__cs_local_swap_stack_top___cs_tmp_if_cond_1'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[631, 632, 703, 704, 775, 776, 897, 898, 969, 970, 1041, 1042, 1163, 1164, 1235, 1236, 1307, 1308]'  
      id194  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[651, 652, 723, 724, 795, 796, 917, 918, 989, 990, 1061, 1062, 1183, 1184, 1255, 1256, 1327, 1328]'  
      id195  '__cs_local_exponential_backoff_loop'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[656, 657, 661, 662, 666, 667, 671, 672, 728, 729, 733, 734, 738, 739, 743, 744, 800, 801, 805, 806, 810, 811, 815, 816, 922, 923, 927, 928, 932, 933, 937, 938, 994, 995, 999, 1000, 1004, 1005, 1009, 1010, 1066, 1067, 1071, 1072, 1076, 1077, 1081, 1082, 1188, 1189, 1193, 1194, 1198, 1199, 1203, 1204, 1260, 1261, 1265, 1266, 1270, 1271, 1275, 1276, 1332, 1333, 1337, 1338, 1342, 1343, 1347, 1348]'  
      id196  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_18'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[680, 681, 752, 753, 824, 825, 946, 947, 1018, 1019, 1090, 1091, 1212, 1213, 1284, 1285, 1356, 1357]'  
   pop
      id197  '__cs_param_pop___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id198  '__cs_local_pop_loop'  
         type 'static int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1383, 1778, 2174, 2570, 2572]'  
      id199  '__cs_local_pop_se'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1392, 1788, 2184]'  
         deref '[1774, 2170, 2566]'  
         occurs '[1392, 1774, 1788, 2170, 2184, 2566]'  
      id200  '__cs_local_pop_temp_td'  
         type 'static struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1776, 2172, 2568]'  
         occurs '[1385, 1774, 1776, 1781, 2170, 2172, 2177, 2566, 2568]'  
      id201  '__cs_local_pop_res'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1765, 1769, 2161, 2165, 2557, 2561]'  
      id202  '__cs_local_pop_count'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1382, 1775, 2171, 2567, 2573]'  
      id203  '__cs_retval__lfds711_stack_pop_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1436, 1520, 1602, 1684, 1760, 1765, 1832, 1916, 1998, 2080, 2156, 2161, 2228, 2312, 2394, 2476, 2552, 2557]'  
      id204  '__cs_param_lfds711_stack_pop_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1422, 1423, 1445, 1529, 1611, 1693, 1818, 1819, 1841, 1925, 2007, 2089, 2214, 2215, 2237, 2321, 2403, 2485]'  
         occurs '[1390, 1400, 1422, 1423, 1445, 1529, 1611, 1693, 1786, 1796, 1818, 1819, 1841, 1925, 2007, 2089, 2182, 2192, 2214, 2215, 2237, 2321, 2403, 2485]'  
      id205  '__cs_param_lfds711_stack_pop_se'  
         type 'static struct lfds711_stack_element **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1435, 1519, 1601, 1683, 1759, 1831, 1915, 1997, 2079, 2155, 2227, 2311, 2393, 2475, 2551]'  
         occurs '[1392, 1411, 1435, 1519, 1601, 1683, 1759, 1788, 1807, 1831, 1915, 1997, 2079, 2155, 2184, 2203, 2227, 2311, 2393, 2475, 2551]'  
      id206  '__cs_local_lfds711_stack_pop_result'  
         type 'static char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1468, 1472, 1512, 1552, 1556, 1594, 1634, 1638, 1676, 1716, 1720, 1758, 1864, 1868, 1908, 1948, 1952, 1990, 2030, 2034, 2072, 2112, 2116, 2154, 2260, 2264, 2304, 2344, 2348, 2386, 2426, 2430, 2468, 2508, 2512, 2550]'  
      id207  '__cs_local_lfds711_stack_pop_backoff_iteration'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1395, 1791, 2187]'  
      id208  '__cs_local_lfds711_stack_pop_new_top'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1449, 1533, 1615, 1697, 1845, 1929, 2011, 2093, 2241, 2325, 2407, 2489]'  
         deref '[]'  
         occurs '[1439, 1440, 1449, 1523, 1524, 1533, 1605, 1606, 1615, 1687, 1688, 1697, 1835, 1836, 1845, 1919, 1920, 1929, 2001, 2002, 2011, 2083, 2084, 2093, 2231, 2232, 2241, 2315, 2316, 2325, 2397, 2398, 2407, 2479, 2480, 2489]'  
      id209  '__cs_local_lfds711_stack_pop_original_top'  
         type 'static struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1447, 1531, 1613, 1695, 1843, 1927, 2009, 2091, 2239, 2323, 2405, 2487]'  
         deref '[1440, 1524, 1606, 1688, 1836, 1920, 2002, 2084, 2232, 2316, 2398, 2480]'  
         occurs '[1422, 1423, 1432, 1439, 1440, 1447, 1516, 1523, 1524, 1531, 1598, 1605, 1606, 1613, 1680, 1687, 1688, 1695, 1759, 1818, 1819, 1828, 1835, 1836, 1843, 1912, 1919, 1920, 1927, 1994, 2001, 2002, 2009, 2076, 2083, 2084, 2091, 2155, 2214, 2215, 2224, 2231, 2232, 2239, 2308, 2315, 2316, 2323, 2390, 2397, 2398, 2405, 2472, 2479, 2480, 2487, 2551]'  
      id210  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1400, 1401, 1796, 1797, 2192, 2193]'  
      id211  '__cs_local_lfds711_stack_pop_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1405, 1416, 1801, 1812, 2197, 2208]'  
         occurs '[1404, 1405, 1415, 1416, 1800, 1801, 1811, 1812, 2196, 2197, 2207, 2208]'  
      id212  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1411, 1412, 1807, 1808, 2203, 2204]'  
      id213  '__cs_local_lfds711_stack_pop_i'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1425, 1500, 1503, 1584, 1587, 1666, 1669, 1748, 1751, 1821, 1896, 1899, 1980, 1983, 2062, 2065, 2144, 2147, 2217, 2292, 2295, 2376, 2379, 2458, 2461, 2540, 2543]'  
      id214  '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1428, 1509, 1510, 1824, 1905, 1906, 2220, 2301, 2302]'  
      id215  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1432, 1433, 1828, 1829, 2224, 2225]'  
      id216  '__cs_retval__swap_stack_top_2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1456, 1462, 1468, 1852, 1858, 1864, 2248, 2254, 2260]'  
      id217  '__cs_param_swap_stack_top_top'  
         type 'static struct lfds711_stack_element * volatile *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1452, 1455, 1461, 1536, 1539, 1545, 1618, 1621, 1627, 1700, 1703, 1709, 1848, 1851, 1857, 1932, 1935, 1941, 2014, 2017, 2023, 2096, 2099, 2105, 2244, 2247, 2253, 2328, 2331, 2337, 2410, 2413, 2419, 2492, 2495, 2501]'  
         occurs '[1445, 1452, 1455, 1461, 1529, 1536, 1539, 1545, 1611, 1618, 1621, 1627, 1693, 1700, 1703, 1709, 1841, 1848, 1851, 1857, 1925, 1932, 1935, 1941, 2007, 2014, 2017, 2023, 2089, 2096, 2099, 2105, 2237, 2244, 2247, 2253, 2321, 2328, 2331, 2337, 2403, 2410, 2413, 2419, 2485, 2492, 2495, 2501]'  
      id218  '__cs_param_swap_stack_top_oldtop'  
         type 'static struct lfds711_stack_element * volatile *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1452, 1461, 1536, 1545, 1618, 1627, 1700, 1709, 1848, 1857, 1932, 1941, 2014, 2023, 2096, 2105, 2244, 2253, 2328, 2337, 2410, 2419, 2492, 2501]'  
         occurs '[1447, 1452, 1461, 1531, 1536, 1545, 1613, 1618, 1627, 1695, 1700, 1709, 1843, 1848, 1857, 1927, 1932, 1941, 2009, 2014, 2023, 2091, 2096, 2105, 2239, 2244, 2253, 2323, 2328, 2337, 2405, 2410, 2419, 2487, 2492, 2501]'  
      id219  '__cs_param_swap_stack_top_newtop'  
         type 'static struct lfds711_stack_element **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1455, 1539, 1621, 1703, 1851, 1935, 2017, 2099, 2247, 2331, 2413, 2495]'  
         occurs '[1449, 1455, 1533, 1539, 1615, 1621, 1697, 1703, 1845, 1851, 1929, 1935, 2011, 2017, 2093, 2099, 2241, 2247, 2325, 2331, 2407, 2413, 2489, 2495]'  
      id220  '__cs_local_swap_stack_top___cs_tmp_if_cond_1'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1452, 1453, 1536, 1537, 1618, 1619, 1700, 1701, 1848, 1849, 1932, 1933, 2014, 2015, 2096, 2097, 2244, 2245, 2328, 2329, 2410, 2411, 2492, 2493]'  
      id221  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1472, 1473, 1868, 1869, 2264, 2265]'  
      id222  '__cs_local_exponential_backoff_loop'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1477, 1478, 1482, 1483, 1487, 1488, 1492, 1493, 1561, 1562, 1566, 1567, 1571, 1572, 1576, 1577, 1643, 1644, 1648, 1649, 1653, 1654, 1658, 1659, 1725, 1726, 1730, 1731, 1735, 1736, 1740, 1741, 1873, 1874, 1878, 1879, 1883, 1884, 1888, 1889, 1957, 1958, 1962, 1963, 1967, 1968, 1972, 1973, 2039, 2040, 2044, 2045, 2049, 2050, 2054, 2055, 2121, 2122, 2126, 2127, 2131, 2132, 2136, 2137, 2269, 2270, 2274, 2275, 2279, 2280, 2284, 2285, 2353, 2354, 2358, 2359, 2363, 2364, 2368, 2369, 2435, 2436, 2440, 2441, 2445, 2446, 2450, 2451, 2517, 2518, 2522, 2523, 2527, 2528, 2532, 2533]'  
      id223  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1503, 1504, 1899, 1900, 2295, 2296]'  
      id224  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1516, 1517, 1598, 1599, 1680, 1681, 1912, 1913, 1994, 1995, 2076, 2077, 2308, 2309, 2390, 2391, 2472, 2473]'  
      id225  '__cs_retval__swap_stack_top_3'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1540, 1546, 1552, 1622, 1628, 1634, 1704, 1710, 1716, 1936, 1942, 1948, 2018, 2024, 2030, 2100, 2106, 2112, 2332, 2338, 2344, 2414, 2420, 2426, 2496, 2502, 2508]'  
      id226  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1556, 1557, 1638, 1639, 1720, 1721, 1952, 1953, 2034, 2035, 2116, 2117, 2348, 2349, 2430, 2431, 2512, 2513]'  
      id227  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1587, 1588, 1669, 1670, 1751, 1752, 1983, 1984, 2065, 2066, 2147, 2148, 2379, 2380, 2461, 2462, 2543, 2544]'  
      id228  '__cs_local_pop___cs_tmp_if_cond_21'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1769, 1770, 2165, 2166, 2561, 2562]'  
   main
      id229  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[2599, 2610, 2620, 2621, 2622, 2625, 2659]'  
         occurs '[2582, 2588, 2599, 2610, 2620, 2621, 2622, 2625, 2659]'  
      id230  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state'  
         type 'static void *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2584, 2622]'  
      id231  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2588, 2589]'  
      id232  '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[2593, 2604, 2615]'  
         occurs '[2592, 2593, 2603, 2604, 2614, 2615]'  
      id233  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2599, 2600]'  
      id234  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2610, 2611]'  
      id235  '__cs_param_lfds711_misc_internal_backoff_init_bs'  
         type 'static struct lfds711_misc_backoff_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[2639, 2648, 2649, 2650, 2651, 2652, 2673, 2682, 2683, 2684, 2685, 2686]'  
         occurs '[2625, 2628, 2639, 2648, 2649, 2650, 2651, 2652, 2659, 2662, 2673, 2682, 2683, 2684, 2685, 2686]'  
      id236  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2628, 2629, 2662, 2663]'  
      id237  '__cs_local_lfds711_misc_internal_backoff_init_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[2633, 2644, 2667, 2678]'  
         occurs '[2632, 2633, 2643, 2644, 2666, 2667, 2677, 2678]'  
      id238  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2639, 2640, 2673, 2674]'  
      id239  '__cs_local_lfds711_misc_force_store_destination'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[2693, 2698]'  
         deref '[]'  
         occurs '[2693, 2698]'  
      id240  '__cs_retval____atomic_exchange_n_1'  
         type 'static unsigned long'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2706, 2711]'  
      id241  '__cs_param___atomic_exchange_n_previous'  
         type 'static int long long unsigned *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[2704, 2705]'  
         occurs '[2698, 2704, 2705]'  
      id242  '__cs_param___atomic_exchange_n_new'  
         type 'static int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2700, 2705]'  
      id243  '__cs_param___atomic_exchange_n_memorder'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2702]'  
      id244  '__cs_local___atomic_exchange_n_old'  
         type 'static unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2704, 2706]'  
      id245  '__cs_local_main_t1'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[2728]'  
         deref '[]'  
         occurs '[2728, 2730]'  
      id246  '__cs_local_main_t2'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[2729]'  
         deref '[]'  
         occurs '[2729, 2731]'  

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
      id174  'se'  type 'struct lfds711_stack_element'  kind 'f'  arity '0'  size '[]'  
      id175  'user_id'  type 'int long long unsigned'  kind 'f'  arity '0'  size '[]'  

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
   push
       var '__cs_param_push___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_push_td'   type 'static struct test_data *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_push_ss'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_push_se'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_push_new_top'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var '__cs_local_lfds711_stack_push_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_swap_stack_top_top'   type 'static struct lfds711_stack_element * volatile *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_swap_stack_top_oldtop'   type 'static struct lfds711_stack_element * volatile *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_swap_stack_top_newtop'   type 'static struct lfds711_stack_element **'   kind 'l'   arity '0'   size '[]'   
   pop
       var '__cs_param_pop___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_pop_se'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_pop_temp_td'   type 'static struct test_data *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_pop_ss'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_pop_se'   type 'static struct lfds711_stack_element **'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_pop_new_top'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var '__cs_local_lfds711_stack_pop_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_swap_stack_top_top'   type 'static struct lfds711_stack_element * volatile *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_swap_stack_top_oldtop'   type 'static struct lfds711_stack_element * volatile *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_swap_stack_top_newtop'   type 'static struct lfds711_stack_element **'   kind 'l'   arity '0'   size '[]'   
   main
       var '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state'   type 'static void *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_misc_internal_backoff_init_bs'   type 'static struct lfds711_misc_backoff_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_misc_internal_backoff_init_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param___atomic_exchange_n_previous'   type 'static int long long unsigned *'   kind 'l'   arity '0'   size '[]'   

Function blocks:
function 'push' ----------------------------------:
void *push(void *__cs_param_push___cs_unused)
{
    static struct test_data *__cs_local_push_td;
    static int long long unsigned __cs_local_push_loop;
    __cs_local_push_td = __cs_safe_malloc((sizeof(struct test_data)) * 3);
    __cs_local_push_loop = 0;
    {
        ;
        __cs_local_push_td[__cs_local_push_loop].user_id = __cs_local_push_loop;
        __cs_local_push_td[__cs_local_push_loop].se.value = (void *) ((lfds711_pal_uint_t) (&__cs_local_push_td[__cs_local_push_loop]));
        {
            static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
            __cs_param_lfds711_stack_push_ss = &ss;
            static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
            __cs_param_lfds711_stack_push_se = &__cs_local_push_td[__cs_local_push_loop].se;
            static char unsigned __cs_local_lfds711_stack_push_result;
            static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
            __cs_local_lfds711_stack_push_backoff_iteration = 0;
            static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
            static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
            ;
            static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
            __cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_ss != 0);
            if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)
            {
                static char *__cs_local_lfds711_stack_push_c;
                __cs_local_lfds711_stack_push_c = 0;
                *__cs_local_lfds711_stack_push_c = 0;
            }

            ;
            ;
            ;
            static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
            __cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = !(__cs_param_lfds711_stack_push_se != 0);
            if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
                goto __exit_loop_2;
            }

            {
                __cs_mutex_lock(&lock);
                (*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                __cs_mutex_unlock(&lock);
                __cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_1;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_1 = 1;
                        goto __exit__swap_stack_top_1_0;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_1 = 0;
                        goto __exit__swap_stack_top_1_0;
                    }

                    __exit__swap_stack_top_1_0:
                    ;

                }
                __cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_3;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_3;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_3;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_3:
                        ;

                        __exit__exponential_backoff_1_0:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)
                {
                    goto __exit_loop_2;
                }

            }
            if (!(__cs_local_lfds711_stack_push_result == 0))
            {
                goto __exit_loop_2;
            }

            {
                __cs_mutex_lock(&lock);
                (*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                __cs_mutex_unlock(&lock);
                __cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_1;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_1 = 1;
                        goto __exit__swap_stack_top_1_1;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_1 = 0;
                        goto __exit__swap_stack_top_1_1;
                    }

                    __exit__swap_stack_top_1_1:
                    ;

                }
                __cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_4;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_4;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_4;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_4:
                        ;

                        __exit__exponential_backoff_1_1:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)
                {
                    goto __exit_loop_2;
                }

            }
            if (!(__cs_local_lfds711_stack_push_result == 0))
            {
                goto __exit_loop_2;
            }

            {
                __cs_mutex_lock(&lock);
                (*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                __cs_mutex_unlock(&lock);
                __cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_1;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_1 = 1;
                        goto __exit__swap_stack_top_1_2;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_1 = 0;
                        goto __exit__swap_stack_top_1_2;
                    }

                    __exit__swap_stack_top_1_2:
                    ;

                }
                __cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_5;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_5;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_5;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_5:
                        ;

                        __exit__exponential_backoff_1_2:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)
                {
                    goto __exit_loop_2;
                }

            }
            __CSEQ_assume(!(__cs_local_lfds711_stack_push_result == 0));
            __exit_loop_2:
            ;

            goto __exit__lfds711_stack_push_1_0;
            __exit__lfds711_stack_push_1_0:
            ;

        }
        ;
    }
    __cs_local_push_loop++;
    {
        ;
        __cs_local_push_td[__cs_local_push_loop].user_id = __cs_local_push_loop;
        __cs_local_push_td[__cs_local_push_loop].se.value = (void *) ((lfds711_pal_uint_t) (&__cs_local_push_td[__cs_local_push_loop]));
        {
            static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
            __cs_param_lfds711_stack_push_ss = &ss;
            static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
            __cs_param_lfds711_stack_push_se = &__cs_local_push_td[__cs_local_push_loop].se;
            static char unsigned __cs_local_lfds711_stack_push_result;
            static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
            __cs_local_lfds711_stack_push_backoff_iteration = 0;
            static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
            static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
            ;
            static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
            __cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_ss != 0);
            if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)
            {
                static char *__cs_local_lfds711_stack_push_c;
                __cs_local_lfds711_stack_push_c = 0;
                *__cs_local_lfds711_stack_push_c = 0;
            }

            ;
            ;
            ;
            static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
            __cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = !(__cs_param_lfds711_stack_push_se != 0);
            if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
                goto __exit_loop_6;
            }

            {
                __cs_mutex_lock(&lock);
                (*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                __cs_mutex_unlock(&lock);
                __cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_1;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_1 = 1;
                        goto __exit__swap_stack_top_1_3;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_1 = 0;
                        goto __exit__swap_stack_top_1_3;
                    }

                    __exit__swap_stack_top_1_3:
                    ;

                }
                __cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_7;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_7;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_7;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_7:
                        ;

                        __exit__exponential_backoff_1_3:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)
                {
                    goto __exit_loop_6;
                }

            }
            if (!(__cs_local_lfds711_stack_push_result == 0))
            {
                goto __exit_loop_6;
            }

            {
                __cs_mutex_lock(&lock);
                (*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                __cs_mutex_unlock(&lock);
                __cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_1;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_1 = 1;
                        goto __exit__swap_stack_top_1_4;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_1 = 0;
                        goto __exit__swap_stack_top_1_4;
                    }

                    __exit__swap_stack_top_1_4:
                    ;

                }
                __cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_8;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_8;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_8;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_8:
                        ;

                        __exit__exponential_backoff_1_4:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)
                {
                    goto __exit_loop_6;
                }

            }
            if (!(__cs_local_lfds711_stack_push_result == 0))
            {
                goto __exit_loop_6;
            }

            {
                __cs_mutex_lock(&lock);
                (*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                __cs_mutex_unlock(&lock);
                __cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_1;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_1 = 1;
                        goto __exit__swap_stack_top_1_5;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_1 = 0;
                        goto __exit__swap_stack_top_1_5;
                    }

                    __exit__swap_stack_top_1_5:
                    ;

                }
                __cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_9;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_9;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_9;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_9:
                        ;

                        __exit__exponential_backoff_1_5:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)
                {
                    goto __exit_loop_6;
                }

            }
            __CSEQ_assume(!(__cs_local_lfds711_stack_push_result == 0));
            __exit_loop_6:
            ;

            goto __exit__lfds711_stack_push_1_1;
            __exit__lfds711_stack_push_1_1:
            ;

        }
        ;
    }
    __cs_local_push_loop++;
    {
        ;
        __cs_local_push_td[__cs_local_push_loop].user_id = __cs_local_push_loop;
        __cs_local_push_td[__cs_local_push_loop].se.value = (void *) ((lfds711_pal_uint_t) (&__cs_local_push_td[__cs_local_push_loop]));
        {
            static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
            __cs_param_lfds711_stack_push_ss = &ss;
            static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
            __cs_param_lfds711_stack_push_se = &__cs_local_push_td[__cs_local_push_loop].se;
            static char unsigned __cs_local_lfds711_stack_push_result;
            static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
            __cs_local_lfds711_stack_push_backoff_iteration = 0;
            static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
            static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
            ;
            static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
            __cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_ss != 0);
            if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)
            {
                static char *__cs_local_lfds711_stack_push_c;
                __cs_local_lfds711_stack_push_c = 0;
                *__cs_local_lfds711_stack_push_c = 0;
            }

            ;
            ;
            ;
            static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
            __cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = !(__cs_param_lfds711_stack_push_se != 0);
            if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
                goto __exit_loop_10;
            }

            {
                __cs_mutex_lock(&lock);
                (*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                __cs_mutex_unlock(&lock);
                __cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_1;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_1 = 1;
                        goto __exit__swap_stack_top_1_6;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_1 = 0;
                        goto __exit__swap_stack_top_1_6;
                    }

                    __exit__swap_stack_top_1_6:
                    ;

                }
                __cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_11;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_11;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_11;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_11:
                        ;

                        __exit__exponential_backoff_1_6:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)
                {
                    goto __exit_loop_10;
                }

            }
            if (!(__cs_local_lfds711_stack_push_result == 0))
            {
                goto __exit_loop_10;
            }

            {
                __cs_mutex_lock(&lock);
                (*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                __cs_mutex_unlock(&lock);
                __cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_1;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_1 = 1;
                        goto __exit__swap_stack_top_1_7;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_1 = 0;
                        goto __exit__swap_stack_top_1_7;
                    }

                    __exit__swap_stack_top_1_7:
                    ;

                }
                __cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_12;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_12;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_12;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_12:
                        ;

                        __exit__exponential_backoff_1_7:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)
                {
                    goto __exit_loop_10;
                }

            }
            if (!(__cs_local_lfds711_stack_push_result == 0))
            {
                goto __exit_loop_10;
            }

            {
                __cs_mutex_lock(&lock);
                (*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                __cs_mutex_unlock(&lock);
                __cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_1;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_1 = 1;
                        goto __exit__swap_stack_top_1_8;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_1 = 0;
                        goto __exit__swap_stack_top_1_8;
                    }

                    __exit__swap_stack_top_1_8:
                    ;

                }
                __cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_13;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_13;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_13;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_13:
                        ;

                        __exit__exponential_backoff_1_8:
                        ;

                    }
                }

                __cs_local_lfds711_stack_push_i++;
                ;
                static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)
                {
                    goto __exit_loop_10;
                }

            }
            __CSEQ_assume(!(__cs_local_lfds711_stack_push_result == 0));
            __exit_loop_10:
            ;

            goto __exit__lfds711_stack_push_1_2;
            __exit__lfds711_stack_push_1_2:
            ;

        }
        ;
    }
    __cs_local_push_loop++;
    __CSEQ_assume(!(__cs_local_push_loop < 3));
    __exit_loop_1:
    ;

    __exit_push:
    ;

    __cs_exit(0);
}


void *__cs_param_push___cs_unused
void *
function 'pop' ----------------------------------:
void *pop(void *__cs_param_pop___cs_unused)
{
    static int long long unsigned __cs_local_pop_loop;
    static struct lfds711_stack_element *__cs_local_pop_se;
    static struct test_data *__cs_local_pop_temp_td;
    static int __cs_local_pop_res;
    static int __cs_local_pop_count;
    __cs_local_pop_count = 0;
    __cs_local_pop_loop = 0;
    {
        __cs_local_pop_temp_td = 0;
        ;
        static int __cs_retval__lfds711_stack_pop_1;
        {
            static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
            __cs_param_lfds711_stack_pop_ss = &ss;
            static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
            __cs_param_lfds711_stack_pop_se = &__cs_local_pop_se;
            static char unsigned __cs_local_lfds711_stack_pop_result;
            static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
            __cs_local_lfds711_stack_pop_backoff_iteration = 0;
            static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
            static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
            ;
            static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
            __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_ss != 0);
            if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)
            {
                static char *__cs_local_lfds711_stack_pop_c;
                __cs_local_lfds711_stack_pop_c = 0;
                *__cs_local_lfds711_stack_pop_c = 0;
            }

            ;
            ;
            ;
            static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
            __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = !(__cs_param_lfds711_stack_pop_se != 0);
            if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
            {
                static char *__cs_local_lfds711_stack_pop_c;
                __cs_local_lfds711_stack_pop_c = 0;
                *__cs_local_lfds711_stack_pop_c = 0;
            }

            ;
            ;
            __cs_mutex_lock(&lock);
            __cs_mutex_unlock(&lock);
            __cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
            __cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
            static int __cs_local_lfds711_stack_pop_i;
            __cs_local_lfds711_stack_pop_i = 0;
            ;
            static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
            __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;
            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_1 = 0;
                    goto __exit__lfds711_stack_pop_1_0;
                }

                __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_2;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_2 = 1;
                        goto __exit__swap_stack_top_2_0;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_2 = 0;
                        goto __exit__swap_stack_top_2_0;
                    }

                    __exit__swap_stack_top_2_0:
                    ;

                }
                __cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_2;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_16;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_16;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_16;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_16:
                        ;

                        __exit__exponential_backoff_2_0:
                        ;

                    }
                    __cs_mutex_lock(&lock);
                    __cs_mutex_unlock(&lock);
                }

                __cs_local_lfds711_stack_pop_i++;
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 100;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
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
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_1 = 0;
                    goto __exit__lfds711_stack_pop_1_0;
                }

                __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_3;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_3 = 1;
                        goto __exit__swap_stack_top_3_0;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_3 = 0;
                        goto __exit__swap_stack_top_3_0;
                    }

                    __exit__swap_stack_top_3_0:
                    ;

                }
                __cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_18;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_18;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_18;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_18:
                        ;

                        __exit__exponential_backoff_3_0:
                        ;

                    }
                    __cs_mutex_lock(&lock);
                    __cs_mutex_unlock(&lock);
                }

                __cs_local_lfds711_stack_pop_i++;
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
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
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_1 = 0;
                    goto __exit__lfds711_stack_pop_1_0;
                }

                __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_3;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_3 = 1;
                        goto __exit__swap_stack_top_3_1;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_3 = 0;
                        goto __exit__swap_stack_top_3_1;
                    }

                    __exit__swap_stack_top_3_1:
                    ;

                }
                __cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_19;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_19;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_19;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_19:
                        ;

                        __exit__exponential_backoff_3_1:
                        ;

                    }
                    __cs_mutex_lock(&lock);
                    __cs_mutex_unlock(&lock);
                }

                __cs_local_lfds711_stack_pop_i++;
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
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
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_1 = 0;
                    goto __exit__lfds711_stack_pop_1_0;
                }

                __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_3;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_3 = 1;
                        goto __exit__swap_stack_top_3_2;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_3 = 0;
                        goto __exit__swap_stack_top_3_2;
                    }

                    __exit__swap_stack_top_3_2:
                    ;

                }
                __cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_20;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_20;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_20;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_20:
                        ;

                        __exit__exponential_backoff_3_2:
                        ;

                    }
                    __cs_mutex_lock(&lock);
                    __cs_mutex_unlock(&lock);
                }

                __cs_local_lfds711_stack_pop_i++;
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                {
                    goto __exit_loop_17;
                }

            }
            __CSEQ_assume(!(__cs_local_lfds711_stack_pop_result == 0));
            __exit_loop_17:
            ;

            *__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
            __cs_retval__lfds711_stack_pop_1 = 1;
            goto __exit__lfds711_stack_pop_1_0;
            __exit__lfds711_stack_pop_1_0:
            ;

        }
        __cs_local_pop_res = __cs_retval__lfds711_stack_pop_1;
        ;
        ;
        static _Bool __cs_local_pop___cs_tmp_if_cond_21;
        __cs_local_pop___cs_tmp_if_cond_21 = __cs_local_pop_res == 0;
        if (__cs_local_pop___cs_tmp_if_cond_21)
        {
            goto __continue_0_loop_14;
        }

        __cs_local_pop_temp_td = (*__cs_local_pop_se).value;
        __cs_local_pop_count++;
        printf("%llu\n", (*__cs_local_pop_temp_td).user_id);
    }
    __cs_local_pop_loop++;
    __continue_0_loop_14:
    ;

    {
        __cs_local_pop_temp_td = 0;
        ;
        static int __cs_retval__lfds711_stack_pop_1;
        {
            static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
            __cs_param_lfds711_stack_pop_ss = &ss;
            static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
            __cs_param_lfds711_stack_pop_se = &__cs_local_pop_se;
            static char unsigned __cs_local_lfds711_stack_pop_result;
            static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
            __cs_local_lfds711_stack_pop_backoff_iteration = 0;
            static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
            static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
            ;
            static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
            __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_ss != 0);
            if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)
            {
                static char *__cs_local_lfds711_stack_pop_c;
                __cs_local_lfds711_stack_pop_c = 0;
                *__cs_local_lfds711_stack_pop_c = 0;
            }

            ;
            ;
            ;
            static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
            __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = !(__cs_param_lfds711_stack_pop_se != 0);
            if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
            {
                static char *__cs_local_lfds711_stack_pop_c;
                __cs_local_lfds711_stack_pop_c = 0;
                *__cs_local_lfds711_stack_pop_c = 0;
            }

            ;
            ;
            __cs_mutex_lock(&lock);
            __cs_mutex_unlock(&lock);
            __cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
            __cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
            static int __cs_local_lfds711_stack_pop_i;
            __cs_local_lfds711_stack_pop_i = 0;
            ;
            static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
            __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;
            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_1 = 0;
                    goto __exit__lfds711_stack_pop_1_1;
                }

                __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_2;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_2 = 1;
                        goto __exit__swap_stack_top_2_1;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_2 = 0;
                        goto __exit__swap_stack_top_2_1;
                    }

                    __exit__swap_stack_top_2_1:
                    ;

                }
                __cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_2;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_22;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_22;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_22;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_22:
                        ;

                        __exit__exponential_backoff_2_1:
                        ;

                    }
                    __cs_mutex_lock(&lock);
                    __cs_mutex_unlock(&lock);
                }

                __cs_local_lfds711_stack_pop_i++;
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 100;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
                    goto __exit_loop_21;
                }

            }
            __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
            __CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
            __exit_loop_21:
            ;

            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_23;
            }

            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_1 = 0;
                    goto __exit__lfds711_stack_pop_1_1;
                }

                __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_3;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_3 = 1;
                        goto __exit__swap_stack_top_3_3;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_3 = 0;
                        goto __exit__swap_stack_top_3_3;
                    }

                    __exit__swap_stack_top_3_3:
                    ;

                }
                __cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_24;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_24;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_24;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_24:
                        ;

                        __exit__exponential_backoff_3_3:
                        ;

                    }
                    __cs_mutex_lock(&lock);
                    __cs_mutex_unlock(&lock);
                }

                __cs_local_lfds711_stack_pop_i++;
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                {
                    goto __exit_loop_23;
                }

            }
            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_23;
            }

            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_1 = 0;
                    goto __exit__lfds711_stack_pop_1_1;
                }

                __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_3;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_3 = 1;
                        goto __exit__swap_stack_top_3_4;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_3 = 0;
                        goto __exit__swap_stack_top_3_4;
                    }

                    __exit__swap_stack_top_3_4:
                    ;

                }
                __cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_25;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_25;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_25;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_25:
                        ;

                        __exit__exponential_backoff_3_4:
                        ;

                    }
                    __cs_mutex_lock(&lock);
                    __cs_mutex_unlock(&lock);
                }

                __cs_local_lfds711_stack_pop_i++;
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                {
                    goto __exit_loop_23;
                }

            }
            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_23;
            }

            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_1 = 0;
                    goto __exit__lfds711_stack_pop_1_1;
                }

                __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_3;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_3 = 1;
                        goto __exit__swap_stack_top_3_5;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_3 = 0;
                        goto __exit__swap_stack_top_3_5;
                    }

                    __exit__swap_stack_top_3_5:
                    ;

                }
                __cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_26;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_26;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_26;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_26:
                        ;

                        __exit__exponential_backoff_3_5:
                        ;

                    }
                    __cs_mutex_lock(&lock);
                    __cs_mutex_unlock(&lock);
                }

                __cs_local_lfds711_stack_pop_i++;
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                {
                    goto __exit_loop_23;
                }

            }
            __CSEQ_assume(!(__cs_local_lfds711_stack_pop_result == 0));
            __exit_loop_23:
            ;

            *__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
            __cs_retval__lfds711_stack_pop_1 = 1;
            goto __exit__lfds711_stack_pop_1_1;
            __exit__lfds711_stack_pop_1_1:
            ;

        }
        __cs_local_pop_res = __cs_retval__lfds711_stack_pop_1;
        ;
        ;
        static _Bool __cs_local_pop___cs_tmp_if_cond_21;
        __cs_local_pop___cs_tmp_if_cond_21 = __cs_local_pop_res == 0;
        if (__cs_local_pop___cs_tmp_if_cond_21)
        {
            goto __continue_1_loop_14;
        }

        __cs_local_pop_temp_td = (*__cs_local_pop_se).value;
        __cs_local_pop_count++;
        printf("%llu\n", (*__cs_local_pop_temp_td).user_id);
    }
    __cs_local_pop_loop++;
    __continue_1_loop_14:
    ;

    {
        __cs_local_pop_temp_td = 0;
        ;
        static int __cs_retval__lfds711_stack_pop_1;
        {
            static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
            __cs_param_lfds711_stack_pop_ss = &ss;
            static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
            __cs_param_lfds711_stack_pop_se = &__cs_local_pop_se;
            static char unsigned __cs_local_lfds711_stack_pop_result;
            static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
            __cs_local_lfds711_stack_pop_backoff_iteration = 0;
            static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
            static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
            ;
            static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
            __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_ss != 0);
            if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)
            {
                static char *__cs_local_lfds711_stack_pop_c;
                __cs_local_lfds711_stack_pop_c = 0;
                *__cs_local_lfds711_stack_pop_c = 0;
            }

            ;
            ;
            ;
            static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
            __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = !(__cs_param_lfds711_stack_pop_se != 0);
            if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
            {
                static char *__cs_local_lfds711_stack_pop_c;
                __cs_local_lfds711_stack_pop_c = 0;
                *__cs_local_lfds711_stack_pop_c = 0;
            }

            ;
            ;
            __cs_mutex_lock(&lock);
            __cs_mutex_unlock(&lock);
            __cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
            __cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
            static int __cs_local_lfds711_stack_pop_i;
            __cs_local_lfds711_stack_pop_i = 0;
            ;
            static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
            __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;
            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_1 = 0;
                    goto __exit__lfds711_stack_pop_1_2;
                }

                __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_2;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_2 = 1;
                        goto __exit__swap_stack_top_2_2;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_2 = 0;
                        goto __exit__swap_stack_top_2_2;
                    }

                    __exit__swap_stack_top_2_2:
                    ;

                }
                __cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_2;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_28;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_28;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_28;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_28:
                        ;

                        __exit__exponential_backoff_2_2:
                        ;

                    }
                    __cs_mutex_lock(&lock);
                    __cs_mutex_unlock(&lock);
                }

                __cs_local_lfds711_stack_pop_i++;
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 100;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
                    goto __exit_loop_27;
                }

            }
            __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
            __CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
            __exit_loop_27:
            ;

            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_29;
            }

            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_1 = 0;
                    goto __exit__lfds711_stack_pop_1_2;
                }

                __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_3;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_3 = 1;
                        goto __exit__swap_stack_top_3_6;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_3 = 0;
                        goto __exit__swap_stack_top_3_6;
                    }

                    __exit__swap_stack_top_3_6:
                    ;

                }
                __cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_30;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_30;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_30;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_30:
                        ;

                        __exit__exponential_backoff_3_6:
                        ;

                    }
                    __cs_mutex_lock(&lock);
                    __cs_mutex_unlock(&lock);
                }

                __cs_local_lfds711_stack_pop_i++;
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                {
                    goto __exit_loop_29;
                }

            }
            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_29;
            }

            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_1 = 0;
                    goto __exit__lfds711_stack_pop_1_2;
                }

                __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_3;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_3 = 1;
                        goto __exit__swap_stack_top_3_7;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_3 = 0;
                        goto __exit__swap_stack_top_3_7;
                    }

                    __exit__swap_stack_top_3_7:
                    ;

                }
                __cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_31;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_31;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_31;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_31:
                        ;

                        __exit__exponential_backoff_3_7:
                        ;

                    }
                    __cs_mutex_lock(&lock);
                    __cs_mutex_unlock(&lock);
                }

                __cs_local_lfds711_stack_pop_i++;
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                {
                    goto __exit_loop_29;
                }

            }
            if (!(__cs_local_lfds711_stack_pop_result == 0))
            {
                goto __exit_loop_29;
            }

            {
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
                    *__cs_param_lfds711_stack_pop_se = 0;
                    __cs_retval__lfds711_stack_pop_1 = 0;
                    goto __exit__lfds711_stack_pop_1_2;
                }

                __cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                __cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                __cs_mutex_lock(&lock);
                static int __cs_retval__swap_stack_top_3;
                {
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                    __cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                    static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                    __cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                    static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                    __cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                    ;
                    static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                    __cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                    if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)
                    {
                        *__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                        __cs_retval__swap_stack_top_3 = 1;
                        goto __exit__swap_stack_top_3_8;
                    }
                    else
                    {
                        *__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                        __cs_retval__swap_stack_top_3 = 0;
                        goto __exit__swap_stack_top_3_8;
                    }

                    __exit__swap_stack_top_3_8:
                    ;

                }
                __cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                __cs_mutex_unlock(&lock);
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
                    {
                        static int __cs_local_exponential_backoff_loop;
                        __cs_local_exponential_backoff_loop = 0;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_32;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_32;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        if (!(__cs_local_exponential_backoff_loop < 10))
                        {
                            goto __exit_loop_32;
                        }

                        {
                            ;
                        }
                        __cs_local_exponential_backoff_loop;
                        __CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_32:
                        ;

                        __exit__exponential_backoff_3_8:
                        ;

                    }
                    __cs_mutex_lock(&lock);
                    __cs_mutex_unlock(&lock);
                }

                __cs_local_lfds711_stack_pop_i++;
                ;
                static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                {
                    goto __exit_loop_29;
                }

            }
            __CSEQ_assume(!(__cs_local_lfds711_stack_pop_result == 0));
            __exit_loop_29:
            ;

            *__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
            __cs_retval__lfds711_stack_pop_1 = 1;
            goto __exit__lfds711_stack_pop_1_2;
            __exit__lfds711_stack_pop_1_2:
            ;

        }
        __cs_local_pop_res = __cs_retval__lfds711_stack_pop_1;
        ;
        ;
        static _Bool __cs_local_pop___cs_tmp_if_cond_21;
        __cs_local_pop___cs_tmp_if_cond_21 = __cs_local_pop_res == 0;
        if (__cs_local_pop___cs_tmp_if_cond_21)
        {
            goto __continue_2_loop_14;
        }

        __cs_local_pop_temp_td = (*__cs_local_pop_se).value;
        __cs_local_pop_count++;
        printf("%llu\n", (*__cs_local_pop_temp_td).user_id);
    }
    __cs_local_pop_loop++;
    __continue_2_loop_14:
    ;

    __CSEQ_assume(!(__cs_local_pop_loop < 3));
    __exit_loop_14:
    ;

    __CSEQ_assert(__cs_local_pop_count == 3);
    __exit_pop:
    ;

    __cs_exit(0);
}


void *__cs_param_pop___cs_unused
void *
function 'main' ----------------------------------:
int main()
{
    {
        static struct lfds711_stack_state *__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss;
        __cs_param_lfds711_stack_init_valid_on_current_logical_core_ss = &ss;
        static void *__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
        __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state = 0;
        __cs_mutex_init(&lock, 0);
        ;
        static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4;
        __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4 = !(__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss != 0);
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
        __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5 = !((((lfds711_pal_uint_t) (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top) % 128) == 0);
        if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5)
        {
            static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
            __cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
            *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
        }

        ;
        ;
        ;
        static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6;
        __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state)) % 128) == 0);
        if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6)
        {
            static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
            __cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
            *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
        }

        ;
        ;
        __cs_mutex_lock(&lock);
        (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[0] = 0;
        (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[1] = 0;
        (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state = __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
        {
            static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
            __cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).pop_backoff;
            ;
            static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
            __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
            if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)
            {
                static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                __cs_local_lfds711_misc_internal_backoff_init_c = 0;
                *__cs_local_lfds711_misc_internal_backoff_init_c = 0;
            }

            ;
            ;
            ;
            static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3;
            __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
            if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3)
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
            static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
            __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
            if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)
            {
                static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                __cs_local_lfds711_misc_internal_backoff_init_c = 0;
                *__cs_local_lfds711_misc_internal_backoff_init_c = 0;
            }

            ;
            ;
            ;
            static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3;
            __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
            if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3)
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
                    static unsigned long int __cs_local___atomic_exchange_n_old;
                    __cs_local___atomic_exchange_n_old = *__cs_param___atomic_exchange_n_previous;
                    *__cs_param___atomic_exchange_n_previous = __cs_param___atomic_exchange_n_new;
                    __cs_retval____atomic_exchange_n_1 = __cs_local___atomic_exchange_n_old;
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
        __cs_mutex_unlock(&lock);
        goto __exit__lfds711_stack_init_valid_on_current_logical_core_1;
        __exit__lfds711_stack_init_valid_on_current_logical_core_1:
        ;

    }
    static __cs_t __cs_local_main_t1;
    ;
    static __cs_t __cs_local_main_t2;
    ;
    __cs_mutex_init(&lock, 0);
    __cs_create(&__cs_local_main_t1, 0, push, 0);
    __cs_create(&__cs_local_main_t2, 0, pop, 0);
    __cs_join(__cs_local_main_t1, 0);
    __cs_join(__cs_local_main_t2, 0);
    goto __exit_main;
    __exit_main:
    ;

    __cs_exit(0);
}



int
Last statement, by function:
function: push   stmt:     __cs_exit(0);

function: pop   stmt:     __cs_exit(0);

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
   (413, 'lock')  
   (414, 'ss')  
   (415, 'lock')  
   (416, 'se')  
   (417, 'user_id')  
   (418, 'push')  
   (419, '__cs_param_push___cs_unused')  
   (420, '__cs_local_push_td')  
   (421, '__cs_local_push_loop')  
   (422, '__cs_param_lfds711_stack_push_ss')  
   (423, '__cs_param_lfds711_stack_push_se')  
   (424, '__cs_local_lfds711_stack_push_result')  
   (425, '__cs_local_lfds711_stack_push_backoff_iteration')  
   (426, '__cs_local_lfds711_stack_push_new_top')  
   (427, '__cs_local_lfds711_stack_push_original_top')  
   (428, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15')  
   (429, '__cs_local_lfds711_stack_push_c')  
   (430, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (431, '__cs_local_lfds711_stack_push_c')  
   (432, '__cs_local_lfds711_stack_push_i')  
   (433, '__cs_retval__swap_stack_top_1')  
   (434, '__cs_param_swap_stack_top_top')  
   (435, '__cs_param_swap_stack_top_oldtop')  
   (436, '__cs_param_swap_stack_top_newtop')  
   (437, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (438, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (439, '__cs_local_exponential_backoff_loop')  
   (440, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_18')  
   (441, '__cs_retval__swap_stack_top_1')  
   (442, '__cs_param_swap_stack_top_top')  
   (443, '__cs_param_swap_stack_top_oldtop')  
   (444, '__cs_param_swap_stack_top_newtop')  
   (445, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (446, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (447, '__cs_local_exponential_backoff_loop')  
   (448, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_18')  
   (449, '__cs_retval__swap_stack_top_1')  
   (450, '__cs_param_swap_stack_top_top')  
   (451, '__cs_param_swap_stack_top_oldtop')  
   (452, '__cs_param_swap_stack_top_newtop')  
   (453, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (454, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (455, '__cs_local_exponential_backoff_loop')  
   (456, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_18')  
   (457, '__cs_param_lfds711_stack_push_ss')  
   (458, '__cs_param_lfds711_stack_push_se')  
   (459, '__cs_local_lfds711_stack_push_result')  
   (460, '__cs_local_lfds711_stack_push_backoff_iteration')  
   (461, '__cs_local_lfds711_stack_push_new_top')  
   (462, '__cs_local_lfds711_stack_push_original_top')  
   (463, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15')  
   (464, '__cs_local_lfds711_stack_push_c')  
   (465, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (466, '__cs_local_lfds711_stack_push_c')  
   (467, '__cs_local_lfds711_stack_push_i')  
   (468, '__cs_retval__swap_stack_top_1')  
   (469, '__cs_param_swap_stack_top_top')  
   (470, '__cs_param_swap_stack_top_oldtop')  
   (471, '__cs_param_swap_stack_top_newtop')  
   (472, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (473, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (474, '__cs_local_exponential_backoff_loop')  
   (475, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_18')  
   (476, '__cs_retval__swap_stack_top_1')  
   (477, '__cs_param_swap_stack_top_top')  
   (478, '__cs_param_swap_stack_top_oldtop')  
   (479, '__cs_param_swap_stack_top_newtop')  
   (480, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (481, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (482, '__cs_local_exponential_backoff_loop')  
   (483, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_18')  
   (484, '__cs_retval__swap_stack_top_1')  
   (485, '__cs_param_swap_stack_top_top')  
   (486, '__cs_param_swap_stack_top_oldtop')  
   (487, '__cs_param_swap_stack_top_newtop')  
   (488, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (489, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (490, '__cs_local_exponential_backoff_loop')  
   (491, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_18')  
   (492, '__cs_param_lfds711_stack_push_ss')  
   (493, '__cs_param_lfds711_stack_push_se')  
   (494, '__cs_local_lfds711_stack_push_result')  
   (495, '__cs_local_lfds711_stack_push_backoff_iteration')  
   (496, '__cs_local_lfds711_stack_push_new_top')  
   (497, '__cs_local_lfds711_stack_push_original_top')  
   (498, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15')  
   (499, '__cs_local_lfds711_stack_push_c')  
   (500, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16')  
   (501, '__cs_local_lfds711_stack_push_c')  
   (502, '__cs_local_lfds711_stack_push_i')  
   (503, '__cs_retval__swap_stack_top_1')  
   (504, '__cs_param_swap_stack_top_top')  
   (505, '__cs_param_swap_stack_top_oldtop')  
   (506, '__cs_param_swap_stack_top_newtop')  
   (507, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (508, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (509, '__cs_local_exponential_backoff_loop')  
   (510, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_18')  
   (511, '__cs_retval__swap_stack_top_1')  
   (512, '__cs_param_swap_stack_top_top')  
   (513, '__cs_param_swap_stack_top_oldtop')  
   (514, '__cs_param_swap_stack_top_newtop')  
   (515, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (516, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (517, '__cs_local_exponential_backoff_loop')  
   (518, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_18')  
   (519, '__cs_retval__swap_stack_top_1')  
   (520, '__cs_param_swap_stack_top_top')  
   (521, '__cs_param_swap_stack_top_oldtop')  
   (522, '__cs_param_swap_stack_top_newtop')  
   (523, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (524, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17')  
   (525, '__cs_local_exponential_backoff_loop')  
   (526, '__cs_local_lfds711_stack_push___cs_tmp_if_cond_18')  
   (527, 'pop')  
   (528, '__cs_param_pop___cs_unused')  
   (529, '__cs_local_pop_loop')  
   (530, '__cs_local_pop_se')  
   (531, '__cs_local_pop_temp_td')  
   (532, '__cs_local_pop_res')  
   (533, '__cs_local_pop_count')  
   (534, '__cs_retval__lfds711_stack_pop_1')  
   (535, '__cs_param_lfds711_stack_pop_ss')  
   (536, '__cs_param_lfds711_stack_pop_se')  
   (537, '__cs_local_lfds711_stack_pop_result')  
   (538, '__cs_local_lfds711_stack_pop_backoff_iteration')  
   (539, '__cs_local_lfds711_stack_pop_new_top')  
   (540, '__cs_local_lfds711_stack_pop_original_top')  
   (541, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7')  
   (542, '__cs_local_lfds711_stack_pop_c')  
   (543, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8')  
   (544, '__cs_local_lfds711_stack_pop_c')  
   (545, '__cs_local_lfds711_stack_pop_i')  
   (546, '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1')  
   (547, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9')  
   (548, '__cs_retval__swap_stack_top_2')  
   (549, '__cs_param_swap_stack_top_top')  
   (550, '__cs_param_swap_stack_top_oldtop')  
   (551, '__cs_param_swap_stack_top_newtop')  
   (552, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (553, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10')  
   (554, '__cs_local_exponential_backoff_loop')  
   (555, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (556, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (557, '__cs_retval__swap_stack_top_3')  
   (558, '__cs_param_swap_stack_top_top')  
   (559, '__cs_param_swap_stack_top_oldtop')  
   (560, '__cs_param_swap_stack_top_newtop')  
   (561, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (562, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (563, '__cs_local_exponential_backoff_loop')  
   (564, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14')  
   (565, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (566, '__cs_retval__swap_stack_top_3')  
   (567, '__cs_param_swap_stack_top_top')  
   (568, '__cs_param_swap_stack_top_oldtop')  
   (569, '__cs_param_swap_stack_top_newtop')  
   (570, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (571, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (572, '__cs_local_exponential_backoff_loop')  
   (573, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14')  
   (574, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (575, '__cs_retval__swap_stack_top_3')  
   (576, '__cs_param_swap_stack_top_top')  
   (577, '__cs_param_swap_stack_top_oldtop')  
   (578, '__cs_param_swap_stack_top_newtop')  
   (579, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (580, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (581, '__cs_local_exponential_backoff_loop')  
   (582, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14')  
   (583, '__cs_local_pop___cs_tmp_if_cond_21')  
   (584, '__cs_retval__lfds711_stack_pop_1')  
   (585, '__cs_param_lfds711_stack_pop_ss')  
   (586, '__cs_param_lfds711_stack_pop_se')  
   (587, '__cs_local_lfds711_stack_pop_result')  
   (588, '__cs_local_lfds711_stack_pop_backoff_iteration')  
   (589, '__cs_local_lfds711_stack_pop_new_top')  
   (590, '__cs_local_lfds711_stack_pop_original_top')  
   (591, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7')  
   (592, '__cs_local_lfds711_stack_pop_c')  
   (593, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8')  
   (594, '__cs_local_lfds711_stack_pop_c')  
   (595, '__cs_local_lfds711_stack_pop_i')  
   (596, '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1')  
   (597, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9')  
   (598, '__cs_retval__swap_stack_top_2')  
   (599, '__cs_param_swap_stack_top_top')  
   (600, '__cs_param_swap_stack_top_oldtop')  
   (601, '__cs_param_swap_stack_top_newtop')  
   (602, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (603, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10')  
   (604, '__cs_local_exponential_backoff_loop')  
   (605, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (606, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (607, '__cs_retval__swap_stack_top_3')  
   (608, '__cs_param_swap_stack_top_top')  
   (609, '__cs_param_swap_stack_top_oldtop')  
   (610, '__cs_param_swap_stack_top_newtop')  
   (611, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (612, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (613, '__cs_local_exponential_backoff_loop')  
   (614, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14')  
   (615, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (616, '__cs_retval__swap_stack_top_3')  
   (617, '__cs_param_swap_stack_top_top')  
   (618, '__cs_param_swap_stack_top_oldtop')  
   (619, '__cs_param_swap_stack_top_newtop')  
   (620, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (621, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (622, '__cs_local_exponential_backoff_loop')  
   (623, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14')  
   (624, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (625, '__cs_retval__swap_stack_top_3')  
   (626, '__cs_param_swap_stack_top_top')  
   (627, '__cs_param_swap_stack_top_oldtop')  
   (628, '__cs_param_swap_stack_top_newtop')  
   (629, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (630, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (631, '__cs_local_exponential_backoff_loop')  
   (632, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14')  
   (633, '__cs_local_pop___cs_tmp_if_cond_21')  
   (634, '__cs_retval__lfds711_stack_pop_1')  
   (635, '__cs_param_lfds711_stack_pop_ss')  
   (636, '__cs_param_lfds711_stack_pop_se')  
   (637, '__cs_local_lfds711_stack_pop_result')  
   (638, '__cs_local_lfds711_stack_pop_backoff_iteration')  
   (639, '__cs_local_lfds711_stack_pop_new_top')  
   (640, '__cs_local_lfds711_stack_pop_original_top')  
   (641, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7')  
   (642, '__cs_local_lfds711_stack_pop_c')  
   (643, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8')  
   (644, '__cs_local_lfds711_stack_pop_c')  
   (645, '__cs_local_lfds711_stack_pop_i')  
   (646, '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1')  
   (647, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9')  
   (648, '__cs_retval__swap_stack_top_2')  
   (649, '__cs_param_swap_stack_top_top')  
   (650, '__cs_param_swap_stack_top_oldtop')  
   (651, '__cs_param_swap_stack_top_newtop')  
   (652, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (653, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10')  
   (654, '__cs_local_exponential_backoff_loop')  
   (655, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11')  
   (656, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (657, '__cs_retval__swap_stack_top_3')  
   (658, '__cs_param_swap_stack_top_top')  
   (659, '__cs_param_swap_stack_top_oldtop')  
   (660, '__cs_param_swap_stack_top_newtop')  
   (661, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (662, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (663, '__cs_local_exponential_backoff_loop')  
   (664, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14')  
   (665, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (666, '__cs_retval__swap_stack_top_3')  
   (667, '__cs_param_swap_stack_top_top')  
   (668, '__cs_param_swap_stack_top_oldtop')  
   (669, '__cs_param_swap_stack_top_newtop')  
   (670, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (671, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (672, '__cs_local_exponential_backoff_loop')  
   (673, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14')  
   (674, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12')  
   (675, '__cs_retval__swap_stack_top_3')  
   (676, '__cs_param_swap_stack_top_top')  
   (677, '__cs_param_swap_stack_top_oldtop')  
   (678, '__cs_param_swap_stack_top_newtop')  
   (679, '__cs_local_swap_stack_top___cs_tmp_if_cond_1')  
   (680, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13')  
   (681, '__cs_local_exponential_backoff_loop')  
   (682, '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14')  
   (683, '__cs_local_pop___cs_tmp_if_cond_21')  
   (684, 'main')  
   (685, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss')  
   (686, '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state')  
   (687, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4')  
   (688, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (689, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5')  
   (690, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (691, '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6')  
   (692, '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c')  
   (693, '__cs_param_lfds711_misc_internal_backoff_init_bs')  
   (694, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2')  
   (695, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (696, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3')  
   (697, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (698, '__cs_param_lfds711_misc_internal_backoff_init_bs')  
   (699, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2')  
   (700, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (701, '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3')  
   (702, '__cs_local_lfds711_misc_internal_backoff_init_c')  
   (703, '__cs_local_lfds711_misc_force_store_destination')  
   (704, '__cs_retval____atomic_exchange_n_1')  
   (705, '__cs_param___atomic_exchange_n_previous')  
   (706, '__cs_param___atomic_exchange_n_new')  
   (707, '__cs_param___atomic_exchange_n_memorder')  
   (708, '__cs_local___atomic_exchange_n_old')  
   (709, '__cs_local_main_t1')  
   (710, '__cs_local_main_t2')  
