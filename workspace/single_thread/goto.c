CBMC version 5.10 (cbmc-5.10) 64-bit x86_64 linux
Parsing prep_single_thread_test.c
Converting
Type-checking prep_single_thread_test
Generating GOTO Program
Adding CPROVER library (x86_64)
Removal of function pointers and virtual functions
file prep_single_thread_test.c line 1508 function lfds711_stack_cleanup: replacing function pointer by 0 possible targets
Generic Property Instrumentation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

main /* main */
        // 0 file prep_single_thread_test.c line 1514 function main
        struct lfds711_stack_state stack;
        // 1 file prep_single_thread_test.c line 1515 function main
        struct lfds711_stack_element element;
        // 2 file prep_single_thread_test.c line 1515 function main
        struct lfds711_stack_element element2;
        // 3 file prep_single_thread_test.c line 1515 function main
        struct lfds711_stack_element element3;
        // 4 file prep_single_thread_test.c line 1516 function main
        struct coppia *c;
        // 5 file prep_single_thread_test.c line 1516 function main
        struct coppia *c1;
        // 6 file prep_single_thread_test.c line 1516 function main
        struct coppia *c2;
        // 7 file prep_single_thread_test.c line 1517 function main
        lfds711_stack_init_valid_on_current_logical_core(&stack, (void *)0);
        // 8 file prep_single_thread_test.c line 1518 function main
        void *return_value_malloc;
        // 9 file prep_single_thread_test.c line 1518 function main
        malloc(sizeof(struct coppia) /*8ul*/ );
        // 10 file prep_single_thread_test.c line 1518 function main
        return_value_malloc = malloc#return_value;
        // 11 file prep_single_thread_test.c line 1518 function main
        dead malloc#return_value;
        // 12 file prep_single_thread_test.c line 1518 function main
        c = (struct coppia *)return_value_malloc;
        // 13 file prep_single_thread_test.c line 1519 function main
        c->y = 1;
        // 14 file prep_single_thread_test.c line 1520 function main
        c->x = 2;
        // 15 file prep_single_thread_test.c line 1521 function main
        element.value = (void *)(lfds711_pal_uint_t)c;
        // 16 file prep_single_thread_test.c line 1522 function main
        signed int aaa;
        // 17 file prep_single_thread_test.c line 1522 function main
        aaa = ((struct coppia *)element.value)->x;
        // 18 file prep_single_thread_test.c line 1523 function main
        lfds711_stack_push(&stack, &element);
        // 19 file prep_single_thread_test.c line 1524 function main
        struct lfds711_stack_element *e;
        // 20 file prep_single_thread_test.c line 1525 function main
        signed int res;
        // 21 file prep_single_thread_test.c line 1525 function main
        lfds711_stack_pop(&stack, &e);
        // 22 file prep_single_thread_test.c line 1525 function main
        res = lfds711_stack_pop#return_value;
        // 23 file prep_single_thread_test.c line 1525 function main
        dead lfds711_stack_pop#return_value;
        // 24 file prep_single_thread_test.c line 1526 function main
        struct coppia *result;
        // 25 file prep_single_thread_test.c line 1526 function main
        result = (struct coppia *)e->value;
        // 26 file prep_single_thread_test.c line 1527 function main
        printf("Result %d : %d\n", result->x, result->y);
        // 27 file prep_single_thread_test.c line 1528 function main
        signed int s;
        // 28 file prep_single_thread_test.c line 1528 function main
        s = result->x;
        // 29 file prep_single_thread_test.c line 1529 function main
        ASSERT s == 1 // assertion s == 1
        // 30 file prep_single_thread_test.c line 1530 function main
        main#return_value = 0;
        // 31 file prep_single_thread_test.c line 1530 function main
        dead s;
        // 32 file prep_single_thread_test.c line 1530 function main
        dead result;
        // 33 file prep_single_thread_test.c line 1530 function main
        dead res;
        // 34 file prep_single_thread_test.c line 1530 function main
        dead e;
        // 35 file prep_single_thread_test.c line 1530 function main
        dead aaa;
        // 36 file prep_single_thread_test.c line 1530 function main
        dead return_value_malloc;
        // 37 file prep_single_thread_test.c line 1530 function main
        dead c2;
        // 38 file prep_single_thread_test.c line 1530 function main
        dead c1;
        // 39 file prep_single_thread_test.c line 1530 function main
        dead c;
        // 40 file prep_single_thread_test.c line 1530 function main
        dead element3;
        // 41 file prep_single_thread_test.c line 1530 function main
        dead element2;
        // 42 file prep_single_thread_test.c line 1530 function main
        dead element;
        // 43 file prep_single_thread_test.c line 1530 function main
        dead stack;
        // 44 file prep_single_thread_test.c line 1531 function main
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

