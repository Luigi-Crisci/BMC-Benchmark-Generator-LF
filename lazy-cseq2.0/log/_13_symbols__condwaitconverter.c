list of functions:
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
      id172  'lock'  
         type '__cs_mutex_t'  kind 'g'  arity '0'  
         size '[]'  
         ref '[619, 621, 623, 651, 705, 707, 709, 737, 791, 793, 795, 823, 929, 931, 933, 961, 1015, 1017, 1019, 1047, 1101, 1103, 1105, 1133, 1239, 1241, 1243, 1271, 1325, 1327, 1329, 1357, 1411, 1413, 1415, 1443, 1554, 1555, 1575, 1603, 1642, 1643, 1675, 1703, 1742, 1743, 1771, 1799, 1838, 1839, 1867, 1895, 1934, 1935, 2008, 2009, 2029, 2057, 2096, 2097, 2129, 2157, 2196, 2197, 2225, 2253, 2292, 2293, 2321, 2349, 2388, 2389, 2462, 2463, 2483, 2511, 2550, 2551, 2583, 2611, 2650, 2651, 2679, 2707, 2746, 2747, 2775, 2803, 2842, 2843, 2895, 2929, 3028, 3037]'  
         deref '[]'  
         occurs '[619, 621, 623, 651, 705, 707, 709, 737, 791, 793, 795, 823, 929, 931, 933, 961, 1015, 1017, 1019, 1047, 1101, 1103, 1105, 1133, 1239, 1241, 1243, 1271, 1325, 1327, 1329, 1357, 1411, 1413, 1415, 1443, 1554, 1555, 1575, 1603, 1642, 1643, 1675, 1703, 1742, 1743, 1771, 1799, 1838, 1839, 1867, 1895, 1934, 1935, 2008, 2009, 2029, 2057, 2096, 2097, 2129, 2157, 2196, 2197, 2225, 2253, 2292, 2293, 2321, 2349, 2388, 2389, 2462, 2463, 2483, 2511, 2550, 2551, 2583, 2611, 2650, 2651, 2679, 2707, 2746, 2747, 2775, 2803, 2842, 2843, 2895, 2929, 3028, 3037]'  
      id173  'ss'  
         type 'struct lfds711_stack_state'  kind 'g'  arity '0'  
         size '[]'  
         ref '[578, 888, 1198, 1524, 1978, 2432, 2892]'  
         deref '[]'  
         occurs '[578, 888, 1198, 1524, 1978, 2432, 2892]'  
   push_0
      id176  '__cs_param_push___cs_unused'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[]'  
      id177  '__cs_local_push_td'  
         type 'static struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[575, 580, 885, 890, 1195, 1200]'  
         deref '[]'  
         occurs '[570, 574, 575, 575, 580, 884, 885, 885, 890, 1194, 1195, 1195, 1200]'  
      id178  '__cs_local_push_loop'  
         type 'static int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[571, 574, 574, 575, 575, 580, 881, 884, 884, 885, 885, 890, 1191, 1194, 1194, 1195, 1195, 1200, 1501, 1502]'  
      id179  '__cs_param_lfds711_stack_push_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[609, 610, 627, 713, 799, 919, 920, 937, 1023, 1109, 1229, 1230, 1247, 1333, 1419]'  
         occurs '[578, 588, 609, 610, 627, 713, 799, 888, 898, 919, 920, 937, 1023, 1109, 1198, 1208, 1229, 1230, 1247, 1333, 1419]'  
      id180  '__cs_param_lfds711_stack_push_se'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[620, 706, 792, 930, 1016, 1102, 1240, 1326, 1412]'  
         occurs '[580, 599, 608, 620, 706, 792, 890, 909, 918, 930, 1016, 1102, 1200, 1219, 1228, 1240, 1326, 1412]'  
      id181  '__cs_local_lfds711_stack_push_result'  
         type 'static char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[611, 614, 650, 654, 700, 736, 740, 786, 822, 826, 872, 921, 924, 960, 964, 1010, 1046, 1050, 1096, 1132, 1136, 1182, 1231, 1234, 1270, 1274, 1320, 1356, 1360, 1406, 1442, 1446, 1492]'  
      id182  '__cs_local_lfds711_stack_push_backoff_iteration'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[583, 893, 1203]'  
      id183  '__cs_local_lfds711_stack_push_new_top'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[631, 717, 803, 941, 1027, 1113, 1251, 1337, 1423]'  
         deref '[]'  
         occurs '[608, 622, 631, 708, 717, 794, 803, 918, 932, 941, 1018, 1027, 1104, 1113, 1228, 1242, 1251, 1328, 1337, 1414, 1423]'  
      id184  '__cs_local_lfds711_stack_push_original_top'  
         type 'static struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[629, 715, 801, 939, 1025, 1111, 1249, 1335, 1421]'  
         deref '[]'  
         occurs '[609, 610, 620, 622, 629, 706, 708, 715, 792, 794, 801, 919, 920, 930, 932, 939, 1016, 1018, 1025, 1102, 1104, 1111, 1229, 1230, 1240, 1242, 1249, 1326, 1328, 1335, 1412, 1414, 1421]'  
      id185  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_15'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[588, 589, 898, 899, 1208, 1209]'  
      id186  '__cs_local_lfds711_stack_push_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[593, 604, 903, 914, 1213, 1224]'  
         occurs '[592, 593, 603, 604, 902, 903, 913, 914, 1212, 1213, 1223, 1224]'  
      id187  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_16'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[599, 600, 909, 910, 1219, 1220]'  
      id188  '__cs_local_lfds711_stack_push_i'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[613, 691, 694, 777, 780, 863, 866, 923, 1001, 1004, 1087, 1090, 1173, 1176, 1233, 1311, 1314, 1397, 1400, 1483, 1486]'  
      id189  '__cs_retval__swap_stack_top_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[638, 644, 650, 724, 730, 736, 810, 816, 822, 948, 954, 960, 1034, 1040, 1046, 1120, 1126, 1132, 1258, 1264, 1270, 1344, 1350, 1356, 1430, 1436, 1442]'  
      id190  '__cs_param_swap_stack_top_top'  
         type 'static struct lfds711_stack_element * volatile *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[634, 637, 643, 720, 723, 729, 806, 809, 815, 944, 947, 953, 1030, 1033, 1039, 1116, 1119, 1125, 1254, 1257, 1263, 1340, 1343, 1349, 1426, 1429, 1435]'  
         occurs '[627, 634, 637, 643, 713, 720, 723, 729, 799, 806, 809, 815, 937, 944, 947, 953, 1023, 1030, 1033, 1039, 1109, 1116, 1119, 1125, 1247, 1254, 1257, 1263, 1333, 1340, 1343, 1349, 1419, 1426, 1429, 1435]'  
      id191  '__cs_param_swap_stack_top_oldtop'  
         type 'static struct lfds711_stack_element * volatile *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[634, 643, 720, 729, 806, 815, 944, 953, 1030, 1039, 1116, 1125, 1254, 1263, 1340, 1349, 1426, 1435]'  
         occurs '[629, 634, 643, 715, 720, 729, 801, 806, 815, 939, 944, 953, 1025, 1030, 1039, 1111, 1116, 1125, 1249, 1254, 1263, 1335, 1340, 1349, 1421, 1426, 1435]'  
      id192  '__cs_param_swap_stack_top_newtop'  
         type 'static struct lfds711_stack_element **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[637, 723, 809, 947, 1033, 1119, 1257, 1343, 1429]'  
         occurs '[631, 637, 717, 723, 803, 809, 941, 947, 1027, 1033, 1113, 1119, 1251, 1257, 1337, 1343, 1423, 1429]'  
      id193  '__cs_local_swap_stack_top___cs_tmp_if_cond_1'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[634, 635, 720, 721, 806, 807, 944, 945, 1030, 1031, 1116, 1117, 1254, 1255, 1340, 1341, 1426, 1427]'  
      id194  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_17'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[654, 655, 740, 741, 826, 827, 964, 965, 1050, 1051, 1136, 1137, 1274, 1275, 1360, 1361, 1446, 1447]'  
      id195  '__cs_local_exponential_backoff_loop'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[659, 660, 667, 668, 675, 676, 683, 684, 745, 746, 753, 754, 761, 762, 769, 770, 831, 832, 839, 840, 847, 848, 855, 856, 969, 970, 977, 978, 985, 986, 993, 994, 1055, 1056, 1063, 1064, 1071, 1072, 1079, 1080, 1141, 1142, 1149, 1150, 1157, 1158, 1165, 1166, 1279, 1280, 1287, 1288, 1295, 1296, 1303, 1304, 1365, 1366, 1373, 1374, 1381, 1382, 1389, 1390, 1451, 1452, 1459, 1460, 1467, 1468, 1475, 1476]'  
      id196  '__cs_local_lfds711_stack_push___cs_tmp_if_cond_18'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[694, 695, 780, 781, 866, 867, 1004, 1005, 1090, 1091, 1176, 1177, 1314, 1315, 1400, 1401, 1486, 1487]'  
   pop_0
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
         occurs '[1517, 1969, 2423, 2877, 2880]'  
      id199  '__cs_local_pop_se'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1526, 1980, 2434]'  
         deref '[1965, 2419, 2873]'  
         occurs '[1526, 1965, 1980, 2419, 2434, 2873]'  
      id200  '__cs_local_pop_temp_td'  
         type 'static struct test_data *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1967, 2421, 2875]'  
         occurs '[1519, 1965, 1967, 1973, 2419, 2421, 2427, 2873, 2875]'  
      id201  '__cs_local_pop_res'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1956, 1960, 2410, 2414, 2864, 2868]'  
      id202  '__cs_local_pop_count'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1516, 1966, 2420, 2874, 2883]'  
      id203  '__cs_retval__lfds711_stack_pop_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1570, 1670, 1766, 1862, 1951, 1956, 2024, 2124, 2220, 2316, 2405, 2410, 2478, 2578, 2674, 2770, 2859, 2864]'  
      id204  '__cs_param_lfds711_stack_pop_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1556, 1557, 1579, 1679, 1775, 1871, 2010, 2011, 2033, 2133, 2229, 2325, 2464, 2465, 2487, 2587, 2683, 2779]'  
         occurs '[1524, 1534, 1556, 1557, 1579, 1679, 1775, 1871, 1978, 1988, 2010, 2011, 2033, 2133, 2229, 2325, 2432, 2442, 2464, 2465, 2487, 2587, 2683, 2779]'  
      id205  '__cs_param_lfds711_stack_pop_se'  
         type 'static struct lfds711_stack_element **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1569, 1669, 1765, 1861, 1950, 2023, 2123, 2219, 2315, 2404, 2477, 2577, 2673, 2769, 2858]'  
         occurs '[1526, 1545, 1569, 1669, 1765, 1861, 1950, 1980, 1999, 2023, 2123, 2219, 2315, 2404, 2434, 2453, 2477, 2577, 2673, 2769, 2858]'  
      id206  '__cs_local_lfds711_stack_pop_result'  
         type 'static char unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1602, 1606, 1659, 1702, 1706, 1755, 1798, 1802, 1851, 1894, 1898, 1947, 2056, 2060, 2113, 2156, 2160, 2209, 2252, 2256, 2305, 2348, 2352, 2401, 2510, 2514, 2567, 2610, 2614, 2663, 2706, 2710, 2759, 2802, 2806, 2855]'  
      id207  '__cs_local_lfds711_stack_pop_backoff_iteration'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1529, 1983, 2437]'  
      id208  '__cs_local_lfds711_stack_pop_new_top'  
         type 'static struct lfds711_stack_element *'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1583, 1683, 1779, 1875, 2037, 2137, 2233, 2329, 2491, 2591, 2687, 2783]'  
         deref '[]'  
         occurs '[1573, 1574, 1583, 1673, 1674, 1683, 1769, 1770, 1779, 1865, 1866, 1875, 2027, 2028, 2037, 2127, 2128, 2137, 2223, 2224, 2233, 2319, 2320, 2329, 2481, 2482, 2491, 2581, 2582, 2591, 2677, 2678, 2687, 2773, 2774, 2783]'  
      id209  '__cs_local_lfds711_stack_pop_original_top'  
         type 'static struct lfds711_stack_element * volatile'  kind 'l'  arity '1'  
         size '[2]'  
         ref '[1581, 1681, 1777, 1873, 2035, 2135, 2231, 2327, 2489, 2589, 2685, 2781]'  
         deref '[1574, 1674, 1770, 1866, 2028, 2128, 2224, 2320, 2482, 2582, 2678, 2774]'  
         occurs '[1556, 1557, 1566, 1573, 1574, 1581, 1666, 1673, 1674, 1681, 1762, 1769, 1770, 1777, 1858, 1865, 1866, 1873, 1950, 2010, 2011, 2020, 2027, 2028, 2035, 2120, 2127, 2128, 2135, 2216, 2223, 2224, 2231, 2312, 2319, 2320, 2327, 2404, 2464, 2465, 2474, 2481, 2482, 2489, 2574, 2581, 2582, 2589, 2670, 2677, 2678, 2685, 2766, 2773, 2774, 2781, 2858]'  
      id210  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1534, 1535, 1988, 1989, 2442, 2443]'  
      id211  '__cs_local_lfds711_stack_pop_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1539, 1550, 1993, 2004, 2447, 2458]'  
         occurs '[1538, 1539, 1549, 1550, 1992, 1993, 2003, 2004, 2446, 2447, 2457, 2458]'  
      id212  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1545, 1546, 1999, 2000, 2453, 2454]'  
      id213  '__cs_local_lfds711_stack_pop_i'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1559, 1645, 1648, 1745, 1748, 1841, 1844, 1937, 1940, 2013, 2099, 2102, 2199, 2202, 2295, 2298, 2391, 2394, 2467, 2553, 2556, 2653, 2656, 2749, 2752, 2845, 2848]'  
      id214  '__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1562, 1654, 1655, 2016, 2108, 2109, 2470, 2562, 2563]'  
      id215  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1566, 1567, 2020, 2021, 2474, 2475]'  
      id216  '__cs_retval__swap_stack_top_2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1590, 1596, 1602, 2044, 2050, 2056, 2498, 2504, 2510]'  
      id217  '__cs_param_swap_stack_top_top'  
         type 'static struct lfds711_stack_element * volatile *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1586, 1589, 1595, 1686, 1689, 1695, 1782, 1785, 1791, 1878, 1881, 1887, 2040, 2043, 2049, 2140, 2143, 2149, 2236, 2239, 2245, 2332, 2335, 2341, 2494, 2497, 2503, 2594, 2597, 2603, 2690, 2693, 2699, 2786, 2789, 2795]'  
         occurs '[1579, 1586, 1589, 1595, 1679, 1686, 1689, 1695, 1775, 1782, 1785, 1791, 1871, 1878, 1881, 1887, 2033, 2040, 2043, 2049, 2133, 2140, 2143, 2149, 2229, 2236, 2239, 2245, 2325, 2332, 2335, 2341, 2487, 2494, 2497, 2503, 2587, 2594, 2597, 2603, 2683, 2690, 2693, 2699, 2779, 2786, 2789, 2795]'  
      id218  '__cs_param_swap_stack_top_oldtop'  
         type 'static struct lfds711_stack_element * volatile *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1586, 1595, 1686, 1695, 1782, 1791, 1878, 1887, 2040, 2049, 2140, 2149, 2236, 2245, 2332, 2341, 2494, 2503, 2594, 2603, 2690, 2699, 2786, 2795]'  
         occurs '[1581, 1586, 1595, 1681, 1686, 1695, 1777, 1782, 1791, 1873, 1878, 1887, 2035, 2040, 2049, 2135, 2140, 2149, 2231, 2236, 2245, 2327, 2332, 2341, 2489, 2494, 2503, 2589, 2594, 2603, 2685, 2690, 2699, 2781, 2786, 2795]'  
      id219  '__cs_param_swap_stack_top_newtop'  
         type 'static struct lfds711_stack_element **'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1589, 1689, 1785, 1881, 2043, 2143, 2239, 2335, 2497, 2597, 2693, 2789]'  
         occurs '[1583, 1589, 1683, 1689, 1779, 1785, 1875, 1881, 2037, 2043, 2137, 2143, 2233, 2239, 2329, 2335, 2491, 2497, 2591, 2597, 2687, 2693, 2783, 2789]'  
      id220  '__cs_local_swap_stack_top___cs_tmp_if_cond_1'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1586, 1587, 1686, 1687, 1782, 1783, 1878, 1879, 2040, 2041, 2140, 2141, 2236, 2237, 2332, 2333, 2494, 2495, 2594, 2595, 2690, 2691, 2786, 2787]'  
      id221  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1606, 1607, 2060, 2061, 2514, 2515]'  
      id222  '__cs_local_exponential_backoff_loop'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1611, 1612, 1619, 1620, 1627, 1628, 1635, 1636, 1711, 1712, 1719, 1720, 1727, 1728, 1735, 1736, 1807, 1808, 1815, 1816, 1823, 1824, 1831, 1832, 1903, 1904, 1911, 1912, 1919, 1920, 1927, 1928, 2065, 2066, 2073, 2074, 2081, 2082, 2089, 2090, 2165, 2166, 2173, 2174, 2181, 2182, 2189, 2190, 2261, 2262, 2269, 2270, 2277, 2278, 2285, 2286, 2357, 2358, 2365, 2366, 2373, 2374, 2381, 2382, 2519, 2520, 2527, 2528, 2535, 2536, 2543, 2544, 2619, 2620, 2627, 2628, 2635, 2636, 2643, 2644, 2715, 2716, 2723, 2724, 2731, 2732, 2739, 2740, 2811, 2812, 2819, 2820, 2827, 2828, 2835, 2836]'  
      id223  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1648, 1649, 2102, 2103, 2556, 2557]'  
      id224  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1666, 1667, 1762, 1763, 1858, 1859, 2120, 2121, 2216, 2217, 2312, 2313, 2574, 2575, 2670, 2671, 2766, 2767]'  
      id225  '__cs_retval__swap_stack_top_3'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1690, 1696, 1702, 1786, 1792, 1798, 1882, 1888, 1894, 2144, 2150, 2156, 2240, 2246, 2252, 2336, 2342, 2348, 2598, 2604, 2610, 2694, 2700, 2706, 2790, 2796, 2802]'  
      id226  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1706, 1707, 1802, 1803, 1898, 1899, 2160, 2161, 2256, 2257, 2352, 2353, 2614, 2615, 2710, 2711, 2806, 2807]'  
      id227  '__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1748, 1749, 1844, 1845, 1940, 1941, 2202, 2203, 2298, 2299, 2394, 2395, 2656, 2657, 2752, 2753, 2848, 2849]'  
      id228  '__cs_local_pop___cs_tmp_if_cond_21'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1960, 1961, 2414, 2415, 2868, 2869]'  
   main
      id229  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss'  
         type 'static struct lfds711_stack_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[2909, 2920, 2930, 2931, 2932, 2935, 2969]'  
         occurs '[2892, 2898, 2909, 2920, 2930, 2931, 2932, 2935, 2969]'  
      id230  '__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state'  
         type 'static void *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2894, 2932]'  
      id231  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2898, 2899]'  
      id232  '__cs_local_lfds711_stack_init_valid_on_current_logical_core_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[2903, 2914, 2925]'  
         occurs '[2902, 2903, 2913, 2914, 2924, 2925]'  
      id233  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2909, 2910]'  
      id234  '__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2920, 2921]'  
      id235  '__cs_param_lfds711_misc_internal_backoff_init_bs'  
         type 'static struct lfds711_misc_backoff_state *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[2949, 2958, 2959, 2960, 2961, 2962, 2983, 2992, 2993, 2994, 2995, 2996]'  
         occurs '[2935, 2938, 2949, 2958, 2959, 2960, 2961, 2962, 2969, 2972, 2983, 2992, 2993, 2994, 2995, 2996]'  
      id236  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2938, 2939, 2972, 2973]'  
      id237  '__cs_local_lfds711_misc_internal_backoff_init_c'  
         type 'static char *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[2943, 2954, 2977, 2988]'  
         occurs '[2942, 2943, 2953, 2954, 2976, 2977, 2987, 2988]'  
      id238  '__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[2949, 2950, 2983, 2984]'  
      id239  '__cs_local_lfds711_misc_force_store_destination'  
         type 'static lfds711_pal_uint_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[3003, 3008]'  
         deref '[]'  
         occurs '[3003, 3008]'  
      id240  '__cs_retval____atomic_exchange_n_1'  
         type 'static unsigned long'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[3016, 3021]'  
      id241  '__cs_param___atomic_exchange_n_previous'  
         type 'static int long long unsigned *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[3014, 3015]'  
         occurs '[3008, 3014, 3015]'  
      id242  '__cs_param___atomic_exchange_n_new'  
         type 'static int long long unsigned'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[3010, 3015]'  
      id243  '__cs_param___atomic_exchange_n_memorder'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[3012]'  
      id244  '__cs_local___atomic_exchange_n_old'  
         type 'static unsigned long int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[3014, 3016]'  
      id245  '__cs_local_main_t1'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[3038]'  
         deref '[]'  
         occurs '[3038, 3040]'  
      id246  '__cs_local_main_t2'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[3039]'  
         deref '[]'  
         occurs '[3039, 3041]'  

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
   push_0
       var '__cs_param_push___cs_unused'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_push_td'   type 'static struct test_data *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_push_ss'   type 'static struct lfds711_stack_state *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_lfds711_stack_push_se'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lfds711_stack_push_new_top'   type 'static struct lfds711_stack_element *'   kind 'l'   arity '1'   size '[2]'   
       var '__cs_local_lfds711_stack_push_c'   type 'static char *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_swap_stack_top_top'   type 'static struct lfds711_stack_element * volatile *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_swap_stack_top_oldtop'   type 'static struct lfds711_stack_element * volatile *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_swap_stack_top_newtop'   type 'static struct lfds711_stack_element **'   kind 'l'   arity '0'   size '[]'   
   pop_0
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
function 'push_0' ----------------------------------:
void *push_0(void *__cs_param_push___cs_unused)
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
function 'pop_0' ----------------------------------:
void *pop_0(void *__cs_param_pop___cs_unused)
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
    __cs_create(&__cs_local_main_t1, 0, push_0, 0);
    __cs_create(&__cs_local_main_t2, 0, pop_0, 0);
    __cs_join(__cs_local_main_t1, 0);
    __cs_join(__cs_local_main_t2, 0);
    goto __exit_main;
    __exit_main:
    ;

    __cs_exit(0);
}



int
Last statement, by function:
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
   (413, 'lock')  
   (414, 'ss')  
   (415, 'lock')  
   (416, 'se')  
   (417, 'user_id')  
   (418, 'push_0')  
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
   (527, 'pop_0')  
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
