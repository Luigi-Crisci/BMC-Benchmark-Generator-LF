

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
  lfds711_pal_uint_t volatile
    entropy;
};

struct lfds711_prng_st_state
{
  lfds711_pal_uint_t
    entropy;
};


void lfds711_prng_init_valid_on_current_logical_core( struct lfds711_prng_state *ps, lfds711_pal_uint_t seed );
void lfds711_prng_st_init( struct lfds711_prng_st_state *psts, lfds711_pal_uint_t seed );
enum lfds711_misc_cas_strength
{

  LFDS711_MISC_CAS_STRENGTH_STRONG = 0,
  LFDS711_MISC_CAS_STRENGTH_WEAK = 1,
};

enum lfds711_misc_validity
{
  LFDS711_MISC_VALIDITY_UNKNOWN,
  LFDS711_MISC_VALIDITY_VALID,
  LFDS711_MISC_VALIDITY_INVALID_LOOP,
  LFDS711_MISC_VALIDITY_INVALID_MISSING_ELEMENTS,
  LFDS711_MISC_VALIDITY_INVALID_ADDITIONAL_ELEMENTS,
  LFDS711_MISC_VALIDITY_INVALID_TEST_DATA,
  LFDS711_MISC_VALIDITY_INVALID_ORDER,
  LFDS711_MISC_VALIDITY_INVALID_ATOMIC_FAILED,
  LFDS711_MISC_VALIDITY_INDETERMINATE_NONATOMIC_PASSED,
};

enum lfds711_misc_flag
{
  LFDS711_MISC_FLAG_LOWERED,
  LFDS711_MISC_FLAG_RAISED
};

enum lfds711_misc_query
{
  LFDS711_MISC_QUERY_GET_BUILD_AND_VERSION_STRING
};

enum lfds711_misc_data_structure
{
  LFDS711_MISC_DATA_STRUCTURE_BTREE_AU,
  LFDS711_MISC_DATA_STRUCTURE_FREELIST,
  LFDS711_MISC_DATA_STRUCTURE_HASH_A,
  LFDS711_MISC_DATA_STRUCTURE_LIST_AOS,
  LFDS711_MISC_DATA_STRUCTURE_LIST_ASU,
  LFDS711_MISC_DATA_STRUCTURE_QUEUE_BMM,
  LFDS711_MISC_DATA_STRUCTURE_QUEUE_BSS,
  LFDS711_MISC_DATA_STRUCTURE_QUEUE_UMM,
  LFDS711_MISC_DATA_STRUCTURE_RINGBUFFER,
  LFDS711_MISC_DATA_STRUCTURE_STACK,
  LFDS711_MISC_DATA_STRUCTURE_COUNT
};


struct lfds711_misc_backoff_state
{
  lfds711_pal_uint_t volatile
    lock;

  lfds711_pal_uint_t
    backoff_iteration_frequency_counters[2],
    metric,
    total_operations;
};

struct lfds711_misc_globals
{
  struct lfds711_prng_state
    ps;
};

struct lfds711_misc_validation_info
{
  lfds711_pal_uint_t
    min_elements,
    max_elements;
};


extern struct lfds711_misc_globals
  lfds711_misc_globals;


static inline void lfds711_misc_force_store( void );

void lfds711_misc_query( enum lfds711_misc_query query_type, void *query_input, void *query_output );


#pragma prefast( disable : 28112, "blah" )

static inline void lfds711_misc_force_store()
{
  lfds711_pal_uint_t volatile
    destination;

  { (void) __atomic_exchange_n( (&destination), (0), 0 ); };

  return;
}
enum lfds711_btree_au_absolute_position
{
  LFDS711_BTREE_AU_ABSOLUTE_POSITION_ROOT,
  LFDS711_BTREE_AU_ABSOLUTE_POSITION_SMALLEST_IN_TREE,
  LFDS711_BTREE_AU_ABSOLUTE_POSITION_LARGEST_IN_TREE
};

enum lfds711_btree_au_existing_key
{
  LFDS711_BTREE_AU_EXISTING_KEY_OVERWRITE,
  LFDS711_BTREE_AU_EXISTING_KEY_FAIL
};

enum lfds711_btree_au_insert_result
{
  LFDS711_BTREE_AU_INSERT_RESULT_FAILURE_EXISTING_KEY,
  LFDS711_BTREE_AU_INSERT_RESULT_SUCCESS_OVERWRITE,
  LFDS711_BTREE_AU_INSERT_RESULT_SUCCESS
};

enum lfds711_btree_au_query
{
  LFDS711_BTREE_AU_QUERY_GET_POTENTIALLY_INACCURATE_COUNT,
  LFDS711_BTREE_AU_QUERY_SINGLETHREADED_VALIDATE
};

