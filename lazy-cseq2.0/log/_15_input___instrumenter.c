unsigned int __cs_active_thread[3]={1};
unsigned int __cs_pc[3];
unsigned int __cs_pc_cs[3];
unsigned int __cs_last_thread;
<<<<<<< HEAD
unsigned int __cs_thread_lines[3] = {127, 24, 37};
=======
unsigned int __cs_thread_lines[3] = {227, 32, 46};
>>>>>>> origin/main

void *__cs_safe_malloc(unsigned int __cs_size) {
	void *__cs_ptr = malloc(__cs_size);
	return __cs_ptr;
}

void __cs_init_scalar(void *__cs_var, unsigned int __cs_size) {
	if (__cs_size == sizeof(int))
		*(int *)__cs_var = __CSEQ_nondet_int();
	else {
		__cs_var = malloc(__cs_size);
	}
}

void __CSEQ_message(char *__cs_message) { ; }

typedef int __cs_t;

void *__cs_threadargs[3];
void *__cs_thread_joinargs[3];

int __cs_create(__cs_t *__cs_new_thread_id, void *__cs_attr, void *(*__cs_thread_function)(void*), void *__cs_arg, int __cs_threadID) {
	if (__cs_threadID > THREADS) return 0;
	*__cs_new_thread_id = __cs_threadID;
	__cs_active_thread[__cs_threadID] = 1;
	__cs_threadargs[__cs_threadID] = __cs_arg;
	__CSEQ_message("thread spawned");
	return 0;
}

int __cs_join(__cs_t __cs_id, void **__cs_value_ptr) {
	__CSEQ_assume(__cs_pc[__cs_id] == __cs_thread_lines[__cs_id]);
	*__cs_value_ptr = __cs_thread_joinargs[__cs_id];
	return 0;
}

int __cs_exit(void *__cs_value_ptr, unsigned int __cs_thread_index) {
	__cs_thread_joinargs[__cs_thread_index] = __cs_value_ptr;
	return 0;
}

int __cs_self(void) { return 1; }

typedef int __cs_mutex_t;

int __cs_mutex_init (__cs_mutex_t *__cs_m, int __cs_val) {
	*__cs_m = -1;
	return 0;
}

int __cs_mutex_destroy(__cs_mutex_t *__cs_mutex_to_destroy) {
	__CSEQ_assertext(*__cs_mutex_to_destroy!=0,"attempt to destroy an uninitialized mutex");
	__CSEQ_assertext(*__cs_mutex_to_destroy!=-2,"attempt to destroy a previously destroyed mutex");
	__CSEQ_assertext(*__cs_mutex_to_destroy==-1,"attempt to destroy a locked mutex");
	*__cs_mutex_to_destroy = -2;
	__CSEQ_message("lock destroyed");
	return 0;
}

int __cs_mutex_lock(__cs_mutex_t *__cs_mutex_to_lock, unsigned int __cs_thread_index) {
	__CSEQ_assertext(*__cs_mutex_to_lock!=0,"attempt to lock an uninitialized mutex");
	__CSEQ_assertext(*__cs_mutex_to_lock!=-2,"attempt to lock a destroyed mutex");
	__CSEQ_assume(*__cs_mutex_to_lock==-1);
	*__cs_mutex_to_lock = __cs_thread_index+1;
	__CSEQ_message("lock acquired");
	return 0;
}

int __cs_mutex_unlock(__cs_mutex_t *__cs_mutex_to_unlock, unsigned int __cs_thread_index) {
	__CSEQ_assertext(*__cs_mutex_to_unlock!=0,"attempt to unlock an uninitialized mutex");
	__CSEQ_assertext(*__cs_mutex_to_unlock!=-2,"attempt to unlock a destroyed mutex");
	__CSEQ_assume(*__cs_mutex_to_unlock==(__cs_thread_index+1));
	*__cs_mutex_to_unlock = -1;
	__CSEQ_message("lock released");
	return 0;
}

typedef int __cs_cond_t;

int __cs_cond_init(__cs_cond_t *__cs_cond_to_init, void *__cs_attr) {
	*__cs_cond_to_init = -1;
	return 0;
}

int __cs_cond_destroy(__cs_cond_t *__cs_cond_to_destroy) {
	*__cs_cond_to_destroy = -2;
	return 0;
}

int __cs_cond_wait_1(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m, unsigned int __cs_thread_index) {
	__CSEQ_assertext(*__cs_cond_to_wait_for!=0,"attempt to use an uninitialized conditional variable");
	__CSEQ_assertext(*__cs_cond_to_wait_for!=-2,"attempt to use a destroyed conditional variable");
	__cs_mutex_unlock(__cs_m, __cs_thread_index);
	return 0;
}

int __cs_cond_wait_2(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m, unsigned int __cs_thread_index) {
	__CSEQ_assume(*__cs_cond_to_wait_for == 1);
	__cs_mutex_lock(__cs_m, __cs_thread_index);
	return 0;
}

int __cs_cond_signal(__cs_cond_t *__cs_cond_to_signal) {
	*__cs_cond_to_signal = 1;
	__CSEQ_message("conditional variable signal");
	return 0;
}

int __cs_cond_broadcast(__cs_cond_t *__cs_cond_to_broadcast) {
	*__cs_cond_to_broadcast = 1;
	__CSEQ_message("conditional variable broadcast");
	return 0;
}

typedef struct __cs_barrier_t{
	unsigned int init;
	unsigned int current;
} __cs_barrier_t;

int __cs_barrier_init(__cs_barrier_t *__cs_barrier_to_init, void * __cs_attr, unsigned int count){
	__CSEQ_assertext(count > 0, "count must be greater than 0");
	__cs_barrier_to_init->current = count;
	__cs_barrier_to_init->init = count;
	return 0;
}

int __cs_barrier_destroy(__cs_barrier_t *__cs_barrier_to_destroy) {
	__cs_barrier_to_destroy->init = -1;
	__cs_barrier_to_destroy->current = -1;
	return 0;
}


int __cs_barrier_wait_1(__cs_barrier_t *__cs_barrier_to_wait){
	__CSEQ_assertext(__cs_barrier_to_wait->init > 0, "attempt to use an uninitialized barrier variable");
	__cs_barrier_to_wait->current--;
	return 0;
}

int __cs_barrier_wait_2(__cs_barrier_t *__cs_barrier_to_wait){
	__CSEQ_assertext(__cs_barrier_to_wait->init > 0, "attempt to use an uninitialized barrier variable");
	__CSEQ_assume(__cs_barrier_to_wait->current == 0);
	__cs_barrier_to_wait->current = __cs_barrier_to_wait->init;
	return 0;
}

typedef int __cs_attr_t;
struct sched_param {
   int sched_priority;
};
int   __cs_attr_init(__cs_attr_t * t) { return 0;}
int   __cs_attr_destroy(__cs_attr_t * t) { return 0;}
int   __cs_attr_getdetachstate(const __cs_attr_t * t, int * s) { return 0;}
int   __cs_attr_getguardsize(const __cs_attr_t * t, unsigned int * s) { return 0;}
int   __cs_attr_getinheritsched(const __cs_attr_t * t, int * s) { return 0;}
int   __cs_attr_getschedparam(const __cs_attr_t * t, struct sched_param * s) { return 0;}
int   __cs_attr_getschedpolicy(const __cs_attr_t * t, int * s) { return 0;}
int   __cs_attr_getscope(const __cs_attr_t * t, int * s) { return 0;}
int   __cs_attr_getstackaddr(const __cs_attr_t * t, void ** s) { return 0;}
int   __cs_attr_getstacksize(const __cs_attr_t * t, unsigned int *s) { return 0;}
int   __cs_attr_setdetachstate(__cs_attr_t * t, int s) { return 0;}
int   __cs_attr_setguardsize(__cs_attr_t * t, unsigned int s) { return 0;}
int   __cs_attr_setinheritsched(__cs_attr_t * t, int s) { return 0;}
int   __cs_attr_setschedparam(__cs_attr_t * t, const struct sched_param * s) { return 0;}
int   __cs_attr_setschedpolicy(__cs_attr_t * t, int s) { return 0;}
int   __cs_attr_setscope(__cs_attr_t * t, int s) { return 0;}
int   __cs_attr_setstackaddr(__cs_attr_t * t, void * s) { return 0;}
int   __cs_attr_setstacksize(__cs_attr_t * t, unsigned int s) { return 0;}
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
<<<<<<< HEAD
=======
__cs_mutex_t lock;
>>>>>>> origin/main
_Bool __CSEQ_atomic_compare_and_exchange(int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_mptr, int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_eptr, int long long unsigned __cs_param___CSEQ_atomic_compare_and_exchange_newval, _Bool __cs_param___CSEQ_atomic_compare_and_exchange_weak_p, int __cs_param___CSEQ_atomic_compare_and_exchange_sm, int __cs_param___CSEQ_atomic_compare_and_exchange_fm)
{
;;
static _Bool __cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_0;
__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___CSEQ_atomic_compare_and_exchange_mptr) == (*__cs_param___CSEQ_atomic_compare_and_exchange_eptr);
if (__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_0)
    {
*__cs_param___CSEQ_atomic_compare_and_exchange_mptr = __cs_param___CSEQ_atomic_compare_and_exchange_newval;
return 1;;
    }
    else
    { 
*__cs_param___CSEQ_atomic_compare_and_exchange_eptr = __cs_param___CSEQ_atomic_compare_and_exchange_newval;
return 0;;
    }
    ;
}
unsigned long __CSEQ_atomic_exchange(int long long unsigned *__cs_param___CSEQ_atomic_exchange_previous, int long long unsigned __cs_param___CSEQ_atomic_exchange_new, int __cs_param___CSEQ_atomic_exchange_memorder)
{
static unsigned long int __cs_local___CSEQ_atomic_exchange_old;
__cs_local___CSEQ_atomic_exchange_old = *__cs_param___CSEQ_atomic_exchange_previous;
*__cs_param___CSEQ_atomic_exchange_previous = __cs_param___CSEQ_atomic_exchange_new;
return __cs_local___CSEQ_atomic_exchange_old;;
}
int __CSEQ_atomic_swap_stack_top(struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_top, struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_oldtop, 
struct lfds711_stack_element **__cs_param___CSEQ_atomic_swap_stack_top_newtop)
{
;;
static _Bool __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_1;
__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param___CSEQ_atomic_swap_stack_top_oldtop) == (*__cs_param___CSEQ_atomic_swap_stack_top_top);
if (__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_1)
    {
*__cs_param___CSEQ_atomic_swap_stack_top_top = *__cs_param___CSEQ_atomic_swap_stack_top_newtop;
return 1;;
    }
    else
    { 
*__cs_param___CSEQ_atomic_swap_stack_top_oldtop = *__cs_param___CSEQ_atomic_swap_stack_top_top;
return 0;;
    }
    ;
}
<<<<<<< HEAD
__cs_mutex_t lock;
=======
>>>>>>> origin/main
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
__CSEQ_rawline("IF(1,0,tpush_0_1)");
<<<<<<< HEAD
__cs_local_push_td = __cs_safe_malloc((sizeof(struct test_data)) * 10);
__cs_local_push_loop = 0;
    {
;;
=======
__cs_local_push_td = __cs_safe_malloc((sizeof(struct test_data)) * 1);
__cs_local_push_loop = 0;
    {
>>>>>>> origin/main
__CSEQ_rawline("tpush_0_1: IF(1,1,tpush_0_2)");
__cs_local_push_td[__cs_local_push_loop].user_id = __cs_local_push_loop;
__CSEQ_rawline("tpush_0_2: IF(1,2,tpush_0_3)");
__cs_local_push_td[__cs_local_push_loop].se.value = (void *) ((lfds711_pal_uint_t) (&__cs_local_push_td[__cs_local_push_loop]));
        {
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
__CSEQ_rawline("tpush_0_3: IF(1,3,tpush_0_4)");
__cs_param_lfds711_stack_push_ss = &ss;
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
__CSEQ_rawline("tpush_0_4: IF(1,4,tpush_0_5)");
__cs_param_lfds711_stack_push_se = &__cs_local_push_td[__cs_local_push_loop].se;
static char unsigned __cs_local_lfds711_stack_push_result;
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
__cs_local_lfds711_stack_push_backoff_iteration = 0;
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
__CSEQ_rawline("tpush_0_5: IF(1,5,tpush_0_6)");
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_ss != 0);
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)
            {
static char *__cs_local_lfds711_stack_push_c;
__CSEQ_rawline("tpush_0_6: IF(1,6,tpush_0_7)");
__cs_local_lfds711_stack_push_c = 0;
__CSEQ_rawline("tpush_0_7: IF(1,7,tpush_0_8)");
*__cs_local_lfds711_stack_push_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[1] >= 8 );;
;;
;;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
__CSEQ_rawline("tpush_0_8: IF(1,8,tpush_0_9)");
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = !(__cs_param_lfds711_stack_push_se != 0);
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
            {
static char *__cs_local_lfds711_stack_push_c;
__CSEQ_rawline("tpush_0_9: IF(1,9,tpush_0_10)");
__cs_local_lfds711_stack_push_c = 0;
__CSEQ_rawline("tpush_0_10: IF(1,10,tpush_0_11)");
*__cs_local_lfds711_stack_push_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[1] >= 11 );;
;;
;;
__CSEQ_rawline("tpush_0_11: IF(1,11,tpush_0_12)");
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
__CSEQ_rawline("tpush_0_12: IF(1,12,tpush_0_13)");
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
__CSEQ_rawline("tpush_0_13: IF(1,13,tpush_0_14)");
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
__cs_local_lfds711_stack_push_result = 0;
static int __cs_local_lfds711_stack_push_i;
__cs_local_lfds711_stack_push_i = 0;
if (!(__cs_local_lfds711_stack_push_result == 0))
            {
goto __exit_loop_2;;
            }
            ;
            {
__CSEQ_rawline("tpush_0_14: IF(1,14,tpush_0_15)");
__cs_mutex_lock(&lock, 1);
__CSEQ_rawline("tpush_0_15: IF(1,15,tpush_0_16)");
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
__CSEQ_rawline("tpush_0_16: IF(1,16,tpush_0_17)");
__cs_mutex_unlock(&lock, 1);
__CSEQ_rawline("tpush_0_17: IF(1,17,tpush_0_18)");
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
__CSEQ_rawline("tpush_0_18: IF(1,18,tpush_0_19)");
__cs_mutex_lock(&lock, 1);
__CSEQ_rawline("tpush_0_19: IF(1,19,tpush_0_20)");
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
__CSEQ_rawline("tpush_0_20: IF(1,20,tpush_0_21)");
__cs_mutex_unlock(&lock, 1);
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
<<<<<<< HEAD
=======
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
>>>>>>> origin/main
__CSEQ_rawline("tpush_0_21: IF(1,21,tpush_0_22)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_3: __CSEQ_assume( __cs_pc_cs[1] >= 22 );
;;
                        __exit__exponential_backoff_1_0: __CSEQ_assume( __cs_pc_cs[1] >= 22 );
;;
                    }
;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 22 );;
__cs_local_lfds711_stack_push_i++;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 1000;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)
                {
goto __exit_loop_2;;
                }
                ;
            }
