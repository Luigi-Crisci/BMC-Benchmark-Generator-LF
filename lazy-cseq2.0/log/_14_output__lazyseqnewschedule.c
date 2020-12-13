unsigned int __cs_active_thread[3]={1};
unsigned int __cs_pc[3];
unsigned int __cs_pc_cs[3];
unsigned int __cs_last_thread;
unsigned int __cs_thread_lines[3] = {4, 121, 155};

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
__cs_mutex_t library_lock;
int __CSEQ_atomic_swap_stack_top(struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_top, struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_oldtop, 
struct lfds711_stack_element **__cs_param___CSEQ_atomic_swap_stack_top_newtop)
{
;;
static _Bool __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0;
__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0 = (*__cs_param___CSEQ_atomic_swap_stack_top_oldtop) == (*__cs_param___CSEQ_atomic_swap_stack_top_top);
if (__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0)
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
_Bool __CSEQ_atomic_compare_and_exchange(int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_mptr, int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_eptr, int long long unsigned __cs_param___CSEQ_atomic_compare_and_exchange_newval, _Bool __cs_param___CSEQ_atomic_compare_and_exchange_weak_p, int __cs_param___CSEQ_atomic_compare_and_exchange_sm, int __cs_param___CSEQ_atomic_compare_and_exchange_fm)
{
;;
static _Bool __cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18;
__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18 = (*__cs_param___CSEQ_atomic_compare_and_exchange_mptr) == (*__cs_param___CSEQ_atomic_compare_and_exchange_eptr);
if (__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18)
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
struct lfds711_stack_state mystack;
struct test_data
{
struct lfds711_stack_element se;
int long long unsigned user_id;
};
int ATOMIC_OPERATION = 0;
void *ss;
__cs_mutex_t lock;
void *push_0(void *__cs_param_push___cs_unused)
{
static int long long unsigned __cs_local_push_loop;
__CSEQ_rawline("IF(1,0,tpush_0_1)");
__cs_init_scalar(&__cs_local_push_loop, sizeof(int long long unsigned));
;;
static _Bool __cs_local_push___cs_tmp_if_cond_24;
__CSEQ_rawline("tpush_0_1: IF(1,1,tpush_0_2)");
__cs_local_push___cs_tmp_if_cond_24 = ATOMIC_OPERATION;
if (__cs_local_push___cs_tmp_if_cond_24)
    {
__CSEQ_rawline("tpush_0_2: IF(1,2,tpush_0_3)");
__cs_mutex_lock(&lock, 1);
    }
    __CSEQ_assume( __cs_pc_cs[1] >= 3 );;
;;
static int __cs_local_push_qwerty;
__cs_local_push_qwerty = 1050;
    {
static struct lfds711_stack_state *__cs_param_insert_s;
__CSEQ_rawline("tpush_0_3: IF(1,3,tpush_0_4)");
__cs_param_insert_s = ss;
static int long long unsigned __cs_param_insert_id;
__cs_param_insert_id = 1500;
static struct test_data *__cs_local_insert_td;
__CSEQ_rawline("tpush_0_4: IF(1,4,tpush_0_5)");
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
__CSEQ_rawline("tpush_0_5: IF(1,5,tpush_0_6)");
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
__CSEQ_rawline("tpush_0_6: IF(1,6,tpush_0_7)");
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);
        {
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
__CSEQ_rawline("tpush_0_7: IF(1,7,tpush_0_8)");
__cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
__CSEQ_rawline("tpush_0_8: IF(1,8,tpush_0_9)");
__cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
static char unsigned __cs_local_lfds711_stack_push_result;
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
__cs_local_lfds711_stack_push_backoff_iteration = 0;
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
__CSEQ_rawline("tpush_0_9: IF(1,9,tpush_0_10)");
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)
            {
static char *__cs_local_lfds711_stack_push_c;
__CSEQ_rawline("tpush_0_10: IF(1,10,tpush_0_11)");
__cs_local_lfds711_stack_push_c = 0;
__CSEQ_rawline("tpush_0_11: IF(1,11,tpush_0_12)");
*__cs_local_lfds711_stack_push_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[1] >= 12 );;
;;
;;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
__CSEQ_rawline("tpush_0_12: IF(1,12,tpush_0_13)");
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)
            {
static char *__cs_local_lfds711_stack_push_c;
__CSEQ_rawline("tpush_0_13: IF(1,13,tpush_0_14)");
__cs_local_lfds711_stack_push_c = 0;
__CSEQ_rawline("tpush_0_14: IF(1,14,tpush_0_15)");
*__cs_local_lfds711_stack_push_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[1] >= 15 );;
;;
;;
__CSEQ_rawline("tpush_0_15: IF(1,15,tpush_0_16)");
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
__CSEQ_rawline("tpush_0_16: IF(1,16,tpush_0_17)");
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
__CSEQ_rawline("tpush_0_17: IF(1,17,tpush_0_18)");
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
__cs_local_lfds711_stack_push_result = 0;
static int __cs_local_lfds711_stack_push_i;
__cs_local_lfds711_stack_push_i = 0;
if (!(__cs_local_lfds711_stack_push_result == 0))
            {
goto __exit_loop_1;;
            }
            ;
            {
__CSEQ_rawline("tpush_0_18: IF(1,18,tpush_0_19)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_19: IF(1,19,tpush_0_20)");
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
__CSEQ_rawline("tpush_0_20: IF(1,20,tpush_0_21)");
__cs_mutex_unlock(&library_lock, 1);
__CSEQ_rawline("tpush_0_21: IF(1,21,tpush_0_22)");
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
__CSEQ_rawline("tpush_0_22: IF(1,22,tpush_0_23)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_23: IF(1,23,tpush_0_24)");
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
__CSEQ_rawline("tpush_0_24: IF(1,24,tpush_0_25)");
__cs_mutex_unlock(&library_lock, 1);
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpush_0_25: IF(1,25,tpush_0_26)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_2: __CSEQ_assume( __cs_pc_cs[1] >= 26 );
;;
                        __exit__exponential_backoff_1_0: __CSEQ_assume( __cs_pc_cs[1] >= 26 );
;;
                    }
;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 26 );;
__cs_local_lfds711_stack_push_i++;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
goto __exit_loop_1;;
                }
                ;
            }