enum lfds711_btree_au_relative_position
{
  LFDS711_BTREE_AU_RELATIVE_POSITION_UP,
  LFDS711_BTREE_AU_RELATIVE_POSITION_LEFT,
  LFDS711_BTREE_AU_RELATIVE_POSITION_RIGHT,
  LFDS711_BTREE_AU_RELATIVE_POSITION_SMALLEST_ELEMENT_BELOW_CURRENT_ELEMENT,
  LFDS711_BTREE_AU_RELATIVE_POSITION_LARGEST_ELEMENT_BELOW_CURRENT_ELEMENT,
  LFDS711_BTREE_AU_RELATIVE_POSITION_NEXT_SMALLER_ELEMENT_IN_ENTIRE_TREE,
  LFDS711_BTREE_AU_RELATIVE_POSITION_NEXT_LARGER_ELEMENT_IN_ENTIRE_TREE
};


struct lfds711_btree_au_element
{





  struct lfds711_btree_au_element
    *volatile left,
    *volatile right,
    *volatile up;

  void
    *volatile value;

  void
    *key;
};

struct lfds711_btree_au_state
{
  struct lfds711_btree_au_element
    *volatile root;

  int
    (*key_compare_function)( void const *new_key, void const *existing_key );

  enum lfds711_btree_au_existing_key
    existing_key;

  void
    *user_state;

  struct lfds711_misc_backoff_state
    insert_backoff;
};


void lfds711_btree_au_init_valid_on_current_logical_core( struct lfds711_btree_au_state *baus,
                                                          int (*key_compare_function)(void const *new_key, void const *existing_key),
                                                          enum lfds711_btree_au_existing_key existing_key,
                                                          void *user_state );


void lfds711_btree_au_cleanup( struct lfds711_btree_au_state *baus,
                               void (*element_cleanup_callback)(struct lfds711_btree_au_state *baus, struct lfds711_btree_au_element *baue) );

enum lfds711_btree_au_insert_result lfds711_btree_au_insert( struct lfds711_btree_au_state *baus,
                                                             struct lfds711_btree_au_element *baue,
                                                             struct lfds711_btree_au_element **existing_baue );


int lfds711_btree_au_get_by_key( struct lfds711_btree_au_state *baus,
                                 int (*key_compare_function)(void const *new_key, void const *existing_key),
                                 void *key,
                                 struct lfds711_btree_au_element **baue );

int lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position( struct lfds711_btree_au_state *baus,
                                                                             struct lfds711_btree_au_element **baue,
                                                                             enum lfds711_btree_au_absolute_position absolute_position,
                                                                             enum lfds711_btree_au_relative_position relative_position );


int lfds711_btree_au_get_by_absolute_position( struct lfds711_btree_au_state *baus,
                                               struct lfds711_btree_au_element **baue,
                                               enum lfds711_btree_au_absolute_position absolute_position );

int lfds711_btree_au_get_by_relative_position( struct lfds711_btree_au_element **baue,
                                               enum lfds711_btree_au_relative_position relative_position );

void lfds711_btree_au_query( struct lfds711_btree_au_state *baus,
                             enum lfds711_btree_au_query query_type,
                             void *query_input,
                             void *query_output );
enum lfds711_freelist_query
{
  LFDS711_FREELIST_QUERY_SINGLETHREADED_GET_COUNT,
  LFDS711_FREELIST_QUERY_SINGLETHREADED_VALIDATE,
  LFDS711_FREELIST_QUERY_GET_ELIMINATION_ARRAY_EXTRA_ELEMENTS_IN_FREELIST_ELEMENTS
};


struct lfds711_freelist_element
{
  struct lfds711_freelist_element
    *next;

  void
    *key,
    *value;
};

struct lfds711_freelist_state
{
  struct lfds711_freelist_element
    *volatile top[2];

  lfds711_pal_uint_t
    elimination_array_size_in_elements;

  struct lfds711_freelist_element * volatile
    (*elimination_array)[( 128 / sizeof(struct lfds711_freelist_element *) )];

  void
    *user_state;

  struct lfds711_misc_backoff_state
    pop_backoff,
    push_backoff;
};


void lfds711_freelist_init_valid_on_current_logical_core( struct lfds711_freelist_state *fs,
                                                          struct lfds711_freelist_element * volatile (*elimination_array)[( 128 / sizeof(struct lfds711_freelist_element *) )],
                                                          lfds711_pal_uint_t elimination_array_size_in_elements,
                                                          void *user_state );