malloc /* malloc */
        // 45 file <builtin-library-malloc> line 11 function malloc
        // Labels: __CPROVER_HIDE
        void *malloc_res;
        // 46 file <builtin-library-malloc> line 12 function malloc
        void *malloc_value;
        // 47 file <builtin-library-malloc> line 12 function malloc
        malloc_value = ALLOCATE(malloc_size, 0);
        // 48 file <builtin-library-malloc> line 12 function malloc
        malloc_res = malloc_value;
        // 49 file <builtin-library-malloc> line 15 function malloc
        __CPROVER_deallocated = malloc_res == __CPROVER_deallocated ? NULL : __CPROVER_deallocated;
        // 50 file <builtin-library-malloc> line 18 function malloc
        _Bool record_malloc;
        // 51 file <builtin-library-malloc> line 18 function malloc
        record_malloc = NONDET(_Bool);
        // 52 file <builtin-library-malloc> line 19 function malloc
        __CPROVER_malloc_object = record_malloc ? malloc_res : __CPROVER_malloc_object;
        // 53 file <builtin-library-malloc> line 20 function malloc
        __CPROVER_malloc_size = record_malloc ? malloc_size : __CPROVER_malloc_size;
        // 54 file <builtin-library-malloc> line 21 function malloc
        __CPROVER_malloc_is_new_array = (record_malloc ? 0 : (signed int)__CPROVER_malloc_is_new_array) != 0;
        // 55 file <builtin-library-malloc> line 24 function malloc
        _Bool record_may_leak;
        // 56 file <builtin-library-malloc> line 24 function malloc
        record_may_leak = NONDET(_Bool);
        // 57 file <builtin-library-malloc> line 25 function malloc
        __CPROVER_memory_leak = record_may_leak ? malloc_res : __CPROVER_memory_leak;
        // 58 file <builtin-library-malloc> line 27 function malloc
        malloc#return_value = malloc_res;
        // 59 file <builtin-library-malloc> line 27 function malloc
        dead record_may_leak;
        // 60 file <builtin-library-malloc> line 27 function malloc
        dead record_malloc;
        // 61 file <builtin-library-malloc> line 27 function malloc
        dead malloc_value;
        // 62 file <builtin-library-malloc> line 27 function malloc
        dead malloc_res;
        // 63 file <builtin-library-malloc> line 28 function malloc
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

__CPROVER_initialize /* __CPROVER_initialize */
        // 64 file <built-in-additions> line 11
        // Labels: __CPROVER_HIDE
        __CPROVER_dead_object = NULL;
        // 65 file <built-in-additions> line 10
        __CPROVER_deallocated = NULL;
        // 66 file <built-in-additions> line 14
        __CPROVER_malloc_is_new_array = 0 != 0;
        // 67 file <built-in-additions> line 12
        __CPROVER_malloc_object = NULL;
        // 68 file <built-in-additions> line 13
        __CPROVER_malloc_size = 0ul;
        // 69 file <built-in-additions> line 15
        __CPROVER_memory_leak = NULL;
        // 70 file <built-in-additions> line 8
        __CPROVER_next_thread_id = (unsigned long int)0;
        // 71 file <built-in-additions> line 29
        __CPROVER_pipe_count = (unsigned int)0;
        // 72 file <built-in-additions> line 20
        __CPROVER_rounding_mode = 0;
        // 73 file <built-in-additions> line 6
        __CPROVER_thread_id = (unsigned long int)0;
        // 74 file <built-in-additions> line 7
        __CPROVER_threads_exited = ARRAY_OF(FALSE);
        // 75 no location
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

__atomic_compare_exchange_n /* __atomic_compare_exchange_n */
        // 76 file prep_single_thread_test.c line 742 function __atomic_compare_exchange_n
        IF !(*mptr == *eptr) THEN GOTO 1
        // 77 file prep_single_thread_test.c line 744 function __atomic_compare_exchange_n
        *mptr = newval;
        // 78 file prep_single_thread_test.c line 745 function __atomic_compare_exchange_n
        __atomic_compare_exchange_n#return_value = (_Bool)1;
        // 79 file prep_single_thread_test.c line 745 function __atomic_compare_exchange_n
        GOTO 3
        // 80 file prep_single_thread_test.c line 745 function __atomic_compare_exchange_n
        GOTO 2
        // 81 file prep_single_thread_test.c line 749 function __atomic_compare_exchange_n
     1: *eptr = newval;
        // 82 file prep_single_thread_test.c line 750 function __atomic_compare_exchange_n
        __atomic_compare_exchange_n#return_value = (_Bool)0;
        // 83 file prep_single_thread_test.c line 750 function __atomic_compare_exchange_n
        GOTO 3
        // 84 file prep_single_thread_test.c line 752 function __atomic_compare_exchange_n
     2: __atomic_compare_exchange_n#return_value = NONDET(_Bool);
        // 85 file prep_single_thread_test.c line 752 function __atomic_compare_exchange_n
     3: END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

__atomic_exchange_n /* __atomic_exchange_n */
        // 86 file prep_single_thread_test.c line 755 function __atomic_exchange_n
        unsigned long int old;
        // 87 file prep_single_thread_test.c line 755 function __atomic_exchange_n
        old = *previous;
        // 88 file prep_single_thread_test.c line 756 function __atomic_exchange_n
        *previous = new;
        // 89 file prep_single_thread_test.c line 757 function __atomic_exchange_n
        __atomic_exchange_n#return_value = old;
        // 90 file prep_single_thread_test.c line 757 function __atomic_exchange_n
        dead old;
        // 91 file prep_single_thread_test.c line 758 function __atomic_exchange_n
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

