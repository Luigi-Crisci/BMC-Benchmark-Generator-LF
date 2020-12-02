
# 1 "<previous_module>"
unsigned __CPROVER_bitvector[1] __cs_active_thread[3] = {1};

# 2 "<previous_module>"
unsigned __CPROVER_bitvector[8] __cs_pc[3];

# 3 "<previous_module>"
unsigned __CPROVER_bitvector[9] __cs_pc_cs[3];

# 4 "<previous_module>"
unsigned __CPROVER_bitvector[2] __cs_last_thread;

# 5 "<previous_module>"
unsigned __CPROVER_bitvector[8] __cs_thread_lines[3] = {4, 161, 224};

# 7 "<previous_module>"
void *__cs_safe_malloc(unsigned int __cs_size)
{
        
# 8 "<previous_module>"
void *__cs_ptr = (malloc(__cs_size));
        
# 9 "<previous_module>"
return __cs_ptr;
}


# 12 "<previous_module>"
void __cs_init_scalar(void *__cs_var, unsigned int __cs_size)
{
        
# 13 "<previous_module>"
if (__cs_size == (sizeof(int)))
                
# 14 "<previous_module>"
*((int *) __cs_var) = nondet_int();
        else

# 15 "<previous_module>"
        {
                
# 16 "<previous_module>"
__cs_var = malloc(__cs_size);
        }

}


# 20 "<previous_module>"
void __CSEQ_message(char *__cs_message)
{
        ;
}


# 22 "<previous_module>"
typedef int __cs_t;

# 24 "<previous_module>"
void *__cs_threadargs[3];

# 25 "<previous_module>"
void *__cs_thread_joinargs[3];

# 27 "<previous_module>"
int __cs_create(__cs_t *__cs_new_thread_id, void *__cs_attr, void *(*__cs_thread_function)(void *), void *__cs_arg, int __cs_threadID)
{
        
# 28 "<previous_module>"
if (__cs_threadID > THREADS)
                return 0;

        
# 29 "<previous_module>"
*__cs_new_thread_id = __cs_threadID;
        
# 30 "<previous_module>"
__cs_active_thread[__cs_threadID] = 1;
        
# 31 "<previous_module>"
__cs_threadargs[__cs_threadID] = __cs_arg;
        
# 32 "<previous_module>"
__CSEQ_message("thread spawned");
        
# 33 "<previous_module>"
return 0;
}


# 36 "<previous_module>"
int __cs_join(__cs_t __cs_id, void **__cs_value_ptr)
{
        
# 37 "<previous_module>"
__CPROVER_assume(__cs_pc[__cs_id] == __cs_thread_lines[__cs_id]);
        
# 38 "<previous_module>"
*__cs_value_ptr = __cs_thread_joinargs[__cs_id];
        
# 39 "<previous_module>"
return 0;
}


# 42 "<previous_module>"
int __cs_exit(void *__cs_value_ptr, unsigned int __cs_thread_index)
{
        
# 43 "<previous_module>"
__cs_thread_joinargs[__cs_thread_index] = __cs_value_ptr;
        
# 44 "<previous_module>"
return 0;
}


# 47 "<previous_module>"
int __cs_self(void)
{
        return 1;
}


# 49 "<previous_module>"
typedef int __cs_mutex_t;

# 51 "<previous_module>"
int __cs_mutex_init(__cs_mutex_t *__cs_m, int __cs_val)
{
        
# 52 "<previous_module>"
*__cs_m = -1;
        
# 53 "<previous_module>"
return 0;
}


# 56 "<previous_module>"
int __cs_mutex_destroy(__cs_mutex_t *__cs_mutex_to_destroy)
{
        
# 57 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_destroy) != 0, "attempt to destroy an uninitialized mutex");
        
# 58 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_destroy) != (-2), "attempt to destroy a previously destroyed mutex");
        
# 59 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_destroy) == (-1), "attempt to destroy a locked mutex");
        
# 60 "<previous_module>"
*__cs_mutex_to_destroy = -2;
        
# 61 "<previous_module>"
__CSEQ_message("lock destroyed");
        
# 62 "<previous_module>"
return 0;
}


# 65 "<previous_module>"
int __cs_mutex_lock(__cs_mutex_t *__cs_mutex_to_lock, unsigned __CPROVER_bitvector[2] __cs_thread_index)
{
        
# 66 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_lock) != 0, "attempt to lock an uninitialized mutex");
        
# 67 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_lock) != (-2), "attempt to lock a destroyed mutex");
        
# 68 "<previous_module>"
__CPROVER_assume((*__cs_mutex_to_lock) == (-1));
        
# 69 "<previous_module>"
*__cs_mutex_to_lock = __cs_thread_index + 1;
        
# 70 "<previous_module>"
__CSEQ_message("lock acquired");
        
# 71 "<previous_module>"
return 0;
}


# 74 "<previous_module>"
int __cs_mutex_unlock(__cs_mutex_t *__cs_mutex_to_unlock, unsigned __CPROVER_bitvector[2] __cs_thread_index)
{
        
# 75 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_unlock) != 0, "attempt to unlock an uninitialized mutex");
        
# 76 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_unlock) != (-2), "attempt to unlock a destroyed mutex");
        
# 77 "<previous_module>"
__CPROVER_assume((*__cs_mutex_to_unlock) == (__cs_thread_index + 1));
        
# 78 "<previous_module>"
*__cs_mutex_to_unlock = -1;
        
# 79 "<previous_module>"
__CSEQ_message("lock released");
        
# 80 "<previous_module>"
return 0;
}


# 83 "<previous_module>"
typedef int __cs_cond_t;

# 85 "<previous_module>"
int __cs_cond_init(__cs_cond_t *__cs_cond_to_init, void *__cs_attr)
{
        
# 86 "<previous_module>"
*__cs_cond_to_init = -1;
        
# 87 "<previous_module>"
return 0;
}


# 90 "<previous_module>"
int __cs_cond_destroy(__cs_cond_t *__cs_cond_to_destroy)
{
        
# 91 "<previous_module>"
*__cs_cond_to_destroy = -2;
        
# 92 "<previous_module>"
return 0;
}


# 95 "<previous_module>"
int __cs_cond_wait_1(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m, unsigned int __cs_thread_index)
{
        
# 96 "<previous_module>"
__CPROVER_assert((*__cs_cond_to_wait_for) != 0, "attempt to use an uninitialized conditional variable");
        
# 97 "<previous_module>"
__CPROVER_assert((*__cs_cond_to_wait_for) != (-2), "attempt to use a destroyed conditional variable");
        
# 98 "<previous_module>"
__cs_mutex_unlock(__cs_m, __cs_thread_index);
        
# 99 "<previous_module>"
return 0;
}


# 102 "<previous_module>"
int __cs_cond_wait_2(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m, unsigned int __cs_thread_index)
{
        
# 103 "<previous_module>"
__CPROVER_assume((*__cs_cond_to_wait_for) == 1);
        
# 104 "<previous_module>"
__cs_mutex_lock(__cs_m, __cs_thread_index);
        
# 105 "<previous_module>"
return 0;
}


# 108 "<previous_module>"
int __cs_cond_signal(__cs_cond_t *__cs_cond_to_signal)
{
        
# 109 "<previous_module>"
*__cs_cond_to_signal = 1;
        
# 110 "<previous_module>"
__CSEQ_message("conditional variable signal");
        
# 111 "<previous_module>"
return 0;
}


# 114 "<previous_module>"
int __cs_cond_broadcast(__cs_cond_t *__cs_cond_to_broadcast)
{
        
# 115 "<previous_module>"
*__cs_cond_to_broadcast = 1;
        
# 116 "<previous_module>"
__CSEQ_message("conditional variable broadcast");
        
# 117 "<previous_module>"
return 0;
}


# 123 "<previous_module>"
typedef struct __cs_barrier_t
{
        
# 121 "<previous_module>"
unsigned int init;
        
# 122 "<previous_module>"
unsigned int current;
} __cs_barrier_t;

# 125 "<previous_module>"
int __cs_barrier_init(__cs_barrier_t *__cs_barrier_to_init, void *__cs_attr, unsigned int count)
{
        
# 126 "<previous_module>"
__CPROVER_assert(count > 0, "count must be greater than 0");
        
# 127 "<previous_module>"
__cs_barrier_to_init->current = count;
        
# 128 "<previous_module>"
__cs_barrier_to_init->init = count;
        
# 129 "<previous_module>"
return 0;
}


# 132 "<previous_module>"
int __cs_barrier_destroy(__cs_barrier_t *__cs_barrier_to_destroy)
{
        
# 133 "<previous_module>"
__cs_barrier_to_destroy->init = -1;
        
# 134 "<previous_module>"
__cs_barrier_to_destroy->current = -1;
        
# 135 "<previous_module>"
return 0;
}


# 139 "<previous_module>"
int __cs_barrier_wait_1(__cs_barrier_t *__cs_barrier_to_wait)
{
        
# 140 "<previous_module>"
__CPROVER_assert(__cs_barrier_to_wait->init > 0, "attempt to use an uninitialized barrier variable");
        
# 141 "<previous_module>"
__cs_barrier_to_wait->current--;
        
# 142 "<previous_module>"
return 0;
}


# 145 "<previous_module>"
int __cs_barrier_wait_2(__cs_barrier_t *__cs_barrier_to_wait)
{
        
# 146 "<previous_module>"
__CPROVER_assert(__cs_barrier_to_wait->init > 0, "attempt to use an uninitialized barrier variable");
        
# 147 "<previous_module>"
__CPROVER_assume(__cs_barrier_to_wait->current == 0);
        
# 148 "<previous_module>"
__cs_barrier_to_wait->current = __cs_barrier_to_wait->init;
        
# 149 "<previous_module>"
return 0;
}


# 152 "<previous_module>"
typedef int __cs_attr_t;

# 153 "<previous_module>"
struct sched_param
{
        
# 154 "<previous_module>"
int sched_priority;
};

# 156 "<previous_module>"
int __cs_attr_init(__cs_attr_t *t)
{
        return 0;
}


# 157 "<previous_module>"
int __cs_attr_destroy(__cs_attr_t *t)
{
        return 0;
}


# 158 "<previous_module>"
int __cs_attr_getdetachstate(const __cs_attr_t *t, int *s)
{
        return 0;
}


# 159 "<previous_module>"
int __cs_attr_getguardsize(const __cs_attr_t *t, unsigned int *s)
{
        return 0;
}


# 160 "<previous_module>"
int __cs_attr_getinheritsched(const __cs_attr_t *t, int *s)
{
        return 0;
}


# 161 "<previous_module>"
int __cs_attr_getschedparam(const __cs_attr_t *t, struct sched_param *s)
{
        return 0;
}


# 162 "<previous_module>"
int __cs_attr_getschedpolicy(const __cs_attr_t *t, int *s)
{
        return 0;
}


# 163 "<previous_module>"
int __cs_attr_getscope(const __cs_attr_t *t, int *s)
{
        return 0;
}


# 164 "<previous_module>"
int __cs_attr_getstackaddr(const __cs_attr_t *t, void **s)
{
        return 0;
}


# 165 "<previous_module>"
int __cs_attr_getstacksize(const __cs_attr_t *t, unsigned int *s)
{
        return 0;
}


# 166 "<previous_module>"
int __cs_attr_setdetachstate(__cs_attr_t *t, int s)
{
        return 0;
}


# 167 "<previous_module>"
int __cs_attr_setguardsize(__cs_attr_t *t, unsigned int s)
{
        return 0;
}


# 168 "<previous_module>"
int __cs_attr_setinheritsched(__cs_attr_t *t, int s)
{
        return 0;
}


# 169 "<previous_module>"
int __cs_attr_setschedparam(__cs_attr_t *t, const struct sched_param *s)
{
        return 0;
}


# 170 "<previous_module>"
int __cs_attr_setschedpolicy(__cs_attr_t *t, int s)
{
        return 0;
}


# 171 "<previous_module>"
int __cs_attr_setscope(__cs_attr_t *t, int s)
{
        return 0;
}


# 172 "<previous_module>"
int __cs_attr_setstackaddr(__cs_attr_t *t, void *s)
{
        return 0;
}


# 173 "<previous_module>"
int __cs_attr_setstacksize(__cs_attr_t *t, unsigned int s)
{
        return 0;
}


# 174 "<previous_module>"
typedef int _____STARTSTRIPPINGFROMHERE_____;

# 175 "<previous_module>"
typedef int __cs_barrier_t;

# 176 "<previous_module>"
typedef int __cs_barrierattr_t;

# 177 "<previous_module>"
typedef int __cs_attr_t;

# 178 "<previous_module>"
typedef int __cs_cond_t;

# 179 "<previous_module>"
typedef int __cs_condattr_t;

# 180 "<previous_module>"
typedef int __cs_key_t;

# 181 "<previous_module>"
typedef int __cs_mutex_t;

# 182 "<previous_module>"
typedef int __cs_mutexattr_t;

# 183 "<previous_module>"
typedef int __cs_once_t;

# 184 "<previous_module>"
typedef int __cs_rwlock_t;

# 185 "<previous_module>"
typedef int __cs_rwlockattr_t;

# 186 "<previous_module>"
typedef int __cs_t;

# 187 "<previous_module>"
typedef int size_t;

# 188 "<previous_module>"
typedef int __builtin_va_list;

# 189 "<previous_module>"
typedef int __gnuc_va_list;

# 190 "<previous_module>"
typedef int __int8_t;

# 191 "<previous_module>"
typedef int __uint8_t;

# 192 "<previous_module>"
typedef int __int16_t;

# 193 "<previous_module>"
typedef int __uint16_t;

# 194 "<previous_module>"
typedef int __int_least16_t;

# 195 "<previous_module>"
typedef int __uint_least16_t;

# 196 "<previous_module>"
typedef int __int32_t;

# 197 "<previous_module>"
typedef int __uint32_t;

# 198 "<previous_module>"
typedef int __int64_t;

# 199 "<previous_module>"
typedef int __uint64_t;

# 200 "<previous_module>"
typedef int __int_least32_t;

# 201 "<previous_module>"
typedef int __uint_least32_t;

# 202 "<previous_module>"
typedef int __s8;

# 203 "<previous_module>"
typedef int __u8;

# 204 "<previous_module>"
typedef int __s16;

# 205 "<previous_module>"
typedef int __u16;

# 206 "<previous_module>"
typedef int __s32;

# 207 "<previous_module>"
typedef int __u32;

# 208 "<previous_module>"
typedef int __s64;

# 209 "<previous_module>"
typedef int __u64;

# 210 "<previous_module>"
typedef int _LOCK_T;

# 211 "<previous_module>"
typedef int _LOCK_RECURSIVE_T;

# 212 "<previous_module>"
typedef int _off_t;

# 213 "<previous_module>"
typedef int __dev_t;

# 214 "<previous_module>"
typedef int __uid_t;

# 215 "<previous_module>"
typedef int __gid_t;

# 216 "<previous_module>"
typedef int _off64_t;

# 217 "<previous_module>"
typedef int _fpos_t;

# 218 "<previous_module>"
typedef int _ssize_t;

# 219 "<previous_module>"
typedef int wint_t;

# 220 "<previous_module>"
typedef int _mbstate_t;

# 221 "<previous_module>"
typedef int _flock_t;

# 222 "<previous_module>"
typedef int _iconv_t;

# 223 "<previous_module>"
typedef int __ULong;

# 224 "<previous_module>"
typedef int __FILE;

# 225 "<previous_module>"
typedef int ptrdiff_t;

# 226 "<previous_module>"
typedef int wchar_t;

# 227 "<previous_module>"
typedef int __off_t;

# 228 "<previous_module>"
typedef int __pid_t;

# 229 "<previous_module>"
typedef int __loff_t;

# 230 "<previous_module>"
typedef int u_char;

# 231 "<previous_module>"
typedef int u_short;

# 232 "<previous_module>"
typedef int u_int;

# 233 "<previous_module>"
typedef int u_long;

# 234 "<previous_module>"
typedef int ushort;

# 235 "<previous_module>"
typedef int uint;

# 236 "<previous_module>"
typedef int clock_t;

# 237 "<previous_module>"
typedef int time_t;

# 238 "<previous_module>"
typedef int daddr_t;

# 239 "<previous_module>"
typedef int caddr_t;

# 240 "<previous_module>"
typedef int ino_t;

# 241 "<previous_module>"
typedef int off_t;

# 242 "<previous_module>"
typedef int dev_t;

# 243 "<previous_module>"
typedef int uid_t;

# 244 "<previous_module>"
typedef int gid_t;

# 245 "<previous_module>"
typedef int pid_t;

# 246 "<previous_module>"
typedef int key_t;

# 247 "<previous_module>"
typedef int ssize_t;

# 248 "<previous_module>"
typedef int mode_t;

# 249 "<previous_module>"
typedef int nlink_t;

# 250 "<previous_module>"
typedef int fd_mask;

# 251 "<previous_module>"
typedef int _types_fd_set;

# 252 "<previous_module>"
typedef int fd_set;

# 253 "<previous_module>"
typedef int clockid_t;

# 254 "<previous_module>"
typedef int timer_t;

# 255 "<previous_module>"
typedef int useconds_t;

# 256 "<previous_module>"
typedef int suseconds_t;

# 257 "<previous_module>"
typedef int FILE;

# 258 "<previous_module>"
typedef int fpos_t;

# 259 "<previous_module>"
typedef int cookie_read_function_t;

# 260 "<previous_module>"
typedef int cookie_write_function_t;

# 261 "<previous_module>"
typedef int cookie_seek_function_t;

# 262 "<previous_module>"
typedef int cookie_close_function_t;

# 263 "<previous_module>"
typedef int cookie_io_functions_t;

# 264 "<previous_module>"
typedef int div_t;

# 265 "<previous_module>"
typedef int ldiv_t;

# 266 "<previous_module>"
typedef int lldiv_t;

# 267 "<previous_module>"
typedef int sigset_t;

# 268 "<previous_module>"
typedef int __sigset_t;

# 269 "<previous_module>"
typedef int _sig_func_ptr;

# 270 "<previous_module>"
typedef int sig_atomic_t;

# 271 "<previous_module>"
typedef int __tzrule_type;

# 272 "<previous_module>"
typedef int __tzinfo_type;

# 273 "<previous_module>"
typedef int mbstate_t;

# 274 "<previous_module>"
typedef int sem_t;

# 275 "<previous_module>"
typedef int pthread_t;

# 276 "<previous_module>"
typedef int pthread_attr_t;

# 277 "<previous_module>"
typedef int pthread_mutex_t;

# 278 "<previous_module>"
typedef int pthread_mutexattr_t;

# 279 "<previous_module>"
typedef int pthread_cond_t;

# 280 "<previous_module>"
typedef int pthread_condattr_t;

# 281 "<previous_module>"
typedef int pthread_key_t;

# 282 "<previous_module>"
typedef int pthread_once_t;

# 283 "<previous_module>"
typedef int pthread_rwlock_t;

# 284 "<previous_module>"
typedef int pthread_rwlockattr_t;

# 285 "<previous_module>"
typedef int pthread_spinlock_t;

# 286 "<previous_module>"
typedef int pthread_barrier_t;

# 287 "<previous_module>"
typedef int pthread_barrierattr_t;

# 288 "<previous_module>"
typedef int jmp_buf;

# 289 "<previous_module>"
typedef int rlim_t;

# 290 "<previous_module>"
typedef int sa_family_t;

# 291 "<previous_module>"
typedef int sigjmp_buf;

# 292 "<previous_module>"
typedef int stack_t;

# 293 "<previous_module>"
typedef int siginfo_t;

# 294 "<previous_module>"
typedef int z_stream;

# 295 "<previous_module>"
typedef int int8_t;

# 296 "<previous_module>"
typedef int uint8_t;

# 297 "<previous_module>"
typedef int int16_t;

# 298 "<previous_module>"
typedef int uint16_t;

# 299 "<previous_module>"
typedef int int32_t;

# 300 "<previous_module>"
typedef int uint32_t;

# 301 "<previous_module>"
typedef int int64_t;

# 302 "<previous_module>"
typedef int uint64_t;

# 303 "<previous_module>"
typedef int int_least8_t;

# 304 "<previous_module>"
typedef int uint_least8_t;

# 305 "<previous_module>"
typedef int int_least16_t;

# 306 "<previous_module>"
typedef int uint_least16_t;

# 307 "<previous_module>"
typedef int int_least32_t;

# 308 "<previous_module>"
typedef int uint_least32_t;

# 309 "<previous_module>"
typedef int int_least64_t;

# 310 "<previous_module>"
typedef int uint_least64_t;

# 311 "<previous_module>"
typedef int int_fast8_t;

# 312 "<previous_module>"
typedef int uint_fast8_t;

# 313 "<previous_module>"
typedef int int_fast16_t;

# 314 "<previous_module>"
typedef int uint_fast16_t;

# 315 "<previous_module>"
typedef int int_fast32_t;

# 316 "<previous_module>"
typedef int uint_fast32_t;

# 317 "<previous_module>"
typedef int int_fast64_t;

# 318 "<previous_module>"
typedef int uint_fast64_t;

# 319 "<previous_module>"
typedef int intptr_t;

# 320 "<previous_module>"
typedef int uintptr_t;

# 321 "<previous_module>"
typedef int intmax_t;

# 322 "<previous_module>"
typedef int uintmax_t;

# 323 "<previous_module>"
typedef _Bool bool;

# 324 "<previous_module>"
typedef void BZFILE;

# 325 "<previous_module>"
typedef int va_list;

# 326 "<previous_module>"
typedef int loff_t;

# 327 "<previous_module>"
typedef int _____STOPSTRIPPINGFROMHERE_____;

# 328 "<previous_module>"
#pragma warning( push )

# 329 "<previous_module>"
#pragma warning( disable : 4324 )

# 330 "<previous_module>"
#pragma prefast( disable : 28113 28182 28183, "blah" )

# 331 "<previous_module>"
typedef int long long lfds711_pal_int_t;

# 332 "<previous_module>"
typedef int long long unsigned lfds711_pal_uint_t;

# 333 "<previous_module>"
struct lfds711_prng_state
{
        
# 335 "<previous_module>"
lfds711_pal_uint_t entropy;
};

# 337 "<previous_module>"
struct lfds711_prng_st_state
{
        
# 339 "<previous_module>"
lfds711_pal_uint_t entropy;
};

# 341 "<previous_module>"
void lfds711_prng_init_valid_on_current_logical_core(struct lfds711_prng_state *__cs_param__ps, lfds711_pal_uint_t __cs_param__seed);

# 342 "<previous_module>"
void lfds711_prng_st_init(struct lfds711_prng_st_state *__cs_param__psts, lfds711_pal_uint_t __cs_param__seed);

# 343 "<previous_module>"
enum lfds711_misc_cas_strength {LFDS711_MISC_CAS_STRENGTH_STRONG = 
# 344 "<previous_module>"
0, LFDS711_MISC_CAS_STRENGTH_WEAK = 
# 345 "<previous_module>"
1};

# 346 "<previous_module>"
enum lfds711_misc_validity {LFDS711_MISC_VALIDITY_UNKNOWN, LFDS711_MISC_VALIDITY_VALID, LFDS711_MISC_VALIDITY_INVALID_LOOP, LFDS711_MISC_VALIDITY_INVALID_MISSING_ELEMENTS, LFDS711_MISC_VALIDITY_INVALID_ADDITIONAL_ELEMENTS, LFDS711_MISC_VALIDITY_INVALID_TEST_DATA, LFDS711_MISC_VALIDITY_INVALID_ORDER, LFDS711_MISC_VALIDITY_INVALID_ATOMIC_FAILED, LFDS711_MISC_VALIDITY_INDETERMINATE_NONATOMIC_PASSED};

# 347 "<previous_module>"
enum lfds711_misc_flag {LFDS711_MISC_FLAG_LOWERED, LFDS711_MISC_FLAG_RAISED};

# 348 "<previous_module>"
enum lfds711_misc_query {LFDS711_MISC_QUERY_GET_BUILD_AND_VERSION_STRING};

# 349 "<previous_module>"
enum lfds711_misc_data_structure {LFDS711_MISC_DATA_STRUCTURE_BTREE_AU, LFDS711_MISC_DATA_STRUCTURE_FREELIST, LFDS711_MISC_DATA_STRUCTURE_HASH_A, LFDS711_MISC_DATA_STRUCTURE_LIST_AOS, LFDS711_MISC_DATA_STRUCTURE_LIST_ASU, LFDS711_MISC_DATA_STRUCTURE_QUEUE_BMM, LFDS711_MISC_DATA_STRUCTURE_QUEUE_BSS, LFDS711_MISC_DATA_STRUCTURE_QUEUE_UMM, LFDS711_MISC_DATA_STRUCTURE_RINGBUFFER, LFDS711_MISC_DATA_STRUCTURE_STACK, LFDS711_MISC_DATA_STRUCTURE_COUNT};

# 350 "<previous_module>"
struct lfds711_misc_backoff_state
{
        
# 352 "<previous_module>"
lfds711_pal_uint_t lock;
        
# 353 "<previous_module>"
lfds711_pal_uint_t backoff_iteration_frequency_counters[2];
        
# 354 "<previous_module>"
lfds711_pal_uint_t metric;
        
# 355 "<previous_module>"
lfds711_pal_uint_t total_operations;
};

# 357 "<previous_module>"
struct lfds711_misc_globals
{
        
# 359 "<previous_module>"
struct lfds711_prng_state ps;
};

# 361 "<previous_module>"
struct lfds711_misc_validation_info
{
        
# 363 "<previous_module>"
lfds711_pal_uint_t min_elements;
        
# 364 "<previous_module>"
lfds711_pal_uint_t max_elements;
};

# 366 "<previous_module>"
struct lfds711_misc_globals lfds711_misc_globals;

# 367 "<previous_module>"
static void lfds711_misc_force_store(void);

# 368 "<previous_module>"
void lfds711_misc_query(enum lfds711_misc_query __cs_param__query_type, void *__cs_param__query_input, void *__cs_param__query_output);

# 369 "<previous_module>"
#pragma prefast( disable : 28112, "blah" )

# 370 "<previous_module>"
enum lfds711_btree_au_absolute_position {LFDS711_BTREE_AU_ABSOLUTE_POSITION_ROOT, LFDS711_BTREE_AU_ABSOLUTE_POSITION_SMALLEST_IN_TREE, LFDS711_BTREE_AU_ABSOLUTE_POSITION_LARGEST_IN_TREE};

# 371 "<previous_module>"
enum lfds711_btree_au_existing_key {LFDS711_BTREE_AU_EXISTING_KEY_OVERWRITE, LFDS711_BTREE_AU_EXISTING_KEY_FAIL};

# 372 "<previous_module>"
enum lfds711_btree_au_insert_result {LFDS711_BTREE_AU_INSERT_RESULT_FAILURE_EXISTING_KEY, LFDS711_BTREE_AU_INSERT_RESULT_SUCCESS_OVERWRITE, LFDS711_BTREE_AU_INSERT_RESULT_SUCCESS};

# 373 "<previous_module>"
enum lfds711_btree_au_query {LFDS711_BTREE_AU_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_BTREE_AU_QUERY_SINGLETHREADED_VALIDATE};

# 374 "<previous_module>"
enum lfds711_btree_au_relative_position {LFDS711_BTREE_AU_RELATIVE_POSITION_UP, LFDS711_BTREE_AU_RELATIVE_POSITION_LEFT, LFDS711_BTREE_AU_RELATIVE_POSITION_RIGHT, LFDS711_BTREE_AU_RELATIVE_POSITION_SMALLEST_ELEMENT_BELOW_CURRENT_ELEMENT, LFDS711_BTREE_AU_RELATIVE_POSITION_LARGEST_ELEMENT_BELOW_CURRENT_ELEMENT, LFDS711_BTREE_AU_RELATIVE_POSITION_NEXT_SMALLER_ELEMENT_IN_ENTIRE_TREE, LFDS711_BTREE_AU_RELATIVE_POSITION_NEXT_LARGER_ELEMENT_IN_ENTIRE_TREE};