void lfds711_freelist_cleanup( struct lfds711_freelist_state *fs,
                               void (*element_cleanup_callback)(struct lfds711_freelist_state *fs, struct lfds711_freelist_element *fe) );

void lfds711_freelist_push( struct lfds711_freelist_state *fs,
                                   struct lfds711_freelist_element *fe,
                                   struct lfds711_prng_st_state *psts );

int lfds711_freelist_pop( struct lfds711_freelist_state *fs,
                          struct lfds711_freelist_element **fe,
                          struct lfds711_prng_st_state *psts );

void lfds711_freelist_query( struct lfds711_freelist_state *fs,
                             enum lfds711_freelist_query query_type,
                             void *query_input,
                             void *query_output );
enum lfds711_hash_a_existing_key
{
  LFDS711_HASH_A_EXISTING_KEY_OVERWRITE,
  LFDS711_HASH_A_EXISTING_KEY_FAIL
};

enum lfds711_hash_a_insert_result
{
  LFDS711_HASH_A_PUT_RESULT_FAILURE_EXISTING_KEY,
  LFDS711_HASH_A_PUT_RESULT_SUCCESS_OVERWRITE,
  LFDS711_HASH_A_PUT_RESULT_SUCCESS
};

enum lfds711_hash_a_query
{
  LFDS711_HASH_A_QUERY_GET_POTENTIALLY_INACCURATE_COUNT,
  LFDS711_HASH_A_QUERY_SINGLETHREADED_VALIDATE
};


struct lfds711_hash_a_element
{
  struct lfds711_btree_au_element
    baue;

  void
    *key;

  void
    *volatile value;
};

struct lfds711_hash_a_iterate
{
  struct lfds711_btree_au_element
    *baue;

  struct lfds711_btree_au_state
    *baus,
    *baus_end;
};

struct lfds711_hash_a_state
{
  enum lfds711_hash_a_existing_key
    existing_key;

  int
    (*key_compare_function)( void const *new_key, void const *existing_key );

  lfds711_pal_uint_t
    array_size;

  struct lfds711_btree_au_state
    *baus_array;

  void
    (*element_cleanup_callback)( struct lfds711_hash_a_state *has, struct lfds711_hash_a_element *hae ),
    (*key_hash_function)( void const *key, lfds711_pal_uint_t *hash ),
    *user_state;
};


void lfds711_hash_a_init_valid_on_current_logical_core( struct lfds711_hash_a_state *has,
                                                        struct lfds711_btree_au_state *baus_array,
                                                        lfds711_pal_uint_t array_size,
                                                        int (*key_compare_function)(void const *new_key, void const *existing_key),
                                                        void (*key_hash_function)(void const *key, lfds711_pal_uint_t *hash),
                                                        enum lfds711_hash_a_existing_key existing_key,
                                                        void *user_state );


void lfds711_hash_a_cleanup( struct lfds711_hash_a_state *has,
                             void (*element_cleanup_function)(struct lfds711_hash_a_state *has, struct lfds711_hash_a_element *hae) );

enum lfds711_hash_a_insert_result lfds711_hash_a_insert( struct lfds711_hash_a_state *has,
                                                         struct lfds711_hash_a_element *hae,
                                                         struct lfds711_hash_a_element **existing_hae );


int lfds711_hash_a_get_by_key( struct lfds711_hash_a_state *has,
                               int (*key_compare_function)(void const *new_key, void const *existing_key),
                               void (*key_hash_function)(void const *key, lfds711_pal_uint_t *hash),
                               void *key,
                               struct lfds711_hash_a_element **hae );

void lfds711_hash_a_iterate_init( struct lfds711_hash_a_state *has, struct lfds711_hash_a_iterate *hai );
int lfds711_hash_a_iterate( struct lfds711_hash_a_iterate *hai, struct lfds711_hash_a_element **hae );

void lfds711_hash_a_query( struct lfds711_hash_a_state *has,
                           enum lfds711_hash_a_query query_type,
                           void *query_input,
                           void *query_output );
enum lfds711_list_aso_existing_key
{
  LFDS711_LIST_ASO_EXISTING_KEY_OVERWRITE,
  LFDS711_LIST_ASO_EXISTING_KEY_FAIL
};

enum lfds711_list_aso_insert_result
{
  LFDS711_LIST_ASO_INSERT_RESULT_FAILURE_EXISTING_KEY,
  LFDS711_LIST_ASO_INSERT_RESULT_SUCCESS_OVERWRITE,
  LFDS711_LIST_ASO_INSERT_RESULT_SUCCESS
};

