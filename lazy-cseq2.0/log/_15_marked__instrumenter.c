
# 1 "<previous_module>"
unsigned __CPROVER_bitvector[1] __cs_active_thread[3] = {1};

# 2 "<previous_module>"
unsigned __CPROVER_bitvector[9] __cs_pc[3];

# 3 "<previous_module>"
unsigned __CPROVER_bitvector[10] __cs_pc_cs[3];

# 4 "<previous_module>"
unsigned __CPROVER_bitvector[2] __cs_last_thread;

# 5 "<previous_module>"
unsigned __CPROVER_bitvector[9] __cs_thread_lines[3] = {4, 302, 387};

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
__cs_local_push_loop = 0;

# 788 "<previous_module>"
        {
                
# 789 "<previous_module>"
;
                ;
                
# 790 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_23;
                
# 791 "<previous_module>"
tpush_0_1: IF(1,1,tpush_0_2)__CSEQ_removeindent;
                
# 792 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_23 = ATOMIC_OPERATION;
                
# 793 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_23)

# 794 "<previous_module>"
                {
                        
# 795 "<previous_module>"
tpush_0_2: IF(1,2,tpush_0_3)__CSEQ_removeindent;
                        
# 796 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                }

                
# 798 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 3);
                ;
                
# 799 "<previous_module>"
;
                ;

# 800 "<previous_module>"
                {
                        
# 801 "<previous_module>"
static struct lfds711_stack_state *__cs_param_insert_s;
                        
# 802 "<previous_module>"
tpush_0_3: IF(1,3,tpush_0_4)__CSEQ_removeindent;
                        
# 803 "<previous_module>"
__cs_param_insert_s = ss;
                        
# 804 "<previous_module>"
static int long long unsigned __cs_param_insert_id;
                        
# 805 "<previous_module>"
__cs_param_insert_id = __cs_local_push_loop;
                        
# 806 "<previous_module>"
static struct test_data *__cs_local_insert_td;
                        
# 807 "<previous_module>"
tpush_0_4: IF(1,4,tpush_0_5)__CSEQ_removeindent;
                        
# 808 "<previous_module>"
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
                        
# 809 "<previous_module>"
tpush_0_5: IF(1,5,tpush_0_6)__CSEQ_removeindent;
                        
# 810 "<previous_module>"
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
                        
# 811 "<previous_module>"
tpush_0_6: IF(1,6,tpush_0_7)__CSEQ_removeindent;
                        
# 812 "<previous_module>"
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);

# 813 "<previous_module>"
                        {
                                
# 814 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                                
# 815 "<previous_module>"
tpush_0_7: IF(1,7,tpush_0_8)__CSEQ_removeindent;
                                
# 816 "<previous_module>"
__cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
                                
# 817 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                                
# 818 "<previous_module>"
tpush_0_8: IF(1,8,tpush_0_9)__CSEQ_removeindent;
                                
# 819 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
                                
# 820 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                                
# 821 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                                
# 822 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                                
# 823 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                                
# 824 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                                
# 825 "<previous_module>"
;
                                ;
                                
# 826 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                                
# 827 "<previous_module>"
tpush_0_9: IF(1,9,tpush_0_10)__CSEQ_removeindent;
                                
# 828 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                                
# 829 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 830 "<previous_module>"
                                {
                                        
# 831 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 832 "<previous_module>"
tpush_0_10: IF(1,10,tpush_0_11)__CSEQ_removeindent;
                                        
# 833 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 834 "<previous_module>"
tpush_0_11: IF(1,11,tpush_0_12)__CSEQ_removeindent;
                                        
# 835 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 837 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 12);
                                ;
                                
# 838 "<previous_module>"
;
                                ;
                                
# 839 "<previous_module>"
;
                                ;
                                
# 840 "<previous_module>"
;
                                ;
                                
# 841 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                                
# 842 "<previous_module>"
tpush_0_12: IF(1,12,tpush_0_13)__CSEQ_removeindent;
                                
# 843 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                                
# 844 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 845 "<previous_module>"
                                {
                                        
# 846 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 847 "<previous_module>"
tpush_0_13: IF(1,13,tpush_0_14)__CSEQ_removeindent;
                                        
# 848 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 849 "<previous_module>"
tpush_0_14: IF(1,14,tpush_0_15)__CSEQ_removeindent;
                                        
# 850 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 852 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 15);
                                ;
                                
# 853 "<previous_module>"
;
                                ;
                                
# 854 "<previous_module>"
;
                                ;
                                
# 855 "<previous_module>"
tpush_0_15: IF(1,15,tpush_0_16)__CSEQ_removeindent;
                                
# 856 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                                
# 857 "<previous_module>"
tpush_0_16: IF(1,16,tpush_0_17)__CSEQ_removeindent;
                                
# 858 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                                
# 859 "<previous_module>"
tpush_0_17: IF(1,17,tpush_0_18)__CSEQ_removeindent;
                                
# 860 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                                
# 861 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                                
# 862 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                                
# 863 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                                
# 864 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 865 "<previous_module>"
                                {
                                        
# 866 "<previous_module>"
goto __exit_loop_2;
                                        ;
                                }

                                
# 868 "<previous_module>"
;

# 869 "<previous_module>"
                                {
                                        
# 870 "<previous_module>"
tpush_0_18: IF(1,18,tpush_0_19)__CSEQ_removeindent;
                                        
# 871 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 872 "<previous_module>"
tpush_0_19: IF(1,19,tpush_0_20)__CSEQ_removeindent;
                                        
# 873 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 874 "<previous_module>"
tpush_0_20: IF(1,20,tpush_0_21)__CSEQ_removeindent;
                                        
# 875 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 876 "<previous_module>"
tpush_0_21: IF(1,21,tpush_0_22)__CSEQ_removeindent;
                                        
# 877 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 878 "<previous_module>"
tpush_0_22: IF(1,22,tpush_0_23)__CSEQ_removeindent;
                                        
# 879 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 880 "<previous_module>"
tpush_0_23: IF(1,23,tpush_0_24)__CSEQ_removeindent;
                                        
# 881 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 882 "<previous_module>"
tpush_0_24: IF(1,24,tpush_0_25)__CSEQ_removeindent;
                                        
# 883 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 884 "<previous_module>"
;
                                        ;
                                        
# 885 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 886 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 887 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 888 "<previous_module>"
                                        {

# 889 "<previous_module>"
                                                {
                                                        
# 890 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 891 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 892 "<previous_module>"
                                                        {
                                                                
# 893 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 895 "<previous_module>"
;
                                                        
# 896 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 897 "<previous_module>"
                                                        {
                                                                
# 898 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 900 "<previous_module>"
;
                                                        
# 901 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 902 "<previous_module>"
                                                        {
                                                                
# 903 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 905 "<previous_module>"
;
                                                        
# 906 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 907 "<previous_module>"
                                                        {
                                                                
# 908 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 910 "<previous_module>"
;
                                                        
# 911 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 912 "<previous_module>"
                                                        {
                                                                
# 913 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 915 "<previous_module>"
;
                                                        
# 916 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 917 "<previous_module>"
tpush_0_25: IF(1,25,tpush_0_26)__CSEQ_removeindent;
                                                        
# 918 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 919 "<previous_module>"
__exit_loop_3:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 26);

                                                        
# 920 "<previous_module>"
;
                                                        ;
                                                        
# 921 "<previous_module>"
__exit__exponential_backoff_1_0:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 26);

                                                        
# 922 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 924 "<previous_module>"
;
                                        }

                                        
# 926 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 26);
                                        ;
                                        
# 927 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 928 "<previous_module>"
;
                                        ;
                                        
# 929 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 930 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 931 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 932 "<previous_module>"
                                        {
                                                
# 933 "<previous_module>"
goto __exit_loop_2;
                                                ;
                                        }

                                        
# 935 "<previous_module>"
;
                                }
                                
# 937 "<previous_module>"
;
                                
# 938 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 939 "<previous_module>"
                                {
                                        
# 940 "<previous_module>"
goto __exit_loop_2;
                                        ;
                                }

                                
# 942 "<previous_module>"
;

# 943 "<previous_module>"
                                {
                                        
# 944 "<previous_module>"
tpush_0_26: IF(1,26,tpush_0_27)__CSEQ_removeindent;
                                        
# 945 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 946 "<previous_module>"
tpush_0_27: IF(1,27,tpush_0_28)__CSEQ_removeindent;
                                        
# 947 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 948 "<previous_module>"
tpush_0_28: IF(1,28,tpush_0_29)__CSEQ_removeindent;
                                        
# 949 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 950 "<previous_module>"
tpush_0_29: IF(1,29,tpush_0_30)__CSEQ_removeindent;
                                        
# 951 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 952 "<previous_module>"
tpush_0_30: IF(1,30,tpush_0_31)__CSEQ_removeindent;
                                        
# 953 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 954 "<previous_module>"
tpush_0_31: IF(1,31,tpush_0_32)__CSEQ_removeindent;
                                        
# 955 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 956 "<previous_module>"
tpush_0_32: IF(1,32,tpush_0_33)__CSEQ_removeindent;
                                        
# 957 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 958 "<previous_module>"
;
                                        ;
                                        
# 959 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 960 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 961 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 962 "<previous_module>"
                                        {

# 963 "<previous_module>"
                                                {
                                                        
# 964 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 965 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 966 "<previous_module>"
                                                        {
                                                                
# 967 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 969 "<previous_module>"
;
                                                        
# 970 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 971 "<previous_module>"
                                                        {
                                                                
# 972 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 974 "<previous_module>"
;
                                                        
# 975 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 976 "<previous_module>"
                                                        {
                                                                
# 977 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 979 "<previous_module>"
;
                                                        
# 980 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 981 "<previous_module>"
                                                        {
                                                                
# 982 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 984 "<previous_module>"
;
                                                        
# 985 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 986 "<previous_module>"
                                                        {
                                                                
# 987 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 989 "<previous_module>"
;
                                                        
# 990 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 991 "<previous_module>"
tpush_0_33: IF(1,33,tpush_0_34)__CSEQ_removeindent;
                                                        
# 992 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 993 "<previous_module>"
__exit_loop_4:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 34);

                                                        
# 994 "<previous_module>"
;
                                                        ;
                                                        
# 995 "<previous_module>"
__exit__exponential_backoff_1_1:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 34);

                                                        
# 996 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 998 "<previous_module>"
;
                                        }

                                        
# 1000 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 34);
                                        ;
                                        
# 1001 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 1002 "<previous_module>"
;
                                        ;
                                        
# 1003 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 1004 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 1005 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1006 "<previous_module>"
                                        {
                                                
# 1007 "<previous_module>"
goto __exit_loop_2;
                                                ;
                                        }

                                        
# 1009 "<previous_module>"
;
                                }
                                
# 1011 "<previous_module>"
;
                                
# 1012 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1013 "<previous_module>"
                                {
                                        
# 1014 "<previous_module>"
goto __exit_loop_2;
                                        ;
                                }

                                
# 1016 "<previous_module>"
;

# 1017 "<previous_module>"
                                {
                                        
# 1018 "<previous_module>"
tpush_0_34: IF(1,34,tpush_0_35)__CSEQ_removeindent;
                                        
# 1019 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1020 "<previous_module>"
tpush_0_35: IF(1,35,tpush_0_36)__CSEQ_removeindent;
                                        
# 1021 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 1022 "<previous_module>"
tpush_0_36: IF(1,36,tpush_0_37)__CSEQ_removeindent;
                                        
# 1023 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1024 "<previous_module>"
tpush_0_37: IF(1,37,tpush_0_38)__CSEQ_removeindent;
                                        
# 1025 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 1026 "<previous_module>"
tpush_0_38: IF(1,38,tpush_0_39)__CSEQ_removeindent;
                                        
# 1027 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1028 "<previous_module>"
tpush_0_39: IF(1,39,tpush_0_40)__CSEQ_removeindent;
                                        
# 1029 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 1030 "<previous_module>"
tpush_0_40: IF(1,40,tpush_0_41)__CSEQ_removeindent;
                                        
# 1031 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1032 "<previous_module>"
;
                                        ;
                                        
# 1033 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 1034 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 1035 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1036 "<previous_module>"
                                        {

# 1037 "<previous_module>"
                                                {
                                                        
# 1038 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 1039 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1040 "<previous_module>"
                                                        {
                                                                
# 1041 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1043 "<previous_module>"
;
                                                        
# 1044 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1045 "<previous_module>"
                                                        {
                                                                
# 1046 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1048 "<previous_module>"
;
                                                        
# 1049 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1050 "<previous_module>"
                                                        {
                                                                
# 1051 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1053 "<previous_module>"
;
                                                        
# 1054 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1055 "<previous_module>"
                                                        {
                                                                
# 1056 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1058 "<previous_module>"
;
                                                        
# 1059 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1060 "<previous_module>"
                                                        {
                                                                
# 1061 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1063 "<previous_module>"
;
                                                        
# 1064 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 1065 "<previous_module>"
tpush_0_41: IF(1,41,tpush_0_42)__CSEQ_removeindent;
                                                        
# 1066 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 1067 "<previous_module>"
__exit_loop_5:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 42);

                                                        
# 1068 "<previous_module>"
;
                                                        ;
                                                        
# 1069 "<previous_module>"
__exit__exponential_backoff_1_2:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 42);

                                                        
# 1070 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1072 "<previous_module>"
;
                                        }

                                        
# 1074 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 42);
                                        ;
                                        
# 1075 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 1076 "<previous_module>"
;
                                        ;
                                        
# 1077 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 1078 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 1079 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1080 "<previous_module>"
                                        {
                                                
# 1081 "<previous_module>"
goto __exit_loop_2;
                                                ;
                                        }

                                        
# 1083 "<previous_module>"
;
                                }
                                
# 1085 "<previous_module>"
;
                                
# 1086 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1087 "<previous_module>"
                                {
                                        
# 1088 "<previous_module>"
goto __exit_loop_2;
                                        ;
                                }

                                
# 1090 "<previous_module>"
;

# 1091 "<previous_module>"
                                {
                                        
# 1092 "<previous_module>"
tpush_0_42: IF(1,42,tpush_0_43)__CSEQ_removeindent;
                                        
# 1093 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1094 "<previous_module>"
tpush_0_43: IF(1,43,tpush_0_44)__CSEQ_removeindent;
                                        
# 1095 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 1096 "<previous_module>"
tpush_0_44: IF(1,44,tpush_0_45)__CSEQ_removeindent;
                                        
# 1097 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1098 "<previous_module>"
tpush_0_45: IF(1,45,tpush_0_46)__CSEQ_removeindent;
                                        
# 1099 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 1100 "<previous_module>"
tpush_0_46: IF(1,46,tpush_0_47)__CSEQ_removeindent;
                                        
# 1101 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1102 "<previous_module>"
tpush_0_47: IF(1,47,tpush_0_48)__CSEQ_removeindent;
                                        
# 1103 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 1104 "<previous_module>"
tpush_0_48: IF(1,48,tpush_0_49)__CSEQ_removeindent;
                                        
# 1105 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1106 "<previous_module>"
;
                                        ;
                                        
# 1107 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 1108 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 1109 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1110 "<previous_module>"
                                        {

# 1111 "<previous_module>"
                                                {
                                                        
# 1112 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 1113 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1114 "<previous_module>"
                                                        {
                                                                
# 1115 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1117 "<previous_module>"
;
                                                        
# 1118 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1119 "<previous_module>"
                                                        {
                                                                
# 1120 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1122 "<previous_module>"
;
                                                        
# 1123 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1124 "<previous_module>"
                                                        {
                                                                
# 1125 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1127 "<previous_module>"
;
                                                        
# 1128 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1129 "<previous_module>"
                                                        {
                                                                
# 1130 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1132 "<previous_module>"
;
                                                        
# 1133 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1134 "<previous_module>"
                                                        {
                                                                
# 1135 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1137 "<previous_module>"
;
                                                        
# 1138 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 1139 "<previous_module>"
tpush_0_49: IF(1,49,tpush_0_50)__CSEQ_removeindent;
                                                        
# 1140 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 1141 "<previous_module>"
__exit_loop_6:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 50);

                                                        
# 1142 "<previous_module>"
;
                                                        ;
                                                        
# 1143 "<previous_module>"
__exit__exponential_backoff_1_3:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 50);

                                                        
# 1144 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1146 "<previous_module>"
;
                                        }

                                        
# 1148 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 50);
                                        ;
                                        
# 1149 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 1150 "<previous_module>"
;
                                        ;
                                        
# 1151 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 1152 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 1153 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1154 "<previous_module>"
                                        {
                                                
# 1155 "<previous_module>"
goto __exit_loop_2;
                                                ;
                                        }

                                        
# 1157 "<previous_module>"
;
                                }
                                
# 1159 "<previous_module>"
;
                                
# 1160 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1161 "<previous_module>"
                                {
                                        
# 1162 "<previous_module>"
goto __exit_loop_2;
                                        ;
                                }

                                
# 1164 "<previous_module>"
;

# 1165 "<previous_module>"
                                {
                                        
# 1166 "<previous_module>"
tpush_0_50: IF(1,50,tpush_0_51)__CSEQ_removeindent;
                                        
# 1167 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1168 "<previous_module>"
tpush_0_51: IF(1,51,tpush_0_52)__CSEQ_removeindent;
                                        
# 1169 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 1170 "<previous_module>"
tpush_0_52: IF(1,52,tpush_0_53)__CSEQ_removeindent;
                                        
# 1171 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1172 "<previous_module>"
tpush_0_53: IF(1,53,tpush_0_54)__CSEQ_removeindent;
                                        
# 1173 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 1174 "<previous_module>"
tpush_0_54: IF(1,54,tpush_0_55)__CSEQ_removeindent;
                                        
# 1175 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1176 "<previous_module>"
tpush_0_55: IF(1,55,tpush_0_56)__CSEQ_removeindent;
                                        
# 1177 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 1178 "<previous_module>"
tpush_0_56: IF(1,56,tpush_0_57)__CSEQ_removeindent;
                                        
# 1179 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1180 "<previous_module>"
;
                                        ;
                                        
# 1181 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 1182 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 1183 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1184 "<previous_module>"
                                        {

# 1185 "<previous_module>"
                                                {
                                                        
# 1186 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 1187 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1188 "<previous_module>"
                                                        {
                                                                
# 1189 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1191 "<previous_module>"
;
                                                        
# 1192 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1193 "<previous_module>"
                                                        {
                                                                
# 1194 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1196 "<previous_module>"
;
                                                        
# 1197 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1198 "<previous_module>"
                                                        {
                                                                
# 1199 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1201 "<previous_module>"
;
                                                        
# 1202 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1203 "<previous_module>"
                                                        {
                                                                
# 1204 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1206 "<previous_module>"
;
                                                        
# 1207 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1208 "<previous_module>"
                                                        {
                                                                
# 1209 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1211 "<previous_module>"
;
                                                        
# 1212 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 1213 "<previous_module>"
tpush_0_57: IF(1,57,tpush_0_58)__CSEQ_removeindent;
                                                        
# 1214 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 1215 "<previous_module>"
__exit_loop_7:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 58);

                                                        
# 1216 "<previous_module>"
;
                                                        ;
                                                        
# 1217 "<previous_module>"
__exit__exponential_backoff_1_4:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 58);

                                                        
# 1218 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1220 "<previous_module>"
;
                                        }

                                        
# 1222 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 58);
                                        ;
                                        
# 1223 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 1224 "<previous_module>"
;
                                        ;
                                        
# 1225 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 1226 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 1227 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1228 "<previous_module>"
                                        {
                                                
# 1229 "<previous_module>"
goto __exit_loop_2;
                                                ;
                                        }

                                        
# 1231 "<previous_module>"
;
                                }
                                
# 1233 "<previous_module>"
;
                                
# 1234 "<previous_module>"
tpush_0_58: IF(1,58,tpush_0_59)__CSEQ_removeindent;
                                
# 1235 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                                
# 1236 "<previous_module>"
__exit_loop_2:
                                __CPROVER_assume(__cs_pc_cs[1] >= 59);

                                
# 1237 "<previous_module>"
;
                                ;
                                
# 1238 "<previous_module>"
goto __exit__lfds711_stack_push_1_0;
                                ;
                                
# 1239 "<previous_module>"
__exit__lfds711_stack_push_1_0:
                                __CPROVER_assume(__cs_pc_cs[1] >= 59);

                                
# 1240 "<previous_module>"
;
                                ;
                        }
                        
# 1242 "<previous_module>"
;
                        
# 1243 "<previous_module>"
__exit__insert_1_0:
                        __CPROVER_assume(__cs_pc_cs[1] >= 59);

                        
# 1244 "<previous_module>"
;
                        ;
                }
                
# 1246 "<previous_module>"
;
                
# 1247 "<previous_module>"
;
                ;
                
# 1248 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_24;
                
# 1249 "<previous_module>"
tpush_0_59: IF(1,59,tpush_0_60)__CSEQ_removeindent;
                
# 1250 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_24 = ATOMIC_OPERATION;
                
# 1251 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_24)

# 1252 "<previous_module>"
                {
                        
# 1253 "<previous_module>"
tpush_0_60: IF(1,60,tpush_0_61)__CSEQ_removeindent;
                        
# 1254 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                }

                
# 1256 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 61);
                ;
                
# 1257 "<previous_module>"
;
                ;
        }
        
# 1259 "<previous_module>"
;
        
# 1260 "<previous_module>"
__cs_local_push_loop++;

# 1261 "<previous_module>"
        {
                
# 1262 "<previous_module>"
;
                ;
                
# 1263 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_23;
                
# 1264 "<previous_module>"
tpush_0_61: IF(1,61,tpush_0_62)__CSEQ_removeindent;
                
# 1265 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_23 = ATOMIC_OPERATION;
                
# 1266 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_23)

# 1267 "<previous_module>"
                {
                        
# 1268 "<previous_module>"
tpush_0_62: IF(1,62,tpush_0_63)__CSEQ_removeindent;
                        
# 1269 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                }

                
# 1271 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 63);
                ;
                
# 1272 "<previous_module>"
;
                ;

# 1273 "<previous_module>"
                {
                        
# 1274 "<previous_module>"
static struct lfds711_stack_state *__cs_param_insert_s;
                        
# 1275 "<previous_module>"
tpush_0_63: IF(1,63,tpush_0_64)__CSEQ_removeindent;
                        
# 1276 "<previous_module>"
__cs_param_insert_s = ss;
                        
# 1277 "<previous_module>"
static int long long unsigned __cs_param_insert_id;
                        
# 1278 "<previous_module>"
__cs_param_insert_id = __cs_local_push_loop;
                        
# 1279 "<previous_module>"
static struct test_data *__cs_local_insert_td;
                        
# 1280 "<previous_module>"
tpush_0_64: IF(1,64,tpush_0_65)__CSEQ_removeindent;
                        
# 1281 "<previous_module>"
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
                        
# 1282 "<previous_module>"
tpush_0_65: IF(1,65,tpush_0_66)__CSEQ_removeindent;
                        
# 1283 "<previous_module>"
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
                        
# 1284 "<previous_module>"
tpush_0_66: IF(1,66,tpush_0_67)__CSEQ_removeindent;
                        
# 1285 "<previous_module>"
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);

# 1286 "<previous_module>"
                        {
                                
# 1287 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                                
# 1288 "<previous_module>"
tpush_0_67: IF(1,67,tpush_0_68)__CSEQ_removeindent;
                                
# 1289 "<previous_module>"
__cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
                                
# 1290 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                                
# 1291 "<previous_module>"
tpush_0_68: IF(1,68,tpush_0_69)__CSEQ_removeindent;
                                
# 1292 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
                                
# 1293 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                                
# 1294 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                                
# 1295 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                                
# 1296 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                                
# 1297 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                                
# 1298 "<previous_module>"
;
                                ;
                                
# 1299 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                                
# 1300 "<previous_module>"
tpush_0_69: IF(1,69,tpush_0_70)__CSEQ_removeindent;
                                
# 1301 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                                
# 1302 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 1303 "<previous_module>"
                                {
                                        
# 1304 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 1305 "<previous_module>"
tpush_0_70: IF(1,70,tpush_0_71)__CSEQ_removeindent;
                                        
# 1306 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 1307 "<previous_module>"
tpush_0_71: IF(1,71,tpush_0_72)__CSEQ_removeindent;
                                        
# 1308 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 1310 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 72);
                                ;
                                
# 1311 "<previous_module>"
;
                                ;
                                
# 1312 "<previous_module>"
;
                                ;
                                
# 1313 "<previous_module>"
;
                                ;
                                
# 1314 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                                
# 1315 "<previous_module>"
tpush_0_72: IF(1,72,tpush_0_73)__CSEQ_removeindent;
                                
# 1316 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                                
# 1317 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 1318 "<previous_module>"
                                {
                                        
# 1319 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 1320 "<previous_module>"
tpush_0_73: IF(1,73,tpush_0_74)__CSEQ_removeindent;
                                        
# 1321 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 1322 "<previous_module>"
tpush_0_74: IF(1,74,tpush_0_75)__CSEQ_removeindent;
                                        
# 1323 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 1325 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 75);
                                ;
                                
# 1326 "<previous_module>"
;
                                ;
                                
# 1327 "<previous_module>"
;
                                ;
                                
# 1328 "<previous_module>"
tpush_0_75: IF(1,75,tpush_0_76)__CSEQ_removeindent;
                                
# 1329 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                                
# 1330 "<previous_module>"
tpush_0_76: IF(1,76,tpush_0_77)__CSEQ_removeindent;
                                
# 1331 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                                
# 1332 "<previous_module>"
tpush_0_77: IF(1,77,tpush_0_78)__CSEQ_removeindent;
                                
# 1333 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                                
# 1334 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                                
# 1335 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                                
# 1336 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                                
# 1337 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1338 "<previous_module>"
                                {
                                        
# 1339 "<previous_module>"
goto __exit_loop_8;
                                        ;
                                }

                                
# 1341 "<previous_module>"
;

# 1342 "<previous_module>"
                                {
                                        
# 1343 "<previous_module>"
tpush_0_78: IF(1,78,tpush_0_79)__CSEQ_removeindent;
                                        
# 1344 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1345 "<previous_module>"
tpush_0_79: IF(1,79,tpush_0_80)__CSEQ_removeindent;
                                        
# 1346 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 1347 "<previous_module>"
tpush_0_80: IF(1,80,tpush_0_81)__CSEQ_removeindent;
                                        
# 1348 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1349 "<previous_module>"
tpush_0_81: IF(1,81,tpush_0_82)__CSEQ_removeindent;
                                        
# 1350 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 1351 "<previous_module>"
tpush_0_82: IF(1,82,tpush_0_83)__CSEQ_removeindent;
                                        
# 1352 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1353 "<previous_module>"
tpush_0_83: IF(1,83,tpush_0_84)__CSEQ_removeindent;
                                        
# 1354 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 1355 "<previous_module>"
tpush_0_84: IF(1,84,tpush_0_85)__CSEQ_removeindent;
                                        
# 1356 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1357 "<previous_module>"
;
                                        ;
                                        
# 1358 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 1359 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 1360 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1361 "<previous_module>"
                                        {

# 1362 "<previous_module>"
                                                {
                                                        
# 1363 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 1364 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1365 "<previous_module>"
                                                        {
                                                                
# 1366 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1368 "<previous_module>"
;
                                                        
# 1369 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1370 "<previous_module>"
                                                        {
                                                                
# 1371 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1373 "<previous_module>"
;
                                                        
# 1374 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1375 "<previous_module>"
                                                        {
                                                                
# 1376 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1378 "<previous_module>"
;
                                                        
# 1379 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1380 "<previous_module>"
                                                        {
                                                                
# 1381 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1383 "<previous_module>"
;
                                                        
# 1384 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1385 "<previous_module>"
                                                        {
                                                                
# 1386 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1388 "<previous_module>"
;
                                                        
# 1389 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 1390 "<previous_module>"
tpush_0_85: IF(1,85,tpush_0_86)__CSEQ_removeindent;
                                                        
# 1391 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 1392 "<previous_module>"
__exit_loop_9:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 86);

                                                        
# 1393 "<previous_module>"
;
                                                        ;
                                                        
# 1394 "<previous_module>"
__exit__exponential_backoff_1_5:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 86);

                                                        
# 1395 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1397 "<previous_module>"
;
                                        }

                                        
# 1399 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 86);
                                        ;
                                        
# 1400 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 1401 "<previous_module>"
;
                                        ;
                                        
# 1402 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 1403 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 1404 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1405 "<previous_module>"
                                        {
                                                
# 1406 "<previous_module>"
goto __exit_loop_8;
                                                ;
                                        }

                                        
# 1408 "<previous_module>"
;
                                }
                                
# 1410 "<previous_module>"
;
                                
# 1411 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1412 "<previous_module>"
                                {
                                        
# 1413 "<previous_module>"
goto __exit_loop_8;
                                        ;
                                }

                                
# 1415 "<previous_module>"
;

# 1416 "<previous_module>"
                                {
                                        
# 1417 "<previous_module>"
tpush_0_86: IF(1,86,tpush_0_87)__CSEQ_removeindent;
                                        
# 1418 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1419 "<previous_module>"
tpush_0_87: IF(1,87,tpush_0_88)__CSEQ_removeindent;
                                        
# 1420 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 1421 "<previous_module>"
tpush_0_88: IF(1,88,tpush_0_89)__CSEQ_removeindent;
                                        
# 1422 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1423 "<previous_module>"
tpush_0_89: IF(1,89,tpush_0_90)__CSEQ_removeindent;
                                        
# 1424 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 1425 "<previous_module>"
tpush_0_90: IF(1,90,tpush_0_91)__CSEQ_removeindent;
                                        
# 1426 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1427 "<previous_module>"
tpush_0_91: IF(1,91,tpush_0_92)__CSEQ_removeindent;
                                        
# 1428 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 1429 "<previous_module>"
tpush_0_92: IF(1,92,tpush_0_93)__CSEQ_removeindent;
                                        
# 1430 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1431 "<previous_module>"
;
                                        ;
                                        
# 1432 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 1433 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 1434 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1435 "<previous_module>"
                                        {

# 1436 "<previous_module>"
                                                {
                                                        
# 1437 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 1438 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1439 "<previous_module>"
                                                        {
                                                                
# 1440 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1442 "<previous_module>"
;
                                                        
# 1443 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1444 "<previous_module>"
                                                        {
                                                                
# 1445 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1447 "<previous_module>"
;
                                                        
# 1448 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1449 "<previous_module>"
                                                        {
                                                                
# 1450 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1452 "<previous_module>"
;
                                                        
# 1453 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1454 "<previous_module>"
                                                        {
                                                                
# 1455 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1457 "<previous_module>"
;
                                                        
# 1458 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1459 "<previous_module>"
                                                        {
                                                                
# 1460 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1462 "<previous_module>"
;
                                                        
# 1463 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 1464 "<previous_module>"
tpush_0_93: IF(1,93,tpush_0_94)__CSEQ_removeindent;
                                                        
# 1465 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 1466 "<previous_module>"
__exit_loop_10:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 94);

                                                        
# 1467 "<previous_module>"
;
                                                        ;
                                                        
# 1468 "<previous_module>"
__exit__exponential_backoff_1_6:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 94);

                                                        
# 1469 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1471 "<previous_module>"
;
                                        }

                                        
# 1473 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 94);
                                        ;
                                        
# 1474 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 1475 "<previous_module>"
;
                                        ;
                                        
# 1476 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 1477 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 1478 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1479 "<previous_module>"
                                        {
                                                
# 1480 "<previous_module>"
goto __exit_loop_8;
                                                ;
                                        }

                                        
# 1482 "<previous_module>"
;
                                }
                                
# 1484 "<previous_module>"
;
                                
# 1485 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1486 "<previous_module>"
                                {
                                        
# 1487 "<previous_module>"
goto __exit_loop_8;
                                        ;
                                }

                                
# 1489 "<previous_module>"
;

# 1490 "<previous_module>"
                                {
                                        
# 1491 "<previous_module>"
tpush_0_94: IF(1,94,tpush_0_95)__CSEQ_removeindent;
                                        
# 1492 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1493 "<previous_module>"
tpush_0_95: IF(1,95,tpush_0_96)__CSEQ_removeindent;
                                        
# 1494 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 1495 "<previous_module>"
tpush_0_96: IF(1,96,tpush_0_97)__CSEQ_removeindent;
                                        
# 1496 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1497 "<previous_module>"
tpush_0_97: IF(1,97,tpush_0_98)__CSEQ_removeindent;
                                        
# 1498 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 1499 "<previous_module>"
tpush_0_98: IF(1,98,tpush_0_99)__CSEQ_removeindent;
                                        
# 1500 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1501 "<previous_module>"
tpush_0_99: IF(1,99,tpush_0_100)__CSEQ_removeindent;
                                        
# 1502 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 1503 "<previous_module>"
tpush_0_100: IF(1,100,tpush_0_101)__CSEQ_removeindent;
                                        
# 1504 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1505 "<previous_module>"
;
                                        ;
                                        
# 1506 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 1507 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 1508 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1509 "<previous_module>"
                                        {

# 1510 "<previous_module>"
                                                {
                                                        
# 1511 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 1512 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1513 "<previous_module>"
                                                        {
                                                                
# 1514 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1516 "<previous_module>"
;
                                                        
# 1517 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1518 "<previous_module>"
                                                        {
                                                                
# 1519 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1521 "<previous_module>"
;
                                                        
# 1522 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1523 "<previous_module>"
                                                        {
                                                                
# 1524 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1526 "<previous_module>"
;
                                                        
# 1527 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1528 "<previous_module>"
                                                        {
                                                                
# 1529 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1531 "<previous_module>"
;
                                                        
# 1532 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1533 "<previous_module>"
                                                        {
                                                                
# 1534 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1536 "<previous_module>"
;
                                                        
# 1537 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 1538 "<previous_module>"
tpush_0_101: IF(1,101,tpush_0_102)__CSEQ_removeindent;
                                                        
# 1539 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 1540 "<previous_module>"
__exit_loop_11:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 102);

                                                        
# 1541 "<previous_module>"
;
                                                        ;
                                                        
# 1542 "<previous_module>"
__exit__exponential_backoff_1_7:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 102);

                                                        
# 1543 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1545 "<previous_module>"
;
                                        }

                                        
# 1547 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 102);
                                        ;
                                        
# 1548 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 1549 "<previous_module>"
;
                                        ;
                                        
# 1550 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 1551 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 1552 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1553 "<previous_module>"
                                        {
                                                
# 1554 "<previous_module>"
goto __exit_loop_8;
                                                ;
                                        }

                                        
# 1556 "<previous_module>"
;
                                }
                                
# 1558 "<previous_module>"
;
                                
# 1559 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1560 "<previous_module>"
                                {
                                        
# 1561 "<previous_module>"
goto __exit_loop_8;
                                        ;
                                }

                                
# 1563 "<previous_module>"
;

# 1564 "<previous_module>"
                                {
                                        
# 1565 "<previous_module>"
tpush_0_102: IF(1,102,tpush_0_103)__CSEQ_removeindent;
                                        
# 1566 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1567 "<previous_module>"
tpush_0_103: IF(1,103,tpush_0_104)__CSEQ_removeindent;
                                        
# 1568 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 1569 "<previous_module>"
tpush_0_104: IF(1,104,tpush_0_105)__CSEQ_removeindent;
                                        
# 1570 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1571 "<previous_module>"
tpush_0_105: IF(1,105,tpush_0_106)__CSEQ_removeindent;
                                        
# 1572 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 1573 "<previous_module>"
tpush_0_106: IF(1,106,tpush_0_107)__CSEQ_removeindent;
                                        
# 1574 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1575 "<previous_module>"
tpush_0_107: IF(1,107,tpush_0_108)__CSEQ_removeindent;
                                        
# 1576 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 1577 "<previous_module>"
tpush_0_108: IF(1,108,tpush_0_109)__CSEQ_removeindent;
                                        
# 1578 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1579 "<previous_module>"
;
                                        ;
                                        
# 1580 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 1581 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 1582 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1583 "<previous_module>"
                                        {

# 1584 "<previous_module>"
                                                {
                                                        
# 1585 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 1586 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1587 "<previous_module>"
                                                        {
                                                                
# 1588 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1590 "<previous_module>"
;
                                                        
# 1591 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1592 "<previous_module>"
                                                        {
                                                                
# 1593 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1595 "<previous_module>"
;
                                                        
# 1596 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1597 "<previous_module>"
                                                        {
                                                                
# 1598 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1600 "<previous_module>"
;
                                                        
# 1601 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1602 "<previous_module>"
                                                        {
                                                                
# 1603 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1605 "<previous_module>"
;
                                                        
# 1606 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1607 "<previous_module>"
                                                        {
                                                                
# 1608 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1610 "<previous_module>"
;
                                                        
# 1611 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 1612 "<previous_module>"
tpush_0_109: IF(1,109,tpush_0_110)__CSEQ_removeindent;
                                                        
# 1613 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 1614 "<previous_module>"
__exit_loop_12:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 110);

                                                        
# 1615 "<previous_module>"
;
                                                        ;
                                                        
# 1616 "<previous_module>"
__exit__exponential_backoff_1_8:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 110);

                                                        
# 1617 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1619 "<previous_module>"
;
                                        }

                                        
# 1621 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 110);
                                        ;
                                        
# 1622 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 1623 "<previous_module>"
;
                                        ;
                                        
# 1624 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 1625 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 1626 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1627 "<previous_module>"
                                        {
                                                
# 1628 "<previous_module>"
goto __exit_loop_8;
                                                ;
                                        }

                                        
# 1630 "<previous_module>"
;
                                }
                                
# 1632 "<previous_module>"
;
                                
# 1633 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1634 "<previous_module>"
                                {
                                        
# 1635 "<previous_module>"
goto __exit_loop_8;
                                        ;
                                }

                                
# 1637 "<previous_module>"
;

# 1638 "<previous_module>"
                                {
                                        
# 1639 "<previous_module>"
tpush_0_110: IF(1,110,tpush_0_111)__CSEQ_removeindent;
                                        
# 1640 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1641 "<previous_module>"
tpush_0_111: IF(1,111,tpush_0_112)__CSEQ_removeindent;
                                        
# 1642 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 1643 "<previous_module>"
tpush_0_112: IF(1,112,tpush_0_113)__CSEQ_removeindent;
                                        
# 1644 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1645 "<previous_module>"
tpush_0_113: IF(1,113,tpush_0_114)__CSEQ_removeindent;
                                        
# 1646 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 1647 "<previous_module>"
tpush_0_114: IF(1,114,tpush_0_115)__CSEQ_removeindent;
                                        
# 1648 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1649 "<previous_module>"
tpush_0_115: IF(1,115,tpush_0_116)__CSEQ_removeindent;
                                        
# 1650 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 1651 "<previous_module>"
tpush_0_116: IF(1,116,tpush_0_117)__CSEQ_removeindent;
                                        
# 1652 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1653 "<previous_module>"
;
                                        ;
                                        
# 1654 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 1655 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 1656 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1657 "<previous_module>"
                                        {

# 1658 "<previous_module>"
                                                {
                                                        
# 1659 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 1660 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1661 "<previous_module>"
                                                        {
                                                                
# 1662 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1664 "<previous_module>"
;
                                                        
# 1665 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1666 "<previous_module>"
                                                        {
                                                                
# 1667 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1669 "<previous_module>"
;
                                                        
# 1670 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1671 "<previous_module>"
                                                        {
                                                                
# 1672 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1674 "<previous_module>"
;
                                                        
# 1675 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1676 "<previous_module>"
                                                        {
                                                                
# 1677 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1679 "<previous_module>"
;
                                                        
# 1680 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1681 "<previous_module>"
                                                        {
                                                                
# 1682 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1684 "<previous_module>"
;
                                                        
# 1685 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 1686 "<previous_module>"
tpush_0_117: IF(1,117,tpush_0_118)__CSEQ_removeindent;
                                                        
# 1687 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 1688 "<previous_module>"
__exit_loop_13:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 118);

                                                        
# 1689 "<previous_module>"
;
                                                        ;
                                                        
# 1690 "<previous_module>"
__exit__exponential_backoff_1_9:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 118);

                                                        
# 1691 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1693 "<previous_module>"
;
                                        }

                                        
# 1695 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 118);
                                        ;
                                        
# 1696 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 1697 "<previous_module>"
;
                                        ;
                                        
# 1698 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 1699 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 1700 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1701 "<previous_module>"
                                        {
                                                
# 1702 "<previous_module>"
goto __exit_loop_8;
                                                ;
                                        }

                                        
# 1704 "<previous_module>"
;
                                }
                                
# 1706 "<previous_module>"
;
                                
# 1707 "<previous_module>"
tpush_0_118: IF(1,118,tpush_0_119)__CSEQ_removeindent;
                                
# 1708 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                                
# 1709 "<previous_module>"
__exit_loop_8:
                                __CPROVER_assume(__cs_pc_cs[1] >= 119);

                                
# 1710 "<previous_module>"
;
                                ;
                                
# 1711 "<previous_module>"
goto __exit__lfds711_stack_push_1_1;
                                ;
                                
# 1712 "<previous_module>"
__exit__lfds711_stack_push_1_1:
                                __CPROVER_assume(__cs_pc_cs[1] >= 119);

                                
# 1713 "<previous_module>"
;
                                ;
                        }
                        
# 1715 "<previous_module>"
;
                        
# 1716 "<previous_module>"
__exit__insert_1_1:
                        __CPROVER_assume(__cs_pc_cs[1] >= 119);

                        
# 1717 "<previous_module>"
;
                        ;
                }
                
# 1719 "<previous_module>"
;
                
# 1720 "<previous_module>"
;
                ;
                
# 1721 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_24;
                
# 1722 "<previous_module>"
tpush_0_119: IF(1,119,tpush_0_120)__CSEQ_removeindent;
                
# 1723 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_24 = ATOMIC_OPERATION;
                
# 1724 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_24)

# 1725 "<previous_module>"
                {
                        
# 1726 "<previous_module>"
tpush_0_120: IF(1,120,tpush_0_121)__CSEQ_removeindent;
                        
# 1727 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                }

                
# 1729 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 121);
                ;
                
# 1730 "<previous_module>"
;
                ;
        }
        
# 1732 "<previous_module>"
;
        
# 1733 "<previous_module>"
__cs_local_push_loop++;

# 1734 "<previous_module>"
        {
                
# 1735 "<previous_module>"
;
                ;
                
# 1736 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_23;
                
# 1737 "<previous_module>"
tpush_0_121: IF(1,121,tpush_0_122)__CSEQ_removeindent;
                
# 1738 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_23 = ATOMIC_OPERATION;
                
# 1739 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_23)

# 1740 "<previous_module>"
                {
                        
# 1741 "<previous_module>"
tpush_0_122: IF(1,122,tpush_0_123)__CSEQ_removeindent;
                        
# 1742 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                }

                
# 1744 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 123);
                ;
                
# 1745 "<previous_module>"
;
                ;

# 1746 "<previous_module>"
                {
                        
# 1747 "<previous_module>"
static struct lfds711_stack_state *__cs_param_insert_s;
                        
# 1748 "<previous_module>"
tpush_0_123: IF(1,123,tpush_0_124)__CSEQ_removeindent;
                        
# 1749 "<previous_module>"
__cs_param_insert_s = ss;
                        
# 1750 "<previous_module>"
static int long long unsigned __cs_param_insert_id;
                        
# 1751 "<previous_module>"
__cs_param_insert_id = __cs_local_push_loop;
                        
# 1752 "<previous_module>"
static struct test_data *__cs_local_insert_td;
                        
# 1753 "<previous_module>"
tpush_0_124: IF(1,124,tpush_0_125)__CSEQ_removeindent;
                        
# 1754 "<previous_module>"
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
                        
# 1755 "<previous_module>"
tpush_0_125: IF(1,125,tpush_0_126)__CSEQ_removeindent;
                        
# 1756 "<previous_module>"
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
                        
# 1757 "<previous_module>"
tpush_0_126: IF(1,126,tpush_0_127)__CSEQ_removeindent;
                        
# 1758 "<previous_module>"
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);

# 1759 "<previous_module>"
                        {
                                
# 1760 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                                
# 1761 "<previous_module>"
tpush_0_127: IF(1,127,tpush_0_128)__CSEQ_removeindent;
                                
# 1762 "<previous_module>"
__cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
                                
# 1763 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                                
# 1764 "<previous_module>"
tpush_0_128: IF(1,128,tpush_0_129)__CSEQ_removeindent;
                                
# 1765 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
                                
# 1766 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                                
# 1767 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                                
# 1768 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                                
# 1769 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                                
# 1770 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                                
# 1771 "<previous_module>"
;
                                ;
                                
# 1772 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                                
# 1773 "<previous_module>"
tpush_0_129: IF(1,129,tpush_0_130)__CSEQ_removeindent;
                                
# 1774 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                                
# 1775 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 1776 "<previous_module>"
                                {
                                        
# 1777 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 1778 "<previous_module>"
tpush_0_130: IF(1,130,tpush_0_131)__CSEQ_removeindent;
                                        
# 1779 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 1780 "<previous_module>"
tpush_0_131: IF(1,131,tpush_0_132)__CSEQ_removeindent;
                                        
# 1781 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 1783 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 132);
                                ;
                                
# 1784 "<previous_module>"
;
                                ;
                                
# 1785 "<previous_module>"
;
                                ;
                                
# 1786 "<previous_module>"
;
                                ;
                                
# 1787 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                                
# 1788 "<previous_module>"
tpush_0_132: IF(1,132,tpush_0_133)__CSEQ_removeindent;
                                
# 1789 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                                
# 1790 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 1791 "<previous_module>"
                                {
                                        
# 1792 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 1793 "<previous_module>"
tpush_0_133: IF(1,133,tpush_0_134)__CSEQ_removeindent;
                                        
# 1794 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 1795 "<previous_module>"
tpush_0_134: IF(1,134,tpush_0_135)__CSEQ_removeindent;
                                        
# 1796 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 1798 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 135);
                                ;
                                
# 1799 "<previous_module>"
;
                                ;
                                
# 1800 "<previous_module>"
;
                                ;
                                
# 1801 "<previous_module>"
tpush_0_135: IF(1,135,tpush_0_136)__CSEQ_removeindent;
                                
# 1802 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                                
# 1803 "<previous_module>"
tpush_0_136: IF(1,136,tpush_0_137)__CSEQ_removeindent;
                                
# 1804 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                                
# 1805 "<previous_module>"
tpush_0_137: IF(1,137,tpush_0_138)__CSEQ_removeindent;
                                
# 1806 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                                
# 1807 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                                
# 1808 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                                
# 1809 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                                
# 1810 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1811 "<previous_module>"
                                {
                                        
# 1812 "<previous_module>"
goto __exit_loop_14;
                                        ;
                                }

                                
# 1814 "<previous_module>"
;

# 1815 "<previous_module>"
                                {
                                        
# 1816 "<previous_module>"
tpush_0_138: IF(1,138,tpush_0_139)__CSEQ_removeindent;
                                        
# 1817 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1818 "<previous_module>"
tpush_0_139: IF(1,139,tpush_0_140)__CSEQ_removeindent;
                                        
# 1819 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 1820 "<previous_module>"
tpush_0_140: IF(1,140,tpush_0_141)__CSEQ_removeindent;
                                        
# 1821 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1822 "<previous_module>"
tpush_0_141: IF(1,141,tpush_0_142)__CSEQ_removeindent;
                                        
# 1823 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 1824 "<previous_module>"
tpush_0_142: IF(1,142,tpush_0_143)__CSEQ_removeindent;
                                        
# 1825 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1826 "<previous_module>"
tpush_0_143: IF(1,143,tpush_0_144)__CSEQ_removeindent;
                                        
# 1827 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 1828 "<previous_module>"
tpush_0_144: IF(1,144,tpush_0_145)__CSEQ_removeindent;
                                        
# 1829 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1830 "<previous_module>"
;
                                        ;
                                        
# 1831 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 1832 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 1833 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1834 "<previous_module>"
                                        {

# 1835 "<previous_module>"
                                                {
                                                        
# 1836 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 1837 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1838 "<previous_module>"
                                                        {
                                                                
# 1839 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1841 "<previous_module>"
;
                                                        
# 1842 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1843 "<previous_module>"
                                                        {
                                                                
# 1844 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1846 "<previous_module>"
;
                                                        
# 1847 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1848 "<previous_module>"
                                                        {
                                                                
# 1849 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1851 "<previous_module>"
;
                                                        
# 1852 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1853 "<previous_module>"
                                                        {
                                                                
# 1854 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1856 "<previous_module>"
;
                                                        
# 1857 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1858 "<previous_module>"
                                                        {
                                                                
# 1859 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1861 "<previous_module>"
;
                                                        
# 1862 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 1863 "<previous_module>"
tpush_0_145: IF(1,145,tpush_0_146)__CSEQ_removeindent;
                                                        
# 1864 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 1865 "<previous_module>"
__exit_loop_15:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 146);

                                                        
# 1866 "<previous_module>"
;
                                                        ;
                                                        
# 1867 "<previous_module>"
__exit__exponential_backoff_1_10:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 146);

                                                        
# 1868 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1870 "<previous_module>"
;
                                        }

                                        
# 1872 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 146);
                                        ;
                                        
# 1873 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 1874 "<previous_module>"
;
                                        ;
                                        
# 1875 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 1876 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 1877 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1878 "<previous_module>"
                                        {
                                                
# 1879 "<previous_module>"
goto __exit_loop_14;
                                                ;
                                        }

                                        
# 1881 "<previous_module>"
;
                                }
                                
# 1883 "<previous_module>"
;
                                
# 1884 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1885 "<previous_module>"
                                {
                                        
# 1886 "<previous_module>"
goto __exit_loop_14;
                                        ;
                                }

                                
# 1888 "<previous_module>"
;

# 1889 "<previous_module>"
                                {
                                        
# 1890 "<previous_module>"
tpush_0_146: IF(1,146,tpush_0_147)__CSEQ_removeindent;
                                        
# 1891 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1892 "<previous_module>"
tpush_0_147: IF(1,147,tpush_0_148)__CSEQ_removeindent;
                                        
# 1893 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 1894 "<previous_module>"
tpush_0_148: IF(1,148,tpush_0_149)__CSEQ_removeindent;
                                        
# 1895 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1896 "<previous_module>"
tpush_0_149: IF(1,149,tpush_0_150)__CSEQ_removeindent;
                                        
# 1897 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 1898 "<previous_module>"
tpush_0_150: IF(1,150,tpush_0_151)__CSEQ_removeindent;
                                        
# 1899 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1900 "<previous_module>"
tpush_0_151: IF(1,151,tpush_0_152)__CSEQ_removeindent;
                                        
# 1901 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 1902 "<previous_module>"
tpush_0_152: IF(1,152,tpush_0_153)__CSEQ_removeindent;
                                        
# 1903 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1904 "<previous_module>"
;
                                        ;
                                        
# 1905 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 1906 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 1907 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1908 "<previous_module>"
                                        {

# 1909 "<previous_module>"
                                                {
                                                        
# 1910 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 1911 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1912 "<previous_module>"
                                                        {
                                                                
# 1913 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1915 "<previous_module>"
;
                                                        
# 1916 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1917 "<previous_module>"
                                                        {
                                                                
# 1918 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1920 "<previous_module>"
;
                                                        
# 1921 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1922 "<previous_module>"
                                                        {
                                                                
# 1923 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1925 "<previous_module>"
;
                                                        
# 1926 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1927 "<previous_module>"
                                                        {
                                                                
# 1928 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1930 "<previous_module>"
;
                                                        
# 1931 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1932 "<previous_module>"
                                                        {
                                                                
# 1933 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1935 "<previous_module>"
;
                                                        
# 1936 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 1937 "<previous_module>"
tpush_0_153: IF(1,153,tpush_0_154)__CSEQ_removeindent;
                                                        
# 1938 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 1939 "<previous_module>"
__exit_loop_16:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 154);

                                                        
# 1940 "<previous_module>"
;
                                                        ;
                                                        
# 1941 "<previous_module>"
__exit__exponential_backoff_1_11:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 154);

                                                        
# 1942 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1944 "<previous_module>"
;
                                        }

                                        
# 1946 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 154);
                                        ;
                                        
# 1947 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 1948 "<previous_module>"
;
                                        ;
                                        
# 1949 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 1950 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 1951 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1952 "<previous_module>"
                                        {
                                                
# 1953 "<previous_module>"
goto __exit_loop_14;
                                                ;
                                        }

                                        
# 1955 "<previous_module>"
;
                                }
                                
# 1957 "<previous_module>"
;
                                
# 1958 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1959 "<previous_module>"
                                {
                                        
# 1960 "<previous_module>"
goto __exit_loop_14;
                                        ;
                                }

                                
# 1962 "<previous_module>"
;

# 1963 "<previous_module>"
                                {
                                        
# 1964 "<previous_module>"
tpush_0_154: IF(1,154,tpush_0_155)__CSEQ_removeindent;
                                        
# 1965 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1966 "<previous_module>"
tpush_0_155: IF(1,155,tpush_0_156)__CSEQ_removeindent;
                                        
# 1967 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 1968 "<previous_module>"
tpush_0_156: IF(1,156,tpush_0_157)__CSEQ_removeindent;
                                        
# 1969 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1970 "<previous_module>"
tpush_0_157: IF(1,157,tpush_0_158)__CSEQ_removeindent;
                                        
# 1971 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 1972 "<previous_module>"
tpush_0_158: IF(1,158,tpush_0_159)__CSEQ_removeindent;
                                        
# 1973 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 1974 "<previous_module>"
tpush_0_159: IF(1,159,tpush_0_160)__CSEQ_removeindent;
                                        
# 1975 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 1976 "<previous_module>"
tpush_0_160: IF(1,160,tpush_0_161)__CSEQ_removeindent;
                                        
# 1977 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 1978 "<previous_module>"
;
                                        ;
                                        
# 1979 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 1980 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 1981 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1982 "<previous_module>"
                                        {

# 1983 "<previous_module>"
                                                {
                                                        
# 1984 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 1985 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1986 "<previous_module>"
                                                        {
                                                                
# 1987 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1989 "<previous_module>"
;
                                                        
# 1990 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1991 "<previous_module>"
                                                        {
                                                                
# 1992 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1994 "<previous_module>"
;
                                                        
# 1995 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1996 "<previous_module>"
                                                        {
                                                                
# 1997 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 1999 "<previous_module>"
;
                                                        
# 2000 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2001 "<previous_module>"
                                                        {
                                                                
# 2002 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2004 "<previous_module>"
;
                                                        
# 2005 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2006 "<previous_module>"
                                                        {
                                                                
# 2007 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2009 "<previous_module>"
;
                                                        
# 2010 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2011 "<previous_module>"
tpush_0_161: IF(1,161,tpush_0_162)__CSEQ_removeindent;
                                                        
# 2012 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 2013 "<previous_module>"
__exit_loop_17:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 162);

                                                        
# 2014 "<previous_module>"
;
                                                        ;
                                                        
# 2015 "<previous_module>"
__exit__exponential_backoff_1_12:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 162);

                                                        
# 2016 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2018 "<previous_module>"
;
                                        }

                                        
# 2020 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 162);
                                        ;
                                        
# 2021 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2022 "<previous_module>"
;
                                        ;
                                        
# 2023 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2024 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2025 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2026 "<previous_module>"
                                        {
                                                
# 2027 "<previous_module>"
goto __exit_loop_14;
                                                ;
                                        }

                                        
# 2029 "<previous_module>"
;
                                }
                                
# 2031 "<previous_module>"
;
                                
# 2032 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2033 "<previous_module>"
                                {
                                        
# 2034 "<previous_module>"
goto __exit_loop_14;
                                        ;
                                }

                                
# 2036 "<previous_module>"
;

# 2037 "<previous_module>"
                                {
                                        
# 2038 "<previous_module>"
tpush_0_162: IF(1,162,tpush_0_163)__CSEQ_removeindent;
                                        
# 2039 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2040 "<previous_module>"
tpush_0_163: IF(1,163,tpush_0_164)__CSEQ_removeindent;
                                        
# 2041 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2042 "<previous_module>"
tpush_0_164: IF(1,164,tpush_0_165)__CSEQ_removeindent;
                                        
# 2043 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2044 "<previous_module>"
tpush_0_165: IF(1,165,tpush_0_166)__CSEQ_removeindent;
                                        
# 2045 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2046 "<previous_module>"
tpush_0_166: IF(1,166,tpush_0_167)__CSEQ_removeindent;
                                        
# 2047 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2048 "<previous_module>"
tpush_0_167: IF(1,167,tpush_0_168)__CSEQ_removeindent;
                                        
# 2049 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2050 "<previous_module>"
tpush_0_168: IF(1,168,tpush_0_169)__CSEQ_removeindent;
                                        
# 2051 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2052 "<previous_module>"
;
                                        ;
                                        
# 2053 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2054 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2055 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2056 "<previous_module>"
                                        {

# 2057 "<previous_module>"
                                                {
                                                        
# 2058 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2059 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2060 "<previous_module>"
                                                        {
                                                                
# 2061 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2063 "<previous_module>"
;
                                                        
# 2064 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2065 "<previous_module>"
                                                        {
                                                                
# 2066 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2068 "<previous_module>"
;
                                                        
# 2069 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2070 "<previous_module>"
                                                        {
                                                                
# 2071 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2073 "<previous_module>"
;
                                                        
# 2074 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2075 "<previous_module>"
                                                        {
                                                                
# 2076 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2078 "<previous_module>"
;
                                                        
# 2079 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2080 "<previous_module>"
                                                        {
                                                                
# 2081 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2083 "<previous_module>"
;
                                                        
# 2084 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2085 "<previous_module>"
tpush_0_169: IF(1,169,tpush_0_170)__CSEQ_removeindent;
                                                        
# 2086 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 2087 "<previous_module>"
__exit_loop_18:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 170);

                                                        
# 2088 "<previous_module>"
;
                                                        ;
                                                        
# 2089 "<previous_module>"
__exit__exponential_backoff_1_13:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 170);

                                                        
# 2090 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2092 "<previous_module>"
;
                                        }

                                        
# 2094 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 170);
                                        ;
                                        
# 2095 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2096 "<previous_module>"
;
                                        ;
                                        
# 2097 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2098 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2099 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2100 "<previous_module>"
                                        {
                                                
# 2101 "<previous_module>"
goto __exit_loop_14;
                                                ;
                                        }

                                        
# 2103 "<previous_module>"
;
                                }
                                
# 2105 "<previous_module>"
;
                                
# 2106 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2107 "<previous_module>"
                                {
                                        
# 2108 "<previous_module>"
goto __exit_loop_14;
                                        ;
                                }

                                
# 2110 "<previous_module>"
;

# 2111 "<previous_module>"
                                {
                                        
# 2112 "<previous_module>"
tpush_0_170: IF(1,170,tpush_0_171)__CSEQ_removeindent;
                                        
# 2113 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2114 "<previous_module>"
tpush_0_171: IF(1,171,tpush_0_172)__CSEQ_removeindent;
                                        
# 2115 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2116 "<previous_module>"
tpush_0_172: IF(1,172,tpush_0_173)__CSEQ_removeindent;
                                        
# 2117 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2118 "<previous_module>"
tpush_0_173: IF(1,173,tpush_0_174)__CSEQ_removeindent;
                                        
# 2119 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2120 "<previous_module>"
tpush_0_174: IF(1,174,tpush_0_175)__CSEQ_removeindent;
                                        
# 2121 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2122 "<previous_module>"
tpush_0_175: IF(1,175,tpush_0_176)__CSEQ_removeindent;
                                        
# 2123 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2124 "<previous_module>"
tpush_0_176: IF(1,176,tpush_0_177)__CSEQ_removeindent;
                                        
# 2125 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2126 "<previous_module>"
;
                                        ;
                                        
# 2127 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2128 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2129 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

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
                                                        {
                                                                
# 2150 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2152 "<previous_module>"
;
                                                        
# 2153 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2154 "<previous_module>"
                                                        {
                                                                
# 2155 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2157 "<previous_module>"
;
                                                        
# 2158 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2159 "<previous_module>"
tpush_0_177: IF(1,177,tpush_0_178)__CSEQ_removeindent;
                                                        
# 2160 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 2161 "<previous_module>"
__exit_loop_19:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 178);

                                                        
# 2162 "<previous_module>"
;
                                                        ;
                                                        
# 2163 "<previous_module>"
__exit__exponential_backoff_1_14:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 178);

                                                        
# 2164 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2166 "<previous_module>"
;
                                        }

                                        
# 2168 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 178);
                                        ;
                                        
# 2169 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2170 "<previous_module>"
;
                                        ;
                                        
# 2171 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2172 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2173 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2174 "<previous_module>"
                                        {
                                                
# 2175 "<previous_module>"
goto __exit_loop_14;
                                                ;
                                        }

                                        
# 2177 "<previous_module>"
;
                                }
                                
# 2179 "<previous_module>"
;
                                
# 2180 "<previous_module>"
tpush_0_178: IF(1,178,tpush_0_179)__CSEQ_removeindent;
                                
# 2181 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                                
# 2182 "<previous_module>"
__exit_loop_14:
                                __CPROVER_assume(__cs_pc_cs[1] >= 179);

                                
# 2183 "<previous_module>"
;
                                ;
                                
# 2184 "<previous_module>"
goto __exit__lfds711_stack_push_1_2;
                                ;
                                
# 2185 "<previous_module>"
__exit__lfds711_stack_push_1_2:
                                __CPROVER_assume(__cs_pc_cs[1] >= 179);

                                
# 2186 "<previous_module>"
;
                                ;
                        }
                        
# 2188 "<previous_module>"
;
                        
# 2189 "<previous_module>"
__exit__insert_1_2:
                        __CPROVER_assume(__cs_pc_cs[1] >= 179);

                        
# 2190 "<previous_module>"
;
                        ;
                }
                
# 2192 "<previous_module>"
;
                
# 2193 "<previous_module>"
;
                ;
                
# 2194 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_24;
                
# 2195 "<previous_module>"
tpush_0_179: IF(1,179,tpush_0_180)__CSEQ_removeindent;
                
# 2196 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_24 = ATOMIC_OPERATION;
                
# 2197 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_24)

# 2198 "<previous_module>"
                {
                        
# 2199 "<previous_module>"
tpush_0_180: IF(1,180,tpush_0_181)__CSEQ_removeindent;
                        
# 2200 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                }

                
# 2202 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 181);
                ;
                
# 2203 "<previous_module>"
;
                ;
        }
        
# 2205 "<previous_module>"
;
        
# 2206 "<previous_module>"
__cs_local_push_loop++;

# 2207 "<previous_module>"
        {
                
# 2208 "<previous_module>"
;
                ;
                
# 2209 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_23;
                
# 2210 "<previous_module>"
tpush_0_181: IF(1,181,tpush_0_182)__CSEQ_removeindent;
                
# 2211 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_23 = ATOMIC_OPERATION;
                
# 2212 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_23)

# 2213 "<previous_module>"
                {
                        
# 2214 "<previous_module>"
tpush_0_182: IF(1,182,tpush_0_183)__CSEQ_removeindent;
                        
# 2215 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                }

                
# 2217 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 183);
                ;
                
# 2218 "<previous_module>"
;
                ;

# 2219 "<previous_module>"
                {
                        
# 2220 "<previous_module>"
static struct lfds711_stack_state *__cs_param_insert_s;
                        
# 2221 "<previous_module>"
tpush_0_183: IF(1,183,tpush_0_184)__CSEQ_removeindent;
                        
# 2222 "<previous_module>"
__cs_param_insert_s = ss;
                        
# 2223 "<previous_module>"
static int long long unsigned __cs_param_insert_id;
                        
# 2224 "<previous_module>"
__cs_param_insert_id = __cs_local_push_loop;
                        
# 2225 "<previous_module>"
static struct test_data *__cs_local_insert_td;
                        
# 2226 "<previous_module>"
tpush_0_184: IF(1,184,tpush_0_185)__CSEQ_removeindent;
                        
# 2227 "<previous_module>"
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
                        
# 2228 "<previous_module>"
tpush_0_185: IF(1,185,tpush_0_186)__CSEQ_removeindent;
                        
# 2229 "<previous_module>"
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
                        
# 2230 "<previous_module>"
tpush_0_186: IF(1,186,tpush_0_187)__CSEQ_removeindent;
                        
# 2231 "<previous_module>"
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);

# 2232 "<previous_module>"
                        {
                                
# 2233 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                                
# 2234 "<previous_module>"
tpush_0_187: IF(1,187,tpush_0_188)__CSEQ_removeindent;
                                
# 2235 "<previous_module>"
__cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
                                
# 2236 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                                
# 2237 "<previous_module>"
tpush_0_188: IF(1,188,tpush_0_189)__CSEQ_removeindent;
                                
# 2238 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
                                
# 2239 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                                
# 2240 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                                
# 2241 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                                
# 2242 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                                
# 2243 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                                
# 2244 "<previous_module>"
;
                                ;
                                
# 2245 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                                
# 2246 "<previous_module>"
tpush_0_189: IF(1,189,tpush_0_190)__CSEQ_removeindent;
                                
# 2247 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                                
# 2248 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 2249 "<previous_module>"
                                {
                                        
# 2250 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 2251 "<previous_module>"
tpush_0_190: IF(1,190,tpush_0_191)__CSEQ_removeindent;
                                        
# 2252 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 2253 "<previous_module>"
tpush_0_191: IF(1,191,tpush_0_192)__CSEQ_removeindent;
                                        
# 2254 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 2256 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 192);
                                ;
                                
# 2257 "<previous_module>"
;
                                ;
                                
# 2258 "<previous_module>"
;
                                ;
                                
# 2259 "<previous_module>"
;
                                ;
                                
# 2260 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                                
# 2261 "<previous_module>"
tpush_0_192: IF(1,192,tpush_0_193)__CSEQ_removeindent;
                                
# 2262 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                                
# 2263 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 2264 "<previous_module>"
                                {
                                        
# 2265 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 2266 "<previous_module>"
tpush_0_193: IF(1,193,tpush_0_194)__CSEQ_removeindent;
                                        
# 2267 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 2268 "<previous_module>"
tpush_0_194: IF(1,194,tpush_0_195)__CSEQ_removeindent;
                                        
# 2269 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 2271 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 195);
                                ;
                                
# 2272 "<previous_module>"
;
                                ;
                                
# 2273 "<previous_module>"
;
                                ;
                                
# 2274 "<previous_module>"
tpush_0_195: IF(1,195,tpush_0_196)__CSEQ_removeindent;
                                
# 2275 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                                
# 2276 "<previous_module>"
tpush_0_196: IF(1,196,tpush_0_197)__CSEQ_removeindent;
                                
# 2277 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                                
# 2278 "<previous_module>"
tpush_0_197: IF(1,197,tpush_0_198)__CSEQ_removeindent;
                                
# 2279 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                                
# 2280 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                                
# 2281 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                                
# 2282 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                                
# 2283 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2284 "<previous_module>"
                                {
                                        
# 2285 "<previous_module>"
goto __exit_loop_20;
                                        ;
                                }

                                
# 2287 "<previous_module>"
;

# 2288 "<previous_module>"
                                {
                                        
# 2289 "<previous_module>"
tpush_0_198: IF(1,198,tpush_0_199)__CSEQ_removeindent;
                                        
# 2290 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2291 "<previous_module>"
tpush_0_199: IF(1,199,tpush_0_200)__CSEQ_removeindent;
                                        
# 2292 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2293 "<previous_module>"
tpush_0_200: IF(1,200,tpush_0_201)__CSEQ_removeindent;
                                        
# 2294 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2295 "<previous_module>"
tpush_0_201: IF(1,201,tpush_0_202)__CSEQ_removeindent;
                                        
# 2296 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2297 "<previous_module>"
tpush_0_202: IF(1,202,tpush_0_203)__CSEQ_removeindent;
                                        
# 2298 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2299 "<previous_module>"
tpush_0_203: IF(1,203,tpush_0_204)__CSEQ_removeindent;
                                        
# 2300 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2301 "<previous_module>"
tpush_0_204: IF(1,204,tpush_0_205)__CSEQ_removeindent;
                                        
# 2302 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2303 "<previous_module>"
;
                                        ;
                                        
# 2304 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2305 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2306 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2307 "<previous_module>"
                                        {

# 2308 "<previous_module>"
                                                {
                                                        
# 2309 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2310 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2311 "<previous_module>"
                                                        {
                                                                
# 2312 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2314 "<previous_module>"
;
                                                        
# 2315 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2316 "<previous_module>"
                                                        {
                                                                
# 2317 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2319 "<previous_module>"
;
                                                        
# 2320 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2321 "<previous_module>"
                                                        {
                                                                
# 2322 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2324 "<previous_module>"
;
                                                        
# 2325 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2326 "<previous_module>"
                                                        {
                                                                
# 2327 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2329 "<previous_module>"
;
                                                        
# 2330 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2331 "<previous_module>"
                                                        {
                                                                
# 2332 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2334 "<previous_module>"
;
                                                        
# 2335 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2336 "<previous_module>"
tpush_0_205: IF(1,205,tpush_0_206)__CSEQ_removeindent;
                                                        
# 2337 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 2338 "<previous_module>"
__exit_loop_21:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 206);

                                                        
# 2339 "<previous_module>"
;
                                                        ;
                                                        
# 2340 "<previous_module>"
__exit__exponential_backoff_1_15:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 206);

                                                        
# 2341 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2343 "<previous_module>"
;
                                        }

                                        
# 2345 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 206);
                                        ;
                                        
# 2346 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2347 "<previous_module>"
;
                                        ;
                                        
# 2348 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2349 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2350 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2351 "<previous_module>"
                                        {
                                                
# 2352 "<previous_module>"
goto __exit_loop_20;
                                                ;
                                        }

                                        
# 2354 "<previous_module>"
;
                                }
                                
# 2356 "<previous_module>"
;
                                
# 2357 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2358 "<previous_module>"
                                {
                                        
# 2359 "<previous_module>"
goto __exit_loop_20;
                                        ;
                                }

                                
# 2361 "<previous_module>"
;

# 2362 "<previous_module>"
                                {
                                        
# 2363 "<previous_module>"
tpush_0_206: IF(1,206,tpush_0_207)__CSEQ_removeindent;
                                        
# 2364 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2365 "<previous_module>"
tpush_0_207: IF(1,207,tpush_0_208)__CSEQ_removeindent;
                                        
# 2366 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2367 "<previous_module>"
tpush_0_208: IF(1,208,tpush_0_209)__CSEQ_removeindent;
                                        
# 2368 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2369 "<previous_module>"
tpush_0_209: IF(1,209,tpush_0_210)__CSEQ_removeindent;
                                        
# 2370 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2371 "<previous_module>"
tpush_0_210: IF(1,210,tpush_0_211)__CSEQ_removeindent;
                                        
# 2372 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2373 "<previous_module>"
tpush_0_211: IF(1,211,tpush_0_212)__CSEQ_removeindent;
                                        
# 2374 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2375 "<previous_module>"
tpush_0_212: IF(1,212,tpush_0_213)__CSEQ_removeindent;
                                        
# 2376 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2377 "<previous_module>"
;
                                        ;
                                        
# 2378 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2379 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2380 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2381 "<previous_module>"
                                        {

# 2382 "<previous_module>"
                                                {
                                                        
# 2383 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2384 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2385 "<previous_module>"
                                                        {
                                                                
# 2386 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2388 "<previous_module>"
;
                                                        
# 2389 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2390 "<previous_module>"
                                                        {
                                                                
# 2391 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2393 "<previous_module>"
;
                                                        
# 2394 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2395 "<previous_module>"
                                                        {
                                                                
# 2396 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2398 "<previous_module>"
;
                                                        
# 2399 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2400 "<previous_module>"
                                                        {
                                                                
# 2401 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2403 "<previous_module>"
;
                                                        
# 2404 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2405 "<previous_module>"
                                                        {
                                                                
# 2406 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2408 "<previous_module>"
;
                                                        
# 2409 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2410 "<previous_module>"
tpush_0_213: IF(1,213,tpush_0_214)__CSEQ_removeindent;
                                                        
# 2411 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 2412 "<previous_module>"
__exit_loop_22:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 214);

                                                        
# 2413 "<previous_module>"
;
                                                        ;
                                                        
# 2414 "<previous_module>"
__exit__exponential_backoff_1_16:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 214);

                                                        
# 2415 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2417 "<previous_module>"
;
                                        }

                                        
# 2419 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 214);
                                        ;
                                        
# 2420 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2421 "<previous_module>"
;
                                        ;
                                        
# 2422 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2423 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2424 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2425 "<previous_module>"
                                        {
                                                
# 2426 "<previous_module>"
goto __exit_loop_20;
                                                ;
                                        }

                                        
# 2428 "<previous_module>"
;
                                }
                                
# 2430 "<previous_module>"
;
                                
# 2431 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2432 "<previous_module>"
                                {
                                        
# 2433 "<previous_module>"
goto __exit_loop_20;
                                        ;
                                }

                                
# 2435 "<previous_module>"
;

# 2436 "<previous_module>"
                                {
                                        
# 2437 "<previous_module>"
tpush_0_214: IF(1,214,tpush_0_215)__CSEQ_removeindent;
                                        
# 2438 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2439 "<previous_module>"
tpush_0_215: IF(1,215,tpush_0_216)__CSEQ_removeindent;
                                        
# 2440 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2441 "<previous_module>"
tpush_0_216: IF(1,216,tpush_0_217)__CSEQ_removeindent;
                                        
# 2442 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2443 "<previous_module>"
tpush_0_217: IF(1,217,tpush_0_218)__CSEQ_removeindent;
                                        
# 2444 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2445 "<previous_module>"
tpush_0_218: IF(1,218,tpush_0_219)__CSEQ_removeindent;
                                        
# 2446 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2447 "<previous_module>"
tpush_0_219: IF(1,219,tpush_0_220)__CSEQ_removeindent;
                                        
# 2448 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2449 "<previous_module>"
tpush_0_220: IF(1,220,tpush_0_221)__CSEQ_removeindent;
                                        
# 2450 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2451 "<previous_module>"
;
                                        ;
                                        
# 2452 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2453 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2454 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2455 "<previous_module>"
                                        {

# 2456 "<previous_module>"
                                                {
                                                        
# 2457 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2458 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2459 "<previous_module>"
                                                        {
                                                                
# 2460 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2462 "<previous_module>"
;
                                                        
# 2463 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2464 "<previous_module>"
                                                        {
                                                                
# 2465 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2467 "<previous_module>"
;
                                                        
# 2468 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2469 "<previous_module>"
                                                        {
                                                                
# 2470 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2472 "<previous_module>"
;
                                                        
# 2473 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2474 "<previous_module>"
                                                        {
                                                                
# 2475 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2477 "<previous_module>"
;
                                                        
# 2478 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2479 "<previous_module>"
                                                        {
                                                                
# 2480 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2482 "<previous_module>"
;
                                                        
# 2483 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2484 "<previous_module>"
tpush_0_221: IF(1,221,tpush_0_222)__CSEQ_removeindent;
                                                        
# 2485 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 2486 "<previous_module>"
__exit_loop_23:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 222);

                                                        
# 2487 "<previous_module>"
;
                                                        ;
                                                        
# 2488 "<previous_module>"
__exit__exponential_backoff_1_17:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 222);

                                                        
# 2489 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2491 "<previous_module>"
;
                                        }

                                        
# 2493 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 222);
                                        ;
                                        
# 2494 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2495 "<previous_module>"
;
                                        ;
                                        
# 2496 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2497 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2498 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2499 "<previous_module>"
                                        {
                                                
# 2500 "<previous_module>"
goto __exit_loop_20;
                                                ;
                                        }

                                        
# 2502 "<previous_module>"
;
                                }
                                
# 2504 "<previous_module>"
;
                                
# 2505 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2506 "<previous_module>"
                                {
                                        
# 2507 "<previous_module>"
goto __exit_loop_20;
                                        ;
                                }

                                
# 2509 "<previous_module>"
;

# 2510 "<previous_module>"
                                {
                                        
# 2511 "<previous_module>"
tpush_0_222: IF(1,222,tpush_0_223)__CSEQ_removeindent;
                                        
# 2512 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2513 "<previous_module>"
tpush_0_223: IF(1,223,tpush_0_224)__CSEQ_removeindent;
                                        
# 2514 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2515 "<previous_module>"
tpush_0_224: IF(1,224,tpush_0_225)__CSEQ_removeindent;
                                        
# 2516 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2517 "<previous_module>"
tpush_0_225: IF(1,225,tpush_0_226)__CSEQ_removeindent;
                                        
# 2518 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2519 "<previous_module>"
tpush_0_226: IF(1,226,tpush_0_227)__CSEQ_removeindent;
                                        
# 2520 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2521 "<previous_module>"
tpush_0_227: IF(1,227,tpush_0_228)__CSEQ_removeindent;
                                        
# 2522 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2523 "<previous_module>"
tpush_0_228: IF(1,228,tpush_0_229)__CSEQ_removeindent;
                                        
# 2524 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2525 "<previous_module>"
;
                                        ;
                                        
# 2526 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2527 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2528 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2529 "<previous_module>"
                                        {

# 2530 "<previous_module>"
                                                {
                                                        
# 2531 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2532 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2533 "<previous_module>"
                                                        {
                                                                
# 2534 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2536 "<previous_module>"
;
                                                        
# 2537 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2538 "<previous_module>"
                                                        {
                                                                
# 2539 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2541 "<previous_module>"
;
                                                        
# 2542 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2543 "<previous_module>"
                                                        {
                                                                
# 2544 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2546 "<previous_module>"
;
                                                        
# 2547 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2548 "<previous_module>"
                                                        {
                                                                
# 2549 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2551 "<previous_module>"
;
                                                        
# 2552 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2553 "<previous_module>"
                                                        {
                                                                
# 2554 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2556 "<previous_module>"
;
                                                        
# 2557 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2558 "<previous_module>"
tpush_0_229: IF(1,229,tpush_0_230)__CSEQ_removeindent;
                                                        
# 2559 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 2560 "<previous_module>"
__exit_loop_24:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 230);

                                                        
# 2561 "<previous_module>"
;
                                                        ;
                                                        
# 2562 "<previous_module>"
__exit__exponential_backoff_1_18:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 230);

                                                        
# 2563 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2565 "<previous_module>"
;
                                        }

                                        
# 2567 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 230);
                                        ;
                                        
# 2568 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2569 "<previous_module>"
;
                                        ;
                                        
# 2570 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2571 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2572 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2573 "<previous_module>"
                                        {
                                                
# 2574 "<previous_module>"
goto __exit_loop_20;
                                                ;
                                        }

                                        
# 2576 "<previous_module>"
;
                                }
                                
# 2578 "<previous_module>"
;
                                
# 2579 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2580 "<previous_module>"
                                {
                                        
# 2581 "<previous_module>"
goto __exit_loop_20;
                                        ;
                                }

                                
# 2583 "<previous_module>"
;

# 2584 "<previous_module>"
                                {
                                        
# 2585 "<previous_module>"
tpush_0_230: IF(1,230,tpush_0_231)__CSEQ_removeindent;
                                        
# 2586 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2587 "<previous_module>"
tpush_0_231: IF(1,231,tpush_0_232)__CSEQ_removeindent;
                                        
# 2588 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2589 "<previous_module>"
tpush_0_232: IF(1,232,tpush_0_233)__CSEQ_removeindent;
                                        
# 2590 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2591 "<previous_module>"
tpush_0_233: IF(1,233,tpush_0_234)__CSEQ_removeindent;
                                        
# 2592 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2593 "<previous_module>"
tpush_0_234: IF(1,234,tpush_0_235)__CSEQ_removeindent;
                                        
# 2594 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2595 "<previous_module>"
tpush_0_235: IF(1,235,tpush_0_236)__CSEQ_removeindent;
                                        
# 2596 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2597 "<previous_module>"
tpush_0_236: IF(1,236,tpush_0_237)__CSEQ_removeindent;
                                        
# 2598 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2599 "<previous_module>"
;
                                        ;
                                        
# 2600 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2601 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2602 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2603 "<previous_module>"
                                        {

# 2604 "<previous_module>"
                                                {
                                                        
# 2605 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2606 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2607 "<previous_module>"
                                                        {
                                                                
# 2608 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2610 "<previous_module>"
;
                                                        
# 2611 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2612 "<previous_module>"
                                                        {
                                                                
# 2613 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2615 "<previous_module>"
;
                                                        
# 2616 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2617 "<previous_module>"
                                                        {
                                                                
# 2618 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2620 "<previous_module>"
;
                                                        
# 2621 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2622 "<previous_module>"
                                                        {
                                                                
# 2623 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2625 "<previous_module>"
;
                                                        
# 2626 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2627 "<previous_module>"
                                                        {
                                                                
# 2628 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2630 "<previous_module>"
;
                                                        
# 2631 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2632 "<previous_module>"
tpush_0_237: IF(1,237,tpush_0_238)__CSEQ_removeindent;
                                                        
# 2633 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 2634 "<previous_module>"
__exit_loop_25:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 238);

                                                        
# 2635 "<previous_module>"
;
                                                        ;
                                                        
# 2636 "<previous_module>"
__exit__exponential_backoff_1_19:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 238);

                                                        
# 2637 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2639 "<previous_module>"
;
                                        }

                                        
# 2641 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 238);
                                        ;
                                        
# 2642 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2643 "<previous_module>"
;
                                        ;
                                        
# 2644 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2645 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2646 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2647 "<previous_module>"
                                        {
                                                
# 2648 "<previous_module>"
goto __exit_loop_20;
                                                ;
                                        }

                                        
# 2650 "<previous_module>"
;
                                }
                                
# 2652 "<previous_module>"
;
                                
# 2653 "<previous_module>"
tpush_0_238: IF(1,238,tpush_0_239)__CSEQ_removeindent;
                                
# 2654 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                                
# 2655 "<previous_module>"
__exit_loop_20:
                                __CPROVER_assume(__cs_pc_cs[1] >= 239);

                                
# 2656 "<previous_module>"
;
                                ;
                                
# 2657 "<previous_module>"
goto __exit__lfds711_stack_push_1_3;
                                ;
                                
# 2658 "<previous_module>"
__exit__lfds711_stack_push_1_3:
                                __CPROVER_assume(__cs_pc_cs[1] >= 239);

                                
# 2659 "<previous_module>"
;
                                ;
                        }
                        
# 2661 "<previous_module>"
;
                        
# 2662 "<previous_module>"
__exit__insert_1_3:
                        __CPROVER_assume(__cs_pc_cs[1] >= 239);

                        
# 2663 "<previous_module>"
;
                        ;
                }
                
# 2665 "<previous_module>"
;
                
# 2666 "<previous_module>"
;
                ;
                
# 2667 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_24;
                
# 2668 "<previous_module>"
tpush_0_239: IF(1,239,tpush_0_240)__CSEQ_removeindent;
                
# 2669 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_24 = ATOMIC_OPERATION;
                
# 2670 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_24)

# 2671 "<previous_module>"
                {
                        
# 2672 "<previous_module>"
tpush_0_240: IF(1,240,tpush_0_241)__CSEQ_removeindent;
                        
# 2673 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                }

                
# 2675 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 241);
                ;
                
# 2676 "<previous_module>"
;
                ;
        }
        
# 2678 "<previous_module>"
;
        
# 2679 "<previous_module>"
__cs_local_push_loop++;

# 2680 "<previous_module>"
        {
                
# 2681 "<previous_module>"
;
                ;
                
# 2682 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_23;
                
# 2683 "<previous_module>"
tpush_0_241: IF(1,241,tpush_0_242)__CSEQ_removeindent;
                
# 2684 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_23 = ATOMIC_OPERATION;
                
# 2685 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_23)

# 2686 "<previous_module>"
                {
                        
# 2687 "<previous_module>"
tpush_0_242: IF(1,242,tpush_0_243)__CSEQ_removeindent;
                        
# 2688 "<previous_module>"
__cs_mutex_lock(&lock, 1);
                }

                
# 2690 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 243);
                ;
                
# 2691 "<previous_module>"
;
                ;

# 2692 "<previous_module>"
                {
                        
# 2693 "<previous_module>"
static struct lfds711_stack_state *__cs_param_insert_s;
                        
# 2694 "<previous_module>"
tpush_0_243: IF(1,243,tpush_0_244)__CSEQ_removeindent;
                        
# 2695 "<previous_module>"
__cs_param_insert_s = ss;
                        
# 2696 "<previous_module>"
static int long long unsigned __cs_param_insert_id;
                        
# 2697 "<previous_module>"
__cs_param_insert_id = __cs_local_push_loop;
                        
# 2698 "<previous_module>"
static struct test_data *__cs_local_insert_td;
                        
# 2699 "<previous_module>"
tpush_0_244: IF(1,244,tpush_0_245)__CSEQ_removeindent;
                        
# 2700 "<previous_module>"
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
                        
# 2701 "<previous_module>"
tpush_0_245: IF(1,245,tpush_0_246)__CSEQ_removeindent;
                        
# 2702 "<previous_module>"
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
                        
# 2703 "<previous_module>"
tpush_0_246: IF(1,246,tpush_0_247)__CSEQ_removeindent;
                        
# 2704 "<previous_module>"
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);

# 2705 "<previous_module>"
                        {
                                
# 2706 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                                
# 2707 "<previous_module>"
tpush_0_247: IF(1,247,tpush_0_248)__CSEQ_removeindent;
                                
# 2708 "<previous_module>"
__cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
                                
# 2709 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                                
# 2710 "<previous_module>"
tpush_0_248: IF(1,248,tpush_0_249)__CSEQ_removeindent;
                                
# 2711 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
                                
# 2712 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                                
# 2713 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                                
# 2714 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                                
# 2715 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                                
# 2716 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                                
# 2717 "<previous_module>"
;
                                ;
                                
# 2718 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                                
# 2719 "<previous_module>"
tpush_0_249: IF(1,249,tpush_0_250)__CSEQ_removeindent;
                                
# 2720 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                                
# 2721 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 2722 "<previous_module>"
                                {
                                        
# 2723 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 2724 "<previous_module>"
tpush_0_250: IF(1,250,tpush_0_251)__CSEQ_removeindent;
                                        
# 2725 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 2726 "<previous_module>"
tpush_0_251: IF(1,251,tpush_0_252)__CSEQ_removeindent;
                                        
# 2727 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 2729 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 252);
                                ;
                                
# 2730 "<previous_module>"
;
                                ;
                                
# 2731 "<previous_module>"
;
                                ;
                                
# 2732 "<previous_module>"
;
                                ;
                                
# 2733 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                                
# 2734 "<previous_module>"
tpush_0_252: IF(1,252,tpush_0_253)__CSEQ_removeindent;
                                
# 2735 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                                
# 2736 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 2737 "<previous_module>"
                                {
                                        
# 2738 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 2739 "<previous_module>"
tpush_0_253: IF(1,253,tpush_0_254)__CSEQ_removeindent;
                                        
# 2740 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 2741 "<previous_module>"
tpush_0_254: IF(1,254,tpush_0_255)__CSEQ_removeindent;
                                        
# 2742 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 2744 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 255);
                                ;
                                
# 2745 "<previous_module>"
;
                                ;
                                
# 2746 "<previous_module>"
;
                                ;
                                
# 2747 "<previous_module>"
tpush_0_255: IF(1,255,tpush_0_256)__CSEQ_removeindent;
                                
# 2748 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                                
# 2749 "<previous_module>"
tpush_0_256: IF(1,256,tpush_0_257)__CSEQ_removeindent;
                                
# 2750 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                                
# 2751 "<previous_module>"
tpush_0_257: IF(1,257,tpush_0_258)__CSEQ_removeindent;
                                
# 2752 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                                
# 2753 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                                
# 2754 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                                
# 2755 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                                
# 2756 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2757 "<previous_module>"
                                {
                                        
# 2758 "<previous_module>"
goto __exit_loop_26;
                                        ;
                                }

                                
# 2760 "<previous_module>"
;

# 2761 "<previous_module>"
                                {
                                        
# 2762 "<previous_module>"
tpush_0_258: IF(1,258,tpush_0_259)__CSEQ_removeindent;
                                        
# 2763 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2764 "<previous_module>"
tpush_0_259: IF(1,259,tpush_0_260)__CSEQ_removeindent;
                                        
# 2765 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2766 "<previous_module>"
tpush_0_260: IF(1,260,tpush_0_261)__CSEQ_removeindent;
                                        
# 2767 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2768 "<previous_module>"
tpush_0_261: IF(1,261,tpush_0_262)__CSEQ_removeindent;
                                        
# 2769 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2770 "<previous_module>"
tpush_0_262: IF(1,262,tpush_0_263)__CSEQ_removeindent;
                                        
# 2771 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2772 "<previous_module>"
tpush_0_263: IF(1,263,tpush_0_264)__CSEQ_removeindent;
                                        
# 2773 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2774 "<previous_module>"
tpush_0_264: IF(1,264,tpush_0_265)__CSEQ_removeindent;
                                        
# 2775 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2776 "<previous_module>"
;
                                        ;
                                        
# 2777 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2778 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2779 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2780 "<previous_module>"
                                        {

# 2781 "<previous_module>"
                                                {
                                                        
# 2782 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2783 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2784 "<previous_module>"
                                                        {
                                                                
# 2785 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2787 "<previous_module>"
;
                                                        
# 2788 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2789 "<previous_module>"
                                                        {
                                                                
# 2790 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2792 "<previous_module>"
;
                                                        
# 2793 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2794 "<previous_module>"
                                                        {
                                                                
# 2795 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2797 "<previous_module>"
;
                                                        
# 2798 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2799 "<previous_module>"
                                                        {
                                                                
# 2800 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2802 "<previous_module>"
;
                                                        
# 2803 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2804 "<previous_module>"
                                                        {
                                                                
# 2805 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2807 "<previous_module>"
;
                                                        
# 2808 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2809 "<previous_module>"
tpush_0_265: IF(1,265,tpush_0_266)__CSEQ_removeindent;
                                                        
# 2810 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 2811 "<previous_module>"
__exit_loop_27:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 266);

                                                        
# 2812 "<previous_module>"
;
                                                        ;
                                                        
# 2813 "<previous_module>"
__exit__exponential_backoff_1_20:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 266);

                                                        
# 2814 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2816 "<previous_module>"
;
                                        }

                                        
# 2818 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 266);
                                        ;
                                        
# 2819 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2820 "<previous_module>"
;
                                        ;
                                        
# 2821 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2822 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2823 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2824 "<previous_module>"
                                        {
                                                
# 2825 "<previous_module>"
goto __exit_loop_26;
                                                ;
                                        }

                                        
# 2827 "<previous_module>"
;
                                }
                                
# 2829 "<previous_module>"
;
                                
# 2830 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2831 "<previous_module>"
                                {
                                        
# 2832 "<previous_module>"
goto __exit_loop_26;
                                        ;
                                }

                                
# 2834 "<previous_module>"
;

# 2835 "<previous_module>"
                                {
                                        
# 2836 "<previous_module>"
tpush_0_266: IF(1,266,tpush_0_267)__CSEQ_removeindent;
                                        
# 2837 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2838 "<previous_module>"
tpush_0_267: IF(1,267,tpush_0_268)__CSEQ_removeindent;
                                        
# 2839 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2840 "<previous_module>"
tpush_0_268: IF(1,268,tpush_0_269)__CSEQ_removeindent;
                                        
# 2841 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2842 "<previous_module>"
tpush_0_269: IF(1,269,tpush_0_270)__CSEQ_removeindent;
                                        
# 2843 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2844 "<previous_module>"
tpush_0_270: IF(1,270,tpush_0_271)__CSEQ_removeindent;
                                        
# 2845 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2846 "<previous_module>"
tpush_0_271: IF(1,271,tpush_0_272)__CSEQ_removeindent;
                                        
# 2847 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2848 "<previous_module>"
tpush_0_272: IF(1,272,tpush_0_273)__CSEQ_removeindent;
                                        
# 2849 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2850 "<previous_module>"
;
                                        ;
                                        
# 2851 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2852 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2853 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2854 "<previous_module>"
                                        {

# 2855 "<previous_module>"
                                                {
                                                        
# 2856 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2857 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2858 "<previous_module>"
                                                        {
                                                                
# 2859 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2861 "<previous_module>"
;
                                                        
# 2862 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2863 "<previous_module>"
                                                        {
                                                                
# 2864 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2866 "<previous_module>"
;
                                                        
# 2867 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2868 "<previous_module>"
                                                        {
                                                                
# 2869 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2871 "<previous_module>"
;
                                                        
# 2872 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2873 "<previous_module>"
                                                        {
                                                                
# 2874 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2876 "<previous_module>"
;
                                                        
# 2877 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2878 "<previous_module>"
                                                        {
                                                                
# 2879 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2881 "<previous_module>"
;
                                                        
# 2882 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2883 "<previous_module>"
tpush_0_273: IF(1,273,tpush_0_274)__CSEQ_removeindent;
                                                        
# 2884 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 2885 "<previous_module>"
__exit_loop_28:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 274);

                                                        
# 2886 "<previous_module>"
;
                                                        ;
                                                        
# 2887 "<previous_module>"
__exit__exponential_backoff_1_21:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 274);

                                                        
# 2888 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2890 "<previous_module>"
;
                                        }

                                        
# 2892 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 274);
                                        ;
                                        
# 2893 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2894 "<previous_module>"
;
                                        ;
                                        
# 2895 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2896 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2897 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2898 "<previous_module>"
                                        {
                                                
# 2899 "<previous_module>"
goto __exit_loop_26;
                                                ;
                                        }

                                        
# 2901 "<previous_module>"
;
                                }
                                
# 2903 "<previous_module>"
;
                                
# 2904 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2905 "<previous_module>"
                                {
                                        
# 2906 "<previous_module>"
goto __exit_loop_26;
                                        ;
                                }

                                
# 2908 "<previous_module>"
;

# 2909 "<previous_module>"
                                {
                                        
# 2910 "<previous_module>"
tpush_0_274: IF(1,274,tpush_0_275)__CSEQ_removeindent;
                                        
# 2911 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2912 "<previous_module>"
tpush_0_275: IF(1,275,tpush_0_276)__CSEQ_removeindent;
                                        
# 2913 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2914 "<previous_module>"
tpush_0_276: IF(1,276,tpush_0_277)__CSEQ_removeindent;
                                        
# 2915 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2916 "<previous_module>"
tpush_0_277: IF(1,277,tpush_0_278)__CSEQ_removeindent;
                                        
# 2917 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2918 "<previous_module>"
tpush_0_278: IF(1,278,tpush_0_279)__CSEQ_removeindent;
                                        
# 2919 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2920 "<previous_module>"
tpush_0_279: IF(1,279,tpush_0_280)__CSEQ_removeindent;
                                        
# 2921 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2922 "<previous_module>"
tpush_0_280: IF(1,280,tpush_0_281)__CSEQ_removeindent;
                                        
# 2923 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2924 "<previous_module>"
;
                                        ;
                                        
# 2925 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2926 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2927 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2928 "<previous_module>"
                                        {

# 2929 "<previous_module>"
                                                {
                                                        
# 2930 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2931 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2932 "<previous_module>"
                                                        {
                                                                
# 2933 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2935 "<previous_module>"
;
                                                        
# 2936 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2937 "<previous_module>"
                                                        {
                                                                
# 2938 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2940 "<previous_module>"
;
                                                        
# 2941 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2942 "<previous_module>"
                                                        {
                                                                
# 2943 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2945 "<previous_module>"
;
                                                        
# 2946 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2947 "<previous_module>"
                                                        {
                                                                
# 2948 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2950 "<previous_module>"
;
                                                        
# 2951 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2952 "<previous_module>"
                                                        {
                                                                
# 2953 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2955 "<previous_module>"
;
                                                        
# 2956 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2957 "<previous_module>"
tpush_0_281: IF(1,281,tpush_0_282)__CSEQ_removeindent;
                                                        
# 2958 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 2959 "<previous_module>"
__exit_loop_29:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 282);

                                                        
# 2960 "<previous_module>"
;
                                                        ;
                                                        
# 2961 "<previous_module>"
__exit__exponential_backoff_1_22:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 282);

                                                        
# 2962 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2964 "<previous_module>"
;
                                        }

                                        
# 2966 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 282);
                                        ;
                                        
# 2967 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2968 "<previous_module>"
;
                                        ;
                                        
# 2969 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2970 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2971 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2972 "<previous_module>"
                                        {
                                                
# 2973 "<previous_module>"
goto __exit_loop_26;
                                                ;
                                        }

                                        
# 2975 "<previous_module>"
;
                                }
                                
# 2977 "<previous_module>"
;
                                
# 2978 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2979 "<previous_module>"
                                {
                                        
# 2980 "<previous_module>"
goto __exit_loop_26;
                                        ;
                                }

                                
# 2982 "<previous_module>"
;

# 2983 "<previous_module>"
                                {
                                        
# 2984 "<previous_module>"
tpush_0_282: IF(1,282,tpush_0_283)__CSEQ_removeindent;
                                        
# 2985 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2986 "<previous_module>"
tpush_0_283: IF(1,283,tpush_0_284)__CSEQ_removeindent;
                                        
# 2987 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2988 "<previous_module>"
tpush_0_284: IF(1,284,tpush_0_285)__CSEQ_removeindent;
                                        
# 2989 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2990 "<previous_module>"
tpush_0_285: IF(1,285,tpush_0_286)__CSEQ_removeindent;
                                        
# 2991 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2992 "<previous_module>"
tpush_0_286: IF(1,286,tpush_0_287)__CSEQ_removeindent;
                                        
# 2993 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 2994 "<previous_module>"
tpush_0_287: IF(1,287,tpush_0_288)__CSEQ_removeindent;
                                        
# 2995 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2996 "<previous_module>"
tpush_0_288: IF(1,288,tpush_0_289)__CSEQ_removeindent;
                                        
# 2997 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 2998 "<previous_module>"
;
                                        ;
                                        
# 2999 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 3000 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 3001 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 3002 "<previous_module>"
                                        {

# 3003 "<previous_module>"
                                                {
                                                        
# 3004 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3005 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3006 "<previous_module>"
                                                        {
                                                                
# 3007 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3009 "<previous_module>"
;
                                                        
# 3010 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3011 "<previous_module>"
                                                        {
                                                                
# 3012 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3014 "<previous_module>"
;
                                                        
# 3015 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3016 "<previous_module>"
                                                        {
                                                                
# 3017 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3019 "<previous_module>"
;
                                                        
# 3020 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3021 "<previous_module>"
                                                        {
                                                                
# 3022 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3024 "<previous_module>"
;
                                                        
# 3025 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3026 "<previous_module>"
                                                        {
                                                                
# 3027 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3029 "<previous_module>"
;
                                                        
# 3030 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3031 "<previous_module>"
tpush_0_289: IF(1,289,tpush_0_290)__CSEQ_removeindent;
                                                        
# 3032 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 3033 "<previous_module>"
__exit_loop_30:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 290);

                                                        
# 3034 "<previous_module>"
;
                                                        ;
                                                        
# 3035 "<previous_module>"
__exit__exponential_backoff_1_23:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 290);

                                                        
# 3036 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3038 "<previous_module>"
;
                                        }

                                        
# 3040 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 290);
                                        ;
                                        
# 3041 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 3042 "<previous_module>"
;
                                        ;
                                        
# 3043 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 3044 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 3045 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 3046 "<previous_module>"
                                        {
                                                
# 3047 "<previous_module>"
goto __exit_loop_26;
                                                ;
                                        }

                                        
# 3049 "<previous_module>"
;
                                }
                                
# 3051 "<previous_module>"
;
                                
# 3052 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 3053 "<previous_module>"
                                {
                                        
# 3054 "<previous_module>"
goto __exit_loop_26;
                                        ;
                                }

                                
# 3056 "<previous_module>"
;

# 3057 "<previous_module>"
                                {
                                        
# 3058 "<previous_module>"
tpush_0_290: IF(1,290,tpush_0_291)__CSEQ_removeindent;
                                        
# 3059 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 3060 "<previous_module>"
tpush_0_291: IF(1,291,tpush_0_292)__CSEQ_removeindent;
                                        
# 3061 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 3062 "<previous_module>"
tpush_0_292: IF(1,292,tpush_0_293)__CSEQ_removeindent;
                                        
# 3063 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 3064 "<previous_module>"
tpush_0_293: IF(1,293,tpush_0_294)__CSEQ_removeindent;
                                        
# 3065 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 3066 "<previous_module>"
tpush_0_294: IF(1,294,tpush_0_295)__CSEQ_removeindent;
                                        
# 3067 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                        
# 3068 "<previous_module>"
tpush_0_295: IF(1,295,tpush_0_296)__CSEQ_removeindent;
                                        
# 3069 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 3070 "<previous_module>"
tpush_0_296: IF(1,296,tpush_0_297)__CSEQ_removeindent;
                                        
# 3071 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                        
# 3072 "<previous_module>"
;
                                        ;
                                        
# 3073 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 3074 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 3075 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 3076 "<previous_module>"
                                        {

# 3077 "<previous_module>"
                                                {
                                                        
# 3078 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3079 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3080 "<previous_module>"
                                                        {
                                                                
# 3081 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3083 "<previous_module>"
;
                                                        
# 3084 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3085 "<previous_module>"
                                                        {
                                                                
# 3086 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3088 "<previous_module>"
;
                                                        
# 3089 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3090 "<previous_module>"
                                                        {
                                                                
# 3091 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3093 "<previous_module>"
;
                                                        
# 3094 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3095 "<previous_module>"
                                                        {
                                                                
# 3096 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3098 "<previous_module>"
;
                                                        
# 3099 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3100 "<previous_module>"
                                                        {
                                                                
# 3101 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3103 "<previous_module>"
;
                                                        
# 3104 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3105 "<previous_module>"
tpush_0_297: IF(1,297,tpush_0_298)__CSEQ_removeindent;
                                                        
# 3106 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 3107 "<previous_module>"
__exit_loop_31:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 298);

                                                        
# 3108 "<previous_module>"
;
                                                        ;
                                                        
# 3109 "<previous_module>"
__exit__exponential_backoff_1_24:
                                                        __CPROVER_assume(__cs_pc_cs[1] >= 298);

                                                        
# 3110 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3112 "<previous_module>"
;
                                        }

                                        
# 3114 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 298);
                                        ;
                                        
# 3115 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 3116 "<previous_module>"
;
                                        ;
                                        
# 3117 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 3118 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 3119 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 3120 "<previous_module>"
                                        {
                                                
# 3121 "<previous_module>"
goto __exit_loop_26;
                                                ;
                                        }

                                        
# 3123 "<previous_module>"
;
                                }
                                
# 3125 "<previous_module>"
;
                                
# 3126 "<previous_module>"
tpush_0_298: IF(1,298,tpush_0_299)__CSEQ_removeindent;
                                
# 3127 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                                
# 3128 "<previous_module>"
__exit_loop_26:
                                __CPROVER_assume(__cs_pc_cs[1] >= 299);

                                
# 3129 "<previous_module>"
;
                                ;
                                
# 3130 "<previous_module>"
goto __exit__lfds711_stack_push_1_4;
                                ;
                                
# 3131 "<previous_module>"
__exit__lfds711_stack_push_1_4:
                                __CPROVER_assume(__cs_pc_cs[1] >= 299);

                                
# 3132 "<previous_module>"
;
                                ;
                        }
                        
# 3134 "<previous_module>"
;
                        
# 3135 "<previous_module>"
__exit__insert_1_4:
                        __CPROVER_assume(__cs_pc_cs[1] >= 299);

                        
# 3136 "<previous_module>"
;
                        ;
                }
                
# 3138 "<previous_module>"
;
                
# 3139 "<previous_module>"
;
                ;
                
# 3140 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_24;
                
# 3141 "<previous_module>"
tpush_0_299: IF(1,299,tpush_0_300)__CSEQ_removeindent;
                
# 3142 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_24 = ATOMIC_OPERATION;
                
# 3143 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_24)

# 3144 "<previous_module>"
                {
                        
# 3145 "<previous_module>"
tpush_0_300: IF(1,300,tpush_0_301)__CSEQ_removeindent;
                        
# 3146 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
                }

                
# 3148 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 301);
                ;
                
# 3149 "<previous_module>"
;
                ;
        }
        
# 3151 "<previous_module>"
;
        
# 3152 "<previous_module>"
__cs_local_push_loop++;
        
# 3153 "<previous_module>"
tpush_0_301: IF(1,301,tpush_0_302)__CSEQ_removeindent;
        
# 3154 "<previous_module>"
__CPROVER_assume(!(__cs_local_push_loop < 5));
        
# 3155 "<previous_module>"
__exit_loop_1:
        __CPROVER_assume(__cs_pc_cs[1] >= 302);

        
# 3156 "<previous_module>"
;
        ;
        
# 3157 "<previous_module>"
__exit_push:
        __CPROVER_assume(__cs_pc_cs[1] >= 302);

        
# 3158 "<previous_module>"
;
        ;
        
# 3159 "<previous_module>"
tpush_0_302: __CSEQ_removeindent;
        
# 3160 "<previous_module>"
__cs_exit(0, 1);
}


# 3162 "<previous_module>"
void *pop_0(void *__cs_param_pop___cs_unused)

# 3163 "<previous_module>"
{
        
# 3164 "<previous_module>"
static int __cs_local_pop_res;
        
# 3165 "<previous_module>"
IF(2,0,tpop_0_1)__CSEQ_removeindent;
        
# 3166 "<previous_module>"
__cs_local_pop_res = nondet_int();
        
# 3167 "<previous_module>"
static int __cs_local_pop_count;
        
# 3168 "<previous_module>"
__cs_local_pop_count = 0;
        
# 3169 "<previous_module>"
static int __cs_local_pop_loop;
        
# 3170 "<previous_module>"
__cs_local_pop_loop = 0;

# 3171 "<previous_module>"
        {
                
# 3172 "<previous_module>"
;
                ;
                
# 3173 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_25;
                
# 3174 "<previous_module>"
tpop_0_1: IF(2,1,tpop_0_2)__CSEQ_removeindent;
                
# 3175 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
                
# 3176 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_25)

# 3177 "<previous_module>"
                {
                        
# 3178 "<previous_module>"
tpop_0_2: IF(2,2,tpop_0_3)__CSEQ_removeindent;
                        
# 3179 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                }

                
# 3181 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 3);
                ;
                
# 3182 "<previous_module>"
;
                ;
                
# 3183 "<previous_module>"
static int __cs_retval__delete_1;

# 3184 "<previous_module>"
                {
                        
# 3185 "<previous_module>"
static struct lfds711_stack_state *__cs_param_delete_s;
                        
# 3186 "<previous_module>"
tpop_0_3: IF(2,3,tpop_0_4)__CSEQ_removeindent;
                        
# 3187 "<previous_module>"
__cs_param_delete_s = ss;
                        
# 3188 "<previous_module>"
static struct lfds711_stack_element *__cs_local_delete_se;
                        
# 3189 "<previous_module>"
static struct test_data *__cs_local_delete_temp_td;
                        
# 3190 "<previous_module>"
static int __cs_local_delete_res;
                        
# 3191 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_1;

# 3192 "<previous_module>"
                        {
                                
# 3193 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                
# 3194 "<previous_module>"
tpop_0_4: IF(2,4,tpop_0_5)__CSEQ_removeindent;
                                
# 3195 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = &mystack;
                                
# 3196 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                
# 3197 "<previous_module>"
tpop_0_5: IF(2,5,tpop_0_6)__CSEQ_removeindent;
                                
# 3198 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_delete_se;
                                
# 3199 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                
# 3200 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                
# 3201 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                
# 3202 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                
# 3203 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                
# 3204 "<previous_module>"
;
                                ;
                                
# 3205 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                
# 3206 "<previous_module>"
tpop_0_6: IF(2,6,tpop_0_7)__CSEQ_removeindent;
                                
# 3207 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                
# 3208 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 3209 "<previous_module>"
                                {
                                        
# 3210 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 3211 "<previous_module>"
tpop_0_7: IF(2,7,tpop_0_8)__CSEQ_removeindent;
                                        
# 3212 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 3213 "<previous_module>"
tpop_0_8: IF(2,8,tpop_0_9)__CSEQ_removeindent;
                                        
# 3214 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 3216 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 9);
                                ;
                                
# 3217 "<previous_module>"
;
                                ;
                                
# 3218 "<previous_module>"
;
                                ;
                                
# 3219 "<previous_module>"
;
                                ;
                                
# 3220 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                
# 3221 "<previous_module>"
tpop_0_9: IF(2,9,tpop_0_10)__CSEQ_removeindent;
                                
# 3222 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                
# 3223 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 3224 "<previous_module>"
                                {
                                        
# 3225 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 3226 "<previous_module>"
tpop_0_10: IF(2,10,tpop_0_11)__CSEQ_removeindent;
                                        
# 3227 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 3228 "<previous_module>"
tpop_0_11: IF(2,11,tpop_0_12)__CSEQ_removeindent;
                                        
# 3229 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 3231 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 12);
                                ;
                                
# 3232 "<previous_module>"
;
                                ;
                                
# 3233 "<previous_module>"
;
                                ;
                                
# 3234 "<previous_module>"
tpop_0_12: IF(2,12,tpop_0_13)__CSEQ_removeindent;
                                
# 3235 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 3236 "<previous_module>"
tpop_0_13: IF(2,13,tpop_0_14)__CSEQ_removeindent;
                                
# 3237 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 3238 "<previous_module>"
tpop_0_14: IF(2,14,tpop_0_15)__CSEQ_removeindent;
                                
# 3239 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                
# 3240 "<previous_module>"
tpop_0_15: IF(2,15,tpop_0_16)__CSEQ_removeindent;
                                
# 3241 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                
# 3242 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                
# 3243 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                
# 3244 "<previous_module>"
;
                                ;
                                
# 3245 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                
# 3246 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 3247 "<previous_module>"
                                {
                                        
# 3248 "<previous_module>"
;
                                        ;
                                        
# 3249 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                        
# 3250 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3251 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 3252 "<previous_module>"
                                        {
                                                
# 3253 "<previous_module>"
tpop_0_16: IF(2,16,tpop_0_17)__CSEQ_removeindent;
                                                
# 3254 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3255 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 3256 "<previous_module>"
goto __exit__lfds711_stack_pop_1_0;
                                                ;
                                        }

                                        
# 3258 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 17);
                                        ;
                                        
# 3259 "<previous_module>"
tpop_0_17: IF(2,17,tpop_0_18)__CSEQ_removeindent;
                                        
# 3260 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3261 "<previous_module>"
tpop_0_18: IF(2,18,tpop_0_19)__CSEQ_removeindent;
                                        
# 3262 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3263 "<previous_module>"
tpop_0_19: IF(2,19,tpop_0_20)__CSEQ_removeindent;
                                        
# 3264 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 3265 "<previous_module>"
tpop_0_20: IF(2,20,tpop_0_21)__CSEQ_removeindent;
                                        
# 3266 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3267 "<previous_module>"
tpop_0_21: IF(2,21,tpop_0_22)__CSEQ_removeindent;
                                        
# 3268 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 3269 "<previous_module>"
;
                                        ;
                                        
# 3270 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                        
# 3271 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3272 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 3273 "<previous_module>"
                                        {

# 3274 "<previous_module>"
                                                {
                                                        
# 3275 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3276 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3277 "<previous_module>"
                                                        {
                                                                
# 3278 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3280 "<previous_module>"
;
                                                        
# 3281 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3282 "<previous_module>"
                                                        {
                                                                
# 3283 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3285 "<previous_module>"
;
                                                        
# 3286 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3287 "<previous_module>"
                                                        {
                                                                
# 3288 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3290 "<previous_module>"
;
                                                        
# 3291 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3292 "<previous_module>"
                                                        {
                                                                
# 3293 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3295 "<previous_module>"
;
                                                        
# 3296 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3297 "<previous_module>"
                                                        {
                                                                
# 3298 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3300 "<previous_module>"
;
                                                        
# 3301 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3302 "<previous_module>"
tpop_0_22: IF(2,22,tpop_0_23)__CSEQ_removeindent;
                                                        
# 3303 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 3304 "<previous_module>"
__exit_loop_34:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 23);

                                                        
# 3305 "<previous_module>"
;
                                                        ;
                                                        
# 3306 "<previous_module>"
__exit__exponential_backoff_2_0:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 23);

                                                        
# 3307 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3309 "<previous_module>"
;
                                                
# 3310 "<previous_module>"
tpop_0_23: IF(2,23,tpop_0_24)__CSEQ_removeindent;
                                                
# 3311 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 3312 "<previous_module>"
tpop_0_24: IF(2,24,tpop_0_25)__CSEQ_removeindent;
                                                
# 3313 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 3315 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 25);
                                        ;
                                        
# 3316 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3317 "<previous_module>"
;
                                        ;
                                        
# 3318 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                        
# 3319 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3320 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 3321 "<previous_module>"
                                        {
                                                
# 3322 "<previous_module>"
goto __exit_loop_33;
                                                ;
                                        }

                                        
# 3324 "<previous_module>"
;
                                }
                                
# 3326 "<previous_module>"
;
                                
# 3327 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                
# 3328 "<previous_module>"
tpop_0_25: IF(2,25,tpop_0_26)__CSEQ_removeindent;
                                
# 3329 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                
# 3330 "<previous_module>"
__exit_loop_33:
                                __CPROVER_assume(__cs_pc_cs[2] >= 26);

                                
# 3331 "<previous_module>"
;
                                ;
                                
# 3332 "<previous_module>"
if (
# 3333 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3334 "<previous_module>"
                                {
                                        
# 3335 "<previous_module>"
goto __exit_loop_35;
                                        ;
                                }

                                
# 3337 "<previous_module>"
;

# 3338 "<previous_module>"
                                {
                                        
# 3339 "<previous_module>"
;
                                        ;
                                        
# 3340 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3341 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3342 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3343 "<previous_module>"
                                        {
                                                
# 3344 "<previous_module>"
tpop_0_26: IF(2,26,tpop_0_27)__CSEQ_removeindent;
                                                
# 3345 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3346 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 3347 "<previous_module>"
goto __exit__lfds711_stack_pop_1_0;
                                                ;
                                        }

                                        
# 3349 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 27);
                                        ;
                                        
# 3350 "<previous_module>"
tpop_0_27: IF(2,27,tpop_0_28)__CSEQ_removeindent;
                                        
# 3351 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3352 "<previous_module>"
tpop_0_28: IF(2,28,tpop_0_29)__CSEQ_removeindent;
                                        
# 3353 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3354 "<previous_module>"
tpop_0_29: IF(2,29,tpop_0_30)__CSEQ_removeindent;
                                        
# 3355 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 3356 "<previous_module>"
tpop_0_30: IF(2,30,tpop_0_31)__CSEQ_removeindent;
                                        
# 3357 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3358 "<previous_module>"
tpop_0_31: IF(2,31,tpop_0_32)__CSEQ_removeindent;
                                        
# 3359 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 3360 "<previous_module>"
;
                                        ;
                                        
# 3361 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3362 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3363 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3364 "<previous_module>"
                                        {

# 3365 "<previous_module>"
                                                {
                                                        
# 3366 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3367 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3368 "<previous_module>"
                                                        {
                                                                
# 3369 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3371 "<previous_module>"
;
                                                        
# 3372 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3373 "<previous_module>"
                                                        {
                                                                
# 3374 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3376 "<previous_module>"
;
                                                        
# 3377 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3378 "<previous_module>"
                                                        {
                                                                
# 3379 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3381 "<previous_module>"
;
                                                        
# 3382 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3383 "<previous_module>"
                                                        {
                                                                
# 3384 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3386 "<previous_module>"
;
                                                        
# 3387 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3388 "<previous_module>"
                                                        {
                                                                
# 3389 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3391 "<previous_module>"
;
                                                        
# 3392 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3393 "<previous_module>"
tpop_0_32: IF(2,32,tpop_0_33)__CSEQ_removeindent;
                                                        
# 3394 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 3395 "<previous_module>"
__exit_loop_36:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 33);

                                                        
# 3396 "<previous_module>"
;
                                                        ;
                                                        
# 3397 "<previous_module>"
__exit__exponential_backoff_3_0:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 33);

                                                        
# 3398 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3400 "<previous_module>"
;
                                                
# 3401 "<previous_module>"
tpop_0_33: IF(2,33,tpop_0_34)__CSEQ_removeindent;
                                                
# 3402 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 3403 "<previous_module>"
tpop_0_34: IF(2,34,tpop_0_35)__CSEQ_removeindent;
                                                
# 3404 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 3406 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 35);
                                        ;
                                        
# 3407 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3408 "<previous_module>"
;
                                        ;
                                        
# 3409 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 3410 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3411 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3412 "<previous_module>"
                                        {
                                                
# 3413 "<previous_module>"
goto __exit_loop_35;
                                                ;
                                        }

                                        
# 3415 "<previous_module>"
;
                                }
                                
# 3417 "<previous_module>"
;
                                
# 3418 "<previous_module>"
if (
# 3419 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3420 "<previous_module>"
                                {
                                        
# 3421 "<previous_module>"
goto __exit_loop_35;
                                        ;
                                }

                                
# 3423 "<previous_module>"
;

# 3424 "<previous_module>"
                                {
                                        
# 3425 "<previous_module>"
;
                                        ;
                                        
# 3426 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3427 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3428 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3429 "<previous_module>"
                                        {
                                                
# 3430 "<previous_module>"
tpop_0_35: IF(2,35,tpop_0_36)__CSEQ_removeindent;
                                                
# 3431 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3432 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 3433 "<previous_module>"
goto __exit__lfds711_stack_pop_1_0;
                                                ;
                                        }

                                        
# 3435 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 36);
                                        ;
                                        
# 3436 "<previous_module>"
tpop_0_36: IF(2,36,tpop_0_37)__CSEQ_removeindent;
                                        
# 3437 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3438 "<previous_module>"
tpop_0_37: IF(2,37,tpop_0_38)__CSEQ_removeindent;
                                        
# 3439 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3440 "<previous_module>"
tpop_0_38: IF(2,38,tpop_0_39)__CSEQ_removeindent;
                                        
# 3441 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 3442 "<previous_module>"
tpop_0_39: IF(2,39,tpop_0_40)__CSEQ_removeindent;
                                        
# 3443 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3444 "<previous_module>"
tpop_0_40: IF(2,40,tpop_0_41)__CSEQ_removeindent;
                                        
# 3445 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 3446 "<previous_module>"
;
                                        ;
                                        
# 3447 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3448 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3449 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3450 "<previous_module>"
                                        {

# 3451 "<previous_module>"
                                                {
                                                        
# 3452 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3453 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3454 "<previous_module>"
                                                        {
                                                                
# 3455 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3457 "<previous_module>"
;
                                                        
# 3458 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3459 "<previous_module>"
                                                        {
                                                                
# 3460 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3462 "<previous_module>"
;
                                                        
# 3463 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3464 "<previous_module>"
                                                        {
                                                                
# 3465 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3467 "<previous_module>"
;
                                                        
# 3468 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3469 "<previous_module>"
                                                        {
                                                                
# 3470 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3472 "<previous_module>"
;
                                                        
# 3473 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3474 "<previous_module>"
                                                        {
                                                                
# 3475 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3477 "<previous_module>"
;
                                                        
# 3478 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3479 "<previous_module>"
tpop_0_41: IF(2,41,tpop_0_42)__CSEQ_removeindent;
                                                        
# 3480 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 3481 "<previous_module>"
__exit_loop_37:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 42);

                                                        
# 3482 "<previous_module>"
;
                                                        ;
                                                        
# 3483 "<previous_module>"
__exit__exponential_backoff_3_1:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 42);

                                                        
# 3484 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3486 "<previous_module>"
;
                                                
# 3487 "<previous_module>"
tpop_0_42: IF(2,42,tpop_0_43)__CSEQ_removeindent;
                                                
# 3488 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 3489 "<previous_module>"
tpop_0_43: IF(2,43,tpop_0_44)__CSEQ_removeindent;
                                                
# 3490 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 3492 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 44);
                                        ;
                                        
# 3493 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3494 "<previous_module>"
;
                                        ;
                                        
# 3495 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 3496 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3497 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3498 "<previous_module>"
                                        {
                                                
# 3499 "<previous_module>"
goto __exit_loop_35;
                                                ;
                                        }

                                        
# 3501 "<previous_module>"
;
                                }
                                
# 3503 "<previous_module>"
;
                                
# 3504 "<previous_module>"
if (
# 3505 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3506 "<previous_module>"
                                {
                                        
# 3507 "<previous_module>"
goto __exit_loop_35;
                                        ;
                                }

                                
# 3509 "<previous_module>"
;

# 3510 "<previous_module>"
                                {
                                        
# 3511 "<previous_module>"
;
                                        ;
                                        
# 3512 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3513 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3514 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3515 "<previous_module>"
                                        {
                                                
# 3516 "<previous_module>"
tpop_0_44: IF(2,44,tpop_0_45)__CSEQ_removeindent;
                                                
# 3517 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3518 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 3519 "<previous_module>"
goto __exit__lfds711_stack_pop_1_0;
                                                ;
                                        }

                                        
# 3521 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 45);
                                        ;
                                        
# 3522 "<previous_module>"
tpop_0_45: IF(2,45,tpop_0_46)__CSEQ_removeindent;
                                        
# 3523 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3524 "<previous_module>"
tpop_0_46: IF(2,46,tpop_0_47)__CSEQ_removeindent;
                                        
# 3525 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3526 "<previous_module>"
tpop_0_47: IF(2,47,tpop_0_48)__CSEQ_removeindent;
                                        
# 3527 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 3528 "<previous_module>"
tpop_0_48: IF(2,48,tpop_0_49)__CSEQ_removeindent;
                                        
# 3529 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3530 "<previous_module>"
tpop_0_49: IF(2,49,tpop_0_50)__CSEQ_removeindent;
                                        
# 3531 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 3532 "<previous_module>"
;
                                        ;
                                        
# 3533 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3534 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3535 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3536 "<previous_module>"
                                        {

# 3537 "<previous_module>"
                                                {
                                                        
# 3538 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3539 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3540 "<previous_module>"
                                                        {
                                                                
# 3541 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3543 "<previous_module>"
;
                                                        
# 3544 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3545 "<previous_module>"
                                                        {
                                                                
# 3546 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3548 "<previous_module>"
;
                                                        
# 3549 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3550 "<previous_module>"
                                                        {
                                                                
# 3551 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3553 "<previous_module>"
;
                                                        
# 3554 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3555 "<previous_module>"
                                                        {
                                                                
# 3556 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3558 "<previous_module>"
;
                                                        
# 3559 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3560 "<previous_module>"
                                                        {
                                                                
# 3561 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3563 "<previous_module>"
;
                                                        
# 3564 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3565 "<previous_module>"
tpop_0_50: IF(2,50,tpop_0_51)__CSEQ_removeindent;
                                                        
# 3566 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 3567 "<previous_module>"
__exit_loop_38:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 51);

                                                        
# 3568 "<previous_module>"
;
                                                        ;
                                                        
# 3569 "<previous_module>"
__exit__exponential_backoff_3_2:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 51);

                                                        
# 3570 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3572 "<previous_module>"
;
                                                
# 3573 "<previous_module>"
tpop_0_51: IF(2,51,tpop_0_52)__CSEQ_removeindent;
                                                
# 3574 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 3575 "<previous_module>"
tpop_0_52: IF(2,52,tpop_0_53)__CSEQ_removeindent;
                                                
# 3576 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 3578 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 53);
                                        ;
                                        
# 3579 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3580 "<previous_module>"
;
                                        ;
                                        
# 3581 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 3582 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3583 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3584 "<previous_module>"
                                        {
                                                
# 3585 "<previous_module>"
goto __exit_loop_35;
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
goto __exit_loop_35;
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
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3599 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3600 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3601 "<previous_module>"
                                        {
                                                
# 3602 "<previous_module>"
tpop_0_53: IF(2,53,tpop_0_54)__CSEQ_removeindent;
                                                
# 3603 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3604 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 3605 "<previous_module>"
goto __exit__lfds711_stack_pop_1_0;
                                                ;
                                        }

                                        
# 3607 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 54);
                                        ;
                                        
# 3608 "<previous_module>"
tpop_0_54: IF(2,54,tpop_0_55)__CSEQ_removeindent;
                                        
# 3609 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3610 "<previous_module>"
tpop_0_55: IF(2,55,tpop_0_56)__CSEQ_removeindent;
                                        
# 3611 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3612 "<previous_module>"
tpop_0_56: IF(2,56,tpop_0_57)__CSEQ_removeindent;
                                        
# 3613 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 3614 "<previous_module>"
tpop_0_57: IF(2,57,tpop_0_58)__CSEQ_removeindent;
                                        
# 3615 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3616 "<previous_module>"
tpop_0_58: IF(2,58,tpop_0_59)__CSEQ_removeindent;
                                        
# 3617 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 3618 "<previous_module>"
;
                                        ;
                                        
# 3619 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3620 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3621 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3622 "<previous_module>"
                                        {

# 3623 "<previous_module>"
                                                {
                                                        
# 3624 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3625 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3626 "<previous_module>"
                                                        {
                                                                
# 3627 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3629 "<previous_module>"
;
                                                        
# 3630 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3631 "<previous_module>"
                                                        {
                                                                
# 3632 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3634 "<previous_module>"
;
                                                        
# 3635 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3636 "<previous_module>"
                                                        {
                                                                
# 3637 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3639 "<previous_module>"
;
                                                        
# 3640 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3641 "<previous_module>"
                                                        {
                                                                
# 3642 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3644 "<previous_module>"
;
                                                        
# 3645 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3646 "<previous_module>"
                                                        {
                                                                
# 3647 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3649 "<previous_module>"
;
                                                        
# 3650 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3651 "<previous_module>"
tpop_0_59: IF(2,59,tpop_0_60)__CSEQ_removeindent;
                                                        
# 3652 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 3653 "<previous_module>"
__exit_loop_39:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 60);

                                                        
# 3654 "<previous_module>"
;
                                                        ;
                                                        
# 3655 "<previous_module>"
__exit__exponential_backoff_3_3:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 60);

                                                        
# 3656 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3658 "<previous_module>"
;
                                                
# 3659 "<previous_module>"
tpop_0_60: IF(2,60,tpop_0_61)__CSEQ_removeindent;
                                                
# 3660 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 3661 "<previous_module>"
tpop_0_61: IF(2,61,tpop_0_62)__CSEQ_removeindent;
                                                
# 3662 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 3664 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 62);
                                        ;
                                        
# 3665 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3666 "<previous_module>"
;
                                        ;
                                        
# 3667 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 3668 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3669 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3670 "<previous_module>"
                                        {
                                                
# 3671 "<previous_module>"
goto __exit_loop_35;
                                                ;
                                        }

                                        
# 3673 "<previous_module>"
;
                                }
                                
# 3675 "<previous_module>"
;
                                
# 3676 "<previous_module>"
if (
# 3677 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3678 "<previous_module>"
                                {
                                        
# 3679 "<previous_module>"
goto __exit_loop_35;
                                        ;
                                }

                                
# 3681 "<previous_module>"
;

# 3682 "<previous_module>"
                                {
                                        
# 3683 "<previous_module>"
;
                                        ;
                                        
# 3684 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3685 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3686 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3687 "<previous_module>"
                                        {
                                                
# 3688 "<previous_module>"
tpop_0_62: IF(2,62,tpop_0_63)__CSEQ_removeindent;
                                                
# 3689 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3690 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 3691 "<previous_module>"
goto __exit__lfds711_stack_pop_1_0;
                                                ;
                                        }

                                        
# 3693 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 63);
                                        ;
                                        
# 3694 "<previous_module>"
tpop_0_63: IF(2,63,tpop_0_64)__CSEQ_removeindent;
                                        
# 3695 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3696 "<previous_module>"
tpop_0_64: IF(2,64,tpop_0_65)__CSEQ_removeindent;
                                        
# 3697 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3698 "<previous_module>"
tpop_0_65: IF(2,65,tpop_0_66)__CSEQ_removeindent;
                                        
# 3699 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 3700 "<previous_module>"
tpop_0_66: IF(2,66,tpop_0_67)__CSEQ_removeindent;
                                        
# 3701 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3702 "<previous_module>"
tpop_0_67: IF(2,67,tpop_0_68)__CSEQ_removeindent;
                                        
# 3703 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 3704 "<previous_module>"
;
                                        ;
                                        
# 3705 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3706 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3707 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3708 "<previous_module>"
                                        {

# 3709 "<previous_module>"
                                                {
                                                        
# 3710 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3711 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3712 "<previous_module>"
                                                        {
                                                                
# 3713 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3715 "<previous_module>"
;
                                                        
# 3716 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3717 "<previous_module>"
                                                        {
                                                                
# 3718 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3720 "<previous_module>"
;
                                                        
# 3721 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3722 "<previous_module>"
                                                        {
                                                                
# 3723 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3725 "<previous_module>"
;
                                                        
# 3726 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3727 "<previous_module>"
                                                        {
                                                                
# 3728 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3730 "<previous_module>"
;
                                                        
# 3731 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3732 "<previous_module>"
                                                        {
                                                                
# 3733 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3735 "<previous_module>"
;
                                                        
# 3736 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3737 "<previous_module>"
tpop_0_68: IF(2,68,tpop_0_69)__CSEQ_removeindent;
                                                        
# 3738 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 3739 "<previous_module>"
__exit_loop_40:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 69);

                                                        
# 3740 "<previous_module>"
;
                                                        ;
                                                        
# 3741 "<previous_module>"
__exit__exponential_backoff_3_4:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 69);

                                                        
# 3742 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3744 "<previous_module>"
;
                                                
# 3745 "<previous_module>"
tpop_0_69: IF(2,69,tpop_0_70)__CSEQ_removeindent;
                                                
# 3746 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 3747 "<previous_module>"
tpop_0_70: IF(2,70,tpop_0_71)__CSEQ_removeindent;
                                                
# 3748 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 3750 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 71);
                                        ;
                                        
# 3751 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3752 "<previous_module>"
;
                                        ;
                                        
# 3753 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 3754 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3755 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3756 "<previous_module>"
                                        {
                                                
# 3757 "<previous_module>"
goto __exit_loop_35;
                                                ;
                                        }

                                        
# 3759 "<previous_module>"
;
                                }
                                
# 3761 "<previous_module>"
;
                                
# 3762 "<previous_module>"
tpop_0_71: IF(2,71,tpop_0_72)__CSEQ_removeindent;
                                
# 3763 "<previous_module>"
__CPROVER_assume(
# 3764 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                
# 3765 "<previous_module>"
__exit_loop_35:
                                __CPROVER_assume(__cs_pc_cs[2] >= 72);

                                
# 3766 "<previous_module>"
;
                                ;
                                
# 3767 "<previous_module>"
tpop_0_72: IF(2,72,tpop_0_73)__CSEQ_removeindent;
                                
# 3768 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                
# 3769 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = __cs_local_lfds711_stack_pop_result;
                                
# 3770 "<previous_module>"
goto __exit__lfds711_stack_pop_1_0;
                                ;
                                
# 3771 "<previous_module>"
__exit__lfds711_stack_pop_1_0:
                                __CPROVER_assume(__cs_pc_cs[2] >= 73);

                                
# 3772 "<previous_module>"
;
                                ;
                        }
                        
# 3774 "<previous_module>"
;
                        
# 3775 "<previous_module>"
__cs_local_delete_res = __cs_retval__lfds711_stack_pop_1;
                        
# 3776 "<previous_module>"
;
                        ;
                        
# 3777 "<previous_module>"
static _Bool __cs_local_delete___cs_tmp_if_cond_19;
                        
# 3778 "<previous_module>"
__cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res == 0;
                        
# 3779 "<previous_module>"
if (__cs_local_delete___cs_tmp_if_cond_19)

# 3780 "<previous_module>"
                        {
                                
# 3781 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                                
# 3782 "<previous_module>"
goto __exit__delete_1_0;
                                ;
                        }

                        
# 3784 "<previous_module>"
;
                        
# 3785 "<previous_module>"
tpop_0_73: IF(2,73,tpop_0_74)__CSEQ_removeindent;
                        
# 3786 "<previous_module>"
__cs_local_delete_temp_td = (*__cs_local_delete_se).value;
                        
# 3787 "<previous_module>"
static int __cs_local_delete_id_popped;
                        
# 3788 "<previous_module>"
tpop_0_74: IF(2,74,tpop_0_75)__CSEQ_removeindent;
                        
# 3789 "<previous_module>"
__cs_local_delete_id_popped = (*__cs_local_delete_temp_td).user_id;
                        
# 3790 "<previous_module>"
tpop_0_75: IF(2,75,tpop_0_76)__CSEQ_removeindent;
                        
# 3791 "<previous_module>"
printf("%llu\n", (*__cs_local_delete_temp_td).user_id);
                        
# 3792 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                        
# 3793 "<previous_module>"
goto __exit__delete_1_0;
                        ;
                        
# 3794 "<previous_module>"
__exit__delete_1_0:
                        __CPROVER_assume(__cs_pc_cs[2] >= 76);

                        
# 3795 "<previous_module>"
;
                        ;
                }
                
# 3797 "<previous_module>"
;
                
# 3798 "<previous_module>"
__cs_retval__delete_1;
                
# 3799 "<previous_module>"
;
                ;
                
# 3800 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_26;
                
# 3801 "<previous_module>"
tpop_0_76: IF(2,76,tpop_0_77)__CSEQ_removeindent;
                
# 3802 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
                
# 3803 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_26)

# 3804 "<previous_module>"
                {
                        
# 3805 "<previous_module>"
tpop_0_77: IF(2,77,tpop_0_78)__CSEQ_removeindent;
                        
# 3806 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                }

                
# 3808 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 78);
                ;
                
# 3809 "<previous_module>"
;
                ;
        }
        
# 3811 "<previous_module>"
;
        
# 3812 "<previous_module>"
__cs_local_pop_loop++;

# 3813 "<previous_module>"
        {
                
# 3814 "<previous_module>"
;
                ;
                
# 3815 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_25;
                
# 3816 "<previous_module>"
tpop_0_78: IF(2,78,tpop_0_79)__CSEQ_removeindent;
                
# 3817 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
                
# 3818 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_25)

# 3819 "<previous_module>"
                {
                        
# 3820 "<previous_module>"
tpop_0_79: IF(2,79,tpop_0_80)__CSEQ_removeindent;
                        
# 3821 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                }

                
# 3823 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 80);
                ;
                
# 3824 "<previous_module>"
;
                ;
                
# 3825 "<previous_module>"
static int __cs_retval__delete_1;

# 3826 "<previous_module>"
                {
                        
# 3827 "<previous_module>"
static struct lfds711_stack_state *__cs_param_delete_s;
                        
# 3828 "<previous_module>"
tpop_0_80: IF(2,80,tpop_0_81)__CSEQ_removeindent;
                        
# 3829 "<previous_module>"
__cs_param_delete_s = ss;
                        
# 3830 "<previous_module>"
static struct lfds711_stack_element *__cs_local_delete_se;
                        
# 3831 "<previous_module>"
static struct test_data *__cs_local_delete_temp_td;
                        
# 3832 "<previous_module>"
static int __cs_local_delete_res;
                        
# 3833 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_1;

# 3834 "<previous_module>"
                        {
                                
# 3835 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                
# 3836 "<previous_module>"
tpop_0_81: IF(2,81,tpop_0_82)__CSEQ_removeindent;
                                
# 3837 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = &mystack;
                                
# 3838 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                
# 3839 "<previous_module>"
tpop_0_82: IF(2,82,tpop_0_83)__CSEQ_removeindent;
                                
# 3840 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_delete_se;
                                
# 3841 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                
# 3842 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                
# 3843 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                
# 3844 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                
# 3845 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                
# 3846 "<previous_module>"
;
                                ;
                                
# 3847 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                
# 3848 "<previous_module>"
tpop_0_83: IF(2,83,tpop_0_84)__CSEQ_removeindent;
                                
# 3849 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                
# 3850 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 3851 "<previous_module>"
                                {
                                        
# 3852 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 3853 "<previous_module>"
tpop_0_84: IF(2,84,tpop_0_85)__CSEQ_removeindent;
                                        
# 3854 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 3855 "<previous_module>"
tpop_0_85: IF(2,85,tpop_0_86)__CSEQ_removeindent;
                                        
# 3856 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 3858 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 86);
                                ;
                                
# 3859 "<previous_module>"
;
                                ;
                                
# 3860 "<previous_module>"
;
                                ;
                                
# 3861 "<previous_module>"
;
                                ;
                                
# 3862 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                
# 3863 "<previous_module>"
tpop_0_86: IF(2,86,tpop_0_87)__CSEQ_removeindent;
                                
# 3864 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                
# 3865 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 3866 "<previous_module>"
                                {
                                        
# 3867 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 3868 "<previous_module>"
tpop_0_87: IF(2,87,tpop_0_88)__CSEQ_removeindent;
                                        
# 3869 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 3870 "<previous_module>"
tpop_0_88: IF(2,88,tpop_0_89)__CSEQ_removeindent;
                                        
# 3871 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 3873 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 89);
                                ;
                                
# 3874 "<previous_module>"
;
                                ;
                                
# 3875 "<previous_module>"
;
                                ;
                                
# 3876 "<previous_module>"
tpop_0_89: IF(2,89,tpop_0_90)__CSEQ_removeindent;
                                
# 3877 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 3878 "<previous_module>"
tpop_0_90: IF(2,90,tpop_0_91)__CSEQ_removeindent;
                                
# 3879 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 3880 "<previous_module>"
tpop_0_91: IF(2,91,tpop_0_92)__CSEQ_removeindent;
                                
# 3881 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                
# 3882 "<previous_module>"
tpop_0_92: IF(2,92,tpop_0_93)__CSEQ_removeindent;
                                
# 3883 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                
# 3884 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                
# 3885 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                
# 3886 "<previous_module>"
;
                                ;
                                
# 3887 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                
# 3888 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 3889 "<previous_module>"
                                {
                                        
# 3890 "<previous_module>"
;
                                        ;
                                        
# 3891 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                        
# 3892 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3893 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 3894 "<previous_module>"
                                        {
                                                
# 3895 "<previous_module>"
tpop_0_93: IF(2,93,tpop_0_94)__CSEQ_removeindent;
                                                
# 3896 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3897 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 3898 "<previous_module>"
goto __exit__lfds711_stack_pop_1_1;
                                                ;
                                        }

                                        
# 3900 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 94);
                                        ;
                                        
# 3901 "<previous_module>"
tpop_0_94: IF(2,94,tpop_0_95)__CSEQ_removeindent;
                                        
# 3902 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3903 "<previous_module>"
tpop_0_95: IF(2,95,tpop_0_96)__CSEQ_removeindent;
                                        
# 3904 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3905 "<previous_module>"
tpop_0_96: IF(2,96,tpop_0_97)__CSEQ_removeindent;
                                        
# 3906 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 3907 "<previous_module>"
tpop_0_97: IF(2,97,tpop_0_98)__CSEQ_removeindent;
                                        
# 3908 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3909 "<previous_module>"
tpop_0_98: IF(2,98,tpop_0_99)__CSEQ_removeindent;
                                        
# 3910 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 3911 "<previous_module>"
;
                                        ;
                                        
# 3912 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                        
# 3913 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3914 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 3915 "<previous_module>"
                                        {

# 3916 "<previous_module>"
                                                {
                                                        
# 3917 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3918 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3919 "<previous_module>"
                                                        {
                                                                
# 3920 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3922 "<previous_module>"
;
                                                        
# 3923 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3924 "<previous_module>"
                                                        {
                                                                
# 3925 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3927 "<previous_module>"
;
                                                        
# 3928 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3929 "<previous_module>"
                                                        {
                                                                
# 3930 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3932 "<previous_module>"
;
                                                        
# 3933 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3934 "<previous_module>"
                                                        {
                                                                
# 3935 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3937 "<previous_module>"
;
                                                        
# 3938 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3939 "<previous_module>"
                                                        {
                                                                
# 3940 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3942 "<previous_module>"
;
                                                        
# 3943 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3944 "<previous_module>"
tpop_0_99: IF(2,99,tpop_0_100)__CSEQ_removeindent;
                                                        
# 3945 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 3946 "<previous_module>"
__exit_loop_42:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 100);

                                                        
# 3947 "<previous_module>"
;
                                                        ;
                                                        
# 3948 "<previous_module>"
__exit__exponential_backoff_2_1:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 100);

                                                        
# 3949 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3951 "<previous_module>"
;
                                                
# 3952 "<previous_module>"
tpop_0_100: IF(2,100,tpop_0_101)__CSEQ_removeindent;
                                                
# 3953 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 3954 "<previous_module>"
tpop_0_101: IF(2,101,tpop_0_102)__CSEQ_removeindent;
                                                
# 3955 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 3957 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 102);
                                        ;
                                        
# 3958 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3959 "<previous_module>"
;
                                        ;
                                        
# 3960 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                        
# 3961 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3962 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 3963 "<previous_module>"
                                        {
                                                
# 3964 "<previous_module>"
goto __exit_loop_41;
                                                ;
                                        }

                                        
# 3966 "<previous_module>"
;
                                }
                                
# 3968 "<previous_module>"
;
                                
# 3969 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                
# 3970 "<previous_module>"
tpop_0_102: IF(2,102,tpop_0_103)__CSEQ_removeindent;
                                
# 3971 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                
# 3972 "<previous_module>"
__exit_loop_41:
                                __CPROVER_assume(__cs_pc_cs[2] >= 103);

                                
# 3973 "<previous_module>"
;
                                ;
                                
# 3974 "<previous_module>"
if (
# 3975 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3976 "<previous_module>"
                                {
                                        
# 3977 "<previous_module>"
goto __exit_loop_43;
                                        ;
                                }

                                
# 3979 "<previous_module>"
;

# 3980 "<previous_module>"
                                {
                                        
# 3981 "<previous_module>"
;
                                        ;
                                        
# 3982 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3983 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3984 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3985 "<previous_module>"
                                        {
                                                
# 3986 "<previous_module>"
tpop_0_103: IF(2,103,tpop_0_104)__CSEQ_removeindent;
                                                
# 3987 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3988 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 3989 "<previous_module>"
goto __exit__lfds711_stack_pop_1_1;
                                                ;
                                        }

                                        
# 3991 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 104);
                                        ;
                                        
# 3992 "<previous_module>"
tpop_0_104: IF(2,104,tpop_0_105)__CSEQ_removeindent;
                                        
# 3993 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3994 "<previous_module>"
tpop_0_105: IF(2,105,tpop_0_106)__CSEQ_removeindent;
                                        
# 3995 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3996 "<previous_module>"
tpop_0_106: IF(2,106,tpop_0_107)__CSEQ_removeindent;
                                        
# 3997 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 3998 "<previous_module>"
tpop_0_107: IF(2,107,tpop_0_108)__CSEQ_removeindent;
                                        
# 3999 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4000 "<previous_module>"
tpop_0_108: IF(2,108,tpop_0_109)__CSEQ_removeindent;
                                        
# 4001 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 4002 "<previous_module>"
;
                                        ;
                                        
# 4003 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4004 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4005 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4006 "<previous_module>"
                                        {

# 4007 "<previous_module>"
                                                {
                                                        
# 4008 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4009 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4010 "<previous_module>"
                                                        {
                                                                
# 4011 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4013 "<previous_module>"
;
                                                        
# 4014 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4015 "<previous_module>"
                                                        {
                                                                
# 4016 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4018 "<previous_module>"
;
                                                        
# 4019 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4020 "<previous_module>"
                                                        {
                                                                
# 4021 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4023 "<previous_module>"
;
                                                        
# 4024 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4025 "<previous_module>"
                                                        {
                                                                
# 4026 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4028 "<previous_module>"
;
                                                        
# 4029 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4030 "<previous_module>"
                                                        {
                                                                
# 4031 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4033 "<previous_module>"
;
                                                        
# 4034 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4035 "<previous_module>"
tpop_0_109: IF(2,109,tpop_0_110)__CSEQ_removeindent;
                                                        
# 4036 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 4037 "<previous_module>"
__exit_loop_44:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 110);

                                                        
# 4038 "<previous_module>"
;
                                                        ;
                                                        
# 4039 "<previous_module>"
__exit__exponential_backoff_3_5:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 110);

                                                        
# 4040 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4042 "<previous_module>"
;
                                                
# 4043 "<previous_module>"
tpop_0_110: IF(2,110,tpop_0_111)__CSEQ_removeindent;
                                                
# 4044 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 4045 "<previous_module>"
tpop_0_111: IF(2,111,tpop_0_112)__CSEQ_removeindent;
                                                
# 4046 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 4048 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 112);
                                        ;
                                        
# 4049 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4050 "<previous_module>"
;
                                        ;
                                        
# 4051 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4052 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4053 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4054 "<previous_module>"
                                        {
                                                
# 4055 "<previous_module>"
goto __exit_loop_43;
                                                ;
                                        }

                                        
# 4057 "<previous_module>"
;
                                }
                                
# 4059 "<previous_module>"
;
                                
# 4060 "<previous_module>"
if (
# 4061 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4062 "<previous_module>"
                                {
                                        
# 4063 "<previous_module>"
goto __exit_loop_43;
                                        ;
                                }

                                
# 4065 "<previous_module>"
;

# 4066 "<previous_module>"
                                {
                                        
# 4067 "<previous_module>"
;
                                        ;
                                        
# 4068 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4069 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4070 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4071 "<previous_module>"
                                        {
                                                
# 4072 "<previous_module>"
tpop_0_112: IF(2,112,tpop_0_113)__CSEQ_removeindent;
                                                
# 4073 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4074 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 4075 "<previous_module>"
goto __exit__lfds711_stack_pop_1_1;
                                                ;
                                        }

                                        
# 4077 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 113);
                                        ;
                                        
# 4078 "<previous_module>"
tpop_0_113: IF(2,113,tpop_0_114)__CSEQ_removeindent;
                                        
# 4079 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4080 "<previous_module>"
tpop_0_114: IF(2,114,tpop_0_115)__CSEQ_removeindent;
                                        
# 4081 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4082 "<previous_module>"
tpop_0_115: IF(2,115,tpop_0_116)__CSEQ_removeindent;
                                        
# 4083 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 4084 "<previous_module>"
tpop_0_116: IF(2,116,tpop_0_117)__CSEQ_removeindent;
                                        
# 4085 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4086 "<previous_module>"
tpop_0_117: IF(2,117,tpop_0_118)__CSEQ_removeindent;
                                        
# 4087 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 4088 "<previous_module>"
;
                                        ;
                                        
# 4089 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4090 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4091 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4092 "<previous_module>"
                                        {

# 4093 "<previous_module>"
                                                {
                                                        
# 4094 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4095 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4096 "<previous_module>"
                                                        {
                                                                
# 4097 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4099 "<previous_module>"
;
                                                        
# 4100 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4101 "<previous_module>"
                                                        {
                                                                
# 4102 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4104 "<previous_module>"
;
                                                        
# 4105 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4106 "<previous_module>"
                                                        {
                                                                
# 4107 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4109 "<previous_module>"
;
                                                        
# 4110 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4111 "<previous_module>"
                                                        {
                                                                
# 4112 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4114 "<previous_module>"
;
                                                        
# 4115 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4116 "<previous_module>"
                                                        {
                                                                
# 4117 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4119 "<previous_module>"
;
                                                        
# 4120 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4121 "<previous_module>"
tpop_0_118: IF(2,118,tpop_0_119)__CSEQ_removeindent;
                                                        
# 4122 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 4123 "<previous_module>"
__exit_loop_45:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 119);

                                                        
# 4124 "<previous_module>"
;
                                                        ;
                                                        
# 4125 "<previous_module>"
__exit__exponential_backoff_3_6:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 119);

                                                        
# 4126 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4128 "<previous_module>"
;
                                                
# 4129 "<previous_module>"
tpop_0_119: IF(2,119,tpop_0_120)__CSEQ_removeindent;
                                                
# 4130 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 4131 "<previous_module>"
tpop_0_120: IF(2,120,tpop_0_121)__CSEQ_removeindent;
                                                
# 4132 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 4134 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 121);
                                        ;
                                        
# 4135 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4136 "<previous_module>"
;
                                        ;
                                        
# 4137 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4138 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4139 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4140 "<previous_module>"
                                        {
                                                
# 4141 "<previous_module>"
goto __exit_loop_43;
                                                ;
                                        }

                                        
# 4143 "<previous_module>"
;
                                }
                                
# 4145 "<previous_module>"
;
                                
# 4146 "<previous_module>"
if (
# 4147 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4148 "<previous_module>"
                                {
                                        
# 4149 "<previous_module>"
goto __exit_loop_43;
                                        ;
                                }

                                
# 4151 "<previous_module>"
;

# 4152 "<previous_module>"
                                {
                                        
# 4153 "<previous_module>"
;
                                        ;
                                        
# 4154 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4155 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4156 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4157 "<previous_module>"
                                        {
                                                
# 4158 "<previous_module>"
tpop_0_121: IF(2,121,tpop_0_122)__CSEQ_removeindent;
                                                
# 4159 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4160 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 4161 "<previous_module>"
goto __exit__lfds711_stack_pop_1_1;
                                                ;
                                        }

                                        
# 4163 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 122);
                                        ;
                                        
# 4164 "<previous_module>"
tpop_0_122: IF(2,122,tpop_0_123)__CSEQ_removeindent;
                                        
# 4165 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4166 "<previous_module>"
tpop_0_123: IF(2,123,tpop_0_124)__CSEQ_removeindent;
                                        
# 4167 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4168 "<previous_module>"
tpop_0_124: IF(2,124,tpop_0_125)__CSEQ_removeindent;
                                        
# 4169 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 4170 "<previous_module>"
tpop_0_125: IF(2,125,tpop_0_126)__CSEQ_removeindent;
                                        
# 4171 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4172 "<previous_module>"
tpop_0_126: IF(2,126,tpop_0_127)__CSEQ_removeindent;
                                        
# 4173 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 4174 "<previous_module>"
;
                                        ;
                                        
# 4175 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4176 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4177 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4178 "<previous_module>"
                                        {

# 4179 "<previous_module>"
                                                {
                                                        
# 4180 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4181 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4182 "<previous_module>"
                                                        {
                                                                
# 4183 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4185 "<previous_module>"
;
                                                        
# 4186 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4187 "<previous_module>"
                                                        {
                                                                
# 4188 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4190 "<previous_module>"
;
                                                        
# 4191 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4192 "<previous_module>"
                                                        {
                                                                
# 4193 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4195 "<previous_module>"
;
                                                        
# 4196 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4197 "<previous_module>"
                                                        {
                                                                
# 4198 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4200 "<previous_module>"
;
                                                        
# 4201 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4202 "<previous_module>"
                                                        {
                                                                
# 4203 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4205 "<previous_module>"
;
                                                        
# 4206 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4207 "<previous_module>"
tpop_0_127: IF(2,127,tpop_0_128)__CSEQ_removeindent;
                                                        
# 4208 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 4209 "<previous_module>"
__exit_loop_46:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 128);

                                                        
# 4210 "<previous_module>"
;
                                                        ;
                                                        
# 4211 "<previous_module>"
__exit__exponential_backoff_3_7:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 128);

                                                        
# 4212 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4214 "<previous_module>"
;
                                                
# 4215 "<previous_module>"
tpop_0_128: IF(2,128,tpop_0_129)__CSEQ_removeindent;
                                                
# 4216 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 4217 "<previous_module>"
tpop_0_129: IF(2,129,tpop_0_130)__CSEQ_removeindent;
                                                
# 4218 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 4220 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 130);
                                        ;
                                        
# 4221 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4222 "<previous_module>"
;
                                        ;
                                        
# 4223 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4224 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4225 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4226 "<previous_module>"
                                        {
                                                
# 4227 "<previous_module>"
goto __exit_loop_43;
                                                ;
                                        }

                                        
# 4229 "<previous_module>"
;
                                }
                                
# 4231 "<previous_module>"
;
                                
# 4232 "<previous_module>"
if (
# 4233 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4234 "<previous_module>"
                                {
                                        
# 4235 "<previous_module>"
goto __exit_loop_43;
                                        ;
                                }

                                
# 4237 "<previous_module>"
;

# 4238 "<previous_module>"
                                {
                                        
# 4239 "<previous_module>"
;
                                        ;
                                        
# 4240 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4241 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4242 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4243 "<previous_module>"
                                        {
                                                
# 4244 "<previous_module>"
tpop_0_130: IF(2,130,tpop_0_131)__CSEQ_removeindent;
                                                
# 4245 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4246 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 4247 "<previous_module>"
goto __exit__lfds711_stack_pop_1_1;
                                                ;
                                        }

                                        
# 4249 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 131);
                                        ;
                                        
# 4250 "<previous_module>"
tpop_0_131: IF(2,131,tpop_0_132)__CSEQ_removeindent;
                                        
# 4251 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4252 "<previous_module>"
tpop_0_132: IF(2,132,tpop_0_133)__CSEQ_removeindent;
                                        
# 4253 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4254 "<previous_module>"
tpop_0_133: IF(2,133,tpop_0_134)__CSEQ_removeindent;
                                        
# 4255 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 4256 "<previous_module>"
tpop_0_134: IF(2,134,tpop_0_135)__CSEQ_removeindent;
                                        
# 4257 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4258 "<previous_module>"
tpop_0_135: IF(2,135,tpop_0_136)__CSEQ_removeindent;
                                        
# 4259 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 4260 "<previous_module>"
;
                                        ;
                                        
# 4261 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4262 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4263 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4264 "<previous_module>"
                                        {

# 4265 "<previous_module>"
                                                {
                                                        
# 4266 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4267 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4268 "<previous_module>"
                                                        {
                                                                
# 4269 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4271 "<previous_module>"
;
                                                        
# 4272 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4273 "<previous_module>"
                                                        {
                                                                
# 4274 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4276 "<previous_module>"
;
                                                        
# 4277 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4278 "<previous_module>"
                                                        {
                                                                
# 4279 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4281 "<previous_module>"
;
                                                        
# 4282 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4283 "<previous_module>"
                                                        {
                                                                
# 4284 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4286 "<previous_module>"
;
                                                        
# 4287 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4288 "<previous_module>"
                                                        {
                                                                
# 4289 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4291 "<previous_module>"
;
                                                        
# 4292 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4293 "<previous_module>"
tpop_0_136: IF(2,136,tpop_0_137)__CSEQ_removeindent;
                                                        
# 4294 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 4295 "<previous_module>"
__exit_loop_47:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 137);

                                                        
# 4296 "<previous_module>"
;
                                                        ;
                                                        
# 4297 "<previous_module>"
__exit__exponential_backoff_3_8:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 137);

                                                        
# 4298 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4300 "<previous_module>"
;
                                                
# 4301 "<previous_module>"
tpop_0_137: IF(2,137,tpop_0_138)__CSEQ_removeindent;
                                                
# 4302 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 4303 "<previous_module>"
tpop_0_138: IF(2,138,tpop_0_139)__CSEQ_removeindent;
                                                
# 4304 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 4306 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 139);
                                        ;
                                        
# 4307 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4308 "<previous_module>"
;
                                        ;
                                        
# 4309 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4310 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4311 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4312 "<previous_module>"
                                        {
                                                
# 4313 "<previous_module>"
goto __exit_loop_43;
                                                ;
                                        }

                                        
# 4315 "<previous_module>"
;
                                }
                                
# 4317 "<previous_module>"
;
                                
# 4318 "<previous_module>"
if (
# 4319 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4320 "<previous_module>"
                                {
                                        
# 4321 "<previous_module>"
goto __exit_loop_43;
                                        ;
                                }

                                
# 4323 "<previous_module>"
;

# 4324 "<previous_module>"
                                {
                                        
# 4325 "<previous_module>"
;
                                        ;
                                        
# 4326 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4327 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4328 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4329 "<previous_module>"
                                        {
                                                
# 4330 "<previous_module>"
tpop_0_139: IF(2,139,tpop_0_140)__CSEQ_removeindent;
                                                
# 4331 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4332 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 4333 "<previous_module>"
goto __exit__lfds711_stack_pop_1_1;
                                                ;
                                        }

                                        
# 4335 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 140);
                                        ;
                                        
# 4336 "<previous_module>"
tpop_0_140: IF(2,140,tpop_0_141)__CSEQ_removeindent;
                                        
# 4337 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4338 "<previous_module>"
tpop_0_141: IF(2,141,tpop_0_142)__CSEQ_removeindent;
                                        
# 4339 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4340 "<previous_module>"
tpop_0_142: IF(2,142,tpop_0_143)__CSEQ_removeindent;
                                        
# 4341 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 4342 "<previous_module>"
tpop_0_143: IF(2,143,tpop_0_144)__CSEQ_removeindent;
                                        
# 4343 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4344 "<previous_module>"
tpop_0_144: IF(2,144,tpop_0_145)__CSEQ_removeindent;
                                        
# 4345 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 4346 "<previous_module>"
;
                                        ;
                                        
# 4347 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4348 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4349 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4350 "<previous_module>"
                                        {

# 4351 "<previous_module>"
                                                {
                                                        
# 4352 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4353 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4354 "<previous_module>"
                                                        {
                                                                
# 4355 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4357 "<previous_module>"
;
                                                        
# 4358 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4359 "<previous_module>"
                                                        {
                                                                
# 4360 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4362 "<previous_module>"
;
                                                        
# 4363 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4364 "<previous_module>"
                                                        {
                                                                
# 4365 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4367 "<previous_module>"
;
                                                        
# 4368 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4369 "<previous_module>"
                                                        {
                                                                
# 4370 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4372 "<previous_module>"
;
                                                        
# 4373 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4374 "<previous_module>"
                                                        {
                                                                
# 4375 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4377 "<previous_module>"
;
                                                        
# 4378 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4379 "<previous_module>"
tpop_0_145: IF(2,145,tpop_0_146)__CSEQ_removeindent;
                                                        
# 4380 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 4381 "<previous_module>"
__exit_loop_48:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 146);

                                                        
# 4382 "<previous_module>"
;
                                                        ;
                                                        
# 4383 "<previous_module>"
__exit__exponential_backoff_3_9:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 146);

                                                        
# 4384 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4386 "<previous_module>"
;
                                                
# 4387 "<previous_module>"
tpop_0_146: IF(2,146,tpop_0_147)__CSEQ_removeindent;
                                                
# 4388 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 4389 "<previous_module>"
tpop_0_147: IF(2,147,tpop_0_148)__CSEQ_removeindent;
                                                
# 4390 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 4392 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 148);
                                        ;
                                        
# 4393 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4394 "<previous_module>"
;
                                        ;
                                        
# 4395 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4396 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4397 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4398 "<previous_module>"
                                        {
                                                
# 4399 "<previous_module>"
goto __exit_loop_43;
                                                ;
                                        }

                                        
# 4401 "<previous_module>"
;
                                }
                                
# 4403 "<previous_module>"
;
                                
# 4404 "<previous_module>"
tpop_0_148: IF(2,148,tpop_0_149)__CSEQ_removeindent;
                                
# 4405 "<previous_module>"
__CPROVER_assume(
# 4406 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                
# 4407 "<previous_module>"
__exit_loop_43:
                                __CPROVER_assume(__cs_pc_cs[2] >= 149);

                                
# 4408 "<previous_module>"
;
                                ;
                                
# 4409 "<previous_module>"
tpop_0_149: IF(2,149,tpop_0_150)__CSEQ_removeindent;
                                
# 4410 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                
# 4411 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = __cs_local_lfds711_stack_pop_result;
                                
# 4412 "<previous_module>"
goto __exit__lfds711_stack_pop_1_1;
                                ;
                                
# 4413 "<previous_module>"
__exit__lfds711_stack_pop_1_1:
                                __CPROVER_assume(__cs_pc_cs[2] >= 150);

                                
# 4414 "<previous_module>"
;
                                ;
                        }
                        
# 4416 "<previous_module>"
;
                        
# 4417 "<previous_module>"
__cs_local_delete_res = __cs_retval__lfds711_stack_pop_1;
                        
# 4418 "<previous_module>"
;
                        ;
                        
# 4419 "<previous_module>"
static _Bool __cs_local_delete___cs_tmp_if_cond_19;
                        
# 4420 "<previous_module>"
__cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res == 0;
                        
# 4421 "<previous_module>"
if (__cs_local_delete___cs_tmp_if_cond_19)

# 4422 "<previous_module>"
                        {
                                
# 4423 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                                
# 4424 "<previous_module>"
goto __exit__delete_1_1;
                                ;
                        }

                        
# 4426 "<previous_module>"
;
                        
# 4427 "<previous_module>"
tpop_0_150: IF(2,150,tpop_0_151)__CSEQ_removeindent;
                        
# 4428 "<previous_module>"
__cs_local_delete_temp_td = (*__cs_local_delete_se).value;
                        
# 4429 "<previous_module>"
static int __cs_local_delete_id_popped;
                        
# 4430 "<previous_module>"
tpop_0_151: IF(2,151,tpop_0_152)__CSEQ_removeindent;
                        
# 4431 "<previous_module>"
__cs_local_delete_id_popped = (*__cs_local_delete_temp_td).user_id;
                        
# 4432 "<previous_module>"
tpop_0_152: IF(2,152,tpop_0_153)__CSEQ_removeindent;
                        
# 4433 "<previous_module>"
printf("%llu\n", (*__cs_local_delete_temp_td).user_id);
                        
# 4434 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                        
# 4435 "<previous_module>"
goto __exit__delete_1_1;
                        ;
                        
# 4436 "<previous_module>"
__exit__delete_1_1:
                        __CPROVER_assume(__cs_pc_cs[2] >= 153);

                        
# 4437 "<previous_module>"
;
                        ;
                }
                
# 4439 "<previous_module>"
;
                
# 4440 "<previous_module>"
__cs_retval__delete_1;
                
# 4441 "<previous_module>"
;
                ;
                
# 4442 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_26;
                
# 4443 "<previous_module>"
tpop_0_153: IF(2,153,tpop_0_154)__CSEQ_removeindent;
                
# 4444 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
                
# 4445 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_26)

# 4446 "<previous_module>"
                {
                        
# 4447 "<previous_module>"
tpop_0_154: IF(2,154,tpop_0_155)__CSEQ_removeindent;
                        
# 4448 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                }

                
# 4450 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 155);
                ;
                
# 4451 "<previous_module>"
;
                ;
        }
        
# 4453 "<previous_module>"
;
        
# 4454 "<previous_module>"
__cs_local_pop_loop++;

# 4455 "<previous_module>"
        {
                
# 4456 "<previous_module>"
;
                ;
                
# 4457 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_25;
                
# 4458 "<previous_module>"
tpop_0_155: IF(2,155,tpop_0_156)__CSEQ_removeindent;
                
# 4459 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
                
# 4460 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_25)

# 4461 "<previous_module>"
                {
                        
# 4462 "<previous_module>"
tpop_0_156: IF(2,156,tpop_0_157)__CSEQ_removeindent;
                        
# 4463 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                }

                
# 4465 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 157);
                ;
                
# 4466 "<previous_module>"
;
                ;
                
# 4467 "<previous_module>"
static int __cs_retval__delete_1;

# 4468 "<previous_module>"
                {
                        
# 4469 "<previous_module>"
static struct lfds711_stack_state *__cs_param_delete_s;
                        
# 4470 "<previous_module>"
tpop_0_157: IF(2,157,tpop_0_158)__CSEQ_removeindent;
                        
# 4471 "<previous_module>"
__cs_param_delete_s = ss;
                        
# 4472 "<previous_module>"
static struct lfds711_stack_element *__cs_local_delete_se;
                        
# 4473 "<previous_module>"
static struct test_data *__cs_local_delete_temp_td;
                        
# 4474 "<previous_module>"
static int __cs_local_delete_res;
                        
# 4475 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_1;

# 4476 "<previous_module>"
                        {
                                
# 4477 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                
# 4478 "<previous_module>"
tpop_0_158: IF(2,158,tpop_0_159)__CSEQ_removeindent;
                                
# 4479 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = &mystack;
                                
# 4480 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                
# 4481 "<previous_module>"
tpop_0_159: IF(2,159,tpop_0_160)__CSEQ_removeindent;
                                
# 4482 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_delete_se;
                                
# 4483 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                
# 4484 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                
# 4485 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                
# 4486 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                
# 4487 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                
# 4488 "<previous_module>"
;
                                ;
                                
# 4489 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                
# 4490 "<previous_module>"
tpop_0_160: IF(2,160,tpop_0_161)__CSEQ_removeindent;
                                
# 4491 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                
# 4492 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 4493 "<previous_module>"
                                {
                                        
# 4494 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 4495 "<previous_module>"
tpop_0_161: IF(2,161,tpop_0_162)__CSEQ_removeindent;
                                        
# 4496 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 4497 "<previous_module>"
tpop_0_162: IF(2,162,tpop_0_163)__CSEQ_removeindent;
                                        
# 4498 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 4500 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 163);
                                ;
                                
# 4501 "<previous_module>"
;
                                ;
                                
# 4502 "<previous_module>"
;
                                ;
                                
# 4503 "<previous_module>"
;
                                ;
                                
# 4504 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                
# 4505 "<previous_module>"
tpop_0_163: IF(2,163,tpop_0_164)__CSEQ_removeindent;
                                
# 4506 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                
# 4507 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 4508 "<previous_module>"
                                {
                                        
# 4509 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 4510 "<previous_module>"
tpop_0_164: IF(2,164,tpop_0_165)__CSEQ_removeindent;
                                        
# 4511 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 4512 "<previous_module>"
tpop_0_165: IF(2,165,tpop_0_166)__CSEQ_removeindent;
                                        
# 4513 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 4515 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 166);
                                ;
                                
# 4516 "<previous_module>"
;
                                ;
                                
# 4517 "<previous_module>"
;
                                ;
                                
# 4518 "<previous_module>"
tpop_0_166: IF(2,166,tpop_0_167)__CSEQ_removeindent;
                                
# 4519 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 4520 "<previous_module>"
tpop_0_167: IF(2,167,tpop_0_168)__CSEQ_removeindent;
                                
# 4521 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 4522 "<previous_module>"
tpop_0_168: IF(2,168,tpop_0_169)__CSEQ_removeindent;
                                
# 4523 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                
# 4524 "<previous_module>"
tpop_0_169: IF(2,169,tpop_0_170)__CSEQ_removeindent;
                                
# 4525 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                
# 4526 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                
# 4527 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                
# 4528 "<previous_module>"
;
                                ;
                                
# 4529 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                
# 4530 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 4531 "<previous_module>"
                                {
                                        
# 4532 "<previous_module>"
;
                                        ;
                                        
# 4533 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                        
# 4534 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4535 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 4536 "<previous_module>"
                                        {
                                                
# 4537 "<previous_module>"
tpop_0_170: IF(2,170,tpop_0_171)__CSEQ_removeindent;
                                                
# 4538 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4539 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 4540 "<previous_module>"
goto __exit__lfds711_stack_pop_1_2;
                                                ;
                                        }

                                        
# 4542 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 171);
                                        ;
                                        
# 4543 "<previous_module>"
tpop_0_171: IF(2,171,tpop_0_172)__CSEQ_removeindent;
                                        
# 4544 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4545 "<previous_module>"
tpop_0_172: IF(2,172,tpop_0_173)__CSEQ_removeindent;
                                        
# 4546 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4547 "<previous_module>"
tpop_0_173: IF(2,173,tpop_0_174)__CSEQ_removeindent;
                                        
# 4548 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 4549 "<previous_module>"
tpop_0_174: IF(2,174,tpop_0_175)__CSEQ_removeindent;
                                        
# 4550 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4551 "<previous_module>"
tpop_0_175: IF(2,175,tpop_0_176)__CSEQ_removeindent;
                                        
# 4552 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 4553 "<previous_module>"
;
                                        ;
                                        
# 4554 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                        
# 4555 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4556 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 4557 "<previous_module>"
                                        {

# 4558 "<previous_module>"
                                                {
                                                        
# 4559 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4560 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4561 "<previous_module>"
                                                        {
                                                                
# 4562 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4564 "<previous_module>"
;
                                                        
# 4565 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4566 "<previous_module>"
                                                        {
                                                                
# 4567 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4569 "<previous_module>"
;
                                                        
# 4570 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4571 "<previous_module>"
                                                        {
                                                                
# 4572 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4574 "<previous_module>"
;
                                                        
# 4575 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4576 "<previous_module>"
                                                        {
                                                                
# 4577 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4579 "<previous_module>"
;
                                                        
# 4580 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4581 "<previous_module>"
                                                        {
                                                                
# 4582 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4584 "<previous_module>"
;
                                                        
# 4585 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4586 "<previous_module>"
tpop_0_176: IF(2,176,tpop_0_177)__CSEQ_removeindent;
                                                        
# 4587 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 4588 "<previous_module>"
__exit_loop_50:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 177);

                                                        
# 4589 "<previous_module>"
;
                                                        ;
                                                        
# 4590 "<previous_module>"
__exit__exponential_backoff_2_2:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 177);

                                                        
# 4591 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4593 "<previous_module>"
;
                                                
# 4594 "<previous_module>"
tpop_0_177: IF(2,177,tpop_0_178)__CSEQ_removeindent;
                                                
# 4595 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 4596 "<previous_module>"
tpop_0_178: IF(2,178,tpop_0_179)__CSEQ_removeindent;
                                                
# 4597 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 4599 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 179);
                                        ;
                                        
# 4600 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4601 "<previous_module>"
;
                                        ;
                                        
# 4602 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                        
# 4603 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4604 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 4605 "<previous_module>"
                                        {
                                                
# 4606 "<previous_module>"
goto __exit_loop_49;
                                                ;
                                        }

                                        
# 4608 "<previous_module>"
;
                                }
                                
# 4610 "<previous_module>"
;
                                
# 4611 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                
# 4612 "<previous_module>"
tpop_0_179: IF(2,179,tpop_0_180)__CSEQ_removeindent;
                                
# 4613 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                
# 4614 "<previous_module>"
__exit_loop_49:
                                __CPROVER_assume(__cs_pc_cs[2] >= 180);

                                
# 4615 "<previous_module>"
;
                                ;
                                
# 4616 "<previous_module>"
if (
# 4617 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4618 "<previous_module>"
                                {
                                        
# 4619 "<previous_module>"
goto __exit_loop_51;
                                        ;
                                }

                                
# 4621 "<previous_module>"
;

# 4622 "<previous_module>"
                                {
                                        
# 4623 "<previous_module>"
;
                                        ;
                                        
# 4624 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4625 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4626 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4627 "<previous_module>"
                                        {
                                                
# 4628 "<previous_module>"
tpop_0_180: IF(2,180,tpop_0_181)__CSEQ_removeindent;
                                                
# 4629 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4630 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 4631 "<previous_module>"
goto __exit__lfds711_stack_pop_1_2;
                                                ;
                                        }

                                        
# 4633 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 181);
                                        ;
                                        
# 4634 "<previous_module>"
tpop_0_181: IF(2,181,tpop_0_182)__CSEQ_removeindent;
                                        
# 4635 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4636 "<previous_module>"
tpop_0_182: IF(2,182,tpop_0_183)__CSEQ_removeindent;
                                        
# 4637 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4638 "<previous_module>"
tpop_0_183: IF(2,183,tpop_0_184)__CSEQ_removeindent;
                                        
# 4639 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 4640 "<previous_module>"
tpop_0_184: IF(2,184,tpop_0_185)__CSEQ_removeindent;
                                        
# 4641 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4642 "<previous_module>"
tpop_0_185: IF(2,185,tpop_0_186)__CSEQ_removeindent;
                                        
# 4643 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 4644 "<previous_module>"
;
                                        ;
                                        
# 4645 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4646 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4647 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4648 "<previous_module>"
                                        {

# 4649 "<previous_module>"
                                                {
                                                        
# 4650 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4651 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4652 "<previous_module>"
                                                        {
                                                                
# 4653 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4655 "<previous_module>"
;
                                                        
# 4656 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4657 "<previous_module>"
                                                        {
                                                                
# 4658 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4660 "<previous_module>"
;
                                                        
# 4661 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4662 "<previous_module>"
                                                        {
                                                                
# 4663 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4665 "<previous_module>"
;
                                                        
# 4666 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4667 "<previous_module>"
                                                        {
                                                                
# 4668 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4670 "<previous_module>"
;
                                                        
# 4671 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4672 "<previous_module>"
                                                        {
                                                                
# 4673 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4675 "<previous_module>"
;
                                                        
# 4676 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4677 "<previous_module>"
tpop_0_186: IF(2,186,tpop_0_187)__CSEQ_removeindent;
                                                        
# 4678 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 4679 "<previous_module>"
__exit_loop_52:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 187);

                                                        
# 4680 "<previous_module>"
;
                                                        ;
                                                        
# 4681 "<previous_module>"
__exit__exponential_backoff_3_10:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 187);

                                                        
# 4682 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4684 "<previous_module>"
;
                                                
# 4685 "<previous_module>"
tpop_0_187: IF(2,187,tpop_0_188)__CSEQ_removeindent;
                                                
# 4686 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 4687 "<previous_module>"
tpop_0_188: IF(2,188,tpop_0_189)__CSEQ_removeindent;
                                                
# 4688 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 4690 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 189);
                                        ;
                                        
# 4691 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4692 "<previous_module>"
;
                                        ;
                                        
# 4693 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4694 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4695 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4696 "<previous_module>"
                                        {
                                                
# 4697 "<previous_module>"
goto __exit_loop_51;
                                                ;
                                        }

                                        
# 4699 "<previous_module>"
;
                                }
                                
# 4701 "<previous_module>"
;
                                
# 4702 "<previous_module>"
if (
# 4703 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4704 "<previous_module>"
                                {
                                        
# 4705 "<previous_module>"
goto __exit_loop_51;
                                        ;
                                }

                                
# 4707 "<previous_module>"
;

# 4708 "<previous_module>"
                                {
                                        
# 4709 "<previous_module>"
;
                                        ;
                                        
# 4710 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4711 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4712 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4713 "<previous_module>"
                                        {
                                                
# 4714 "<previous_module>"
tpop_0_189: IF(2,189,tpop_0_190)__CSEQ_removeindent;
                                                
# 4715 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4716 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 4717 "<previous_module>"
goto __exit__lfds711_stack_pop_1_2;
                                                ;
                                        }

                                        
# 4719 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 190);
                                        ;
                                        
# 4720 "<previous_module>"
tpop_0_190: IF(2,190,tpop_0_191)__CSEQ_removeindent;
                                        
# 4721 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4722 "<previous_module>"
tpop_0_191: IF(2,191,tpop_0_192)__CSEQ_removeindent;
                                        
# 4723 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4724 "<previous_module>"
tpop_0_192: IF(2,192,tpop_0_193)__CSEQ_removeindent;
                                        
# 4725 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 4726 "<previous_module>"
tpop_0_193: IF(2,193,tpop_0_194)__CSEQ_removeindent;
                                        
# 4727 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4728 "<previous_module>"
tpop_0_194: IF(2,194,tpop_0_195)__CSEQ_removeindent;
                                        
# 4729 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 4730 "<previous_module>"
;
                                        ;
                                        
# 4731 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4732 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4733 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4734 "<previous_module>"
                                        {

# 4735 "<previous_module>"
                                                {
                                                        
# 4736 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4737 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4738 "<previous_module>"
                                                        {
                                                                
# 4739 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4741 "<previous_module>"
;
                                                        
# 4742 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4743 "<previous_module>"
                                                        {
                                                                
# 4744 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4746 "<previous_module>"
;
                                                        
# 4747 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4748 "<previous_module>"
                                                        {
                                                                
# 4749 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4751 "<previous_module>"
;
                                                        
# 4752 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4753 "<previous_module>"
                                                        {
                                                                
# 4754 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4756 "<previous_module>"
;
                                                        
# 4757 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4758 "<previous_module>"
                                                        {
                                                                
# 4759 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4761 "<previous_module>"
;
                                                        
# 4762 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4763 "<previous_module>"
tpop_0_195: IF(2,195,tpop_0_196)__CSEQ_removeindent;
                                                        
# 4764 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 4765 "<previous_module>"
__exit_loop_53:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 196);

                                                        
# 4766 "<previous_module>"
;
                                                        ;
                                                        
# 4767 "<previous_module>"
__exit__exponential_backoff_3_11:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 196);

                                                        
# 4768 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4770 "<previous_module>"
;
                                                
# 4771 "<previous_module>"
tpop_0_196: IF(2,196,tpop_0_197)__CSEQ_removeindent;
                                                
# 4772 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 4773 "<previous_module>"
tpop_0_197: IF(2,197,tpop_0_198)__CSEQ_removeindent;
                                                
# 4774 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 4776 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 198);
                                        ;
                                        
# 4777 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4778 "<previous_module>"
;
                                        ;
                                        
# 4779 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4780 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4781 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4782 "<previous_module>"
                                        {
                                                
# 4783 "<previous_module>"
goto __exit_loop_51;
                                                ;
                                        }

                                        
# 4785 "<previous_module>"
;
                                }
                                
# 4787 "<previous_module>"
;
                                
# 4788 "<previous_module>"
if (
# 4789 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4790 "<previous_module>"
                                {
                                        
# 4791 "<previous_module>"
goto __exit_loop_51;
                                        ;
                                }

                                
# 4793 "<previous_module>"
;

# 4794 "<previous_module>"
                                {
                                        
# 4795 "<previous_module>"
;
                                        ;
                                        
# 4796 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4797 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4798 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4799 "<previous_module>"
                                        {
                                                
# 4800 "<previous_module>"
tpop_0_198: IF(2,198,tpop_0_199)__CSEQ_removeindent;
                                                
# 4801 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4802 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 4803 "<previous_module>"
goto __exit__lfds711_stack_pop_1_2;
                                                ;
                                        }

                                        
# 4805 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 199);
                                        ;
                                        
# 4806 "<previous_module>"
tpop_0_199: IF(2,199,tpop_0_200)__CSEQ_removeindent;
                                        
# 4807 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4808 "<previous_module>"
tpop_0_200: IF(2,200,tpop_0_201)__CSEQ_removeindent;
                                        
# 4809 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4810 "<previous_module>"
tpop_0_201: IF(2,201,tpop_0_202)__CSEQ_removeindent;
                                        
# 4811 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 4812 "<previous_module>"
tpop_0_202: IF(2,202,tpop_0_203)__CSEQ_removeindent;
                                        
# 4813 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4814 "<previous_module>"
tpop_0_203: IF(2,203,tpop_0_204)__CSEQ_removeindent;
                                        
# 4815 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 4816 "<previous_module>"
;
                                        ;
                                        
# 4817 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4818 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4819 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4820 "<previous_module>"
                                        {

# 4821 "<previous_module>"
                                                {
                                                        
# 4822 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4823 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4824 "<previous_module>"
                                                        {
                                                                
# 4825 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4827 "<previous_module>"
;
                                                        
# 4828 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4829 "<previous_module>"
                                                        {
                                                                
# 4830 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4832 "<previous_module>"
;
                                                        
# 4833 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4834 "<previous_module>"
                                                        {
                                                                
# 4835 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4837 "<previous_module>"
;
                                                        
# 4838 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4839 "<previous_module>"
                                                        {
                                                                
# 4840 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4842 "<previous_module>"
;
                                                        
# 4843 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4844 "<previous_module>"
                                                        {
                                                                
# 4845 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4847 "<previous_module>"
;
                                                        
# 4848 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4849 "<previous_module>"
tpop_0_204: IF(2,204,tpop_0_205)__CSEQ_removeindent;
                                                        
# 4850 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 4851 "<previous_module>"
__exit_loop_54:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 205);

                                                        
# 4852 "<previous_module>"
;
                                                        ;
                                                        
# 4853 "<previous_module>"
__exit__exponential_backoff_3_12:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 205);

                                                        
# 4854 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4856 "<previous_module>"
;
                                                
# 4857 "<previous_module>"
tpop_0_205: IF(2,205,tpop_0_206)__CSEQ_removeindent;
                                                
# 4858 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 4859 "<previous_module>"
tpop_0_206: IF(2,206,tpop_0_207)__CSEQ_removeindent;
                                                
# 4860 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 4862 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 207);
                                        ;
                                        
# 4863 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4864 "<previous_module>"
;
                                        ;
                                        
# 4865 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4866 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4867 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4868 "<previous_module>"
                                        {
                                                
# 4869 "<previous_module>"
goto __exit_loop_51;
                                                ;
                                        }

                                        
# 4871 "<previous_module>"
;
                                }
                                
# 4873 "<previous_module>"
;
                                
# 4874 "<previous_module>"
if (
# 4875 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4876 "<previous_module>"
                                {
                                        
# 4877 "<previous_module>"
goto __exit_loop_51;
                                        ;
                                }

                                
# 4879 "<previous_module>"
;

# 4880 "<previous_module>"
                                {
                                        
# 4881 "<previous_module>"
;
                                        ;
                                        
# 4882 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4883 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4884 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4885 "<previous_module>"
                                        {
                                                
# 4886 "<previous_module>"
tpop_0_207: IF(2,207,tpop_0_208)__CSEQ_removeindent;
                                                
# 4887 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4888 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 4889 "<previous_module>"
goto __exit__lfds711_stack_pop_1_2;
                                                ;
                                        }

                                        
# 4891 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 208);
                                        ;
                                        
# 4892 "<previous_module>"
tpop_0_208: IF(2,208,tpop_0_209)__CSEQ_removeindent;
                                        
# 4893 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4894 "<previous_module>"
tpop_0_209: IF(2,209,tpop_0_210)__CSEQ_removeindent;
                                        
# 4895 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4896 "<previous_module>"
tpop_0_210: IF(2,210,tpop_0_211)__CSEQ_removeindent;
                                        
# 4897 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 4898 "<previous_module>"
tpop_0_211: IF(2,211,tpop_0_212)__CSEQ_removeindent;
                                        
# 4899 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4900 "<previous_module>"
tpop_0_212: IF(2,212,tpop_0_213)__CSEQ_removeindent;
                                        
# 4901 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 4902 "<previous_module>"
;
                                        ;
                                        
# 4903 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4904 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4905 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4906 "<previous_module>"
                                        {

# 4907 "<previous_module>"
                                                {
                                                        
# 4908 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4909 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4910 "<previous_module>"
                                                        {
                                                                
# 4911 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4913 "<previous_module>"
;
                                                        
# 4914 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4915 "<previous_module>"
                                                        {
                                                                
# 4916 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4918 "<previous_module>"
;
                                                        
# 4919 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4920 "<previous_module>"
                                                        {
                                                                
# 4921 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4923 "<previous_module>"
;
                                                        
# 4924 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4925 "<previous_module>"
                                                        {
                                                                
# 4926 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4928 "<previous_module>"
;
                                                        
# 4929 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4930 "<previous_module>"
                                                        {
                                                                
# 4931 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4933 "<previous_module>"
;
                                                        
# 4934 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4935 "<previous_module>"
tpop_0_213: IF(2,213,tpop_0_214)__CSEQ_removeindent;
                                                        
# 4936 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 4937 "<previous_module>"
__exit_loop_55:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 214);

                                                        
# 4938 "<previous_module>"
;
                                                        ;
                                                        
# 4939 "<previous_module>"
__exit__exponential_backoff_3_13:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 214);

                                                        
# 4940 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4942 "<previous_module>"
;
                                                
# 4943 "<previous_module>"
tpop_0_214: IF(2,214,tpop_0_215)__CSEQ_removeindent;
                                                
# 4944 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 4945 "<previous_module>"
tpop_0_215: IF(2,215,tpop_0_216)__CSEQ_removeindent;
                                                
# 4946 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 4948 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 216);
                                        ;
                                        
# 4949 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4950 "<previous_module>"
;
                                        ;
                                        
# 4951 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4952 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4953 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4954 "<previous_module>"
                                        {
                                                
# 4955 "<previous_module>"
goto __exit_loop_51;
                                                ;
                                        }

                                        
# 4957 "<previous_module>"
;
                                }
                                
# 4959 "<previous_module>"
;
                                
# 4960 "<previous_module>"
if (
# 4961 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4962 "<previous_module>"
                                {
                                        
# 4963 "<previous_module>"
goto __exit_loop_51;
                                        ;
                                }

                                
# 4965 "<previous_module>"
;

# 4966 "<previous_module>"
                                {
                                        
# 4967 "<previous_module>"
;
                                        ;
                                        
# 4968 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4969 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4970 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4971 "<previous_module>"
                                        {
                                                
# 4972 "<previous_module>"
tpop_0_216: IF(2,216,tpop_0_217)__CSEQ_removeindent;
                                                
# 4973 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4974 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 4975 "<previous_module>"
goto __exit__lfds711_stack_pop_1_2;
                                                ;
                                        }

                                        
# 4977 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 217);
                                        ;
                                        
# 4978 "<previous_module>"
tpop_0_217: IF(2,217,tpop_0_218)__CSEQ_removeindent;
                                        
# 4979 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4980 "<previous_module>"
tpop_0_218: IF(2,218,tpop_0_219)__CSEQ_removeindent;
                                        
# 4981 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4982 "<previous_module>"
tpop_0_219: IF(2,219,tpop_0_220)__CSEQ_removeindent;
                                        
# 4983 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 4984 "<previous_module>"
tpop_0_220: IF(2,220,tpop_0_221)__CSEQ_removeindent;
                                        
# 4985 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4986 "<previous_module>"
tpop_0_221: IF(2,221,tpop_0_222)__CSEQ_removeindent;
                                        
# 4987 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 4988 "<previous_module>"
;
                                        ;
                                        
# 4989 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4990 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4991 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4992 "<previous_module>"
                                        {

# 4993 "<previous_module>"
                                                {
                                                        
# 4994 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4995 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4996 "<previous_module>"
                                                        {
                                                                
# 4997 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4999 "<previous_module>"
;
                                                        
# 5000 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5001 "<previous_module>"
                                                        {
                                                                
# 5002 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5004 "<previous_module>"
;
                                                        
# 5005 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5006 "<previous_module>"
                                                        {
                                                                
# 5007 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5009 "<previous_module>"
;
                                                        
# 5010 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5011 "<previous_module>"
                                                        {
                                                                
# 5012 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5014 "<previous_module>"
;
                                                        
# 5015 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5016 "<previous_module>"
                                                        {
                                                                
# 5017 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5019 "<previous_module>"
;
                                                        
# 5020 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5021 "<previous_module>"
tpop_0_222: IF(2,222,tpop_0_223)__CSEQ_removeindent;
                                                        
# 5022 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 5023 "<previous_module>"
__exit_loop_56:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 223);

                                                        
# 5024 "<previous_module>"
;
                                                        ;
                                                        
# 5025 "<previous_module>"
__exit__exponential_backoff_3_14:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 223);

                                                        
# 5026 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5028 "<previous_module>"
;
                                                
# 5029 "<previous_module>"
tpop_0_223: IF(2,223,tpop_0_224)__CSEQ_removeindent;
                                                
# 5030 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 5031 "<previous_module>"
tpop_0_224: IF(2,224,tpop_0_225)__CSEQ_removeindent;
                                                
# 5032 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 5034 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 225);
                                        ;
                                        
# 5035 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 5036 "<previous_module>"
;
                                        ;
                                        
# 5037 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 5038 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 5039 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 5040 "<previous_module>"
                                        {
                                                
# 5041 "<previous_module>"
goto __exit_loop_51;
                                                ;
                                        }

                                        
# 5043 "<previous_module>"
;
                                }
                                
# 5045 "<previous_module>"
;
                                
# 5046 "<previous_module>"
tpop_0_225: IF(2,225,tpop_0_226)__CSEQ_removeindent;
                                
# 5047 "<previous_module>"
__CPROVER_assume(
# 5048 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                
# 5049 "<previous_module>"
__exit_loop_51:
                                __CPROVER_assume(__cs_pc_cs[2] >= 226);

                                
# 5050 "<previous_module>"
;
                                ;
                                
# 5051 "<previous_module>"
tpop_0_226: IF(2,226,tpop_0_227)__CSEQ_removeindent;
                                
# 5052 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                
# 5053 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = __cs_local_lfds711_stack_pop_result;
                                
# 5054 "<previous_module>"
goto __exit__lfds711_stack_pop_1_2;
                                ;
                                
# 5055 "<previous_module>"
__exit__lfds711_stack_pop_1_2:
                                __CPROVER_assume(__cs_pc_cs[2] >= 227);

                                
# 5056 "<previous_module>"
;
                                ;
                        }
                        
# 5058 "<previous_module>"
;
                        
# 5059 "<previous_module>"
__cs_local_delete_res = __cs_retval__lfds711_stack_pop_1;
                        
# 5060 "<previous_module>"
;
                        ;
                        
# 5061 "<previous_module>"
static _Bool __cs_local_delete___cs_tmp_if_cond_19;
                        
# 5062 "<previous_module>"
__cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res == 0;
                        
# 5063 "<previous_module>"
if (__cs_local_delete___cs_tmp_if_cond_19)

# 5064 "<previous_module>"
                        {
                                
# 5065 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                                
# 5066 "<previous_module>"
goto __exit__delete_1_2;
                                ;
                        }

                        
# 5068 "<previous_module>"
;
                        
# 5069 "<previous_module>"
tpop_0_227: IF(2,227,tpop_0_228)__CSEQ_removeindent;
                        
# 5070 "<previous_module>"
__cs_local_delete_temp_td = (*__cs_local_delete_se).value;
                        
# 5071 "<previous_module>"
static int __cs_local_delete_id_popped;
                        
# 5072 "<previous_module>"
tpop_0_228: IF(2,228,tpop_0_229)__CSEQ_removeindent;
                        
# 5073 "<previous_module>"
__cs_local_delete_id_popped = (*__cs_local_delete_temp_td).user_id;
                        
# 5074 "<previous_module>"
tpop_0_229: IF(2,229,tpop_0_230)__CSEQ_removeindent;
                        
# 5075 "<previous_module>"
printf("%llu\n", (*__cs_local_delete_temp_td).user_id);
                        
# 5076 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                        
# 5077 "<previous_module>"
goto __exit__delete_1_2;
                        ;
                        
# 5078 "<previous_module>"
__exit__delete_1_2:
                        __CPROVER_assume(__cs_pc_cs[2] >= 230);

                        
# 5079 "<previous_module>"
;
                        ;
                }
                
# 5081 "<previous_module>"
;
                
# 5082 "<previous_module>"
__cs_retval__delete_1;
                
# 5083 "<previous_module>"
;
                ;
                
# 5084 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_26;
                
# 5085 "<previous_module>"
tpop_0_230: IF(2,230,tpop_0_231)__CSEQ_removeindent;
                
# 5086 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
                
# 5087 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_26)

# 5088 "<previous_module>"
                {
                        
# 5089 "<previous_module>"
tpop_0_231: IF(2,231,tpop_0_232)__CSEQ_removeindent;
                        
# 5090 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                }

                
# 5092 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 232);
                ;
                
# 5093 "<previous_module>"
;
                ;
        }
        
# 5095 "<previous_module>"
;
        
# 5096 "<previous_module>"
__cs_local_pop_loop++;

# 5097 "<previous_module>"
        {
                
# 5098 "<previous_module>"
;
                ;
                
# 5099 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_25;
                
# 5100 "<previous_module>"
tpop_0_232: IF(2,232,tpop_0_233)__CSEQ_removeindent;
                
# 5101 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
                
# 5102 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_25)

# 5103 "<previous_module>"
                {
                        
# 5104 "<previous_module>"
tpop_0_233: IF(2,233,tpop_0_234)__CSEQ_removeindent;
                        
# 5105 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                }

                
# 5107 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 234);
                ;
                
# 5108 "<previous_module>"
;
                ;
                
# 5109 "<previous_module>"
static int __cs_retval__delete_1;

# 5110 "<previous_module>"
                {
                        
# 5111 "<previous_module>"
static struct lfds711_stack_state *__cs_param_delete_s;
                        
# 5112 "<previous_module>"
tpop_0_234: IF(2,234,tpop_0_235)__CSEQ_removeindent;
                        
# 5113 "<previous_module>"
__cs_param_delete_s = ss;
                        
# 5114 "<previous_module>"
static struct lfds711_stack_element *__cs_local_delete_se;
                        
# 5115 "<previous_module>"
static struct test_data *__cs_local_delete_temp_td;
                        
# 5116 "<previous_module>"
static int __cs_local_delete_res;
                        
# 5117 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_1;

# 5118 "<previous_module>"
                        {
                                
# 5119 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                
# 5120 "<previous_module>"
tpop_0_235: IF(2,235,tpop_0_236)__CSEQ_removeindent;
                                
# 5121 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = &mystack;
                                
# 5122 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                
# 5123 "<previous_module>"
tpop_0_236: IF(2,236,tpop_0_237)__CSEQ_removeindent;
                                
# 5124 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_delete_se;
                                
# 5125 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                
# 5126 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                
# 5127 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                
# 5128 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                
# 5129 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                
# 5130 "<previous_module>"
;
                                ;
                                
# 5131 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                
# 5132 "<previous_module>"
tpop_0_237: IF(2,237,tpop_0_238)__CSEQ_removeindent;
                                
# 5133 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                
# 5134 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 5135 "<previous_module>"
                                {
                                        
# 5136 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 5137 "<previous_module>"
tpop_0_238: IF(2,238,tpop_0_239)__CSEQ_removeindent;
                                        
# 5138 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 5139 "<previous_module>"
tpop_0_239: IF(2,239,tpop_0_240)__CSEQ_removeindent;
                                        
# 5140 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 5142 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 240);
                                ;
                                
# 5143 "<previous_module>"
;
                                ;
                                
# 5144 "<previous_module>"
;
                                ;
                                
# 5145 "<previous_module>"
;
                                ;
                                
# 5146 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                
# 5147 "<previous_module>"
tpop_0_240: IF(2,240,tpop_0_241)__CSEQ_removeindent;
                                
# 5148 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                
# 5149 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 5150 "<previous_module>"
                                {
                                        
# 5151 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 5152 "<previous_module>"
tpop_0_241: IF(2,241,tpop_0_242)__CSEQ_removeindent;
                                        
# 5153 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 5154 "<previous_module>"
tpop_0_242: IF(2,242,tpop_0_243)__CSEQ_removeindent;
                                        
# 5155 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 5157 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 243);
                                ;
                                
# 5158 "<previous_module>"
;
                                ;
                                
# 5159 "<previous_module>"
;
                                ;
                                
# 5160 "<previous_module>"
tpop_0_243: IF(2,243,tpop_0_244)__CSEQ_removeindent;
                                
# 5161 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 5162 "<previous_module>"
tpop_0_244: IF(2,244,tpop_0_245)__CSEQ_removeindent;
                                
# 5163 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 5164 "<previous_module>"
tpop_0_245: IF(2,245,tpop_0_246)__CSEQ_removeindent;
                                
# 5165 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                
# 5166 "<previous_module>"
tpop_0_246: IF(2,246,tpop_0_247)__CSEQ_removeindent;
                                
# 5167 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                
# 5168 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                
# 5169 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                
# 5170 "<previous_module>"
;
                                ;
                                
# 5171 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                
# 5172 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 5173 "<previous_module>"
                                {
                                        
# 5174 "<previous_module>"
;
                                        ;
                                        
# 5175 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                        
# 5176 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 5177 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 5178 "<previous_module>"
                                        {
                                                
# 5179 "<previous_module>"
tpop_0_247: IF(2,247,tpop_0_248)__CSEQ_removeindent;
                                                
# 5180 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 5181 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 5182 "<previous_module>"
goto __exit__lfds711_stack_pop_1_3;
                                                ;
                                        }

                                        
# 5184 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 248);
                                        ;
                                        
# 5185 "<previous_module>"
tpop_0_248: IF(2,248,tpop_0_249)__CSEQ_removeindent;
                                        
# 5186 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 5187 "<previous_module>"
tpop_0_249: IF(2,249,tpop_0_250)__CSEQ_removeindent;
                                        
# 5188 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 5189 "<previous_module>"
tpop_0_250: IF(2,250,tpop_0_251)__CSEQ_removeindent;
                                        
# 5190 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 5191 "<previous_module>"
tpop_0_251: IF(2,251,tpop_0_252)__CSEQ_removeindent;
                                        
# 5192 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 5193 "<previous_module>"
tpop_0_252: IF(2,252,tpop_0_253)__CSEQ_removeindent;
                                        
# 5194 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 5195 "<previous_module>"
;
                                        ;
                                        
# 5196 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                        
# 5197 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 5198 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 5199 "<previous_module>"
                                        {

# 5200 "<previous_module>"
                                                {
                                                        
# 5201 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5202 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5203 "<previous_module>"
                                                        {
                                                                
# 5204 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5206 "<previous_module>"
;
                                                        
# 5207 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5208 "<previous_module>"
                                                        {
                                                                
# 5209 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5211 "<previous_module>"
;
                                                        
# 5212 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5213 "<previous_module>"
                                                        {
                                                                
# 5214 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5216 "<previous_module>"
;
                                                        
# 5217 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5218 "<previous_module>"
                                                        {
                                                                
# 5219 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5221 "<previous_module>"
;
                                                        
# 5222 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5223 "<previous_module>"
                                                        {
                                                                
# 5224 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5226 "<previous_module>"
;
                                                        
# 5227 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5228 "<previous_module>"
tpop_0_253: IF(2,253,tpop_0_254)__CSEQ_removeindent;
                                                        
# 5229 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 5230 "<previous_module>"
__exit_loop_58:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 254);

                                                        
# 5231 "<previous_module>"
;
                                                        ;
                                                        
# 5232 "<previous_module>"
__exit__exponential_backoff_2_3:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 254);

                                                        
# 5233 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5235 "<previous_module>"
;
                                                
# 5236 "<previous_module>"
tpop_0_254: IF(2,254,tpop_0_255)__CSEQ_removeindent;
                                                
# 5237 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 5238 "<previous_module>"
tpop_0_255: IF(2,255,tpop_0_256)__CSEQ_removeindent;
                                                
# 5239 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 5241 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 256);
                                        ;
                                        
# 5242 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 5243 "<previous_module>"
;
                                        ;
                                        
# 5244 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                        
# 5245 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 5246 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 5247 "<previous_module>"
                                        {
                                                
# 5248 "<previous_module>"
goto __exit_loop_57;
                                                ;
                                        }

                                        
# 5250 "<previous_module>"
;
                                }
                                
# 5252 "<previous_module>"
;
                                
# 5253 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                
# 5254 "<previous_module>"
tpop_0_256: IF(2,256,tpop_0_257)__CSEQ_removeindent;
                                
# 5255 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                
# 5256 "<previous_module>"
__exit_loop_57:
                                __CPROVER_assume(__cs_pc_cs[2] >= 257);

                                
# 5257 "<previous_module>"
;
                                ;
                                
# 5258 "<previous_module>"
if (
# 5259 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 5260 "<previous_module>"
                                {
                                        
# 5261 "<previous_module>"
goto __exit_loop_59;
                                        ;
                                }

                                
# 5263 "<previous_module>"
;

# 5264 "<previous_module>"
                                {
                                        
# 5265 "<previous_module>"
;
                                        ;
                                        
# 5266 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 5267 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 5268 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 5269 "<previous_module>"
                                        {
                                                
# 5270 "<previous_module>"
tpop_0_257: IF(2,257,tpop_0_258)__CSEQ_removeindent;
                                                
# 5271 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 5272 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 5273 "<previous_module>"
goto __exit__lfds711_stack_pop_1_3;
                                                ;
                                        }

                                        
# 5275 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 258);
                                        ;
                                        
# 5276 "<previous_module>"
tpop_0_258: IF(2,258,tpop_0_259)__CSEQ_removeindent;
                                        
# 5277 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 5278 "<previous_module>"
tpop_0_259: IF(2,259,tpop_0_260)__CSEQ_removeindent;
                                        
# 5279 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 5280 "<previous_module>"
tpop_0_260: IF(2,260,tpop_0_261)__CSEQ_removeindent;
                                        
# 5281 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 5282 "<previous_module>"
tpop_0_261: IF(2,261,tpop_0_262)__CSEQ_removeindent;
                                        
# 5283 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 5284 "<previous_module>"
tpop_0_262: IF(2,262,tpop_0_263)__CSEQ_removeindent;
                                        
# 5285 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 5286 "<previous_module>"
;
                                        ;
                                        
# 5287 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 5288 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 5289 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 5290 "<previous_module>"
                                        {

# 5291 "<previous_module>"
                                                {
                                                        
# 5292 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5293 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5294 "<previous_module>"
                                                        {
                                                                
# 5295 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5297 "<previous_module>"
;
                                                        
# 5298 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5299 "<previous_module>"
                                                        {
                                                                
# 5300 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5302 "<previous_module>"
;
                                                        
# 5303 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5304 "<previous_module>"
                                                        {
                                                                
# 5305 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5307 "<previous_module>"
;
                                                        
# 5308 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5309 "<previous_module>"
                                                        {
                                                                
# 5310 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5312 "<previous_module>"
;
                                                        
# 5313 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5314 "<previous_module>"
                                                        {
                                                                
# 5315 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5317 "<previous_module>"
;
                                                        
# 5318 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5319 "<previous_module>"
tpop_0_263: IF(2,263,tpop_0_264)__CSEQ_removeindent;
                                                        
# 5320 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 5321 "<previous_module>"
__exit_loop_60:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 264);

                                                        
# 5322 "<previous_module>"
;
                                                        ;
                                                        
# 5323 "<previous_module>"
__exit__exponential_backoff_3_15:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 264);

                                                        
# 5324 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5326 "<previous_module>"
;
                                                
# 5327 "<previous_module>"
tpop_0_264: IF(2,264,tpop_0_265)__CSEQ_removeindent;
                                                
# 5328 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 5329 "<previous_module>"
tpop_0_265: IF(2,265,tpop_0_266)__CSEQ_removeindent;
                                                
# 5330 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 5332 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 266);
                                        ;
                                        
# 5333 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 5334 "<previous_module>"
;
                                        ;
                                        
# 5335 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 5336 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 5337 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 5338 "<previous_module>"
                                        {
                                                
# 5339 "<previous_module>"
goto __exit_loop_59;
                                                ;
                                        }

                                        
# 5341 "<previous_module>"
;
                                }
                                
# 5343 "<previous_module>"
;
                                
# 5344 "<previous_module>"
if (
# 5345 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 5346 "<previous_module>"
                                {
                                        
# 5347 "<previous_module>"
goto __exit_loop_59;
                                        ;
                                }

                                
# 5349 "<previous_module>"
;

# 5350 "<previous_module>"
                                {
                                        
# 5351 "<previous_module>"
;
                                        ;
                                        
# 5352 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 5353 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 5354 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 5355 "<previous_module>"
                                        {
                                                
# 5356 "<previous_module>"
tpop_0_266: IF(2,266,tpop_0_267)__CSEQ_removeindent;
                                                
# 5357 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 5358 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 5359 "<previous_module>"
goto __exit__lfds711_stack_pop_1_3;
                                                ;
                                        }

                                        
# 5361 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 267);
                                        ;
                                        
# 5362 "<previous_module>"
tpop_0_267: IF(2,267,tpop_0_268)__CSEQ_removeindent;
                                        
# 5363 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 5364 "<previous_module>"
tpop_0_268: IF(2,268,tpop_0_269)__CSEQ_removeindent;
                                        
# 5365 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 5366 "<previous_module>"
tpop_0_269: IF(2,269,tpop_0_270)__CSEQ_removeindent;
                                        
# 5367 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 5368 "<previous_module>"
tpop_0_270: IF(2,270,tpop_0_271)__CSEQ_removeindent;
                                        
# 5369 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 5370 "<previous_module>"
tpop_0_271: IF(2,271,tpop_0_272)__CSEQ_removeindent;
                                        
# 5371 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 5372 "<previous_module>"
;
                                        ;
                                        
# 5373 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 5374 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 5375 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 5376 "<previous_module>"
                                        {

# 5377 "<previous_module>"
                                                {
                                                        
# 5378 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5379 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5380 "<previous_module>"
                                                        {
                                                                
# 5381 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5383 "<previous_module>"
;
                                                        
# 5384 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5385 "<previous_module>"
                                                        {
                                                                
# 5386 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5388 "<previous_module>"
;
                                                        
# 5389 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5390 "<previous_module>"
                                                        {
                                                                
# 5391 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5393 "<previous_module>"
;
                                                        
# 5394 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5395 "<previous_module>"
                                                        {
                                                                
# 5396 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5398 "<previous_module>"
;
                                                        
# 5399 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5400 "<previous_module>"
                                                        {
                                                                
# 5401 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5403 "<previous_module>"
;
                                                        
# 5404 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5405 "<previous_module>"
tpop_0_272: IF(2,272,tpop_0_273)__CSEQ_removeindent;
                                                        
# 5406 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 5407 "<previous_module>"
__exit_loop_61:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 273);

                                                        
# 5408 "<previous_module>"
;
                                                        ;
                                                        
# 5409 "<previous_module>"
__exit__exponential_backoff_3_16:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 273);

                                                        
# 5410 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5412 "<previous_module>"
;
                                                
# 5413 "<previous_module>"
tpop_0_273: IF(2,273,tpop_0_274)__CSEQ_removeindent;
                                                
# 5414 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 5415 "<previous_module>"
tpop_0_274: IF(2,274,tpop_0_275)__CSEQ_removeindent;
                                                
# 5416 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 5418 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 275);
                                        ;
                                        
# 5419 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 5420 "<previous_module>"
;
                                        ;
                                        
# 5421 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 5422 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 5423 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 5424 "<previous_module>"
                                        {
                                                
# 5425 "<previous_module>"
goto __exit_loop_59;
                                                ;
                                        }

                                        
# 5427 "<previous_module>"
;
                                }
                                
# 5429 "<previous_module>"
;
                                
# 5430 "<previous_module>"
if (
# 5431 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 5432 "<previous_module>"
                                {
                                        
# 5433 "<previous_module>"
goto __exit_loop_59;
                                        ;
                                }

                                
# 5435 "<previous_module>"
;

# 5436 "<previous_module>"
                                {
                                        
# 5437 "<previous_module>"
;
                                        ;
                                        
# 5438 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 5439 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 5440 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 5441 "<previous_module>"
                                        {
                                                
# 5442 "<previous_module>"
tpop_0_275: IF(2,275,tpop_0_276)__CSEQ_removeindent;
                                                
# 5443 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 5444 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 5445 "<previous_module>"
goto __exit__lfds711_stack_pop_1_3;
                                                ;
                                        }

                                        
# 5447 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 276);
                                        ;
                                        
# 5448 "<previous_module>"
tpop_0_276: IF(2,276,tpop_0_277)__CSEQ_removeindent;
                                        
# 5449 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 5450 "<previous_module>"
tpop_0_277: IF(2,277,tpop_0_278)__CSEQ_removeindent;
                                        
# 5451 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 5452 "<previous_module>"
tpop_0_278: IF(2,278,tpop_0_279)__CSEQ_removeindent;
                                        
# 5453 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 5454 "<previous_module>"
tpop_0_279: IF(2,279,tpop_0_280)__CSEQ_removeindent;
                                        
# 5455 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 5456 "<previous_module>"
tpop_0_280: IF(2,280,tpop_0_281)__CSEQ_removeindent;
                                        
# 5457 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 5458 "<previous_module>"
;
                                        ;
                                        
# 5459 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 5460 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 5461 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 5462 "<previous_module>"
                                        {

# 5463 "<previous_module>"
                                                {
                                                        
# 5464 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5465 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5466 "<previous_module>"
                                                        {
                                                                
# 5467 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5469 "<previous_module>"
;
                                                        
# 5470 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5471 "<previous_module>"
                                                        {
                                                                
# 5472 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5474 "<previous_module>"
;
                                                        
# 5475 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5476 "<previous_module>"
                                                        {
                                                                
# 5477 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5479 "<previous_module>"
;
                                                        
# 5480 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5481 "<previous_module>"
                                                        {
                                                                
# 5482 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5484 "<previous_module>"
;
                                                        
# 5485 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5486 "<previous_module>"
                                                        {
                                                                
# 5487 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5489 "<previous_module>"
;
                                                        
# 5490 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5491 "<previous_module>"
tpop_0_281: IF(2,281,tpop_0_282)__CSEQ_removeindent;
                                                        
# 5492 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 5493 "<previous_module>"
__exit_loop_62:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 282);

                                                        
# 5494 "<previous_module>"
;
                                                        ;
                                                        
# 5495 "<previous_module>"
__exit__exponential_backoff_3_17:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 282);

                                                        
# 5496 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5498 "<previous_module>"
;
                                                
# 5499 "<previous_module>"
tpop_0_282: IF(2,282,tpop_0_283)__CSEQ_removeindent;
                                                
# 5500 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 5501 "<previous_module>"
tpop_0_283: IF(2,283,tpop_0_284)__CSEQ_removeindent;
                                                
# 5502 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 5504 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 284);
                                        ;
                                        
# 5505 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 5506 "<previous_module>"
;
                                        ;
                                        
# 5507 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 5508 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 5509 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 5510 "<previous_module>"
                                        {
                                                
# 5511 "<previous_module>"
goto __exit_loop_59;
                                                ;
                                        }

                                        
# 5513 "<previous_module>"
;
                                }
                                
# 5515 "<previous_module>"
;
                                
# 5516 "<previous_module>"
if (
# 5517 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 5518 "<previous_module>"
                                {
                                        
# 5519 "<previous_module>"
goto __exit_loop_59;
                                        ;
                                }

                                
# 5521 "<previous_module>"
;

# 5522 "<previous_module>"
                                {
                                        
# 5523 "<previous_module>"
;
                                        ;
                                        
# 5524 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 5525 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 5526 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 5527 "<previous_module>"
                                        {
                                                
# 5528 "<previous_module>"
tpop_0_284: IF(2,284,tpop_0_285)__CSEQ_removeindent;
                                                
# 5529 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 5530 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 5531 "<previous_module>"
goto __exit__lfds711_stack_pop_1_3;
                                                ;
                                        }

                                        
# 5533 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 285);
                                        ;
                                        
# 5534 "<previous_module>"
tpop_0_285: IF(2,285,tpop_0_286)__CSEQ_removeindent;
                                        
# 5535 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 5536 "<previous_module>"
tpop_0_286: IF(2,286,tpop_0_287)__CSEQ_removeindent;
                                        
# 5537 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 5538 "<previous_module>"
tpop_0_287: IF(2,287,tpop_0_288)__CSEQ_removeindent;
                                        
# 5539 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 5540 "<previous_module>"
tpop_0_288: IF(2,288,tpop_0_289)__CSEQ_removeindent;
                                        
# 5541 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 5542 "<previous_module>"
tpop_0_289: IF(2,289,tpop_0_290)__CSEQ_removeindent;
                                        
# 5543 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 5544 "<previous_module>"
;
                                        ;
                                        
# 5545 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 5546 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 5547 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 5548 "<previous_module>"
                                        {

# 5549 "<previous_module>"
                                                {
                                                        
# 5550 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5551 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5552 "<previous_module>"
                                                        {
                                                                
# 5553 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5555 "<previous_module>"
;
                                                        
# 5556 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5557 "<previous_module>"
                                                        {
                                                                
# 5558 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5560 "<previous_module>"
;
                                                        
# 5561 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5562 "<previous_module>"
                                                        {
                                                                
# 5563 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5565 "<previous_module>"
;
                                                        
# 5566 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5567 "<previous_module>"
                                                        {
                                                                
# 5568 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5570 "<previous_module>"
;
                                                        
# 5571 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5572 "<previous_module>"
                                                        {
                                                                
# 5573 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5575 "<previous_module>"
;
                                                        
# 5576 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5577 "<previous_module>"
tpop_0_290: IF(2,290,tpop_0_291)__CSEQ_removeindent;
                                                        
# 5578 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 5579 "<previous_module>"
__exit_loop_63:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 291);

                                                        
# 5580 "<previous_module>"
;
                                                        ;
                                                        
# 5581 "<previous_module>"
__exit__exponential_backoff_3_18:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 291);

                                                        
# 5582 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5584 "<previous_module>"
;
                                                
# 5585 "<previous_module>"
tpop_0_291: IF(2,291,tpop_0_292)__CSEQ_removeindent;
                                                
# 5586 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 5587 "<previous_module>"
tpop_0_292: IF(2,292,tpop_0_293)__CSEQ_removeindent;
                                                
# 5588 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 5590 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 293);
                                        ;
                                        
# 5591 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 5592 "<previous_module>"
;
                                        ;
                                        
# 5593 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 5594 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 5595 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 5596 "<previous_module>"
                                        {
                                                
# 5597 "<previous_module>"
goto __exit_loop_59;
                                                ;
                                        }

                                        
# 5599 "<previous_module>"
;
                                }
                                
# 5601 "<previous_module>"
;
                                
# 5602 "<previous_module>"
if (
# 5603 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 5604 "<previous_module>"
                                {
                                        
# 5605 "<previous_module>"
goto __exit_loop_59;
                                        ;
                                }

                                
# 5607 "<previous_module>"
;

# 5608 "<previous_module>"
                                {
                                        
# 5609 "<previous_module>"
;
                                        ;
                                        
# 5610 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 5611 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 5612 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 5613 "<previous_module>"
                                        {
                                                
# 5614 "<previous_module>"
tpop_0_293: IF(2,293,tpop_0_294)__CSEQ_removeindent;
                                                
# 5615 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 5616 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 5617 "<previous_module>"
goto __exit__lfds711_stack_pop_1_3;
                                                ;
                                        }

                                        
# 5619 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 294);
                                        ;
                                        
# 5620 "<previous_module>"
tpop_0_294: IF(2,294,tpop_0_295)__CSEQ_removeindent;
                                        
# 5621 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 5622 "<previous_module>"
tpop_0_295: IF(2,295,tpop_0_296)__CSEQ_removeindent;
                                        
# 5623 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 5624 "<previous_module>"
tpop_0_296: IF(2,296,tpop_0_297)__CSEQ_removeindent;
                                        
# 5625 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 5626 "<previous_module>"
tpop_0_297: IF(2,297,tpop_0_298)__CSEQ_removeindent;
                                        
# 5627 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 5628 "<previous_module>"
tpop_0_298: IF(2,298,tpop_0_299)__CSEQ_removeindent;
                                        
# 5629 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 5630 "<previous_module>"
;
                                        ;
                                        
# 5631 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 5632 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 5633 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 5634 "<previous_module>"
                                        {

# 5635 "<previous_module>"
                                                {
                                                        
# 5636 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5637 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5638 "<previous_module>"
                                                        {
                                                                
# 5639 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5641 "<previous_module>"
;
                                                        
# 5642 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5643 "<previous_module>"
                                                        {
                                                                
# 5644 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5646 "<previous_module>"
;
                                                        
# 5647 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5648 "<previous_module>"
                                                        {
                                                                
# 5649 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5651 "<previous_module>"
;
                                                        
# 5652 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5653 "<previous_module>"
                                                        {
                                                                
# 5654 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5656 "<previous_module>"
;
                                                        
# 5657 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5658 "<previous_module>"
                                                        {
                                                                
# 5659 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5661 "<previous_module>"
;
                                                        
# 5662 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5663 "<previous_module>"
tpop_0_299: IF(2,299,tpop_0_300)__CSEQ_removeindent;
                                                        
# 5664 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 5665 "<previous_module>"
__exit_loop_64:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 300);

                                                        
# 5666 "<previous_module>"
;
                                                        ;
                                                        
# 5667 "<previous_module>"
__exit__exponential_backoff_3_19:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 300);

                                                        
# 5668 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5670 "<previous_module>"
;
                                                
# 5671 "<previous_module>"
tpop_0_300: IF(2,300,tpop_0_301)__CSEQ_removeindent;
                                                
# 5672 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 5673 "<previous_module>"
tpop_0_301: IF(2,301,tpop_0_302)__CSEQ_removeindent;
                                                
# 5674 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 5676 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 302);
                                        ;
                                        
# 5677 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 5678 "<previous_module>"
;
                                        ;
                                        
# 5679 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 5680 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 5681 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 5682 "<previous_module>"
                                        {
                                                
# 5683 "<previous_module>"
goto __exit_loop_59;
                                                ;
                                        }

                                        
# 5685 "<previous_module>"
;
                                }
                                
# 5687 "<previous_module>"
;
                                
# 5688 "<previous_module>"
tpop_0_302: IF(2,302,tpop_0_303)__CSEQ_removeindent;
                                
# 5689 "<previous_module>"
__CPROVER_assume(
# 5690 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                
# 5691 "<previous_module>"
__exit_loop_59:
                                __CPROVER_assume(__cs_pc_cs[2] >= 303);

                                
# 5692 "<previous_module>"
;
                                ;
                                
# 5693 "<previous_module>"
tpop_0_303: IF(2,303,tpop_0_304)__CSEQ_removeindent;
                                
# 5694 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                
# 5695 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = __cs_local_lfds711_stack_pop_result;
                                
# 5696 "<previous_module>"
goto __exit__lfds711_stack_pop_1_3;
                                ;
                                
# 5697 "<previous_module>"
__exit__lfds711_stack_pop_1_3:
                                __CPROVER_assume(__cs_pc_cs[2] >= 304);

                                
# 5698 "<previous_module>"
;
                                ;
                        }
                        
# 5700 "<previous_module>"
;
                        
# 5701 "<previous_module>"
__cs_local_delete_res = __cs_retval__lfds711_stack_pop_1;
                        
# 5702 "<previous_module>"
;
                        ;
                        
# 5703 "<previous_module>"
static _Bool __cs_local_delete___cs_tmp_if_cond_19;
                        
# 5704 "<previous_module>"
__cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res == 0;
                        
# 5705 "<previous_module>"
if (__cs_local_delete___cs_tmp_if_cond_19)

# 5706 "<previous_module>"
                        {
                                
# 5707 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                                
# 5708 "<previous_module>"
goto __exit__delete_1_3;
                                ;
                        }

                        
# 5710 "<previous_module>"
;
                        
# 5711 "<previous_module>"
tpop_0_304: IF(2,304,tpop_0_305)__CSEQ_removeindent;
                        
# 5712 "<previous_module>"
__cs_local_delete_temp_td = (*__cs_local_delete_se).value;
                        
# 5713 "<previous_module>"
static int __cs_local_delete_id_popped;
                        
# 5714 "<previous_module>"
tpop_0_305: IF(2,305,tpop_0_306)__CSEQ_removeindent;
                        
# 5715 "<previous_module>"
__cs_local_delete_id_popped = (*__cs_local_delete_temp_td).user_id;
                        
# 5716 "<previous_module>"
tpop_0_306: IF(2,306,tpop_0_307)__CSEQ_removeindent;
                        
# 5717 "<previous_module>"
printf("%llu\n", (*__cs_local_delete_temp_td).user_id);
                        
# 5718 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                        
# 5719 "<previous_module>"
goto __exit__delete_1_3;
                        ;
                        
# 5720 "<previous_module>"
__exit__delete_1_3:
                        __CPROVER_assume(__cs_pc_cs[2] >= 307);

                        
# 5721 "<previous_module>"
;
                        ;
                }
                
# 5723 "<previous_module>"
;
                
# 5724 "<previous_module>"
__cs_retval__delete_1;
                
# 5725 "<previous_module>"
;
                ;
                
# 5726 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_26;
                
# 5727 "<previous_module>"
tpop_0_307: IF(2,307,tpop_0_308)__CSEQ_removeindent;
                
# 5728 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
                
# 5729 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_26)

# 5730 "<previous_module>"
                {
                        
# 5731 "<previous_module>"
tpop_0_308: IF(2,308,tpop_0_309)__CSEQ_removeindent;
                        
# 5732 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                }

                
# 5734 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 309);
                ;
                
# 5735 "<previous_module>"
;
                ;
        }
        
# 5737 "<previous_module>"
;
        
# 5738 "<previous_module>"
__cs_local_pop_loop++;

# 5739 "<previous_module>"
        {
                
# 5740 "<previous_module>"
;
                ;
                
# 5741 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_25;
                
# 5742 "<previous_module>"
tpop_0_309: IF(2,309,tpop_0_310)__CSEQ_removeindent;
                
# 5743 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
                
# 5744 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_25)

# 5745 "<previous_module>"
                {
                        
# 5746 "<previous_module>"
tpop_0_310: IF(2,310,tpop_0_311)__CSEQ_removeindent;
                        
# 5747 "<previous_module>"
__cs_mutex_lock(&lock, 2);
                }

                
# 5749 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 311);
                ;
                
# 5750 "<previous_module>"
;
                ;
                
# 5751 "<previous_module>"
static int __cs_retval__delete_1;

# 5752 "<previous_module>"
                {
                        
# 5753 "<previous_module>"
static struct lfds711_stack_state *__cs_param_delete_s;
                        
# 5754 "<previous_module>"
tpop_0_311: IF(2,311,tpop_0_312)__CSEQ_removeindent;
                        
# 5755 "<previous_module>"
__cs_param_delete_s = ss;
                        
# 5756 "<previous_module>"
static struct lfds711_stack_element *__cs_local_delete_se;
                        
# 5757 "<previous_module>"
static struct test_data *__cs_local_delete_temp_td;
                        
# 5758 "<previous_module>"
static int __cs_local_delete_res;
                        
# 5759 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_1;

# 5760 "<previous_module>"
                        {
                                
# 5761 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                
# 5762 "<previous_module>"
tpop_0_312: IF(2,312,tpop_0_313)__CSEQ_removeindent;
                                
# 5763 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = &mystack;
                                
# 5764 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                
# 5765 "<previous_module>"
tpop_0_313: IF(2,313,tpop_0_314)__CSEQ_removeindent;
                                
# 5766 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_delete_se;
                                
# 5767 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                
# 5768 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                
# 5769 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                
# 5770 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                
# 5771 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                
# 5772 "<previous_module>"
;
                                ;
                                
# 5773 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                
# 5774 "<previous_module>"
tpop_0_314: IF(2,314,tpop_0_315)__CSEQ_removeindent;
                                
# 5775 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                
# 5776 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 5777 "<previous_module>"
                                {
                                        
# 5778 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 5779 "<previous_module>"
tpop_0_315: IF(2,315,tpop_0_316)__CSEQ_removeindent;
                                        
# 5780 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 5781 "<previous_module>"
tpop_0_316: IF(2,316,tpop_0_317)__CSEQ_removeindent;
                                        
# 5782 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 5784 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 317);
                                ;
                                
# 5785 "<previous_module>"
;
                                ;
                                
# 5786 "<previous_module>"
;
                                ;
                                
# 5787 "<previous_module>"
;
                                ;
                                
# 5788 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                
# 5789 "<previous_module>"
tpop_0_317: IF(2,317,tpop_0_318)__CSEQ_removeindent;
                                
# 5790 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                
# 5791 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 5792 "<previous_module>"
                                {
                                        
# 5793 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 5794 "<previous_module>"
tpop_0_318: IF(2,318,tpop_0_319)__CSEQ_removeindent;
                                        
# 5795 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 5796 "<previous_module>"
tpop_0_319: IF(2,319,tpop_0_320)__CSEQ_removeindent;
                                        
# 5797 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 5799 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 320);
                                ;
                                
# 5800 "<previous_module>"
;
                                ;
                                
# 5801 "<previous_module>"
;
                                ;
                                
# 5802 "<previous_module>"
tpop_0_320: IF(2,320,tpop_0_321)__CSEQ_removeindent;
                                
# 5803 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 5804 "<previous_module>"
tpop_0_321: IF(2,321,tpop_0_322)__CSEQ_removeindent;
                                
# 5805 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 5806 "<previous_module>"
tpop_0_322: IF(2,322,tpop_0_323)__CSEQ_removeindent;
                                
# 5807 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                
# 5808 "<previous_module>"
tpop_0_323: IF(2,323,tpop_0_324)__CSEQ_removeindent;
                                
# 5809 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                
# 5810 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                
# 5811 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                
# 5812 "<previous_module>"
;
                                ;
                                
# 5813 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                
# 5814 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 5815 "<previous_module>"
                                {
                                        
# 5816 "<previous_module>"
;
                                        ;
                                        
# 5817 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                        
# 5818 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 5819 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 5820 "<previous_module>"
                                        {
                                                
# 5821 "<previous_module>"
tpop_0_324: IF(2,324,tpop_0_325)__CSEQ_removeindent;
                                                
# 5822 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 5823 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 5824 "<previous_module>"
goto __exit__lfds711_stack_pop_1_4;
                                                ;
                                        }

                                        
# 5826 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 325);
                                        ;
                                        
# 5827 "<previous_module>"
tpop_0_325: IF(2,325,tpop_0_326)__CSEQ_removeindent;
                                        
# 5828 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 5829 "<previous_module>"
tpop_0_326: IF(2,326,tpop_0_327)__CSEQ_removeindent;
                                        
# 5830 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 5831 "<previous_module>"
tpop_0_327: IF(2,327,tpop_0_328)__CSEQ_removeindent;
                                        
# 5832 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 5833 "<previous_module>"
tpop_0_328: IF(2,328,tpop_0_329)__CSEQ_removeindent;
                                        
# 5834 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 5835 "<previous_module>"
tpop_0_329: IF(2,329,tpop_0_330)__CSEQ_removeindent;
                                        
# 5836 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 5837 "<previous_module>"
;
                                        ;
                                        
# 5838 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                        
# 5839 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 5840 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 5841 "<previous_module>"
                                        {

# 5842 "<previous_module>"
                                                {
                                                        
# 5843 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5844 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5845 "<previous_module>"
                                                        {
                                                                
# 5846 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5848 "<previous_module>"
;
                                                        
# 5849 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5850 "<previous_module>"
                                                        {
                                                                
# 5851 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5853 "<previous_module>"
;
                                                        
# 5854 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5855 "<previous_module>"
                                                        {
                                                                
# 5856 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5858 "<previous_module>"
;
                                                        
# 5859 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5860 "<previous_module>"
                                                        {
                                                                
# 5861 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5863 "<previous_module>"
;
                                                        
# 5864 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5865 "<previous_module>"
                                                        {
                                                                
# 5866 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5868 "<previous_module>"
;
                                                        
# 5869 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5870 "<previous_module>"
tpop_0_330: IF(2,330,tpop_0_331)__CSEQ_removeindent;
                                                        
# 5871 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 5872 "<previous_module>"
__exit_loop_66:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 331);

                                                        
# 5873 "<previous_module>"
;
                                                        ;
                                                        
# 5874 "<previous_module>"
__exit__exponential_backoff_2_4:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 331);

                                                        
# 5875 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5877 "<previous_module>"
;
                                                
# 5878 "<previous_module>"
tpop_0_331: IF(2,331,tpop_0_332)__CSEQ_removeindent;
                                                
# 5879 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 5880 "<previous_module>"
tpop_0_332: IF(2,332,tpop_0_333)__CSEQ_removeindent;
                                                
# 5881 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 5883 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 333);
                                        ;
                                        
# 5884 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 5885 "<previous_module>"
;
                                        ;
                                        
# 5886 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                        
# 5887 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 5888 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 5889 "<previous_module>"
                                        {
                                                
# 5890 "<previous_module>"
goto __exit_loop_65;
                                                ;
                                        }

                                        
# 5892 "<previous_module>"
;
                                }
                                
# 5894 "<previous_module>"
;
                                
# 5895 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                
# 5896 "<previous_module>"
tpop_0_333: IF(2,333,tpop_0_334)__CSEQ_removeindent;
                                
# 5897 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                
# 5898 "<previous_module>"
__exit_loop_65:
                                __CPROVER_assume(__cs_pc_cs[2] >= 334);

                                
# 5899 "<previous_module>"
;
                                ;
                                
# 5900 "<previous_module>"
if (
# 5901 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 5902 "<previous_module>"
                                {
                                        
# 5903 "<previous_module>"
goto __exit_loop_67;
                                        ;
                                }

                                
# 5905 "<previous_module>"
;

# 5906 "<previous_module>"
                                {
                                        
# 5907 "<previous_module>"
;
                                        ;
                                        
# 5908 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 5909 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 5910 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 5911 "<previous_module>"
                                        {
                                                
# 5912 "<previous_module>"
tpop_0_334: IF(2,334,tpop_0_335)__CSEQ_removeindent;
                                                
# 5913 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 5914 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 5915 "<previous_module>"
goto __exit__lfds711_stack_pop_1_4;
                                                ;
                                        }

                                        
# 5917 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 335);
                                        ;
                                        
# 5918 "<previous_module>"
tpop_0_335: IF(2,335,tpop_0_336)__CSEQ_removeindent;
                                        
# 5919 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 5920 "<previous_module>"
tpop_0_336: IF(2,336,tpop_0_337)__CSEQ_removeindent;
                                        
# 5921 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 5922 "<previous_module>"
tpop_0_337: IF(2,337,tpop_0_338)__CSEQ_removeindent;
                                        
# 5923 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 5924 "<previous_module>"
tpop_0_338: IF(2,338,tpop_0_339)__CSEQ_removeindent;
                                        
# 5925 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 5926 "<previous_module>"
tpop_0_339: IF(2,339,tpop_0_340)__CSEQ_removeindent;
                                        
# 5927 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 5928 "<previous_module>"
;
                                        ;
                                        
# 5929 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 5930 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 5931 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 5932 "<previous_module>"
                                        {

# 5933 "<previous_module>"
                                                {
                                                        
# 5934 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5935 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5936 "<previous_module>"
                                                        {
                                                                
# 5937 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5939 "<previous_module>"
;
                                                        
# 5940 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5941 "<previous_module>"
                                                        {
                                                                
# 5942 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5944 "<previous_module>"
;
                                                        
# 5945 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5946 "<previous_module>"
                                                        {
                                                                
# 5947 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5949 "<previous_module>"
;
                                                        
# 5950 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5951 "<previous_module>"
                                                        {
                                                                
# 5952 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5954 "<previous_module>"
;
                                                        
# 5955 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5956 "<previous_module>"
                                                        {
                                                                
# 5957 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5959 "<previous_module>"
;
                                                        
# 5960 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5961 "<previous_module>"
tpop_0_340: IF(2,340,tpop_0_341)__CSEQ_removeindent;
                                                        
# 5962 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 5963 "<previous_module>"
__exit_loop_68:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 341);

                                                        
# 5964 "<previous_module>"
;
                                                        ;
                                                        
# 5965 "<previous_module>"
__exit__exponential_backoff_3_20:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 341);

                                                        
# 5966 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5968 "<previous_module>"
;
                                                
# 5969 "<previous_module>"
tpop_0_341: IF(2,341,tpop_0_342)__CSEQ_removeindent;
                                                
# 5970 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 5971 "<previous_module>"
tpop_0_342: IF(2,342,tpop_0_343)__CSEQ_removeindent;
                                                
# 5972 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 5974 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 343);
                                        ;
                                        
# 5975 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 5976 "<previous_module>"
;
                                        ;
                                        
# 5977 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 5978 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 5979 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 5980 "<previous_module>"
                                        {
                                                
# 5981 "<previous_module>"
goto __exit_loop_67;
                                                ;
                                        }

                                        
# 5983 "<previous_module>"
;
                                }
                                
# 5985 "<previous_module>"
;
                                
# 5986 "<previous_module>"
if (
# 5987 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 5988 "<previous_module>"
                                {
                                        
# 5989 "<previous_module>"
goto __exit_loop_67;
                                        ;
                                }

                                
# 5991 "<previous_module>"
;

# 5992 "<previous_module>"
                                {
                                        
# 5993 "<previous_module>"
;
                                        ;
                                        
# 5994 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 5995 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 5996 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 5997 "<previous_module>"
                                        {
                                                
# 5998 "<previous_module>"
tpop_0_343: IF(2,343,tpop_0_344)__CSEQ_removeindent;
                                                
# 5999 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 6000 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 6001 "<previous_module>"
goto __exit__lfds711_stack_pop_1_4;
                                                ;
                                        }

                                        
# 6003 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 344);
                                        ;
                                        
# 6004 "<previous_module>"
tpop_0_344: IF(2,344,tpop_0_345)__CSEQ_removeindent;
                                        
# 6005 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 6006 "<previous_module>"
tpop_0_345: IF(2,345,tpop_0_346)__CSEQ_removeindent;
                                        
# 6007 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 6008 "<previous_module>"
tpop_0_346: IF(2,346,tpop_0_347)__CSEQ_removeindent;
                                        
# 6009 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 6010 "<previous_module>"
tpop_0_347: IF(2,347,tpop_0_348)__CSEQ_removeindent;
                                        
# 6011 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 6012 "<previous_module>"
tpop_0_348: IF(2,348,tpop_0_349)__CSEQ_removeindent;
                                        
# 6013 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 6014 "<previous_module>"
;
                                        ;
                                        
# 6015 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 6016 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 6017 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 6018 "<previous_module>"
                                        {

# 6019 "<previous_module>"
                                                {
                                                        
# 6020 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 6021 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 6022 "<previous_module>"
                                                        {
                                                                
# 6023 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6025 "<previous_module>"
;
                                                        
# 6026 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6027 "<previous_module>"
                                                        {
                                                                
# 6028 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6030 "<previous_module>"
;
                                                        
# 6031 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6032 "<previous_module>"
                                                        {
                                                                
# 6033 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6035 "<previous_module>"
;
                                                        
# 6036 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6037 "<previous_module>"
                                                        {
                                                                
# 6038 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6040 "<previous_module>"
;
                                                        
# 6041 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6042 "<previous_module>"
                                                        {
                                                                
# 6043 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6045 "<previous_module>"
;
                                                        
# 6046 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 6047 "<previous_module>"
tpop_0_349: IF(2,349,tpop_0_350)__CSEQ_removeindent;
                                                        
# 6048 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 6049 "<previous_module>"
__exit_loop_69:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 350);

                                                        
# 6050 "<previous_module>"
;
                                                        ;
                                                        
# 6051 "<previous_module>"
__exit__exponential_backoff_3_21:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 350);

                                                        
# 6052 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6054 "<previous_module>"
;
                                                
# 6055 "<previous_module>"
tpop_0_350: IF(2,350,tpop_0_351)__CSEQ_removeindent;
                                                
# 6056 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 6057 "<previous_module>"
tpop_0_351: IF(2,351,tpop_0_352)__CSEQ_removeindent;
                                                
# 6058 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 6060 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 352);
                                        ;
                                        
# 6061 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 6062 "<previous_module>"
;
                                        ;
                                        
# 6063 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 6064 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 6065 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 6066 "<previous_module>"
                                        {
                                                
# 6067 "<previous_module>"
goto __exit_loop_67;
                                                ;
                                        }

                                        
# 6069 "<previous_module>"
;
                                }
                                
# 6071 "<previous_module>"
;
                                
# 6072 "<previous_module>"
if (
# 6073 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 6074 "<previous_module>"
                                {
                                        
# 6075 "<previous_module>"
goto __exit_loop_67;
                                        ;
                                }

                                
# 6077 "<previous_module>"
;

# 6078 "<previous_module>"
                                {
                                        
# 6079 "<previous_module>"
;
                                        ;
                                        
# 6080 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 6081 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 6082 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 6083 "<previous_module>"
                                        {
                                                
# 6084 "<previous_module>"
tpop_0_352: IF(2,352,tpop_0_353)__CSEQ_removeindent;
                                                
# 6085 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 6086 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 6087 "<previous_module>"
goto __exit__lfds711_stack_pop_1_4;
                                                ;
                                        }

                                        
# 6089 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 353);
                                        ;
                                        
# 6090 "<previous_module>"
tpop_0_353: IF(2,353,tpop_0_354)__CSEQ_removeindent;
                                        
# 6091 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 6092 "<previous_module>"
tpop_0_354: IF(2,354,tpop_0_355)__CSEQ_removeindent;
                                        
# 6093 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 6094 "<previous_module>"
tpop_0_355: IF(2,355,tpop_0_356)__CSEQ_removeindent;
                                        
# 6095 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 6096 "<previous_module>"
tpop_0_356: IF(2,356,tpop_0_357)__CSEQ_removeindent;
                                        
# 6097 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 6098 "<previous_module>"
tpop_0_357: IF(2,357,tpop_0_358)__CSEQ_removeindent;
                                        
# 6099 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 6100 "<previous_module>"
;
                                        ;
                                        
# 6101 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 6102 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 6103 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 6104 "<previous_module>"
                                        {

# 6105 "<previous_module>"
                                                {
                                                        
# 6106 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 6107 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 6108 "<previous_module>"
                                                        {
                                                                
# 6109 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6111 "<previous_module>"
;
                                                        
# 6112 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6113 "<previous_module>"
                                                        {
                                                                
# 6114 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6116 "<previous_module>"
;
                                                        
# 6117 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6118 "<previous_module>"
                                                        {
                                                                
# 6119 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6121 "<previous_module>"
;
                                                        
# 6122 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6123 "<previous_module>"
                                                        {
                                                                
# 6124 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6126 "<previous_module>"
;
                                                        
# 6127 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6128 "<previous_module>"
                                                        {
                                                                
# 6129 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6131 "<previous_module>"
;
                                                        
# 6132 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 6133 "<previous_module>"
tpop_0_358: IF(2,358,tpop_0_359)__CSEQ_removeindent;
                                                        
# 6134 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 6135 "<previous_module>"
__exit_loop_70:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 359);

                                                        
# 6136 "<previous_module>"
;
                                                        ;
                                                        
# 6137 "<previous_module>"
__exit__exponential_backoff_3_22:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 359);

                                                        
# 6138 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6140 "<previous_module>"
;
                                                
# 6141 "<previous_module>"
tpop_0_359: IF(2,359,tpop_0_360)__CSEQ_removeindent;
                                                
# 6142 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 6143 "<previous_module>"
tpop_0_360: IF(2,360,tpop_0_361)__CSEQ_removeindent;
                                                
# 6144 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 6146 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 361);
                                        ;
                                        
# 6147 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 6148 "<previous_module>"
;
                                        ;
                                        
# 6149 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 6150 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 6151 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 6152 "<previous_module>"
                                        {
                                                
# 6153 "<previous_module>"
goto __exit_loop_67;
                                                ;
                                        }

                                        
# 6155 "<previous_module>"
;
                                }
                                
# 6157 "<previous_module>"
;
                                
# 6158 "<previous_module>"
if (
# 6159 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 6160 "<previous_module>"
                                {
                                        
# 6161 "<previous_module>"
goto __exit_loop_67;
                                        ;
                                }

                                
# 6163 "<previous_module>"
;

# 6164 "<previous_module>"
                                {
                                        
# 6165 "<previous_module>"
;
                                        ;
                                        
# 6166 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 6167 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 6168 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 6169 "<previous_module>"
                                        {
                                                
# 6170 "<previous_module>"
tpop_0_361: IF(2,361,tpop_0_362)__CSEQ_removeindent;
                                                
# 6171 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 6172 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 6173 "<previous_module>"
goto __exit__lfds711_stack_pop_1_4;
                                                ;
                                        }

                                        
# 6175 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 362);
                                        ;
                                        
# 6176 "<previous_module>"
tpop_0_362: IF(2,362,tpop_0_363)__CSEQ_removeindent;
                                        
# 6177 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 6178 "<previous_module>"
tpop_0_363: IF(2,363,tpop_0_364)__CSEQ_removeindent;
                                        
# 6179 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 6180 "<previous_module>"
tpop_0_364: IF(2,364,tpop_0_365)__CSEQ_removeindent;
                                        
# 6181 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 6182 "<previous_module>"
tpop_0_365: IF(2,365,tpop_0_366)__CSEQ_removeindent;
                                        
# 6183 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 6184 "<previous_module>"
tpop_0_366: IF(2,366,tpop_0_367)__CSEQ_removeindent;
                                        
# 6185 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 6186 "<previous_module>"
;
                                        ;
                                        
# 6187 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 6188 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 6189 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 6190 "<previous_module>"
                                        {

# 6191 "<previous_module>"
                                                {
                                                        
# 6192 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 6193 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 6194 "<previous_module>"
                                                        {
                                                                
# 6195 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6197 "<previous_module>"
;
                                                        
# 6198 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6199 "<previous_module>"
                                                        {
                                                                
# 6200 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6202 "<previous_module>"
;
                                                        
# 6203 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6204 "<previous_module>"
                                                        {
                                                                
# 6205 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6207 "<previous_module>"
;
                                                        
# 6208 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6209 "<previous_module>"
                                                        {
                                                                
# 6210 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6212 "<previous_module>"
;
                                                        
# 6213 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6214 "<previous_module>"
                                                        {
                                                                
# 6215 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6217 "<previous_module>"
;
                                                        
# 6218 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 6219 "<previous_module>"
tpop_0_367: IF(2,367,tpop_0_368)__CSEQ_removeindent;
                                                        
# 6220 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 6221 "<previous_module>"
__exit_loop_71:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 368);

                                                        
# 6222 "<previous_module>"
;
                                                        ;
                                                        
# 6223 "<previous_module>"
__exit__exponential_backoff_3_23:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 368);

                                                        
# 6224 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6226 "<previous_module>"
;
                                                
# 6227 "<previous_module>"
tpop_0_368: IF(2,368,tpop_0_369)__CSEQ_removeindent;
                                                
# 6228 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 6229 "<previous_module>"
tpop_0_369: IF(2,369,tpop_0_370)__CSEQ_removeindent;
                                                
# 6230 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 6232 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 370);
                                        ;
                                        
# 6233 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 6234 "<previous_module>"
;
                                        ;
                                        
# 6235 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 6236 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 6237 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 6238 "<previous_module>"
                                        {
                                                
# 6239 "<previous_module>"
goto __exit_loop_67;
                                                ;
                                        }

                                        
# 6241 "<previous_module>"
;
                                }
                                
# 6243 "<previous_module>"
;
                                
# 6244 "<previous_module>"
if (
# 6245 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 6246 "<previous_module>"
                                {
                                        
# 6247 "<previous_module>"
goto __exit_loop_67;
                                        ;
                                }

                                
# 6249 "<previous_module>"
;

# 6250 "<previous_module>"
                                {
                                        
# 6251 "<previous_module>"
;
                                        ;
                                        
# 6252 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 6253 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 6254 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 6255 "<previous_module>"
                                        {
                                                
# 6256 "<previous_module>"
tpop_0_370: IF(2,370,tpop_0_371)__CSEQ_removeindent;
                                                
# 6257 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 6258 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                                
# 6259 "<previous_module>"
goto __exit__lfds711_stack_pop_1_4;
                                                ;
                                        }

                                        
# 6261 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 371);
                                        ;
                                        
# 6262 "<previous_module>"
tpop_0_371: IF(2,371,tpop_0_372)__CSEQ_removeindent;
                                        
# 6263 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 6264 "<previous_module>"
tpop_0_372: IF(2,372,tpop_0_373)__CSEQ_removeindent;
                                        
# 6265 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 6266 "<previous_module>"
tpop_0_373: IF(2,373,tpop_0_374)__CSEQ_removeindent;
                                        
# 6267 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 6268 "<previous_module>"
tpop_0_374: IF(2,374,tpop_0_375)__CSEQ_removeindent;
                                        
# 6269 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 6270 "<previous_module>"
tpop_0_375: IF(2,375,tpop_0_376)__CSEQ_removeindent;
                                        
# 6271 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        
# 6272 "<previous_module>"
;
                                        ;
                                        
# 6273 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 6274 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 6275 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 6276 "<previous_module>"
                                        {

# 6277 "<previous_module>"
                                                {
                                                        
# 6278 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 6279 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 6280 "<previous_module>"
                                                        {
                                                                
# 6281 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6283 "<previous_module>"
;
                                                        
# 6284 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6285 "<previous_module>"
                                                        {
                                                                
# 6286 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6288 "<previous_module>"
;
                                                        
# 6289 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6290 "<previous_module>"
                                                        {
                                                                
# 6291 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6293 "<previous_module>"
;
                                                        
# 6294 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6295 "<previous_module>"
                                                        {
                                                                
# 6296 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6298 "<previous_module>"
;
                                                        
# 6299 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6300 "<previous_module>"
                                                        {
                                                                
# 6301 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6303 "<previous_module>"
;
                                                        
# 6304 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 6305 "<previous_module>"
tpop_0_376: IF(2,376,tpop_0_377)__CSEQ_removeindent;
                                                        
# 6306 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 10));
                                                        
# 6307 "<previous_module>"
__exit_loop_72:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 377);

                                                        
# 6308 "<previous_module>"
;
                                                        ;
                                                        
# 6309 "<previous_module>"
__exit__exponential_backoff_3_24:
                                                        __CPROVER_assume(__cs_pc_cs[2] >= 377);

                                                        
# 6310 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6312 "<previous_module>"
;
                                                
# 6313 "<previous_module>"
tpop_0_377: IF(2,377,tpop_0_378)__CSEQ_removeindent;
                                                
# 6314 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                                
# 6315 "<previous_module>"
tpop_0_378: IF(2,378,tpop_0_379)__CSEQ_removeindent;
                                                
# 6316 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                        }

                                        
# 6318 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 379);
                                        ;
                                        
# 6319 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 6320 "<previous_module>"
;
                                        ;
                                        
# 6321 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 6322 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 6323 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 6324 "<previous_module>"
                                        {
                                                
# 6325 "<previous_module>"
goto __exit_loop_67;
                                                ;
                                        }

                                        
# 6327 "<previous_module>"
;
                                }
                                
# 6329 "<previous_module>"
;
                                
# 6330 "<previous_module>"
tpop_0_379: IF(2,379,tpop_0_380)__CSEQ_removeindent;
                                
# 6331 "<previous_module>"
__CPROVER_assume(
# 6332 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                
# 6333 "<previous_module>"
__exit_loop_67:
                                __CPROVER_assume(__cs_pc_cs[2] >= 380);

                                
# 6334 "<previous_module>"
;
                                ;
                                
# 6335 "<previous_module>"
tpop_0_380: IF(2,380,tpop_0_381)__CSEQ_removeindent;
                                
# 6336 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                
# 6337 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = __cs_local_lfds711_stack_pop_result;
                                
# 6338 "<previous_module>"
goto __exit__lfds711_stack_pop_1_4;
                                ;
                                
# 6339 "<previous_module>"
__exit__lfds711_stack_pop_1_4:
                                __CPROVER_assume(__cs_pc_cs[2] >= 381);

                                
# 6340 "<previous_module>"
;
                                ;
                        }
                        
# 6342 "<previous_module>"
;
                        
# 6343 "<previous_module>"
__cs_local_delete_res = __cs_retval__lfds711_stack_pop_1;
                        
# 6344 "<previous_module>"
;
                        ;
                        
# 6345 "<previous_module>"
static _Bool __cs_local_delete___cs_tmp_if_cond_19;
                        
# 6346 "<previous_module>"
__cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res == 0;
                        
# 6347 "<previous_module>"
if (__cs_local_delete___cs_tmp_if_cond_19)

# 6348 "<previous_module>"
                        {
                                
# 6349 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                                
# 6350 "<previous_module>"
goto __exit__delete_1_4;
                                ;
                        }

                        
# 6352 "<previous_module>"
;
                        
# 6353 "<previous_module>"
tpop_0_381: IF(2,381,tpop_0_382)__CSEQ_removeindent;
                        
# 6354 "<previous_module>"
__cs_local_delete_temp_td = (*__cs_local_delete_se).value;
                        
# 6355 "<previous_module>"
static int __cs_local_delete_id_popped;
                        
# 6356 "<previous_module>"
tpop_0_382: IF(2,382,tpop_0_383)__CSEQ_removeindent;
                        
# 6357 "<previous_module>"
__cs_local_delete_id_popped = (*__cs_local_delete_temp_td).user_id;
                        
# 6358 "<previous_module>"
tpop_0_383: IF(2,383,tpop_0_384)__CSEQ_removeindent;
                        
# 6359 "<previous_module>"
printf("%llu\n", (*__cs_local_delete_temp_td).user_id);
                        
# 6360 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                        
# 6361 "<previous_module>"
goto __exit__delete_1_4;
                        ;
                        
# 6362 "<previous_module>"
__exit__delete_1_4:
                        __CPROVER_assume(__cs_pc_cs[2] >= 384);

                        
# 6363 "<previous_module>"
;
                        ;
                }
                
# 6365 "<previous_module>"
;
                
# 6366 "<previous_module>"
__cs_retval__delete_1;
                
# 6367 "<previous_module>"
;
                ;
                
# 6368 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_26;
                
# 6369 "<previous_module>"
tpop_0_384: IF(2,384,tpop_0_385)__CSEQ_removeindent;
                
# 6370 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
                
# 6371 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_26)

# 6372 "<previous_module>"
                {
                        
# 6373 "<previous_module>"
tpop_0_385: IF(2,385,tpop_0_386)__CSEQ_removeindent;
                        
# 6374 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
                }

                
# 6376 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 386);
                ;
                
# 6377 "<previous_module>"
;
                ;
        }
        
# 6379 "<previous_module>"
;
        
# 6380 "<previous_module>"
__cs_local_pop_loop++;
        
# 6381 "<previous_module>"
tpop_0_386: IF(2,386,tpop_0_387)__CSEQ_removeindent;
        
# 6382 "<previous_module>"
__CPROVER_assume(!(__cs_local_pop_loop < 5));
        
# 6383 "<previous_module>"
__exit_loop_32:
        __CPROVER_assume(__cs_pc_cs[2] >= 387);

        
# 6384 "<previous_module>"
;
        ;
        
# 6385 "<previous_module>"
__exit_pop:
        __CPROVER_assume(__cs_pc_cs[2] >= 387);

        
# 6386 "<previous_module>"
;
        ;
        
# 6387 "<previous_module>"
tpop_0_387: __CSEQ_removeindent;
        
# 6388 "<previous_module>"
__cs_exit(0, 2);
}


# 6390 "<previous_module>"
int main_thread(void)

# 6391 "<previous_module>"
{
        
# 6392 "<previous_module>"
IF(0,0,tmain_1)__CSEQ_removeindent;
        
# 6393 "<previous_module>"
__cs_mutex_init(&lock, 0);
        
# 6394 "<previous_module>"
static void *__cs_retval__init_1;

# 6395 "<previous_module>"
        {

# 6396 "<previous_module>"
                {
                        
# 6397 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss;
                        
# 6398 "<previous_module>"
__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss = &mystack;
                        
# 6399 "<previous_module>"
static void *__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
                        
# 6400 "<previous_module>"
__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state = 0;
                        
# 6401 "<previous_module>"
__cs_mutex_init(&library_lock, 0);
                        
# 6402 "<previous_module>"
;
                        ;
                        
# 6403 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3;
                        
# 6404 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3 = !(__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss != 0);
                        
# 6405 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3)

# 6406 "<previous_module>"
                        {
                                
# 6407 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                                
# 6408 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                                
# 6409 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        }

                        
# 6411 "<previous_module>"
;
                        
# 6412 "<previous_module>"
;
                        ;
                        
# 6413 "<previous_module>"
;
                        ;
                        
# 6414 "<previous_module>"
;
                        ;
                        
# 6415 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4;
                        
# 6416 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4 = !((((lfds711_pal_uint_t) (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top) % 128) == 0);
                        
# 6417 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4)

# 6418 "<previous_module>"
                        {
                                
# 6419 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                                
# 6420 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                                
# 6421 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        }

                        
# 6423 "<previous_module>"
;
                        
# 6424 "<previous_module>"
;
                        ;
                        
# 6425 "<previous_module>"
;
                        ;
                        
# 6426 "<previous_module>"
;
                        ;
                        
# 6427 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5;
                        
# 6428 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state)) % 128) == 0);
                        
# 6429 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5)

# 6430 "<previous_module>"
                        {
                                
# 6431 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                                
# 6432 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                                
# 6433 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        }

                        
# 6435 "<previous_module>"
;
                        
# 6436 "<previous_module>"
;
                        ;
                        
# 6437 "<previous_module>"
;
                        ;
                        
# 6438 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                        
# 6439 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[0] = 0;
                        
# 6440 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[1] = 0;
                        
# 6441 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state = __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;

# 6442 "<previous_module>"
                        {
                                
# 6443 "<previous_module>"
static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
                                
# 6444 "<previous_module>"
__cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).pop_backoff;
                                
# 6445 "<previous_module>"
;
                                ;
                                
# 6446 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
                                
# 6447 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
                                
# 6448 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)

# 6449 "<previous_module>"
                                {
                                        
# 6450 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 6451 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 6452 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 6454 "<previous_module>"
;
                                
# 6455 "<previous_module>"
;
                                ;
                                
# 6456 "<previous_module>"
;
                                ;
                                
# 6457 "<previous_module>"
;
                                ;
                                
# 6458 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
                                
# 6459 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
                                
# 6460 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)

# 6461 "<previous_module>"
                                {
                                        
# 6462 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 6463 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 6464 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 6466 "<previous_module>"
;
                                
# 6467 "<previous_module>"
;
                                ;
                                
# 6468 "<previous_module>"
;
                                ;
                                
# 6469 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock = LFDS711_MISC_FLAG_LOWERED;
                                
# 6470 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[0] = 0;
                                
# 6471 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[1] = 0;
                                
# 6472 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).metric = 1;
                                
# 6473 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).total_operations = 0;
                                
# 6474 "<previous_module>"
goto __exit__lfds711_misc_internal_backoff_init_1;
                                ;
                                
# 6475 "<previous_module>"
__exit__lfds711_misc_internal_backoff_init_1:
                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                
# 6476 "<previous_module>"
;
                                ;
                        }
                        
# 6478 "<previous_module>"
;

# 6479 "<previous_module>"
                        {
                                
# 6480 "<previous_module>"
static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
                                
# 6481 "<previous_module>"
__cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).push_backoff;
                                
# 6482 "<previous_module>"
;
                                ;
                                
# 6483 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
                                
# 6484 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
                                
# 6485 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)

# 6486 "<previous_module>"
                                {
                                        
# 6487 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 6488 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 6489 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 6491 "<previous_module>"
;
                                
# 6492 "<previous_module>"
;
                                ;
                                
# 6493 "<previous_module>"
;
                                ;
                                
# 6494 "<previous_module>"
;
                                ;
                                
# 6495 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
                                
# 6496 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
                                
# 6497 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)

# 6498 "<previous_module>"
                                {
                                        
# 6499 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 6500 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 6501 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 6503 "<previous_module>"
;
                                
# 6504 "<previous_module>"
;
                                ;
                                
# 6505 "<previous_module>"
;
                                ;
                                
# 6506 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock = LFDS711_MISC_FLAG_LOWERED;
                                
# 6507 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[0] = 0;
                                
# 6508 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[1] = 0;
                                
# 6509 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).metric = 1;
                                
# 6510 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).total_operations = 0;
                                
# 6511 "<previous_module>"
goto __exit__lfds711_misc_internal_backoff_init_2;
                                ;
                                
# 6512 "<previous_module>"
__exit__lfds711_misc_internal_backoff_init_2:
                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                
# 6513 "<previous_module>"
;
                                ;
                        }
                        
# 6515 "<previous_module>"
;

# 6516 "<previous_module>"
                        {
                                
# 6517 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_misc_force_store_destination;
                                
# 6518 "<previous_module>"
__cs_init_scalar(&__cs_local_lfds711_misc_force_store_destination, sizeof(lfds711_pal_uint_t));

# 6519 "<previous_module>"
                                {
                                        
# 6520 "<previous_module>"
static unsigned long __cs_retval____atomic_exchange_n_1;

# 6521 "<previous_module>"
                                        {
                                                
# 6522 "<previous_module>"
static int long long unsigned *__cs_param___atomic_exchange_n_previous;
                                                
# 6523 "<previous_module>"
__cs_param___atomic_exchange_n_previous = &__cs_local_lfds711_misc_force_store_destination;
                                                
# 6524 "<previous_module>"
static int long long unsigned __cs_param___atomic_exchange_n_new;
                                                
# 6525 "<previous_module>"
__cs_param___atomic_exchange_n_new = 0;
                                                
# 6526 "<previous_module>"
static int __cs_param___atomic_exchange_n_memorder;
                                                
# 6527 "<previous_module>"
__cs_param___atomic_exchange_n_memorder = 0;
                                                
# 6528 "<previous_module>"
static int __cs_local___atomic_exchange_n_res;
                                                
# 6529 "<previous_module>"
__cs_local___atomic_exchange_n_res = __CSEQ_atomic_exchange(__cs_param___atomic_exchange_n_previous, __cs_param___atomic_exchange_n_new, __cs_param___atomic_exchange_n_memorder);
                                                
# 6530 "<previous_module>"
__cs_retval____atomic_exchange_n_1 = __cs_local___atomic_exchange_n_res;
                                                
# 6531 "<previous_module>"
goto __exit____atomic_exchange_n_1;
                                                ;
                                                
# 6532 "<previous_module>"
__exit____atomic_exchange_n_1:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                                
# 6533 "<previous_module>"
;
                                                ;
                                        }
                                        
# 6535 "<previous_module>"
;
                                        
# 6536 "<previous_module>"
(void) __cs_retval____atomic_exchange_n_1;
                                }
                                
# 6538 "<previous_module>"
;
                                
# 6539 "<previous_module>"
;
                                ;
                                
# 6540 "<previous_module>"
goto __exit__lfds711_misc_force_store_1;
                                ;
                                
# 6541 "<previous_module>"
__exit__lfds711_misc_force_store_1:
                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                
# 6542 "<previous_module>"
;
                                ;
                        }
                        
# 6544 "<previous_module>"
;
                        
# 6545 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                        
# 6546 "<previous_module>"
goto __exit__lfds711_stack_init_valid_on_current_logical_core_1;
                        ;
                        
# 6547 "<previous_module>"
__exit__lfds711_stack_init_valid_on_current_logical_core_1:
                        __CPROVER_assume(__cs_pc_cs[0] >= 1);

                        
# 6548 "<previous_module>"
;
                        ;
                }
                
# 6550 "<previous_module>"
;
                
# 6551 "<previous_module>"
__cs_retval__init_1 = (void *) (&mystack);
                
# 6552 "<previous_module>"
goto __exit__init_1;
                ;
                
# 6553 "<previous_module>"
__exit__init_1:
                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                
# 6554 "<previous_module>"
;
                ;
        }
        
# 6556 "<previous_module>"
;
        
# 6557 "<previous_module>"
ss = __cs_retval__init_1;
        
# 6558 "<previous_module>"
static __cs_t __cs_local_main_t1;
        
# 6559 "<previous_module>"
;
        ;
        
# 6560 "<previous_module>"
static __cs_t __cs_local_main_t2;
        
# 6561 "<previous_module>"
;
        ;
        
# 6562 "<previous_module>"
static __cs_t __cs_local_main_t3;
        
# 6563 "<previous_module>"
;
        ;
        
# 6564 "<previous_module>"
static __cs_t __cs_local_main_t4;
        
# 6565 "<previous_module>"
;
        ;
        
# 6566 "<previous_module>"
static __cs_t __cs_local_main_t5;
        
# 6567 "<previous_module>"
;
        ;
        
# 6568 "<previous_module>"
static __cs_t __cs_local_main_t6;
        
# 6569 "<previous_module>"
;
        ;
        
# 6570 "<previous_module>"
static __cs_t __cs_local_main_t7;
        
# 6571 "<previous_module>"
;
        ;
        
# 6572 "<previous_module>"
static __cs_t __cs_local_main_t8;
        
# 6573 "<previous_module>"
;
        ;
        
# 6574 "<previous_module>"
static __cs_t __cs_local_main_t9;
        
# 6575 "<previous_module>"
;
        ;
        
# 6576 "<previous_module>"
static __cs_t __cs_local_main_t10;
        
# 6577 "<previous_module>"
;
        ;
        
# 6578 "<previous_module>"
__cs_create(&__cs_local_main_t1, 0, push_0, 0, 1);
        
# 6579 "<previous_module>"
tmain_1: IF(0,1,tmain_2)__CSEQ_removeindent;
        
# 6580 "<previous_module>"
__cs_create(&__cs_local_main_t6, 0, pop_0, 0, 2);
        
# 6581 "<previous_module>"
tmain_2: IF(0,2,tmain_3)__CSEQ_removeindent;
        
# 6582 "<previous_module>"
__cs_join(__cs_local_main_t1, 0);
        
# 6583 "<previous_module>"
tmain_3: IF(0,3,tmain_4)__CSEQ_removeindent;
        
# 6584 "<previous_module>"
__cs_join(__cs_local_main_t6, 0);
        
# 6585 "<previous_module>"
assert(0);
        
# 6586 "<previous_module>"
goto __exit_main;
        ;
        
# 6587 "<previous_module>"
__exit_main:
        __CPROVER_assume(__cs_pc_cs[0] >= 4);

        
# 6588 "<previous_module>"
;
        ;
        
# 6589 "<previous_module>"
tmain_4: __CSEQ_removeindent;
        
# 6590 "<previous_module>"
__cs_exit(0, 0);
}


# 6592 "<previous_module>"
int main(void)
{
        
# 6593 "<previous_module>"
/* round  0 */__CSEQ_removeindent;
        
# 6594 "<previous_module>"
    /* main */__CSEQ_removeindent;
        
# 6595 "<previous_module>"
unsigned __CPROVER_bitvector[3] __cs_tmp_t0_r0;
        
# 6596 "<previous_module>"
__cs_pc_cs[0] = __cs_tmp_t0_r0;
        
# 6597 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] > 0);
        
# 6598 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 4);
        
# 6599 "<previous_module>"
main_thread();
        
# 6600 "<previous_module>"
__cs_pc[0] = __cs_pc_cs[0];
        
# 6602 "<previous_module>"
    /* push_0 */__CSEQ_removeindent;
        
# 6603 "<previous_module>"
unsigned __CPROVER_bitvector[9] __cs_tmp_t1_r0;
        
# 6604 "<previous_module>"
if (__cs_active_thread[1])
        {
                
# 6605 "<previous_module>"
__cs_pc_cs[1] = __cs_tmp_t1_r0;
                
# 6606 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] <= 302);
                
# 6607 "<previous_module>"
push_0(__cs_threadargs[1]);
                
# 6608 "<previous_module>"
__cs_pc[1] = __cs_pc_cs[1];
        }

        
# 6611 "<previous_module>"
    /* pop_0 */__CSEQ_removeindent;
        
# 6612 "<previous_module>"
unsigned __CPROVER_bitvector[9] __cs_tmp_t2_r0;
        
# 6613 "<previous_module>"
if (__cs_active_thread[2])
        {
                
# 6614 "<previous_module>"
__cs_pc_cs[2] = __cs_tmp_t2_r0;
                
# 6615 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] <= 387);
                
# 6616 "<previous_module>"
pop_0(__cs_threadargs[2]);
                
# 6617 "<previous_module>"
__cs_pc[2] = __cs_pc_cs[2];
        }

        
# 6620 "<previous_module>"
unsigned __CPROVER_bitvector[3] __cs_tmp_t0_r1;
        
# 6621 "<previous_module>"
if (__cs_active_thread[0] == 1)
        {
                
# 6622 "<previous_module>"
__cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
                
# 6623 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                
# 6624 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 4);
                
# 6625 "<previous_module>"
main_thread();
        }

        
# 6627 "<previous_module>"
return 0;
}