# 375 "<previous_module>"
struct lfds711_btree_au_element
{
        
# 377 "<previous_module>"
struct lfds711_btree_au_element * volatile left;
        
# 378 "<previous_module>"
struct lfds711_btree_au_element * volatile right;
        
# 379 "<previous_module>"
struct lfds711_btree_au_element * volatile up;
        
# 380 "<previous_module>"
void * volatile value;
        
# 381 "<previous_module>"
void *key;
};

# 383 "<previous_module>"
struct lfds711_btree_au_state
{
        
# 385 "<previous_module>"
struct lfds711_btree_au_element * volatile root;
        
# 386 "<previous_module>"
int (*key_compare_function)(const void *__cs_param__new_key, const void *__cs_param__existing_key);
        
# 387 "<previous_module>"
enum lfds711_btree_au_existing_key existing_key;
        
# 388 "<previous_module>"
void *user_state;
        
# 389 "<previous_module>"
struct lfds711_misc_backoff_state insert_backoff;
};

# 391 "<previous_module>"
void lfds711_btree_au_init_valid_on_current_logical_core(struct lfds711_btree_au_state *__cs_param__baus, 
# 392 "<previous_module>"
int (*__cs_param__key_compare_function)(const void *new_key, const void *existing_key), 
# 393 "<previous_module>"
enum lfds711_btree_au_existing_key __cs_param__existing_key, 
# 394 "<previous_module>"
void *__cs_param__user_state);

# 395 "<previous_module>"
void lfds711_btree_au_cleanup(struct lfds711_btree_au_state *__cs_param__baus, 
# 396 "<previous_module>"
void (*__cs_param__element_cleanup_callback)(struct lfds711_btree_au_state *baus, struct lfds711_btree_au_element *baue));

# 397 "<previous_module>"
enum lfds711_btree_au_insert_result lfds711_btree_au_insert(struct lfds711_btree_au_state *__cs_param__baus, 
# 398 "<previous_module>"
struct lfds711_btree_au_element *__cs_param__baue, 
# 399 "<previous_module>"
struct lfds711_btree_au_element **__cs_param__existing_baue);

# 400 "<previous_module>"
int lfds711_btree_au_get_by_key(struct lfds711_btree_au_state *__cs_param__baus, 
# 401 "<previous_module>"
int (*__cs_param__key_compare_function)(const void *new_key, const void *existing_key), 
# 402 "<previous_module>"
void *__cs_param__key, 
# 403 "<previous_module>"
struct lfds711_btree_au_element **__cs_param__baue);

# 404 "<previous_module>"
int lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position(struct lfds711_btree_au_state *__cs_param__baus, 
# 405 "<previous_module>"
struct lfds711_btree_au_element **__cs_param__baue, 
# 406 "<previous_module>"
enum lfds711_btree_au_absolute_position __cs_param__absolute_position, 
# 407 "<previous_module>"
enum lfds711_btree_au_relative_position __cs_param__relative_position);

# 408 "<previous_module>"
int lfds711_btree_au_get_by_absolute_position(struct lfds711_btree_au_state *__cs_param__baus, 
# 409 "<previous_module>"
struct lfds711_btree_au_element **__cs_param__baue, 
# 410 "<previous_module>"
enum lfds711_btree_au_absolute_position __cs_param__absolute_position);

# 411 "<previous_module>"
int lfds711_btree_au_get_by_relative_position(struct lfds711_btree_au_element **__cs_param__baue, 
# 412 "<previous_module>"
enum lfds711_btree_au_relative_position __cs_param__relative_position);

# 413 "<previous_module>"
void lfds711_btree_au_query(struct lfds711_btree_au_state *__cs_param__baus, 
# 414 "<previous_module>"
enum lfds711_btree_au_query __cs_param__query_type, 
# 415 "<previous_module>"
void *__cs_param__query_input, 
# 416 "<previous_module>"
void *__cs_param__query_output);

# 417 "<previous_module>"
enum lfds711_freelist_query {LFDS711_FREELIST_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_FREELIST_QUERY_SINGLETHREADED_VALIDATE, LFDS711_FREELIST_QUERY_GET_ELIMINATION_ARRAY_EXTRA_ELEMENTS_IN_FREELIST_ELEMENTS};

# 418 "<previous_module>"
struct lfds711_freelist_element
{
        
# 420 "<previous_module>"
struct lfds711_freelist_element *next;
        
# 421 "<previous_module>"
void *key;
        
# 422 "<previous_module>"
void *value;
};

# 424 "<previous_module>"
struct lfds711_freelist_state
{
        
# 426 "<previous_module>"
struct lfds711_freelist_element * volatile top[2];
        
# 427 "<previous_module>"
lfds711_pal_uint_t elimination_array_size_in_elements;
        
# 428 "<previous_module>"
struct lfds711_freelist_element * volatile (*elimination_array)[128 / (sizeof(struct lfds711_freelist_element *))];
        
# 429 "<previous_module>"
void *user_state;
        
# 430 "<previous_module>"
struct lfds711_misc_backoff_state pop_backoff;
        
# 431 "<previous_module>"
struct lfds711_misc_backoff_state push_backoff;
};

# 433 "<previous_module>"
void lfds711_freelist_init_valid_on_current_logical_core(struct lfds711_freelist_state *__cs_param__fs, 
# 434 "<previous_module>"
struct lfds711_freelist_element * volatile (*__cs_param__elimination_array)[128 / (sizeof(struct lfds711_freelist_element *))], 
# 435 "<previous_module>"
lfds711_pal_uint_t __cs_param__elimination_array_size_in_elements, 
# 436 "<previous_module>"
void *__cs_param__user_state);

# 437 "<previous_module>"
void lfds711_freelist_cleanup(struct lfds711_freelist_state *__cs_param__fs, 
# 438 "<previous_module>"
void (*__cs_param__element_cleanup_callback)(struct lfds711_freelist_state *fs, struct lfds711_freelist_element *fe));

# 439 "<previous_module>"
void lfds711_freelist_push(struct lfds711_freelist_state *__cs_param__fs, 
# 440 "<previous_module>"
struct lfds711_freelist_element *__cs_param__fe, 
# 441 "<previous_module>"
struct lfds711_prng_st_state *__cs_param__psts);

# 442 "<previous_module>"
int lfds711_freelist_pop(struct lfds711_freelist_state *__cs_param__fs, 
# 443 "<previous_module>"
struct lfds711_freelist_element **__cs_param__fe, 
# 444 "<previous_module>"
struct lfds711_prng_st_state *__cs_param__psts);

# 445 "<previous_module>"
void lfds711_freelist_query(struct lfds711_freelist_state *__cs_param__fs, 
# 446 "<previous_module>"
enum lfds711_freelist_query __cs_param__query_type, 
# 447 "<previous_module>"
void *__cs_param__query_input, 
# 448 "<previous_module>"
void *__cs_param__query_output);

# 449 "<previous_module>"
enum lfds711_hash_a_existing_key {LFDS711_HASH_A_EXISTING_KEY_OVERWRITE, LFDS711_HASH_A_EXISTING_KEY_FAIL};

# 450 "<previous_module>"
enum lfds711_hash_a_insert_result {LFDS711_HASH_A_PUT_RESULT_FAILURE_EXISTING_KEY, LFDS711_HASH_A_PUT_RESULT_SUCCESS_OVERWRITE, LFDS711_HASH_A_PUT_RESULT_SUCCESS};

# 451 "<previous_module>"
enum lfds711_hash_a_query {LFDS711_HASH_A_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_HASH_A_QUERY_SINGLETHREADED_VALIDATE};

# 452 "<previous_module>"
struct lfds711_hash_a_element
{
        
# 454 "<previous_module>"
struct lfds711_btree_au_element baue;
        
# 455 "<previous_module>"
void *key;
        
# 456 "<previous_module>"
void * volatile value;
};

# 458 "<previous_module>"
struct lfds711_hash_a_iterate
{
        
# 460 "<previous_module>"
struct lfds711_btree_au_element *baue;
        
# 461 "<previous_module>"
struct lfds711_btree_au_state *baus;
        
# 462 "<previous_module>"
struct lfds711_btree_au_state *baus_end;
};

# 464 "<previous_module>"
struct lfds711_hash_a_state
{
        
# 466 "<previous_module>"
enum lfds711_hash_a_existing_key existing_key;
        
# 467 "<previous_module>"
int (*key_compare_function)(const void *__cs_param__new_key, const void *__cs_param__existing_key);
        
# 468 "<previous_module>"
lfds711_pal_uint_t array_size;
        
# 469 "<previous_module>"
struct lfds711_btree_au_state *baus_array;
        
# 470 "<previous_module>"
void (*element_cleanup_callback)(struct lfds711_hash_a_state *__cs_param__has, struct lfds711_hash_a_element *__cs_param__hae);
        
# 471 "<previous_module>"
void (*key_hash_function)(const void *__cs_param__key, lfds711_pal_uint_t *__cs_param__hash);
        
# 472 "<previous_module>"
void *user_state;
};

# 474 "<previous_module>"
void lfds711_hash_a_init_valid_on_current_logical_core(struct lfds711_hash_a_state *__cs_param__has, 
# 475 "<previous_module>"
struct lfds711_btree_au_state *__cs_param__baus_array, 
# 476 "<previous_module>"
lfds711_pal_uint_t __cs_param__array_size, 
# 477 "<previous_module>"
int (*__cs_param__key_compare_function)(const void *new_key, const void *existing_key), 
# 478 "<previous_module>"
void (*__cs_param__key_hash_function)(const void *key, lfds711_pal_uint_t *hash), 
# 479 "<previous_module>"
enum lfds711_hash_a_existing_key __cs_param__existing_key, 
# 480 "<previous_module>"
void *__cs_param__user_state);

# 481 "<previous_module>"
void lfds711_hash_a_cleanup(struct lfds711_hash_a_state *__cs_param__has, 
# 482 "<previous_module>"
void (*__cs_param__element_cleanup_function)(struct lfds711_hash_a_state *has, struct lfds711_hash_a_element *hae));

# 483 "<previous_module>"
enum lfds711_hash_a_insert_result lfds711_hash_a_insert(struct lfds711_hash_a_state *__cs_param__has, 
# 484 "<previous_module>"
struct lfds711_hash_a_element *__cs_param__hae, 
# 485 "<previous_module>"
struct lfds711_hash_a_element **__cs_param__existing_hae);

# 486 "<previous_module>"
int lfds711_hash_a_get_by_key(struct lfds711_hash_a_state *__cs_param__has, 
# 487 "<previous_module>"
int (*__cs_param__key_compare_function)(const void *new_key, const void *existing_key), 
# 488 "<previous_module>"
void (*__cs_param__key_hash_function)(const void *key, lfds711_pal_uint_t *hash), 
# 489 "<previous_module>"
void *__cs_param__key, 
# 490 "<previous_module>"
struct lfds711_hash_a_element **__cs_param__hae);

# 491 "<previous_module>"
void lfds711_hash_a_iterate_init(struct lfds711_hash_a_state *__cs_param__has, struct lfds711_hash_a_iterate *__cs_param__hai);

# 492 "<previous_module>"
int lfds711_hash_a_iterate(struct lfds711_hash_a_iterate *__cs_param__hai, struct lfds711_hash_a_element **__cs_param__hae);

# 493 "<previous_module>"
void lfds711_hash_a_query(struct lfds711_hash_a_state *__cs_param__has, 
# 494 "<previous_module>"
enum lfds711_hash_a_query __cs_param__query_type, 
# 495 "<previous_module>"
void *__cs_param__query_input, 
# 496 "<previous_module>"
void *__cs_param__query_output);

# 497 "<previous_module>"
enum lfds711_list_aso_existing_key {LFDS711_LIST_ASO_EXISTING_KEY_OVERWRITE, LFDS711_LIST_ASO_EXISTING_KEY_FAIL};

# 498 "<previous_module>"
enum lfds711_list_aso_insert_result {LFDS711_LIST_ASO_INSERT_RESULT_FAILURE_EXISTING_KEY, LFDS711_LIST_ASO_INSERT_RESULT_SUCCESS_OVERWRITE, LFDS711_LIST_ASO_INSERT_RESULT_SUCCESS};

# 499 "<previous_module>"
enum lfds711_list_aso_query {LFDS711_LIST_ASO_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_LIST_ASO_QUERY_SINGLETHREADED_VALIDATE};

# 500 "<previous_module>"
struct lfds711_list_aso_element
{
        
# 502 "<previous_module>"
struct lfds711_list_aso_element * volatile next;
        
# 503 "<previous_module>"
void * volatile value;
        
# 504 "<previous_module>"
void *key;
};

# 506 "<previous_module>"
struct lfds711_list_aso_state
{
        
# 508 "<previous_module>"
struct lfds711_list_aso_element dummy_element;
        
# 509 "<previous_module>"
struct lfds711_list_aso_element *start;
        
# 510 "<previous_module>"
int (*key_compare_function)(const void *__cs_param__new_key, const void *__cs_param__existing_key);
        
# 511 "<previous_module>"
enum lfds711_list_aso_existing_key existing_key;
        
# 512 "<previous_module>"
void *user_state;
        
# 513 "<previous_module>"
struct lfds711_misc_backoff_state insert_backoff;
};

# 515 "<previous_module>"
void lfds711_list_aso_init_valid_on_current_logical_core(struct lfds711_list_aso_state *__cs_param__lasos, 
# 516 "<previous_module>"
int (*__cs_param__key_compare_function)(const void *new_key, const void *existing_key), 
# 517 "<previous_module>"
enum lfds711_list_aso_existing_key __cs_param__existing_key, 
# 518 "<previous_module>"
void *__cs_param__user_state);

# 519 "<previous_module>"
void lfds711_list_aso_cleanup(struct lfds711_list_aso_state *__cs_param__lasos, 
# 520 "<previous_module>"
void (*__cs_param__element_cleanup_callback)(struct lfds711_list_aso_state *lasos, struct lfds711_list_aso_element *lasoe));

# 521 "<previous_module>"
enum lfds711_list_aso_insert_result lfds711_list_aso_insert(struct lfds711_list_aso_state *__cs_param__lasos, 
# 522 "<previous_module>"
struct lfds711_list_aso_element *__cs_param__lasoe, 
# 523 "<previous_module>"
struct lfds711_list_aso_element **__cs_param__existing_lasoe);

# 524 "<previous_module>"
int lfds711_list_aso_get_by_key(struct lfds711_list_aso_state *__cs_param__lasos, 
# 525 "<previous_module>"
void *__cs_param__key, 
# 526 "<previous_module>"
struct lfds711_list_aso_element **__cs_param__lasoe);

# 527 "<previous_module>"
void lfds711_list_aso_query(struct lfds711_list_aso_state *__cs_param__lasos, 
# 528 "<previous_module>"
enum lfds711_list_aso_query __cs_param__query_type, 
# 529 "<previous_module>"
void *__cs_param__query_input, 
# 530 "<previous_module>"
void *__cs_param__query_output);

# 531 "<previous_module>"
enum lfds711_list_asu_position {LFDS711_LIST_ASU_POSITION_START, LFDS711_LIST_ASU_POSITION_END, LFDS711_LIST_ASU_POSITION_AFTER};

# 532 "<previous_module>"
enum lfds711_list_asu_query {LFDS711_LIST_ASU_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_LIST_ASU_QUERY_SINGLETHREADED_VALIDATE};

# 533 "<previous_module>"
struct lfds711_list_asu_element
{
        
# 535 "<previous_module>"
struct lfds711_list_asu_element * volatile next;
        
# 536 "<previous_module>"
void * volatile value;
        
# 537 "<previous_module>"
void *key;
};

# 539 "<previous_module>"
struct lfds711_list_asu_state
{
        
# 541 "<previous_module>"
struct lfds711_list_asu_element dummy_element;
        
# 542 "<previous_module>"
struct lfds711_list_asu_element * volatile end;
        
# 543 "<previous_module>"
struct lfds711_list_asu_element *start;
        
# 544 "<previous_module>"
void *user_state;
        
# 545 "<previous_module>"
struct lfds711_misc_backoff_state after_backoff;
        
# 546 "<previous_module>"
struct lfds711_misc_backoff_state end_backoff;
        
# 547 "<previous_module>"
struct lfds711_misc_backoff_state start_backoff;
};

# 549 "<previous_module>"
void lfds711_list_asu_init_valid_on_current_logical_core(struct lfds711_list_asu_state *__cs_param__lasus, 
# 550 "<previous_module>"
void *__cs_param__user_state);

# 551 "<previous_module>"
void lfds711_list_asu_cleanup(struct lfds711_list_asu_state *__cs_param__lasus, 
# 552 "<previous_module>"
void (*__cs_param__element_cleanup_callback)(struct lfds711_list_asu_state *lasus, struct lfds711_list_asu_element *lasue));

# 553 "<previous_module>"
void lfds711_list_asu_insert_at_position(struct lfds711_list_asu_state *__cs_param__lasus, 
# 554 "<previous_module>"
struct lfds711_list_asu_element *__cs_param__lasue, 
# 555 "<previous_module>"
struct lfds711_list_asu_element *__cs_param__lasue_predecessor, 
# 556 "<previous_module>"
enum lfds711_list_asu_position __cs_param__position);

# 557 "<previous_module>"
void lfds711_list_asu_insert_at_start(struct lfds711_list_asu_state *__cs_param__lasus, 
# 558 "<previous_module>"
struct lfds711_list_asu_element *__cs_param__lasue);

# 559 "<previous_module>"
void lfds711_list_asu_insert_at_end(struct lfds711_list_asu_state *__cs_param__lasus, 
# 560 "<previous_module>"
struct lfds711_list_asu_element *__cs_param__lasue);

# 561 "<previous_module>"
void lfds711_list_asu_insert_after_element(struct lfds711_list_asu_state *__cs_param__lasus, 
# 562 "<previous_module>"
struct lfds711_list_asu_element *__cs_param__lasue, 
# 563 "<previous_module>"
struct lfds711_list_asu_element *__cs_param__lasue_predecessor);

# 564 "<previous_module>"
int lfds711_list_asu_get_by_key(struct lfds711_list_asu_state *__cs_param__lasus, 
# 565 "<previous_module>"
int (*__cs_param__key_compare_function)(const void *new_key, const void *existing_key), 
# 566 "<previous_module>"
void *__cs_param__key, 
# 567 "<previous_module>"
struct lfds711_list_asu_element **__cs_param__lasue);

# 568 "<previous_module>"
void lfds711_list_asu_query(struct lfds711_list_asu_state *__cs_param__lasus, 
# 569 "<previous_module>"
enum lfds711_list_asu_query __cs_param__query_type, 
# 570 "<previous_module>"
void *__cs_param__query_input, 
# 571 "<previous_module>"
void *__cs_param__query_output);

# 572 "<previous_module>"
enum lfds711_queue_bmm_query {LFDS711_QUEUE_BMM_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_QUEUE_BMM_QUERY_SINGLETHREADED_VALIDATE};

# 573 "<previous_module>"
struct lfds711_queue_bmm_element
{
        
# 575 "<previous_module>"
lfds711_pal_uint_t sequence_number;
        
# 576 "<previous_module>"
void * volatile key;
        
# 577 "<previous_module>"
void * volatile value;
};

# 579 "<previous_module>"
struct lfds711_queue_bmm_state
{
        
# 581 "<previous_module>"
lfds711_pal_uint_t number_elements;
        
# 582 "<previous_module>"
lfds711_pal_uint_t mask;
        
# 583 "<previous_module>"
lfds711_pal_uint_t read_index;
        
# 584 "<previous_module>"
lfds711_pal_uint_t write_index;
        
# 585 "<previous_module>"
struct lfds711_queue_bmm_element *element_array;
        
# 586 "<previous_module>"
void *user_state;
        
# 587 "<previous_module>"
struct lfds711_misc_backoff_state dequeue_backoff;
        
# 588 "<previous_module>"
struct lfds711_misc_backoff_state enqueue_backoff;
};

# 590 "<previous_module>"
void lfds711_queue_bmm_init_valid_on_current_logical_core(struct lfds711_queue_bmm_state *__cs_param__qbmms, 
# 591 "<previous_module>"
struct lfds711_queue_bmm_element *__cs_param__element_array, 
# 592 "<previous_module>"
lfds711_pal_uint_t __cs_param__number_elements, 
# 593 "<previous_module>"
void *__cs_param__user_state);

# 594 "<previous_module>"
void lfds711_queue_bmm_cleanup(struct lfds711_queue_bmm_state *__cs_param__qbmms, 
# 595 "<previous_module>"
void (*__cs_param__element_cleanup_callback)(struct lfds711_queue_bmm_state *qbmms, 
# 596 "<previous_module>"
void *key, 
# 597 "<previous_module>"
void *value));

# 598 "<previous_module>"
int lfds711_queue_bmm_enqueue(struct lfds711_queue_bmm_state *__cs_param__qbmms, 
# 599 "<previous_module>"
void *__cs_param__key, 
# 600 "<previous_module>"
void *__cs_param__value);

# 601 "<previous_module>"
int lfds711_queue_bmm_dequeue(struct lfds711_queue_bmm_state *__cs_param__qbmms, 
# 602 "<previous_module>"
void **__cs_param__key, 
# 603 "<previous_module>"
void **__cs_param__value);

# 604 "<previous_module>"
void lfds711_queue_bmm_query(struct lfds711_queue_bmm_state *__cs_param__qbmms, 
# 605 "<previous_module>"
enum lfds711_queue_bmm_query __cs_param__query_type, 
# 606 "<previous_module>"
void *__cs_param__query_input, 
# 607 "<previous_module>"
void *__cs_param__query_output);

# 608 "<previous_module>"
enum lfds711_queue_bss_query {LFDS711_QUEUE_BSS_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_QUEUE_BSS_QUERY_VALIDATE};

# 609 "<previous_module>"
struct lfds711_queue_bss_element
{
        
# 611 "<previous_module>"
void * volatile key;
        
# 612 "<previous_module>"
void * volatile value;
};

# 614 "<previous_module>"
struct lfds711_queue_bss_state
{
        
# 616 "<previous_module>"
lfds711_pal_uint_t number_elements;
        
# 617 "<previous_module>"
lfds711_pal_uint_t mask;
        
# 618 "<previous_module>"
lfds711_pal_uint_t read_index;
        
# 619 "<previous_module>"
lfds711_pal_uint_t write_index;
        
# 620 "<previous_module>"
struct lfds711_queue_bss_element *element_array;
        
# 621 "<previous_module>"
void *user_state;
};

# 623 "<previous_module>"
void lfds711_queue_bss_init_valid_on_current_logical_core(struct lfds711_queue_bss_state *__cs_param__qbsss, 
# 624 "<previous_module>"
struct lfds711_queue_bss_element *__cs_param__element_array, 
# 625 "<previous_module>"
lfds711_pal_uint_t __cs_param__number_elements, 
# 626 "<previous_module>"
void *__cs_param__user_state);

# 627 "<previous_module>"
void lfds711_queue_bss_cleanup(struct lfds711_queue_bss_state *__cs_param__qbsss, 
# 628 "<previous_module>"
void (*__cs_param__element_cleanup_callback)(struct lfds711_queue_bss_state *qbsss, void *key, void *value));

# 629 "<previous_module>"
int lfds711_queue_bss_enqueue(struct lfds711_queue_bss_state *__cs_param__qbsss, 
# 630 "<previous_module>"
void *__cs_param__key, 
# 631 "<previous_module>"
void *__cs_param__value);

# 632 "<previous_module>"
int lfds711_queue_bss_dequeue(struct lfds711_queue_bss_state *__cs_param__qbsss, 
# 633 "<previous_module>"
void **__cs_param__key, 
# 634 "<previous_module>"
void **__cs_param__value);

# 635 "<previous_module>"
void lfds711_queue_bss_query(struct lfds711_queue_bss_state *__cs_param__qbsss, 
# 636 "<previous_module>"
enum lfds711_queue_bss_query __cs_param__query_type, 
# 637 "<previous_module>"
void *__cs_param__query_input, 
# 638 "<previous_module>"
void *__cs_param__query_output);

# 639 "<previous_module>"
enum lfds711_queue_umm_query {LFDS711_QUEUE_UMM_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_QUEUE_UMM_QUERY_SINGLETHREADED_VALIDATE};

# 640 "<previous_module>"
struct lfds711_queue_umm_element
{
        
# 642 "<previous_module>"
struct lfds711_queue_umm_element * volatile next[2];
        
# 643 "<previous_module>"
void *key;
        
# 644 "<previous_module>"
void *value;
};

# 646 "<previous_module>"
struct lfds711_queue_umm_state
{
        
# 648 "<previous_module>"
struct lfds711_queue_umm_element * volatile enqueue[2];
        
# 649 "<previous_module>"
struct lfds711_queue_umm_element * volatile dequeue[2];
        
# 650 "<previous_module>"
lfds711_pal_uint_t aba_counter;
        
# 651 "<previous_module>"
void *user_state;
        
# 652 "<previous_module>"
struct lfds711_misc_backoff_state dequeue_backoff;
        
# 653 "<previous_module>"
struct lfds711_misc_backoff_state enqueue_backoff;
};

# 655 "<previous_module>"
void lfds711_queue_umm_init_valid_on_current_logical_core(struct lfds711_queue_umm_state *__cs_param__qumms, 
# 656 "<previous_module>"
struct lfds711_queue_umm_element *__cs_param__qumme_dummy, 
# 657 "<previous_module>"
void *__cs_param__user_state);

# 658 "<previous_module>"
void lfds711_queue_umm_cleanup(struct lfds711_queue_umm_state *__cs_param__qumms, 
# 659 "<previous_module>"
void (*__cs_param__element_cleanup_callback)(struct lfds711_queue_umm_state *qumms, struct lfds711_queue_umm_element *qumme, enum lfds711_misc_flag dummy_element_flag));

# 660 "<previous_module>"
void lfds711_queue_umm_enqueue(struct lfds711_queue_umm_state *__cs_param__qumms, 
# 661 "<previous_module>"
struct lfds711_queue_umm_element *__cs_param__qumme);

# 662 "<previous_module>"
int lfds711_queue_umm_dequeue(struct lfds711_queue_umm_state *__cs_param__qumms, 
# 663 "<previous_module>"
struct lfds711_queue_umm_element **__cs_param__qumme);

# 664 "<previous_module>"
void lfds711_queue_umm_query(struct lfds711_queue_umm_state *__cs_param__qumms, 
# 665 "<previous_module>"
enum lfds711_queue_umm_query __cs_param__query_type, 
# 666 "<previous_module>"
void *__cs_param__query_input, 
# 667 "<previous_module>"
void *__cs_param__query_output);

# 668 "<previous_module>"
enum lfds711_ringbuffer_query {LFDS711_RINGBUFFER_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_RINGBUFFER_QUERY_SINGLETHREADED_VALIDATE};

# 669 "<previous_module>"
struct lfds711_ringbuffer_element
{
        
# 671 "<previous_module>"
struct lfds711_freelist_element fe;
        
# 672 "<previous_module>"
struct lfds711_queue_umm_element qumme;
        
# 673 "<previous_module>"
struct lfds711_queue_umm_element *qumme_use;
        
# 674 "<previous_module>"
void *key;
        
# 675 "<previous_module>"
void *value;
};

# 677 "<previous_module>"
struct lfds711_ringbuffer_state
{
        
# 679 "<previous_module>"
struct lfds711_freelist_state fs;
        
# 680 "<previous_module>"
struct lfds711_queue_umm_state qumms;
        
# 681 "<previous_module>"
void (*element_cleanup_callback)(struct lfds711_ringbuffer_state *__cs_param__rs, void *__cs_param__key, void *__cs_param__value, enum lfds711_misc_flag __cs_param__unread_flag);
        
# 682 "<previous_module>"
void *user_state;
};

