
# 1 "<previous_module>"
unsigned __CPROVER_bitvector[1] __cs_active_thread[3] = {1};

# 2 "<previous_module>"
unsigned __CPROVER_bitvector[8] __cs_pc[3];

# 3 "<previous_module>"
unsigned __CPROVER_bitvector[9] __cs_pc_cs[3];

# 4 "<previous_module>"
unsigned __CPROVER_bitvector[2] __cs_last_thread;

# 5 "<previous_module>"
unsigned __CPROVER_bitvector[8] __cs_thread_lines[3] = {4, 121, 155};

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
__cs_mutex_t library_lock;

# 732 "<previous_module>"
int __CSEQ_atomic_swap_stack_top(struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_top, struct lfds711_stack_element * volatile *__cs_param___CSEQ_atomic_swap_stack_top_oldtop, 
# 733 "<previous_module>"
struct lfds711_stack_element **__cs_param___CSEQ_atomic_swap_stack_top_newtop)

# 734 "<previous_module>"
{
        
# 735 "<previous_module>"
;
        ;
        
# 736 "<previous_module>"
static _Bool __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0;
        
# 737 "<previous_module>"
__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0 = (*__cs_param___CSEQ_atomic_swap_stack_top_oldtop) == (*__cs_param___CSEQ_atomic_swap_stack_top_top);
        
# 738 "<previous_module>"
if (__cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0)

# 739 "<previous_module>"
        {
                
# 740 "<previous_module>"
*__cs_param___CSEQ_atomic_swap_stack_top_top = *__cs_param___CSEQ_atomic_swap_stack_top_newtop;
                
# 741 "<previous_module>"
return 1;
                ;
        }
        else

# 744 "<previous_module>"
        {
                
# 745 "<previous_module>"
*__cs_param___CSEQ_atomic_swap_stack_top_oldtop = *__cs_param___CSEQ_atomic_swap_stack_top_top;
                
# 746 "<previous_module>"
return 0;
                ;
        }

        
# 748 "<previous_module>"
;
}


# 750 "<previous_module>"
_Bool __CSEQ_atomic_compare_and_exchange(int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_mptr, int long long unsigned *__cs_param___CSEQ_atomic_compare_and_exchange_eptr, int long long unsigned __cs_param___CSEQ_atomic_compare_and_exchange_newval, _Bool __cs_param___CSEQ_atomic_compare_and_exchange_weak_p, int __cs_param___CSEQ_atomic_compare_and_exchange_sm, int __cs_param___CSEQ_atomic_compare_and_exchange_fm)

# 751 "<previous_module>"
{
        
# 752 "<previous_module>"
;
        ;
        
# 753 "<previous_module>"
static _Bool __cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18;
        
# 754 "<previous_module>"
__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18 = (*__cs_param___CSEQ_atomic_compare_and_exchange_mptr) == (*__cs_param___CSEQ_atomic_compare_and_exchange_eptr);
        
# 755 "<previous_module>"
if (__cs_local___CSEQ_atomic_compare_and_exchange___cs_tmp_if_cond_18)

# 756 "<previous_module>"
        {
                
# 757 "<previous_module>"
*__cs_param___CSEQ_atomic_compare_and_exchange_mptr = __cs_param___CSEQ_atomic_compare_and_exchange_newval;
                
# 758 "<previous_module>"
return 1;
                ;
        }
        else

# 761 "<previous_module>"
        {
                
# 762 "<previous_module>"
*__cs_param___CSEQ_atomic_compare_and_exchange_eptr = __cs_param___CSEQ_atomic_compare_and_exchange_newval;
                
# 763 "<previous_module>"
return 0;
                ;
        }

        
# 765 "<previous_module>"
;
}


# 767 "<previous_module>"
unsigned long __CSEQ_atomic_exchange(int long long unsigned *__cs_param___CSEQ_atomic_exchange_previous, int long long unsigned __cs_param___CSEQ_atomic_exchange_new, int __cs_param___CSEQ_atomic_exchange_memorder)

# 768 "<previous_module>"
{
        
# 769 "<previous_module>"
static unsigned long int __cs_local___CSEQ_atomic_exchange_old;
        
# 770 "<previous_module>"
__cs_local___CSEQ_atomic_exchange_old = *__cs_param___CSEQ_atomic_exchange_previous;
        
# 771 "<previous_module>"
*__cs_param___CSEQ_atomic_exchange_previous = __cs_param___CSEQ_atomic_exchange_new;
        
# 772 "<previous_module>"
return __cs_local___CSEQ_atomic_exchange_old;
        ;
}


# 774 "<previous_module>"
struct lfds711_stack_state mystack;

# 775 "<previous_module>"
struct test_data
{
        
# 777 "<previous_module>"
struct lfds711_stack_element se;
        
# 778 "<previous_module>"
int long long unsigned user_id;
};

# 780 "<previous_module>"
int ATOMIC_OPERATION = (0);

# 781 "<previous_module>"
void *ss;

# 782 "<previous_module>"
__cs_mutex_t lock;

# 783 "<previous_module>"
void *push_0(void *__cs_param_push___cs_unused)