__atomic_thread_fence /* __atomic_thread_fence */
        // 92 file prep_single_thread_test.c line 761 function __atomic_thread_fence
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

lfds711_misc_force_store /* lfds711_misc_force_store */
        // 93 file prep_single_thread_test.c line 847 function lfds711_misc_force_store
        volatile lfds711_pal_uint_t destination;
        // 94 file prep_single_thread_test.c line 848 function lfds711_misc_force_store
        __atomic_exchange_n(&destination, (unsigned long long int)0, 0);
        // 95 file prep_single_thread_test.c line 849 function lfds711_misc_force_store
        dead destination;
        // 96 file prep_single_thread_test.c line 850 function lfds711_misc_force_store
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

lfds711_stack_init_valid_on_current_logical_core /* lfds711_stack_init_valid_on_current_logical_core */
        // 97 file prep_single_thread_test.c line 1385 function lfds711_stack_init_valid_on_current_logical_core
        IF ss != ((struct lfds711_stack_state *)NULL) THEN GOTO 1
        // 98 file prep_single_thread_test.c line 1385 function lfds711_stack_init_valid_on_current_logical_core
        char *c;
        // 99 file prep_single_thread_test.c line 1385 function lfds711_stack_init_valid_on_current_logical_core
        c = ((char *)NULL);
        // 100 file prep_single_thread_test.c line 1385 function lfds711_stack_init_valid_on_current_logical_core
        *c = (char)0;
        // 101 file prep_single_thread_test.c line 1385 function lfds711_stack_init_valid_on_current_logical_core
        dead c;
        // 102 file prep_single_thread_test.c line 1386 function lfds711_stack_init_valid_on_current_logical_core
     1: IF (lfds711_pal_uint_t)ss->top % (unsigned long int)128 == (unsigned long int)0 THEN GOTO 2
        // 103 file prep_single_thread_test.c line 1386 function lfds711_stack_init_valid_on_current_logical_core
        char *c;
        // 104 file prep_single_thread_test.c line 1386 function lfds711_stack_init_valid_on_current_logical_core
        c = ((char *)NULL);
        // 105 file prep_single_thread_test.c line 1386 function lfds711_stack_init_valid_on_current_logical_core
        *c = (char)0;
        // 106 file prep_single_thread_test.c line 1386 function lfds711_stack_init_valid_on_current_logical_core
        dead c;
        // 107 file prep_single_thread_test.c line 1387 function lfds711_stack_init_valid_on_current_logical_core
     2: IF (lfds711_pal_uint_t)&ss->user_state % (unsigned long int)128 == (unsigned long int)0 THEN GOTO 3
        // 108 file prep_single_thread_test.c line 1387 function lfds711_stack_init_valid_on_current_logical_core
        char *c;
        // 109 file prep_single_thread_test.c line 1387 function lfds711_stack_init_valid_on_current_logical_core
        c = ((char *)NULL);
        // 110 file prep_single_thread_test.c line 1387 function lfds711_stack_init_valid_on_current_logical_core
        *c = (char)0;
        // 111 file prep_single_thread_test.c line 1387 function lfds711_stack_init_valid_on_current_logical_core
        dead c;
        // 112 file prep_single_thread_test.c line 1388 function lfds711_stack_init_valid_on_current_logical_core
     3: ss->top[(signed long int)0] = (struct lfds711_stack_element *)(void *)0;
        // 113 file prep_single_thread_test.c line 1389 function lfds711_stack_init_valid_on_current_logical_core
        ss->top[(signed long int)1] = ((struct lfds711_stack_element *)NULL);
        // 114 file prep_single_thread_test.c line 1390 function lfds711_stack_init_valid_on_current_logical_core
        ss->user_state = user_state;
        // 115 file prep_single_thread_test.c line 1391 function lfds711_stack_init_valid_on_current_logical_core
        lfds711_misc_internal_backoff_init(&ss->pop_backoff);
        // 116 file prep_single_thread_test.c line 1392 function lfds711_stack_init_valid_on_current_logical_core
        lfds711_misc_internal_backoff_init(&ss->push_backoff);
        // 117 file prep_single_thread_test.c line 1393 function lfds711_stack_init_valid_on_current_logical_core
        __atomic_thread_fence(3);
        // 118 file prep_single_thread_test.c line 1394 function lfds711_stack_init_valid_on_current_logical_core
        lfds711_misc_force_store();
        // 119 file prep_single_thread_test.c line 1396 function lfds711_stack_init_valid_on_current_logical_core
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

