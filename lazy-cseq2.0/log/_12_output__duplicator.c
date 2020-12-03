typedef int _____STARTSTRIPPINGFROMHERE_____;
typedef int __cs_barrier_t;
typedef int __cs_barrierattr_t;
typedef int __cs_attr_t;
typedef int __cs_cond_t;
typedef int __cs_condattr_t;
typedef int __cs_key_t;
typedef int __cs_mutex_t;
typedef int __cs_mutexattr_t;
typedef int __cs_once_t;
typedef int __cs_rwlock_t;
typedef int __cs_rwlockattr_t;
typedef int __cs_t;
typedef int size_t;
typedef int __builtin_va_list;
typedef int __gnuc_va_list;
typedef int __int8_t;
typedef int __uint8_t;
typedef int __int16_t;
typedef int __uint16_t;
typedef int __int_least16_t;
typedef int __uint_least16_t;
typedef int __int32_t;
typedef int __uint32_t;
typedef int __int64_t;
typedef int __uint64_t;
typedef int __int_least32_t;
typedef int __uint_least32_t;
typedef int __s8;
typedef int __u8;
typedef int __s16;
typedef int __u16;
typedef int __s32;
typedef int __u32;
typedef int __s64;
typedef int __u64;
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
typedef int _off_t;
typedef int __dev_t;
typedef int __uid_t;
typedef int __gid_t;
typedef int _off64_t;
typedef int _fpos_t;
typedef int _ssize_t;
typedef int wint_t;
typedef int _mbstate_t;
typedef int _flock_t;
typedef int _iconv_t;
typedef int __ULong;
typedef int __FILE;
typedef int ptrdiff_t;
typedef int wchar_t;
typedef int __off_t;
typedef int __pid_t;
typedef int __loff_t;
typedef int u_char;
typedef int u_short;
typedef int u_int;
typedef int u_long;
typedef int ushort;
typedef int uint;
typedef int clock_t;
typedef int time_t;
typedef int daddr_t;
typedef int caddr_t;
typedef int ino_t;
typedef int off_t;
typedef int dev_t;
typedef int uid_t;
typedef int gid_t;
typedef int pid_t;
typedef int key_t;
typedef int ssize_t;
typedef int mode_t;
typedef int nlink_t;
typedef int fd_mask;
typedef int _types_fd_set;
typedef int fd_set;
typedef int clockid_t;
typedef int timer_t;
typedef int useconds_t;
typedef int suseconds_t;
typedef int FILE;
typedef int fpos_t;
typedef int cookie_read_function_t;
typedef int cookie_write_function_t;
typedef int cookie_seek_function_t;
typedef int cookie_close_function_t;
typedef int cookie_io_functions_t;
typedef int div_t;
typedef int ldiv_t;
typedef int lldiv_t;
typedef int sigset_t;
typedef int __sigset_t;
typedef int _sig_func_ptr;
typedef int sig_atomic_t;
typedef int __tzrule_type;
typedef int __tzinfo_type;
typedef int mbstate_t;
typedef int sem_t;
typedef int pthread_t;
typedef int pthread_attr_t;
typedef int pthread_mutex_t;
typedef int pthread_mutexattr_t;
typedef int pthread_cond_t;
typedef int pthread_condattr_t;
typedef int pthread_key_t;
typedef int pthread_once_t;
typedef int pthread_rwlock_t;
typedef int pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
typedef int pthread_barrier_t;
typedef int pthread_barrierattr_t;
typedef int jmp_buf;
typedef int rlim_t;
typedef int sa_family_t;
typedef int sigjmp_buf;
typedef int stack_t;
typedef int siginfo_t;
typedef int z_stream;
typedef int int8_t;
typedef int uint8_t;
typedef int int16_t;
typedef int uint16_t;
typedef int int32_t;
typedef int uint32_t;
typedef int int64_t;
typedef int uint64_t;
typedef int int_least8_t;
typedef int uint_least8_t;
typedef int int_least16_t;
typedef int uint_least16_t;
typedef int int_least32_t;
typedef int uint_least32_t;
typedef int int_least64_t;
typedef int uint_least64_t;
typedef int int_fast8_t;
typedef int uint_fast8_t;
typedef int int_fast16_t;
typedef int uint_fast16_t;
typedef int int_fast32_t;
typedef int uint_fast32_t;
typedef int int_fast64_t;
typedef int uint_fast64_t;
typedef int intptr_t;
typedef int uintptr_t;
typedef int intmax_t;
typedef int uintmax_t;
typedef _Bool bool;
typedef void BZFILE;
typedef int va_list;
typedef int loff_t;
typedef int _____STOPSTRIPPINGFROMHERE_____;
#pragma warning( push )
#pragma warning( disable : 4324 )
#pragma prefast( disable : 28113 28182 28183, "blah" )
typedef int long long lfds711_pal_int_t;
typedef int long long unsigned lfds711_pal_uint_t;
struct lfds711_prng_state
{
lfds711_pal_uint_t entropy;
};
struct lfds711_prng_st_state
{
lfds711_pal_uint_t entropy;
};
void lfds711_prng_init_valid_on_current_logical_core(struct lfds711_prng_state *__cs_param__ps, lfds711_pal_uint_t __cs_param__seed);
void lfds711_prng_st_init(struct lfds711_prng_st_state *__cs_param__psts, lfds711_pal_uint_t __cs_param__seed);
enum lfds711_misc_cas_strength {LFDS711_MISC_CAS_STRENGTH_STRONG = 
0, LFDS711_MISC_CAS_STRENGTH_WEAK = 
1};
enum lfds711_misc_validity {LFDS711_MISC_VALIDITY_UNKNOWN, LFDS711_MISC_VALIDITY_VALID, LFDS711_MISC_VALIDITY_INVALID_LOOP, LFDS711_MISC_VALIDITY_INVALID_MISSING_ELEMENTS, LFDS711_MISC_VALIDITY_INVALID_ADDITIONAL_ELEMENTS, LFDS711_MISC_VALIDITY_INVALID_TEST_DATA, LFDS711_MISC_VALIDITY_INVALID_ORDER, LFDS711_MISC_VALIDITY_INVALID_ATOMIC_FAILED, LFDS711_MISC_VALIDITY_INDETERMINATE_NONATOMIC_PASSED};
enum lfds711_misc_flag {LFDS711_MISC_FLAG_LOWERED, LFDS711_MISC_FLAG_RAISED};
enum lfds711_misc_query {LFDS711_MISC_QUERY_GET_BUILD_AND_VERSION_STRING};
enum lfds711_misc_data_structure {LFDS711_MISC_DATA_STRUCTURE_BTREE_AU, LFDS711_MISC_DATA_STRUCTURE_FREELIST, LFDS711_MISC_DATA_STRUCTURE_HASH_A, LFDS711_MISC_DATA_STRUCTURE_LIST_AOS, LFDS711_MISC_DATA_STRUCTURE_LIST_ASU, LFDS711_MISC_DATA_STRUCTURE_QUEUE_BMM, LFDS711_MISC_DATA_STRUCTURE_QUEUE_BSS, LFDS711_MISC_DATA_STRUCTURE_QUEUE_UMM, LFDS711_MISC_DATA_STRUCTURE_RINGBUFFER, LFDS711_MISC_DATA_STRUCTURE_STACK, LFDS711_MISC_DATA_STRUCTURE_COUNT};
struct lfds711_misc_backoff_state
{
lfds711_pal_uint_t lock;
lfds711_pal_uint_t backoff_iteration_frequency_counters[2];
lfds711_pal_uint_t metric;
lfds711_pal_uint_t total_operations;
};
struct lfds711_misc_globals
{
struct lfds711_prng_state ps;
};
struct lfds711_misc_validation_info
{
lfds711_pal_uint_t min_elements;
lfds711_pal_uint_t max_elements;
};
struct lfds711_misc_globals lfds711_misc_globals;
static void lfds711_misc_force_store(void);
void lfds711_misc_query(enum lfds711_misc_query __cs_param__query_type, void *__cs_param__query_input, void *__cs_param__query_output);
#pragma prefast( disable : 28112, "blah" )
enum lfds711_btree_au_absolute_position {LFDS711_BTREE_AU_ABSOLUTE_POSITION_ROOT, LFDS711_BTREE_AU_ABSOLUTE_POSITION_SMALLEST_IN_TREE, LFDS711_BTREE_AU_ABSOLUTE_POSITION_LARGEST_IN_TREE};
enum lfds711_btree_au_existing_key {LFDS711_BTREE_AU_EXISTING_KEY_OVERWRITE, LFDS711_BTREE_AU_EXISTING_KEY_FAIL};
enum lfds711_btree_au_insert_result {LFDS711_BTREE_AU_INSERT_RESULT_FAILURE_EXISTING_KEY, LFDS711_BTREE_AU_INSERT_RESULT_SUCCESS_OVERWRITE, LFDS711_BTREE_AU_INSERT_RESULT_SUCCESS};
enum lfds711_btree_au_query {LFDS711_BTREE_AU_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_BTREE_AU_QUERY_SINGLETHREADED_VALIDATE};
enum lfds711_btree_au_relative_position {LFDS711_BTREE_AU_RELATIVE_POSITION_UP, LFDS711_BTREE_AU_RELATIVE_POSITION_LEFT, LFDS711_BTREE_AU_RELATIVE_POSITION_RIGHT, LFDS711_BTREE_AU_RELATIVE_POSITION_SMALLEST_ELEMENT_BELOW_CURRENT_ELEMENT, LFDS711_BTREE_AU_RELATIVE_POSITION_LARGEST_ELEMENT_BELOW_CURRENT_ELEMENT, LFDS711_BTREE_AU_RELATIVE_POSITION_NEXT_SMALLER_ELEMENT_IN_ENTIRE_TREE, LFDS711_BTREE_AU_RELATIVE_POSITION_NEXT_LARGER_ELEMENT_IN_ENTIRE_TREE};
struct lfds711_btree_au_element
{
struct lfds711_btree_au_element * volatile left;
struct lfds711_btree_au_element * volatile right;
struct lfds711_btree_au_element * volatile up;
void * volatile value;
void *key;
};
struct lfds711_btree_au_state
{
struct lfds711_btree_au_element * volatile root;
int (*key_compare_function)(const void *__cs_param__new_key, const void *__cs_param__existing_key);
enum lfds711_btree_au_existing_key existing_key;
void *user_state;
struct lfds711_misc_backoff_state insert_backoff;
};
void lfds711_btree_au_init_valid_on_current_logical_core(struct lfds711_btree_au_state *__cs_param__baus, 
int (*__cs_param__key_compare_function)(const void *new_key, const void *existing_key), 
enum lfds711_btree_au_existing_key __cs_param__existing_key, 
void *__cs_param__user_state);
void lfds711_btree_au_cleanup(struct lfds711_btree_au_state *__cs_param__baus, 
void (*__cs_param__element_cleanup_callback)(struct lfds711_btree_au_state *baus, struct lfds711_btree_au_element *baue));
enum lfds711_btree_au_insert_result lfds711_btree_au_insert(struct lfds711_btree_au_state *__cs_param__baus, 
struct lfds711_btree_au_element *__cs_param__baue, 
struct lfds711_btree_au_element **__cs_param__existing_baue);
int lfds711_btree_au_get_by_key(struct lfds711_btree_au_state *__cs_param__baus, 
int (*__cs_param__key_compare_function)(const void *new_key, const void *existing_key), 
void *__cs_param__key, 
struct lfds711_btree_au_element **__cs_param__baue);
int lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position(struct lfds711_btree_au_state *__cs_param__baus, 
struct lfds711_btree_au_element **__cs_param__baue, 
enum lfds711_btree_au_absolute_position __cs_param__absolute_position, 
enum lfds711_btree_au_relative_position __cs_param__relative_position);
int lfds711_btree_au_get_by_absolute_position(struct lfds711_btree_au_state *__cs_param__baus, 
struct lfds711_btree_au_element **__cs_param__baue, 
enum lfds711_btree_au_absolute_position __cs_param__absolute_position);
int lfds711_btree_au_get_by_relative_position(struct lfds711_btree_au_element **__cs_param__baue, 
enum lfds711_btree_au_relative_position __cs_param__relative_position);
void lfds711_btree_au_query(struct lfds711_btree_au_state *__cs_param__baus, 
enum lfds711_btree_au_query __cs_param__query_type, 
void *__cs_param__query_input, 
void *__cs_param__query_output);
enum lfds711_freelist_query {LFDS711_FREELIST_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_FREELIST_QUERY_SINGLETHREADED_VALIDATE, LFDS711_FREELIST_QUERY_GET_ELIMINATION_ARRAY_EXTRA_ELEMENTS_IN_FREELIST_ELEMENTS};
struct lfds711_freelist_element
{
struct lfds711_freelist_element *next;
void *key;
void *value;
};
struct lfds711_freelist_state
{
struct lfds711_freelist_element * volatile top[2];
lfds711_pal_uint_t elimination_array_size_in_elements;
struct lfds711_freelist_element * volatile (*elimination_array)[128 / (sizeof(struct lfds711_freelist_element *))];
void *user_state;
struct lfds711_misc_backoff_state pop_backoff;
struct lfds711_misc_backoff_state push_backoff;
};
void lfds711_freelist_init_valid_on_current_logical_core(struct lfds711_freelist_state *__cs_param__fs, 
struct lfds711_freelist_element * volatile (*__cs_param__elimination_array)[128 / (sizeof(struct lfds711_freelist_element *))], 
lfds711_pal_uint_t __cs_param__elimination_array_size_in_elements, 
void *__cs_param__user_state);
void lfds711_freelist_cleanup(struct lfds711_freelist_state *__cs_param__fs, 
void (*__cs_param__element_cleanup_callback)(struct lfds711_freelist_state *fs, struct lfds711_freelist_element *fe));
void lfds711_freelist_push(struct lfds711_freelist_state *__cs_param__fs, 
struct lfds711_freelist_element *__cs_param__fe, 
struct lfds711_prng_st_state *__cs_param__psts);
int lfds711_freelist_pop(struct lfds711_freelist_state *__cs_param__fs, 
struct lfds711_freelist_element **__cs_param__fe, 
struct lfds711_prng_st_state *__cs_param__psts);
void lfds711_freelist_query(struct lfds711_freelist_state *__cs_param__fs, 
enum lfds711_freelist_query __cs_param__query_type, 
void *__cs_param__query_input, 
void *__cs_param__query_output);
enum lfds711_hash_a_existing_key {LFDS711_HASH_A_EXISTING_KEY_OVERWRITE, LFDS711_HASH_A_EXISTING_KEY_FAIL};
enum lfds711_hash_a_insert_result {LFDS711_HASH_A_PUT_RESULT_FAILURE_EXISTING_KEY, LFDS711_HASH_A_PUT_RESULT_SUCCESS_OVERWRITE, LFDS711_HASH_A_PUT_RESULT_SUCCESS};
enum lfds711_hash_a_query {LFDS711_HASH_A_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_HASH_A_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_hash_a_element
{
struct lfds711_btree_au_element baue;
void *key;
void * volatile value;
};
struct lfds711_hash_a_iterate
{
struct lfds711_btree_au_element *baue;
struct lfds711_btree_au_state *baus;
struct lfds711_btree_au_state *baus_end;
};
struct lfds711_hash_a_state
{
enum lfds711_hash_a_existing_key existing_key;
int (*key_compare_function)(const void *__cs_param__new_key, const void *__cs_param__existing_key);
lfds711_pal_uint_t array_size;
struct lfds711_btree_au_state *baus_array;
void (*element_cleanup_callback)(struct lfds711_hash_a_state *__cs_param__has, struct lfds711_hash_a_element *__cs_param__hae);
void (*key_hash_function)(const void *__cs_param__key, lfds711_pal_uint_t *__cs_param__hash);
void *user_state;
};
void lfds711_hash_a_init_valid_on_current_logical_core(struct lfds711_hash_a_state *__cs_param__has, 
struct lfds711_btree_au_state *__cs_param__baus_array, 
lfds711_pal_uint_t __cs_param__array_size, 
int (*__cs_param__key_compare_function)(const void *new_key, const void *existing_key), 
void (*__cs_param__key_hash_function)(const void *key, lfds711_pal_uint_t *hash), 
enum lfds711_hash_a_existing_key __cs_param__existing_key, 
void *__cs_param__user_state);
void lfds711_hash_a_cleanup(struct lfds711_hash_a_state *__cs_param__has, 
void (*__cs_param__element_cleanup_function)(struct lfds711_hash_a_state *has, struct lfds711_hash_a_element *hae));
enum lfds711_hash_a_insert_result lfds711_hash_a_insert(struct lfds711_hash_a_state *__cs_param__has, 
struct lfds711_hash_a_element *__cs_param__hae, 
struct lfds711_hash_a_element **__cs_param__existing_hae);
int lfds711_hash_a_get_by_key(struct lfds711_hash_a_state *__cs_param__has, 
int (*__cs_param__key_compare_function)(const void *new_key, const void *existing_key), 
void (*__cs_param__key_hash_function)(const void *key, lfds711_pal_uint_t *hash), 
void *__cs_param__key, 
struct lfds711_hash_a_element **__cs_param__hae);
void lfds711_hash_a_iterate_init(struct lfds711_hash_a_state *__cs_param__has, struct lfds711_hash_a_iterate *__cs_param__hai);
int lfds711_hash_a_iterate(struct lfds711_hash_a_iterate *__cs_param__hai, struct lfds711_hash_a_element **__cs_param__hae);
void lfds711_hash_a_query(struct lfds711_hash_a_state *__cs_param__has, 
enum lfds711_hash_a_query __cs_param__query_type, 
void *__cs_param__query_input, 
void *__cs_param__query_output);
enum lfds711_list_aso_existing_key {LFDS711_LIST_ASO_EXISTING_KEY_OVERWRITE, LFDS711_LIST_ASO_EXISTING_KEY_FAIL};
enum lfds711_list_aso_insert_result {LFDS711_LIST_ASO_INSERT_RESULT_FAILURE_EXISTING_KEY, LFDS711_LIST_ASO_INSERT_RESULT_SUCCESS_OVERWRITE, LFDS711_LIST_ASO_INSERT_RESULT_SUCCESS};
enum lfds711_list_aso_query {LFDS711_LIST_ASO_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_LIST_ASO_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_list_aso_element
{
struct lfds711_list_aso_element * volatile next;
void * volatile value;
void *key;
};
struct lfds711_list_aso_state
{
struct lfds711_list_aso_element dummy_element;
struct lfds711_list_aso_element *start;
int (*key_compare_function)(const void *__cs_param__new_key, const void *__cs_param__existing_key);
enum lfds711_list_aso_existing_key existing_key;
void *user_state;
struct lfds711_misc_backoff_state insert_backoff;
};
void lfds711_list_aso_init_valid_on_current_logical_core(struct lfds711_list_aso_state *__cs_param__lasos, 
int (*__cs_param__key_compare_function)(const void *new_key, const void *existing_key), 
enum lfds711_list_aso_existing_key __cs_param__existing_key, 
void *__cs_param__user_state);
void lfds711_list_aso_cleanup(struct lfds711_list_aso_state *__cs_param__lasos, 
void (*__cs_param__element_cleanup_callback)(struct lfds711_list_aso_state *lasos, struct lfds711_list_aso_element *lasoe));
enum lfds711_list_aso_insert_result lfds711_list_aso_insert(struct lfds711_list_aso_state *__cs_param__lasos, 
struct lfds711_list_aso_element *__cs_param__lasoe, 
struct lfds711_list_aso_element **__cs_param__existing_lasoe);
int lfds711_list_aso_get_by_key(struct lfds711_list_aso_state *__cs_param__lasos, 
void *__cs_param__key, 
struct lfds711_list_aso_element **__cs_param__lasoe);
void lfds711_list_aso_query(struct lfds711_list_aso_state *__cs_param__lasos, 
enum lfds711_list_aso_query __cs_param__query_type, 
void *__cs_param__query_input, 
void *__cs_param__query_output);
enum lfds711_list_asu_position {LFDS711_LIST_ASU_POSITION_START, LFDS711_LIST_ASU_POSITION_END, LFDS711_LIST_ASU_POSITION_AFTER};
enum lfds711_list_asu_query {LFDS711_LIST_ASU_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_LIST_ASU_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_list_asu_element
{
struct lfds711_list_asu_element * volatile next;
void * volatile value;
void *key;
};
struct lfds711_list_asu_state
{
struct lfds711_list_asu_element dummy_element;
struct lfds711_list_asu_element * volatile end;
struct lfds711_list_asu_element *start;
void *user_state;
struct lfds711_misc_backoff_state after_backoff;
struct lfds711_misc_backoff_state end_backoff;
struct lfds711_misc_backoff_state start_backoff;
};
void lfds711_list_asu_init_valid_on_current_logical_core(struct lfds711_list_asu_state *__cs_param__lasus, 
void *__cs_param__user_state);
void lfds711_list_asu_cleanup(struct lfds711_list_asu_state *__cs_param__lasus, 
void (*__cs_param__element_cleanup_callback)(struct lfds711_list_asu_state *lasus, struct lfds711_list_asu_element *lasue));
void lfds711_list_asu_insert_at_position(struct lfds711_list_asu_state *__cs_param__lasus, 
struct lfds711_list_asu_element *__cs_param__lasue, 
struct lfds711_list_asu_element *__cs_param__lasue_predecessor, 
enum lfds711_list_asu_position __cs_param__position);
void lfds711_list_asu_insert_at_start(struct lfds711_list_asu_state *__cs_param__lasus, 
struct lfds711_list_asu_element *__cs_param__lasue);
void lfds711_list_asu_insert_at_end(struct lfds711_list_asu_state *__cs_param__lasus, 
struct lfds711_list_asu_element *__cs_param__lasue);
void lfds711_list_asu_insert_after_element(struct lfds711_list_asu_state *__cs_param__lasus, 
struct lfds711_list_asu_element *__cs_param__lasue, 
struct lfds711_list_asu_element *__cs_param__lasue_predecessor);
int lfds711_list_asu_get_by_key(struct lfds711_list_asu_state *__cs_param__lasus, 
int (*__cs_param__key_compare_function)(const void *new_key, const void *existing_key), 
void *__cs_param__key, 
struct lfds711_list_asu_element **__cs_param__lasue);
void lfds711_list_asu_query(struct lfds711_list_asu_state *__cs_param__lasus, 
enum lfds711_list_asu_query __cs_param__query_type, 
void *__cs_param__query_input, 
void *__cs_param__query_output);
enum lfds711_queue_bmm_query {LFDS711_QUEUE_BMM_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_QUEUE_BMM_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_queue_bmm_element
{
lfds711_pal_uint_t sequence_number;
void * volatile key;
void * volatile value;
};
struct lfds711_queue_bmm_state
{
lfds711_pal_uint_t number_elements;
lfds711_pal_uint_t mask;
lfds711_pal_uint_t read_index;
lfds711_pal_uint_t write_index;
struct lfds711_queue_bmm_element *element_array;
void *user_state;
struct lfds711_misc_backoff_state dequeue_backoff;
struct lfds711_misc_backoff_state enqueue_backoff;
};
void lfds711_queue_bmm_init_valid_on_current_logical_core(struct lfds711_queue_bmm_state *__cs_param__qbmms, 
struct lfds711_queue_bmm_element *__cs_param__element_array, 
lfds711_pal_uint_t __cs_param__number_elements, 
void *__cs_param__user_state);
void lfds711_queue_bmm_cleanup(struct lfds711_queue_bmm_state *__cs_param__qbmms, 
void (*__cs_param__element_cleanup_callback)(struct lfds711_queue_bmm_state *qbmms, 
void *key, 
void *value));
int lfds711_queue_bmm_enqueue(struct lfds711_queue_bmm_state *__cs_param__qbmms, 
void *__cs_param__key, 
void *__cs_param__value);
int lfds711_queue_bmm_dequeue(struct lfds711_queue_bmm_state *__cs_param__qbmms, 
void **__cs_param__key, 
void **__cs_param__value);
void lfds711_queue_bmm_query(struct lfds711_queue_bmm_state *__cs_param__qbmms, 
enum lfds711_queue_bmm_query __cs_param__query_type, 
void *__cs_param__query_input, 
void *__cs_param__query_output);
enum lfds711_queue_bss_query {LFDS711_QUEUE_BSS_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_QUEUE_BSS_QUERY_VALIDATE};
struct lfds711_queue_bss_element
{
void * volatile key;
void * volatile value;
};
struct lfds711_queue_bss_state
{
lfds711_pal_uint_t number_elements;
lfds711_pal_uint_t mask;
lfds711_pal_uint_t read_index;
lfds711_pal_uint_t write_index;
struct lfds711_queue_bss_element *element_array;
void *user_state;
};
void lfds711_queue_bss_init_valid_on_current_logical_core(struct lfds711_queue_bss_state *__cs_param__qbsss, 
struct lfds711_queue_bss_element *__cs_param__element_array, 
lfds711_pal_uint_t __cs_param__number_elements, 
void *__cs_param__user_state);
void lfds711_queue_bss_cleanup(struct lfds711_queue_bss_state *__cs_param__qbsss, 
void (*__cs_param__element_cleanup_callback)(struct lfds711_queue_bss_state *qbsss, void *key, void *value));
int lfds711_queue_bss_enqueue(struct lfds711_queue_bss_state *__cs_param__qbsss, 
void *__cs_param__key, 
void *__cs_param__value);
int lfds711_queue_bss_dequeue(struct lfds711_queue_bss_state *__cs_param__qbsss, 
void **__cs_param__key, 
void **__cs_param__value);
void lfds711_queue_bss_query(struct lfds711_queue_bss_state *__cs_param__qbsss, 
enum lfds711_queue_bss_query __cs_param__query_type, 
void *__cs_param__query_input, 
void *__cs_param__query_output);
enum lfds711_queue_umm_query {LFDS711_QUEUE_UMM_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_QUEUE_UMM_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_queue_umm_element
{
struct lfds711_queue_umm_element * volatile next[2];
void *key;
void *value;
};
struct lfds711_queue_umm_state
{
struct lfds711_queue_umm_element * volatile enqueue[2];
struct lfds711_queue_umm_element * volatile dequeue[2];
lfds711_pal_uint_t aba_counter;
void *user_state;
struct lfds711_misc_backoff_state dequeue_backoff;
struct lfds711_misc_backoff_state enqueue_backoff;
};
void lfds711_queue_umm_init_valid_on_current_logical_core(struct lfds711_queue_umm_state *__cs_param__qumms, 
struct lfds711_queue_umm_element *__cs_param__qumme_dummy, 
void *__cs_param__user_state);
void lfds711_queue_umm_cleanup(struct lfds711_queue_umm_state *__cs_param__qumms, 
void (*__cs_param__element_cleanup_callback)(struct lfds711_queue_umm_state *qumms, struct lfds711_queue_umm_element *qumme, enum lfds711_misc_flag dummy_element_flag));
void lfds711_queue_umm_enqueue(struct lfds711_queue_umm_state *__cs_param__qumms, 
struct lfds711_queue_umm_element *__cs_param__qumme);
int lfds711_queue_umm_dequeue(struct lfds711_queue_umm_state *__cs_param__qumms, 
struct lfds711_queue_umm_element **__cs_param__qumme);
void lfds711_queue_umm_query(struct lfds711_queue_umm_state *__cs_param__qumms, 
enum lfds711_queue_umm_query __cs_param__query_type, 
void *__cs_param__query_input, 
void *__cs_param__query_output);
enum lfds711_ringbuffer_query {LFDS711_RINGBUFFER_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_RINGBUFFER_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_ringbuffer_element
{
struct lfds711_freelist_element fe;
struct lfds711_queue_umm_element qumme;
struct lfds711_queue_umm_element *qumme_use;
void *key;
void *value;
};
struct lfds711_ringbuffer_state
{
struct lfds711_freelist_state fs;
struct lfds711_queue_umm_state qumms;
void (*element_cleanup_callback)(struct lfds711_ringbuffer_state *__cs_param__rs, void *__cs_param__key, void *__cs_param__value, enum lfds711_misc_flag __cs_param__unread_flag);
void *user_state;
};
void lfds711_ringbuffer_init_valid_on_current_logical_core(struct lfds711_ringbuffer_state *__cs_param__rs, 
struct lfds711_ringbuffer_element *__cs_param__re_array_inc_dummy, 
lfds711_pal_uint_t __cs_param__number_elements_inc_dummy, 
void *__cs_param__user_state);
void lfds711_ringbuffer_cleanup(struct lfds711_ringbuffer_state *__cs_param__rs, 
void (*__cs_param__element_cleanup_callback)(struct lfds711_ringbuffer_state *rs, void *key, void *value, enum lfds711_misc_flag unread_flag));
int lfds711_ringbuffer_read(struct lfds711_ringbuffer_state *__cs_param__rs, 
void **__cs_param__key, 
void **__cs_param__value);
void lfds711_ringbuffer_write(struct lfds711_ringbuffer_state *__cs_param__rs, 
void *__cs_param__key, 
void *__cs_param__value, 
enum lfds711_misc_flag *__cs_param__overwrite_occurred_flag, 
void **__cs_param__overwritten_key, 
void **__cs_param__overwritten_value);
void lfds711_ringbuffer_query(struct lfds711_ringbuffer_state *__cs_param__rs, 
enum lfds711_ringbuffer_query __cs_param__query_type, 
void *__cs_param__query_input, 
void *__cs_param__query_output);
enum lfds711_stack_query {LFDS711_STACK_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_STACK_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_stack_element
{
struct lfds711_stack_element *next;
void *key;
void *value;
};
struct lfds711_stack_state
{
struct lfds711_stack_element * volatile top[2];
void *user_state;
struct lfds711_misc_backoff_state pop_backoff;
struct lfds711_misc_backoff_state push_backoff;
};
void lfds711_stack_init_valid_on_current_logical_core(struct lfds711_stack_state *__cs_param__ss, 
void *__cs_param__user_state);
void lfds711_stack_cleanup(struct lfds711_stack_state *__cs_param__ss, 
void (*__cs_param__element_cleanup_callback)(struct lfds711_stack_state *ss, struct lfds711_stack_element *se));
void lfds711_stack_push(struct lfds711_stack_state *__cs_param__ss, 
struct lfds711_stack_element *__cs_param__se);
int lfds711_stack_pop(struct lfds711_stack_state *__cs_param__ss, 
struct lfds711_stack_element **__cs_param__se);
void lfds711_stack_query(struct lfds711_stack_state *__cs_param__ss, 
enum lfds711_stack_query __cs_param__query_type, 
void *__cs_param__query_input, 
void *__cs_param__query_output);
#pragma warning( pop )
void lfds711_misc_internal_backoff_init(struct lfds711_misc_backoff_state *__cs_param__bs);
_Bool __CSEQ_atomic_compare_and_exchange(int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_mptr, int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_eptr, int long long unsigned __cs_param___CSEQ_atomic_compare_and_exchange_newval, _Bool __cs_param___CSEQ_atomic_compare_and_exchange_weak_p, int __cs_param___CSEQ_atomic_compare_and_exchange_sm, int __cs_param___CSEQ_atomic_compare_and_exchange_fm)
{
;
static _Bool __cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_0;
__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___CSEQ_atomic_compare_and_exchange_mptr) == (*__cs_param___CSEQ_atomic_compare_and_exchange_eptr);
if (__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_0)
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
unsigned long __CSEQ_atomic_exchange(int long long unsigned *__cs_param___CSEQ_atomic_exchange_previous, int long long unsigned __cs_param___CSEQ_atomic_exchange_new, int __cs_param___CSEQ_atomic_exchange_memorder)
{
static unsigned long int __cs_local___CSEQ_atomic_exchange_old;
__cs_local___CSEQ_atomic_exchange_old = *__cs_param___CSEQ_atomic_exchange_previous;
*__cs_param___CSEQ_atomic_exchange_previous = __cs_param___CSEQ_atomic_exchange_new;
return __cs_local___CSEQ_atomic_exchange_old;
}
int __CSEQ_atomic_swap_stack_top(struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_top, struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_oldtop, 
struct lfds711_stack_element **__cs_param___CSEQ_atomic_swap_stack_top_newtop)
{
;
static _Bool __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_1;
__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param___CSEQ_atomic_swap_stack_top_oldtop) == (*__cs_param___CSEQ_atomic_swap_stack_top_top);
if (__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_1)
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
__cs_mutex_t lock;
typedef struct NODE_PAYLOAD_S
{
struct lfds711_stack_element se;
int long long unsigned user_id;
} NODE_PAYLOAD_T;
typedef struct LIST_NODE_S
{
struct LIST_NODE_S *next;
NODE_PAYLOAD_T payload;
} LIST_NODE_T;
struct lfds711_stack_state ss;
struct test_data
{
struct lfds711_stack_element se;
int long long unsigned user_id;
};
void *push_0(void *__cs_param_push___cs_unused)
{
static struct test_data *__cs_local_push_td;
static int long long unsigned __cs_local_push_loop;
__cs_local_push_td = __cs_safe_malloc((sizeof(struct test_data)) * 10);
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
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
__cs_mutex_unlock(&lock);
;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                                {
                                        {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                                                {
;
                                                }
__cs_local_exponential_backoff_loop++;
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
__cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 1000;
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
__CSEQ_assume(!(__cs_local_push_loop < 10));
        __exit_loop_1:
        ;
__exit_push:
;
__cs_exit(0);
}
void *pop_0(void *__cs_param_pop___cs_unused)
{
static struct lfds711_stack_element *__cs_local_pop_se;
static struct test_data *__cs_local_pop_temp_td;
static int __cs_local_pop_res;
static int __cs_local_pop_count;
__cs_local_pop_count = 0;
static int __cs_local_pop_loop;
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
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__cs_mutex_unlock(&lock);
;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                                {
                                        {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                                                {
;
                                                }
__cs_local_exponential_backoff_loop++;
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                __exit_loop_6:
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
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                                {
goto __exit_loop_5;
                                }
                        }
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
__CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                        __exit_loop_5:
                        ;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
                        {
                                goto __exit_loop_7;
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
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__cs_mutex_unlock(&lock);
;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                                {
                                        {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                                                {
;
                                                }
__cs_local_exponential_backoff_loop++;
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                __exit_loop_8:
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
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                                {
goto __exit_loop_7;
                                }
                        }
__CSEQ_assume(
!(__cs_local_lfds711_stack_pop_result == 0));
                        __exit_loop_7:
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
static _Bool __cs_local_pop___cs_tmp_if_cond_44;
__cs_local_pop___cs_tmp_if_cond_44 = __cs_local_pop_res == 0;
if (__cs_local_pop___cs_tmp_if_cond_44)
                {
goto __continue_0_loop_4;
                }
__cs_local_pop_temp_td = (*__cs_local_pop_se).value;
__cs_local_pop_count++;
        }
__cs_local_pop_loop++;
__continue_0_loop_4:
        ;
__CSEQ_assume(!(__cs_local_pop_loop < 10));
        __exit_loop_4:
        ;
__exit_pop:
;
__cs_exit(0);
}
int main()
{
static LIST_NODE_T *__cs_local_main_listHead;
__cs_local_main_listHead = 0;
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
(void) __atomic_exchange_n(&__cs_local_lfds711_misc_force_store_destination, 0, 0);
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
static LIST_NODE_T *__cs_retval__createList_1;
        {
static LIST_NODE_T *__cs_param_createList_listHead;
__cs_param_createList_listHead = __cs_local_main_listHead;
static struct lfds711_stack_element *__cs_local_createList_se;
static struct test_data *__cs_local_createList_temp_td;
static int __cs_local_createList_res;
static int __cs_retval__lfds711_stack_pop_2;
                {
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
__cs_param_lfds711_stack_pop_ss = &ss;
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
__cs_param_lfds711_stack_pop_se = &__cs_local_createList_se;
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
__cs_retval__lfds711_stack_pop_2 = 0;
goto __exit__lfds711_stack_pop_2;
                                }
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__cs_mutex_lock(&lock);
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__cs_mutex_unlock(&lock);
;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                                {
                                        {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                                                {
;
                                                }
__cs_local_exponential_backoff_loop++;
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                __exit_loop_10:
                                                ;
__exit__exponential_backoff_4_0:
;
                                        }
__cs_mutex_lock(&lock);
__cs_mutex_unlock(&lock);
                                }
__cs_local_lfds711_stack_pop_i++;
;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                                {
goto __exit_loop_9;
                                }
                        }
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
__CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                        __exit_loop_9:
                        ;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
                        {
                                goto __exit_loop_11;
                        }
                        {
;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                                {
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_2 = 0;
goto __exit__lfds711_stack_pop_2;
                                }
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__cs_mutex_lock(&lock);
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__cs_mutex_unlock(&lock);
;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                                {
                                        {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                                                {
;
                                                }
__cs_local_exponential_backoff_loop++;
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                __exit_loop_12:
                                                ;
__exit__exponential_backoff_5_0:
;
                                        }
__cs_mutex_lock(&lock);
__cs_mutex_unlock(&lock);
                                }
__cs_local_lfds711_stack_pop_i++;
;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                                {
goto __exit_loop_11;
                                }
                        }
__CSEQ_assume(
!(__cs_local_lfds711_stack_pop_result == 0));
                        __exit_loop_11:
                        ;
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
__cs_retval__lfds711_stack_pop_2 = 1;
goto __exit__lfds711_stack_pop_2;
__exit__lfds711_stack_pop_2:
;
                }
__cs_local_createList_res = __cs_retval__lfds711_stack_pop_2;
if (!(__cs_local_createList_res != 0))
                {
                        goto __exit_loop_13;
                }
                {
__cs_local_createList_temp_td = (*__cs_local_createList_se).value;
static int __cs_retval__LIST_InsertHeadNode_1;
                        {
static LIST_NODE_T **__cs_param_LIST_InsertHeadNode_IO_head;
__cs_param_LIST_InsertHeadNode_IO_head = &__cs_param_createList_listHead;
static struct lfds711_stack_element __cs_param_LIST_InsertHeadNode_I__se;
__cs_param_LIST_InsertHeadNode_I__se = (*__cs_local_createList_temp_td).se;
static int long long unsigned __cs_param_LIST_InsertHeadNode_I__user_id;
__cs_param_LIST_InsertHeadNode_I__user_id = (*__cs_local_createList_temp_td).user_id;
static int __cs_local_LIST_InsertHeadNode_rCode;
__cs_local_LIST_InsertHeadNode_rCode = 0;
static LIST_NODE_T *__cs_local_LIST_InsertHeadNode_newNode;
__cs_local_LIST_InsertHeadNode_newNode = 0;
__cs_local_LIST_InsertHeadNode_newNode = __cs_safe_malloc(sizeof(*__cs_local_LIST_InsertHeadNode_newNode));
;
static _Bool __cs_local_LIST_InsertHeadNode___cs_tmp_if_cond_21;
__cs_local_LIST_InsertHeadNode___cs_tmp_if_cond_21 = 0 == __cs_local_LIST_InsertHeadNode_newNode;
if (__cs_local_LIST_InsertHeadNode___cs_tmp_if_cond_21)
                                {
__cs_local_LIST_InsertHeadNode_rCode = ENOMEM;
fprintf(stderr, "malloc() failed.\n");
goto CLEANUP_LIST_InsertHeadNode_0_0;
                                }
(*__cs_local_LIST_InsertHeadNode_newNode).payload.se = __cs_param_LIST_InsertHeadNode_I__se;
(*__cs_local_LIST_InsertHeadNode_newNode).payload.user_id = __cs_param_LIST_InsertHeadNode_I__user_id;
(*__cs_local_LIST_InsertHeadNode_newNode).next = *__cs_param_LIST_InsertHeadNode_IO_head;
*__cs_param_LIST_InsertHeadNode_IO_head = __cs_local_LIST_InsertHeadNode_newNode;
CLEANUP_LIST_InsertHeadNode_0_0:
__cs_retval__LIST_InsertHeadNode_1 = __cs_local_LIST_InsertHeadNode_rCode;
goto __exit__LIST_InsertHeadNode_1_0;
__exit__LIST_InsertHeadNode_1_0:
;
                        }
__cs_retval__LIST_InsertHeadNode_1;
static int __cs_retval__lfds711_stack_pop_3;
                        {
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
__cs_param_lfds711_stack_pop_ss = &ss;
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
__cs_param_lfds711_stack_pop_se = &__cs_local_createList_se;
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
__cs_retval__lfds711_stack_pop_3 = 0;
goto __exit__lfds711_stack_pop_3_0;
                                        }
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__cs_mutex_lock(&lock);
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__cs_mutex_unlock(&lock);
;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                                        {
                                                {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                                                        {
;
                                                        }
__cs_local_exponential_backoff_loop++;
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        __exit_loop_15:
                                                        ;
__exit__exponential_backoff_6_0:
;
                                                }
__cs_mutex_lock(&lock);
__cs_mutex_unlock(&lock);
                                        }
__cs_local_lfds711_stack_pop_i++;
;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                                        {
goto __exit_loop_14;
                                        }
                                }
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
__CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                __exit_loop_14:
                                ;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
                                {
                                        goto __exit_loop_16;
                                }
                                {
;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                                        {
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_3 = 0;
goto __exit__lfds711_stack_pop_3_0;
                                        }
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__cs_mutex_lock(&lock);
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__cs_mutex_unlock(&lock);
;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                                        {
                                                {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                                                        {
;
                                                        }
__cs_local_exponential_backoff_loop++;
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        __exit_loop_17:
                                                        ;
__exit__exponential_backoff_7_0:
;
                                                }
__cs_mutex_lock(&lock);
__cs_mutex_unlock(&lock);
                                        }
__cs_local_lfds711_stack_pop_i++;
;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                                        {
goto __exit_loop_16;
                                        }
                                }
__CSEQ_assume(
!(__cs_local_lfds711_stack_pop_result == 0));
                                __exit_loop_16:
                                ;
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
__cs_retval__lfds711_stack_pop_3 = 1;
goto __exit__lfds711_stack_pop_3_0;
__exit__lfds711_stack_pop_3_0:
;
                        }
__cs_local_createList_res = __cs_retval__lfds711_stack_pop_3;
                }
__CSEQ_assume(!(__cs_local_createList_res != 0));
                __exit_loop_13:
                ;
__cs_retval__createList_1 = __cs_param_createList_listHead;
goto __exit__createList_1;
__exit__createList_1:
;
        }
__cs_local_main_listHead = __cs_retval__createList_1;
        {
static char *__cs_param_readFile_filename;
__cs_param_readFile_filename = "foo.txt";
static LIST_NODE_T *__cs_param_readFile_listHead;
__cs_param_readFile_listHead = __cs_local_main_listHead;
static char *__cs_local_readFile_line;
__cs_local_readFile_line = 0;
static size_t __cs_local_readFile_len;
__cs_local_readFile_len = 0;
static ssize_t __cs_local_readFile_read;
static LIST_NODE_T *__cs_local_readFile_parent;
__cs_local_readFile_parent = 0;
static LIST_NODE_T *__cs_local_readFile_curNode;
__cs_local_readFile_curNode = __cs_param_readFile_listHead;
static char __cs_local_readFile_delim[] = ",";
static int __cs_local_readFile_i;
__cs_local_readFile_i = 0;
static int __cs_local_readFile_size;
static int __cs_retval__GetListSize_1;
                {
static LIST_NODE_T *__cs_param_GetListSize_head;
__cs_param_GetListSize_head = __cs_local_readFile_curNode;
static LIST_NODE_T *__cs_local_GetListSize_cur;
__cs_local_GetListSize_cur = __cs_param_GetListSize_head;
static int __cs_local_GetListSize_nodeCnt;
__cs_local_GetListSize_nodeCnt = 0;
if (!__cs_local_GetListSize_cur)
                        {
                                goto __exit_loop_18;
                        }
                        {
++__cs_local_GetListSize_nodeCnt;
__cs_local_GetListSize_cur = (*__cs_local_GetListSize_cur).next;
                        }
__CSEQ_assume(!__cs_local_GetListSize_cur);
                        __exit_loop_18:
                        ;
__cs_retval__GetListSize_1 = __cs_local_GetListSize_nodeCnt;
goto __exit__GetListSize_1;
__exit__GetListSize_1:
;
                }
__cs_local_readFile_size = __cs_retval__GetListSize_1;
static FILE *__cs_local_readFile_fp;
__cs_local_readFile_fp = fopen(__cs_param_readFile_filename, "r");
;
static _Bool __cs_local_readFile___cs_tmp_if_cond_45;
__cs_local_readFile___cs_tmp_if_cond_45 = !__cs_local_readFile_fp;
if (__cs_local_readFile___cs_tmp_if_cond_45)
                {
                        {
static char *__cs_param_writeIntofile_filename;
__cs_param_writeIntofile_filename = __cs_param_readFile_filename;
static LIST_NODE_T *__cs_param_writeIntofile_listHead;
__cs_param_writeIntofile_listHead = __cs_param_readFile_listHead;
static int __cs_local_writeIntofile_filefd;
__cs_local_writeIntofile_filefd = open(__cs_param_writeIntofile_filename, (O_WRONLY | O_CREAT) | O_APPEND, 0666);
static int __cs_local_writeIntofile_saved;
__cs_local_writeIntofile_saved = dup(1);
close(1);
dup(__cs_local_writeIntofile_filefd);
static int __cs_retval__PrintListPayloads_1;
                                {
static LIST_NODE_T *__cs_param_PrintListPayloads_head;
__cs_param_PrintListPayloads_head = __cs_param_writeIntofile_listHead;
static int __cs_local_PrintListPayloads_rCode;
__cs_local_PrintListPayloads_rCode = 0;
static LIST_NODE_T *__cs_local_PrintListPayloads_cur;
__cs_local_PrintListPayloads_cur = __cs_param_PrintListPayloads_head;
if (!__cs_local_PrintListPayloads_cur)
                                        {
                                                goto __exit_loop_19;
                                        }
                                        {
printf("%lld", (*__cs_local_PrintListPayloads_cur).payload.user_id);
__cs_local_PrintListPayloads_cur = (*__cs_local_PrintListPayloads_cur).next;
;
static _Bool __cs_local_PrintListPayloads___cs_tmp_if_cond_22;
__cs_local_PrintListPayloads___cs_tmp_if_cond_22 = __cs_local_PrintListPayloads_cur != 0;
if (__cs_local_PrintListPayloads___cs_tmp_if_cond_22)
                                                {
printf(",");
                                                }
                                        }
__CSEQ_assume(!__cs_local_PrintListPayloads_cur);
                                        __exit_loop_19:
                                        ;
printf("\n");
__cs_retval__PrintListPayloads_1 = __cs_local_PrintListPayloads_rCode;
goto __exit__PrintListPayloads_1;
__exit__PrintListPayloads_1:
;
                                }
__cs_retval__PrintListPayloads_1;
close(__cs_local_writeIntofile_filefd);
fflush(stdout);
dup2(__cs_local_writeIntofile_saved, 1);
close(__cs_local_writeIntofile_saved);
__exit__writeIntofile_1:
;
                        }
__CSEQ_assert(0);
goto __exit__readFile_1;
                }
if (!((__cs_local_readFile_read = getline(&__cs_local_readFile_line, &__cs_local_readFile_len, __cs_local_readFile_fp)) != (-1)))
                {
                        goto __exit_loop_20;
                }
                {
static char *__cs_local_readFile_ptr;
__cs_local_readFile_ptr = strtok(__cs_local_readFile_line, __cs_local_readFile_delim);
if (!__cs_local_readFile_curNode)
                        {
                                goto __exit_loop_21;
                        }
                        {
;
static _Bool __cs_local_readFile___cs_tmp_if_cond_46;
__cs_local_readFile___cs_tmp_if_cond_46 = (*__cs_local_readFile_curNode).payload.user_id != atoi(__cs_local_readFile_ptr);
if (__cs_local_readFile___cs_tmp_if_cond_46)
                                {
goto __exit_loop_21;
                                }
__cs_local_readFile_i++;
__cs_local_readFile_parent = __cs_local_readFile_curNode;
__cs_local_readFile_curNode = (*__cs_local_readFile_curNode).next;
__cs_local_readFile_ptr = strtok(0, __cs_local_readFile_delim);
                        }
__CSEQ_assume(!__cs_local_readFile_curNode);
                        __exit_loop_21:
                        ;
;
static _Bool __cs_local_readFile___cs_tmp_if_cond_47;
__cs_local_readFile___cs_tmp_if_cond_47 = __cs_local_readFile_i == __cs_local_readFile_size;
if (__cs_local_readFile___cs_tmp_if_cond_47)
                        {
fclose(__cs_local_readFile_fp);
goto __exit__readFile_1;
                        }
__cs_local_readFile_i = 0;
                }
__CSEQ_assume(!((__cs_local_readFile_read = getline(&__cs_local_readFile_line, &__cs_local_readFile_len, __cs_local_readFile_fp)) != (-1)));
                __exit_loop_20:
                ;
;
static _Bool __cs_local_readFile___cs_tmp_if_cond_48;
__cs_local_readFile___cs_tmp_if_cond_48 = __cs_local_readFile_i != __cs_local_readFile_size;
if (__cs_local_readFile___cs_tmp_if_cond_48)
                {
                        {
static char *__cs_param_writeIntofile_filename;
__cs_param_writeIntofile_filename = __cs_param_readFile_filename;
static LIST_NODE_T *__cs_param_writeIntofile_listHead;
__cs_param_writeIntofile_listHead = __cs_param_readFile_listHead;
static int __cs_local_writeIntofile_filefd;
__cs_local_writeIntofile_filefd = open(__cs_param_writeIntofile_filename, (O_WRONLY | O_CREAT) | O_APPEND, 0666);
static int __cs_local_writeIntofile_saved;
__cs_local_writeIntofile_saved = dup(1);
close(1);
dup(__cs_local_writeIntofile_filefd);
static int __cs_retval__PrintListPayloads_2;
                                {
static LIST_NODE_T *__cs_param_PrintListPayloads_head;
__cs_param_PrintListPayloads_head = __cs_param_writeIntofile_listHead;
static int __cs_local_PrintListPayloads_rCode;
__cs_local_PrintListPayloads_rCode = 0;
static LIST_NODE_T *__cs_local_PrintListPayloads_cur;
__cs_local_PrintListPayloads_cur = __cs_param_PrintListPayloads_head;
if (!__cs_local_PrintListPayloads_cur)
                                        {
                                                goto __exit_loop_22;
                                        }
                                        {
printf("%lld", (*__cs_local_PrintListPayloads_cur).payload.user_id);
__cs_local_PrintListPayloads_cur = (*__cs_local_PrintListPayloads_cur).next;
;
static _Bool __cs_local_PrintListPayloads___cs_tmp_if_cond_22;
__cs_local_PrintListPayloads___cs_tmp_if_cond_22 = __cs_local_PrintListPayloads_cur != 0;
if (__cs_local_PrintListPayloads___cs_tmp_if_cond_22)
                                                {
printf(",");
                                                }
                                        }
__CSEQ_assume(!__cs_local_PrintListPayloads_cur);
                                        __exit_loop_22:
                                        ;
printf("\n");
__cs_retval__PrintListPayloads_2 = __cs_local_PrintListPayloads_rCode;
goto __exit__PrintListPayloads_2;
__exit__PrintListPayloads_2:
;
                                }
__cs_retval__PrintListPayloads_2;
close(__cs_local_writeIntofile_filefd);
fflush(stdout);
dup2(__cs_local_writeIntofile_saved, 1);
close(__cs_local_writeIntofile_saved);
__exit__writeIntofile_2:
;
                        }
__CSEQ_assert(0);
goto __exit__readFile_1;
                }
__exit__readFile_1:
;
        }
goto __exit_main;
__exit_main:
;
__cs_exit(0);
}