# 784 "<previous_module>"
{
        
# 785 "<previous_module>"
static int long long unsigned __cs_local_push_loop;
        
# 786 "<previous_module>"
IF(1,0,tpush_0_1)__CSEQ_removeindent;
        
# 787 "<previous_module>"
__cs_init_scalar(&__cs_local_push_loop, sizeof(int long long unsigned));
        
# 788 "<previous_module>"
;
        ;
        
# 789 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_24;
        
# 790 "<previous_module>"
tpush_0_1: IF(1,1,tpush_0_2)__CSEQ_removeindent;
        
# 791 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_24 = ATOMIC_OPERATION;
        
# 792 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_24)

# 793 "<previous_module>"
        {
                
# 794 "<previous_module>"
tpush_0_2: IF(1,2,tpush_0_3)__CSEQ_removeindent;
                
# 795 "<previous_module>"
__cs_mutex_lock(&lock, 1);
        }

        
# 797 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 3);
        ;
        
# 798 "<previous_module>"
;
        ;
        
# 799 "<previous_module>"
static int __cs_local_push_qwerty;
        
# 800 "<previous_module>"
__cs_local_push_qwerty = 1050;

# 801 "<previous_module>"
        {
                
# 802 "<previous_module>"
static struct lfds711_stack_state *__cs_param_insert_s;
                
# 803 "<previous_module>"
tpush_0_3: IF(1,3,tpush_0_4)__CSEQ_removeindent;
                
# 804 "<previous_module>"
__cs_param_insert_s = ss;
                
# 805 "<previous_module>"
static int long long unsigned __cs_param_insert_id;
                
# 806 "<previous_module>"
__cs_param_insert_id = 1500;
                
# 807 "<previous_module>"
static struct test_data *__cs_local_insert_td;
                
# 808 "<previous_module>"
tpush_0_4: IF(1,4,tpush_0_5)__CSEQ_removeindent;
                
# 809 "<previous_module>"
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
                
# 810 "<previous_module>"
tpush_0_5: IF(1,5,tpush_0_6)__CSEQ_removeindent;
                
# 811 "<previous_module>"
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
                
# 812 "<previous_module>"
tpush_0_6: IF(1,6,tpush_0_7)__CSEQ_removeindent;
                
# 813 "<previous_module>"
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);

# 814 "<previous_module>"
                {
                        
# 815 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                        
# 816 "<previous_module>"
tpush_0_7: IF(1,7,tpush_0_8)__CSEQ_removeindent;
                        
# 817 "<previous_module>"
__cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
                        
# 818 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                        
# 819 "<previous_module>"
tpush_0_8: IF(1,8,tpush_0_9)__CSEQ_removeindent;
                        
# 820 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
                        
# 821 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                        
# 822 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                        
# 823 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                        
# 824 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                        
# 825 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                        
# 826 "<previous_module>"
;
                        ;
                        
# 827 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                        
# 828 "<previous_module>"
tpush_0_9: IF(1,9,tpush_0_10)__CSEQ_removeindent;
                        
# 829 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                        
# 830 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 831 "<previous_module>"
                        {
                                
# 832 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 833 "<previous_module>"
tpush_0_10: IF(1,10,tpush_0_11)__CSEQ_removeindent;
                                
# 834 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 835 "<previous_module>"
tpush_0_11: IF(1,11,tpush_0_12)__CSEQ_removeindent;
                                
# 836 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 838 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 12);
                        ;
                        
# 839 "<previous_module>"
;
                        ;
                        
# 840 "<previous_module>"
;
                        ;
                        
# 841 "<previous_module>"
;
                        ;
                        
# 842 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                        
# 843 "<previous_module>"
tpush_0_12: IF(1,12,tpush_0_13)__CSEQ_removeindent;
                        
# 844 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                        
# 845 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 846 "<previous_module>"
                        {
                                
# 847 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 848 "<previous_module>"
tpush_0_13: IF(1,13,tpush_0_14)__CSEQ_removeindent;
                                
# 849 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 850 "<previous_module>"
tpush_0_14: IF(1,14,tpush_0_15)__CSEQ_removeindent;
                                
# 851 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 853 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 15);
                        ;
                        
# 854 "<previous_module>"
;
                        ;
                        
# 855 "<previous_module>"
;
                        ;
                        
# 856 "<previous_module>"
tpush_0_15: IF(1,15,tpush_0_16)__CSEQ_removeindent;
                        
# 857 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                        
# 858 "<previous_module>"
tpush_0_16: IF(1,16,tpush_0_17)__CSEQ_removeindent;
                        
# 859 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                        
# 860 "<previous_module>"
tpush_0_17: IF(1,17,tpush_0_18)__CSEQ_removeindent;
                        
# 861 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                        
# 862 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                        
# 863 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                        
# 864 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                        
# 865 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 866 "<previous_module>"
                        {
                                
# 867 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 869 "<previous_module>"
;

# 870 "<previous_module>"
                        {
                                
# 871 "<previous_module>"
tpush_0_18: IF(1,18,tpush_0_19)__CSEQ_removeindent;
                                
# 872 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 873 "<previous_module>"
tpush_0_19: IF(1,19,tpush_0_20)__CSEQ_removeindent;
                                
# 874 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 875 "<previous_module>"
tpush_0_20: IF(1,20,tpush_0_21)__CSEQ_removeindent;
                                
# 876 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 877 "<previous_module>"
tpush_0_21: IF(1,21,tpush_0_22)__CSEQ_removeindent;
                                
# 878 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 879 "<previous_module>"
tpush_0_22: IF(1,22,tpush_0_23)__CSEQ_removeindent;
                                
# 880 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 881 "<previous_module>"
tpush_0_23: IF(1,23,tpush_0_24)__CSEQ_removeindent;
                                
# 882 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 883 "<previous_module>"
tpush_0_24: IF(1,24,tpush_0_25)__CSEQ_removeindent;
                                
# 884 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 885 "<previous_module>"
;
                                ;
                                
# 886 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 887 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 888 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 889 "<previous_module>"
                                {

# 890 "<previous_module>"
                                        {
                                                
# 891 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 892 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 893 "<previous_module>"
                                                {
                                                        
# 894 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 896 "<previous_module>"
;
                                                
# 897 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 898 "<previous_module>"
                                                {
                                                        
# 899 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 901 "<previous_module>"
;
                                                
# 902 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 903 "<previous_module>"
                                                {
                                                        
# 904 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 906 "<previous_module>"
;
                                                
# 907 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 908 "<previous_module>"
tpush_0_25: IF(1,25,tpush_0_26)__CSEQ_removeindent;
                                                
# 909 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 910 "<previous_module>"
__exit_loop_2:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 26);

                                                
# 911 "<previous_module>"
;
                                                ;
                                                
# 912 "<previous_module>"
__exit__exponential_backoff_1_0:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 26);

                                                
# 913 "<previous_module>"
;
                                                ;
                                        }
                                        
# 915 "<previous_module>"
;
                                }

                                
# 917 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 26);
                                ;
                                
# 918 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 919 "<previous_module>"
;
                                ;
                                
# 920 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 921 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 922 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 923 "<previous_module>"
                                {
                                        
# 924 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 926 "<previous_module>"
;
                        }
                        
# 928 "<previous_module>"
;
                        
# 929 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 930 "<previous_module>"
                        {
                                
# 931 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 933 "<previous_module>"
;

# 934 "<previous_module>"
                        {
                                
# 935 "<previous_module>"
tpush_0_26: IF(1,26,tpush_0_27)__CSEQ_removeindent;
                                
# 936 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 937 "<previous_module>"
tpush_0_27: IF(1,27,tpush_0_28)__CSEQ_removeindent;
                                
# 938 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 939 "<previous_module>"
tpush_0_28: IF(1,28,tpush_0_29)__CSEQ_removeindent;
                                
# 940 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 941 "<previous_module>"
tpush_0_29: IF(1,29,tpush_0_30)__CSEQ_removeindent;
                                
# 942 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 943 "<previous_module>"
tpush_0_30: IF(1,30,tpush_0_31)__CSEQ_removeindent;
                                
# 944 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 945 "<previous_module>"
tpush_0_31: IF(1,31,tpush_0_32)__CSEQ_removeindent;
                                
# 946 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 947 "<previous_module>"
tpush_0_32: IF(1,32,tpush_0_33)__CSEQ_removeindent;
                                
# 948 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 949 "<previous_module>"
;
                                ;
                                
# 950 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 951 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 952 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 953 "<previous_module>"
                                {

# 954 "<previous_module>"
                                        {
                                                
# 955 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 956 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 957 "<previous_module>"
                                                {
                                                        
# 958 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 960 "<previous_module>"
;
                                                
# 961 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 962 "<previous_module>"
                                                {
                                                        
# 963 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 965 "<previous_module>"
;
                                                
# 966 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 967 "<previous_module>"
                                                {
                                                        
# 968 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 970 "<previous_module>"
;
                                                
# 971 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 972 "<previous_module>"
tpush_0_33: IF(1,33,tpush_0_34)__CSEQ_removeindent;
                                                
# 973 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 974 "<previous_module>"
__exit_loop_3:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 34);

                                                
# 975 "<previous_module>"
;
                                                ;
                                                
# 976 "<previous_module>"
__exit__exponential_backoff_1_1:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 34);

                                                
# 977 "<previous_module>"
;
                                                ;
                                        }
                                        
# 979 "<previous_module>"
;
                                }

                                
# 981 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 34);
                                ;
                                
# 982 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 983 "<previous_module>"
;
                                ;
                                
# 984 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 985 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 986 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 987 "<previous_module>"
                                {
                                        
# 988 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 990 "<previous_module>"
;
                        }
                        
# 992 "<previous_module>"
;
                        
# 993 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 994 "<previous_module>"
                        {
                                
# 995 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 997 "<previous_module>"
;

# 998 "<previous_module>"
                        {
                                
# 999 "<previous_module>"
tpush_0_34: IF(1,34,tpush_0_35)__CSEQ_removeindent;
                                
# 1000 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1001 "<previous_module>"
tpush_0_35: IF(1,35,tpush_0_36)__CSEQ_removeindent;
                                
# 1002 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1003 "<previous_module>"
tpush_0_36: IF(1,36,tpush_0_37)__CSEQ_removeindent;
                                
# 1004 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1005 "<previous_module>"
tpush_0_37: IF(1,37,tpush_0_38)__CSEQ_removeindent;
                                
# 1006 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1007 "<previous_module>"
tpush_0_38: IF(1,38,tpush_0_39)__CSEQ_removeindent;
                                
# 1008 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1009 "<previous_module>"
tpush_0_39: IF(1,39,tpush_0_40)__CSEQ_removeindent;
                                
# 1010 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1011 "<previous_module>"
tpush_0_40: IF(1,40,tpush_0_41)__CSEQ_removeindent;
                                
# 1012 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1013 "<previous_module>"
;
                                ;
                                
# 1014 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1015 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1016 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1017 "<previous_module>"
                                {

# 1018 "<previous_module>"
                                        {
                                                
# 1019 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1020 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1021 "<previous_module>"
                                                {
                                                        
# 1022 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1024 "<previous_module>"
;
                                                
# 1025 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1026 "<previous_module>"
                                                {
                                                        
# 1027 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1029 "<previous_module>"
;
                                                
# 1030 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1031 "<previous_module>"
                                                {
                                                        
# 1032 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1034 "<previous_module>"
;
                                                
# 1035 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1036 "<previous_module>"
tpush_0_41: IF(1,41,tpush_0_42)__CSEQ_removeindent;
                                                
# 1037 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1038 "<previous_module>"
__exit_loop_4:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 42);

                                                
# 1039 "<previous_module>"
;
                                                ;
                                                
# 1040 "<previous_module>"
__exit__exponential_backoff_1_2:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 42);

                                                
# 1041 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1043 "<previous_module>"
;
                                }

                                
# 1045 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 42);
                                ;
                                
# 1046 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1047 "<previous_module>"
;
                                ;
                                
# 1048 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1049 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1050 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1051 "<previous_module>"
                                {
                                        
# 1052 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 1054 "<previous_module>"
;
                        }
                        
# 1056 "<previous_module>"
;
                        
# 1057 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1058 "<previous_module>"
                        {
                                
# 1059 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 1061 "<previous_module>"
;

# 1062 "<previous_module>"
                        {
                                
# 1063 "<previous_module>"
tpush_0_42: IF(1,42,tpush_0_43)__CSEQ_removeindent;
                                
# 1064 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1065 "<previous_module>"
tpush_0_43: IF(1,43,tpush_0_44)__CSEQ_removeindent;
                                
# 1066 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1067 "<previous_module>"
tpush_0_44: IF(1,44,tpush_0_45)__CSEQ_removeindent;
                                
# 1068 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1069 "<previous_module>"
tpush_0_45: IF(1,45,tpush_0_46)__CSEQ_removeindent;
                                
# 1070 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1071 "<previous_module>"
tpush_0_46: IF(1,46,tpush_0_47)__CSEQ_removeindent;
                                
# 1072 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1073 "<previous_module>"
tpush_0_47: IF(1,47,tpush_0_48)__CSEQ_removeindent;
                                
# 1074 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1075 "<previous_module>"
tpush_0_48: IF(1,48,tpush_0_49)__CSEQ_removeindent;
                                
# 1076 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1077 "<previous_module>"
;
                                ;
                                
# 1078 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1079 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1080 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1081 "<previous_module>"
                                {

# 1082 "<previous_module>"
                                        {
                                                
# 1083 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1084 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1085 "<previous_module>"
                                                {
                                                        
# 1086 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1088 "<previous_module>"
;
                                                
# 1089 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1090 "<previous_module>"
                                                {
                                                        
# 1091 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1093 "<previous_module>"
;
                                                
# 1094 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1095 "<previous_module>"
                                                {
                                                        
# 1096 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1098 "<previous_module>"
;
                                                
# 1099 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1100 "<previous_module>"
tpush_0_49: IF(1,49,tpush_0_50)__CSEQ_removeindent;
                                                
# 1101 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1102 "<previous_module>"
__exit_loop_5:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 50);

                                                
# 1103 "<previous_module>"
;
                                                ;
                                                
# 1104 "<previous_module>"
__exit__exponential_backoff_1_3:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 50);

                                                
# 1105 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1107 "<previous_module>"
;
                                }

                                
# 1109 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 50);
                                ;
                                
# 1110 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1111 "<previous_module>"
;
                                ;
                                
# 1112 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1113 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1114 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1115 "<previous_module>"
                                {
                                        
# 1116 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 1118 "<previous_module>"
;
                        }
                        
# 1120 "<previous_module>"
;
                        
# 1121 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1122 "<previous_module>"
                        {
                                
# 1123 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 1125 "<previous_module>"
;

# 1126 "<previous_module>"
                        {
                                
# 1127 "<previous_module>"
tpush_0_50: IF(1,50,tpush_0_51)__CSEQ_removeindent;
                                
# 1128 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1129 "<previous_module>"
tpush_0_51: IF(1,51,tpush_0_52)__CSEQ_removeindent;
                                
# 1130 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1131 "<previous_module>"
tpush_0_52: IF(1,52,tpush_0_53)__CSEQ_removeindent;
                                
# 1132 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1133 "<previous_module>"
tpush_0_53: IF(1,53,tpush_0_54)__CSEQ_removeindent;
                                
# 1134 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1135 "<previous_module>"
tpush_0_54: IF(1,54,tpush_0_55)__CSEQ_removeindent;
                                
# 1136 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1137 "<previous_module>"
tpush_0_55: IF(1,55,tpush_0_56)__CSEQ_removeindent;
                                
# 1138 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1139 "<previous_module>"
tpush_0_56: IF(1,56,tpush_0_57)__CSEQ_removeindent;
                                
# 1140 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1141 "<previous_module>"
;
                                ;
                                
# 1142 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1143 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1144 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1145 "<previous_module>"
                                {

# 1146 "<previous_module>"
                                        {
                                                
# 1147 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1148 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1149 "<previous_module>"
                                                {
                                                        
# 1150 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1152 "<previous_module>"
;
                                                
# 1153 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1154 "<previous_module>"
                                                {
                                                        
# 1155 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1157 "<previous_module>"
;
                                                
# 1158 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1159 "<previous_module>"
                                                {
                                                        
# 1160 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1162 "<previous_module>"
;
                                                
# 1163 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1164 "<previous_module>"
tpush_0_57: IF(1,57,tpush_0_58)__CSEQ_removeindent;
                                                
# 1165 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1166 "<previous_module>"
__exit_loop_6:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 58);

                                                
# 1167 "<previous_module>"
;
                                                ;
                                                
# 1168 "<previous_module>"
__exit__exponential_backoff_1_4:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 58);

                                                
# 1169 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1171 "<previous_module>"
;
                                }

                                
# 1173 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 58);
                                ;
                                
# 1174 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1175 "<previous_module>"
;
                                ;
                                
# 1176 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1177 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1178 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1179 "<previous_module>"
                                {
                                        
# 1180 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 1182 "<previous_module>"
;
                        }
                        
# 1184 "<previous_module>"
;
                        
# 1185 "<previous_module>"
tpush_0_58: IF(1,58,tpush_0_59)__CSEQ_removeindent;
                        
# 1186 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                        
# 1187 "<previous_module>"
__exit_loop_1:
                        __CPROVER_assume(__cs_pc_cs[1] >= 59);

                        
# 1188 "<previous_module>"
;
                        ;
                        
# 1189 "<previous_module>"
goto __exit__lfds711_stack_push_1;
                        ;
                        
# 1190 "<previous_module>"
__exit__lfds711_stack_push_1:
                        __CPROVER_assume(__cs_pc_cs[1] >= 59);

                        
# 1191 "<previous_module>"
;
                        ;
                }
                
# 1193 "<previous_module>"
;
                
# 1194 "<previous_module>"
__exit__insert_1:
                __CPROVER_assume(__cs_pc_cs[1] >= 59);

                
# 1195 "<previous_module>"
;
                ;
        }
        
# 1197 "<previous_module>"
;
        
# 1198 "<previous_module>"
;
        ;
        
# 1199 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_25;
        
# 1200 "<previous_module>"
tpush_0_59: IF(1,59,tpush_0_60)__CSEQ_removeindent;
        
# 1201 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
        
# 1202 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_25)

# 1203 "<previous_module>"
        {
                
# 1204 "<previous_module>"
tpush_0_60: IF(1,60,tpush_0_61)__CSEQ_removeindent;
                
# 1205 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
        }

        
# 1207 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 61);
        ;
        
# 1208 "<previous_module>"
;
        ;
        
# 1209 "<previous_module>"
;
        ;
        
# 1210 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_26;
        
# 1211 "<previous_module>"
tpush_0_61: IF(1,61,tpush_0_62)__CSEQ_removeindent;
        
# 1212 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
        
# 1213 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_26)

# 1214 "<previous_module>"
        {
                
# 1215 "<previous_module>"
tpush_0_62: IF(1,62,tpush_0_63)__CSEQ_removeindent;
                
# 1216 "<previous_module>"
__cs_mutex_lock(&lock, 1);
        }

        
# 1218 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 63);
        ;
        
# 1219 "<previous_module>"
;
        ;

# 1220 "<previous_module>"
        {
                
# 1221 "<previous_module>"
static struct lfds711_stack_state *__cs_param_insert_s;
                
# 1222 "<previous_module>"
tpush_0_63: IF(1,63,tpush_0_64)__CSEQ_removeindent;
                
# 1223 "<previous_module>"
__cs_param_insert_s = ss;
                
# 1224 "<previous_module>"
static int long long unsigned __cs_param_insert_id;
                
# 1225 "<previous_module>"
__cs_param_insert_id = 1600;
                
# 1226 "<previous_module>"
static struct test_data *__cs_local_insert_td;
                
# 1227 "<previous_module>"
tpush_0_64: IF(1,64,tpush_0_65)__CSEQ_removeindent;
                
# 1228 "<previous_module>"
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
                
# 1229 "<previous_module>"
tpush_0_65: IF(1,65,tpush_0_66)__CSEQ_removeindent;
                
# 1230 "<previous_module>"
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
                
# 1231 "<previous_module>"
tpush_0_66: IF(1,66,tpush_0_67)__CSEQ_removeindent;
                
# 1232 "<previous_module>"
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);

# 1233 "<previous_module>"
                {
                        
# 1234 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                        
# 1235 "<previous_module>"
tpush_0_67: IF(1,67,tpush_0_68)__CSEQ_removeindent;
                        
# 1236 "<previous_module>"
__cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
                        
# 1237 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                        
# 1238 "<previous_module>"
tpush_0_68: IF(1,68,tpush_0_69)__CSEQ_removeindent;
                        
# 1239 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
                        
# 1240 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                        
# 1241 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                        
# 1242 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                        
# 1243 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                        
# 1244 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                        
# 1245 "<previous_module>"
;
                        ;
                        
# 1246 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                        
# 1247 "<previous_module>"
tpush_0_69: IF(1,69,tpush_0_70)__CSEQ_removeindent;
                        
# 1248 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                        
# 1249 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 1250 "<previous_module>"
                        {
                                
# 1251 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 1252 "<previous_module>"
tpush_0_70: IF(1,70,tpush_0_71)__CSEQ_removeindent;
                                
# 1253 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 1254 "<previous_module>"
tpush_0_71: IF(1,71,tpush_0_72)__CSEQ_removeindent;
                                
# 1255 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 1257 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 72);
                        ;
                        
# 1258 "<previous_module>"
;
                        ;
                        
# 1259 "<previous_module>"
;
                        ;
                        
# 1260 "<previous_module>"
;
                        ;
                        
# 1261 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                        
# 1262 "<previous_module>"
tpush_0_72: IF(1,72,tpush_0_73)__CSEQ_removeindent;
                        
# 1263 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                        
# 1264 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 1265 "<previous_module>"
                        {
                                
# 1266 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 1267 "<previous_module>"
tpush_0_73: IF(1,73,tpush_0_74)__CSEQ_removeindent;
                                
# 1268 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 1269 "<previous_module>"
tpush_0_74: IF(1,74,tpush_0_75)__CSEQ_removeindent;
                                
# 1270 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 1272 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 75);
                        ;
                        
# 1273 "<previous_module>"
;
                        ;
                        
# 1274 "<previous_module>"
;
                        ;
                        
# 1275 "<previous_module>"
tpush_0_75: IF(1,75,tpush_0_76)__CSEQ_removeindent;
                        
# 1276 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                        
# 1277 "<previous_module>"
tpush_0_76: IF(1,76,tpush_0_77)__CSEQ_removeindent;
                        
# 1278 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                        
# 1279 "<previous_module>"
tpush_0_77: IF(1,77,tpush_0_78)__CSEQ_removeindent;
                        
# 1280 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                        
# 1281 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                        
# 1282 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                        
# 1283 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                        
# 1284 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1285 "<previous_module>"
                        {
                                
# 1286 "<previous_module>"
goto __exit_loop_7;
                                ;
                        }

                        
# 1288 "<previous_module>"
;

# 1289 "<previous_module>"
                        {
                                
# 1290 "<previous_module>"
tpush_0_78: IF(1,78,tpush_0_79)__CSEQ_removeindent;
                                
# 1291 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1292 "<previous_module>"
tpush_0_79: IF(1,79,tpush_0_80)__CSEQ_removeindent;
                                
# 1293 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1294 "<previous_module>"
tpush_0_80: IF(1,80,tpush_0_81)__CSEQ_removeindent;
                                
# 1295 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1296 "<previous_module>"
tpush_0_81: IF(1,81,tpush_0_82)__CSEQ_removeindent;
                                
# 1297 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1298 "<previous_module>"
tpush_0_82: IF(1,82,tpush_0_83)__CSEQ_removeindent;
                                
# 1299 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1300 "<previous_module>"
tpush_0_83: IF(1,83,tpush_0_84)__CSEQ_removeindent;
                                
# 1301 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1302 "<previous_module>"
tpush_0_84: IF(1,84,tpush_0_85)__CSEQ_removeindent;
                                
# 1303 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1304 "<previous_module>"
;
                                ;
                                
# 1305 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1306 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1307 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1308 "<previous_module>"
                                {

# 1309 "<previous_module>"
                                        {
                                                
# 1310 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1311 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1312 "<previous_module>"
                                                {
                                                        
# 1313 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1315 "<previous_module>"
;
                                                
# 1316 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1317 "<previous_module>"
                                                {
                                                        
# 1318 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1320 "<previous_module>"
;
                                                
# 1321 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1322 "<previous_module>"
                                                {
                                                        
# 1323 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1325 "<previous_module>"
;
                                                
# 1326 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1327 "<previous_module>"
tpush_0_85: IF(1,85,tpush_0_86)__CSEQ_removeindent;
                                                
# 1328 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1329 "<previous_module>"
__exit_loop_8:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 86);

                                                
# 1330 "<previous_module>"
;
                                                ;
                                                
# 1331 "<previous_module>"
__exit__exponential_backoff_2_0:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 86);

                                                
# 1332 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1334 "<previous_module>"
;
                                }

                                
# 1336 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 86);
                                ;
                                
# 1337 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1338 "<previous_module>"
;
                                ;
                                
# 1339 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1340 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1341 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1342 "<previous_module>"
                                {
                                        
# 1343 "<previous_module>"
goto __exit_loop_7;
                                        ;
                                }

                                
# 1345 "<previous_module>"
;
                        }
                        
# 1347 "<previous_module>"
;
                        
# 1348 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1349 "<previous_module>"
                        {
                                
# 1350 "<previous_module>"
goto __exit_loop_7;
                                ;
                        }

                        
# 1352 "<previous_module>"
;

# 1353 "<previous_module>"
                        {
                                
# 1354 "<previous_module>"
tpush_0_86: IF(1,86,tpush_0_87)__CSEQ_removeindent;
                                
# 1355 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1356 "<previous_module>"
tpush_0_87: IF(1,87,tpush_0_88)__CSEQ_removeindent;
                                
# 1357 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1358 "<previous_module>"
tpush_0_88: IF(1,88,tpush_0_89)__CSEQ_removeindent;
                                
# 1359 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1360 "<previous_module>"
tpush_0_89: IF(1,89,tpush_0_90)__CSEQ_removeindent;
                                
# 1361 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1362 "<previous_module>"
tpush_0_90: IF(1,90,tpush_0_91)__CSEQ_removeindent;
                                
# 1363 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1364 "<previous_module>"
tpush_0_91: IF(1,91,tpush_0_92)__CSEQ_removeindent;
                                
# 1365 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1366 "<previous_module>"
tpush_0_92: IF(1,92,tpush_0_93)__CSEQ_removeindent;
                                
# 1367 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1368 "<previous_module>"
;
                                ;
                                
# 1369 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1370 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1371 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1372 "<previous_module>"
                                {

# 1373 "<previous_module>"
                                        {
                                                
# 1374 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1375 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1376 "<previous_module>"
                                                {
                                                        
# 1377 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1379 "<previous_module>"
;
                                                
# 1380 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1381 "<previous_module>"
                                                {
                                                        
# 1382 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1384 "<previous_module>"
;
                                                
# 1385 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1386 "<previous_module>"
                                                {
                                                        
# 1387 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1389 "<previous_module>"
;
                                                
# 1390 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1391 "<previous_module>"
tpush_0_93: IF(1,93,tpush_0_94)__CSEQ_removeindent;
                                                
# 1392 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1393 "<previous_module>"
__exit_loop_9:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 94);

                                                
# 1394 "<previous_module>"
;
                                                ;
                                                
# 1395 "<previous_module>"
__exit__exponential_backoff_2_1:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 94);

                                                
# 1396 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1398 "<previous_module>"
;
                                }

                                
# 1400 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 94);
                                ;
                                
# 1401 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1402 "<previous_module>"
;
                                ;
                                
# 1403 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1404 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1405 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1406 "<previous_module>"
                                {
                                        
# 1407 "<previous_module>"
goto __exit_loop_7;
                                        ;
                                }

                                
# 1409 "<previous_module>"
;
                        }
                        
# 1411 "<previous_module>"
;
                        
# 1412 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1413 "<previous_module>"
                        {
                                
# 1414 "<previous_module>"
goto __exit_loop_7;
                                ;
                        }

                        
# 1416 "<previous_module>"
;

# 1417 "<previous_module>"
                        {
                                
# 1418 "<previous_module>"
tpush_0_94: IF(1,94,tpush_0_95)__CSEQ_removeindent;
                                
# 1419 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1420 "<previous_module>"
tpush_0_95: IF(1,95,tpush_0_96)__CSEQ_removeindent;
                                
# 1421 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1422 "<previous_module>"
tpush_0_96: IF(1,96,tpush_0_97)__CSEQ_removeindent;
                                
# 1423 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1424 "<previous_module>"
tpush_0_97: IF(1,97,tpush_0_98)__CSEQ_removeindent;
                                
# 1425 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1426 "<previous_module>"
tpush_0_98: IF(1,98,tpush_0_99)__CSEQ_removeindent;
                                
# 1427 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1428 "<previous_module>"
tpush_0_99: IF(1,99,tpush_0_100)__CSEQ_removeindent;
                                
# 1429 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1430 "<previous_module>"
tpush_0_100: IF(1,100,tpush_0_101)__CSEQ_removeindent;
                                
# 1431 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1432 "<previous_module>"
;
                                ;
                                
# 1433 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1434 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1435 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1436 "<previous_module>"
                                {

# 1437 "<previous_module>"
                                        {
                                                
# 1438 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1439 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1440 "<previous_module>"
                                                {
                                                        
# 1441 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1443 "<previous_module>"
;
                                                
# 1444 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1445 "<previous_module>"
                                                {
                                                        
# 1446 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1448 "<previous_module>"
;
                                                
# 1449 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1450 "<previous_module>"
                                                {
                                                        
# 1451 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1453 "<previous_module>"
;
                                                
# 1454 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1455 "<previous_module>"
tpush_0_101: IF(1,101,tpush_0_102)__CSEQ_removeindent;
                                                
# 1456 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1457 "<previous_module>"
__exit_loop_10:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 102);

                                                
# 1458 "<previous_module>"
;
                                                ;
                                                
# 1459 "<previous_module>"
__exit__exponential_backoff_2_2:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 102);

                                                
# 1460 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1462 "<previous_module>"
;
                                }

                                
# 1464 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 102);
                                ;
                                
# 1465 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1466 "<previous_module>"
;
                                ;
                                
# 1467 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1468 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1469 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1470 "<previous_module>"
                                {
                                        
# 1471 "<previous_module>"
goto __exit_loop_7;
                                        ;
                                }

                                
# 1473 "<previous_module>"
;
                        }
                        
# 1475 "<previous_module>"
;
                        
# 1476 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1477 "<previous_module>"
                        {
                                
# 1478 "<previous_module>"
goto __exit_loop_7;
                                ;
                        }

                        
# 1480 "<previous_module>"
;

# 1481 "<previous_module>"
                        {
                                
# 1482 "<previous_module>"
tpush_0_102: IF(1,102,tpush_0_103)__CSEQ_removeindent;
                                
# 1483 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1484 "<previous_module>"
tpush_0_103: IF(1,103,tpush_0_104)__CSEQ_removeindent;
                                
# 1485 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1486 "<previous_module>"
tpush_0_104: IF(1,104,tpush_0_105)__CSEQ_removeindent;
                                
# 1487 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1488 "<previous_module>"
tpush_0_105: IF(1,105,tpush_0_106)__CSEQ_removeindent;
                                
# 1489 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1490 "<previous_module>"
tpush_0_106: IF(1,106,tpush_0_107)__CSEQ_removeindent;
                                
# 1491 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1492 "<previous_module>"
tpush_0_107: IF(1,107,tpush_0_108)__CSEQ_removeindent;
                                
# 1493 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1494 "<previous_module>"
tpush_0_108: IF(1,108,tpush_0_109)__CSEQ_removeindent;
                                
# 1495 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1496 "<previous_module>"
;
                                ;
                                
# 1497 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1498 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1499 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1500 "<previous_module>"
                                {

# 1501 "<previous_module>"
                                        {
                                                
# 1502 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1503 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1504 "<previous_module>"
                                                {
                                                        
# 1505 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1507 "<previous_module>"
;
                                                
# 1508 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1509 "<previous_module>"
                                                {
                                                        
# 1510 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1512 "<previous_module>"
;
                                                
# 1513 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1514 "<previous_module>"
                                                {
                                                        
# 1515 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1517 "<previous_module>"
;
                                                
# 1518 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1519 "<previous_module>"
tpush_0_109: IF(1,109,tpush_0_110)__CSEQ_removeindent;
                                                
# 1520 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1521 "<previous_module>"
__exit_loop_11:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 110);

                                                
# 1522 "<previous_module>"
;
                                                ;
                                                
# 1523 "<previous_module>"
__exit__exponential_backoff_2_3:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 110);

                                                
# 1524 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1526 "<previous_module>"
;
                                }

                                
# 1528 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 110);
                                ;
                                
# 1529 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1530 "<previous_module>"
;
                                ;
                                
# 1531 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1532 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1533 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1534 "<previous_module>"
                                {
                                        
# 1535 "<previous_module>"
goto __exit_loop_7;
                                        ;
                                }

                                
# 1537 "<previous_module>"
;
                        }
                        
# 1539 "<previous_module>"
;
                        
# 1540 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1541 "<previous_module>"
                        {
                                
# 1542 "<previous_module>"
goto __exit_loop_7;
                                ;
                        }

                        
# 1544 "<previous_module>"
;

# 1545 "<previous_module>"
                        {
                                
# 1546 "<previous_module>"
tpush_0_110: IF(1,110,tpush_0_111)__CSEQ_removeindent;
                                
# 1547 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1548 "<previous_module>"
tpush_0_111: IF(1,111,tpush_0_112)__CSEQ_removeindent;
                                
# 1549 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1550 "<previous_module>"
tpush_0_112: IF(1,112,tpush_0_113)__CSEQ_removeindent;
                                
# 1551 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1552 "<previous_module>"
tpush_0_113: IF(1,113,tpush_0_114)__CSEQ_removeindent;
                                
# 1553 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1554 "<previous_module>"
tpush_0_114: IF(1,114,tpush_0_115)__CSEQ_removeindent;
                                
# 1555 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1556 "<previous_module>"
tpush_0_115: IF(1,115,tpush_0_116)__CSEQ_removeindent;
                                
# 1557 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1558 "<previous_module>"
tpush_0_116: IF(1,116,tpush_0_117)__CSEQ_removeindent;
                                
# 1559 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1560 "<previous_module>"
;
                                ;
                                
# 1561 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1562 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1563 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1564 "<previous_module>"
                                {

# 1565 "<previous_module>"
                                        {
                                                
# 1566 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1567 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1568 "<previous_module>"
                                                {
                                                        
# 1569 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1571 "<previous_module>"
;
                                                
# 1572 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1573 "<previous_module>"
                                                {
                                                        
# 1574 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1576 "<previous_module>"
;
                                                
# 1577 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1578 "<previous_module>"
                                                {
                                                        
# 1579 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1581 "<previous_module>"
;
                                                
# 1582 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1583 "<previous_module>"
tpush_0_117: IF(1,117,tpush_0_118)__CSEQ_removeindent;
                                                
# 1584 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1585 "<previous_module>"
__exit_loop_12:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 118);

                                                
# 1586 "<previous_module>"
;
                                                ;
                                                
# 1587 "<previous_module>"
__exit__exponential_backoff_2_4:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 118);

                                                
# 1588 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1590 "<previous_module>"
;
                                }

                                
# 1592 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 118);
                                ;
                                
# 1593 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1594 "<previous_module>"
;
                                ;
                                
# 1595 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1596 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1597 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1598 "<previous_module>"
                                {
                                        
# 1599 "<previous_module>"
goto __exit_loop_7;
                                        ;
                                }

                                
# 1601 "<previous_module>"
;
                        }
                        
# 1603 "<previous_module>"
;
                        
# 1604 "<previous_module>"
tpush_0_118: IF(1,118,tpush_0_119)__CSEQ_removeindent;
                        
# 1605 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                        
# 1606 "<previous_module>"
__exit_loop_7:
                        __CPROVER_assume(__cs_pc_cs[1] >= 119);

                        
# 1607 "<previous_module>"
;
                        ;
                        
# 1608 "<previous_module>"
goto __exit__lfds711_stack_push_2;
                        ;
                        
# 1609 "<previous_module>"
__exit__lfds711_stack_push_2:
                        __CPROVER_assume(__cs_pc_cs[1] >= 119);

                        
# 1610 "<previous_module>"
;
                        ;
                }
                
# 1612 "<previous_module>"
;
                
# 1613 "<previous_module>"
__exit__insert_2:
                __CPROVER_assume(__cs_pc_cs[1] >= 119);

                
# 1614 "<previous_module>"
;
                ;
        }
        
# 1616 "<previous_module>"
;
        
# 1617 "<previous_module>"
;
        ;
        
# 1618 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_27;
        
# 1619 "<previous_module>"
tpush_0_119: IF(1,119,tpush_0_120)__CSEQ_removeindent;
        
# 1620 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_27 = ATOMIC_OPERATION;
        
# 1621 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_27)

# 1622 "<previous_module>"
        {
                
# 1623 "<previous_module>"
tpush_0_120: IF(1,120,tpush_0_121)__CSEQ_removeindent;
                
# 1624 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
        }

        
# 1626 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 121);
        ;
        
# 1627 "<previous_module>"
;
        ;
        
# 1628 "<previous_module>"
__exit_push:
        __CPROVER_assume(__cs_pc_cs[1] >= 121);

        
# 1629 "<previous_module>"
;
        ;
        
# 1630 "<previous_module>"
tpush_0_121: __CSEQ_removeindent;
        
# 1631 "<previous_module>"
__cs_exit(0, 1);
}


# 1633 "<previous_module>"
void *pop_0(void *__cs_param_pop___cs_unused)

# 1634 "<previous_module>"
{
        
# 1635 "<previous_module>"
static int __cs_local_pop_res;
        
# 1636 "<previous_module>"
IF(2,0,tpop_0_1)__CSEQ_removeindent;
        
# 1637 "<previous_module>"
__cs_local_pop_res = nondet_int();
        
# 1638 "<previous_module>"
static int __cs_local_pop_count;
        
# 1639 "<previous_module>"
__cs_local_pop_count = 0;
        
# 1640 "<previous_module>"
static int __cs_local_pop_loop;
        
# 1641 "<previous_module>"
__cs_local_pop_loop = nondet_int();
        
# 1642 "<previous_module>"
;
        ;
        
# 1643 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_28;
        
# 1644 "<previous_module>"
tpop_0_1: IF(2,1,tpop_0_2)__CSEQ_removeindent;
        
# 1645 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_28 = ATOMIC_OPERATION;
        
# 1646 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_28)

# 1647 "<previous_module>"
        {
                
# 1648 "<previous_module>"
tpop_0_2: IF(2,2,tpop_0_3)__CSEQ_removeindent;
                
# 1649 "<previous_module>"
__cs_mutex_lock(&lock, 2);
        }

        
# 1651 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 3);
        ;
        
# 1652 "<previous_module>"
;
        ;
        
# 1653 "<previous_module>"
static int __cs_local_pop_ytrewq;
        
# 1654 "<previous_module>"
__cs_local_pop_ytrewq = 1050;
        
# 1655 "<previous_module>"
static int __cs_retval__delete_1;

# 1656 "<previous_module>"
        {
                
# 1657 "<previous_module>"
static struct lfds711_stack_state *__cs_param_delete_s;
                
# 1658 "<previous_module>"
tpop_0_3: IF(2,3,tpop_0_4)__CSEQ_removeindent;
                
# 1659 "<previous_module>"
__cs_param_delete_s = ss;
                
# 1660 "<previous_module>"
static struct lfds711_stack_element *__cs_local_delete_se;
                
# 1661 "<previous_module>"
static struct test_data *__cs_local_delete_temp_td;
                
# 1662 "<previous_module>"
static int __cs_local_delete_res;
                
# 1663 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_1;

# 1664 "<previous_module>"
                {
                        
# 1665 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                        
# 1666 "<previous_module>"
tpop_0_4: IF(2,4,tpop_0_5)__CSEQ_removeindent;
                        
# 1667 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = &mystack;
                        
# 1668 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                        
# 1669 "<previous_module>"
tpop_0_5: IF(2,5,tpop_0_6)__CSEQ_removeindent;
                        
# 1670 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_delete_se;
                        
# 1671 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                        
# 1672 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                        
# 1673 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                        
# 1674 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                        
# 1675 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                        
# 1676 "<previous_module>"
;
                        ;
                        
# 1677 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                        
# 1678 "<previous_module>"
tpop_0_6: IF(2,6,tpop_0_7)__CSEQ_removeindent;
                        
# 1679 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                        
# 1680 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 1681 "<previous_module>"
                        {
                                
# 1682 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 1683 "<previous_module>"
tpop_0_7: IF(2,7,tpop_0_8)__CSEQ_removeindent;
                                
# 1684 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 1685 "<previous_module>"
tpop_0_8: IF(2,8,tpop_0_9)__CSEQ_removeindent;
                                
# 1686 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 1688 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 9);
                        ;
                        
# 1689 "<previous_module>"
;
                        ;
                        
# 1690 "<previous_module>"
;
                        ;
                        
# 1691 "<previous_module>"
;
                        ;
                        
# 1692 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                        
# 1693 "<previous_module>"
tpop_0_9: IF(2,9,tpop_0_10)__CSEQ_removeindent;
                        
# 1694 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                        
# 1695 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 1696 "<previous_module>"
                        {
                                
# 1697 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 1698 "<previous_module>"
tpop_0_10: IF(2,10,tpop_0_11)__CSEQ_removeindent;
                                
# 1699 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 1700 "<previous_module>"
tpop_0_11: IF(2,11,tpop_0_12)__CSEQ_removeindent;
                                
# 1701 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 1703 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 12);
                        ;
                        
# 1704 "<previous_module>"
;
                        ;
                        
# 1705 "<previous_module>"
;
                        ;
                        
# 1706 "<previous_module>"
tpop_0_12: IF(2,12,tpop_0_13)__CSEQ_removeindent;
                        
# 1707 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                        
# 1708 "<previous_module>"
tpop_0_13: IF(2,13,tpop_0_14)__CSEQ_removeindent;
                        
# 1709 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                        
# 1710 "<previous_module>"
tpop_0_14: IF(2,14,tpop_0_15)__CSEQ_removeindent;
                        
# 1711 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                        
# 1712 "<previous_module>"
tpop_0_15: IF(2,15,tpop_0_16)__CSEQ_removeindent;
                        
# 1713 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                        
# 1714 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                        
# 1715 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                        
# 1716 "<previous_module>"
;
                        ;
                        
# 1717 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                        
# 1718 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 1719 "<previous_module>"
                        {
                                
# 1720 "<previous_module>"
;
                                ;
                                
# 1721 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                
# 1722 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1723 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 1724 "<previous_module>"
                                {
                                        
# 1725 "<previous_module>"
tpop_0_16: IF(2,16,tpop_0_17)__CSEQ_removeindent;
                                        
# 1726 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1727 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1728 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1730 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 17);
                                ;
                                
# 1731 "<previous_module>"
tpop_0_17: IF(2,17,tpop_0_18)__CSEQ_removeindent;
                                
# 1732 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1733 "<previous_module>"
tpop_0_18: IF(2,18,tpop_0_19)__CSEQ_removeindent;
                                
# 1734 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1735 "<previous_module>"
tpop_0_19: IF(2,19,tpop_0_20)__CSEQ_removeindent;
                                
# 1736 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1737 "<previous_module>"
tpop_0_20: IF(2,20,tpop_0_21)__CSEQ_removeindent;
                                
# 1738 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1739 "<previous_module>"
tpop_0_21: IF(2,21,tpop_0_22)__CSEQ_removeindent;
                                
# 1740 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1741 "<previous_module>"
;
                                ;
                                
# 1742 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                
# 1743 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1744 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 1745 "<previous_module>"
                                {

# 1746 "<previous_module>"
                                        {
                                                
# 1747 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1748 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1749 "<previous_module>"
                                                {
                                                        
# 1750 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1752 "<previous_module>"
;
                                                
# 1753 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1754 "<previous_module>"
                                                {
                                                        
# 1755 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1757 "<previous_module>"
;
                                                
# 1758 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1759 "<previous_module>"
                                                {
                                                        
# 1760 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1762 "<previous_module>"
;
                                                
# 1763 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1764 "<previous_module>"
tpop_0_22: IF(2,22,tpop_0_23)__CSEQ_removeindent;
                                                
# 1765 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1766 "<previous_module>"
__exit_loop_14:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 23);

                                                
# 1767 "<previous_module>"
;
                                                ;
                                                
# 1768 "<previous_module>"
__exit__exponential_backoff_3_0:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 23);

                                                
# 1769 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1771 "<previous_module>"
;
                                        
# 1772 "<previous_module>"
tpop_0_23: IF(2,23,tpop_0_24)__CSEQ_removeindent;
                                        
# 1773 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 1774 "<previous_module>"
tpop_0_24: IF(2,24,tpop_0_25)__CSEQ_removeindent;
                                        
# 1775 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 1777 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 25);
                                ;
                                
# 1778 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 1779 "<previous_module>"
;
                                ;
                                
# 1780 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                
# 1781 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 1782 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 1783 "<previous_module>"
                                {
                                        
# 1784 "<previous_module>"
goto __exit_loop_13;
                                        ;
                                }

                                
# 1786 "<previous_module>"
;
                        }
                        
# 1788 "<previous_module>"
;
                        
# 1789 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                        
# 1790 "<previous_module>"
tpop_0_25: IF(2,25,tpop_0_26)__CSEQ_removeindent;
                        
# 1791 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                        
# 1792 "<previous_module>"
__exit_loop_13:
                        __CPROVER_assume(__cs_pc_cs[2] >= 26);

                        
# 1793 "<previous_module>"
;
                        ;
                        
# 1794 "<previous_module>"
if (
# 1795 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 1796 "<previous_module>"
                        {
                                
# 1797 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 1799 "<previous_module>"
;

# 1800 "<previous_module>"
                        {
                                
# 1801 "<previous_module>"
;
                                ;
                                
# 1802 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 1803 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1804 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 1805 "<previous_module>"
                                {
                                        
# 1806 "<previous_module>"
tpop_0_26: IF(2,26,tpop_0_27)__CSEQ_removeindent;
                                        
# 1807 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1808 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1809 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1811 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 27);
                                ;
                                
# 1812 "<previous_module>"
tpop_0_27: IF(2,27,tpop_0_28)__CSEQ_removeindent;
                                
# 1813 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1814 "<previous_module>"
tpop_0_28: IF(2,28,tpop_0_29)__CSEQ_removeindent;
                                
# 1815 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1816 "<previous_module>"
tpop_0_29: IF(2,29,tpop_0_30)__CSEQ_removeindent;
                                
# 1817 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1818 "<previous_module>"
tpop_0_30: IF(2,30,tpop_0_31)__CSEQ_removeindent;
                                
# 1819 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1820 "<previous_module>"
tpop_0_31: IF(2,31,tpop_0_32)__CSEQ_removeindent;
                                
# 1821 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1822 "<previous_module>"
;
                                ;
                                
# 1823 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 1824 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1825 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 1826 "<previous_module>"
                                {

# 1827 "<previous_module>"
                                        {
                                                
# 1828 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1829 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1830 "<previous_module>"
                                                {
                                                        
# 1831 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1833 "<previous_module>"
;
                                                
# 1834 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1835 "<previous_module>"
                                                {
                                                        
# 1836 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1838 "<previous_module>"
;
                                                
# 1839 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1840 "<previous_module>"
                                                {
                                                        
# 1841 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1843 "<previous_module>"
;
                                                
# 1844 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1845 "<previous_module>"
tpop_0_32: IF(2,32,tpop_0_33)__CSEQ_removeindent;
                                                
# 1846 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1847 "<previous_module>"
__exit_loop_16:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 33);

                                                
# 1848 "<previous_module>"
;
                                                ;
                                                
# 1849 "<previous_module>"
__exit__exponential_backoff_4_0:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 33);

                                                
# 1850 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1852 "<previous_module>"
;
                                        
# 1853 "<previous_module>"
tpop_0_33: IF(2,33,tpop_0_34)__CSEQ_removeindent;
                                        
# 1854 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 1855 "<previous_module>"
tpop_0_34: IF(2,34,tpop_0_35)__CSEQ_removeindent;
                                        
# 1856 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 1858 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 35);
                                ;
                                
# 1859 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 1860 "<previous_module>"
;
                                ;
                                
# 1861 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 1862 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 1863 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 1864 "<previous_module>"
                                {
                                        
# 1865 "<previous_module>"
goto __exit_loop_15;
                                        ;
                                }

                                
# 1867 "<previous_module>"
;
                        }
                        
# 1869 "<previous_module>"
;
                        
# 1870 "<previous_module>"
if (
# 1871 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 1872 "<previous_module>"
                        {
                                
# 1873 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 1875 "<previous_module>"
;

# 1876 "<previous_module>"
                        {
                                
# 1877 "<previous_module>"
;
                                ;
                                
# 1878 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 1879 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1880 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 1881 "<previous_module>"
                                {
                                        
# 1882 "<previous_module>"
tpop_0_35: IF(2,35,tpop_0_36)__CSEQ_removeindent;
                                        
# 1883 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1884 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1885 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1887 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 36);
                                ;
                                
# 1888 "<previous_module>"
tpop_0_36: IF(2,36,tpop_0_37)__CSEQ_removeindent;
                                
# 1889 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1890 "<previous_module>"
tpop_0_37: IF(2,37,tpop_0_38)__CSEQ_removeindent;
                                
# 1891 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1892 "<previous_module>"
tpop_0_38: IF(2,38,tpop_0_39)__CSEQ_removeindent;
                                
# 1893 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1894 "<previous_module>"
tpop_0_39: IF(2,39,tpop_0_40)__CSEQ_removeindent;
                                
# 1895 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1896 "<previous_module>"
tpop_0_40: IF(2,40,tpop_0_41)__CSEQ_removeindent;
                                
# 1897 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1898 "<previous_module>"
;
                                ;
                                
# 1899 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 1900 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1901 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 1902 "<previous_module>"
                                {

# 1903 "<previous_module>"
                                        {
                                                
# 1904 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1905 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1906 "<previous_module>"
                                                {
                                                        
# 1907 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1909 "<previous_module>"
;
                                                
# 1910 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1911 "<previous_module>"
                                                {
                                                        
# 1912 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1914 "<previous_module>"
;
                                                
# 1915 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1916 "<previous_module>"
                                                {
                                                        
# 1917 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1919 "<previous_module>"
;
                                                
# 1920 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1921 "<previous_module>"
tpop_0_41: IF(2,41,tpop_0_42)__CSEQ_removeindent;
                                                
# 1922 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1923 "<previous_module>"
__exit_loop_17:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 42);

                                                
# 1924 "<previous_module>"
;
                                                ;
                                                
# 1925 "<previous_module>"
__exit__exponential_backoff_4_1:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 42);

                                                
# 1926 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1928 "<previous_module>"
;
                                        
# 1929 "<previous_module>"
tpop_0_42: IF(2,42,tpop_0_43)__CSEQ_removeindent;
                                        
# 1930 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 1931 "<previous_module>"
tpop_0_43: IF(2,43,tpop_0_44)__CSEQ_removeindent;
                                        
# 1932 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 1934 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 44);
                                ;
                                
# 1935 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 1936 "<previous_module>"
;
                                ;
                                
# 1937 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 1938 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 1939 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 1940 "<previous_module>"
                                {
                                        
# 1941 "<previous_module>"
goto __exit_loop_15;
                                        ;
                                }

                                
# 1943 "<previous_module>"
;
                        }
                        
# 1945 "<previous_module>"
;
                        
# 1946 "<previous_module>"
if (
# 1947 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 1948 "<previous_module>"
                        {
                                
# 1949 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 1951 "<previous_module>"
;

# 1952 "<previous_module>"
                        {
                                
# 1953 "<previous_module>"
;
                                ;
                                
# 1954 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 1955 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1956 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 1957 "<previous_module>"
                                {
                                        
# 1958 "<previous_module>"
tpop_0_44: IF(2,44,tpop_0_45)__CSEQ_removeindent;
                                        
# 1959 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1960 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1961 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1963 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 45);
                                ;
                                
# 1964 "<previous_module>"
tpop_0_45: IF(2,45,tpop_0_46)__CSEQ_removeindent;
                                
# 1965 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1966 "<previous_module>"
tpop_0_46: IF(2,46,tpop_0_47)__CSEQ_removeindent;
                                
# 1967 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1968 "<previous_module>"
tpop_0_47: IF(2,47,tpop_0_48)__CSEQ_removeindent;
                                
# 1969 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1970 "<previous_module>"
tpop_0_48: IF(2,48,tpop_0_49)__CSEQ_removeindent;
                                
# 1971 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1972 "<previous_module>"
tpop_0_49: IF(2,49,tpop_0_50)__CSEQ_removeindent;
                                
# 1973 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1974 "<previous_module>"
;
                                ;
                                
# 1975 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 1976 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1977 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 1978 "<previous_module>"
                                {

# 1979 "<previous_module>"
                                        {
                                                
# 1980 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1981 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1982 "<previous_module>"
                                                {
                                                        
# 1983 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1985 "<previous_module>"
;
                                                
# 1986 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1987 "<previous_module>"
                                                {
                                                        
# 1988 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1990 "<previous_module>"
;
                                                
# 1991 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1992 "<previous_module>"
                                                {
                                                        
# 1993 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1995 "<previous_module>"
;
                                                
# 1996 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1997 "<previous_module>"
tpop_0_50: IF(2,50,tpop_0_51)__CSEQ_removeindent;
                                                
# 1998 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1999 "<previous_module>"
__exit_loop_18:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 51);

                                                
# 2000 "<previous_module>"
;
                                                ;
                                                
# 2001 "<previous_module>"
__exit__exponential_backoff_4_2:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 51);

                                                
# 2002 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2004 "<previous_module>"
;
                                        
# 2005 "<previous_module>"
tpop_0_51: IF(2,51,tpop_0_52)__CSEQ_removeindent;
                                        
# 2006 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 2007 "<previous_module>"
tpop_0_52: IF(2,52,tpop_0_53)__CSEQ_removeindent;
                                        
# 2008 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 2010 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 53);
                                ;
                                
# 2011 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2012 "<previous_module>"
;
                                ;
                                
# 2013 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2014 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2015 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2016 "<previous_module>"
                                {
                                        
# 2017 "<previous_module>"
goto __exit_loop_15;
                                        ;
                                }

                                
# 2019 "<previous_module>"
;
                        }
                        
# 2021 "<previous_module>"
;
                        
# 2022 "<previous_module>"
if (
# 2023 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2024 "<previous_module>"
                        {
                                
# 2025 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 2027 "<previous_module>"
;

# 2028 "<previous_module>"
                        {
                                
# 2029 "<previous_module>"
;
                                ;
                                
# 2030 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2031 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2032 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2033 "<previous_module>"
                                {
                                        
# 2034 "<previous_module>"
tpop_0_53: IF(2,53,tpop_0_54)__CSEQ_removeindent;
                                        
# 2035 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2036 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 2037 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 2039 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 54);
                                ;
                                
# 2040 "<previous_module>"
tpop_0_54: IF(2,54,tpop_0_55)__CSEQ_removeindent;
                                
# 2041 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2042 "<previous_module>"
tpop_0_55: IF(2,55,tpop_0_56)__CSEQ_removeindent;
                                
# 2043 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2044 "<previous_module>"
tpop_0_56: IF(2,56,tpop_0_57)__CSEQ_removeindent;
                                
# 2045 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2046 "<previous_module>"
tpop_0_57: IF(2,57,tpop_0_58)__CSEQ_removeindent;
                                
# 2047 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2048 "<previous_module>"
tpop_0_58: IF(2,58,tpop_0_59)__CSEQ_removeindent;
                                
# 2049 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2050 "<previous_module>"
;
                                ;
                                
# 2051 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2052 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2053 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2054 "<previous_module>"
                                {

# 2055 "<previous_module>"
                                        {
                                                
# 2056 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2057 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2058 "<previous_module>"
                                                {
                                                        
# 2059 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2061 "<previous_module>"
;
                                                
# 2062 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2063 "<previous_module>"
                                                {
                                                        
# 2064 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2066 "<previous_module>"
;
                                                
# 2067 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2068 "<previous_module>"
                                                {
                                                        
# 2069 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2071 "<previous_module>"
;
                                                
# 2072 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2073 "<previous_module>"
tpop_0_59: IF(2,59,tpop_0_60)__CSEQ_removeindent;
                                                
# 2074 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2075 "<previous_module>"
__exit_loop_19:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 60);

                                                
# 2076 "<previous_module>"
;
                                                ;
                                                
# 2077 "<previous_module>"
__exit__exponential_backoff_4_3:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 60);

                                                
# 2078 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2080 "<previous_module>"
;
                                        
# 2081 "<previous_module>"
tpop_0_60: IF(2,60,tpop_0_61)__CSEQ_removeindent;
                                        
# 2082 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 2083 "<previous_module>"
tpop_0_61: IF(2,61,tpop_0_62)__CSEQ_removeindent;
                                        
# 2084 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 2086 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 62);
                                ;
                                
# 2087 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2088 "<previous_module>"
;
                                ;
                                
# 2089 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2090 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2091 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2092 "<previous_module>"
                                {
                                        
# 2093 "<previous_module>"
goto __exit_loop_15;
                                        ;
                                }

                                
# 2095 "<previous_module>"
;
                        }
                        
# 2097 "<previous_module>"
;
                        
# 2098 "<previous_module>"
if (
# 2099 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2100 "<previous_module>"
                        {
                                
# 2101 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 2103 "<previous_module>"
;

# 2104 "<previous_module>"
                        {
                                
# 2105 "<previous_module>"
;
                                ;
                                
# 2106 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2107 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2108 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2109 "<previous_module>"
                                {
                                        
# 2110 "<previous_module>"
tpop_0_62: IF(2,62,tpop_0_63)__CSEQ_removeindent;
                                        
# 2111 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2112 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 2113 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 2115 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 63);
                                ;
                                
# 2116 "<previous_module>"
tpop_0_63: IF(2,63,tpop_0_64)__CSEQ_removeindent;
                                
# 2117 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2118 "<previous_module>"
tpop_0_64: IF(2,64,tpop_0_65)__CSEQ_removeindent;
                                
# 2119 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2120 "<previous_module>"
tpop_0_65: IF(2,65,tpop_0_66)__CSEQ_removeindent;
                                
# 2121 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2122 "<previous_module>"
tpop_0_66: IF(2,66,tpop_0_67)__CSEQ_removeindent;
                                
# 2123 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2124 "<previous_module>"
tpop_0_67: IF(2,67,tpop_0_68)__CSEQ_removeindent;
                                
# 2125 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2126 "<previous_module>"
;
                                ;
                                
# 2127 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2128 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2129 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2130 "<previous_module>"
                                {

# 2131 "<previous_module>"
                                        {
                                                
# 2132 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2133 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2134 "<previous_module>"
                                                {
                                                        
# 2135 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2137 "<previous_module>"
;
                                                
# 2138 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2139 "<previous_module>"
                                                {
                                                        
# 2140 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2142 "<previous_module>"
;
                                                
# 2143 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2144 "<previous_module>"
                                                {
                                                        
# 2145 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2147 "<previous_module>"
;
                                                
# 2148 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2149 "<previous_module>"
tpop_0_68: IF(2,68,tpop_0_69)__CSEQ_removeindent;
                                                
# 2150 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2151 "<previous_module>"
__exit_loop_20:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 69);

                                                
# 2152 "<previous_module>"
;
                                                ;
                                                
# 2153 "<previous_module>"
__exit__exponential_backoff_4_4:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 69);

                                                
# 2154 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2156 "<previous_module>"
;
                                        
# 2157 "<previous_module>"
tpop_0_69: IF(2,69,tpop_0_70)__CSEQ_removeindent;
                                        
# 2158 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 2159 "<previous_module>"
tpop_0_70: IF(2,70,tpop_0_71)__CSEQ_removeindent;
                                        
# 2160 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 2162 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 71);
                                ;
                                
# 2163 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2164 "<previous_module>"
;
                                ;
                                
# 2165 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2166 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2167 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2168 "<previous_module>"
                                {
                                        
# 2169 "<previous_module>"
goto __exit_loop_15;
                                        ;
                                }

                                
# 2171 "<previous_module>"
;
                        }
                        
# 2173 "<previous_module>"
;
                        
# 2174 "<previous_module>"
tpop_0_71: IF(2,71,tpop_0_72)__CSEQ_removeindent;
                        
# 2175 "<previous_module>"
__CPROVER_assume(
# 2176 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                        
# 2177 "<previous_module>"
__exit_loop_15:
                        __CPROVER_assume(__cs_pc_cs[2] >= 72);

                        
# 2178 "<previous_module>"
;
                        ;
                        
# 2179 "<previous_module>"
tpop_0_72: IF(2,72,tpop_0_73)__CSEQ_removeindent;
                        
# 2180 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                        
# 2181 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = __cs_local_lfds711_stack_pop_result;
                        
# 2182 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                        ;
                        
# 2183 "<previous_module>"
__exit__lfds711_stack_pop_1:
                        __CPROVER_assume(__cs_pc_cs[2] >= 73);

                        
# 2184 "<previous_module>"
;
                        ;
                }
                
# 2186 "<previous_module>"
;
                
# 2187 "<previous_module>"
__cs_local_delete_res = __cs_retval__lfds711_stack_pop_1;
                
# 2188 "<previous_module>"
;
                ;
                
# 2189 "<previous_module>"
static _Bool __cs_local_delete___cs_tmp_if_cond_19;
                
# 2190 "<previous_module>"
__cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res == 0;
                
# 2191 "<previous_module>"
if (__cs_local_delete___cs_tmp_if_cond_19)

# 2192 "<previous_module>"
                {
                        
# 2193 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                        
# 2194 "<previous_module>"
goto __exit__delete_1;
                        ;
                }

                
# 2196 "<previous_module>"
;
                
# 2197 "<previous_module>"
tpop_0_73: IF(2,73,tpop_0_74)__CSEQ_removeindent;
                
# 2198 "<previous_module>"
__cs_local_delete_temp_td = (*__cs_local_delete_se).value;
                
# 2199 "<previous_module>"
static int __cs_local_delete_id_popped;
                
# 2200 "<previous_module>"
tpop_0_74: IF(2,74,tpop_0_75)__CSEQ_removeindent;
                
# 2201 "<previous_module>"
__cs_local_delete_id_popped = (*__cs_local_delete_temp_td).user_id;
                
# 2202 "<previous_module>"
tpop_0_75: IF(2,75,tpop_0_76)__CSEQ_removeindent;
                
# 2203 "<previous_module>"
printf("%llu\n", (*__cs_local_delete_temp_td).user_id);
                
# 2204 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                
# 2205 "<previous_module>"
goto __exit__delete_1;
                ;
                
# 2206 "<previous_module>"
__exit__delete_1:
                __CPROVER_assume(__cs_pc_cs[2] >= 76);

                
# 2207 "<previous_module>"
;
                ;
        }
        
# 2209 "<previous_module>"
;
        
# 2210 "<previous_module>"
__cs_retval__delete_1;
        
# 2211 "<previous_module>"
;
        ;
        
# 2212 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_29;
        
# 2213 "<previous_module>"
tpop_0_76: IF(2,76,tpop_0_77)__CSEQ_removeindent;
        
# 2214 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_29 = ATOMIC_OPERATION;
        
# 2215 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_29)

# 2216 "<previous_module>"
        {
                
# 2217 "<previous_module>"
tpop_0_77: IF(2,77,tpop_0_78)__CSEQ_removeindent;
                
# 2218 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
        }

        
# 2220 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 78);
        ;
        
# 2221 "<previous_module>"
;
        ;
        
# 2222 "<previous_module>"
;
        ;
        
# 2223 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_30;
        
# 2224 "<previous_module>"
tpop_0_78: IF(2,78,tpop_0_79)__CSEQ_removeindent;
        
# 2225 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_30 = ATOMIC_OPERATION;
        
# 2226 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_30)

# 2227 "<previous_module>"
        {
                
# 2228 "<previous_module>"
tpop_0_79: IF(2,79,tpop_0_80)__CSEQ_removeindent;
                
# 2229 "<previous_module>"
__cs_mutex_lock(&lock, 2);
        }

        
# 2231 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 80);
        ;
        
# 2232 "<previous_module>"
;
        ;
        
# 2233 "<previous_module>"
static int __cs_retval__delete_2;

# 2234 "<previous_module>"
        {
                
# 2235 "<previous_module>"
static struct lfds711_stack_state *__cs_param_delete_s;
                
# 2236 "<previous_module>"
tpop_0_80: IF(2,80,tpop_0_81)__CSEQ_removeindent;
                
# 2237 "<previous_module>"
__cs_param_delete_s = ss;
                
# 2238 "<previous_module>"
static struct lfds711_stack_element *__cs_local_delete_se;
                
# 2239 "<previous_module>"
static struct test_data *__cs_local_delete_temp_td;
                
# 2240 "<previous_module>"
static int __cs_local_delete_res;
                
# 2241 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_2;

# 2242 "<previous_module>"
                {
                        
# 2243 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                        
# 2244 "<previous_module>"
tpop_0_81: IF(2,81,tpop_0_82)__CSEQ_removeindent;
                        
# 2245 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = &mystack;
                        
# 2246 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                        
# 2247 "<previous_module>"
tpop_0_82: IF(2,82,tpop_0_83)__CSEQ_removeindent;
                        
# 2248 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_delete_se;
                        
# 2249 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                        
# 2250 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                        
# 2251 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                        
# 2252 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                        
# 2253 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                        
# 2254 "<previous_module>"
;
                        ;
                        
# 2255 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                        
# 2256 "<previous_module>"
tpop_0_83: IF(2,83,tpop_0_84)__CSEQ_removeindent;
                        
# 2257 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                        
# 2258 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 2259 "<previous_module>"
                        {
                                
# 2260 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 2261 "<previous_module>"
tpop_0_84: IF(2,84,tpop_0_85)__CSEQ_removeindent;
                                
# 2262 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 2263 "<previous_module>"
tpop_0_85: IF(2,85,tpop_0_86)__CSEQ_removeindent;
                                
# 2264 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 2266 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 86);
                        ;
                        
# 2267 "<previous_module>"
;
                        ;
                        
# 2268 "<previous_module>"
;
                        ;
                        
# 2269 "<previous_module>"
;
                        ;
                        
# 2270 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                        
# 2271 "<previous_module>"
tpop_0_86: IF(2,86,tpop_0_87)__CSEQ_removeindent;
                        
# 2272 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                        
# 2273 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 2274 "<previous_module>"
                        {
                                
# 2275 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 2276 "<previous_module>"
tpop_0_87: IF(2,87,tpop_0_88)__CSEQ_removeindent;
                                
# 2277 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 2278 "<previous_module>"
tpop_0_88: IF(2,88,tpop_0_89)__CSEQ_removeindent;
                                
# 2279 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 2281 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 89);
                        ;
                        
# 2282 "<previous_module>"
;
                        ;
                        
# 2283 "<previous_module>"
;
                        ;
                        
# 2284 "<previous_module>"
tpop_0_89: IF(2,89,tpop_0_90)__CSEQ_removeindent;
                        
# 2285 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                        
# 2286 "<previous_module>"
tpop_0_90: IF(2,90,tpop_0_91)__CSEQ_removeindent;
                        
# 2287 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                        
# 2288 "<previous_module>"
tpop_0_91: IF(2,91,tpop_0_92)__CSEQ_removeindent;
                        
# 2289 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                        
# 2290 "<previous_module>"
tpop_0_92: IF(2,92,tpop_0_93)__CSEQ_removeindent;
                        
# 2291 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                        
# 2292 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                        
# 2293 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                        
# 2294 "<previous_module>"
;
                        ;
                        
# 2295 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                        
# 2296 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 2297 "<previous_module>"
                        {
                                
# 2298 "<previous_module>"
;
                                ;
                                
# 2299 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                
# 2300 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2301 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 2302 "<previous_module>"
                                {
                                        
# 2303 "<previous_module>"
tpop_0_93: IF(2,93,tpop_0_94)__CSEQ_removeindent;
                                        
# 2304 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2305 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                        
# 2306 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                                        ;
                                }

                                
# 2308 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 94);
                                ;
                                
# 2309 "<previous_module>"
tpop_0_94: IF(2,94,tpop_0_95)__CSEQ_removeindent;
                                
# 2310 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2311 "<previous_module>"
tpop_0_95: IF(2,95,tpop_0_96)__CSEQ_removeindent;
                                
# 2312 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2313 "<previous_module>"
tpop_0_96: IF(2,96,tpop_0_97)__CSEQ_removeindent;
                                
# 2314 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2315 "<previous_module>"
tpop_0_97: IF(2,97,tpop_0_98)__CSEQ_removeindent;
                                
# 2316 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2317 "<previous_module>"
tpop_0_98: IF(2,98,tpop_0_99)__CSEQ_removeindent;
                                
# 2318 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2319 "<previous_module>"
;
                                ;
                                
# 2320 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                
# 2321 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2322 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 2323 "<previous_module>"
                                {

# 2324 "<previous_module>"
                                        {
                                                
# 2325 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2326 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2327 "<previous_module>"
                                                {
                                                        
# 2328 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2330 "<previous_module>"
;
                                                
# 2331 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2332 "<previous_module>"
                                                {
                                                        
# 2333 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2335 "<previous_module>"
;
                                                
# 2336 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2337 "<previous_module>"
                                                {
                                                        
# 2338 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2340 "<previous_module>"
;
                                                
# 2341 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2342 "<previous_module>"
tpop_0_99: IF(2,99,tpop_0_100)__CSEQ_removeindent;
                                                
# 2343 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2344 "<previous_module>"
__exit_loop_22:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 100);

                                                
# 2345 "<previous_module>"
;
                                                ;
                                                
# 2346 "<previous_module>"
__exit__exponential_backoff_5_0:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 100);

                                                
# 2347 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2349 "<previous_module>"
;
                                        
# 2350 "<previous_module>"
tpop_0_100: IF(2,100,tpop_0_101)__CSEQ_removeindent;
                                        
# 2351 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 2352 "<previous_module>"
tpop_0_101: IF(2,101,tpop_0_102)__CSEQ_removeindent;
                                        
# 2353 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 2355 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 102);
                                ;
                                
# 2356 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2357 "<previous_module>"
;
                                ;
                                
# 2358 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                
# 2359 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2360 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 2361 "<previous_module>"
                                {
                                        
# 2362 "<previous_module>"
goto __exit_loop_21;
                                        ;
                                }

                                
# 2364 "<previous_module>"
;
                        }
                        
# 2366 "<previous_module>"
;
                        
# 2367 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                        
# 2368 "<previous_module>"
tpop_0_102: IF(2,102,tpop_0_103)__CSEQ_removeindent;
                        
# 2369 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                        
# 2370 "<previous_module>"
__exit_loop_21:
                        __CPROVER_assume(__cs_pc_cs[2] >= 103);

                        
# 2371 "<previous_module>"
;
                        ;
                        
# 2372 "<previous_module>"
if (
# 2373 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2374 "<previous_module>"
                        {
                                
# 2375 "<previous_module>"
goto __exit_loop_23;
                                ;
                        }

                        
# 2377 "<previous_module>"
;

# 2378 "<previous_module>"
                        {
                                
# 2379 "<previous_module>"
;
                                ;
                                
# 2380 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2381 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2382 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2383 "<previous_module>"
                                {
                                        
# 2384 "<previous_module>"
tpop_0_103: IF(2,103,tpop_0_104)__CSEQ_removeindent;
                                        
# 2385 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2386 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                        
# 2387 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                                        ;
                                }

                                
# 2389 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 104);
                                ;
                                
# 2390 "<previous_module>"
tpop_0_104: IF(2,104,tpop_0_105)__CSEQ_removeindent;
                                
# 2391 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2392 "<previous_module>"
tpop_0_105: IF(2,105,tpop_0_106)__CSEQ_removeindent;
                                
# 2393 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2394 "<previous_module>"
tpop_0_106: IF(2,106,tpop_0_107)__CSEQ_removeindent;
                                
# 2395 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2396 "<previous_module>"
tpop_0_107: IF(2,107,tpop_0_108)__CSEQ_removeindent;
                                
# 2397 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2398 "<previous_module>"
tpop_0_108: IF(2,108,tpop_0_109)__CSEQ_removeindent;
                                
# 2399 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2400 "<previous_module>"
;
                                ;
                                
# 2401 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2402 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2403 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2404 "<previous_module>"
                                {

# 2405 "<previous_module>"
                                        {
                                                
# 2406 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2407 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2408 "<previous_module>"
                                                {
                                                        
# 2409 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2411 "<previous_module>"
;
                                                
# 2412 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2413 "<previous_module>"
                                                {
                                                        
# 2414 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2416 "<previous_module>"
;
                                                
# 2417 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2418 "<previous_module>"
                                                {
                                                        
# 2419 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2421 "<previous_module>"
;
                                                
# 2422 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2423 "<previous_module>"
tpop_0_109: IF(2,109,tpop_0_110)__CSEQ_removeindent;
                                                
# 2424 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2425 "<previous_module>"
__exit_loop_24:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 110);

                                                
# 2426 "<previous_module>"
;
                                                ;
                                                
# 2427 "<previous_module>"
__exit__exponential_backoff_6_0:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 110);

                                                
# 2428 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2430 "<previous_module>"
;
                                        
# 2431 "<previous_module>"
tpop_0_110: IF(2,110,tpop_0_111)__CSEQ_removeindent;
                                        
# 2432 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 2433 "<previous_module>"
tpop_0_111: IF(2,111,tpop_0_112)__CSEQ_removeindent;
                                        
# 2434 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 2436 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 112);
                                ;
                                
# 2437 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2438 "<previous_module>"
;
                                ;
                                
# 2439 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2440 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2441 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2442 "<previous_module>"
                                {
                                        
# 2443 "<previous_module>"
goto __exit_loop_23;
                                        ;
                                }

                                
# 2445 "<previous_module>"
;
                        }
                        
# 2447 "<previous_module>"
;
                        
# 2448 "<previous_module>"
if (
# 2449 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2450 "<previous_module>"
                        {
                                
# 2451 "<previous_module>"
goto __exit_loop_23;
                                ;
                        }

                        
# 2453 "<previous_module>"
;

# 2454 "<previous_module>"
                        {
                                
# 2455 "<previous_module>"
;
                                ;
                                
# 2456 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2457 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2458 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2459 "<previous_module>"
                                {
                                        
# 2460 "<previous_module>"
tpop_0_112: IF(2,112,tpop_0_113)__CSEQ_removeindent;
                                        
# 2461 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2462 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                        
# 2463 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                                        ;
                                }

                                
# 2465 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 113);
                                ;
                                
# 2466 "<previous_module>"
tpop_0_113: IF(2,113,tpop_0_114)__CSEQ_removeindent;
                                
# 2467 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2468 "<previous_module>"
tpop_0_114: IF(2,114,tpop_0_115)__CSEQ_removeindent;
                                
# 2469 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2470 "<previous_module>"
tpop_0_115: IF(2,115,tpop_0_116)__CSEQ_removeindent;
                                
# 2471 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2472 "<previous_module>"
tpop_0_116: IF(2,116,tpop_0_117)__CSEQ_removeindent;
                                
# 2473 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2474 "<previous_module>"
tpop_0_117: IF(2,117,tpop_0_118)__CSEQ_removeindent;
                                
# 2475 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2476 "<previous_module>"
;
                                ;
                                
# 2477 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2478 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2479 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2480 "<previous_module>"
                                {

# 2481 "<previous_module>"
                                        {
                                                
# 2482 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2483 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2484 "<previous_module>"
                                                {
                                                        
# 2485 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2487 "<previous_module>"
;
                                                
# 2488 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2489 "<previous_module>"
                                                {
                                                        
# 2490 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2492 "<previous_module>"
;
                                                
# 2493 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2494 "<previous_module>"
                                                {
                                                        
# 2495 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2497 "<previous_module>"
;
                                                
# 2498 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2499 "<previous_module>"
tpop_0_118: IF(2,118,tpop_0_119)__CSEQ_removeindent;
                                                
# 2500 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2501 "<previous_module>"
__exit_loop_25:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 119);

                                                
# 2502 "<previous_module>"
;
                                                ;
                                                
# 2503 "<previous_module>"
__exit__exponential_backoff_6_1:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 119);

                                                
# 2504 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2506 "<previous_module>"
;
                                        
# 2507 "<previous_module>"
tpop_0_119: IF(2,119,tpop_0_120)__CSEQ_removeindent;
                                        
# 2508 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 2509 "<previous_module>"
tpop_0_120: IF(2,120,tpop_0_121)__CSEQ_removeindent;
                                        
# 2510 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 2512 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 121);
                                ;
                                
# 2513 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2514 "<previous_module>"
;
                                ;
                                
# 2515 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2516 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2517 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2518 "<previous_module>"
                                {
                                        
# 2519 "<previous_module>"
goto __exit_loop_23;
                                        ;
                                }

                                
# 2521 "<previous_module>"
;
                        }
                        
# 2523 "<previous_module>"
;
                        
# 2524 "<previous_module>"
if (
# 2525 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2526 "<previous_module>"
                        {
                                
# 2527 "<previous_module>"
goto __exit_loop_23;
                                ;
                        }

                        
# 2529 "<previous_module>"
;

# 2530 "<previous_module>"
                        {
                                
# 2531 "<previous_module>"
;
                                ;
                                
# 2532 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2533 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2534 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2535 "<previous_module>"
                                {
                                        
# 2536 "<previous_module>"
tpop_0_121: IF(2,121,tpop_0_122)__CSEQ_removeindent;
                                        
# 2537 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2538 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                        
# 2539 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                                        ;
                                }

                                
# 2541 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 122);
                                ;
                                
# 2542 "<previous_module>"
tpop_0_122: IF(2,122,tpop_0_123)__CSEQ_removeindent;
                                
# 2543 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2544 "<previous_module>"
tpop_0_123: IF(2,123,tpop_0_124)__CSEQ_removeindent;
                                
# 2545 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2546 "<previous_module>"
tpop_0_124: IF(2,124,tpop_0_125)__CSEQ_removeindent;
                                
# 2547 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2548 "<previous_module>"
tpop_0_125: IF(2,125,tpop_0_126)__CSEQ_removeindent;
                                
# 2549 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2550 "<previous_module>"
tpop_0_126: IF(2,126,tpop_0_127)__CSEQ_removeindent;
                                
# 2551 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2552 "<previous_module>"
;
                                ;
                                
# 2553 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2554 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2555 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2556 "<previous_module>"
                                {

# 2557 "<previous_module>"
                                        {
                                                
# 2558 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2559 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2560 "<previous_module>"
                                                {
                                                        
# 2561 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2563 "<previous_module>"
;
                                                
# 2564 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2565 "<previous_module>"
                                                {
                                                        
# 2566 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2568 "<previous_module>"
;
                                                
# 2569 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2570 "<previous_module>"
                                                {
                                                        
# 2571 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2573 "<previous_module>"
;
                                                
# 2574 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2575 "<previous_module>"
tpop_0_127: IF(2,127,tpop_0_128)__CSEQ_removeindent;
                                                
# 2576 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2577 "<previous_module>"
__exit_loop_26:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 128);

                                                
# 2578 "<previous_module>"
;
                                                ;
                                                
# 2579 "<previous_module>"
__exit__exponential_backoff_6_2:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 128);

                                                
# 2580 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2582 "<previous_module>"
;
                                        
# 2583 "<previous_module>"
tpop_0_128: IF(2,128,tpop_0_129)__CSEQ_removeindent;
                                        
# 2584 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 2585 "<previous_module>"
tpop_0_129: IF(2,129,tpop_0_130)__CSEQ_removeindent;
                                        
# 2586 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 2588 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 130);
                                ;
                                
# 2589 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2590 "<previous_module>"
;
                                ;
                                
# 2591 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2592 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2593 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2594 "<previous_module>"
                                {
                                        
# 2595 "<previous_module>"
goto __exit_loop_23;
                                        ;
                                }

                                
# 2597 "<previous_module>"
;
                        }
                        
# 2599 "<previous_module>"
;
                        
# 2600 "<previous_module>"
if (
# 2601 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2602 "<previous_module>"
                        {
                                
# 2603 "<previous_module>"
goto __exit_loop_23;
                                ;
                        }

                        
# 2605 "<previous_module>"
;

# 2606 "<previous_module>"
                        {
                                
# 2607 "<previous_module>"
;
                                ;
                                
# 2608 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2609 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2610 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2611 "<previous_module>"
                                {
                                        
# 2612 "<previous_module>"
tpop_0_130: IF(2,130,tpop_0_131)__CSEQ_removeindent;
                                        
# 2613 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2614 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                        
# 2615 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                                        ;
                                }

                                
# 2617 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 131);
                                ;
                                
# 2618 "<previous_module>"
tpop_0_131: IF(2,131,tpop_0_132)__CSEQ_removeindent;
                                
# 2619 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2620 "<previous_module>"
tpop_0_132: IF(2,132,tpop_0_133)__CSEQ_removeindent;
                                
# 2621 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2622 "<previous_module>"
tpop_0_133: IF(2,133,tpop_0_134)__CSEQ_removeindent;
                                
# 2623 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2624 "<previous_module>"
tpop_0_134: IF(2,134,tpop_0_135)__CSEQ_removeindent;
                                
# 2625 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2626 "<previous_module>"
tpop_0_135: IF(2,135,tpop_0_136)__CSEQ_removeindent;
                                
# 2627 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2628 "<previous_module>"
;
                                ;
                                
# 2629 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2630 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2631 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2632 "<previous_module>"
                                {

# 2633 "<previous_module>"
                                        {
                                                
# 2634 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2635 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2636 "<previous_module>"
                                                {
                                                        
# 2637 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2639 "<previous_module>"
;
                                                
# 2640 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2641 "<previous_module>"
                                                {
                                                        
# 2642 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2644 "<previous_module>"
;
                                                
# 2645 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2646 "<previous_module>"
                                                {
                                                        
# 2647 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2649 "<previous_module>"
;
                                                
# 2650 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2651 "<previous_module>"
tpop_0_136: IF(2,136,tpop_0_137)__CSEQ_removeindent;
                                                
# 2652 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2653 "<previous_module>"
__exit_loop_27:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 137);

                                                
# 2654 "<previous_module>"
;
                                                ;
                                                
# 2655 "<previous_module>"
__exit__exponential_backoff_6_3:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 137);

                                                
# 2656 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2658 "<previous_module>"
;
                                        
# 2659 "<previous_module>"
tpop_0_137: IF(2,137,tpop_0_138)__CSEQ_removeindent;
                                        
# 2660 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 2661 "<previous_module>"
tpop_0_138: IF(2,138,tpop_0_139)__CSEQ_removeindent;
                                        
# 2662 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 2664 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 139);
                                ;
                                
# 2665 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2666 "<previous_module>"
;
                                ;
                                
# 2667 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2668 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2669 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2670 "<previous_module>"
                                {
                                        
# 2671 "<previous_module>"
goto __exit_loop_23;
                                        ;
                                }

                                
# 2673 "<previous_module>"
;
                        }
                        
# 2675 "<previous_module>"
;
                        
# 2676 "<previous_module>"
if (
# 2677 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2678 "<previous_module>"
                        {
                                
# 2679 "<previous_module>"
goto __exit_loop_23;
                                ;
                        }

                        
# 2681 "<previous_module>"
;

# 2682 "<previous_module>"
                        {
                                
# 2683 "<previous_module>"
;
                                ;
                                
# 2684 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2685 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2686 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2687 "<previous_module>"
                                {
                                        
# 2688 "<previous_module>"
tpop_0_139: IF(2,139,tpop_0_140)__CSEQ_removeindent;
                                        
# 2689 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2690 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                        
# 2691 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                                        ;
                                }

                                
# 2693 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 140);
                                ;
                                
# 2694 "<previous_module>"
tpop_0_140: IF(2,140,tpop_0_141)__CSEQ_removeindent;
                                
# 2695 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2696 "<previous_module>"
tpop_0_141: IF(2,141,tpop_0_142)__CSEQ_removeindent;
                                
# 2697 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2698 "<previous_module>"
tpop_0_142: IF(2,142,tpop_0_143)__CSEQ_removeindent;
                                
# 2699 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2700 "<previous_module>"
tpop_0_143: IF(2,143,tpop_0_144)__CSEQ_removeindent;
                                
# 2701 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2702 "<previous_module>"
tpop_0_144: IF(2,144,tpop_0_145)__CSEQ_removeindent;
                                
# 2703 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2704 "<previous_module>"
;
                                ;
                                
# 2705 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2706 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2707 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2708 "<previous_module>"
                                {

# 2709 "<previous_module>"
                                        {
                                                
# 2710 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2711 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2712 "<previous_module>"
                                                {
                                                        
# 2713 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2715 "<previous_module>"
;
                                                
# 2716 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2717 "<previous_module>"
                                                {
                                                        
# 2718 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2720 "<previous_module>"
;
                                                
# 2721 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2722 "<previous_module>"
                                                {
                                                        
# 2723 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2725 "<previous_module>"
;
                                                
# 2726 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2727 "<previous_module>"
tpop_0_145: IF(2,145,tpop_0_146)__CSEQ_removeindent;
                                                
# 2728 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2729 "<previous_module>"
__exit_loop_28:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 146);

                                                
# 2730 "<previous_module>"
;
                                                ;
                                                
# 2731 "<previous_module>"
__exit__exponential_backoff_6_4:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 146);

                                                
# 2732 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2734 "<previous_module>"
;
                                        
# 2735 "<previous_module>"
tpop_0_146: IF(2,146,tpop_0_147)__CSEQ_removeindent;
                                        
# 2736 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 2737 "<previous_module>"
tpop_0_147: IF(2,147,tpop_0_148)__CSEQ_removeindent;
                                        
# 2738 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 2740 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 148);
                                ;
                                
# 2741 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2742 "<previous_module>"
;
                                ;
                                
# 2743 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2744 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2745 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2746 "<previous_module>"
                                {
                                        
# 2747 "<previous_module>"
goto __exit_loop_23;
                                        ;
                                }

                                
# 2749 "<previous_module>"
;
                        }
                        
# 2751 "<previous_module>"
;
                        
# 2752 "<previous_module>"
tpop_0_148: IF(2,148,tpop_0_149)__CSEQ_removeindent;
                        
# 2753 "<previous_module>"
__CPROVER_assume(
# 2754 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                        
# 2755 "<previous_module>"
__exit_loop_23:
                        __CPROVER_assume(__cs_pc_cs[2] >= 149);

                        
# 2756 "<previous_module>"
;
                        ;
                        
# 2757 "<previous_module>"
tpop_0_149: IF(2,149,tpop_0_150)__CSEQ_removeindent;
                        
# 2758 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                        
# 2759 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
                        
# 2760 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                        ;
                        
# 2761 "<previous_module>"
__exit__lfds711_stack_pop_2:
                        __CPROVER_assume(__cs_pc_cs[2] >= 150);

                        
# 2762 "<previous_module>"
;
                        ;
                }
                
# 2764 "<previous_module>"
;
                
# 2765 "<previous_module>"
__cs_local_delete_res = __cs_retval__lfds711_stack_pop_2;
                
# 2766 "<previous_module>"
;
                ;
                
# 2767 "<previous_module>"
static _Bool __cs_local_delete___cs_tmp_if_cond_19;
                
# 2768 "<previous_module>"
__cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res == 0;
                
# 2769 "<previous_module>"
if (__cs_local_delete___cs_tmp_if_cond_19)

# 2770 "<previous_module>"
                {
                        
# 2771 "<previous_module>"
__cs_retval__delete_2 = __cs_local_delete_res;
                        
# 2772 "<previous_module>"
goto __exit__delete_2;
                        ;
                }

                
# 2774 "<previous_module>"
;
                
# 2775 "<previous_module>"
tpop_0_150: IF(2,150,tpop_0_151)__CSEQ_removeindent;
                
# 2776 "<previous_module>"
__cs_local_delete_temp_td = (*__cs_local_delete_se).value;
                
# 2777 "<previous_module>"
static int __cs_local_delete_id_popped;
                
# 2778 "<previous_module>"
tpop_0_151: IF(2,151,tpop_0_152)__CSEQ_removeindent;
                
# 2779 "<previous_module>"
__cs_local_delete_id_popped = (*__cs_local_delete_temp_td).user_id;
                
# 2780 "<previous_module>"
tpop_0_152: IF(2,152,tpop_0_153)__CSEQ_removeindent;
                
# 2781 "<previous_module>"
printf("%llu\n", (*__cs_local_delete_temp_td).user_id);
                
# 2782 "<previous_module>"
__cs_retval__delete_2 = __cs_local_delete_res;
                
# 2783 "<previous_module>"
goto __exit__delete_2;
                ;
                
# 2784 "<previous_module>"
__exit__delete_2:
                __CPROVER_assume(__cs_pc_cs[2] >= 153);

                
# 2785 "<previous_module>"
;
                ;
        }
        
# 2787 "<previous_module>"
;
        
# 2788 "<previous_module>"
__cs_retval__delete_2;
        
# 2789 "<previous_module>"
;
        ;
        
# 2790 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_31;
        
# 2791 "<previous_module>"
tpop_0_153: IF(2,153,tpop_0_154)__CSEQ_removeindent;
        
# 2792 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_31 = ATOMIC_OPERATION;
        
# 2793 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_31)

# 2794 "<previous_module>"
        {
                
# 2795 "<previous_module>"
tpop_0_154: IF(2,154,tpop_0_155)__CSEQ_removeindent;
                
# 2796 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
        }

        
# 2798 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 155);
        ;
        
# 2799 "<previous_module>"
;
        ;
        
# 2800 "<previous_module>"
__exit_pop:
        __CPROVER_assume(__cs_pc_cs[2] >= 155);

        
# 2801 "<previous_module>"
;
        ;
        
# 2802 "<previous_module>"
tpop_0_155: __CSEQ_removeindent;
        
# 2803 "<previous_module>"
__cs_exit(0, 2);
}


# 2805 "<previous_module>"
int main_thread(void)

# 2806 "<previous_module>"
{
        
# 2807 "<previous_module>"
IF(0,0,tmain_1)__CSEQ_removeindent;
        
# 2808 "<previous_module>"
__cs_mutex_init(&lock, 0);
        
# 2809 "<previous_module>"
static void *__cs_retval__init_1;

# 2810 "<previous_module>"
        {

# 2811 "<previous_module>"
                {
                        
# 2812 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss;
                        
# 2813 "<previous_module>"
__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss = &mystack;
                        
# 2814 "<previous_module>"
static void *__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
                        
# 2815 "<previous_module>"
__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state = 0;
                        
# 2816 "<previous_module>"
__cs_mutex_init(&library_lock, 0);
                        
# 2817 "<previous_module>"
;
                        ;
                        
# 2818 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3;
                        
# 2819 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3 = !(__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss != 0);
                        
# 2820 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3)

# 2821 "<previous_module>"
                        {
                                
# 2822 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                                
# 2823 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                                
# 2824 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        }

                        
# 2826 "<previous_module>"
;
                        
# 2827 "<previous_module>"
;
                        ;
                        
# 2828 "<previous_module>"
;
                        ;
                        
# 2829 "<previous_module>"
;
                        ;
                        
# 2830 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4;
                        
# 2831 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4 = !((((lfds711_pal_uint_t) (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top) % 128) == 0);
                        
# 2832 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4)

# 2833 "<previous_module>"
                        {
                                
# 2834 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                                
# 2835 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                                
# 2836 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        }

                        
# 2838 "<previous_module>"
;
                        
# 2839 "<previous_module>"
;
                        ;
                        
# 2840 "<previous_module>"
;
                        ;
                        
# 2841 "<previous_module>"
;
                        ;
                        
# 2842 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5;
                        
# 2843 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state)) % 128) == 0);
                        
# 2844 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5)

# 2845 "<previous_module>"
                        {
                                
# 2846 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                                
# 2847 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                                
# 2848 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        }

                        
# 2850 "<previous_module>"
;
                        
# 2851 "<previous_module>"
;
                        ;
                        
# 2852 "<previous_module>"
;
                        ;
                        
# 2853 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                        
# 2854 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[0] = 0;
                        
# 2855 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[1] = 0;
                        
# 2856 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state = __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;

# 2857 "<previous_module>"
                        {
                                
# 2858 "<previous_module>"
static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
                                
# 2859 "<previous_module>"
__cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).pop_backoff;
                                
# 2860 "<previous_module>"
;
                                ;
                                
# 2861 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
                                
# 2862 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
                                
# 2863 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)

# 2864 "<previous_module>"
                                {
                                        
# 2865 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 2866 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 2867 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 2869 "<previous_module>"
;
                                
# 2870 "<previous_module>"
;
                                ;
                                
# 2871 "<previous_module>"
;
                                ;
                                
# 2872 "<previous_module>"
;
                                ;
                                
# 2873 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
                                
# 2874 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
                                
# 2875 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)

# 2876 "<previous_module>"
                                {
                                        
# 2877 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 2878 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 2879 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 2881 "<previous_module>"
;
                                
# 2882 "<previous_module>"
;
                                ;
                                
# 2883 "<previous_module>"
;
                                ;
                                
# 2884 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock = LFDS711_MISC_FLAG_LOWERED;
                                
# 2885 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[0] = 0;
                                
# 2886 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[1] = 0;
                                
# 2887 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).metric = 1;
                                
# 2888 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).total_operations = 0;
                                
# 2889 "<previous_module>"
goto __exit__lfds711_misc_internal_backoff_init_1;
                                ;
                                
# 2890 "<previous_module>"
__exit__lfds711_misc_internal_backoff_init_1:
                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                
# 2891 "<previous_module>"
;
                                ;
                        }
                        
# 2893 "<previous_module>"
;

# 2894 "<previous_module>"
                        {
                                
# 2895 "<previous_module>"
static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
                                
# 2896 "<previous_module>"
__cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).push_backoff;
                                
# 2897 "<previous_module>"
;
                                ;
                                
# 2898 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
                                
# 2899 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
                                
# 2900 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)

# 2901 "<previous_module>"
                                {
                                        
# 2902 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 2903 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 2904 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 2906 "<previous_module>"
;
                                
# 2907 "<previous_module>"
;
                                ;
                                
# 2908 "<previous_module>"
;
                                ;
                                
# 2909 "<previous_module>"
;
                                ;
                                
# 2910 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
                                
# 2911 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
                                
# 2912 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)

# 2913 "<previous_module>"
                                {
                                        
# 2914 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 2915 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 2916 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 2918 "<previous_module>"
;
                                
# 2919 "<previous_module>"
;
                                ;
                                
# 2920 "<previous_module>"
;
                                ;
                                
# 2921 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock = LFDS711_MISC_FLAG_LOWERED;
                                
# 2922 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[0] = 0;
                                
# 2923 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[1] = 0;
                                
# 2924 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).metric = 1;
                                
# 2925 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).total_operations = 0;
                                
# 2926 "<previous_module>"
goto __exit__lfds711_misc_internal_backoff_init_2;
                                ;
                                
# 2927 "<previous_module>"
__exit__lfds711_misc_internal_backoff_init_2:
                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                
# 2928 "<previous_module>"
;
                                ;
                        }
                        
# 2930 "<previous_module>"
;

# 2931 "<previous_module>"
                        {
                                
# 2932 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_misc_force_store_destination;
                                
# 2933 "<previous_module>"
__cs_init_scalar(&__cs_local_lfds711_misc_force_store_destination, sizeof(lfds711_pal_uint_t));

# 2934 "<previous_module>"
                                {
                                        
# 2935 "<previous_module>"
static unsigned long __cs_retval____atomic_exchange_n_1;

# 2936 "<previous_module>"
                                        {
                                                
# 2937 "<previous_module>"
static int long long unsigned *__cs_param___atomic_exchange_n_previous;
                                                
# 2938 "<previous_module>"
__cs_param___atomic_exchange_n_previous = &__cs_local_lfds711_misc_force_store_destination;
                                                
# 2939 "<previous_module>"
static int long long unsigned __cs_param___atomic_exchange_n_new;
                                                
# 2940 "<previous_module>"
__cs_param___atomic_exchange_n_new = 0;
                                                
# 2941 "<previous_module>"
static int __cs_param___atomic_exchange_n_memorder;
                                                
# 2942 "<previous_module>"
__cs_param___atomic_exchange_n_memorder = 0;
                                                
# 2943 "<previous_module>"
static int __cs_local___atomic_exchange_n_res;
                                                
# 2944 "<previous_module>"
__cs_local___atomic_exchange_n_res = __CSEQ_atomic_exchange(__cs_param___atomic_exchange_n_previous, __cs_param___atomic_exchange_n_new, __cs_param___atomic_exchange_n_memorder);
                                                
# 2945 "<previous_module>"
__cs_retval____atomic_exchange_n_1 = __cs_local___atomic_exchange_n_res;
                                                
# 2946 "<previous_module>"
goto __exit____atomic_exchange_n_1;
                                                ;
                                                
# 2947 "<previous_module>"
__exit____atomic_exchange_n_1:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                                
# 2948 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2950 "<previous_module>"
;
                                        
# 2951 "<previous_module>"
(void) __cs_retval____atomic_exchange_n_1;
                                }
                                
# 2953 "<previous_module>"
;
                                
# 2954 "<previous_module>"
;
                                ;
                                
# 2955 "<previous_module>"
goto __exit__lfds711_misc_force_store_1;
                                ;
                                
# 2956 "<previous_module>"
__exit__lfds711_misc_force_store_1:
                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                
# 2957 "<previous_module>"
;
                                ;
                        }
                        
# 2959 "<previous_module>"
;
                        
# 2960 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                        
# 2961 "<previous_module>"
goto __exit__lfds711_stack_init_valid_on_current_logical_core_1;
                        ;
                        
# 2962 "<previous_module>"
__exit__lfds711_stack_init_valid_on_current_logical_core_1:
                        __CPROVER_assume(__cs_pc_cs[0] >= 1);

                        
# 2963 "<previous_module>"
;
                        ;
                }
                
# 2965 "<previous_module>"
;
                
# 2966 "<previous_module>"
__cs_retval__init_1 = (void *) (&mystack);
                
# 2967 "<previous_module>"
goto __exit__init_1;
                ;
                
# 2968 "<previous_module>"
__exit__init_1:
                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                
# 2969 "<previous_module>"
;
                ;
        }
        
# 2971 "<previous_module>"
;
        
# 2972 "<previous_module>"
ss = __cs_retval__init_1;
        
# 2973 "<previous_module>"
static __cs_t __cs_local_main_t1;
        
# 2974 "<previous_module>"
;
        ;
        
# 2975 "<previous_module>"
static __cs_t __cs_local_main_t2;
        
# 2976 "<previous_module>"
;
        ;
        
# 2977 "<previous_module>"
static __cs_t __cs_local_main_t3;
        
# 2978 "<previous_module>"
;
        ;
        
# 2979 "<previous_module>"
static __cs_t __cs_local_main_t4;
        
# 2980 "<previous_module>"
;
        ;
        
# 2981 "<previous_module>"
static __cs_t __cs_local_main_t5;
        
# 2982 "<previous_module>"
;
        ;
        
# 2983 "<previous_module>"
static __cs_t __cs_local_main_t6;
        
# 2984 "<previous_module>"
;
        ;
        
# 2985 "<previous_module>"
static __cs_t __cs_local_main_t7;
        
# 2986 "<previous_module>"
;
        ;
        
# 2987 "<previous_module>"
static __cs_t __cs_local_main_t8;
        
# 2988 "<previous_module>"
;
        ;
        
# 2989 "<previous_module>"
static __cs_t __cs_local_main_t9;
        
# 2990 "<previous_module>"
;
        ;
        
# 2991 "<previous_module>"
static __cs_t __cs_local_main_t10;
        
# 2992 "<previous_module>"
;
        ;
        
# 2993 "<previous_module>"
__cs_create(&__cs_local_main_t1, 0, push_0, 0, 1);
        
# 2994 "<previous_module>"
tmain_1: IF(0,1,tmain_2)__CSEQ_removeindent;
        
# 2995 "<previous_module>"
__cs_create(&__cs_local_main_t6, 0, pop_0, 0, 2);
        
# 2996 "<previous_module>"
tmain_2: IF(0,2,tmain_3)__CSEQ_removeindent;
        
# 2997 "<previous_module>"
__cs_join(__cs_local_main_t1, 0);
        
# 2998 "<previous_module>"
tmain_3: IF(0,3,tmain_4)__CSEQ_removeindent;
        
# 2999 "<previous_module>"
__cs_join(__cs_local_main_t6, 0);
        
# 3000 "<previous_module>"
assert(0);
        
# 3001 "<previous_module>"
goto __exit_main;
        ;
        
# 3002 "<previous_module>"
__exit_main:
        __CPROVER_assume(__cs_pc_cs[0] >= 4);

        
# 3003 "<previous_module>"
;
        ;
        
# 3004 "<previous_module>"
tmain_4: __CSEQ_removeindent;
        
# 3005 "<previous_module>"
__cs_exit(0, 0);
}


# 3007 "<previous_module>"
int main(void)
{
        
# 3008 "<previous_module>"
/* round  0 */__CSEQ_removeindent;
        
# 3009 "<previous_module>"
    /* main */__CSEQ_removeindent;
        
# 3010 "<previous_module>"
unsigned __CPROVER_bitvector[3] __cs_tmp_t0_r0;
        
# 3011 "<previous_module>"
__cs_pc_cs[0] = __cs_tmp_t0_r0;
        
# 3012 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] > 0);
        
# 3013 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 4);
        
# 3014 "<previous_module>"
main_thread();
        
# 3015 "<previous_module>"
__cs_pc[0] = __cs_pc_cs[0];
        
# 3017 "<previous_module>"
    /* push_0 */__CSEQ_removeindent;
        
# 3018 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_tmp_t1_r0;
        
# 3019 "<previous_module>"
if (__cs_active_thread[1])
        {
                
# 3020 "<previous_module>"
__cs_pc_cs[1] = __cs_tmp_t1_r0;
                
# 3021 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] <= 121);
                
# 3022 "<previous_module>"
push_0(__cs_threadargs[1]);
                
# 3023 "<previous_module>"
__cs_pc[1] = __cs_pc_cs[1];
        }

        
# 3026 "<previous_module>"
    /* pop_0 */__CSEQ_removeindent;
        
# 3027 "<previous_module>"
unsigned __CPROVER_bitvector[8] __cs_tmp_t2_r0;
        
# 3028 "<previous_module>"
if (__cs_active_thread[2])
        {
                
# 3029 "<previous_module>"
__cs_pc_cs[2] = __cs_tmp_t2_r0;
                
# 3030 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] <= 155);
                
# 3031 "<previous_module>"
pop_0(__cs_threadargs[2]);
                
# 3032 "<previous_module>"
__cs_pc[2] = __cs_pc_cs[2];
        }

        
# 3035 "<previous_module>"
unsigned __CPROVER_bitvector[3] __cs_tmp_t0_r1;
        
# 3036 "<previous_module>"
if (__cs_active_thread[0] == 1)
        {
                
# 3037 "<previous_module>"
__cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
                
# 3038 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                
# 3039 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 4);
                
# 3040 "<previous_module>"
main_thread();
        }

        
# 3042 "<previous_module>"
return 0;
}