lfds711_stack_cleanup /* lfds711_stack_cleanup */
        // 120 file prep_single_thread_test.c line 1497 function lfds711_stack_cleanup
        struct lfds711_stack_element *se;
        // 121 file prep_single_thread_test.c line 1498 function lfds711_stack_cleanup
        struct lfds711_stack_element *se_temp;
        // 122 file prep_single_thread_test.c line 1499 function lfds711_stack_cleanup
        IF ss != ((struct lfds711_stack_state *)NULL) THEN GOTO 1
        // 123 file prep_single_thread_test.c line 1499 function lfds711_stack_cleanup
        char *c;
        // 124 file prep_single_thread_test.c line 1499 function lfds711_stack_cleanup
        c = ((char *)NULL);
        // 125 file prep_single_thread_test.c line 1499 function lfds711_stack_cleanup
        *c = (char)0;
        // 126 file prep_single_thread_test.c line 1499 function lfds711_stack_cleanup
        dead c;
        // 127 file prep_single_thread_test.c line 1500 function lfds711_stack_cleanup
     1: __atomic_thread_fence(2);
        // 128 file prep_single_thread_test.c line 1501 function lfds711_stack_cleanup
        IF !(element_cleanup_callback != ((void (*)(struct lfds711_stack_state *, struct lfds711_stack_element *))NULL)) THEN GOTO 3
        // 129 file prep_single_thread_test.c line 1503 function lfds711_stack_cleanup
        se = ss->top[(signed long int)0];
        // 130 file prep_single_thread_test.c line 1504 function lfds711_stack_cleanup
     2: IF !(se != ((struct lfds711_stack_element *)NULL)) THEN GOTO 3
        // 131 file prep_single_thread_test.c line 1506 function lfds711_stack_cleanup
        se_temp = se;
        // 132 file prep_single_thread_test.c line 1507 function lfds711_stack_cleanup
        se = se->next;
        // 133 file prep_single_thread_test.c line 1508 function lfds711_stack_cleanup
        element_cleanup_callback;
        // 134 file prep_single_thread_test.c line 1504 function lfds711_stack_cleanup
        GOTO 2
        // 135 file prep_single_thread_test.c line 1511 function lfds711_stack_cleanup
     3: dead se_temp;
        // 136 file prep_single_thread_test.c line 1511 function lfds711_stack_cleanup
        dead se;
        // 137 file prep_single_thread_test.c line 1512 function lfds711_stack_cleanup
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

