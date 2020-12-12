
# 1 "<previous_module>"
unsigned __CPROVER_bitvector[1] __cs_active_thread[3] = {1};

# 2 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_pc[3];

# 3 "<previous_module>"
unsigned __CPROVER_bitvector[8] __cs_pc_cs[3];

# 4 "<previous_module>"
unsigned __CPROVER_bitvector[2] __cs_last_thread;

# 5 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_thread_lines[3] = {126, 61, 78};

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
        {
                
# 800 "<previous_module>"
static struct lfds711_stack_state *__cs_param_insert_s;
                
# 801 "<previous_module>"
tpush_0_3: IF(1,3,tpush_0_4)__CSEQ_removeindent;
                
# 802 "<previous_module>"
__cs_param_insert_s = ss;
                
# 803 "<previous_module>"
static int long long unsigned __cs_param_insert_id;
                
# 804 "<previous_module>"
__cs_param_insert_id = __cs_local_push_loop;
                
# 805 "<previous_module>"
static struct test_data *__cs_local_insert_td;
                
# 806 "<previous_module>"
tpush_0_4: IF(1,4,tpush_0_5)__CSEQ_removeindent;
                
# 807 "<previous_module>"
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
                
# 808 "<previous_module>"
tpush_0_5: IF(1,5,tpush_0_6)__CSEQ_removeindent;
                
# 809 "<previous_module>"
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
                
# 810 "<previous_module>"
tpush_0_6: IF(1,6,tpush_0_7)__CSEQ_removeindent;
                
# 811 "<previous_module>"
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);