;
<<<<<<< HEAD
__CSEQ_rawline("tpush_0_22: IF(1,22,tpush_0_23)");
__CSEQ_assume(!(__cs_local_lfds711_stack_push_result == 0));
            __exit_loop_2: __CSEQ_assume( __cs_pc_cs[1] >= 23 );
;;
goto __exit__lfds711_stack_push_1_0;;
            __exit__lfds711_stack_push_1_0: __CSEQ_assume( __cs_pc_cs[1] >= 23 );
;;
        }
;
;;
    }
;
__cs_local_push_loop++;
__CSEQ_rawline("tpush_0_23: IF(1,23,tpush_0_24)");
__CSEQ_assume(!(__cs_local_push_loop < 10));
    __exit_loop_1: __CSEQ_assume( __cs_pc_cs[1] >= 24 );
;;
    __exit_push: __CSEQ_assume( __cs_pc_cs[1] >= 24 );
;;
__CSEQ_rawline("tpush_0_24: ");
=======
if (!(__cs_local_lfds711_stack_push_result == 0))
            {
goto __exit_loop_2;;
            }
            ;
            {
__CSEQ_rawline("tpush_0_22: IF(1,22,tpush_0_23)");
__cs_mutex_lock(&lock, 1);
__CSEQ_rawline("tpush_0_23: IF(1,23,tpush_0_24)");
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
__CSEQ_rawline("tpush_0_24: IF(1,24,tpush_0_25)");
__cs_mutex_unlock(&lock, 1);
__CSEQ_rawline("tpush_0_25: IF(1,25,tpush_0_26)");
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
__CSEQ_rawline("tpush_0_26: IF(1,26,tpush_0_27)");
__cs_mutex_lock(&lock, 1);
__CSEQ_rawline("tpush_0_27: IF(1,27,tpush_0_28)");
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
__CSEQ_rawline("tpush_0_28: IF(1,28,tpush_0_29)");
__cs_mutex_unlock(&lock, 1);
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
                    {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpush_0_29: IF(1,29,tpush_0_30)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_4: __CSEQ_assume( __cs_pc_cs[1] >= 30 );
;;
                        __exit__exponential_backoff_1_1: __CSEQ_assume( __cs_pc_cs[1] >= 30 );
;;
                    }
;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 30 );;
__cs_local_lfds711_stack_push_i++;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 1000;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)
                {
goto __exit_loop_2;;
                }
                ;
            }
;
__CSEQ_rawline("tpush_0_30: IF(1,30,tpush_0_31)");
__CSEQ_assume(!(__cs_local_lfds711_stack_push_result == 0));
            __exit_loop_2: __CSEQ_assume( __cs_pc_cs[1] >= 31 );
;;
goto __exit__lfds711_stack_push_1_0;;
            __exit__lfds711_stack_push_1_0: __CSEQ_assume( __cs_pc_cs[1] >= 31 );
;;
        }
;
    }
;
__cs_local_push_loop++;
__CSEQ_rawline("tpush_0_31: IF(1,31,tpush_0_32)");
__CSEQ_assume(!(__cs_local_push_loop < 1));
    __exit_loop_1: __CSEQ_assume( __cs_pc_cs[1] >= 32 );
;;
    __exit_push: __CSEQ_assume( __cs_pc_cs[1] >= 32 );
;;
__CSEQ_rawline("tpush_0_32: ");
>>>>>>> origin/main
__cs_exit(0, 1);
}
void *pop_0(void *__cs_param_pop___cs_unused)
{
static struct lfds711_stack_element *__cs_local_pop_se;
static struct test_data *__cs_local_pop_temp_td;
static int __cs_local_pop_res;
static int __cs_local_pop_count;
__CSEQ_rawline("IF(2,0,tpop_0_1)");
__cs_local_pop_count = 0;
static int __cs_local_pop_loop;
__cs_local_pop_loop = 0;
    {
__CSEQ_rawline("tpop_0_1: IF(2,1,tpop_0_2)");
__cs_local_pop_temp_td = 0;
<<<<<<< HEAD
;;
=======
>>>>>>> origin/main
static int __cs_retval__lfds711_stack_pop_1;
        {
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
__CSEQ_rawline("tpop_0_2: IF(2,2,tpop_0_3)");
__cs_param_lfds711_stack_pop_ss = &ss;
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
__CSEQ_rawline("tpop_0_3: IF(2,3,tpop_0_4)");
__cs_param_lfds711_stack_pop_se = &__cs_local_pop_se;
static char unsigned __cs_local_lfds711_stack_pop_result;
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
__CSEQ_rawline("tpop_0_4: IF(2,4,tpop_0_5)");
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_ss != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)
            {
static char *__cs_local_lfds711_stack_pop_c;
__CSEQ_rawline("tpop_0_5: IF(2,5,tpop_0_6)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tpop_0_6: IF(2,6,tpop_0_7)");
*__cs_local_lfds711_stack_pop_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[2] >= 7 );;
;;
;;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
__CSEQ_rawline("tpop_0_7: IF(2,7,tpop_0_8)");
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = !(__cs_param_lfds711_stack_pop_se != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
            {
static char *__cs_local_lfds711_stack_pop_c;
__CSEQ_rawline("tpop_0_8: IF(2,8,tpop_0_9)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tpop_0_9: IF(2,9,tpop_0_10)");
*__cs_local_lfds711_stack_pop_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[2] >= 10 );;
;;
;;
__CSEQ_rawline("tpop_0_10: IF(2,10,tpop_0_11)");
__cs_mutex_lock(&lock, 2);
__CSEQ_rawline("tpop_0_11: IF(2,11,tpop_0_12)");
__cs_mutex_unlock(&lock, 2);
__CSEQ_rawline("tpop_0_12: IF(2,12,tpop_0_13)");
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
__CSEQ_rawline("tpop_0_13: IF(2,13,tpop_0_14)");
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
static int __cs_local_lfds711_stack_pop_i;
__cs_local_lfds711_stack_pop_i = 0;
;;
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
                {
__CSEQ_rawline("tpop_0_14: IF(2,14,tpop_0_15)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_1 = 0;
goto __exit__lfds711_stack_pop_1_0;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 15 );;
__CSEQ_rawline("tpop_0_15: IF(2,15,tpop_0_16)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_16: IF(2,16,tpop_0_17)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_17: IF(2,17,tpop_0_18)");
__cs_mutex_lock(&lock, 2);
__CSEQ_rawline("tpop_0_18: IF(2,18,tpop_0_19)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_19: IF(2,19,tpop_0_20)");
__cs_mutex_unlock(&lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                {
                    {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
<<<<<<< HEAD
__CSEQ_rawline("tpop_0_20: IF(2,20,tpop_0_21)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_6: __CSEQ_assume( __cs_pc_cs[2] >= 21 );
=======
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_20: IF(2,20,tpop_0_21)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_7: __CSEQ_assume( __cs_pc_cs[2] >= 21 );
>>>>>>> origin/main
;;
                        __exit__exponential_backoff_2_0: __CSEQ_assume( __cs_pc_cs[2] >= 21 );
;;
                    }
;
__CSEQ_rawline("tpop_0_21: IF(2,21,tpop_0_22)");
__cs_mutex_lock(&lock, 2);
__CSEQ_rawline("tpop_0_22: IF(2,22,tpop_0_23)");
__cs_mutex_unlock(&lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 23 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
<<<<<<< HEAD
goto __exit_loop_5;;
=======
goto __exit_loop_6;;
>>>>>>> origin/main
                }
                ;
            }
;
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
__CSEQ_rawline("tpop_0_23: IF(2,23,tpop_0_24)");
__CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
<<<<<<< HEAD
            __exit_loop_5: __CSEQ_assume( __cs_pc_cs[2] >= 24 );
=======
            __exit_loop_6: __CSEQ_assume( __cs_pc_cs[2] >= 24 );
>>>>>>> origin/main
;;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
<<<<<<< HEAD
goto __exit_loop_7;;
=======
goto __exit_loop_8;;
>>>>>>> origin/main
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
__CSEQ_rawline("tpop_0_24: IF(2,24,tpop_0_25)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_1 = 0;
goto __exit__lfds711_stack_pop_1_0;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 25 );;
__CSEQ_rawline("tpop_0_25: IF(2,25,tpop_0_26)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_26: IF(2,26,tpop_0_27)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_27: IF(2,27,tpop_0_28)");
__cs_mutex_lock(&lock, 2);
__CSEQ_rawline("tpop_0_28: IF(2,28,tpop_0_29)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_29: IF(2,29,tpop_0_30)");
__cs_mutex_unlock(&lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
                    {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
<<<<<<< HEAD
__CSEQ_rawline("tpop_0_30: IF(2,30,tpop_0_31)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_8: __CSEQ_assume( __cs_pc_cs[2] >= 31 );
=======
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_30: IF(2,30,tpop_0_31)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_9: __CSEQ_assume( __cs_pc_cs[2] >= 31 );
>>>>>>> origin/main
;;
                        __exit__exponential_backoff_3_0: __CSEQ_assume( __cs_pc_cs[2] >= 31 );
;;
                    }
;
__CSEQ_rawline("tpop_0_31: IF(2,31,tpop_0_32)");
__cs_mutex_lock(&lock, 2);
__CSEQ_rawline("tpop_0_32: IF(2,32,tpop_0_33)");
__cs_mutex_unlock(&lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 33 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                {
<<<<<<< HEAD
goto __exit_loop_7;;
=======
goto __exit_loop_8;;
>>>>>>> origin/main
                }
                ;
            }
;
<<<<<<< HEAD
__CSEQ_rawline("tpop_0_33: IF(2,33,tpop_0_34)");
__CSEQ_assume(
!(__cs_local_lfds711_stack_pop_result == 0));
            __exit_loop_7: __CSEQ_assume( __cs_pc_cs[2] >= 34 );
;;
__CSEQ_rawline("tpop_0_34: IF(2,34,tpop_0_35)");
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
__cs_retval__lfds711_stack_pop_1 = 1;
goto __exit__lfds711_stack_pop_1_0;;
            __exit__lfds711_stack_pop_1_0: __CSEQ_assume( __cs_pc_cs[2] >= 35 );
=======
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
goto __exit_loop_8;;
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
__CSEQ_rawline("tpop_0_33: IF(2,33,tpop_0_34)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_1 = 0;
goto __exit__lfds711_stack_pop_1_0;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 34 );;
__CSEQ_rawline("tpop_0_34: IF(2,34,tpop_0_35)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_35: IF(2,35,tpop_0_36)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_36: IF(2,36,tpop_0_37)");
__cs_mutex_lock(&lock, 2);
__CSEQ_rawline("tpop_0_37: IF(2,37,tpop_0_38)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_38: IF(2,38,tpop_0_39)");
__cs_mutex_unlock(&lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
                    {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_39: IF(2,39,tpop_0_40)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_10: __CSEQ_assume( __cs_pc_cs[2] >= 40 );
;;
                        __exit__exponential_backoff_3_1: __CSEQ_assume( __cs_pc_cs[2] >= 40 );
;;
                    }
;
__CSEQ_rawline("tpop_0_40: IF(2,40,tpop_0_41)");
__cs_mutex_lock(&lock, 2);
__CSEQ_rawline("tpop_0_41: IF(2,41,tpop_0_42)");
__cs_mutex_unlock(&lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 42 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                {
goto __exit_loop_8;;
                }
                ;
            }
;
__CSEQ_rawline("tpop_0_42: IF(2,42,tpop_0_43)");
__CSEQ_assume(
!(__cs_local_lfds711_stack_pop_result == 0));
            __exit_loop_8: __CSEQ_assume( __cs_pc_cs[2] >= 43 );
;;
__CSEQ_rawline("tpop_0_43: IF(2,43,tpop_0_44)");
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
__cs_retval__lfds711_stack_pop_1 = 1;
goto __exit__lfds711_stack_pop_1_0;;
            __exit__lfds711_stack_pop_1_0: __CSEQ_assume( __cs_pc_cs[2] >= 44 );
>>>>>>> origin/main
;;
        }
;
__cs_local_pop_res = __cs_retval__lfds711_stack_pop_1;
;;
<<<<<<< HEAD
;;
=======
>>>>>>> origin/main
static _Bool __cs_local_pop___cs_tmp_if_cond_44;
__cs_local_pop___cs_tmp_if_cond_44 = __cs_local_pop_res == 0;
if (__cs_local_pop___cs_tmp_if_cond_44)
        {
<<<<<<< HEAD
goto __continue_0_loop_4;;
        }
        ;
__CSEQ_rawline("tpop_0_35: IF(2,35,tpop_0_36)");
=======
goto __continue_0_loop_5;;
        }
        ;
__CSEQ_rawline("tpop_0_44: IF(2,44,tpop_0_45)");
>>>>>>> origin/main
__cs_local_pop_temp_td = (*__cs_local_pop_se).value;
__cs_local_pop_count++;
    }
;
__cs_local_pop_loop++;
<<<<<<< HEAD
    __continue_0_loop_4: __CSEQ_assume( __cs_pc_cs[2] >= 36 );
;;
__CSEQ_rawline("tpop_0_36: IF(2,36,tpop_0_37)");
__CSEQ_assume(!(__cs_local_pop_loop < 10));
    __exit_loop_4: __CSEQ_assume( __cs_pc_cs[2] >= 37 );
;;
    __exit_pop: __CSEQ_assume( __cs_pc_cs[2] >= 37 );
;;
__CSEQ_rawline("tpop_0_37: ");
=======
    __continue_0_loop_5: __CSEQ_assume( __cs_pc_cs[2] >= 45 );
;;
__CSEQ_rawline("tpop_0_45: IF(2,45,tpop_0_46)");
__CSEQ_assume(!(__cs_local_pop_loop < 1));
    __exit_loop_5: __CSEQ_assume( __cs_pc_cs[2] >= 46 );
;;
    __exit_pop: __CSEQ_assume( __cs_pc_cs[2] >= 46 );
;;
__CSEQ_rawline("tpop_0_46: ");
>>>>>>> origin/main
__cs_exit(0, 2);
}
int main_thread(void)
{
__CSEQ_rawline("IF(0,0,tmain_1)");
static LIST_NODE_T *__cs_local_main_listHead;
__cs_local_main_listHead = 0;
    {
static struct lfds711_stack_state *__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss;
__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss = &ss;
static void *__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state = 0;
__cs_mutex_init(&lock, 0);
;;
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4;
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4 = !(__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss != 0);
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4)
        {
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
        }
        ;
;;
;;
;;
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5;
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5 = !((((lfds711_pal_uint_t) (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top) % 128) == 0);
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5)
        {
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
        }
        ;
;;
;;
;;
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6;
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state)) % 128) == 0);
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6)
        {
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
        }
        ;
;;
;;
__cs_mutex_lock(&lock, 0);
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[0] = 0;
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[1] = 0;
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state = __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
        {
static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
__cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).pop_backoff;
;;
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)
            {
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
            }
            ;