;
if (!(__cs_local_lfds711_stack_push_result == 0))
            {
goto __exit_loop_1;;
            }
            ;
            {
__CSEQ_rawline("tpush_0_26: IF(1,26,tpush_0_27)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_27: IF(1,27,tpush_0_28)");
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
__CSEQ_rawline("tpush_0_28: IF(1,28,tpush_0_29)");
__cs_mutex_unlock(&library_lock, 1);
__CSEQ_rawline("tpush_0_29: IF(1,29,tpush_0_30)");
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
__CSEQ_rawline("tpush_0_30: IF(1,30,tpush_0_31)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_31: IF(1,31,tpush_0_32)");
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
__CSEQ_rawline("tpush_0_32: IF(1,32,tpush_0_33)");
__cs_mutex_unlock(&library_lock, 1);
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpush_0_33: IF(1,33,tpush_0_34)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_3: __CSEQ_assume( __cs_pc_cs[1] >= 34 );
;;
                        __exit__exponential_backoff_1_1: __CSEQ_assume( __cs_pc_cs[1] >= 34 );
;;
                    }
;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 34 );;
__cs_local_lfds711_stack_push_i++;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
goto __exit_loop_1;;
                }
                ;
            }
;
if (!(__cs_local_lfds711_stack_push_result == 0))
            {
goto __exit_loop_1;;
            }
            ;
            {
__CSEQ_rawline("tpush_0_34: IF(1,34,tpush_0_35)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_35: IF(1,35,tpush_0_36)");
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
__CSEQ_rawline("tpush_0_36: IF(1,36,tpush_0_37)");
__cs_mutex_unlock(&library_lock, 1);
__CSEQ_rawline("tpush_0_37: IF(1,37,tpush_0_38)");
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
__CSEQ_rawline("tpush_0_38: IF(1,38,tpush_0_39)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_39: IF(1,39,tpush_0_40)");
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
__CSEQ_rawline("tpush_0_40: IF(1,40,tpush_0_41)");
__cs_mutex_unlock(&library_lock, 1);
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpush_0_41: IF(1,41,tpush_0_42)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_4: __CSEQ_assume( __cs_pc_cs[1] >= 42 );
;;
                        __exit__exponential_backoff_1_2: __CSEQ_assume( __cs_pc_cs[1] >= 42 );
;;
                    }
;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 42 );;
__cs_local_lfds711_stack_push_i++;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
goto __exit_loop_1;;
                }
                ;
            }
;
if (!(__cs_local_lfds711_stack_push_result == 0))
            {
goto __exit_loop_1;;
            }
            ;
            {
__CSEQ_rawline("tpush_0_42: IF(1,42,tpush_0_43)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_43: IF(1,43,tpush_0_44)");
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
__CSEQ_rawline("tpush_0_44: IF(1,44,tpush_0_45)");
__cs_mutex_unlock(&library_lock, 1);
__CSEQ_rawline("tpush_0_45: IF(1,45,tpush_0_46)");
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
__CSEQ_rawline("tpush_0_46: IF(1,46,tpush_0_47)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_47: IF(1,47,tpush_0_48)");
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
__CSEQ_rawline("tpush_0_48: IF(1,48,tpush_0_49)");
__cs_mutex_unlock(&library_lock, 1);
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpush_0_49: IF(1,49,tpush_0_50)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_5: __CSEQ_assume( __cs_pc_cs[1] >= 50 );
;;
                        __exit__exponential_backoff_1_3: __CSEQ_assume( __cs_pc_cs[1] >= 50 );
;;
                    }
;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 50 );;
__cs_local_lfds711_stack_push_i++;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
goto __exit_loop_1;;
                }
                ;
            }
;
if (!(__cs_local_lfds711_stack_push_result == 0))
            {
goto __exit_loop_1;;
            }
            ;
            {
__CSEQ_rawline("tpush_0_50: IF(1,50,tpush_0_51)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_51: IF(1,51,tpush_0_52)");
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
__CSEQ_rawline("tpush_0_52: IF(1,52,tpush_0_53)");
__cs_mutex_unlock(&library_lock, 1);
__CSEQ_rawline("tpush_0_53: IF(1,53,tpush_0_54)");
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
__CSEQ_rawline("tpush_0_54: IF(1,54,tpush_0_55)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_55: IF(1,55,tpush_0_56)");
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
__CSEQ_rawline("tpush_0_56: IF(1,56,tpush_0_57)");
__cs_mutex_unlock(&library_lock, 1);
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpush_0_57: IF(1,57,tpush_0_58)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_6: __CSEQ_assume( __cs_pc_cs[1] >= 58 );
;;
                        __exit__exponential_backoff_1_4: __CSEQ_assume( __cs_pc_cs[1] >= 58 );
;;
                    }
;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 58 );;
__cs_local_lfds711_stack_push_i++;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
goto __exit_loop_1;;
                }
                ;
            }
;
__CSEQ_rawline("tpush_0_58: IF(1,58,tpush_0_59)");
__CSEQ_assume(!(__cs_local_lfds711_stack_push_result == 0));
            __exit_loop_1: __CSEQ_assume( __cs_pc_cs[1] >= 59 );
;;
goto __exit__lfds711_stack_push_1;;
            __exit__lfds711_stack_push_1: __CSEQ_assume( __cs_pc_cs[1] >= 59 );
;;
        }
;
        __exit__insert_1: __CSEQ_assume( __cs_pc_cs[1] >= 59 );
;;
    }
;
;;
static _Bool __cs_local_push___cs_tmp_if_cond_25;
__CSEQ_rawline("tpush_0_59: IF(1,59,tpush_0_60)");
__cs_local_push___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
if (__cs_local_push___cs_tmp_if_cond_25)
    {
__CSEQ_rawline("tpush_0_60: IF(1,60,tpush_0_61)");
__cs_mutex_unlock(&lock, 1);
    }
    __CSEQ_assume( __cs_pc_cs[1] >= 61 );;
;;
;;
static _Bool __cs_local_push___cs_tmp_if_cond_26;
__CSEQ_rawline("tpush_0_61: IF(1,61,tpush_0_62)");
__cs_local_push___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
if (__cs_local_push___cs_tmp_if_cond_26)
    {
__CSEQ_rawline("tpush_0_62: IF(1,62,tpush_0_63)");
__cs_mutex_lock(&lock, 1);
    }
    __CSEQ_assume( __cs_pc_cs[1] >= 63 );;