enum lfds711_list_aso_query
{
  LFDS711_LIST_ASO_QUERY_GET_POTENTIALLY_INACCURATE_COUNT,
  LFDS711_LIST_ASO_QUERY_SINGLETHREADED_VALIDATE
};


struct lfds711_list_aso_element
{
  struct lfds711_list_aso_element
    *volatile next;

  void
    *volatile value;

  void
    *key;
};

struct lfds711_list_aso_state
{
  struct lfds711_list_aso_element
    dummy_element;

  struct lfds711_list_aso_element
    *start;

  int
    (*key_compare_function)( void const *new_key, void const *existing_key );

  enum lfds711_list_aso_existing_key
    existing_key;

  void
    *user_state;

  struct lfds711_misc_backoff_state
    insert_backoff;
};


void lfds711_list_aso_init_valid_on_current_logical_core( struct lfds711_list_aso_state *lasos,
                                                          int (*key_compare_function)(void const *new_key, void const *existing_key),
                                                          enum lfds711_list_aso_existing_key existing_key,
                                                          void *user_state );


void lfds711_list_aso_cleanup( struct lfds711_list_aso_state *lasos,
                               void (*element_cleanup_callback)(struct lfds711_list_aso_state *lasos, struct lfds711_list_aso_element *lasoe) );

enum lfds711_list_aso_insert_result lfds711_list_aso_insert( struct lfds711_list_aso_state *lasos,
                                                             struct lfds711_list_aso_element *lasoe,
                                                             struct lfds711_list_aso_element **existing_lasoe );

int lfds711_list_aso_get_by_key( struct lfds711_list_aso_state *lasos,
                                 void *key,
                                 struct lfds711_list_aso_element **lasoe );

void lfds711_list_aso_query( struct lfds711_list_aso_state *lasos,
                             enum lfds711_list_aso_query query_type,
                             void *query_input,
                             void *query_output );
enum lfds711_list_asu_position
{
  LFDS711_LIST_ASU_POSITION_START,
  LFDS711_LIST_ASU_POSITION_END,
  LFDS711_LIST_ASU_POSITION_AFTER
};

enum lfds711_list_asu_query
{
  LFDS711_LIST_ASU_QUERY_GET_POTENTIALLY_INACCURATE_COUNT,
  LFDS711_LIST_ASU_QUERY_SINGLETHREADED_VALIDATE
};


struct lfds711_list_asu_element
{
  struct lfds711_list_asu_element
    *volatile next;

  void
    *volatile value;

  void
    *key;
};

struct lfds711_list_asu_state
{
  struct lfds711_list_asu_element
    dummy_element;

  struct lfds711_list_asu_element
    *volatile end;

  struct lfds711_list_asu_element
    *start;

  void
    *user_state;

  struct lfds711_misc_backoff_state
    after_backoff,
    end_backoff,
    start_backoff;
};


void lfds711_list_asu_init_valid_on_current_logical_core( struct lfds711_list_asu_state *lasus,
                                                          void *user_state );


void lfds711_list_asu_cleanup( struct lfds711_list_asu_state *lasus,
                               void (*element_cleanup_callback)(struct lfds711_list_asu_state *lasus, struct lfds711_list_asu_element *lasue) );

void lfds711_list_asu_insert_at_position( struct lfds711_list_asu_state *lasus,
                                          struct lfds711_list_asu_element *lasue,
                                          struct lfds711_list_asu_element *lasue_predecessor,
                                          enum lfds711_list_asu_position position );

void lfds711_list_asu_insert_at_start( struct lfds711_list_asu_state *lasus,
                                       struct lfds711_list_asu_element *lasue );

void lfds711_list_asu_insert_at_end( struct lfds711_list_asu_state *lasus,
                                     struct lfds711_list_asu_element *lasue );

void lfds711_list_asu_insert_after_element( struct lfds711_list_asu_state *lasus,
                                            struct lfds711_list_asu_element *lasue,
                                            struct lfds711_list_asu_element *lasue_predecessor );

int lfds711_list_asu_get_by_key( struct lfds711_list_asu_state *lasus,
                                 int (*key_compare_function)(void const *new_key, void const *existing_key),
                                 void *key,
                                 struct lfds711_list_asu_element **lasue );

void lfds711_list_asu_query( struct lfds711_list_asu_state *lasus,
                             enum lfds711_list_asu_query query_type,
                             void *query_input,
                             void *query_output );




enum lfds711_queue_bmm_query
{
  LFDS711_QUEUE_BMM_QUERY_GET_POTENTIALLY_INACCURATE_COUNT,
  LFDS711_QUEUE_BMM_QUERY_SINGLETHREADED_VALIDATE
};


