
# 1 "<previous_module>"
unsigned __CPROVER_bitvector[1] __cs_active_thread[3] = {1};

# 2 "<previous_module>"
unsigned __CPROVER_bitvector[10] __cs_pc[3];

# 3 "<previous_module>"
unsigned __CPROVER_bitvector[11] __cs_pc_cs[3];

# 4 "<previous_module>"
unsigned __CPROVER_bitvector[2] __cs_last_thread;

# 5 "<previous_module>"
unsigned __CPROVER_bitvector[10] __cs_thread_lines[3] = {613, 61, 78};

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
__cs_param_insert_id = 1500;
                
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
static int __cs_local_main_size_ss;
        
# 2000 "<previous_module>"
static int __cs_retval__get_size_1;

# 2001 "<previous_module>"
        {
                
# 2002 "<previous_module>"
static struct lfds711_stack_state *__cs_param_get_size_s;
                
# 2003 "<previous_module>"
tmain_4: IF(0,4,tmain_5)__CSEQ_removeindent;
                
# 2004 "<previous_module>"
__cs_param_get_size_s = ss;
                
# 2005 "<previous_module>"
static int __cs_local_get_size_max_size;
                
# 2006 "<previous_module>"
__cs_local_get_size_max_size = 2;
                
# 2007 "<previous_module>"
static int __cs_local_get_size_actual_size;
                
# 2008 "<previous_module>"
__cs_local_get_size_actual_size = 0;
                
# 2009 "<previous_module>"
static int __cs_local_get_size_res;
                
# 2010 "<previous_module>"
__cs_local_get_size_res = 1;
                
# 2011 "<previous_module>"
static int __cs_local_get_size_dimension;
                
# 2012 "<previous_module>"
__cs_local_get_size_dimension = 2;
                
# 2013 "<previous_module>"
static struct test_data **__cs_local_get_size_datas;
                
# 2014 "<previous_module>"
tmain_5: IF(0,5,tmain_6)__CSEQ_removeindent;
                
# 2015 "<previous_module>"
__cs_local_get_size_datas = __cs_safe_malloc((sizeof(struct test_data *)) * __cs_local_get_size_max_size);
                
# 2016 "<previous_module>"
static struct lfds711_stack_element *__cs_local_get_size_se;
                
# 2017 "<previous_module>"
if (!(__cs_local_get_size_actual_size < 2))

# 2018 "<previous_module>"
                {
                        
# 2019 "<previous_module>"
goto __exit_loop_15;
                        ;
                }

                
# 2021 "<previous_module>"
;

# 2022 "<previous_module>"
                {
                        
# 2023 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_2;

# 2024 "<previous_module>"
                        {
                                
# 2025 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                
# 2026 "<previous_module>"
tmain_6: IF(0,6,tmain_7)__CSEQ_removeindent;
                                
# 2027 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = __cs_param_get_size_s;
                                
# 2028 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                
# 2029 "<previous_module>"
tmain_7: IF(0,7,tmain_8)__CSEQ_removeindent;
                                
# 2030 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_get_size_se;
                                
# 2031 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                
# 2032 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                
# 2033 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                
# 2034 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                
# 2035 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                
# 2036 "<previous_module>"
;
                                ;
                                
# 2037 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                
# 2038 "<previous_module>"
tmain_8: IF(0,8,tmain_9)__CSEQ_removeindent;
                                
# 2039 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                
# 2040 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 2041 "<previous_module>"
                                {
                                        
# 2042 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 2043 "<previous_module>"
tmain_9: IF(0,9,tmain_10)__CSEQ_removeindent;
                                        
# 2044 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 2045 "<previous_module>"
tmain_10: IF(0,10,tmain_11)__CSEQ_removeindent;
                                        
# 2046 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 2048 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 11);
                                ;
                                
# 2049 "<previous_module>"
;
                                ;
                                
# 2050 "<previous_module>"
;
                                ;
                                
# 2051 "<previous_module>"
;
                                ;
                                
# 2052 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                
# 2053 "<previous_module>"
tmain_11: IF(0,11,tmain_12)__CSEQ_removeindent;
                                
# 2054 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                
# 2055 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 2056 "<previous_module>"
                                {
                                        
# 2057 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 2058 "<previous_module>"
tmain_12: IF(0,12,tmain_13)__CSEQ_removeindent;
                                        
# 2059 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 2060 "<previous_module>"
tmain_13: IF(0,13,tmain_14)__CSEQ_removeindent;
                                        
# 2061 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 2063 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 14);
                                ;
                                
# 2064 "<previous_module>"
;
                                ;
                                
# 2065 "<previous_module>"
;
                                ;
                                
# 2066 "<previous_module>"
tmain_14: IF(0,14,tmain_15)__CSEQ_removeindent;
                                
# 2067 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                
# 2068 "<previous_module>"
tmain_15: IF(0,15,tmain_16)__CSEQ_removeindent;
                                
# 2069 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                
# 2070 "<previous_module>"
tmain_16: IF(0,16,tmain_17)__CSEQ_removeindent;
                                
# 2071 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                
# 2072 "<previous_module>"
tmain_17: IF(0,17,tmain_18)__CSEQ_removeindent;
                                
# 2073 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                
# 2074 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                
# 2075 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                
# 2076 "<previous_module>"
;
                                ;
                                
# 2077 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                
# 2078 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 2079 "<previous_module>"
                                {
                                        
# 2080 "<previous_module>"
;
                                        ;
                                        
# 2081 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                        
# 2082 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 2083 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 2084 "<previous_module>"
                                        {
                                                
# 2085 "<previous_module>"
tmain_18: IF(0,18,tmain_19)__CSEQ_removeindent;
                                                
# 2086 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 2087 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 2088 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                                ;
                                        }

                                        
# 2090 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 19);
                                        ;
                                        
# 2091 "<previous_module>"
tmain_19: IF(0,19,tmain_20)__CSEQ_removeindent;
                                        
# 2092 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 2093 "<previous_module>"
tmain_20: IF(0,20,tmain_21)__CSEQ_removeindent;
                                        
# 2094 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 2095 "<previous_module>"
tmain_21: IF(0,21,tmain_22)__CSEQ_removeindent;
                                        
# 2096 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2097 "<previous_module>"
tmain_22: IF(0,22,tmain_23)__CSEQ_removeindent;
                                        
# 2098 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 2099 "<previous_module>"
tmain_23: IF(0,23,tmain_24)__CSEQ_removeindent;
                                        
# 2100 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2101 "<previous_module>"
;
                                        ;
                                        
# 2102 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                        
# 2103 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 2104 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 2105 "<previous_module>"
                                        {

# 2106 "<previous_module>"
                                                {
                                                        
# 2107 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2108 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2109 "<previous_module>"
                                                        {
                                                                
# 2110 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2112 "<previous_module>"
;
                                                        
# 2113 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2114 "<previous_module>"
                                                        {
                                                                
# 2115 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2117 "<previous_module>"
;
                                                        
# 2118 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2119 "<previous_module>"
                                                        {
                                                                
# 2120 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2122 "<previous_module>"
;
                                                        
# 2123 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2124 "<previous_module>"
tmain_24: IF(0,24,tmain_25)__CSEQ_removeindent;
                                                        
# 2125 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2126 "<previous_module>"
__exit_loop_17:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 25);

                                                        
# 2127 "<previous_module>"
;
                                                        ;
                                                        
# 2128 "<previous_module>"
__exit__exponential_backoff_4_0:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 25);

                                                        
# 2129 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2131 "<previous_module>"
;
                                                
# 2132 "<previous_module>"
tmain_25: IF(0,25,tmain_26)__CSEQ_removeindent;
                                                
# 2133 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 2134 "<previous_module>"
tmain_26: IF(0,26,tmain_27)__CSEQ_removeindent;
                                                
# 2135 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 2137 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 27);
                                        ;
                                        
# 2138 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 2139 "<previous_module>"
;
                                        ;
                                        
# 2140 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                        
# 2141 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 2142 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 2143 "<previous_module>"
                                        {
                                                
# 2144 "<previous_module>"
goto __exit_loop_16;
                                                ;
                                        }

                                        
# 2146 "<previous_module>"
;
                                }
                                
# 2148 "<previous_module>"
;
                                
# 2149 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                
# 2150 "<previous_module>"
tmain_27: IF(0,27,tmain_28)__CSEQ_removeindent;
                                
# 2151 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                
# 2152 "<previous_module>"
__exit_loop_16:
                                __CPROVER_assume(__cs_pc_cs[0] >= 28);

                                
# 2153 "<previous_module>"
;
                                ;
                                
# 2154 "<previous_module>"
if (
# 2155 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2156 "<previous_module>"
                                {
                                        
# 2157 "<previous_module>"
goto __exit_loop_18;
                                        ;
                                }

                                
# 2159 "<previous_module>"
;

# 2160 "<previous_module>"
                                {
                                        
# 2161 "<previous_module>"
;
                                        ;
                                        
# 2162 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 2163 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 2164 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2165 "<previous_module>"
                                        {
                                                
# 2166 "<previous_module>"
tmain_28: IF(0,28,tmain_29)__CSEQ_removeindent;
                                                
# 2167 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 2168 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 2169 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                                ;
                                        }

                                        
# 2171 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 29);
                                        ;
                                        
# 2172 "<previous_module>"
tmain_29: IF(0,29,tmain_30)__CSEQ_removeindent;
                                        
# 2173 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 2174 "<previous_module>"
tmain_30: IF(0,30,tmain_31)__CSEQ_removeindent;
                                        
# 2175 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 2176 "<previous_module>"
tmain_31: IF(0,31,tmain_32)__CSEQ_removeindent;
                                        
# 2177 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2178 "<previous_module>"
tmain_32: IF(0,32,tmain_33)__CSEQ_removeindent;
                                        
# 2179 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 2180 "<previous_module>"
tmain_33: IF(0,33,tmain_34)__CSEQ_removeindent;
                                        
# 2181 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2182 "<previous_module>"
;
                                        ;
                                        
# 2183 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 2184 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 2185 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2186 "<previous_module>"
                                        {

# 2187 "<previous_module>"
                                                {
                                                        
# 2188 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2189 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2190 "<previous_module>"
                                                        {
                                                                
# 2191 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2193 "<previous_module>"
;
                                                        
# 2194 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2195 "<previous_module>"
                                                        {
                                                                
# 2196 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2198 "<previous_module>"
;
                                                        
# 2199 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2200 "<previous_module>"
                                                        {
                                                                
# 2201 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2203 "<previous_module>"
;
                                                        
# 2204 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2205 "<previous_module>"
tmain_34: IF(0,34,tmain_35)__CSEQ_removeindent;
                                                        
# 2206 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2207 "<previous_module>"
__exit_loop_19:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 35);

                                                        
# 2208 "<previous_module>"
;
                                                        ;
                                                        
# 2209 "<previous_module>"
__exit__exponential_backoff_5_0:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 35);

                                                        
# 2210 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2212 "<previous_module>"
;
                                                
# 2213 "<previous_module>"
tmain_35: IF(0,35,tmain_36)__CSEQ_removeindent;
                                                
# 2214 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 2215 "<previous_module>"
tmain_36: IF(0,36,tmain_37)__CSEQ_removeindent;
                                                
# 2216 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 2218 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 37);
                                        ;
                                        
# 2219 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 2220 "<previous_module>"
;
                                        ;
                                        
# 2221 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 2222 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 2223 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2224 "<previous_module>"
                                        {
                                                
# 2225 "<previous_module>"
goto __exit_loop_18;
                                                ;
                                        }

                                        
# 2227 "<previous_module>"
;
                                }
                                
# 2229 "<previous_module>"
;
                                
# 2230 "<previous_module>"
if (
# 2231 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2232 "<previous_module>"
                                {
                                        
# 2233 "<previous_module>"
goto __exit_loop_18;
                                        ;
                                }

                                
# 2235 "<previous_module>"
;

# 2236 "<previous_module>"
                                {
                                        
# 2237 "<previous_module>"
;
                                        ;
                                        
# 2238 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 2239 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 2240 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2241 "<previous_module>"
                                        {
                                                
# 2242 "<previous_module>"
tmain_37: IF(0,37,tmain_38)__CSEQ_removeindent;
                                                
# 2243 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 2244 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 2245 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                                ;
                                        }

                                        
# 2247 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 38);
                                        ;
                                        
# 2248 "<previous_module>"
tmain_38: IF(0,38,tmain_39)__CSEQ_removeindent;
                                        
# 2249 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 2250 "<previous_module>"
tmain_39: IF(0,39,tmain_40)__CSEQ_removeindent;
                                        
# 2251 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 2252 "<previous_module>"
tmain_40: IF(0,40,tmain_41)__CSEQ_removeindent;
                                        
# 2253 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2254 "<previous_module>"
tmain_41: IF(0,41,tmain_42)__CSEQ_removeindent;
                                        
# 2255 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 2256 "<previous_module>"
tmain_42: IF(0,42,tmain_43)__CSEQ_removeindent;
                                        
# 2257 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2258 "<previous_module>"
;
                                        ;
                                        
# 2259 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 2260 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 2261 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2262 "<previous_module>"
                                        {

# 2263 "<previous_module>"
                                                {
                                                        
# 2264 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2265 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2266 "<previous_module>"
                                                        {
                                                                
# 2267 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2269 "<previous_module>"
;
                                                        
# 2270 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2271 "<previous_module>"
                                                        {
                                                                
# 2272 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2274 "<previous_module>"
;
                                                        
# 2275 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2276 "<previous_module>"
                                                        {
                                                                
# 2277 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2279 "<previous_module>"
;
                                                        
# 2280 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2281 "<previous_module>"
tmain_43: IF(0,43,tmain_44)__CSEQ_removeindent;
                                                        
# 2282 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2283 "<previous_module>"
__exit_loop_20:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 44);

                                                        
# 2284 "<previous_module>"
;
                                                        ;
                                                        
# 2285 "<previous_module>"
__exit__exponential_backoff_5_1:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 44);

                                                        
# 2286 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2288 "<previous_module>"
;
                                                
# 2289 "<previous_module>"
tmain_44: IF(0,44,tmain_45)__CSEQ_removeindent;
                                                
# 2290 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 2291 "<previous_module>"
tmain_45: IF(0,45,tmain_46)__CSEQ_removeindent;
                                                
# 2292 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 2294 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 46);
                                        ;
                                        
# 2295 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 2296 "<previous_module>"
;
                                        ;
                                        
# 2297 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 2298 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 2299 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2300 "<previous_module>"
                                        {
                                                
# 2301 "<previous_module>"
goto __exit_loop_18;
                                                ;
                                        }

                                        
# 2303 "<previous_module>"
;
                                }
                                
# 2305 "<previous_module>"
;
                                
# 2306 "<previous_module>"
if (
# 2307 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2308 "<previous_module>"
                                {
                                        
# 2309 "<previous_module>"
goto __exit_loop_18;
                                        ;
                                }

                                
# 2311 "<previous_module>"
;

# 2312 "<previous_module>"
                                {
                                        
# 2313 "<previous_module>"
;
                                        ;
                                        
# 2314 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 2315 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 2316 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2317 "<previous_module>"
                                        {
                                                
# 2318 "<previous_module>"
tmain_46: IF(0,46,tmain_47)__CSEQ_removeindent;
                                                
# 2319 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 2320 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 2321 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                                ;
                                        }

                                        
# 2323 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 47);
                                        ;
                                        
# 2324 "<previous_module>"
tmain_47: IF(0,47,tmain_48)__CSEQ_removeindent;
                                        
# 2325 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 2326 "<previous_module>"
tmain_48: IF(0,48,tmain_49)__CSEQ_removeindent;
                                        
# 2327 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 2328 "<previous_module>"
tmain_49: IF(0,49,tmain_50)__CSEQ_removeindent;
                                        
# 2329 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2330 "<previous_module>"
tmain_50: IF(0,50,tmain_51)__CSEQ_removeindent;
                                        
# 2331 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 2332 "<previous_module>"
tmain_51: IF(0,51,tmain_52)__CSEQ_removeindent;
                                        
# 2333 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2334 "<previous_module>"
;
                                        ;
                                        
# 2335 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 2336 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 2337 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2338 "<previous_module>"
                                        {

# 2339 "<previous_module>"
                                                {
                                                        
# 2340 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2341 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2342 "<previous_module>"
                                                        {
                                                                
# 2343 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2345 "<previous_module>"
;
                                                        
# 2346 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2347 "<previous_module>"
                                                        {
                                                                
# 2348 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2350 "<previous_module>"
;
                                                        
# 2351 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2352 "<previous_module>"
                                                        {
                                                                
# 2353 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2355 "<previous_module>"
;
                                                        
# 2356 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2357 "<previous_module>"
tmain_52: IF(0,52,tmain_53)__CSEQ_removeindent;
                                                        
# 2358 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2359 "<previous_module>"
__exit_loop_21:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 53);

                                                        
# 2360 "<previous_module>"
;
                                                        ;
                                                        
# 2361 "<previous_module>"
__exit__exponential_backoff_5_2:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 53);

                                                        
# 2362 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2364 "<previous_module>"
;
                                                
# 2365 "<previous_module>"
tmain_53: IF(0,53,tmain_54)__CSEQ_removeindent;
                                                
# 2366 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 2367 "<previous_module>"
tmain_54: IF(0,54,tmain_55)__CSEQ_removeindent;
                                                
# 2368 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 2370 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 55);
                                        ;
                                        
# 2371 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 2372 "<previous_module>"
;
                                        ;
                                        
# 2373 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 2374 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 2375 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2376 "<previous_module>"
                                        {
                                                
# 2377 "<previous_module>"
goto __exit_loop_18;
                                                ;
                                        }

                                        
# 2379 "<previous_module>"
;
                                }
                                
# 2381 "<previous_module>"
;
                                
# 2382 "<previous_module>"
if (
# 2383 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2384 "<previous_module>"
                                {
                                        
# 2385 "<previous_module>"
goto __exit_loop_18;
                                        ;
                                }

                                
# 2387 "<previous_module>"
;

# 2388 "<previous_module>"
                                {
                                        
# 2389 "<previous_module>"
;
                                        ;
                                        
# 2390 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 2391 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 2392 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2393 "<previous_module>"
                                        {
                                                
# 2394 "<previous_module>"
tmain_55: IF(0,55,tmain_56)__CSEQ_removeindent;
                                                
# 2395 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 2396 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 2397 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                                ;
                                        }

                                        
# 2399 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 56);
                                        ;
                                        
# 2400 "<previous_module>"
tmain_56: IF(0,56,tmain_57)__CSEQ_removeindent;
                                        
# 2401 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 2402 "<previous_module>"
tmain_57: IF(0,57,tmain_58)__CSEQ_removeindent;
                                        
# 2403 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 2404 "<previous_module>"
tmain_58: IF(0,58,tmain_59)__CSEQ_removeindent;
                                        
# 2405 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2406 "<previous_module>"
tmain_59: IF(0,59,tmain_60)__CSEQ_removeindent;
                                        
# 2407 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 2408 "<previous_module>"
tmain_60: IF(0,60,tmain_61)__CSEQ_removeindent;
                                        
# 2409 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2410 "<previous_module>"
;
                                        ;
                                        
# 2411 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 2412 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 2413 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2414 "<previous_module>"
                                        {

# 2415 "<previous_module>"
                                                {
                                                        
# 2416 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2417 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

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
                                                        {
                                                                
# 2424 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2426 "<previous_module>"
;
                                                        
# 2427 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2428 "<previous_module>"
                                                        {
                                                                
# 2429 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2431 "<previous_module>"
;
                                                        
# 2432 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2433 "<previous_module>"
tmain_61: IF(0,61,tmain_62)__CSEQ_removeindent;
                                                        
# 2434 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2435 "<previous_module>"
__exit_loop_22:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 62);

                                                        
# 2436 "<previous_module>"
;
                                                        ;
                                                        
# 2437 "<previous_module>"
__exit__exponential_backoff_5_3:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 62);

                                                        
# 2438 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2440 "<previous_module>"
;
                                                
# 2441 "<previous_module>"
tmain_62: IF(0,62,tmain_63)__CSEQ_removeindent;
                                                
# 2442 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 2443 "<previous_module>"
tmain_63: IF(0,63,tmain_64)__CSEQ_removeindent;
                                                
# 2444 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 2446 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 64);
                                        ;
                                        
# 2447 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 2448 "<previous_module>"
;
                                        ;
                                        
# 2449 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 2450 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 2451 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2452 "<previous_module>"
                                        {
                                                
# 2453 "<previous_module>"
goto __exit_loop_18;
                                                ;
                                        }

                                        
# 2455 "<previous_module>"
;
                                }
                                
# 2457 "<previous_module>"
;
                                
# 2458 "<previous_module>"
if (
# 2459 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2460 "<previous_module>"
                                {
                                        
# 2461 "<previous_module>"
goto __exit_loop_18;
                                        ;
                                }

                                
# 2463 "<previous_module>"
;

# 2464 "<previous_module>"
                                {
                                        
# 2465 "<previous_module>"
;
                                        ;
                                        
# 2466 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 2467 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 2468 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2469 "<previous_module>"
                                        {
                                                
# 2470 "<previous_module>"
tmain_64: IF(0,64,tmain_65)__CSEQ_removeindent;
                                                
# 2471 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 2472 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 2473 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                                ;
                                        }

                                        
# 2475 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 65);
                                        ;
                                        
# 2476 "<previous_module>"
tmain_65: IF(0,65,tmain_66)__CSEQ_removeindent;
                                        
# 2477 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 2478 "<previous_module>"
tmain_66: IF(0,66,tmain_67)__CSEQ_removeindent;
                                        
# 2479 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 2480 "<previous_module>"
tmain_67: IF(0,67,tmain_68)__CSEQ_removeindent;
                                        
# 2481 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2482 "<previous_module>"
tmain_68: IF(0,68,tmain_69)__CSEQ_removeindent;
                                        
# 2483 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 2484 "<previous_module>"
tmain_69: IF(0,69,tmain_70)__CSEQ_removeindent;
                                        
# 2485 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2486 "<previous_module>"
;
                                        ;
                                        
# 2487 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 2488 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 2489 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2490 "<previous_module>"
                                        {

# 2491 "<previous_module>"
                                                {
                                                        
# 2492 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2493 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

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
                                                        {
                                                                
# 2500 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2502 "<previous_module>"
;
                                                        
# 2503 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2504 "<previous_module>"
                                                        {
                                                                
# 2505 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2507 "<previous_module>"
;
                                                        
# 2508 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2509 "<previous_module>"
tmain_70: IF(0,70,tmain_71)__CSEQ_removeindent;
                                                        
# 2510 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2511 "<previous_module>"
__exit_loop_23:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 71);

                                                        
# 2512 "<previous_module>"
;
                                                        ;
                                                        
# 2513 "<previous_module>"
__exit__exponential_backoff_5_4:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 71);

                                                        
# 2514 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2516 "<previous_module>"
;
                                                
# 2517 "<previous_module>"
tmain_71: IF(0,71,tmain_72)__CSEQ_removeindent;
                                                
# 2518 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 2519 "<previous_module>"
tmain_72: IF(0,72,tmain_73)__CSEQ_removeindent;
                                                
# 2520 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 2522 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 73);
                                        ;
                                        
# 2523 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 2524 "<previous_module>"
;
                                        ;
                                        
# 2525 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 2526 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 2527 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2528 "<previous_module>"
                                        {
                                                
# 2529 "<previous_module>"
goto __exit_loop_18;
                                                ;
                                        }

                                        
# 2531 "<previous_module>"
;
                                }
                                
# 2533 "<previous_module>"
;
                                
# 2534 "<previous_module>"
tmain_73: IF(0,73,tmain_74)__CSEQ_removeindent;
                                
# 2535 "<previous_module>"
__CPROVER_assume(
# 2536 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                
# 2537 "<previous_module>"
__exit_loop_18:
                                __CPROVER_assume(__cs_pc_cs[0] >= 74);

                                
# 2538 "<previous_module>"
;
                                ;
                                
# 2539 "<previous_module>"
tmain_74: IF(0,74,tmain_75)__CSEQ_removeindent;
                                
# 2540 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                
# 2541 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
                                
# 2542 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                ;
                                
# 2543 "<previous_module>"
__exit__lfds711_stack_pop_2_0:
                                __CPROVER_assume(__cs_pc_cs[0] >= 75);

                                
# 2544 "<previous_module>"
;
                                ;
                        }
                        
# 2546 "<previous_module>"
;
                        
# 2547 "<previous_module>"
__cs_local_get_size_res = __cs_retval__lfds711_stack_pop_2;
                        
# 2548 "<previous_module>"
;
                        ;
                        
# 2549 "<previous_module>"
static _Bool __cs_local_get_size___cs_tmp_if_cond_22;
                        
# 2550 "<previous_module>"
__cs_local_get_size___cs_tmp_if_cond_22 = __cs_local_get_size_res == 0;
                        
# 2551 "<previous_module>"
if (__cs_local_get_size___cs_tmp_if_cond_22)

# 2552 "<previous_module>"
                        {
                                
# 2553 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 2555 "<previous_module>"
;
                        
# 2556 "<previous_module>"
__cs_local_get_size_actual_size = __cs_local_get_size_actual_size + 1;
                }
                
# 2558 "<previous_module>"
;
                
# 2559 "<previous_module>"
if (!(__cs_local_get_size_actual_size < 2))

# 2560 "<previous_module>"
                {
                        
# 2561 "<previous_module>"
goto __exit_loop_15;
                        ;
                }

                
# 2563 "<previous_module>"
;

# 2564 "<previous_module>"
                {
                        
# 2565 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_2;

# 2566 "<previous_module>"
                        {
                                
# 2567 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                
# 2568 "<previous_module>"
tmain_75: IF(0,75,tmain_76)__CSEQ_removeindent;
                                
# 2569 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = __cs_param_get_size_s;
                                
# 2570 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                
# 2571 "<previous_module>"
tmain_76: IF(0,76,tmain_77)__CSEQ_removeindent;
                                
# 2572 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_get_size_se;
                                
# 2573 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                
# 2574 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                
# 2575 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                
# 2576 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                
# 2577 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                
# 2578 "<previous_module>"
;
                                ;
                                
# 2579 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                
# 2580 "<previous_module>"
tmain_77: IF(0,77,tmain_78)__CSEQ_removeindent;
                                
# 2581 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                
# 2582 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 2583 "<previous_module>"
                                {
                                        
# 2584 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 2585 "<previous_module>"
tmain_78: IF(0,78,tmain_79)__CSEQ_removeindent;
                                        
# 2586 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 2587 "<previous_module>"
tmain_79: IF(0,79,tmain_80)__CSEQ_removeindent;
                                        
# 2588 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 2590 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 80);
                                ;
                                
# 2591 "<previous_module>"
;
                                ;
                                
# 2592 "<previous_module>"
;
                                ;
                                
# 2593 "<previous_module>"
;
                                ;
                                
# 2594 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                
# 2595 "<previous_module>"
tmain_80: IF(0,80,tmain_81)__CSEQ_removeindent;
                                
# 2596 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                
# 2597 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 2598 "<previous_module>"
                                {
                                        
# 2599 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 2600 "<previous_module>"
tmain_81: IF(0,81,tmain_82)__CSEQ_removeindent;
                                        
# 2601 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 2602 "<previous_module>"
tmain_82: IF(0,82,tmain_83)__CSEQ_removeindent;
                                        
# 2603 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 2605 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 83);
                                ;
                                
# 2606 "<previous_module>"
;
                                ;
                                
# 2607 "<previous_module>"
;
                                ;
                                
# 2608 "<previous_module>"
tmain_83: IF(0,83,tmain_84)__CSEQ_removeindent;
                                
# 2609 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                
# 2610 "<previous_module>"
tmain_84: IF(0,84,tmain_85)__CSEQ_removeindent;
                                
# 2611 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                
# 2612 "<previous_module>"
tmain_85: IF(0,85,tmain_86)__CSEQ_removeindent;
                                
# 2613 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                
# 2614 "<previous_module>"
tmain_86: IF(0,86,tmain_87)__CSEQ_removeindent;
                                
# 2615 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                
# 2616 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                
# 2617 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                
# 2618 "<previous_module>"
;
                                ;
                                
# 2619 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                
# 2620 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 2621 "<previous_module>"
                                {
                                        
# 2622 "<previous_module>"
;
                                        ;
                                        
# 2623 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                        
# 2624 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 2625 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 2626 "<previous_module>"
                                        {
                                                
# 2627 "<previous_module>"
tmain_87: IF(0,87,tmain_88)__CSEQ_removeindent;
                                                
# 2628 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 2629 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 2630 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                                ;
                                        }

                                        
# 2632 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 88);
                                        ;
                                        
# 2633 "<previous_module>"
tmain_88: IF(0,88,tmain_89)__CSEQ_removeindent;
                                        
# 2634 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 2635 "<previous_module>"
tmain_89: IF(0,89,tmain_90)__CSEQ_removeindent;
                                        
# 2636 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 2637 "<previous_module>"
tmain_90: IF(0,90,tmain_91)__CSEQ_removeindent;
                                        
# 2638 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2639 "<previous_module>"
tmain_91: IF(0,91,tmain_92)__CSEQ_removeindent;
                                        
# 2640 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 2641 "<previous_module>"
tmain_92: IF(0,92,tmain_93)__CSEQ_removeindent;
                                        
# 2642 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2643 "<previous_module>"
;
                                        ;
                                        
# 2644 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                        
# 2645 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 2646 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 2647 "<previous_module>"
                                        {

# 2648 "<previous_module>"
                                                {
                                                        
# 2649 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2650 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2651 "<previous_module>"
                                                        {
                                                                
# 2652 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2654 "<previous_module>"
;
                                                        
# 2655 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2656 "<previous_module>"
                                                        {
                                                                
# 2657 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2659 "<previous_module>"
;
                                                        
# 2660 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2661 "<previous_module>"
                                                        {
                                                                
# 2662 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2664 "<previous_module>"
;
                                                        
# 2665 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2666 "<previous_module>"
tmain_93: IF(0,93,tmain_94)__CSEQ_removeindent;
                                                        
# 2667 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2668 "<previous_module>"
__exit_loop_25:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 94);

                                                        
# 2669 "<previous_module>"
;
                                                        ;
                                                        
# 2670 "<previous_module>"
__exit__exponential_backoff_4_1:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 94);

                                                        
# 2671 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2673 "<previous_module>"
;
                                                
# 2674 "<previous_module>"
tmain_94: IF(0,94,tmain_95)__CSEQ_removeindent;
                                                
# 2675 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 2676 "<previous_module>"
tmain_95: IF(0,95,tmain_96)__CSEQ_removeindent;
                                                
# 2677 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 2679 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 96);
                                        ;
                                        
# 2680 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 2681 "<previous_module>"
;
                                        ;
                                        
# 2682 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                        
# 2683 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 2684 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 2685 "<previous_module>"
                                        {
                                                
# 2686 "<previous_module>"
goto __exit_loop_24;
                                                ;
                                        }

                                        
# 2688 "<previous_module>"
;
                                }
                                
# 2690 "<previous_module>"
;
                                
# 2691 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                
# 2692 "<previous_module>"
tmain_96: IF(0,96,tmain_97)__CSEQ_removeindent;
                                
# 2693 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                
# 2694 "<previous_module>"
__exit_loop_24:
                                __CPROVER_assume(__cs_pc_cs[0] >= 97);

                                
# 2695 "<previous_module>"
;
                                ;
                                
# 2696 "<previous_module>"
if (
# 2697 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2698 "<previous_module>"
                                {
                                        
# 2699 "<previous_module>"
goto __exit_loop_26;
                                        ;
                                }

                                
# 2701 "<previous_module>"
;

# 2702 "<previous_module>"
                                {
                                        
# 2703 "<previous_module>"
;
                                        ;
                                        
# 2704 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 2705 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 2706 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2707 "<previous_module>"
                                        {
                                                
# 2708 "<previous_module>"
tmain_97: IF(0,97,tmain_98)__CSEQ_removeindent;
                                                
# 2709 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 2710 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 2711 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                                ;
                                        }

                                        
# 2713 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 98);
                                        ;
                                        
# 2714 "<previous_module>"
tmain_98: IF(0,98,tmain_99)__CSEQ_removeindent;
                                        
# 2715 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 2716 "<previous_module>"
tmain_99: IF(0,99,tmain_100)__CSEQ_removeindent;
                                        
# 2717 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 2718 "<previous_module>"
tmain_100: IF(0,100,tmain_101)__CSEQ_removeindent;
                                        
# 2719 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2720 "<previous_module>"
tmain_101: IF(0,101,tmain_102)__CSEQ_removeindent;
                                        
# 2721 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 2722 "<previous_module>"
tmain_102: IF(0,102,tmain_103)__CSEQ_removeindent;
                                        
# 2723 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2724 "<previous_module>"
;
                                        ;
                                        
# 2725 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 2726 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 2727 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2728 "<previous_module>"
                                        {

# 2729 "<previous_module>"
                                                {
                                                        
# 2730 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2731 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2732 "<previous_module>"
                                                        {
                                                                
# 2733 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2735 "<previous_module>"
;
                                                        
# 2736 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2737 "<previous_module>"
                                                        {
                                                                
# 2738 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2740 "<previous_module>"
;
                                                        
# 2741 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2742 "<previous_module>"
                                                        {
                                                                
# 2743 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2745 "<previous_module>"
;
                                                        
# 2746 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2747 "<previous_module>"
tmain_103: IF(0,103,tmain_104)__CSEQ_removeindent;
                                                        
# 2748 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2749 "<previous_module>"
__exit_loop_27:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 104);

                                                        
# 2750 "<previous_module>"
;
                                                        ;
                                                        
# 2751 "<previous_module>"
__exit__exponential_backoff_5_5:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 104);

                                                        
# 2752 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2754 "<previous_module>"
;
                                                
# 2755 "<previous_module>"
tmain_104: IF(0,104,tmain_105)__CSEQ_removeindent;
                                                
# 2756 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 2757 "<previous_module>"
tmain_105: IF(0,105,tmain_106)__CSEQ_removeindent;
                                                
# 2758 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 2760 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 106);
                                        ;
                                        
# 2761 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 2762 "<previous_module>"
;
                                        ;
                                        
# 2763 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 2764 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 2765 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2766 "<previous_module>"
                                        {
                                                
# 2767 "<previous_module>"
goto __exit_loop_26;
                                                ;
                                        }

                                        
# 2769 "<previous_module>"
;
                                }
                                
# 2771 "<previous_module>"
;
                                
# 2772 "<previous_module>"
if (
# 2773 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2774 "<previous_module>"
                                {
                                        
# 2775 "<previous_module>"
goto __exit_loop_26;
                                        ;
                                }

                                
# 2777 "<previous_module>"
;

# 2778 "<previous_module>"
                                {
                                        
# 2779 "<previous_module>"
;
                                        ;
                                        
# 2780 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 2781 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 2782 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2783 "<previous_module>"
                                        {
                                                
# 2784 "<previous_module>"
tmain_106: IF(0,106,tmain_107)__CSEQ_removeindent;
                                                
# 2785 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 2786 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 2787 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                                ;
                                        }

                                        
# 2789 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 107);
                                        ;
                                        
# 2790 "<previous_module>"
tmain_107: IF(0,107,tmain_108)__CSEQ_removeindent;
                                        
# 2791 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 2792 "<previous_module>"
tmain_108: IF(0,108,tmain_109)__CSEQ_removeindent;
                                        
# 2793 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 2794 "<previous_module>"
tmain_109: IF(0,109,tmain_110)__CSEQ_removeindent;
                                        
# 2795 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2796 "<previous_module>"
tmain_110: IF(0,110,tmain_111)__CSEQ_removeindent;
                                        
# 2797 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 2798 "<previous_module>"
tmain_111: IF(0,111,tmain_112)__CSEQ_removeindent;
                                        
# 2799 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2800 "<previous_module>"
;
                                        ;
                                        
# 2801 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 2802 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 2803 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2804 "<previous_module>"
                                        {

# 2805 "<previous_module>"
                                                {
                                                        
# 2806 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2807 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2808 "<previous_module>"
                                                        {
                                                                
# 2809 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2811 "<previous_module>"
;
                                                        
# 2812 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2813 "<previous_module>"
                                                        {
                                                                
# 2814 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2816 "<previous_module>"
;
                                                        
# 2817 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2818 "<previous_module>"
                                                        {
                                                                
# 2819 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2821 "<previous_module>"
;
                                                        
# 2822 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2823 "<previous_module>"
tmain_112: IF(0,112,tmain_113)__CSEQ_removeindent;
                                                        
# 2824 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2825 "<previous_module>"
__exit_loop_28:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 113);

                                                        
# 2826 "<previous_module>"
;
                                                        ;
                                                        
# 2827 "<previous_module>"
__exit__exponential_backoff_5_6:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 113);

                                                        
# 2828 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2830 "<previous_module>"
;
                                                
# 2831 "<previous_module>"
tmain_113: IF(0,113,tmain_114)__CSEQ_removeindent;
                                                
# 2832 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 2833 "<previous_module>"
tmain_114: IF(0,114,tmain_115)__CSEQ_removeindent;
                                                
# 2834 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 2836 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 115);
                                        ;
                                        
# 2837 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 2838 "<previous_module>"
;
                                        ;
                                        
# 2839 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 2840 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 2841 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2842 "<previous_module>"
                                        {
                                                
# 2843 "<previous_module>"
goto __exit_loop_26;
                                                ;
                                        }

                                        
# 2845 "<previous_module>"
;
                                }
                                
# 2847 "<previous_module>"
;
                                
# 2848 "<previous_module>"
if (
# 2849 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2850 "<previous_module>"
                                {
                                        
# 2851 "<previous_module>"
goto __exit_loop_26;
                                        ;
                                }

                                
# 2853 "<previous_module>"
;

# 2854 "<previous_module>"
                                {
                                        
# 2855 "<previous_module>"
;
                                        ;
                                        
# 2856 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 2857 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 2858 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2859 "<previous_module>"
                                        {
                                                
# 2860 "<previous_module>"
tmain_115: IF(0,115,tmain_116)__CSEQ_removeindent;
                                                
# 2861 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 2862 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 2863 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                                ;
                                        }

                                        
# 2865 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 116);
                                        ;
                                        
# 2866 "<previous_module>"
tmain_116: IF(0,116,tmain_117)__CSEQ_removeindent;
                                        
# 2867 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 2868 "<previous_module>"
tmain_117: IF(0,117,tmain_118)__CSEQ_removeindent;
                                        
# 2869 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 2870 "<previous_module>"
tmain_118: IF(0,118,tmain_119)__CSEQ_removeindent;
                                        
# 2871 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2872 "<previous_module>"
tmain_119: IF(0,119,tmain_120)__CSEQ_removeindent;
                                        
# 2873 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 2874 "<previous_module>"
tmain_120: IF(0,120,tmain_121)__CSEQ_removeindent;
                                        
# 2875 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2876 "<previous_module>"
;
                                        ;
                                        
# 2877 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 2878 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 2879 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2880 "<previous_module>"
                                        {

# 2881 "<previous_module>"
                                                {
                                                        
# 2882 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2883 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2884 "<previous_module>"
                                                        {
                                                                
# 2885 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2887 "<previous_module>"
;
                                                        
# 2888 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2889 "<previous_module>"
                                                        {
                                                                
# 2890 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2892 "<previous_module>"
;
                                                        
# 2893 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2894 "<previous_module>"
                                                        {
                                                                
# 2895 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2897 "<previous_module>"
;
                                                        
# 2898 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2899 "<previous_module>"
tmain_121: IF(0,121,tmain_122)__CSEQ_removeindent;
                                                        
# 2900 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2901 "<previous_module>"
__exit_loop_29:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 122);

                                                        
# 2902 "<previous_module>"
;
                                                        ;
                                                        
# 2903 "<previous_module>"
__exit__exponential_backoff_5_7:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 122);

                                                        
# 2904 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2906 "<previous_module>"
;
                                                
# 2907 "<previous_module>"
tmain_122: IF(0,122,tmain_123)__CSEQ_removeindent;
                                                
# 2908 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 2909 "<previous_module>"
tmain_123: IF(0,123,tmain_124)__CSEQ_removeindent;
                                                
# 2910 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 2912 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 124);
                                        ;
                                        
# 2913 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 2914 "<previous_module>"
;
                                        ;
                                        
# 2915 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 2916 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 2917 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2918 "<previous_module>"
                                        {
                                                
# 2919 "<previous_module>"
goto __exit_loop_26;
                                                ;
                                        }

                                        
# 2921 "<previous_module>"
;
                                }
                                
# 2923 "<previous_module>"
;
                                
# 2924 "<previous_module>"
if (
# 2925 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2926 "<previous_module>"
                                {
                                        
# 2927 "<previous_module>"
goto __exit_loop_26;
                                        ;
                                }

                                
# 2929 "<previous_module>"
;

# 2930 "<previous_module>"
                                {
                                        
# 2931 "<previous_module>"
;
                                        ;
                                        
# 2932 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 2933 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 2934 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2935 "<previous_module>"
                                        {
                                                
# 2936 "<previous_module>"
tmain_124: IF(0,124,tmain_125)__CSEQ_removeindent;
                                                
# 2937 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 2938 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 2939 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                                ;
                                        }

                                        
# 2941 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 125);
                                        ;
                                        
# 2942 "<previous_module>"
tmain_125: IF(0,125,tmain_126)__CSEQ_removeindent;
                                        
# 2943 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 2944 "<previous_module>"
tmain_126: IF(0,126,tmain_127)__CSEQ_removeindent;
                                        
# 2945 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 2946 "<previous_module>"
tmain_127: IF(0,127,tmain_128)__CSEQ_removeindent;
                                        
# 2947 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2948 "<previous_module>"
tmain_128: IF(0,128,tmain_129)__CSEQ_removeindent;
                                        
# 2949 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 2950 "<previous_module>"
tmain_129: IF(0,129,tmain_130)__CSEQ_removeindent;
                                        
# 2951 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2952 "<previous_module>"
;
                                        ;
                                        
# 2953 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 2954 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 2955 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2956 "<previous_module>"
                                        {

# 2957 "<previous_module>"
                                                {
                                                        
# 2958 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 2959 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2960 "<previous_module>"
                                                        {
                                                                
# 2961 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2963 "<previous_module>"
;
                                                        
# 2964 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2965 "<previous_module>"
                                                        {
                                                                
# 2966 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2968 "<previous_module>"
;
                                                        
# 2969 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2970 "<previous_module>"
                                                        {
                                                                
# 2971 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2973 "<previous_module>"
;
                                                        
# 2974 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 2975 "<previous_module>"
tmain_130: IF(0,130,tmain_131)__CSEQ_removeindent;
                                                        
# 2976 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 2977 "<previous_module>"
__exit_loop_30:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 131);

                                                        
# 2978 "<previous_module>"
;
                                                        ;
                                                        
# 2979 "<previous_module>"
__exit__exponential_backoff_5_8:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 131);

                                                        
# 2980 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2982 "<previous_module>"
;
                                                
# 2983 "<previous_module>"
tmain_131: IF(0,131,tmain_132)__CSEQ_removeindent;
                                                
# 2984 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 2985 "<previous_module>"
tmain_132: IF(0,132,tmain_133)__CSEQ_removeindent;
                                                
# 2986 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 2988 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 133);
                                        ;
                                        
# 2989 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 2990 "<previous_module>"
;
                                        ;
                                        
# 2991 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 2992 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 2993 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2994 "<previous_module>"
                                        {
                                                
# 2995 "<previous_module>"
goto __exit_loop_26;
                                                ;
                                        }

                                        
# 2997 "<previous_module>"
;
                                }
                                
# 2999 "<previous_module>"
;
                                
# 3000 "<previous_module>"
if (
# 3001 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3002 "<previous_module>"
                                {
                                        
# 3003 "<previous_module>"
goto __exit_loop_26;
                                        ;
                                }

                                
# 3005 "<previous_module>"
;

# 3006 "<previous_module>"
                                {
                                        
# 3007 "<previous_module>"
;
                                        ;
                                        
# 3008 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3009 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3010 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3011 "<previous_module>"
                                        {
                                                
# 3012 "<previous_module>"
tmain_133: IF(0,133,tmain_134)__CSEQ_removeindent;
                                                
# 3013 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3014 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 3015 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                                ;
                                        }

                                        
# 3017 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 134);
                                        ;
                                        
# 3018 "<previous_module>"
tmain_134: IF(0,134,tmain_135)__CSEQ_removeindent;
                                        
# 3019 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3020 "<previous_module>"
tmain_135: IF(0,135,tmain_136)__CSEQ_removeindent;
                                        
# 3021 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3022 "<previous_module>"
tmain_136: IF(0,136,tmain_137)__CSEQ_removeindent;
                                        
# 3023 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 3024 "<previous_module>"
tmain_137: IF(0,137,tmain_138)__CSEQ_removeindent;
                                        
# 3025 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3026 "<previous_module>"
tmain_138: IF(0,138,tmain_139)__CSEQ_removeindent;
                                        
# 3027 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 3028 "<previous_module>"
;
                                        ;
                                        
# 3029 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3030 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3031 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3032 "<previous_module>"
                                        {

# 3033 "<previous_module>"
                                                {
                                                        
# 3034 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3035 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3036 "<previous_module>"
                                                        {
                                                                
# 3037 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3039 "<previous_module>"
;
                                                        
# 3040 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3041 "<previous_module>"
                                                        {
                                                                
# 3042 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3044 "<previous_module>"
;
                                                        
# 3045 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3046 "<previous_module>"
                                                        {
                                                                
# 3047 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3049 "<previous_module>"
;
                                                        
# 3050 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3051 "<previous_module>"
tmain_139: IF(0,139,tmain_140)__CSEQ_removeindent;
                                                        
# 3052 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 3053 "<previous_module>"
__exit_loop_31:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 140);

                                                        
# 3054 "<previous_module>"
;
                                                        ;
                                                        
# 3055 "<previous_module>"
__exit__exponential_backoff_5_9:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 140);

                                                        
# 3056 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3058 "<previous_module>"
;
                                                
# 3059 "<previous_module>"
tmain_140: IF(0,140,tmain_141)__CSEQ_removeindent;
                                                
# 3060 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3061 "<previous_module>"
tmain_141: IF(0,141,tmain_142)__CSEQ_removeindent;
                                                
# 3062 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 3064 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 142);
                                        ;
                                        
# 3065 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3066 "<previous_module>"
;
                                        ;
                                        
# 3067 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 3068 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3069 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3070 "<previous_module>"
                                        {
                                                
# 3071 "<previous_module>"
goto __exit_loop_26;
                                                ;
                                        }

                                        
# 3073 "<previous_module>"
;
                                }
                                
# 3075 "<previous_module>"
;
                                
# 3076 "<previous_module>"
tmain_142: IF(0,142,tmain_143)__CSEQ_removeindent;
                                
# 3077 "<previous_module>"
__CPROVER_assume(
# 3078 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                
# 3079 "<previous_module>"
__exit_loop_26:
                                __CPROVER_assume(__cs_pc_cs[0] >= 143);

                                
# 3080 "<previous_module>"
;
                                ;
                                
# 3081 "<previous_module>"
tmain_143: IF(0,143,tmain_144)__CSEQ_removeindent;
                                
# 3082 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                
# 3083 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
                                
# 3084 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                ;
                                
# 3085 "<previous_module>"
__exit__lfds711_stack_pop_2_1:
                                __CPROVER_assume(__cs_pc_cs[0] >= 144);

                                
# 3086 "<previous_module>"
;
                                ;
                        }
                        
# 3088 "<previous_module>"
;
                        
# 3089 "<previous_module>"
__cs_local_get_size_res = __cs_retval__lfds711_stack_pop_2;
                        
# 3090 "<previous_module>"
;
                        ;
                        
# 3091 "<previous_module>"
static _Bool __cs_local_get_size___cs_tmp_if_cond_22;
                        
# 3092 "<previous_module>"
__cs_local_get_size___cs_tmp_if_cond_22 = __cs_local_get_size_res == 0;
                        
# 3093 "<previous_module>"
if (__cs_local_get_size___cs_tmp_if_cond_22)

# 3094 "<previous_module>"
                        {
                                
# 3095 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 3097 "<previous_module>"
;
                        
# 3098 "<previous_module>"
__cs_local_get_size_actual_size = __cs_local_get_size_actual_size + 1;
                }
                
# 3100 "<previous_module>"
;
                
# 3101 "<previous_module>"
if (!(__cs_local_get_size_actual_size < 2))

# 3102 "<previous_module>"
                {
                        
# 3103 "<previous_module>"
goto __exit_loop_15;
                        ;
                }

                
# 3105 "<previous_module>"
;

# 3106 "<previous_module>"
                {
                        
# 3107 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_2;

# 3108 "<previous_module>"
                        {
                                
# 3109 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                
# 3110 "<previous_module>"
tmain_144: IF(0,144,tmain_145)__CSEQ_removeindent;
                                
# 3111 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = __cs_param_get_size_s;
                                
# 3112 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                
# 3113 "<previous_module>"
tmain_145: IF(0,145,tmain_146)__CSEQ_removeindent;
                                
# 3114 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_get_size_se;
                                
# 3115 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                
# 3116 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                
# 3117 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                
# 3118 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                
# 3119 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                
# 3120 "<previous_module>"
;
                                ;
                                
# 3121 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                
# 3122 "<previous_module>"
tmain_146: IF(0,146,tmain_147)__CSEQ_removeindent;
                                
# 3123 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                
# 3124 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 3125 "<previous_module>"
                                {
                                        
# 3126 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 3127 "<previous_module>"
tmain_147: IF(0,147,tmain_148)__CSEQ_removeindent;
                                        
# 3128 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 3129 "<previous_module>"
tmain_148: IF(0,148,tmain_149)__CSEQ_removeindent;
                                        
# 3130 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 3132 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 149);
                                ;
                                
# 3133 "<previous_module>"
;
                                ;
                                
# 3134 "<previous_module>"
;
                                ;
                                
# 3135 "<previous_module>"
;
                                ;
                                
# 3136 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                
# 3137 "<previous_module>"
tmain_149: IF(0,149,tmain_150)__CSEQ_removeindent;
                                
# 3138 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                
# 3139 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 3140 "<previous_module>"
                                {
                                        
# 3141 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 3142 "<previous_module>"
tmain_150: IF(0,150,tmain_151)__CSEQ_removeindent;
                                        
# 3143 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 3144 "<previous_module>"
tmain_151: IF(0,151,tmain_152)__CSEQ_removeindent;
                                        
# 3145 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 3147 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 152);
                                ;
                                
# 3148 "<previous_module>"
;
                                ;
                                
# 3149 "<previous_module>"
;
                                ;
                                
# 3150 "<previous_module>"
tmain_152: IF(0,152,tmain_153)__CSEQ_removeindent;
                                
# 3151 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                
# 3152 "<previous_module>"
tmain_153: IF(0,153,tmain_154)__CSEQ_removeindent;
                                
# 3153 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                
# 3154 "<previous_module>"
tmain_154: IF(0,154,tmain_155)__CSEQ_removeindent;
                                
# 3155 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                
# 3156 "<previous_module>"
tmain_155: IF(0,155,tmain_156)__CSEQ_removeindent;
                                
# 3157 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                
# 3158 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                
# 3159 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                
# 3160 "<previous_module>"
;
                                ;
                                
# 3161 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                
# 3162 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 3163 "<previous_module>"
                                {
                                        
# 3164 "<previous_module>"
;
                                        ;
                                        
# 3165 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                        
# 3166 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3167 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 3168 "<previous_module>"
                                        {
                                                
# 3169 "<previous_module>"
tmain_156: IF(0,156,tmain_157)__CSEQ_removeindent;
                                                
# 3170 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3171 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 3172 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                                ;
                                        }

                                        
# 3174 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 157);
                                        ;
                                        
# 3175 "<previous_module>"
tmain_157: IF(0,157,tmain_158)__CSEQ_removeindent;
                                        
# 3176 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3177 "<previous_module>"
tmain_158: IF(0,158,tmain_159)__CSEQ_removeindent;
                                        
# 3178 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3179 "<previous_module>"
tmain_159: IF(0,159,tmain_160)__CSEQ_removeindent;
                                        
# 3180 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 3181 "<previous_module>"
tmain_160: IF(0,160,tmain_161)__CSEQ_removeindent;
                                        
# 3182 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3183 "<previous_module>"
tmain_161: IF(0,161,tmain_162)__CSEQ_removeindent;
                                        
# 3184 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 3185 "<previous_module>"
;
                                        ;
                                        
# 3186 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                        
# 3187 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3188 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 3189 "<previous_module>"
                                        {

# 3190 "<previous_module>"
                                                {
                                                        
# 3191 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3192 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3193 "<previous_module>"
                                                        {
                                                                
# 3194 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3196 "<previous_module>"
;
                                                        
# 3197 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3198 "<previous_module>"
                                                        {
                                                                
# 3199 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3201 "<previous_module>"
;
                                                        
# 3202 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3203 "<previous_module>"
                                                        {
                                                                
# 3204 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3206 "<previous_module>"
;
                                                        
# 3207 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3208 "<previous_module>"
tmain_162: IF(0,162,tmain_163)__CSEQ_removeindent;
                                                        
# 3209 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 3210 "<previous_module>"
__exit_loop_33:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 163);

                                                        
# 3211 "<previous_module>"
;
                                                        ;
                                                        
# 3212 "<previous_module>"
__exit__exponential_backoff_4_2:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 163);

                                                        
# 3213 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3215 "<previous_module>"
;
                                                
# 3216 "<previous_module>"
tmain_163: IF(0,163,tmain_164)__CSEQ_removeindent;
                                                
# 3217 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3218 "<previous_module>"
tmain_164: IF(0,164,tmain_165)__CSEQ_removeindent;
                                                
# 3219 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 3221 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 165);
                                        ;
                                        
# 3222 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3223 "<previous_module>"
;
                                        ;
                                        
# 3224 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                        
# 3225 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3226 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 3227 "<previous_module>"
                                        {
                                                
# 3228 "<previous_module>"
goto __exit_loop_32;
                                                ;
                                        }

                                        
# 3230 "<previous_module>"
;
                                }
                                
# 3232 "<previous_module>"
;
                                
# 3233 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                
# 3234 "<previous_module>"
tmain_165: IF(0,165,tmain_166)__CSEQ_removeindent;
                                
# 3235 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                
# 3236 "<previous_module>"
__exit_loop_32:
                                __CPROVER_assume(__cs_pc_cs[0] >= 166);

                                
# 3237 "<previous_module>"
;
                                ;
                                
# 3238 "<previous_module>"
if (
# 3239 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3240 "<previous_module>"
                                {
                                        
# 3241 "<previous_module>"
goto __exit_loop_34;
                                        ;
                                }

                                
# 3243 "<previous_module>"
;

# 3244 "<previous_module>"
                                {
                                        
# 3245 "<previous_module>"
;
                                        ;
                                        
# 3246 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3247 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3248 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3249 "<previous_module>"
                                        {
                                                
# 3250 "<previous_module>"
tmain_166: IF(0,166,tmain_167)__CSEQ_removeindent;
                                                
# 3251 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3252 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 3253 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                                ;
                                        }

                                        
# 3255 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 167);
                                        ;
                                        
# 3256 "<previous_module>"
tmain_167: IF(0,167,tmain_168)__CSEQ_removeindent;
                                        
# 3257 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3258 "<previous_module>"
tmain_168: IF(0,168,tmain_169)__CSEQ_removeindent;
                                        
# 3259 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3260 "<previous_module>"
tmain_169: IF(0,169,tmain_170)__CSEQ_removeindent;
                                        
# 3261 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 3262 "<previous_module>"
tmain_170: IF(0,170,tmain_171)__CSEQ_removeindent;
                                        
# 3263 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3264 "<previous_module>"
tmain_171: IF(0,171,tmain_172)__CSEQ_removeindent;
                                        
# 3265 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 3266 "<previous_module>"
;
                                        ;
                                        
# 3267 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3268 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3269 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3270 "<previous_module>"
                                        {

# 3271 "<previous_module>"
                                                {
                                                        
# 3272 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3273 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3274 "<previous_module>"
                                                        {
                                                                
# 3275 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3277 "<previous_module>"
;
                                                        
# 3278 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3279 "<previous_module>"
                                                        {
                                                                
# 3280 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3282 "<previous_module>"
;
                                                        
# 3283 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3284 "<previous_module>"
                                                        {
                                                                
# 3285 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3287 "<previous_module>"
;
                                                        
# 3288 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3289 "<previous_module>"
tmain_172: IF(0,172,tmain_173)__CSEQ_removeindent;
                                                        
# 3290 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 3291 "<previous_module>"
__exit_loop_35:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 173);

                                                        
# 3292 "<previous_module>"
;
                                                        ;
                                                        
# 3293 "<previous_module>"
__exit__exponential_backoff_5_10:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 173);

                                                        
# 3294 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3296 "<previous_module>"
;
                                                
# 3297 "<previous_module>"
tmain_173: IF(0,173,tmain_174)__CSEQ_removeindent;
                                                
# 3298 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3299 "<previous_module>"
tmain_174: IF(0,174,tmain_175)__CSEQ_removeindent;
                                                
# 3300 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 3302 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 175);
                                        ;
                                        
# 3303 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3304 "<previous_module>"
;
                                        ;
                                        
# 3305 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 3306 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3307 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3308 "<previous_module>"
                                        {
                                                
# 3309 "<previous_module>"
goto __exit_loop_34;
                                                ;
                                        }

                                        
# 3311 "<previous_module>"
;
                                }
                                
# 3313 "<previous_module>"
;
                                
# 3314 "<previous_module>"
if (
# 3315 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3316 "<previous_module>"
                                {
                                        
# 3317 "<previous_module>"
goto __exit_loop_34;
                                        ;
                                }

                                
# 3319 "<previous_module>"
;

# 3320 "<previous_module>"
                                {
                                        
# 3321 "<previous_module>"
;
                                        ;
                                        
# 3322 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3323 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3324 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3325 "<previous_module>"
                                        {
                                                
# 3326 "<previous_module>"
tmain_175: IF(0,175,tmain_176)__CSEQ_removeindent;
                                                
# 3327 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3328 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 3329 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                                ;
                                        }

                                        
# 3331 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 176);
                                        ;
                                        
# 3332 "<previous_module>"
tmain_176: IF(0,176,tmain_177)__CSEQ_removeindent;
                                        
# 3333 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3334 "<previous_module>"
tmain_177: IF(0,177,tmain_178)__CSEQ_removeindent;
                                        
# 3335 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3336 "<previous_module>"
tmain_178: IF(0,178,tmain_179)__CSEQ_removeindent;
                                        
# 3337 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 3338 "<previous_module>"
tmain_179: IF(0,179,tmain_180)__CSEQ_removeindent;
                                        
# 3339 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3340 "<previous_module>"
tmain_180: IF(0,180,tmain_181)__CSEQ_removeindent;
                                        
# 3341 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 3342 "<previous_module>"
;
                                        ;
                                        
# 3343 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3344 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3345 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3346 "<previous_module>"
                                        {

# 3347 "<previous_module>"
                                                {
                                                        
# 3348 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3349 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3350 "<previous_module>"
                                                        {
                                                                
# 3351 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3353 "<previous_module>"
;
                                                        
# 3354 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3355 "<previous_module>"
                                                        {
                                                                
# 3356 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3358 "<previous_module>"
;
                                                        
# 3359 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3360 "<previous_module>"
                                                        {
                                                                
# 3361 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3363 "<previous_module>"
;
                                                        
# 3364 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3365 "<previous_module>"
tmain_181: IF(0,181,tmain_182)__CSEQ_removeindent;
                                                        
# 3366 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 3367 "<previous_module>"
__exit_loop_36:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 182);

                                                        
# 3368 "<previous_module>"
;
                                                        ;
                                                        
# 3369 "<previous_module>"
__exit__exponential_backoff_5_11:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 182);

                                                        
# 3370 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3372 "<previous_module>"
;
                                                
# 3373 "<previous_module>"
tmain_182: IF(0,182,tmain_183)__CSEQ_removeindent;
                                                
# 3374 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3375 "<previous_module>"
tmain_183: IF(0,183,tmain_184)__CSEQ_removeindent;
                                                
# 3376 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 3378 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 184);
                                        ;
                                        
# 3379 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3380 "<previous_module>"
;
                                        ;
                                        
# 3381 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 3382 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3383 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3384 "<previous_module>"
                                        {
                                                
# 3385 "<previous_module>"
goto __exit_loop_34;
                                                ;
                                        }

                                        
# 3387 "<previous_module>"
;
                                }
                                
# 3389 "<previous_module>"
;
                                
# 3390 "<previous_module>"
if (
# 3391 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3392 "<previous_module>"
                                {
                                        
# 3393 "<previous_module>"
goto __exit_loop_34;
                                        ;
                                }

                                
# 3395 "<previous_module>"
;

# 3396 "<previous_module>"
                                {
                                        
# 3397 "<previous_module>"
;
                                        ;
                                        
# 3398 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3399 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3400 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3401 "<previous_module>"
                                        {
                                                
# 3402 "<previous_module>"
tmain_184: IF(0,184,tmain_185)__CSEQ_removeindent;
                                                
# 3403 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3404 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 3405 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                                ;
                                        }

                                        
# 3407 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 185);
                                        ;
                                        
# 3408 "<previous_module>"
tmain_185: IF(0,185,tmain_186)__CSEQ_removeindent;
                                        
# 3409 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3410 "<previous_module>"
tmain_186: IF(0,186,tmain_187)__CSEQ_removeindent;
                                        
# 3411 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3412 "<previous_module>"
tmain_187: IF(0,187,tmain_188)__CSEQ_removeindent;
                                        
# 3413 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 3414 "<previous_module>"
tmain_188: IF(0,188,tmain_189)__CSEQ_removeindent;
                                        
# 3415 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3416 "<previous_module>"
tmain_189: IF(0,189,tmain_190)__CSEQ_removeindent;
                                        
# 3417 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 3418 "<previous_module>"
;
                                        ;
                                        
# 3419 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3420 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3421 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3422 "<previous_module>"
                                        {

# 3423 "<previous_module>"
                                                {
                                                        
# 3424 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3425 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3426 "<previous_module>"
                                                        {
                                                                
# 3427 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3429 "<previous_module>"
;
                                                        
# 3430 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3431 "<previous_module>"
                                                        {
                                                                
# 3432 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3434 "<previous_module>"
;
                                                        
# 3435 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3436 "<previous_module>"
                                                        {
                                                                
# 3437 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3439 "<previous_module>"
;
                                                        
# 3440 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3441 "<previous_module>"
tmain_190: IF(0,190,tmain_191)__CSEQ_removeindent;
                                                        
# 3442 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 3443 "<previous_module>"
__exit_loop_37:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 191);

                                                        
# 3444 "<previous_module>"
;
                                                        ;
                                                        
# 3445 "<previous_module>"
__exit__exponential_backoff_5_12:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 191);

                                                        
# 3446 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3448 "<previous_module>"
;
                                                
# 3449 "<previous_module>"
tmain_191: IF(0,191,tmain_192)__CSEQ_removeindent;
                                                
# 3450 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3451 "<previous_module>"
tmain_192: IF(0,192,tmain_193)__CSEQ_removeindent;
                                                
# 3452 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 3454 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 193);
                                        ;
                                        
# 3455 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3456 "<previous_module>"
;
                                        ;
                                        
# 3457 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 3458 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3459 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3460 "<previous_module>"
                                        {
                                                
# 3461 "<previous_module>"
goto __exit_loop_34;
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
goto __exit_loop_34;
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
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3475 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3476 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3477 "<previous_module>"
                                        {
                                                
# 3478 "<previous_module>"
tmain_193: IF(0,193,tmain_194)__CSEQ_removeindent;
                                                
# 3479 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3480 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 3481 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                                ;
                                        }

                                        
# 3483 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 194);
                                        ;
                                        
# 3484 "<previous_module>"
tmain_194: IF(0,194,tmain_195)__CSEQ_removeindent;
                                        
# 3485 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3486 "<previous_module>"
tmain_195: IF(0,195,tmain_196)__CSEQ_removeindent;
                                        
# 3487 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3488 "<previous_module>"
tmain_196: IF(0,196,tmain_197)__CSEQ_removeindent;
                                        
# 3489 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 3490 "<previous_module>"
tmain_197: IF(0,197,tmain_198)__CSEQ_removeindent;
                                        
# 3491 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3492 "<previous_module>"
tmain_198: IF(0,198,tmain_199)__CSEQ_removeindent;
                                        
# 3493 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 3494 "<previous_module>"
;
                                        ;
                                        
# 3495 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3496 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3497 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3498 "<previous_module>"
                                        {

# 3499 "<previous_module>"
                                                {
                                                        
# 3500 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3501 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3502 "<previous_module>"
                                                        {
                                                                
# 3503 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3505 "<previous_module>"
;
                                                        
# 3506 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3507 "<previous_module>"
                                                        {
                                                                
# 3508 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3510 "<previous_module>"
;
                                                        
# 3511 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3512 "<previous_module>"
                                                        {
                                                                
# 3513 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3515 "<previous_module>"
;
                                                        
# 3516 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3517 "<previous_module>"
tmain_199: IF(0,199,tmain_200)__CSEQ_removeindent;
                                                        
# 3518 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 3519 "<previous_module>"
__exit_loop_38:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 200);

                                                        
# 3520 "<previous_module>"
;
                                                        ;
                                                        
# 3521 "<previous_module>"
__exit__exponential_backoff_5_13:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 200);

                                                        
# 3522 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3524 "<previous_module>"
;
                                                
# 3525 "<previous_module>"
tmain_200: IF(0,200,tmain_201)__CSEQ_removeindent;
                                                
# 3526 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3527 "<previous_module>"
tmain_201: IF(0,201,tmain_202)__CSEQ_removeindent;
                                                
# 3528 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 3530 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 202);
                                        ;
                                        
# 3531 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3532 "<previous_module>"
;
                                        ;
                                        
# 3533 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 3534 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3535 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3536 "<previous_module>"
                                        {
                                                
# 3537 "<previous_module>"
goto __exit_loop_34;
                                                ;
                                        }

                                        
# 3539 "<previous_module>"
;
                                }
                                
# 3541 "<previous_module>"
;
                                
# 3542 "<previous_module>"
if (
# 3543 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3544 "<previous_module>"
                                {
                                        
# 3545 "<previous_module>"
goto __exit_loop_34;
                                        ;
                                }

                                
# 3547 "<previous_module>"
;

# 3548 "<previous_module>"
                                {
                                        
# 3549 "<previous_module>"
;
                                        ;
                                        
# 3550 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3551 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3552 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3553 "<previous_module>"
                                        {
                                                
# 3554 "<previous_module>"
tmain_202: IF(0,202,tmain_203)__CSEQ_removeindent;
                                                
# 3555 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3556 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 3557 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                                ;
                                        }

                                        
# 3559 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 203);
                                        ;
                                        
# 3560 "<previous_module>"
tmain_203: IF(0,203,tmain_204)__CSEQ_removeindent;
                                        
# 3561 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3562 "<previous_module>"
tmain_204: IF(0,204,tmain_205)__CSEQ_removeindent;
                                        
# 3563 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3564 "<previous_module>"
tmain_205: IF(0,205,tmain_206)__CSEQ_removeindent;
                                        
# 3565 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 3566 "<previous_module>"
tmain_206: IF(0,206,tmain_207)__CSEQ_removeindent;
                                        
# 3567 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3568 "<previous_module>"
tmain_207: IF(0,207,tmain_208)__CSEQ_removeindent;
                                        
# 3569 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 3570 "<previous_module>"
;
                                        ;
                                        
# 3571 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3572 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3573 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3574 "<previous_module>"
                                        {

# 3575 "<previous_module>"
                                                {
                                                        
# 3576 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3577 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3578 "<previous_module>"
                                                        {
                                                                
# 3579 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3581 "<previous_module>"
;
                                                        
# 3582 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3583 "<previous_module>"
                                                        {
                                                                
# 3584 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3586 "<previous_module>"
;
                                                        
# 3587 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3588 "<previous_module>"
                                                        {
                                                                
# 3589 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3591 "<previous_module>"
;
                                                        
# 3592 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3593 "<previous_module>"
tmain_208: IF(0,208,tmain_209)__CSEQ_removeindent;
                                                        
# 3594 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 3595 "<previous_module>"
__exit_loop_39:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 209);

                                                        
# 3596 "<previous_module>"
;
                                                        ;
                                                        
# 3597 "<previous_module>"
__exit__exponential_backoff_5_14:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 209);

                                                        
# 3598 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3600 "<previous_module>"
;
                                                
# 3601 "<previous_module>"
tmain_209: IF(0,209,tmain_210)__CSEQ_removeindent;
                                                
# 3602 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3603 "<previous_module>"
tmain_210: IF(0,210,tmain_211)__CSEQ_removeindent;
                                                
# 3604 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 3606 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 211);
                                        ;
                                        
# 3607 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3608 "<previous_module>"
;
                                        ;
                                        
# 3609 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 3610 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3611 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3612 "<previous_module>"
                                        {
                                                
# 3613 "<previous_module>"
goto __exit_loop_34;
                                                ;
                                        }

                                        
# 3615 "<previous_module>"
;
                                }
                                
# 3617 "<previous_module>"
;
                                
# 3618 "<previous_module>"
tmain_211: IF(0,211,tmain_212)__CSEQ_removeindent;
                                
# 3619 "<previous_module>"
__CPROVER_assume(
# 3620 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                
# 3621 "<previous_module>"
__exit_loop_34:
                                __CPROVER_assume(__cs_pc_cs[0] >= 212);

                                
# 3622 "<previous_module>"
;
                                ;
                                
# 3623 "<previous_module>"
tmain_212: IF(0,212,tmain_213)__CSEQ_removeindent;
                                
# 3624 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                
# 3625 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
                                
# 3626 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                ;
                                
# 3627 "<previous_module>"
__exit__lfds711_stack_pop_2_2:
                                __CPROVER_assume(__cs_pc_cs[0] >= 213);

                                
# 3628 "<previous_module>"
;
                                ;
                        }
                        
# 3630 "<previous_module>"
;
                        
# 3631 "<previous_module>"
__cs_local_get_size_res = __cs_retval__lfds711_stack_pop_2;
                        
# 3632 "<previous_module>"
;
                        ;
                        
# 3633 "<previous_module>"
static _Bool __cs_local_get_size___cs_tmp_if_cond_22;
                        
# 3634 "<previous_module>"
__cs_local_get_size___cs_tmp_if_cond_22 = __cs_local_get_size_res == 0;
                        
# 3635 "<previous_module>"
if (__cs_local_get_size___cs_tmp_if_cond_22)

# 3636 "<previous_module>"
                        {
                                
# 3637 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 3639 "<previous_module>"
;
                        
# 3640 "<previous_module>"
__cs_local_get_size_actual_size = __cs_local_get_size_actual_size + 1;
                }
                
# 3642 "<previous_module>"
;
                
# 3643 "<previous_module>"
if (!(__cs_local_get_size_actual_size < 2))

# 3644 "<previous_module>"
                {
                        
# 3645 "<previous_module>"
goto __exit_loop_15;
                        ;
                }

                
# 3647 "<previous_module>"
;

# 3648 "<previous_module>"
                {
                        
# 3649 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_2;

# 3650 "<previous_module>"
                        {
                                
# 3651 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                
# 3652 "<previous_module>"
tmain_213: IF(0,213,tmain_214)__CSEQ_removeindent;
                                
# 3653 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = __cs_param_get_size_s;
                                
# 3654 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                
# 3655 "<previous_module>"
tmain_214: IF(0,214,tmain_215)__CSEQ_removeindent;
                                
# 3656 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_get_size_se;
                                
# 3657 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                
# 3658 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                
# 3659 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                
# 3660 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                
# 3661 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                
# 3662 "<previous_module>"
;
                                ;
                                
# 3663 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                
# 3664 "<previous_module>"
tmain_215: IF(0,215,tmain_216)__CSEQ_removeindent;
                                
# 3665 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                
# 3666 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 3667 "<previous_module>"
                                {
                                        
# 3668 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 3669 "<previous_module>"
tmain_216: IF(0,216,tmain_217)__CSEQ_removeindent;
                                        
# 3670 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 3671 "<previous_module>"
tmain_217: IF(0,217,tmain_218)__CSEQ_removeindent;
                                        
# 3672 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 3674 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 218);
                                ;
                                
# 3675 "<previous_module>"
;
                                ;
                                
# 3676 "<previous_module>"
;
                                ;
                                
# 3677 "<previous_module>"
;
                                ;
                                
# 3678 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                
# 3679 "<previous_module>"
tmain_218: IF(0,218,tmain_219)__CSEQ_removeindent;
                                
# 3680 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                
# 3681 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 3682 "<previous_module>"
                                {
                                        
# 3683 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 3684 "<previous_module>"
tmain_219: IF(0,219,tmain_220)__CSEQ_removeindent;
                                        
# 3685 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 3686 "<previous_module>"
tmain_220: IF(0,220,tmain_221)__CSEQ_removeindent;
                                        
# 3687 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 3689 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 221);
                                ;
                                
# 3690 "<previous_module>"
;
                                ;
                                
# 3691 "<previous_module>"
;
                                ;
                                
# 3692 "<previous_module>"
tmain_221: IF(0,221,tmain_222)__CSEQ_removeindent;
                                
# 3693 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                
# 3694 "<previous_module>"
tmain_222: IF(0,222,tmain_223)__CSEQ_removeindent;
                                
# 3695 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                
# 3696 "<previous_module>"
tmain_223: IF(0,223,tmain_224)__CSEQ_removeindent;
                                
# 3697 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                
# 3698 "<previous_module>"
tmain_224: IF(0,224,tmain_225)__CSEQ_removeindent;
                                
# 3699 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                
# 3700 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                
# 3701 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                
# 3702 "<previous_module>"
;
                                ;
                                
# 3703 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                
# 3704 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 3705 "<previous_module>"
                                {
                                        
# 3706 "<previous_module>"
;
                                        ;
                                        
# 3707 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                        
# 3708 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3709 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 3710 "<previous_module>"
                                        {
                                                
# 3711 "<previous_module>"
tmain_225: IF(0,225,tmain_226)__CSEQ_removeindent;
                                                
# 3712 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3713 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 3714 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                                ;
                                        }

                                        
# 3716 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 226);
                                        ;
                                        
# 3717 "<previous_module>"
tmain_226: IF(0,226,tmain_227)__CSEQ_removeindent;
                                        
# 3718 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3719 "<previous_module>"
tmain_227: IF(0,227,tmain_228)__CSEQ_removeindent;
                                        
# 3720 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3721 "<previous_module>"
tmain_228: IF(0,228,tmain_229)__CSEQ_removeindent;
                                        
# 3722 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 3723 "<previous_module>"
tmain_229: IF(0,229,tmain_230)__CSEQ_removeindent;
                                        
# 3724 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3725 "<previous_module>"
tmain_230: IF(0,230,tmain_231)__CSEQ_removeindent;
                                        
# 3726 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 3727 "<previous_module>"
;
                                        ;
                                        
# 3728 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                        
# 3729 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3730 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 3731 "<previous_module>"
                                        {

# 3732 "<previous_module>"
                                                {
                                                        
# 3733 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3734 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3735 "<previous_module>"
                                                        {
                                                                
# 3736 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3738 "<previous_module>"
;
                                                        
# 3739 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3740 "<previous_module>"
                                                        {
                                                                
# 3741 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3743 "<previous_module>"
;
                                                        
# 3744 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3745 "<previous_module>"
                                                        {
                                                                
# 3746 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3748 "<previous_module>"
;
                                                        
# 3749 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3750 "<previous_module>"
tmain_231: IF(0,231,tmain_232)__CSEQ_removeindent;
                                                        
# 3751 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 3752 "<previous_module>"
__exit_loop_41:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 232);

                                                        
# 3753 "<previous_module>"
;
                                                        ;
                                                        
# 3754 "<previous_module>"
__exit__exponential_backoff_4_3:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 232);

                                                        
# 3755 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3757 "<previous_module>"
;
                                                
# 3758 "<previous_module>"
tmain_232: IF(0,232,tmain_233)__CSEQ_removeindent;
                                                
# 3759 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3760 "<previous_module>"
tmain_233: IF(0,233,tmain_234)__CSEQ_removeindent;
                                                
# 3761 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 3763 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 234);
                                        ;
                                        
# 3764 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3765 "<previous_module>"
;
                                        ;
                                        
# 3766 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                        
# 3767 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3768 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 3769 "<previous_module>"
                                        {
                                                
# 3770 "<previous_module>"
goto __exit_loop_40;
                                                ;
                                        }

                                        
# 3772 "<previous_module>"
;
                                }
                                
# 3774 "<previous_module>"
;
                                
# 3775 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                
# 3776 "<previous_module>"
tmain_234: IF(0,234,tmain_235)__CSEQ_removeindent;
                                
# 3777 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                
# 3778 "<previous_module>"
__exit_loop_40:
                                __CPROVER_assume(__cs_pc_cs[0] >= 235);

                                
# 3779 "<previous_module>"
;
                                ;
                                
# 3780 "<previous_module>"
if (
# 3781 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3782 "<previous_module>"
                                {
                                        
# 3783 "<previous_module>"
goto __exit_loop_42;
                                        ;
                                }

                                
# 3785 "<previous_module>"
;

# 3786 "<previous_module>"
                                {
                                        
# 3787 "<previous_module>"
;
                                        ;
                                        
# 3788 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3789 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3790 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3791 "<previous_module>"
                                        {
                                                
# 3792 "<previous_module>"
tmain_235: IF(0,235,tmain_236)__CSEQ_removeindent;
                                                
# 3793 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3794 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 3795 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                                ;
                                        }

                                        
# 3797 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 236);
                                        ;
                                        
# 3798 "<previous_module>"
tmain_236: IF(0,236,tmain_237)__CSEQ_removeindent;
                                        
# 3799 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3800 "<previous_module>"
tmain_237: IF(0,237,tmain_238)__CSEQ_removeindent;
                                        
# 3801 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3802 "<previous_module>"
tmain_238: IF(0,238,tmain_239)__CSEQ_removeindent;
                                        
# 3803 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 3804 "<previous_module>"
tmain_239: IF(0,239,tmain_240)__CSEQ_removeindent;
                                        
# 3805 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3806 "<previous_module>"
tmain_240: IF(0,240,tmain_241)__CSEQ_removeindent;
                                        
# 3807 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 3808 "<previous_module>"
;
                                        ;
                                        
# 3809 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3810 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3811 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3812 "<previous_module>"
                                        {

# 3813 "<previous_module>"
                                                {
                                                        
# 3814 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3815 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3816 "<previous_module>"
                                                        {
                                                                
# 3817 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3819 "<previous_module>"
;
                                                        
# 3820 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3821 "<previous_module>"
                                                        {
                                                                
# 3822 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3824 "<previous_module>"
;
                                                        
# 3825 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3826 "<previous_module>"
                                                        {
                                                                
# 3827 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3829 "<previous_module>"
;
                                                        
# 3830 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3831 "<previous_module>"
tmain_241: IF(0,241,tmain_242)__CSEQ_removeindent;
                                                        
# 3832 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 3833 "<previous_module>"
__exit_loop_43:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 242);

                                                        
# 3834 "<previous_module>"
;
                                                        ;
                                                        
# 3835 "<previous_module>"
__exit__exponential_backoff_5_15:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 242);

                                                        
# 3836 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3838 "<previous_module>"
;
                                                
# 3839 "<previous_module>"
tmain_242: IF(0,242,tmain_243)__CSEQ_removeindent;
                                                
# 3840 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3841 "<previous_module>"
tmain_243: IF(0,243,tmain_244)__CSEQ_removeindent;
                                                
# 3842 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 3844 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 244);
                                        ;
                                        
# 3845 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3846 "<previous_module>"
;
                                        ;
                                        
# 3847 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 3848 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3849 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3850 "<previous_module>"
                                        {
                                                
# 3851 "<previous_module>"
goto __exit_loop_42;
                                                ;
                                        }

                                        
# 3853 "<previous_module>"
;
                                }
                                
# 3855 "<previous_module>"
;
                                
# 3856 "<previous_module>"
if (
# 3857 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3858 "<previous_module>"
                                {
                                        
# 3859 "<previous_module>"
goto __exit_loop_42;
                                        ;
                                }

                                
# 3861 "<previous_module>"
;

# 3862 "<previous_module>"
                                {
                                        
# 3863 "<previous_module>"
;
                                        ;
                                        
# 3864 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3865 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3866 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3867 "<previous_module>"
                                        {
                                                
# 3868 "<previous_module>"
tmain_244: IF(0,244,tmain_245)__CSEQ_removeindent;
                                                
# 3869 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3870 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 3871 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                                ;
                                        }

                                        
# 3873 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 245);
                                        ;
                                        
# 3874 "<previous_module>"
tmain_245: IF(0,245,tmain_246)__CSEQ_removeindent;
                                        
# 3875 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3876 "<previous_module>"
tmain_246: IF(0,246,tmain_247)__CSEQ_removeindent;
                                        
# 3877 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3878 "<previous_module>"
tmain_247: IF(0,247,tmain_248)__CSEQ_removeindent;
                                        
# 3879 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 3880 "<previous_module>"
tmain_248: IF(0,248,tmain_249)__CSEQ_removeindent;
                                        
# 3881 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3882 "<previous_module>"
tmain_249: IF(0,249,tmain_250)__CSEQ_removeindent;
                                        
# 3883 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 3884 "<previous_module>"
;
                                        ;
                                        
# 3885 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3886 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3887 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3888 "<previous_module>"
                                        {

# 3889 "<previous_module>"
                                                {
                                                        
# 3890 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3891 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3892 "<previous_module>"
                                                        {
                                                                
# 3893 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3895 "<previous_module>"
;
                                                        
# 3896 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3897 "<previous_module>"
                                                        {
                                                                
# 3898 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3900 "<previous_module>"
;
                                                        
# 3901 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3902 "<previous_module>"
                                                        {
                                                                
# 3903 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3905 "<previous_module>"
;
                                                        
# 3906 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3907 "<previous_module>"
tmain_250: IF(0,250,tmain_251)__CSEQ_removeindent;
                                                        
# 3908 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 3909 "<previous_module>"
__exit_loop_44:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 251);

                                                        
# 3910 "<previous_module>"
;
                                                        ;
                                                        
# 3911 "<previous_module>"
__exit__exponential_backoff_5_16:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 251);

                                                        
# 3912 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3914 "<previous_module>"
;
                                                
# 3915 "<previous_module>"
tmain_251: IF(0,251,tmain_252)__CSEQ_removeindent;
                                                
# 3916 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3917 "<previous_module>"
tmain_252: IF(0,252,tmain_253)__CSEQ_removeindent;
                                                
# 3918 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 3920 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 253);
                                        ;
                                        
# 3921 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3922 "<previous_module>"
;
                                        ;
                                        
# 3923 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 3924 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 3925 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3926 "<previous_module>"
                                        {
                                                
# 3927 "<previous_module>"
goto __exit_loop_42;
                                                ;
                                        }

                                        
# 3929 "<previous_module>"
;
                                }
                                
# 3931 "<previous_module>"
;
                                
# 3932 "<previous_module>"
if (
# 3933 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3934 "<previous_module>"
                                {
                                        
# 3935 "<previous_module>"
goto __exit_loop_42;
                                        ;
                                }

                                
# 3937 "<previous_module>"
;

# 3938 "<previous_module>"
                                {
                                        
# 3939 "<previous_module>"
;
                                        ;
                                        
# 3940 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 3941 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 3942 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3943 "<previous_module>"
                                        {
                                                
# 3944 "<previous_module>"
tmain_253: IF(0,253,tmain_254)__CSEQ_removeindent;
                                                
# 3945 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 3946 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 3947 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                                ;
                                        }

                                        
# 3949 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 254);
                                        ;
                                        
# 3950 "<previous_module>"
tmain_254: IF(0,254,tmain_255)__CSEQ_removeindent;
                                        
# 3951 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 3952 "<previous_module>"
tmain_255: IF(0,255,tmain_256)__CSEQ_removeindent;
                                        
# 3953 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 3954 "<previous_module>"
tmain_256: IF(0,256,tmain_257)__CSEQ_removeindent;
                                        
# 3955 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 3956 "<previous_module>"
tmain_257: IF(0,257,tmain_258)__CSEQ_removeindent;
                                        
# 3957 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 3958 "<previous_module>"
tmain_258: IF(0,258,tmain_259)__CSEQ_removeindent;
                                        
# 3959 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 3960 "<previous_module>"
;
                                        ;
                                        
# 3961 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 3962 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 3963 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3964 "<previous_module>"
                                        {

# 3965 "<previous_module>"
                                                {
                                                        
# 3966 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 3967 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3968 "<previous_module>"
                                                        {
                                                                
# 3969 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3971 "<previous_module>"
;
                                                        
# 3972 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3973 "<previous_module>"
                                                        {
                                                                
# 3974 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3976 "<previous_module>"
;
                                                        
# 3977 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3978 "<previous_module>"
                                                        {
                                                                
# 3979 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3981 "<previous_module>"
;
                                                        
# 3982 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 3983 "<previous_module>"
tmain_259: IF(0,259,tmain_260)__CSEQ_removeindent;
                                                        
# 3984 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 3985 "<previous_module>"
__exit_loop_45:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 260);

                                                        
# 3986 "<previous_module>"
;
                                                        ;
                                                        
# 3987 "<previous_module>"
__exit__exponential_backoff_5_17:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 260);

                                                        
# 3988 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 3990 "<previous_module>"
;
                                                
# 3991 "<previous_module>"
tmain_260: IF(0,260,tmain_261)__CSEQ_removeindent;
                                                
# 3992 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3993 "<previous_module>"
tmain_261: IF(0,261,tmain_262)__CSEQ_removeindent;
                                                
# 3994 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 3996 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 262);
                                        ;
                                        
# 3997 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 3998 "<previous_module>"
;
                                        ;
                                        
# 3999 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4000 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4001 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4002 "<previous_module>"
                                        {
                                                
# 4003 "<previous_module>"
goto __exit_loop_42;
                                                ;
                                        }

                                        
# 4005 "<previous_module>"
;
                                }
                                
# 4007 "<previous_module>"
;
                                
# 4008 "<previous_module>"
if (
# 4009 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4010 "<previous_module>"
                                {
                                        
# 4011 "<previous_module>"
goto __exit_loop_42;
                                        ;
                                }

                                
# 4013 "<previous_module>"
;

# 4014 "<previous_module>"
                                {
                                        
# 4015 "<previous_module>"
;
                                        ;
                                        
# 4016 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4017 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4018 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4019 "<previous_module>"
                                        {
                                                
# 4020 "<previous_module>"
tmain_262: IF(0,262,tmain_263)__CSEQ_removeindent;
                                                
# 4021 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4022 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 4023 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                                ;
                                        }

                                        
# 4025 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 263);
                                        ;
                                        
# 4026 "<previous_module>"
tmain_263: IF(0,263,tmain_264)__CSEQ_removeindent;
                                        
# 4027 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4028 "<previous_module>"
tmain_264: IF(0,264,tmain_265)__CSEQ_removeindent;
                                        
# 4029 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4030 "<previous_module>"
tmain_265: IF(0,265,tmain_266)__CSEQ_removeindent;
                                        
# 4031 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4032 "<previous_module>"
tmain_266: IF(0,266,tmain_267)__CSEQ_removeindent;
                                        
# 4033 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4034 "<previous_module>"
tmain_267: IF(0,267,tmain_268)__CSEQ_removeindent;
                                        
# 4035 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4036 "<previous_module>"
;
                                        ;
                                        
# 4037 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4038 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4039 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4040 "<previous_module>"
                                        {

# 4041 "<previous_module>"
                                                {
                                                        
# 4042 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4043 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4044 "<previous_module>"
                                                        {
                                                                
# 4045 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4047 "<previous_module>"
;
                                                        
# 4048 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4049 "<previous_module>"
                                                        {
                                                                
# 4050 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4052 "<previous_module>"
;
                                                        
# 4053 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4054 "<previous_module>"
                                                        {
                                                                
# 4055 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4057 "<previous_module>"
;
                                                        
# 4058 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4059 "<previous_module>"
tmain_268: IF(0,268,tmain_269)__CSEQ_removeindent;
                                                        
# 4060 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 4061 "<previous_module>"
__exit_loop_46:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 269);

                                                        
# 4062 "<previous_module>"
;
                                                        ;
                                                        
# 4063 "<previous_module>"
__exit__exponential_backoff_5_18:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 269);

                                                        
# 4064 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4066 "<previous_module>"
;
                                                
# 4067 "<previous_module>"
tmain_269: IF(0,269,tmain_270)__CSEQ_removeindent;
                                                
# 4068 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4069 "<previous_module>"
tmain_270: IF(0,270,tmain_271)__CSEQ_removeindent;
                                                
# 4070 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 4072 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 271);
                                        ;
                                        
# 4073 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4074 "<previous_module>"
;
                                        ;
                                        
# 4075 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4076 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4077 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4078 "<previous_module>"
                                        {
                                                
# 4079 "<previous_module>"
goto __exit_loop_42;
                                                ;
                                        }

                                        
# 4081 "<previous_module>"
;
                                }
                                
# 4083 "<previous_module>"
;
                                
# 4084 "<previous_module>"
if (
# 4085 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4086 "<previous_module>"
                                {
                                        
# 4087 "<previous_module>"
goto __exit_loop_42;
                                        ;
                                }

                                
# 4089 "<previous_module>"
;

# 4090 "<previous_module>"
                                {
                                        
# 4091 "<previous_module>"
;
                                        ;
                                        
# 4092 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4093 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4094 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4095 "<previous_module>"
                                        {
                                                
# 4096 "<previous_module>"
tmain_271: IF(0,271,tmain_272)__CSEQ_removeindent;
                                                
# 4097 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4098 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 4099 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                                ;
                                        }

                                        
# 4101 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 272);
                                        ;
                                        
# 4102 "<previous_module>"
tmain_272: IF(0,272,tmain_273)__CSEQ_removeindent;
                                        
# 4103 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4104 "<previous_module>"
tmain_273: IF(0,273,tmain_274)__CSEQ_removeindent;
                                        
# 4105 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4106 "<previous_module>"
tmain_274: IF(0,274,tmain_275)__CSEQ_removeindent;
                                        
# 4107 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4108 "<previous_module>"
tmain_275: IF(0,275,tmain_276)__CSEQ_removeindent;
                                        
# 4109 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4110 "<previous_module>"
tmain_276: IF(0,276,tmain_277)__CSEQ_removeindent;
                                        
# 4111 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4112 "<previous_module>"
;
                                        ;
                                        
# 4113 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4114 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4115 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4116 "<previous_module>"
                                        {

# 4117 "<previous_module>"
                                                {
                                                        
# 4118 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4119 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4120 "<previous_module>"
                                                        {
                                                                
# 4121 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4123 "<previous_module>"
;
                                                        
# 4124 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4125 "<previous_module>"
                                                        {
                                                                
# 4126 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4128 "<previous_module>"
;
                                                        
# 4129 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4130 "<previous_module>"
                                                        {
                                                                
# 4131 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4133 "<previous_module>"
;
                                                        
# 4134 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4135 "<previous_module>"
tmain_277: IF(0,277,tmain_278)__CSEQ_removeindent;
                                                        
# 4136 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 4137 "<previous_module>"
__exit_loop_47:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 278);

                                                        
# 4138 "<previous_module>"
;
                                                        ;
                                                        
# 4139 "<previous_module>"
__exit__exponential_backoff_5_19:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 278);

                                                        
# 4140 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4142 "<previous_module>"
;
                                                
# 4143 "<previous_module>"
tmain_278: IF(0,278,tmain_279)__CSEQ_removeindent;
                                                
# 4144 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4145 "<previous_module>"
tmain_279: IF(0,279,tmain_280)__CSEQ_removeindent;
                                                
# 4146 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 4148 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 280);
                                        ;
                                        
# 4149 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4150 "<previous_module>"
;
                                        ;
                                        
# 4151 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4152 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4153 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4154 "<previous_module>"
                                        {
                                                
# 4155 "<previous_module>"
goto __exit_loop_42;
                                                ;
                                        }

                                        
# 4157 "<previous_module>"
;
                                }
                                
# 4159 "<previous_module>"
;
                                
# 4160 "<previous_module>"
tmain_280: IF(0,280,tmain_281)__CSEQ_removeindent;
                                
# 4161 "<previous_module>"
__CPROVER_assume(
# 4162 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                
# 4163 "<previous_module>"
__exit_loop_42:
                                __CPROVER_assume(__cs_pc_cs[0] >= 281);

                                
# 4164 "<previous_module>"
;
                                ;
                                
# 4165 "<previous_module>"
tmain_281: IF(0,281,tmain_282)__CSEQ_removeindent;
                                
# 4166 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                
# 4167 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
                                
# 4168 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                ;
                                
# 4169 "<previous_module>"
__exit__lfds711_stack_pop_2_3:
                                __CPROVER_assume(__cs_pc_cs[0] >= 282);

                                
# 4170 "<previous_module>"
;
                                ;
                        }
                        
# 4172 "<previous_module>"
;
                        
# 4173 "<previous_module>"
__cs_local_get_size_res = __cs_retval__lfds711_stack_pop_2;
                        
# 4174 "<previous_module>"
;
                        ;
                        
# 4175 "<previous_module>"
static _Bool __cs_local_get_size___cs_tmp_if_cond_22;
                        
# 4176 "<previous_module>"
__cs_local_get_size___cs_tmp_if_cond_22 = __cs_local_get_size_res == 0;
                        
# 4177 "<previous_module>"
if (__cs_local_get_size___cs_tmp_if_cond_22)

# 4178 "<previous_module>"
                        {
                                
# 4179 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 4181 "<previous_module>"
;
                        
# 4182 "<previous_module>"
__cs_local_get_size_actual_size = __cs_local_get_size_actual_size + 1;
                }
                
# 4184 "<previous_module>"
;
                
# 4185 "<previous_module>"
if (!(__cs_local_get_size_actual_size < 2))

# 4186 "<previous_module>"
                {
                        
# 4187 "<previous_module>"
goto __exit_loop_15;
                        ;
                }

                
# 4189 "<previous_module>"
;

# 4190 "<previous_module>"
                {
                        
# 4191 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_2;

# 4192 "<previous_module>"
                        {
                                
# 4193 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                
# 4194 "<previous_module>"
tmain_282: IF(0,282,tmain_283)__CSEQ_removeindent;
                                
# 4195 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = __cs_param_get_size_s;
                                
# 4196 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                
# 4197 "<previous_module>"
tmain_283: IF(0,283,tmain_284)__CSEQ_removeindent;
                                
# 4198 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_get_size_se;
                                
# 4199 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                
# 4200 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                
# 4201 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                
# 4202 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                
# 4203 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                
# 4204 "<previous_module>"
;
                                ;
                                
# 4205 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                
# 4206 "<previous_module>"
tmain_284: IF(0,284,tmain_285)__CSEQ_removeindent;
                                
# 4207 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                
# 4208 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 4209 "<previous_module>"
                                {
                                        
# 4210 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 4211 "<previous_module>"
tmain_285: IF(0,285,tmain_286)__CSEQ_removeindent;
                                        
# 4212 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 4213 "<previous_module>"
tmain_286: IF(0,286,tmain_287)__CSEQ_removeindent;
                                        
# 4214 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 4216 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 287);
                                ;
                                
# 4217 "<previous_module>"
;
                                ;
                                
# 4218 "<previous_module>"
;
                                ;
                                
# 4219 "<previous_module>"
;
                                ;
                                
# 4220 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                
# 4221 "<previous_module>"
tmain_287: IF(0,287,tmain_288)__CSEQ_removeindent;
                                
# 4222 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                
# 4223 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 4224 "<previous_module>"
                                {
                                        
# 4225 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                        
# 4226 "<previous_module>"
tmain_288: IF(0,288,tmain_289)__CSEQ_removeindent;
                                        
# 4227 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                        
# 4228 "<previous_module>"
tmain_289: IF(0,289,tmain_290)__CSEQ_removeindent;
                                        
# 4229 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                }

                                
# 4231 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 290);
                                ;
                                
# 4232 "<previous_module>"
;
                                ;
                                
# 4233 "<previous_module>"
;
                                ;
                                
# 4234 "<previous_module>"
tmain_290: IF(0,290,tmain_291)__CSEQ_removeindent;
                                
# 4235 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                
# 4236 "<previous_module>"
tmain_291: IF(0,291,tmain_292)__CSEQ_removeindent;
                                
# 4237 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                
# 4238 "<previous_module>"
tmain_292: IF(0,292,tmain_293)__CSEQ_removeindent;
                                
# 4239 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                
# 4240 "<previous_module>"
tmain_293: IF(0,293,tmain_294)__CSEQ_removeindent;
                                
# 4241 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                
# 4242 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                
# 4243 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                
# 4244 "<previous_module>"
;
                                ;
                                
# 4245 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                
# 4246 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 4247 "<previous_module>"
                                {
                                        
# 4248 "<previous_module>"
;
                                        ;
                                        
# 4249 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                        
# 4250 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4251 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 4252 "<previous_module>"
                                        {
                                                
# 4253 "<previous_module>"
tmain_294: IF(0,294,tmain_295)__CSEQ_removeindent;
                                                
# 4254 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4255 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 4256 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                                ;
                                        }

                                        
# 4258 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 295);
                                        ;
                                        
# 4259 "<previous_module>"
tmain_295: IF(0,295,tmain_296)__CSEQ_removeindent;
                                        
# 4260 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4261 "<previous_module>"
tmain_296: IF(0,296,tmain_297)__CSEQ_removeindent;
                                        
# 4262 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4263 "<previous_module>"
tmain_297: IF(0,297,tmain_298)__CSEQ_removeindent;
                                        
# 4264 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4265 "<previous_module>"
tmain_298: IF(0,298,tmain_299)__CSEQ_removeindent;
                                        
# 4266 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4267 "<previous_module>"
tmain_299: IF(0,299,tmain_300)__CSEQ_removeindent;
                                        
# 4268 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4269 "<previous_module>"
;
                                        ;
                                        
# 4270 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                        
# 4271 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4272 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 4273 "<previous_module>"
                                        {

# 4274 "<previous_module>"
                                                {
                                                        
# 4275 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4276 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4277 "<previous_module>"
                                                        {
                                                                
# 4278 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4280 "<previous_module>"
;
                                                        
# 4281 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4282 "<previous_module>"
                                                        {
                                                                
# 4283 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4285 "<previous_module>"
;
                                                        
# 4286 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4287 "<previous_module>"
                                                        {
                                                                
# 4288 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4290 "<previous_module>"
;
                                                        
# 4291 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4292 "<previous_module>"
tmain_300: IF(0,300,tmain_301)__CSEQ_removeindent;
                                                        
# 4293 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 4294 "<previous_module>"
__exit_loop_49:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 301);

                                                        
# 4295 "<previous_module>"
;
                                                        ;
                                                        
# 4296 "<previous_module>"
__exit__exponential_backoff_4_4:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 301);

                                                        
# 4297 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4299 "<previous_module>"
;
                                                
# 4300 "<previous_module>"
tmain_301: IF(0,301,tmain_302)__CSEQ_removeindent;
                                                
# 4301 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4302 "<previous_module>"
tmain_302: IF(0,302,tmain_303)__CSEQ_removeindent;
                                                
# 4303 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 4305 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 303);
                                        ;
                                        
# 4306 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4307 "<previous_module>"
;
                                        ;
                                        
# 4308 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                        
# 4309 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4310 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 4311 "<previous_module>"
                                        {
                                                
# 4312 "<previous_module>"
goto __exit_loop_48;
                                                ;
                                        }

                                        
# 4314 "<previous_module>"
;
                                }
                                
# 4316 "<previous_module>"
;
                                
# 4317 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                
# 4318 "<previous_module>"
tmain_303: IF(0,303,tmain_304)__CSEQ_removeindent;
                                
# 4319 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                
# 4320 "<previous_module>"
__exit_loop_48:
                                __CPROVER_assume(__cs_pc_cs[0] >= 304);

                                
# 4321 "<previous_module>"
;
                                ;
                                
# 4322 "<previous_module>"
if (
# 4323 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4324 "<previous_module>"
                                {
                                        
# 4325 "<previous_module>"
goto __exit_loop_50;
                                        ;
                                }

                                
# 4327 "<previous_module>"
;

# 4328 "<previous_module>"
                                {
                                        
# 4329 "<previous_module>"
;
                                        ;
                                        
# 4330 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4331 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4332 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4333 "<previous_module>"
                                        {
                                                
# 4334 "<previous_module>"
tmain_304: IF(0,304,tmain_305)__CSEQ_removeindent;
                                                
# 4335 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4336 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 4337 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                                ;
                                        }

                                        
# 4339 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 305);
                                        ;
                                        
# 4340 "<previous_module>"
tmain_305: IF(0,305,tmain_306)__CSEQ_removeindent;
                                        
# 4341 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4342 "<previous_module>"
tmain_306: IF(0,306,tmain_307)__CSEQ_removeindent;
                                        
# 4343 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4344 "<previous_module>"
tmain_307: IF(0,307,tmain_308)__CSEQ_removeindent;
                                        
# 4345 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4346 "<previous_module>"
tmain_308: IF(0,308,tmain_309)__CSEQ_removeindent;
                                        
# 4347 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4348 "<previous_module>"
tmain_309: IF(0,309,tmain_310)__CSEQ_removeindent;
                                        
# 4349 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4350 "<previous_module>"
;
                                        ;
                                        
# 4351 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4352 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4353 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4354 "<previous_module>"
                                        {

# 4355 "<previous_module>"
                                                {
                                                        
# 4356 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4357 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4358 "<previous_module>"
                                                        {
                                                                
# 4359 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4361 "<previous_module>"
;
                                                        
# 4362 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4363 "<previous_module>"
                                                        {
                                                                
# 4364 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4366 "<previous_module>"
;
                                                        
# 4367 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4368 "<previous_module>"
                                                        {
                                                                
# 4369 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4371 "<previous_module>"
;
                                                        
# 4372 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4373 "<previous_module>"
tmain_310: IF(0,310,tmain_311)__CSEQ_removeindent;
                                                        
# 4374 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 4375 "<previous_module>"
__exit_loop_51:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 311);

                                                        
# 4376 "<previous_module>"
;
                                                        ;
                                                        
# 4377 "<previous_module>"
__exit__exponential_backoff_5_20:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 311);

                                                        
# 4378 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4380 "<previous_module>"
;
                                                
# 4381 "<previous_module>"
tmain_311: IF(0,311,tmain_312)__CSEQ_removeindent;
                                                
# 4382 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4383 "<previous_module>"
tmain_312: IF(0,312,tmain_313)__CSEQ_removeindent;
                                                
# 4384 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 4386 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 313);
                                        ;
                                        
# 4387 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4388 "<previous_module>"
;
                                        ;
                                        
# 4389 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4390 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4391 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4392 "<previous_module>"
                                        {
                                                
# 4393 "<previous_module>"
goto __exit_loop_50;
                                                ;
                                        }

                                        
# 4395 "<previous_module>"
;
                                }
                                
# 4397 "<previous_module>"
;
                                
# 4398 "<previous_module>"
if (
# 4399 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4400 "<previous_module>"
                                {
                                        
# 4401 "<previous_module>"
goto __exit_loop_50;
                                        ;
                                }

                                
# 4403 "<previous_module>"
;

# 4404 "<previous_module>"
                                {
                                        
# 4405 "<previous_module>"
;
                                        ;
                                        
# 4406 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4407 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4408 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4409 "<previous_module>"
                                        {
                                                
# 4410 "<previous_module>"
tmain_313: IF(0,313,tmain_314)__CSEQ_removeindent;
                                                
# 4411 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4412 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 4413 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                                ;
                                        }

                                        
# 4415 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 314);
                                        ;
                                        
# 4416 "<previous_module>"
tmain_314: IF(0,314,tmain_315)__CSEQ_removeindent;
                                        
# 4417 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4418 "<previous_module>"
tmain_315: IF(0,315,tmain_316)__CSEQ_removeindent;
                                        
# 4419 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4420 "<previous_module>"
tmain_316: IF(0,316,tmain_317)__CSEQ_removeindent;
                                        
# 4421 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4422 "<previous_module>"
tmain_317: IF(0,317,tmain_318)__CSEQ_removeindent;
                                        
# 4423 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4424 "<previous_module>"
tmain_318: IF(0,318,tmain_319)__CSEQ_removeindent;
                                        
# 4425 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4426 "<previous_module>"
;
                                        ;
                                        
# 4427 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4428 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4429 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4430 "<previous_module>"
                                        {

# 4431 "<previous_module>"
                                                {
                                                        
# 4432 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4433 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4434 "<previous_module>"
                                                        {
                                                                
# 4435 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4437 "<previous_module>"
;
                                                        
# 4438 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4439 "<previous_module>"
                                                        {
                                                                
# 4440 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4442 "<previous_module>"
;
                                                        
# 4443 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4444 "<previous_module>"
                                                        {
                                                                
# 4445 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4447 "<previous_module>"
;
                                                        
# 4448 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4449 "<previous_module>"
tmain_319: IF(0,319,tmain_320)__CSEQ_removeindent;
                                                        
# 4450 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 4451 "<previous_module>"
__exit_loop_52:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 320);

                                                        
# 4452 "<previous_module>"
;
                                                        ;
                                                        
# 4453 "<previous_module>"
__exit__exponential_backoff_5_21:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 320);

                                                        
# 4454 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4456 "<previous_module>"
;
                                                
# 4457 "<previous_module>"
tmain_320: IF(0,320,tmain_321)__CSEQ_removeindent;
                                                
# 4458 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4459 "<previous_module>"
tmain_321: IF(0,321,tmain_322)__CSEQ_removeindent;
                                                
# 4460 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 4462 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 322);
                                        ;
                                        
# 4463 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4464 "<previous_module>"
;
                                        ;
                                        
# 4465 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4466 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4467 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4468 "<previous_module>"
                                        {
                                                
# 4469 "<previous_module>"
goto __exit_loop_50;
                                                ;
                                        }

                                        
# 4471 "<previous_module>"
;
                                }
                                
# 4473 "<previous_module>"
;
                                
# 4474 "<previous_module>"
if (
# 4475 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4476 "<previous_module>"
                                {
                                        
# 4477 "<previous_module>"
goto __exit_loop_50;
                                        ;
                                }

                                
# 4479 "<previous_module>"
;

# 4480 "<previous_module>"
                                {
                                        
# 4481 "<previous_module>"
;
                                        ;
                                        
# 4482 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4483 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4484 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4485 "<previous_module>"
                                        {
                                                
# 4486 "<previous_module>"
tmain_322: IF(0,322,tmain_323)__CSEQ_removeindent;
                                                
# 4487 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4488 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 4489 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                                ;
                                        }

                                        
# 4491 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 323);
                                        ;
                                        
# 4492 "<previous_module>"
tmain_323: IF(0,323,tmain_324)__CSEQ_removeindent;
                                        
# 4493 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4494 "<previous_module>"
tmain_324: IF(0,324,tmain_325)__CSEQ_removeindent;
                                        
# 4495 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4496 "<previous_module>"
tmain_325: IF(0,325,tmain_326)__CSEQ_removeindent;
                                        
# 4497 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4498 "<previous_module>"
tmain_326: IF(0,326,tmain_327)__CSEQ_removeindent;
                                        
# 4499 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4500 "<previous_module>"
tmain_327: IF(0,327,tmain_328)__CSEQ_removeindent;
                                        
# 4501 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4502 "<previous_module>"
;
                                        ;
                                        
# 4503 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4504 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4505 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4506 "<previous_module>"
                                        {

# 4507 "<previous_module>"
                                                {
                                                        
# 4508 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4509 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4510 "<previous_module>"
                                                        {
                                                                
# 4511 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4513 "<previous_module>"
;
                                                        
# 4514 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4515 "<previous_module>"
                                                        {
                                                                
# 4516 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4518 "<previous_module>"
;
                                                        
# 4519 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4520 "<previous_module>"
                                                        {
                                                                
# 4521 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4523 "<previous_module>"
;
                                                        
# 4524 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4525 "<previous_module>"
tmain_328: IF(0,328,tmain_329)__CSEQ_removeindent;
                                                        
# 4526 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 4527 "<previous_module>"
__exit_loop_53:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 329);

                                                        
# 4528 "<previous_module>"
;
                                                        ;
                                                        
# 4529 "<previous_module>"
__exit__exponential_backoff_5_22:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 329);

                                                        
# 4530 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4532 "<previous_module>"
;
                                                
# 4533 "<previous_module>"
tmain_329: IF(0,329,tmain_330)__CSEQ_removeindent;
                                                
# 4534 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4535 "<previous_module>"
tmain_330: IF(0,330,tmain_331)__CSEQ_removeindent;
                                                
# 4536 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 4538 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 331);
                                        ;
                                        
# 4539 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4540 "<previous_module>"
;
                                        ;
                                        
# 4541 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4542 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4543 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4544 "<previous_module>"
                                        {
                                                
# 4545 "<previous_module>"
goto __exit_loop_50;
                                                ;
                                        }

                                        
# 4547 "<previous_module>"
;
                                }
                                
# 4549 "<previous_module>"
;
                                
# 4550 "<previous_module>"
if (
# 4551 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4552 "<previous_module>"
                                {
                                        
# 4553 "<previous_module>"
goto __exit_loop_50;
                                        ;
                                }

                                
# 4555 "<previous_module>"
;

# 4556 "<previous_module>"
                                {
                                        
# 4557 "<previous_module>"
;
                                        ;
                                        
# 4558 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4559 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4560 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4561 "<previous_module>"
                                        {
                                                
# 4562 "<previous_module>"
tmain_331: IF(0,331,tmain_332)__CSEQ_removeindent;
                                                
# 4563 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4564 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 4565 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                                ;
                                        }

                                        
# 4567 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 332);
                                        ;
                                        
# 4568 "<previous_module>"
tmain_332: IF(0,332,tmain_333)__CSEQ_removeindent;
                                        
# 4569 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4570 "<previous_module>"
tmain_333: IF(0,333,tmain_334)__CSEQ_removeindent;
                                        
# 4571 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4572 "<previous_module>"
tmain_334: IF(0,334,tmain_335)__CSEQ_removeindent;
                                        
# 4573 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4574 "<previous_module>"
tmain_335: IF(0,335,tmain_336)__CSEQ_removeindent;
                                        
# 4575 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4576 "<previous_module>"
tmain_336: IF(0,336,tmain_337)__CSEQ_removeindent;
                                        
# 4577 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4578 "<previous_module>"
;
                                        ;
                                        
# 4579 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4580 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4581 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4582 "<previous_module>"
                                        {

# 4583 "<previous_module>"
                                                {
                                                        
# 4584 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4585 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4586 "<previous_module>"
                                                        {
                                                                
# 4587 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4589 "<previous_module>"
;
                                                        
# 4590 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4591 "<previous_module>"
                                                        {
                                                                
# 4592 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4594 "<previous_module>"
;
                                                        
# 4595 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4596 "<previous_module>"
                                                        {
                                                                
# 4597 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4599 "<previous_module>"
;
                                                        
# 4600 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4601 "<previous_module>"
tmain_337: IF(0,337,tmain_338)__CSEQ_removeindent;
                                                        
# 4602 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 4603 "<previous_module>"
__exit_loop_54:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 338);

                                                        
# 4604 "<previous_module>"
;
                                                        ;
                                                        
# 4605 "<previous_module>"
__exit__exponential_backoff_5_23:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 338);

                                                        
# 4606 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4608 "<previous_module>"
;
                                                
# 4609 "<previous_module>"
tmain_338: IF(0,338,tmain_339)__CSEQ_removeindent;
                                                
# 4610 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4611 "<previous_module>"
tmain_339: IF(0,339,tmain_340)__CSEQ_removeindent;
                                                
# 4612 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 4614 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 340);
                                        ;
                                        
# 4615 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                        
# 4616 "<previous_module>"
;
                                        ;
                                        
# 4617 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                        
# 4618 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                        
# 4619 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4620 "<previous_module>"
                                        {
                                                
# 4621 "<previous_module>"
goto __exit_loop_50;
                                                ;
                                        }

                                        
# 4623 "<previous_module>"
;
                                }
                                
# 4625 "<previous_module>"
;
                                
# 4626 "<previous_module>"
if (
# 4627 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4628 "<previous_module>"
                                {
                                        
# 4629 "<previous_module>"
goto __exit_loop_50;
                                        ;
                                }

                                
# 4631 "<previous_module>"
;

# 4632 "<previous_module>"
                                {
                                        
# 4633 "<previous_module>"
;
                                        ;
                                        
# 4634 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                        
# 4635 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                        
# 4636 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4637 "<previous_module>"
                                        {
                                                
# 4638 "<previous_module>"
tmain_340: IF(0,340,tmain_341)__CSEQ_removeindent;
                                                
# 4639 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                
# 4640 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                
# 4641 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                                ;
                                        }

                                        
# 4643 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 341);
                                        ;
                                        
# 4644 "<previous_module>"
tmain_341: IF(0,341,tmain_342)__CSEQ_removeindent;
                                        
# 4645 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                        
# 4646 "<previous_module>"
tmain_342: IF(0,342,tmain_343)__CSEQ_removeindent;
                                        
# 4647 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                        
# 4648 "<previous_module>"
tmain_343: IF(0,343,tmain_344)__CSEQ_removeindent;
                                        
# 4649 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4650 "<previous_module>"
tmain_344: IF(0,344,tmain_345)__CSEQ_removeindent;
                                        
# 4651 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                        
# 4652 "<previous_module>"
tmain_345: IF(0,345,tmain_346)__CSEQ_removeindent;
                                        
# 4653 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4654 "<previous_module>"
;
                                        ;
                                        
# 4655 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                        
# 4656 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                        
# 4657 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4658 "<previous_module>"
                                        {

# 4659 "<previous_module>"
                                                {
                                                        
# 4660 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4661 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

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
tmain_346: IF(0,346,tmain_347)__CSEQ_removeindent;
                                                        
# 4678 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 4679 "<previous_module>"
__exit_loop_55:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 347);

                                                        
# 4680 "<previous_module>"
;
                                                        ;
                                                        
# 4681 "<previous_module>"
__exit__exponential_backoff_5_24:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 347);

                                                        
# 4682 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4684 "<previous_module>"
;
                                                
# 4685 "<previous_module>"
tmain_347: IF(0,347,tmain_348)__CSEQ_removeindent;
                                                
# 4686 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4687 "<previous_module>"
tmain_348: IF(0,348,tmain_349)__CSEQ_removeindent;
                                                
# 4688 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        }

                                        
# 4690 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 349);
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
goto __exit_loop_50;
                                                ;
                                        }

                                        
# 4699 "<previous_module>"
;
                                }
                                
# 4701 "<previous_module>"
;
                                
# 4702 "<previous_module>"
tmain_349: IF(0,349,tmain_350)__CSEQ_removeindent;
                                
# 4703 "<previous_module>"
__CPROVER_assume(
# 4704 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                
# 4705 "<previous_module>"
__exit_loop_50:
                                __CPROVER_assume(__cs_pc_cs[0] >= 350);

                                
# 4706 "<previous_module>"
;
                                ;
                                
# 4707 "<previous_module>"
tmain_350: IF(0,350,tmain_351)__CSEQ_removeindent;
                                
# 4708 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                
# 4709 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
                                
# 4710 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                ;
                                
# 4711 "<previous_module>"
__exit__lfds711_stack_pop_2_4:
                                __CPROVER_assume(__cs_pc_cs[0] >= 351);

                                
# 4712 "<previous_module>"
;
                                ;
                        }
                        
# 4714 "<previous_module>"
;
                        
# 4715 "<previous_module>"
__cs_local_get_size_res = __cs_retval__lfds711_stack_pop_2;
                        
# 4716 "<previous_module>"
;
                        ;
                        
# 4717 "<previous_module>"
static _Bool __cs_local_get_size___cs_tmp_if_cond_22;
                        
# 4718 "<previous_module>"
__cs_local_get_size___cs_tmp_if_cond_22 = __cs_local_get_size_res == 0;
                        
# 4719 "<previous_module>"
if (__cs_local_get_size___cs_tmp_if_cond_22)

# 4720 "<previous_module>"
                        {
                                
# 4721 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 4723 "<previous_module>"
;
                        
# 4724 "<previous_module>"
__cs_local_get_size_actual_size = __cs_local_get_size_actual_size + 1;
                }
                
# 4726 "<previous_module>"
;
                
# 4727 "<previous_module>"
tmain_351: IF(0,351,tmain_352)__CSEQ_removeindent;
                
# 4728 "<previous_module>"
__CPROVER_assume(!(__cs_local_get_size_actual_size < 2));
                
# 4729 "<previous_module>"
__exit_loop_15:
                __CPROVER_assume(__cs_pc_cs[0] >= 352);

                
# 4730 "<previous_module>"
;
                ;
                
# 4731 "<previous_module>"
static int __cs_local_get_size_i;
                
# 4732 "<previous_module>"
__cs_local_get_size_i = 0;
                
# 4733 "<previous_module>"
if (!(__cs_local_get_size_i < __cs_local_get_size_actual_size))

# 4734 "<previous_module>"
                {
                        
# 4735 "<previous_module>"
goto __exit_loop_56;
                        ;
                }

                
# 4737 "<previous_module>"
;

# 4738 "<previous_module>"
                {

# 4739 "<previous_module>"
                        {
                                
# 4740 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                                
# 4741 "<previous_module>"
tmain_352: IF(0,352,tmain_353)__CSEQ_removeindent;
                                
# 4742 "<previous_module>"
__cs_param_lfds711_stack_push_ss = __cs_param_get_size_s;
                                
# 4743 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                                
# 4744 "<previous_module>"
tmain_353: IF(0,353,tmain_354)__CSEQ_removeindent;
                                
# 4745 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_get_size_datas[__cs_local_get_size_i]).se;
                                
# 4746 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                                
# 4747 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                                
# 4748 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                                
# 4749 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                                
# 4750 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                                
# 4751 "<previous_module>"
;
                                ;
                                
# 4752 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                                
# 4753 "<previous_module>"
tmain_354: IF(0,354,tmain_355)__CSEQ_removeindent;
                                
# 4754 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                                
# 4755 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 4756 "<previous_module>"
                                {
                                        
# 4757 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 4758 "<previous_module>"
tmain_355: IF(0,355,tmain_356)__CSEQ_removeindent;
                                        
# 4759 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 4760 "<previous_module>"
tmain_356: IF(0,356,tmain_357)__CSEQ_removeindent;
                                        
# 4761 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 4763 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 357);
                                ;
                                
# 4764 "<previous_module>"
;
                                ;
                                
# 4765 "<previous_module>"
;
                                ;
                                
# 4766 "<previous_module>"
;
                                ;
                                
# 4767 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                                
# 4768 "<previous_module>"
tmain_357: IF(0,357,tmain_358)__CSEQ_removeindent;
                                
# 4769 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                                
# 4770 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 4771 "<previous_module>"
                                {
                                        
# 4772 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 4773 "<previous_module>"
tmain_358: IF(0,358,tmain_359)__CSEQ_removeindent;
                                        
# 4774 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 4775 "<previous_module>"
tmain_359: IF(0,359,tmain_360)__CSEQ_removeindent;
                                        
# 4776 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 4778 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 360);
                                ;
                                
# 4779 "<previous_module>"
;
                                ;
                                
# 4780 "<previous_module>"
;
                                ;
                                
# 4781 "<previous_module>"
tmain_360: IF(0,360,tmain_361)__CSEQ_removeindent;
                                
# 4782 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                                
# 4783 "<previous_module>"
tmain_361: IF(0,361,tmain_362)__CSEQ_removeindent;
                                
# 4784 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                                
# 4785 "<previous_module>"
tmain_362: IF(0,362,tmain_363)__CSEQ_removeindent;
                                
# 4786 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                                
# 4787 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                                
# 4788 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                                
# 4789 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                                
# 4790 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 4791 "<previous_module>"
                                {
                                        
# 4792 "<previous_module>"
goto __exit_loop_57;
                                        ;
                                }

                                
# 4794 "<previous_module>"
;

# 4795 "<previous_module>"
                                {
                                        
# 4796 "<previous_module>"
tmain_363: IF(0,363,tmain_364)__CSEQ_removeindent;
                                        
# 4797 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4798 "<previous_module>"
tmain_364: IF(0,364,tmain_365)__CSEQ_removeindent;
                                        
# 4799 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 4800 "<previous_module>"
tmain_365: IF(0,365,tmain_366)__CSEQ_removeindent;
                                        
# 4801 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4802 "<previous_module>"
tmain_366: IF(0,366,tmain_367)__CSEQ_removeindent;
                                        
# 4803 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 4804 "<previous_module>"
tmain_367: IF(0,367,tmain_368)__CSEQ_removeindent;
                                        
# 4805 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4806 "<previous_module>"
tmain_368: IF(0,368,tmain_369)__CSEQ_removeindent;
                                        
# 4807 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 4808 "<previous_module>"
tmain_369: IF(0,369,tmain_370)__CSEQ_removeindent;
                                        
# 4809 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4810 "<previous_module>"
;
                                        ;
                                        
# 4811 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 4812 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 4813 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 4814 "<previous_module>"
                                        {

# 4815 "<previous_module>"
                                                {
                                                        
# 4816 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4817 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4818 "<previous_module>"
                                                        {
                                                                
# 4819 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4821 "<previous_module>"
;
                                                        
# 4822 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4823 "<previous_module>"
                                                        {
                                                                
# 4824 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4826 "<previous_module>"
;
                                                        
# 4827 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4828 "<previous_module>"
                                                        {
                                                                
# 4829 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4831 "<previous_module>"
;
                                                        
# 4832 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4833 "<previous_module>"
tmain_370: IF(0,370,tmain_371)__CSEQ_removeindent;
                                                        
# 4834 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 4835 "<previous_module>"
__exit_loop_58:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 371);

                                                        
# 4836 "<previous_module>"
;
                                                        ;
                                                        
# 4837 "<previous_module>"
__exit__exponential_backoff_6_0:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 371);

                                                        
# 4838 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4840 "<previous_module>"
;
                                        }

                                        
# 4842 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 371);
                                        ;
                                        
# 4843 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 4844 "<previous_module>"
;
                                        ;
                                        
# 4845 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 4846 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 4847 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 4848 "<previous_module>"
                                        {
                                                
# 4849 "<previous_module>"
goto __exit_loop_57;
                                                ;
                                        }

                                        
# 4851 "<previous_module>"
;
                                }
                                
# 4853 "<previous_module>"
;
                                
# 4854 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 4855 "<previous_module>"
                                {
                                        
# 4856 "<previous_module>"
goto __exit_loop_57;
                                        ;
                                }

                                
# 4858 "<previous_module>"
;

# 4859 "<previous_module>"
                                {
                                        
# 4860 "<previous_module>"
tmain_371: IF(0,371,tmain_372)__CSEQ_removeindent;
                                        
# 4861 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4862 "<previous_module>"
tmain_372: IF(0,372,tmain_373)__CSEQ_removeindent;
                                        
# 4863 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 4864 "<previous_module>"
tmain_373: IF(0,373,tmain_374)__CSEQ_removeindent;
                                        
# 4865 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4866 "<previous_module>"
tmain_374: IF(0,374,tmain_375)__CSEQ_removeindent;
                                        
# 4867 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 4868 "<previous_module>"
tmain_375: IF(0,375,tmain_376)__CSEQ_removeindent;
                                        
# 4869 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4870 "<previous_module>"
tmain_376: IF(0,376,tmain_377)__CSEQ_removeindent;
                                        
# 4871 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 4872 "<previous_module>"
tmain_377: IF(0,377,tmain_378)__CSEQ_removeindent;
                                        
# 4873 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4874 "<previous_module>"
;
                                        ;
                                        
# 4875 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 4876 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 4877 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 4878 "<previous_module>"
                                        {

# 4879 "<previous_module>"
                                                {
                                                        
# 4880 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4881 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4882 "<previous_module>"
                                                        {
                                                                
# 4883 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4885 "<previous_module>"
;
                                                        
# 4886 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4887 "<previous_module>"
                                                        {
                                                                
# 4888 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4890 "<previous_module>"
;
                                                        
# 4891 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4892 "<previous_module>"
                                                        {
                                                                
# 4893 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4895 "<previous_module>"
;
                                                        
# 4896 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4897 "<previous_module>"
tmain_378: IF(0,378,tmain_379)__CSEQ_removeindent;
                                                        
# 4898 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 4899 "<previous_module>"
__exit_loop_59:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 379);

                                                        
# 4900 "<previous_module>"
;
                                                        ;
                                                        
# 4901 "<previous_module>"
__exit__exponential_backoff_6_1:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 379);

                                                        
# 4902 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4904 "<previous_module>"
;
                                        }

                                        
# 4906 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 379);
                                        ;
                                        
# 4907 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 4908 "<previous_module>"
;
                                        ;
                                        
# 4909 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 4910 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 4911 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 4912 "<previous_module>"
                                        {
                                                
# 4913 "<previous_module>"
goto __exit_loop_57;
                                                ;
                                        }

                                        
# 4915 "<previous_module>"
;
                                }
                                
# 4917 "<previous_module>"
;
                                
# 4918 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 4919 "<previous_module>"
                                {
                                        
# 4920 "<previous_module>"
goto __exit_loop_57;
                                        ;
                                }

                                
# 4922 "<previous_module>"
;

# 4923 "<previous_module>"
                                {
                                        
# 4924 "<previous_module>"
tmain_379: IF(0,379,tmain_380)__CSEQ_removeindent;
                                        
# 4925 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4926 "<previous_module>"
tmain_380: IF(0,380,tmain_381)__CSEQ_removeindent;
                                        
# 4927 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 4928 "<previous_module>"
tmain_381: IF(0,381,tmain_382)__CSEQ_removeindent;
                                        
# 4929 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4930 "<previous_module>"
tmain_382: IF(0,382,tmain_383)__CSEQ_removeindent;
                                        
# 4931 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 4932 "<previous_module>"
tmain_383: IF(0,383,tmain_384)__CSEQ_removeindent;
                                        
# 4933 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4934 "<previous_module>"
tmain_384: IF(0,384,tmain_385)__CSEQ_removeindent;
                                        
# 4935 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 4936 "<previous_module>"
tmain_385: IF(0,385,tmain_386)__CSEQ_removeindent;
                                        
# 4937 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4938 "<previous_module>"
;
                                        ;
                                        
# 4939 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 4940 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 4941 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 4942 "<previous_module>"
                                        {

# 4943 "<previous_module>"
                                                {
                                                        
# 4944 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 4945 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4946 "<previous_module>"
                                                        {
                                                                
# 4947 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4949 "<previous_module>"
;
                                                        
# 4950 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4951 "<previous_module>"
                                                        {
                                                                
# 4952 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4954 "<previous_module>"
;
                                                        
# 4955 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4956 "<previous_module>"
                                                        {
                                                                
# 4957 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4959 "<previous_module>"
;
                                                        
# 4960 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 4961 "<previous_module>"
tmain_386: IF(0,386,tmain_387)__CSEQ_removeindent;
                                                        
# 4962 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 4963 "<previous_module>"
__exit_loop_60:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 387);

                                                        
# 4964 "<previous_module>"
;
                                                        ;
                                                        
# 4965 "<previous_module>"
__exit__exponential_backoff_6_2:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 387);

                                                        
# 4966 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 4968 "<previous_module>"
;
                                        }

                                        
# 4970 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 387);
                                        ;
                                        
# 4971 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 4972 "<previous_module>"
;
                                        ;
                                        
# 4973 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 4974 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 4975 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 4976 "<previous_module>"
                                        {
                                                
# 4977 "<previous_module>"
goto __exit_loop_57;
                                                ;
                                        }

                                        
# 4979 "<previous_module>"
;
                                }
                                
# 4981 "<previous_module>"
;
                                
# 4982 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 4983 "<previous_module>"
                                {
                                        
# 4984 "<previous_module>"
goto __exit_loop_57;
                                        ;
                                }

                                
# 4986 "<previous_module>"
;

# 4987 "<previous_module>"
                                {
                                        
# 4988 "<previous_module>"
tmain_387: IF(0,387,tmain_388)__CSEQ_removeindent;
                                        
# 4989 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4990 "<previous_module>"
tmain_388: IF(0,388,tmain_389)__CSEQ_removeindent;
                                        
# 4991 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 4992 "<previous_module>"
tmain_389: IF(0,389,tmain_390)__CSEQ_removeindent;
                                        
# 4993 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4994 "<previous_module>"
tmain_390: IF(0,390,tmain_391)__CSEQ_removeindent;
                                        
# 4995 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 4996 "<previous_module>"
tmain_391: IF(0,391,tmain_392)__CSEQ_removeindent;
                                        
# 4997 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4998 "<previous_module>"
tmain_392: IF(0,392,tmain_393)__CSEQ_removeindent;
                                        
# 4999 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 5000 "<previous_module>"
tmain_393: IF(0,393,tmain_394)__CSEQ_removeindent;
                                        
# 5001 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5002 "<previous_module>"
;
                                        ;
                                        
# 5003 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 5004 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 5005 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 5006 "<previous_module>"
                                        {

# 5007 "<previous_module>"
                                                {
                                                        
# 5008 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5009 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5010 "<previous_module>"
                                                        {
                                                                
# 5011 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5013 "<previous_module>"
;
                                                        
# 5014 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5015 "<previous_module>"
                                                        {
                                                                
# 5016 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5018 "<previous_module>"
;
                                                        
# 5019 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5020 "<previous_module>"
                                                        {
                                                                
# 5021 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5023 "<previous_module>"
;
                                                        
# 5024 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5025 "<previous_module>"
tmain_394: IF(0,394,tmain_395)__CSEQ_removeindent;
                                                        
# 5026 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 5027 "<previous_module>"
__exit_loop_61:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 395);

                                                        
# 5028 "<previous_module>"
;
                                                        ;
                                                        
# 5029 "<previous_module>"
__exit__exponential_backoff_6_3:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 395);

                                                        
# 5030 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5032 "<previous_module>"
;
                                        }

                                        
# 5034 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 395);
                                        ;
                                        
# 5035 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 5036 "<previous_module>"
;
                                        ;
                                        
# 5037 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 5038 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 5039 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 5040 "<previous_module>"
                                        {
                                                
# 5041 "<previous_module>"
goto __exit_loop_57;
                                                ;
                                        }

                                        
# 5043 "<previous_module>"
;
                                }
                                
# 5045 "<previous_module>"
;
                                
# 5046 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 5047 "<previous_module>"
                                {
                                        
# 5048 "<previous_module>"
goto __exit_loop_57;
                                        ;
                                }

                                
# 5050 "<previous_module>"
;

# 5051 "<previous_module>"
                                {
                                        
# 5052 "<previous_module>"
tmain_395: IF(0,395,tmain_396)__CSEQ_removeindent;
                                        
# 5053 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5054 "<previous_module>"
tmain_396: IF(0,396,tmain_397)__CSEQ_removeindent;
                                        
# 5055 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 5056 "<previous_module>"
tmain_397: IF(0,397,tmain_398)__CSEQ_removeindent;
                                        
# 5057 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5058 "<previous_module>"
tmain_398: IF(0,398,tmain_399)__CSEQ_removeindent;
                                        
# 5059 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 5060 "<previous_module>"
tmain_399: IF(0,399,tmain_400)__CSEQ_removeindent;
                                        
# 5061 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5062 "<previous_module>"
tmain_400: IF(0,400,tmain_401)__CSEQ_removeindent;
                                        
# 5063 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 5064 "<previous_module>"
tmain_401: IF(0,401,tmain_402)__CSEQ_removeindent;
                                        
# 5065 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5066 "<previous_module>"
;
                                        ;
                                        
# 5067 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 5068 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 5069 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 5070 "<previous_module>"
                                        {

# 5071 "<previous_module>"
                                                {
                                                        
# 5072 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5073 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5074 "<previous_module>"
                                                        {
                                                                
# 5075 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5077 "<previous_module>"
;
                                                        
# 5078 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5079 "<previous_module>"
                                                        {
                                                                
# 5080 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5082 "<previous_module>"
;
                                                        
# 5083 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5084 "<previous_module>"
                                                        {
                                                                
# 5085 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5087 "<previous_module>"
;
                                                        
# 5088 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5089 "<previous_module>"
tmain_402: IF(0,402,tmain_403)__CSEQ_removeindent;
                                                        
# 5090 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 5091 "<previous_module>"
__exit_loop_62:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 403);

                                                        
# 5092 "<previous_module>"
;
                                                        ;
                                                        
# 5093 "<previous_module>"
__exit__exponential_backoff_6_4:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 403);

                                                        
# 5094 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5096 "<previous_module>"
;
                                        }

                                        
# 5098 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 403);
                                        ;
                                        
# 5099 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 5100 "<previous_module>"
;
                                        ;
                                        
# 5101 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 5102 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 5103 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 5104 "<previous_module>"
                                        {
                                                
# 5105 "<previous_module>"
goto __exit_loop_57;
                                                ;
                                        }

                                        
# 5107 "<previous_module>"
;
                                }
                                
# 5109 "<previous_module>"
;
                                
# 5110 "<previous_module>"
tmain_403: IF(0,403,tmain_404)__CSEQ_removeindent;
                                
# 5111 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                                
# 5112 "<previous_module>"
__exit_loop_57:
                                __CPROVER_assume(__cs_pc_cs[0] >= 404);

                                
# 5113 "<previous_module>"
;
                                ;
                                
# 5114 "<previous_module>"
goto __exit__lfds711_stack_push_2_0;
                                ;
                                
# 5115 "<previous_module>"
__exit__lfds711_stack_push_2_0:
                                __CPROVER_assume(__cs_pc_cs[0] >= 404);

                                
# 5116 "<previous_module>"
;
                                ;
                        }
                        
# 5118 "<previous_module>"
;
                        
# 5119 "<previous_module>"
__cs_local_get_size_i++;
                }
                
# 5121 "<previous_module>"
;
                
# 5122 "<previous_module>"
if (!(__cs_local_get_size_i < __cs_local_get_size_actual_size))

# 5123 "<previous_module>"
                {
                        
# 5124 "<previous_module>"
goto __exit_loop_56;
                        ;
                }

                
# 5126 "<previous_module>"
;

# 5127 "<previous_module>"
                {

# 5128 "<previous_module>"
                        {
                                
# 5129 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                                
# 5130 "<previous_module>"
tmain_404: IF(0,404,tmain_405)__CSEQ_removeindent;
                                
# 5131 "<previous_module>"
__cs_param_lfds711_stack_push_ss = __cs_param_get_size_s;
                                
# 5132 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                                
# 5133 "<previous_module>"
tmain_405: IF(0,405,tmain_406)__CSEQ_removeindent;
                                
# 5134 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_get_size_datas[__cs_local_get_size_i]).se;
                                
# 5135 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                                
# 5136 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                                
# 5137 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                                
# 5138 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                                
# 5139 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                                
# 5140 "<previous_module>"
;
                                ;
                                
# 5141 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                                
# 5142 "<previous_module>"
tmain_406: IF(0,406,tmain_407)__CSEQ_removeindent;
                                
# 5143 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                                
# 5144 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 5145 "<previous_module>"
                                {
                                        
# 5146 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 5147 "<previous_module>"
tmain_407: IF(0,407,tmain_408)__CSEQ_removeindent;
                                        
# 5148 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 5149 "<previous_module>"
tmain_408: IF(0,408,tmain_409)__CSEQ_removeindent;
                                        
# 5150 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 5152 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 409);
                                ;
                                
# 5153 "<previous_module>"
;
                                ;
                                
# 5154 "<previous_module>"
;
                                ;
                                
# 5155 "<previous_module>"
;
                                ;
                                
# 5156 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                                
# 5157 "<previous_module>"
tmain_409: IF(0,409,tmain_410)__CSEQ_removeindent;
                                
# 5158 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                                
# 5159 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 5160 "<previous_module>"
                                {
                                        
# 5161 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 5162 "<previous_module>"
tmain_410: IF(0,410,tmain_411)__CSEQ_removeindent;
                                        
# 5163 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 5164 "<previous_module>"
tmain_411: IF(0,411,tmain_412)__CSEQ_removeindent;
                                        
# 5165 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 5167 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 412);
                                ;
                                
# 5168 "<previous_module>"
;
                                ;
                                
# 5169 "<previous_module>"
;
                                ;
                                
# 5170 "<previous_module>"
tmain_412: IF(0,412,tmain_413)__CSEQ_removeindent;
                                
# 5171 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                                
# 5172 "<previous_module>"
tmain_413: IF(0,413,tmain_414)__CSEQ_removeindent;
                                
# 5173 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                                
# 5174 "<previous_module>"
tmain_414: IF(0,414,tmain_415)__CSEQ_removeindent;
                                
# 5175 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                                
# 5176 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                                
# 5177 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                                
# 5178 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                                
# 5179 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 5180 "<previous_module>"
                                {
                                        
# 5181 "<previous_module>"
goto __exit_loop_63;
                                        ;
                                }

                                
# 5183 "<previous_module>"
;

# 5184 "<previous_module>"
                                {
                                        
# 5185 "<previous_module>"
tmain_415: IF(0,415,tmain_416)__CSEQ_removeindent;
                                        
# 5186 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5187 "<previous_module>"
tmain_416: IF(0,416,tmain_417)__CSEQ_removeindent;
                                        
# 5188 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 5189 "<previous_module>"
tmain_417: IF(0,417,tmain_418)__CSEQ_removeindent;
                                        
# 5190 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5191 "<previous_module>"
tmain_418: IF(0,418,tmain_419)__CSEQ_removeindent;
                                        
# 5192 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 5193 "<previous_module>"
tmain_419: IF(0,419,tmain_420)__CSEQ_removeindent;
                                        
# 5194 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5195 "<previous_module>"
tmain_420: IF(0,420,tmain_421)__CSEQ_removeindent;
                                        
# 5196 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 5197 "<previous_module>"
tmain_421: IF(0,421,tmain_422)__CSEQ_removeindent;
                                        
# 5198 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5199 "<previous_module>"
;
                                        ;
                                        
# 5200 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 5201 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 5202 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 5203 "<previous_module>"
                                        {

# 5204 "<previous_module>"
                                                {
                                                        
# 5205 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5206 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5207 "<previous_module>"
                                                        {
                                                                
# 5208 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5210 "<previous_module>"
;
                                                        
# 5211 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5212 "<previous_module>"
                                                        {
                                                                
# 5213 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5215 "<previous_module>"
;
                                                        
# 5216 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5217 "<previous_module>"
                                                        {
                                                                
# 5218 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5220 "<previous_module>"
;
                                                        
# 5221 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5222 "<previous_module>"
tmain_422: IF(0,422,tmain_423)__CSEQ_removeindent;
                                                        
# 5223 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 5224 "<previous_module>"
__exit_loop_64:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 423);

                                                        
# 5225 "<previous_module>"
;
                                                        ;
                                                        
# 5226 "<previous_module>"
__exit__exponential_backoff_6_5:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 423);

                                                        
# 5227 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5229 "<previous_module>"
;
                                        }

                                        
# 5231 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 423);
                                        ;
                                        
# 5232 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 5233 "<previous_module>"
;
                                        ;
                                        
# 5234 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 5235 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 5236 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 5237 "<previous_module>"
                                        {
                                                
# 5238 "<previous_module>"
goto __exit_loop_63;
                                                ;
                                        }

                                        
# 5240 "<previous_module>"
;
                                }
                                
# 5242 "<previous_module>"
;
                                
# 5243 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 5244 "<previous_module>"
                                {
                                        
# 5245 "<previous_module>"
goto __exit_loop_63;
                                        ;
                                }

                                
# 5247 "<previous_module>"
;

# 5248 "<previous_module>"
                                {
                                        
# 5249 "<previous_module>"
tmain_423: IF(0,423,tmain_424)__CSEQ_removeindent;
                                        
# 5250 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5251 "<previous_module>"
tmain_424: IF(0,424,tmain_425)__CSEQ_removeindent;
                                        
# 5252 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 5253 "<previous_module>"
tmain_425: IF(0,425,tmain_426)__CSEQ_removeindent;
                                        
# 5254 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5255 "<previous_module>"
tmain_426: IF(0,426,tmain_427)__CSEQ_removeindent;
                                        
# 5256 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 5257 "<previous_module>"
tmain_427: IF(0,427,tmain_428)__CSEQ_removeindent;
                                        
# 5258 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5259 "<previous_module>"
tmain_428: IF(0,428,tmain_429)__CSEQ_removeindent;
                                        
# 5260 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 5261 "<previous_module>"
tmain_429: IF(0,429,tmain_430)__CSEQ_removeindent;
                                        
# 5262 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5263 "<previous_module>"
;
                                        ;
                                        
# 5264 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 5265 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 5266 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 5267 "<previous_module>"
                                        {

# 5268 "<previous_module>"
                                                {
                                                        
# 5269 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5270 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5271 "<previous_module>"
                                                        {
                                                                
# 5272 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5274 "<previous_module>"
;
                                                        
# 5275 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5276 "<previous_module>"
                                                        {
                                                                
# 5277 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5279 "<previous_module>"
;
                                                        
# 5280 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5281 "<previous_module>"
                                                        {
                                                                
# 5282 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5284 "<previous_module>"
;
                                                        
# 5285 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5286 "<previous_module>"
tmain_430: IF(0,430,tmain_431)__CSEQ_removeindent;
                                                        
# 5287 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 5288 "<previous_module>"
__exit_loop_65:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 431);

                                                        
# 5289 "<previous_module>"
;
                                                        ;
                                                        
# 5290 "<previous_module>"
__exit__exponential_backoff_6_6:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 431);

                                                        
# 5291 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5293 "<previous_module>"
;
                                        }

                                        
# 5295 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 431);
                                        ;
                                        
# 5296 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 5297 "<previous_module>"
;
                                        ;
                                        
# 5298 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 5299 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 5300 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 5301 "<previous_module>"
                                        {
                                                
# 5302 "<previous_module>"
goto __exit_loop_63;
                                                ;
                                        }

                                        
# 5304 "<previous_module>"
;
                                }
                                
# 5306 "<previous_module>"
;
                                
# 5307 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 5308 "<previous_module>"
                                {
                                        
# 5309 "<previous_module>"
goto __exit_loop_63;
                                        ;
                                }

                                
# 5311 "<previous_module>"
;

# 5312 "<previous_module>"
                                {
                                        
# 5313 "<previous_module>"
tmain_431: IF(0,431,tmain_432)__CSEQ_removeindent;
                                        
# 5314 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5315 "<previous_module>"
tmain_432: IF(0,432,tmain_433)__CSEQ_removeindent;
                                        
# 5316 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 5317 "<previous_module>"
tmain_433: IF(0,433,tmain_434)__CSEQ_removeindent;
                                        
# 5318 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5319 "<previous_module>"
tmain_434: IF(0,434,tmain_435)__CSEQ_removeindent;
                                        
# 5320 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 5321 "<previous_module>"
tmain_435: IF(0,435,tmain_436)__CSEQ_removeindent;
                                        
# 5322 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5323 "<previous_module>"
tmain_436: IF(0,436,tmain_437)__CSEQ_removeindent;
                                        
# 5324 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 5325 "<previous_module>"
tmain_437: IF(0,437,tmain_438)__CSEQ_removeindent;
                                        
# 5326 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5327 "<previous_module>"
;
                                        ;
                                        
# 5328 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 5329 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 5330 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 5331 "<previous_module>"
                                        {

# 5332 "<previous_module>"
                                                {
                                                        
# 5333 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5334 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5335 "<previous_module>"
                                                        {
                                                                
# 5336 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5338 "<previous_module>"
;
                                                        
# 5339 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5340 "<previous_module>"
                                                        {
                                                                
# 5341 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5343 "<previous_module>"
;
                                                        
# 5344 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5345 "<previous_module>"
                                                        {
                                                                
# 5346 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5348 "<previous_module>"
;
                                                        
# 5349 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5350 "<previous_module>"
tmain_438: IF(0,438,tmain_439)__CSEQ_removeindent;
                                                        
# 5351 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 5352 "<previous_module>"
__exit_loop_66:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 439);

                                                        
# 5353 "<previous_module>"
;
                                                        ;
                                                        
# 5354 "<previous_module>"
__exit__exponential_backoff_6_7:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 439);

                                                        
# 5355 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5357 "<previous_module>"
;
                                        }

                                        
# 5359 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 439);
                                        ;
                                        
# 5360 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 5361 "<previous_module>"
;
                                        ;
                                        
# 5362 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 5363 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 5364 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 5365 "<previous_module>"
                                        {
                                                
# 5366 "<previous_module>"
goto __exit_loop_63;
                                                ;
                                        }

                                        
# 5368 "<previous_module>"
;
                                }
                                
# 5370 "<previous_module>"
;
                                
# 5371 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 5372 "<previous_module>"
                                {
                                        
# 5373 "<previous_module>"
goto __exit_loop_63;
                                        ;
                                }

                                
# 5375 "<previous_module>"
;

# 5376 "<previous_module>"
                                {
                                        
# 5377 "<previous_module>"
tmain_439: IF(0,439,tmain_440)__CSEQ_removeindent;
                                        
# 5378 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5379 "<previous_module>"
tmain_440: IF(0,440,tmain_441)__CSEQ_removeindent;
                                        
# 5380 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 5381 "<previous_module>"
tmain_441: IF(0,441,tmain_442)__CSEQ_removeindent;
                                        
# 5382 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5383 "<previous_module>"
tmain_442: IF(0,442,tmain_443)__CSEQ_removeindent;
                                        
# 5384 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 5385 "<previous_module>"
tmain_443: IF(0,443,tmain_444)__CSEQ_removeindent;
                                        
# 5386 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5387 "<previous_module>"
tmain_444: IF(0,444,tmain_445)__CSEQ_removeindent;
                                        
# 5388 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 5389 "<previous_module>"
tmain_445: IF(0,445,tmain_446)__CSEQ_removeindent;
                                        
# 5390 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5391 "<previous_module>"
;
                                        ;
                                        
# 5392 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 5393 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 5394 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 5395 "<previous_module>"
                                        {

# 5396 "<previous_module>"
                                                {
                                                        
# 5397 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5398 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5399 "<previous_module>"
                                                        {
                                                                
# 5400 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5402 "<previous_module>"
;
                                                        
# 5403 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5404 "<previous_module>"
                                                        {
                                                                
# 5405 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5407 "<previous_module>"
;
                                                        
# 5408 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5409 "<previous_module>"
                                                        {
                                                                
# 5410 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5412 "<previous_module>"
;
                                                        
# 5413 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5414 "<previous_module>"
tmain_446: IF(0,446,tmain_447)__CSEQ_removeindent;
                                                        
# 5415 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 5416 "<previous_module>"
__exit_loop_67:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 447);

                                                        
# 5417 "<previous_module>"
;
                                                        ;
                                                        
# 5418 "<previous_module>"
__exit__exponential_backoff_6_8:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 447);

                                                        
# 5419 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5421 "<previous_module>"
;
                                        }

                                        
# 5423 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 447);
                                        ;
                                        
# 5424 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 5425 "<previous_module>"
;
                                        ;
                                        
# 5426 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 5427 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 5428 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 5429 "<previous_module>"
                                        {
                                                
# 5430 "<previous_module>"
goto __exit_loop_63;
                                                ;
                                        }

                                        
# 5432 "<previous_module>"
;
                                }
                                
# 5434 "<previous_module>"
;
                                
# 5435 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 5436 "<previous_module>"
                                {
                                        
# 5437 "<previous_module>"
goto __exit_loop_63;
                                        ;
                                }

                                
# 5439 "<previous_module>"
;

# 5440 "<previous_module>"
                                {
                                        
# 5441 "<previous_module>"
tmain_447: IF(0,447,tmain_448)__CSEQ_removeindent;
                                        
# 5442 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5443 "<previous_module>"
tmain_448: IF(0,448,tmain_449)__CSEQ_removeindent;
                                        
# 5444 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 5445 "<previous_module>"
tmain_449: IF(0,449,tmain_450)__CSEQ_removeindent;
                                        
# 5446 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5447 "<previous_module>"
tmain_450: IF(0,450,tmain_451)__CSEQ_removeindent;
                                        
# 5448 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 5449 "<previous_module>"
tmain_451: IF(0,451,tmain_452)__CSEQ_removeindent;
                                        
# 5450 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5451 "<previous_module>"
tmain_452: IF(0,452,tmain_453)__CSEQ_removeindent;
                                        
# 5452 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 5453 "<previous_module>"
tmain_453: IF(0,453,tmain_454)__CSEQ_removeindent;
                                        
# 5454 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5455 "<previous_module>"
;
                                        ;
                                        
# 5456 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 5457 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 5458 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 5459 "<previous_module>"
                                        {

# 5460 "<previous_module>"
                                                {
                                                        
# 5461 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5462 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5463 "<previous_module>"
                                                        {
                                                                
# 5464 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5466 "<previous_module>"
;
                                                        
# 5467 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5468 "<previous_module>"
                                                        {
                                                                
# 5469 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5471 "<previous_module>"
;
                                                        
# 5472 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5473 "<previous_module>"
                                                        {
                                                                
# 5474 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5476 "<previous_module>"
;
                                                        
# 5477 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5478 "<previous_module>"
tmain_454: IF(0,454,tmain_455)__CSEQ_removeindent;
                                                        
# 5479 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 5480 "<previous_module>"
__exit_loop_68:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 455);

                                                        
# 5481 "<previous_module>"
;
                                                        ;
                                                        
# 5482 "<previous_module>"
__exit__exponential_backoff_6_9:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 455);

                                                        
# 5483 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5485 "<previous_module>"
;
                                        }

                                        
# 5487 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 455);
                                        ;
                                        
# 5488 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 5489 "<previous_module>"
;
                                        ;
                                        
# 5490 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 5491 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 5492 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 5493 "<previous_module>"
                                        {
                                                
# 5494 "<previous_module>"
goto __exit_loop_63;
                                                ;
                                        }

                                        
# 5496 "<previous_module>"
;
                                }
                                
# 5498 "<previous_module>"
;
                                
# 5499 "<previous_module>"
tmain_455: IF(0,455,tmain_456)__CSEQ_removeindent;
                                
# 5500 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                                
# 5501 "<previous_module>"
__exit_loop_63:
                                __CPROVER_assume(__cs_pc_cs[0] >= 456);

                                
# 5502 "<previous_module>"
;
                                ;
                                
# 5503 "<previous_module>"
goto __exit__lfds711_stack_push_2_1;
                                ;
                                
# 5504 "<previous_module>"
__exit__lfds711_stack_push_2_1:
                                __CPROVER_assume(__cs_pc_cs[0] >= 456);

                                
# 5505 "<previous_module>"
;
                                ;
                        }
                        
# 5507 "<previous_module>"
;
                        
# 5508 "<previous_module>"
__cs_local_get_size_i++;
                }
                
# 5510 "<previous_module>"
;
                
# 5511 "<previous_module>"
if (!(__cs_local_get_size_i < __cs_local_get_size_actual_size))

# 5512 "<previous_module>"
                {
                        
# 5513 "<previous_module>"
goto __exit_loop_56;
                        ;
                }

                
# 5515 "<previous_module>"
;

# 5516 "<previous_module>"
                {

# 5517 "<previous_module>"
                        {
                                
# 5518 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                                
# 5519 "<previous_module>"
tmain_456: IF(0,456,tmain_457)__CSEQ_removeindent;
                                
# 5520 "<previous_module>"
__cs_param_lfds711_stack_push_ss = __cs_param_get_size_s;
                                
# 5521 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                                
# 5522 "<previous_module>"
tmain_457: IF(0,457,tmain_458)__CSEQ_removeindent;
                                
# 5523 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_get_size_datas[__cs_local_get_size_i]).se;
                                
# 5524 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                                
# 5525 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                                
# 5526 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                                
# 5527 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                                
# 5528 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                                
# 5529 "<previous_module>"
;
                                ;
                                
# 5530 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                                
# 5531 "<previous_module>"
tmain_458: IF(0,458,tmain_459)__CSEQ_removeindent;
                                
# 5532 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                                
# 5533 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 5534 "<previous_module>"
                                {
                                        
# 5535 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 5536 "<previous_module>"
tmain_459: IF(0,459,tmain_460)__CSEQ_removeindent;
                                        
# 5537 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 5538 "<previous_module>"
tmain_460: IF(0,460,tmain_461)__CSEQ_removeindent;
                                        
# 5539 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 5541 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 461);
                                ;
                                
# 5542 "<previous_module>"
;
                                ;
                                
# 5543 "<previous_module>"
;
                                ;
                                
# 5544 "<previous_module>"
;
                                ;
                                
# 5545 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                                
# 5546 "<previous_module>"
tmain_461: IF(0,461,tmain_462)__CSEQ_removeindent;
                                
# 5547 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                                
# 5548 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 5549 "<previous_module>"
                                {
                                        
# 5550 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 5551 "<previous_module>"
tmain_462: IF(0,462,tmain_463)__CSEQ_removeindent;
                                        
# 5552 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 5553 "<previous_module>"
tmain_463: IF(0,463,tmain_464)__CSEQ_removeindent;
                                        
# 5554 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 5556 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 464);
                                ;
                                
# 5557 "<previous_module>"
;
                                ;
                                
# 5558 "<previous_module>"
;
                                ;
                                
# 5559 "<previous_module>"
tmain_464: IF(0,464,tmain_465)__CSEQ_removeindent;
                                
# 5560 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                                
# 5561 "<previous_module>"
tmain_465: IF(0,465,tmain_466)__CSEQ_removeindent;
                                
# 5562 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                                
# 5563 "<previous_module>"
tmain_466: IF(0,466,tmain_467)__CSEQ_removeindent;
                                
# 5564 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                                
# 5565 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                                
# 5566 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                                
# 5567 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                                
# 5568 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 5569 "<previous_module>"
                                {
                                        
# 5570 "<previous_module>"
goto __exit_loop_69;
                                        ;
                                }

                                
# 5572 "<previous_module>"
;

# 5573 "<previous_module>"
                                {
                                        
# 5574 "<previous_module>"
tmain_467: IF(0,467,tmain_468)__CSEQ_removeindent;
                                        
# 5575 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5576 "<previous_module>"
tmain_468: IF(0,468,tmain_469)__CSEQ_removeindent;
                                        
# 5577 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 5578 "<previous_module>"
tmain_469: IF(0,469,tmain_470)__CSEQ_removeindent;
                                        
# 5579 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5580 "<previous_module>"
tmain_470: IF(0,470,tmain_471)__CSEQ_removeindent;
                                        
# 5581 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 5582 "<previous_module>"
tmain_471: IF(0,471,tmain_472)__CSEQ_removeindent;
                                        
# 5583 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5584 "<previous_module>"
tmain_472: IF(0,472,tmain_473)__CSEQ_removeindent;
                                        
# 5585 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 5586 "<previous_module>"
tmain_473: IF(0,473,tmain_474)__CSEQ_removeindent;
                                        
# 5587 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5588 "<previous_module>"
;
                                        ;
                                        
# 5589 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 5590 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 5591 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 5592 "<previous_module>"
                                        {

# 5593 "<previous_module>"
                                                {
                                                        
# 5594 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5595 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5596 "<previous_module>"
                                                        {
                                                                
# 5597 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5599 "<previous_module>"
;
                                                        
# 5600 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5601 "<previous_module>"
                                                        {
                                                                
# 5602 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5604 "<previous_module>"
;
                                                        
# 5605 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5606 "<previous_module>"
                                                        {
                                                                
# 5607 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5609 "<previous_module>"
;
                                                        
# 5610 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5611 "<previous_module>"
tmain_474: IF(0,474,tmain_475)__CSEQ_removeindent;
                                                        
# 5612 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 5613 "<previous_module>"
__exit_loop_70:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 475);

                                                        
# 5614 "<previous_module>"
;
                                                        ;
                                                        
# 5615 "<previous_module>"
__exit__exponential_backoff_6_10:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 475);

                                                        
# 5616 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5618 "<previous_module>"
;
                                        }

                                        
# 5620 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 475);
                                        ;
                                        
# 5621 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 5622 "<previous_module>"
;
                                        ;
                                        
# 5623 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 5624 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 5625 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 5626 "<previous_module>"
                                        {
                                                
# 5627 "<previous_module>"
goto __exit_loop_69;
                                                ;
                                        }

                                        
# 5629 "<previous_module>"
;
                                }
                                
# 5631 "<previous_module>"
;
                                
# 5632 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 5633 "<previous_module>"
                                {
                                        
# 5634 "<previous_module>"
goto __exit_loop_69;
                                        ;
                                }

                                
# 5636 "<previous_module>"
;

# 5637 "<previous_module>"
                                {
                                        
# 5638 "<previous_module>"
tmain_475: IF(0,475,tmain_476)__CSEQ_removeindent;
                                        
# 5639 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5640 "<previous_module>"
tmain_476: IF(0,476,tmain_477)__CSEQ_removeindent;
                                        
# 5641 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 5642 "<previous_module>"
tmain_477: IF(0,477,tmain_478)__CSEQ_removeindent;
                                        
# 5643 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5644 "<previous_module>"
tmain_478: IF(0,478,tmain_479)__CSEQ_removeindent;
                                        
# 5645 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 5646 "<previous_module>"
tmain_479: IF(0,479,tmain_480)__CSEQ_removeindent;
                                        
# 5647 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5648 "<previous_module>"
tmain_480: IF(0,480,tmain_481)__CSEQ_removeindent;
                                        
# 5649 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 5650 "<previous_module>"
tmain_481: IF(0,481,tmain_482)__CSEQ_removeindent;
                                        
# 5651 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5652 "<previous_module>"
;
                                        ;
                                        
# 5653 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 5654 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 5655 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 5656 "<previous_module>"
                                        {

# 5657 "<previous_module>"
                                                {
                                                        
# 5658 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5659 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5660 "<previous_module>"
                                                        {
                                                                
# 5661 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5663 "<previous_module>"
;
                                                        
# 5664 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5665 "<previous_module>"
                                                        {
                                                                
# 5666 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5668 "<previous_module>"
;
                                                        
# 5669 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5670 "<previous_module>"
                                                        {
                                                                
# 5671 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5673 "<previous_module>"
;
                                                        
# 5674 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5675 "<previous_module>"
tmain_482: IF(0,482,tmain_483)__CSEQ_removeindent;
                                                        
# 5676 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 5677 "<previous_module>"
__exit_loop_71:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 483);

                                                        
# 5678 "<previous_module>"
;
                                                        ;
                                                        
# 5679 "<previous_module>"
__exit__exponential_backoff_6_11:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 483);

                                                        
# 5680 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5682 "<previous_module>"
;
                                        }

                                        
# 5684 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 483);
                                        ;
                                        
# 5685 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 5686 "<previous_module>"
;
                                        ;
                                        
# 5687 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 5688 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 5689 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 5690 "<previous_module>"
                                        {
                                                
# 5691 "<previous_module>"
goto __exit_loop_69;
                                                ;
                                        }

                                        
# 5693 "<previous_module>"
;
                                }
                                
# 5695 "<previous_module>"
;
                                
# 5696 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 5697 "<previous_module>"
                                {
                                        
# 5698 "<previous_module>"
goto __exit_loop_69;
                                        ;
                                }

                                
# 5700 "<previous_module>"
;

# 5701 "<previous_module>"
                                {
                                        
# 5702 "<previous_module>"
tmain_483: IF(0,483,tmain_484)__CSEQ_removeindent;
                                        
# 5703 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5704 "<previous_module>"
tmain_484: IF(0,484,tmain_485)__CSEQ_removeindent;
                                        
# 5705 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 5706 "<previous_module>"
tmain_485: IF(0,485,tmain_486)__CSEQ_removeindent;
                                        
# 5707 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5708 "<previous_module>"
tmain_486: IF(0,486,tmain_487)__CSEQ_removeindent;
                                        
# 5709 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 5710 "<previous_module>"
tmain_487: IF(0,487,tmain_488)__CSEQ_removeindent;
                                        
# 5711 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5712 "<previous_module>"
tmain_488: IF(0,488,tmain_489)__CSEQ_removeindent;
                                        
# 5713 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 5714 "<previous_module>"
tmain_489: IF(0,489,tmain_490)__CSEQ_removeindent;
                                        
# 5715 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5716 "<previous_module>"
;
                                        ;
                                        
# 5717 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 5718 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 5719 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 5720 "<previous_module>"
                                        {

# 5721 "<previous_module>"
                                                {
                                                        
# 5722 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5723 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5724 "<previous_module>"
                                                        {
                                                                
# 5725 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5727 "<previous_module>"
;
                                                        
# 5728 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5729 "<previous_module>"
                                                        {
                                                                
# 5730 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5732 "<previous_module>"
;
                                                        
# 5733 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5734 "<previous_module>"
                                                        {
                                                                
# 5735 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5737 "<previous_module>"
;
                                                        
# 5738 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5739 "<previous_module>"
tmain_490: IF(0,490,tmain_491)__CSEQ_removeindent;
                                                        
# 5740 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 5741 "<previous_module>"
__exit_loop_72:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 491);

                                                        
# 5742 "<previous_module>"
;
                                                        ;
                                                        
# 5743 "<previous_module>"
__exit__exponential_backoff_6_12:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 491);

                                                        
# 5744 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5746 "<previous_module>"
;
                                        }

                                        
# 5748 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 491);
                                        ;
                                        
# 5749 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 5750 "<previous_module>"
;
                                        ;
                                        
# 5751 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 5752 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 5753 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 5754 "<previous_module>"
                                        {
                                                
# 5755 "<previous_module>"
goto __exit_loop_69;
                                                ;
                                        }

                                        
# 5757 "<previous_module>"
;
                                }
                                
# 5759 "<previous_module>"
;
                                
# 5760 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 5761 "<previous_module>"
                                {
                                        
# 5762 "<previous_module>"
goto __exit_loop_69;
                                        ;
                                }

                                
# 5764 "<previous_module>"
;

# 5765 "<previous_module>"
                                {
                                        
# 5766 "<previous_module>"
tmain_491: IF(0,491,tmain_492)__CSEQ_removeindent;
                                        
# 5767 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5768 "<previous_module>"
tmain_492: IF(0,492,tmain_493)__CSEQ_removeindent;
                                        
# 5769 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 5770 "<previous_module>"
tmain_493: IF(0,493,tmain_494)__CSEQ_removeindent;
                                        
# 5771 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5772 "<previous_module>"
tmain_494: IF(0,494,tmain_495)__CSEQ_removeindent;
                                        
# 5773 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 5774 "<previous_module>"
tmain_495: IF(0,495,tmain_496)__CSEQ_removeindent;
                                        
# 5775 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5776 "<previous_module>"
tmain_496: IF(0,496,tmain_497)__CSEQ_removeindent;
                                        
# 5777 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 5778 "<previous_module>"
tmain_497: IF(0,497,tmain_498)__CSEQ_removeindent;
                                        
# 5779 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5780 "<previous_module>"
;
                                        ;
                                        
# 5781 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 5782 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 5783 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 5784 "<previous_module>"
                                        {

# 5785 "<previous_module>"
                                                {
                                                        
# 5786 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5787 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5788 "<previous_module>"
                                                        {
                                                                
# 5789 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5791 "<previous_module>"
;
                                                        
# 5792 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5793 "<previous_module>"
                                                        {
                                                                
# 5794 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5796 "<previous_module>"
;
                                                        
# 5797 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5798 "<previous_module>"
                                                        {
                                                                
# 5799 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5801 "<previous_module>"
;
                                                        
# 5802 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5803 "<previous_module>"
tmain_498: IF(0,498,tmain_499)__CSEQ_removeindent;
                                                        
# 5804 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 5805 "<previous_module>"
__exit_loop_73:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 499);

                                                        
# 5806 "<previous_module>"
;
                                                        ;
                                                        
# 5807 "<previous_module>"
__exit__exponential_backoff_6_13:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 499);

                                                        
# 5808 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5810 "<previous_module>"
;
                                        }

                                        
# 5812 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 499);
                                        ;
                                        
# 5813 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 5814 "<previous_module>"
;
                                        ;
                                        
# 5815 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 5816 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 5817 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 5818 "<previous_module>"
                                        {
                                                
# 5819 "<previous_module>"
goto __exit_loop_69;
                                                ;
                                        }

                                        
# 5821 "<previous_module>"
;
                                }
                                
# 5823 "<previous_module>"
;
                                
# 5824 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 5825 "<previous_module>"
                                {
                                        
# 5826 "<previous_module>"
goto __exit_loop_69;
                                        ;
                                }

                                
# 5828 "<previous_module>"
;

# 5829 "<previous_module>"
                                {
                                        
# 5830 "<previous_module>"
tmain_499: IF(0,499,tmain_500)__CSEQ_removeindent;
                                        
# 5831 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5832 "<previous_module>"
tmain_500: IF(0,500,tmain_501)__CSEQ_removeindent;
                                        
# 5833 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 5834 "<previous_module>"
tmain_501: IF(0,501,tmain_502)__CSEQ_removeindent;
                                        
# 5835 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5836 "<previous_module>"
tmain_502: IF(0,502,tmain_503)__CSEQ_removeindent;
                                        
# 5837 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 5838 "<previous_module>"
tmain_503: IF(0,503,tmain_504)__CSEQ_removeindent;
                                        
# 5839 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5840 "<previous_module>"
tmain_504: IF(0,504,tmain_505)__CSEQ_removeindent;
                                        
# 5841 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 5842 "<previous_module>"
tmain_505: IF(0,505,tmain_506)__CSEQ_removeindent;
                                        
# 5843 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5844 "<previous_module>"
;
                                        ;
                                        
# 5845 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 5846 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 5847 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 5848 "<previous_module>"
                                        {

# 5849 "<previous_module>"
                                                {
                                                        
# 5850 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5851 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5852 "<previous_module>"
                                                        {
                                                                
# 5853 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5855 "<previous_module>"
;
                                                        
# 5856 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5857 "<previous_module>"
                                                        {
                                                                
# 5858 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5860 "<previous_module>"
;
                                                        
# 5861 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5862 "<previous_module>"
                                                        {
                                                                
# 5863 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5865 "<previous_module>"
;
                                                        
# 5866 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 5867 "<previous_module>"
tmain_506: IF(0,506,tmain_507)__CSEQ_removeindent;
                                                        
# 5868 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 5869 "<previous_module>"
__exit_loop_74:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 507);

                                                        
# 5870 "<previous_module>"
;
                                                        ;
                                                        
# 5871 "<previous_module>"
__exit__exponential_backoff_6_14:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 507);

                                                        
# 5872 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 5874 "<previous_module>"
;
                                        }

                                        
# 5876 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 507);
                                        ;
                                        
# 5877 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 5878 "<previous_module>"
;
                                        ;
                                        
# 5879 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 5880 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 5881 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 5882 "<previous_module>"
                                        {
                                                
# 5883 "<previous_module>"
goto __exit_loop_69;
                                                ;
                                        }

                                        
# 5885 "<previous_module>"
;
                                }
                                
# 5887 "<previous_module>"
;
                                
# 5888 "<previous_module>"
tmain_507: IF(0,507,tmain_508)__CSEQ_removeindent;
                                
# 5889 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                                
# 5890 "<previous_module>"
__exit_loop_69:
                                __CPROVER_assume(__cs_pc_cs[0] >= 508);

                                
# 5891 "<previous_module>"
;
                                ;
                                
# 5892 "<previous_module>"
goto __exit__lfds711_stack_push_2_2;
                                ;
                                
# 5893 "<previous_module>"
__exit__lfds711_stack_push_2_2:
                                __CPROVER_assume(__cs_pc_cs[0] >= 508);

                                
# 5894 "<previous_module>"
;
                                ;
                        }
                        
# 5896 "<previous_module>"
;
                        
# 5897 "<previous_module>"
__cs_local_get_size_i++;
                }
                
# 5899 "<previous_module>"
;
                
# 5900 "<previous_module>"
if (!(__cs_local_get_size_i < __cs_local_get_size_actual_size))

# 5901 "<previous_module>"
                {
                        
# 5902 "<previous_module>"
goto __exit_loop_56;
                        ;
                }

                
# 5904 "<previous_module>"
;

# 5905 "<previous_module>"
                {

# 5906 "<previous_module>"
                        {
                                
# 5907 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                                
# 5908 "<previous_module>"
tmain_508: IF(0,508,tmain_509)__CSEQ_removeindent;
                                
# 5909 "<previous_module>"
__cs_param_lfds711_stack_push_ss = __cs_param_get_size_s;
                                
# 5910 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                                
# 5911 "<previous_module>"
tmain_509: IF(0,509,tmain_510)__CSEQ_removeindent;
                                
# 5912 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_get_size_datas[__cs_local_get_size_i]).se;
                                
# 5913 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                                
# 5914 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                                
# 5915 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                                
# 5916 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                                
# 5917 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                                
# 5918 "<previous_module>"
;
                                ;
                                
# 5919 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                                
# 5920 "<previous_module>"
tmain_510: IF(0,510,tmain_511)__CSEQ_removeindent;
                                
# 5921 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                                
# 5922 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 5923 "<previous_module>"
                                {
                                        
# 5924 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 5925 "<previous_module>"
tmain_511: IF(0,511,tmain_512)__CSEQ_removeindent;
                                        
# 5926 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 5927 "<previous_module>"
tmain_512: IF(0,512,tmain_513)__CSEQ_removeindent;
                                        
# 5928 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 5930 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 513);
                                ;
                                
# 5931 "<previous_module>"
;
                                ;
                                
# 5932 "<previous_module>"
;
                                ;
                                
# 5933 "<previous_module>"
;
                                ;
                                
# 5934 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                                
# 5935 "<previous_module>"
tmain_513: IF(0,513,tmain_514)__CSEQ_removeindent;
                                
# 5936 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                                
# 5937 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 5938 "<previous_module>"
                                {
                                        
# 5939 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 5940 "<previous_module>"
tmain_514: IF(0,514,tmain_515)__CSEQ_removeindent;
                                        
# 5941 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 5942 "<previous_module>"
tmain_515: IF(0,515,tmain_516)__CSEQ_removeindent;
                                        
# 5943 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 5945 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 516);
                                ;
                                
# 5946 "<previous_module>"
;
                                ;
                                
# 5947 "<previous_module>"
;
                                ;
                                
# 5948 "<previous_module>"
tmain_516: IF(0,516,tmain_517)__CSEQ_removeindent;
                                
# 5949 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                                
# 5950 "<previous_module>"
tmain_517: IF(0,517,tmain_518)__CSEQ_removeindent;
                                
# 5951 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                                
# 5952 "<previous_module>"
tmain_518: IF(0,518,tmain_519)__CSEQ_removeindent;
                                
# 5953 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                                
# 5954 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                                
# 5955 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                                
# 5956 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                                
# 5957 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 5958 "<previous_module>"
                                {
                                        
# 5959 "<previous_module>"
goto __exit_loop_75;
                                        ;
                                }

                                
# 5961 "<previous_module>"
;

# 5962 "<previous_module>"
                                {
                                        
# 5963 "<previous_module>"
tmain_519: IF(0,519,tmain_520)__CSEQ_removeindent;
                                        
# 5964 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5965 "<previous_module>"
tmain_520: IF(0,520,tmain_521)__CSEQ_removeindent;
                                        
# 5966 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 5967 "<previous_module>"
tmain_521: IF(0,521,tmain_522)__CSEQ_removeindent;
                                        
# 5968 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5969 "<previous_module>"
tmain_522: IF(0,522,tmain_523)__CSEQ_removeindent;
                                        
# 5970 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 5971 "<previous_module>"
tmain_523: IF(0,523,tmain_524)__CSEQ_removeindent;
                                        
# 5972 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5973 "<previous_module>"
tmain_524: IF(0,524,tmain_525)__CSEQ_removeindent;
                                        
# 5974 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 5975 "<previous_module>"
tmain_525: IF(0,525,tmain_526)__CSEQ_removeindent;
                                        
# 5976 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5977 "<previous_module>"
;
                                        ;
                                        
# 5978 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 5979 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 5980 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 5981 "<previous_module>"
                                        {

# 5982 "<previous_module>"
                                                {
                                                        
# 5983 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 5984 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5985 "<previous_module>"
                                                        {
                                                                
# 5986 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5988 "<previous_module>"
;
                                                        
# 5989 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5990 "<previous_module>"
                                                        {
                                                                
# 5991 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5993 "<previous_module>"
;
                                                        
# 5994 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5995 "<previous_module>"
                                                        {
                                                                
# 5996 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5998 "<previous_module>"
;
                                                        
# 5999 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 6000 "<previous_module>"
tmain_526: IF(0,526,tmain_527)__CSEQ_removeindent;
                                                        
# 6001 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 6002 "<previous_module>"
__exit_loop_76:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 527);

                                                        
# 6003 "<previous_module>"
;
                                                        ;
                                                        
# 6004 "<previous_module>"
__exit__exponential_backoff_6_15:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 527);

                                                        
# 6005 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6007 "<previous_module>"
;
                                        }

                                        
# 6009 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 527);
                                        ;
                                        
# 6010 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 6011 "<previous_module>"
;
                                        ;
                                        
# 6012 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 6013 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 6014 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 6015 "<previous_module>"
                                        {
                                                
# 6016 "<previous_module>"
goto __exit_loop_75;
                                                ;
                                        }

                                        
# 6018 "<previous_module>"
;
                                }
                                
# 6020 "<previous_module>"
;
                                
# 6021 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 6022 "<previous_module>"
                                {
                                        
# 6023 "<previous_module>"
goto __exit_loop_75;
                                        ;
                                }

                                
# 6025 "<previous_module>"
;

# 6026 "<previous_module>"
                                {
                                        
# 6027 "<previous_module>"
tmain_527: IF(0,527,tmain_528)__CSEQ_removeindent;
                                        
# 6028 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6029 "<previous_module>"
tmain_528: IF(0,528,tmain_529)__CSEQ_removeindent;
                                        
# 6030 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 6031 "<previous_module>"
tmain_529: IF(0,529,tmain_530)__CSEQ_removeindent;
                                        
# 6032 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6033 "<previous_module>"
tmain_530: IF(0,530,tmain_531)__CSEQ_removeindent;
                                        
# 6034 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 6035 "<previous_module>"
tmain_531: IF(0,531,tmain_532)__CSEQ_removeindent;
                                        
# 6036 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6037 "<previous_module>"
tmain_532: IF(0,532,tmain_533)__CSEQ_removeindent;
                                        
# 6038 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 6039 "<previous_module>"
tmain_533: IF(0,533,tmain_534)__CSEQ_removeindent;
                                        
# 6040 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6041 "<previous_module>"
;
                                        ;
                                        
# 6042 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 6043 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 6044 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 6045 "<previous_module>"
                                        {

# 6046 "<previous_module>"
                                                {
                                                        
# 6047 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 6048 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 6049 "<previous_module>"
                                                        {
                                                                
# 6050 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6052 "<previous_module>"
;
                                                        
# 6053 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6054 "<previous_module>"
                                                        {
                                                                
# 6055 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6057 "<previous_module>"
;
                                                        
# 6058 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6059 "<previous_module>"
                                                        {
                                                                
# 6060 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6062 "<previous_module>"
;
                                                        
# 6063 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 6064 "<previous_module>"
tmain_534: IF(0,534,tmain_535)__CSEQ_removeindent;
                                                        
# 6065 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 6066 "<previous_module>"
__exit_loop_77:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 535);

                                                        
# 6067 "<previous_module>"
;
                                                        ;
                                                        
# 6068 "<previous_module>"
__exit__exponential_backoff_6_16:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 535);

                                                        
# 6069 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6071 "<previous_module>"
;
                                        }

                                        
# 6073 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 535);
                                        ;
                                        
# 6074 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 6075 "<previous_module>"
;
                                        ;
                                        
# 6076 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 6077 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 6078 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 6079 "<previous_module>"
                                        {
                                                
# 6080 "<previous_module>"
goto __exit_loop_75;
                                                ;
                                        }

                                        
# 6082 "<previous_module>"
;
                                }
                                
# 6084 "<previous_module>"
;
                                
# 6085 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 6086 "<previous_module>"
                                {
                                        
# 6087 "<previous_module>"
goto __exit_loop_75;
                                        ;
                                }

                                
# 6089 "<previous_module>"
;

# 6090 "<previous_module>"
                                {
                                        
# 6091 "<previous_module>"
tmain_535: IF(0,535,tmain_536)__CSEQ_removeindent;
                                        
# 6092 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6093 "<previous_module>"
tmain_536: IF(0,536,tmain_537)__CSEQ_removeindent;
                                        
# 6094 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 6095 "<previous_module>"
tmain_537: IF(0,537,tmain_538)__CSEQ_removeindent;
                                        
# 6096 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6097 "<previous_module>"
tmain_538: IF(0,538,tmain_539)__CSEQ_removeindent;
                                        
# 6098 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 6099 "<previous_module>"
tmain_539: IF(0,539,tmain_540)__CSEQ_removeindent;
                                        
# 6100 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6101 "<previous_module>"
tmain_540: IF(0,540,tmain_541)__CSEQ_removeindent;
                                        
# 6102 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 6103 "<previous_module>"
tmain_541: IF(0,541,tmain_542)__CSEQ_removeindent;
                                        
# 6104 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6105 "<previous_module>"
;
                                        ;
                                        
# 6106 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 6107 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 6108 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 6109 "<previous_module>"
                                        {

# 6110 "<previous_module>"
                                                {
                                                        
# 6111 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 6112 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

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
tmain_542: IF(0,542,tmain_543)__CSEQ_removeindent;
                                                        
# 6129 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 6130 "<previous_module>"
__exit_loop_78:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 543);

                                                        
# 6131 "<previous_module>"
;
                                                        ;
                                                        
# 6132 "<previous_module>"
__exit__exponential_backoff_6_17:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 543);

                                                        
# 6133 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6135 "<previous_module>"
;
                                        }

                                        
# 6137 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 543);
                                        ;
                                        
# 6138 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 6139 "<previous_module>"
;
                                        ;
                                        
# 6140 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 6141 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 6142 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 6143 "<previous_module>"
                                        {
                                                
# 6144 "<previous_module>"
goto __exit_loop_75;
                                                ;
                                        }

                                        
# 6146 "<previous_module>"
;
                                }
                                
# 6148 "<previous_module>"
;
                                
# 6149 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 6150 "<previous_module>"
                                {
                                        
# 6151 "<previous_module>"
goto __exit_loop_75;
                                        ;
                                }

                                
# 6153 "<previous_module>"
;

# 6154 "<previous_module>"
                                {
                                        
# 6155 "<previous_module>"
tmain_543: IF(0,543,tmain_544)__CSEQ_removeindent;
                                        
# 6156 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6157 "<previous_module>"
tmain_544: IF(0,544,tmain_545)__CSEQ_removeindent;
                                        
# 6158 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 6159 "<previous_module>"
tmain_545: IF(0,545,tmain_546)__CSEQ_removeindent;
                                        
# 6160 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6161 "<previous_module>"
tmain_546: IF(0,546,tmain_547)__CSEQ_removeindent;
                                        
# 6162 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 6163 "<previous_module>"
tmain_547: IF(0,547,tmain_548)__CSEQ_removeindent;
                                        
# 6164 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6165 "<previous_module>"
tmain_548: IF(0,548,tmain_549)__CSEQ_removeindent;
                                        
# 6166 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 6167 "<previous_module>"
tmain_549: IF(0,549,tmain_550)__CSEQ_removeindent;
                                        
# 6168 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6169 "<previous_module>"
;
                                        ;
                                        
# 6170 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 6171 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 6172 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 6173 "<previous_module>"
                                        {

# 6174 "<previous_module>"
                                                {
                                                        
# 6175 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 6176 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 6177 "<previous_module>"
                                                        {
                                                                
# 6178 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6180 "<previous_module>"
;
                                                        
# 6181 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6182 "<previous_module>"
                                                        {
                                                                
# 6183 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6185 "<previous_module>"
;
                                                        
# 6186 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6187 "<previous_module>"
                                                        {
                                                                
# 6188 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6190 "<previous_module>"
;
                                                        
# 6191 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 6192 "<previous_module>"
tmain_550: IF(0,550,tmain_551)__CSEQ_removeindent;
                                                        
# 6193 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 6194 "<previous_module>"
__exit_loop_79:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 551);

                                                        
# 6195 "<previous_module>"
;
                                                        ;
                                                        
# 6196 "<previous_module>"
__exit__exponential_backoff_6_18:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 551);

                                                        
# 6197 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6199 "<previous_module>"
;
                                        }

                                        
# 6201 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 551);
                                        ;
                                        
# 6202 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 6203 "<previous_module>"
;
                                        ;
                                        
# 6204 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 6205 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 6206 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 6207 "<previous_module>"
                                        {
                                                
# 6208 "<previous_module>"
goto __exit_loop_75;
                                                ;
                                        }

                                        
# 6210 "<previous_module>"
;
                                }
                                
# 6212 "<previous_module>"
;
                                
# 6213 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 6214 "<previous_module>"
                                {
                                        
# 6215 "<previous_module>"
goto __exit_loop_75;
                                        ;
                                }

                                
# 6217 "<previous_module>"
;

# 6218 "<previous_module>"
                                {
                                        
# 6219 "<previous_module>"
tmain_551: IF(0,551,tmain_552)__CSEQ_removeindent;
                                        
# 6220 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6221 "<previous_module>"
tmain_552: IF(0,552,tmain_553)__CSEQ_removeindent;
                                        
# 6222 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 6223 "<previous_module>"
tmain_553: IF(0,553,tmain_554)__CSEQ_removeindent;
                                        
# 6224 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6225 "<previous_module>"
tmain_554: IF(0,554,tmain_555)__CSEQ_removeindent;
                                        
# 6226 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 6227 "<previous_module>"
tmain_555: IF(0,555,tmain_556)__CSEQ_removeindent;
                                        
# 6228 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6229 "<previous_module>"
tmain_556: IF(0,556,tmain_557)__CSEQ_removeindent;
                                        
# 6230 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 6231 "<previous_module>"
tmain_557: IF(0,557,tmain_558)__CSEQ_removeindent;
                                        
# 6232 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6233 "<previous_module>"
;
                                        ;
                                        
# 6234 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 6235 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 6236 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 6237 "<previous_module>"
                                        {

# 6238 "<previous_module>"
                                                {
                                                        
# 6239 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 6240 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 6241 "<previous_module>"
                                                        {
                                                                
# 6242 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6244 "<previous_module>"
;
                                                        
# 6245 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6246 "<previous_module>"
                                                        {
                                                                
# 6247 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6249 "<previous_module>"
;
                                                        
# 6250 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6251 "<previous_module>"
                                                        {
                                                                
# 6252 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6254 "<previous_module>"
;
                                                        
# 6255 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 6256 "<previous_module>"
tmain_558: IF(0,558,tmain_559)__CSEQ_removeindent;
                                                        
# 6257 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 6258 "<previous_module>"
__exit_loop_80:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 559);

                                                        
# 6259 "<previous_module>"
;
                                                        ;
                                                        
# 6260 "<previous_module>"
__exit__exponential_backoff_6_19:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 559);

                                                        
# 6261 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6263 "<previous_module>"
;
                                        }

                                        
# 6265 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 559);
                                        ;
                                        
# 6266 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 6267 "<previous_module>"
;
                                        ;
                                        
# 6268 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 6269 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 6270 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 6271 "<previous_module>"
                                        {
                                                
# 6272 "<previous_module>"
goto __exit_loop_75;
                                                ;
                                        }

                                        
# 6274 "<previous_module>"
;
                                }
                                
# 6276 "<previous_module>"
;
                                
# 6277 "<previous_module>"
tmain_559: IF(0,559,tmain_560)__CSEQ_removeindent;
                                
# 6278 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                                
# 6279 "<previous_module>"
__exit_loop_75:
                                __CPROVER_assume(__cs_pc_cs[0] >= 560);

                                
# 6280 "<previous_module>"
;
                                ;
                                
# 6281 "<previous_module>"
goto __exit__lfds711_stack_push_2_3;
                                ;
                                
# 6282 "<previous_module>"
__exit__lfds711_stack_push_2_3:
                                __CPROVER_assume(__cs_pc_cs[0] >= 560);

                                
# 6283 "<previous_module>"
;
                                ;
                        }
                        
# 6285 "<previous_module>"
;
                        
# 6286 "<previous_module>"
__cs_local_get_size_i++;
                }
                
# 6288 "<previous_module>"
;
                
# 6289 "<previous_module>"
if (!(__cs_local_get_size_i < __cs_local_get_size_actual_size))

# 6290 "<previous_module>"
                {
                        
# 6291 "<previous_module>"
goto __exit_loop_56;
                        ;
                }

                
# 6293 "<previous_module>"
;

# 6294 "<previous_module>"
                {

# 6295 "<previous_module>"
                        {
                                
# 6296 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                                
# 6297 "<previous_module>"
tmain_560: IF(0,560,tmain_561)__CSEQ_removeindent;
                                
# 6298 "<previous_module>"
__cs_param_lfds711_stack_push_ss = __cs_param_get_size_s;
                                
# 6299 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                                
# 6300 "<previous_module>"
tmain_561: IF(0,561,tmain_562)__CSEQ_removeindent;
                                
# 6301 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_get_size_datas[__cs_local_get_size_i]).se;
                                
# 6302 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                                
# 6303 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                                
# 6304 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                                
# 6305 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                                
# 6306 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                                
# 6307 "<previous_module>"
;
                                ;
                                
# 6308 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                                
# 6309 "<previous_module>"
tmain_562: IF(0,562,tmain_563)__CSEQ_removeindent;
                                
# 6310 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                                
# 6311 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 6312 "<previous_module>"
                                {
                                        
# 6313 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 6314 "<previous_module>"
tmain_563: IF(0,563,tmain_564)__CSEQ_removeindent;
                                        
# 6315 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 6316 "<previous_module>"
tmain_564: IF(0,564,tmain_565)__CSEQ_removeindent;
                                        
# 6317 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 6319 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 565);
                                ;
                                
# 6320 "<previous_module>"
;
                                ;
                                
# 6321 "<previous_module>"
;
                                ;
                                
# 6322 "<previous_module>"
;
                                ;
                                
# 6323 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                                
# 6324 "<previous_module>"
tmain_565: IF(0,565,tmain_566)__CSEQ_removeindent;
                                
# 6325 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                                
# 6326 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 6327 "<previous_module>"
                                {
                                        
# 6328 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                        
# 6329 "<previous_module>"
tmain_566: IF(0,566,tmain_567)__CSEQ_removeindent;
                                        
# 6330 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                        
# 6331 "<previous_module>"
tmain_567: IF(0,567,tmain_568)__CSEQ_removeindent;
                                        
# 6332 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                                }

                                
# 6334 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 568);
                                ;
                                
# 6335 "<previous_module>"
;
                                ;
                                
# 6336 "<previous_module>"
;
                                ;
                                
# 6337 "<previous_module>"
tmain_568: IF(0,568,tmain_569)__CSEQ_removeindent;
                                
# 6338 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                                
# 6339 "<previous_module>"
tmain_569: IF(0,569,tmain_570)__CSEQ_removeindent;
                                
# 6340 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                                
# 6341 "<previous_module>"
tmain_570: IF(0,570,tmain_571)__CSEQ_removeindent;
                                
# 6342 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                                
# 6343 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                                
# 6344 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                                
# 6345 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                                
# 6346 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 6347 "<previous_module>"
                                {
                                        
# 6348 "<previous_module>"
goto __exit_loop_81;
                                        ;
                                }

                                
# 6350 "<previous_module>"
;

# 6351 "<previous_module>"
                                {
                                        
# 6352 "<previous_module>"
tmain_571: IF(0,571,tmain_572)__CSEQ_removeindent;
                                        
# 6353 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6354 "<previous_module>"
tmain_572: IF(0,572,tmain_573)__CSEQ_removeindent;
                                        
# 6355 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 6356 "<previous_module>"
tmain_573: IF(0,573,tmain_574)__CSEQ_removeindent;
                                        
# 6357 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6358 "<previous_module>"
tmain_574: IF(0,574,tmain_575)__CSEQ_removeindent;
                                        
# 6359 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 6360 "<previous_module>"
tmain_575: IF(0,575,tmain_576)__CSEQ_removeindent;
                                        
# 6361 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6362 "<previous_module>"
tmain_576: IF(0,576,tmain_577)__CSEQ_removeindent;
                                        
# 6363 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 6364 "<previous_module>"
tmain_577: IF(0,577,tmain_578)__CSEQ_removeindent;
                                        
# 6365 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6366 "<previous_module>"
;
                                        ;
                                        
# 6367 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 6368 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 6369 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 6370 "<previous_module>"
                                        {

# 6371 "<previous_module>"
                                                {
                                                        
# 6372 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 6373 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 6374 "<previous_module>"
                                                        {
                                                                
# 6375 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6377 "<previous_module>"
;
                                                        
# 6378 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6379 "<previous_module>"
                                                        {
                                                                
# 6380 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6382 "<previous_module>"
;
                                                        
# 6383 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6384 "<previous_module>"
                                                        {
                                                                
# 6385 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6387 "<previous_module>"
;
                                                        
# 6388 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 6389 "<previous_module>"
tmain_578: IF(0,578,tmain_579)__CSEQ_removeindent;
                                                        
# 6390 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 6391 "<previous_module>"
__exit_loop_82:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 579);

                                                        
# 6392 "<previous_module>"
;
                                                        ;
                                                        
# 6393 "<previous_module>"
__exit__exponential_backoff_6_20:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 579);

                                                        
# 6394 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6396 "<previous_module>"
;
                                        }

                                        
# 6398 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 579);
                                        ;
                                        
# 6399 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 6400 "<previous_module>"
;
                                        ;
                                        
# 6401 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 6402 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 6403 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 6404 "<previous_module>"
                                        {
                                                
# 6405 "<previous_module>"
goto __exit_loop_81;
                                                ;
                                        }

                                        
# 6407 "<previous_module>"
;
                                }
                                
# 6409 "<previous_module>"
;
                                
# 6410 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 6411 "<previous_module>"
                                {
                                        
# 6412 "<previous_module>"
goto __exit_loop_81;
                                        ;
                                }

                                
# 6414 "<previous_module>"
;

# 6415 "<previous_module>"
                                {
                                        
# 6416 "<previous_module>"
tmain_579: IF(0,579,tmain_580)__CSEQ_removeindent;
                                        
# 6417 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6418 "<previous_module>"
tmain_580: IF(0,580,tmain_581)__CSEQ_removeindent;
                                        
# 6419 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 6420 "<previous_module>"
tmain_581: IF(0,581,tmain_582)__CSEQ_removeindent;
                                        
# 6421 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6422 "<previous_module>"
tmain_582: IF(0,582,tmain_583)__CSEQ_removeindent;
                                        
# 6423 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 6424 "<previous_module>"
tmain_583: IF(0,583,tmain_584)__CSEQ_removeindent;
                                        
# 6425 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6426 "<previous_module>"
tmain_584: IF(0,584,tmain_585)__CSEQ_removeindent;
                                        
# 6427 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 6428 "<previous_module>"
tmain_585: IF(0,585,tmain_586)__CSEQ_removeindent;
                                        
# 6429 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6430 "<previous_module>"
;
                                        ;
                                        
# 6431 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 6432 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 6433 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 6434 "<previous_module>"
                                        {

# 6435 "<previous_module>"
                                                {
                                                        
# 6436 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 6437 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 6438 "<previous_module>"
                                                        {
                                                                
# 6439 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6441 "<previous_module>"
;
                                                        
# 6442 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6443 "<previous_module>"
                                                        {
                                                                
# 6444 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6446 "<previous_module>"
;
                                                        
# 6447 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6448 "<previous_module>"
                                                        {
                                                                
# 6449 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6451 "<previous_module>"
;
                                                        
# 6452 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 6453 "<previous_module>"
tmain_586: IF(0,586,tmain_587)__CSEQ_removeindent;
                                                        
# 6454 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 6455 "<previous_module>"
__exit_loop_83:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 587);

                                                        
# 6456 "<previous_module>"
;
                                                        ;
                                                        
# 6457 "<previous_module>"
__exit__exponential_backoff_6_21:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 587);

                                                        
# 6458 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6460 "<previous_module>"
;
                                        }

                                        
# 6462 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 587);
                                        ;
                                        
# 6463 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 6464 "<previous_module>"
;
                                        ;
                                        
# 6465 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 6466 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 6467 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 6468 "<previous_module>"
                                        {
                                                
# 6469 "<previous_module>"
goto __exit_loop_81;
                                                ;
                                        }

                                        
# 6471 "<previous_module>"
;
                                }
                                
# 6473 "<previous_module>"
;
                                
# 6474 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 6475 "<previous_module>"
                                {
                                        
# 6476 "<previous_module>"
goto __exit_loop_81;
                                        ;
                                }

                                
# 6478 "<previous_module>"
;

# 6479 "<previous_module>"
                                {
                                        
# 6480 "<previous_module>"
tmain_587: IF(0,587,tmain_588)__CSEQ_removeindent;
                                        
# 6481 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6482 "<previous_module>"
tmain_588: IF(0,588,tmain_589)__CSEQ_removeindent;
                                        
# 6483 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 6484 "<previous_module>"
tmain_589: IF(0,589,tmain_590)__CSEQ_removeindent;
                                        
# 6485 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6486 "<previous_module>"
tmain_590: IF(0,590,tmain_591)__CSEQ_removeindent;
                                        
# 6487 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 6488 "<previous_module>"
tmain_591: IF(0,591,tmain_592)__CSEQ_removeindent;
                                        
# 6489 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6490 "<previous_module>"
tmain_592: IF(0,592,tmain_593)__CSEQ_removeindent;
                                        
# 6491 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 6492 "<previous_module>"
tmain_593: IF(0,593,tmain_594)__CSEQ_removeindent;
                                        
# 6493 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6494 "<previous_module>"
;
                                        ;
                                        
# 6495 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 6496 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 6497 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 6498 "<previous_module>"
                                        {

# 6499 "<previous_module>"
                                                {
                                                        
# 6500 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 6501 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 6502 "<previous_module>"
                                                        {
                                                                
# 6503 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6505 "<previous_module>"
;
                                                        
# 6506 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6507 "<previous_module>"
                                                        {
                                                                
# 6508 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6510 "<previous_module>"
;
                                                        
# 6511 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6512 "<previous_module>"
                                                        {
                                                                
# 6513 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6515 "<previous_module>"
;
                                                        
# 6516 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 6517 "<previous_module>"
tmain_594: IF(0,594,tmain_595)__CSEQ_removeindent;
                                                        
# 6518 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 6519 "<previous_module>"
__exit_loop_84:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 595);

                                                        
# 6520 "<previous_module>"
;
                                                        ;
                                                        
# 6521 "<previous_module>"
__exit__exponential_backoff_6_22:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 595);

                                                        
# 6522 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6524 "<previous_module>"
;
                                        }

                                        
# 6526 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 595);
                                        ;
                                        
# 6527 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 6528 "<previous_module>"
;
                                        ;
                                        
# 6529 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 6530 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 6531 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 6532 "<previous_module>"
                                        {
                                                
# 6533 "<previous_module>"
goto __exit_loop_81;
                                                ;
                                        }

                                        
# 6535 "<previous_module>"
;
                                }
                                
# 6537 "<previous_module>"
;
                                
# 6538 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 6539 "<previous_module>"
                                {
                                        
# 6540 "<previous_module>"
goto __exit_loop_81;
                                        ;
                                }

                                
# 6542 "<previous_module>"
;

# 6543 "<previous_module>"
                                {
                                        
# 6544 "<previous_module>"
tmain_595: IF(0,595,tmain_596)__CSEQ_removeindent;
                                        
# 6545 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6546 "<previous_module>"
tmain_596: IF(0,596,tmain_597)__CSEQ_removeindent;
                                        
# 6547 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 6548 "<previous_module>"
tmain_597: IF(0,597,tmain_598)__CSEQ_removeindent;
                                        
# 6549 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6550 "<previous_module>"
tmain_598: IF(0,598,tmain_599)__CSEQ_removeindent;
                                        
# 6551 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 6552 "<previous_module>"
tmain_599: IF(0,599,tmain_600)__CSEQ_removeindent;
                                        
# 6553 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6554 "<previous_module>"
tmain_600: IF(0,600,tmain_601)__CSEQ_removeindent;
                                        
# 6555 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 6556 "<previous_module>"
tmain_601: IF(0,601,tmain_602)__CSEQ_removeindent;
                                        
# 6557 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6558 "<previous_module>"
;
                                        ;
                                        
# 6559 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 6560 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 6561 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 6562 "<previous_module>"
                                        {

# 6563 "<previous_module>"
                                                {
                                                        
# 6564 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 6565 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 6566 "<previous_module>"
                                                        {
                                                                
# 6567 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6569 "<previous_module>"
;
                                                        
# 6570 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6571 "<previous_module>"
                                                        {
                                                                
# 6572 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6574 "<previous_module>"
;
                                                        
# 6575 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6576 "<previous_module>"
                                                        {
                                                                
# 6577 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6579 "<previous_module>"
;
                                                        
# 6580 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 6581 "<previous_module>"
tmain_602: IF(0,602,tmain_603)__CSEQ_removeindent;
                                                        
# 6582 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 6583 "<previous_module>"
__exit_loop_85:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 603);

                                                        
# 6584 "<previous_module>"
;
                                                        ;
                                                        
# 6585 "<previous_module>"
__exit__exponential_backoff_6_23:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 603);

                                                        
# 6586 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6588 "<previous_module>"
;
                                        }

                                        
# 6590 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 603);
                                        ;
                                        
# 6591 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 6592 "<previous_module>"
;
                                        ;
                                        
# 6593 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 6594 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 6595 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 6596 "<previous_module>"
                                        {
                                                
# 6597 "<previous_module>"
goto __exit_loop_81;
                                                ;
                                        }

                                        
# 6599 "<previous_module>"
;
                                }
                                
# 6601 "<previous_module>"
;
                                
# 6602 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 6603 "<previous_module>"
                                {
                                        
# 6604 "<previous_module>"
goto __exit_loop_81;
                                        ;
                                }

                                
# 6606 "<previous_module>"
;

# 6607 "<previous_module>"
                                {
                                        
# 6608 "<previous_module>"
tmain_603: IF(0,603,tmain_604)__CSEQ_removeindent;
                                        
# 6609 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6610 "<previous_module>"
tmain_604: IF(0,604,tmain_605)__CSEQ_removeindent;
                                        
# 6611 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                        
# 6612 "<previous_module>"
tmain_605: IF(0,605,tmain_606)__CSEQ_removeindent;
                                        
# 6613 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6614 "<previous_module>"
tmain_606: IF(0,606,tmain_607)__CSEQ_removeindent;
                                        
# 6615 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                        
# 6616 "<previous_module>"
tmain_607: IF(0,607,tmain_608)__CSEQ_removeindent;
                                        
# 6617 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 6618 "<previous_module>"
tmain_608: IF(0,608,tmain_609)__CSEQ_removeindent;
                                        
# 6619 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                        
# 6620 "<previous_module>"
tmain_609: IF(0,609,tmain_610)__CSEQ_removeindent;
                                        
# 6621 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 6622 "<previous_module>"
;
                                        ;
                                        
# 6623 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                        
# 6624 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                        
# 6625 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 6626 "<previous_module>"
                                        {

# 6627 "<previous_module>"
                                                {
                                                        
# 6628 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                        
# 6629 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 6630 "<previous_module>"
                                                        {
                                                                
# 6631 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6633 "<previous_module>"
;
                                                        
# 6634 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6635 "<previous_module>"
                                                        {
                                                                
# 6636 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6638 "<previous_module>"
;
                                                        
# 6639 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 6640 "<previous_module>"
                                                        {
                                                                
# 6641 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 6643 "<previous_module>"
;
                                                        
# 6644 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                        
# 6645 "<previous_module>"
tmain_610: IF(0,610,tmain_611)__CSEQ_removeindent;
                                                        
# 6646 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                        
# 6647 "<previous_module>"
__exit_loop_86:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 611);

                                                        
# 6648 "<previous_module>"
;
                                                        ;
                                                        
# 6649 "<previous_module>"
__exit__exponential_backoff_6_24:
                                                        __CPROVER_assume(__cs_pc_cs[0] >= 611);

                                                        
# 6650 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 6652 "<previous_module>"
;
                                        }

                                        
# 6654 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 611);
                                        ;
                                        
# 6655 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                        
# 6656 "<previous_module>"
;
                                        ;
                                        
# 6657 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                        
# 6658 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                        
# 6659 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 6660 "<previous_module>"
                                        {
                                                
# 6661 "<previous_module>"
goto __exit_loop_81;
                                                ;
                                        }

                                        
# 6663 "<previous_module>"
;
                                }
                                
# 6665 "<previous_module>"
;
                                
# 6666 "<previous_module>"
tmain_611: IF(0,611,tmain_612)__CSEQ_removeindent;
                                
# 6667 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                                
# 6668 "<previous_module>"
__exit_loop_81:
                                __CPROVER_assume(__cs_pc_cs[0] >= 612);

                                
# 6669 "<previous_module>"
;
                                ;
                                
# 6670 "<previous_module>"
goto __exit__lfds711_stack_push_2_4;
                                ;
                                
# 6671 "<previous_module>"
__exit__lfds711_stack_push_2_4:
                                __CPROVER_assume(__cs_pc_cs[0] >= 612);

                                
# 6672 "<previous_module>"
;
                                ;
                        }
                        
# 6674 "<previous_module>"
;
                        
# 6675 "<previous_module>"
__cs_local_get_size_i++;
                }
                
# 6677 "<previous_module>"
;
                
# 6678 "<previous_module>"
tmain_612: IF(0,612,tmain_613)__CSEQ_removeindent;
                
# 6679 "<previous_module>"
__CPROVER_assume(!(__cs_local_get_size_i < __cs_local_get_size_actual_size));
                
# 6680 "<previous_module>"
__exit_loop_56:
                __CPROVER_assume(__cs_pc_cs[0] >= 613);

                
# 6681 "<previous_module>"
;
                ;
                
# 6682 "<previous_module>"
__cs_retval__get_size_1 = __cs_local_get_size_actual_size;
                
# 6683 "<previous_module>"
goto __exit__get_size_1;
                ;
                
# 6684 "<previous_module>"
__exit__get_size_1:
                __CPROVER_assume(__cs_pc_cs[0] >= 613);

                
# 6685 "<previous_module>"
;
                ;
        }
        
# 6687 "<previous_module>"
;
        
# 6688 "<previous_module>"
__cs_local_main_size_ss = __cs_retval__get_size_1;
        
# 6689 "<previous_module>"
assert(0);
        
# 6690 "<previous_module>"
goto __exit_main;
        ;
        
# 6691 "<previous_module>"
__exit_main:
        __CPROVER_assume(__cs_pc_cs[0] >= 613);

        
# 6692 "<previous_module>"
;
        ;
        
# 6693 "<previous_module>"
tmain_613: __CSEQ_removeindent;
        
# 6694 "<previous_module>"
__cs_exit(0, 0);
}


# 6696 "<previous_module>"
int main(void)
{
        
# 6697 "<previous_module>"
/* round  0 */__CSEQ_removeindent;
        
# 6698 "<previous_module>"
    /* main */__CSEQ_removeindent;
        
# 6699 "<previous_module>"
unsigned __CPROVER_bitvector[10] __cs_tmp_t0_r0;
        
# 6700 "<previous_module>"
__cs_pc_cs[0] = __cs_tmp_t0_r0;
        
# 6701 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] > 0);
        
# 6702 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 613);
        
# 6703 "<previous_module>"
main_thread();
        
# 6704 "<previous_module>"
__cs_pc[0] = __cs_pc_cs[0];
        
# 6706 "<previous_module>"
    /* push_0 */__CSEQ_removeindent;
        
# 6707 "<previous_module>"
unsigned __CPROVER_bitvector[6] __cs_tmp_t1_r0;
        
# 6708 "<previous_module>"
if (__cs_active_thread[1])
        {
                
# 6709 "<previous_module>"
__cs_pc_cs[1] = __cs_tmp_t1_r0;
                
# 6710 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] <= 61);
                
# 6711 "<previous_module>"
push_0(__cs_threadargs[1]);
                
# 6712 "<previous_module>"
__cs_pc[1] = __cs_pc_cs[1];
        }

        
# 6715 "<previous_module>"
    /* pop_0 */__CSEQ_removeindent;
        
# 6716 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_tmp_t2_r0;
        
# 6717 "<previous_module>"
if (__cs_active_thread[2])
        {
                
# 6718 "<previous_module>"
__cs_pc_cs[2] = __cs_tmp_t2_r0;
                
# 6719 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] <= 78);
                
# 6720 "<previous_module>"
pop_0(__cs_threadargs[2]);
                
# 6721 "<previous_module>"
__cs_pc[2] = __cs_pc_cs[2];
        }

        
# 6724 "<previous_module>"
unsigned __CPROVER_bitvector[10] __cs_tmp_t0_r1;
        
# 6725 "<previous_module>"
if (__cs_active_thread[0] == 1)
        {
                
# 6726 "<previous_module>"
__cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
                
# 6727 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                
# 6728 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 613);
                
# 6729 "<previous_module>"
main_thread();
        }

        
# 6731 "<previous_module>"
return 0;
}