;;
    {
static struct lfds711_stack_state *__cs_param_insert_s;
__CSEQ_rawline("tpush_0_63: IF(1,63,tpush_0_64)");
__cs_param_insert_s = ss;
static int long long unsigned __cs_param_insert_id;
__cs_param_insert_id = 1600;
static struct test_data *__cs_local_insert_td;
__CSEQ_rawline("tpush_0_64: IF(1,64,tpush_0_65)");
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
__CSEQ_rawline("tpush_0_65: IF(1,65,tpush_0_66)");
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
__CSEQ_rawline("tpush_0_66: IF(1,66,tpush_0_67)");
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);
        {
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
__CSEQ_rawline("tpush_0_67: IF(1,67,tpush_0_68)");
__cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
__CSEQ_rawline("tpush_0_68: IF(1,68,tpush_0_69)");
__cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
static char unsigned __cs_local_lfds711_stack_push_result;
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
__cs_local_lfds711_stack_push_backoff_iteration = 0;
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
__CSEQ_rawline("tpush_0_69: IF(1,69,tpush_0_70)");
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)
            {
static char *__cs_local_lfds711_stack_push_c;
__CSEQ_rawline("tpush_0_70: IF(1,70,tpush_0_71)");
__cs_local_lfds711_stack_push_c = 0;
__CSEQ_rawline("tpush_0_71: IF(1,71,tpush_0_72)");
*__cs_local_lfds711_stack_push_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[1] >= 72 );;
;;
;;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
__CSEQ_rawline("tpush_0_72: IF(1,72,tpush_0_73)");
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)
            {
static char *__cs_local_lfds711_stack_push_c;
__CSEQ_rawline("tpush_0_73: IF(1,73,tpush_0_74)");
__cs_local_lfds711_stack_push_c = 0;
__CSEQ_rawline("tpush_0_74: IF(1,74,tpush_0_75)");
*__cs_local_lfds711_stack_push_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[1] >= 75 );;
;;
;;
__CSEQ_rawline("tpush_0_75: IF(1,75,tpush_0_76)");
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
__CSEQ_rawline("tpush_0_76: IF(1,76,tpush_0_77)");
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
__CSEQ_rawline("tpush_0_77: IF(1,77,tpush_0_78)");
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
__cs_local_lfds711_stack_push_result = 0;
static int __cs_local_lfds711_stack_push_i;
__cs_local_lfds711_stack_push_i = 0;
if (!(__cs_local_lfds711_stack_push_result == 0))
            {
goto __exit_loop_7;;
            }
            ;
            {
__CSEQ_rawline("tpush_0_78: IF(1,78,tpush_0_79)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_79: IF(1,79,tpush_0_80)");
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
__CSEQ_rawline("tpush_0_80: IF(1,80,tpush_0_81)");
__cs_mutex_unlock(&library_lock, 1);
__CSEQ_rawline("tpush_0_81: IF(1,81,tpush_0_82)");
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
__CSEQ_rawline("tpush_0_82: IF(1,82,tpush_0_83)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_83: IF(1,83,tpush_0_84)");
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
__CSEQ_rawline("tpush_0_84: IF(1,84,tpush_0_85)");
__cs_mutex_unlock(&library_lock, 1);
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpush_0_85: IF(1,85,tpush_0_86)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_8: __CSEQ_assume( __cs_pc_cs[1] >= 86 );
;;
                        __exit__exponential_backoff_2_0: __CSEQ_assume( __cs_pc_cs[1] >= 86 );
;;
                    }
;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 86 );;
__cs_local_lfds711_stack_push_i++;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
goto __exit_loop_7;;
                }
                ;
            }
;
if (!(__cs_local_lfds711_stack_push_result == 0))
            {
goto __exit_loop_7;;
            }
            ;
            {
__CSEQ_rawline("tpush_0_86: IF(1,86,tpush_0_87)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_87: IF(1,87,tpush_0_88)");
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
__CSEQ_rawline("tpush_0_88: IF(1,88,tpush_0_89)");
__cs_mutex_unlock(&library_lock, 1);
__CSEQ_rawline("tpush_0_89: IF(1,89,tpush_0_90)");
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
__CSEQ_rawline("tpush_0_90: IF(1,90,tpush_0_91)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_91: IF(1,91,tpush_0_92)");
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
__CSEQ_rawline("tpush_0_92: IF(1,92,tpush_0_93)");
__cs_mutex_unlock(&library_lock, 1);
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpush_0_93: IF(1,93,tpush_0_94)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_9: __CSEQ_assume( __cs_pc_cs[1] >= 94 );
;;
                        __exit__exponential_backoff_2_1: __CSEQ_assume( __cs_pc_cs[1] >= 94 );
;;
                    }
;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 94 );;
__cs_local_lfds711_stack_push_i++;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
goto __exit_loop_7;;
                }
                ;
            }
;
if (!(__cs_local_lfds711_stack_push_result == 0))
            {
goto __exit_loop_7;;
            }
            ;
            {
__CSEQ_rawline("tpush_0_94: IF(1,94,tpush_0_95)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_95: IF(1,95,tpush_0_96)");
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
__CSEQ_rawline("tpush_0_96: IF(1,96,tpush_0_97)");
__cs_mutex_unlock(&library_lock, 1);
__CSEQ_rawline("tpush_0_97: IF(1,97,tpush_0_98)");
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
__CSEQ_rawline("tpush_0_98: IF(1,98,tpush_0_99)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_99: IF(1,99,tpush_0_100)");
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
__CSEQ_rawline("tpush_0_100: IF(1,100,tpush_0_101)");
__cs_mutex_unlock(&library_lock, 1);
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpush_0_101: IF(1,101,tpush_0_102)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_10: __CSEQ_assume( __cs_pc_cs[1] >= 102 );
;;
                        __exit__exponential_backoff_2_2: __CSEQ_assume( __cs_pc_cs[1] >= 102 );
;;
                    }
;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 102 );;
__cs_local_lfds711_stack_push_i++;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
goto __exit_loop_7;;
                }
                ;
            }
;
if (!(__cs_local_lfds711_stack_push_result == 0))
            {
goto __exit_loop_7;;
            }
            ;
            {
__CSEQ_rawline("tpush_0_102: IF(1,102,tpush_0_103)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_103: IF(1,103,tpush_0_104)");
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
__CSEQ_rawline("tpush_0_104: IF(1,104,tpush_0_105)");
__cs_mutex_unlock(&library_lock, 1);
__CSEQ_rawline("tpush_0_105: IF(1,105,tpush_0_106)");
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
__CSEQ_rawline("tpush_0_106: IF(1,106,tpush_0_107)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_107: IF(1,107,tpush_0_108)");
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
__CSEQ_rawline("tpush_0_108: IF(1,108,tpush_0_109)");
__cs_mutex_unlock(&library_lock, 1);
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpush_0_109: IF(1,109,tpush_0_110)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_11: __CSEQ_assume( __cs_pc_cs[1] >= 110 );
;;
                        __exit__exponential_backoff_2_3: __CSEQ_assume( __cs_pc_cs[1] >= 110 );
;;
                    }
