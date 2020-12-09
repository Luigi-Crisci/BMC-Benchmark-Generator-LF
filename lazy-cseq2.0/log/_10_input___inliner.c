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
void lfds711_misc_force_store()
{
lfds711_pal_uint_t __cs_local_lfds711_misc_force_store_destination;
        {
(void) __atomic_exchange_n(&__cs_local_lfds711_misc_force_store_destination, 0, 0);
        }
;
return;
}
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
__cs_mutex_t library_lock;
void exponential_backoff()
{
int __cs_local_exponential_backoff_loop;
for (__cs_local_exponential_backoff_loop = 0; __cs_local_exponential_backoff_loop < 10; __cs_local_exponential_backoff_loop++)
        {
;
        }
}
int __CSEQ_atomic_swap_stack_top(struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_top, struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_oldtop, 
struct lfds711_stack_element **__cs_param___CSEQ_atomic_swap_stack_top_newtop)
{
;
        _Bool __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0;
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
void lfds711_misc_internal_backoff_init(struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs)
{
;
        _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
        __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)
        {
char *__cs_local_lfds711_misc_internal_backoff_init_c;
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
        }
;
;
;
        _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
        __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)
        {
char *__cs_local_lfds711_misc_internal_backoff_init_c;
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
return;
}
void lfds711_stack_init_valid_on_current_logical_core(struct lfds711_stack_state *__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss, 
void *__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state)
{
__cs_mutex_init(&library_lock, 0);
;
        _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3;
        __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3 = !(__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss != 0);
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3)
        {
char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
        }
;
;
;
        _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4;
        __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4 = !((((lfds711_pal_uint_t) (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top) % 128) == 0);
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4)
        {
char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
        }
;
;
;
        _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5;
        __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state)) % 128) == 0);
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5)
        {
char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
        }
;
;
__cs_mutex_lock(&library_lock);
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[0] = 0;
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[1] = 0;
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state = __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
lfds711_misc_internal_backoff_init(&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).pop_backoff);
lfds711_misc_internal_backoff_init(&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).push_backoff);
lfds711_misc_force_store();
__cs_mutex_unlock(&library_lock);
return;
}
int lfds711_stack_pop(struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss, 
struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se)
{
char unsigned __cs_local_lfds711_stack_pop_result;
lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)
        {
char *__cs_local_lfds711_stack_pop_c;
__cs_local_lfds711_stack_pop_c = 0;
*__cs_local_lfds711_stack_pop_c = 0;
        }
;
;
;
        _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
        __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)
        {
char *__cs_local_lfds711_stack_pop_c;
__cs_local_lfds711_stack_pop_c = 0;
*__cs_local_lfds711_stack_pop_c = 0;
        }
;
;
__cs_mutex_lock(&library_lock);
__cs_mutex_unlock(&library_lock);
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
int __cs_local_lfds711_stack_pop_i;
__cs_local_lfds711_stack_pop_i = 0;
;
int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
for (__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0; __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1; __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++)
        {
;
                _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
                {
*__cs_param_lfds711_stack_pop_se = 0;
return 0;
                }
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__cs_mutex_lock(&library_lock);
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__cs_mutex_unlock(&library_lock);
;
                _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
                {
exponential_backoff();
__cs_mutex_lock(&library_lock);
__cs_mutex_unlock(&library_lock);
                }
__cs_local_lfds711_stack_pop_i++;
;
                _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                {
break;
                }
        }
while (
__cs_local_lfds711_stack_pop_result == 0)
        {
;
                _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
*__cs_param_lfds711_stack_pop_se = 0;
return 0;
                }
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__cs_mutex_lock(&library_lock);
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__cs_mutex_unlock(&library_lock);
;
                _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
exponential_backoff();
__cs_mutex_lock(&library_lock);
__cs_mutex_unlock(&library_lock);
                }
__cs_local_lfds711_stack_pop_i++;
;
                _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
break;
                }
        }
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
return __cs_local_lfds711_stack_pop_result;
}
void lfds711_stack_push(struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss, 
struct lfds711_stack_element *__cs_param_lfds711_stack_push_se)
{
char unsigned __cs_local_lfds711_stack_push_result;
lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
__cs_local_lfds711_stack_push_backoff_iteration = 0;
struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
;
        _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
        __cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)
        {
char *__cs_local_lfds711_stack_push_c;
__cs_local_lfds711_stack_push_c = 0;
*__cs_local_lfds711_stack_push_c = 0;
        }
;
;
;
        _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
        __cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)
        {
char *__cs_local_lfds711_stack_push_c;
__cs_local_lfds711_stack_push_c = 0;
*__cs_local_lfds711_stack_push_c = 0;
        }
;
;
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
__cs_local_lfds711_stack_push_result = 0;
int __cs_local_lfds711_stack_push_i;
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
                _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
                {
exponential_backoff();
                }