# 812 "<previous_module>"
                {
                        
# 813 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                        
# 814 "<previous_module>"
tpush_0_7: IF(1,7,tpush_0_8)__CSEQ_removeindent;
                        
# 815 "<previous_module>"
__cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
                        
# 816 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                        
# 817 "<previous_module>"
tpush_0_8: IF(1,8,tpush_0_9)__CSEQ_removeindent;
                        
# 818 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
                        
# 819 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                        
# 820 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                        
# 821 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                        
# 822 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                        
# 823 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                        
# 824 "<previous_module>"
;
                        ;
                        
# 825 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                        
# 826 "<previous_module>"
tpush_0_9: IF(1,9,tpush_0_10)__CSEQ_removeindent;
                        
# 827 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                        
# 828 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 829 "<previous_module>"
                        {
                                
# 830 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 831 "<previous_module>"
tpush_0_10: IF(1,10,tpush_0_11)__CSEQ_removeindent;
                                
# 832 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 833 "<previous_module>"
tpush_0_11: IF(1,11,tpush_0_12)__CSEQ_removeindent;
                                
# 834 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 836 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 12);
                        ;
                        
# 837 "<previous_module>"
;
                        ;
                        
# 838 "<previous_module>"
;
                        ;
                        
# 839 "<previous_module>"
;
                        ;
                        
# 840 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                        
# 841 "<previous_module>"
tpush_0_12: IF(1,12,tpush_0_13)__CSEQ_removeindent;
                        
# 842 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                        
# 843 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 844 "<previous_module>"
                        {
                                
# 845 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 846 "<previous_module>"
tpush_0_13: IF(1,13,tpush_0_14)__CSEQ_removeindent;
                                
# 847 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 848 "<previous_module>"
tpush_0_14: IF(1,14,tpush_0_15)__CSEQ_removeindent;
                                
# 849 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 851 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 15);
                        ;
                        
# 852 "<previous_module>"
;
                        ;
                        
# 853 "<previous_module>"
;
                        ;
                        
# 854 "<previous_module>"
tpush_0_15: IF(1,15,tpush_0_16)__CSEQ_removeindent;
                        
# 855 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                        
# 856 "<previous_module>"
tpush_0_16: IF(1,16,tpush_0_17)__CSEQ_removeindent;
                        
# 857 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                        
# 858 "<previous_module>"
tpush_0_17: IF(1,17,tpush_0_18)__CSEQ_removeindent;
                        
# 859 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                        
# 860 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                        
# 861 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                        
# 862 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                        
# 863 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 864 "<previous_module>"
                        {
                                
# 865 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 867 "<previous_module>"
;

# 868 "<previous_module>"
                        {
                                
# 869 "<previous_module>"
tpush_0_18: IF(1,18,tpush_0_19)__CSEQ_removeindent;
                                
# 870 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 871 "<previous_module>"
tpush_0_19: IF(1,19,tpush_0_20)__CSEQ_removeindent;
                                
# 872 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 873 "<previous_module>"
tpush_0_20: IF(1,20,tpush_0_21)__CSEQ_removeindent;
                                
# 874 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 875 "<previous_module>"
tpush_0_21: IF(1,21,tpush_0_22)__CSEQ_removeindent;
                                
# 876 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 877 "<previous_module>"
tpush_0_22: IF(1,22,tpush_0_23)__CSEQ_removeindent;
                                
# 878 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 879 "<previous_module>"
tpush_0_23: IF(1,23,tpush_0_24)__CSEQ_removeindent;
                                
# 880 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 881 "<previous_module>"
tpush_0_24: IF(1,24,tpush_0_25)__CSEQ_removeindent;
                                
# 882 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 883 "<previous_module>"
;
                                ;
                                
# 884 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 885 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 886 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 887 "<previous_module>"
                                {

# 888 "<previous_module>"
                                        {
                                                
# 889 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 890 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 891 "<previous_module>"
                                                {
                                                        
# 892 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 894 "<previous_module>"
;
                                                
# 895 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 896 "<previous_module>"
                                                {
                                                        
# 897 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 899 "<previous_module>"
;
                                                
# 900 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 901 "<previous_module>"
                                                {
                                                        
# 902 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 904 "<previous_module>"
;
                                                
# 905 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 906 "<previous_module>"
tpush_0_25: IF(1,25,tpush_0_26)__CSEQ_removeindent;
                                                
# 907 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 908 "<previous_module>"
__exit_loop_2:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 26);

                                                
# 909 "<previous_module>"
;
                                                ;
                                                
# 910 "<previous_module>"
__exit__exponential_backoff_1_0:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 26);

                                                
# 911 "<previous_module>"
;
                                                ;
                                        }
                                        
# 913 "<previous_module>"
;
                                }

                                
# 915 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 26);
                                ;
                                
# 916 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 917 "<previous_module>"
;
                                ;
                                
# 918 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 919 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 920 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 921 "<previous_module>"
                                {
                                        
# 922 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 924 "<previous_module>"
;
                        }
                        
# 926 "<previous_module>"
;
                        
# 927 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 928 "<previous_module>"
                        {
                                
# 929 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 931 "<previous_module>"
;

# 932 "<previous_module>"
                        {
                                
# 933 "<previous_module>"
tpush_0_26: IF(1,26,tpush_0_27)__CSEQ_removeindent;
                                
# 934 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 935 "<previous_module>"
tpush_0_27: IF(1,27,tpush_0_28)__CSEQ_removeindent;
                                
# 936 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 937 "<previous_module>"
tpush_0_28: IF(1,28,tpush_0_29)__CSEQ_removeindent;
                                
# 938 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 939 "<previous_module>"
tpush_0_29: IF(1,29,tpush_0_30)__CSEQ_removeindent;
                                
# 940 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 941 "<previous_module>"
tpush_0_30: IF(1,30,tpush_0_31)__CSEQ_removeindent;
                                
# 942 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 943 "<previous_module>"
tpush_0_31: IF(1,31,tpush_0_32)__CSEQ_removeindent;
                                
# 944 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 945 "<previous_module>"
tpush_0_32: IF(1,32,tpush_0_33)__CSEQ_removeindent;
                                
# 946 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 947 "<previous_module>"
;
                                ;
                                
# 948 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 949 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 950 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 951 "<previous_module>"
                                {

# 952 "<previous_module>"
                                        {
                                                
# 953 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 954 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 955 "<previous_module>"
                                                {
                                                        
# 956 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 958 "<previous_module>"
;
                                                
# 959 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 960 "<previous_module>"
                                                {
                                                        
# 961 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 963 "<previous_module>"
;
                                                
# 964 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 965 "<previous_module>"
                                                {
                                                        
# 966 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 968 "<previous_module>"
;
                                                
# 969 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 970 "<previous_module>"
tpush_0_33: IF(1,33,tpush_0_34)__CSEQ_removeindent;
                                                
# 971 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 972 "<previous_module>"
__exit_loop_3:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 34);

                                                
# 973 "<previous_module>"
;
                                                ;
                                                
# 974 "<previous_module>"
__exit__exponential_backoff_1_1:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 34);

                                                
# 975 "<previous_module>"
;
                                                ;
                                        }
                                        
# 977 "<previous_module>"
;
                                }

                                
# 979 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 34);
                                ;
                                
# 980 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 981 "<previous_module>"
;
                                ;
                                
# 982 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 983 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 984 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 985 "<previous_module>"
                                {
                                        
# 986 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 988 "<previous_module>"
;
                        }
                        
# 990 "<previous_module>"
;
                        
# 991 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 992 "<previous_module>"
                        {
                                
# 993 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 995 "<previous_module>"
;

# 996 "<previous_module>"
                        {
                                
# 997 "<previous_module>"
tpush_0_34: IF(1,34,tpush_0_35)__CSEQ_removeindent;
                                
# 998 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 999 "<previous_module>"
tpush_0_35: IF(1,35,tpush_0_36)__CSEQ_removeindent;
                                
# 1000 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1001 "<previous_module>"
tpush_0_36: IF(1,36,tpush_0_37)__CSEQ_removeindent;
                                
# 1002 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1003 "<previous_module>"
tpush_0_37: IF(1,37,tpush_0_38)__CSEQ_removeindent;
                                
# 1004 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1005 "<previous_module>"
tpush_0_38: IF(1,38,tpush_0_39)__CSEQ_removeindent;
                                
# 1006 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1007 "<previous_module>"
tpush_0_39: IF(1,39,tpush_0_40)__CSEQ_removeindent;
                                
# 1008 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1009 "<previous_module>"
tpush_0_40: IF(1,40,tpush_0_41)__CSEQ_removeindent;
                                
# 1010 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1011 "<previous_module>"
;
                                ;
                                
# 1012 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1013 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1014 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1015 "<previous_module>"
                                {

# 1016 "<previous_module>"
                                        {
                                                
# 1017 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1018 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1019 "<previous_module>"
                                                {
                                                        
# 1020 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1022 "<previous_module>"
;
                                                
# 1023 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1024 "<previous_module>"
                                                {
                                                        
# 1025 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1027 "<previous_module>"
;
                                                
# 1028 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1029 "<previous_module>"
                                                {
                                                        
# 1030 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1032 "<previous_module>"
;
                                                
# 1033 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1034 "<previous_module>"
tpush_0_41: IF(1,41,tpush_0_42)__CSEQ_removeindent;
                                                
# 1035 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1036 "<previous_module>"
__exit_loop_4:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 42);

                                                
# 1037 "<previous_module>"
;
                                                ;
                                                
# 1038 "<previous_module>"
__exit__exponential_backoff_1_2:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 42);

                                                
# 1039 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1041 "<previous_module>"
;
                                }

                                
# 1043 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 42);
                                ;
                                
# 1044 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1045 "<previous_module>"
;
                                ;
                                
# 1046 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1047 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1048 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1049 "<previous_module>"
                                {
                                        
# 1050 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 1052 "<previous_module>"
;
                        }
                        
# 1054 "<previous_module>"
;
                        
# 1055 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1056 "<previous_module>"
                        {
                                
# 1057 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 1059 "<previous_module>"
;

# 1060 "<previous_module>"
                        {
                                
# 1061 "<previous_module>"
tpush_0_42: IF(1,42,tpush_0_43)__CSEQ_removeindent;
                                
# 1062 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1063 "<previous_module>"
tpush_0_43: IF(1,43,tpush_0_44)__CSEQ_removeindent;
                                
# 1064 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1065 "<previous_module>"
tpush_0_44: IF(1,44,tpush_0_45)__CSEQ_removeindent;
                                
# 1066 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1067 "<previous_module>"
tpush_0_45: IF(1,45,tpush_0_46)__CSEQ_removeindent;
                                
# 1068 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1069 "<previous_module>"
tpush_0_46: IF(1,46,tpush_0_47)__CSEQ_removeindent;
                                
# 1070 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1071 "<previous_module>"
tpush_0_47: IF(1,47,tpush_0_48)__CSEQ_removeindent;
                                
# 1072 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1073 "<previous_module>"
tpush_0_48: IF(1,48,tpush_0_49)__CSEQ_removeindent;
                                
# 1074 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1075 "<previous_module>"
;
                                ;
                                
# 1076 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1077 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1078 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1079 "<previous_module>"
                                {

# 1080 "<previous_module>"
                                        {
                                                
# 1081 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1082 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1083 "<previous_module>"
                                                {
                                                        
# 1084 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1086 "<previous_module>"
;
                                                
# 1087 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1088 "<previous_module>"
                                                {
                                                        
# 1089 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1091 "<previous_module>"
;
                                                
# 1092 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1093 "<previous_module>"
                                                {
                                                        
# 1094 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1096 "<previous_module>"
;
                                                
# 1097 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1098 "<previous_module>"
tpush_0_49: IF(1,49,tpush_0_50)__CSEQ_removeindent;
                                                
# 1099 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1100 "<previous_module>"
__exit_loop_5:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 50);

                                                
# 1101 "<previous_module>"
;
                                                ;
                                                
# 1102 "<previous_module>"
__exit__exponential_backoff_1_3:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 50);

                                                
# 1103 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1105 "<previous_module>"
;
                                }

                                
# 1107 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 50);
                                ;
                                
# 1108 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1109 "<previous_module>"
;
                                ;
                                
# 1110 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1111 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1112 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1113 "<previous_module>"
                                {
                                        
# 1114 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 1116 "<previous_module>"
;
                        }
                        
# 1118 "<previous_module>"
;
                        
# 1119 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1120 "<previous_module>"
                        {
                                
# 1121 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 1123 "<previous_module>"
;

# 1124 "<previous_module>"
                        {
                                
# 1125 "<previous_module>"
tpush_0_50: IF(1,50,tpush_0_51)__CSEQ_removeindent;
                                
# 1126 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1127 "<previous_module>"
tpush_0_51: IF(1,51,tpush_0_52)__CSEQ_removeindent;
                                
# 1128 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1129 "<previous_module>"
tpush_0_52: IF(1,52,tpush_0_53)__CSEQ_removeindent;
                                
# 1130 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1131 "<previous_module>"
tpush_0_53: IF(1,53,tpush_0_54)__CSEQ_removeindent;
                                
# 1132 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1133 "<previous_module>"
tpush_0_54: IF(1,54,tpush_0_55)__CSEQ_removeindent;
                                
# 1134 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1135 "<previous_module>"
tpush_0_55: IF(1,55,tpush_0_56)__CSEQ_removeindent;
                                
# 1136 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1137 "<previous_module>"
tpush_0_56: IF(1,56,tpush_0_57)__CSEQ_removeindent;
                                
# 1138 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1139 "<previous_module>"
;
                                ;
                                
# 1140 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1141 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1142 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1143 "<previous_module>"
                                {

# 1144 "<previous_module>"
                                        {
                                                
# 1145 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1146 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1147 "<previous_module>"
                                                {
                                                        
# 1148 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1150 "<previous_module>"
;
                                                
# 1151 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1152 "<previous_module>"
                                                {
                                                        
# 1153 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1155 "<previous_module>"
;
                                                
# 1156 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1157 "<previous_module>"
                                                {
                                                        
# 1158 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1160 "<previous_module>"
;
                                                
# 1161 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1162 "<previous_module>"
tpush_0_57: IF(1,57,tpush_0_58)__CSEQ_removeindent;
                                                
# 1163 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1164 "<previous_module>"
__exit_loop_6:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 58);

                                                
# 1165 "<previous_module>"
;
                                                ;
                                                
# 1166 "<previous_module>"
__exit__exponential_backoff_1_4:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 58);

                                                
# 1167 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1169 "<previous_module>"
;
                                }

                                
# 1171 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 58);
                                ;
                                
# 1172 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1173 "<previous_module>"
;
                                ;
                                
# 1174 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1175 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1176 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1177 "<previous_module>"
                                {
                                        
# 1178 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 1180 "<previous_module>"
;
                        }
                        
# 1182 "<previous_module>"
;
                        
# 1183 "<previous_module>"
tpush_0_58: IF(1,58,tpush_0_59)__CSEQ_removeindent;
                        
# 1184 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                        
# 1185 "<previous_module>"
__exit_loop_1:
                        __CPROVER_assume(__cs_pc_cs[1] >= 59);

                        
# 1186 "<previous_module>"
;
                        ;
                        
# 1187 "<previous_module>"
goto __exit__lfds711_stack_push_1;
                        ;
                        
# 1188 "<previous_module>"
__exit__lfds711_stack_push_1:
                        __CPROVER_assume(__cs_pc_cs[1] >= 59);

                        
# 1189 "<previous_module>"
;
                        ;
                }
                
# 1191 "<previous_module>"
;
                
# 1192 "<previous_module>"
__exit__insert_1:
                __CPROVER_assume(__cs_pc_cs[1] >= 59);

                
# 1193 "<previous_module>"
;
                ;
        }
        
# 1195 "<previous_module>"
;
        
# 1196 "<previous_module>"
;
        ;
        
# 1197 "<previous_module>"
static _Bool __cs_local_push___cs_tmp_if_cond_25;
        
# 1198 "<previous_module>"
tpush_0_59: IF(1,59,tpush_0_60)__CSEQ_removeindent;
        
# 1199 "<previous_module>"
__cs_local_push___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
        
# 1200 "<previous_module>"
if (__cs_local_push___cs_tmp_if_cond_25)

# 1201 "<previous_module>"
        {
                
# 1202 "<previous_module>"
tpush_0_60: IF(1,60,tpush_0_61)__CSEQ_removeindent;
                
# 1203 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
        }

        
# 1205 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 61);
        ;
        
# 1206 "<previous_module>"
;
        ;
        
# 1207 "<previous_module>"
__exit_push:
        __CPROVER_assume(__cs_pc_cs[1] >= 61);

        
# 1208 "<previous_module>"
;
        ;
        
# 1209 "<previous_module>"
tpush_0_61: __CSEQ_removeindent;
        
# 1210 "<previous_module>"
__cs_exit(0, 1);
}


# 1212 "<previous_module>"
void *pop_0(void *__cs_param_pop___cs_unused)

# 1213 "<previous_module>"
{
        
# 1214 "<previous_module>"
static int __cs_local_pop_res;
        
# 1215 "<previous_module>"
IF(2,0,tpop_0_1)__CSEQ_removeindent;
        
# 1216 "<previous_module>"
__cs_local_pop_res = nondet_int();
        
# 1217 "<previous_module>"
static int __cs_local_pop_count;
        
# 1218 "<previous_module>"
__cs_local_pop_count = 0;
        
# 1219 "<previous_module>"
static int __cs_local_pop_loop;
        
# 1220 "<previous_module>"
__cs_local_pop_loop = nondet_int();
        
# 1221 "<previous_module>"
;
        ;
        
# 1222 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_26;
        
# 1223 "<previous_module>"
tpop_0_1: IF(2,1,tpop_0_2)__CSEQ_removeindent;
        
# 1224 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
        
# 1225 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_26)

# 1226 "<previous_module>"
        {
                
# 1227 "<previous_module>"
tpop_0_2: IF(2,2,tpop_0_3)__CSEQ_removeindent;
                
# 1228 "<previous_module>"
__cs_mutex_lock(&lock, 2);
        }

        
# 1230 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 3);
        ;
        
# 1231 "<previous_module>"
;
        ;
        
# 1232 "<previous_module>"
static int __cs_retval__delete_1;

# 1233 "<previous_module>"
        {
                
# 1234 "<previous_module>"
static struct lfds711_stack_state *__cs_param_delete_s;
                
# 1235 "<previous_module>"
tpop_0_3: IF(2,3,tpop_0_4)__CSEQ_removeindent;
                
# 1236 "<previous_module>"
__cs_param_delete_s = ss;
                
# 1237 "<previous_module>"
static struct lfds711_stack_element *__cs_local_delete_se;
                
# 1238 "<previous_module>"
static struct test_data *__cs_local_delete_temp_td;
                
# 1239 "<previous_module>"
static int __cs_local_delete_res;
                
# 1240 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_1;

# 1241 "<previous_module>"
                {
                        
# 1242 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                        
# 1243 "<previous_module>"
tpop_0_4: IF(2,4,tpop_0_5)__CSEQ_removeindent;
                        
# 1244 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = &mystack;
                        
# 1245 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                        
# 1246 "<previous_module>"
tpop_0_5: IF(2,5,tpop_0_6)__CSEQ_removeindent;
                        
# 1247 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_delete_se;
                        
# 1248 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                        
# 1249 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                        
# 1250 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                        
# 1251 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                        
# 1252 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                        
# 1253 "<previous_module>"
;
                        ;
                        
# 1254 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                        
# 1255 "<previous_module>"
tpop_0_6: IF(2,6,tpop_0_7)__CSEQ_removeindent;
                        
# 1256 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                        
# 1257 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 1258 "<previous_module>"
                        {
                                
# 1259 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 1260 "<previous_module>"
tpop_0_7: IF(2,7,tpop_0_8)__CSEQ_removeindent;
                                
# 1261 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 1262 "<previous_module>"
tpop_0_8: IF(2,8,tpop_0_9)__CSEQ_removeindent;
                                
# 1263 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 1265 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 9);
                        ;
                        
# 1266 "<previous_module>"
;
                        ;
                        
# 1267 "<previous_module>"
;
                        ;
                        
# 1268 "<previous_module>"
;
                        ;
                        
# 1269 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                        
# 1270 "<previous_module>"
tpop_0_9: IF(2,9,tpop_0_10)__CSEQ_removeindent;
                        
# 1271 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                        
# 1272 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 1273 "<previous_module>"
                        {
                                
# 1274 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 1275 "<previous_module>"
tpop_0_10: IF(2,10,tpop_0_11)__CSEQ_removeindent;
                                
# 1276 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 1277 "<previous_module>"
tpop_0_11: IF(2,11,tpop_0_12)__CSEQ_removeindent;
                                
# 1278 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 1280 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 12);
                        ;
                        
# 1281 "<previous_module>"
;
                        ;
                        
# 1282 "<previous_module>"
;
                        ;
                        
# 1283 "<previous_module>"
tpop_0_12: IF(2,12,tpop_0_13)__CSEQ_removeindent;
                        
# 1284 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                        
# 1285 "<previous_module>"
tpop_0_13: IF(2,13,tpop_0_14)__CSEQ_removeindent;
                        
# 1286 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                        
# 1287 "<previous_module>"
tpop_0_14: IF(2,14,tpop_0_15)__CSEQ_removeindent;
                        
# 1288 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                        
# 1289 "<previous_module>"
tpop_0_15: IF(2,15,tpop_0_16)__CSEQ_removeindent;
                        
# 1290 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                        
# 1291 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                        
# 1292 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                        
# 1293 "<previous_module>"
;
                        ;
                        
# 1294 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                        
# 1295 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 1296 "<previous_module>"
                        {
                                
# 1297 "<previous_module>"
;
                                ;
                                
# 1298 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                
# 1299 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1300 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 1301 "<previous_module>"
                                {
                                        
# 1302 "<previous_module>"
tpop_0_16: IF(2,16,tpop_0_17)__CSEQ_removeindent;
                                        
# 1303 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1304 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1305 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1307 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 17);
                                ;
                                
# 1308 "<previous_module>"
tpop_0_17: IF(2,17,tpop_0_18)__CSEQ_removeindent;
                                
# 1309 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1310 "<previous_module>"
tpop_0_18: IF(2,18,tpop_0_19)__CSEQ_removeindent;
                                
# 1311 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1312 "<previous_module>"
tpop_0_19: IF(2,19,tpop_0_20)__CSEQ_removeindent;
                                
# 1313 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1314 "<previous_module>"
tpop_0_20: IF(2,20,tpop_0_21)__CSEQ_removeindent;
                                
# 1315 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1316 "<previous_module>"
tpop_0_21: IF(2,21,tpop_0_22)__CSEQ_removeindent;
                                
# 1317 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1318 "<previous_module>"
;
                                ;
                                
# 1319 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                
# 1320 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1321 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 1322 "<previous_module>"
                                {

# 1323 "<previous_module>"
                                        {
                                                
# 1324 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1325 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1326 "<previous_module>"
                                                {
                                                        
# 1327 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1329 "<previous_module>"
;
                                                
# 1330 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1331 "<previous_module>"
                                                {
                                                        
# 1332 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1334 "<previous_module>"
;
                                                
# 1335 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1336 "<previous_module>"
                                                {
                                                        
# 1337 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1339 "<previous_module>"
;
                                                
# 1340 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1341 "<previous_module>"
tpop_0_22: IF(2,22,tpop_0_23)__CSEQ_removeindent;
                                                
# 1342 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1343 "<previous_module>"
__exit_loop_8:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 23);

                                                
# 1344 "<previous_module>"
;
                                                ;
                                                
# 1345 "<previous_module>"
__exit__exponential_backoff_2_0:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 23);

                                                
# 1346 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1348 "<previous_module>"
;
                                        
# 1349 "<previous_module>"
tpop_0_23: IF(2,23,tpop_0_24)__CSEQ_removeindent;
                                        
# 1350 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 1351 "<previous_module>"
tpop_0_24: IF(2,24,tpop_0_25)__CSEQ_removeindent;
                                        
# 1352 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 1354 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 25);
                                ;
                                
# 1355 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 1356 "<previous_module>"
;
                                ;
                                
# 1357 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                
# 1358 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 1359 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 1360 "<previous_module>"
                                {
                                        
# 1361 "<previous_module>"
goto __exit_loop_7;
                                        ;
                                }

                                
# 1363 "<previous_module>"
;
                        }
                        
# 1365 "<previous_module>"
;
                        
# 1366 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                        
# 1367 "<previous_module>"
tpop_0_25: IF(2,25,tpop_0_26)__CSEQ_removeindent;
                        
# 1368 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                        
# 1369 "<previous_module>"
__exit_loop_7:
                        __CPROVER_assume(__cs_pc_cs[2] >= 26);

                        
# 1370 "<previous_module>"
;
                        ;
                        
# 1371 "<previous_module>"
if (
# 1372 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 1373 "<previous_module>"
                        {
                                
# 1374 "<previous_module>"
goto __exit_loop_9;
                                ;
                        }

                        
# 1376 "<previous_module>"
;

# 1377 "<previous_module>"
                        {
                                
# 1378 "<previous_module>"
;
                                ;
                                
# 1379 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 1380 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1381 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 1382 "<previous_module>"
                                {
                                        
# 1383 "<previous_module>"
tpop_0_26: IF(2,26,tpop_0_27)__CSEQ_removeindent;
                                        
# 1384 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1385 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1386 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1388 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 27);
                                ;
                                
# 1389 "<previous_module>"
tpop_0_27: IF(2,27,tpop_0_28)__CSEQ_removeindent;
                                
# 1390 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1391 "<previous_module>"
tpop_0_28: IF(2,28,tpop_0_29)__CSEQ_removeindent;
                                
# 1392 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1393 "<previous_module>"
tpop_0_29: IF(2,29,tpop_0_30)__CSEQ_removeindent;
                                
# 1394 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1395 "<previous_module>"
tpop_0_30: IF(2,30,tpop_0_31)__CSEQ_removeindent;
                                
# 1396 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1397 "<previous_module>"
tpop_0_31: IF(2,31,tpop_0_32)__CSEQ_removeindent;
                                
# 1398 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1399 "<previous_module>"
;
                                ;
                                
# 1400 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 1401 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1402 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 1403 "<previous_module>"
                                {

# 1404 "<previous_module>"
                                        {
                                                
# 1405 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1406 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1407 "<previous_module>"
                                                {
                                                        
# 1408 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1410 "<previous_module>"
;
                                                
# 1411 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1412 "<previous_module>"
                                                {
                                                        
# 1413 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1415 "<previous_module>"
;
                                                
# 1416 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1417 "<previous_module>"
                                                {
                                                        
# 1418 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1420 "<previous_module>"
;
                                                
# 1421 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1422 "<previous_module>"
tpop_0_32: IF(2,32,tpop_0_33)__CSEQ_removeindent;
                                                
# 1423 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1424 "<previous_module>"
__exit_loop_10:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 33);

                                                
# 1425 "<previous_module>"
;
                                                ;
                                                
# 1426 "<previous_module>"
__exit__exponential_backoff_3_0:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 33);

                                                
# 1427 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1429 "<previous_module>"
;
                                        
# 1430 "<previous_module>"
tpop_0_33: IF(2,33,tpop_0_34)__CSEQ_removeindent;
                                        
# 1431 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 1432 "<previous_module>"
tpop_0_34: IF(2,34,tpop_0_35)__CSEQ_removeindent;
                                        
# 1433 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 1435 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 35);
                                ;
                                
# 1436 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 1437 "<previous_module>"
;
                                ;
                                
# 1438 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 1439 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 1440 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 1441 "<previous_module>"
                                {
                                        
# 1442 "<previous_module>"
goto __exit_loop_9;
                                        ;
                                }

                                
# 1444 "<previous_module>"
;
                        }
                        
# 1446 "<previous_module>"
;
                        
# 1447 "<previous_module>"
if (
# 1448 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 1449 "<previous_module>"
                        {
                                
# 1450 "<previous_module>"
goto __exit_loop_9;
                                ;
                        }

                        
# 1452 "<previous_module>"
;

# 1453 "<previous_module>"
                        {
                                
# 1454 "<previous_module>"
;
                                ;
                                
# 1455 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 1456 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1457 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 1458 "<previous_module>"
                                {
                                        
# 1459 "<previous_module>"
tpop_0_35: IF(2,35,tpop_0_36)__CSEQ_removeindent;
                                        
# 1460 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1461 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1462 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1464 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 36);
                                ;
                                
# 1465 "<previous_module>"
tpop_0_36: IF(2,36,tpop_0_37)__CSEQ_removeindent;
                                
# 1466 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1467 "<previous_module>"
tpop_0_37: IF(2,37,tpop_0_38)__CSEQ_removeindent;
                                
# 1468 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1469 "<previous_module>"
tpop_0_38: IF(2,38,tpop_0_39)__CSEQ_removeindent;
                                
# 1470 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1471 "<previous_module>"
tpop_0_39: IF(2,39,tpop_0_40)__CSEQ_removeindent;
                                
# 1472 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1473 "<previous_module>"
tpop_0_40: IF(2,40,tpop_0_41)__CSEQ_removeindent;
                                
# 1474 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1475 "<previous_module>"
;
                                ;
                                
# 1476 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 1477 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1478 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 1479 "<previous_module>"
                                {

# 1480 "<previous_module>"
                                        {
                                                
# 1481 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1482 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1483 "<previous_module>"
                                                {
                                                        
# 1484 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1486 "<previous_module>"
;
                                                
# 1487 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1488 "<previous_module>"
                                                {
                                                        
# 1489 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1491 "<previous_module>"
;
                                                
# 1492 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1493 "<previous_module>"
                                                {
                                                        
# 1494 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1496 "<previous_module>"
;
                                                
# 1497 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1498 "<previous_module>"
tpop_0_41: IF(2,41,tpop_0_42)__CSEQ_removeindent;
                                                
# 1499 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1500 "<previous_module>"
__exit_loop_11:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 42);

                                                
# 1501 "<previous_module>"
;
                                                ;
                                                
# 1502 "<previous_module>"
__exit__exponential_backoff_3_1:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 42);

                                                
# 1503 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1505 "<previous_module>"
;
                                        
# 1506 "<previous_module>"
tpop_0_42: IF(2,42,tpop_0_43)__CSEQ_removeindent;
                                        
# 1507 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 1508 "<previous_module>"
tpop_0_43: IF(2,43,tpop_0_44)__CSEQ_removeindent;
                                        
# 1509 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 1511 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 44);
                                ;
                                
# 1512 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 1513 "<previous_module>"
;
                                ;
                                
# 1514 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 1515 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 1516 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 1517 "<previous_module>"
                                {
                                        
# 1518 "<previous_module>"
goto __exit_loop_9;
                                        ;
                                }

                                
# 1520 "<previous_module>"
;
                        }
                        
# 1522 "<previous_module>"
;
                        
# 1523 "<previous_module>"
if (
# 1524 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 1525 "<previous_module>"
                        {
                                
# 1526 "<previous_module>"
goto __exit_loop_9;
                                ;
                        }

                        
# 1528 "<previous_module>"
;

# 1529 "<previous_module>"
                        {
                                
# 1530 "<previous_module>"
;
                                ;
                                
# 1531 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 1532 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1533 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 1534 "<previous_module>"
                                {
                                        
# 1535 "<previous_module>"
tpop_0_44: IF(2,44,tpop_0_45)__CSEQ_removeindent;
                                        
# 1536 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1537 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1538 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1540 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 45);
                                ;
                                
# 1541 "<previous_module>"
tpop_0_45: IF(2,45,tpop_0_46)__CSEQ_removeindent;
                                
# 1542 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1543 "<previous_module>"
tpop_0_46: IF(2,46,tpop_0_47)__CSEQ_removeindent;
                                
# 1544 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1545 "<previous_module>"
tpop_0_47: IF(2,47,tpop_0_48)__CSEQ_removeindent;
                                
# 1546 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1547 "<previous_module>"
tpop_0_48: IF(2,48,tpop_0_49)__CSEQ_removeindent;
                                
# 1548 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1549 "<previous_module>"
tpop_0_49: IF(2,49,tpop_0_50)__CSEQ_removeindent;
                                
# 1550 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1551 "<previous_module>"
;
                                ;
                                
# 1552 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 1553 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1554 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 1555 "<previous_module>"
                                {

# 1556 "<previous_module>"
                                        {
                                                
# 1557 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1558 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1559 "<previous_module>"
                                                {
                                                        
# 1560 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1562 "<previous_module>"
;
                                                
# 1563 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1564 "<previous_module>"
                                                {
                                                        
# 1565 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1567 "<previous_module>"
;
                                                
# 1568 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1569 "<previous_module>"
                                                {
                                                        
# 1570 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1572 "<previous_module>"
;
                                                
# 1573 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1574 "<previous_module>"
tpop_0_50: IF(2,50,tpop_0_51)__CSEQ_removeindent;
                                                
# 1575 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1576 "<previous_module>"
__exit_loop_12:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 51);

                                                
# 1577 "<previous_module>"
;
                                                ;
                                                
# 1578 "<previous_module>"
__exit__exponential_backoff_3_2:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 51);

                                                
# 1579 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1581 "<previous_module>"
;
                                        
# 1582 "<previous_module>"
tpop_0_51: IF(2,51,tpop_0_52)__CSEQ_removeindent;
                                        
# 1583 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 1584 "<previous_module>"
tpop_0_52: IF(2,52,tpop_0_53)__CSEQ_removeindent;
                                        
# 1585 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 1587 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 53);
                                ;
                                
# 1588 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 1589 "<previous_module>"
;
                                ;
                                
# 1590 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 1591 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 1592 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 1593 "<previous_module>"
                                {
                                        
# 1594 "<previous_module>"
goto __exit_loop_9;
                                        ;
                                }

                                
# 1596 "<previous_module>"
;
                        }
                        
# 1598 "<previous_module>"
;
                        
# 1599 "<previous_module>"
if (
# 1600 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 1601 "<previous_module>"
                        {
                                
# 1602 "<previous_module>"
goto __exit_loop_9;
                                ;
                        }

                        
# 1604 "<previous_module>"
;

# 1605 "<previous_module>"
                        {
                                
# 1606 "<previous_module>"
;
                                ;
                                
# 1607 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 1608 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1609 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 1610 "<previous_module>"
                                {
                                        
# 1611 "<previous_module>"
tpop_0_53: IF(2,53,tpop_0_54)__CSEQ_removeindent;
                                        
# 1612 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1613 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1614 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1616 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 54);
                                ;
                                
# 1617 "<previous_module>"
tpop_0_54: IF(2,54,tpop_0_55)__CSEQ_removeindent;
                                
# 1618 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1619 "<previous_module>"
tpop_0_55: IF(2,55,tpop_0_56)__CSEQ_removeindent;
                                
# 1620 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1621 "<previous_module>"
tpop_0_56: IF(2,56,tpop_0_57)__CSEQ_removeindent;
                                
# 1622 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1623 "<previous_module>"
tpop_0_57: IF(2,57,tpop_0_58)__CSEQ_removeindent;
                                
# 1624 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1625 "<previous_module>"
tpop_0_58: IF(2,58,tpop_0_59)__CSEQ_removeindent;
                                
# 1626 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1627 "<previous_module>"
;
                                ;
                                
# 1628 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 1629 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1630 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 1631 "<previous_module>"
                                {

# 1632 "<previous_module>"
                                        {
                                                
# 1633 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1634 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1635 "<previous_module>"
                                                {
                                                        
# 1636 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1638 "<previous_module>"
;
                                                
# 1639 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1640 "<previous_module>"
                                                {
                                                        
# 1641 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1643 "<previous_module>"
;
                                                
# 1644 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1645 "<previous_module>"
                                                {
                                                        
# 1646 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1648 "<previous_module>"
;
                                                
# 1649 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1650 "<previous_module>"
tpop_0_59: IF(2,59,tpop_0_60)__CSEQ_removeindent;
                                                
# 1651 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1652 "<previous_module>"
__exit_loop_13:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 60);

                                                
# 1653 "<previous_module>"
;
                                                ;
                                                
# 1654 "<previous_module>"
__exit__exponential_backoff_3_3:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 60);

                                                
# 1655 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1657 "<previous_module>"
;
                                        
# 1658 "<previous_module>"
tpop_0_60: IF(2,60,tpop_0_61)__CSEQ_removeindent;
                                        
# 1659 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 1660 "<previous_module>"
tpop_0_61: IF(2,61,tpop_0_62)__CSEQ_removeindent;
                                        
# 1661 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 1663 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 62);
                                ;
                                
# 1664 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 1665 "<previous_module>"
;
                                ;
                                
# 1666 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 1667 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 1668 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 1669 "<previous_module>"
                                {
                                        
# 1670 "<previous_module>"
goto __exit_loop_9;
                                        ;
                                }

                                
# 1672 "<previous_module>"
;
                        }
                        
# 1674 "<previous_module>"
;
                        
# 1675 "<previous_module>"
if (
# 1676 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 1677 "<previous_module>"
                        {
                                
# 1678 "<previous_module>"
goto __exit_loop_9;
                                ;
                        }

                        
# 1680 "<previous_module>"
;

# 1681 "<previous_module>"
                        {
                                
# 1682 "<previous_module>"
;
                                ;
                                
# 1683 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 1684 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1685 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 1686 "<previous_module>"
                                {
                                        
# 1687 "<previous_module>"
tpop_0_62: IF(2,62,tpop_0_63)__CSEQ_removeindent;
                                        
# 1688 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1689 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1690 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1692 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 63);
                                ;
                                
# 1693 "<previous_module>"
tpop_0_63: IF(2,63,tpop_0_64)__CSEQ_removeindent;
                                
# 1694 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1695 "<previous_module>"
tpop_0_64: IF(2,64,tpop_0_65)__CSEQ_removeindent;
                                
# 1696 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1697 "<previous_module>"
tpop_0_65: IF(2,65,tpop_0_66)__CSEQ_removeindent;
                                
# 1698 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1699 "<previous_module>"
tpop_0_66: IF(2,66,tpop_0_67)__CSEQ_removeindent;
                                
# 1700 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1701 "<previous_module>"
tpop_0_67: IF(2,67,tpop_0_68)__CSEQ_removeindent;
                                
# 1702 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1703 "<previous_module>"
;
                                ;
                                
# 1704 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 1705 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1706 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 1707 "<previous_module>"
                                {

# 1708 "<previous_module>"
                                        {
                                                
# 1709 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1710 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1711 "<previous_module>"
                                                {
                                                        
# 1712 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1714 "<previous_module>"
;
                                                
# 1715 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1716 "<previous_module>"
                                                {
                                                        
# 1717 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1719 "<previous_module>"
;
                                                
# 1720 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1721 "<previous_module>"
                                                {
                                                        
# 1722 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1724 "<previous_module>"
;
                                                
# 1725 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1726 "<previous_module>"
tpop_0_68: IF(2,68,tpop_0_69)__CSEQ_removeindent;
                                                
# 1727 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1728 "<previous_module>"
__exit_loop_14:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 69);

                                                
# 1729 "<previous_module>"
;
                                                ;
                                                
# 1730 "<previous_module>"
__exit__exponential_backoff_3_4:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 69);

                                                
# 1731 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1733 "<previous_module>"
;
                                        
# 1734 "<previous_module>"
tpop_0_69: IF(2,69,tpop_0_70)__CSEQ_removeindent;
                                        
# 1735 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 1736 "<previous_module>"
tpop_0_70: IF(2,70,tpop_0_71)__CSEQ_removeindent;
                                        
# 1737 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 1739 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 71);
                                ;
                                
# 1740 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 1741 "<previous_module>"
;
                                ;
                                
# 1742 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 1743 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 1744 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 1745 "<previous_module>"
                                {
                                        
# 1746 "<previous_module>"
goto __exit_loop_9;
                                        ;
                                }

                                
# 1748 "<previous_module>"
;
                        }
                        
# 1750 "<previous_module>"
;
                        
# 1751 "<previous_module>"
tpop_0_71: IF(2,71,tpop_0_72)__CSEQ_removeindent;
                        
# 1752 "<previous_module>"
__CPROVER_assume(
# 1753 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                        
# 1754 "<previous_module>"
__exit_loop_9:
                        __CPROVER_assume(__cs_pc_cs[2] >= 72);

                        
# 1755 "<previous_module>"
;
                        ;
                        
# 1756 "<previous_module>"
tpop_0_72: IF(2,72,tpop_0_73)__CSEQ_removeindent;
                        
# 1757 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                        
# 1758 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = __cs_local_lfds711_stack_pop_result;
                        
# 1759 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                        ;
                        
# 1760 "<previous_module>"
__exit__lfds711_stack_pop_1:
                        __CPROVER_assume(__cs_pc_cs[2] >= 73);

                        
# 1761 "<previous_module>"
;
                        ;
                }
                
# 1763 "<previous_module>"
;
                
# 1764 "<previous_module>"
__cs_local_delete_res = __cs_retval__lfds711_stack_pop_1;
                
# 1765 "<previous_module>"
;
                ;
                
# 1766 "<previous_module>"
static _Bool __cs_local_delete___cs_tmp_if_cond_19;
                
# 1767 "<previous_module>"
__cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res == 0;
                
# 1768 "<previous_module>"
if (__cs_local_delete___cs_tmp_if_cond_19)

# 1769 "<previous_module>"
                {
                        
# 1770 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                        
# 1771 "<previous_module>"
goto __exit__delete_1;
                        ;
                }

                
# 1773 "<previous_module>"
;
                
# 1774 "<previous_module>"
tpop_0_73: IF(2,73,tpop_0_74)__CSEQ_removeindent;
                
# 1775 "<previous_module>"
__cs_local_delete_temp_td = (*__cs_local_delete_se).value;
                
# 1776 "<previous_module>"
static int __cs_local_delete_id_popped;
                
# 1777 "<previous_module>"
tpop_0_74: IF(2,74,tpop_0_75)__CSEQ_removeindent;
                
# 1778 "<previous_module>"
__cs_local_delete_id_popped = (*__cs_local_delete_temp_td).user_id;
                
# 1779 "<previous_module>"
tpop_0_75: IF(2,75,tpop_0_76)__CSEQ_removeindent;
                
# 1780 "<previous_module>"
printf("%llu\n", (*__cs_local_delete_temp_td).user_id);
                
# 1781 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                
# 1782 "<previous_module>"
goto __exit__delete_1;
                ;
                
# 1783 "<previous_module>"
__exit__delete_1:
                __CPROVER_assume(__cs_pc_cs[2] >= 76);

                
# 1784 "<previous_module>"
;
                ;
        }
        
# 1786 "<previous_module>"
;
        
# 1787 "<previous_module>"
__cs_retval__delete_1;
        
# 1788 "<previous_module>"
;
        ;
        
# 1789 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_27;
        
# 1790 "<previous_module>"
tpop_0_76: IF(2,76,tpop_0_77)__CSEQ_removeindent;
        
# 1791 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_27 = ATOMIC_OPERATION;
        
# 1792 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_27)

# 1793 "<previous_module>"
        {
                
# 1794 "<previous_module>"
tpop_0_77: IF(2,77,tpop_0_78)__CSEQ_removeindent;
                
# 1795 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
        }

        
# 1797 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 78);
        ;
        
# 1798 "<previous_module>"
;
        ;
        
# 1799 "<previous_module>"
__exit_pop:
        __CPROVER_assume(__cs_pc_cs[2] >= 78);

        
# 1800 "<previous_module>"
;
        ;
        
# 1801 "<previous_module>"
tpop_0_78: __CSEQ_removeindent;
        
# 1802 "<previous_module>"
__cs_exit(0, 2);
}


# 1804 "<previous_module>"
int main_thread(void)

# 1805 "<previous_module>"
{
        
# 1806 "<previous_module>"
IF(0,0,tmain_1)__CSEQ_removeindent;
        
# 1807 "<previous_module>"
__cs_mutex_init(&lock, 0);
        
# 1808 "<previous_module>"
static void *__cs_retval__init_1;

# 1809 "<previous_module>"
        {

# 1810 "<previous_module>"
                {
                        
# 1811 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss;
                        
# 1812 "<previous_module>"
__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss = &mystack;
                        
# 1813 "<previous_module>"
static void *__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
                        
# 1814 "<previous_module>"
__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state = 0;
                        
# 1815 "<previous_module>"
__cs_mutex_init(&library_lock, 0);
                        
# 1816 "<previous_module>"
;
                        ;
                        
# 1817 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3;
                        
# 1818 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3 = !(__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss != 0);
                        
# 1819 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3)

# 1820 "<previous_module>"
                        {
                                
# 1821 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                                
# 1822 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                                
# 1823 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        }

                        
# 1825 "<previous_module>"
;
                        
# 1826 "<previous_module>"
;
                        ;
                        
# 1827 "<previous_module>"
;
                        ;
                        
# 1828 "<previous_module>"
;
                        ;
                        
# 1829 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4;
                        
# 1830 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4 = !((((lfds711_pal_uint_t) (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top) % 128) == 0);
                        
# 1831 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4)

# 1832 "<previous_module>"
                        {
                                
# 1833 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                                
# 1834 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                                
# 1835 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        }

                        
# 1837 "<previous_module>"
;
                        
# 1838 "<previous_module>"
;
                        ;
                        
# 1839 "<previous_module>"
;
                        ;
                        
# 1840 "<previous_module>"
;
                        ;
                        
# 1841 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5;
                        
# 1842 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state)) % 128) == 0);
                        
# 1843 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5)

# 1844 "<previous_module>"
                        {
                                
# 1845 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                                
# 1846 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                                
# 1847 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        }

                        
# 1849 "<previous_module>"
;
                        
# 1850 "<previous_module>"
;
                        ;
                        
# 1851 "<previous_module>"
;
                        ;
                        
# 1852 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                        
# 1853 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[0] = 0;
                        
# 1854 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[1] = 0;
                        
# 1855 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state = __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;

# 1856 "<previous_module>"
                        {
                                
# 1857 "<previous_module>"
static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
                                
# 1858 "<previous_module>"
__cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).pop_backoff;
                                
# 1859 "<previous_module>"
;
                                ;
                                
# 1860 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
                                
# 1861 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
                                
# 1862 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)

# 1863 "<previous_module>"
                                {
                                        
# 1864 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 1865 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 1866 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 1868 "<previous_module>"
;
                                
# 1869 "<previous_module>"
;
                                ;
                                
# 1870 "<previous_module>"
;
                                ;
                                
# 1871 "<previous_module>"
;
                                ;
                                
# 1872 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
                                
# 1873 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
                                
# 1874 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)

# 1875 "<previous_module>"
                                {
                                        
# 1876 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 1877 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 1878 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 1880 "<previous_module>"
;
                                
# 1881 "<previous_module>"
;
                                ;
                                
# 1882 "<previous_module>"
;
                                ;
                                
# 1883 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock = LFDS711_MISC_FLAG_LOWERED;
                                
# 1884 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[0] = 0;
                                
# 1885 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[1] = 0;
                                
# 1886 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).metric = 1;
                                
# 1887 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).total_operations = 0;
                                
# 1888 "<previous_module>"
goto __exit__lfds711_misc_internal_backoff_init_1;
                                ;
                                
# 1889 "<previous_module>"
__exit__lfds711_misc_internal_backoff_init_1:
                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                
# 1890 "<previous_module>"
;
                                ;
                        }
                        
# 1892 "<previous_module>"
;

# 1893 "<previous_module>"
                        {
                                
# 1894 "<previous_module>"
static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
                                
# 1895 "<previous_module>"
__cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).push_backoff;
                                
# 1896 "<previous_module>"
;
                                ;
                                
# 1897 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
                                
# 1898 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
                                
# 1899 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)

# 1900 "<previous_module>"
                                {
                                        
# 1901 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 1902 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 1903 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 1905 "<previous_module>"
;
                                
# 1906 "<previous_module>"
;
                                ;
                                
# 1907 "<previous_module>"
;
                                ;
                                
# 1908 "<previous_module>"
;
                                ;
                                
# 1909 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
                                
# 1910 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
                                
# 1911 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)

# 1912 "<previous_module>"
                                {
                                        
# 1913 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 1914 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 1915 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 1917 "<previous_module>"
;
                                
# 1918 "<previous_module>"
;
                                ;
                                
# 1919 "<previous_module>"
;
                                ;
                                
# 1920 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock = LFDS711_MISC_FLAG_LOWERED;
                                
# 1921 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[0] = 0;
                                
# 1922 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[1] = 0;
                                
# 1923 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).metric = 1;
                                
# 1924 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).total_operations = 0;
                                
# 1925 "<previous_module>"
goto __exit__lfds711_misc_internal_backoff_init_2;
                                ;
                                
# 1926 "<previous_module>"
__exit__lfds711_misc_internal_backoff_init_2:
                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                
# 1927 "<previous_module>"
;
                                ;
                        }
                        
# 1929 "<previous_module>"
;

# 1930 "<previous_module>"
                        {
                                
# 1931 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_misc_force_store_destination;
                                
# 1932 "<previous_module>"
__cs_init_scalar(&__cs_local_lfds711_misc_force_store_destination, sizeof(lfds711_pal_uint_t));

# 1933 "<previous_module>"
                                {
                                        
# 1934 "<previous_module>"
static unsigned long __cs_retval____atomic_exchange_n_1;

# 1935 "<previous_module>"
                                        {
                                                
# 1936 "<previous_module>"
static int long long unsigned *__cs_param___atomic_exchange_n_previous;
                                                
# 1937 "<previous_module>"
__cs_param___atomic_exchange_n_previous = &__cs_local_lfds711_misc_force_store_destination;
                                                
# 1938 "<previous_module>"
static int long long unsigned __cs_param___atomic_exchange_n_new;
                                                
# 1939 "<previous_module>"
__cs_param___atomic_exchange_n_new = 0;
                                                
# 1940 "<previous_module>"
static int __cs_param___atomic_exchange_n_memorder;
                                                
# 1941 "<previous_module>"
__cs_param___atomic_exchange_n_memorder = 0;
                                                
# 1942 "<previous_module>"
static int __cs_local___atomic_exchange_n_res;
                                                
# 1943 "<previous_module>"
__cs_local___atomic_exchange_n_res = __CSEQ_atomic_exchange(__cs_param___atomic_exchange_n_previous, __cs_param___atomic_exchange_n_new, __cs_param___atomic_exchange_n_memorder);
                                                
# 1944 "<previous_module>"
__cs_retval____atomic_exchange_n_1 = __cs_local___atomic_exchange_n_res;
                                                
# 1945 "<previous_module>"
goto __exit____atomic_exchange_n_1;
                                                ;
                                                
# 1946 "<previous_module>"
__exit____atomic_exchange_n_1:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                                
# 1947 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1949 "<previous_module>"
;
                                        
# 1950 "<previous_module>"
(void) __cs_retval____atomic_exchange_n_1;
                                }
                                
# 1952 "<previous_module>"
;
                                
# 1953 "<previous_module>"
;
                                ;
                                
# 1954 "<previous_module>"
goto __exit__lfds711_misc_force_store_1;
                                ;
                                
# 1955 "<previous_module>"
__exit__lfds711_misc_force_store_1:
                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                
# 1956 "<previous_module>"
;
                                ;
                        }
                        
# 1958 "<previous_module>"
;
                        
# 1959 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                        
# 1960 "<previous_module>"
goto __exit__lfds711_stack_init_valid_on_current_logical_core_1;
                        ;
                        
# 1961 "<previous_module>"
__exit__lfds711_stack_init_valid_on_current_logical_core_1:
                        __CPROVER_assume(__cs_pc_cs[0] >= 1);

                        
# 1962 "<previous_module>"
;
                        ;
                }
                
# 1964 "<previous_module>"
;
                
# 1965 "<previous_module>"
__cs_retval__init_1 = (void *) (&mystack);
                
# 1966 "<previous_module>"
goto __exit__init_1;
                ;
                
# 1967 "<previous_module>"
__exit__init_1:
                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                
# 1968 "<previous_module>"
;
                ;
        }
        
# 1970 "<previous_module>"
;
        
# 1971 "<previous_module>"
ss = __cs_retval__init_1;
        
# 1972 "<previous_module>"
static __cs_t __cs_local_main_t1;
        
# 1973 "<previous_module>"
;
        ;
        
# 1974 "<previous_module>"
static __cs_t __cs_local_main_t2;
        
# 1975 "<previous_module>"
;
        ;
        
# 1976 "<previous_module>"
static __cs_t __cs_local_main_t3;
        
# 1977 "<previous_module>"
;
        ;
        
# 1978 "<previous_module>"
static __cs_t __cs_local_main_t4;
        
# 1979 "<previous_module>"
;
        ;
        
# 1980 "<previous_module>"
static __cs_t __cs_local_main_t5;
        
# 1981 "<previous_module>"
;
        ;
        
# 1982 "<previous_module>"
static __cs_t __cs_local_main_t6;
        
# 1983 "<previous_module>"
;
        ;
        
# 1984 "<previous_module>"
static __cs_t __cs_local_main_t7;
        
# 1985 "<previous_module>"
;
        ;
        
# 1986 "<previous_module>"
static __cs_t __cs_local_main_t8;
        
# 1987 "<previous_module>"
;
        ;
        
# 1988 "<previous_module>"
static __cs_t __cs_local_main_t9;
        
# 1989 "<previous_module>"
;
        ;
        
# 1990 "<previous_module>"
static __cs_t __cs_local_main_t10;
        
# 1991 "<previous_module>"
;
        ;
        
# 1992 "<previous_module>"
__cs_create(&__cs_local_main_t1, 0, push_0, 0, 1);
        
# 1993 "<previous_module>"
tmain_1: IF(0,1,tmain_2)__CSEQ_removeindent;
        
# 1994 "<previous_module>"
__cs_create(&__cs_local_main_t6, 0, pop_0, 0, 2);
        
# 1995 "<previous_module>"
tmain_2: IF(0,2,tmain_3)__CSEQ_removeindent;
        
# 1996 "<previous_module>"
__cs_join(__cs_local_main_t1, 0);
        
# 1997 "<previous_module>"
tmain_3: IF(0,3,tmain_4)__CSEQ_removeindent;
        
# 1998 "<previous_module>"
__cs_join(__cs_local_main_t6, 0);
        
# 1999 "<previous_module>"
static int __cs_retval__is_empty_1;

# 2000 "<previous_module>"
        {
                
# 2001 "<previous_module>"
static struct lfds711_stack_state *__cs_param_is_empty_s;
                
# 2002 "<previous_module>"
tmain_4: IF(0,4,tmain_5)__CSEQ_removeindent;
                
# 2003 "<previous_module>"
__cs_param_is_empty_s = ss;
                
# 2004 "<previous_module>"
static struct lfds711_stack_element *__cs_local_is_empty_se;
                
# 2005 "<previous_module>"
static int __cs_local_is_empty_res;
                
# 2006 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_2;

# 2007 "<previous_module>"
                {
                        
# 2008 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                        
# 2009 "<previous_module>"
tmain_5: IF(0,5,tmain_6)__CSEQ_removeindent;
                        
# 2010 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = __cs_param_is_empty_s;
                        
# 2011 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                        
# 2012 "<previous_module>"
tmain_6: IF(0,6,tmain_7)__CSEQ_removeindent;
                        
# 2013 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_is_empty_se;
                        
# 2014 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                        
# 2015 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                        
# 2016 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                        
# 2017 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                        
# 2018 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                        
# 2019 "<previous_module>"
;
                        ;
                        
# 2020 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                        
# 2021 "<previous_module>"
tmain_7: IF(0,7,tmain_8)__CSEQ_removeindent;
                        
# 2022 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                        
# 2023 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 2024 "<previous_module>"
                        {
                                
# 2025 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 2026 "<previous_module>"
tmain_8: IF(0,8,tmain_9)__CSEQ_removeindent;
                                
# 2027 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 2028 "<previous_module>"
tmain_9: IF(0,9,tmain_10)__CSEQ_removeindent;
                                
# 2029 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 2031 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 10);
                        ;
                        
# 2032 "<previous_module>"
;
                        ;
                        
# 2033 "<previous_module>"
;
                        ;
                        
# 2034 "<previous_module>"
;
                        ;
                        
# 2035 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                        
# 2036 "<previous_module>"
tmain_10: IF(0,10,tmain_11)__CSEQ_removeindent;
                        
# 2037 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                        
# 2038 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 2039 "<previous_module>"
                        {
                                
# 2040 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 2041 "<previous_module>"
tmain_11: IF(0,11,tmain_12)__CSEQ_removeindent;
                                
# 2042 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 2043 "<previous_module>"
tmain_12: IF(0,12,tmain_13)__CSEQ_removeindent;
                                
# 2044 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 2046 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 13);
                        ;
                        
# 2047 "<previous_module>"
;
                        ;
                        
# 2048 "<previous_module>"
;
                        ;
                        
# 2049 "<previous_module>"
tmain_13: IF(0,13,tmain_14)__CSEQ_removeindent;
                        
# 2050 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                        
# 2051 "<previous_module>"
tmain_14: IF(0,14,tmain_15)__CSEQ_removeindent;
                        
# 2052 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                        
# 2053 "<previous_module>"
tmain_15: IF(0,15,tmain_16)__CSEQ_removeindent;
                        
# 2054 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                        
# 2055 "<previous_module>"
tmain_16: IF(0,16,tmain_17)__CSEQ_removeindent;
                        
# 2056 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                        
# 2057 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                        
# 2058 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                        
# 2059 "<previous_module>"
;
                        ;
                        
# 2060 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                        
# 2061 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 2062 "<previous_module>"
                        {
                                
# 2063 "<previous_module>"
;
                                ;
                                
# 2064 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                
# 2065 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2066 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 2067 "<previous_module>"
                                {
                                        
# 2068 "<previous_module>"
tmain_17: IF(0,17,tmain_18)__CSEQ_removeindent;
                                        
# 2069 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2070 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                        
# 2071 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                                        ;
                                }

                                
# 2073 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 18);
                                ;
                                
# 2074 "<previous_module>"
tmain_18: IF(0,18,tmain_19)__CSEQ_removeindent;
                                
# 2075 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2076 "<previous_module>"
tmain_19: IF(0,19,tmain_20)__CSEQ_removeindent;
                                
# 2077 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2078 "<previous_module>"
tmain_20: IF(0,20,tmain_21)__CSEQ_removeindent;
                                
# 2079 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                
# 2080 "<previous_module>"
tmain_21: IF(0,21,tmain_22)__CSEQ_removeindent;
                                
# 2081 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2082 "<previous_module>"
tmain_22: IF(0,22,tmain_23)__CSEQ_removeindent;
                                
# 2083 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                
# 2084 "<previous_module>"
;
                                ;
                                
# 2085 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                
# 2086 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2087 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 2088 "<previous_module>"
                                {

# 2089 "<previous_module>"
                                        {
                                                
# 2090 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2091 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2092 "<previous_module>"
                                                {
                                                        
# 2093 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2095 "<previous_module>"
;
                                                
# 2096 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2097 "<previous_module>"
                                                {
                                                        
# 2098 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2100 "<previous_module>"
;
                                                
# 2101 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2102 "<previous_module>"
                                                {
                                                        
# 2103 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2105 "<previous_module>"
;
                                                
# 2106 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2107 "<previous_module>"
tmain_23: IF(0,23,tmain_24)__CSEQ_removeindent;
                                                
# 2108 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2109 "<previous_module>"
__exit_loop_16:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 24);

                                                
# 2110 "<previous_module>"
;
                                                ;
                                                
# 2111 "<previous_module>"
__exit__exponential_backoff_4_0:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 24);

                                                
# 2112 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2114 "<previous_module>"
;
                                        
# 2115 "<previous_module>"
tmain_24: IF(0,24,tmain_25)__CSEQ_removeindent;
                                        
# 2116 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2117 "<previous_module>"
tmain_25: IF(0,25,tmain_26)__CSEQ_removeindent;
                                        
# 2118 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                }

                                
# 2120 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 26);
                                ;
                                
# 2121 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2122 "<previous_module>"
;
                                ;
                                
# 2123 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                
# 2124 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2125 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 2126 "<previous_module>"
                                {
                                        
# 2127 "<previous_module>"
goto __exit_loop_15;
                                        ;
                                }

                                
# 2129 "<previous_module>"
;
                        }
                        
# 2131 "<previous_module>"
;
                        
# 2132 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                        
# 2133 "<previous_module>"
tmain_26: IF(0,26,tmain_27)__CSEQ_removeindent;
                        
# 2134 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                        
# 2135 "<previous_module>"
__exit_loop_15:
                        __CPROVER_assume(__cs_pc_cs[0] >= 27);

                        
# 2136 "<previous_module>"
;
                        ;
                        
# 2137 "<previous_module>"
if (
# 2138 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2139 "<previous_module>"
                        {
                                
# 2140 "<previous_module>"
goto __exit_loop_17;
                                ;
                        }

                        
# 2142 "<previous_module>"
;

# 2143 "<previous_module>"
                        {
                                
# 2144 "<previous_module>"
;
                                ;
                                
# 2145 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2146 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2147 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2148 "<previous_module>"
                                {
                                        
# 2149 "<previous_module>"
tmain_27: IF(0,27,tmain_28)__CSEQ_removeindent;
                                        
# 2150 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2151 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                        
# 2152 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                                        ;
                                }

                                
# 2154 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 28);
                                ;
                                
# 2155 "<previous_module>"
tmain_28: IF(0,28,tmain_29)__CSEQ_removeindent;
                                
# 2156 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2157 "<previous_module>"
tmain_29: IF(0,29,tmain_30)__CSEQ_removeindent;
                                
# 2158 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2159 "<previous_module>"
tmain_30: IF(0,30,tmain_31)__CSEQ_removeindent;
                                
# 2160 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                
# 2161 "<previous_module>"
tmain_31: IF(0,31,tmain_32)__CSEQ_removeindent;
                                
# 2162 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2163 "<previous_module>"
tmain_32: IF(0,32,tmain_33)__CSEQ_removeindent;
                                
# 2164 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                
# 2165 "<previous_module>"
;
                                ;
                                
# 2166 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2167 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2168 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2169 "<previous_module>"
                                {

# 2170 "<previous_module>"
                                        {
                                                
# 2171 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2172 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2173 "<previous_module>"
                                                {
                                                        
# 2174 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2176 "<previous_module>"
;
                                                
# 2177 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2178 "<previous_module>"
                                                {
                                                        
# 2179 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2181 "<previous_module>"
;
                                                
# 2182 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2183 "<previous_module>"
                                                {
                                                        
# 2184 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2186 "<previous_module>"
;
                                                
# 2187 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2188 "<previous_module>"
tmain_33: IF(0,33,tmain_34)__CSEQ_removeindent;
                                                
# 2189 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2190 "<previous_module>"
__exit_loop_18:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 34);

                                                
# 2191 "<previous_module>"
;
                                                ;
                                                
# 2192 "<previous_module>"
__exit__exponential_backoff_5_0:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 34);

                                                
# 2193 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2195 "<previous_module>"
;
                                        
# 2196 "<previous_module>"
tmain_34: IF(0,34,tmain_35)__CSEQ_removeindent;
                                        
# 2197 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2198 "<previous_module>"
tmain_35: IF(0,35,tmain_36)__CSEQ_removeindent;
                                        
# 2199 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                }

                                
# 2201 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 36);
                                ;
                                
# 2202 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2203 "<previous_module>"
;
                                ;
                                
# 2204 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2205 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2206 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2207 "<previous_module>"
                                {
                                        
# 2208 "<previous_module>"
goto __exit_loop_17;
                                        ;
                                }

                                
# 2210 "<previous_module>"
;
                        }
                        
# 2212 "<previous_module>"
;
                        
# 2213 "<previous_module>"
if (
# 2214 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2215 "<previous_module>"
                        {
                                
# 2216 "<previous_module>"
goto __exit_loop_17;
                                ;
                        }

                        
# 2218 "<previous_module>"
;

# 2219 "<previous_module>"
                        {
                                
# 2220 "<previous_module>"
;
                                ;
                                
# 2221 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2222 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2223 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2224 "<previous_module>"
                                {
                                        
# 2225 "<previous_module>"
tmain_36: IF(0,36,tmain_37)__CSEQ_removeindent;
                                        
# 2226 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2227 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                        
# 2228 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                                        ;
                                }

                                
# 2230 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 37);
                                ;
                                
# 2231 "<previous_module>"
tmain_37: IF(0,37,tmain_38)__CSEQ_removeindent;
                                
# 2232 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2233 "<previous_module>"
tmain_38: IF(0,38,tmain_39)__CSEQ_removeindent;
                                
# 2234 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2235 "<previous_module>"
tmain_39: IF(0,39,tmain_40)__CSEQ_removeindent;
                                
# 2236 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                
# 2237 "<previous_module>"
tmain_40: IF(0,40,tmain_41)__CSEQ_removeindent;
                                
# 2238 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2239 "<previous_module>"
tmain_41: IF(0,41,tmain_42)__CSEQ_removeindent;
                                
# 2240 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                
# 2241 "<previous_module>"
;
                                ;
                                
# 2242 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2243 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2244 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2245 "<previous_module>"
                                {

# 2246 "<previous_module>"
                                        {
                                                
# 2247 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2248 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2249 "<previous_module>"
                                                {
                                                        
# 2250 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2252 "<previous_module>"
;
                                                
# 2253 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2254 "<previous_module>"
                                                {
                                                        
# 2255 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2257 "<previous_module>"
;
                                                
# 2258 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2259 "<previous_module>"
                                                {
                                                        
# 2260 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2262 "<previous_module>"
;
                                                
# 2263 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2264 "<previous_module>"
tmain_42: IF(0,42,tmain_43)__CSEQ_removeindent;
                                                
# 2265 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2266 "<previous_module>"
__exit_loop_19:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 43);

                                                
# 2267 "<previous_module>"
;
                                                ;
                                                
# 2268 "<previous_module>"
__exit__exponential_backoff_5_1:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 43);

                                                
# 2269 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2271 "<previous_module>"
;
                                        
# 2272 "<previous_module>"
tmain_43: IF(0,43,tmain_44)__CSEQ_removeindent;
                                        
# 2273 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2274 "<previous_module>"
tmain_44: IF(0,44,tmain_45)__CSEQ_removeindent;
                                        
# 2275 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                }

                                
# 2277 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 45);
                                ;
                                
# 2278 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2279 "<previous_module>"
;
                                ;
                                
# 2280 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2281 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2282 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2283 "<previous_module>"
                                {
                                        
# 2284 "<previous_module>"
goto __exit_loop_17;
                                        ;
                                }

                                
# 2286 "<previous_module>"
;
                        }
                        
# 2288 "<previous_module>"
;
                        
# 2289 "<previous_module>"
if (
# 2290 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2291 "<previous_module>"
                        {
                                
# 2292 "<previous_module>"
goto __exit_loop_17;
                                ;
                        }

                        
# 2294 "<previous_module>"
;

# 2295 "<previous_module>"
                        {
                                
# 2296 "<previous_module>"
;
                                ;
                                
# 2297 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2298 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2299 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2300 "<previous_module>"
                                {
                                        
# 2301 "<previous_module>"
tmain_45: IF(0,45,tmain_46)__CSEQ_removeindent;
                                        
# 2302 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2303 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                        
# 2304 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                                        ;
                                }

                                
# 2306 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 46);
                                ;
                                
# 2307 "<previous_module>"
tmain_46: IF(0,46,tmain_47)__CSEQ_removeindent;
                                
# 2308 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2309 "<previous_module>"
tmain_47: IF(0,47,tmain_48)__CSEQ_removeindent;
                                
# 2310 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2311 "<previous_module>"
tmain_48: IF(0,48,tmain_49)__CSEQ_removeindent;
                                
# 2312 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                
# 2313 "<previous_module>"
tmain_49: IF(0,49,tmain_50)__CSEQ_removeindent;
                                
# 2314 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2315 "<previous_module>"
tmain_50: IF(0,50,tmain_51)__CSEQ_removeindent;
                                
# 2316 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                
# 2317 "<previous_module>"
;
                                ;
                                
# 2318 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2319 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2320 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2321 "<previous_module>"
                                {

# 2322 "<previous_module>"
                                        {
                                                
# 2323 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2324 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2325 "<previous_module>"
                                                {
                                                        
# 2326 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2328 "<previous_module>"
;
                                                
# 2329 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2330 "<previous_module>"
                                                {
                                                        
# 2331 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2333 "<previous_module>"
;
                                                
# 2334 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2335 "<previous_module>"
                                                {
                                                        
# 2336 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2338 "<previous_module>"
;
                                                
# 2339 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2340 "<previous_module>"
tmain_51: IF(0,51,tmain_52)__CSEQ_removeindent;
                                                
# 2341 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2342 "<previous_module>"
__exit_loop_20:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 52);

                                                
# 2343 "<previous_module>"
;
                                                ;
                                                
# 2344 "<previous_module>"
__exit__exponential_backoff_5_2:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 52);

                                                
# 2345 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2347 "<previous_module>"
;
                                        
# 2348 "<previous_module>"
tmain_52: IF(0,52,tmain_53)__CSEQ_removeindent;
                                        
# 2349 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2350 "<previous_module>"
tmain_53: IF(0,53,tmain_54)__CSEQ_removeindent;
                                        
# 2351 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                }

                                
# 2353 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 54);
                                ;
                                
# 2354 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2355 "<previous_module>"
;
                                ;
                                
# 2356 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2357 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2358 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2359 "<previous_module>"
                                {
                                        
# 2360 "<previous_module>"
goto __exit_loop_17;
                                        ;
                                }

                                
# 2362 "<previous_module>"
;
                        }
                        
# 2364 "<previous_module>"
;
                        
# 2365 "<previous_module>"
if (
# 2366 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2367 "<previous_module>"
                        {
                                
# 2368 "<previous_module>"
goto __exit_loop_17;
                                ;
                        }

                        
# 2370 "<previous_module>"
;

# 2371 "<previous_module>"
                        {
                                
# 2372 "<previous_module>"
;
                                ;
                                
# 2373 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2374 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2375 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2376 "<previous_module>"
                                {
                                        
# 2377 "<previous_module>"
tmain_54: IF(0,54,tmain_55)__CSEQ_removeindent;
                                        
# 2378 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2379 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                        
# 2380 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                                        ;
                                }

                                
# 2382 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 55);
                                ;
                                
# 2383 "<previous_module>"
tmain_55: IF(0,55,tmain_56)__CSEQ_removeindent;
                                
# 2384 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2385 "<previous_module>"
tmain_56: IF(0,56,tmain_57)__CSEQ_removeindent;
                                
# 2386 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2387 "<previous_module>"
tmain_57: IF(0,57,tmain_58)__CSEQ_removeindent;
                                
# 2388 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                
# 2389 "<previous_module>"
tmain_58: IF(0,58,tmain_59)__CSEQ_removeindent;
                                
# 2390 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2391 "<previous_module>"
tmain_59: IF(0,59,tmain_60)__CSEQ_removeindent;
                                
# 2392 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                
# 2393 "<previous_module>"
;
                                ;
                                
# 2394 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2395 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2396 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2397 "<previous_module>"
                                {

# 2398 "<previous_module>"
                                        {
                                                
# 2399 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2400 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2401 "<previous_module>"
                                                {
                                                        
# 2402 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2404 "<previous_module>"
;
                                                
# 2405 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2406 "<previous_module>"
                                                {
                                                        
# 2407 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2409 "<previous_module>"
;
                                                
# 2410 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2411 "<previous_module>"
                                                {
                                                        
# 2412 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2414 "<previous_module>"
;
                                                
# 2415 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2416 "<previous_module>"
tmain_60: IF(0,60,tmain_61)__CSEQ_removeindent;
                                                
# 2417 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2418 "<previous_module>"
__exit_loop_21:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 61);

                                                
# 2419 "<previous_module>"
;
                                                ;
                                                
# 2420 "<previous_module>"
__exit__exponential_backoff_5_3:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 61);

                                                
# 2421 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2423 "<previous_module>"
;
                                        
# 2424 "<previous_module>"
tmain_61: IF(0,61,tmain_62)__CSEQ_removeindent;
                                        
# 2425 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2426 "<previous_module>"
tmain_62: IF(0,62,tmain_63)__CSEQ_removeindent;
                                        
# 2427 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                }

                                
# 2429 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 63);
                                ;
                                
# 2430 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2431 "<previous_module>"
;
                                ;
                                
# 2432 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2433 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2434 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2435 "<previous_module>"
                                {
                                        
# 2436 "<previous_module>"
goto __exit_loop_17;
                                        ;
                                }

                                
# 2438 "<previous_module>"
;
                        }
                        
# 2440 "<previous_module>"
;
                        
# 2441 "<previous_module>"
if (
# 2442 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2443 "<previous_module>"
                        {
                                
# 2444 "<previous_module>"
goto __exit_loop_17;
                                ;
                        }

                        
# 2446 "<previous_module>"
;

# 2447 "<previous_module>"
                        {
                                
# 2448 "<previous_module>"
;
                                ;
                                
# 2449 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2450 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2451 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2452 "<previous_module>"
                                {
                                        
# 2453 "<previous_module>"
tmain_63: IF(0,63,tmain_64)__CSEQ_removeindent;
                                        
# 2454 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2455 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                        
# 2456 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                                        ;
                                }

                                
# 2458 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 64);
                                ;
                                
# 2459 "<previous_module>"
tmain_64: IF(0,64,tmain_65)__CSEQ_removeindent;
                                
# 2460 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2461 "<previous_module>"
tmain_65: IF(0,65,tmain_66)__CSEQ_removeindent;
                                
# 2462 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2463 "<previous_module>"
tmain_66: IF(0,66,tmain_67)__CSEQ_removeindent;
                                
# 2464 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                
# 2465 "<previous_module>"
tmain_67: IF(0,67,tmain_68)__CSEQ_removeindent;
                                
# 2466 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2467 "<previous_module>"
tmain_68: IF(0,68,tmain_69)__CSEQ_removeindent;
                                
# 2468 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                
# 2469 "<previous_module>"
;
                                ;
                                
# 2470 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2471 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2472 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2473 "<previous_module>"
                                {

# 2474 "<previous_module>"
                                        {
                                                
# 2475 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2476 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2477 "<previous_module>"
                                                {
                                                        
# 2478 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2480 "<previous_module>"
;
                                                
# 2481 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2482 "<previous_module>"
                                                {
                                                        
# 2483 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2485 "<previous_module>"
;
                                                
# 2486 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2487 "<previous_module>"
                                                {
                                                        
# 2488 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2490 "<previous_module>"
;
                                                
# 2491 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2492 "<previous_module>"
tmain_69: IF(0,69,tmain_70)__CSEQ_removeindent;
                                                
# 2493 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2494 "<previous_module>"
__exit_loop_22:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 70);

                                                
# 2495 "<previous_module>"
;
                                                ;
                                                
# 2496 "<previous_module>"
__exit__exponential_backoff_5_4:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 70);

                                                
# 2497 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2499 "<previous_module>"
;
                                        
# 2500 "<previous_module>"
tmain_70: IF(0,70,tmain_71)__CSEQ_removeindent;
                                        
# 2501 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2502 "<previous_module>"
tmain_71: IF(0,71,tmain_72)__CSEQ_removeindent;
                                        
# 2503 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                }

                                
# 2505 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 72);
                                ;
                                
# 2506 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2507 "<previous_module>"
;
                                ;
                                
# 2508 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2509 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2510 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2511 "<previous_module>"
                                {
                                        
# 2512 "<previous_module>"
goto __exit_loop_17;
                                        ;
                                }

                                
# 2514 "<previous_module>"
;
                        }
                        
# 2516 "<previous_module>"
;
                        
# 2517 "<previous_module>"
tmain_72: IF(0,72,tmain_73)__CSEQ_removeindent;
                        
# 2518 "<previous_module>"
__CPROVER_assume(
# 2519 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                        
# 2520 "<previous_module>"
__exit_loop_17:
                        __CPROVER_assume(__cs_pc_cs[0] >= 73);

                        
# 2521 "<previous_module>"
;
                        ;
                        
# 2522 "<previous_module>"
tmain_73: IF(0,73,tmain_74)__CSEQ_removeindent;
                        
# 2523 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                        
# 2524 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
                        
# 2525 "<previous_module>"
goto __exit__lfds711_stack_pop_2;
                        ;
                        
# 2526 "<previous_module>"
__exit__lfds711_stack_pop_2:
                        __CPROVER_assume(__cs_pc_cs[0] >= 74);

                        
# 2527 "<previous_module>"
;
                        ;
                }
                
# 2529 "<previous_module>"
;
                
# 2530 "<previous_module>"
__cs_local_is_empty_res = __cs_retval__lfds711_stack_pop_2;
                
# 2531 "<previous_module>"
;
                ;
                
# 2532 "<previous_module>"
static _Bool __cs_local_is_empty___cs_tmp_if_cond_23;
                
# 2533 "<previous_module>"
__cs_local_is_empty___cs_tmp_if_cond_23 = __cs_local_is_empty_res != 0;
                
# 2534 "<previous_module>"
if (__cs_local_is_empty___cs_tmp_if_cond_23)

# 2535 "<previous_module>"
                {

# 2536 "<previous_module>"
                        {
                                
# 2537 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                                
# 2538 "<previous_module>"
tmain_74: IF(0,74,tmain_75)__CSEQ_removeindent;
                                
# 2539 "<previous_module>"
__cs_param_lfds711_stack_push_ss = __cs_param_is_empty_s;
                                
# 2540 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                                
# 2541 "<previous_module>"
tmain_75: IF(0,75,tmain_76)__CSEQ_removeindent;
                                
# 2542 "<previous_module>"
__cs_param_lfds711_stack_push_se = __cs_local_is_empty_se;
                                
# 2543 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                                
# 2544 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                                
# 2545 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                                
# 2546 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                                
# 2547 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                                
# 2548 "<previous_module>"
;
                                ;
                                
# 2549 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                                
# 2550 "<previous_module>"
tmain_76: IF(0,76,tmain_77)__CSEQ_removeindent;
                                
# 2551 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                                
# 2552 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 2553 "<previous_module>"
                                {
                                        
# 2554 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 2555 "<previous_module>"
tmain_77: IF(0,77,tmain_78)__CSEQ_removeindent;
                                        
# 2556 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 2557 "<previous_module>"
tmain_78: IF(0,78,tmain_79)__CSEQ_removeindent;
                                        
# 2558 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 2560 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 79);
                                ;
                                
# 2561 "<previous_module>"
;
                                ;
                                
# 2562 "<previous_module>"
;
                                ;
                                
# 2563 "<previous_module>"
;
                                ;
                                
# 2564 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                                
# 2565 "<previous_module>"
tmain_79: IF(0,79,tmain_80)__CSEQ_removeindent;
                                
# 2566 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                                
# 2567 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 2568 "<previous_module>"
                                {
                                        
# 2569 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 2570 "<previous_module>"
tmain_80: IF(0,80,tmain_81)__CSEQ_removeindent;
                                        
# 2571 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 2572 "<previous_module>"
tmain_81: IF(0,81,tmain_82)__CSEQ_removeindent;
                                        
# 2573 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 2575 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 82);
                                ;
                                
# 2576 "<previous_module>"
;
                                ;
                                
# 2577 "<previous_module>"
;
                                ;
                                
# 2578 "<previous_module>"
tmain_82: IF(0,82,tmain_83)__CSEQ_removeindent;
                                
# 2579 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                                
# 2580 "<previous_module>"
tmain_83: IF(0,83,tmain_84)__CSEQ_removeindent;
                                
# 2581 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                                
# 2582 "<previous_module>"
tmain_84: IF(0,84,tmain_85)__CSEQ_removeindent;
                                
# 2583 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                                
# 2584 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                                
# 2585 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                                
# 2586 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                                
# 2587 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2588 "<previous_module>"
                                {
                                        
# 2589 "<previous_module>"
goto __exit_loop_23;
                                        ;
                                }

                                
# 2591 "<previous_module>"
;

# 2592 "<previous_module>"
                                {
                                        
# 2593 "<previous_module>"
tmain_85: IF(0,85,tmain_86)__CSEQ_removeindent;
                                        
# 2594 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2595 "<previous_module>"
tmain_86: IF(0,86,tmain_87)__CSEQ_removeindent;
                                        
# 2596 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2597 "<previous_module>"
tmain_87: IF(0,87,tmain_88)__CSEQ_removeindent;
                                        
# 2598 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2599 "<previous_module>"
tmain_88: IF(0,88,tmain_89)__CSEQ_removeindent;
                                        
# 2600 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2601 "<previous_module>"
tmain_89: IF(0,89,tmain_90)__CSEQ_removeindent;
                                        
# 2602 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2603 "<previous_module>"
tmain_90: IF(0,90,tmain_91)__CSEQ_removeindent;
                                        
# 2604 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2605 "<previous_module>"
tmain_91: IF(0,91,tmain_92)__CSEQ_removeindent;
                                        
# 2606 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2607 "<previous_module>"
;
                                        ;
                                        
# 2608 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2609 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2610 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2611 "<previous_module>"
                                        {

# 2612 "<previous_module>"
                                                {
                                                        
# 2613 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2614 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2615 "<previous_module>"
                                                        {
                                                                
# 2616 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2618 "<previous_module>"
;
                                                        
# 2619 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2620 "<previous_module>"
                                                        {
                                                                
# 2621 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2623 "<previous_module>"
;
                                                        
# 2624 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2625 "<previous_module>"
                                                        {
                                                                
# 2626 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2628 "<previous_module>"
;
                                                        
# 2629 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2630 "<previous_module>"
tmain_92: IF(0,92,tmain_93)__CSEQ_removeindent;
                                                        
# 2631 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2632 "<previous_module>"
__exit_loop_24:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 93);

                                                        
# 2633 "<previous_module>"
;
                                                        ;
                                                        
# 2634 "<previous_module>"
__exit__exponential_backoff_6_0:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 93);

                                                        
# 2635 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2637 "<previous_module>"
;
                                        }

                                        
# 2639 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 93);
                                        ;
                                        
# 2640 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2641 "<previous_module>"
;
                                        ;
                                        
# 2642 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2643 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2644 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2645 "<previous_module>"
                                        {
                                                
# 2646 "<previous_module>"
goto __exit_loop_23;
                                                ;
                                        }

                                        
# 2648 "<previous_module>"
;
                                }
                                
# 2650 "<previous_module>"
;
                                
# 2651 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2652 "<previous_module>"
                                {
                                        
# 2653 "<previous_module>"
goto __exit_loop_23;
                                        ;
                                }

                                
# 2655 "<previous_module>"
;

# 2656 "<previous_module>"
                                {
                                        
# 2657 "<previous_module>"
tmain_93: IF(0,93,tmain_94)__CSEQ_removeindent;
                                        
# 2658 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2659 "<previous_module>"
tmain_94: IF(0,94,tmain_95)__CSEQ_removeindent;
                                        
# 2660 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2661 "<previous_module>"
tmain_95: IF(0,95,tmain_96)__CSEQ_removeindent;
                                        
# 2662 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2663 "<previous_module>"
tmain_96: IF(0,96,tmain_97)__CSEQ_removeindent;
                                        
# 2664 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2665 "<previous_module>"
tmain_97: IF(0,97,tmain_98)__CSEQ_removeindent;
                                        
# 2666 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2667 "<previous_module>"
tmain_98: IF(0,98,tmain_99)__CSEQ_removeindent;
                                        
# 2668 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2669 "<previous_module>"
tmain_99: IF(0,99,tmain_100)__CSEQ_removeindent;
                                        
# 2670 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2671 "<previous_module>"
;
                                        ;
                                        
# 2672 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2673 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2674 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2675 "<previous_module>"
                                        {

# 2676 "<previous_module>"
                                                {
                                                        
# 2677 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2678 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2679 "<previous_module>"
                                                        {
                                                                
# 2680 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2682 "<previous_module>"
;
                                                        
# 2683 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2684 "<previous_module>"
                                                        {
                                                                
# 2685 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2687 "<previous_module>"
;
                                                        
# 2688 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2689 "<previous_module>"
                                                        {
                                                                
# 2690 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2692 "<previous_module>"
;
                                                        
# 2693 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2694 "<previous_module>"
tmain_100: IF(0,100,tmain_101)__CSEQ_removeindent;
                                                        
# 2695 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2696 "<previous_module>"
__exit_loop_25:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 101);

                                                        
# 2697 "<previous_module>"
;
                                                        ;
                                                        
# 2698 "<previous_module>"
__exit__exponential_backoff_6_1:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 101);

                                                        
# 2699 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2701 "<previous_module>"
;
                                        }

                                        
# 2703 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 101);
                                        ;
                                        
# 2704 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2705 "<previous_module>"
;
                                        ;
                                        
# 2706 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2707 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2708 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2709 "<previous_module>"
                                        {
                                                
# 2710 "<previous_module>"
goto __exit_loop_23;
                                                ;
                                        }

                                        
# 2712 "<previous_module>"
;
                                }
                                
# 2714 "<previous_module>"
;
                                
# 2715 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2716 "<previous_module>"
                                {
                                        
# 2717 "<previous_module>"
goto __exit_loop_23;
                                        ;
                                }

                                
# 2719 "<previous_module>"
;

# 2720 "<previous_module>"
                                {
                                        
# 2721 "<previous_module>"
tmain_101: IF(0,101,tmain_102)__CSEQ_removeindent;
                                        
# 2722 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2723 "<previous_module>"
tmain_102: IF(0,102,tmain_103)__CSEQ_removeindent;
                                        
# 2724 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2725 "<previous_module>"
tmain_103: IF(0,103,tmain_104)__CSEQ_removeindent;
                                        
# 2726 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2727 "<previous_module>"
tmain_104: IF(0,104,tmain_105)__CSEQ_removeindent;
                                        
# 2728 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2729 "<previous_module>"
tmain_105: IF(0,105,tmain_106)__CSEQ_removeindent;
                                        
# 2730 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2731 "<previous_module>"
tmain_106: IF(0,106,tmain_107)__CSEQ_removeindent;
                                        
# 2732 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2733 "<previous_module>"
tmain_107: IF(0,107,tmain_108)__CSEQ_removeindent;
                                        
# 2734 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2735 "<previous_module>"
;
                                        ;
                                        
# 2736 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2737 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2738 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2739 "<previous_module>"
                                        {

# 2740 "<previous_module>"
                                                {
                                                        
# 2741 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2742 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2743 "<previous_module>"
                                                        {
                                                                
# 2744 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2746 "<previous_module>"
;
                                                        
# 2747 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2748 "<previous_module>"
                                                        {
                                                                
# 2749 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2751 "<previous_module>"
;
                                                        
# 2752 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2753 "<previous_module>"
                                                        {
                                                                
# 2754 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2756 "<previous_module>"
;
                                                        
# 2757 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2758 "<previous_module>"
tmain_108: IF(0,108,tmain_109)__CSEQ_removeindent;
                                                        
# 2759 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2760 "<previous_module>"
__exit_loop_26:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 109);

                                                        
# 2761 "<previous_module>"
;
                                                        ;
                                                        
# 2762 "<previous_module>"
__exit__exponential_backoff_6_2:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 109);

                                                        
# 2763 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2765 "<previous_module>"
;
                                        }

                                        
# 2767 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 109);
                                        ;
                                        
# 2768 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2769 "<previous_module>"
;
                                        ;
                                        
# 2770 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2771 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2772 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2773 "<previous_module>"
                                        {
                                                
# 2774 "<previous_module>"
goto __exit_loop_23;
                                                ;
                                        }

                                        
# 2776 "<previous_module>"
;
                                }
                                
# 2778 "<previous_module>"
;
                                
# 2779 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2780 "<previous_module>"
                                {
                                        
# 2781 "<previous_module>"
goto __exit_loop_23;
                                        ;
                                }

                                
# 2783 "<previous_module>"
;

# 2784 "<previous_module>"
                                {
                                        
# 2785 "<previous_module>"
tmain_109: IF(0,109,tmain_110)__CSEQ_removeindent;
                                        
# 2786 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2787 "<previous_module>"
tmain_110: IF(0,110,tmain_111)__CSEQ_removeindent;
                                        
# 2788 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2789 "<previous_module>"
tmain_111: IF(0,111,tmain_112)__CSEQ_removeindent;
                                        
# 2790 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2791 "<previous_module>"
tmain_112: IF(0,112,tmain_113)__CSEQ_removeindent;
                                        
# 2792 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2793 "<previous_module>"
tmain_113: IF(0,113,tmain_114)__CSEQ_removeindent;
                                        
# 2794 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2795 "<previous_module>"
tmain_114: IF(0,114,tmain_115)__CSEQ_removeindent;
                                        
# 2796 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2797 "<previous_module>"
tmain_115: IF(0,115,tmain_116)__CSEQ_removeindent;
                                        
# 2798 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2799 "<previous_module>"
;
                                        ;
                                        
# 2800 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2801 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2802 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2803 "<previous_module>"
                                        {

# 2804 "<previous_module>"
                                                {
                                                        
# 2805 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2806 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2807 "<previous_module>"
                                                        {
                                                                
# 2808 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2810 "<previous_module>"
;
                                                        
# 2811 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2812 "<previous_module>"
                                                        {
                                                                
# 2813 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2815 "<previous_module>"
;
                                                        
# 2816 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2817 "<previous_module>"
                                                        {
                                                                
# 2818 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2820 "<previous_module>"
;
                                                        
# 2821 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2822 "<previous_module>"
tmain_116: IF(0,116,tmain_117)__CSEQ_removeindent;
                                                        
# 2823 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2824 "<previous_module>"
__exit_loop_27:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 117);

                                                        
# 2825 "<previous_module>"
;
                                                        ;
                                                        
# 2826 "<previous_module>"
__exit__exponential_backoff_6_3:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 117);

                                                        
# 2827 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2829 "<previous_module>"
;
                                        }

                                        
# 2831 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 117);
                                        ;
                                        
# 2832 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2833 "<previous_module>"
;
                                        ;
                                        
# 2834 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2835 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2836 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2837 "<previous_module>"
                                        {
                                                
# 2838 "<previous_module>"
goto __exit_loop_23;
                                                ;
                                        }

                                        
# 2840 "<previous_module>"
;
                                }
                                
# 2842 "<previous_module>"
;
                                
# 2843 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2844 "<previous_module>"
                                {
                                        
# 2845 "<previous_module>"
goto __exit_loop_23;
                                        ;
                                }

                                
# 2847 "<previous_module>"
;

# 2848 "<previous_module>"
                                {
                                        
# 2849 "<previous_module>"
tmain_117: IF(0,117,tmain_118)__CSEQ_removeindent;
                                        
# 2850 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2851 "<previous_module>"
tmain_118: IF(0,118,tmain_119)__CSEQ_removeindent;
                                        
# 2852 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 2853 "<previous_module>"
tmain_119: IF(0,119,tmain_120)__CSEQ_removeindent;
                                        
# 2854 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2855 "<previous_module>"
tmain_120: IF(0,120,tmain_121)__CSEQ_removeindent;
                                        
# 2856 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 2857 "<previous_module>"
tmain_121: IF(0,121,tmain_122)__CSEQ_removeindent;
                                        
# 2858 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2859 "<previous_module>"
tmain_122: IF(0,122,tmain_123)__CSEQ_removeindent;
                                        
# 2860 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 2861 "<previous_module>"
tmain_123: IF(0,123,tmain_124)__CSEQ_removeindent;
                                        
# 2862 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2863 "<previous_module>"
;
                                        ;
                                        
# 2864 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 2865 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 2866 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2867 "<previous_module>"
                                        {

# 2868 "<previous_module>"
                                                {
                                                        
# 2869 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2870 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2871 "<previous_module>"
                                                        {
                                                                
# 2872 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2874 "<previous_module>"
;
                                                        
# 2875 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2876 "<previous_module>"
                                                        {
                                                                
# 2877 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2879 "<previous_module>"
;
                                                        
# 2880 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2881 "<previous_module>"
                                                        {
                                                                
# 2882 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2884 "<previous_module>"
;
                                                        
# 2885 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2886 "<previous_module>"
tmain_124: IF(0,124,tmain_125)__CSEQ_removeindent;
                                                        
# 2887 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2888 "<previous_module>"
__exit_loop_28:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 125);

                                                        
# 2889 "<previous_module>"
;
                                                        ;
                                                        
# 2890 "<previous_module>"
__exit__exponential_backoff_6_4:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 125);

                                                        
# 2891 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2893 "<previous_module>"
;
                                        }

                                        
# 2895 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 125);
                                        ;
                                        
# 2896 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 2897 "<previous_module>"
;
                                        ;
                                        
# 2898 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 2899 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 2900 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2901 "<previous_module>"
                                        {
                                                
# 2902 "<previous_module>"
goto __exit_loop_23;
                                                ;
                                        }

                                        
# 2904 "<previous_module>"
;
                                }
                                
# 2906 "<previous_module>"
;
                                
# 2907 "<previous_module>"
tmain_125: IF(0,125,tmain_126)__CSEQ_removeindent;
                                
# 2908 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                                
# 2909 "<previous_module>"
__exit_loop_23:
                                __CPROVER_assume(__cs_pc_cs[0] >= 126);

                                
# 2910 "<previous_module>"
;
                                ;
                                
# 2911 "<previous_module>"
goto __exit__lfds711_stack_push_2;
                                ;
                                
# 2912 "<previous_module>"
__exit__lfds711_stack_push_2:
                                __CPROVER_assume(__cs_pc_cs[0] >= 126);

                                
# 2913 "<previous_module>"
;
                                ;
                        }
                        
# 2915 "<previous_module>"
;
                        
# 2916 "<previous_module>"
__cs_retval__is_empty_1 = 0;
                        
# 2917 "<previous_module>"
goto __exit__is_empty_1;
                        ;
                }

                
# 2919 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 126);
                ;
                
# 2920 "<previous_module>"
__cs_retval__is_empty_1 = 1;
                
# 2921 "<previous_module>"
goto __exit__is_empty_1;
                ;
                
# 2922 "<previous_module>"
__exit__is_empty_1:
                __CPROVER_assume(__cs_pc_cs[0] >= 126);

                
# 2923 "<previous_module>"
;
                ;
        }
        
# 2925 "<previous_module>"
;
        
# 2926 "<previous_module>"
assert(__cs_retval__is_empty_1);
        
# 2927 "<previous_module>"
goto __exit_main;
        ;
        
# 2928 "<previous_module>"
__exit_main:
        __CPROVER_assume(__cs_pc_cs[0] >= 126);

        
# 2929 "<previous_module>"
;
        ;
        
# 2930 "<previous_module>"
tmain_126: __CSEQ_removeindent;
        
# 2931 "<previous_module>"
__cs_exit(0, 0);
}


# 2933 "<previous_module>"
int main(void)
{
        
# 2934 "<previous_module>"
/* round  0 */__CSEQ_removeindent;
        
# 2935 "<previous_module>"
    /* main */__CSEQ_removeindent;
        
# 2936 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_tmp_t0_r0;
        
# 2937 "<previous_module>"
__cs_pc_cs[0] = __cs_tmp_t0_r0;
        
# 2938 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] > 0);
        
# 2939 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 126);
        
# 2940 "<previous_module>"
main_thread();
        
# 2941 "<previous_module>"
__cs_pc[0] = __cs_pc_cs[0];
        
# 2943 "<previous_module>"
    /* push_0 */__CSEQ_removeindent;
        
# 2944 "<previous_module>"
unsigned __CPROVER_bitvector[6] __cs_tmp_t1_r0;
        
# 2945 "<previous_module>"
if (__cs_active_thread[1])
        {
                
# 2946 "<previous_module>"
__cs_pc_cs[1] = __cs_tmp_t1_r0;
                
# 2947 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] <= 61);
                
# 2948 "<previous_module>"
push_0(__cs_threadargs[1]);
                
# 2949 "<previous_module>"
__cs_pc[1] = __cs_pc_cs[1];
        }

        
# 2952 "<previous_module>"
    /* pop_0 */__CSEQ_removeindent;
        
# 2953 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_tmp_t2_r0;
        
# 2954 "<previous_module>"
if (__cs_active_thread[2])
        {
                
# 2955 "<previous_module>"
__cs_pc_cs[2] = __cs_tmp_t2_r0;
                
# 2956 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] <= 78);
                
# 2957 "<previous_module>"
pop_0(__cs_threadargs[2]);
                
# 2958 "<previous_module>"
__cs_pc[2] = __cs_pc_cs[2];
        }

        
# 2961 "<previous_module>"
/* round  1 */__CSEQ_removeindent;
        
# 2962 "<previous_module>"
    /* main */__CSEQ_removeindent;
        
# 2963 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_tmp_t0_r1;
        
# 2964 "<previous_module>"
if (__cs_active_thread[0])
        {
                
# 2965 "<previous_module>"
__cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
                
# 2966 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                
# 2967 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 126);
                
# 2968 "<previous_module>"
main_thread();
                
# 2969 "<previous_module>"
__cs_pc[0] = __cs_pc_cs[0];
        }

        
# 2973 "<previous_module>"
    /* push_0 */__CSEQ_removeindent;
        
# 2974 "<previous_module>"
unsigned __CPROVER_bitvector[6] __cs_tmp_t1_r1;
        
# 2975 "<previous_module>"
if (__cs_active_thread[1])
        {
                
# 2976 "<previous_module>"
__cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r1;
                
# 2977 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                
# 2978 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] <= 61);
                
# 2979 "<previous_module>"
push_0(__cs_threadargs[1]);
                
# 2980 "<previous_module>"
__cs_pc[1] = __cs_pc_cs[1];
        }

        
# 2983 "<previous_module>"
    /* pop_0 */__CSEQ_removeindent;
        
# 2984 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_tmp_t2_r1;
        
# 2985 "<previous_module>"
if (__cs_active_thread[2])
        {
                
# 2986 "<previous_module>"
__cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r1;
                
# 2987 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
                
# 2988 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] <= 78);
                
# 2989 "<previous_module>"
pop_0(__cs_threadargs[2]);
                
# 2990 "<previous_module>"
__cs_pc[2] = __cs_pc_cs[2];
        }

        
# 2993 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_tmp_t0_r2;
        
# 2994 "<previous_module>"
if (__cs_active_thread[0] == 1)
        {
                
# 2995 "<previous_module>"
__cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r2;
                
# 2996 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                
# 2997 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 126);
                
# 2998 "<previous_module>"
main_thread();
        }

        
# 3000 "<previous_module>"
return 0;
}