;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 110 );;
__cs_local_lfds711_stack_push_i++;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
goto __exit_loop_7;;
                }
                ;
            }
;
if (!(__cs_local_lfds711_stack_push_result == 0))
            {
goto __exit_loop_7;;
            }
            ;
            {
__CSEQ_rawline("tpush_0_110: IF(1,110,tpush_0_111)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_111: IF(1,111,tpush_0_112)");
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
__CSEQ_rawline("tpush_0_112: IF(1,112,tpush_0_113)");
__cs_mutex_unlock(&library_lock, 1);
__CSEQ_rawline("tpush_0_113: IF(1,113,tpush_0_114)");
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
__CSEQ_rawline("tpush_0_114: IF(1,114,tpush_0_115)");
__cs_mutex_lock(&library_lock, 1);
__CSEQ_rawline("tpush_0_115: IF(1,115,tpush_0_116)");
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
__CSEQ_rawline("tpush_0_116: IF(1,116,tpush_0_117)");
__cs_mutex_unlock(&library_lock, 1);
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpush_0_117: IF(1,117,tpush_0_118)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_12: __CSEQ_assume( __cs_pc_cs[1] >= 118 );
;;
                        __exit__exponential_backoff_2_4: __CSEQ_assume( __cs_pc_cs[1] >= 118 );
;;
                    }
;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 118 );;
__cs_local_lfds711_stack_push_i++;
;;
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)
                {
goto __exit_loop_7;;
                }
                ;
            }
;
__CSEQ_rawline("tpush_0_118: IF(1,118,tpush_0_119)");
__CSEQ_assume(!(__cs_local_lfds711_stack_push_result == 0));
            __exit_loop_7: __CSEQ_assume( __cs_pc_cs[1] >= 119 );
;;
goto __exit__lfds711_stack_push_2;;
            __exit__lfds711_stack_push_2: __CSEQ_assume( __cs_pc_cs[1] >= 119 );
;;
        }
;
        __exit__insert_2: __CSEQ_assume( __cs_pc_cs[1] >= 119 );
;;
    }
;
;;
static _Bool __cs_local_push___cs_tmp_if_cond_27;
__CSEQ_rawline("tpush_0_119: IF(1,119,tpush_0_120)");
__cs_local_push___cs_tmp_if_cond_27 = ATOMIC_OPERATION;
if (__cs_local_push___cs_tmp_if_cond_27)
    {
__CSEQ_rawline("tpush_0_120: IF(1,120,tpush_0_121)");
__cs_mutex_unlock(&lock, 1);
    }
    __CSEQ_assume( __cs_pc_cs[1] >= 121 );;
;;
    __exit_push: __CSEQ_assume( __cs_pc_cs[1] >= 121 );
;;
__CSEQ_rawline("tpush_0_121: ");
__cs_exit(0, 1);
}
void *pop_0(void *__cs_param_pop___cs_unused)
{
static int __cs_local_pop_res;
__CSEQ_rawline("IF(2,0,tpop_0_1)");
__cs_local_pop_res = __CSEQ_nondet_int();
static int __cs_local_pop_count;
__cs_local_pop_count = 0;
static int __cs_local_pop_loop;
__cs_local_pop_loop = __CSEQ_nondet_int();
;;
static _Bool __cs_local_pop___cs_tmp_if_cond_28;
__CSEQ_rawline("tpop_0_1: IF(2,1,tpop_0_2)");
__cs_local_pop___cs_tmp_if_cond_28 = ATOMIC_OPERATION;
if (__cs_local_pop___cs_tmp_if_cond_28)
    {
__CSEQ_rawline("tpop_0_2: IF(2,2,tpop_0_3)");
__cs_mutex_lock(&lock, 2);
    }
    __CSEQ_assume( __cs_pc_cs[2] >= 3 );;
;;
static int __cs_local_pop_ytrewq;
__cs_local_pop_ytrewq = 1050;
static int __cs_retval__delete_1;
    {
static struct lfds711_stack_state *__cs_param_delete_s;
__CSEQ_rawline("tpop_0_3: IF(2,3,tpop_0_4)");
__cs_param_delete_s = ss;
static struct lfds711_stack_element *__cs_local_delete_se;
static struct test_data *__cs_local_delete_temp_td;
static int __cs_local_delete_res;
static int __cs_retval__lfds711_stack_pop_1;
        {
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
__CSEQ_rawline("tpop_0_4: IF(2,4,tpop_0_5)");
__cs_param_lfds711_stack_pop_ss = &mystack;
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
__CSEQ_rawline("tpop_0_5: IF(2,5,tpop_0_6)");
__cs_param_lfds711_stack_pop_se = &__cs_local_delete_se;
static char unsigned __cs_local_lfds711_stack_pop_result;
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
__CSEQ_rawline("tpop_0_6: IF(2,6,tpop_0_7)");
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)
            {
static char *__cs_local_lfds711_stack_pop_c;
__CSEQ_rawline("tpop_0_7: IF(2,7,tpop_0_8)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tpop_0_8: IF(2,8,tpop_0_9)");
*__cs_local_lfds711_stack_pop_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[2] >= 9 );;
;;
;;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
__CSEQ_rawline("tpop_0_9: IF(2,9,tpop_0_10)");
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)
            {
static char *__cs_local_lfds711_stack_pop_c;
__CSEQ_rawline("tpop_0_10: IF(2,10,tpop_0_11)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tpop_0_11: IF(2,11,tpop_0_12)");
*__cs_local_lfds711_stack_pop_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[2] >= 12 );;
;;
;;
__CSEQ_rawline("tpop_0_12: IF(2,12,tpop_0_13)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_13: IF(2,13,tpop_0_14)");
__cs_mutex_unlock(&library_lock, 2);
__CSEQ_rawline("tpop_0_14: IF(2,14,tpop_0_15)");
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
__CSEQ_rawline("tpop_0_15: IF(2,15,tpop_0_16)");
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
static int __cs_local_lfds711_stack_pop_i;
__cs_local_lfds711_stack_pop_i = 0;
;;
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
                {
__CSEQ_rawline("tpop_0_16: IF(2,16,tpop_0_17)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_1 = 0;
goto __exit__lfds711_stack_pop_1;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 17 );;
__CSEQ_rawline("tpop_0_17: IF(2,17,tpop_0_18)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_18: IF(2,18,tpop_0_19)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_19: IF(2,19,tpop_0_20)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_20: IF(2,20,tpop_0_21)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_21: IF(2,21,tpop_0_22)");
__cs_mutex_unlock(&library_lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_22: IF(2,22,tpop_0_23)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_14: __CSEQ_assume( __cs_pc_cs[2] >= 23 );
;;
                        __exit__exponential_backoff_3_0: __CSEQ_assume( __cs_pc_cs[2] >= 23 );
;;
                    }
;
__CSEQ_rawline("tpop_0_23: IF(2,23,tpop_0_24)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_24: IF(2,24,tpop_0_25)");
__cs_mutex_unlock(&library_lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 25 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                {
goto __exit_loop_13;;
                }
                ;
            }
;
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
__CSEQ_rawline("tpop_0_25: IF(2,25,tpop_0_26)");
__CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
            __exit_loop_13: __CSEQ_assume( __cs_pc_cs[2] >= 26 );
;;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
goto __exit_loop_15;;
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
__CSEQ_rawline("tpop_0_26: IF(2,26,tpop_0_27)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_1 = 0;
goto __exit__lfds711_stack_pop_1;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 27 );;
__CSEQ_rawline("tpop_0_27: IF(2,27,tpop_0_28)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_28: IF(2,28,tpop_0_29)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_29: IF(2,29,tpop_0_30)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_30: IF(2,30,tpop_0_31)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_31: IF(2,31,tpop_0_32)");
__cs_mutex_unlock(&library_lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_32: IF(2,32,tpop_0_33)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_16: __CSEQ_assume( __cs_pc_cs[2] >= 33 );
;;
                        __exit__exponential_backoff_4_0: __CSEQ_assume( __cs_pc_cs[2] >= 33 );
;;
                    }
;
__CSEQ_rawline("tpop_0_33: IF(2,33,tpop_0_34)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_34: IF(2,34,tpop_0_35)");
__cs_mutex_unlock(&library_lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 35 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
goto __exit_loop_15;;
                }
                ;
            }
;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
goto __exit_loop_15;;
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
__CSEQ_rawline("tpop_0_35: IF(2,35,tpop_0_36)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_1 = 0;
goto __exit__lfds711_stack_pop_1;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 36 );;
__CSEQ_rawline("tpop_0_36: IF(2,36,tpop_0_37)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_37: IF(2,37,tpop_0_38)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_38: IF(2,38,tpop_0_39)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_39: IF(2,39,tpop_0_40)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_40: IF(2,40,tpop_0_41)");
__cs_mutex_unlock(&library_lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_41: IF(2,41,tpop_0_42)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_17: __CSEQ_assume( __cs_pc_cs[2] >= 42 );
;;
                        __exit__exponential_backoff_4_1: __CSEQ_assume( __cs_pc_cs[2] >= 42 );
;;
                    }
;
__CSEQ_rawline("tpop_0_42: IF(2,42,tpop_0_43)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_43: IF(2,43,tpop_0_44)");
__cs_mutex_unlock(&library_lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 44 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
goto __exit_loop_15;;
                }
                ;
            }