# 684 "<previous_module>"
void lfds711_ringbuffer_init_valid_on_current_logical_core(struct lfds711_ringbuffer_state *__cs_param__rs, 
# 685 "<previous_module>"
struct lfds711_ringbuffer_element *__cs_param__re_array_inc_dummy, 
# 686 "<previous_module>"
lfds711_pal_uint_t __cs_param__number_elements_inc_dummy, 
# 687 "<previous_module>"
void *__cs_param__user_state);

# 688 "<previous_module>"
void lfds711_ringbuffer_cleanup(struct lfds711_ringbuffer_state *__cs_param__rs, 
# 689 "<previous_module>"
void (*__cs_param__element_cleanup_callback)(struct lfds711_ringbuffer_state *rs, void *key, void *value, enum lfds711_misc_flag unread_flag));

# 690 "<previous_module>"
int lfds711_ringbuffer_read(struct lfds711_ringbuffer_state *__cs_param__rs, 
# 691 "<previous_module>"
void **__cs_param__key, 
# 692 "<previous_module>"
void **__cs_param__value);

# 693 "<previous_module>"
void lfds711_ringbuffer_write(struct lfds711_ringbuffer_state *__cs_param__rs, 
# 694 "<previous_module>"
void *__cs_param__key, 
# 695 "<previous_module>"
void *__cs_param__value, 
# 696 "<previous_module>"
enum lfds711_misc_flag *__cs_param__overwrite_occurred_flag, 
# 697 "<previous_module>"
void **__cs_param__overwritten_key, 
# 698 "<previous_module>"
void **__cs_param__overwritten_value);

# 699 "<previous_module>"
void lfds711_ringbuffer_query(struct lfds711_ringbuffer_state *__cs_param__rs, 
# 700 "<previous_module>"
enum lfds711_ringbuffer_query __cs_param__query_type, 
# 701 "<previous_module>"
void *__cs_param__query_input, 
# 702 "<previous_module>"
void *__cs_param__query_output);

# 703 "<previous_module>"
enum lfds711_stack_query {LFDS711_STACK_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_STACK_QUERY_SINGLETHREADED_VALIDATE};

# 704 "<previous_module>"
struct lfds711_stack_element
{
        
# 706 "<previous_module>"
struct lfds711_stack_element *next;
        
# 707 "<previous_module>"
void *key;
        
# 708 "<previous_module>"
void *value;
};

# 710 "<previous_module>"
struct lfds711_stack_state
{
        
# 712 "<previous_module>"
struct lfds711_stack_element * volatile top[2];
        
# 713 "<previous_module>"
void *user_state;
        
# 714 "<previous_module>"
struct lfds711_misc_backoff_state pop_backoff;
        
# 715 "<previous_module>"
struct lfds711_misc_backoff_state push_backoff;
};

# 717 "<previous_module>"
void lfds711_stack_init_valid_on_current_logical_core(struct lfds711_stack_state *__cs_param__ss, 
# 718 "<previous_module>"
void *__cs_param__user_state);

# 719 "<previous_module>"
void lfds711_stack_cleanup(struct lfds711_stack_state *__cs_param__ss, 
# 720 "<previous_module>"
void (*__cs_param__element_cleanup_callback)(struct lfds711_stack_state *ss, struct lfds711_stack_element *se));

# 721 "<previous_module>"
void lfds711_stack_push(struct lfds711_stack_state *__cs_param__ss, 
# 722 "<previous_module>"
struct lfds711_stack_element *__cs_param__se);

# 723 "<previous_module>"
int lfds711_stack_pop(struct lfds711_stack_state *__cs_param__ss, 
# 724 "<previous_module>"
struct lfds711_stack_element **__cs_param__se);

# 725 "<previous_module>"
void lfds711_stack_query(struct lfds711_stack_state *__cs_param__ss, 
# 726 "<previous_module>"
enum lfds711_stack_query __cs_param__query_type, 
# 727 "<previous_module>"
void *__cs_param__query_input, 
# 728 "<previous_module>"
void *__cs_param__query_output);

# 729 "<previous_module>"
#pragma warning( pop )

# 730 "<previous_module>"
void lfds711_misc_internal_backoff_init(struct lfds711_misc_backoff_state *__cs_param__bs);

# 731 "<previous_module>"
__cs_mutex_t lock;

# 732 "<previous_module>"
struct lfds711_stack_state ss;

# 733 "<previous_module>"
__cs_mutex_t lock;

# 734 "<previous_module>"
struct test_data
{
        
# 736 "<previous_module>"
struct lfds711_stack_element se;
        
# 737 "<previous_module>"
int long long unsigned user_id;
};

# 739 "<previous_module>"
void *push_0(void *__cs_param_push___cs_unused)