;;
;;
;;
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3;
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3)
            {
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
            }
            ;
;;
;;
(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock = LFDS711_MISC_FLAG_LOWERED;
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[0] = 0;
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[1] = 0;
(*__cs_param_lfds711_misc_internal_backoff_init_bs).metric = 1;
(*__cs_param_lfds711_misc_internal_backoff_init_bs).total_operations = 0;
goto __exit__lfds711_misc_internal_backoff_init_1;;
            __exit__lfds711_misc_internal_backoff_init_1: __CSEQ_assume( __cs_pc_cs[0] >= 1 );
;;
        }
;
        {
static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
__cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).push_backoff;
;;
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)
            {
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
            }
            ;
;;
;;
;;
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3;
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3)
            {
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
            }
            ;
;;
;;
(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock = LFDS711_MISC_FLAG_LOWERED;
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[0] = 0;
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[1] = 0;
(*__cs_param_lfds711_misc_internal_backoff_init_bs).metric = 1;
(*__cs_param_lfds711_misc_internal_backoff_init_bs).total_operations = 0;
goto __exit__lfds711_misc_internal_backoff_init_2;;
            __exit__lfds711_misc_internal_backoff_init_2: __CSEQ_assume( __cs_pc_cs[0] >= 1 );
;;
        }
;
        {
static lfds711_pal_uint_t __cs_local_lfds711_misc_force_store_destination;
__cs_init_scalar(&__cs_local_lfds711_misc_force_store_destination, sizeof(lfds711_pal_uint_t));
            {
<<<<<<< HEAD
(void) __atomic_exchange_n(&__cs_local_lfds711_misc_force_store_destination, 0, 0);
=======
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
goto __exit____atomic_exchange_n_1;;
                    __exit____atomic_exchange_n_1: __CSEQ_assume( __cs_pc_cs[0] >= 1 );
;;
                }
;
(void) __cs_retval____atomic_exchange_n_1;
>>>>>>> origin/main
            }
;
;;
goto __exit__lfds711_misc_force_store_1;;
            __exit__lfds711_misc_force_store_1: __CSEQ_assume( __cs_pc_cs[0] >= 1 );
;;
        }
;
__cs_mutex_unlock(&lock, 0);
goto __exit__lfds711_stack_init_valid_on_current_logical_core_1;;
        __exit__lfds711_stack_init_valid_on_current_logical_core_1: __CSEQ_assume( __cs_pc_cs[0] >= 1 );
;;
    }