;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
goto __exit_loop_15;;
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
__CSEQ_rawline("tpop_0_44: IF(2,44,tpop_0_45)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_1 = 0;
goto __exit__lfds711_stack_pop_1;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 45 );;
__CSEQ_rawline("tpop_0_45: IF(2,45,tpop_0_46)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_46: IF(2,46,tpop_0_47)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_47: IF(2,47,tpop_0_48)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_48: IF(2,48,tpop_0_49)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_49: IF(2,49,tpop_0_50)");
__cs_mutex_unlock(&library_lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_50: IF(2,50,tpop_0_51)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_18: __CSEQ_assume( __cs_pc_cs[2] >= 51 );
;;
                        __exit__exponential_backoff_4_2: __CSEQ_assume( __cs_pc_cs[2] >= 51 );
;;
                    }
;
__CSEQ_rawline("tpop_0_51: IF(2,51,tpop_0_52)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_52: IF(2,52,tpop_0_53)");
__cs_mutex_unlock(&library_lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 53 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
goto __exit_loop_15;;
                }
                ;
            }
;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
goto __exit_loop_15;;
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
__CSEQ_rawline("tpop_0_53: IF(2,53,tpop_0_54)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_1 = 0;
goto __exit__lfds711_stack_pop_1;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 54 );;
__CSEQ_rawline("tpop_0_54: IF(2,54,tpop_0_55)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_55: IF(2,55,tpop_0_56)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_56: IF(2,56,tpop_0_57)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_57: IF(2,57,tpop_0_58)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_58: IF(2,58,tpop_0_59)");
__cs_mutex_unlock(&library_lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_59: IF(2,59,tpop_0_60)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_19: __CSEQ_assume( __cs_pc_cs[2] >= 60 );
;;
                        __exit__exponential_backoff_4_3: __CSEQ_assume( __cs_pc_cs[2] >= 60 );
;;
                    }
;
__CSEQ_rawline("tpop_0_60: IF(2,60,tpop_0_61)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_61: IF(2,61,tpop_0_62)");
__cs_mutex_unlock(&library_lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 62 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
goto __exit_loop_15;;
                }
                ;
            }
;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
goto __exit_loop_15;;
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
__CSEQ_rawline("tpop_0_62: IF(2,62,tpop_0_63)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_1 = 0;
goto __exit__lfds711_stack_pop_1;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 63 );;
__CSEQ_rawline("tpop_0_63: IF(2,63,tpop_0_64)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_64: IF(2,64,tpop_0_65)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_65: IF(2,65,tpop_0_66)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_66: IF(2,66,tpop_0_67)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_67: IF(2,67,tpop_0_68)");
__cs_mutex_unlock(&library_lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_68: IF(2,68,tpop_0_69)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_20: __CSEQ_assume( __cs_pc_cs[2] >= 69 );
;;
                        __exit__exponential_backoff_4_4: __CSEQ_assume( __cs_pc_cs[2] >= 69 );
;;
                    }
;
__CSEQ_rawline("tpop_0_69: IF(2,69,tpop_0_70)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_70: IF(2,70,tpop_0_71)");
__cs_mutex_unlock(&library_lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 71 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
goto __exit_loop_15;;
                }
                ;
            }
;
__CSEQ_rawline("tpop_0_71: IF(2,71,tpop_0_72)");
__CSEQ_assume(
!(__cs_local_lfds711_stack_pop_result == 0));
            __exit_loop_15: __CSEQ_assume( __cs_pc_cs[2] >= 72 );