struct lfds711_queue_bmm_element
{
  lfds711_pal_uint_t volatile
    sequence_number;

  void
    *volatile key,
    *volatile value;
};

struct lfds711_queue_bmm_state
{
  lfds711_pal_uint_t
    number_elements,
    mask;

  lfds711_pal_uint_t volatile
    read_index,
    write_index;

  struct lfds711_queue_bmm_element
    *element_array;

  void
    *user_state;

  struct lfds711_misc_backoff_state
    dequeue_backoff,
    enqueue_backoff;
};


void lfds711_queue_bmm_init_valid_on_current_logical_core( struct lfds711_queue_bmm_state *qbmms,
                                                           struct lfds711_queue_bmm_element *element_array,
                                                           lfds711_pal_uint_t number_elements,
                                                           void *user_state );

void lfds711_queue_bmm_cleanup( struct lfds711_queue_bmm_state *qbmms,
                                void (*element_cleanup_callback)(struct lfds711_queue_bmm_state *qbmms,
                                                                 void *key,
                                                                 void *value) );

int lfds711_queue_bmm_enqueue( struct lfds711_queue_bmm_state *qbmms,
                               void *key,
                               void *value );

int lfds711_queue_bmm_dequeue( struct lfds711_queue_bmm_state *qbmms,
                                      void **key,
                                      void **value );

void lfds711_queue_bmm_query( struct lfds711_queue_bmm_state *qbmms,
                              enum lfds711_queue_bmm_query query_type,
                              void *query_input,
                              void *query_output );




enum lfds711_queue_bss_query
{
  LFDS711_QUEUE_BSS_QUERY_GET_POTENTIALLY_INACCURATE_COUNT,
  LFDS711_QUEUE_BSS_QUERY_VALIDATE
};


struct lfds711_queue_bss_element
{
  void
    *volatile key,
    *volatile value;
};

struct lfds711_queue_bss_state
{
  lfds711_pal_uint_t
    number_elements,
    mask;

  lfds711_pal_uint_t volatile
    read_index,
    write_index;

  struct lfds711_queue_bss_element
    *element_array;

  void
    *user_state;
};


void lfds711_queue_bss_init_valid_on_current_logical_core( struct lfds711_queue_bss_state *qbsss,
                                                           struct lfds711_queue_bss_element *element_array,
                                                           lfds711_pal_uint_t number_elements,
                                                           void *user_state );



void lfds711_queue_bss_cleanup( struct lfds711_queue_bss_state *qbsss,
                                void (*element_cleanup_callback)(struct lfds711_queue_bss_state *qbsss, void *key, void *value) );

int lfds711_queue_bss_enqueue( struct lfds711_queue_bss_state *qbsss,
                               void *key,
                               void *value );

int lfds711_queue_bss_dequeue( struct lfds711_queue_bss_state *qbsss,
                               void **key,
                               void **value );

void lfds711_queue_bss_query( struct lfds711_queue_bss_state *qbsss,
                              enum lfds711_queue_bss_query query_type,
                              void *query_input,
                              void *query_output );
enum lfds711_queue_umm_query
{
  LFDS711_QUEUE_UMM_QUERY_SINGLETHREADED_GET_COUNT,
  LFDS711_QUEUE_UMM_QUERY_SINGLETHREADED_VALIDATE
};


struct lfds711_queue_umm_element
{
  struct lfds711_queue_umm_element
    *volatile next[2];

  void
    *key,
    *value;
};

struct lfds711_queue_umm_state
{
  struct lfds711_queue_umm_element
    *volatile enqueue[2],
    *volatile dequeue[2];

  lfds711_pal_uint_t volatile
    aba_counter;

  void
    *user_state;

  struct lfds711_misc_backoff_state
    dequeue_backoff,
    enqueue_backoff;
};


void lfds711_queue_umm_init_valid_on_current_logical_core( struct lfds711_queue_umm_state *qumms,
                                                           struct lfds711_queue_umm_element *qumme_dummy,
                                                           void *user_state );


void lfds711_queue_umm_cleanup( struct lfds711_queue_umm_state *qumms,
                                void (*element_cleanup_callback)(struct lfds711_queue_umm_state *qumms, struct lfds711_queue_umm_element *qumme, enum lfds711_misc_flag dummy_element_flag) );

void lfds711_queue_umm_enqueue( struct lfds711_queue_umm_state *qumms,
                                struct lfds711_queue_umm_element *qumme );

int lfds711_queue_umm_dequeue( struct lfds711_queue_umm_state *qumms,
                               struct lfds711_queue_umm_element **qumme );