;
static __cs_t __cs_local_main_t1;
;;
static __cs_t __cs_local_main_t2;
;;
<<<<<<< HEAD
__cs_mutex_init(&lock, 0);
=======
>>>>>>> origin/main
__cs_create(&__cs_local_main_t1, 0, push_0, 0, 1);
__CSEQ_rawline("tmain_1: IF(0,1,tmain_2)");
__cs_create(&__cs_local_main_t2, 0, pop_0, 0, 2);
__CSEQ_rawline("tmain_2: IF(0,2,tmain_3)");
__cs_join(__cs_local_main_t1, 0);
__CSEQ_rawline("tmain_3: IF(0,3,tmain_4)");
__cs_join(__cs_local_main_t2, 0);
static LIST_NODE_T *__cs_retval__createList_1;
    {
static LIST_NODE_T *__cs_param_createList_listHead;
__CSEQ_rawline("tmain_4: IF(0,4,tmain_5)");
__cs_param_createList_listHead = __cs_local_main_listHead;
static struct lfds711_stack_element *__cs_local_createList_se;
static struct test_data *__cs_local_createList_temp_td;
static int __cs_local_createList_res;
static int __cs_retval__lfds711_stack_pop_2;
        {
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
__CSEQ_rawline("tmain_5: IF(0,5,tmain_6)");
__cs_param_lfds711_stack_pop_ss = &ss;
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
__CSEQ_rawline("tmain_6: IF(0,6,tmain_7)");
__cs_param_lfds711_stack_pop_se = &__cs_local_createList_se;
static char unsigned __cs_local_lfds711_stack_pop_result;
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
__CSEQ_rawline("tmain_7: IF(0,7,tmain_8)");
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_ss != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)
            {
static char *__cs_local_lfds711_stack_pop_c;
__CSEQ_rawline("tmain_8: IF(0,8,tmain_9)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tmain_9: IF(0,9,tmain_10)");
*__cs_local_lfds711_stack_pop_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[0] >= 10 );;
;;
;;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
__CSEQ_rawline("tmain_10: IF(0,10,tmain_11)");
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = !(__cs_param_lfds711_stack_pop_se != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
            {
static char *__cs_local_lfds711_stack_pop_c;
__CSEQ_rawline("tmain_11: IF(0,11,tmain_12)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tmain_12: IF(0,12,tmain_13)");
*__cs_local_lfds711_stack_pop_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[0] >= 13 );;
;;
;;
__CSEQ_rawline("tmain_13: IF(0,13,tmain_14)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_14: IF(0,14,tmain_15)");
__cs_mutex_unlock(&lock, 0);
__CSEQ_rawline("tmain_15: IF(0,15,tmain_16)");
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
__CSEQ_rawline("tmain_16: IF(0,16,tmain_17)");
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
static int __cs_local_lfds711_stack_pop_i;
__cs_local_lfds711_stack_pop_i = 0;
;;
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
                {
__CSEQ_rawline("tmain_17: IF(0,17,tmain_18)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_2 = 0;
goto __exit__lfds711_stack_pop_2;;
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 18 );;
__CSEQ_rawline("tmain_18: IF(0,18,tmain_19)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tmain_19: IF(0,19,tmain_20)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tmain_20: IF(0,20,tmain_21)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_21: IF(0,21,tmain_22)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tmain_22: IF(0,22,tmain_23)");
__cs_mutex_unlock(&lock, 0);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                {
                    {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
<<<<<<< HEAD
__CSEQ_rawline("tmain_23: IF(0,23,tmain_24)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_10: __CSEQ_assume( __cs_pc_cs[0] >= 24 );
=======
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tmain_23: IF(0,23,tmain_24)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_12: __CSEQ_assume( __cs_pc_cs[0] >= 24 );
>>>>>>> origin/main
;;
                        __exit__exponential_backoff_4_0: __CSEQ_assume( __cs_pc_cs[0] >= 24 );
;;
                    }
;
__CSEQ_rawline("tmain_24: IF(0,24,tmain_25)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_25: IF(0,25,tmain_26)");
__cs_mutex_unlock(&lock, 0);
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 26 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
<<<<<<< HEAD
goto __exit_loop_9;;
=======
goto __exit_loop_11;;
>>>>>>> origin/main
                }
                ;
            }
;
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
__CSEQ_rawline("tmain_26: IF(0,26,tmain_27)");
__CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
<<<<<<< HEAD
            __exit_loop_9: __CSEQ_assume( __cs_pc_cs[0] >= 27 );
=======
            __exit_loop_11: __CSEQ_assume( __cs_pc_cs[0] >= 27 );
>>>>>>> origin/main
;;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
<<<<<<< HEAD
goto __exit_loop_11;;
=======
goto __exit_loop_13;;
>>>>>>> origin/main
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
__CSEQ_rawline("tmain_27: IF(0,27,tmain_28)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_2 = 0;
goto __exit__lfds711_stack_pop_2;;
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 28 );;
__CSEQ_rawline("tmain_28: IF(0,28,tmain_29)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tmain_29: IF(0,29,tmain_30)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tmain_30: IF(0,30,tmain_31)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_31: IF(0,31,tmain_32)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tmain_32: IF(0,32,tmain_33)");
__cs_mutex_unlock(&lock, 0);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
                    {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
<<<<<<< HEAD
__CSEQ_rawline("tmain_33: IF(0,33,tmain_34)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_12: __CSEQ_assume( __cs_pc_cs[0] >= 34 );
=======
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tmain_33: IF(0,33,tmain_34)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_14: __CSEQ_assume( __cs_pc_cs[0] >= 34 );
>>>>>>> origin/main
;;
                        __exit__exponential_backoff_5_0: __CSEQ_assume( __cs_pc_cs[0] >= 34 );
;;
                    }
;
__CSEQ_rawline("tmain_34: IF(0,34,tmain_35)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_35: IF(0,35,tmain_36)");
__cs_mutex_unlock(&lock, 0);
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 36 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                {
<<<<<<< HEAD
goto __exit_loop_11;;
=======
goto __exit_loop_13;;
>>>>>>> origin/main
                }
                ;
            }
;
<<<<<<< HEAD
__CSEQ_rawline("tmain_36: IF(0,36,tmain_37)");
__CSEQ_assume(
!(__cs_local_lfds711_stack_pop_result == 0));
            __exit_loop_11: __CSEQ_assume( __cs_pc_cs[0] >= 37 );
;;
__CSEQ_rawline("tmain_37: IF(0,37,tmain_38)");
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
__cs_retval__lfds711_stack_pop_2 = 1;
goto __exit__lfds711_stack_pop_2;;
            __exit__lfds711_stack_pop_2: __CSEQ_assume( __cs_pc_cs[0] >= 38 );
=======
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
goto __exit_loop_13;;
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                {
__CSEQ_rawline("tmain_36: IF(0,36,tmain_37)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_2 = 0;
goto __exit__lfds711_stack_pop_2;;
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 37 );;
__CSEQ_rawline("tmain_37: IF(0,37,tmain_38)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tmain_38: IF(0,38,tmain_39)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tmain_39: IF(0,39,tmain_40)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_40: IF(0,40,tmain_41)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tmain_41: IF(0,41,tmain_42)");
__cs_mutex_unlock(&lock, 0);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
                    {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tmain_42: IF(0,42,tmain_43)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                        __exit_loop_15: __CSEQ_assume( __cs_pc_cs[0] >= 43 );
;;
                        __exit__exponential_backoff_5_1: __CSEQ_assume( __cs_pc_cs[0] >= 43 );
;;
                    }
;
__CSEQ_rawline("tmain_43: IF(0,43,tmain_44)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_44: IF(0,44,tmain_45)");
__cs_mutex_unlock(&lock, 0);
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 45 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                {
goto __exit_loop_13;;
                }
                ;
            }
;
__CSEQ_rawline("tmain_45: IF(0,45,tmain_46)");
__CSEQ_assume(
!(__cs_local_lfds711_stack_pop_result == 0));
            __exit_loop_13: __CSEQ_assume( __cs_pc_cs[0] >= 46 );
;;
__CSEQ_rawline("tmain_46: IF(0,46,tmain_47)");
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
__cs_retval__lfds711_stack_pop_2 = 1;
goto __exit__lfds711_stack_pop_2;;
            __exit__lfds711_stack_pop_2: __CSEQ_assume( __cs_pc_cs[0] >= 47 );
>>>>>>> origin/main
;;
        }
;
__cs_local_createList_res = __cs_retval__lfds711_stack_pop_2;
if (!(__cs_local_createList_res != 0))
        {
<<<<<<< HEAD
goto __exit_loop_13;;
        }
        ;
        {
__CSEQ_rawline("tmain_38: IF(0,38,tmain_39)");
=======
goto __exit_loop_16;;
        }
        ;
        {
__CSEQ_rawline("tmain_47: IF(0,47,tmain_48)");
>>>>>>> origin/main
__cs_local_createList_temp_td = (*__cs_local_createList_se).value;
static int __cs_retval__LIST_InsertHeadNode_1;
            {
static LIST_NODE_T **__cs_param_LIST_InsertHeadNode_IO_head;
<<<<<<< HEAD
__CSEQ_rawline("tmain_39: IF(0,39,tmain_40)");
__cs_param_LIST_InsertHeadNode_IO_head = &__cs_param_createList_listHead;
static struct lfds711_stack_element __cs_param_LIST_InsertHeadNode_I__se;
__CSEQ_rawline("tmain_40: IF(0,40,tmain_41)");
__cs_param_LIST_InsertHeadNode_I__se = (*__cs_local_createList_temp_td).se;
static int long long unsigned __cs_param_LIST_InsertHeadNode_I__user_id;
__CSEQ_rawline("tmain_41: IF(0,41,tmain_42)");
=======
__CSEQ_rawline("tmain_48: IF(0,48,tmain_49)");
__cs_param_LIST_InsertHeadNode_IO_head = &__cs_param_createList_listHead;
static struct lfds711_stack_element __cs_param_LIST_InsertHeadNode_I__se;
__CSEQ_rawline("tmain_49: IF(0,49,tmain_50)");
__cs_param_LIST_InsertHeadNode_I__se = (*__cs_local_createList_temp_td).se;
static int long long unsigned __cs_param_LIST_InsertHeadNode_I__user_id;
__CSEQ_rawline("tmain_50: IF(0,50,tmain_51)");
>>>>>>> origin/main
__cs_param_LIST_InsertHeadNode_I__user_id = (*__cs_local_createList_temp_td).user_id;
static int __cs_local_LIST_InsertHeadNode_rCode;
__cs_local_LIST_InsertHeadNode_rCode = 0;
static LIST_NODE_T *__cs_local_LIST_InsertHeadNode_newNode;
<<<<<<< HEAD
__CSEQ_rawline("tmain_42: IF(0,42,tmain_43)");
__cs_local_LIST_InsertHeadNode_newNode = 0;
__CSEQ_rawline("tmain_43: IF(0,43,tmain_44)");
__cs_local_LIST_InsertHeadNode_newNode = __cs_safe_malloc(sizeof(*__cs_local_LIST_InsertHeadNode_newNode));
;;
static _Bool __cs_local_LIST_InsertHeadNode___cs_tmp_if_cond_21;
__CSEQ_rawline("tmain_44: IF(0,44,tmain_45)");
__cs_local_LIST_InsertHeadNode___cs_tmp_if_cond_21 = 0 == __cs_local_LIST_InsertHeadNode_newNode;
if (__cs_local_LIST_InsertHeadNode___cs_tmp_if_cond_21)
                {
__cs_local_LIST_InsertHeadNode_rCode = ENOMEM;
=======
__CSEQ_rawline("tmain_51: IF(0,51,tmain_52)");
__cs_local_LIST_InsertHeadNode_newNode = 0;
__CSEQ_rawline("tmain_52: IF(0,52,tmain_53)");
__cs_local_LIST_InsertHeadNode_newNode = __cs_safe_malloc(sizeof(*__cs_local_LIST_InsertHeadNode_newNode));
;;
static _Bool __cs_local_LIST_InsertHeadNode___cs_tmp_if_cond_21;
__CSEQ_rawline("tmain_53: IF(0,53,tmain_54)");
__cs_local_LIST_InsertHeadNode___cs_tmp_if_cond_21 = 0 == __cs_local_LIST_InsertHeadNode_newNode;
if (__cs_local_LIST_InsertHeadNode___cs_tmp_if_cond_21)
                {
__cs_local_LIST_InsertHeadNode_rCode = 12;
>>>>>>> origin/main
fprintf(stderr, "malloc() failed.\n");
goto CLEANUP_LIST_InsertHeadNode_0_0;;
                }
                ;
<<<<<<< HEAD
__CSEQ_rawline("tmain_45: IF(0,45,tmain_46)");
(*__cs_local_LIST_InsertHeadNode_newNode).payload.se = __cs_param_LIST_InsertHeadNode_I__se;
__CSEQ_rawline("tmain_46: IF(0,46,tmain_47)");
(*__cs_local_LIST_InsertHeadNode_newNode).payload.user_id = __cs_param_LIST_InsertHeadNode_I__user_id;
__CSEQ_rawline("tmain_47: IF(0,47,tmain_48)");
(*__cs_local_LIST_InsertHeadNode_newNode).next = *__cs_param_LIST_InsertHeadNode_IO_head;
__CSEQ_rawline("tmain_48: IF(0,48,tmain_49)");
*__cs_param_LIST_InsertHeadNode_IO_head = __cs_local_LIST_InsertHeadNode_newNode;
                CLEANUP_LIST_InsertHeadNode_0_0: __CSEQ_assume( __cs_pc_cs[0] >= 49 );
__cs_retval__LIST_InsertHeadNode_1 = __cs_local_LIST_InsertHeadNode_rCode;
goto __exit__LIST_InsertHeadNode_1_0;;
                __exit__LIST_InsertHeadNode_1_0: __CSEQ_assume( __cs_pc_cs[0] >= 49 );
=======
__CSEQ_rawline("tmain_54: IF(0,54,tmain_55)");
(*__cs_local_LIST_InsertHeadNode_newNode).payload.se = __cs_param_LIST_InsertHeadNode_I__se;
__CSEQ_rawline("tmain_55: IF(0,55,tmain_56)");
(*__cs_local_LIST_InsertHeadNode_newNode).payload.user_id = __cs_param_LIST_InsertHeadNode_I__user_id;
__CSEQ_rawline("tmain_56: IF(0,56,tmain_57)");
(*__cs_local_LIST_InsertHeadNode_newNode).next = *__cs_param_LIST_InsertHeadNode_IO_head;
__CSEQ_rawline("tmain_57: IF(0,57,tmain_58)");
*__cs_param_LIST_InsertHeadNode_IO_head = __cs_local_LIST_InsertHeadNode_newNode;
                CLEANUP_LIST_InsertHeadNode_0_0: __CSEQ_assume( __cs_pc_cs[0] >= 58 );
__cs_retval__LIST_InsertHeadNode_1 = __cs_local_LIST_InsertHeadNode_rCode;
goto __exit__LIST_InsertHeadNode_1_0;;
                __exit__LIST_InsertHeadNode_1_0: __CSEQ_assume( __cs_pc_cs[0] >= 58 );
>>>>>>> origin/main
;;
            }
;
__cs_retval__LIST_InsertHeadNode_1;
static int __cs_retval__lfds711_stack_pop_3;
            {
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
<<<<<<< HEAD
__CSEQ_rawline("tmain_49: IF(0,49,tmain_50)");
__cs_param_lfds711_stack_pop_ss = &ss;
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
__CSEQ_rawline("tmain_50: IF(0,50,tmain_51)");
=======
__CSEQ_rawline("tmain_58: IF(0,58,tmain_59)");
__cs_param_lfds711_stack_pop_ss = &ss;
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
__CSEQ_rawline("tmain_59: IF(0,59,tmain_60)");
>>>>>>> origin/main
__cs_param_lfds711_stack_pop_se = &__cs_local_createList_se;
static char unsigned __cs_local_lfds711_stack_pop_result;
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
<<<<<<< HEAD
__CSEQ_rawline("tmain_51: IF(0,51,tmain_52)");
=======
__CSEQ_rawline("tmain_60: IF(0,60,tmain_61)");
>>>>>>> origin/main
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_ss != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)
                {
static char *__cs_local_lfds711_stack_pop_c;
<<<<<<< HEAD
__CSEQ_rawline("tmain_52: IF(0,52,tmain_53)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tmain_53: IF(0,53,tmain_54)");
*__cs_local_lfds711_stack_pop_c = 0;
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 54 );;
=======
__CSEQ_rawline("tmain_61: IF(0,61,tmain_62)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tmain_62: IF(0,62,tmain_63)");
*__cs_local_lfds711_stack_pop_c = 0;
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 63 );;
>>>>>>> origin/main
;;
;;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
<<<<<<< HEAD
__CSEQ_rawline("tmain_54: IF(0,54,tmain_55)");
=======
__CSEQ_rawline("tmain_63: IF(0,63,tmain_64)");
>>>>>>> origin/main
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = !(__cs_param_lfds711_stack_pop_se != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
                {
static char *__cs_local_lfds711_stack_pop_c;
<<<<<<< HEAD
__CSEQ_rawline("tmain_55: IF(0,55,tmain_56)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tmain_56: IF(0,56,tmain_57)");
*__cs_local_lfds711_stack_pop_c = 0;
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 57 );;
;;
;;
__CSEQ_rawline("tmain_57: IF(0,57,tmain_58)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_58: IF(0,58,tmain_59)");
__cs_mutex_unlock(&lock, 0);
__CSEQ_rawline("tmain_59: IF(0,59,tmain_60)");
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
__CSEQ_rawline("tmain_60: IF(0,60,tmain_61)");
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
static int __cs_local_lfds711_stack_pop_i;
__cs_local_lfds711_stack_pop_i = 0;
;;
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;
                {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
                    {
__CSEQ_rawline("tmain_61: IF(0,61,tmain_62)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_3 = 0;
goto __exit__lfds711_stack_pop_3_0;;
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 62 );;
__CSEQ_rawline("tmain_62: IF(0,62,tmain_63)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tmain_63: IF(0,63,tmain_64)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tmain_64: IF(0,64,tmain_65)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_65: IF(0,65,tmain_66)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tmain_66: IF(0,66,tmain_67)");
__cs_mutex_unlock(&lock, 0);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
=======
__CSEQ_rawline("tmain_64: IF(0,64,tmain_65)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tmain_65: IF(0,65,tmain_66)");
*__cs_local_lfds711_stack_pop_c = 0;
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 66 );;
;;
;;
__CSEQ_rawline("tmain_66: IF(0,66,tmain_67)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_67: IF(0,67,tmain_68)");
__cs_mutex_unlock(&lock, 0);
__CSEQ_rawline("tmain_68: IF(0,68,tmain_69)");
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
__CSEQ_rawline("tmain_69: IF(0,69,tmain_70)");
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
static int __cs_local_lfds711_stack_pop_i;
__cs_local_lfds711_stack_pop_i = 0;
;;
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;
                {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
                    {
__CSEQ_rawline("tmain_70: IF(0,70,tmain_71)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_3 = 0;
goto __exit__lfds711_stack_pop_3_0;;
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 71 );;
__CSEQ_rawline("tmain_71: IF(0,71,tmain_72)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tmain_72: IF(0,72,tmain_73)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tmain_73: IF(0,73,tmain_74)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_74: IF(0,74,tmain_75)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tmain_75: IF(0,75,tmain_76)");
__cs_mutex_unlock(&lock, 0);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                    {
                        {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                            {
;;
                            }
;
__cs_local_exponential_backoff_loop++;
                            {
;;
                            }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tmain_76: IF(0,76,tmain_77)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                            __exit_loop_18: __CSEQ_assume( __cs_pc_cs[0] >= 77 );
;;
                            __exit__exponential_backoff_6_0: __CSEQ_assume( __cs_pc_cs[0] >= 77 );
;;
                        }
;
__CSEQ_rawline("tmain_77: IF(0,77,tmain_78)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_78: IF(0,78,tmain_79)");
__cs_mutex_unlock(&lock, 0);
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 79 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                    {
goto __exit_loop_17;;
                    }
                    ;
                }
;
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
__CSEQ_rawline("tmain_79: IF(0,79,tmain_80)");
__CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                __exit_loop_17: __CSEQ_assume( __cs_pc_cs[0] >= 80 );
;;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
                {
goto __exit_loop_19;;
                }
                ;
                {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                    {
__CSEQ_rawline("tmain_80: IF(0,80,tmain_81)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_3 = 0;
goto __exit__lfds711_stack_pop_3_0;;
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 81 );;
__CSEQ_rawline("tmain_81: IF(0,81,tmain_82)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tmain_82: IF(0,82,tmain_83)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tmain_83: IF(0,83,tmain_84)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_84: IF(0,84,tmain_85)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tmain_85: IF(0,85,tmain_86)");
__cs_mutex_unlock(&lock, 0);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                    {
                        {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                            {
;;
                            }
;
__cs_local_exponential_backoff_loop++;
                            {
;;
                            }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tmain_86: IF(0,86,tmain_87)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                            __exit_loop_20: __CSEQ_assume( __cs_pc_cs[0] >= 87 );
;;
                            __exit__exponential_backoff_7_0: __CSEQ_assume( __cs_pc_cs[0] >= 87 );
;;
                        }
;
__CSEQ_rawline("tmain_87: IF(0,87,tmain_88)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_88: IF(0,88,tmain_89)");
__cs_mutex_unlock(&lock, 0);
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 89 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                    {
goto __exit_loop_19;;
                    }
                    ;
                }
;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
                {
goto __exit_loop_19;;
                }
                ;
                {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                    {
__CSEQ_rawline("tmain_89: IF(0,89,tmain_90)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_3 = 0;
goto __exit__lfds711_stack_pop_3_0;;
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 90 );;
__CSEQ_rawline("tmain_90: IF(0,90,tmain_91)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tmain_91: IF(0,91,tmain_92)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tmain_92: IF(0,92,tmain_93)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_93: IF(0,93,tmain_94)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tmain_94: IF(0,94,tmain_95)");
__cs_mutex_unlock(&lock, 0);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                    {
                        {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                            {
;;
                            }
;
__cs_local_exponential_backoff_loop++;
                            {
;;
                            }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tmain_95: IF(0,95,tmain_96)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                            __exit_loop_21: __CSEQ_assume( __cs_pc_cs[0] >= 96 );
;;
                            __exit__exponential_backoff_7_1: __CSEQ_assume( __cs_pc_cs[0] >= 96 );
;;
                        }
;
__CSEQ_rawline("tmain_96: IF(0,96,tmain_97)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_97: IF(0,97,tmain_98)");
__cs_mutex_unlock(&lock, 0);
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 98 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                    {
goto __exit_loop_19;;
                    }
                    ;
                }
;
__CSEQ_rawline("tmain_98: IF(0,98,tmain_99)");
__CSEQ_assume(
!(__cs_local_lfds711_stack_pop_result == 0));
                __exit_loop_19: __CSEQ_assume( __cs_pc_cs[0] >= 99 );
;;
__CSEQ_rawline("tmain_99: IF(0,99,tmain_100)");
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
__cs_retval__lfds711_stack_pop_3 = 1;
goto __exit__lfds711_stack_pop_3_0;;
                __exit__lfds711_stack_pop_3_0: __CSEQ_assume( __cs_pc_cs[0] >= 100 );
;;
            }
;
__cs_local_createList_res = __cs_retval__lfds711_stack_pop_3;
        }
;
if (!(__cs_local_createList_res != 0))
        {
goto __exit_loop_16;;
        }
        ;
        {
__CSEQ_rawline("tmain_100: IF(0,100,tmain_101)");
__cs_local_createList_temp_td = (*__cs_local_createList_se).value;
static int __cs_retval__LIST_InsertHeadNode_1;
            {
static LIST_NODE_T **__cs_param_LIST_InsertHeadNode_IO_head;
__CSEQ_rawline("tmain_101: IF(0,101,tmain_102)");
__cs_param_LIST_InsertHeadNode_IO_head = &__cs_param_createList_listHead;
static struct lfds711_stack_element __cs_param_LIST_InsertHeadNode_I__se;
__CSEQ_rawline("tmain_102: IF(0,102,tmain_103)");
__cs_param_LIST_InsertHeadNode_I__se = (*__cs_local_createList_temp_td).se;
static int long long unsigned __cs_param_LIST_InsertHeadNode_I__user_id;
__CSEQ_rawline("tmain_103: IF(0,103,tmain_104)");
__cs_param_LIST_InsertHeadNode_I__user_id = (*__cs_local_createList_temp_td).user_id;
static int __cs_local_LIST_InsertHeadNode_rCode;
__cs_local_LIST_InsertHeadNode_rCode = 0;
static LIST_NODE_T *__cs_local_LIST_InsertHeadNode_newNode;
__CSEQ_rawline("tmain_104: IF(0,104,tmain_105)");
__cs_local_LIST_InsertHeadNode_newNode = 0;
__CSEQ_rawline("tmain_105: IF(0,105,tmain_106)");
__cs_local_LIST_InsertHeadNode_newNode = __cs_safe_malloc(sizeof(*__cs_local_LIST_InsertHeadNode_newNode));
;;
static _Bool __cs_local_LIST_InsertHeadNode___cs_tmp_if_cond_21;
__CSEQ_rawline("tmain_106: IF(0,106,tmain_107)");
__cs_local_LIST_InsertHeadNode___cs_tmp_if_cond_21 = 0 == __cs_local_LIST_InsertHeadNode_newNode;
if (__cs_local_LIST_InsertHeadNode___cs_tmp_if_cond_21)
                {
__cs_local_LIST_InsertHeadNode_rCode = 12;
fprintf(stderr, "malloc() failed.\n");
goto CLEANUP_LIST_InsertHeadNode_0_1;;
                }
                ;
__CSEQ_rawline("tmain_107: IF(0,107,tmain_108)");
(*__cs_local_LIST_InsertHeadNode_newNode).payload.se = __cs_param_LIST_InsertHeadNode_I__se;
__CSEQ_rawline("tmain_108: IF(0,108,tmain_109)");
(*__cs_local_LIST_InsertHeadNode_newNode).payload.user_id = __cs_param_LIST_InsertHeadNode_I__user_id;
__CSEQ_rawline("tmain_109: IF(0,109,tmain_110)");
(*__cs_local_LIST_InsertHeadNode_newNode).next = *__cs_param_LIST_InsertHeadNode_IO_head;
__CSEQ_rawline("tmain_110: IF(0,110,tmain_111)");
*__cs_param_LIST_InsertHeadNode_IO_head = __cs_local_LIST_InsertHeadNode_newNode;
                CLEANUP_LIST_InsertHeadNode_0_1: __CSEQ_assume( __cs_pc_cs[0] >= 111 );
__cs_retval__LIST_InsertHeadNode_1 = __cs_local_LIST_InsertHeadNode_rCode;
goto __exit__LIST_InsertHeadNode_1_1;;
                __exit__LIST_InsertHeadNode_1_1: __CSEQ_assume( __cs_pc_cs[0] >= 111 );
;;
            }
;
__cs_retval__LIST_InsertHeadNode_1;
static int __cs_retval__lfds711_stack_pop_3;
            {
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
__CSEQ_rawline("tmain_111: IF(0,111,tmain_112)");
__cs_param_lfds711_stack_pop_ss = &ss;
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
__CSEQ_rawline("tmain_112: IF(0,112,tmain_113)");
__cs_param_lfds711_stack_pop_se = &__cs_local_createList_se;
static char unsigned __cs_local_lfds711_stack_pop_result;
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
__CSEQ_rawline("tmain_113: IF(0,113,tmain_114)");
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_ss != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)
                {
static char *__cs_local_lfds711_stack_pop_c;
__CSEQ_rawline("tmain_114: IF(0,114,tmain_115)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tmain_115: IF(0,115,tmain_116)");
*__cs_local_lfds711_stack_pop_c = 0;
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 116 );;
;;
;;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
__CSEQ_rawline("tmain_116: IF(0,116,tmain_117)");
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = !(__cs_param_lfds711_stack_pop_se != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
                {
static char *__cs_local_lfds711_stack_pop_c;
__CSEQ_rawline("tmain_117: IF(0,117,tmain_118)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tmain_118: IF(0,118,tmain_119)");
*__cs_local_lfds711_stack_pop_c = 0;
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 119 );;
;;
;;
__CSEQ_rawline("tmain_119: IF(0,119,tmain_120)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_120: IF(0,120,tmain_121)");
__cs_mutex_unlock(&lock, 0);
__CSEQ_rawline("tmain_121: IF(0,121,tmain_122)");
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
__CSEQ_rawline("tmain_122: IF(0,122,tmain_123)");
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
static int __cs_local_lfds711_stack_pop_i;
__cs_local_lfds711_stack_pop_i = 0;
;;
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;
                {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
                    {
__CSEQ_rawline("tmain_123: IF(0,123,tmain_124)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_3 = 0;
goto __exit__lfds711_stack_pop_3_1;;
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 124 );;
__CSEQ_rawline("tmain_124: IF(0,124,tmain_125)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tmain_125: IF(0,125,tmain_126)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tmain_126: IF(0,126,tmain_127)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_127: IF(0,127,tmain_128)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tmain_128: IF(0,128,tmain_129)");
__cs_mutex_unlock(&lock, 0);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                    {
                        {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                            {
;;
                            }
;
__cs_local_exponential_backoff_loop++;
                            {
;;
                            }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tmain_129: IF(0,129,tmain_130)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                            __exit_loop_23: __CSEQ_assume( __cs_pc_cs[0] >= 130 );
;;
                            __exit__exponential_backoff_6_1: __CSEQ_assume( __cs_pc_cs[0] >= 130 );
;;
                        }
;
__CSEQ_rawline("tmain_130: IF(0,130,tmain_131)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_131: IF(0,131,tmain_132)");
__cs_mutex_unlock(&lock, 0);
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 132 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                    {
goto __exit_loop_22;;
                    }
                    ;
                }
;
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
__CSEQ_rawline("tmain_132: IF(0,132,tmain_133)");
__CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                __exit_loop_22: __CSEQ_assume( __cs_pc_cs[0] >= 133 );
;;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
                {
goto __exit_loop_24;;
                }
                ;
                {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                    {
__CSEQ_rawline("tmain_133: IF(0,133,tmain_134)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_3 = 0;
goto __exit__lfds711_stack_pop_3_1;;
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 134 );;
__CSEQ_rawline("tmain_134: IF(0,134,tmain_135)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tmain_135: IF(0,135,tmain_136)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tmain_136: IF(0,136,tmain_137)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_137: IF(0,137,tmain_138)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tmain_138: IF(0,138,tmain_139)");
__cs_mutex_unlock(&lock, 0);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
>>>>>>> origin/main
                    {
                        {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                            {
;;
                            }
;
__cs_local_exponential_backoff_loop++;
<<<<<<< HEAD
__CSEQ_rawline("tmain_67: IF(0,67,tmain_68)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                            __exit_loop_15: __CSEQ_assume( __cs_pc_cs[0] >= 68 );
;;
                            __exit__exponential_backoff_6_0: __CSEQ_assume( __cs_pc_cs[0] >= 68 );
;;
                        }
;
__CSEQ_rawline("tmain_68: IF(0,68,tmain_69)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_69: IF(0,69,tmain_70)");
__cs_mutex_unlock(&lock, 0);
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 70 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                    {
goto __exit_loop_14;;
=======
                            {
;;
                            }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tmain_139: IF(0,139,tmain_140)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                            __exit_loop_25: __CSEQ_assume( __cs_pc_cs[0] >= 140 );
;;
                            __exit__exponential_backoff_7_2: __CSEQ_assume( __cs_pc_cs[0] >= 140 );
;;
                        }
;
__CSEQ_rawline("tmain_140: IF(0,140,tmain_141)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_141: IF(0,141,tmain_142)");
__cs_mutex_unlock(&lock, 0);
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 142 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                    {
goto __exit_loop_24;;
>>>>>>> origin/main
                    }
                    ;
                }
;
<<<<<<< HEAD
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
__CSEQ_rawline("tmain_70: IF(0,70,tmain_71)");
__CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                __exit_loop_14: __CSEQ_assume( __cs_pc_cs[0] >= 71 );
;;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
                {
goto __exit_loop_16;;
=======
if (
!(__cs_local_lfds711_stack_pop_result == 0))
                {
goto __exit_loop_24;;
>>>>>>> origin/main
                }
                ;
                {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
                    {
<<<<<<< HEAD
__CSEQ_rawline("tmain_71: IF(0,71,tmain_72)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_3 = 0;
goto __exit__lfds711_stack_pop_3_0;;
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 72 );;
__CSEQ_rawline("tmain_72: IF(0,72,tmain_73)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tmain_73: IF(0,73,tmain_74)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tmain_74: IF(0,74,tmain_75)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_75: IF(0,75,tmain_76)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tmain_76: IF(0,76,tmain_77)");
=======
__CSEQ_rawline("tmain_142: IF(0,142,tmain_143)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_3 = 0;
goto __exit__lfds711_stack_pop_3_1;;
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 143 );;
__CSEQ_rawline("tmain_143: IF(0,143,tmain_144)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tmain_144: IF(0,144,tmain_145)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tmain_145: IF(0,145,tmain_146)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_146: IF(0,146,tmain_147)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tmain_147: IF(0,147,tmain_148)");
>>>>>>> origin/main
__cs_mutex_unlock(&lock, 0);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                    {
                        {
static int __cs_local_exponential_backoff_loop;
__cs_local_exponential_backoff_loop = 0;
                            {
;;
                            }
;
__cs_local_exponential_backoff_loop++;
<<<<<<< HEAD
__CSEQ_rawline("tmain_77: IF(0,77,tmain_78)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                            __exit_loop_17: __CSEQ_assume( __cs_pc_cs[0] >= 78 );
;;
                            __exit__exponential_backoff_7_0: __CSEQ_assume( __cs_pc_cs[0] >= 78 );
;;
                        }
;
__CSEQ_rawline("tmain_78: IF(0,78,tmain_79)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_79: IF(0,79,tmain_80)");
__cs_mutex_unlock(&lock, 0);
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 80 );;
=======
                            {
;;
                            }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tmain_148: IF(0,148,tmain_149)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 10));
                            __exit_loop_26: __CSEQ_assume( __cs_pc_cs[0] >= 149 );
;;
                            __exit__exponential_backoff_7_3: __CSEQ_assume( __cs_pc_cs[0] >= 149 );
;;
                        }
;
__CSEQ_rawline("tmain_149: IF(0,149,tmain_150)");
__cs_mutex_lock(&lock, 0);
__CSEQ_rawline("tmain_150: IF(0,150,tmain_151)");
__cs_mutex_unlock(&lock, 0);
                    }
                    __CSEQ_assume( __cs_pc_cs[0] >= 151 );;
>>>>>>> origin/main
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)
                    {
<<<<<<< HEAD
goto __exit_loop_16;;
=======
goto __exit_loop_24;;
>>>>>>> origin/main
                    }
                    ;
                }
;
<<<<<<< HEAD
__CSEQ_rawline("tmain_80: IF(0,80,tmain_81)");
__CSEQ_assume(
!(__cs_local_lfds711_stack_pop_result == 0));
                __exit_loop_16: __CSEQ_assume( __cs_pc_cs[0] >= 81 );
;;
__CSEQ_rawline("tmain_81: IF(0,81,tmain_82)");
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
__cs_retval__lfds711_stack_pop_3 = 1;
goto __exit__lfds711_stack_pop_3_0;;
                __exit__lfds711_stack_pop_3_0: __CSEQ_assume( __cs_pc_cs[0] >= 82 );
=======
__CSEQ_rawline("tmain_151: IF(0,151,tmain_152)");
__CSEQ_assume(
!(__cs_local_lfds711_stack_pop_result == 0));
                __exit_loop_24: __CSEQ_assume( __cs_pc_cs[0] >= 152 );
;;
__CSEQ_rawline("tmain_152: IF(0,152,tmain_153)");
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
__cs_retval__lfds711_stack_pop_3 = 1;
goto __exit__lfds711_stack_pop_3_1;;
                __exit__lfds711_stack_pop_3_1: __CSEQ_assume( __cs_pc_cs[0] >= 153 );
>>>>>>> origin/main
;;
            }
;
__cs_local_createList_res = __cs_retval__lfds711_stack_pop_3;
        }
;
<<<<<<< HEAD
__CSEQ_rawline("tmain_82: IF(0,82,tmain_83)");
__CSEQ_assume(!(__cs_local_createList_res != 0));
        __exit_loop_13: __CSEQ_assume( __cs_pc_cs[0] >= 83 );
;;
__CSEQ_rawline("tmain_83: IF(0,83,tmain_84)");
__cs_retval__createList_1 = __cs_param_createList_listHead;
goto __exit__createList_1;;
        __exit__createList_1: __CSEQ_assume( __cs_pc_cs[0] >= 84 );
;;
    }
;
__CSEQ_rawline("tmain_84: IF(0,84,tmain_85)");
__cs_local_main_listHead = __cs_retval__createList_1;
    {
static char *__cs_param_readFile_filename;
__CSEQ_rawline("tmain_85: IF(0,85,tmain_86)");
__cs_param_readFile_filename = "foo.txt";
static LIST_NODE_T *__cs_param_readFile_listHead;
__CSEQ_rawline("tmain_86: IF(0,86,tmain_87)");
__cs_param_readFile_listHead = __cs_local_main_listHead;
static char *__cs_local_readFile_line;
__CSEQ_rawline("tmain_87: IF(0,87,tmain_88)");
=======
__CSEQ_rawline("tmain_153: IF(0,153,tmain_154)");
__CSEQ_assume(!(__cs_local_createList_res != 0));
        __exit_loop_16: __CSEQ_assume( __cs_pc_cs[0] >= 154 );
;;
__CSEQ_rawline("tmain_154: IF(0,154,tmain_155)");
__cs_retval__createList_1 = __cs_param_createList_listHead;
goto __exit__createList_1;;
        __exit__createList_1: __CSEQ_assume( __cs_pc_cs[0] >= 155 );
;;
    }
;
__CSEQ_rawline("tmain_155: IF(0,155,tmain_156)");
__cs_local_main_listHead = __cs_retval__createList_1;
    {
static char *__cs_param_readFile_filename;
__CSEQ_rawline("tmain_156: IF(0,156,tmain_157)");
__cs_param_readFile_filename = "foo.txt";
static LIST_NODE_T *__cs_param_readFile_listHead;
__CSEQ_rawline("tmain_157: IF(0,157,tmain_158)");
__cs_param_readFile_listHead = __cs_local_main_listHead;
static char *__cs_local_readFile_line;
__CSEQ_rawline("tmain_158: IF(0,158,tmain_159)");
>>>>>>> origin/main
__cs_local_readFile_line = 0;
static size_t __cs_local_readFile_len;
__cs_local_readFile_len = 0;
static ssize_t __cs_local_readFile_read;
static LIST_NODE_T *__cs_local_readFile_parent;
<<<<<<< HEAD
__CSEQ_rawline("tmain_88: IF(0,88,tmain_89)");
__cs_local_readFile_parent = 0;
static LIST_NODE_T *__cs_local_readFile_curNode;
__CSEQ_rawline("tmain_89: IF(0,89,tmain_90)");
=======
__CSEQ_rawline("tmain_159: IF(0,159,tmain_160)");
__cs_local_readFile_parent = 0;
static LIST_NODE_T *__cs_local_readFile_curNode;
__CSEQ_rawline("tmain_160: IF(0,160,tmain_161)");
>>>>>>> origin/main
__cs_local_readFile_curNode = __cs_param_readFile_listHead;
static char __cs_local_readFile_delim[] = ",";
static int __cs_local_readFile_i;
__cs_local_readFile_i = 0;
static int __cs_local_readFile_size;
static int __cs_retval__GetListSize_1;
        {
static LIST_NODE_T *__cs_param_GetListSize_head;
<<<<<<< HEAD
__CSEQ_rawline("tmain_90: IF(0,90,tmain_91)");
__cs_param_GetListSize_head = __cs_local_readFile_curNode;
static LIST_NODE_T *__cs_local_GetListSize_cur;
__CSEQ_rawline("tmain_91: IF(0,91,tmain_92)");
__cs_local_GetListSize_cur = __cs_param_GetListSize_head;
static int __cs_local_GetListSize_nodeCnt;
__cs_local_GetListSize_nodeCnt = 0;
__CSEQ_rawline("tmain_92: IF(0,92,tmain_93)");
if (!__cs_local_GetListSize_cur)
            {
goto __exit_loop_18;;
=======
__CSEQ_rawline("tmain_161: IF(0,161,tmain_162)");
__cs_param_GetListSize_head = __cs_local_readFile_curNode;
static LIST_NODE_T *__cs_local_GetListSize_cur;
__CSEQ_rawline("tmain_162: IF(0,162,tmain_163)");
__cs_local_GetListSize_cur = __cs_param_GetListSize_head;
static int __cs_local_GetListSize_nodeCnt;
__cs_local_GetListSize_nodeCnt = 0;
__CSEQ_rawline("tmain_163: IF(0,163,tmain_164)");
if (!__cs_local_GetListSize_cur)
            {
goto __exit_loop_27;;
>>>>>>> origin/main
            }
            ;
            {
++__cs_local_GetListSize_nodeCnt;
<<<<<<< HEAD
__CSEQ_rawline("tmain_93: IF(0,93,tmain_94)");
__cs_local_GetListSize_cur = (*__cs_local_GetListSize_cur).next;
            }
;
__CSEQ_rawline("tmain_94: IF(0,94,tmain_95)");
__CSEQ_assume(!__cs_local_GetListSize_cur);
            __exit_loop_18: __CSEQ_assume( __cs_pc_cs[0] >= 95 );
;;
__cs_retval__GetListSize_1 = __cs_local_GetListSize_nodeCnt;
goto __exit__GetListSize_1;;
            __exit__GetListSize_1: __CSEQ_assume( __cs_pc_cs[0] >= 95 );
=======
__CSEQ_rawline("tmain_164: IF(0,164,tmain_165)");
__cs_local_GetListSize_cur = (*__cs_local_GetListSize_cur).next;
            }
;
__CSEQ_rawline("tmain_165: IF(0,165,tmain_166)");
if (!__cs_local_GetListSize_cur)
            {
goto __exit_loop_27;;
            }
            ;
            {
++__cs_local_GetListSize_nodeCnt;
__CSEQ_rawline("tmain_166: IF(0,166,tmain_167)");
__cs_local_GetListSize_cur = (*__cs_local_GetListSize_cur).next;
            }
;
__CSEQ_rawline("tmain_167: IF(0,167,tmain_168)");
__CSEQ_assume(!__cs_local_GetListSize_cur);
            __exit_loop_27: __CSEQ_assume( __cs_pc_cs[0] >= 168 );
;;
__cs_retval__GetListSize_1 = __cs_local_GetListSize_nodeCnt;
goto __exit__GetListSize_1;;
            __exit__GetListSize_1: __CSEQ_assume( __cs_pc_cs[0] >= 168 );
>>>>>>> origin/main
;;
        }
;
__cs_local_readFile_size = __cs_retval__GetListSize_1;
static FILE *__cs_local_readFile_fp;
<<<<<<< HEAD
__CSEQ_rawline("tmain_95: IF(0,95,tmain_96)");
__cs_local_readFile_fp = fopen(__cs_param_readFile_filename, "r");
;;
static _Bool __cs_local_readFile___cs_tmp_if_cond_45;
__CSEQ_rawline("tmain_96: IF(0,96,tmain_97)");
=======
__CSEQ_rawline("tmain_168: IF(0,168,tmain_169)");
__cs_local_readFile_fp = fopen(__cs_param_readFile_filename, "r");
;;
static _Bool __cs_local_readFile___cs_tmp_if_cond_45;
__CSEQ_rawline("tmain_169: IF(0,169,tmain_170)");
>>>>>>> origin/main
__cs_local_readFile___cs_tmp_if_cond_45 = !__cs_local_readFile_fp;
if (__cs_local_readFile___cs_tmp_if_cond_45)
        {
            {
static char *__cs_param_writeIntofile_filename;
<<<<<<< HEAD
__CSEQ_rawline("tmain_97: IF(0,97,tmain_98)");
__cs_param_writeIntofile_filename = __cs_param_readFile_filename;
static LIST_NODE_T *__cs_param_writeIntofile_listHead;
__CSEQ_rawline("tmain_98: IF(0,98,tmain_99)");
__cs_param_writeIntofile_listHead = __cs_param_readFile_listHead;
static int __cs_local_writeIntofile_filefd;
__CSEQ_rawline("tmain_99: IF(0,99,tmain_100)");
=======
__CSEQ_rawline("tmain_170: IF(0,170,tmain_171)");
__cs_param_writeIntofile_filename = __cs_param_readFile_filename;
static LIST_NODE_T *__cs_param_writeIntofile_listHead;
__CSEQ_rawline("tmain_171: IF(0,171,tmain_172)");
__cs_param_writeIntofile_listHead = __cs_param_readFile_listHead;
static int __cs_local_writeIntofile_filefd;
__CSEQ_rawline("tmain_172: IF(0,172,tmain_173)");
>>>>>>> origin/main
__cs_local_writeIntofile_filefd = open(__cs_param_writeIntofile_filename, (O_WRONLY | O_CREAT) | O_APPEND, 0666);
static int __cs_local_writeIntofile_saved;
__cs_local_writeIntofile_saved = dup(1);
close(1);
dup(__cs_local_writeIntofile_filefd);
static int __cs_retval__PrintListPayloads_1;
                {
static LIST_NODE_T *__cs_param_PrintListPayloads_head;
<<<<<<< HEAD
__CSEQ_rawline("tmain_100: IF(0,100,tmain_101)");
=======
__CSEQ_rawline("tmain_173: IF(0,173,tmain_174)");
>>>>>>> origin/main
__cs_param_PrintListPayloads_head = __cs_param_writeIntofile_listHead;
static int __cs_local_PrintListPayloads_rCode;
__cs_local_PrintListPayloads_rCode = 0;
static LIST_NODE_T *__cs_local_PrintListPayloads_cur;
<<<<<<< HEAD
__CSEQ_rawline("tmain_101: IF(0,101,tmain_102)");
__cs_local_PrintListPayloads_cur = __cs_param_PrintListPayloads_head;
__CSEQ_rawline("tmain_102: IF(0,102,tmain_103)");
if (!__cs_local_PrintListPayloads_cur)
                    {
goto __exit_loop_19;;
                    }
                    ;
                    {
__CSEQ_rawline("tmain_103: IF(0,103,tmain_104)");
printf("%lld", (*__cs_local_PrintListPayloads_cur).payload.user_id);
__CSEQ_rawline("tmain_104: IF(0,104,tmain_105)");
__cs_local_PrintListPayloads_cur = (*__cs_local_PrintListPayloads_cur).next;
;;
static _Bool __cs_local_PrintListPayloads___cs_tmp_if_cond_22;
__CSEQ_rawline("tmain_105: IF(0,105,tmain_106)");
=======
__CSEQ_rawline("tmain_174: IF(0,174,tmain_175)");
__cs_local_PrintListPayloads_cur = __cs_param_PrintListPayloads_head;
__CSEQ_rawline("tmain_175: IF(0,175,tmain_176)");
if (!__cs_local_PrintListPayloads_cur)
                    {
goto __exit_loop_28;;
                    }
                    ;
                    {
__CSEQ_rawline("tmain_176: IF(0,176,tmain_177)");
printf("%lld", (*__cs_local_PrintListPayloads_cur).payload.user_id);
__CSEQ_rawline("tmain_177: IF(0,177,tmain_178)");
__cs_local_PrintListPayloads_cur = (*__cs_local_PrintListPayloads_cur).next;
;;
static _Bool __cs_local_PrintListPayloads___cs_tmp_if_cond_22;
__CSEQ_rawline("tmain_178: IF(0,178,tmain_179)");
>>>>>>> origin/main
__cs_local_PrintListPayloads___cs_tmp_if_cond_22 = __cs_local_PrintListPayloads_cur != 0;
if (__cs_local_PrintListPayloads___cs_tmp_if_cond_22)
                        {
printf(",");
                        }
                        ;
                    }
;
<<<<<<< HEAD
__CSEQ_rawline("tmain_106: IF(0,106,tmain_107)");
__CSEQ_assume(!__cs_local_PrintListPayloads_cur);
                    __exit_loop_19: __CSEQ_assume( __cs_pc_cs[0] >= 107 );
=======
__CSEQ_rawline("tmain_179: IF(0,179,tmain_180)");
if (!__cs_local_PrintListPayloads_cur)
                    {
goto __exit_loop_28;;
                    }
                    ;
                    {
__CSEQ_rawline("tmain_180: IF(0,180,tmain_181)");
printf("%lld", (*__cs_local_PrintListPayloads_cur).payload.user_id);
__CSEQ_rawline("tmain_181: IF(0,181,tmain_182)");
__cs_local_PrintListPayloads_cur = (*__cs_local_PrintListPayloads_cur).next;
;;
static _Bool __cs_local_PrintListPayloads___cs_tmp_if_cond_22;
__CSEQ_rawline("tmain_182: IF(0,182,tmain_183)");
__cs_local_PrintListPayloads___cs_tmp_if_cond_22 = __cs_local_PrintListPayloads_cur != 0;
if (__cs_local_PrintListPayloads___cs_tmp_if_cond_22)
                        {
printf(",");
                        }
                        ;
                    }
;
__CSEQ_rawline("tmain_183: IF(0,183,tmain_184)");
__CSEQ_assume(!__cs_local_PrintListPayloads_cur);
                    __exit_loop_28: __CSEQ_assume( __cs_pc_cs[0] >= 184 );
>>>>>>> origin/main
;;
printf("\n");
__cs_retval__PrintListPayloads_1 = __cs_local_PrintListPayloads_rCode;
goto __exit__PrintListPayloads_1;;
<<<<<<< HEAD
                    __exit__PrintListPayloads_1: __CSEQ_assume( __cs_pc_cs[0] >= 107 );
=======
                    __exit__PrintListPayloads_1: __CSEQ_assume( __cs_pc_cs[0] >= 184 );
>>>>>>> origin/main
;;
                }
;
__cs_retval__PrintListPayloads_1;
close(__cs_local_writeIntofile_filefd);
fflush(stdout);
dup2(__cs_local_writeIntofile_saved, 1);
close(__cs_local_writeIntofile_saved);
<<<<<<< HEAD
                __exit__writeIntofile_1: __CSEQ_assume( __cs_pc_cs[0] >= 107 );
=======
                __exit__writeIntofile_1: __CSEQ_assume( __cs_pc_cs[0] >= 184 );
>>>>>>> origin/main
;;
            }
;
__CSEQ_assert(0);
goto __exit__readFile_1;;
        }
<<<<<<< HEAD
        __CSEQ_assume( __cs_pc_cs[0] >= 107 );;
__CSEQ_rawline("tmain_107: IF(0,107,tmain_108)");
if (!((__cs_local_readFile_read = getline(&__cs_local_readFile_line, &__cs_local_readFile_len, __cs_local_readFile_fp)) != (-1)))
        {
goto __exit_loop_20;;
=======
        __CSEQ_assume( __cs_pc_cs[0] >= 184 );;
__CSEQ_rawline("tmain_184: IF(0,184,tmain_185)");
if (!((__cs_local_readFile_read = getline(&__cs_local_readFile_line, &__cs_local_readFile_len, __cs_local_readFile_fp)) != (-1)))
        {
goto __exit_loop_29;;
>>>>>>> origin/main
        }
        ;
        {
static char *__cs_local_readFile_ptr;
<<<<<<< HEAD
__CSEQ_rawline("tmain_108: IF(0,108,tmain_109)");
__cs_local_readFile_ptr = strtok(__cs_local_readFile_line, __cs_local_readFile_delim);
__CSEQ_rawline("tmain_109: IF(0,109,tmain_110)");
if (!__cs_local_readFile_curNode)
            {
goto __exit_loop_21;;
=======
__CSEQ_rawline("tmain_185: IF(0,185,tmain_186)");
__cs_local_readFile_ptr = strtok(__cs_local_readFile_line, __cs_local_readFile_delim);
__CSEQ_rawline("tmain_186: IF(0,186,tmain_187)");
if (!__cs_local_readFile_curNode)
            {
goto __exit_loop_30;;
>>>>>>> origin/main
            }
            ;
            {
;;
static _Bool __cs_local_readFile___cs_tmp_if_cond_46;
<<<<<<< HEAD
__CSEQ_rawline("tmain_110: IF(0,110,tmain_111)");
__cs_local_readFile___cs_tmp_if_cond_46 = (*__cs_local_readFile_curNode).payload.user_id != atoi(__cs_local_readFile_ptr);
if (__cs_local_readFile___cs_tmp_if_cond_46)
                {
goto __exit_loop_21;;
                }
                ;
__cs_local_readFile_i++;
__CSEQ_rawline("tmain_111: IF(0,111,tmain_112)");
__cs_local_readFile_parent = __cs_local_readFile_curNode;
__CSEQ_rawline("tmain_112: IF(0,112,tmain_113)");
__cs_local_readFile_curNode = (*__cs_local_readFile_curNode).next;
__CSEQ_rawline("tmain_113: IF(0,113,tmain_114)");
__cs_local_readFile_ptr = strtok(0, __cs_local_readFile_delim);
            }
;
__CSEQ_rawline("tmain_114: IF(0,114,tmain_115)");
__CSEQ_assume(!__cs_local_readFile_curNode);
            __exit_loop_21: __CSEQ_assume( __cs_pc_cs[0] >= 115 );
=======
__CSEQ_rawline("tmain_187: IF(0,187,tmain_188)");
__cs_local_readFile___cs_tmp_if_cond_46 = (*__cs_local_readFile_curNode).payload.user_id != atoi(__cs_local_readFile_ptr);
if (__cs_local_readFile___cs_tmp_if_cond_46)
                {
goto __exit_loop_30;;
                }
                ;
__cs_local_readFile_i++;
__CSEQ_rawline("tmain_188: IF(0,188,tmain_189)");
__cs_local_readFile_parent = __cs_local_readFile_curNode;
__CSEQ_rawline("tmain_189: IF(0,189,tmain_190)");
__cs_local_readFile_curNode = (*__cs_local_readFile_curNode).next;
__CSEQ_rawline("tmain_190: IF(0,190,tmain_191)");
__cs_local_readFile_ptr = strtok(0, __cs_local_readFile_delim);
            }
;
__CSEQ_rawline("tmain_191: IF(0,191,tmain_192)");
if (!__cs_local_readFile_curNode)
            {
goto __exit_loop_30;;
            }
            ;
            {
;;
static _Bool __cs_local_readFile___cs_tmp_if_cond_46;
__CSEQ_rawline("tmain_192: IF(0,192,tmain_193)");
__cs_local_readFile___cs_tmp_if_cond_46 = (*__cs_local_readFile_curNode).payload.user_id != atoi(__cs_local_readFile_ptr);
if (__cs_local_readFile___cs_tmp_if_cond_46)
                {
goto __exit_loop_30;;
                }
                ;
__cs_local_readFile_i++;
__CSEQ_rawline("tmain_193: IF(0,193,tmain_194)");
__cs_local_readFile_parent = __cs_local_readFile_curNode;
__CSEQ_rawline("tmain_194: IF(0,194,tmain_195)");
__cs_local_readFile_curNode = (*__cs_local_readFile_curNode).next;
__CSEQ_rawline("tmain_195: IF(0,195,tmain_196)");
__cs_local_readFile_ptr = strtok(0, __cs_local_readFile_delim);
            }
;
__CSEQ_rawline("tmain_196: IF(0,196,tmain_197)");
__CSEQ_assume(!__cs_local_readFile_curNode);
            __exit_loop_30: __CSEQ_assume( __cs_pc_cs[0] >= 197 );
>>>>>>> origin/main
;;
;;
static _Bool __cs_local_readFile___cs_tmp_if_cond_47;
__cs_local_readFile___cs_tmp_if_cond_47 = __cs_local_readFile_i == __cs_local_readFile_size;
if (__cs_local_readFile___cs_tmp_if_cond_47)
            {
<<<<<<< HEAD
__CSEQ_rawline("tmain_115: IF(0,115,tmain_116)");
fclose(__cs_local_readFile_fp);
goto __exit__readFile_1;;
            }
            __CSEQ_assume( __cs_pc_cs[0] >= 116 );;
__cs_local_readFile_i = 0;
        }
;
__CSEQ_rawline("tmain_116: IF(0,116,tmain_117)");
__CSEQ_assume(!((__cs_local_readFile_read = getline(&__cs_local_readFile_line, &__cs_local_readFile_len, __cs_local_readFile_fp)) != (-1)));
        __exit_loop_20: __CSEQ_assume( __cs_pc_cs[0] >= 117 );
=======
__CSEQ_rawline("tmain_197: IF(0,197,tmain_198)");
fclose(__cs_local_readFile_fp);
goto __exit__readFile_1;;
            }
            __CSEQ_assume( __cs_pc_cs[0] >= 198 );;
__cs_local_readFile_i = 0;
        }
;
__CSEQ_rawline("tmain_198: IF(0,198,tmain_199)");
if (!((__cs_local_readFile_read = getline(&__cs_local_readFile_line, &__cs_local_readFile_len, __cs_local_readFile_fp)) != (-1)))
        {
goto __exit_loop_29;;
        }
        ;
        {
static char *__cs_local_readFile_ptr;
__CSEQ_rawline("tmain_199: IF(0,199,tmain_200)");
__cs_local_readFile_ptr = strtok(__cs_local_readFile_line, __cs_local_readFile_delim);
__CSEQ_rawline("tmain_200: IF(0,200,tmain_201)");
if (!__cs_local_readFile_curNode)
            {
goto __exit_loop_31;;
            }
            ;
            {
;;
static _Bool __cs_local_readFile___cs_tmp_if_cond_46;
__CSEQ_rawline("tmain_201: IF(0,201,tmain_202)");
__cs_local_readFile___cs_tmp_if_cond_46 = (*__cs_local_readFile_curNode).payload.user_id != atoi(__cs_local_readFile_ptr);
if (__cs_local_readFile___cs_tmp_if_cond_46)
                {
goto __exit_loop_31;;
                }
                ;
__cs_local_readFile_i++;
__CSEQ_rawline("tmain_202: IF(0,202,tmain_203)");
__cs_local_readFile_parent = __cs_local_readFile_curNode;
__CSEQ_rawline("tmain_203: IF(0,203,tmain_204)");
__cs_local_readFile_curNode = (*__cs_local_readFile_curNode).next;
__CSEQ_rawline("tmain_204: IF(0,204,tmain_205)");
__cs_local_readFile_ptr = strtok(0, __cs_local_readFile_delim);
            }
;
__CSEQ_rawline("tmain_205: IF(0,205,tmain_206)");
if (!__cs_local_readFile_curNode)
            {
goto __exit_loop_31;;
            }
            ;
            {
;;
static _Bool __cs_local_readFile___cs_tmp_if_cond_46;
__CSEQ_rawline("tmain_206: IF(0,206,tmain_207)");
__cs_local_readFile___cs_tmp_if_cond_46 = (*__cs_local_readFile_curNode).payload.user_id != atoi(__cs_local_readFile_ptr);
if (__cs_local_readFile___cs_tmp_if_cond_46)
                {
goto __exit_loop_31;;
                }
                ;
__cs_local_readFile_i++;
__CSEQ_rawline("tmain_207: IF(0,207,tmain_208)");
__cs_local_readFile_parent = __cs_local_readFile_curNode;
__CSEQ_rawline("tmain_208: IF(0,208,tmain_209)");
__cs_local_readFile_curNode = (*__cs_local_readFile_curNode).next;
__CSEQ_rawline("tmain_209: IF(0,209,tmain_210)");
__cs_local_readFile_ptr = strtok(0, __cs_local_readFile_delim);
            }
;
__CSEQ_rawline("tmain_210: IF(0,210,tmain_211)");
__CSEQ_assume(!__cs_local_readFile_curNode);
            __exit_loop_31: __CSEQ_assume( __cs_pc_cs[0] >= 211 );
;;
;;
static _Bool __cs_local_readFile___cs_tmp_if_cond_47;
__cs_local_readFile___cs_tmp_if_cond_47 = __cs_local_readFile_i == __cs_local_readFile_size;
if (__cs_local_readFile___cs_tmp_if_cond_47)
            {
__CSEQ_rawline("tmain_211: IF(0,211,tmain_212)");
fclose(__cs_local_readFile_fp);
goto __exit__readFile_1;;
            }
            __CSEQ_assume( __cs_pc_cs[0] >= 212 );;
__cs_local_readFile_i = 0;
        }
;
__CSEQ_rawline("tmain_212: IF(0,212,tmain_213)");
__CSEQ_assume(!((__cs_local_readFile_read = getline(&__cs_local_readFile_line, &__cs_local_readFile_len, __cs_local_readFile_fp)) != (-1)));
        __exit_loop_29: __CSEQ_assume( __cs_pc_cs[0] >= 213 );
>>>>>>> origin/main
;;
;;
static _Bool __cs_local_readFile___cs_tmp_if_cond_48;
__cs_local_readFile___cs_tmp_if_cond_48 = __cs_local_readFile_i != __cs_local_readFile_size;
if (__cs_local_readFile___cs_tmp_if_cond_48)
        {
            {
static char *__cs_param_writeIntofile_filename;
<<<<<<< HEAD
__CSEQ_rawline("tmain_117: IF(0,117,tmain_118)");
__cs_param_writeIntofile_filename = __cs_param_readFile_filename;
static LIST_NODE_T *__cs_param_writeIntofile_listHead;
__CSEQ_rawline("tmain_118: IF(0,118,tmain_119)");
__cs_param_writeIntofile_listHead = __cs_param_readFile_listHead;
static int __cs_local_writeIntofile_filefd;
__CSEQ_rawline("tmain_119: IF(0,119,tmain_120)");
=======
__CSEQ_rawline("tmain_213: IF(0,213,tmain_214)");
__cs_param_writeIntofile_filename = __cs_param_readFile_filename;
static LIST_NODE_T *__cs_param_writeIntofile_listHead;
__CSEQ_rawline("tmain_214: IF(0,214,tmain_215)");
__cs_param_writeIntofile_listHead = __cs_param_readFile_listHead;
static int __cs_local_writeIntofile_filefd;
__CSEQ_rawline("tmain_215: IF(0,215,tmain_216)");
>>>>>>> origin/main
__cs_local_writeIntofile_filefd = open(__cs_param_writeIntofile_filename, (O_WRONLY | O_CREAT) | O_APPEND, 0666);
static int __cs_local_writeIntofile_saved;
__cs_local_writeIntofile_saved = dup(1);
close(1);
dup(__cs_local_writeIntofile_filefd);
static int __cs_retval__PrintListPayloads_2;
                {
static LIST_NODE_T *__cs_param_PrintListPayloads_head;
<<<<<<< HEAD
__CSEQ_rawline("tmain_120: IF(0,120,tmain_121)");
=======
__CSEQ_rawline("tmain_216: IF(0,216,tmain_217)");
>>>>>>> origin/main
__cs_param_PrintListPayloads_head = __cs_param_writeIntofile_listHead;
static int __cs_local_PrintListPayloads_rCode;
__cs_local_PrintListPayloads_rCode = 0;
static LIST_NODE_T *__cs_local_PrintListPayloads_cur;
<<<<<<< HEAD
__CSEQ_rawline("tmain_121: IF(0,121,tmain_122)");
__cs_local_PrintListPayloads_cur = __cs_param_PrintListPayloads_head;
__CSEQ_rawline("tmain_122: IF(0,122,tmain_123)");
if (!__cs_local_PrintListPayloads_cur)
                    {
goto __exit_loop_22;;
                    }
                    ;
                    {
__CSEQ_rawline("tmain_123: IF(0,123,tmain_124)");
printf("%lld", (*__cs_local_PrintListPayloads_cur).payload.user_id);
__CSEQ_rawline("tmain_124: IF(0,124,tmain_125)");
__cs_local_PrintListPayloads_cur = (*__cs_local_PrintListPayloads_cur).next;
;;
static _Bool __cs_local_PrintListPayloads___cs_tmp_if_cond_22;
__CSEQ_rawline("tmain_125: IF(0,125,tmain_126)");
=======
__CSEQ_rawline("tmain_217: IF(0,217,tmain_218)");
__cs_local_PrintListPayloads_cur = __cs_param_PrintListPayloads_head;
__CSEQ_rawline("tmain_218: IF(0,218,tmain_219)");
if (!__cs_local_PrintListPayloads_cur)
                    {
goto __exit_loop_32;;
                    }
                    ;
                    {
__CSEQ_rawline("tmain_219: IF(0,219,tmain_220)");
printf("%lld", (*__cs_local_PrintListPayloads_cur).payload.user_id);
__CSEQ_rawline("tmain_220: IF(0,220,tmain_221)");
__cs_local_PrintListPayloads_cur = (*__cs_local_PrintListPayloads_cur).next;
;;
static _Bool __cs_local_PrintListPayloads___cs_tmp_if_cond_22;
__CSEQ_rawline("tmain_221: IF(0,221,tmain_222)");
>>>>>>> origin/main
__cs_local_PrintListPayloads___cs_tmp_if_cond_22 = __cs_local_PrintListPayloads_cur != 0;
if (__cs_local_PrintListPayloads___cs_tmp_if_cond_22)
                        {
printf(",");
                        }
                        ;
                    }
;
<<<<<<< HEAD
__CSEQ_rawline("tmain_126: IF(0,126,tmain_127)");
__CSEQ_assume(!__cs_local_PrintListPayloads_cur);
                    __exit_loop_22: __CSEQ_assume( __cs_pc_cs[0] >= 127 );
=======
__CSEQ_rawline("tmain_222: IF(0,222,tmain_223)");
if (!__cs_local_PrintListPayloads_cur)
                    {
goto __exit_loop_32;;
                    }
                    ;
                    {
__CSEQ_rawline("tmain_223: IF(0,223,tmain_224)");
printf("%lld", (*__cs_local_PrintListPayloads_cur).payload.user_id);
__CSEQ_rawline("tmain_224: IF(0,224,tmain_225)");
__cs_local_PrintListPayloads_cur = (*__cs_local_PrintListPayloads_cur).next;
;;
static _Bool __cs_local_PrintListPayloads___cs_tmp_if_cond_22;
__CSEQ_rawline("tmain_225: IF(0,225,tmain_226)");
__cs_local_PrintListPayloads___cs_tmp_if_cond_22 = __cs_local_PrintListPayloads_cur != 0;
if (__cs_local_PrintListPayloads___cs_tmp_if_cond_22)
                        {
printf(",");
                        }
                        ;
                    }
;
__CSEQ_rawline("tmain_226: IF(0,226,tmain_227)");
__CSEQ_assume(!__cs_local_PrintListPayloads_cur);
                    __exit_loop_32: __CSEQ_assume( __cs_pc_cs[0] >= 227 );
>>>>>>> origin/main
;;
printf("\n");
__cs_retval__PrintListPayloads_2 = __cs_local_PrintListPayloads_rCode;
goto __exit__PrintListPayloads_2;;
<<<<<<< HEAD
                    __exit__PrintListPayloads_2: __CSEQ_assume( __cs_pc_cs[0] >= 127 );
=======
                    __exit__PrintListPayloads_2: __CSEQ_assume( __cs_pc_cs[0] >= 227 );
>>>>>>> origin/main
;;
                }
;
__cs_retval__PrintListPayloads_2;
close(__cs_local_writeIntofile_filefd);
fflush(stdout);
dup2(__cs_local_writeIntofile_saved, 1);
close(__cs_local_writeIntofile_saved);
<<<<<<< HEAD
                __exit__writeIntofile_2: __CSEQ_assume( __cs_pc_cs[0] >= 127 );
=======
                __exit__writeIntofile_2: __CSEQ_assume( __cs_pc_cs[0] >= 227 );
>>>>>>> origin/main
;;
            }
;
__CSEQ_assert(0);
goto __exit__readFile_1;;
        }
<<<<<<< HEAD
        __CSEQ_assume( __cs_pc_cs[0] >= 127 );;
        __exit__readFile_1: __CSEQ_assume( __cs_pc_cs[0] >= 127 );
=======
        __CSEQ_assume( __cs_pc_cs[0] >= 227 );;
        __exit__readFile_1: __CSEQ_assume( __cs_pc_cs[0] >= 227 );
>>>>>>> origin/main
;;
    }
;
goto __exit_main;;
<<<<<<< HEAD
    __exit_main: __CSEQ_assume( __cs_pc_cs[0] >= 127 );
;;
__CSEQ_rawline("tmain_127: ");
=======
    __exit_main: __CSEQ_assume( __cs_pc_cs[0] >= 227 );
;;
__CSEQ_rawline("tmain_227: ");
>>>>>>> origin/main
__cs_exit(0, 0);
}
int main(void) {
__CSEQ_rawline("/* round  0 */");
__CSEQ_rawline("    /* main */");
          unsigned int __cs_tmp_t0_r0 ;
          __cs_pc_cs[0] = __cs_tmp_t0_r0;
          __CSEQ_assume(__cs_pc_cs[0] > 0);
<<<<<<< HEAD
          __CSEQ_assume(__cs_pc_cs[0] <= 127);
=======
          __CSEQ_assume(__cs_pc_cs[0] <= 227);
>>>>>>> origin/main
          main_thread();
          __cs_pc[0] = __cs_pc_cs[0];

__CSEQ_rawline("    /* push_0 */");
         unsigned int __cs_tmp_t1_r0 ;
         if (__cs_active_thread[1]) {
             __cs_pc_cs[1] = __cs_tmp_t1_r0;
<<<<<<< HEAD
             __CSEQ_assume(__cs_pc_cs[1] <= 24);
=======
             __CSEQ_assume(__cs_pc_cs[1] <= 32);
>>>>>>> origin/main
             push_0(__cs_threadargs[1]);
             __cs_pc[1] = __cs_pc_cs[1];
         }

__CSEQ_rawline("    /* pop_0 */");
         unsigned int __cs_tmp_t2_r0 ;
         if (__cs_active_thread[2]) {
             __cs_pc_cs[2] = __cs_tmp_t2_r0;
<<<<<<< HEAD
             __CSEQ_assume(__cs_pc_cs[2] <= 37);
=======
             __CSEQ_assume(__cs_pc_cs[2] <= 46);
>>>>>>> origin/main
             pop_0(__cs_threadargs[2]);
             __cs_pc[2] = __cs_pc_cs[2];
         }

          unsigned int __cs_tmp_t0_r1 ;
           if (__cs_active_thread[0] == 1) {
             __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
             __CSEQ_assume(__cs_pc_cs[0] >= __cs_pc[0]);
<<<<<<< HEAD
             __CSEQ_assume(__cs_pc_cs[0] <= 127);
=======
             __CSEQ_assume(__cs_pc_cs[0] <= 227);
>>>>>>> origin/main
             main_thread();
           }
    return 0;
}