;;
__CSEQ_rawline("tpop_0_72: IF(2,72,tpop_0_73)");
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
__cs_retval__lfds711_stack_pop_1 = __cs_local_lfds711_stack_pop_result;
goto __exit__lfds711_stack_pop_1;;
            __exit__lfds711_stack_pop_1: __CSEQ_assume( __cs_pc_cs[2] >= 73 );
;;
        }
;
__cs_local_delete_res = __cs_retval__lfds711_stack_pop_1;
;;
static _Bool __cs_local_delete___cs_tmp_if_cond_19;
__cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res == 0;
if (__cs_local_delete___cs_tmp_if_cond_19)
        {
__cs_retval__delete_1 = __cs_local_delete_res;
goto __exit__delete_1;;
        }
        ;
__CSEQ_rawline("tpop_0_73: IF(2,73,tpop_0_74)");
__cs_local_delete_temp_td = (*__cs_local_delete_se).value;
static int __cs_local_delete_id_popped;
__CSEQ_rawline("tpop_0_74: IF(2,74,tpop_0_75)");
__cs_local_delete_id_popped = (*__cs_local_delete_temp_td).user_id;
__CSEQ_rawline("tpop_0_75: IF(2,75,tpop_0_76)");
printf("%llu\n", (*__cs_local_delete_temp_td).user_id);
__cs_retval__delete_1 = __cs_local_delete_res;
goto __exit__delete_1;;
        __exit__delete_1: __CSEQ_assume( __cs_pc_cs[2] >= 76 );
;;
    }
;
__cs_retval__delete_1;
;;
static _Bool __cs_local_pop___cs_tmp_if_cond_29;
__CSEQ_rawline("tpop_0_76: IF(2,76,tpop_0_77)");
__cs_local_pop___cs_tmp_if_cond_29 = ATOMIC_OPERATION;
if (__cs_local_pop___cs_tmp_if_cond_29)
    {
__CSEQ_rawline("tpop_0_77: IF(2,77,tpop_0_78)");
__cs_mutex_unlock(&lock, 2);
    }
    __CSEQ_assume( __cs_pc_cs[2] >= 78 );;
;;
;;
static _Bool __cs_local_pop___cs_tmp_if_cond_30;
__CSEQ_rawline("tpop_0_78: IF(2,78,tpop_0_79)");
__cs_local_pop___cs_tmp_if_cond_30 = ATOMIC_OPERATION;
if (__cs_local_pop___cs_tmp_if_cond_30)
    {
__CSEQ_rawline("tpop_0_79: IF(2,79,tpop_0_80)");
__cs_mutex_lock(&lock, 2);
    }
    __CSEQ_assume( __cs_pc_cs[2] >= 80 );;
;;
static int __cs_retval__delete_2;
    {
static struct lfds711_stack_state *__cs_param_delete_s;
__CSEQ_rawline("tpop_0_80: IF(2,80,tpop_0_81)");
__cs_param_delete_s = ss;
static struct lfds711_stack_element *__cs_local_delete_se;
static struct test_data *__cs_local_delete_temp_td;
static int __cs_local_delete_res;
static int __cs_retval__lfds711_stack_pop_2;
        {
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
__CSEQ_rawline("tpop_0_81: IF(2,81,tpop_0_82)");
__cs_param_lfds711_stack_pop_ss = &mystack;
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
__CSEQ_rawline("tpop_0_82: IF(2,82,tpop_0_83)");
__cs_param_lfds711_stack_pop_se = &__cs_local_delete_se;
static char unsigned __cs_local_lfds711_stack_pop_result;
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
__CSEQ_rawline("tpop_0_83: IF(2,83,tpop_0_84)");
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)
            {
static char *__cs_local_lfds711_stack_pop_c;
__CSEQ_rawline("tpop_0_84: IF(2,84,tpop_0_85)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tpop_0_85: IF(2,85,tpop_0_86)");
*__cs_local_lfds711_stack_pop_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[2] >= 86 );;
;;
;;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
__CSEQ_rawline("tpop_0_86: IF(2,86,tpop_0_87)");
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)
            {
static char *__cs_local_lfds711_stack_pop_c;
__CSEQ_rawline("tpop_0_87: IF(2,87,tpop_0_88)");
__cs_local_lfds711_stack_pop_c = 0;
__CSEQ_rawline("tpop_0_88: IF(2,88,tpop_0_89)");
*__cs_local_lfds711_stack_pop_c = 0;
            }
            __CSEQ_assume( __cs_pc_cs[2] >= 89 );;
;;
;;
__CSEQ_rawline("tpop_0_89: IF(2,89,tpop_0_90)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_90: IF(2,90,tpop_0_91)");
__cs_mutex_unlock(&library_lock, 2);
__CSEQ_rawline("tpop_0_91: IF(2,91,tpop_0_92)");
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
__CSEQ_rawline("tpop_0_92: IF(2,92,tpop_0_93)");
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
static int __cs_local_lfds711_stack_pop_i;
__cs_local_lfds711_stack_pop_i = 0;
;;
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)
                {
__CSEQ_rawline("tpop_0_93: IF(2,93,tpop_0_94)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_2 = 0;
goto __exit__lfds711_stack_pop_2;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 94 );;
__CSEQ_rawline("tpop_0_94: IF(2,94,tpop_0_95)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_95: IF(2,95,tpop_0_96)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_96: IF(2,96,tpop_0_97)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_97: IF(2,97,tpop_0_98)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_98: IF(2,98,tpop_0_99)");
__cs_mutex_unlock(&library_lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_99: IF(2,99,tpop_0_100)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_22: __CSEQ_assume( __cs_pc_cs[2] >= 100 );
;;
                        __exit__exponential_backoff_5_0: __CSEQ_assume( __cs_pc_cs[2] >= 100 );
;;
                    }
;
__CSEQ_rawline("tpop_0_100: IF(2,100,tpop_0_101)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_101: IF(2,101,tpop_0_102)");
__cs_mutex_unlock(&library_lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 102 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)
                {
goto __exit_loop_21;;
                }
                ;
            }
;
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
__CSEQ_rawline("tpop_0_102: IF(2,102,tpop_0_103)");
__CSEQ_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
            __exit_loop_21: __CSEQ_assume( __cs_pc_cs[2] >= 103 );