lfds711_stack_push /* lfds711_stack_push */
        // 138 file prep_single_thread_test.c line 1448 function lfds711_stack_push
        unsigned char result;
        // 139 file prep_single_thread_test.c line 1450 function lfds711_stack_push
        lfds711_pal_uint_t backoff_iteration;
        // 140 file prep_single_thread_test.c line 1450 function lfds711_stack_push
        backoff_iteration = (lfds711_pal_uint_t)0;
        // 141 file prep_single_thread_test.c line 1451 function lfds711_stack_push
        struct lfds711_stack_element *new_top[2l];
        // 142 file prep_single_thread_test.c line 1452 function lfds711_stack_push
        struct lfds711_stack_element * volatile original_top[2l];
        // 143 file prep_single_thread_test.c line 1453 function lfds711_stack_push
        IF ss != ((struct lfds711_stack_state *)NULL) THEN GOTO 1
        // 144 file prep_single_thread_test.c line 1453 function lfds711_stack_push
        char *c;
        // 145 file prep_single_thread_test.c line 1453 function lfds711_stack_push
        c = ((char *)NULL);
        // 146 file prep_single_thread_test.c line 1453 function lfds711_stack_push
        *c = (char)0;
        // 147 file prep_single_thread_test.c line 1453 function lfds711_stack_push
        dead c;
        // 148 file prep_single_thread_test.c line 1454 function lfds711_stack_push
     1: IF se != ((struct lfds711_stack_element *)NULL) THEN GOTO 2
        // 149 file prep_single_thread_test.c line 1454 function lfds711_stack_push
        char *c;
        // 150 file prep_single_thread_test.c line 1454 function lfds711_stack_push
        c = ((char *)NULL);
        // 151 file prep_single_thread_test.c line 1454 function lfds711_stack_push
        *c = (char)0;
        // 152 file prep_single_thread_test.c line 1454 function lfds711_stack_push
        dead c;
        // 153 file prep_single_thread_test.c line 1455 function lfds711_stack_push
     2: new_top[(signed long int)0] = se;
        // 154 file prep_single_thread_test.c line 1456 function lfds711_stack_push
        original_top[(signed long int)1] = ss->top[(signed long int)1];
        // 155 file prep_single_thread_test.c line 1457 function lfds711_stack_push
        original_top[(signed long int)0] = ss->top[(signed long int)0];
        // 156 file prep_single_thread_test.c line 1458 function lfds711_stack_push
        result = (unsigned char)0;
        // 157 file prep_single_thread_test.c line 1459 function lfds711_stack_push
        signed int k;
        // 158 file prep_single_thread_test.c line 1459 function lfds711_stack_push
        k = 0;
        // 159 file prep_single_thread_test.c line 1460 function lfds711_stack_push
        signed long long int indirizzo;
        // 160 file prep_single_thread_test.c line 1460 function lfds711_stack_push
        indirizzo = (signed long long int)se;
        // 161 file prep_single_thread_test.c line 1461 function lfds711_stack_push
        indirizzo = (signed long long int)(struct lfds711_stack_element *)new_top;
        // 162 file prep_single_thread_test.c line 1462 function lfds711_stack_push
        signed int old_value;
        // 163 file prep_single_thread_test.c line 1462 function lfds711_stack_push
        old_value = ((struct coppia *)((struct lfds711_stack_element *)new_top[(signed long int)0])->value)->x;
        // 164 file prep_single_thread_test.c line 1463 function lfds711_stack_push
     3: IF !((signed int)result == 0) THEN GOTO 9
        // 165 file prep_single_thread_test.c line 1465 function lfds711_stack_push
        se->next = original_top[(signed long int)0];
        // 166 file prep_single_thread_test.c line 1466 function lfds711_stack_push
        __atomic_thread_fence(3);
        // 167 file prep_single_thread_test.c line 1467 function lfds711_stack_push
        new_top[(signed long int)1] = original_top[(signed long int)1] + (signed long int)1;
        // 168 file prep_single_thread_test.c line 1468 function lfds711_stack_push
        IF !(original_top[(signed long int)0] == ss->top[(signed long int)0]) THEN GOTO 4
        // 169 file prep_single_thread_test.c line 1470 function lfds711_stack_push
        ss->top[(signed long int)0] = new_top[(signed long int)0];
        // 170 file prep_single_thread_test.c line 1471 function lfds711_stack_push
        result = (unsigned char)1;
        // 171 file prep_single_thread_test.c line 1471 function lfds711_stack_push
        GOTO 5
        // 172 file prep_single_thread_test.c line 1475 function lfds711_stack_push
     4: original_top[(signed long int)0] = ss->top[(signed long int)0];
        // 173 file prep_single_thread_test.c line 1476 function lfds711_stack_push
        result = (unsigned char)0;
        // 174 file prep_single_thread_test.c line 1478 function lfds711_stack_push
     5: IF !((signed int)result == 0) THEN GOTO 8
        // 175 file prep_single_thread_test.c line 1479 function lfds711_stack_push
        signed int loop;
        // 176 file prep_single_thread_test.c line 1479 function lfds711_stack_push
        loop = 0;
        // 177 file prep_single_thread_test.c line 1479 function lfds711_stack_push
     6: IF !(loop < 10) THEN GOTO 7
        // 178 file prep_single_thread_test.c line 1479 function lfds711_stack_push
        loop = loop + 1;
        // 179 file prep_single_thread_test.c line 1479 function lfds711_stack_push
        GOTO 6
        // 180 file prep_single_thread_test.c line 1479 function lfds711_stack_push
     7: dead loop;
        // 181 file prep_single_thread_test.c line 1480 function lfds711_stack_push
     8: k = k + 1;
        // 182 file prep_single_thread_test.c line 1481 function lfds711_stack_push
        old_value = ((struct coppia *)((struct lfds711_stack_element *)ss->top[(signed long int)0])->value)->x;
        // 183 file prep_single_thread_test.c line 1482 function lfds711_stack_push
        unsigned long long int address;
        // 184 file prep_single_thread_test.c line 1482 function lfds711_stack_push
        address = (unsigned long long int)ss->top[(signed long int)0]->value;
        // 185 file prep_single_thread_test.c line 1483 function lfds711_stack_push
        IF k > 10 || (signed int)result == 1 THEN GOTO 9
        // 186 file prep_single_thread_test.c line 1485 function lfds711_stack_push
        dead address;
        // 187 file prep_single_thread_test.c line 1463 function lfds711_stack_push
        GOTO 3
        // 188 file prep_single_thread_test.c line 1487 function lfds711_stack_push
     9: unsigned long long int address;
        // 189 file prep_single_thread_test.c line 1487 function lfds711_stack_push
        address = (unsigned long long int)ss->top[(signed long int)0]->value;
        // 190 file prep_single_thread_test.c line 1488 function lfds711_stack_push
        old_value = ((struct coppia *)((struct lfds711_stack_element *)ss->top[(signed long int)0])->value)->x;
        // 191 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        IF !(backoff_iteration < (unsigned long int)2) THEN GOTO 10
        // 192 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        ss->push_backoff.backoff_iteration_frequency_counters[(signed long int)backoff_iteration] = ss->push_backoff.backoff_iteration_frequency_counters[(signed long int)backoff_iteration] + 1ull;
        // 193 file prep_single_thread_test.c line 1490 function lfds711_stack_push
    10: ss->push_backoff.total_operations = ss->push_backoff.total_operations + 1ull;
        // 194 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        IF !(ss->push_backoff.total_operations >= (unsigned long int)10000) THEN GOTO 15
        // 195 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        IF !(ss->push_backoff.lock == (unsigned long int)0) THEN GOTO 15
        // 196 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        unsigned char result;
        // 197 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        lfds711_pal_uint_t compare;
        // 198 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        compare = (lfds711_pal_uint_t)0;
        // 199 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        _Bool return_value___atomic_compare_exchange_n;
        // 200 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        __atomic_compare_exchange_n(&ss->push_backoff.lock, &compare, (volatile unsigned long long int)1, (_Bool)1, 0, 0);
        // 201 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        return_value___atomic_compare_exchange_n = __atomic_compare_exchange_n#return_value;
        // 202 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        dead __atomic_compare_exchange_n#return_value;
        // 203 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        result = (unsigned char)return_value___atomic_compare_exchange_n;
        // 204 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        dead return_value___atomic_compare_exchange_n;
        // 205 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        IF !((signed int)result == 1) THEN GOTO 14
        // 206 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        IF !(ss->push_backoff.backoff_iteration_frequency_counters[(signed long int)1] < ss->push_backoff.backoff_iteration_frequency_counters[(signed long int)0] / (unsigned long int)100) THEN GOTO 12
        // 207 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        IF !(ss->push_backoff.metric >= (unsigned long int)11) THEN GOTO 11
        // 208 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        ss->push_backoff.metric = ss->push_backoff.metric - (lfds711_pal_uint_t)10;
        // 209 no location
    11: GOTO 13
        // 210 file prep_single_thread_test.c line 1490 function lfds711_stack_push
    12: ss->push_backoff.metric = ss->push_backoff.metric + (lfds711_pal_uint_t)10;
        // 211 file prep_single_thread_test.c line 1490 function lfds711_stack_push
    13: ss->push_backoff.backoff_iteration_frequency_counters[(signed long int)0] = (lfds711_pal_uint_t)0;
        // 212 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        ss->push_backoff.backoff_iteration_frequency_counters[(signed long int)1] = (lfds711_pal_uint_t)0;
        // 213 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        ss->push_backoff.total_operations = (lfds711_pal_uint_t)0;
        // 214 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        __atomic_thread_fence(3);
        // 215 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        __atomic_exchange_n(&ss->push_backoff.lock, (unsigned long long int)0, 0);
        // 216 file prep_single_thread_test.c line 1490 function lfds711_stack_push
    14: dead compare;
        // 217 file prep_single_thread_test.c line 1490 function lfds711_stack_push
        dead result;
        // 218 file prep_single_thread_test.c line 1491 function lfds711_stack_push
    15: dead address;
        // 219 file prep_single_thread_test.c line 1491 function lfds711_stack_push
        dead old_value;
        // 220 file prep_single_thread_test.c line 1491 function lfds711_stack_push
        dead indirizzo;
        // 221 file prep_single_thread_test.c line 1491 function lfds711_stack_push
        dead k;
        // 222 file prep_single_thread_test.c line 1491 function lfds711_stack_push
        dead original_top;
        // 223 file prep_single_thread_test.c line 1491 function lfds711_stack_push
        dead new_top;
        // 224 file prep_single_thread_test.c line 1491 function lfds711_stack_push
        dead backoff_iteration;
        // 225 file prep_single_thread_test.c line 1491 function lfds711_stack_push
        dead result;
        // 226 file prep_single_thread_test.c line 1492 function lfds711_stack_push
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