void lfds711_queue_umm_query( struct lfds711_queue_umm_state *qumms,
                              enum lfds711_queue_umm_query query_type,
                              void *query_input,
                              void *query_output );




enum lfds711_ringbuffer_query
{
  LFDS711_RINGBUFFER_QUERY_SINGLETHREADED_GET_COUNT,
  LFDS711_RINGBUFFER_QUERY_SINGLETHREADED_VALIDATE
};


struct lfds711_ringbuffer_element
{
  struct lfds711_freelist_element
    fe;

  struct lfds711_queue_umm_element
    qumme;

  struct lfds711_queue_umm_element
    *qumme_use;

  void
    *key,
    *value;
};

struct lfds711_ringbuffer_state
{
  struct lfds711_freelist_state
    fs;

  struct lfds711_queue_umm_state
    qumms;

  void
    (*element_cleanup_callback)( struct lfds711_ringbuffer_state *rs, void *key, void *value, enum lfds711_misc_flag unread_flag ),
    *user_state;
};


void lfds711_ringbuffer_init_valid_on_current_logical_core( struct lfds711_ringbuffer_state *rs,
                                                            struct lfds711_ringbuffer_element *re_array_inc_dummy,
                                                            lfds711_pal_uint_t number_elements_inc_dummy,
                                                            void *user_state );


void lfds711_ringbuffer_cleanup( struct lfds711_ringbuffer_state *rs,
                                 void (*element_cleanup_callback)(struct lfds711_ringbuffer_state *rs, void *key, void *value, enum lfds711_misc_flag unread_flag) );

int lfds711_ringbuffer_read( struct lfds711_ringbuffer_state *rs,
                             void **key,
                             void **value );

void lfds711_ringbuffer_write( struct lfds711_ringbuffer_state *rs,
                               void *key,
                               void *value,
                               enum lfds711_misc_flag *overwrite_occurred_flag,
                               void **overwritten_key,
                               void **overwritten_value );

void lfds711_ringbuffer_query( struct lfds711_ringbuffer_state *rs,
                               enum lfds711_ringbuffer_query query_type,
                               void *query_input,
                               void *query_output );
enum lfds711_stack_query
{
  LFDS711_STACK_QUERY_SINGLETHREADED_GET_COUNT,
  LFDS711_STACK_QUERY_SINGLETHREADED_VALIDATE
};


struct lfds711_stack_element
{
  struct lfds711_stack_element
    *next;

  void
    *key,
    *value;
};

struct lfds711_stack_state
{
  struct lfds711_stack_element
    *volatile top[2];

  void
    *user_state;

  struct lfds711_misc_backoff_state
    pop_backoff,
    push_backoff;
};


void lfds711_stack_init_valid_on_current_logical_core( struct lfds711_stack_state *ss,
                                                       void *user_state );


void lfds711_stack_cleanup( struct lfds711_stack_state *ss,
                            void (*element_cleanup_callback)(struct lfds711_stack_state *ss, struct lfds711_stack_element *se) );

void lfds711_stack_push( struct lfds711_stack_state *ss,
                         struct lfds711_stack_element *se );

int lfds711_stack_pop( struct lfds711_stack_state *ss,
                       struct lfds711_stack_element **se );

void lfds711_stack_query( struct lfds711_stack_state *ss,
                          enum lfds711_stack_query query_type,
                          void *query_input,
                          void *query_output );


#pragma warning( pop )

void lfds711_misc_internal_backoff_init( struct lfds711_misc_backoff_state *bs );
typedef enum
  {
    memory_order_relaxed = 0,
    memory_order_consume = 1,
    memory_order_acquire = 2,
    memory_order_release = 3,
    memory_order_acq_rel = 4,
    memory_order_seq_cst = 5
  } memory_order;