;;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
goto __exit_loop_23;;
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
__CSEQ_rawline("tpop_0_103: IF(2,103,tpop_0_104)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_2 = 0;
goto __exit__lfds711_stack_pop_2;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 104 );;
__CSEQ_rawline("tpop_0_104: IF(2,104,tpop_0_105)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_105: IF(2,105,tpop_0_106)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_106: IF(2,106,tpop_0_107)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_107: IF(2,107,tpop_0_108)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_108: IF(2,108,tpop_0_109)");
__cs_mutex_unlock(&library_lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_109: IF(2,109,tpop_0_110)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_24: __CSEQ_assume( __cs_pc_cs[2] >= 110 );
;;
                        __exit__exponential_backoff_6_0: __CSEQ_assume( __cs_pc_cs[2] >= 110 );
;;
                    }
;
__CSEQ_rawline("tpop_0_110: IF(2,110,tpop_0_111)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_111: IF(2,111,tpop_0_112)");
__cs_mutex_unlock(&library_lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 112 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
goto __exit_loop_23;;
                }
                ;
            }
;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
goto __exit_loop_23;;
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
__CSEQ_rawline("tpop_0_112: IF(2,112,tpop_0_113)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_2 = 0;
goto __exit__lfds711_stack_pop_2;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 113 );;
__CSEQ_rawline("tpop_0_113: IF(2,113,tpop_0_114)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_114: IF(2,114,tpop_0_115)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_115: IF(2,115,tpop_0_116)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_116: IF(2,116,tpop_0_117)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_117: IF(2,117,tpop_0_118)");
__cs_mutex_unlock(&library_lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_118: IF(2,118,tpop_0_119)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_25: __CSEQ_assume( __cs_pc_cs[2] >= 119 );
;;
                        __exit__exponential_backoff_6_1: __CSEQ_assume( __cs_pc_cs[2] >= 119 );
;;
                    }
;
__CSEQ_rawline("tpop_0_119: IF(2,119,tpop_0_120)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_120: IF(2,120,tpop_0_121)");
__cs_mutex_unlock(&library_lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 121 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
goto __exit_loop_23;;
                }
                ;
            }
;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
goto __exit_loop_23;;
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
__CSEQ_rawline("tpop_0_121: IF(2,121,tpop_0_122)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_2 = 0;
goto __exit__lfds711_stack_pop_2;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 122 );;
__CSEQ_rawline("tpop_0_122: IF(2,122,tpop_0_123)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_123: IF(2,123,tpop_0_124)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_124: IF(2,124,tpop_0_125)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_125: IF(2,125,tpop_0_126)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_126: IF(2,126,tpop_0_127)");
__cs_mutex_unlock(&library_lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_127: IF(2,127,tpop_0_128)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_26: __CSEQ_assume( __cs_pc_cs[2] >= 128 );
;;
                        __exit__exponential_backoff_6_2: __CSEQ_assume( __cs_pc_cs[2] >= 128 );
;;
                    }
;
__CSEQ_rawline("tpop_0_128: IF(2,128,tpop_0_129)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_129: IF(2,129,tpop_0_130)");
__cs_mutex_unlock(&library_lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 130 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
goto __exit_loop_23;;
                }
                ;
            }
;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
goto __exit_loop_23;;
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
__CSEQ_rawline("tpop_0_130: IF(2,130,tpop_0_131)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_2 = 0;
goto __exit__lfds711_stack_pop_2;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 131 );;
__CSEQ_rawline("tpop_0_131: IF(2,131,tpop_0_132)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_132: IF(2,132,tpop_0_133)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_133: IF(2,133,tpop_0_134)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_134: IF(2,134,tpop_0_135)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_135: IF(2,135,tpop_0_136)");
__cs_mutex_unlock(&library_lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_136: IF(2,136,tpop_0_137)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_27: __CSEQ_assume( __cs_pc_cs[2] >= 137 );
;;
                        __exit__exponential_backoff_6_3: __CSEQ_assume( __cs_pc_cs[2] >= 137 );
;;
                    }
;
__CSEQ_rawline("tpop_0_137: IF(2,137,tpop_0_138)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_138: IF(2,138,tpop_0_139)");
__cs_mutex_unlock(&library_lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 139 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
goto __exit_loop_23;;
                }
                ;
            }
;
if (
!(__cs_local_lfds711_stack_pop_result == 0))
            {
goto __exit_loop_23;;
            }
            ;
            {
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)
                {
__CSEQ_rawline("tpop_0_139: IF(2,139,tpop_0_140)");
*__cs_param_lfds711_stack_pop_se = 0;
__cs_retval__lfds711_stack_pop_2 = 0;
goto __exit__lfds711_stack_pop_2;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 140 );;
__CSEQ_rawline("tpop_0_140: IF(2,140,tpop_0_141)");
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
__CSEQ_rawline("tpop_0_141: IF(2,141,tpop_0_142)");
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
__CSEQ_rawline("tpop_0_142: IF(2,142,tpop_0_143)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_143: IF(2,143,tpop_0_144)");
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
__CSEQ_rawline("tpop_0_144: IF(2,144,tpop_0_145)");
__cs_mutex_unlock(&library_lock, 2);
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)
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
                        {
;;
                        }
;
__cs_local_exponential_backoff_loop++;
__CSEQ_rawline("tpop_0_145: IF(2,145,tpop_0_146)");
__CSEQ_assume(!(__cs_local_exponential_backoff_loop < 3));
                        __exit_loop_28: __CSEQ_assume( __cs_pc_cs[2] >= 146 );
;;
                        __exit__exponential_backoff_6_4: __CSEQ_assume( __cs_pc_cs[2] >= 146 );
;;
                    }
;
__CSEQ_rawline("tpop_0_146: IF(2,146,tpop_0_147)");
__cs_mutex_lock(&library_lock, 2);
__CSEQ_rawline("tpop_0_147: IF(2,147,tpop_0_148)");
__cs_mutex_unlock(&library_lock, 2);
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 148 );;
__cs_local_lfds711_stack_pop_i++;
;;
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)
                {
goto __exit_loop_23;;
                }
                ;
            }
;
__CSEQ_rawline("tpop_0_148: IF(2,148,tpop_0_149)");
__CSEQ_assume(
!(__cs_local_lfds711_stack_pop_result == 0));
            __exit_loop_23: __CSEQ_assume( __cs_pc_cs[2] >= 149 );
;;
__CSEQ_rawline("tpop_0_149: IF(2,149,tpop_0_150)");
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
__cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
goto __exit__lfds711_stack_pop_2;;
            __exit__lfds711_stack_pop_2: __CSEQ_assume( __cs_pc_cs[2] >= 150 );
;;
        }