lfds711_stack_pop /* lfds711_stack_pop */
        // 227 file prep_single_thread_test.c line 1401 function lfds711_stack_pop
        unsigned char result;
        // 228 file prep_single_thread_test.c line 1403 function lfds711_stack_pop
        lfds711_pal_uint_t backoff_iteration;
        // 229 file prep_single_thread_test.c line 1403 function lfds711_stack_pop
        backoff_iteration = (lfds711_pal_uint_t)0;
        // 230 file prep_single_thread_test.c line 1404 function lfds711_stack_pop
        struct lfds711_stack_element *new_top[2l];
        // 231 file prep_single_thread_test.c line 1405 function lfds711_stack_pop
        struct lfds711_stack_element * volatile original_top[2l];
        // 232 file prep_single_thread_test.c line 1406 function lfds711_stack_pop
        IF ss != ((struct lfds711_stack_state *)NULL) THEN GOTO 1
        // 233 file prep_single_thread_test.c line 1406 function lfds711_stack_pop
        char *c;
        // 234 file prep_single_thread_test.c line 1406 function lfds711_stack_pop
        c = ((char *)NULL);
        // 235 file prep_single_thread_test.c line 1406 function lfds711_stack_pop
        *c = (char)0;
        // 236 file prep_single_thread_test.c line 1406 function lfds711_stack_pop
        dead c;
        // 237 file prep_single_thread_test.c line 1407 function lfds711_stack_pop
     1: IF se != ((struct lfds711_stack_element **)NULL) THEN GOTO 2
        // 238 file prep_single_thread_test.c line 1407 function lfds711_stack_pop
        char *c;
        // 239 file prep_single_thread_test.c line 1407 function lfds711_stack_pop
        c = ((char *)NULL);
        // 240 file prep_single_thread_test.c line 1407 function lfds711_stack_pop
        *c = (char)0;
        // 241 file prep_single_thread_test.c line 1407 function lfds711_stack_pop
        dead c;
        // 242 file prep_single_thread_test.c line 1408 function lfds711_stack_pop
     2: __atomic_thread_fence(2);
        // 243 file prep_single_thread_test.c line 1409 function lfds711_stack_pop
        original_top[(signed long int)1] = ss->top[(signed long int)1];
        // 244 file prep_single_thread_test.c line 1410 function lfds711_stack_pop
        original_top[(signed long int)0] = ss->top[(signed long int)0];
        // 245 file prep_single_thread_test.c line 1411 function lfds711_stack_pop
        signed int i;
        // 246 file prep_single_thread_test.c line 1411 function lfds711_stack_pop
        i = 0;
        // 247 file prep_single_thread_test.c line 1414 function lfds711_stack_pop
     3: IF !(original_top[(signed long int)0] == ((struct lfds711_stack_element *)NULL)) THEN GOTO 4
        // 248 file prep_single_thread_test.c line 1416 function lfds711_stack_pop
        *se = (struct lfds711_stack_element *)(void *)0;
        // 249 file prep_single_thread_test.c line 1417 function lfds711_stack_pop
        lfds711_stack_pop#return_value = 0;
        // 250 file prep_single_thread_test.c line 1417 function lfds711_stack_pop
        dead i;
        // 251 file prep_single_thread_test.c line 1417 function lfds711_stack_pop
        dead original_top;
        // 252 file prep_single_thread_test.c line 1417 function lfds711_stack_pop
        dead new_top;
        // 253 file prep_single_thread_test.c line 1417 function lfds711_stack_pop
        dead backoff_iteration;
        // 254 file prep_single_thread_test.c line 1417 function lfds711_stack_pop
        dead result;
        // 255 file prep_single_thread_test.c line 1417 function lfds711_stack_pop
        GOTO 17
        // 256 file prep_single_thread_test.c line 1419 function lfds711_stack_pop
     4: new_top[(signed long int)1] = original_top[(signed long int)1] + (signed long int)1;
        // 257 file prep_single_thread_test.c line 1420 function lfds711_stack_pop
        new_top[(signed long int)0] = original_top[(signed long int)0]->next;
        // 258 file prep_single_thread_test.c line 1421 function lfds711_stack_pop
        IF !(original_top[(signed long int)0] == ss->top[(signed long int)0]) THEN GOTO 5
        // 259 file prep_single_thread_test.c line 1423 function lfds711_stack_pop
        ss->top[(signed long int)0] = new_top[(signed long int)0];
        // 260 file prep_single_thread_test.c line 1424 function lfds711_stack_pop
        result = (unsigned char)1;
        // 261 file prep_single_thread_test.c line 1424 function lfds711_stack_pop
        GOTO 6
        // 262 file prep_single_thread_test.c line 1428 function lfds711_stack_pop
     5: original_top[(signed long int)0] = ss->top[(signed long int)0];
        // 263 file prep_single_thread_test.c line 1429 function lfds711_stack_pop
        result = (unsigned char)0;
        // 264 file prep_single_thread_test.c line 1431 function lfds711_stack_pop
     6: IF !((signed int)result == 0) THEN GOTO 9
        // 265 file prep_single_thread_test.c line 1433 function lfds711_stack_pop
        signed int loop;
        // 266 file prep_single_thread_test.c line 1433 function lfds711_stack_pop
        loop = 0;
        // 267 file prep_single_thread_test.c line 1433 function lfds711_stack_pop
     7: IF !(loop < 10) THEN GOTO 8
        // 268 file prep_single_thread_test.c line 1433 function lfds711_stack_pop
        loop = loop + 1;
        // 269 file prep_single_thread_test.c line 1433 function lfds711_stack_pop
        GOTO 7
        // 270 file prep_single_thread_test.c line 1433 function lfds711_stack_pop
     8: dead loop;
        // 271 file prep_single_thread_test.c line 1434 function lfds711_stack_pop
        __atomic_thread_fence(2);
        // 272 file prep_single_thread_test.c line 1436 function lfds711_stack_pop
     9: i = i + 1;
        // 273 file prep_single_thread_test.c line 1437 function lfds711_stack_pop
        IF i < 10 THEN GOTO 10
        // 274 file prep_single_thread_test.c line 1439 function lfds711_stack_pop
        IF (signed int)result == 0 THEN GOTO 3
        // 275 file prep_single_thread_test.c line 1440 function lfds711_stack_pop
    10: *se = original_top[(signed long int)0];
        // 276 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        IF !(backoff_iteration < (unsigned long int)2) THEN GOTO 11
        // 277 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        ss->pop_backoff.backoff_iteration_frequency_counters[(signed long int)backoff_iteration] = ss->pop_backoff.backoff_iteration_frequency_counters[(signed long int)backoff_iteration] + 1ull;
        // 278 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
    11: ss->pop_backoff.total_operations = ss->pop_backoff.total_operations + 1ull;
        // 279 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        IF !(ss->pop_backoff.total_operations >= (unsigned long int)10000) THEN GOTO 16
        // 280 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        IF !(ss->pop_backoff.lock == (unsigned long int)0) THEN GOTO 16
        // 281 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        unsigned char result;
        // 282 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        lfds711_pal_uint_t compare;
        // 283 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        compare = (lfds711_pal_uint_t)0;
        // 284 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        _Bool return_value___atomic_compare_exchange_n;
        // 285 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        __atomic_compare_exchange_n(&ss->pop_backoff.lock, &compare, (volatile unsigned long long int)1, (_Bool)1, 0, 0);
        // 286 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        return_value___atomic_compare_exchange_n = __atomic_compare_exchange_n#return_value;
        // 287 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        dead __atomic_compare_exchange_n#return_value;
        // 288 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        result = (unsigned char)return_value___atomic_compare_exchange_n;
        // 289 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        dead return_value___atomic_compare_exchange_n;
        // 290 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        IF !((signed int)result == 1) THEN GOTO 15
        // 291 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        IF !(ss->pop_backoff.backoff_iteration_frequency_counters[(signed long int)1] < ss->pop_backoff.backoff_iteration_frequency_counters[(signed long int)0] / (unsigned long int)100) THEN GOTO 13
        // 292 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        IF !(ss->pop_backoff.metric >= (unsigned long int)11) THEN GOTO 12
        // 293 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        ss->pop_backoff.metric = ss->pop_backoff.metric - (lfds711_pal_uint_t)10;
        // 294 no location
    12: GOTO 14
        // 295 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
    13: ss->pop_backoff.metric = ss->pop_backoff.metric + (lfds711_pal_uint_t)10;
        // 296 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
    14: ss->pop_backoff.backoff_iteration_frequency_counters[(signed long int)0] = (lfds711_pal_uint_t)0;
        // 297 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        ss->pop_backoff.backoff_iteration_frequency_counters[(signed long int)1] = (lfds711_pal_uint_t)0;
        // 298 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        ss->pop_backoff.total_operations = (lfds711_pal_uint_t)0;
        // 299 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        __atomic_thread_fence(3);
        // 300 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        __atomic_exchange_n(&ss->pop_backoff.lock, (unsigned long long int)0, 0);
        // 301 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
    15: dead compare;
        // 302 file prep_single_thread_test.c line 1441 function lfds711_stack_pop
        dead result;
        // 303 file prep_single_thread_test.c line 1442 function lfds711_stack_pop
    16: lfds711_stack_pop#return_value = 1;
        // 304 file prep_single_thread_test.c line 1442 function lfds711_stack_pop
        dead i;
        // 305 file prep_single_thread_test.c line 1442 function lfds711_stack_pop
        dead original_top;
        // 306 file prep_single_thread_test.c line 1442 function lfds711_stack_pop
        dead new_top;
        // 307 file prep_single_thread_test.c line 1442 function lfds711_stack_pop
        dead backoff_iteration;
        // 308 file prep_single_thread_test.c line 1442 function lfds711_stack_pop
        dead result;
        // 309 file prep_single_thread_test.c line 1443 function lfds711_stack_pop
    17: END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