typedef _Atomic _Bool atomic_bool;
typedef _Atomic char atomic_char;
typedef _Atomic signed char atomic_schar;
typedef _Atomic unsigned char atomic_uchar;
typedef _Atomic short atomic_short;
typedef _Atomic unsigned short atomic_ushort;
typedef _Atomic int atomic_int;
typedef _Atomic unsigned int atomic_uint;
typedef _Atomic long atomic_long;
typedef _Atomic unsigned long atomic_ulong;
typedef _Atomic long long atomic_llong;
typedef _Atomic unsigned long long atomic_ullong;
typedef _Atomic short unsigned int atomic_char16_t;
typedef _Atomic unsigned int atomic_char32_t;
typedef _Atomic int atomic_wchar_t;
typedef _Atomic signed char atomic_int_least8_t;
typedef _Atomic unsigned char atomic_uint_least8_t;
typedef _Atomic short int atomic_int_least16_t;
typedef _Atomic short unsigned int atomic_uint_least16_t;
typedef _Atomic int atomic_int_least32_t;
typedef _Atomic unsigned int atomic_uint_least32_t;
typedef _Atomic long int atomic_int_least64_t;
typedef _Atomic long unsigned int atomic_uint_least64_t;
typedef _Atomic signed char atomic_int_fast8_t;
typedef _Atomic unsigned char atomic_uint_fast8_t;
typedef _Atomic long int atomic_int_fast16_t;
typedef _Atomic long unsigned int atomic_uint_fast16_t;
typedef _Atomic long int atomic_int_fast32_t;
typedef _Atomic long unsigned int atomic_uint_fast32_t;
typedef _Atomic long int atomic_int_fast64_t;
typedef _Atomic long unsigned int atomic_uint_fast64_t;
typedef _Atomic long int atomic_intptr_t;
typedef _Atomic long unsigned int atomic_uintptr_t;
typedef _Atomic long unsigned int atomic_size_t;
typedef _Atomic long int atomic_ptrdiff_t;
typedef _Atomic long int atomic_intmax_t;
typedef _Atomic long unsigned int atomic_uintmax_t;
extern void atomic_thread_fence (memory_order);

extern void atomic_signal_fence (memory_order);
typedef _Atomic struct
{

  _Bool __val;



} atomic_flag;




extern _Bool atomic_flag_test_and_set (volatile atomic_flag *);


extern _Bool atomic_flag_test_and_set_explicit (volatile atomic_flag *,
      memory_order);



extern void atomic_flag_clear (volatile atomic_flag *);

extern void atomic_flag_clear_explicit (volatile atomic_flag *, memory_order);

void lfds711_misc_internal_backoff_init( struct lfds711_misc_backoff_state *bs )
{
  if( !(bs != 0) ) { char *c = 0; *c = 0; };;
  if( !((lfds711_pal_uint_t) &bs->lock % 128 == 0) ) { char *c = 0; *c = 0; };;

  bs->lock = LFDS711_MISC_FLAG_LOWERED;
  bs->backoff_iteration_frequency_counters[0] = 0;
  bs->backoff_iteration_frequency_counters[1] = 0;
  bs->metric = 1;
  bs->total_operations = 0;
  return;
}

void lfds711_stack_init_valid_on_current_logical_core( struct lfds711_stack_state *ss,
                                                       void *user_state )
{
  if( !(ss != 0) ) { char *c = 0; *c = 0; };;
  if( !((lfds711_pal_uint_t) ss->top % 128 == 0) ) { char *c = 0; *c = 0; };;
  if( !((lfds711_pal_uint_t) &ss->user_state % 128 == 0) ) { char *c = 0; *c = 0; };;


  ss->top[0] = 0;
  ss->top[1] = 0;

  ss->user_state = user_state;

  lfds711_misc_internal_backoff_init( &ss->pop_backoff );
  lfds711_misc_internal_backoff_init( &ss->push_backoff );

  __atomic_thread_fence( 3 );

  lfds711_misc_force_store();

  return;
}

int lfds711_stack_pop( struct lfds711_stack_state *ss,
                       struct lfds711_stack_element **se )
{
  char unsigned
    result;

  lfds711_pal_uint_t
    backoff_iteration = 0;

  struct lfds711_stack_element
    *new_top[2],
    *volatile original_top[2];

  if( !(ss != 0) ) { char *c = 0; *c = 0; };;
  if( !(se != 0) ) { char *c = 0; *c = 0; };;

  __atomic_thread_fence( 2 );

  original_top[1] = ss->top[1];
  original_top[0] = ss->top[0];

  do
  {
    if( original_top[0] == 0 )
    {
      *se = 0;
      return 0;
    }

    new_top[1] = original_top[1] + 1;
    new_top[0] = original_top[0]->next;

    { (result) = 0; ; };

    if( result == 0 )
    {
      { lfds711_pal_uint_t volatile loop; lfds711_pal_uint_t endloop; if( (backoff_iteration) == 10 ) (backoff_iteration) = 0; else { endloop = ( ((lfds711_pal_uint_t) 0x1) << (backoff_iteration) ) * (ss->pop_backoff).metric; for( loop = 0 ; loop < endloop ; loop++ ); } (backoff_iteration)++; };
      __atomic_thread_fence( 2 );
    }
  }
  while( result == 0 );

  *se = original_top[0];