# 740 "<previous_module>"
{
        
# 741 "<previous_module>"
static struct test_data *__cs_local_push_td;
        
# 742 "<previous_module>"
static int long long unsigned __cs_local_push_loop;
        
# 743 "<previous_module>"
IF(1,0,tpush_0_1)__CSEQ_removeindent;
        
# 744 "<previous_module>"
__cs_local_push_td = __cs_safe_malloc((sizeof(struct test_data)) * 3);
        
# 745 "<previous_module>"
__cs_local_push_loop = 0;

# 746 "<previous_module>"
        {
                
# 747 "<previous_module>"
;
                ;
                
# 748 "<previous_module>"
tpush_0_1: IF(1,1,tpush_0_2)__CSEQ_removeindent;
                
# 749 "<previous_module>"
__cs_local_push_td[__cs_local_push_loop].user_id = __cs_local_push_loop;
                
# 750 "<previous_module>"
tpush_0_2: IF(1,2,tpush_0_3)__CSEQ_removeindent;
                
# 751 "<previous_module>"
__cs_local_push_td[__cs_local_push_loop].se.value = (void *) ((lfds711_pal_uint_t) (&__cs_local_push_td[__cs_local_push_loop]));

# 752 "<previous_module>"
                {
                        
# 753 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                        
# 754 "<previous_module>"
tpush_0_3: IF(1,3,tpush_0_4)__CSEQ_removeindent;
                        
# 755 "<previous_module>"
__cs_param_lfds711_stack_push_ss = &ss;
                        
# 756 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                        
# 757 "<previous_module>"
tpush_0_4: IF(1,4,tpush_0_5)__CSEQ_removeindent;
                        
# 758 "<previous_module>"
__cs_param_lfds711_stack_push_se = &__cs_local_push_td[__cs_local_push_loop].se;
                        
# 759 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                        
# 760 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                        
# 761 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                        
# 762 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                        
# 763 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                        
# 764 "<previous_module>"
;
                        ;
                        
# 765 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                        
# 766 "<previous_module>"
tpush_0_5: IF(1,5,tpush_0_6)__CSEQ_removeindent;
                        
# 767 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_ss != 0);
                        
# 768 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 769 "<previous_module>"
                        {
                                
# 770 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 771 "<previous_module>"
tpush_0_6: IF(1,6,tpush_0_7)__CSEQ_removeindent;
                                
# 772 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 773 "<previous_module>"
tpush_0_7: IF(1,7,tpush_0_8)__CSEQ_removeindent;
                                
# 774 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 776 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 8);
                        ;
                        
# 777 "<previous_module>"
;
                        ;
                        
# 778 "<previous_module>"
;
                        ;
                        
# 779 "<previous_module>"
;
                        ;
                        
# 780 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                        
# 781 "<previous_module>"
tpush_0_8: IF(1,8,tpush_0_9)__CSEQ_removeindent;
                        
# 782 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = !(__cs_param_lfds711_stack_push_se != 0);
                        
# 783 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 784 "<previous_module>"
                        {
                                
# 785 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 786 "<previous_module>"
tpush_0_9: IF(1,9,tpush_0_10)__CSEQ_removeindent;
                                
# 787 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 788 "<previous_module>"
tpush_0_10: IF(1,10,tpush_0_11)__CSEQ_removeindent;
                                
# 789 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 791 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 11);
                        ;
                        
# 792 "<previous_module>"
;
                        ;
                        
# 793 "<previous_module>"
;
                        ;
                        
# 794 "<previous_module>"
tpush_0_11: IF(1,11,tpush_0_12)__CSEQ_removeindent;
                        
# 795 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                        
# 796 "<previous_module>"
tpush_0_12: IF(1,12,tpush_0_13)__CSEQ_removeindent;
                        
# 797 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                        
# 798 "<previous_module>"
tpush_0_13: IF(1,13,tpush_0_14)__CSEQ_removeindent;
                        
# 799 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                        
# 800 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                        
# 801 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                        
# 802 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                        
# 803 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 804 "<previous_module>"
                        {
                                
# 805 "<previous_module>"
goto __exit_loop_2;
                                ;
                        }

                        
# 807 "<previous_module>"
;

# 808 "<previous_module>"
                        {
                                
# 809 "<previous_module>"
tpush_0_14: IF(1,14,tpush_0_15)__CSEQ_removeindent;
                                
# 810 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 811 "<previous_module>"
tpush_0_15: IF(1,15,tpush_0_16)__CSEQ_removeindent;
                                
# 812 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 813 "<previous_module>"
tpush_0_16: IF(1,16,tpush_0_17)__CSEQ_removeindent;
                                
# 814 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 815 "<previous_module>"
tpush_0_17: IF(1,17,tpush_0_18)__CSEQ_removeindent;
                                
# 816 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 817 "<previous_module>"
tpush_0_18: IF(1,18,tpush_0_19)__CSEQ_removeindent;
                                
# 818 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 819 "<previous_module>"
static int __cs_retval__swap_stack_top_1;

# 820 "<previous_module>"
                                {
                                        
# 821 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 822 "<previous_module>"
tpush_0_19: IF(1,19,tpush_0_20)__CSEQ_removeindent;
                                        
# 823 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                                        
# 824 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 825 "<previous_module>"
tpush_0_20: IF(1,20,tpush_0_21)__CSEQ_removeindent;
                                        
# 826 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                                        
# 827 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 828 "<previous_module>"
tpush_0_21: IF(1,21,tpush_0_22)__CSEQ_removeindent;
                                        
# 829 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                                        
# 830 "<previous_module>"
;
                                        ;
                                        
# 831 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 832 "<previous_module>"
tpush_0_22: IF(1,22,tpush_0_23)__CSEQ_removeindent;
                                        
# 833 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 834 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 835 "<previous_module>"
                                        {
                                                
# 836 "<previous_module>"
tpush_0_23: IF(1,23,tpush_0_24)__CSEQ_removeindent;
                                                
# 837 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 838 "<previous_module>"
__cs_retval__swap_stack_top_1 = 1;
                                                
# 839 "<previous_module>"
goto __exit__swap_stack_top_1_0;
                                                ;
                                        }
                                        else

# 842 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[1] >= 24);
                                                
# 843 "<previous_module>"
tpush_0_24: IF(1,24,tpush_0_25)__CSEQ_removeindent;
                                                
# 844 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 845 "<previous_module>"
__cs_retval__swap_stack_top_1 = 0;
                                                
# 846 "<previous_module>"
goto __exit__swap_stack_top_1_0;
                                                ;
                                        }

                                        
# 848 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 25);
                                        ;
                                        
# 849 "<previous_module>"
__exit__swap_stack_top_1_0:
                                        __CPROVER_assume(__cs_pc_cs[1] >= 25);

                                        
# 850 "<previous_module>"
;
                                        ;
                                }
                                
# 852 "<previous_module>"
;
                                
# 853 "<previous_module>"
__cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                                
# 854 "<previous_module>"
tpush_0_25: IF(1,25,tpush_0_26)__CSEQ_removeindent;
                                
# 855 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 856 "<previous_module>"
;
                                ;
                                
# 857 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 858 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                                
# 859 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 860 "<previous_module>"
                                {

# 861 "<previous_module>"
                                        {
                                                
# 862 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 863 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 864 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 865 "<previous_module>"
                                                {
                                                        
# 866 "<previous_module>"
goto __exit_loop_3;
                                                        ;
                                                }

                                                
# 868 "<previous_module>"
;

# 869 "<previous_module>"
                                                {
                                                        
# 870 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 872 "<previous_module>"
;
                                                
# 873 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 874 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 875 "<previous_module>"
                                                {
                                                        
# 876 "<previous_module>"
goto __exit_loop_3;
                                                        ;
                                                }

                                                
# 878 "<previous_module>"
;

# 879 "<previous_module>"
                                                {
                                                        
# 880 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 882 "<previous_module>"
;
                                                
# 883 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 884 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 885 "<previous_module>"
                                                {
                                                        
# 886 "<previous_module>"
goto __exit_loop_3;
                                                        ;
                                                }

                                                
# 888 "<previous_module>"
;

# 889 "<previous_module>"
                                                {
                                                        
# 890 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 892 "<previous_module>"
;
                                                
# 893 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 894 "<previous_module>"
tpush_0_26: IF(1,26,tpush_0_27)__CSEQ_removeindent;
                                                
# 895 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 896 "<previous_module>"
__exit_loop_3:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 27);

                                                
# 897 "<previous_module>"
;
                                                ;
                                                
# 898 "<previous_module>"
__exit__exponential_backoff_1_0:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 27);

                                                
# 899 "<previous_module>"
;
                                                ;
                                        }
                                        
# 901 "<previous_module>"
;
                                }

                                
# 903 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 27);
                                ;
                                
# 904 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 905 "<previous_module>"
;
                                ;
                                
# 906 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                                
# 907 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                                
# 908 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)

# 909 "<previous_module>"
                                {
                                        
# 910 "<previous_module>"
goto __exit_loop_2;
                                        ;
                                }

                                
# 912 "<previous_module>"
;
                        }
                        
# 914 "<previous_module>"
;
                        
# 915 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 916 "<previous_module>"
                        {
                                
# 917 "<previous_module>"
goto __exit_loop_2;
                                ;
                        }

                        
# 919 "<previous_module>"
;

# 920 "<previous_module>"
                        {
                                
# 921 "<previous_module>"
tpush_0_27: IF(1,27,tpush_0_28)__CSEQ_removeindent;
                                
# 922 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 923 "<previous_module>"
tpush_0_28: IF(1,28,tpush_0_29)__CSEQ_removeindent;
                                
# 924 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 925 "<previous_module>"
tpush_0_29: IF(1,29,tpush_0_30)__CSEQ_removeindent;
                                
# 926 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 927 "<previous_module>"
tpush_0_30: IF(1,30,tpush_0_31)__CSEQ_removeindent;
                                
# 928 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 929 "<previous_module>"
tpush_0_31: IF(1,31,tpush_0_32)__CSEQ_removeindent;
                                
# 930 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 931 "<previous_module>"
static int __cs_retval__swap_stack_top_1;

# 932 "<previous_module>"
                                {
                                        
# 933 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 934 "<previous_module>"
tpush_0_32: IF(1,32,tpush_0_33)__CSEQ_removeindent;
                                        
# 935 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                                        
# 936 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 937 "<previous_module>"
tpush_0_33: IF(1,33,tpush_0_34)__CSEQ_removeindent;
                                        
# 938 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                                        
# 939 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 940 "<previous_module>"
tpush_0_34: IF(1,34,tpush_0_35)__CSEQ_removeindent;
                                        
# 941 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                                        
# 942 "<previous_module>"
;
                                        ;
                                        
# 943 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 944 "<previous_module>"
tpush_0_35: IF(1,35,tpush_0_36)__CSEQ_removeindent;
                                        
# 945 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 946 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 947 "<previous_module>"
                                        {
                                                
# 948 "<previous_module>"
tpush_0_36: IF(1,36,tpush_0_37)__CSEQ_removeindent;
                                                
# 949 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 950 "<previous_module>"
__cs_retval__swap_stack_top_1 = 1;
                                                
# 951 "<previous_module>"
goto __exit__swap_stack_top_1_1;
                                                ;
                                        }
                                        else

# 954 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[1] >= 37);
                                                
# 955 "<previous_module>"
tpush_0_37: IF(1,37,tpush_0_38)__CSEQ_removeindent;
                                                
# 956 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 957 "<previous_module>"
__cs_retval__swap_stack_top_1 = 0;
                                                
# 958 "<previous_module>"
goto __exit__swap_stack_top_1_1;
                                                ;
                                        }

                                        
# 960 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 38);
                                        ;
                                        
# 961 "<previous_module>"
__exit__swap_stack_top_1_1:
                                        __CPROVER_assume(__cs_pc_cs[1] >= 38);

                                        
# 962 "<previous_module>"
;
                                        ;
                                }
                                
# 964 "<previous_module>"
;
                                
# 965 "<previous_module>"
__cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                                
# 966 "<previous_module>"
tpush_0_38: IF(1,38,tpush_0_39)__CSEQ_removeindent;
                                
# 967 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 968 "<previous_module>"
;
                                ;
                                
# 969 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 970 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                                
# 971 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 972 "<previous_module>"
                                {

# 973 "<previous_module>"
                                        {
                                                
# 974 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 975 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 976 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 977 "<previous_module>"
                                                {
                                                        
# 978 "<previous_module>"
goto __exit_loop_4;
                                                        ;
                                                }

                                                
# 980 "<previous_module>"
;

# 981 "<previous_module>"
                                                {
                                                        
# 982 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 984 "<previous_module>"
;
                                                
# 985 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 986 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 987 "<previous_module>"
                                                {
                                                        
# 988 "<previous_module>"
goto __exit_loop_4;
                                                        ;
                                                }

                                                
# 990 "<previous_module>"
;

# 991 "<previous_module>"
                                                {
                                                        
# 992 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 994 "<previous_module>"
;
                                                
# 995 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 996 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 997 "<previous_module>"
                                                {
                                                        
# 998 "<previous_module>"
goto __exit_loop_4;
                                                        ;
                                                }

                                                
# 1000 "<previous_module>"
;

# 1001 "<previous_module>"
                                                {
                                                        
# 1002 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1004 "<previous_module>"
;
                                                
# 1005 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1006 "<previous_module>"
tpush_0_39: IF(1,39,tpush_0_40)__CSEQ_removeindent;
                                                
# 1007 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 1008 "<previous_module>"
__exit_loop_4:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 40);

                                                
# 1009 "<previous_module>"
;
                                                ;
                                                
# 1010 "<previous_module>"
__exit__exponential_backoff_1_1:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 40);

                                                
# 1011 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1013 "<previous_module>"
;
                                }

                                
# 1015 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 40);
                                ;
                                
# 1016 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1017 "<previous_module>"
;
                                ;
                                
# 1018 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                                
# 1019 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                                
# 1020 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)

# 1021 "<previous_module>"
                                {
                                        
# 1022 "<previous_module>"
goto __exit_loop_2;
                                        ;
                                }

                                
# 1024 "<previous_module>"
;
                        }
                        
# 1026 "<previous_module>"
;
                        
# 1027 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1028 "<previous_module>"
                        {
                                
# 1029 "<previous_module>"
goto __exit_loop_2;
                                ;
                        }

                        
# 1031 "<previous_module>"
;

# 1032 "<previous_module>"
                        {
                                
# 1033 "<previous_module>"
tpush_0_40: IF(1,40,tpush_0_41)__CSEQ_removeindent;
                                
# 1034 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1035 "<previous_module>"
tpush_0_41: IF(1,41,tpush_0_42)__CSEQ_removeindent;
                                
# 1036 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1037 "<previous_module>"
tpush_0_42: IF(1,42,tpush_0_43)__CSEQ_removeindent;
                                
# 1038 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1039 "<previous_module>"
tpush_0_43: IF(1,43,tpush_0_44)__CSEQ_removeindent;
                                
# 1040 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1041 "<previous_module>"
tpush_0_44: IF(1,44,tpush_0_45)__CSEQ_removeindent;
                                
# 1042 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1043 "<previous_module>"
static int __cs_retval__swap_stack_top_1;

# 1044 "<previous_module>"
                                {
                                        
# 1045 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 1046 "<previous_module>"
tpush_0_45: IF(1,45,tpush_0_46)__CSEQ_removeindent;
                                        
# 1047 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                                        
# 1048 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 1049 "<previous_module>"
tpush_0_46: IF(1,46,tpush_0_47)__CSEQ_removeindent;
                                        
# 1050 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                                        
# 1051 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 1052 "<previous_module>"
tpush_0_47: IF(1,47,tpush_0_48)__CSEQ_removeindent;
                                        
# 1053 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                                        
# 1054 "<previous_module>"
;
                                        ;
                                        
# 1055 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 1056 "<previous_module>"
tpush_0_48: IF(1,48,tpush_0_49)__CSEQ_removeindent;
                                        
# 1057 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 1058 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 1059 "<previous_module>"
                                        {
                                                
# 1060 "<previous_module>"
tpush_0_49: IF(1,49,tpush_0_50)__CSEQ_removeindent;
                                                
# 1061 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 1062 "<previous_module>"
__cs_retval__swap_stack_top_1 = 1;
                                                
# 1063 "<previous_module>"
goto __exit__swap_stack_top_1_2;
                                                ;
                                        }
                                        else

# 1066 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[1] >= 50);
                                                
# 1067 "<previous_module>"
tpush_0_50: IF(1,50,tpush_0_51)__CSEQ_removeindent;
                                                
# 1068 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 1069 "<previous_module>"
__cs_retval__swap_stack_top_1 = 0;
                                                
# 1070 "<previous_module>"
goto __exit__swap_stack_top_1_2;
                                                ;
                                        }

                                        
# 1072 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 51);
                                        ;
                                        
# 1073 "<previous_module>"
__exit__swap_stack_top_1_2:
                                        __CPROVER_assume(__cs_pc_cs[1] >= 51);

                                        
# 1074 "<previous_module>"
;
                                        ;
                                }
                                
# 1076 "<previous_module>"
;
                                
# 1077 "<previous_module>"
__cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                                
# 1078 "<previous_module>"
tpush_0_51: IF(1,51,tpush_0_52)__CSEQ_removeindent;
                                
# 1079 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1080 "<previous_module>"
;
                                ;
                                
# 1081 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1082 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1083 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1084 "<previous_module>"
                                {

# 1085 "<previous_module>"
                                        {
                                                
# 1086 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1087 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 1088 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1089 "<previous_module>"
                                                {
                                                        
# 1090 "<previous_module>"
goto __exit_loop_5;
                                                        ;
                                                }

                                                
# 1092 "<previous_module>"
;

# 1093 "<previous_module>"
                                                {
                                                        
# 1094 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1096 "<previous_module>"
;
                                                
# 1097 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1098 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1099 "<previous_module>"
                                                {
                                                        
# 1100 "<previous_module>"
goto __exit_loop_5;
                                                        ;
                                                }

                                                
# 1102 "<previous_module>"
;

# 1103 "<previous_module>"
                                                {
                                                        
# 1104 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1106 "<previous_module>"
;
                                                
# 1107 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1108 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1109 "<previous_module>"
                                                {
                                                        
# 1110 "<previous_module>"
goto __exit_loop_5;
                                                        ;
                                                }

                                                
# 1112 "<previous_module>"
;

# 1113 "<previous_module>"
                                                {
                                                        
# 1114 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1116 "<previous_module>"
;
                                                
# 1117 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1118 "<previous_module>"
tpush_0_52: IF(1,52,tpush_0_53)__CSEQ_removeindent;
                                                
# 1119 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 1120 "<previous_module>"
__exit_loop_5:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 53);

                                                
# 1121 "<previous_module>"
;
                                                ;
                                                
# 1122 "<previous_module>"
__exit__exponential_backoff_1_2:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 53);

                                                
# 1123 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1125 "<previous_module>"
;
                                }

                                
# 1127 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 53);
                                ;
                                
# 1128 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1129 "<previous_module>"
;
                                ;
                                
# 1130 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                                
# 1131 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                                
# 1132 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)

# 1133 "<previous_module>"
                                {
                                        
# 1134 "<previous_module>"
goto __exit_loop_2;
                                        ;
                                }

                                
# 1136 "<previous_module>"
;
                        }
                        
# 1138 "<previous_module>"
;
                        
# 1139 "<previous_module>"
tpush_0_53: IF(1,53,tpush_0_54)__CSEQ_removeindent;
                        
# 1140 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                        
# 1141 "<previous_module>"
__exit_loop_2:
                        __CPROVER_assume(__cs_pc_cs[1] >= 54);

                        
# 1142 "<previous_module>"
;
                        ;
                        
# 1143 "<previous_module>"
goto __exit__lfds711_stack_push_1_0;
                        ;
                        
# 1144 "<previous_module>"
__exit__lfds711_stack_push_1_0:
                        __CPROVER_assume(__cs_pc_cs[1] >= 54);

                        
# 1145 "<previous_module>"
;
                        ;
                }
                
# 1147 "<previous_module>"
;
                
# 1148 "<previous_module>"
;
                ;
        }
        
# 1150 "<previous_module>"
;
        
# 1151 "<previous_module>"
__cs_local_push_loop++;

# 1152 "<previous_module>"
        {
                
# 1153 "<previous_module>"
;
                ;
                
# 1154 "<previous_module>"
tpush_0_54: IF(1,54,tpush_0_55)__CSEQ_removeindent;
                
# 1155 "<previous_module>"
__cs_local_push_td[__cs_local_push_loop].user_id = __cs_local_push_loop;
                
# 1156 "<previous_module>"
tpush_0_55: IF(1,55,tpush_0_56)__CSEQ_removeindent;
                
# 1157 "<previous_module>"
__cs_local_push_td[__cs_local_push_loop].se.value = (void *) ((lfds711_pal_uint_t) (&__cs_local_push_td[__cs_local_push_loop]));

# 1158 "<previous_module>"
                {
                        
# 1159 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                        
# 1160 "<previous_module>"
tpush_0_56: IF(1,56,tpush_0_57)__CSEQ_removeindent;
                        
# 1161 "<previous_module>"
__cs_param_lfds711_stack_push_ss = &ss;
                        
# 1162 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                        
# 1163 "<previous_module>"
tpush_0_57: IF(1,57,tpush_0_58)__CSEQ_removeindent;
                        
# 1164 "<previous_module>"
__cs_param_lfds711_stack_push_se = &__cs_local_push_td[__cs_local_push_loop].se;
                        
# 1165 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                        
# 1166 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                        
# 1167 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                        
# 1168 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                        
# 1169 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                        
# 1170 "<previous_module>"
;
                        ;
                        
# 1171 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                        
# 1172 "<previous_module>"
tpush_0_58: IF(1,58,tpush_0_59)__CSEQ_removeindent;
                        
# 1173 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_ss != 0);
                        
# 1174 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 1175 "<previous_module>"
                        {
                                
# 1176 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 1177 "<previous_module>"
tpush_0_59: IF(1,59,tpush_0_60)__CSEQ_removeindent;
                                
# 1178 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 1179 "<previous_module>"
tpush_0_60: IF(1,60,tpush_0_61)__CSEQ_removeindent;
                                
# 1180 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 1182 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 61);
                        ;
                        
# 1183 "<previous_module>"
;
                        ;
                        
# 1184 "<previous_module>"
;
                        ;
                        
# 1185 "<previous_module>"
;
                        ;
                        
# 1186 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                        
# 1187 "<previous_module>"
tpush_0_61: IF(1,61,tpush_0_62)__CSEQ_removeindent;
                        
# 1188 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = !(__cs_param_lfds711_stack_push_se != 0);
                        
# 1189 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1190 "<previous_module>"
                        {
                                
# 1191 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 1192 "<previous_module>"
tpush_0_62: IF(1,62,tpush_0_63)__CSEQ_removeindent;
                                
# 1193 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 1194 "<previous_module>"
tpush_0_63: IF(1,63,tpush_0_64)__CSEQ_removeindent;
                                
# 1195 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 1197 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 64);
                        ;
                        
# 1198 "<previous_module>"
;
                        ;
                        
# 1199 "<previous_module>"
;
                        ;
                        
# 1200 "<previous_module>"
tpush_0_64: IF(1,64,tpush_0_65)__CSEQ_removeindent;
                        
# 1201 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                        
# 1202 "<previous_module>"
tpush_0_65: IF(1,65,tpush_0_66)__CSEQ_removeindent;
                        
# 1203 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                        
# 1204 "<previous_module>"
tpush_0_66: IF(1,66,tpush_0_67)__CSEQ_removeindent;
                        
# 1205 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                        
# 1206 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                        
# 1207 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                        
# 1208 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                        
# 1209 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1210 "<previous_module>"
                        {
                                
# 1211 "<previous_module>"
goto __exit_loop_6;
                                ;
                        }

                        
# 1213 "<previous_module>"
;

# 1214 "<previous_module>"
                        {
                                
# 1215 "<previous_module>"
tpush_0_67: IF(1,67,tpush_0_68)__CSEQ_removeindent;
                                
# 1216 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1217 "<previous_module>"
tpush_0_68: IF(1,68,tpush_0_69)__CSEQ_removeindent;
                                
# 1218 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1219 "<previous_module>"
tpush_0_69: IF(1,69,tpush_0_70)__CSEQ_removeindent;
                                
# 1220 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1221 "<previous_module>"
tpush_0_70: IF(1,70,tpush_0_71)__CSEQ_removeindent;
                                
# 1222 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1223 "<previous_module>"
tpush_0_71: IF(1,71,tpush_0_72)__CSEQ_removeindent;
                                
# 1224 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1225 "<previous_module>"
static int __cs_retval__swap_stack_top_1;

# 1226 "<previous_module>"
                                {
                                        
# 1227 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 1228 "<previous_module>"
tpush_0_72: IF(1,72,tpush_0_73)__CSEQ_removeindent;
                                        
# 1229 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                                        
# 1230 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 1231 "<previous_module>"
tpush_0_73: IF(1,73,tpush_0_74)__CSEQ_removeindent;
                                        
# 1232 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                                        
# 1233 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 1234 "<previous_module>"
tpush_0_74: IF(1,74,tpush_0_75)__CSEQ_removeindent;
                                        
# 1235 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                                        
# 1236 "<previous_module>"
;
                                        ;
                                        
# 1237 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 1238 "<previous_module>"
tpush_0_75: IF(1,75,tpush_0_76)__CSEQ_removeindent;
                                        
# 1239 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 1240 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 1241 "<previous_module>"
                                        {
                                                
# 1242 "<previous_module>"
tpush_0_76: IF(1,76,tpush_0_77)__CSEQ_removeindent;
                                                
# 1243 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 1244 "<previous_module>"
__cs_retval__swap_stack_top_1 = 1;
                                                
# 1245 "<previous_module>"
goto __exit__swap_stack_top_1_3;
                                                ;
                                        }
                                        else

# 1248 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[1] >= 77);
                                                
# 1249 "<previous_module>"
tpush_0_77: IF(1,77,tpush_0_78)__CSEQ_removeindent;
                                                
# 1250 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 1251 "<previous_module>"
__cs_retval__swap_stack_top_1 = 0;
                                                
# 1252 "<previous_module>"
goto __exit__swap_stack_top_1_3;
                                                ;
                                        }

                                        
# 1254 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 78);
                                        ;
                                        
# 1255 "<previous_module>"
__exit__swap_stack_top_1_3:
                                        __CPROVER_assume(__cs_pc_cs[1] >= 78);

                                        
# 1256 "<previous_module>"
;
                                        ;
                                }
                                
# 1258 "<previous_module>"
;
                                
# 1259 "<previous_module>"
__cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                                
# 1260 "<previous_module>"
tpush_0_78: IF(1,78,tpush_0_79)__CSEQ_removeindent;
                                
# 1261 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1262 "<previous_module>"
;
                                ;
                                
# 1263 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1264 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1265 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1266 "<previous_module>"
                                {

# 1267 "<previous_module>"
                                        {
                                                
# 1268 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1269 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 1270 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1271 "<previous_module>"
                                                {
                                                        
# 1272 "<previous_module>"
goto __exit_loop_7;
                                                        ;
                                                }

                                                
# 1274 "<previous_module>"
;

# 1275 "<previous_module>"
                                                {
                                                        
# 1276 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1278 "<previous_module>"
;
                                                
# 1279 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1280 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1281 "<previous_module>"
                                                {
                                                        
# 1282 "<previous_module>"
goto __exit_loop_7;
                                                        ;
                                                }

                                                
# 1284 "<previous_module>"
;

# 1285 "<previous_module>"
                                                {
                                                        
# 1286 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1288 "<previous_module>"
;
                                                
# 1289 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1290 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1291 "<previous_module>"
                                                {
                                                        
# 1292 "<previous_module>"
goto __exit_loop_7;
                                                        ;
                                                }

                                                
# 1294 "<previous_module>"
;

# 1295 "<previous_module>"
                                                {
                                                        
# 1296 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1298 "<previous_module>"
;
                                                
# 1299 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1300 "<previous_module>"
tpush_0_79: IF(1,79,tpush_0_80)__CSEQ_removeindent;
                                                
# 1301 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 1302 "<previous_module>"
__exit_loop_7:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 80);

                                                
# 1303 "<previous_module>"
;
                                                ;
                                                
# 1304 "<previous_module>"
__exit__exponential_backoff_1_3:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 80);

                                                
# 1305 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1307 "<previous_module>"
;
                                }

                                
# 1309 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 80);
                                ;
                                
# 1310 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1311 "<previous_module>"
;
                                ;
                                
# 1312 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                                
# 1313 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                                
# 1314 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)

# 1315 "<previous_module>"
                                {
                                        
# 1316 "<previous_module>"
goto __exit_loop_6;
                                        ;
                                }

                                
# 1318 "<previous_module>"
;
                        }
                        
# 1320 "<previous_module>"
;
                        
# 1321 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1322 "<previous_module>"
                        {
                                
# 1323 "<previous_module>"
goto __exit_loop_6;
                                ;
                        }

                        
# 1325 "<previous_module>"
;

# 1326 "<previous_module>"
                        {
                                
# 1327 "<previous_module>"
tpush_0_80: IF(1,80,tpush_0_81)__CSEQ_removeindent;
                                
# 1328 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1329 "<previous_module>"
tpush_0_81: IF(1,81,tpush_0_82)__CSEQ_removeindent;
                                
# 1330 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1331 "<previous_module>"
tpush_0_82: IF(1,82,tpush_0_83)__CSEQ_removeindent;
                                
# 1332 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1333 "<previous_module>"
tpush_0_83: IF(1,83,tpush_0_84)__CSEQ_removeindent;
                                
# 1334 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1335 "<previous_module>"
tpush_0_84: IF(1,84,tpush_0_85)__CSEQ_removeindent;
                                
# 1336 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1337 "<previous_module>"
static int __cs_retval__swap_stack_top_1;

# 1338 "<previous_module>"
                                {
                                        
# 1339 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 1340 "<previous_module>"
tpush_0_85: IF(1,85,tpush_0_86)__CSEQ_removeindent;
                                        
# 1341 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                                        
# 1342 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 1343 "<previous_module>"
tpush_0_86: IF(1,86,tpush_0_87)__CSEQ_removeindent;
                                        
# 1344 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                                        
# 1345 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 1346 "<previous_module>"
tpush_0_87: IF(1,87,tpush_0_88)__CSEQ_removeindent;
                                        
# 1347 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                                        
# 1348 "<previous_module>"
;
                                        ;
                                        
# 1349 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 1350 "<previous_module>"
tpush_0_88: IF(1,88,tpush_0_89)__CSEQ_removeindent;
                                        
# 1351 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 1352 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 1353 "<previous_module>"
                                        {
                                                
# 1354 "<previous_module>"
tpush_0_89: IF(1,89,tpush_0_90)__CSEQ_removeindent;
                                                
# 1355 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 1356 "<previous_module>"
__cs_retval__swap_stack_top_1 = 1;
                                                
# 1357 "<previous_module>"
goto __exit__swap_stack_top_1_4;
                                                ;
                                        }
                                        else

# 1360 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[1] >= 90);
                                                
# 1361 "<previous_module>"
tpush_0_90: IF(1,90,tpush_0_91)__CSEQ_removeindent;
                                                
# 1362 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 1363 "<previous_module>"
__cs_retval__swap_stack_top_1 = 0;
                                                
# 1364 "<previous_module>"
goto __exit__swap_stack_top_1_4;
                                                ;
                                        }

                                        
# 1366 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 91);
                                        ;
                                        
# 1367 "<previous_module>"
__exit__swap_stack_top_1_4:
                                        __CPROVER_assume(__cs_pc_cs[1] >= 91);

                                        
# 1368 "<previous_module>"
;
                                        ;
                                }
                                
# 1370 "<previous_module>"
;
                                
# 1371 "<previous_module>"
__cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                                
# 1372 "<previous_module>"
tpush_0_91: IF(1,91,tpush_0_92)__CSEQ_removeindent;
                                
# 1373 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1374 "<previous_module>"
;
                                ;
                                
# 1375 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1376 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1377 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1378 "<previous_module>"
                                {

# 1379 "<previous_module>"
                                        {
                                                
# 1380 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1381 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 1382 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1383 "<previous_module>"
                                                {
                                                        
# 1384 "<previous_module>"
goto __exit_loop_8;
                                                        ;
                                                }

                                                
# 1386 "<previous_module>"
;

# 1387 "<previous_module>"
                                                {
                                                        
# 1388 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1390 "<previous_module>"
;
                                                
# 1391 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1392 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1393 "<previous_module>"
                                                {
                                                        
# 1394 "<previous_module>"
goto __exit_loop_8;
                                                        ;
                                                }

                                                
# 1396 "<previous_module>"
;

# 1397 "<previous_module>"
                                                {
                                                        
# 1398 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1400 "<previous_module>"
;
                                                
# 1401 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1402 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1403 "<previous_module>"
                                                {
                                                        
# 1404 "<previous_module>"
goto __exit_loop_8;
                                                        ;
                                                }

                                                
# 1406 "<previous_module>"
;

# 1407 "<previous_module>"
                                                {
                                                        
# 1408 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1410 "<previous_module>"
;
                                                
# 1411 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1412 "<previous_module>"
tpush_0_92: IF(1,92,tpush_0_93)__CSEQ_removeindent;
                                                
# 1413 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 1414 "<previous_module>"
__exit_loop_8:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 93);

                                                
# 1415 "<previous_module>"
;
                                                ;
                                                
# 1416 "<previous_module>"
__exit__exponential_backoff_1_4:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 93);

                                                
# 1417 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1419 "<previous_module>"
;
                                }

                                
# 1421 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 93);
                                ;
                                
# 1422 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1423 "<previous_module>"
;
                                ;
                                
# 1424 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                                
# 1425 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                                
# 1426 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)

# 1427 "<previous_module>"
                                {
                                        
# 1428 "<previous_module>"
goto __exit_loop_6;
                                        ;
                                }

                                
# 1430 "<previous_module>"
;
                        }
                        
# 1432 "<previous_module>"
;
                        
# 1433 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1434 "<previous_module>"
                        {
                                
# 1435 "<previous_module>"
goto __exit_loop_6;
                                ;
                        }

                        
# 1437 "<previous_module>"
;

# 1438 "<previous_module>"
                        {
                                
# 1439 "<previous_module>"
tpush_0_93: IF(1,93,tpush_0_94)__CSEQ_removeindent;
                                
# 1440 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1441 "<previous_module>"
tpush_0_94: IF(1,94,tpush_0_95)__CSEQ_removeindent;
                                
# 1442 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1443 "<previous_module>"
tpush_0_95: IF(1,95,tpush_0_96)__CSEQ_removeindent;
                                
# 1444 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1445 "<previous_module>"
tpush_0_96: IF(1,96,tpush_0_97)__CSEQ_removeindent;
                                
# 1446 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1447 "<previous_module>"
tpush_0_97: IF(1,97,tpush_0_98)__CSEQ_removeindent;
                                
# 1448 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1449 "<previous_module>"
static int __cs_retval__swap_stack_top_1;

# 1450 "<previous_module>"
                                {
                                        
# 1451 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 1452 "<previous_module>"
tpush_0_98: IF(1,98,tpush_0_99)__CSEQ_removeindent;
                                        
# 1453 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                                        
# 1454 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 1455 "<previous_module>"
tpush_0_99: IF(1,99,tpush_0_100)__CSEQ_removeindent;
                                        
# 1456 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                                        
# 1457 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 1458 "<previous_module>"
tpush_0_100: IF(1,100,tpush_0_101)__CSEQ_removeindent;
                                        
# 1459 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                                        
# 1460 "<previous_module>"
;
                                        ;
                                        
# 1461 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 1462 "<previous_module>"
tpush_0_101: IF(1,101,tpush_0_102)__CSEQ_removeindent;
                                        
# 1463 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 1464 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 1465 "<previous_module>"
                                        {
                                                
# 1466 "<previous_module>"
tpush_0_102: IF(1,102,tpush_0_103)__CSEQ_removeindent;
                                                
# 1467 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 1468 "<previous_module>"
__cs_retval__swap_stack_top_1 = 1;
                                                
# 1469 "<previous_module>"
goto __exit__swap_stack_top_1_5;
                                                ;
                                        }
                                        else

# 1472 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[1] >= 103);
                                                
# 1473 "<previous_module>"
tpush_0_103: IF(1,103,tpush_0_104)__CSEQ_removeindent;
                                                
# 1474 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 1475 "<previous_module>"
__cs_retval__swap_stack_top_1 = 0;
                                                
# 1476 "<previous_module>"
goto __exit__swap_stack_top_1_5;
                                                ;
                                        }

                                        
# 1478 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 104);
                                        ;
                                        
# 1479 "<previous_module>"
__exit__swap_stack_top_1_5:
                                        __CPROVER_assume(__cs_pc_cs[1] >= 104);

                                        
# 1480 "<previous_module>"
;
                                        ;
                                }
                                
# 1482 "<previous_module>"
;
                                
# 1483 "<previous_module>"
__cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                                
# 1484 "<previous_module>"
tpush_0_104: IF(1,104,tpush_0_105)__CSEQ_removeindent;
                                
# 1485 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1486 "<previous_module>"
;
                                ;
                                
# 1487 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1488 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1489 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1490 "<previous_module>"
                                {

# 1491 "<previous_module>"
                                        {
                                                
# 1492 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1493 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 1494 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1495 "<previous_module>"
                                                {
                                                        
# 1496 "<previous_module>"
goto __exit_loop_9;
                                                        ;
                                                }

                                                
# 1498 "<previous_module>"
;

# 1499 "<previous_module>"
                                                {
                                                        
# 1500 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1502 "<previous_module>"
;
                                                
# 1503 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1504 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1505 "<previous_module>"
                                                {
                                                        
# 1506 "<previous_module>"
goto __exit_loop_9;
                                                        ;
                                                }

                                                
# 1508 "<previous_module>"
;

# 1509 "<previous_module>"
                                                {
                                                        
# 1510 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1512 "<previous_module>"
;
                                                
# 1513 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1514 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1515 "<previous_module>"
                                                {
                                                        
# 1516 "<previous_module>"
goto __exit_loop_9;
                                                        ;
                                                }

                                                
# 1518 "<previous_module>"
;

# 1519 "<previous_module>"
                                                {
                                                        
# 1520 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1522 "<previous_module>"
;
                                                
# 1523 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1524 "<previous_module>"
tpush_0_105: IF(1,105,tpush_0_106)__CSEQ_removeindent;
                                                
# 1525 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 1526 "<previous_module>"
__exit_loop_9:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 106);

                                                
# 1527 "<previous_module>"
;
                                                ;
                                                
# 1528 "<previous_module>"
__exit__exponential_backoff_1_5:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 106);

                                                
# 1529 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1531 "<previous_module>"
;
                                }

                                
# 1533 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 106);
                                ;
                                
# 1534 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1535 "<previous_module>"
;
                                ;
                                
# 1536 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                                
# 1537 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                                
# 1538 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)

# 1539 "<previous_module>"
                                {
                                        
# 1540 "<previous_module>"
goto __exit_loop_6;
                                        ;
                                }

                                
# 1542 "<previous_module>"
;
                        }
                        
# 1544 "<previous_module>"
;
                        
# 1545 "<previous_module>"
tpush_0_106: IF(1,106,tpush_0_107)__CSEQ_removeindent;
                        
# 1546 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                        
# 1547 "<previous_module>"
__exit_loop_6:
                        __CPROVER_assume(__cs_pc_cs[1] >= 107);

                        
# 1548 "<previous_module>"
;
                        ;
                        
# 1549 "<previous_module>"
goto __exit__lfds711_stack_push_1_1;
                        ;
                        
# 1550 "<previous_module>"
__exit__lfds711_stack_push_1_1:
                        __CPROVER_assume(__cs_pc_cs[1] >= 107);

                        
# 1551 "<previous_module>"
;
                        ;
                }
                
# 1553 "<previous_module>"
;
                
# 1554 "<previous_module>"
;
                ;
        }
        
# 1556 "<previous_module>"
;
        
# 1557 "<previous_module>"
__cs_local_push_loop++;

# 1558 "<previous_module>"
        {
                
# 1559 "<previous_module>"
;
                ;
                
# 1560 "<previous_module>"
tpush_0_107: IF(1,107,tpush_0_108)__CSEQ_removeindent;
                
# 1561 "<previous_module>"
__cs_local_push_td[__cs_local_push_loop].user_id = __cs_local_push_loop;
                
# 1562 "<previous_module>"
tpush_0_108: IF(1,108,tpush_0_109)__CSEQ_removeindent;
                
# 1563 "<previous_module>"
__cs_local_push_td[__cs_local_push_loop].se.value = (void *) ((lfds711_pal_uint_t) (&__cs_local_push_td[__cs_local_push_loop]));

# 1564 "<previous_module>"
                {
                        
# 1565 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                        
# 1566 "<previous_module>"
tpush_0_109: IF(1,109,tpush_0_110)__CSEQ_removeindent;
                        
# 1567 "<previous_module>"
__cs_param_lfds711_stack_push_ss = &ss;
                        
# 1568 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                        
# 1569 "<previous_module>"
tpush_0_110: IF(1,110,tpush_0_111)__CSEQ_removeindent;
                        
# 1570 "<previous_module>"
__cs_param_lfds711_stack_push_se = &__cs_local_push_td[__cs_local_push_loop].se;
                        
# 1571 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                        
# 1572 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                        
# 1573 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                        
# 1574 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                        
# 1575 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                        
# 1576 "<previous_module>"
;
                        ;
                        
# 1577 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                        
# 1578 "<previous_module>"
tpush_0_111: IF(1,111,tpush_0_112)__CSEQ_removeindent;
                        
# 1579 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_ss != 0);
                        
# 1580 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 1581 "<previous_module>"
                        {
                                
# 1582 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 1583 "<previous_module>"
tpush_0_112: IF(1,112,tpush_0_113)__CSEQ_removeindent;
                                
# 1584 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 1585 "<previous_module>"
tpush_0_113: IF(1,113,tpush_0_114)__CSEQ_removeindent;
                                
# 1586 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 1588 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 114);
                        ;
                        
# 1589 "<previous_module>"
;
                        ;
                        
# 1590 "<previous_module>"
;
                        ;
                        
# 1591 "<previous_module>"
;
                        ;
                        
# 1592 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                        
# 1593 "<previous_module>"
tpush_0_114: IF(1,114,tpush_0_115)__CSEQ_removeindent;
                        
# 1594 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = !(__cs_param_lfds711_stack_push_se != 0);
                        
# 1595 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1596 "<previous_module>"
                        {
                                
# 1597 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 1598 "<previous_module>"
tpush_0_115: IF(1,115,tpush_0_116)__CSEQ_removeindent;
                                
# 1599 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 1600 "<previous_module>"
tpush_0_116: IF(1,116,tpush_0_117)__CSEQ_removeindent;
                                
# 1601 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 1603 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 117);
                        ;
                        
# 1604 "<previous_module>"
;
                        ;
                        
# 1605 "<previous_module>"
;
                        ;
                        
# 1606 "<previous_module>"
tpush_0_117: IF(1,117,tpush_0_118)__CSEQ_removeindent;
                        
# 1607 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                        
# 1608 "<previous_module>"
tpush_0_118: IF(1,118,tpush_0_119)__CSEQ_removeindent;
                        
# 1609 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                        
# 1610 "<previous_module>"
tpush_0_119: IF(1,119,tpush_0_120)__CSEQ_removeindent;
                        
# 1611 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                        
# 1612 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                        
# 1613 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                        
# 1614 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                        
# 1615 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1616 "<previous_module>"
                        {
                                
# 1617 "<previous_module>"
goto __exit_loop_10;
                                ;
                        }

                        
# 1619 "<previous_module>"
;

# 1620 "<previous_module>"
                        {
                                
# 1621 "<previous_module>"
tpush_0_120: IF(1,120,tpush_0_121)__CSEQ_removeindent;
                                
# 1622 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1623 "<previous_module>"
tpush_0_121: IF(1,121,tpush_0_122)__CSEQ_removeindent;
                                
# 1624 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1625 "<previous_module>"
tpush_0_122: IF(1,122,tpush_0_123)__CSEQ_removeindent;
                                
# 1626 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1627 "<previous_module>"
tpush_0_123: IF(1,123,tpush_0_124)__CSEQ_removeindent;
                                
# 1628 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1629 "<previous_module>"
tpush_0_124: IF(1,124,tpush_0_125)__CSEQ_removeindent;
                                
# 1630 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1631 "<previous_module>"
static int __cs_retval__swap_stack_top_1;

# 1632 "<previous_module>"
                                {
                                        
# 1633 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 1634 "<previous_module>"
tpush_0_125: IF(1,125,tpush_0_126)__CSEQ_removeindent;
                                        
# 1635 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                                        
# 1636 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 1637 "<previous_module>"
tpush_0_126: IF(1,126,tpush_0_127)__CSEQ_removeindent;
                                        
# 1638 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                                        
# 1639 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 1640 "<previous_module>"
tpush_0_127: IF(1,127,tpush_0_128)__CSEQ_removeindent;
                                        
# 1641 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                                        
# 1642 "<previous_module>"
;
                                        ;
                                        
# 1643 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 1644 "<previous_module>"
tpush_0_128: IF(1,128,tpush_0_129)__CSEQ_removeindent;
                                        
# 1645 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 1646 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 1647 "<previous_module>"
                                        {
                                                
# 1648 "<previous_module>"
tpush_0_129: IF(1,129,tpush_0_130)__CSEQ_removeindent;
                                                
# 1649 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 1650 "<previous_module>"
__cs_retval__swap_stack_top_1 = 1;
                                                
# 1651 "<previous_module>"
goto __exit__swap_stack_top_1_6;
                                                ;
                                        }
                                        else

# 1654 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[1] >= 130);
                                                
# 1655 "<previous_module>"
tpush_0_130: IF(1,130,tpush_0_131)__CSEQ_removeindent;
                                                
# 1656 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 1657 "<previous_module>"
__cs_retval__swap_stack_top_1 = 0;
                                                
# 1658 "<previous_module>"
goto __exit__swap_stack_top_1_6;
                                                ;
                                        }

                                        
# 1660 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 131);
                                        ;
                                        
# 1661 "<previous_module>"
__exit__swap_stack_top_1_6:
                                        __CPROVER_assume(__cs_pc_cs[1] >= 131);

                                        
# 1662 "<previous_module>"
;
                                        ;
                                }
                                
# 1664 "<previous_module>"
;
                                
# 1665 "<previous_module>"
__cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                                
# 1666 "<previous_module>"
tpush_0_131: IF(1,131,tpush_0_132)__CSEQ_removeindent;
                                
# 1667 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1668 "<previous_module>"
;
                                ;
                                
# 1669 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1670 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1671 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1672 "<previous_module>"
                                {

# 1673 "<previous_module>"
                                        {
                                                
# 1674 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1675 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 1676 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1677 "<previous_module>"
                                                {
                                                        
# 1678 "<previous_module>"
goto __exit_loop_11;
                                                        ;
                                                }

                                                
# 1680 "<previous_module>"
;

# 1681 "<previous_module>"
                                                {
                                                        
# 1682 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1684 "<previous_module>"
;
                                                
# 1685 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1686 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1687 "<previous_module>"
                                                {
                                                        
# 1688 "<previous_module>"
goto __exit_loop_11;
                                                        ;
                                                }

                                                
# 1690 "<previous_module>"
;

# 1691 "<previous_module>"
                                                {
                                                        
# 1692 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1694 "<previous_module>"
;
                                                
# 1695 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1696 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1697 "<previous_module>"
                                                {
                                                        
# 1698 "<previous_module>"
goto __exit_loop_11;
                                                        ;
                                                }

                                                
# 1700 "<previous_module>"
;

# 1701 "<previous_module>"
                                                {
                                                        
# 1702 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1704 "<previous_module>"
;
                                                
# 1705 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1706 "<previous_module>"
tpush_0_132: IF(1,132,tpush_0_133)__CSEQ_removeindent;
                                                
# 1707 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 1708 "<previous_module>"
__exit_loop_11:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 133);

                                                
# 1709 "<previous_module>"
;
                                                ;
                                                
# 1710 "<previous_module>"
__exit__exponential_backoff_1_6:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 133);

                                                
# 1711 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1713 "<previous_module>"
;
                                }

                                
# 1715 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 133);
                                ;
                                
# 1716 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1717 "<previous_module>"
;
                                ;
                                
# 1718 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                                
# 1719 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                                
# 1720 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)

# 1721 "<previous_module>"
                                {
                                        
# 1722 "<previous_module>"
goto __exit_loop_10;
                                        ;
                                }

                                
# 1724 "<previous_module>"
;
                        }
                        
# 1726 "<previous_module>"
;
                        
# 1727 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1728 "<previous_module>"
                        {
                                
# 1729 "<previous_module>"
goto __exit_loop_10;
                                ;
                        }

                        
# 1731 "<previous_module>"
;

# 1732 "<previous_module>"
                        {
                                
# 1733 "<previous_module>"
tpush_0_133: IF(1,133,tpush_0_134)__CSEQ_removeindent;
                                
# 1734 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1735 "<previous_module>"
tpush_0_134: IF(1,134,tpush_0_135)__CSEQ_removeindent;
                                
# 1736 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1737 "<previous_module>"
tpush_0_135: IF(1,135,tpush_0_136)__CSEQ_removeindent;
                                
# 1738 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1739 "<previous_module>"
tpush_0_136: IF(1,136,tpush_0_137)__CSEQ_removeindent;
                                
# 1740 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1741 "<previous_module>"
tpush_0_137: IF(1,137,tpush_0_138)__CSEQ_removeindent;
                                
# 1742 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1743 "<previous_module>"
static int __cs_retval__swap_stack_top_1;

# 1744 "<previous_module>"
                                {
                                        
# 1745 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 1746 "<previous_module>"
tpush_0_138: IF(1,138,tpush_0_139)__CSEQ_removeindent;
                                        
# 1747 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                                        
# 1748 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 1749 "<previous_module>"
tpush_0_139: IF(1,139,tpush_0_140)__CSEQ_removeindent;
                                        
# 1750 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                                        
# 1751 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 1752 "<previous_module>"
tpush_0_140: IF(1,140,tpush_0_141)__CSEQ_removeindent;
                                        
# 1753 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                                        
# 1754 "<previous_module>"
;
                                        ;
                                        
# 1755 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 1756 "<previous_module>"
tpush_0_141: IF(1,141,tpush_0_142)__CSEQ_removeindent;
                                        
# 1757 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 1758 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 1759 "<previous_module>"
                                        {
                                                
# 1760 "<previous_module>"
tpush_0_142: IF(1,142,tpush_0_143)__CSEQ_removeindent;
                                                
# 1761 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 1762 "<previous_module>"
__cs_retval__swap_stack_top_1 = 1;
                                                
# 1763 "<previous_module>"
goto __exit__swap_stack_top_1_7;
                                                ;
                                        }
                                        else

# 1766 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[1] >= 143);
                                                
# 1767 "<previous_module>"
tpush_0_143: IF(1,143,tpush_0_144)__CSEQ_removeindent;
                                                
# 1768 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 1769 "<previous_module>"
__cs_retval__swap_stack_top_1 = 0;
                                                
# 1770 "<previous_module>"
goto __exit__swap_stack_top_1_7;
                                                ;
                                        }

                                        
# 1772 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 144);
                                        ;
                                        
# 1773 "<previous_module>"
__exit__swap_stack_top_1_7:
                                        __CPROVER_assume(__cs_pc_cs[1] >= 144);

                                        
# 1774 "<previous_module>"
;
                                        ;
                                }
                                
# 1776 "<previous_module>"
;
                                
# 1777 "<previous_module>"
__cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                                
# 1778 "<previous_module>"
tpush_0_144: IF(1,144,tpush_0_145)__CSEQ_removeindent;
                                
# 1779 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1780 "<previous_module>"
;
                                ;
                                
# 1781 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1782 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1783 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1784 "<previous_module>"
                                {

# 1785 "<previous_module>"
                                        {
                                                
# 1786 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1787 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 1788 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1789 "<previous_module>"
                                                {
                                                        
# 1790 "<previous_module>"
goto __exit_loop_12;
                                                        ;
                                                }

                                                
# 1792 "<previous_module>"
;

# 1793 "<previous_module>"
                                                {
                                                        
# 1794 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1796 "<previous_module>"
;
                                                
# 1797 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1798 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1799 "<previous_module>"
                                                {
                                                        
# 1800 "<previous_module>"
goto __exit_loop_12;
                                                        ;
                                                }

                                                
# 1802 "<previous_module>"
;

# 1803 "<previous_module>"
                                                {
                                                        
# 1804 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1806 "<previous_module>"
;
                                                
# 1807 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1808 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1809 "<previous_module>"
                                                {
                                                        
# 1810 "<previous_module>"
goto __exit_loop_12;
                                                        ;
                                                }

                                                
# 1812 "<previous_module>"
;

# 1813 "<previous_module>"
                                                {
                                                        
# 1814 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1816 "<previous_module>"
;
                                                
# 1817 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1818 "<previous_module>"
tpush_0_145: IF(1,145,tpush_0_146)__CSEQ_removeindent;
                                                
# 1819 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 1820 "<previous_module>"
__exit_loop_12:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 146);

                                                
# 1821 "<previous_module>"
;
                                                ;
                                                
# 1822 "<previous_module>"
__exit__exponential_backoff_1_7:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 146);

                                                
# 1823 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1825 "<previous_module>"
;
                                }

                                
# 1827 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 146);
                                ;
                                
# 1828 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1829 "<previous_module>"
;
                                ;
                                
# 1830 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                                
# 1831 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                                
# 1832 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)

# 1833 "<previous_module>"
                                {
                                        
# 1834 "<previous_module>"
goto __exit_loop_10;
                                        ;
                                }

                                
# 1836 "<previous_module>"
;
                        }
                        
# 1838 "<previous_module>"
;
                        
# 1839 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1840 "<previous_module>"
                        {
                                
# 1841 "<previous_module>"
goto __exit_loop_10;
                                ;
                        }

                        
# 1843 "<previous_module>"
;

# 1844 "<previous_module>"
                        {
                                
# 1845 "<previous_module>"
tpush_0_146: IF(1,146,tpush_0_147)__CSEQ_removeindent;
                                
# 1846 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1847 "<previous_module>"
tpush_0_147: IF(1,147,tpush_0_148)__CSEQ_removeindent;
                                
# 1848 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1849 "<previous_module>"
tpush_0_148: IF(1,148,tpush_0_149)__CSEQ_removeindent;
                                
# 1850 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1851 "<previous_module>"
tpush_0_149: IF(1,149,tpush_0_150)__CSEQ_removeindent;
                                
# 1852 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1853 "<previous_module>"
tpush_0_150: IF(1,150,tpush_0_151)__CSEQ_removeindent;
                                
# 1854 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                                
# 1855 "<previous_module>"
static int __cs_retval__swap_stack_top_1;

# 1856 "<previous_module>"
                                {
                                        
# 1857 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 1858 "<previous_module>"
tpush_0_151: IF(1,151,tpush_0_152)__CSEQ_removeindent;
                                        
# 1859 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_push_ss).top[0];
                                        
# 1860 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 1861 "<previous_module>"
tpush_0_152: IF(1,152,tpush_0_153)__CSEQ_removeindent;
                                        
# 1862 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_push_original_top[0];
                                        
# 1863 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 1864 "<previous_module>"
tpush_0_153: IF(1,153,tpush_0_154)__CSEQ_removeindent;
                                        
# 1865 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_push_new_top[0];
                                        
# 1866 "<previous_module>"
;
                                        ;
                                        
# 1867 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 1868 "<previous_module>"
tpush_0_154: IF(1,154,tpush_0_155)__CSEQ_removeindent;
                                        
# 1869 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 1870 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 1871 "<previous_module>"
                                        {
                                                
# 1872 "<previous_module>"
tpush_0_155: IF(1,155,tpush_0_156)__CSEQ_removeindent;
                                                
# 1873 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 1874 "<previous_module>"
__cs_retval__swap_stack_top_1 = 1;
                                                
# 1875 "<previous_module>"
goto __exit__swap_stack_top_1_8;
                                                ;
                                        }
                                        else

# 1878 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[1] >= 156);
                                                
# 1879 "<previous_module>"
tpush_0_156: IF(1,156,tpush_0_157)__CSEQ_removeindent;
                                                
# 1880 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 1881 "<previous_module>"
__cs_retval__swap_stack_top_1 = 0;
                                                
# 1882 "<previous_module>"
goto __exit__swap_stack_top_1_8;
                                                ;
                                        }

                                        
# 1884 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 157);
                                        ;
                                        
# 1885 "<previous_module>"
__exit__swap_stack_top_1_8:
                                        __CPROVER_assume(__cs_pc_cs[1] >= 157);

                                        
# 1886 "<previous_module>"
;
                                        ;
                                }
                                
# 1888 "<previous_module>"
;
                                
# 1889 "<previous_module>"
__cs_local_lfds711_stack_push_result = __cs_retval__swap_stack_top_1;
                                
# 1890 "<previous_module>"
tpush_0_157: IF(1,157,tpush_0_158)__CSEQ_removeindent;
                                
# 1891 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                                
# 1892 "<previous_module>"
;
                                ;
                                
# 1893 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1894 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1895 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1896 "<previous_module>"
                                {

# 1897 "<previous_module>"
                                        {
                                                
# 1898 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1899 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 1900 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1901 "<previous_module>"
                                                {
                                                        
# 1902 "<previous_module>"
goto __exit_loop_13;
                                                        ;
                                                }

                                                
# 1904 "<previous_module>"
;

# 1905 "<previous_module>"
                                                {
                                                        
# 1906 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1908 "<previous_module>"
;
                                                
# 1909 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1910 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1911 "<previous_module>"
                                                {
                                                        
# 1912 "<previous_module>"
goto __exit_loop_13;
                                                        ;
                                                }

                                                
# 1914 "<previous_module>"
;

# 1915 "<previous_module>"
                                                {
                                                        
# 1916 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1918 "<previous_module>"
;
                                                
# 1919 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1920 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 1921 "<previous_module>"
                                                {
                                                        
# 1922 "<previous_module>"
goto __exit_loop_13;
                                                        ;
                                                }

                                                
# 1924 "<previous_module>"
;

# 1925 "<previous_module>"
                                                {
                                                        
# 1926 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1928 "<previous_module>"
;
                                                
# 1929 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 1930 "<previous_module>"
tpush_0_158: IF(1,158,tpush_0_159)__CSEQ_removeindent;
                                                
# 1931 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 1932 "<previous_module>"
__exit_loop_13:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 159);

                                                
# 1933 "<previous_module>"
;
                                                ;
                                                
# 1934 "<previous_module>"
__exit__exponential_backoff_1_8:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 159);

                                                
# 1935 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1937 "<previous_module>"
;
                                }

                                
# 1939 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 159);
                                ;
                                
# 1940 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1941 "<previous_module>"
;
                                ;
                                
# 1942 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_18;
                                
# 1943 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_18 = __cs_local_lfds711_stack_push_i > 100;
                                
# 1944 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_18)

# 1945 "<previous_module>"
                                {
                                        
# 1946 "<previous_module>"
goto __exit_loop_10;
                                        ;
                                }

                                
# 1948 "<previous_module>"
;
                        }
                        
# 1950 "<previous_module>"
;
                        
# 1951 "<previous_module>"
tpush_0_159: IF(1,159,tpush_0_160)__CSEQ_removeindent;
                        
# 1952 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                        
# 1953 "<previous_module>"
__exit_loop_10:
                        __CPROVER_assume(__cs_pc_cs[1] >= 160);

                        
# 1954 "<previous_module>"
;
                        ;
                        
# 1955 "<previous_module>"
goto __exit__lfds711_stack_push_1_2;
                        ;
                        
# 1956 "<previous_module>"
__exit__lfds711_stack_push_1_2:
                        __CPROVER_assume(__cs_pc_cs[1] >= 160);

                        
# 1957 "<previous_module>"
;
                        ;
                }
                
# 1959 "<previous_module>"
;
                
# 1960 "<previous_module>"
;
                ;
        }
        
# 1962 "<previous_module>"
;
        
# 1963 "<previous_module>"
__cs_local_push_loop++;
        
# 1964 "<previous_module>"
tpush_0_160: IF(1,160,tpush_0_161)__CSEQ_removeindent;
        
# 1965 "<previous_module>"
__CPROVER_assume(!(__cs_local_push_loop < 3));
        
# 1966 "<previous_module>"
__exit_loop_1:
        __CPROVER_assume(__cs_pc_cs[1] >= 161);

        
# 1967 "<previous_module>"
;
        ;
        
# 1968 "<previous_module>"
__exit_push:
        __CPROVER_assume(__cs_pc_cs[1] >= 161);

        
# 1969 "<previous_module>"
;
        ;
        
# 1970 "<previous_module>"
tpush_0_161: __CSEQ_removeindent;
        
# 1971 "<previous_module>"
__cs_exit(0, 1);
}


# 1973 "<previous_module>"
void *pop_0(void *__cs_param_pop___cs_unused)

# 1974 "<previous_module>"
{
        
# 1975 "<previous_module>"
static int long long unsigned __cs_local_pop_loop;
        
# 1976 "<previous_module>"
static struct lfds711_stack_element *__cs_local_pop_se;
        
# 1977 "<previous_module>"
static struct test_data *__cs_local_pop_temp_td;
        
# 1978 "<previous_module>"
static int __cs_local_pop_res;
        
# 1979 "<previous_module>"
static int __cs_local_pop_count;
        
# 1980 "<previous_module>"
IF(2,0,tpop_0_1)__CSEQ_removeindent;
        
# 1981 "<previous_module>"
__cs_local_pop_count = 0;
        
# 1982 "<previous_module>"
__cs_local_pop_loop = 0;

# 1983 "<previous_module>"
        {
                
# 1984 "<previous_module>"
tpop_0_1: IF(2,1,tpop_0_2)__CSEQ_removeindent;
                
# 1985 "<previous_module>"
__cs_local_pop_temp_td = 0;
                
# 1986 "<previous_module>"
;
                ;
                
# 1987 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_1;

# 1988 "<previous_module>"
                {
                        
# 1989 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                        
# 1990 "<previous_module>"
tpop_0_2: IF(2,2,tpop_0_3)__CSEQ_removeindent;
                        
# 1991 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = &ss;
                        
# 1992 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                        
# 1993 "<previous_module>"
tpop_0_3: IF(2,3,tpop_0_4)__CSEQ_removeindent;
                        
# 1994 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_pop_se;
                        
# 1995 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                        
# 1996 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                        
# 1997 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                        
# 1998 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                        
# 1999 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                        
# 2000 "<previous_module>"
;
                        ;
                        
# 2001 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                        
# 2002 "<previous_module>"
tpop_0_4: IF(2,4,tpop_0_5)__CSEQ_removeindent;
                        
# 2003 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_ss != 0);
                        
# 2004 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 2005 "<previous_module>"
                        {
                                
# 2006 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 2007 "<previous_module>"
tpop_0_5: IF(2,5,tpop_0_6)__CSEQ_removeindent;
                                
# 2008 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 2009 "<previous_module>"
tpop_0_6: IF(2,6,tpop_0_7)__CSEQ_removeindent;
                                
# 2010 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 2012 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 7);
                        ;
                        
# 2013 "<previous_module>"
;
                        ;
                        
# 2014 "<previous_module>"
;
                        ;
                        
# 2015 "<previous_module>"
;
                        ;
                        
# 2016 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                        
# 2017 "<previous_module>"
tpop_0_7: IF(2,7,tpop_0_8)__CSEQ_removeindent;
                        
# 2018 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = !(__cs_param_lfds711_stack_pop_se != 0);
                        
# 2019 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 2020 "<previous_module>"
                        {
                                
# 2021 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 2022 "<previous_module>"
tpop_0_8: IF(2,8,tpop_0_9)__CSEQ_removeindent;
                                
# 2023 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 2024 "<previous_module>"
tpop_0_9: IF(2,9,tpop_0_10)__CSEQ_removeindent;
                                
# 2025 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 2027 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 10);
                        ;
                        
# 2028 "<previous_module>"
;
                        ;
                        
# 2029 "<previous_module>"
;
                        ;
                        
# 2030 "<previous_module>"
tpop_0_10: IF(2,10,tpop_0_11)__CSEQ_removeindent;
                        
# 2031 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                        
# 2032 "<previous_module>"
tpop_0_11: IF(2,11,tpop_0_12)__CSEQ_removeindent;
                        
# 2033 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                        
# 2034 "<previous_module>"
tpop_0_12: IF(2,12,tpop_0_13)__CSEQ_removeindent;
                        
# 2035 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                        
# 2036 "<previous_module>"
tpop_0_13: IF(2,13,tpop_0_14)__CSEQ_removeindent;
                        
# 2037 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                        
# 2038 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                        
# 2039 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                        
# 2040 "<previous_module>"
;
                        ;
                        
# 2041 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                        
# 2042 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 2043 "<previous_module>"
                        {
                                
# 2044 "<previous_module>"
;
                                ;
                                
# 2045 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                
# 2046 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2047 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 2048 "<previous_module>"
                                {
                                        
# 2049 "<previous_module>"
tpop_0_14: IF(2,14,tpop_0_15)__CSEQ_removeindent;
                                        
# 2050 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2051 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 2052 "<previous_module>"
goto __exit__lfds711_stack_pop_1_0;
                                        ;
                                }

                                
# 2054 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 15);
                                ;
                                
# 2055 "<previous_module>"
tpop_0_15: IF(2,15,tpop_0_16)__CSEQ_removeindent;
                                
# 2056 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2057 "<previous_module>"
tpop_0_16: IF(2,16,tpop_0_17)__CSEQ_removeindent;
                                
# 2058 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2059 "<previous_module>"
tpop_0_17: IF(2,17,tpop_0_18)__CSEQ_removeindent;
                                
# 2060 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                
# 2061 "<previous_module>"
static int __cs_retval__swap_stack_top_2;

# 2062 "<previous_module>"
                                {
                                        
# 2063 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 2064 "<previous_module>"
tpop_0_18: IF(2,18,tpop_0_19)__CSEQ_removeindent;
                                        
# 2065 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 2066 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 2067 "<previous_module>"
tpop_0_19: IF(2,19,tpop_0_20)__CSEQ_removeindent;
                                        
# 2068 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                                        
# 2069 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 2070 "<previous_module>"
tpop_0_20: IF(2,20,tpop_0_21)__CSEQ_removeindent;
                                        
# 2071 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                                        
# 2072 "<previous_module>"
;
                                        ;
                                        
# 2073 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 2074 "<previous_module>"
tpop_0_21: IF(2,21,tpop_0_22)__CSEQ_removeindent;
                                        
# 2075 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 2076 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 2077 "<previous_module>"
                                        {
                                                
# 2078 "<previous_module>"
tpop_0_22: IF(2,22,tpop_0_23)__CSEQ_removeindent;
                                                
# 2079 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 2080 "<previous_module>"
__cs_retval__swap_stack_top_2 = 1;
                                                
# 2081 "<previous_module>"
goto __exit__swap_stack_top_2_0;
                                                ;
                                        }
                                        else

# 2084 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[2] >= 23);
                                                
# 2085 "<previous_module>"
tpop_0_23: IF(2,23,tpop_0_24)__CSEQ_removeindent;
                                                
# 2086 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 2087 "<previous_module>"
__cs_retval__swap_stack_top_2 = 0;
                                                
# 2088 "<previous_module>"
goto __exit__swap_stack_top_2_0;
                                                ;
                                        }

                                        
# 2090 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 24);
                                        ;
                                        
# 2091 "<previous_module>"
__exit__swap_stack_top_2_0:
                                        __CPROVER_assume(__cs_pc_cs[2] >= 24);

                                        
# 2092 "<previous_module>"
;
                                        ;
                                }
                                
# 2094 "<previous_module>"
;
                                
# 2095 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_2;
                                
# 2096 "<previous_module>"
tpop_0_24: IF(2,24,tpop_0_25)__CSEQ_removeindent;
                                
# 2097 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                
# 2098 "<previous_module>"
;
                                ;
                                
# 2099 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                
# 2100 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2101 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 2102 "<previous_module>"
                                {

# 2103 "<previous_module>"
                                        {
                                                
# 2104 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2105 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 2106 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2107 "<previous_module>"
                                                {
                                                        
# 2108 "<previous_module>"
goto __exit_loop_16;
                                                        ;
                                                }

                                                
# 2110 "<previous_module>"
;

# 2111 "<previous_module>"
                                                {
                                                        
# 2112 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2114 "<previous_module>"
;
                                                
# 2115 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2116 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2117 "<previous_module>"
                                                {
                                                        
# 2118 "<previous_module>"
goto __exit_loop_16;
                                                        ;
                                                }

                                                
# 2120 "<previous_module>"
;

# 2121 "<previous_module>"
                                                {
                                                        
# 2122 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2124 "<previous_module>"
;
                                                
# 2125 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2126 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2127 "<previous_module>"
                                                {
                                                        
# 2128 "<previous_module>"
goto __exit_loop_16;
                                                        ;
                                                }

                                                
# 2130 "<previous_module>"
;

# 2131 "<previous_module>"
                                                {
                                                        
# 2132 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2134 "<previous_module>"
;
                                                
# 2135 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2136 "<previous_module>"
tpop_0_25: IF(2,25,tpop_0_26)__CSEQ_removeindent;
                                                
# 2137 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 2138 "<previous_module>"
__exit_loop_16:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 26);

                                                
# 2139 "<previous_module>"
;
                                                ;
                                                
# 2140 "<previous_module>"
__exit__exponential_backoff_2_0:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 26);

                                                
# 2141 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2143 "<previous_module>"
;
                                        
# 2144 "<previous_module>"
tpop_0_26: IF(2,26,tpop_0_27)__CSEQ_removeindent;
                                        
# 2145 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                        
# 2146 "<previous_module>"
tpop_0_27: IF(2,27,tpop_0_28)__CSEQ_removeindent;
                                        
# 2147 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                }

                                
# 2149 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 28);
                                ;
                                
# 2150 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2151 "<previous_module>"
;
                                ;
                                
# 2152 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2153 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 100;
                                
# 2154 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2155 "<previous_module>"
                                {
                                        
# 2156 "<previous_module>"
goto __exit_loop_15;
                                        ;
                                }

                                
# 2158 "<previous_module>"
;
                        }
                        
# 2160 "<previous_module>"
;
                        
# 2161 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                        
# 2162 "<previous_module>"
tpop_0_28: IF(2,28,tpop_0_29)__CSEQ_removeindent;
                        
# 2163 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                        
# 2164 "<previous_module>"
__exit_loop_15:
                        __CPROVER_assume(__cs_pc_cs[2] >= 29);

                        
# 2165 "<previous_module>"
;
                        ;
                        
# 2166 "<previous_module>"
if (
# 2167 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2168 "<previous_module>"
                        {
                                
# 2169 "<previous_module>"
goto __exit_loop_17;
                                ;
                        }

                        
# 2171 "<previous_module>"
;

# 2172 "<previous_module>"
                        {
                                
# 2173 "<previous_module>"
;
                                ;
                                
# 2174 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2175 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2176 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2177 "<previous_module>"
                                {
                                        
# 2178 "<previous_module>"
tpop_0_29: IF(2,29,tpop_0_30)__CSEQ_removeindent;
                                        
# 2179 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2180 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 2181 "<previous_module>"
goto __exit__lfds711_stack_pop_1_0;
                                        ;
                                }

                                
# 2183 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 30);
                                ;
                                
# 2184 "<previous_module>"
tpop_0_30: IF(2,30,tpop_0_31)__CSEQ_removeindent;
                                
# 2185 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2186 "<previous_module>"
tpop_0_31: IF(2,31,tpop_0_32)__CSEQ_removeindent;
                                
# 2187 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2188 "<previous_module>"
tpop_0_32: IF(2,32,tpop_0_33)__CSEQ_removeindent;
                                
# 2189 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                
# 2190 "<previous_module>"
static int __cs_retval__swap_stack_top_3;

# 2191 "<previous_module>"
                                {
                                        
# 2192 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 2193 "<previous_module>"
tpop_0_33: IF(2,33,tpop_0_34)__CSEQ_removeindent;
                                        
# 2194 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 2195 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 2196 "<previous_module>"
tpop_0_34: IF(2,34,tpop_0_35)__CSEQ_removeindent;
                                        
# 2197 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                                        
# 2198 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 2199 "<previous_module>"
tpop_0_35: IF(2,35,tpop_0_36)__CSEQ_removeindent;
                                        
# 2200 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                                        
# 2201 "<previous_module>"
;
                                        ;
                                        
# 2202 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 2203 "<previous_module>"
tpop_0_36: IF(2,36,tpop_0_37)__CSEQ_removeindent;
                                        
# 2204 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 2205 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 2206 "<previous_module>"
                                        {
                                                
# 2207 "<previous_module>"
tpop_0_37: IF(2,37,tpop_0_38)__CSEQ_removeindent;
                                                
# 2208 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 2209 "<previous_module>"
__cs_retval__swap_stack_top_3 = 1;
                                                
# 2210 "<previous_module>"
goto __exit__swap_stack_top_3_0;
                                                ;
                                        }
                                        else

# 2213 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[2] >= 38);
                                                
# 2214 "<previous_module>"
tpop_0_38: IF(2,38,tpop_0_39)__CSEQ_removeindent;
                                                
# 2215 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 2216 "<previous_module>"
__cs_retval__swap_stack_top_3 = 0;
                                                
# 2217 "<previous_module>"
goto __exit__swap_stack_top_3_0;
                                                ;
                                        }

                                        
# 2219 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 39);
                                        ;
                                        
# 2220 "<previous_module>"
__exit__swap_stack_top_3_0:
                                        __CPROVER_assume(__cs_pc_cs[2] >= 39);

                                        
# 2221 "<previous_module>"
;
                                        ;
                                }
                                
# 2223 "<previous_module>"
;
                                
# 2224 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                                
# 2225 "<previous_module>"
tpop_0_39: IF(2,39,tpop_0_40)__CSEQ_removeindent;
                                
# 2226 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                
# 2227 "<previous_module>"
;
                                ;
                                
# 2228 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2229 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2230 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2231 "<previous_module>"
                                {

# 2232 "<previous_module>"
                                        {
                                                
# 2233 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2234 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 2235 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2236 "<previous_module>"
                                                {
                                                        
# 2237 "<previous_module>"
goto __exit_loop_18;
                                                        ;
                                                }

                                                
# 2239 "<previous_module>"
;

# 2240 "<previous_module>"
                                                {
                                                        
# 2241 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2243 "<previous_module>"
;
                                                
# 2244 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2245 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2246 "<previous_module>"
                                                {
                                                        
# 2247 "<previous_module>"
goto __exit_loop_18;
                                                        ;
                                                }

                                                
# 2249 "<previous_module>"
;

# 2250 "<previous_module>"
                                                {
                                                        
# 2251 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2253 "<previous_module>"
;
                                                
# 2254 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2255 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2256 "<previous_module>"
                                                {
                                                        
# 2257 "<previous_module>"
goto __exit_loop_18;
                                                        ;
                                                }

                                                
# 2259 "<previous_module>"
;

# 2260 "<previous_module>"
                                                {
                                                        
# 2261 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2263 "<previous_module>"
;
                                                
# 2264 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2265 "<previous_module>"
tpop_0_40: IF(2,40,tpop_0_41)__CSEQ_removeindent;
                                                
# 2266 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 2267 "<previous_module>"
__exit_loop_18:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 41);

                                                
# 2268 "<previous_module>"
;
                                                ;
                                                
# 2269 "<previous_module>"
__exit__exponential_backoff_3_0:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 41);

                                                
# 2270 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2272 "<previous_module>"
;
                                        
# 2273 "<previous_module>"
tpop_0_41: IF(2,41,tpop_0_42)__CSEQ_removeindent;
                                        
# 2274 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                        
# 2275 "<previous_module>"
tpop_0_42: IF(2,42,tpop_0_43)__CSEQ_removeindent;
                                        
# 2276 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                }

                                
# 2278 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 43);
                                ;
                                
# 2279 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2280 "<previous_module>"
;
                                ;
                                
# 2281 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                                
# 2282 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                                
# 2283 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)

# 2284 "<previous_module>"
                                {
                                        
# 2285 "<previous_module>"
goto __exit_loop_17;
                                        ;
                                }

                                
# 2287 "<previous_module>"
;
                        }
                        
# 2289 "<previous_module>"
;
                        
# 2290 "<previous_module>"
if (
# 2291 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2292 "<previous_module>"
                        {
                                
# 2293 "<previous_module>"
goto __exit_loop_17;
                                ;
                        }

                        
# 2295 "<previous_module>"
;

# 2296 "<previous_module>"
                        {
                                
# 2297 "<previous_module>"
;
                                ;
                                
# 2298 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2299 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2300 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2301 "<previous_module>"
                                {
                                        
# 2302 "<previous_module>"
tpop_0_43: IF(2,43,tpop_0_44)__CSEQ_removeindent;
                                        
# 2303 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2304 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 2305 "<previous_module>"
goto __exit__lfds711_stack_pop_1_0;
                                        ;
                                }

                                
# 2307 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 44);
                                ;
                                
# 2308 "<previous_module>"
tpop_0_44: IF(2,44,tpop_0_45)__CSEQ_removeindent;
                                
# 2309 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2310 "<previous_module>"
tpop_0_45: IF(2,45,tpop_0_46)__CSEQ_removeindent;
                                
# 2311 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2312 "<previous_module>"
tpop_0_46: IF(2,46,tpop_0_47)__CSEQ_removeindent;
                                
# 2313 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                
# 2314 "<previous_module>"
static int __cs_retval__swap_stack_top_3;

# 2315 "<previous_module>"
                                {
                                        
# 2316 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 2317 "<previous_module>"
tpop_0_47: IF(2,47,tpop_0_48)__CSEQ_removeindent;
                                        
# 2318 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 2319 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 2320 "<previous_module>"
tpop_0_48: IF(2,48,tpop_0_49)__CSEQ_removeindent;
                                        
# 2321 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                                        
# 2322 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 2323 "<previous_module>"
tpop_0_49: IF(2,49,tpop_0_50)__CSEQ_removeindent;
                                        
# 2324 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                                        
# 2325 "<previous_module>"
;
                                        ;
                                        
# 2326 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 2327 "<previous_module>"
tpop_0_50: IF(2,50,tpop_0_51)__CSEQ_removeindent;
                                        
# 2328 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 2329 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 2330 "<previous_module>"
                                        {
                                                
# 2331 "<previous_module>"
tpop_0_51: IF(2,51,tpop_0_52)__CSEQ_removeindent;
                                                
# 2332 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 2333 "<previous_module>"
__cs_retval__swap_stack_top_3 = 1;
                                                
# 2334 "<previous_module>"
goto __exit__swap_stack_top_3_1;
                                                ;
                                        }
                                        else

# 2337 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[2] >= 52);
                                                
# 2338 "<previous_module>"
tpop_0_52: IF(2,52,tpop_0_53)__CSEQ_removeindent;
                                                
# 2339 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 2340 "<previous_module>"
__cs_retval__swap_stack_top_3 = 0;
                                                
# 2341 "<previous_module>"
goto __exit__swap_stack_top_3_1;
                                                ;
                                        }

                                        
# 2343 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 53);
                                        ;
                                        
# 2344 "<previous_module>"
__exit__swap_stack_top_3_1:
                                        __CPROVER_assume(__cs_pc_cs[2] >= 53);

                                        
# 2345 "<previous_module>"
;
                                        ;
                                }
                                
# 2347 "<previous_module>"
;
                                
# 2348 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                                
# 2349 "<previous_module>"
tpop_0_53: IF(2,53,tpop_0_54)__CSEQ_removeindent;
                                
# 2350 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                
# 2351 "<previous_module>"
;
                                ;
                                
# 2352 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2353 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2354 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2355 "<previous_module>"
                                {

# 2356 "<previous_module>"
                                        {
                                                
# 2357 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2358 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 2359 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2360 "<previous_module>"
                                                {
                                                        
# 2361 "<previous_module>"
goto __exit_loop_19;
                                                        ;
                                                }

                                                
# 2363 "<previous_module>"
;

# 2364 "<previous_module>"
                                                {
                                                        
# 2365 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2367 "<previous_module>"
;
                                                
# 2368 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2369 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2370 "<previous_module>"
                                                {
                                                        
# 2371 "<previous_module>"
goto __exit_loop_19;
                                                        ;
                                                }

                                                
# 2373 "<previous_module>"
;

# 2374 "<previous_module>"
                                                {
                                                        
# 2375 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2377 "<previous_module>"
;
                                                
# 2378 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2379 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2380 "<previous_module>"
                                                {
                                                        
# 2381 "<previous_module>"
goto __exit_loop_19;
                                                        ;
                                                }

                                                
# 2383 "<previous_module>"
;

# 2384 "<previous_module>"
                                                {
                                                        
# 2385 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2387 "<previous_module>"
;
                                                
# 2388 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2389 "<previous_module>"
tpop_0_54: IF(2,54,tpop_0_55)__CSEQ_removeindent;
                                                
# 2390 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 2391 "<previous_module>"
__exit_loop_19:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 55);

                                                
# 2392 "<previous_module>"
;
                                                ;
                                                
# 2393 "<previous_module>"
__exit__exponential_backoff_3_1:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 55);

                                                
# 2394 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2396 "<previous_module>"
;
                                        
# 2397 "<previous_module>"
tpop_0_55: IF(2,55,tpop_0_56)__CSEQ_removeindent;
                                        
# 2398 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                        
# 2399 "<previous_module>"
tpop_0_56: IF(2,56,tpop_0_57)__CSEQ_removeindent;
                                        
# 2400 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                }

                                
# 2402 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 57);
                                ;
                                
# 2403 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2404 "<previous_module>"
;
                                ;
                                
# 2405 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                                
# 2406 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                                
# 2407 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)

# 2408 "<previous_module>"
                                {
                                        
# 2409 "<previous_module>"
goto __exit_loop_17;
                                        ;
                                }

                                
# 2411 "<previous_module>"
;
                        }
                        
# 2413 "<previous_module>"
;
                        
# 2414 "<previous_module>"
if (
# 2415 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2416 "<previous_module>"
                        {
                                
# 2417 "<previous_module>"
goto __exit_loop_17;
                                ;
                        }

                        
# 2419 "<previous_module>"
;

# 2420 "<previous_module>"
                        {
                                
# 2421 "<previous_module>"
;
                                ;
                                
# 2422 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2423 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2424 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2425 "<previous_module>"
                                {
                                        
# 2426 "<previous_module>"
tpop_0_57: IF(2,57,tpop_0_58)__CSEQ_removeindent;
                                        
# 2427 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2428 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 2429 "<previous_module>"
goto __exit__lfds711_stack_pop_1_0;
                                        ;
                                }

                                
# 2431 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 58);
                                ;
                                
# 2432 "<previous_module>"
tpop_0_58: IF(2,58,tpop_0_59)__CSEQ_removeindent;
                                
# 2433 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2434 "<previous_module>"
tpop_0_59: IF(2,59,tpop_0_60)__CSEQ_removeindent;
                                
# 2435 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2436 "<previous_module>"
tpop_0_60: IF(2,60,tpop_0_61)__CSEQ_removeindent;
                                
# 2437 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                
# 2438 "<previous_module>"
static int __cs_retval__swap_stack_top_3;

# 2439 "<previous_module>"
                                {
                                        
# 2440 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 2441 "<previous_module>"
tpop_0_61: IF(2,61,tpop_0_62)__CSEQ_removeindent;
                                        
# 2442 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 2443 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 2444 "<previous_module>"
tpop_0_62: IF(2,62,tpop_0_63)__CSEQ_removeindent;
                                        
# 2445 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                                        
# 2446 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 2447 "<previous_module>"
tpop_0_63: IF(2,63,tpop_0_64)__CSEQ_removeindent;
                                        
# 2448 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                                        
# 2449 "<previous_module>"
;
                                        ;
                                        
# 2450 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 2451 "<previous_module>"
tpop_0_64: IF(2,64,tpop_0_65)__CSEQ_removeindent;
                                        
# 2452 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 2453 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 2454 "<previous_module>"
                                        {
                                                
# 2455 "<previous_module>"
tpop_0_65: IF(2,65,tpop_0_66)__CSEQ_removeindent;
                                                
# 2456 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 2457 "<previous_module>"
__cs_retval__swap_stack_top_3 = 1;
                                                
# 2458 "<previous_module>"
goto __exit__swap_stack_top_3_2;
                                                ;
                                        }
                                        else

# 2461 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[2] >= 66);
                                                
# 2462 "<previous_module>"
tpop_0_66: IF(2,66,tpop_0_67)__CSEQ_removeindent;
                                                
# 2463 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 2464 "<previous_module>"
__cs_retval__swap_stack_top_3 = 0;
                                                
# 2465 "<previous_module>"
goto __exit__swap_stack_top_3_2;
                                                ;
                                        }

                                        
# 2467 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 67);
                                        ;
                                        
# 2468 "<previous_module>"
__exit__swap_stack_top_3_2:
                                        __CPROVER_assume(__cs_pc_cs[2] >= 67);

                                        
# 2469 "<previous_module>"
;
                                        ;
                                }
                                
# 2471 "<previous_module>"
;
                                
# 2472 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                                
# 2473 "<previous_module>"
tpop_0_67: IF(2,67,tpop_0_68)__CSEQ_removeindent;
                                
# 2474 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                
# 2475 "<previous_module>"
;
                                ;
                                
# 2476 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2477 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2478 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2479 "<previous_module>"
                                {

# 2480 "<previous_module>"
                                        {
                                                
# 2481 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2482 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 2483 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2484 "<previous_module>"
                                                {
                                                        
# 2485 "<previous_module>"
goto __exit_loop_20;
                                                        ;
                                                }

                                                
# 2487 "<previous_module>"
;

# 2488 "<previous_module>"
                                                {
                                                        
# 2489 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2491 "<previous_module>"
;
                                                
# 2492 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2493 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2494 "<previous_module>"
                                                {
                                                        
# 2495 "<previous_module>"
goto __exit_loop_20;
                                                        ;
                                                }

                                                
# 2497 "<previous_module>"
;

# 2498 "<previous_module>"
                                                {
                                                        
# 2499 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2501 "<previous_module>"
;
                                                
# 2502 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2503 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2504 "<previous_module>"
                                                {
                                                        
# 2505 "<previous_module>"
goto __exit_loop_20;
                                                        ;
                                                }

                                                
# 2507 "<previous_module>"
;

# 2508 "<previous_module>"
                                                {
                                                        
# 2509 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2511 "<previous_module>"
;
                                                
# 2512 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2513 "<previous_module>"
tpop_0_68: IF(2,68,tpop_0_69)__CSEQ_removeindent;
                                                
# 2514 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 2515 "<previous_module>"
__exit_loop_20:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 69);

                                                
# 2516 "<previous_module>"
;
                                                ;
                                                
# 2517 "<previous_module>"
__exit__exponential_backoff_3_2:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 69);

                                                
# 2518 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2520 "<previous_module>"
;
                                        
# 2521 "<previous_module>"
tpop_0_69: IF(2,69,tpop_0_70)__CSEQ_removeindent;
                                        
# 2522 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                        
# 2523 "<previous_module>"
tpop_0_70: IF(2,70,tpop_0_71)__CSEQ_removeindent;
                                        
# 2524 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                }

                                
# 2526 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 71);
                                ;
                                
# 2527 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2528 "<previous_module>"
;
                                ;
                                
# 2529 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                                
# 2530 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                                
# 2531 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)

# 2532 "<previous_module>"
                                {
                                        
# 2533 "<previous_module>"
goto __exit_loop_17;
                                        ;
                                }

                                
# 2535 "<previous_module>"
;
                        }
                        
# 2537 "<previous_module>"
;
                        
# 2538 "<previous_module>"
tpop_0_71: IF(2,71,tpop_0_72)__CSEQ_removeindent;
                        
# 2539 "<previous_module>"
__CPROVER_assume(
# 2540 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                        
# 2541 "<previous_module>"
__exit_loop_17:
                        __CPROVER_assume(__cs_pc_cs[2] >= 72);

                        
# 2542 "<previous_module>"
;
                        ;
                        
# 2543 "<previous_module>"
tpop_0_72: IF(2,72,tpop_0_73)__CSEQ_removeindent;
                        
# 2544 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                        
# 2545 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 1;
                        
# 2546 "<previous_module>"
goto __exit__lfds711_stack_pop_1_0;
                        ;
                        
# 2547 "<previous_module>"
__exit__lfds711_stack_pop_1_0:
                        __CPROVER_assume(__cs_pc_cs[2] >= 73);

                        
# 2548 "<previous_module>"
;
                        ;
                }
                
# 2550 "<previous_module>"
;
                
# 2551 "<previous_module>"
__cs_local_pop_res = __cs_retval__lfds711_stack_pop_1;
                
# 2552 "<previous_module>"
;
                ;
                
# 2553 "<previous_module>"
;
                ;
                
# 2554 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_21;
                
# 2555 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_21 = __cs_local_pop_res == 0;
                
# 2556 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_21)

# 2557 "<previous_module>"
                {
                        
# 2558 "<previous_module>"
goto __continue_0_loop_14;
                        ;
                }

                
# 2560 "<previous_module>"
;
                
# 2561 "<previous_module>"
tpop_0_73: IF(2,73,tpop_0_74)__CSEQ_removeindent;
                
# 2562 "<previous_module>"
__cs_local_pop_temp_td = (*__cs_local_pop_se).value;
                
# 2563 "<previous_module>"
__cs_local_pop_count++;
                
# 2564 "<previous_module>"
tpop_0_74: IF(2,74,tpop_0_75)__CSEQ_removeindent;
                
# 2565 "<previous_module>"
printf("%llu\n", (*__cs_local_pop_temp_td).user_id);
        }
        
# 2567 "<previous_module>"
;
        
# 2568 "<previous_module>"
__cs_local_pop_loop++;
        
# 2569 "<previous_module>"
__continue_0_loop_14:
        __CPROVER_assume(__cs_pc_cs[2] >= 75);

        
# 2570 "<previous_module>"
;
        ;

# 2571 "<previous_module>"
        {
                
# 2572 "<previous_module>"
tpop_0_75: IF(2,75,tpop_0_76)__CSEQ_removeindent;
                
# 2573 "<previous_module>"
__cs_local_pop_temp_td = 0;
                
# 2574 "<previous_module>"
;
                ;
                
# 2575 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_1;

# 2576 "<previous_module>"
                {
                        
# 2577 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                        
# 2578 "<previous_module>"
tpop_0_76: IF(2,76,tpop_0_77)__CSEQ_removeindent;
                        
# 2579 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = &ss;
                        
# 2580 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                        
# 2581 "<previous_module>"
tpop_0_77: IF(2,77,tpop_0_78)__CSEQ_removeindent;
                        
# 2582 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_pop_se;
                        
# 2583 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                        
# 2584 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                        
# 2585 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                        
# 2586 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                        
# 2587 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                        
# 2588 "<previous_module>"
;
                        ;
                        
# 2589 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                        
# 2590 "<previous_module>"
tpop_0_78: IF(2,78,tpop_0_79)__CSEQ_removeindent;
                        
# 2591 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_ss != 0);
                        
# 2592 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 2593 "<previous_module>"
                        {
                                
# 2594 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 2595 "<previous_module>"
tpop_0_79: IF(2,79,tpop_0_80)__CSEQ_removeindent;
                                
# 2596 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 2597 "<previous_module>"
tpop_0_80: IF(2,80,tpop_0_81)__CSEQ_removeindent;
                                
# 2598 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 2600 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 81);
                        ;
                        
# 2601 "<previous_module>"
;
                        ;
                        
# 2602 "<previous_module>"
;
                        ;
                        
# 2603 "<previous_module>"
;
                        ;
                        
# 2604 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                        
# 2605 "<previous_module>"
tpop_0_81: IF(2,81,tpop_0_82)__CSEQ_removeindent;
                        
# 2606 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = !(__cs_param_lfds711_stack_pop_se != 0);
                        
# 2607 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 2608 "<previous_module>"
                        {
                                
# 2609 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 2610 "<previous_module>"
tpop_0_82: IF(2,82,tpop_0_83)__CSEQ_removeindent;
                                
# 2611 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 2612 "<previous_module>"
tpop_0_83: IF(2,83,tpop_0_84)__CSEQ_removeindent;
                                
# 2613 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 2615 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 84);
                        ;
                        
# 2616 "<previous_module>"
;
                        ;
                        
# 2617 "<previous_module>"
;
                        ;
                        
# 2618 "<previous_module>"
tpop_0_84: IF(2,84,tpop_0_85)__CSEQ_removeindent;
                        
# 2619 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                        
# 2620 "<previous_module>"
tpop_0_85: IF(2,85,tpop_0_86)__CSEQ_removeindent;
                        
# 2621 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                        
# 2622 "<previous_module>"
tpop_0_86: IF(2,86,tpop_0_87)__CSEQ_removeindent;
                        
# 2623 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                        
# 2624 "<previous_module>"
tpop_0_87: IF(2,87,tpop_0_88)__CSEQ_removeindent;
                        
# 2625 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                        
# 2626 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                        
# 2627 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                        
# 2628 "<previous_module>"
;
                        ;
                        
# 2629 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                        
# 2630 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 2631 "<previous_module>"
                        {
                                
# 2632 "<previous_module>"
;
                                ;
                                
# 2633 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                
# 2634 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2635 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 2636 "<previous_module>"
                                {
                                        
# 2637 "<previous_module>"
tpop_0_88: IF(2,88,tpop_0_89)__CSEQ_removeindent;
                                        
# 2638 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2639 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 2640 "<previous_module>"
goto __exit__lfds711_stack_pop_1_1;
                                        ;
                                }

                                
# 2642 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 89);
                                ;
                                
# 2643 "<previous_module>"
tpop_0_89: IF(2,89,tpop_0_90)__CSEQ_removeindent;
                                
# 2644 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2645 "<previous_module>"
tpop_0_90: IF(2,90,tpop_0_91)__CSEQ_removeindent;
                                
# 2646 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2647 "<previous_module>"
tpop_0_91: IF(2,91,tpop_0_92)__CSEQ_removeindent;
                                
# 2648 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                
# 2649 "<previous_module>"
static int __cs_retval__swap_stack_top_2;

# 2650 "<previous_module>"
                                {
                                        
# 2651 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 2652 "<previous_module>"
tpop_0_92: IF(2,92,tpop_0_93)__CSEQ_removeindent;
                                        
# 2653 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 2654 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 2655 "<previous_module>"
tpop_0_93: IF(2,93,tpop_0_94)__CSEQ_removeindent;
                                        
# 2656 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                                        
# 2657 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 2658 "<previous_module>"
tpop_0_94: IF(2,94,tpop_0_95)__CSEQ_removeindent;
                                        
# 2659 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                                        
# 2660 "<previous_module>"
;
                                        ;
                                        
# 2661 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 2662 "<previous_module>"
tpop_0_95: IF(2,95,tpop_0_96)__CSEQ_removeindent;
                                        
# 2663 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 2664 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 2665 "<previous_module>"
                                        {
                                                
# 2666 "<previous_module>"
tpop_0_96: IF(2,96,tpop_0_97)__CSEQ_removeindent;
                                                
# 2667 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 2668 "<previous_module>"
__cs_retval__swap_stack_top_2 = 1;
                                                
# 2669 "<previous_module>"
goto __exit__swap_stack_top_2_1;
                                                ;
                                        }
                                        else

# 2672 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[2] >= 97);
                                                
# 2673 "<previous_module>"
tpop_0_97: IF(2,97,tpop_0_98)__CSEQ_removeindent;
                                                
# 2674 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 2675 "<previous_module>"
__cs_retval__swap_stack_top_2 = 0;
                                                
# 2676 "<previous_module>"
goto __exit__swap_stack_top_2_1;
                                                ;
                                        }

                                        
# 2678 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 98);
                                        ;
                                        
# 2679 "<previous_module>"
__exit__swap_stack_top_2_1:
                                        __CPROVER_assume(__cs_pc_cs[2] >= 98);

                                        
# 2680 "<previous_module>"
;
                                        ;
                                }
                                
# 2682 "<previous_module>"
;
                                
# 2683 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_2;
                                
# 2684 "<previous_module>"
tpop_0_98: IF(2,98,tpop_0_99)__CSEQ_removeindent;
                                
# 2685 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                
# 2686 "<previous_module>"
;
                                ;
                                
# 2687 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                
# 2688 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2689 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 2690 "<previous_module>"
                                {

# 2691 "<previous_module>"
                                        {
                                                
# 2692 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2693 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 2694 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2695 "<previous_module>"
                                                {
                                                        
# 2696 "<previous_module>"
goto __exit_loop_22;
                                                        ;
                                                }

                                                
# 2698 "<previous_module>"
;

# 2699 "<previous_module>"
                                                {
                                                        
# 2700 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2702 "<previous_module>"
;
                                                
# 2703 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2704 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2705 "<previous_module>"
                                                {
                                                        
# 2706 "<previous_module>"
goto __exit_loop_22;
                                                        ;
                                                }

                                                
# 2708 "<previous_module>"
;

# 2709 "<previous_module>"
                                                {
                                                        
# 2710 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2712 "<previous_module>"
;
                                                
# 2713 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2714 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2715 "<previous_module>"
                                                {
                                                        
# 2716 "<previous_module>"
goto __exit_loop_22;
                                                        ;
                                                }

                                                
# 2718 "<previous_module>"
;

# 2719 "<previous_module>"
                                                {
                                                        
# 2720 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2722 "<previous_module>"
;
                                                
# 2723 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2724 "<previous_module>"
tpop_0_99: IF(2,99,tpop_0_100)__CSEQ_removeindent;
                                                
# 2725 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 2726 "<previous_module>"
__exit_loop_22:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 100);

                                                
# 2727 "<previous_module>"
;
                                                ;
                                                
# 2728 "<previous_module>"
__exit__exponential_backoff_2_1:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 100);

                                                
# 2729 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2731 "<previous_module>"
;
                                        
# 2732 "<previous_module>"
tpop_0_100: IF(2,100,tpop_0_101)__CSEQ_removeindent;
                                        
# 2733 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                        
# 2734 "<previous_module>"
tpop_0_101: IF(2,101,tpop_0_102)__CSEQ_removeindent;
                                        
# 2735 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                }

                                
# 2737 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 102);
                                ;
                                
# 2738 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2739 "<previous_module>"
;
                                ;
                                
# 2740 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2741 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 100;
                                
# 2742 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2743 "<previous_module>"
                                {
                                        
# 2744 "<previous_module>"
goto __exit_loop_21;
                                        ;
                                }

                                
# 2746 "<previous_module>"
;
                        }
                        
# 2748 "<previous_module>"
;
                        
# 2749 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                        
# 2750 "<previous_module>"
tpop_0_102: IF(2,102,tpop_0_103)__CSEQ_removeindent;
                        
# 2751 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                        
# 2752 "<previous_module>"
__exit_loop_21:
                        __CPROVER_assume(__cs_pc_cs[2] >= 103);

                        
# 2753 "<previous_module>"
;
                        ;
                        
# 2754 "<previous_module>"
if (
# 2755 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2756 "<previous_module>"
                        {
                                
# 2757 "<previous_module>"
goto __exit_loop_23;
                                ;
                        }

                        
# 2759 "<previous_module>"
;

# 2760 "<previous_module>"
                        {
                                
# 2761 "<previous_module>"
;
                                ;
                                
# 2762 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2763 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2764 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2765 "<previous_module>"
                                {
                                        
# 2766 "<previous_module>"
tpop_0_103: IF(2,103,tpop_0_104)__CSEQ_removeindent;
                                        
# 2767 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2768 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 2769 "<previous_module>"
goto __exit__lfds711_stack_pop_1_1;
                                        ;
                                }

                                
# 2771 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 104);
                                ;
                                
# 2772 "<previous_module>"
tpop_0_104: IF(2,104,tpop_0_105)__CSEQ_removeindent;
                                
# 2773 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2774 "<previous_module>"
tpop_0_105: IF(2,105,tpop_0_106)__CSEQ_removeindent;
                                
# 2775 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2776 "<previous_module>"
tpop_0_106: IF(2,106,tpop_0_107)__CSEQ_removeindent;
                                
# 2777 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                
# 2778 "<previous_module>"
static int __cs_retval__swap_stack_top_3;

# 2779 "<previous_module>"
                                {
                                        
# 2780 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 2781 "<previous_module>"
tpop_0_107: IF(2,107,tpop_0_108)__CSEQ_removeindent;
                                        
# 2782 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 2783 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 2784 "<previous_module>"
tpop_0_108: IF(2,108,tpop_0_109)__CSEQ_removeindent;
                                        
# 2785 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                                        
# 2786 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 2787 "<previous_module>"
tpop_0_109: IF(2,109,tpop_0_110)__CSEQ_removeindent;
                                        
# 2788 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                                        
# 2789 "<previous_module>"
;
                                        ;
                                        
# 2790 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 2791 "<previous_module>"
tpop_0_110: IF(2,110,tpop_0_111)__CSEQ_removeindent;
                                        
# 2792 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 2793 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 2794 "<previous_module>"
                                        {
                                                
# 2795 "<previous_module>"
tpop_0_111: IF(2,111,tpop_0_112)__CSEQ_removeindent;
                                                
# 2796 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 2797 "<previous_module>"
__cs_retval__swap_stack_top_3 = 1;
                                                
# 2798 "<previous_module>"
goto __exit__swap_stack_top_3_3;
                                                ;
                                        }
                                        else

# 2801 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[2] >= 112);
                                                
# 2802 "<previous_module>"
tpop_0_112: IF(2,112,tpop_0_113)__CSEQ_removeindent;
                                                
# 2803 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 2804 "<previous_module>"
__cs_retval__swap_stack_top_3 = 0;
                                                
# 2805 "<previous_module>"
goto __exit__swap_stack_top_3_3;
                                                ;
                                        }

                                        
# 2807 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 113);
                                        ;
                                        
# 2808 "<previous_module>"
__exit__swap_stack_top_3_3:
                                        __CPROVER_assume(__cs_pc_cs[2] >= 113);

                                        
# 2809 "<previous_module>"
;
                                        ;
                                }
                                
# 2811 "<previous_module>"
;
                                
# 2812 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                                
# 2813 "<previous_module>"
tpop_0_113: IF(2,113,tpop_0_114)__CSEQ_removeindent;
                                
# 2814 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                
# 2815 "<previous_module>"
;
                                ;
                                
# 2816 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2817 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2818 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2819 "<previous_module>"
                                {

# 2820 "<previous_module>"
                                        {
                                                
# 2821 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2822 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 2823 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2824 "<previous_module>"
                                                {
                                                        
# 2825 "<previous_module>"
goto __exit_loop_24;
                                                        ;
                                                }

                                                
# 2827 "<previous_module>"
;

# 2828 "<previous_module>"
                                                {
                                                        
# 2829 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2831 "<previous_module>"
;
                                                
# 2832 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2833 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2834 "<previous_module>"
                                                {
                                                        
# 2835 "<previous_module>"
goto __exit_loop_24;
                                                        ;
                                                }

                                                
# 2837 "<previous_module>"
;

# 2838 "<previous_module>"
                                                {
                                                        
# 2839 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2841 "<previous_module>"
;
                                                
# 2842 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2843 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2844 "<previous_module>"
                                                {
                                                        
# 2845 "<previous_module>"
goto __exit_loop_24;
                                                        ;
                                                }

                                                
# 2847 "<previous_module>"
;

# 2848 "<previous_module>"
                                                {
                                                        
# 2849 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2851 "<previous_module>"
;
                                                
# 2852 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2853 "<previous_module>"
tpop_0_114: IF(2,114,tpop_0_115)__CSEQ_removeindent;
                                                
# 2854 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 2855 "<previous_module>"
__exit_loop_24:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 115);

                                                
# 2856 "<previous_module>"
;
                                                ;
                                                
# 2857 "<previous_module>"
__exit__exponential_backoff_3_3:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 115);

                                                
# 2858 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2860 "<previous_module>"
;
                                        
# 2861 "<previous_module>"
tpop_0_115: IF(2,115,tpop_0_116)__CSEQ_removeindent;
                                        
# 2862 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                        
# 2863 "<previous_module>"
tpop_0_116: IF(2,116,tpop_0_117)__CSEQ_removeindent;
                                        
# 2864 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                }

                                
# 2866 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 117);
                                ;
                                
# 2867 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2868 "<previous_module>"
;
                                ;
                                
# 2869 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                                
# 2870 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                                
# 2871 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)

# 2872 "<previous_module>"
                                {
                                        
# 2873 "<previous_module>"
goto __exit_loop_23;
                                        ;
                                }

                                
# 2875 "<previous_module>"
;
                        }
                        
# 2877 "<previous_module>"
;
                        
# 2878 "<previous_module>"
if (
# 2879 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2880 "<previous_module>"
                        {
                                
# 2881 "<previous_module>"
goto __exit_loop_23;
                                ;
                        }

                        
# 2883 "<previous_module>"
;

# 2884 "<previous_module>"
                        {
                                
# 2885 "<previous_module>"
;
                                ;
                                
# 2886 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2887 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2888 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2889 "<previous_module>"
                                {
                                        
# 2890 "<previous_module>"
tpop_0_117: IF(2,117,tpop_0_118)__CSEQ_removeindent;
                                        
# 2891 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2892 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 2893 "<previous_module>"
goto __exit__lfds711_stack_pop_1_1;
                                        ;
                                }

                                
# 2895 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 118);
                                ;
                                
# 2896 "<previous_module>"
tpop_0_118: IF(2,118,tpop_0_119)__CSEQ_removeindent;
                                
# 2897 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2898 "<previous_module>"
tpop_0_119: IF(2,119,tpop_0_120)__CSEQ_removeindent;
                                
# 2899 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2900 "<previous_module>"
tpop_0_120: IF(2,120,tpop_0_121)__CSEQ_removeindent;
                                
# 2901 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                
# 2902 "<previous_module>"
static int __cs_retval__swap_stack_top_3;

# 2903 "<previous_module>"
                                {
                                        
# 2904 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 2905 "<previous_module>"
tpop_0_121: IF(2,121,tpop_0_122)__CSEQ_removeindent;
                                        
# 2906 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 2907 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 2908 "<previous_module>"
tpop_0_122: IF(2,122,tpop_0_123)__CSEQ_removeindent;
                                        
# 2909 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                                        
# 2910 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 2911 "<previous_module>"
tpop_0_123: IF(2,123,tpop_0_124)__CSEQ_removeindent;
                                        
# 2912 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                                        
# 2913 "<previous_module>"
;
                                        ;
                                        
# 2914 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 2915 "<previous_module>"
tpop_0_124: IF(2,124,tpop_0_125)__CSEQ_removeindent;
                                        
# 2916 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 2917 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 2918 "<previous_module>"
                                        {
                                                
# 2919 "<previous_module>"
tpop_0_125: IF(2,125,tpop_0_126)__CSEQ_removeindent;
                                                
# 2920 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 2921 "<previous_module>"
__cs_retval__swap_stack_top_3 = 1;
                                                
# 2922 "<previous_module>"
goto __exit__swap_stack_top_3_4;
                                                ;
                                        }
                                        else

# 2925 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[2] >= 126);
                                                
# 2926 "<previous_module>"
tpop_0_126: IF(2,126,tpop_0_127)__CSEQ_removeindent;
                                                
# 2927 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 2928 "<previous_module>"
__cs_retval__swap_stack_top_3 = 0;
                                                
# 2929 "<previous_module>"
goto __exit__swap_stack_top_3_4;
                                                ;
                                        }

                                        
# 2931 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 127);
                                        ;
                                        
# 2932 "<previous_module>"
__exit__swap_stack_top_3_4:
                                        __CPROVER_assume(__cs_pc_cs[2] >= 127);

                                        
# 2933 "<previous_module>"
;
                                        ;
                                }
                                
# 2935 "<previous_module>"
;
                                
# 2936 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                                
# 2937 "<previous_module>"
tpop_0_127: IF(2,127,tpop_0_128)__CSEQ_removeindent;
                                
# 2938 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                
# 2939 "<previous_module>"
;
                                ;
                                
# 2940 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2941 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2942 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2943 "<previous_module>"
                                {

# 2944 "<previous_module>"
                                        {
                                                
# 2945 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2946 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 2947 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2948 "<previous_module>"
                                                {
                                                        
# 2949 "<previous_module>"
goto __exit_loop_25;
                                                        ;
                                                }

                                                
# 2951 "<previous_module>"
;

# 2952 "<previous_module>"
                                                {
                                                        
# 2953 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2955 "<previous_module>"
;
                                                
# 2956 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2957 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2958 "<previous_module>"
                                                {
                                                        
# 2959 "<previous_module>"
goto __exit_loop_25;
                                                        ;
                                                }

                                                
# 2961 "<previous_module>"
;

# 2962 "<previous_module>"
                                                {
                                                        
# 2963 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2965 "<previous_module>"
;
                                                
# 2966 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2967 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 2968 "<previous_module>"
                                                {
                                                        
# 2969 "<previous_module>"
goto __exit_loop_25;
                                                        ;
                                                }

                                                
# 2971 "<previous_module>"
;

# 2972 "<previous_module>"
                                                {
                                                        
# 2973 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2975 "<previous_module>"
;
                                                
# 2976 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 2977 "<previous_module>"
tpop_0_128: IF(2,128,tpop_0_129)__CSEQ_removeindent;
                                                
# 2978 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 2979 "<previous_module>"
__exit_loop_25:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 129);

                                                
# 2980 "<previous_module>"
;
                                                ;
                                                
# 2981 "<previous_module>"
__exit__exponential_backoff_3_4:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 129);

                                                
# 2982 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2984 "<previous_module>"
;
                                        
# 2985 "<previous_module>"
tpop_0_129: IF(2,129,tpop_0_130)__CSEQ_removeindent;
                                        
# 2986 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                        
# 2987 "<previous_module>"
tpop_0_130: IF(2,130,tpop_0_131)__CSEQ_removeindent;
                                        
# 2988 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                }

                                
# 2990 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 131);
                                ;
                                
# 2991 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2992 "<previous_module>"
;
                                ;
                                
# 2993 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                                
# 2994 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                                
# 2995 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)

# 2996 "<previous_module>"
                                {
                                        
# 2997 "<previous_module>"
goto __exit_loop_23;
                                        ;
                                }

                                
# 2999 "<previous_module>"
;
                        }
                        
# 3001 "<previous_module>"
;
                        
# 3002 "<previous_module>"
if (
# 3003 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3004 "<previous_module>"
                        {
                                
# 3005 "<previous_module>"
goto __exit_loop_23;
                                ;
                        }

                        
# 3007 "<previous_module>"
;

# 3008 "<previous_module>"
                        {
                                
# 3009 "<previous_module>"
;
                                ;
                                
# 3010 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 3011 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 3012 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3013 "<previous_module>"
                                {
                                        
# 3014 "<previous_module>"
tpop_0_131: IF(2,131,tpop_0_132)__CSEQ_removeindent;
                                        
# 3015 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 3016 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 3017 "<previous_module>"
goto __exit__lfds711_stack_pop_1_1;
                                        ;
                                }

                                
# 3019 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 132);
                                ;
                                
# 3020 "<previous_module>"
tpop_0_132: IF(2,132,tpop_0_133)__CSEQ_removeindent;
                                
# 3021 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 3022 "<previous_module>"
tpop_0_133: IF(2,133,tpop_0_134)__CSEQ_removeindent;
                                
# 3023 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 3024 "<previous_module>"
tpop_0_134: IF(2,134,tpop_0_135)__CSEQ_removeindent;
                                
# 3025 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                
# 3026 "<previous_module>"
static int __cs_retval__swap_stack_top_3;

# 3027 "<previous_module>"
                                {
                                        
# 3028 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 3029 "<previous_module>"
tpop_0_135: IF(2,135,tpop_0_136)__CSEQ_removeindent;
                                        
# 3030 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 3031 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 3032 "<previous_module>"
tpop_0_136: IF(2,136,tpop_0_137)__CSEQ_removeindent;
                                        
# 3033 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                                        
# 3034 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 3035 "<previous_module>"
tpop_0_137: IF(2,137,tpop_0_138)__CSEQ_removeindent;
                                        
# 3036 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                                        
# 3037 "<previous_module>"
;
                                        ;
                                        
# 3038 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 3039 "<previous_module>"
tpop_0_138: IF(2,138,tpop_0_139)__CSEQ_removeindent;
                                        
# 3040 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 3041 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 3042 "<previous_module>"
                                        {
                                                
# 3043 "<previous_module>"
tpop_0_139: IF(2,139,tpop_0_140)__CSEQ_removeindent;
                                                
# 3044 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 3045 "<previous_module>"
__cs_retval__swap_stack_top_3 = 1;
                                                
# 3046 "<previous_module>"
goto __exit__swap_stack_top_3_5;
                                                ;
                                        }
                                        else

# 3049 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[2] >= 140);
                                                
# 3050 "<previous_module>"
tpop_0_140: IF(2,140,tpop_0_141)__CSEQ_removeindent;
                                                
# 3051 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 3052 "<previous_module>"
__cs_retval__swap_stack_top_3 = 0;
                                                
# 3053 "<previous_module>"
goto __exit__swap_stack_top_3_5;
                                                ;
                                        }

                                        
# 3055 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 141);
                                        ;
                                        
# 3056 "<previous_module>"
__exit__swap_stack_top_3_5:
                                        __CPROVER_assume(__cs_pc_cs[2] >= 141);

                                        
# 3057 "<previous_module>"
;
                                        ;
                                }
                                
# 3059 "<previous_module>"
;
                                
# 3060 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                                
# 3061 "<previous_module>"
tpop_0_141: IF(2,141,tpop_0_142)__CSEQ_removeindent;
                                
# 3062 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                
# 3063 "<previous_module>"
;
                                ;
                                
# 3064 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 3065 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 3066 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3067 "<previous_module>"
                                {

# 3068 "<previous_module>"
                                        {
                                                
# 3069 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 3070 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 3071 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3072 "<previous_module>"
                                                {
                                                        
# 3073 "<previous_module>"
goto __exit_loop_26;
                                                        ;
                                                }

                                                
# 3075 "<previous_module>"
;

# 3076 "<previous_module>"
                                                {
                                                        
# 3077 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3079 "<previous_module>"
;
                                                
# 3080 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3081 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3082 "<previous_module>"
                                                {
                                                        
# 3083 "<previous_module>"
goto __exit_loop_26;
                                                        ;
                                                }

                                                
# 3085 "<previous_module>"
;

# 3086 "<previous_module>"
                                                {
                                                        
# 3087 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3089 "<previous_module>"
;
                                                
# 3090 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3091 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3092 "<previous_module>"
                                                {
                                                        
# 3093 "<previous_module>"
goto __exit_loop_26;
                                                        ;
                                                }

                                                
# 3095 "<previous_module>"
;

# 3096 "<previous_module>"
                                                {
                                                        
# 3097 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3099 "<previous_module>"
;
                                                
# 3100 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3101 "<previous_module>"
tpop_0_142: IF(2,142,tpop_0_143)__CSEQ_removeindent;
                                                
# 3102 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 3103 "<previous_module>"
__exit_loop_26:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 143);

                                                
# 3104 "<previous_module>"
;
                                                ;
                                                
# 3105 "<previous_module>"
__exit__exponential_backoff_3_5:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 143);

                                                
# 3106 "<previous_module>"
;
                                                ;
                                        }
                                        
# 3108 "<previous_module>"
;
                                        
# 3109 "<previous_module>"
tpop_0_143: IF(2,143,tpop_0_144)__CSEQ_removeindent;
                                        
# 3110 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                        
# 3111 "<previous_module>"
tpop_0_144: IF(2,144,tpop_0_145)__CSEQ_removeindent;
                                        
# 3112 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                }

                                
# 3114 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 145);
                                ;
                                
# 3115 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 3116 "<previous_module>"
;
                                ;
                                
# 3117 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                                
# 3118 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                                
# 3119 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)

# 3120 "<previous_module>"
                                {
                                        
# 3121 "<previous_module>"
goto __exit_loop_23;
                                        ;
                                }

                                
# 3123 "<previous_module>"
;
                        }
                        
# 3125 "<previous_module>"
;
                        
# 3126 "<previous_module>"
tpop_0_145: IF(2,145,tpop_0_146)__CSEQ_removeindent;
                        
# 3127 "<previous_module>"
__CPROVER_assume(
# 3128 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                        
# 3129 "<previous_module>"
__exit_loop_23:
                        __CPROVER_assume(__cs_pc_cs[2] >= 146);

                        
# 3130 "<previous_module>"
;
                        ;
                        
# 3131 "<previous_module>"
tpop_0_146: IF(2,146,tpop_0_147)__CSEQ_removeindent;
                        
# 3132 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                        
# 3133 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 1;
                        
# 3134 "<previous_module>"
goto __exit__lfds711_stack_pop_1_1;
                        ;
                        
# 3135 "<previous_module>"
__exit__lfds711_stack_pop_1_1:
                        __CPROVER_assume(__cs_pc_cs[2] >= 147);

                        
# 3136 "<previous_module>"
;
                        ;
                }
                
# 3138 "<previous_module>"
;
                
# 3139 "<previous_module>"
__cs_local_pop_res = __cs_retval__lfds711_stack_pop_1;
                
# 3140 "<previous_module>"
;
                ;
                
# 3141 "<previous_module>"
;
                ;
                
# 3142 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_21;
                
# 3143 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_21 = __cs_local_pop_res == 0;
                
# 3144 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_21)

# 3145 "<previous_module>"
                {
                        
# 3146 "<previous_module>"
goto __continue_1_loop_14;
                        ;
                }

                
# 3148 "<previous_module>"
;
                
# 3149 "<previous_module>"
tpop_0_147: IF(2,147,tpop_0_148)__CSEQ_removeindent;
                
# 3150 "<previous_module>"
__cs_local_pop_temp_td = (*__cs_local_pop_se).value;
                
# 3151 "<previous_module>"
__cs_local_pop_count++;
                
# 3152 "<previous_module>"
tpop_0_148: IF(2,148,tpop_0_149)__CSEQ_removeindent;
                
# 3153 "<previous_module>"
printf("%llu\n", (*__cs_local_pop_temp_td).user_id);
        }
        
# 3155 "<previous_module>"
;
        
# 3156 "<previous_module>"
__cs_local_pop_loop++;
        
# 3157 "<previous_module>"
__continue_1_loop_14:
        __CPROVER_assume(__cs_pc_cs[2] >= 149);

        
# 3158 "<previous_module>"
;
        ;

# 3159 "<previous_module>"
        {
                
# 3160 "<previous_module>"
tpop_0_149: IF(2,149,tpop_0_150)__CSEQ_removeindent;
                
# 3161 "<previous_module>"
__cs_local_pop_temp_td = 0;
                
# 3162 "<previous_module>"
;
                ;
                
# 3163 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_1;

# 3164 "<previous_module>"
                {
                        
# 3165 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                        
# 3166 "<previous_module>"
tpop_0_150: IF(2,150,tpop_0_151)__CSEQ_removeindent;
                        
# 3167 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = &ss;
                        
# 3168 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                        
# 3169 "<previous_module>"
tpop_0_151: IF(2,151,tpop_0_152)__CSEQ_removeindent;
                        
# 3170 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_pop_se;
                        
# 3171 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                        
# 3172 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                        
# 3173 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                        
# 3174 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                        
# 3175 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                        
# 3176 "<previous_module>"
;
                        ;
                        
# 3177 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                        
# 3178 "<previous_module>"
tpop_0_152: IF(2,152,tpop_0_153)__CSEQ_removeindent;
                        
# 3179 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_ss != 0);
                        
# 3180 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 3181 "<previous_module>"
                        {
                                
# 3182 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 3183 "<previous_module>"
tpop_0_153: IF(2,153,tpop_0_154)__CSEQ_removeindent;
                                
# 3184 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 3185 "<previous_module>"
tpop_0_154: IF(2,154,tpop_0_155)__CSEQ_removeindent;
                                
# 3186 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 3188 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 155);
                        ;
                        
# 3189 "<previous_module>"
;
                        ;
                        
# 3190 "<previous_module>"
;
                        ;
                        
# 3191 "<previous_module>"
;
                        ;
                        
# 3192 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                        
# 3193 "<previous_module>"
tpop_0_155: IF(2,155,tpop_0_156)__CSEQ_removeindent;
                        
# 3194 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = !(__cs_param_lfds711_stack_pop_se != 0);
                        
# 3195 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 3196 "<previous_module>"
                        {
                                
# 3197 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 3198 "<previous_module>"
tpop_0_156: IF(2,156,tpop_0_157)__CSEQ_removeindent;
                                
# 3199 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 3200 "<previous_module>"
tpop_0_157: IF(2,157,tpop_0_158)__CSEQ_removeindent;
                                
# 3201 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 3203 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 158);
                        ;
                        
# 3204 "<previous_module>"
;
                        ;
                        
# 3205 "<previous_module>"
;
                        ;
                        
# 3206 "<previous_module>"
tpop_0_158: IF(2,158,tpop_0_159)__CSEQ_removeindent;
                        
# 3207 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                        
# 3208 "<previous_module>"
tpop_0_159: IF(2,159,tpop_0_160)__CSEQ_removeindent;
                        
# 3209 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                        
# 3210 "<previous_module>"
tpop_0_160: IF(2,160,tpop_0_161)__CSEQ_removeindent;
                        
# 3211 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                        
# 3212 "<previous_module>"
tpop_0_161: IF(2,161,tpop_0_162)__CSEQ_removeindent;
                        
# 3213 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                        
# 3214 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                        
# 3215 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                        
# 3216 "<previous_module>"
;
                        ;
                        
# 3217 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                        
# 3218 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 3219 "<previous_module>"
                        {
                                
# 3220 "<previous_module>"
;
                                ;
                                
# 3221 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                
# 3222 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 3223 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 3224 "<previous_module>"
                                {
                                        
# 3225 "<previous_module>"
tpop_0_162: IF(2,162,tpop_0_163)__CSEQ_removeindent;
                                        
# 3226 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 3227 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 3228 "<previous_module>"
goto __exit__lfds711_stack_pop_1_2;
                                        ;
                                }

                                
# 3230 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 163);
                                ;
                                
# 3231 "<previous_module>"
tpop_0_163: IF(2,163,tpop_0_164)__CSEQ_removeindent;
                                
# 3232 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 3233 "<previous_module>"
tpop_0_164: IF(2,164,tpop_0_165)__CSEQ_removeindent;
                                
# 3234 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 3235 "<previous_module>"
tpop_0_165: IF(2,165,tpop_0_166)__CSEQ_removeindent;
                                
# 3236 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                
# 3237 "<previous_module>"
static int __cs_retval__swap_stack_top_2;

# 3238 "<previous_module>"
                                {
                                        
# 3239 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 3240 "<previous_module>"
tpop_0_166: IF(2,166,tpop_0_167)__CSEQ_removeindent;
                                        
# 3241 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 3242 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 3243 "<previous_module>"
tpop_0_167: IF(2,167,tpop_0_168)__CSEQ_removeindent;
                                        
# 3244 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                                        
# 3245 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 3246 "<previous_module>"
tpop_0_168: IF(2,168,tpop_0_169)__CSEQ_removeindent;
                                        
# 3247 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                                        
# 3248 "<previous_module>"
;
                                        ;
                                        
# 3249 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 3250 "<previous_module>"
tpop_0_169: IF(2,169,tpop_0_170)__CSEQ_removeindent;
                                        
# 3251 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 3252 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 3253 "<previous_module>"
                                        {
                                                
# 3254 "<previous_module>"
tpop_0_170: IF(2,170,tpop_0_171)__CSEQ_removeindent;
                                                
# 3255 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 3256 "<previous_module>"
__cs_retval__swap_stack_top_2 = 1;
                                                
# 3257 "<previous_module>"
goto __exit__swap_stack_top_2_2;
                                                ;
                                        }
                                        else

# 3260 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[2] >= 171);
                                                
# 3261 "<previous_module>"
tpop_0_171: IF(2,171,tpop_0_172)__CSEQ_removeindent;
                                                
# 3262 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 3263 "<previous_module>"
__cs_retval__swap_stack_top_2 = 0;
                                                
# 3264 "<previous_module>"
goto __exit__swap_stack_top_2_2;
                                                ;
                                        }

                                        
# 3266 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 172);
                                        ;
                                        
# 3267 "<previous_module>"
__exit__swap_stack_top_2_2:
                                        __CPROVER_assume(__cs_pc_cs[2] >= 172);

                                        
# 3268 "<previous_module>"
;
                                        ;
                                }
                                
# 3270 "<previous_module>"
;
                                
# 3271 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_2;
                                
# 3272 "<previous_module>"
tpop_0_172: IF(2,172,tpop_0_173)__CSEQ_removeindent;
                                
# 3273 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                
# 3274 "<previous_module>"
;
                                ;
                                
# 3275 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                
# 3276 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 3277 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 3278 "<previous_module>"
                                {

# 3279 "<previous_module>"
                                        {
                                                
# 3280 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 3281 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 3282 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3283 "<previous_module>"
                                                {
                                                        
# 3284 "<previous_module>"
goto __exit_loop_28;
                                                        ;
                                                }

                                                
# 3286 "<previous_module>"
;

# 3287 "<previous_module>"
                                                {
                                                        
# 3288 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3290 "<previous_module>"
;
                                                
# 3291 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3292 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3293 "<previous_module>"
                                                {
                                                        
# 3294 "<previous_module>"
goto __exit_loop_28;
                                                        ;
                                                }

                                                
# 3296 "<previous_module>"
;

# 3297 "<previous_module>"
                                                {
                                                        
# 3298 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3300 "<previous_module>"
;
                                                
# 3301 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3302 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3303 "<previous_module>"
                                                {
                                                        
# 3304 "<previous_module>"
goto __exit_loop_28;
                                                        ;
                                                }

                                                
# 3306 "<previous_module>"
;

# 3307 "<previous_module>"
                                                {
                                                        
# 3308 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3310 "<previous_module>"
;
                                                
# 3311 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3312 "<previous_module>"
tpop_0_173: IF(2,173,tpop_0_174)__CSEQ_removeindent;
                                                
# 3313 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 3314 "<previous_module>"
__exit_loop_28:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 174);

                                                
# 3315 "<previous_module>"
;
                                                ;
                                                
# 3316 "<previous_module>"
__exit__exponential_backoff_2_2:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 174);

                                                
# 3317 "<previous_module>"
;
                                                ;
                                        }
                                        
# 3319 "<previous_module>"
;
                                        
# 3320 "<previous_module>"
tpop_0_174: IF(2,174,tpop_0_175)__CSEQ_removeindent;
                                        
# 3321 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                        
# 3322 "<previous_module>"
tpop_0_175: IF(2,175,tpop_0_176)__CSEQ_removeindent;
                                        
# 3323 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                }

                                
# 3325 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 176);
                                ;
                                
# 3326 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 3327 "<previous_module>"
;
                                ;
                                
# 3328 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 3329 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_i > 100;
                                
# 3330 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3331 "<previous_module>"
                                {
                                        
# 3332 "<previous_module>"
goto __exit_loop_27;
                                        ;
                                }

                                
# 3334 "<previous_module>"
;
                        }
                        
# 3336 "<previous_module>"
;
                        
# 3337 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                        
# 3338 "<previous_module>"
tpop_0_176: IF(2,176,tpop_0_177)__CSEQ_removeindent;
                        
# 3339 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                        
# 3340 "<previous_module>"
__exit_loop_27:
                        __CPROVER_assume(__cs_pc_cs[2] >= 177);

                        
# 3341 "<previous_module>"
;
                        ;
                        
# 3342 "<previous_module>"
if (
# 3343 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3344 "<previous_module>"
                        {
                                
# 3345 "<previous_module>"
goto __exit_loop_29;
                                ;
                        }

                        
# 3347 "<previous_module>"
;

# 3348 "<previous_module>"
                        {
                                
# 3349 "<previous_module>"
;
                                ;
                                
# 3350 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 3351 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 3352 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3353 "<previous_module>"
                                {
                                        
# 3354 "<previous_module>"
tpop_0_177: IF(2,177,tpop_0_178)__CSEQ_removeindent;
                                        
# 3355 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 3356 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 3357 "<previous_module>"
goto __exit__lfds711_stack_pop_1_2;
                                        ;
                                }

                                
# 3359 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 178);
                                ;
                                
# 3360 "<previous_module>"
tpop_0_178: IF(2,178,tpop_0_179)__CSEQ_removeindent;
                                
# 3361 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 3362 "<previous_module>"
tpop_0_179: IF(2,179,tpop_0_180)__CSEQ_removeindent;
                                
# 3363 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 3364 "<previous_module>"
tpop_0_180: IF(2,180,tpop_0_181)__CSEQ_removeindent;
                                
# 3365 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                
# 3366 "<previous_module>"
static int __cs_retval__swap_stack_top_3;

# 3367 "<previous_module>"
                                {
                                        
# 3368 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 3369 "<previous_module>"
tpop_0_181: IF(2,181,tpop_0_182)__CSEQ_removeindent;
                                        
# 3370 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 3371 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 3372 "<previous_module>"
tpop_0_182: IF(2,182,tpop_0_183)__CSEQ_removeindent;
                                        
# 3373 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                                        
# 3374 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 3375 "<previous_module>"
tpop_0_183: IF(2,183,tpop_0_184)__CSEQ_removeindent;
                                        
# 3376 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                                        
# 3377 "<previous_module>"
;
                                        ;
                                        
# 3378 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 3379 "<previous_module>"
tpop_0_184: IF(2,184,tpop_0_185)__CSEQ_removeindent;
                                        
# 3380 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 3381 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 3382 "<previous_module>"
                                        {
                                                
# 3383 "<previous_module>"
tpop_0_185: IF(2,185,tpop_0_186)__CSEQ_removeindent;
                                                
# 3384 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 3385 "<previous_module>"
__cs_retval__swap_stack_top_3 = 1;
                                                
# 3386 "<previous_module>"
goto __exit__swap_stack_top_3_6;
                                                ;
                                        }
                                        else

# 3389 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[2] >= 186);
                                                
# 3390 "<previous_module>"
tpop_0_186: IF(2,186,tpop_0_187)__CSEQ_removeindent;
                                                
# 3391 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 3392 "<previous_module>"
__cs_retval__swap_stack_top_3 = 0;
                                                
# 3393 "<previous_module>"
goto __exit__swap_stack_top_3_6;
                                                ;
                                        }

                                        
# 3395 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 187);
                                        ;
                                        
# 3396 "<previous_module>"
__exit__swap_stack_top_3_6:
                                        __CPROVER_assume(__cs_pc_cs[2] >= 187);

                                        
# 3397 "<previous_module>"
;
                                        ;
                                }
                                
# 3399 "<previous_module>"
;
                                
# 3400 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                                
# 3401 "<previous_module>"
tpop_0_187: IF(2,187,tpop_0_188)__CSEQ_removeindent;
                                
# 3402 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                
# 3403 "<previous_module>"
;
                                ;
                                
# 3404 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 3405 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 3406 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3407 "<previous_module>"
                                {

# 3408 "<previous_module>"
                                        {
                                                
# 3409 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 3410 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 3411 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3412 "<previous_module>"
                                                {
                                                        
# 3413 "<previous_module>"
goto __exit_loop_30;
                                                        ;
                                                }

                                                
# 3415 "<previous_module>"
;

# 3416 "<previous_module>"
                                                {
                                                        
# 3417 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3419 "<previous_module>"
;
                                                
# 3420 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3421 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3422 "<previous_module>"
                                                {
                                                        
# 3423 "<previous_module>"
goto __exit_loop_30;
                                                        ;
                                                }

                                                
# 3425 "<previous_module>"
;

# 3426 "<previous_module>"
                                                {
                                                        
# 3427 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3429 "<previous_module>"
;
                                                
# 3430 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3431 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3432 "<previous_module>"
                                                {
                                                        
# 3433 "<previous_module>"
goto __exit_loop_30;
                                                        ;
                                                }

                                                
# 3435 "<previous_module>"
;

# 3436 "<previous_module>"
                                                {
                                                        
# 3437 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3439 "<previous_module>"
;
                                                
# 3440 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3441 "<previous_module>"
tpop_0_188: IF(2,188,tpop_0_189)__CSEQ_removeindent;
                                                
# 3442 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 3443 "<previous_module>"
__exit_loop_30:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 189);

                                                
# 3444 "<previous_module>"
;
                                                ;
                                                
# 3445 "<previous_module>"
__exit__exponential_backoff_3_6:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 189);

                                                
# 3446 "<previous_module>"
;
                                                ;
                                        }
                                        
# 3448 "<previous_module>"
;
                                        
# 3449 "<previous_module>"
tpop_0_189: IF(2,189,tpop_0_190)__CSEQ_removeindent;
                                        
# 3450 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                        
# 3451 "<previous_module>"
tpop_0_190: IF(2,190,tpop_0_191)__CSEQ_removeindent;
                                        
# 3452 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                }

                                
# 3454 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 191);
                                ;
                                
# 3455 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 3456 "<previous_module>"
;
                                ;
                                
# 3457 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                                
# 3458 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                                
# 3459 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)

# 3460 "<previous_module>"
                                {
                                        
# 3461 "<previous_module>"
goto __exit_loop_29;
                                        ;
                                }

                                
# 3463 "<previous_module>"
;
                        }
                        
# 3465 "<previous_module>"
;
                        
# 3466 "<previous_module>"
if (
# 3467 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3468 "<previous_module>"
                        {
                                
# 3469 "<previous_module>"
goto __exit_loop_29;
                                ;
                        }

                        
# 3471 "<previous_module>"
;

# 3472 "<previous_module>"
                        {
                                
# 3473 "<previous_module>"
;
                                ;
                                
# 3474 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 3475 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 3476 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3477 "<previous_module>"
                                {
                                        
# 3478 "<previous_module>"
tpop_0_191: IF(2,191,tpop_0_192)__CSEQ_removeindent;
                                        
# 3479 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 3480 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 3481 "<previous_module>"
goto __exit__lfds711_stack_pop_1_2;
                                        ;
                                }

                                
# 3483 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 192);
                                ;
                                
# 3484 "<previous_module>"
tpop_0_192: IF(2,192,tpop_0_193)__CSEQ_removeindent;
                                
# 3485 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 3486 "<previous_module>"
tpop_0_193: IF(2,193,tpop_0_194)__CSEQ_removeindent;
                                
# 3487 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 3488 "<previous_module>"
tpop_0_194: IF(2,194,tpop_0_195)__CSEQ_removeindent;
                                
# 3489 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                
# 3490 "<previous_module>"
static int __cs_retval__swap_stack_top_3;

# 3491 "<previous_module>"
                                {
                                        
# 3492 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 3493 "<previous_module>"
tpop_0_195: IF(2,195,tpop_0_196)__CSEQ_removeindent;
                                        
# 3494 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 3495 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 3496 "<previous_module>"
tpop_0_196: IF(2,196,tpop_0_197)__CSEQ_removeindent;
                                        
# 3497 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                                        
# 3498 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 3499 "<previous_module>"
tpop_0_197: IF(2,197,tpop_0_198)__CSEQ_removeindent;
                                        
# 3500 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                                        
# 3501 "<previous_module>"
;
                                        ;
                                        
# 3502 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 3503 "<previous_module>"
tpop_0_198: IF(2,198,tpop_0_199)__CSEQ_removeindent;
                                        
# 3504 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 3505 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 3506 "<previous_module>"
                                        {
                                                
# 3507 "<previous_module>"
tpop_0_199: IF(2,199,tpop_0_200)__CSEQ_removeindent;
                                                
# 3508 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 3509 "<previous_module>"
__cs_retval__swap_stack_top_3 = 1;
                                                
# 3510 "<previous_module>"
goto __exit__swap_stack_top_3_7;
                                                ;
                                        }
                                        else

# 3513 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[2] >= 200);
                                                
# 3514 "<previous_module>"
tpop_0_200: IF(2,200,tpop_0_201)__CSEQ_removeindent;
                                                
# 3515 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 3516 "<previous_module>"
__cs_retval__swap_stack_top_3 = 0;
                                                
# 3517 "<previous_module>"
goto __exit__swap_stack_top_3_7;
                                                ;
                                        }

                                        
# 3519 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 201);
                                        ;
                                        
# 3520 "<previous_module>"
__exit__swap_stack_top_3_7:
                                        __CPROVER_assume(__cs_pc_cs[2] >= 201);

                                        
# 3521 "<previous_module>"
;
                                        ;
                                }
                                
# 3523 "<previous_module>"
;
                                
# 3524 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                                
# 3525 "<previous_module>"
tpop_0_201: IF(2,201,tpop_0_202)__CSEQ_removeindent;
                                
# 3526 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                
# 3527 "<previous_module>"
;
                                ;
                                
# 3528 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 3529 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 3530 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3531 "<previous_module>"
                                {

# 3532 "<previous_module>"
                                        {
                                                
# 3533 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 3534 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 3535 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3536 "<previous_module>"
                                                {
                                                        
# 3537 "<previous_module>"
goto __exit_loop_31;
                                                        ;
                                                }

                                                
# 3539 "<previous_module>"
;

# 3540 "<previous_module>"
                                                {
                                                        
# 3541 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3543 "<previous_module>"
;
                                                
# 3544 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3545 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3546 "<previous_module>"
                                                {
                                                        
# 3547 "<previous_module>"
goto __exit_loop_31;
                                                        ;
                                                }

                                                
# 3549 "<previous_module>"
;

# 3550 "<previous_module>"
                                                {
                                                        
# 3551 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3553 "<previous_module>"
;
                                                
# 3554 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3555 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3556 "<previous_module>"
                                                {
                                                        
# 3557 "<previous_module>"
goto __exit_loop_31;
                                                        ;
                                                }

                                                
# 3559 "<previous_module>"
;

# 3560 "<previous_module>"
                                                {
                                                        
# 3561 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3563 "<previous_module>"
;
                                                
# 3564 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3565 "<previous_module>"
tpop_0_202: IF(2,202,tpop_0_203)__CSEQ_removeindent;
                                                
# 3566 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 3567 "<previous_module>"
__exit_loop_31:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 203);

                                                
# 3568 "<previous_module>"
;
                                                ;
                                                
# 3569 "<previous_module>"
__exit__exponential_backoff_3_7:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 203);

                                                
# 3570 "<previous_module>"
;
                                                ;
                                        }
                                        
# 3572 "<previous_module>"
;
                                        
# 3573 "<previous_module>"
tpop_0_203: IF(2,203,tpop_0_204)__CSEQ_removeindent;
                                        
# 3574 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                        
# 3575 "<previous_module>"
tpop_0_204: IF(2,204,tpop_0_205)__CSEQ_removeindent;
                                        
# 3576 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                }

                                
# 3578 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 205);
                                ;
                                
# 3579 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 3580 "<previous_module>"
;
                                ;
                                
# 3581 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                                
# 3582 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                                
# 3583 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)

# 3584 "<previous_module>"
                                {
                                        
# 3585 "<previous_module>"
goto __exit_loop_29;
                                        ;
                                }

                                
# 3587 "<previous_module>"
;
                        }
                        
# 3589 "<previous_module>"
;
                        
# 3590 "<previous_module>"
if (
# 3591 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3592 "<previous_module>"
                        {
                                
# 3593 "<previous_module>"
goto __exit_loop_29;
                                ;
                        }

                        
# 3595 "<previous_module>"
;

# 3596 "<previous_module>"
                        {
                                
# 3597 "<previous_module>"
;
                                ;
                                
# 3598 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 3599 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 3600 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3601 "<previous_module>"
                                {
                                        
# 3602 "<previous_module>"
tpop_0_205: IF(2,205,tpop_0_206)__CSEQ_removeindent;
                                        
# 3603 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 3604 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 3605 "<previous_module>"
goto __exit__lfds711_stack_pop_1_2;
                                        ;
                                }

                                
# 3607 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 206);
                                ;
                                
# 3608 "<previous_module>"
tpop_0_206: IF(2,206,tpop_0_207)__CSEQ_removeindent;
                                
# 3609 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 3610 "<previous_module>"
tpop_0_207: IF(2,207,tpop_0_208)__CSEQ_removeindent;
                                
# 3611 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 3612 "<previous_module>"
tpop_0_208: IF(2,208,tpop_0_209)__CSEQ_removeindent;
                                
# 3613 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                
# 3614 "<previous_module>"
static int __cs_retval__swap_stack_top_3;

# 3615 "<previous_module>"
                                {
                                        
# 3616 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_top;
                                        
# 3617 "<previous_module>"
tpop_0_209: IF(2,209,tpop_0_210)__CSEQ_removeindent;
                                        
# 3618 "<previous_module>"
__cs_param_swap_stack_top_top = &(*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 3619 "<previous_module>"
static struct lfds711_stack_element * volatile *__cs_param_swap_stack_top_oldtop;
                                        
# 3620 "<previous_module>"
tpop_0_210: IF(2,210,tpop_0_211)__CSEQ_removeindent;
                                        
# 3621 "<previous_module>"
__cs_param_swap_stack_top_oldtop = &__cs_local_lfds711_stack_pop_original_top[0];
                                        
# 3622 "<previous_module>"
static struct lfds711_stack_element **__cs_param_swap_stack_top_newtop;
                                        
# 3623 "<previous_module>"
tpop_0_211: IF(2,211,tpop_0_212)__CSEQ_removeindent;
                                        
# 3624 "<previous_module>"
__cs_param_swap_stack_top_newtop = &__cs_local_lfds711_stack_pop_new_top[0];
                                        
# 3625 "<previous_module>"
;
                                        ;
                                        
# 3626 "<previous_module>"
static _Bool __cs_local_swap_stack_top___cs_tmp_if_cond_1;
                                        
# 3627 "<previous_module>"
tpop_0_212: IF(2,212,tpop_0_213)__CSEQ_removeindent;
                                        
# 3628 "<previous_module>"
__cs_local_swap_stack_top___cs_tmp_if_cond_1 = (*__cs_param_swap_stack_top_oldtop) == (*__cs_param_swap_stack_top_top);
                                        
# 3629 "<previous_module>"
if (__cs_local_swap_stack_top___cs_tmp_if_cond_1)

# 3630 "<previous_module>"
                                        {
                                                
# 3631 "<previous_module>"
tpop_0_213: IF(2,213,tpop_0_214)__CSEQ_removeindent;
                                                
# 3632 "<previous_module>"
*__cs_param_swap_stack_top_top = *__cs_param_swap_stack_top_newtop;
                                                
# 3633 "<previous_module>"
__cs_retval__swap_stack_top_3 = 1;
                                                
# 3634 "<previous_module>"
goto __exit__swap_stack_top_3_8;
                                                ;
                                        }
                                        else

# 3637 "<previous_module>"
                                        {
                                                __CPROVER_assume(__cs_pc_cs[2] >= 214);
                                                
# 3638 "<previous_module>"
tpop_0_214: IF(2,214,tpop_0_215)__CSEQ_removeindent;
                                                
# 3639 "<previous_module>"
*__cs_param_swap_stack_top_oldtop = *__cs_param_swap_stack_top_top;
                                                
# 3640 "<previous_module>"
__cs_retval__swap_stack_top_3 = 0;
                                                
# 3641 "<previous_module>"
goto __exit__swap_stack_top_3_8;
                                                ;
                                        }

                                        
# 3643 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 215);
                                        ;
                                        
# 3644 "<previous_module>"
__exit__swap_stack_top_3_8:
                                        __CPROVER_assume(__cs_pc_cs[2] >= 215);

                                        
# 3645 "<previous_module>"
;
                                        ;
                                }
                                
# 3647 "<previous_module>"
;
                                
# 3648 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __cs_retval__swap_stack_top_3;
                                
# 3649 "<previous_module>"
tpop_0_215: IF(2,215,tpop_0_216)__CSEQ_removeindent;
                                
# 3650 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                
# 3651 "<previous_module>"
;
                                ;
                                
# 3652 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 3653 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 3654 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3655 "<previous_module>"
                                {

# 3656 "<previous_module>"
                                        {
                                                
# 3657 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 3658 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;
                                                
# 3659 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3660 "<previous_module>"
                                                {
                                                        
# 3661 "<previous_module>"
goto __exit_loop_32;
                                                        ;
                                                }

                                                
# 3663 "<previous_module>"
;

# 3664 "<previous_module>"
                                                {
                                                        
# 3665 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3667 "<previous_module>"
;
                                                
# 3668 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3669 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3670 "<previous_module>"
                                                {
                                                        
# 3671 "<previous_module>"
goto __exit_loop_32;
                                                        ;
                                                }

                                                
# 3673 "<previous_module>"
;

# 3674 "<previous_module>"
                                                {
                                                        
# 3675 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3677 "<previous_module>"
;
                                                
# 3678 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3679 "<previous_module>"
if (!(__cs_local_exponential_backoff_loop < 10))

# 3680 "<previous_module>"
                                                {
                                                        
# 3681 "<previous_module>"
goto __exit_loop_32;
                                                        ;
                                                }

                                                
# 3683 "<previous_module>"
;

# 3684 "<previous_module>"
                                                {
                                                        
# 3685 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3687 "<previous_module>"
;
                                                
# 3688 "<previous_module>"
__cs_local_exponential_backoff_loop;
                                                
# 3689 "<previous_module>"
tpop_0_216: IF(2,216,tpop_0_217)__CSEQ_removeindent;
                                                
# 3690 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                
# 3691 "<previous_module>"
__exit_loop_32:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 217);

                                                
# 3692 "<previous_module>"
;
                                                ;
                                                
# 3693 "<previous_module>"
__exit__exponential_backoff_3_8:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 217);

                                                
# 3694 "<previous_module>"
;
                                                ;
                                        }
                                        
# 3696 "<previous_module>"
;
                                        
# 3697 "<previous_module>"
tpop_0_217: IF(2,217,tpop_0_218)__CSEQ_removeindent;
                                        
# 3698 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                                        
# 3699 "<previous_module>"
tpop_0_218: IF(2,218,tpop_0_219)__CSEQ_removeindent;
                                        
# 3700 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                                }

                                
# 3702 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 219);
                                ;
                                
# 3703 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 3704 "<previous_module>"
;
                                ;
                                
# 3705 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_14;
                                
# 3706 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14 = __cs_local_lfds711_stack_pop_i > 100;
                                
# 3707 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_14)

# 3708 "<previous_module>"
                                {
                                        
# 3709 "<previous_module>"
goto __exit_loop_29;
                                        ;
                                }

                                
# 3711 "<previous_module>"
;
                        }
                        
# 3713 "<previous_module>"
;
                        
# 3714 "<previous_module>"
tpop_0_219: IF(2,219,tpop_0_220)__CSEQ_removeindent;
                        
# 3715 "<previous_module>"
__CPROVER_assume(
# 3716 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                        
# 3717 "<previous_module>"
__exit_loop_29:
                        __CPROVER_assume(__cs_pc_cs[2] >= 220);

                        
# 3718 "<previous_module>"
;
                        ;
                        
# 3719 "<previous_module>"
tpop_0_220: IF(2,220,tpop_0_221)__CSEQ_removeindent;
                        
# 3720 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                        
# 3721 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 1;
                        
# 3722 "<previous_module>"
goto __exit__lfds711_stack_pop_1_2;
                        ;
                        
# 3723 "<previous_module>"
__exit__lfds711_stack_pop_1_2:
                        __CPROVER_assume(__cs_pc_cs[2] >= 221);

                        
# 3724 "<previous_module>"
;
                        ;
                }
                
# 3726 "<previous_module>"
;
                
# 3727 "<previous_module>"
__cs_local_pop_res = __cs_retval__lfds711_stack_pop_1;
                
# 3728 "<previous_module>"
;
                ;
                
# 3729 "<previous_module>"
;
                ;
                
# 3730 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_21;
                
# 3731 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_21 = __cs_local_pop_res == 0;
                
# 3732 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_21)

# 3733 "<previous_module>"
                {
                        
# 3734 "<previous_module>"
goto __continue_2_loop_14;
                        ;
                }

                
# 3736 "<previous_module>"
;
                
# 3737 "<previous_module>"
tpop_0_221: IF(2,221,tpop_0_222)__CSEQ_removeindent;
                
# 3738 "<previous_module>"
__cs_local_pop_temp_td = (*__cs_local_pop_se).value;
                
# 3739 "<previous_module>"
__cs_local_pop_count++;
                
# 3740 "<previous_module>"
tpop_0_222: IF(2,222,tpop_0_223)__CSEQ_removeindent;
                
# 3741 "<previous_module>"
printf("%llu\n", (*__cs_local_pop_temp_td).user_id);
        }
        
# 3743 "<previous_module>"
;
        
# 3744 "<previous_module>"
__cs_local_pop_loop++;
        
# 3745 "<previous_module>"
__continue_2_loop_14:
        __CPROVER_assume(__cs_pc_cs[2] >= 223);

        
# 3746 "<previous_module>"
;
        ;
        
# 3747 "<previous_module>"
tpop_0_223: IF(2,223,tpop_0_224)__CSEQ_removeindent;
        
# 3748 "<previous_module>"
__CPROVER_assume(!(__cs_local_pop_loop < 3));
        
# 3749 "<previous_module>"
__exit_loop_14:
        __CPROVER_assume(__cs_pc_cs[2] >= 224);

        
# 3750 "<previous_module>"
;
        ;
        
# 3751 "<previous_module>"
assert(__cs_local_pop_count == 3);
        
# 3752 "<previous_module>"
__exit_pop:
        __CPROVER_assume(__cs_pc_cs[2] >= 224);

        
# 3753 "<previous_module>"
;
        ;
        
# 3754 "<previous_module>"
tpop_0_224: __CSEQ_removeindent;
        
# 3755 "<previous_module>"
__cs_exit(0, 2);
}


# 3757 "<previous_module>"
int main_thread(void)

# 3758 "<previous_module>"
{
        
# 3759 "<previous_module>"
IF(0,0,tmain_1)__CSEQ_removeindent;

# 3760 "<previous_module>"
        {
                
# 3761 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss;
                
# 3762 "<previous_module>"
__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss = &ss;
                
# 3763 "<previous_module>"
static void *__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
                
# 3764 "<previous_module>"
__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state = 0;
                
# 3765 "<previous_module>"
__cs_mutex_init(&lock, 0);
                
# 3766 "<previous_module>"
;
                ;
                
# 3767 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4;
                
# 3768 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4 = !(__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss != 0);
                
# 3769 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4)

# 3770 "<previous_module>"
                {
                        
# 3771 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                        
# 3772 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        
# 3773 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                }

                
# 3775 "<previous_module>"
;
                
# 3776 "<previous_module>"
;
                ;
                
# 3777 "<previous_module>"
;
                ;
                
# 3778 "<previous_module>"
;
                ;
                
# 3779 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5;
                
# 3780 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5 = !((((lfds711_pal_uint_t) (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top) % 128) == 0);
                
# 3781 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5)

# 3782 "<previous_module>"
                {
                        
# 3783 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                        
# 3784 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        
# 3785 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                }

                
# 3787 "<previous_module>"
;
                
# 3788 "<previous_module>"
;
                ;
                
# 3789 "<previous_module>"
;
                ;
                
# 3790 "<previous_module>"
;
                ;
                
# 3791 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6;
                
# 3792 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state)) % 128) == 0);
                
# 3793 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_6)

# 3794 "<previous_module>"
                {
                        
# 3795 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                        
# 3796 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        
# 3797 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                }

                
# 3799 "<previous_module>"
;
                
# 3800 "<previous_module>"
;
                ;
                
# 3801 "<previous_module>"
;
                ;
                
# 3802 "<previous_module>"
__cs_mutex_lock(&lock, 0);
                
# 3803 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[0] = 0;
                
# 3804 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[1] = 0;
                
# 3805 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state = __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;

# 3806 "<previous_module>"
                {
                        
# 3807 "<previous_module>"
static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
                        
# 3808 "<previous_module>"
__cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).pop_backoff;
                        
# 3809 "<previous_module>"
;
                        ;
                        
# 3810 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
                        
# 3811 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
                        
# 3812 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)

# 3813 "<previous_module>"
                        {
                                
# 3814 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                
# 3815 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                
# 3816 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                        }

                        
# 3818 "<previous_module>"
;
                        
# 3819 "<previous_module>"
;
                        ;
                        
# 3820 "<previous_module>"
;
                        ;
                        
# 3821 "<previous_module>"
;
                        ;
                        
# 3822 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3;
                        
# 3823 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
                        
# 3824 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3)

# 3825 "<previous_module>"
                        {
                                
# 3826 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                
# 3827 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                
# 3828 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                        }

                        
# 3830 "<previous_module>"
;
                        
# 3831 "<previous_module>"
;
                        ;
                        
# 3832 "<previous_module>"
;
                        ;
                        
# 3833 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock = LFDS711_MISC_FLAG_LOWERED;
                        
# 3834 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[0] = 0;
                        
# 3835 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[1] = 0;
                        
# 3836 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).metric = 1;
                        
# 3837 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).total_operations = 0;
                        
# 3838 "<previous_module>"
goto __exit__lfds711_misc_internal_backoff_init_1;
                        ;
                        
# 3839 "<previous_module>"
__exit__lfds711_misc_internal_backoff_init_1:
                        __CPROVER_assume(__cs_pc_cs[0] >= 1);

                        
# 3840 "<previous_module>"
;
                        ;
                }
                
# 3842 "<previous_module>"
;

# 3843 "<previous_module>"
                {
                        
# 3844 "<previous_module>"
static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
                        
# 3845 "<previous_module>"
__cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).push_backoff;
                        
# 3846 "<previous_module>"
;
                        ;
                        
# 3847 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
                        
# 3848 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
                        
# 3849 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)

# 3850 "<previous_module>"
                        {
                                
# 3851 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                
# 3852 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                
# 3853 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                        }

                        
# 3855 "<previous_module>"
;
                        
# 3856 "<previous_module>"
;
                        ;
                        
# 3857 "<previous_module>"
;
                        ;
                        
# 3858 "<previous_module>"
;
                        ;
                        
# 3859 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3;
                        
# 3860 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
                        
# 3861 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_3)

# 3862 "<previous_module>"
                        {
                                
# 3863 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                
# 3864 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                
# 3865 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                        }

                        
# 3867 "<previous_module>"
;
                        
# 3868 "<previous_module>"
;
                        ;
                        
# 3869 "<previous_module>"
;
                        ;
                        
# 3870 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock = LFDS711_MISC_FLAG_LOWERED;
                        
# 3871 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[0] = 0;
                        
# 3872 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[1] = 0;
                        
# 3873 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).metric = 1;
                        
# 3874 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).total_operations = 0;
                        
# 3875 "<previous_module>"
goto __exit__lfds711_misc_internal_backoff_init_2;
                        ;
                        
# 3876 "<previous_module>"
__exit__lfds711_misc_internal_backoff_init_2:
                        __CPROVER_assume(__cs_pc_cs[0] >= 1);

                        
# 3877 "<previous_module>"
;
                        ;
                }
                
# 3879 "<previous_module>"
;

# 3880 "<previous_module>"
                {
                        
# 3881 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_misc_force_store_destination;
                        
# 3882 "<previous_module>"
__cs_init_scalar(&__cs_local_lfds711_misc_force_store_destination, sizeof(lfds711_pal_uint_t));

# 3883 "<previous_module>"
                        {
                                
# 3884 "<previous_module>"
static unsigned long __cs_retval____atomic_exchange_n_1;

# 3885 "<previous_module>"
                                {
                                        
# 3886 "<previous_module>"
static int long long unsigned *__cs_param___atomic_exchange_n_previous;
                                        
# 3887 "<previous_module>"
__cs_param___atomic_exchange_n_previous = &__cs_local_lfds711_misc_force_store_destination;
                                        
# 3888 "<previous_module>"
static int long long unsigned __cs_param___atomic_exchange_n_new;
                                        
# 3889 "<previous_module>"
__cs_param___atomic_exchange_n_new = 0;
                                        
# 3890 "<previous_module>"
static int __cs_param___atomic_exchange_n_memorder;
                                        
# 3891 "<previous_module>"
__cs_param___atomic_exchange_n_memorder = 0;
                                        
# 3892 "<previous_module>"
static unsigned long int __cs_local___atomic_exchange_n_old;
                                        
# 3893 "<previous_module>"
__cs_local___atomic_exchange_n_old = *__cs_param___atomic_exchange_n_previous;
                                        
# 3894 "<previous_module>"
*__cs_param___atomic_exchange_n_previous = __cs_param___atomic_exchange_n_new;
                                        
# 3895 "<previous_module>"
__cs_retval____atomic_exchange_n_1 = __cs_local___atomic_exchange_n_old;
                                        
# 3896 "<previous_module>"
goto __exit____atomic_exchange_n_1;
                                        ;
                                        
# 3897 "<previous_module>"
__exit____atomic_exchange_n_1:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                        
# 3898 "<previous_module>"
;
                                        ;
                                }
                                
# 3900 "<previous_module>"
;
                                
# 3901 "<previous_module>"
(void) __cs_retval____atomic_exchange_n_1;
                        }
                        
# 3903 "<previous_module>"
;
                        
# 3904 "<previous_module>"
;
                        ;
                        
# 3905 "<previous_module>"
goto __exit__lfds711_misc_force_store_1;
                        ;
                        
# 3906 "<previous_module>"
__exit__lfds711_misc_force_store_1:
                        __CPROVER_assume(__cs_pc_cs[0] >= 1);

                        
# 3907 "<previous_module>"
;
                        ;
                }
                
# 3909 "<previous_module>"
;
                
# 3910 "<previous_module>"
__cs_mutex_unlock(&lock, 0);
                
# 3911 "<previous_module>"
goto __exit__lfds711_stack_init_valid_on_current_logical_core_1;
                ;
                
# 3912 "<previous_module>"
__exit__lfds711_stack_init_valid_on_current_logical_core_1:
                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                
# 3913 "<previous_module>"
;
                ;
        }
        
# 3915 "<previous_module>"
;
        
# 3916 "<previous_module>"
static __cs_t __cs_local_main_t1;
        
# 3917 "<previous_module>"
;
        ;
        
# 3918 "<previous_module>"
static __cs_t __cs_local_main_t2;
        
# 3919 "<previous_module>"
;
        ;
        
# 3920 "<previous_module>"
__cs_mutex_init(&lock, 0);
        
# 3921 "<previous_module>"
__cs_create(&__cs_local_main_t1, 0, push_0, 0, 1);
        
# 3922 "<previous_module>"
tmain_1: IF(0,1,tmain_2)__CSEQ_removeindent;
        
# 3923 "<previous_module>"
__cs_create(&__cs_local_main_t2, 0, pop_0, 0, 2);
        
# 3924 "<previous_module>"
tmain_2: IF(0,2,tmain_3)__CSEQ_removeindent;
        
# 3925 "<previous_module>"
__cs_join(__cs_local_main_t1, 0);
        
# 3926 "<previous_module>"
tmain_3: IF(0,3,tmain_4)__CSEQ_removeindent;
        
# 3927 "<previous_module>"
__cs_join(__cs_local_main_t2, 0);
        
# 3928 "<previous_module>"
goto __exit_main;
        ;
        
# 3929 "<previous_module>"
__exit_main:
        __CPROVER_assume(__cs_pc_cs[0] >= 4);

        
# 3930 "<previous_module>"
;
        ;
        
# 3931 "<previous_module>"
tmain_4: __CSEQ_removeindent;
        
# 3932 "<previous_module>"
__cs_exit(0, 0);
}


# 3934 "<previous_module>"
int main(void)
{
        
# 3935 "<previous_module>"
/* round  0 */__CSEQ_removeindent;
        
# 3936 "<previous_module>"
    /* main */__CSEQ_removeindent;
        
# 3937 "<previous_module>"
unsigned __CPROVER_bitvector[3] __cs_tmp_t0_r0;
        
# 3938 "<previous_module>"
__cs_pc_cs[0] = __cs_tmp_t0_r0;
        
# 3939 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] > 0);
        
# 3940 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 4);
        
# 3941 "<previous_module>"
main_thread();
        
# 3942 "<previous_module>"
__cs_pc[0] = __cs_pc_cs[0];
        
# 3944 "<previous_module>"
    /* push_0 */__CSEQ_removeindent;
        
# 3945 "<previous_module>"
unsigned __CPROVER_bitvector[8] __cs_tmp_t1_r0;
        
# 3946 "<previous_module>"
if (__cs_active_thread[1])
        {
                
# 3947 "<previous_module>"
__cs_pc_cs[1] = __cs_tmp_t1_r0;
                
# 3948 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] <= 161);
                
# 3949 "<previous_module>"
push_0(__cs_threadargs[1]);
                
# 3950 "<previous_module>"
__cs_pc[1] = __cs_pc_cs[1];
        }

        
# 3953 "<previous_module>"
    /* pop_0 */__CSEQ_removeindent;
        
# 3954 "<previous_module>"
unsigned __CPROVER_bitvector[8] __cs_tmp_t2_r0;
        
# 3955 "<previous_module>"
if (__cs_active_thread[2])
        {
                
# 3956 "<previous_module>"
__cs_pc_cs[2] = __cs_tmp_t2_r0;
                
# 3957 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] <= 224);
                
# 3958 "<previous_module>"
pop_0(__cs_threadargs[2]);
                
# 3959 "<previous_module>"
__cs_pc[2] = __cs_pc_cs[2];
        }

        
# 3962 "<previous_module>"
unsigned __CPROVER_bitvector[3] __cs_tmp_t0_r1;
        
# 3963 "<previous_module>"
if (__cs_active_thread[0] == 1)
        {
                
# 3964 "<previous_module>"
__cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
                
# 3965 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                
# 3966 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 4);
                
# 3967 "<previous_module>"
main_thread();
        }

        
# 3969 "<previous_module>"
return 0;
}