__cs_local_lfds711_stack_push_i++;
;
                _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                __cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
break;
                }
        }
return;
}
_Bool __CSEQ_atomic_compare_and_exchange(int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_mptr, int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_eptr, int long long unsigned __cs_param___CSEQ_atomic_compare_and_exchange_newval, _Bool __cs_param___CSEQ_atomic_compare_and_exchange_weak_p, int __cs_param___CSEQ_atomic_compare_and_exchange_sm, int __cs_param___CSEQ_atomic_compare_and_exchange_fm)
{
;
        _Bool __cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18;
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
_Bool __atomic_compare_exchange_n(int long long unsigned *__cs_param___atomic_compare_exchange_n_mptr, int long long unsigned *__cs_param___atomic_compare_exchange_n_eptr, int long long unsigned __cs_param___atomic_compare_exchange_n_newval, _Bool __cs_param___atomic_compare_exchange_n_weak_p, int __cs_param___atomic_compare_exchange_n_sm, int __cs_param___atomic_compare_exchange_n_fm)
{
int __cs_local___atomic_compare_exchange_n_res;
__cs_local___atomic_compare_exchange_n_res = __CSEQ_atomic_compare_and_exchange(__cs_param___atomic_compare_exchange_n_mptr, __cs_param___atomic_compare_exchange_n_eptr, __cs_param___atomic_compare_exchange_n_newval, __cs_param___atomic_compare_exchange_n_weak_p, __cs_param___atomic_compare_exchange_n_sm, __cs_param___atomic_compare_exchange_n_fm);
return __cs_local___atomic_compare_exchange_n_res;
}
unsigned long __CSEQ_atomic_exchange(int long long unsigned *__cs_param___CSEQ_atomic_exchange_previous, int long long unsigned __cs_param___CSEQ_atomic_exchange_new, int __cs_param___CSEQ_atomic_exchange_memorder)
{
unsigned long int __cs_local___CSEQ_atomic_exchange_old;
__cs_local___CSEQ_atomic_exchange_old = *__cs_param___CSEQ_atomic_exchange_previous;
*__cs_param___CSEQ_atomic_exchange_previous = __cs_param___CSEQ_atomic_exchange_new;
return __cs_local___CSEQ_atomic_exchange_old;
}
unsigned long __atomic_exchange_n(int long long unsigned *__cs_param___atomic_exchange_n_previous, int long long unsigned __cs_param___atomic_exchange_n_new, int __cs_param___atomic_exchange_n_memorder)
{
int __cs_local___atomic_exchange_n_res;
__cs_local___atomic_exchange_n_res = __CSEQ_atomic_exchange(__cs_param___atomic_exchange_n_previous, __cs_param___atomic_exchange_n_new, __cs_param___atomic_exchange_n_memorder);
return __cs_local___atomic_exchange_n_res;
}
void __atomic_thread_fence(int __cs_param___atomic_thread_fence_i)
{
}
struct lfds711_stack_state mystack;
struct test_data
{
struct lfds711_stack_element se;
int long long unsigned user_id;
};
void *init()
{
lfds711_stack_init_valid_on_current_logical_core(&mystack, 0);
return (void *) (&mystack);
}
void insert(struct lfds711_stack_state *__cs_param_insert_s, int long long unsigned __cs_param_insert_id)
{
struct test_data *__cs_local_insert_td;
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);
lfds711_stack_push((struct lfds711_stack_state *) __cs_param_insert_s, &(*__cs_local_insert_td).se);
}
int delete(struct lfds711_stack_state *__cs_param_delete_s)
{
struct lfds711_stack_element *__cs_local_delete_se;
struct test_data *__cs_local_delete_temp_td;
int __cs_local_delete_res;
__cs_local_delete_res = lfds711_stack_pop(&mystack, &__cs_local_delete_se);
;
        _Bool __cs_local_delete___cs_tmp_if_cond_19;
        __cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res == 0;
if (__cs_local_delete___cs_tmp_if_cond_19)
        {
return __cs_local_delete_res;
        }
__cs_local_delete_temp_td = (*__cs_local_delete_se).value;
int __cs_local_delete_id_popped;
__cs_local_delete_id_popped = (*__cs_local_delete_temp_td).user_id;
printf("%llu\n", (*__cs_local_delete_temp_td).user_id);
return __cs_local_delete_res;
}
int contains(void *__cs_param_contains_s, int __cs_param_contains_id)
{
int __cs_local_contains_max_size;
__cs_local_contains_max_size = 20;
int __cs_local_contains_actual_size;
__cs_local_contains_actual_size = 0;
int __cs_local_contains_res;
__cs_local_contains_res = 1;
int __cs_local_contains_found;
__cs_local_contains_found = 0;
int __cs_local_contains_dimension;
__cs_local_contains_dimension = 2;
struct test_data **__cs_local_contains_datas;
__cs_local_contains_datas = __cs_safe_malloc((sizeof(struct test_data *)) * __cs_local_contains_max_size);
struct lfds711_stack_element *__cs_local_contains_se;
while ((__cs_local_contains_found == 0) && (__cs_local_contains_res != 0))
        {
;
                _Bool __cs_local_contains___cs_tmp_if_cond_20;
                __cs_local_contains___cs_tmp_if_cond_20 = __cs_local_contains_actual_size == __cs_local_contains_max_size;
if (__cs_local_contains___cs_tmp_if_cond_20)
                {
__cs_local_contains_datas = realloc(__cs_local_contains_datas, ((sizeof(struct test_data *)) * __cs_local_contains_max_size) * __cs_local_contains_dimension);
__cs_local_contains_max_size *= __cs_local_contains_dimension;
                }
__cs_local_contains_res = lfds711_stack_pop((struct lfds711_stack_state *) __cs_param_contains_s, &__cs_local_contains_se);
;
                _Bool __cs_local_contains___cs_tmp_if_cond_21;
                __cs_local_contains___cs_tmp_if_cond_21 = __cs_local_contains_res == 0;
if (__cs_local_contains___cs_tmp_if_cond_21)
                {
continue;
                }
__cs_local_contains_datas[__cs_local_contains_actual_size] = (*__cs_local_contains_se).value;
;
                _Bool __cs_local_contains___cs_tmp_if_cond_22;
                __cs_local_contains___cs_tmp_if_cond_22 = (*__cs_local_contains_datas[__cs_local_contains_actual_size]).user_id == __cs_param_contains_id;
if (__cs_local_contains___cs_tmp_if_cond_22)
                {
__cs_local_contains_found = 1;
                }
__cs_local_contains_actual_size++;
        }
int __cs_local_contains_i;
__cs_local_contains_i = 0;
while (__cs_local_contains_i < __cs_local_contains_actual_size)
        {
lfds711_stack_push((struct lfds711_stack_state *) __cs_param_contains_s, __cs_local_contains_datas[__cs_local_contains_i]);
__cs_local_contains_i++;
        }
free(__cs_local_contains_datas);
return __cs_local_contains_found;
}
int ATOMIC_OPERATION = 0;
void *ss;
__cs_mutex_t lock;
void *push(void *__cs_param_push___cs_unused)
{
int long long unsigned __cs_local_push_loop;
for (__cs_local_push_loop = 0; __cs_local_push_loop < 5; __cs_local_push_loop++)
        {
;
                _Bool __cs_local_push___cs_tmp_if_cond_23;
                __cs_local_push___cs_tmp_if_cond_23 = ATOMIC_OPERATION;
if (__cs_local_push___cs_tmp_if_cond_23)
                {
__cs_mutex_lock(&lock);
                }
;
insert(ss, __cs_local_push_loop);
;
                _Bool __cs_local_push___cs_tmp_if_cond_24;
                __cs_local_push___cs_tmp_if_cond_24 = ATOMIC_OPERATION;
if (__cs_local_push___cs_tmp_if_cond_24)
                {
__cs_mutex_unlock(&lock);
                }
;
        }
}
void *pop(void *__cs_param_pop___cs_unused)
{
int __cs_local_pop_res;
int __cs_local_pop_count;
__cs_local_pop_count = 0;
int __cs_local_pop_loop;
for (__cs_local_pop_loop = 0; __cs_local_pop_loop < 5; __cs_local_pop_loop++)
        {
;
                _Bool __cs_local_pop___cs_tmp_if_cond_25;
                __cs_local_pop___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
if (__cs_local_pop___cs_tmp_if_cond_25)
                {
__cs_mutex_lock(&lock);
                }
;
delete(ss);
;
                _Bool __cs_local_pop___cs_tmp_if_cond_26;
                __cs_local_pop___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
if (__cs_local_pop___cs_tmp_if_cond_26)
                {
__cs_mutex_unlock(&lock);
                }
;
        }
}
int main()
{
__cs_mutex_init(&lock, 0);
ss = init();
__cs_t __cs_local_main_t1;
__cs_t __cs_local_main_t2;
__cs_t __cs_local_main_t3;
__cs_t __cs_local_main_t4;
__cs_t __cs_local_main_t5;
__cs_t __cs_local_main_t6;
__cs_t __cs_local_main_t7;
__cs_t __cs_local_main_t8;
__cs_t __cs_local_main_t9;
__cs_t __cs_local_main_t10;
__cs_create(&__cs_local_main_t1, 0, push, 0);
__cs_create(&__cs_local_main_t6, 0, pop, 0);
__cs_join(__cs_local_main_t1, 0);
__cs_join(__cs_local_main_t6, 0);
__CSEQ_assert(0);
return 0;
}