lfds711_misc_internal_backoff_init /* lfds711_misc_internal_backoff_init */
        // 310 file prep_single_thread_test.c line 1373 function lfds711_misc_internal_backoff_init
        IF bs != ((struct lfds711_misc_backoff_state *)NULL) THEN GOTO 1
        // 311 file prep_single_thread_test.c line 1373 function lfds711_misc_internal_backoff_init
        char *c;
        // 312 file prep_single_thread_test.c line 1373 function lfds711_misc_internal_backoff_init
        c = ((char *)NULL);
        // 313 file prep_single_thread_test.c line 1373 function lfds711_misc_internal_backoff_init
        *c = (char)0;
        // 314 file prep_single_thread_test.c line 1373 function lfds711_misc_internal_backoff_init
        dead c;
        // 315 file prep_single_thread_test.c line 1374 function lfds711_misc_internal_backoff_init
     1: IF (lfds711_pal_uint_t)&bs->lock % (unsigned long int)128 == (unsigned long int)0 THEN GOTO 2
        // 316 file prep_single_thread_test.c line 1374 function lfds711_misc_internal_backoff_init
        char *c;
        // 317 file prep_single_thread_test.c line 1374 function lfds711_misc_internal_backoff_init
        c = ((char *)NULL);
        // 318 file prep_single_thread_test.c line 1374 function lfds711_misc_internal_backoff_init
        *c = (char)0;
        // 319 file prep_single_thread_test.c line 1374 function lfds711_misc_internal_backoff_init
        dead c;
        // 320 file prep_single_thread_test.c line 1375 function lfds711_misc_internal_backoff_init
     2: bs->lock = (volatile lfds711_pal_uint_t)0;
        // 321 file prep_single_thread_test.c line 1376 function lfds711_misc_internal_backoff_init
        bs->backoff_iteration_frequency_counters[(signed long int)0] = (lfds711_pal_uint_t)0;
        // 322 file prep_single_thread_test.c line 1377 function lfds711_misc_internal_backoff_init
        bs->backoff_iteration_frequency_counters[(signed long int)1] = (lfds711_pal_uint_t)0;
        // 323 file prep_single_thread_test.c line 1378 function lfds711_misc_internal_backoff_init
        bs->metric = (lfds711_pal_uint_t)1;
        // 324 file prep_single_thread_test.c line 1379 function lfds711_misc_internal_backoff_init
        bs->total_operations = (lfds711_pal_uint_t)0;
        // 325 file prep_single_thread_test.c line 1381 function lfds711_misc_internal_backoff_init
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

__CPROVER__start /* __CPROVER__start */
        // 326 no location
        __CPROVER_initialize();
        // 327 file prep_single_thread_test.c line 1513
        main();
        // 328 file prep_single_thread_test.c line 1513
        return' = main#return_value;
        // 329 file prep_single_thread_test.c line 1513
        dead main#return_value;
        // 330 file prep_single_thread_test.c line 1513
        OUTPUT("return", return');
        // 331 no location
        END_FUNCTION