  { if( (backoff_iteration) < 2 ) (ss->pop_backoff).backoff_iteration_frequency_counters[(backoff_iteration)]++; if( ++(ss->pop_backoff).total_operations >= 10000 && (ss->pop_backoff).lock == LFDS711_MISC_FLAG_LOWERED ) { char unsigned result; lfds711_pal_uint_t compare = LFDS711_MISC_FLAG_LOWERED; { result = (char unsigned) __atomic_compare_exchange_n( &(ss->pop_backoff).lock, &compare, LFDS711_MISC_FLAG_RAISED, LFDS711_MISC_CAS_STRENGTH_WEAK, 0, 0 ); }; if( result == 1 ) { if( (ss->pop_backoff).backoff_iteration_frequency_counters[1] < (ss->pop_backoff).backoff_iteration_frequency_counters[0] / 100 ) { if( (ss->pop_backoff).metric >= 11 ) (ss->pop_backoff).metric -= 10; } else (ss->pop_backoff).metric += 10; (ss->pop_backoff).backoff_iteration_frequency_counters[0] = 0; (ss->pop_backoff).backoff_iteration_frequency_counters[1] = 0; (ss->pop_backoff).total_operations = 0; __atomic_thread_fence( 3 ); { (void) __atomic_exchange_n( (&(ss->pop_backoff).lock), (LFDS711_MISC_FLAG_LOWERED), 0 ); }; } } };

  return 1;
}



void lfds711_stack_cleanup( struct lfds711_stack_state *ss,
                            void (*element_cleanup_callback)(struct lfds711_stack_state *ss, struct lfds711_stack_element *se) )
{
  struct lfds711_stack_element
    *se,
    *se_temp;

  if( !(ss != 0) ) { char *c = 0; *c = 0; };;


  __atomic_thread_fence( 2 );

  if( element_cleanup_callback != 0 )
  {
    se = ss->top[0];

    while( se != 0 )
    {
      se_temp = se;
      se = se->next;

      element_cleanup_callback( ss, se_temp );
    }

  }

  return;
}

struct lfds711_stack_state ss;
pthread_mutex_t lock;
volatile int k = 0;

struct test_data
{
 struct lfds711_stack_element
  se;

 int long long unsigned
  user_id;
};



void *tr1()
{
 struct test_data *td;

 int long long unsigned
  loop;

 td = malloc(sizeof(struct test_data) * 3);


 pthread_mutex_lock(&lock);
 td[0].user_id = 0;
 ( (td[0].se).value = (void *) (lfds711_pal_uint_t) (&td[0]) );
 lfds711_stack_push(&ss, &td[0].se);
 pthread_mutex_unlock(&lock);

 pthread_mutex_lock(&lock);
 td[1].user_id = 1;
 ( (td[1].se).value = (void *) (lfds711_pal_uint_t) (&td[1]) );
 lfds711_stack_push(&ss, &td[1].se);
 pthread_mutex_unlock(&lock);

 pthread_mutex_lock(&lock);
 td[2].user_id = 2;
 ( (td[2].se).value = (void *) (lfds711_pal_uint_t) (&td[2]) );
 lfds711_stack_push(&ss, &td[2].se);
 pthread_mutex_unlock(&lock);

 k = 1;
}


void *tr2()
{


 int long long unsigned loop;
 struct lfds711_stack_element *se;
 struct test_data *temp_td;
 int res;
 int count = 0;

 pthread_mutex_lock(&lock);
 res = lfds711_stack_pop(&ss, &se);
 pthread_mutex_unlock(&lock);
 if (res != 0)
 {
  temp_td = ( (*se).value );
  count++;
  int x = temp_td->user_id;

  printf("user_id = %llu\n", temp_td->user_id);
 }

 pthread_mutex_lock(&lock);
 res = lfds711_stack_pop(&ss, &se);
 pthread_mutex_unlock(&lock);
 if (res != 0)
 {
  temp_td = ( (*se).value );
  count++;
  int x = temp_td->user_id;

  printf("user_id = %llu\n", temp_td->user_id);
 }

 pthread_mutex_lock(&lock);
 res = lfds711_stack_pop(&ss, &se);
 pthread_mutex_unlock(&lock);
 if (res != 0)
 {
  temp_td = ( (*se).value );
  count++;
  int x = temp_td->user_id;

  printf("user_id = %llu\n", temp_td->user_id);
 }


}

int main()
{

 lfds711_stack_init_valid_on_current_logical_core(&ss, 0);

 pthread_t t1, t2;
 pthread_mutex_init(&lock, 0);
 pthread_create(&t1, 0, tr1, 0);
 pthread_create(&t2, 0, tr2, 0);
 pthread_join(t1, 0);
 pthread_join(t2, 0);

 lfds711_stack_cleanup(&ss, 0);
 assert(0);
 return (0);
}