;
__cs_local_delete_res = __cs_retval__lfds711_stack_pop_2;
;;
static _Bool __cs_local_delete___cs_tmp_if_cond_19;
__cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res == 0;
if (__cs_local_delete___cs_tmp_if_cond_19)
        {
__cs_retval__delete_2 = __cs_local_delete_res;
goto __exit__delete_2;;
        }
        ;
__CSEQ_rawline("tpop_0_150: IF(2,150,tpop_0_151)");
__cs_local_delete_temp_td = (*__cs_local_delete_se).value;
static int __cs_local_delete_id_popped;
__CSEQ_rawline("tpop_0_151: IF(2,151,tpop_0_152)");
__cs_local_delete_id_popped = (*__cs_local_delete_temp_td).user_id;
__CSEQ_rawline("tpop_0_152: IF(2,152,tpop_0_153)");
printf("%llu\n", (*__cs_local_delete_temp_td).user_id);
__cs_retval__delete_2 = __cs_local_delete_res;
goto __exit__delete_2;;
        __exit__delete_2: __CSEQ_assume( __cs_pc_cs[2] >= 153 );
;;
    }
;
__cs_retval__delete_2;
;;
static _Bool __cs_local_pop___cs_tmp_if_cond_31;
__CSEQ_rawline("tpop_0_153: IF(2,153,tpop_0_154)");
__cs_local_pop___cs_tmp_if_cond_31 = ATOMIC_OPERATION;
if (__cs_local_pop___cs_tmp_if_cond_31)
    {
__CSEQ_rawline("tpop_0_154: IF(2,154,tpop_0_155)");
__cs_mutex_unlock(&lock, 2);
    }
    __CSEQ_assume( __cs_pc_cs[2] >= 155 );;
;;
    __exit_pop: __CSEQ_assume( __cs_pc_cs[2] >= 155 );
;;
__CSEQ_rawline("tpop_0_155: ");
__cs_exit(0, 2);
}
int main_thread(void)
{
__CSEQ_rawline("IF(0,0,tmain_1)");
__cs_mutex_init(&lock, 0);
static void *__cs_retval__init_1;
    {
        {
static struct lfds711_stack_state *__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss;
__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss = &mystack;
static void *__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state = 0;
__cs_mutex_init(&library_lock, 0);
;;
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3;
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3 = !(__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss != 0);
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3)
            {
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
            }
            ;
;;
;;
;;
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4;
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4 = !((((lfds711_pal_uint_t) (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top) % 128) == 0);
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
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state)) % 128) == 0);
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5)
            {
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
            }
            ;
;;
;;
__cs_mutex_lock(&library_lock, 0);
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[0] = 0;
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[1] = 0;
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state = __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
            {
static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
__cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).pop_backoff;
;;
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)
                {
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                }
                ;
;;
;;
;;
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)
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
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)
                {
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                }
                ;
;;
;;
;;
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)
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
                }
;
;;
goto __exit__lfds711_misc_force_store_1;;
                __exit__lfds711_misc_force_store_1: __CSEQ_assume( __cs_pc_cs[0] >= 1 );
;;
            }
;
__cs_mutex_unlock(&library_lock, 0);
goto __exit__lfds711_stack_init_valid_on_current_logical_core_1;;
            __exit__lfds711_stack_init_valid_on_current_logical_core_1: __CSEQ_assume( __cs_pc_cs[0] >= 1 );
;;
        }
;
__cs_retval__init_1 = (void *) (&mystack);
goto __exit__init_1;;
        __exit__init_1: __CSEQ_assume( __cs_pc_cs[0] >= 1 );
;;
    }
;
ss = __cs_retval__init_1;
static __cs_t __cs_local_main_t1;
;;
static __cs_t __cs_local_main_t2;
;;
static __cs_t __cs_local_main_t3;
;;
static __cs_t __cs_local_main_t4;
;;
static __cs_t __cs_local_main_t5;
;;
static __cs_t __cs_local_main_t6;
;;
static __cs_t __cs_local_main_t7;
;;
static __cs_t __cs_local_main_t8;
;;
static __cs_t __cs_local_main_t9;
;;
static __cs_t __cs_local_main_t10;
;;
__cs_create(&__cs_local_main_t1, 0, push_0, 0, 1);
__CSEQ_rawline("tmain_1: IF(0,1,tmain_2)");
__cs_create(&__cs_local_main_t6, 0, pop_0, 0, 2);
__CSEQ_rawline("tmain_2: IF(0,2,tmain_3)");
__cs_join(__cs_local_main_t1, 0);
__CSEQ_rawline("tmain_3: IF(0,3,tmain_4)");
__cs_join(__cs_local_main_t6, 0);
__CSEQ_assert(0);
goto __exit_main;;
    __exit_main: __CSEQ_assume( __cs_pc_cs[0] >= 4 );
;;
__CSEQ_rawline("tmain_4: ");
__cs_exit(0, 0);
}
int main(void) {
__CSEQ_rawline("/* round  0 */");
__CSEQ_rawline("    /* main */");
          unsigned int __cs_tmp_t0_r0 ;
          __cs_pc_cs[0] = __cs_tmp_t0_r0;
          __CSEQ_assume(__cs_pc_cs[0] > 0);
          __CSEQ_assume(__cs_pc_cs[0] <= 4);
          main_thread();
          __cs_pc[0] = __cs_pc_cs[0];

__CSEQ_rawline("    /* push_0 */");
         unsigned int __cs_tmp_t1_r0 ;
         if (__cs_active_thread[1]) {
             __cs_pc_cs[1] = __cs_tmp_t1_r0;
             __CSEQ_assume(__cs_pc_cs[1] <= 121);
             push_0(__cs_threadargs[1]);
             __cs_pc[1] = __cs_pc_cs[1];
         }

__CSEQ_rawline("    /* pop_0 */");
         unsigned int __cs_tmp_t2_r0 ;
         if (__cs_active_thread[2]) {
             __cs_pc_cs[2] = __cs_tmp_t2_r0;
             __CSEQ_assume(__cs_pc_cs[2] <= 155);
             pop_0(__cs_threadargs[2]);
             __cs_pc[2] = __cs_pc_cs[2];
         }

          unsigned int __cs_tmp_t0_r1 ;
           if (__cs_active_thread[0] == 1) {
             __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
             __CSEQ_assume(__cs_pc_cs[0] >= __cs_pc[0]);
             __CSEQ_assume(__cs_pc_cs[0] <= 4);
             main_thread();
           }
    return 0;
}

