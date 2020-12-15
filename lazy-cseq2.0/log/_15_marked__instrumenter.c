
# 1 "<previous_module>"
unsigned __CPROVER_bitvector[1] __cs_active_thread[3] = {1};

# 2 "<previous_module>"
unsigned __CPROVER_bitvector[9] __cs_pc[3];

# 3 "<previous_module>"
unsigned __CPROVER_bitvector[10] __cs_pc_cs[3];

# 4 "<previous_module>"
unsigned __CPROVER_bitvector[2] __cs_last_thread;

# 5 "<previous_module>"
unsigned __CPROVER_bitvector[9] __cs_thread_lines[3] = {375, 121, 136};

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
struct lfds711_stack_state *ss;

# 782 "<previous_module>"
__cs_mutex_t lock;

# 783 "<previous_module>"
void *thread1_0(void *__cs_param_thread1___cs_unused)

# 784 "<previous_module>"
{
        
# 785 "<previous_module>"
IF(1,0,tthread1_0_1)__CSEQ_removeindent;
        
# 786 "<previous_module>"
;
        ;
        
# 787 "<previous_module>"
static _Bool __cs_local_thread1___cs_tmp_if_cond_25;
        
# 788 "<previous_module>"
tthread1_0_1: IF(1,1,tthread1_0_2)__CSEQ_removeindent;
        
# 789 "<previous_module>"
__cs_local_thread1___cs_tmp_if_cond_25 = ATOMIC_OPERATION;
        
# 790 "<previous_module>"
if (__cs_local_thread1___cs_tmp_if_cond_25)

# 791 "<previous_module>"
        {
                
# 792 "<previous_module>"
tthread1_0_2: IF(1,2,tthread1_0_3)__CSEQ_removeindent;
                
# 793 "<previous_module>"
__cs_mutex_lock(&lock, 1);
        }

        
# 795 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 3);
        ;
        
# 796 "<previous_module>"
;
        ;

# 797 "<previous_module>"
        {
                
# 798 "<previous_module>"
static struct lfds711_stack_state *__cs_param_insert_s;
                
# 799 "<previous_module>"
tthread1_0_3: IF(1,3,tthread1_0_4)__CSEQ_removeindent;
                
# 800 "<previous_module>"
__cs_param_insert_s = ss;
                
# 801 "<previous_module>"
static int long long unsigned __cs_param_insert_id;
                
# 802 "<previous_module>"
__cs_param_insert_id = 0;
                
# 803 "<previous_module>"
static struct test_data *__cs_local_insert_td;
                
# 804 "<previous_module>"
tthread1_0_4: IF(1,4,tthread1_0_5)__CSEQ_removeindent;
                
# 805 "<previous_module>"
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
                
# 806 "<previous_module>"
tthread1_0_5: IF(1,5,tthread1_0_6)__CSEQ_removeindent;
                
# 807 "<previous_module>"
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
                
# 808 "<previous_module>"
tthread1_0_6: IF(1,6,tthread1_0_7)__CSEQ_removeindent;
                
# 809 "<previous_module>"
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);

# 810 "<previous_module>"
                {
                        
# 811 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                        
# 812 "<previous_module>"
tthread1_0_7: IF(1,7,tthread1_0_8)__CSEQ_removeindent;
                        
# 813 "<previous_module>"
__cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
                        
# 814 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                        
# 815 "<previous_module>"
tthread1_0_8: IF(1,8,tthread1_0_9)__CSEQ_removeindent;
                        
# 816 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
                        
# 817 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                        
# 818 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                        
# 819 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                        
# 820 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                        
# 821 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                        
# 822 "<previous_module>"
;
                        ;
                        
# 823 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                        
# 824 "<previous_module>"
tthread1_0_9: IF(1,9,tthread1_0_10)__CSEQ_removeindent;
                        
# 825 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                        
# 826 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 827 "<previous_module>"
                        {
                                
# 828 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 829 "<previous_module>"
tthread1_0_10: IF(1,10,tthread1_0_11)__CSEQ_removeindent;
                                
# 830 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 831 "<previous_module>"
tthread1_0_11: IF(1,11,tthread1_0_12)__CSEQ_removeindent;
                                
# 832 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 834 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 12);
                        ;
                        
# 835 "<previous_module>"
;
                        ;
                        
# 836 "<previous_module>"
;
                        ;
                        
# 837 "<previous_module>"
;
                        ;
                        
# 838 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                        
# 839 "<previous_module>"
tthread1_0_12: IF(1,12,tthread1_0_13)__CSEQ_removeindent;
                        
# 840 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                        
# 841 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 842 "<previous_module>"
                        {
                                
# 843 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 844 "<previous_module>"
tthread1_0_13: IF(1,13,tthread1_0_14)__CSEQ_removeindent;
                                
# 845 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 846 "<previous_module>"
tthread1_0_14: IF(1,14,tthread1_0_15)__CSEQ_removeindent;
                                
# 847 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 849 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 15);
                        ;
                        
# 850 "<previous_module>"
;
                        ;
                        
# 851 "<previous_module>"
;
                        ;
                        
# 852 "<previous_module>"
tthread1_0_15: IF(1,15,tthread1_0_16)__CSEQ_removeindent;
                        
# 853 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                        
# 854 "<previous_module>"
tthread1_0_16: IF(1,16,tthread1_0_17)__CSEQ_removeindent;
                        
# 855 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                        
# 856 "<previous_module>"
tthread1_0_17: IF(1,17,tthread1_0_18)__CSEQ_removeindent;
                        
# 857 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                        
# 858 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                        
# 859 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                        
# 860 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                        
# 861 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 862 "<previous_module>"
                        {
                                
# 863 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 865 "<previous_module>"
;

# 866 "<previous_module>"
                        {
                                
# 867 "<previous_module>"
tthread1_0_18: IF(1,18,tthread1_0_19)__CSEQ_removeindent;
                                
# 868 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 869 "<previous_module>"
tthread1_0_19: IF(1,19,tthread1_0_20)__CSEQ_removeindent;
                                
# 870 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 871 "<previous_module>"
tthread1_0_20: IF(1,20,tthread1_0_21)__CSEQ_removeindent;
                                
# 872 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 873 "<previous_module>"
tthread1_0_21: IF(1,21,tthread1_0_22)__CSEQ_removeindent;
                                
# 874 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 875 "<previous_module>"
tthread1_0_22: IF(1,22,tthread1_0_23)__CSEQ_removeindent;
                                
# 876 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 877 "<previous_module>"
tthread1_0_23: IF(1,23,tthread1_0_24)__CSEQ_removeindent;
                                
# 878 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 879 "<previous_module>"
tthread1_0_24: IF(1,24,tthread1_0_25)__CSEQ_removeindent;
                                
# 880 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 881 "<previous_module>"
;
                                ;
                                
# 882 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 883 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 884 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 885 "<previous_module>"
                                {

# 886 "<previous_module>"
                                        {
                                                
# 887 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 888 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 889 "<previous_module>"
                                                {
                                                        
# 890 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 892 "<previous_module>"
;
                                                
# 893 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 894 "<previous_module>"
                                                {
                                                        
# 895 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 897 "<previous_module>"
;
                                                
# 898 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 899 "<previous_module>"
                                                {
                                                        
# 900 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 902 "<previous_module>"
;
                                                
# 903 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 904 "<previous_module>"
tthread1_0_25: IF(1,25,tthread1_0_26)__CSEQ_removeindent;
                                                
# 905 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 906 "<previous_module>"
__exit_loop_2:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 26);

                                                
# 907 "<previous_module>"
;
                                                ;
                                                
# 908 "<previous_module>"
__exit__exponential_backoff_1_0:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 26);

                                                
# 909 "<previous_module>"
;
                                                ;
                                        }
                                        
# 911 "<previous_module>"
;
                                }

                                
# 913 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 26);
                                ;
                                
# 914 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 915 "<previous_module>"
;
                                ;
                                
# 916 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 917 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 918 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 919 "<previous_module>"
                                {
                                        
# 920 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 922 "<previous_module>"
;
                        }
                        
# 924 "<previous_module>"
;
                        
# 925 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 926 "<previous_module>"
                        {
                                
# 927 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 929 "<previous_module>"
;

# 930 "<previous_module>"
                        {
                                
# 931 "<previous_module>"
tthread1_0_26: IF(1,26,tthread1_0_27)__CSEQ_removeindent;
                                
# 932 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 933 "<previous_module>"
tthread1_0_27: IF(1,27,tthread1_0_28)__CSEQ_removeindent;
                                
# 934 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 935 "<previous_module>"
tthread1_0_28: IF(1,28,tthread1_0_29)__CSEQ_removeindent;
                                
# 936 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 937 "<previous_module>"
tthread1_0_29: IF(1,29,tthread1_0_30)__CSEQ_removeindent;
                                
# 938 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 939 "<previous_module>"
tthread1_0_30: IF(1,30,tthread1_0_31)__CSEQ_removeindent;
                                
# 940 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 941 "<previous_module>"
tthread1_0_31: IF(1,31,tthread1_0_32)__CSEQ_removeindent;
                                
# 942 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 943 "<previous_module>"
tthread1_0_32: IF(1,32,tthread1_0_33)__CSEQ_removeindent;
                                
# 944 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 945 "<previous_module>"
;
                                ;
                                
# 946 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 947 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 948 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 949 "<previous_module>"
                                {

# 950 "<previous_module>"
                                        {
                                                
# 951 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 952 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 953 "<previous_module>"
                                                {
                                                        
# 954 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 956 "<previous_module>"
;
                                                
# 957 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 958 "<previous_module>"
                                                {
                                                        
# 959 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 961 "<previous_module>"
;
                                                
# 962 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 963 "<previous_module>"
                                                {
                                                        
# 964 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 966 "<previous_module>"
;
                                                
# 967 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 968 "<previous_module>"
tthread1_0_33: IF(1,33,tthread1_0_34)__CSEQ_removeindent;
                                                
# 969 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 970 "<previous_module>"
__exit_loop_3:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 34);

                                                
# 971 "<previous_module>"
;
                                                ;
                                                
# 972 "<previous_module>"
__exit__exponential_backoff_1_1:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 34);

                                                
# 973 "<previous_module>"
;
                                                ;
                                        }
                                        
# 975 "<previous_module>"
;
                                }

                                
# 977 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 34);
                                ;
                                
# 978 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 979 "<previous_module>"
;
                                ;
                                
# 980 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 981 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 982 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 983 "<previous_module>"
                                {
                                        
# 984 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 986 "<previous_module>"
;
                        }
                        
# 988 "<previous_module>"
;
                        
# 989 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 990 "<previous_module>"
                        {
                                
# 991 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 993 "<previous_module>"
;

# 994 "<previous_module>"
                        {
                                
# 995 "<previous_module>"
tthread1_0_34: IF(1,34,tthread1_0_35)__CSEQ_removeindent;
                                
# 996 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 997 "<previous_module>"
tthread1_0_35: IF(1,35,tthread1_0_36)__CSEQ_removeindent;
                                
# 998 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 999 "<previous_module>"
tthread1_0_36: IF(1,36,tthread1_0_37)__CSEQ_removeindent;
                                
# 1000 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1001 "<previous_module>"
tthread1_0_37: IF(1,37,tthread1_0_38)__CSEQ_removeindent;
                                
# 1002 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1003 "<previous_module>"
tthread1_0_38: IF(1,38,tthread1_0_39)__CSEQ_removeindent;
                                
# 1004 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1005 "<previous_module>"
tthread1_0_39: IF(1,39,tthread1_0_40)__CSEQ_removeindent;
                                
# 1006 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1007 "<previous_module>"
tthread1_0_40: IF(1,40,tthread1_0_41)__CSEQ_removeindent;
                                
# 1008 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1009 "<previous_module>"
;
                                ;
                                
# 1010 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1011 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1012 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1013 "<previous_module>"
                                {

# 1014 "<previous_module>"
                                        {
                                                
# 1015 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1016 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1017 "<previous_module>"
                                                {
                                                        
# 1018 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1020 "<previous_module>"
;
                                                
# 1021 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1022 "<previous_module>"
                                                {
                                                        
# 1023 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1025 "<previous_module>"
;
                                                
# 1026 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1027 "<previous_module>"
                                                {
                                                        
# 1028 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1030 "<previous_module>"
;
                                                
# 1031 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1032 "<previous_module>"
tthread1_0_41: IF(1,41,tthread1_0_42)__CSEQ_removeindent;
                                                
# 1033 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1034 "<previous_module>"
__exit_loop_4:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 42);

                                                
# 1035 "<previous_module>"
;
                                                ;
                                                
# 1036 "<previous_module>"
__exit__exponential_backoff_1_2:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 42);

                                                
# 1037 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1039 "<previous_module>"
;
                                }

                                
# 1041 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 42);
                                ;
                                
# 1042 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1043 "<previous_module>"
;
                                ;
                                
# 1044 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1045 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1046 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1047 "<previous_module>"
                                {
                                        
# 1048 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 1050 "<previous_module>"
;
                        }
                        
# 1052 "<previous_module>"
;
                        
# 1053 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1054 "<previous_module>"
                        {
                                
# 1055 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 1057 "<previous_module>"
;

# 1058 "<previous_module>"
                        {
                                
# 1059 "<previous_module>"
tthread1_0_42: IF(1,42,tthread1_0_43)__CSEQ_removeindent;
                                
# 1060 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1061 "<previous_module>"
tthread1_0_43: IF(1,43,tthread1_0_44)__CSEQ_removeindent;
                                
# 1062 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1063 "<previous_module>"
tthread1_0_44: IF(1,44,tthread1_0_45)__CSEQ_removeindent;
                                
# 1064 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1065 "<previous_module>"
tthread1_0_45: IF(1,45,tthread1_0_46)__CSEQ_removeindent;
                                
# 1066 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1067 "<previous_module>"
tthread1_0_46: IF(1,46,tthread1_0_47)__CSEQ_removeindent;
                                
# 1068 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1069 "<previous_module>"
tthread1_0_47: IF(1,47,tthread1_0_48)__CSEQ_removeindent;
                                
# 1070 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1071 "<previous_module>"
tthread1_0_48: IF(1,48,tthread1_0_49)__CSEQ_removeindent;
                                
# 1072 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1073 "<previous_module>"
;
                                ;
                                
# 1074 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1075 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1076 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1077 "<previous_module>"
                                {

# 1078 "<previous_module>"
                                        {
                                                
# 1079 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1080 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1081 "<previous_module>"
                                                {
                                                        
# 1082 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1084 "<previous_module>"
;
                                                
# 1085 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1086 "<previous_module>"
                                                {
                                                        
# 1087 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1089 "<previous_module>"
;
                                                
# 1090 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1091 "<previous_module>"
                                                {
                                                        
# 1092 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1094 "<previous_module>"
;
                                                
# 1095 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1096 "<previous_module>"
tthread1_0_49: IF(1,49,tthread1_0_50)__CSEQ_removeindent;
                                                
# 1097 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1098 "<previous_module>"
__exit_loop_5:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 50);

                                                
# 1099 "<previous_module>"
;
                                                ;
                                                
# 1100 "<previous_module>"
__exit__exponential_backoff_1_3:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 50);

                                                
# 1101 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1103 "<previous_module>"
;
                                }

                                
# 1105 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 50);
                                ;
                                
# 1106 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1107 "<previous_module>"
;
                                ;
                                
# 1108 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1109 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1110 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1111 "<previous_module>"
                                {
                                        
# 1112 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 1114 "<previous_module>"
;
                        }
                        
# 1116 "<previous_module>"
;
                        
# 1117 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1118 "<previous_module>"
                        {
                                
# 1119 "<previous_module>"
goto __exit_loop_1;
                                ;
                        }

                        
# 1121 "<previous_module>"
;

# 1122 "<previous_module>"
                        {
                                
# 1123 "<previous_module>"
tthread1_0_50: IF(1,50,tthread1_0_51)__CSEQ_removeindent;
                                
# 1124 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1125 "<previous_module>"
tthread1_0_51: IF(1,51,tthread1_0_52)__CSEQ_removeindent;
                                
# 1126 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1127 "<previous_module>"
tthread1_0_52: IF(1,52,tthread1_0_53)__CSEQ_removeindent;
                                
# 1128 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1129 "<previous_module>"
tthread1_0_53: IF(1,53,tthread1_0_54)__CSEQ_removeindent;
                                
# 1130 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1131 "<previous_module>"
tthread1_0_54: IF(1,54,tthread1_0_55)__CSEQ_removeindent;
                                
# 1132 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1133 "<previous_module>"
tthread1_0_55: IF(1,55,tthread1_0_56)__CSEQ_removeindent;
                                
# 1134 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1135 "<previous_module>"
tthread1_0_56: IF(1,56,tthread1_0_57)__CSEQ_removeindent;
                                
# 1136 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1137 "<previous_module>"
;
                                ;
                                
# 1138 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1139 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1140 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1141 "<previous_module>"
                                {

# 1142 "<previous_module>"
                                        {
                                                
# 1143 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1144 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1145 "<previous_module>"
                                                {
                                                        
# 1146 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1148 "<previous_module>"
;
                                                
# 1149 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1150 "<previous_module>"
                                                {
                                                        
# 1151 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1153 "<previous_module>"
;
                                                
# 1154 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1155 "<previous_module>"
                                                {
                                                        
# 1156 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1158 "<previous_module>"
;
                                                
# 1159 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1160 "<previous_module>"
tthread1_0_57: IF(1,57,tthread1_0_58)__CSEQ_removeindent;
                                                
# 1161 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1162 "<previous_module>"
__exit_loop_6:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 58);

                                                
# 1163 "<previous_module>"
;
                                                ;
                                                
# 1164 "<previous_module>"
__exit__exponential_backoff_1_4:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 58);

                                                
# 1165 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1167 "<previous_module>"
;
                                }

                                
# 1169 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 58);
                                ;
                                
# 1170 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1171 "<previous_module>"
;
                                ;
                                
# 1172 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1173 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1174 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1175 "<previous_module>"
                                {
                                        
# 1176 "<previous_module>"
goto __exit_loop_1;
                                        ;
                                }

                                
# 1178 "<previous_module>"
;
                        }
                        
# 1180 "<previous_module>"
;
                        
# 1181 "<previous_module>"
tthread1_0_58: IF(1,58,tthread1_0_59)__CSEQ_removeindent;
                        
# 1182 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                        
# 1183 "<previous_module>"
__exit_loop_1:
                        __CPROVER_assume(__cs_pc_cs[1] >= 59);

                        
# 1184 "<previous_module>"
;
                        ;
                        
# 1185 "<previous_module>"
goto __exit__lfds711_stack_push_1;
                        ;
                        
# 1186 "<previous_module>"
__exit__lfds711_stack_push_1:
                        __CPROVER_assume(__cs_pc_cs[1] >= 59);

                        
# 1187 "<previous_module>"
;
                        ;
                }
                
# 1189 "<previous_module>"
;
                
# 1190 "<previous_module>"
__exit__insert_1:
                __CPROVER_assume(__cs_pc_cs[1] >= 59);

                
# 1191 "<previous_module>"
;
                ;
        }
        
# 1193 "<previous_module>"
;
        
# 1194 "<previous_module>"
;
        ;
        
# 1195 "<previous_module>"
static _Bool __cs_local_thread1___cs_tmp_if_cond_26;
        
# 1196 "<previous_module>"
tthread1_0_59: IF(1,59,tthread1_0_60)__CSEQ_removeindent;
        
# 1197 "<previous_module>"
__cs_local_thread1___cs_tmp_if_cond_26 = ATOMIC_OPERATION;
        
# 1198 "<previous_module>"
if (__cs_local_thread1___cs_tmp_if_cond_26)

# 1199 "<previous_module>"
        {
                
# 1200 "<previous_module>"
tthread1_0_60: IF(1,60,tthread1_0_61)__CSEQ_removeindent;
                
# 1201 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
        }

        
# 1203 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 61);
        ;
        
# 1204 "<previous_module>"
;
        ;
        
# 1205 "<previous_module>"
;
        ;
        
# 1206 "<previous_module>"
static _Bool __cs_local_thread1___cs_tmp_if_cond_27;
        
# 1207 "<previous_module>"
tthread1_0_61: IF(1,61,tthread1_0_62)__CSEQ_removeindent;
        
# 1208 "<previous_module>"
__cs_local_thread1___cs_tmp_if_cond_27 = ATOMIC_OPERATION;
        
# 1209 "<previous_module>"
if (__cs_local_thread1___cs_tmp_if_cond_27)

# 1210 "<previous_module>"
        {
                
# 1211 "<previous_module>"
tthread1_0_62: IF(1,62,tthread1_0_63)__CSEQ_removeindent;
                
# 1212 "<previous_module>"
__cs_mutex_lock(&lock, 1);
        }

        
# 1214 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 63);
        ;
        
# 1215 "<previous_module>"
;
        ;

# 1216 "<previous_module>"
        {
                
# 1217 "<previous_module>"
static struct lfds711_stack_state *__cs_param_insert_s;
                
# 1218 "<previous_module>"
tthread1_0_63: IF(1,63,tthread1_0_64)__CSEQ_removeindent;
                
# 1219 "<previous_module>"
__cs_param_insert_s = ss;
                
# 1220 "<previous_module>"
static int long long unsigned __cs_param_insert_id;
                
# 1221 "<previous_module>"
__cs_param_insert_id = 1;
                
# 1222 "<previous_module>"
static struct test_data *__cs_local_insert_td;
                
# 1223 "<previous_module>"
tthread1_0_64: IF(1,64,tthread1_0_65)__CSEQ_removeindent;
                
# 1224 "<previous_module>"
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
                
# 1225 "<previous_module>"
tthread1_0_65: IF(1,65,tthread1_0_66)__CSEQ_removeindent;
                
# 1226 "<previous_module>"
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
                
# 1227 "<previous_module>"
tthread1_0_66: IF(1,66,tthread1_0_67)__CSEQ_removeindent;
                
# 1228 "<previous_module>"
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);

# 1229 "<previous_module>"
                {
                        
# 1230 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                        
# 1231 "<previous_module>"
tthread1_0_67: IF(1,67,tthread1_0_68)__CSEQ_removeindent;
                        
# 1232 "<previous_module>"
__cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
                        
# 1233 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                        
# 1234 "<previous_module>"
tthread1_0_68: IF(1,68,tthread1_0_69)__CSEQ_removeindent;
                        
# 1235 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
                        
# 1236 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                        
# 1237 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                        
# 1238 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                        
# 1239 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                        
# 1240 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                        
# 1241 "<previous_module>"
;
                        ;
                        
# 1242 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                        
# 1243 "<previous_module>"
tthread1_0_69: IF(1,69,tthread1_0_70)__CSEQ_removeindent;
                        
# 1244 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                        
# 1245 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 1246 "<previous_module>"
                        {
                                
# 1247 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 1248 "<previous_module>"
tthread1_0_70: IF(1,70,tthread1_0_71)__CSEQ_removeindent;
                                
# 1249 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 1250 "<previous_module>"
tthread1_0_71: IF(1,71,tthread1_0_72)__CSEQ_removeindent;
                                
# 1251 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 1253 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 72);
                        ;
                        
# 1254 "<previous_module>"
;
                        ;
                        
# 1255 "<previous_module>"
;
                        ;
                        
# 1256 "<previous_module>"
;
                        ;
                        
# 1257 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                        
# 1258 "<previous_module>"
tthread1_0_72: IF(1,72,tthread1_0_73)__CSEQ_removeindent;
                        
# 1259 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                        
# 1260 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 1261 "<previous_module>"
                        {
                                
# 1262 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 1263 "<previous_module>"
tthread1_0_73: IF(1,73,tthread1_0_74)__CSEQ_removeindent;
                                
# 1264 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 1265 "<previous_module>"
tthread1_0_74: IF(1,74,tthread1_0_75)__CSEQ_removeindent;
                                
# 1266 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 1268 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 75);
                        ;
                        
# 1269 "<previous_module>"
;
                        ;
                        
# 1270 "<previous_module>"
;
                        ;
                        
# 1271 "<previous_module>"
tthread1_0_75: IF(1,75,tthread1_0_76)__CSEQ_removeindent;
                        
# 1272 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                        
# 1273 "<previous_module>"
tthread1_0_76: IF(1,76,tthread1_0_77)__CSEQ_removeindent;
                        
# 1274 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                        
# 1275 "<previous_module>"
tthread1_0_77: IF(1,77,tthread1_0_78)__CSEQ_removeindent;
                        
# 1276 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                        
# 1277 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                        
# 1278 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                        
# 1279 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                        
# 1280 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

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
tthread1_0_78: IF(1,78,tthread1_0_79)__CSEQ_removeindent;
                                
# 1287 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1288 "<previous_module>"
tthread1_0_79: IF(1,79,tthread1_0_80)__CSEQ_removeindent;
                                
# 1289 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1290 "<previous_module>"
tthread1_0_80: IF(1,80,tthread1_0_81)__CSEQ_removeindent;
                                
# 1291 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1292 "<previous_module>"
tthread1_0_81: IF(1,81,tthread1_0_82)__CSEQ_removeindent;
                                
# 1293 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1294 "<previous_module>"
tthread1_0_82: IF(1,82,tthread1_0_83)__CSEQ_removeindent;
                                
# 1295 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1296 "<previous_module>"
tthread1_0_83: IF(1,83,tthread1_0_84)__CSEQ_removeindent;
                                
# 1297 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1298 "<previous_module>"
tthread1_0_84: IF(1,84,tthread1_0_85)__CSEQ_removeindent;
                                
# 1299 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1300 "<previous_module>"
;
                                ;
                                
# 1301 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1302 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1303 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1304 "<previous_module>"
                                {

# 1305 "<previous_module>"
                                        {
                                                
# 1306 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1307 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1308 "<previous_module>"
                                                {
                                                        
# 1309 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1311 "<previous_module>"
;
                                                
# 1312 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1313 "<previous_module>"
                                                {
                                                        
# 1314 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1316 "<previous_module>"
;
                                                
# 1317 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1318 "<previous_module>"
                                                {
                                                        
# 1319 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1321 "<previous_module>"
;
                                                
# 1322 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1323 "<previous_module>"
tthread1_0_85: IF(1,85,tthread1_0_86)__CSEQ_removeindent;
                                                
# 1324 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1325 "<previous_module>"
__exit_loop_8:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 86);

                                                
# 1326 "<previous_module>"
;
                                                ;
                                                
# 1327 "<previous_module>"
__exit__exponential_backoff_2_0:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 86);

                                                
# 1328 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1330 "<previous_module>"
;
                                }

                                
# 1332 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 86);
                                ;
                                
# 1333 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1334 "<previous_module>"
;
                                ;
                                
# 1335 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1336 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1337 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1338 "<previous_module>"
                                {
                                        
# 1339 "<previous_module>"
goto __exit_loop_7;
                                        ;
                                }

                                
# 1341 "<previous_module>"
;
                        }
                        
# 1343 "<previous_module>"
;
                        
# 1344 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1345 "<previous_module>"
                        {
                                
# 1346 "<previous_module>"
goto __exit_loop_7;
                                ;
                        }

                        
# 1348 "<previous_module>"
;

# 1349 "<previous_module>"
                        {
                                
# 1350 "<previous_module>"
tthread1_0_86: IF(1,86,tthread1_0_87)__CSEQ_removeindent;
                                
# 1351 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1352 "<previous_module>"
tthread1_0_87: IF(1,87,tthread1_0_88)__CSEQ_removeindent;
                                
# 1353 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1354 "<previous_module>"
tthread1_0_88: IF(1,88,tthread1_0_89)__CSEQ_removeindent;
                                
# 1355 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1356 "<previous_module>"
tthread1_0_89: IF(1,89,tthread1_0_90)__CSEQ_removeindent;
                                
# 1357 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1358 "<previous_module>"
tthread1_0_90: IF(1,90,tthread1_0_91)__CSEQ_removeindent;
                                
# 1359 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1360 "<previous_module>"
tthread1_0_91: IF(1,91,tthread1_0_92)__CSEQ_removeindent;
                                
# 1361 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1362 "<previous_module>"
tthread1_0_92: IF(1,92,tthread1_0_93)__CSEQ_removeindent;
                                
# 1363 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1364 "<previous_module>"
;
                                ;
                                
# 1365 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1366 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1367 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1368 "<previous_module>"
                                {

# 1369 "<previous_module>"
                                        {
                                                
# 1370 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1371 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1372 "<previous_module>"
                                                {
                                                        
# 1373 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1375 "<previous_module>"
;
                                                
# 1376 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1377 "<previous_module>"
                                                {
                                                        
# 1378 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1380 "<previous_module>"
;
                                                
# 1381 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1382 "<previous_module>"
                                                {
                                                        
# 1383 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1385 "<previous_module>"
;
                                                
# 1386 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1387 "<previous_module>"
tthread1_0_93: IF(1,93,tthread1_0_94)__CSEQ_removeindent;
                                                
# 1388 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1389 "<previous_module>"
__exit_loop_9:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 94);

                                                
# 1390 "<previous_module>"
;
                                                ;
                                                
# 1391 "<previous_module>"
__exit__exponential_backoff_2_1:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 94);

                                                
# 1392 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1394 "<previous_module>"
;
                                }

                                
# 1396 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 94);
                                ;
                                
# 1397 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1398 "<previous_module>"
;
                                ;
                                
# 1399 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1400 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1401 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1402 "<previous_module>"
                                {
                                        
# 1403 "<previous_module>"
goto __exit_loop_7;
                                        ;
                                }

                                
# 1405 "<previous_module>"
;
                        }
                        
# 1407 "<previous_module>"
;
                        
# 1408 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1409 "<previous_module>"
                        {
                                
# 1410 "<previous_module>"
goto __exit_loop_7;
                                ;
                        }

                        
# 1412 "<previous_module>"
;

# 1413 "<previous_module>"
                        {
                                
# 1414 "<previous_module>"
tthread1_0_94: IF(1,94,tthread1_0_95)__CSEQ_removeindent;
                                
# 1415 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1416 "<previous_module>"
tthread1_0_95: IF(1,95,tthread1_0_96)__CSEQ_removeindent;
                                
# 1417 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1418 "<previous_module>"
tthread1_0_96: IF(1,96,tthread1_0_97)__CSEQ_removeindent;
                                
# 1419 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1420 "<previous_module>"
tthread1_0_97: IF(1,97,tthread1_0_98)__CSEQ_removeindent;
                                
# 1421 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1422 "<previous_module>"
tthread1_0_98: IF(1,98,tthread1_0_99)__CSEQ_removeindent;
                                
# 1423 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1424 "<previous_module>"
tthread1_0_99: IF(1,99,tthread1_0_100)__CSEQ_removeindent;
                                
# 1425 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1426 "<previous_module>"
tthread1_0_100: IF(1,100,tthread1_0_101)__CSEQ_removeindent;
                                
# 1427 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1428 "<previous_module>"
;
                                ;
                                
# 1429 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1430 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1431 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1432 "<previous_module>"
                                {

# 1433 "<previous_module>"
                                        {
                                                
# 1434 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1435 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1436 "<previous_module>"
                                                {
                                                        
# 1437 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1439 "<previous_module>"
;
                                                
# 1440 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1441 "<previous_module>"
                                                {
                                                        
# 1442 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1444 "<previous_module>"
;
                                                
# 1445 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1446 "<previous_module>"
                                                {
                                                        
# 1447 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1449 "<previous_module>"
;
                                                
# 1450 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1451 "<previous_module>"
tthread1_0_101: IF(1,101,tthread1_0_102)__CSEQ_removeindent;
                                                
# 1452 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1453 "<previous_module>"
__exit_loop_10:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 102);

                                                
# 1454 "<previous_module>"
;
                                                ;
                                                
# 1455 "<previous_module>"
__exit__exponential_backoff_2_2:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 102);

                                                
# 1456 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1458 "<previous_module>"
;
                                }

                                
# 1460 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 102);
                                ;
                                
# 1461 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1462 "<previous_module>"
;
                                ;
                                
# 1463 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1464 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1465 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1466 "<previous_module>"
                                {
                                        
# 1467 "<previous_module>"
goto __exit_loop_7;
                                        ;
                                }

                                
# 1469 "<previous_module>"
;
                        }
                        
# 1471 "<previous_module>"
;
                        
# 1472 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1473 "<previous_module>"
                        {
                                
# 1474 "<previous_module>"
goto __exit_loop_7;
                                ;
                        }

                        
# 1476 "<previous_module>"
;

# 1477 "<previous_module>"
                        {
                                
# 1478 "<previous_module>"
tthread1_0_102: IF(1,102,tthread1_0_103)__CSEQ_removeindent;
                                
# 1479 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1480 "<previous_module>"
tthread1_0_103: IF(1,103,tthread1_0_104)__CSEQ_removeindent;
                                
# 1481 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1482 "<previous_module>"
tthread1_0_104: IF(1,104,tthread1_0_105)__CSEQ_removeindent;
                                
# 1483 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1484 "<previous_module>"
tthread1_0_105: IF(1,105,tthread1_0_106)__CSEQ_removeindent;
                                
# 1485 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1486 "<previous_module>"
tthread1_0_106: IF(1,106,tthread1_0_107)__CSEQ_removeindent;
                                
# 1487 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1488 "<previous_module>"
tthread1_0_107: IF(1,107,tthread1_0_108)__CSEQ_removeindent;
                                
# 1489 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1490 "<previous_module>"
tthread1_0_108: IF(1,108,tthread1_0_109)__CSEQ_removeindent;
                                
# 1491 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1492 "<previous_module>"
;
                                ;
                                
# 1493 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1494 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1495 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1496 "<previous_module>"
                                {

# 1497 "<previous_module>"
                                        {
                                                
# 1498 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1499 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1500 "<previous_module>"
                                                {
                                                        
# 1501 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1503 "<previous_module>"
;
                                                
# 1504 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1505 "<previous_module>"
                                                {
                                                        
# 1506 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1508 "<previous_module>"
;
                                                
# 1509 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1510 "<previous_module>"
                                                {
                                                        
# 1511 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1513 "<previous_module>"
;
                                                
# 1514 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1515 "<previous_module>"
tthread1_0_109: IF(1,109,tthread1_0_110)__CSEQ_removeindent;
                                                
# 1516 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1517 "<previous_module>"
__exit_loop_11:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 110);

                                                
# 1518 "<previous_module>"
;
                                                ;
                                                
# 1519 "<previous_module>"
__exit__exponential_backoff_2_3:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 110);

                                                
# 1520 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1522 "<previous_module>"
;
                                }

                                
# 1524 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 110);
                                ;
                                
# 1525 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1526 "<previous_module>"
;
                                ;
                                
# 1527 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1528 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1529 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1530 "<previous_module>"
                                {
                                        
# 1531 "<previous_module>"
goto __exit_loop_7;
                                        ;
                                }

                                
# 1533 "<previous_module>"
;
                        }
                        
# 1535 "<previous_module>"
;
                        
# 1536 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 1537 "<previous_module>"
                        {
                                
# 1538 "<previous_module>"
goto __exit_loop_7;
                                ;
                        }

                        
# 1540 "<previous_module>"
;

# 1541 "<previous_module>"
                        {
                                
# 1542 "<previous_module>"
tthread1_0_110: IF(1,110,tthread1_0_111)__CSEQ_removeindent;
                                
# 1543 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1544 "<previous_module>"
tthread1_0_111: IF(1,111,tthread1_0_112)__CSEQ_removeindent;
                                
# 1545 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 1546 "<previous_module>"
tthread1_0_112: IF(1,112,tthread1_0_113)__CSEQ_removeindent;
                                
# 1547 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1548 "<previous_module>"
tthread1_0_113: IF(1,113,tthread1_0_114)__CSEQ_removeindent;
                                
# 1549 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 1550 "<previous_module>"
tthread1_0_114: IF(1,114,tthread1_0_115)__CSEQ_removeindent;
                                
# 1551 "<previous_module>"
__cs_mutex_lock(&library_lock, 1);
                                
# 1552 "<previous_module>"
tthread1_0_115: IF(1,115,tthread1_0_116)__CSEQ_removeindent;
                                
# 1553 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 1554 "<previous_module>"
tthread1_0_116: IF(1,116,tthread1_0_117)__CSEQ_removeindent;
                                
# 1555 "<previous_module>"
__cs_mutex_unlock(&library_lock, 1);
                                
# 1556 "<previous_module>"
;
                                ;
                                
# 1557 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 1558 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 1559 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 1560 "<previous_module>"
                                {

# 1561 "<previous_module>"
                                        {
                                                
# 1562 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1563 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

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
                                                {
                                                        
# 1575 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1577 "<previous_module>"
;
                                                
# 1578 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1579 "<previous_module>"
tthread1_0_117: IF(1,117,tthread1_0_118)__CSEQ_removeindent;
                                                
# 1580 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1581 "<previous_module>"
__exit_loop_12:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 118);

                                                
# 1582 "<previous_module>"
;
                                                ;
                                                
# 1583 "<previous_module>"
__exit__exponential_backoff_2_4:
                                                __CPROVER_assume(__cs_pc_cs[1] >= 118);

                                                
# 1584 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1586 "<previous_module>"
;
                                }

                                
# 1588 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 118);
                                ;
                                
# 1589 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 1590 "<previous_module>"
;
                                ;
                                
# 1591 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 1592 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 1593 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 1594 "<previous_module>"
                                {
                                        
# 1595 "<previous_module>"
goto __exit_loop_7;
                                        ;
                                }

                                
# 1597 "<previous_module>"
;
                        }
                        
# 1599 "<previous_module>"
;
                        
# 1600 "<previous_module>"
tthread1_0_118: IF(1,118,tthread1_0_119)__CSEQ_removeindent;
                        
# 1601 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                        
# 1602 "<previous_module>"
__exit_loop_7:
                        __CPROVER_assume(__cs_pc_cs[1] >= 119);

                        
# 1603 "<previous_module>"
;
                        ;
                        
# 1604 "<previous_module>"
goto __exit__lfds711_stack_push_2;
                        ;
                        
# 1605 "<previous_module>"
__exit__lfds711_stack_push_2:
                        __CPROVER_assume(__cs_pc_cs[1] >= 119);

                        
# 1606 "<previous_module>"
;
                        ;
                }
                
# 1608 "<previous_module>"
;
                
# 1609 "<previous_module>"
__exit__insert_2:
                __CPROVER_assume(__cs_pc_cs[1] >= 119);

                
# 1610 "<previous_module>"
;
                ;
        }
        
# 1612 "<previous_module>"
;
        
# 1613 "<previous_module>"
;
        ;
        
# 1614 "<previous_module>"
static _Bool __cs_local_thread1___cs_tmp_if_cond_28;
        
# 1615 "<previous_module>"
tthread1_0_119: IF(1,119,tthread1_0_120)__CSEQ_removeindent;
        
# 1616 "<previous_module>"
__cs_local_thread1___cs_tmp_if_cond_28 = ATOMIC_OPERATION;
        
# 1617 "<previous_module>"
if (__cs_local_thread1___cs_tmp_if_cond_28)

# 1618 "<previous_module>"
        {
                
# 1619 "<previous_module>"
tthread1_0_120: IF(1,120,tthread1_0_121)__CSEQ_removeindent;
                
# 1620 "<previous_module>"
__cs_mutex_unlock(&lock, 1);
        }

        
# 1622 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 121);
        ;
        
# 1623 "<previous_module>"
;
        ;
        
# 1624 "<previous_module>"
__exit_thread1:
        __CPROVER_assume(__cs_pc_cs[1] >= 121);

        
# 1625 "<previous_module>"
;
        ;
        
# 1626 "<previous_module>"
tthread1_0_121: __CSEQ_removeindent;
        
# 1627 "<previous_module>"
__cs_exit(0, 1);
}


# 1629 "<previous_module>"
void *thread2_0(void *__cs_param_thread2___cs_unused)

# 1630 "<previous_module>"
{
        
# 1631 "<previous_module>"
IF(2,0,tthread2_0_1)__CSEQ_removeindent;
        
# 1632 "<previous_module>"
;
        ;
        
# 1633 "<previous_module>"
static _Bool __cs_local_thread2___cs_tmp_if_cond_29;
        
# 1634 "<previous_module>"
tthread2_0_1: IF(2,1,tthread2_0_2)__CSEQ_removeindent;
        
# 1635 "<previous_module>"
__cs_local_thread2___cs_tmp_if_cond_29 = ATOMIC_OPERATION;
        
# 1636 "<previous_module>"
if (__cs_local_thread2___cs_tmp_if_cond_29)

# 1637 "<previous_module>"
        {
                
# 1638 "<previous_module>"
tthread2_0_2: IF(2,2,tthread2_0_3)__CSEQ_removeindent;
                
# 1639 "<previous_module>"
__cs_mutex_lock(&lock, 2);
        }

        
# 1641 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 3);
        ;
        
# 1642 "<previous_module>"
;
        ;
        
# 1643 "<previous_module>"
static int __cs_retval__delete_1;

# 1644 "<previous_module>"
        {
                
# 1645 "<previous_module>"
static struct lfds711_stack_state *__cs_param_delete_s;
                
# 1646 "<previous_module>"
tthread2_0_3: IF(2,3,tthread2_0_4)__CSEQ_removeindent;
                
# 1647 "<previous_module>"
__cs_param_delete_s = ss;
                
# 1648 "<previous_module>"
static struct lfds711_stack_element *__cs_local_delete_se;
                
# 1649 "<previous_module>"
static struct test_data *__cs_local_delete_temp_td;
                
# 1650 "<previous_module>"
static int __cs_local_delete_res;
                
# 1651 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_1;

# 1652 "<previous_module>"
                {
                        
# 1653 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                        
# 1654 "<previous_module>"
tthread2_0_4: IF(2,4,tthread2_0_5)__CSEQ_removeindent;
                        
# 1655 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = (struct lfds711_stack_state *) __cs_param_delete_s;
                        
# 1656 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                        
# 1657 "<previous_module>"
tthread2_0_5: IF(2,5,tthread2_0_6)__CSEQ_removeindent;
                        
# 1658 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_delete_se;
                        
# 1659 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                        
# 1660 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                        
# 1661 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                        
# 1662 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                        
# 1663 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                        
# 1664 "<previous_module>"
;
                        ;
                        
# 1665 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                        
# 1666 "<previous_module>"
tthread2_0_6: IF(2,6,tthread2_0_7)__CSEQ_removeindent;
                        
# 1667 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                        
# 1668 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 1669 "<previous_module>"
                        {
                                
# 1670 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 1671 "<previous_module>"
tthread2_0_7: IF(2,7,tthread2_0_8)__CSEQ_removeindent;
                                
# 1672 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 1673 "<previous_module>"
tthread2_0_8: IF(2,8,tthread2_0_9)__CSEQ_removeindent;
                                
# 1674 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 1676 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 9);
                        ;
                        
# 1677 "<previous_module>"
;
                        ;
                        
# 1678 "<previous_module>"
;
                        ;
                        
# 1679 "<previous_module>"
;
                        ;
                        
# 1680 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                        
# 1681 "<previous_module>"
tthread2_0_9: IF(2,9,tthread2_0_10)__CSEQ_removeindent;
                        
# 1682 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                        
# 1683 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 1684 "<previous_module>"
                        {
                                
# 1685 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                
# 1686 "<previous_module>"
tthread2_0_10: IF(2,10,tthread2_0_11)__CSEQ_removeindent;
                                
# 1687 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                
# 1688 "<previous_module>"
tthread2_0_11: IF(2,11,tthread2_0_12)__CSEQ_removeindent;
                                
# 1689 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                        }

                        
# 1691 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 12);
                        ;
                        
# 1692 "<previous_module>"
;
                        ;
                        
# 1693 "<previous_module>"
;
                        ;
                        
# 1694 "<previous_module>"
tthread2_0_12: IF(2,12,tthread2_0_13)__CSEQ_removeindent;
                        
# 1695 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                        
# 1696 "<previous_module>"
tthread2_0_13: IF(2,13,tthread2_0_14)__CSEQ_removeindent;
                        
# 1697 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                        
# 1698 "<previous_module>"
tthread2_0_14: IF(2,14,tthread2_0_15)__CSEQ_removeindent;
                        
# 1699 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                        
# 1700 "<previous_module>"
tthread2_0_15: IF(2,15,tthread2_0_16)__CSEQ_removeindent;
                        
# 1701 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                        
# 1702 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                        
# 1703 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                        
# 1704 "<previous_module>"
;
                        ;
                        
# 1705 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                        
# 1706 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 1707 "<previous_module>"
                        {
                                
# 1708 "<previous_module>"
;
                                ;
                                
# 1709 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                
# 1710 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1711 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 1712 "<previous_module>"
                                {
                                        
# 1713 "<previous_module>"
tthread2_0_16: IF(2,16,tthread2_0_17)__CSEQ_removeindent;
                                        
# 1714 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1715 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1716 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1718 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 17);
                                ;
                                
# 1719 "<previous_module>"
tthread2_0_17: IF(2,17,tthread2_0_18)__CSEQ_removeindent;
                                
# 1720 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1721 "<previous_module>"
tthread2_0_18: IF(2,18,tthread2_0_19)__CSEQ_removeindent;
                                
# 1722 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1723 "<previous_module>"
tthread2_0_19: IF(2,19,tthread2_0_20)__CSEQ_removeindent;
                                
# 1724 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1725 "<previous_module>"
tthread2_0_20: IF(2,20,tthread2_0_21)__CSEQ_removeindent;
                                
# 1726 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1727 "<previous_module>"
tthread2_0_21: IF(2,21,tthread2_0_22)__CSEQ_removeindent;
                                
# 1728 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1729 "<previous_module>"
;
                                ;
                                
# 1730 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                
# 1731 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1732 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 1733 "<previous_module>"
                                {

# 1734 "<previous_module>"
                                        {
                                                
# 1735 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1736 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1737 "<previous_module>"
                                                {
                                                        
# 1738 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1740 "<previous_module>"
;
                                                
# 1741 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1742 "<previous_module>"
                                                {
                                                        
# 1743 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1745 "<previous_module>"
;
                                                
# 1746 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1747 "<previous_module>"
                                                {
                                                        
# 1748 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1750 "<previous_module>"
;
                                                
# 1751 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1752 "<previous_module>"
tthread2_0_22: IF(2,22,tthread2_0_23)__CSEQ_removeindent;
                                                
# 1753 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1754 "<previous_module>"
__exit_loop_14:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 23);

                                                
# 1755 "<previous_module>"
;
                                                ;
                                                
# 1756 "<previous_module>"
__exit__exponential_backoff_3_0:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 23);

                                                
# 1757 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1759 "<previous_module>"
;
                                        
# 1760 "<previous_module>"
tthread2_0_23: IF(2,23,tthread2_0_24)__CSEQ_removeindent;
                                        
# 1761 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 1762 "<previous_module>"
tthread2_0_24: IF(2,24,tthread2_0_25)__CSEQ_removeindent;
                                        
# 1763 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 1765 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 25);
                                ;
                                
# 1766 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 1767 "<previous_module>"
;
                                ;
                                
# 1768 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                
# 1769 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 1770 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 1771 "<previous_module>"
                                {
                                        
# 1772 "<previous_module>"
goto __exit_loop_13;
                                        ;
                                }

                                
# 1774 "<previous_module>"
;
                        }
                        
# 1776 "<previous_module>"
;
                        
# 1777 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                        
# 1778 "<previous_module>"
tthread2_0_25: IF(2,25,tthread2_0_26)__CSEQ_removeindent;
                        
# 1779 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                        
# 1780 "<previous_module>"
__exit_loop_13:
                        __CPROVER_assume(__cs_pc_cs[2] >= 26);

                        
# 1781 "<previous_module>"
;
                        ;
                        
# 1782 "<previous_module>"
if (
# 1783 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 1784 "<previous_module>"
                        {
                                
# 1785 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 1787 "<previous_module>"
;

# 1788 "<previous_module>"
                        {
                                
# 1789 "<previous_module>"
;
                                ;
                                
# 1790 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 1791 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1792 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 1793 "<previous_module>"
                                {
                                        
# 1794 "<previous_module>"
tthread2_0_26: IF(2,26,tthread2_0_27)__CSEQ_removeindent;
                                        
# 1795 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1796 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1797 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1799 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 27);
                                ;
                                
# 1800 "<previous_module>"
tthread2_0_27: IF(2,27,tthread2_0_28)__CSEQ_removeindent;
                                
# 1801 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1802 "<previous_module>"
tthread2_0_28: IF(2,28,tthread2_0_29)__CSEQ_removeindent;
                                
# 1803 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1804 "<previous_module>"
tthread2_0_29: IF(2,29,tthread2_0_30)__CSEQ_removeindent;
                                
# 1805 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1806 "<previous_module>"
tthread2_0_30: IF(2,30,tthread2_0_31)__CSEQ_removeindent;
                                
# 1807 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1808 "<previous_module>"
tthread2_0_31: IF(2,31,tthread2_0_32)__CSEQ_removeindent;
                                
# 1809 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1810 "<previous_module>"
;
                                ;
                                
# 1811 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 1812 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1813 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 1814 "<previous_module>"
                                {

# 1815 "<previous_module>"
                                        {
                                                
# 1816 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1817 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1818 "<previous_module>"
                                                {
                                                        
# 1819 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1821 "<previous_module>"
;
                                                
# 1822 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1823 "<previous_module>"
                                                {
                                                        
# 1824 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1826 "<previous_module>"
;
                                                
# 1827 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1828 "<previous_module>"
                                                {
                                                        
# 1829 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1831 "<previous_module>"
;
                                                
# 1832 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1833 "<previous_module>"
tthread2_0_32: IF(2,32,tthread2_0_33)__CSEQ_removeindent;
                                                
# 1834 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1835 "<previous_module>"
__exit_loop_16:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 33);

                                                
# 1836 "<previous_module>"
;
                                                ;
                                                
# 1837 "<previous_module>"
__exit__exponential_backoff_4_0:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 33);

                                                
# 1838 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1840 "<previous_module>"
;
                                        
# 1841 "<previous_module>"
tthread2_0_33: IF(2,33,tthread2_0_34)__CSEQ_removeindent;
                                        
# 1842 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 1843 "<previous_module>"
tthread2_0_34: IF(2,34,tthread2_0_35)__CSEQ_removeindent;
                                        
# 1844 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 1846 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 35);
                                ;
                                
# 1847 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 1848 "<previous_module>"
;
                                ;
                                
# 1849 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 1850 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 1851 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 1852 "<previous_module>"
                                {
                                        
# 1853 "<previous_module>"
goto __exit_loop_15;
                                        ;
                                }

                                
# 1855 "<previous_module>"
;
                        }
                        
# 1857 "<previous_module>"
;
                        
# 1858 "<previous_module>"
if (
# 1859 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 1860 "<previous_module>"
                        {
                                
# 1861 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 1863 "<previous_module>"
;

# 1864 "<previous_module>"
                        {
                                
# 1865 "<previous_module>"
;
                                ;
                                
# 1866 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 1867 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1868 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 1869 "<previous_module>"
                                {
                                        
# 1870 "<previous_module>"
tthread2_0_35: IF(2,35,tthread2_0_36)__CSEQ_removeindent;
                                        
# 1871 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1872 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1873 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1875 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 36);
                                ;
                                
# 1876 "<previous_module>"
tthread2_0_36: IF(2,36,tthread2_0_37)__CSEQ_removeindent;
                                
# 1877 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1878 "<previous_module>"
tthread2_0_37: IF(2,37,tthread2_0_38)__CSEQ_removeindent;
                                
# 1879 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1880 "<previous_module>"
tthread2_0_38: IF(2,38,tthread2_0_39)__CSEQ_removeindent;
                                
# 1881 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1882 "<previous_module>"
tthread2_0_39: IF(2,39,tthread2_0_40)__CSEQ_removeindent;
                                
# 1883 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1884 "<previous_module>"
tthread2_0_40: IF(2,40,tthread2_0_41)__CSEQ_removeindent;
                                
# 1885 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1886 "<previous_module>"
;
                                ;
                                
# 1887 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 1888 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1889 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 1890 "<previous_module>"
                                {

# 1891 "<previous_module>"
                                        {
                                                
# 1892 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1893 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1894 "<previous_module>"
                                                {
                                                        
# 1895 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1897 "<previous_module>"
;
                                                
# 1898 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1899 "<previous_module>"
                                                {
                                                        
# 1900 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1902 "<previous_module>"
;
                                                
# 1903 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1904 "<previous_module>"
                                                {
                                                        
# 1905 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1907 "<previous_module>"
;
                                                
# 1908 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1909 "<previous_module>"
tthread2_0_41: IF(2,41,tthread2_0_42)__CSEQ_removeindent;
                                                
# 1910 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1911 "<previous_module>"
__exit_loop_17:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 42);

                                                
# 1912 "<previous_module>"
;
                                                ;
                                                
# 1913 "<previous_module>"
__exit__exponential_backoff_4_1:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 42);

                                                
# 1914 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1916 "<previous_module>"
;
                                        
# 1917 "<previous_module>"
tthread2_0_42: IF(2,42,tthread2_0_43)__CSEQ_removeindent;
                                        
# 1918 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 1919 "<previous_module>"
tthread2_0_43: IF(2,43,tthread2_0_44)__CSEQ_removeindent;
                                        
# 1920 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 1922 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 44);
                                ;
                                
# 1923 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 1924 "<previous_module>"
;
                                ;
                                
# 1925 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 1926 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 1927 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 1928 "<previous_module>"
                                {
                                        
# 1929 "<previous_module>"
goto __exit_loop_15;
                                        ;
                                }

                                
# 1931 "<previous_module>"
;
                        }
                        
# 1933 "<previous_module>"
;
                        
# 1934 "<previous_module>"
if (
# 1935 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 1936 "<previous_module>"
                        {
                                
# 1937 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 1939 "<previous_module>"
;

# 1940 "<previous_module>"
                        {
                                
# 1941 "<previous_module>"
;
                                ;
                                
# 1942 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 1943 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 1944 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 1945 "<previous_module>"
                                {
                                        
# 1946 "<previous_module>"
tthread2_0_44: IF(2,44,tthread2_0_45)__CSEQ_removeindent;
                                        
# 1947 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 1948 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 1949 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 1951 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 45);
                                ;
                                
# 1952 "<previous_module>"
tthread2_0_45: IF(2,45,tthread2_0_46)__CSEQ_removeindent;
                                
# 1953 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 1954 "<previous_module>"
tthread2_0_46: IF(2,46,tthread2_0_47)__CSEQ_removeindent;
                                
# 1955 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 1956 "<previous_module>"
tthread2_0_47: IF(2,47,tthread2_0_48)__CSEQ_removeindent;
                                
# 1957 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 1958 "<previous_module>"
tthread2_0_48: IF(2,48,tthread2_0_49)__CSEQ_removeindent;
                                
# 1959 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 1960 "<previous_module>"
tthread2_0_49: IF(2,49,tthread2_0_50)__CSEQ_removeindent;
                                
# 1961 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 1962 "<previous_module>"
;
                                ;
                                
# 1963 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 1964 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 1965 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 1966 "<previous_module>"
                                {

# 1967 "<previous_module>"
                                        {
                                                
# 1968 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 1969 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 1970 "<previous_module>"
                                                {
                                                        
# 1971 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1973 "<previous_module>"
;
                                                
# 1974 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1975 "<previous_module>"
                                                {
                                                        
# 1976 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1978 "<previous_module>"
;
                                                
# 1979 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 1980 "<previous_module>"
                                                {
                                                        
# 1981 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 1983 "<previous_module>"
;
                                                
# 1984 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 1985 "<previous_module>"
tthread2_0_50: IF(2,50,tthread2_0_51)__CSEQ_removeindent;
                                                
# 1986 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 1987 "<previous_module>"
__exit_loop_18:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 51);

                                                
# 1988 "<previous_module>"
;
                                                ;
                                                
# 1989 "<previous_module>"
__exit__exponential_backoff_4_2:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 51);

                                                
# 1990 "<previous_module>"
;
                                                ;
                                        }
                                        
# 1992 "<previous_module>"
;
                                        
# 1993 "<previous_module>"
tthread2_0_51: IF(2,51,tthread2_0_52)__CSEQ_removeindent;
                                        
# 1994 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 1995 "<previous_module>"
tthread2_0_52: IF(2,52,tthread2_0_53)__CSEQ_removeindent;
                                        
# 1996 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 1998 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 53);
                                ;
                                
# 1999 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2000 "<previous_module>"
;
                                ;
                                
# 2001 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2002 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2003 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2004 "<previous_module>"
                                {
                                        
# 2005 "<previous_module>"
goto __exit_loop_15;
                                        ;
                                }

                                
# 2007 "<previous_module>"
;
                        }
                        
# 2009 "<previous_module>"
;
                        
# 2010 "<previous_module>"
if (
# 2011 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2012 "<previous_module>"
                        {
                                
# 2013 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 2015 "<previous_module>"
;

# 2016 "<previous_module>"
                        {
                                
# 2017 "<previous_module>"
;
                                ;
                                
# 2018 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2019 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2020 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2021 "<previous_module>"
                                {
                                        
# 2022 "<previous_module>"
tthread2_0_53: IF(2,53,tthread2_0_54)__CSEQ_removeindent;
                                        
# 2023 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2024 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 2025 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 2027 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 54);
                                ;
                                
# 2028 "<previous_module>"
tthread2_0_54: IF(2,54,tthread2_0_55)__CSEQ_removeindent;
                                
# 2029 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2030 "<previous_module>"
tthread2_0_55: IF(2,55,tthread2_0_56)__CSEQ_removeindent;
                                
# 2031 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2032 "<previous_module>"
tthread2_0_56: IF(2,56,tthread2_0_57)__CSEQ_removeindent;
                                
# 2033 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2034 "<previous_module>"
tthread2_0_57: IF(2,57,tthread2_0_58)__CSEQ_removeindent;
                                
# 2035 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2036 "<previous_module>"
tthread2_0_58: IF(2,58,tthread2_0_59)__CSEQ_removeindent;
                                
# 2037 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2038 "<previous_module>"
;
                                ;
                                
# 2039 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2040 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2041 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2042 "<previous_module>"
                                {

# 2043 "<previous_module>"
                                        {
                                                
# 2044 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2045 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2046 "<previous_module>"
                                                {
                                                        
# 2047 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2049 "<previous_module>"
;
                                                
# 2050 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2051 "<previous_module>"
                                                {
                                                        
# 2052 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2054 "<previous_module>"
;
                                                
# 2055 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2056 "<previous_module>"
                                                {
                                                        
# 2057 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2059 "<previous_module>"
;
                                                
# 2060 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2061 "<previous_module>"
tthread2_0_59: IF(2,59,tthread2_0_60)__CSEQ_removeindent;
                                                
# 2062 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2063 "<previous_module>"
__exit_loop_19:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 60);

                                                
# 2064 "<previous_module>"
;
                                                ;
                                                
# 2065 "<previous_module>"
__exit__exponential_backoff_4_3:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 60);

                                                
# 2066 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2068 "<previous_module>"
;
                                        
# 2069 "<previous_module>"
tthread2_0_60: IF(2,60,tthread2_0_61)__CSEQ_removeindent;
                                        
# 2070 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 2071 "<previous_module>"
tthread2_0_61: IF(2,61,tthread2_0_62)__CSEQ_removeindent;
                                        
# 2072 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 2074 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 62);
                                ;
                                
# 2075 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2076 "<previous_module>"
;
                                ;
                                
# 2077 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2078 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2079 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2080 "<previous_module>"
                                {
                                        
# 2081 "<previous_module>"
goto __exit_loop_15;
                                        ;
                                }

                                
# 2083 "<previous_module>"
;
                        }
                        
# 2085 "<previous_module>"
;
                        
# 2086 "<previous_module>"
if (
# 2087 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2088 "<previous_module>"
                        {
                                
# 2089 "<previous_module>"
goto __exit_loop_15;
                                ;
                        }

                        
# 2091 "<previous_module>"
;

# 2092 "<previous_module>"
                        {
                                
# 2093 "<previous_module>"
;
                                ;
                                
# 2094 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                
# 2095 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                
# 2096 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2097 "<previous_module>"
                                {
                                        
# 2098 "<previous_module>"
tthread2_0_62: IF(2,62,tthread2_0_63)__CSEQ_removeindent;
                                        
# 2099 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                        
# 2100 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = 0;
                                        
# 2101 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                                        ;
                                }

                                
# 2103 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 63);
                                ;
                                
# 2104 "<previous_module>"
tthread2_0_63: IF(2,63,tthread2_0_64)__CSEQ_removeindent;
                                
# 2105 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                
# 2106 "<previous_module>"
tthread2_0_64: IF(2,64,tthread2_0_65)__CSEQ_removeindent;
                                
# 2107 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                
# 2108 "<previous_module>"
tthread2_0_65: IF(2,65,tthread2_0_66)__CSEQ_removeindent;
                                
# 2109 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2110 "<previous_module>"
tthread2_0_66: IF(2,66,tthread2_0_67)__CSEQ_removeindent;
                                
# 2111 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                
# 2112 "<previous_module>"
tthread2_0_67: IF(2,67,tthread2_0_68)__CSEQ_removeindent;
                                
# 2113 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2114 "<previous_module>"
;
                                ;
                                
# 2115 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                
# 2116 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                
# 2117 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2118 "<previous_module>"
                                {

# 2119 "<previous_module>"
                                        {
                                                
# 2120 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2121 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2122 "<previous_module>"
                                                {
                                                        
# 2123 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2125 "<previous_module>"
;
                                                
# 2126 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2127 "<previous_module>"
                                                {
                                                        
# 2128 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2130 "<previous_module>"
;
                                                
# 2131 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2132 "<previous_module>"
                                                {
                                                        
# 2133 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2135 "<previous_module>"
;
                                                
# 2136 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2137 "<previous_module>"
tthread2_0_68: IF(2,68,tthread2_0_69)__CSEQ_removeindent;
                                                
# 2138 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2139 "<previous_module>"
__exit_loop_20:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 69);

                                                
# 2140 "<previous_module>"
;
                                                ;
                                                
# 2141 "<previous_module>"
__exit__exponential_backoff_4_4:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 69);

                                                
# 2142 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2144 "<previous_module>"
;
                                        
# 2145 "<previous_module>"
tthread2_0_69: IF(2,69,tthread2_0_70)__CSEQ_removeindent;
                                        
# 2146 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                        
# 2147 "<previous_module>"
tthread2_0_70: IF(2,70,tthread2_0_71)__CSEQ_removeindent;
                                        
# 2148 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                }

                                
# 2150 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 71);
                                ;
                                
# 2151 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                
# 2152 "<previous_module>"
;
                                ;
                                
# 2153 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                
# 2154 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                
# 2155 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 2156 "<previous_module>"
                                {
                                        
# 2157 "<previous_module>"
goto __exit_loop_15;
                                        ;
                                }

                                
# 2159 "<previous_module>"
;
                        }
                        
# 2161 "<previous_module>"
;
                        
# 2162 "<previous_module>"
tthread2_0_71: IF(2,71,tthread2_0_72)__CSEQ_removeindent;
                        
# 2163 "<previous_module>"
__CPROVER_assume(
# 2164 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                        
# 2165 "<previous_module>"
__exit_loop_15:
                        __CPROVER_assume(__cs_pc_cs[2] >= 72);

                        
# 2166 "<previous_module>"
;
                        ;
                        
# 2167 "<previous_module>"
tthread2_0_72: IF(2,72,tthread2_0_73)__CSEQ_removeindent;
                        
# 2168 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                        
# 2169 "<previous_module>"
__cs_retval__lfds711_stack_pop_1 = __cs_local_lfds711_stack_pop_result;
                        
# 2170 "<previous_module>"
goto __exit__lfds711_stack_pop_1;
                        ;
                        
# 2171 "<previous_module>"
__exit__lfds711_stack_pop_1:
                        __CPROVER_assume(__cs_pc_cs[2] >= 73);

                        
# 2172 "<previous_module>"
;
                        ;
                }
                
# 2174 "<previous_module>"
;
                
# 2175 "<previous_module>"
__cs_local_delete_res = __cs_retval__lfds711_stack_pop_1;
                
# 2176 "<previous_module>"
;
                ;
                
# 2177 "<previous_module>"
static _Bool __cs_local_delete___cs_tmp_if_cond_19;
                
# 2178 "<previous_module>"
__cs_local_delete___cs_tmp_if_cond_19 = __cs_local_delete_res != 0;
                
# 2179 "<previous_module>"
if (__cs_local_delete___cs_tmp_if_cond_19)

# 2180 "<previous_module>"
                {
                        
# 2181 "<previous_module>"
tthread2_0_73: IF(2,73,tthread2_0_74)__CSEQ_removeindent;
                        
# 2182 "<previous_module>"
free((*__cs_local_delete_se).value);
                }

                
# 2184 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 74);
                ;
                
# 2185 "<previous_module>"
__cs_retval__delete_1 = __cs_local_delete_res;
                
# 2186 "<previous_module>"
goto __exit__delete_1;
                ;
                
# 2187 "<previous_module>"
__exit__delete_1:
                __CPROVER_assume(__cs_pc_cs[2] >= 74);

                
# 2188 "<previous_module>"
;
                ;
        }
        
# 2190 "<previous_module>"
;
        
# 2191 "<previous_module>"
__cs_retval__delete_1;
        
# 2192 "<previous_module>"
;
        ;
        
# 2193 "<previous_module>"
static _Bool __cs_local_thread2___cs_tmp_if_cond_30;
        
# 2194 "<previous_module>"
tthread2_0_74: IF(2,74,tthread2_0_75)__CSEQ_removeindent;
        
# 2195 "<previous_module>"
__cs_local_thread2___cs_tmp_if_cond_30 = ATOMIC_OPERATION;
        
# 2196 "<previous_module>"
if (__cs_local_thread2___cs_tmp_if_cond_30)

# 2197 "<previous_module>"
        {
                
# 2198 "<previous_module>"
tthread2_0_75: IF(2,75,tthread2_0_76)__CSEQ_removeindent;
                
# 2199 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
        }

        
# 2201 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 76);
        ;
        
# 2202 "<previous_module>"
;
        ;
        
# 2203 "<previous_module>"
;
        ;
        
# 2204 "<previous_module>"
static _Bool __cs_local_thread2___cs_tmp_if_cond_31;
        
# 2205 "<previous_module>"
tthread2_0_76: IF(2,76,tthread2_0_77)__CSEQ_removeindent;
        
# 2206 "<previous_module>"
__cs_local_thread2___cs_tmp_if_cond_31 = ATOMIC_OPERATION;
        
# 2207 "<previous_module>"
if (__cs_local_thread2___cs_tmp_if_cond_31)

# 2208 "<previous_module>"
        {
                
# 2209 "<previous_module>"
tthread2_0_77: IF(2,77,tthread2_0_78)__CSEQ_removeindent;
                
# 2210 "<previous_module>"
__cs_mutex_lock(&lock, 2);
        }

        
# 2212 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 78);
        ;
        
# 2213 "<previous_module>"
;
        ;

# 2214 "<previous_module>"
        {
                
# 2215 "<previous_module>"
static struct lfds711_stack_state *__cs_param_insert_s;
                
# 2216 "<previous_module>"
tthread2_0_78: IF(2,78,tthread2_0_79)__CSEQ_removeindent;
                
# 2217 "<previous_module>"
__cs_param_insert_s = ss;
                
# 2218 "<previous_module>"
static int long long unsigned __cs_param_insert_id;
                
# 2219 "<previous_module>"
__cs_param_insert_id = 2;
                
# 2220 "<previous_module>"
static struct test_data *__cs_local_insert_td;
                
# 2221 "<previous_module>"
tthread2_0_79: IF(2,79,tthread2_0_80)__CSEQ_removeindent;
                
# 2222 "<previous_module>"
__cs_local_insert_td = __cs_safe_malloc(sizeof(struct test_data));
                
# 2223 "<previous_module>"
tthread2_0_80: IF(2,80,tthread2_0_81)__CSEQ_removeindent;
                
# 2224 "<previous_module>"
(*__cs_local_insert_td).user_id = __cs_param_insert_id;
                
# 2225 "<previous_module>"
tthread2_0_81: IF(2,81,tthread2_0_82)__CSEQ_removeindent;
                
# 2226 "<previous_module>"
(*__cs_local_insert_td).se.value = (void *) ((lfds711_pal_uint_t) __cs_local_insert_td);

# 2227 "<previous_module>"
                {
                        
# 2228 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_push_ss;
                        
# 2229 "<previous_module>"
tthread2_0_82: IF(2,82,tthread2_0_83)__CSEQ_removeindent;
                        
# 2230 "<previous_module>"
__cs_param_lfds711_stack_push_ss = (struct lfds711_stack_state *) __cs_param_insert_s;
                        
# 2231 "<previous_module>"
static struct lfds711_stack_element *__cs_param_lfds711_stack_push_se;
                        
# 2232 "<previous_module>"
tthread2_0_83: IF(2,83,tthread2_0_84)__CSEQ_removeindent;
                        
# 2233 "<previous_module>"
__cs_param_lfds711_stack_push_se = &(*__cs_local_insert_td).se;
                        
# 2234 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_push_result;
                        
# 2235 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_push_backoff_iteration;
                        
# 2236 "<previous_module>"
__cs_local_lfds711_stack_push_backoff_iteration = 0;
                        
# 2237 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_push_new_top[2];
                        
# 2238 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_push_original_top[2];
                        
# 2239 "<previous_module>"
;
                        ;
                        
# 2240 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_14;
                        
# 2241 "<previous_module>"
tthread2_0_84: IF(2,84,tthread2_0_85)__CSEQ_removeindent;
                        
# 2242 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_14 = !(__cs_param_lfds711_stack_push_ss != 0);
                        
# 2243 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_14)

# 2244 "<previous_module>"
                        {
                                
# 2245 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 2246 "<previous_module>"
tthread2_0_85: IF(2,85,tthread2_0_86)__CSEQ_removeindent;
                                
# 2247 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 2248 "<previous_module>"
tthread2_0_86: IF(2,86,tthread2_0_87)__CSEQ_removeindent;
                                
# 2249 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 2251 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 87);
                        ;
                        
# 2252 "<previous_module>"
;
                        ;
                        
# 2253 "<previous_module>"
;
                        ;
                        
# 2254 "<previous_module>"
;
                        ;
                        
# 2255 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_15;
                        
# 2256 "<previous_module>"
tthread2_0_87: IF(2,87,tthread2_0_88)__CSEQ_removeindent;
                        
# 2257 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_15 = !(__cs_param_lfds711_stack_push_se != 0);
                        
# 2258 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_15)

# 2259 "<previous_module>"
                        {
                                
# 2260 "<previous_module>"
static char *__cs_local_lfds711_stack_push_c;
                                
# 2261 "<previous_module>"
tthread2_0_88: IF(2,88,tthread2_0_89)__CSEQ_removeindent;
                                
# 2262 "<previous_module>"
__cs_local_lfds711_stack_push_c = 0;
                                
# 2263 "<previous_module>"
tthread2_0_89: IF(2,89,tthread2_0_90)__CSEQ_removeindent;
                                
# 2264 "<previous_module>"
*__cs_local_lfds711_stack_push_c = 0;
                        }

                        
# 2266 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 90);
                        ;
                        
# 2267 "<previous_module>"
;
                        ;
                        
# 2268 "<previous_module>"
;
                        ;
                        
# 2269 "<previous_module>"
tthread2_0_90: IF(2,90,tthread2_0_91)__CSEQ_removeindent;
                        
# 2270 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[0] = __cs_param_lfds711_stack_push_se;
                        
# 2271 "<previous_module>"
tthread2_0_91: IF(2,91,tthread2_0_92)__CSEQ_removeindent;
                        
# 2272 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[1] = (*__cs_param_lfds711_stack_push_ss).top[1];
                        
# 2273 "<previous_module>"
tthread2_0_92: IF(2,92,tthread2_0_93)__CSEQ_removeindent;
                        
# 2274 "<previous_module>"
__cs_local_lfds711_stack_push_original_top[0] = (*__cs_param_lfds711_stack_push_ss).top[0];
                        
# 2275 "<previous_module>"
__cs_local_lfds711_stack_push_result = 0;
                        
# 2276 "<previous_module>"
static int __cs_local_lfds711_stack_push_i;
                        
# 2277 "<previous_module>"
__cs_local_lfds711_stack_push_i = 0;
                        
# 2278 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2279 "<previous_module>"
                        {
                                
# 2280 "<previous_module>"
goto __exit_loop_21;
                                ;
                        }

                        
# 2282 "<previous_module>"
;

# 2283 "<previous_module>"
                        {
                                
# 2284 "<previous_module>"
tthread2_0_93: IF(2,93,tthread2_0_94)__CSEQ_removeindent;
                                
# 2285 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2286 "<previous_module>"
tthread2_0_94: IF(2,94,tthread2_0_95)__CSEQ_removeindent;
                                
# 2287 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 2288 "<previous_module>"
tthread2_0_95: IF(2,95,tthread2_0_96)__CSEQ_removeindent;
                                
# 2289 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2290 "<previous_module>"
tthread2_0_96: IF(2,96,tthread2_0_97)__CSEQ_removeindent;
                                
# 2291 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 2292 "<previous_module>"
tthread2_0_97: IF(2,97,tthread2_0_98)__CSEQ_removeindent;
                                
# 2293 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2294 "<previous_module>"
tthread2_0_98: IF(2,98,tthread2_0_99)__CSEQ_removeindent;
                                
# 2295 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 2296 "<previous_module>"
tthread2_0_99: IF(2,99,tthread2_0_100)__CSEQ_removeindent;
                                
# 2297 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2298 "<previous_module>"
;
                                ;
                                
# 2299 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 2300 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 2301 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2302 "<previous_module>"
                                {

# 2303 "<previous_module>"
                                        {
                                                
# 2304 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2305 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2306 "<previous_module>"
                                                {
                                                        
# 2307 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2309 "<previous_module>"
;
                                                
# 2310 "<previous_module>"
__cs_local_exponential_backoff_loop++;

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
tthread2_0_100: IF(2,100,tthread2_0_101)__CSEQ_removeindent;
                                                
# 2322 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2323 "<previous_module>"
__exit_loop_22:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 101);

                                                
# 2324 "<previous_module>"
;
                                                ;
                                                
# 2325 "<previous_module>"
__exit__exponential_backoff_5_0:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 101);

                                                
# 2326 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2328 "<previous_module>"
;
                                }

                                
# 2330 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 101);
                                ;
                                
# 2331 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 2332 "<previous_module>"
;
                                ;
                                
# 2333 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 2334 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 2335 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2336 "<previous_module>"
                                {
                                        
# 2337 "<previous_module>"
goto __exit_loop_21;
                                        ;
                                }

                                
# 2339 "<previous_module>"
;
                        }
                        
# 2341 "<previous_module>"
;
                        
# 2342 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2343 "<previous_module>"
                        {
                                
# 2344 "<previous_module>"
goto __exit_loop_21;
                                ;
                        }

                        
# 2346 "<previous_module>"
;

# 2347 "<previous_module>"
                        {
                                
# 2348 "<previous_module>"
tthread2_0_101: IF(2,101,tthread2_0_102)__CSEQ_removeindent;
                                
# 2349 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2350 "<previous_module>"
tthread2_0_102: IF(2,102,tthread2_0_103)__CSEQ_removeindent;
                                
# 2351 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 2352 "<previous_module>"
tthread2_0_103: IF(2,103,tthread2_0_104)__CSEQ_removeindent;
                                
# 2353 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2354 "<previous_module>"
tthread2_0_104: IF(2,104,tthread2_0_105)__CSEQ_removeindent;
                                
# 2355 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 2356 "<previous_module>"
tthread2_0_105: IF(2,105,tthread2_0_106)__CSEQ_removeindent;
                                
# 2357 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2358 "<previous_module>"
tthread2_0_106: IF(2,106,tthread2_0_107)__CSEQ_removeindent;
                                
# 2359 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 2360 "<previous_module>"
tthread2_0_107: IF(2,107,tthread2_0_108)__CSEQ_removeindent;
                                
# 2361 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2362 "<previous_module>"
;
                                ;
                                
# 2363 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 2364 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 2365 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2366 "<previous_module>"
                                {

# 2367 "<previous_module>"
                                        {
                                                
# 2368 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2369 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2370 "<previous_module>"
                                                {
                                                        
# 2371 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2373 "<previous_module>"
;
                                                
# 2374 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2375 "<previous_module>"
                                                {
                                                        
# 2376 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2378 "<previous_module>"
;
                                                
# 2379 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2380 "<previous_module>"
                                                {
                                                        
# 2381 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2383 "<previous_module>"
;
                                                
# 2384 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2385 "<previous_module>"
tthread2_0_108: IF(2,108,tthread2_0_109)__CSEQ_removeindent;
                                                
# 2386 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2387 "<previous_module>"
__exit_loop_23:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 109);

                                                
# 2388 "<previous_module>"
;
                                                ;
                                                
# 2389 "<previous_module>"
__exit__exponential_backoff_5_1:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 109);

                                                
# 2390 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2392 "<previous_module>"
;
                                }

                                
# 2394 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 109);
                                ;
                                
# 2395 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 2396 "<previous_module>"
;
                                ;
                                
# 2397 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 2398 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 2399 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2400 "<previous_module>"
                                {
                                        
# 2401 "<previous_module>"
goto __exit_loop_21;
                                        ;
                                }

                                
# 2403 "<previous_module>"
;
                        }
                        
# 2405 "<previous_module>"
;
                        
# 2406 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2407 "<previous_module>"
                        {
                                
# 2408 "<previous_module>"
goto __exit_loop_21;
                                ;
                        }

                        
# 2410 "<previous_module>"
;

# 2411 "<previous_module>"
                        {
                                
# 2412 "<previous_module>"
tthread2_0_109: IF(2,109,tthread2_0_110)__CSEQ_removeindent;
                                
# 2413 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2414 "<previous_module>"
tthread2_0_110: IF(2,110,tthread2_0_111)__CSEQ_removeindent;
                                
# 2415 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 2416 "<previous_module>"
tthread2_0_111: IF(2,111,tthread2_0_112)__CSEQ_removeindent;
                                
# 2417 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2418 "<previous_module>"
tthread2_0_112: IF(2,112,tthread2_0_113)__CSEQ_removeindent;
                                
# 2419 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 2420 "<previous_module>"
tthread2_0_113: IF(2,113,tthread2_0_114)__CSEQ_removeindent;
                                
# 2421 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2422 "<previous_module>"
tthread2_0_114: IF(2,114,tthread2_0_115)__CSEQ_removeindent;
                                
# 2423 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 2424 "<previous_module>"
tthread2_0_115: IF(2,115,tthread2_0_116)__CSEQ_removeindent;
                                
# 2425 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2426 "<previous_module>"
;
                                ;
                                
# 2427 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 2428 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 2429 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2430 "<previous_module>"
                                {

# 2431 "<previous_module>"
                                        {
                                                
# 2432 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2433 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2434 "<previous_module>"
                                                {
                                                        
# 2435 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2437 "<previous_module>"
;
                                                
# 2438 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2439 "<previous_module>"
                                                {
                                                        
# 2440 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2442 "<previous_module>"
;
                                                
# 2443 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2444 "<previous_module>"
                                                {
                                                        
# 2445 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2447 "<previous_module>"
;
                                                
# 2448 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2449 "<previous_module>"
tthread2_0_116: IF(2,116,tthread2_0_117)__CSEQ_removeindent;
                                                
# 2450 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2451 "<previous_module>"
__exit_loop_24:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 117);

                                                
# 2452 "<previous_module>"
;
                                                ;
                                                
# 2453 "<previous_module>"
__exit__exponential_backoff_5_2:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 117);

                                                
# 2454 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2456 "<previous_module>"
;
                                }

                                
# 2458 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 117);
                                ;
                                
# 2459 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 2460 "<previous_module>"
;
                                ;
                                
# 2461 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 2462 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 2463 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2464 "<previous_module>"
                                {
                                        
# 2465 "<previous_module>"
goto __exit_loop_21;
                                        ;
                                }

                                
# 2467 "<previous_module>"
;
                        }
                        
# 2469 "<previous_module>"
;
                        
# 2470 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2471 "<previous_module>"
                        {
                                
# 2472 "<previous_module>"
goto __exit_loop_21;
                                ;
                        }

                        
# 2474 "<previous_module>"
;

# 2475 "<previous_module>"
                        {
                                
# 2476 "<previous_module>"
tthread2_0_117: IF(2,117,tthread2_0_118)__CSEQ_removeindent;
                                
# 2477 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2478 "<previous_module>"
tthread2_0_118: IF(2,118,tthread2_0_119)__CSEQ_removeindent;
                                
# 2479 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 2480 "<previous_module>"
tthread2_0_119: IF(2,119,tthread2_0_120)__CSEQ_removeindent;
                                
# 2481 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2482 "<previous_module>"
tthread2_0_120: IF(2,120,tthread2_0_121)__CSEQ_removeindent;
                                
# 2483 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 2484 "<previous_module>"
tthread2_0_121: IF(2,121,tthread2_0_122)__CSEQ_removeindent;
                                
# 2485 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2486 "<previous_module>"
tthread2_0_122: IF(2,122,tthread2_0_123)__CSEQ_removeindent;
                                
# 2487 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 2488 "<previous_module>"
tthread2_0_123: IF(2,123,tthread2_0_124)__CSEQ_removeindent;
                                
# 2489 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2490 "<previous_module>"
;
                                ;
                                
# 2491 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 2492 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 2493 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2494 "<previous_module>"
                                {

# 2495 "<previous_module>"
                                        {
                                                
# 2496 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2497 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2498 "<previous_module>"
                                                {
                                                        
# 2499 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2501 "<previous_module>"
;
                                                
# 2502 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2503 "<previous_module>"
                                                {
                                                        
# 2504 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2506 "<previous_module>"
;
                                                
# 2507 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2508 "<previous_module>"
                                                {
                                                        
# 2509 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2511 "<previous_module>"
;
                                                
# 2512 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2513 "<previous_module>"
tthread2_0_124: IF(2,124,tthread2_0_125)__CSEQ_removeindent;
                                                
# 2514 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2515 "<previous_module>"
__exit_loop_25:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 125);

                                                
# 2516 "<previous_module>"
;
                                                ;
                                                
# 2517 "<previous_module>"
__exit__exponential_backoff_5_3:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 125);

                                                
# 2518 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2520 "<previous_module>"
;
                                }

                                
# 2522 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 125);
                                ;
                                
# 2523 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 2524 "<previous_module>"
;
                                ;
                                
# 2525 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 2526 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 2527 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2528 "<previous_module>"
                                {
                                        
# 2529 "<previous_module>"
goto __exit_loop_21;
                                        ;
                                }

                                
# 2531 "<previous_module>"
;
                        }
                        
# 2533 "<previous_module>"
;
                        
# 2534 "<previous_module>"
if (!(__cs_local_lfds711_stack_push_result == 0))

# 2535 "<previous_module>"
                        {
                                
# 2536 "<previous_module>"
goto __exit_loop_21;
                                ;
                        }

                        
# 2538 "<previous_module>"
;

# 2539 "<previous_module>"
                        {
                                
# 2540 "<previous_module>"
tthread2_0_125: IF(2,125,tthread2_0_126)__CSEQ_removeindent;
                                
# 2541 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2542 "<previous_module>"
tthread2_0_126: IF(2,126,tthread2_0_127)__CSEQ_removeindent;
                                
# 2543 "<previous_module>"
(*__cs_param_lfds711_stack_push_se).next = __cs_local_lfds711_stack_push_original_top[0];
                                
# 2544 "<previous_module>"
tthread2_0_127: IF(2,127,tthread2_0_128)__CSEQ_removeindent;
                                
# 2545 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2546 "<previous_module>"
tthread2_0_128: IF(2,128,tthread2_0_129)__CSEQ_removeindent;
                                
# 2547 "<previous_module>"
__cs_local_lfds711_stack_push_new_top[1] = __cs_local_lfds711_stack_push_original_top[1] + 1;
                                
# 2548 "<previous_module>"
tthread2_0_129: IF(2,129,tthread2_0_130)__CSEQ_removeindent;
                                
# 2549 "<previous_module>"
__cs_mutex_lock(&library_lock, 2);
                                
# 2550 "<previous_module>"
tthread2_0_130: IF(2,130,tthread2_0_131)__CSEQ_removeindent;
                                
# 2551 "<previous_module>"
__cs_local_lfds711_stack_push_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_push_ss).top[0], &__cs_local_lfds711_stack_push_original_top[0], &__cs_local_lfds711_stack_push_new_top[0]);
                                
# 2552 "<previous_module>"
tthread2_0_131: IF(2,131,tthread2_0_132)__CSEQ_removeindent;
                                
# 2553 "<previous_module>"
__cs_mutex_unlock(&library_lock, 2);
                                
# 2554 "<previous_module>"
;
                                ;
                                
# 2555 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_16;
                                
# 2556 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_16 = __cs_local_lfds711_stack_push_result == 0;
                                
# 2557 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_16)

# 2558 "<previous_module>"
                                {

# 2559 "<previous_module>"
                                        {
                                                
# 2560 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                
# 2561 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2562 "<previous_module>"
                                                {
                                                        
# 2563 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2565 "<previous_module>"
;
                                                
# 2566 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2567 "<previous_module>"
                                                {
                                                        
# 2568 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2570 "<previous_module>"
;
                                                
# 2571 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2572 "<previous_module>"
                                                {
                                                        
# 2573 "<previous_module>"
;
                                                        ;
                                                }
                                                
# 2575 "<previous_module>"
;
                                                
# 2576 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                
# 2577 "<previous_module>"
tthread2_0_132: IF(2,132,tthread2_0_133)__CSEQ_removeindent;
                                                
# 2578 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                
# 2579 "<previous_module>"
__exit_loop_26:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 133);

                                                
# 2580 "<previous_module>"
;
                                                ;
                                                
# 2581 "<previous_module>"
__exit__exponential_backoff_5_4:
                                                __CPROVER_assume(__cs_pc_cs[2] >= 133);

                                                
# 2582 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2584 "<previous_module>"
;
                                }

                                
# 2586 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 133);
                                ;
                                
# 2587 "<previous_module>"
__cs_local_lfds711_stack_push_i++;
                                
# 2588 "<previous_module>"
;
                                ;
                                
# 2589 "<previous_module>"
static _Bool __cs_local_lfds711_stack_push___cs_tmp_if_cond_17;
                                
# 2590 "<previous_module>"
__cs_local_lfds711_stack_push___cs_tmp_if_cond_17 = __cs_local_lfds711_stack_push_i > 1000;
                                
# 2591 "<previous_module>"
if (__cs_local_lfds711_stack_push___cs_tmp_if_cond_17)

# 2592 "<previous_module>"
                                {
                                        
# 2593 "<previous_module>"
goto __exit_loop_21;
                                        ;
                                }

                                
# 2595 "<previous_module>"
;
                        }
                        
# 2597 "<previous_module>"
;
                        
# 2598 "<previous_module>"
tthread2_0_133: IF(2,133,tthread2_0_134)__CSEQ_removeindent;
                        
# 2599 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_push_result == 0));
                        
# 2600 "<previous_module>"
__exit_loop_21:
                        __CPROVER_assume(__cs_pc_cs[2] >= 134);

                        
# 2601 "<previous_module>"
;
                        ;
                        
# 2602 "<previous_module>"
goto __exit__lfds711_stack_push_3;
                        ;
                        
# 2603 "<previous_module>"
__exit__lfds711_stack_push_3:
                        __CPROVER_assume(__cs_pc_cs[2] >= 134);

                        
# 2604 "<previous_module>"
;
                        ;
                }
                
# 2606 "<previous_module>"
;
                
# 2607 "<previous_module>"
__exit__insert_3:
                __CPROVER_assume(__cs_pc_cs[2] >= 134);

                
# 2608 "<previous_module>"
;
                ;
        }
        
# 2610 "<previous_module>"
;
        
# 2611 "<previous_module>"
;
        ;
        
# 2612 "<previous_module>"
static _Bool __cs_local_thread2___cs_tmp_if_cond_32;
        
# 2613 "<previous_module>"
tthread2_0_134: IF(2,134,tthread2_0_135)__CSEQ_removeindent;
        
# 2614 "<previous_module>"
__cs_local_thread2___cs_tmp_if_cond_32 = ATOMIC_OPERATION;
        
# 2615 "<previous_module>"
if (__cs_local_thread2___cs_tmp_if_cond_32)

# 2616 "<previous_module>"
        {
                
# 2617 "<previous_module>"
tthread2_0_135: IF(2,135,tthread2_0_136)__CSEQ_removeindent;
                
# 2618 "<previous_module>"
__cs_mutex_unlock(&lock, 2);
        }

        
# 2620 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 136);
        ;
        
# 2621 "<previous_module>"
;
        ;
        
# 2622 "<previous_module>"
__exit_thread2:
        __CPROVER_assume(__cs_pc_cs[2] >= 136);

        
# 2623 "<previous_module>"
;
        ;
        
# 2624 "<previous_module>"
tthread2_0_136: __CSEQ_removeindent;
        
# 2625 "<previous_module>"
__cs_exit(0, 2);
}


# 2627 "<previous_module>"
int main_thread(void)

# 2628 "<previous_module>"
{
        
# 2629 "<previous_module>"
IF(0,0,tmain_1)__CSEQ_removeindent;
        
# 2630 "<previous_module>"
__cs_mutex_init(&lock, 0);
        
# 2631 "<previous_module>"
static struct lfds711_stack_state *__cs_retval__init_1;

# 2632 "<previous_module>"
        {

# 2633 "<previous_module>"
                {
                        
# 2634 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss;
                        
# 2635 "<previous_module>"
__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss = &mystack;
                        
# 2636 "<previous_module>"
static void *__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;
                        
# 2637 "<previous_module>"
__cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state = 0;
                        
# 2638 "<previous_module>"
__cs_mutex_init(&library_lock, 0);
                        
# 2639 "<previous_module>"
;
                        ;
                        
# 2640 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3;
                        
# 2641 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3 = !(__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss != 0);
                        
# 2642 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3)

# 2643 "<previous_module>"
                        {
                                
# 2644 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                                
# 2645 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                                
# 2646 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        }

                        
# 2648 "<previous_module>"
;
                        
# 2649 "<previous_module>"
;
                        ;
                        
# 2650 "<previous_module>"
;
                        ;
                        
# 2651 "<previous_module>"
;
                        ;
                        
# 2652 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4;
                        
# 2653 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4 = !((((lfds711_pal_uint_t) (*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top) % 128) == 0);
                        
# 2654 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4)

# 2655 "<previous_module>"
                        {
                                
# 2656 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                                
# 2657 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                                
# 2658 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        }

                        
# 2660 "<previous_module>"
;
                        
# 2661 "<previous_module>"
;
                        ;
                        
# 2662 "<previous_module>"
;
                        ;
                        
# 2663 "<previous_module>"
;
                        ;
                        
# 2664 "<previous_module>"
static _Bool __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5;
                        
# 2665 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state)) % 128) == 0);
                        
# 2666 "<previous_module>"
if (__cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5)

# 2667 "<previous_module>"
                        {
                                
# 2668 "<previous_module>"
static char *__cs_local_lfds711_stack_init_valid_on_current_logical_core_c;
                                
# 2669 "<previous_module>"
__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                                
# 2670 "<previous_module>"
*__cs_local_lfds711_stack_init_valid_on_current_logical_core_c = 0;
                        }

                        
# 2672 "<previous_module>"
;
                        
# 2673 "<previous_module>"
;
                        ;
                        
# 2674 "<previous_module>"
;
                        ;
                        
# 2675 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                        
# 2676 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[0] = 0;
                        
# 2677 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).top[1] = 0;
                        
# 2678 "<previous_module>"
(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).user_state = __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state;

# 2679 "<previous_module>"
                        {
                                
# 2680 "<previous_module>"
static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
                                
# 2681 "<previous_module>"
__cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).pop_backoff;
                                
# 2682 "<previous_module>"
;
                                ;
                                
# 2683 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
                                
# 2684 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
                                
# 2685 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)

# 2686 "<previous_module>"
                                {
                                        
# 2687 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 2688 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 2689 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 2691 "<previous_module>"
;
                                
# 2692 "<previous_module>"
;
                                ;
                                
# 2693 "<previous_module>"
;
                                ;
                                
# 2694 "<previous_module>"
;
                                ;
                                
# 2695 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
                                
# 2696 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
                                
# 2697 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)

# 2698 "<previous_module>"
                                {
                                        
# 2699 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 2700 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 2701 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 2703 "<previous_module>"
;
                                
# 2704 "<previous_module>"
;
                                ;
                                
# 2705 "<previous_module>"
;
                                ;
                                
# 2706 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock = LFDS711_MISC_FLAG_LOWERED;
                                
# 2707 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[0] = 0;
                                
# 2708 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[1] = 0;
                                
# 2709 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).metric = 1;
                                
# 2710 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).total_operations = 0;
                                
# 2711 "<previous_module>"
goto __exit__lfds711_misc_internal_backoff_init_1;
                                ;
                                
# 2712 "<previous_module>"
__exit__lfds711_misc_internal_backoff_init_1:
                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                
# 2713 "<previous_module>"
;
                                ;
                        }
                        
# 2715 "<previous_module>"
;

# 2716 "<previous_module>"
                        {
                                
# 2717 "<previous_module>"
static struct lfds711_misc_backoff_state *__cs_param_lfds711_misc_internal_backoff_init_bs;
                                
# 2718 "<previous_module>"
__cs_param_lfds711_misc_internal_backoff_init_bs = &(*__cs_param_lfds711_stack_init_valid_on_current_logical_core_ss).push_backoff;
                                
# 2719 "<previous_module>"
;
                                ;
                                
# 2720 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1;
                                
# 2721 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1 = !(__cs_param_lfds711_misc_internal_backoff_init_bs != 0);
                                
# 2722 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1)

# 2723 "<previous_module>"
                                {
                                        
# 2724 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 2725 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 2726 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 2728 "<previous_module>"
;
                                
# 2729 "<previous_module>"
;
                                ;
                                
# 2730 "<previous_module>"
;
                                ;
                                
# 2731 "<previous_module>"
;
                                ;
                                
# 2732 "<previous_module>"
static _Bool __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2;
                                
# 2733 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2 = !((((lfds711_pal_uint_t) (&(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock)) % 128) == 0);
                                
# 2734 "<previous_module>"
if (__cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2)

# 2735 "<previous_module>"
                                {
                                        
# 2736 "<previous_module>"
static char *__cs_local_lfds711_misc_internal_backoff_init_c;
                                        
# 2737 "<previous_module>"
__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                        
# 2738 "<previous_module>"
*__cs_local_lfds711_misc_internal_backoff_init_c = 0;
                                }

                                
# 2740 "<previous_module>"
;
                                
# 2741 "<previous_module>"
;
                                ;
                                
# 2742 "<previous_module>"
;
                                ;
                                
# 2743 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).lock = LFDS711_MISC_FLAG_LOWERED;
                                
# 2744 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[0] = 0;
                                
# 2745 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).backoff_iteration_frequency_counters[1] = 0;
                                
# 2746 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).metric = 1;
                                
# 2747 "<previous_module>"
(*__cs_param_lfds711_misc_internal_backoff_init_bs).total_operations = 0;
                                
# 2748 "<previous_module>"
goto __exit__lfds711_misc_internal_backoff_init_2;
                                ;
                                
# 2749 "<previous_module>"
__exit__lfds711_misc_internal_backoff_init_2:
                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                
# 2750 "<previous_module>"
;
                                ;
                        }
                        
# 2752 "<previous_module>"
;

# 2753 "<previous_module>"
                        {
                                
# 2754 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_misc_force_store_destination;
                                
# 2755 "<previous_module>"
__cs_init_scalar(&__cs_local_lfds711_misc_force_store_destination, sizeof(lfds711_pal_uint_t));

# 2756 "<previous_module>"
                                {
                                        
# 2757 "<previous_module>"
static unsigned long __cs_retval____atomic_exchange_n_1;

# 2758 "<previous_module>"
                                        {
                                                
# 2759 "<previous_module>"
static int long long unsigned *__cs_param___atomic_exchange_n_previous;
                                                
# 2760 "<previous_module>"
__cs_param___atomic_exchange_n_previous = &__cs_local_lfds711_misc_force_store_destination;
                                                
# 2761 "<previous_module>"
static int long long unsigned __cs_param___atomic_exchange_n_new;
                                                
# 2762 "<previous_module>"
__cs_param___atomic_exchange_n_new = 0;
                                                
# 2763 "<previous_module>"
static int __cs_param___atomic_exchange_n_memorder;
                                                
# 2764 "<previous_module>"
__cs_param___atomic_exchange_n_memorder = 0;
                                                
# 2765 "<previous_module>"
static int __cs_local___atomic_exchange_n_res;
                                                
# 2766 "<previous_module>"
__cs_local___atomic_exchange_n_res = __CSEQ_atomic_exchange(__cs_param___atomic_exchange_n_previous, __cs_param___atomic_exchange_n_new, __cs_param___atomic_exchange_n_memorder);
                                                
# 2767 "<previous_module>"
__cs_retval____atomic_exchange_n_1 = __cs_local___atomic_exchange_n_res;
                                                
# 2768 "<previous_module>"
goto __exit____atomic_exchange_n_1;
                                                ;
                                                
# 2769 "<previous_module>"
__exit____atomic_exchange_n_1:
                                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                                
# 2770 "<previous_module>"
;
                                                ;
                                        }
                                        
# 2772 "<previous_module>"
;
                                        
# 2773 "<previous_module>"
(void) __cs_retval____atomic_exchange_n_1;
                                }
                                
# 2775 "<previous_module>"
;
                                
# 2776 "<previous_module>"
;
                                ;
                                
# 2777 "<previous_module>"
goto __exit__lfds711_misc_force_store_1;
                                ;
                                
# 2778 "<previous_module>"
__exit__lfds711_misc_force_store_1:
                                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                                
# 2779 "<previous_module>"
;
                                ;
                        }
                        
# 2781 "<previous_module>"
;
                        
# 2782 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                        
# 2783 "<previous_module>"
goto __exit__lfds711_stack_init_valid_on_current_logical_core_1;
                        ;
                        
# 2784 "<previous_module>"
__exit__lfds711_stack_init_valid_on_current_logical_core_1:
                        __CPROVER_assume(__cs_pc_cs[0] >= 1);

                        
# 2785 "<previous_module>"
;
                        ;
                }
                
# 2787 "<previous_module>"
;
                
# 2788 "<previous_module>"
__cs_retval__init_1 = &mystack;
                
# 2789 "<previous_module>"
goto __exit__init_1;
                ;
                
# 2790 "<previous_module>"
__exit__init_1:
                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                
# 2791 "<previous_module>"
;
                ;
        }
        
# 2793 "<previous_module>"
;
        
# 2794 "<previous_module>"
ss = __cs_retval__init_1;
        
# 2795 "<previous_module>"
static __cs_t __cs_local_main_t1;
        
# 2796 "<previous_module>"
;
        ;
        
# 2797 "<previous_module>"
static __cs_t __cs_local_main_t2;
        
# 2798 "<previous_module>"
;
        ;
        
# 2799 "<previous_module>"
__cs_create(&__cs_local_main_t1, 0, thread1_0, 0, 1);
        
# 2800 "<previous_module>"
tmain_1: IF(0,1,tmain_2)__CSEQ_removeindent;
        
# 2801 "<previous_module>"
__cs_create(&__cs_local_main_t2, 0, thread2_0, 0, 2);
        
# 2802 "<previous_module>"
tmain_2: IF(0,2,tmain_3)__CSEQ_removeindent;
        
# 2803 "<previous_module>"
__cs_join(__cs_local_main_t1, 0);
        
# 2804 "<previous_module>"
tmain_3: IF(0,3,tmain_4)__CSEQ_removeindent;
        
# 2805 "<previous_module>"
__cs_join(__cs_local_main_t2, 0);

# 2806 "<previous_module>"
        {
                
# 2807 "<previous_module>"
static struct lfds711_stack_state *__cs_param_check_ss;
                
# 2808 "<previous_module>"
tmain_4: IF(0,4,tmain_5)__CSEQ_removeindent;
                
# 2809 "<previous_module>"
__cs_param_check_ss = ss;
                
# 2810 "<previous_module>"
static int *__cs_local_check_ids;
                
# 2811 "<previous_module>"
tmain_5: IF(0,5,tmain_6)__CSEQ_removeindent;
                
# 2812 "<previous_module>"
__cs_local_check_ids = (int *) __cs_safe_malloc((sizeof(int)) * 3);
                
# 2813 "<previous_module>"
static int __cs_local_check_size;
                
# 2814 "<previous_module>"
static int __cs_retval__dump_structure_1;

# 2815 "<previous_module>"
                {
                        
# 2816 "<previous_module>"
static struct lfds711_stack_state *__cs_param_dump_structure_s;
                        
# 2817 "<previous_module>"
tmain_6: IF(0,6,tmain_7)__CSEQ_removeindent;
                        
# 2818 "<previous_module>"
__cs_param_dump_structure_s = __cs_param_check_ss;
                        
# 2819 "<previous_module>"
static int __cs_param_dump_structure_size;
                        
# 2820 "<previous_module>"
__cs_param_dump_structure_size = 3;
                        
# 2821 "<previous_module>"
static int *__cs_param_dump_structure_ids;
                        
# 2822 "<previous_module>"
tmain_7: IF(0,7,tmain_8)__CSEQ_removeindent;
                        
# 2823 "<previous_module>"
__cs_param_dump_structure_ids = __cs_local_check_ids;
                        
# 2824 "<previous_module>"
static int __cs_local_dump_structure_res;
                        
# 2825 "<previous_module>"
__cs_local_dump_structure_res = 1;
                        
# 2826 "<previous_module>"
static int __cs_local_dump_structure_data_structure_size;
                        
# 2827 "<previous_module>"
__cs_local_dump_structure_data_structure_size = 0;
                        
# 2828 "<previous_module>"
static struct test_data *__cs_local_dump_structure_data;
                        
# 2829 "<previous_module>"
static struct lfds711_stack_element *__cs_local_dump_structure_se;
                        
# 2830 "<previous_module>"
if (!(__cs_local_dump_structure_res != 0))

# 2831 "<previous_module>"
                        {
                                
# 2832 "<previous_module>"
goto __exit_loop_27;
                                ;
                        }

                        
# 2834 "<previous_module>"
;

# 2835 "<previous_module>"
                        {
                                
# 2836 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_2;

# 2837 "<previous_module>"
                                {
                                        
# 2838 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                        
# 2839 "<previous_module>"
tmain_8: IF(0,8,tmain_9)__CSEQ_removeindent;
                                        
# 2840 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = __cs_param_dump_structure_s;
                                        
# 2841 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                        
# 2842 "<previous_module>"
tmain_9: IF(0,9,tmain_10)__CSEQ_removeindent;
                                        
# 2843 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_dump_structure_se;
                                        
# 2844 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                        
# 2845 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                        
# 2846 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                        
# 2847 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                        
# 2848 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                        
# 2849 "<previous_module>"
;
                                        ;
                                        
# 2850 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                        
# 2851 "<previous_module>"
tmain_10: IF(0,10,tmain_11)__CSEQ_removeindent;
                                        
# 2852 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                        
# 2853 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 2854 "<previous_module>"
                                        {
                                                
# 2855 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                                
# 2856 "<previous_module>"
tmain_11: IF(0,11,tmain_12)__CSEQ_removeindent;
                                                
# 2857 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                                
# 2858 "<previous_module>"
tmain_12: IF(0,12,tmain_13)__CSEQ_removeindent;
                                                
# 2859 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                        }

                                        
# 2861 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 13);
                                        ;
                                        
# 2862 "<previous_module>"
;
                                        ;
                                        
# 2863 "<previous_module>"
;
                                        ;
                                        
# 2864 "<previous_module>"
;
                                        ;
                                        
# 2865 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                        
# 2866 "<previous_module>"
tmain_13: IF(0,13,tmain_14)__CSEQ_removeindent;
                                        
# 2867 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                        
# 2868 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 2869 "<previous_module>"
                                        {
                                                
# 2870 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                                
# 2871 "<previous_module>"
tmain_14: IF(0,14,tmain_15)__CSEQ_removeindent;
                                                
# 2872 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                                
# 2873 "<previous_module>"
tmain_15: IF(0,15,tmain_16)__CSEQ_removeindent;
                                                
# 2874 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                        }

                                        
# 2876 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 16);
                                        ;
                                        
# 2877 "<previous_module>"
;
                                        ;
                                        
# 2878 "<previous_module>"
;
                                        ;
                                        
# 2879 "<previous_module>"
tmain_16: IF(0,16,tmain_17)__CSEQ_removeindent;
                                        
# 2880 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 2881 "<previous_module>"
tmain_17: IF(0,17,tmain_18)__CSEQ_removeindent;
                                        
# 2882 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 2883 "<previous_module>"
tmain_18: IF(0,18,tmain_19)__CSEQ_removeindent;
                                        
# 2884 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                        
# 2885 "<previous_module>"
tmain_19: IF(0,19,tmain_20)__CSEQ_removeindent;
                                        
# 2886 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 2887 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                        
# 2888 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                        
# 2889 "<previous_module>"
;
                                        ;
                                        
# 2890 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                        
# 2891 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 2892 "<previous_module>"
                                        {
                                                
# 2893 "<previous_module>"
;
                                                ;
                                                
# 2894 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                                
# 2895 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 2896 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 2897 "<previous_module>"
                                                {
                                                        
# 2898 "<previous_module>"
tmain_20: IF(0,20,tmain_21)__CSEQ_removeindent;
                                                        
# 2899 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 2900 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 2901 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                                        ;
                                                }

                                                
# 2903 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 21);
                                                ;
                                                
# 2904 "<previous_module>"
tmain_21: IF(0,21,tmain_22)__CSEQ_removeindent;
                                                
# 2905 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 2906 "<previous_module>"
tmain_22: IF(0,22,tmain_23)__CSEQ_removeindent;
                                                
# 2907 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 2908 "<previous_module>"
tmain_23: IF(0,23,tmain_24)__CSEQ_removeindent;
                                                
# 2909 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 2910 "<previous_module>"
tmain_24: IF(0,24,tmain_25)__CSEQ_removeindent;
                                                
# 2911 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 2912 "<previous_module>"
tmain_25: IF(0,25,tmain_26)__CSEQ_removeindent;
                                                
# 2913 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 2914 "<previous_module>"
;
                                                ;
                                                
# 2915 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                                
# 2916 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 2917 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 2918 "<previous_module>"
                                                {

# 2919 "<previous_module>"
                                                        {
                                                                
# 2920 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 2921 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 2922 "<previous_module>"
                                                                {
                                                                        
# 2923 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 2925 "<previous_module>"
;
                                                                
# 2926 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 2927 "<previous_module>"
                                                                {
                                                                        
# 2928 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 2930 "<previous_module>"
;
                                                                
# 2931 "<previous_module>"
__cs_local_exponential_backoff_loop++;

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
tmain_26: IF(0,26,tmain_27)__CSEQ_removeindent;
                                                                
# 2938 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 2939 "<previous_module>"
__exit_loop_29:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 27);

                                                                
# 2940 "<previous_module>"
;
                                                                ;
                                                                
# 2941 "<previous_module>"
__exit__exponential_backoff_6_0:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 27);

                                                                
# 2942 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 2944 "<previous_module>"
;
                                                        
# 2945 "<previous_module>"
tmain_27: IF(0,27,tmain_28)__CSEQ_removeindent;
                                                        
# 2946 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 2947 "<previous_module>"
tmain_28: IF(0,28,tmain_29)__CSEQ_removeindent;
                                                        
# 2948 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 2950 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 29);
                                                ;
                                                
# 2951 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 2952 "<previous_module>"
;
                                                ;
                                                
# 2953 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                                
# 2954 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 2955 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 2956 "<previous_module>"
                                                {
                                                        
# 2957 "<previous_module>"
goto __exit_loop_28;
                                                        ;
                                                }

                                                
# 2959 "<previous_module>"
;
                                        }
                                        
# 2961 "<previous_module>"
;
                                        
# 2962 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                        
# 2963 "<previous_module>"
tmain_29: IF(0,29,tmain_30)__CSEQ_removeindent;
                                        
# 2964 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                        
# 2965 "<previous_module>"
__exit_loop_28:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 30);

                                        
# 2966 "<previous_module>"
;
                                        ;
                                        
# 2967 "<previous_module>"
if (
# 2968 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 2969 "<previous_module>"
                                        {
                                                
# 2970 "<previous_module>"
goto __exit_loop_30;
                                                ;
                                        }

                                        
# 2972 "<previous_module>"
;

# 2973 "<previous_module>"
                                        {
                                                
# 2974 "<previous_module>"
;
                                                ;
                                                
# 2975 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 2976 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 2977 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 2978 "<previous_module>"
                                                {
                                                        
# 2979 "<previous_module>"
tmain_30: IF(0,30,tmain_31)__CSEQ_removeindent;
                                                        
# 2980 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 2981 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 2982 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                                        ;
                                                }

                                                
# 2984 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 31);
                                                ;
                                                
# 2985 "<previous_module>"
tmain_31: IF(0,31,tmain_32)__CSEQ_removeindent;
                                                
# 2986 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 2987 "<previous_module>"
tmain_32: IF(0,32,tmain_33)__CSEQ_removeindent;
                                                
# 2988 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 2989 "<previous_module>"
tmain_33: IF(0,33,tmain_34)__CSEQ_removeindent;
                                                
# 2990 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 2991 "<previous_module>"
tmain_34: IF(0,34,tmain_35)__CSEQ_removeindent;
                                                
# 2992 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 2993 "<previous_module>"
tmain_35: IF(0,35,tmain_36)__CSEQ_removeindent;
                                                
# 2994 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 2995 "<previous_module>"
;
                                                ;
                                                
# 2996 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 2997 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 2998 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 2999 "<previous_module>"
                                                {

# 3000 "<previous_module>"
                                                        {
                                                                
# 3001 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 3002 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3003 "<previous_module>"
                                                                {
                                                                        
# 3004 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3006 "<previous_module>"
;
                                                                
# 3007 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3008 "<previous_module>"
                                                                {
                                                                        
# 3009 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3011 "<previous_module>"
;
                                                                
# 3012 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3013 "<previous_module>"
                                                                {
                                                                        
# 3014 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3016 "<previous_module>"
;
                                                                
# 3017 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 3018 "<previous_module>"
tmain_36: IF(0,36,tmain_37)__CSEQ_removeindent;
                                                                
# 3019 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 3020 "<previous_module>"
__exit_loop_31:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 37);

                                                                
# 3021 "<previous_module>"
;
                                                                ;
                                                                
# 3022 "<previous_module>"
__exit__exponential_backoff_7_0:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 37);

                                                                
# 3023 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3025 "<previous_module>"
;
                                                        
# 3026 "<previous_module>"
tmain_37: IF(0,37,tmain_38)__CSEQ_removeindent;
                                                        
# 3027 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 3028 "<previous_module>"
tmain_38: IF(0,38,tmain_39)__CSEQ_removeindent;
                                                        
# 3029 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 3031 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 39);
                                                ;
                                                
# 3032 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 3033 "<previous_module>"
;
                                                ;
                                                
# 3034 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 3035 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 3036 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3037 "<previous_module>"
                                                {
                                                        
# 3038 "<previous_module>"
goto __exit_loop_30;
                                                        ;
                                                }

                                                
# 3040 "<previous_module>"
;
                                        }
                                        
# 3042 "<previous_module>"
;
                                        
# 3043 "<previous_module>"
if (
# 3044 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3045 "<previous_module>"
                                        {
                                                
# 3046 "<previous_module>"
goto __exit_loop_30;
                                                ;
                                        }

                                        
# 3048 "<previous_module>"
;

# 3049 "<previous_module>"
                                        {
                                                
# 3050 "<previous_module>"
;
                                                ;
                                                
# 3051 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 3052 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 3053 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3054 "<previous_module>"
                                                {
                                                        
# 3055 "<previous_module>"
tmain_39: IF(0,39,tmain_40)__CSEQ_removeindent;
                                                        
# 3056 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 3057 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 3058 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                                        ;
                                                }

                                                
# 3060 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 40);
                                                ;
                                                
# 3061 "<previous_module>"
tmain_40: IF(0,40,tmain_41)__CSEQ_removeindent;
                                                
# 3062 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 3063 "<previous_module>"
tmain_41: IF(0,41,tmain_42)__CSEQ_removeindent;
                                                
# 3064 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 3065 "<previous_module>"
tmain_42: IF(0,42,tmain_43)__CSEQ_removeindent;
                                                
# 3066 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3067 "<previous_module>"
tmain_43: IF(0,43,tmain_44)__CSEQ_removeindent;
                                                
# 3068 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 3069 "<previous_module>"
tmain_44: IF(0,44,tmain_45)__CSEQ_removeindent;
                                                
# 3070 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 3071 "<previous_module>"
;
                                                ;
                                                
# 3072 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 3073 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 3074 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3075 "<previous_module>"
                                                {

# 3076 "<previous_module>"
                                                        {
                                                                
# 3077 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 3078 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3079 "<previous_module>"
                                                                {
                                                                        
# 3080 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3082 "<previous_module>"
;
                                                                
# 3083 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3084 "<previous_module>"
                                                                {
                                                                        
# 3085 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3087 "<previous_module>"
;
                                                                
# 3088 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3089 "<previous_module>"
                                                                {
                                                                        
# 3090 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3092 "<previous_module>"
;
                                                                
# 3093 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 3094 "<previous_module>"
tmain_45: IF(0,45,tmain_46)__CSEQ_removeindent;
                                                                
# 3095 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 3096 "<previous_module>"
__exit_loop_32:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 46);

                                                                
# 3097 "<previous_module>"
;
                                                                ;
                                                                
# 3098 "<previous_module>"
__exit__exponential_backoff_7_1:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 46);

                                                                
# 3099 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3101 "<previous_module>"
;
                                                        
# 3102 "<previous_module>"
tmain_46: IF(0,46,tmain_47)__CSEQ_removeindent;
                                                        
# 3103 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 3104 "<previous_module>"
tmain_47: IF(0,47,tmain_48)__CSEQ_removeindent;
                                                        
# 3105 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 3107 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 48);
                                                ;
                                                
# 3108 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 3109 "<previous_module>"
;
                                                ;
                                                
# 3110 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 3111 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 3112 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3113 "<previous_module>"
                                                {
                                                        
# 3114 "<previous_module>"
goto __exit_loop_30;
                                                        ;
                                                }

                                                
# 3116 "<previous_module>"
;
                                        }
                                        
# 3118 "<previous_module>"
;
                                        
# 3119 "<previous_module>"
if (
# 3120 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3121 "<previous_module>"
                                        {
                                                
# 3122 "<previous_module>"
goto __exit_loop_30;
                                                ;
                                        }

                                        
# 3124 "<previous_module>"
;

# 3125 "<previous_module>"
                                        {
                                                
# 3126 "<previous_module>"
;
                                                ;
                                                
# 3127 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 3128 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 3129 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3130 "<previous_module>"
                                                {
                                                        
# 3131 "<previous_module>"
tmain_48: IF(0,48,tmain_49)__CSEQ_removeindent;
                                                        
# 3132 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 3133 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 3134 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                                        ;
                                                }

                                                
# 3136 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 49);
                                                ;
                                                
# 3137 "<previous_module>"
tmain_49: IF(0,49,tmain_50)__CSEQ_removeindent;
                                                
# 3138 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 3139 "<previous_module>"
tmain_50: IF(0,50,tmain_51)__CSEQ_removeindent;
                                                
# 3140 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 3141 "<previous_module>"
tmain_51: IF(0,51,tmain_52)__CSEQ_removeindent;
                                                
# 3142 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3143 "<previous_module>"
tmain_52: IF(0,52,tmain_53)__CSEQ_removeindent;
                                                
# 3144 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 3145 "<previous_module>"
tmain_53: IF(0,53,tmain_54)__CSEQ_removeindent;
                                                
# 3146 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 3147 "<previous_module>"
;
                                                ;
                                                
# 3148 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 3149 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 3150 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3151 "<previous_module>"
                                                {

# 3152 "<previous_module>"
                                                        {
                                                                
# 3153 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 3154 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3155 "<previous_module>"
                                                                {
                                                                        
# 3156 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3158 "<previous_module>"
;
                                                                
# 3159 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3160 "<previous_module>"
                                                                {
                                                                        
# 3161 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3163 "<previous_module>"
;
                                                                
# 3164 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3165 "<previous_module>"
                                                                {
                                                                        
# 3166 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3168 "<previous_module>"
;
                                                                
# 3169 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 3170 "<previous_module>"
tmain_54: IF(0,54,tmain_55)__CSEQ_removeindent;
                                                                
# 3171 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 3172 "<previous_module>"
__exit_loop_33:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 55);

                                                                
# 3173 "<previous_module>"
;
                                                                ;
                                                                
# 3174 "<previous_module>"
__exit__exponential_backoff_7_2:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 55);

                                                                
# 3175 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3177 "<previous_module>"
;
                                                        
# 3178 "<previous_module>"
tmain_55: IF(0,55,tmain_56)__CSEQ_removeindent;
                                                        
# 3179 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 3180 "<previous_module>"
tmain_56: IF(0,56,tmain_57)__CSEQ_removeindent;
                                                        
# 3181 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 3183 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 57);
                                                ;
                                                
# 3184 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 3185 "<previous_module>"
;
                                                ;
                                                
# 3186 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 3187 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 3188 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3189 "<previous_module>"
                                                {
                                                        
# 3190 "<previous_module>"
goto __exit_loop_30;
                                                        ;
                                                }

                                                
# 3192 "<previous_module>"
;
                                        }
                                        
# 3194 "<previous_module>"
;
                                        
# 3195 "<previous_module>"
if (
# 3196 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3197 "<previous_module>"
                                        {
                                                
# 3198 "<previous_module>"
goto __exit_loop_30;
                                                ;
                                        }

                                        
# 3200 "<previous_module>"
;

# 3201 "<previous_module>"
                                        {
                                                
# 3202 "<previous_module>"
;
                                                ;
                                                
# 3203 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 3204 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 3205 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3206 "<previous_module>"
                                                {
                                                        
# 3207 "<previous_module>"
tmain_57: IF(0,57,tmain_58)__CSEQ_removeindent;
                                                        
# 3208 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 3209 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 3210 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                                        ;
                                                }

                                                
# 3212 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 58);
                                                ;
                                                
# 3213 "<previous_module>"
tmain_58: IF(0,58,tmain_59)__CSEQ_removeindent;
                                                
# 3214 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 3215 "<previous_module>"
tmain_59: IF(0,59,tmain_60)__CSEQ_removeindent;
                                                
# 3216 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 3217 "<previous_module>"
tmain_60: IF(0,60,tmain_61)__CSEQ_removeindent;
                                                
# 3218 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3219 "<previous_module>"
tmain_61: IF(0,61,tmain_62)__CSEQ_removeindent;
                                                
# 3220 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 3221 "<previous_module>"
tmain_62: IF(0,62,tmain_63)__CSEQ_removeindent;
                                                
# 3222 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 3223 "<previous_module>"
;
                                                ;
                                                
# 3224 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 3225 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 3226 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3227 "<previous_module>"
                                                {

# 3228 "<previous_module>"
                                                        {
                                                                
# 3229 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 3230 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3231 "<previous_module>"
                                                                {
                                                                        
# 3232 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3234 "<previous_module>"
;
                                                                
# 3235 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3236 "<previous_module>"
                                                                {
                                                                        
# 3237 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3239 "<previous_module>"
;
                                                                
# 3240 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3241 "<previous_module>"
                                                                {
                                                                        
# 3242 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3244 "<previous_module>"
;
                                                                
# 3245 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 3246 "<previous_module>"
tmain_63: IF(0,63,tmain_64)__CSEQ_removeindent;
                                                                
# 3247 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 3248 "<previous_module>"
__exit_loop_34:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 64);

                                                                
# 3249 "<previous_module>"
;
                                                                ;
                                                                
# 3250 "<previous_module>"
__exit__exponential_backoff_7_3:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 64);

                                                                
# 3251 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3253 "<previous_module>"
;
                                                        
# 3254 "<previous_module>"
tmain_64: IF(0,64,tmain_65)__CSEQ_removeindent;
                                                        
# 3255 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 3256 "<previous_module>"
tmain_65: IF(0,65,tmain_66)__CSEQ_removeindent;
                                                        
# 3257 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 3259 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 66);
                                                ;
                                                
# 3260 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 3261 "<previous_module>"
;
                                                ;
                                                
# 3262 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 3263 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 3264 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3265 "<previous_module>"
                                                {
                                                        
# 3266 "<previous_module>"
goto __exit_loop_30;
                                                        ;
                                                }

                                                
# 3268 "<previous_module>"
;
                                        }
                                        
# 3270 "<previous_module>"
;
                                        
# 3271 "<previous_module>"
if (
# 3272 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3273 "<previous_module>"
                                        {
                                                
# 3274 "<previous_module>"
goto __exit_loop_30;
                                                ;
                                        }

                                        
# 3276 "<previous_module>"
;

# 3277 "<previous_module>"
                                        {
                                                
# 3278 "<previous_module>"
;
                                                ;
                                                
# 3279 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 3280 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 3281 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3282 "<previous_module>"
                                                {
                                                        
# 3283 "<previous_module>"
tmain_66: IF(0,66,tmain_67)__CSEQ_removeindent;
                                                        
# 3284 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 3285 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 3286 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                                        ;
                                                }

                                                
# 3288 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 67);
                                                ;
                                                
# 3289 "<previous_module>"
tmain_67: IF(0,67,tmain_68)__CSEQ_removeindent;
                                                
# 3290 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 3291 "<previous_module>"
tmain_68: IF(0,68,tmain_69)__CSEQ_removeindent;
                                                
# 3292 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 3293 "<previous_module>"
tmain_69: IF(0,69,tmain_70)__CSEQ_removeindent;
                                                
# 3294 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3295 "<previous_module>"
tmain_70: IF(0,70,tmain_71)__CSEQ_removeindent;
                                                
# 3296 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 3297 "<previous_module>"
tmain_71: IF(0,71,tmain_72)__CSEQ_removeindent;
                                                
# 3298 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 3299 "<previous_module>"
;
                                                ;
                                                
# 3300 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 3301 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 3302 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3303 "<previous_module>"
                                                {

# 3304 "<previous_module>"
                                                        {
                                                                
# 3305 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 3306 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3307 "<previous_module>"
                                                                {
                                                                        
# 3308 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3310 "<previous_module>"
;
                                                                
# 3311 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3312 "<previous_module>"
                                                                {
                                                                        
# 3313 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3315 "<previous_module>"
;
                                                                
# 3316 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3317 "<previous_module>"
                                                                {
                                                                        
# 3318 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3320 "<previous_module>"
;
                                                                
# 3321 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 3322 "<previous_module>"
tmain_72: IF(0,72,tmain_73)__CSEQ_removeindent;
                                                                
# 3323 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 3324 "<previous_module>"
__exit_loop_35:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 73);

                                                                
# 3325 "<previous_module>"
;
                                                                ;
                                                                
# 3326 "<previous_module>"
__exit__exponential_backoff_7_4:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 73);

                                                                
# 3327 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3329 "<previous_module>"
;
                                                        
# 3330 "<previous_module>"
tmain_73: IF(0,73,tmain_74)__CSEQ_removeindent;
                                                        
# 3331 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 3332 "<previous_module>"
tmain_74: IF(0,74,tmain_75)__CSEQ_removeindent;
                                                        
# 3333 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 3335 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 75);
                                                ;
                                                
# 3336 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 3337 "<previous_module>"
;
                                                ;
                                                
# 3338 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 3339 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 3340 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3341 "<previous_module>"
                                                {
                                                        
# 3342 "<previous_module>"
goto __exit_loop_30;
                                                        ;
                                                }

                                                
# 3344 "<previous_module>"
;
                                        }
                                        
# 3346 "<previous_module>"
;
                                        
# 3347 "<previous_module>"
tmain_75: IF(0,75,tmain_76)__CSEQ_removeindent;
                                        
# 3348 "<previous_module>"
__CPROVER_assume(
# 3349 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                        
# 3350 "<previous_module>"
__exit_loop_30:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 76);

                                        
# 3351 "<previous_module>"
;
                                        ;
                                        
# 3352 "<previous_module>"
tmain_76: IF(0,76,tmain_77)__CSEQ_removeindent;
                                        
# 3353 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                        
# 3354 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
                                        
# 3355 "<previous_module>"
goto __exit__lfds711_stack_pop_2_0;
                                        ;
                                        
# 3356 "<previous_module>"
__exit__lfds711_stack_pop_2_0:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 77);

                                        
# 3357 "<previous_module>"
;
                                        ;
                                }
                                
# 3359 "<previous_module>"
;
                                
# 3360 "<previous_module>"
__cs_local_dump_structure_res = __cs_retval__lfds711_stack_pop_2;
                                
# 3361 "<previous_module>"
;
                                ;
                                
# 3362 "<previous_module>"
static _Bool __cs_local_dump_structure___cs_tmp_if_cond_24;
                                
# 3363 "<previous_module>"
__cs_local_dump_structure___cs_tmp_if_cond_24 = __cs_local_dump_structure_res == 0;
                                
# 3364 "<previous_module>"
if (__cs_local_dump_structure___cs_tmp_if_cond_24)

# 3365 "<previous_module>"
                                {
                                        
# 3366 "<previous_module>"
__cs_retval__dump_structure_1 = __cs_local_dump_structure_data_structure_size;
                                        
# 3367 "<previous_module>"
goto __exit__dump_structure_1;
                                        ;
                                }

                                
# 3369 "<previous_module>"
;
                                
# 3370 "<previous_module>"
__cs_local_dump_structure_data_structure_size = __cs_local_dump_structure_data_structure_size + 1;
                                
# 3371 "<previous_module>"
tmain_77: IF(0,77,tmain_78)__CSEQ_removeindent;
                                
# 3372 "<previous_module>"
__cs_local_dump_structure_data = (*__cs_local_dump_structure_se).value;
                                
# 3373 "<previous_module>"
static unsigned long long int __cs_local_dump_structure_id_found;
                                
# 3374 "<previous_module>"
tmain_78: IF(0,78,tmain_79)__CSEQ_removeindent;
                                
# 3375 "<previous_module>"
__cs_local_dump_structure_id_found = (*__cs_local_dump_structure_data).user_id;
                                
# 3376 "<previous_module>"
tmain_79: IF(0,79,tmain_80)__CSEQ_removeindent;
                                
# 3377 "<previous_module>"
__cs_param_dump_structure_ids[(*__cs_local_dump_structure_data).user_id] = 1;
                                
# 3378 "<previous_module>"
tmain_80: IF(0,80,tmain_81)__CSEQ_removeindent;
                                
# 3379 "<previous_module>"
free(__cs_local_dump_structure_data);
                        }
                        
# 3381 "<previous_module>"
;
                        
# 3382 "<previous_module>"
if (!(__cs_local_dump_structure_res != 0))

# 3383 "<previous_module>"
                        {
                                
# 3384 "<previous_module>"
goto __exit_loop_27;
                                ;
                        }

                        
# 3386 "<previous_module>"
;

# 3387 "<previous_module>"
                        {
                                
# 3388 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_2;

# 3389 "<previous_module>"
                                {
                                        
# 3390 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                        
# 3391 "<previous_module>"
tmain_81: IF(0,81,tmain_82)__CSEQ_removeindent;
                                        
# 3392 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = __cs_param_dump_structure_s;
                                        
# 3393 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                        
# 3394 "<previous_module>"
tmain_82: IF(0,82,tmain_83)__CSEQ_removeindent;
                                        
# 3395 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_dump_structure_se;
                                        
# 3396 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                        
# 3397 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                        
# 3398 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                        
# 3399 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                        
# 3400 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                        
# 3401 "<previous_module>"
;
                                        ;
                                        
# 3402 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                        
# 3403 "<previous_module>"
tmain_83: IF(0,83,tmain_84)__CSEQ_removeindent;
                                        
# 3404 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                        
# 3405 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 3406 "<previous_module>"
                                        {
                                                
# 3407 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                                
# 3408 "<previous_module>"
tmain_84: IF(0,84,tmain_85)__CSEQ_removeindent;
                                                
# 3409 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                                
# 3410 "<previous_module>"
tmain_85: IF(0,85,tmain_86)__CSEQ_removeindent;
                                                
# 3411 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                        }

                                        
# 3413 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 86);
                                        ;
                                        
# 3414 "<previous_module>"
;
                                        ;
                                        
# 3415 "<previous_module>"
;
                                        ;
                                        
# 3416 "<previous_module>"
;
                                        ;
                                        
# 3417 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                        
# 3418 "<previous_module>"
tmain_86: IF(0,86,tmain_87)__CSEQ_removeindent;
                                        
# 3419 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                        
# 3420 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 3421 "<previous_module>"
                                        {
                                                
# 3422 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                                
# 3423 "<previous_module>"
tmain_87: IF(0,87,tmain_88)__CSEQ_removeindent;
                                                
# 3424 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                                
# 3425 "<previous_module>"
tmain_88: IF(0,88,tmain_89)__CSEQ_removeindent;
                                                
# 3426 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                        }

                                        
# 3428 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 89);
                                        ;
                                        
# 3429 "<previous_module>"
;
                                        ;
                                        
# 3430 "<previous_module>"
;
                                        ;
                                        
# 3431 "<previous_module>"
tmain_89: IF(0,89,tmain_90)__CSEQ_removeindent;
                                        
# 3432 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 3433 "<previous_module>"
tmain_90: IF(0,90,tmain_91)__CSEQ_removeindent;
                                        
# 3434 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 3435 "<previous_module>"
tmain_91: IF(0,91,tmain_92)__CSEQ_removeindent;
                                        
# 3436 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                        
# 3437 "<previous_module>"
tmain_92: IF(0,92,tmain_93)__CSEQ_removeindent;
                                        
# 3438 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 3439 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                        
# 3440 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                        
# 3441 "<previous_module>"
;
                                        ;
                                        
# 3442 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                        
# 3443 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 3444 "<previous_module>"
                                        {
                                                
# 3445 "<previous_module>"
;
                                                ;
                                                
# 3446 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                                
# 3447 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 3448 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 3449 "<previous_module>"
                                                {
                                                        
# 3450 "<previous_module>"
tmain_93: IF(0,93,tmain_94)__CSEQ_removeindent;
                                                        
# 3451 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 3452 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 3453 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                                        ;
                                                }

                                                
# 3455 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 94);
                                                ;
                                                
# 3456 "<previous_module>"
tmain_94: IF(0,94,tmain_95)__CSEQ_removeindent;
                                                
# 3457 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 3458 "<previous_module>"
tmain_95: IF(0,95,tmain_96)__CSEQ_removeindent;
                                                
# 3459 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 3460 "<previous_module>"
tmain_96: IF(0,96,tmain_97)__CSEQ_removeindent;
                                                
# 3461 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3462 "<previous_module>"
tmain_97: IF(0,97,tmain_98)__CSEQ_removeindent;
                                                
# 3463 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 3464 "<previous_module>"
tmain_98: IF(0,98,tmain_99)__CSEQ_removeindent;
                                                
# 3465 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 3466 "<previous_module>"
;
                                                ;
                                                
# 3467 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                                
# 3468 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 3469 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 3470 "<previous_module>"
                                                {

# 3471 "<previous_module>"
                                                        {
                                                                
# 3472 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 3473 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

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
                                                                {
                                                                        
# 3480 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3482 "<previous_module>"
;
                                                                
# 3483 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3484 "<previous_module>"
                                                                {
                                                                        
# 3485 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3487 "<previous_module>"
;
                                                                
# 3488 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 3489 "<previous_module>"
tmain_99: IF(0,99,tmain_100)__CSEQ_removeindent;
                                                                
# 3490 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 3491 "<previous_module>"
__exit_loop_37:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 100);

                                                                
# 3492 "<previous_module>"
;
                                                                ;
                                                                
# 3493 "<previous_module>"
__exit__exponential_backoff_6_1:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 100);

                                                                
# 3494 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3496 "<previous_module>"
;
                                                        
# 3497 "<previous_module>"
tmain_100: IF(0,100,tmain_101)__CSEQ_removeindent;
                                                        
# 3498 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 3499 "<previous_module>"
tmain_101: IF(0,101,tmain_102)__CSEQ_removeindent;
                                                        
# 3500 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 3502 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 102);
                                                ;
                                                
# 3503 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 3504 "<previous_module>"
;
                                                ;
                                                
# 3505 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                                
# 3506 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 3507 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 3508 "<previous_module>"
                                                {
                                                        
# 3509 "<previous_module>"
goto __exit_loop_36;
                                                        ;
                                                }

                                                
# 3511 "<previous_module>"
;
                                        }
                                        
# 3513 "<previous_module>"
;
                                        
# 3514 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                        
# 3515 "<previous_module>"
tmain_102: IF(0,102,tmain_103)__CSEQ_removeindent;
                                        
# 3516 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                        
# 3517 "<previous_module>"
__exit_loop_36:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 103);

                                        
# 3518 "<previous_module>"
;
                                        ;
                                        
# 3519 "<previous_module>"
if (
# 3520 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3521 "<previous_module>"
                                        {
                                                
# 3522 "<previous_module>"
goto __exit_loop_38;
                                                ;
                                        }

                                        
# 3524 "<previous_module>"
;

# 3525 "<previous_module>"
                                        {
                                                
# 3526 "<previous_module>"
;
                                                ;
                                                
# 3527 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 3528 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 3529 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3530 "<previous_module>"
                                                {
                                                        
# 3531 "<previous_module>"
tmain_103: IF(0,103,tmain_104)__CSEQ_removeindent;
                                                        
# 3532 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 3533 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 3534 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                                        ;
                                                }

                                                
# 3536 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 104);
                                                ;
                                                
# 3537 "<previous_module>"
tmain_104: IF(0,104,tmain_105)__CSEQ_removeindent;
                                                
# 3538 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 3539 "<previous_module>"
tmain_105: IF(0,105,tmain_106)__CSEQ_removeindent;
                                                
# 3540 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 3541 "<previous_module>"
tmain_106: IF(0,106,tmain_107)__CSEQ_removeindent;
                                                
# 3542 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3543 "<previous_module>"
tmain_107: IF(0,107,tmain_108)__CSEQ_removeindent;
                                                
# 3544 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 3545 "<previous_module>"
tmain_108: IF(0,108,tmain_109)__CSEQ_removeindent;
                                                
# 3546 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 3547 "<previous_module>"
;
                                                ;
                                                
# 3548 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 3549 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 3550 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3551 "<previous_module>"
                                                {

# 3552 "<previous_module>"
                                                        {
                                                                
# 3553 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 3554 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

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
                                                                {
                                                                        
# 3566 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3568 "<previous_module>"
;
                                                                
# 3569 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 3570 "<previous_module>"
tmain_109: IF(0,109,tmain_110)__CSEQ_removeindent;
                                                                
# 3571 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 3572 "<previous_module>"
__exit_loop_39:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 110);

                                                                
# 3573 "<previous_module>"
;
                                                                ;
                                                                
# 3574 "<previous_module>"
__exit__exponential_backoff_7_5:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 110);

                                                                
# 3575 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3577 "<previous_module>"
;
                                                        
# 3578 "<previous_module>"
tmain_110: IF(0,110,tmain_111)__CSEQ_removeindent;
                                                        
# 3579 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 3580 "<previous_module>"
tmain_111: IF(0,111,tmain_112)__CSEQ_removeindent;
                                                        
# 3581 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 3583 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 112);
                                                ;
                                                
# 3584 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 3585 "<previous_module>"
;
                                                ;
                                                
# 3586 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 3587 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 3588 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3589 "<previous_module>"
                                                {
                                                        
# 3590 "<previous_module>"
goto __exit_loop_38;
                                                        ;
                                                }

                                                
# 3592 "<previous_module>"
;
                                        }
                                        
# 3594 "<previous_module>"
;
                                        
# 3595 "<previous_module>"
if (
# 3596 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3597 "<previous_module>"
                                        {
                                                
# 3598 "<previous_module>"
goto __exit_loop_38;
                                                ;
                                        }

                                        
# 3600 "<previous_module>"
;

# 3601 "<previous_module>"
                                        {
                                                
# 3602 "<previous_module>"
;
                                                ;
                                                
# 3603 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 3604 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 3605 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3606 "<previous_module>"
                                                {
                                                        
# 3607 "<previous_module>"
tmain_112: IF(0,112,tmain_113)__CSEQ_removeindent;
                                                        
# 3608 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 3609 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 3610 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                                        ;
                                                }

                                                
# 3612 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 113);
                                                ;
                                                
# 3613 "<previous_module>"
tmain_113: IF(0,113,tmain_114)__CSEQ_removeindent;
                                                
# 3614 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 3615 "<previous_module>"
tmain_114: IF(0,114,tmain_115)__CSEQ_removeindent;
                                                
# 3616 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 3617 "<previous_module>"
tmain_115: IF(0,115,tmain_116)__CSEQ_removeindent;
                                                
# 3618 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3619 "<previous_module>"
tmain_116: IF(0,116,tmain_117)__CSEQ_removeindent;
                                                
# 3620 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 3621 "<previous_module>"
tmain_117: IF(0,117,tmain_118)__CSEQ_removeindent;
                                                
# 3622 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 3623 "<previous_module>"
;
                                                ;
                                                
# 3624 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 3625 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 3626 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3627 "<previous_module>"
                                                {

# 3628 "<previous_module>"
                                                        {
                                                                
# 3629 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 3630 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

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
tmain_118: IF(0,118,tmain_119)__CSEQ_removeindent;
                                                                
# 3647 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 3648 "<previous_module>"
__exit_loop_40:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 119);

                                                                
# 3649 "<previous_module>"
;
                                                                ;
                                                                
# 3650 "<previous_module>"
__exit__exponential_backoff_7_6:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 119);

                                                                
# 3651 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3653 "<previous_module>"
;
                                                        
# 3654 "<previous_module>"
tmain_119: IF(0,119,tmain_120)__CSEQ_removeindent;
                                                        
# 3655 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 3656 "<previous_module>"
tmain_120: IF(0,120,tmain_121)__CSEQ_removeindent;
                                                        
# 3657 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 3659 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 121);
                                                ;
                                                
# 3660 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 3661 "<previous_module>"
;
                                                ;
                                                
# 3662 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 3663 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 3664 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3665 "<previous_module>"
                                                {
                                                        
# 3666 "<previous_module>"
goto __exit_loop_38;
                                                        ;
                                                }

                                                
# 3668 "<previous_module>"
;
                                        }
                                        
# 3670 "<previous_module>"
;
                                        
# 3671 "<previous_module>"
if (
# 3672 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3673 "<previous_module>"
                                        {
                                                
# 3674 "<previous_module>"
goto __exit_loop_38;
                                                ;
                                        }

                                        
# 3676 "<previous_module>"
;

# 3677 "<previous_module>"
                                        {
                                                
# 3678 "<previous_module>"
;
                                                ;
                                                
# 3679 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 3680 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 3681 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3682 "<previous_module>"
                                                {
                                                        
# 3683 "<previous_module>"
tmain_121: IF(0,121,tmain_122)__CSEQ_removeindent;
                                                        
# 3684 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 3685 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 3686 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                                        ;
                                                }

                                                
# 3688 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 122);
                                                ;
                                                
# 3689 "<previous_module>"
tmain_122: IF(0,122,tmain_123)__CSEQ_removeindent;
                                                
# 3690 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 3691 "<previous_module>"
tmain_123: IF(0,123,tmain_124)__CSEQ_removeindent;
                                                
# 3692 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 3693 "<previous_module>"
tmain_124: IF(0,124,tmain_125)__CSEQ_removeindent;
                                                
# 3694 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3695 "<previous_module>"
tmain_125: IF(0,125,tmain_126)__CSEQ_removeindent;
                                                
# 3696 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 3697 "<previous_module>"
tmain_126: IF(0,126,tmain_127)__CSEQ_removeindent;
                                                
# 3698 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 3699 "<previous_module>"
;
                                                ;
                                                
# 3700 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 3701 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 3702 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3703 "<previous_module>"
                                                {

# 3704 "<previous_module>"
                                                        {
                                                                
# 3705 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 3706 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3707 "<previous_module>"
                                                                {
                                                                        
# 3708 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3710 "<previous_module>"
;
                                                                
# 3711 "<previous_module>"
__cs_local_exponential_backoff_loop++;

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
tmain_127: IF(0,127,tmain_128)__CSEQ_removeindent;
                                                                
# 3723 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 3724 "<previous_module>"
__exit_loop_41:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 128);

                                                                
# 3725 "<previous_module>"
;
                                                                ;
                                                                
# 3726 "<previous_module>"
__exit__exponential_backoff_7_7:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 128);

                                                                
# 3727 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3729 "<previous_module>"
;
                                                        
# 3730 "<previous_module>"
tmain_128: IF(0,128,tmain_129)__CSEQ_removeindent;
                                                        
# 3731 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 3732 "<previous_module>"
tmain_129: IF(0,129,tmain_130)__CSEQ_removeindent;
                                                        
# 3733 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 3735 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 130);
                                                ;
                                                
# 3736 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 3737 "<previous_module>"
;
                                                ;
                                                
# 3738 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 3739 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 3740 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3741 "<previous_module>"
                                                {
                                                        
# 3742 "<previous_module>"
goto __exit_loop_38;
                                                        ;
                                                }

                                                
# 3744 "<previous_module>"
;
                                        }
                                        
# 3746 "<previous_module>"
;
                                        
# 3747 "<previous_module>"
if (
# 3748 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3749 "<previous_module>"
                                        {
                                                
# 3750 "<previous_module>"
goto __exit_loop_38;
                                                ;
                                        }

                                        
# 3752 "<previous_module>"
;

# 3753 "<previous_module>"
                                        {
                                                
# 3754 "<previous_module>"
;
                                                ;
                                                
# 3755 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 3756 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 3757 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3758 "<previous_module>"
                                                {
                                                        
# 3759 "<previous_module>"
tmain_130: IF(0,130,tmain_131)__CSEQ_removeindent;
                                                        
# 3760 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 3761 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 3762 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                                        ;
                                                }

                                                
# 3764 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 131);
                                                ;
                                                
# 3765 "<previous_module>"
tmain_131: IF(0,131,tmain_132)__CSEQ_removeindent;
                                                
# 3766 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 3767 "<previous_module>"
tmain_132: IF(0,132,tmain_133)__CSEQ_removeindent;
                                                
# 3768 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 3769 "<previous_module>"
tmain_133: IF(0,133,tmain_134)__CSEQ_removeindent;
                                                
# 3770 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3771 "<previous_module>"
tmain_134: IF(0,134,tmain_135)__CSEQ_removeindent;
                                                
# 3772 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 3773 "<previous_module>"
tmain_135: IF(0,135,tmain_136)__CSEQ_removeindent;
                                                
# 3774 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 3775 "<previous_module>"
;
                                                ;
                                                
# 3776 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 3777 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 3778 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3779 "<previous_module>"
                                                {

# 3780 "<previous_module>"
                                                        {
                                                                
# 3781 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 3782 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3783 "<previous_module>"
                                                                {
                                                                        
# 3784 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3786 "<previous_module>"
;
                                                                
# 3787 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3788 "<previous_module>"
                                                                {
                                                                        
# 3789 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3791 "<previous_module>"
;
                                                                
# 3792 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3793 "<previous_module>"
                                                                {
                                                                        
# 3794 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3796 "<previous_module>"
;
                                                                
# 3797 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 3798 "<previous_module>"
tmain_136: IF(0,136,tmain_137)__CSEQ_removeindent;
                                                                
# 3799 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 3800 "<previous_module>"
__exit_loop_42:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 137);

                                                                
# 3801 "<previous_module>"
;
                                                                ;
                                                                
# 3802 "<previous_module>"
__exit__exponential_backoff_7_8:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 137);

                                                                
# 3803 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3805 "<previous_module>"
;
                                                        
# 3806 "<previous_module>"
tmain_137: IF(0,137,tmain_138)__CSEQ_removeindent;
                                                        
# 3807 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 3808 "<previous_module>"
tmain_138: IF(0,138,tmain_139)__CSEQ_removeindent;
                                                        
# 3809 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 3811 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 139);
                                                ;
                                                
# 3812 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 3813 "<previous_module>"
;
                                                ;
                                                
# 3814 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 3815 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 3816 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3817 "<previous_module>"
                                                {
                                                        
# 3818 "<previous_module>"
goto __exit_loop_38;
                                                        ;
                                                }

                                                
# 3820 "<previous_module>"
;
                                        }
                                        
# 3822 "<previous_module>"
;
                                        
# 3823 "<previous_module>"
if (
# 3824 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 3825 "<previous_module>"
                                        {
                                                
# 3826 "<previous_module>"
goto __exit_loop_38;
                                                ;
                                        }

                                        
# 3828 "<previous_module>"
;

# 3829 "<previous_module>"
                                        {
                                                
# 3830 "<previous_module>"
;
                                                ;
                                                
# 3831 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 3832 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 3833 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 3834 "<previous_module>"
                                                {
                                                        
# 3835 "<previous_module>"
tmain_139: IF(0,139,tmain_140)__CSEQ_removeindent;
                                                        
# 3836 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 3837 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 3838 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                                        ;
                                                }

                                                
# 3840 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 140);
                                                ;
                                                
# 3841 "<previous_module>"
tmain_140: IF(0,140,tmain_141)__CSEQ_removeindent;
                                                
# 3842 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 3843 "<previous_module>"
tmain_141: IF(0,141,tmain_142)__CSEQ_removeindent;
                                                
# 3844 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 3845 "<previous_module>"
tmain_142: IF(0,142,tmain_143)__CSEQ_removeindent;
                                                
# 3846 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 3847 "<previous_module>"
tmain_143: IF(0,143,tmain_144)__CSEQ_removeindent;
                                                
# 3848 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 3849 "<previous_module>"
tmain_144: IF(0,144,tmain_145)__CSEQ_removeindent;
                                                
# 3850 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 3851 "<previous_module>"
;
                                                ;
                                                
# 3852 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 3853 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 3854 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 3855 "<previous_module>"
                                                {

# 3856 "<previous_module>"
                                                        {
                                                                
# 3857 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 3858 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 3859 "<previous_module>"
                                                                {
                                                                        
# 3860 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3862 "<previous_module>"
;
                                                                
# 3863 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3864 "<previous_module>"
                                                                {
                                                                        
# 3865 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3867 "<previous_module>"
;
                                                                
# 3868 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 3869 "<previous_module>"
                                                                {
                                                                        
# 3870 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 3872 "<previous_module>"
;
                                                                
# 3873 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 3874 "<previous_module>"
tmain_145: IF(0,145,tmain_146)__CSEQ_removeindent;
                                                                
# 3875 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 3876 "<previous_module>"
__exit_loop_43:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 146);

                                                                
# 3877 "<previous_module>"
;
                                                                ;
                                                                
# 3878 "<previous_module>"
__exit__exponential_backoff_7_9:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 146);

                                                                
# 3879 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 3881 "<previous_module>"
;
                                                        
# 3882 "<previous_module>"
tmain_146: IF(0,146,tmain_147)__CSEQ_removeindent;
                                                        
# 3883 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 3884 "<previous_module>"
tmain_147: IF(0,147,tmain_148)__CSEQ_removeindent;
                                                        
# 3885 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 3887 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 148);
                                                ;
                                                
# 3888 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 3889 "<previous_module>"
;
                                                ;
                                                
# 3890 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 3891 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 3892 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 3893 "<previous_module>"
                                                {
                                                        
# 3894 "<previous_module>"
goto __exit_loop_38;
                                                        ;
                                                }

                                                
# 3896 "<previous_module>"
;
                                        }
                                        
# 3898 "<previous_module>"
;
                                        
# 3899 "<previous_module>"
tmain_148: IF(0,148,tmain_149)__CSEQ_removeindent;
                                        
# 3900 "<previous_module>"
__CPROVER_assume(
# 3901 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                        
# 3902 "<previous_module>"
__exit_loop_38:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 149);

                                        
# 3903 "<previous_module>"
;
                                        ;
                                        
# 3904 "<previous_module>"
tmain_149: IF(0,149,tmain_150)__CSEQ_removeindent;
                                        
# 3905 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                        
# 3906 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
                                        
# 3907 "<previous_module>"
goto __exit__lfds711_stack_pop_2_1;
                                        ;
                                        
# 3908 "<previous_module>"
__exit__lfds711_stack_pop_2_1:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 150);

                                        
# 3909 "<previous_module>"
;
                                        ;
                                }
                                
# 3911 "<previous_module>"
;
                                
# 3912 "<previous_module>"
__cs_local_dump_structure_res = __cs_retval__lfds711_stack_pop_2;
                                
# 3913 "<previous_module>"
;
                                ;
                                
# 3914 "<previous_module>"
static _Bool __cs_local_dump_structure___cs_tmp_if_cond_24;
                                
# 3915 "<previous_module>"
__cs_local_dump_structure___cs_tmp_if_cond_24 = __cs_local_dump_structure_res == 0;
                                
# 3916 "<previous_module>"
if (__cs_local_dump_structure___cs_tmp_if_cond_24)

# 3917 "<previous_module>"
                                {
                                        
# 3918 "<previous_module>"
__cs_retval__dump_structure_1 = __cs_local_dump_structure_data_structure_size;
                                        
# 3919 "<previous_module>"
goto __exit__dump_structure_1;
                                        ;
                                }

                                
# 3921 "<previous_module>"
;
                                
# 3922 "<previous_module>"
__cs_local_dump_structure_data_structure_size = __cs_local_dump_structure_data_structure_size + 1;
                                
# 3923 "<previous_module>"
tmain_150: IF(0,150,tmain_151)__CSEQ_removeindent;
                                
# 3924 "<previous_module>"
__cs_local_dump_structure_data = (*__cs_local_dump_structure_se).value;
                                
# 3925 "<previous_module>"
static unsigned long long int __cs_local_dump_structure_id_found;
                                
# 3926 "<previous_module>"
tmain_151: IF(0,151,tmain_152)__CSEQ_removeindent;
                                
# 3927 "<previous_module>"
__cs_local_dump_structure_id_found = (*__cs_local_dump_structure_data).user_id;
                                
# 3928 "<previous_module>"
tmain_152: IF(0,152,tmain_153)__CSEQ_removeindent;
                                
# 3929 "<previous_module>"
__cs_param_dump_structure_ids[(*__cs_local_dump_structure_data).user_id] = 1;
                                
# 3930 "<previous_module>"
tmain_153: IF(0,153,tmain_154)__CSEQ_removeindent;
                                
# 3931 "<previous_module>"
free(__cs_local_dump_structure_data);
                        }
                        
# 3933 "<previous_module>"
;
                        
# 3934 "<previous_module>"
if (!(__cs_local_dump_structure_res != 0))

# 3935 "<previous_module>"
                        {
                                
# 3936 "<previous_module>"
goto __exit_loop_27;
                                ;
                        }

                        
# 3938 "<previous_module>"
;

# 3939 "<previous_module>"
                        {
                                
# 3940 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_2;

# 3941 "<previous_module>"
                                {
                                        
# 3942 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                        
# 3943 "<previous_module>"
tmain_154: IF(0,154,tmain_155)__CSEQ_removeindent;
                                        
# 3944 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = __cs_param_dump_structure_s;
                                        
# 3945 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                        
# 3946 "<previous_module>"
tmain_155: IF(0,155,tmain_156)__CSEQ_removeindent;
                                        
# 3947 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_dump_structure_se;
                                        
# 3948 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                        
# 3949 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                        
# 3950 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                        
# 3951 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                        
# 3952 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                        
# 3953 "<previous_module>"
;
                                        ;
                                        
# 3954 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                        
# 3955 "<previous_module>"
tmain_156: IF(0,156,tmain_157)__CSEQ_removeindent;
                                        
# 3956 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                        
# 3957 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 3958 "<previous_module>"
                                        {
                                                
# 3959 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                                
# 3960 "<previous_module>"
tmain_157: IF(0,157,tmain_158)__CSEQ_removeindent;
                                                
# 3961 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                                
# 3962 "<previous_module>"
tmain_158: IF(0,158,tmain_159)__CSEQ_removeindent;
                                                
# 3963 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                        }

                                        
# 3965 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 159);
                                        ;
                                        
# 3966 "<previous_module>"
;
                                        ;
                                        
# 3967 "<previous_module>"
;
                                        ;
                                        
# 3968 "<previous_module>"
;
                                        ;
                                        
# 3969 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                        
# 3970 "<previous_module>"
tmain_159: IF(0,159,tmain_160)__CSEQ_removeindent;
                                        
# 3971 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                        
# 3972 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 3973 "<previous_module>"
                                        {
                                                
# 3974 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                                
# 3975 "<previous_module>"
tmain_160: IF(0,160,tmain_161)__CSEQ_removeindent;
                                                
# 3976 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                                
# 3977 "<previous_module>"
tmain_161: IF(0,161,tmain_162)__CSEQ_removeindent;
                                                
# 3978 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                        }

                                        
# 3980 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 162);
                                        ;
                                        
# 3981 "<previous_module>"
;
                                        ;
                                        
# 3982 "<previous_module>"
;
                                        ;
                                        
# 3983 "<previous_module>"
tmain_162: IF(0,162,tmain_163)__CSEQ_removeindent;
                                        
# 3984 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 3985 "<previous_module>"
tmain_163: IF(0,163,tmain_164)__CSEQ_removeindent;
                                        
# 3986 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 3987 "<previous_module>"
tmain_164: IF(0,164,tmain_165)__CSEQ_removeindent;
                                        
# 3988 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                        
# 3989 "<previous_module>"
tmain_165: IF(0,165,tmain_166)__CSEQ_removeindent;
                                        
# 3990 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 3991 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                        
# 3992 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                        
# 3993 "<previous_module>"
;
                                        ;
                                        
# 3994 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                        
# 3995 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 3996 "<previous_module>"
                                        {
                                                
# 3997 "<previous_module>"
;
                                                ;
                                                
# 3998 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                                
# 3999 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 4000 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 4001 "<previous_module>"
                                                {
                                                        
# 4002 "<previous_module>"
tmain_166: IF(0,166,tmain_167)__CSEQ_removeindent;
                                                        
# 4003 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 4004 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 4005 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                                        ;
                                                }

                                                
# 4007 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 167);
                                                ;
                                                
# 4008 "<previous_module>"
tmain_167: IF(0,167,tmain_168)__CSEQ_removeindent;
                                                
# 4009 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 4010 "<previous_module>"
tmain_168: IF(0,168,tmain_169)__CSEQ_removeindent;
                                                
# 4011 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 4012 "<previous_module>"
tmain_169: IF(0,169,tmain_170)__CSEQ_removeindent;
                                                
# 4013 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4014 "<previous_module>"
tmain_170: IF(0,170,tmain_171)__CSEQ_removeindent;
                                                
# 4015 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 4016 "<previous_module>"
tmain_171: IF(0,171,tmain_172)__CSEQ_removeindent;
                                                
# 4017 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 4018 "<previous_module>"
;
                                                ;
                                                
# 4019 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                                
# 4020 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 4021 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 4022 "<previous_module>"
                                                {

# 4023 "<previous_module>"
                                                        {
                                                                
# 4024 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 4025 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4026 "<previous_module>"
                                                                {
                                                                        
# 4027 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4029 "<previous_module>"
;
                                                                
# 4030 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4031 "<previous_module>"
                                                                {
                                                                        
# 4032 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4034 "<previous_module>"
;
                                                                
# 4035 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4036 "<previous_module>"
                                                                {
                                                                        
# 4037 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4039 "<previous_module>"
;
                                                                
# 4040 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 4041 "<previous_module>"
tmain_172: IF(0,172,tmain_173)__CSEQ_removeindent;
                                                                
# 4042 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 4043 "<previous_module>"
__exit_loop_45:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 173);

                                                                
# 4044 "<previous_module>"
;
                                                                ;
                                                                
# 4045 "<previous_module>"
__exit__exponential_backoff_6_2:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 173);

                                                                
# 4046 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4048 "<previous_module>"
;
                                                        
# 4049 "<previous_module>"
tmain_173: IF(0,173,tmain_174)__CSEQ_removeindent;
                                                        
# 4050 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 4051 "<previous_module>"
tmain_174: IF(0,174,tmain_175)__CSEQ_removeindent;
                                                        
# 4052 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 4054 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 175);
                                                ;
                                                
# 4055 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 4056 "<previous_module>"
;
                                                ;
                                                
# 4057 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                                
# 4058 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 4059 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 4060 "<previous_module>"
                                                {
                                                        
# 4061 "<previous_module>"
goto __exit_loop_44;
                                                        ;
                                                }

                                                
# 4063 "<previous_module>"
;
                                        }
                                        
# 4065 "<previous_module>"
;
                                        
# 4066 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                        
# 4067 "<previous_module>"
tmain_175: IF(0,175,tmain_176)__CSEQ_removeindent;
                                        
# 4068 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                        
# 4069 "<previous_module>"
__exit_loop_44:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 176);

                                        
# 4070 "<previous_module>"
;
                                        ;
                                        
# 4071 "<previous_module>"
if (
# 4072 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4073 "<previous_module>"
                                        {
                                                
# 4074 "<previous_module>"
goto __exit_loop_46;
                                                ;
                                        }

                                        
# 4076 "<previous_module>"
;

# 4077 "<previous_module>"
                                        {
                                                
# 4078 "<previous_module>"
;
                                                ;
                                                
# 4079 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 4080 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 4081 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4082 "<previous_module>"
                                                {
                                                        
# 4083 "<previous_module>"
tmain_176: IF(0,176,tmain_177)__CSEQ_removeindent;
                                                        
# 4084 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 4085 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 4086 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                                        ;
                                                }

                                                
# 4088 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 177);
                                                ;
                                                
# 4089 "<previous_module>"
tmain_177: IF(0,177,tmain_178)__CSEQ_removeindent;
                                                
# 4090 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 4091 "<previous_module>"
tmain_178: IF(0,178,tmain_179)__CSEQ_removeindent;
                                                
# 4092 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 4093 "<previous_module>"
tmain_179: IF(0,179,tmain_180)__CSEQ_removeindent;
                                                
# 4094 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4095 "<previous_module>"
tmain_180: IF(0,180,tmain_181)__CSEQ_removeindent;
                                                
# 4096 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 4097 "<previous_module>"
tmain_181: IF(0,181,tmain_182)__CSEQ_removeindent;
                                                
# 4098 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 4099 "<previous_module>"
;
                                                ;
                                                
# 4100 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 4101 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 4102 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4103 "<previous_module>"
                                                {

# 4104 "<previous_module>"
                                                        {
                                                                
# 4105 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 4106 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4107 "<previous_module>"
                                                                {
                                                                        
# 4108 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4110 "<previous_module>"
;
                                                                
# 4111 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4112 "<previous_module>"
                                                                {
                                                                        
# 4113 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4115 "<previous_module>"
;
                                                                
# 4116 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4117 "<previous_module>"
                                                                {
                                                                        
# 4118 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4120 "<previous_module>"
;
                                                                
# 4121 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 4122 "<previous_module>"
tmain_182: IF(0,182,tmain_183)__CSEQ_removeindent;
                                                                
# 4123 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 4124 "<previous_module>"
__exit_loop_47:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 183);

                                                                
# 4125 "<previous_module>"
;
                                                                ;
                                                                
# 4126 "<previous_module>"
__exit__exponential_backoff_7_10:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 183);

                                                                
# 4127 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4129 "<previous_module>"
;
                                                        
# 4130 "<previous_module>"
tmain_183: IF(0,183,tmain_184)__CSEQ_removeindent;
                                                        
# 4131 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 4132 "<previous_module>"
tmain_184: IF(0,184,tmain_185)__CSEQ_removeindent;
                                                        
# 4133 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 4135 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 185);
                                                ;
                                                
# 4136 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 4137 "<previous_module>"
;
                                                ;
                                                
# 4138 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 4139 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 4140 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4141 "<previous_module>"
                                                {
                                                        
# 4142 "<previous_module>"
goto __exit_loop_46;
                                                        ;
                                                }

                                                
# 4144 "<previous_module>"
;
                                        }
                                        
# 4146 "<previous_module>"
;
                                        
# 4147 "<previous_module>"
if (
# 4148 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4149 "<previous_module>"
                                        {
                                                
# 4150 "<previous_module>"
goto __exit_loop_46;
                                                ;
                                        }

                                        
# 4152 "<previous_module>"
;

# 4153 "<previous_module>"
                                        {
                                                
# 4154 "<previous_module>"
;
                                                ;
                                                
# 4155 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 4156 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 4157 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4158 "<previous_module>"
                                                {
                                                        
# 4159 "<previous_module>"
tmain_185: IF(0,185,tmain_186)__CSEQ_removeindent;
                                                        
# 4160 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 4161 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 4162 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                                        ;
                                                }

                                                
# 4164 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 186);
                                                ;
                                                
# 4165 "<previous_module>"
tmain_186: IF(0,186,tmain_187)__CSEQ_removeindent;
                                                
# 4166 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 4167 "<previous_module>"
tmain_187: IF(0,187,tmain_188)__CSEQ_removeindent;
                                                
# 4168 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 4169 "<previous_module>"
tmain_188: IF(0,188,tmain_189)__CSEQ_removeindent;
                                                
# 4170 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4171 "<previous_module>"
tmain_189: IF(0,189,tmain_190)__CSEQ_removeindent;
                                                
# 4172 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 4173 "<previous_module>"
tmain_190: IF(0,190,tmain_191)__CSEQ_removeindent;
                                                
# 4174 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 4175 "<previous_module>"
;
                                                ;
                                                
# 4176 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 4177 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 4178 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4179 "<previous_module>"
                                                {

# 4180 "<previous_module>"
                                                        {
                                                                
# 4181 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 4182 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4183 "<previous_module>"
                                                                {
                                                                        
# 4184 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4186 "<previous_module>"
;
                                                                
# 4187 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4188 "<previous_module>"
                                                                {
                                                                        
# 4189 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4191 "<previous_module>"
;
                                                                
# 4192 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4193 "<previous_module>"
                                                                {
                                                                        
# 4194 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4196 "<previous_module>"
;
                                                                
# 4197 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 4198 "<previous_module>"
tmain_191: IF(0,191,tmain_192)__CSEQ_removeindent;
                                                                
# 4199 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 4200 "<previous_module>"
__exit_loop_48:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 192);

                                                                
# 4201 "<previous_module>"
;
                                                                ;
                                                                
# 4202 "<previous_module>"
__exit__exponential_backoff_7_11:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 192);

                                                                
# 4203 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4205 "<previous_module>"
;
                                                        
# 4206 "<previous_module>"
tmain_192: IF(0,192,tmain_193)__CSEQ_removeindent;
                                                        
# 4207 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 4208 "<previous_module>"
tmain_193: IF(0,193,tmain_194)__CSEQ_removeindent;
                                                        
# 4209 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 4211 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 194);
                                                ;
                                                
# 4212 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 4213 "<previous_module>"
;
                                                ;
                                                
# 4214 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 4215 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 4216 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4217 "<previous_module>"
                                                {
                                                        
# 4218 "<previous_module>"
goto __exit_loop_46;
                                                        ;
                                                }

                                                
# 4220 "<previous_module>"
;
                                        }
                                        
# 4222 "<previous_module>"
;
                                        
# 4223 "<previous_module>"
if (
# 4224 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4225 "<previous_module>"
                                        {
                                                
# 4226 "<previous_module>"
goto __exit_loop_46;
                                                ;
                                        }

                                        
# 4228 "<previous_module>"
;

# 4229 "<previous_module>"
                                        {
                                                
# 4230 "<previous_module>"
;
                                                ;
                                                
# 4231 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 4232 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 4233 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4234 "<previous_module>"
                                                {
                                                        
# 4235 "<previous_module>"
tmain_194: IF(0,194,tmain_195)__CSEQ_removeindent;
                                                        
# 4236 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 4237 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 4238 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                                        ;
                                                }

                                                
# 4240 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 195);
                                                ;
                                                
# 4241 "<previous_module>"
tmain_195: IF(0,195,tmain_196)__CSEQ_removeindent;
                                                
# 4242 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 4243 "<previous_module>"
tmain_196: IF(0,196,tmain_197)__CSEQ_removeindent;
                                                
# 4244 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 4245 "<previous_module>"
tmain_197: IF(0,197,tmain_198)__CSEQ_removeindent;
                                                
# 4246 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4247 "<previous_module>"
tmain_198: IF(0,198,tmain_199)__CSEQ_removeindent;
                                                
# 4248 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 4249 "<previous_module>"
tmain_199: IF(0,199,tmain_200)__CSEQ_removeindent;
                                                
# 4250 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 4251 "<previous_module>"
;
                                                ;
                                                
# 4252 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 4253 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 4254 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4255 "<previous_module>"
                                                {

# 4256 "<previous_module>"
                                                        {
                                                                
# 4257 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 4258 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4259 "<previous_module>"
                                                                {
                                                                        
# 4260 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4262 "<previous_module>"
;
                                                                
# 4263 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4264 "<previous_module>"
                                                                {
                                                                        
# 4265 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4267 "<previous_module>"
;
                                                                
# 4268 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4269 "<previous_module>"
                                                                {
                                                                        
# 4270 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4272 "<previous_module>"
;
                                                                
# 4273 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 4274 "<previous_module>"
tmain_200: IF(0,200,tmain_201)__CSEQ_removeindent;
                                                                
# 4275 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 4276 "<previous_module>"
__exit_loop_49:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 201);

                                                                
# 4277 "<previous_module>"
;
                                                                ;
                                                                
# 4278 "<previous_module>"
__exit__exponential_backoff_7_12:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 201);

                                                                
# 4279 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4281 "<previous_module>"
;
                                                        
# 4282 "<previous_module>"
tmain_201: IF(0,201,tmain_202)__CSEQ_removeindent;
                                                        
# 4283 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 4284 "<previous_module>"
tmain_202: IF(0,202,tmain_203)__CSEQ_removeindent;
                                                        
# 4285 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 4287 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 203);
                                                ;
                                                
# 4288 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 4289 "<previous_module>"
;
                                                ;
                                                
# 4290 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 4291 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 4292 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4293 "<previous_module>"
                                                {
                                                        
# 4294 "<previous_module>"
goto __exit_loop_46;
                                                        ;
                                                }

                                                
# 4296 "<previous_module>"
;
                                        }
                                        
# 4298 "<previous_module>"
;
                                        
# 4299 "<previous_module>"
if (
# 4300 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4301 "<previous_module>"
                                        {
                                                
# 4302 "<previous_module>"
goto __exit_loop_46;
                                                ;
                                        }

                                        
# 4304 "<previous_module>"
;

# 4305 "<previous_module>"
                                        {
                                                
# 4306 "<previous_module>"
;
                                                ;
                                                
# 4307 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 4308 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 4309 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4310 "<previous_module>"
                                                {
                                                        
# 4311 "<previous_module>"
tmain_203: IF(0,203,tmain_204)__CSEQ_removeindent;
                                                        
# 4312 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 4313 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 4314 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                                        ;
                                                }

                                                
# 4316 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 204);
                                                ;
                                                
# 4317 "<previous_module>"
tmain_204: IF(0,204,tmain_205)__CSEQ_removeindent;
                                                
# 4318 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 4319 "<previous_module>"
tmain_205: IF(0,205,tmain_206)__CSEQ_removeindent;
                                                
# 4320 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 4321 "<previous_module>"
tmain_206: IF(0,206,tmain_207)__CSEQ_removeindent;
                                                
# 4322 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4323 "<previous_module>"
tmain_207: IF(0,207,tmain_208)__CSEQ_removeindent;
                                                
# 4324 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 4325 "<previous_module>"
tmain_208: IF(0,208,tmain_209)__CSEQ_removeindent;
                                                
# 4326 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 4327 "<previous_module>"
;
                                                ;
                                                
# 4328 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 4329 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 4330 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4331 "<previous_module>"
                                                {

# 4332 "<previous_module>"
                                                        {
                                                                
# 4333 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 4334 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4335 "<previous_module>"
                                                                {
                                                                        
# 4336 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4338 "<previous_module>"
;
                                                                
# 4339 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4340 "<previous_module>"
                                                                {
                                                                        
# 4341 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4343 "<previous_module>"
;
                                                                
# 4344 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4345 "<previous_module>"
                                                                {
                                                                        
# 4346 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4348 "<previous_module>"
;
                                                                
# 4349 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 4350 "<previous_module>"
tmain_209: IF(0,209,tmain_210)__CSEQ_removeindent;
                                                                
# 4351 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 4352 "<previous_module>"
__exit_loop_50:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 210);

                                                                
# 4353 "<previous_module>"
;
                                                                ;
                                                                
# 4354 "<previous_module>"
__exit__exponential_backoff_7_13:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 210);

                                                                
# 4355 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4357 "<previous_module>"
;
                                                        
# 4358 "<previous_module>"
tmain_210: IF(0,210,tmain_211)__CSEQ_removeindent;
                                                        
# 4359 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 4360 "<previous_module>"
tmain_211: IF(0,211,tmain_212)__CSEQ_removeindent;
                                                        
# 4361 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 4363 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 212);
                                                ;
                                                
# 4364 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 4365 "<previous_module>"
;
                                                ;
                                                
# 4366 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 4367 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 4368 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4369 "<previous_module>"
                                                {
                                                        
# 4370 "<previous_module>"
goto __exit_loop_46;
                                                        ;
                                                }

                                                
# 4372 "<previous_module>"
;
                                        }
                                        
# 4374 "<previous_module>"
;
                                        
# 4375 "<previous_module>"
if (
# 4376 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4377 "<previous_module>"
                                        {
                                                
# 4378 "<previous_module>"
goto __exit_loop_46;
                                                ;
                                        }

                                        
# 4380 "<previous_module>"
;

# 4381 "<previous_module>"
                                        {
                                                
# 4382 "<previous_module>"
;
                                                ;
                                                
# 4383 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 4384 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 4385 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4386 "<previous_module>"
                                                {
                                                        
# 4387 "<previous_module>"
tmain_212: IF(0,212,tmain_213)__CSEQ_removeindent;
                                                        
# 4388 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 4389 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 4390 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                                        ;
                                                }

                                                
# 4392 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 213);
                                                ;
                                                
# 4393 "<previous_module>"
tmain_213: IF(0,213,tmain_214)__CSEQ_removeindent;
                                                
# 4394 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 4395 "<previous_module>"
tmain_214: IF(0,214,tmain_215)__CSEQ_removeindent;
                                                
# 4396 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 4397 "<previous_module>"
tmain_215: IF(0,215,tmain_216)__CSEQ_removeindent;
                                                
# 4398 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4399 "<previous_module>"
tmain_216: IF(0,216,tmain_217)__CSEQ_removeindent;
                                                
# 4400 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 4401 "<previous_module>"
tmain_217: IF(0,217,tmain_218)__CSEQ_removeindent;
                                                
# 4402 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 4403 "<previous_module>"
;
                                                ;
                                                
# 4404 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 4405 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 4406 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4407 "<previous_module>"
                                                {

# 4408 "<previous_module>"
                                                        {
                                                                
# 4409 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 4410 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4411 "<previous_module>"
                                                                {
                                                                        
# 4412 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4414 "<previous_module>"
;
                                                                
# 4415 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4416 "<previous_module>"
                                                                {
                                                                        
# 4417 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4419 "<previous_module>"
;
                                                                
# 4420 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4421 "<previous_module>"
                                                                {
                                                                        
# 4422 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4424 "<previous_module>"
;
                                                                
# 4425 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 4426 "<previous_module>"
tmain_218: IF(0,218,tmain_219)__CSEQ_removeindent;
                                                                
# 4427 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 4428 "<previous_module>"
__exit_loop_51:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 219);

                                                                
# 4429 "<previous_module>"
;
                                                                ;
                                                                
# 4430 "<previous_module>"
__exit__exponential_backoff_7_14:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 219);

                                                                
# 4431 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4433 "<previous_module>"
;
                                                        
# 4434 "<previous_module>"
tmain_219: IF(0,219,tmain_220)__CSEQ_removeindent;
                                                        
# 4435 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 4436 "<previous_module>"
tmain_220: IF(0,220,tmain_221)__CSEQ_removeindent;
                                                        
# 4437 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 4439 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 221);
                                                ;
                                                
# 4440 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 4441 "<previous_module>"
;
                                                ;
                                                
# 4442 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 4443 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 4444 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4445 "<previous_module>"
                                                {
                                                        
# 4446 "<previous_module>"
goto __exit_loop_46;
                                                        ;
                                                }

                                                
# 4448 "<previous_module>"
;
                                        }
                                        
# 4450 "<previous_module>"
;
                                        
# 4451 "<previous_module>"
tmain_221: IF(0,221,tmain_222)__CSEQ_removeindent;
                                        
# 4452 "<previous_module>"
__CPROVER_assume(
# 4453 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                        
# 4454 "<previous_module>"
__exit_loop_46:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 222);

                                        
# 4455 "<previous_module>"
;
                                        ;
                                        
# 4456 "<previous_module>"
tmain_222: IF(0,222,tmain_223)__CSEQ_removeindent;
                                        
# 4457 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                        
# 4458 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
                                        
# 4459 "<previous_module>"
goto __exit__lfds711_stack_pop_2_2;
                                        ;
                                        
# 4460 "<previous_module>"
__exit__lfds711_stack_pop_2_2:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 223);

                                        
# 4461 "<previous_module>"
;
                                        ;
                                }
                                
# 4463 "<previous_module>"
;
                                
# 4464 "<previous_module>"
__cs_local_dump_structure_res = __cs_retval__lfds711_stack_pop_2;
                                
# 4465 "<previous_module>"
;
                                ;
                                
# 4466 "<previous_module>"
static _Bool __cs_local_dump_structure___cs_tmp_if_cond_24;
                                
# 4467 "<previous_module>"
__cs_local_dump_structure___cs_tmp_if_cond_24 = __cs_local_dump_structure_res == 0;
                                
# 4468 "<previous_module>"
if (__cs_local_dump_structure___cs_tmp_if_cond_24)

# 4469 "<previous_module>"
                                {
                                        
# 4470 "<previous_module>"
__cs_retval__dump_structure_1 = __cs_local_dump_structure_data_structure_size;
                                        
# 4471 "<previous_module>"
goto __exit__dump_structure_1;
                                        ;
                                }

                                
# 4473 "<previous_module>"
;
                                
# 4474 "<previous_module>"
__cs_local_dump_structure_data_structure_size = __cs_local_dump_structure_data_structure_size + 1;
                                
# 4475 "<previous_module>"
tmain_223: IF(0,223,tmain_224)__CSEQ_removeindent;
                                
# 4476 "<previous_module>"
__cs_local_dump_structure_data = (*__cs_local_dump_structure_se).value;
                                
# 4477 "<previous_module>"
static unsigned long long int __cs_local_dump_structure_id_found;
                                
# 4478 "<previous_module>"
tmain_224: IF(0,224,tmain_225)__CSEQ_removeindent;
                                
# 4479 "<previous_module>"
__cs_local_dump_structure_id_found = (*__cs_local_dump_structure_data).user_id;
                                
# 4480 "<previous_module>"
tmain_225: IF(0,225,tmain_226)__CSEQ_removeindent;
                                
# 4481 "<previous_module>"
__cs_param_dump_structure_ids[(*__cs_local_dump_structure_data).user_id] = 1;
                                
# 4482 "<previous_module>"
tmain_226: IF(0,226,tmain_227)__CSEQ_removeindent;
                                
# 4483 "<previous_module>"
free(__cs_local_dump_structure_data);
                        }
                        
# 4485 "<previous_module>"
;
                        
# 4486 "<previous_module>"
if (!(__cs_local_dump_structure_res != 0))

# 4487 "<previous_module>"
                        {
                                
# 4488 "<previous_module>"
goto __exit_loop_27;
                                ;
                        }

                        
# 4490 "<previous_module>"
;

# 4491 "<previous_module>"
                        {
                                
# 4492 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_2;

# 4493 "<previous_module>"
                                {
                                        
# 4494 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                        
# 4495 "<previous_module>"
tmain_227: IF(0,227,tmain_228)__CSEQ_removeindent;
                                        
# 4496 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = __cs_param_dump_structure_s;
                                        
# 4497 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                        
# 4498 "<previous_module>"
tmain_228: IF(0,228,tmain_229)__CSEQ_removeindent;
                                        
# 4499 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_dump_structure_se;
                                        
# 4500 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                        
# 4501 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                        
# 4502 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                        
# 4503 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                        
# 4504 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                        
# 4505 "<previous_module>"
;
                                        ;
                                        
# 4506 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                        
# 4507 "<previous_module>"
tmain_229: IF(0,229,tmain_230)__CSEQ_removeindent;
                                        
# 4508 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                        
# 4509 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 4510 "<previous_module>"
                                        {
                                                
# 4511 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                                
# 4512 "<previous_module>"
tmain_230: IF(0,230,tmain_231)__CSEQ_removeindent;
                                                
# 4513 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                                
# 4514 "<previous_module>"
tmain_231: IF(0,231,tmain_232)__CSEQ_removeindent;
                                                
# 4515 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                        }

                                        
# 4517 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 232);
                                        ;
                                        
# 4518 "<previous_module>"
;
                                        ;
                                        
# 4519 "<previous_module>"
;
                                        ;
                                        
# 4520 "<previous_module>"
;
                                        ;
                                        
# 4521 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                        
# 4522 "<previous_module>"
tmain_232: IF(0,232,tmain_233)__CSEQ_removeindent;
                                        
# 4523 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                        
# 4524 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 4525 "<previous_module>"
                                        {
                                                
# 4526 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                                
# 4527 "<previous_module>"
tmain_233: IF(0,233,tmain_234)__CSEQ_removeindent;
                                                
# 4528 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                                
# 4529 "<previous_module>"
tmain_234: IF(0,234,tmain_235)__CSEQ_removeindent;
                                                
# 4530 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                        }

                                        
# 4532 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 235);
                                        ;
                                        
# 4533 "<previous_module>"
;
                                        ;
                                        
# 4534 "<previous_module>"
;
                                        ;
                                        
# 4535 "<previous_module>"
tmain_235: IF(0,235,tmain_236)__CSEQ_removeindent;
                                        
# 4536 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 4537 "<previous_module>"
tmain_236: IF(0,236,tmain_237)__CSEQ_removeindent;
                                        
# 4538 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 4539 "<previous_module>"
tmain_237: IF(0,237,tmain_238)__CSEQ_removeindent;
                                        
# 4540 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                        
# 4541 "<previous_module>"
tmain_238: IF(0,238,tmain_239)__CSEQ_removeindent;
                                        
# 4542 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 4543 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                        
# 4544 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                        
# 4545 "<previous_module>"
;
                                        ;
                                        
# 4546 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                        
# 4547 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 4548 "<previous_module>"
                                        {
                                                
# 4549 "<previous_module>"
;
                                                ;
                                                
# 4550 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                                
# 4551 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 4552 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 4553 "<previous_module>"
                                                {
                                                        
# 4554 "<previous_module>"
tmain_239: IF(0,239,tmain_240)__CSEQ_removeindent;
                                                        
# 4555 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 4556 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 4557 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                                        ;
                                                }

                                                
# 4559 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 240);
                                                ;
                                                
# 4560 "<previous_module>"
tmain_240: IF(0,240,tmain_241)__CSEQ_removeindent;
                                                
# 4561 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 4562 "<previous_module>"
tmain_241: IF(0,241,tmain_242)__CSEQ_removeindent;
                                                
# 4563 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 4564 "<previous_module>"
tmain_242: IF(0,242,tmain_243)__CSEQ_removeindent;
                                                
# 4565 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4566 "<previous_module>"
tmain_243: IF(0,243,tmain_244)__CSEQ_removeindent;
                                                
# 4567 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 4568 "<previous_module>"
tmain_244: IF(0,244,tmain_245)__CSEQ_removeindent;
                                                
# 4569 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 4570 "<previous_module>"
;
                                                ;
                                                
# 4571 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                                
# 4572 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 4573 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 4574 "<previous_module>"
                                                {

# 4575 "<previous_module>"
                                                        {
                                                                
# 4576 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 4577 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4578 "<previous_module>"
                                                                {
                                                                        
# 4579 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4581 "<previous_module>"
;
                                                                
# 4582 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4583 "<previous_module>"
                                                                {
                                                                        
# 4584 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4586 "<previous_module>"
;
                                                                
# 4587 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4588 "<previous_module>"
                                                                {
                                                                        
# 4589 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4591 "<previous_module>"
;
                                                                
# 4592 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 4593 "<previous_module>"
tmain_245: IF(0,245,tmain_246)__CSEQ_removeindent;
                                                                
# 4594 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 4595 "<previous_module>"
__exit_loop_53:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 246);

                                                                
# 4596 "<previous_module>"
;
                                                                ;
                                                                
# 4597 "<previous_module>"
__exit__exponential_backoff_6_3:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 246);

                                                                
# 4598 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4600 "<previous_module>"
;
                                                        
# 4601 "<previous_module>"
tmain_246: IF(0,246,tmain_247)__CSEQ_removeindent;
                                                        
# 4602 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 4603 "<previous_module>"
tmain_247: IF(0,247,tmain_248)__CSEQ_removeindent;
                                                        
# 4604 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 4606 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 248);
                                                ;
                                                
# 4607 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 4608 "<previous_module>"
;
                                                ;
                                                
# 4609 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                                
# 4610 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 4611 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 4612 "<previous_module>"
                                                {
                                                        
# 4613 "<previous_module>"
goto __exit_loop_52;
                                                        ;
                                                }

                                                
# 4615 "<previous_module>"
;
                                        }
                                        
# 4617 "<previous_module>"
;
                                        
# 4618 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                        
# 4619 "<previous_module>"
tmain_248: IF(0,248,tmain_249)__CSEQ_removeindent;
                                        
# 4620 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                        
# 4621 "<previous_module>"
__exit_loop_52:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 249);

                                        
# 4622 "<previous_module>"
;
                                        ;
                                        
# 4623 "<previous_module>"
if (
# 4624 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4625 "<previous_module>"
                                        {
                                                
# 4626 "<previous_module>"
goto __exit_loop_54;
                                                ;
                                        }

                                        
# 4628 "<previous_module>"
;

# 4629 "<previous_module>"
                                        {
                                                
# 4630 "<previous_module>"
;
                                                ;
                                                
# 4631 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 4632 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 4633 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4634 "<previous_module>"
                                                {
                                                        
# 4635 "<previous_module>"
tmain_249: IF(0,249,tmain_250)__CSEQ_removeindent;
                                                        
# 4636 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 4637 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 4638 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                                        ;
                                                }

                                                
# 4640 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 250);
                                                ;
                                                
# 4641 "<previous_module>"
tmain_250: IF(0,250,tmain_251)__CSEQ_removeindent;
                                                
# 4642 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 4643 "<previous_module>"
tmain_251: IF(0,251,tmain_252)__CSEQ_removeindent;
                                                
# 4644 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 4645 "<previous_module>"
tmain_252: IF(0,252,tmain_253)__CSEQ_removeindent;
                                                
# 4646 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4647 "<previous_module>"
tmain_253: IF(0,253,tmain_254)__CSEQ_removeindent;
                                                
# 4648 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 4649 "<previous_module>"
tmain_254: IF(0,254,tmain_255)__CSEQ_removeindent;
                                                
# 4650 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 4651 "<previous_module>"
;
                                                ;
                                                
# 4652 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 4653 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 4654 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4655 "<previous_module>"
                                                {

# 4656 "<previous_module>"
                                                        {
                                                                
# 4657 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 4658 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4659 "<previous_module>"
                                                                {
                                                                        
# 4660 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4662 "<previous_module>"
;
                                                                
# 4663 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4664 "<previous_module>"
                                                                {
                                                                        
# 4665 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4667 "<previous_module>"
;
                                                                
# 4668 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4669 "<previous_module>"
                                                                {
                                                                        
# 4670 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4672 "<previous_module>"
;
                                                                
# 4673 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 4674 "<previous_module>"
tmain_255: IF(0,255,tmain_256)__CSEQ_removeindent;
                                                                
# 4675 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 4676 "<previous_module>"
__exit_loop_55:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 256);

                                                                
# 4677 "<previous_module>"
;
                                                                ;
                                                                
# 4678 "<previous_module>"
__exit__exponential_backoff_7_15:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 256);

                                                                
# 4679 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4681 "<previous_module>"
;
                                                        
# 4682 "<previous_module>"
tmain_256: IF(0,256,tmain_257)__CSEQ_removeindent;
                                                        
# 4683 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 4684 "<previous_module>"
tmain_257: IF(0,257,tmain_258)__CSEQ_removeindent;
                                                        
# 4685 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 4687 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 258);
                                                ;
                                                
# 4688 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 4689 "<previous_module>"
;
                                                ;
                                                
# 4690 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 4691 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 4692 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4693 "<previous_module>"
                                                {
                                                        
# 4694 "<previous_module>"
goto __exit_loop_54;
                                                        ;
                                                }

                                                
# 4696 "<previous_module>"
;
                                        }
                                        
# 4698 "<previous_module>"
;
                                        
# 4699 "<previous_module>"
if (
# 4700 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4701 "<previous_module>"
                                        {
                                                
# 4702 "<previous_module>"
goto __exit_loop_54;
                                                ;
                                        }

                                        
# 4704 "<previous_module>"
;

# 4705 "<previous_module>"
                                        {
                                                
# 4706 "<previous_module>"
;
                                                ;
                                                
# 4707 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 4708 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 4709 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4710 "<previous_module>"
                                                {
                                                        
# 4711 "<previous_module>"
tmain_258: IF(0,258,tmain_259)__CSEQ_removeindent;
                                                        
# 4712 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 4713 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 4714 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                                        ;
                                                }

                                                
# 4716 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 259);
                                                ;
                                                
# 4717 "<previous_module>"
tmain_259: IF(0,259,tmain_260)__CSEQ_removeindent;
                                                
# 4718 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 4719 "<previous_module>"
tmain_260: IF(0,260,tmain_261)__CSEQ_removeindent;
                                                
# 4720 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 4721 "<previous_module>"
tmain_261: IF(0,261,tmain_262)__CSEQ_removeindent;
                                                
# 4722 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4723 "<previous_module>"
tmain_262: IF(0,262,tmain_263)__CSEQ_removeindent;
                                                
# 4724 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 4725 "<previous_module>"
tmain_263: IF(0,263,tmain_264)__CSEQ_removeindent;
                                                
# 4726 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 4727 "<previous_module>"
;
                                                ;
                                                
# 4728 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 4729 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 4730 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4731 "<previous_module>"
                                                {

# 4732 "<previous_module>"
                                                        {
                                                                
# 4733 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 4734 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4735 "<previous_module>"
                                                                {
                                                                        
# 4736 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4738 "<previous_module>"
;
                                                                
# 4739 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4740 "<previous_module>"
                                                                {
                                                                        
# 4741 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4743 "<previous_module>"
;
                                                                
# 4744 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4745 "<previous_module>"
                                                                {
                                                                        
# 4746 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4748 "<previous_module>"
;
                                                                
# 4749 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 4750 "<previous_module>"
tmain_264: IF(0,264,tmain_265)__CSEQ_removeindent;
                                                                
# 4751 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 4752 "<previous_module>"
__exit_loop_56:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 265);

                                                                
# 4753 "<previous_module>"
;
                                                                ;
                                                                
# 4754 "<previous_module>"
__exit__exponential_backoff_7_16:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 265);

                                                                
# 4755 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4757 "<previous_module>"
;
                                                        
# 4758 "<previous_module>"
tmain_265: IF(0,265,tmain_266)__CSEQ_removeindent;
                                                        
# 4759 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 4760 "<previous_module>"
tmain_266: IF(0,266,tmain_267)__CSEQ_removeindent;
                                                        
# 4761 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 4763 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 267);
                                                ;
                                                
# 4764 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 4765 "<previous_module>"
;
                                                ;
                                                
# 4766 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 4767 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 4768 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4769 "<previous_module>"
                                                {
                                                        
# 4770 "<previous_module>"
goto __exit_loop_54;
                                                        ;
                                                }

                                                
# 4772 "<previous_module>"
;
                                        }
                                        
# 4774 "<previous_module>"
;
                                        
# 4775 "<previous_module>"
if (
# 4776 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4777 "<previous_module>"
                                        {
                                                
# 4778 "<previous_module>"
goto __exit_loop_54;
                                                ;
                                        }

                                        
# 4780 "<previous_module>"
;

# 4781 "<previous_module>"
                                        {
                                                
# 4782 "<previous_module>"
;
                                                ;
                                                
# 4783 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 4784 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 4785 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4786 "<previous_module>"
                                                {
                                                        
# 4787 "<previous_module>"
tmain_267: IF(0,267,tmain_268)__CSEQ_removeindent;
                                                        
# 4788 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 4789 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 4790 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                                        ;
                                                }

                                                
# 4792 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 268);
                                                ;
                                                
# 4793 "<previous_module>"
tmain_268: IF(0,268,tmain_269)__CSEQ_removeindent;
                                                
# 4794 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 4795 "<previous_module>"
tmain_269: IF(0,269,tmain_270)__CSEQ_removeindent;
                                                
# 4796 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 4797 "<previous_module>"
tmain_270: IF(0,270,tmain_271)__CSEQ_removeindent;
                                                
# 4798 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4799 "<previous_module>"
tmain_271: IF(0,271,tmain_272)__CSEQ_removeindent;
                                                
# 4800 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 4801 "<previous_module>"
tmain_272: IF(0,272,tmain_273)__CSEQ_removeindent;
                                                
# 4802 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 4803 "<previous_module>"
;
                                                ;
                                                
# 4804 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 4805 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 4806 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4807 "<previous_module>"
                                                {

# 4808 "<previous_module>"
                                                        {
                                                                
# 4809 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 4810 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4811 "<previous_module>"
                                                                {
                                                                        
# 4812 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4814 "<previous_module>"
;
                                                                
# 4815 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4816 "<previous_module>"
                                                                {
                                                                        
# 4817 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4819 "<previous_module>"
;
                                                                
# 4820 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4821 "<previous_module>"
                                                                {
                                                                        
# 4822 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4824 "<previous_module>"
;
                                                                
# 4825 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 4826 "<previous_module>"
tmain_273: IF(0,273,tmain_274)__CSEQ_removeindent;
                                                                
# 4827 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 4828 "<previous_module>"
__exit_loop_57:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 274);

                                                                
# 4829 "<previous_module>"
;
                                                                ;
                                                                
# 4830 "<previous_module>"
__exit__exponential_backoff_7_17:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 274);

                                                                
# 4831 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4833 "<previous_module>"
;
                                                        
# 4834 "<previous_module>"
tmain_274: IF(0,274,tmain_275)__CSEQ_removeindent;
                                                        
# 4835 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 4836 "<previous_module>"
tmain_275: IF(0,275,tmain_276)__CSEQ_removeindent;
                                                        
# 4837 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 4839 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 276);
                                                ;
                                                
# 4840 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 4841 "<previous_module>"
;
                                                ;
                                                
# 4842 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 4843 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 4844 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4845 "<previous_module>"
                                                {
                                                        
# 4846 "<previous_module>"
goto __exit_loop_54;
                                                        ;
                                                }

                                                
# 4848 "<previous_module>"
;
                                        }
                                        
# 4850 "<previous_module>"
;
                                        
# 4851 "<previous_module>"
if (
# 4852 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4853 "<previous_module>"
                                        {
                                                
# 4854 "<previous_module>"
goto __exit_loop_54;
                                                ;
                                        }

                                        
# 4856 "<previous_module>"
;

# 4857 "<previous_module>"
                                        {
                                                
# 4858 "<previous_module>"
;
                                                ;
                                                
# 4859 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 4860 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 4861 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4862 "<previous_module>"
                                                {
                                                        
# 4863 "<previous_module>"
tmain_276: IF(0,276,tmain_277)__CSEQ_removeindent;
                                                        
# 4864 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 4865 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 4866 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                                        ;
                                                }

                                                
# 4868 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 277);
                                                ;
                                                
# 4869 "<previous_module>"
tmain_277: IF(0,277,tmain_278)__CSEQ_removeindent;
                                                
# 4870 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 4871 "<previous_module>"
tmain_278: IF(0,278,tmain_279)__CSEQ_removeindent;
                                                
# 4872 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 4873 "<previous_module>"
tmain_279: IF(0,279,tmain_280)__CSEQ_removeindent;
                                                
# 4874 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4875 "<previous_module>"
tmain_280: IF(0,280,tmain_281)__CSEQ_removeindent;
                                                
# 4876 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 4877 "<previous_module>"
tmain_281: IF(0,281,tmain_282)__CSEQ_removeindent;
                                                
# 4878 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 4879 "<previous_module>"
;
                                                ;
                                                
# 4880 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 4881 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 4882 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4883 "<previous_module>"
                                                {

# 4884 "<previous_module>"
                                                        {
                                                                
# 4885 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 4886 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

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
                                                                {
                                                                        
# 4898 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4900 "<previous_module>"
;
                                                                
# 4901 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 4902 "<previous_module>"
tmain_282: IF(0,282,tmain_283)__CSEQ_removeindent;
                                                                
# 4903 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 4904 "<previous_module>"
__exit_loop_58:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 283);

                                                                
# 4905 "<previous_module>"
;
                                                                ;
                                                                
# 4906 "<previous_module>"
__exit__exponential_backoff_7_18:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 283);

                                                                
# 4907 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4909 "<previous_module>"
;
                                                        
# 4910 "<previous_module>"
tmain_283: IF(0,283,tmain_284)__CSEQ_removeindent;
                                                        
# 4911 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 4912 "<previous_module>"
tmain_284: IF(0,284,tmain_285)__CSEQ_removeindent;
                                                        
# 4913 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 4915 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 285);
                                                ;
                                                
# 4916 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 4917 "<previous_module>"
;
                                                ;
                                                
# 4918 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 4919 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 4920 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4921 "<previous_module>"
                                                {
                                                        
# 4922 "<previous_module>"
goto __exit_loop_54;
                                                        ;
                                                }

                                                
# 4924 "<previous_module>"
;
                                        }
                                        
# 4926 "<previous_module>"
;
                                        
# 4927 "<previous_module>"
if (
# 4928 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 4929 "<previous_module>"
                                        {
                                                
# 4930 "<previous_module>"
goto __exit_loop_54;
                                                ;
                                        }

                                        
# 4932 "<previous_module>"
;

# 4933 "<previous_module>"
                                        {
                                                
# 4934 "<previous_module>"
;
                                                ;
                                                
# 4935 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 4936 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 4937 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 4938 "<previous_module>"
                                                {
                                                        
# 4939 "<previous_module>"
tmain_285: IF(0,285,tmain_286)__CSEQ_removeindent;
                                                        
# 4940 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 4941 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 4942 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                                        ;
                                                }

                                                
# 4944 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 286);
                                                ;
                                                
# 4945 "<previous_module>"
tmain_286: IF(0,286,tmain_287)__CSEQ_removeindent;
                                                
# 4946 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 4947 "<previous_module>"
tmain_287: IF(0,287,tmain_288)__CSEQ_removeindent;
                                                
# 4948 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 4949 "<previous_module>"
tmain_288: IF(0,288,tmain_289)__CSEQ_removeindent;
                                                
# 4950 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 4951 "<previous_module>"
tmain_289: IF(0,289,tmain_290)__CSEQ_removeindent;
                                                
# 4952 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 4953 "<previous_module>"
tmain_290: IF(0,290,tmain_291)__CSEQ_removeindent;
                                                
# 4954 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 4955 "<previous_module>"
;
                                                ;
                                                
# 4956 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 4957 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 4958 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 4959 "<previous_module>"
                                                {

# 4960 "<previous_module>"
                                                        {
                                                                
# 4961 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 4962 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 4963 "<previous_module>"
                                                                {
                                                                        
# 4964 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4966 "<previous_module>"
;
                                                                
# 4967 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4968 "<previous_module>"
                                                                {
                                                                        
# 4969 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4971 "<previous_module>"
;
                                                                
# 4972 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 4973 "<previous_module>"
                                                                {
                                                                        
# 4974 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 4976 "<previous_module>"
;
                                                                
# 4977 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 4978 "<previous_module>"
tmain_291: IF(0,291,tmain_292)__CSEQ_removeindent;
                                                                
# 4979 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 4980 "<previous_module>"
__exit_loop_59:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 292);

                                                                
# 4981 "<previous_module>"
;
                                                                ;
                                                                
# 4982 "<previous_module>"
__exit__exponential_backoff_7_19:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 292);

                                                                
# 4983 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 4985 "<previous_module>"
;
                                                        
# 4986 "<previous_module>"
tmain_292: IF(0,292,tmain_293)__CSEQ_removeindent;
                                                        
# 4987 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 4988 "<previous_module>"
tmain_293: IF(0,293,tmain_294)__CSEQ_removeindent;
                                                        
# 4989 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 4991 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 294);
                                                ;
                                                
# 4992 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 4993 "<previous_module>"
;
                                                ;
                                                
# 4994 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 4995 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 4996 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 4997 "<previous_module>"
                                                {
                                                        
# 4998 "<previous_module>"
goto __exit_loop_54;
                                                        ;
                                                }

                                                
# 5000 "<previous_module>"
;
                                        }
                                        
# 5002 "<previous_module>"
;
                                        
# 5003 "<previous_module>"
tmain_294: IF(0,294,tmain_295)__CSEQ_removeindent;
                                        
# 5004 "<previous_module>"
__CPROVER_assume(
# 5005 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                        
# 5006 "<previous_module>"
__exit_loop_54:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 295);

                                        
# 5007 "<previous_module>"
;
                                        ;
                                        
# 5008 "<previous_module>"
tmain_295: IF(0,295,tmain_296)__CSEQ_removeindent;
                                        
# 5009 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                        
# 5010 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
                                        
# 5011 "<previous_module>"
goto __exit__lfds711_stack_pop_2_3;
                                        ;
                                        
# 5012 "<previous_module>"
__exit__lfds711_stack_pop_2_3:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 296);

                                        
# 5013 "<previous_module>"
;
                                        ;
                                }
                                
# 5015 "<previous_module>"
;
                                
# 5016 "<previous_module>"
__cs_local_dump_structure_res = __cs_retval__lfds711_stack_pop_2;
                                
# 5017 "<previous_module>"
;
                                ;
                                
# 5018 "<previous_module>"
static _Bool __cs_local_dump_structure___cs_tmp_if_cond_24;
                                
# 5019 "<previous_module>"
__cs_local_dump_structure___cs_tmp_if_cond_24 = __cs_local_dump_structure_res == 0;
                                
# 5020 "<previous_module>"
if (__cs_local_dump_structure___cs_tmp_if_cond_24)

# 5021 "<previous_module>"
                                {
                                        
# 5022 "<previous_module>"
__cs_retval__dump_structure_1 = __cs_local_dump_structure_data_structure_size;
                                        
# 5023 "<previous_module>"
goto __exit__dump_structure_1;
                                        ;
                                }

                                
# 5025 "<previous_module>"
;
                                
# 5026 "<previous_module>"
__cs_local_dump_structure_data_structure_size = __cs_local_dump_structure_data_structure_size + 1;
                                
# 5027 "<previous_module>"
tmain_296: IF(0,296,tmain_297)__CSEQ_removeindent;
                                
# 5028 "<previous_module>"
__cs_local_dump_structure_data = (*__cs_local_dump_structure_se).value;
                                
# 5029 "<previous_module>"
static unsigned long long int __cs_local_dump_structure_id_found;
                                
# 5030 "<previous_module>"
tmain_297: IF(0,297,tmain_298)__CSEQ_removeindent;
                                
# 5031 "<previous_module>"
__cs_local_dump_structure_id_found = (*__cs_local_dump_structure_data).user_id;
                                
# 5032 "<previous_module>"
tmain_298: IF(0,298,tmain_299)__CSEQ_removeindent;
                                
# 5033 "<previous_module>"
__cs_param_dump_structure_ids[(*__cs_local_dump_structure_data).user_id] = 1;
                                
# 5034 "<previous_module>"
tmain_299: IF(0,299,tmain_300)__CSEQ_removeindent;
                                
# 5035 "<previous_module>"
free(__cs_local_dump_structure_data);
                        }
                        
# 5037 "<previous_module>"
;
                        
# 5038 "<previous_module>"
if (!(__cs_local_dump_structure_res != 0))

# 5039 "<previous_module>"
                        {
                                
# 5040 "<previous_module>"
goto __exit_loop_27;
                                ;
                        }

                        
# 5042 "<previous_module>"
;

# 5043 "<previous_module>"
                        {
                                
# 5044 "<previous_module>"
static int __cs_retval__lfds711_stack_pop_2;

# 5045 "<previous_module>"
                                {
                                        
# 5046 "<previous_module>"
static struct lfds711_stack_state *__cs_param_lfds711_stack_pop_ss;
                                        
# 5047 "<previous_module>"
tmain_300: IF(0,300,tmain_301)__CSEQ_removeindent;
                                        
# 5048 "<previous_module>"
__cs_param_lfds711_stack_pop_ss = __cs_param_dump_structure_s;
                                        
# 5049 "<previous_module>"
static struct lfds711_stack_element **__cs_param_lfds711_stack_pop_se;
                                        
# 5050 "<previous_module>"
tmain_301: IF(0,301,tmain_302)__CSEQ_removeindent;
                                        
# 5051 "<previous_module>"
__cs_param_lfds711_stack_pop_se = &__cs_local_dump_structure_se;
                                        
# 5052 "<previous_module>"
static char unsigned __cs_local_lfds711_stack_pop_result;
                                        
# 5053 "<previous_module>"
static lfds711_pal_uint_t __cs_local_lfds711_stack_pop_backoff_iteration;
                                        
# 5054 "<previous_module>"
__cs_local_lfds711_stack_pop_backoff_iteration = 0;
                                        
# 5055 "<previous_module>"
static struct lfds711_stack_element *__cs_local_lfds711_stack_pop_new_top[2];
                                        
# 5056 "<previous_module>"
static struct lfds711_stack_element * volatile __cs_local_lfds711_stack_pop_original_top[2];
                                        
# 5057 "<previous_module>"
;
                                        ;
                                        
# 5058 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6;
                                        
# 5059 "<previous_module>"
tmain_302: IF(0,302,tmain_303)__CSEQ_removeindent;
                                        
# 5060 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6 = !(__cs_param_lfds711_stack_pop_ss != 0);
                                        
# 5061 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_6)

# 5062 "<previous_module>"
                                        {
                                                
# 5063 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                                
# 5064 "<previous_module>"
tmain_303: IF(0,303,tmain_304)__CSEQ_removeindent;
                                                
# 5065 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                                
# 5066 "<previous_module>"
tmain_304: IF(0,304,tmain_305)__CSEQ_removeindent;
                                                
# 5067 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                        }

                                        
# 5069 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 305);
                                        ;
                                        
# 5070 "<previous_module>"
;
                                        ;
                                        
# 5071 "<previous_module>"
;
                                        ;
                                        
# 5072 "<previous_module>"
;
                                        ;
                                        
# 5073 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7;
                                        
# 5074 "<previous_module>"
tmain_305: IF(0,305,tmain_306)__CSEQ_removeindent;
                                        
# 5075 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7 = !(__cs_param_lfds711_stack_pop_se != 0);
                                        
# 5076 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_7)

# 5077 "<previous_module>"
                                        {
                                                
# 5078 "<previous_module>"
static char *__cs_local_lfds711_stack_pop_c;
                                                
# 5079 "<previous_module>"
tmain_306: IF(0,306,tmain_307)__CSEQ_removeindent;
                                                
# 5080 "<previous_module>"
__cs_local_lfds711_stack_pop_c = 0;
                                                
# 5081 "<previous_module>"
tmain_307: IF(0,307,tmain_308)__CSEQ_removeindent;
                                                
# 5082 "<previous_module>"
*__cs_local_lfds711_stack_pop_c = 0;
                                        }

                                        
# 5084 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 308);
                                        ;
                                        
# 5085 "<previous_module>"
;
                                        ;
                                        
# 5086 "<previous_module>"
;
                                        ;
                                        
# 5087 "<previous_module>"
tmain_308: IF(0,308,tmain_309)__CSEQ_removeindent;
                                        
# 5088 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                        
# 5089 "<previous_module>"
tmain_309: IF(0,309,tmain_310)__CSEQ_removeindent;
                                        
# 5090 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                        
# 5091 "<previous_module>"
tmain_310: IF(0,310,tmain_311)__CSEQ_removeindent;
                                        
# 5092 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[1] = (*__cs_param_lfds711_stack_pop_ss).top[1];
                                        
# 5093 "<previous_module>"
tmain_311: IF(0,311,tmain_312)__CSEQ_removeindent;
                                        
# 5094 "<previous_module>"
__cs_local_lfds711_stack_pop_original_top[0] = (*__cs_param_lfds711_stack_pop_ss).top[0];
                                        
# 5095 "<previous_module>"
static int __cs_local_lfds711_stack_pop_i;
                                        
# 5096 "<previous_module>"
__cs_local_lfds711_stack_pop_i = 0;
                                        
# 5097 "<previous_module>"
;
                                        ;
                                        
# 5098 "<previous_module>"
static int __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1;
                                        
# 5099 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 = 0;

# 5100 "<previous_module>"
                                        {
                                                
# 5101 "<previous_module>"
;
                                                ;
                                                
# 5102 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8;
                                                
# 5103 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 5104 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_8)

# 5105 "<previous_module>"
                                                {
                                                        
# 5106 "<previous_module>"
tmain_312: IF(0,312,tmain_313)__CSEQ_removeindent;
                                                        
# 5107 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 5108 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 5109 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                                        ;
                                                }

                                                
# 5111 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 313);
                                                ;
                                                
# 5112 "<previous_module>"
tmain_313: IF(0,313,tmain_314)__CSEQ_removeindent;
                                                
# 5113 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 5114 "<previous_module>"
tmain_314: IF(0,314,tmain_315)__CSEQ_removeindent;
                                                
# 5115 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 5116 "<previous_module>"
tmain_315: IF(0,315,tmain_316)__CSEQ_removeindent;
                                                
# 5117 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 5118 "<previous_module>"
tmain_316: IF(0,316,tmain_317)__CSEQ_removeindent;
                                                
# 5119 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 5120 "<previous_module>"
tmain_317: IF(0,317,tmain_318)__CSEQ_removeindent;
                                                
# 5121 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 5122 "<previous_module>"
;
                                                ;
                                                
# 5123 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9;
                                                
# 5124 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 5125 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_9)

# 5126 "<previous_module>"
                                                {

# 5127 "<previous_module>"
                                                        {
                                                                
# 5128 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 5129 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5130 "<previous_module>"
                                                                {
                                                                        
# 5131 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5133 "<previous_module>"
;
                                                                
# 5134 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5135 "<previous_module>"
                                                                {
                                                                        
# 5136 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5138 "<previous_module>"
;
                                                                
# 5139 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5140 "<previous_module>"
                                                                {
                                                                        
# 5141 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5143 "<previous_module>"
;
                                                                
# 5144 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 5145 "<previous_module>"
tmain_318: IF(0,318,tmain_319)__CSEQ_removeindent;
                                                                
# 5146 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 5147 "<previous_module>"
__exit_loop_61:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 319);

                                                                
# 5148 "<previous_module>"
;
                                                                ;
                                                                
# 5149 "<previous_module>"
__exit__exponential_backoff_6_4:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 319);

                                                                
# 5150 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5152 "<previous_module>"
;
                                                        
# 5153 "<previous_module>"
tmain_319: IF(0,319,tmain_320)__CSEQ_removeindent;
                                                        
# 5154 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 5155 "<previous_module>"
tmain_320: IF(0,320,tmain_321)__CSEQ_removeindent;
                                                        
# 5156 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 5158 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 321);
                                                ;
                                                
# 5159 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 5160 "<previous_module>"
;
                                                ;
                                                
# 5161 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10;
                                                
# 5162 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 5163 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_10)

# 5164 "<previous_module>"
                                                {
                                                        
# 5165 "<previous_module>"
goto __exit_loop_60;
                                                        ;
                                                }

                                                
# 5167 "<previous_module>"
;
                                        }
                                        
# 5169 "<previous_module>"
;
                                        
# 5170 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1++;
                                        
# 5171 "<previous_module>"
tmain_321: IF(0,321,tmain_322)__CSEQ_removeindent;
                                        
# 5172 "<previous_module>"
__CPROVER_assume(!(__cs_local_lfds711_stack_pop___cs_dowhile_onetime_1 < 1));
                                        
# 5173 "<previous_module>"
__exit_loop_60:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 322);

                                        
# 5174 "<previous_module>"
;
                                        ;
                                        
# 5175 "<previous_module>"
if (
# 5176 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 5177 "<previous_module>"
                                        {
                                                
# 5178 "<previous_module>"
goto __exit_loop_62;
                                                ;
                                        }

                                        
# 5180 "<previous_module>"
;

# 5181 "<previous_module>"
                                        {
                                                
# 5182 "<previous_module>"
;
                                                ;
                                                
# 5183 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 5184 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 5185 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 5186 "<previous_module>"
                                                {
                                                        
# 5187 "<previous_module>"
tmain_322: IF(0,322,tmain_323)__CSEQ_removeindent;
                                                        
# 5188 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 5189 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 5190 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                                        ;
                                                }

                                                
# 5192 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 323);
                                                ;
                                                
# 5193 "<previous_module>"
tmain_323: IF(0,323,tmain_324)__CSEQ_removeindent;
                                                
# 5194 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 5195 "<previous_module>"
tmain_324: IF(0,324,tmain_325)__CSEQ_removeindent;
                                                
# 5196 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 5197 "<previous_module>"
tmain_325: IF(0,325,tmain_326)__CSEQ_removeindent;
                                                
# 5198 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 5199 "<previous_module>"
tmain_326: IF(0,326,tmain_327)__CSEQ_removeindent;
                                                
# 5200 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 5201 "<previous_module>"
tmain_327: IF(0,327,tmain_328)__CSEQ_removeindent;
                                                
# 5202 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 5203 "<previous_module>"
;
                                                ;
                                                
# 5204 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 5205 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 5206 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 5207 "<previous_module>"
                                                {

# 5208 "<previous_module>"
                                                        {
                                                                
# 5209 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 5210 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5211 "<previous_module>"
                                                                {
                                                                        
# 5212 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5214 "<previous_module>"
;
                                                                
# 5215 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5216 "<previous_module>"
                                                                {
                                                                        
# 5217 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5219 "<previous_module>"
;
                                                                
# 5220 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5221 "<previous_module>"
                                                                {
                                                                        
# 5222 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5224 "<previous_module>"
;
                                                                
# 5225 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 5226 "<previous_module>"
tmain_328: IF(0,328,tmain_329)__CSEQ_removeindent;
                                                                
# 5227 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 5228 "<previous_module>"
__exit_loop_63:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 329);

                                                                
# 5229 "<previous_module>"
;
                                                                ;
                                                                
# 5230 "<previous_module>"
__exit__exponential_backoff_7_20:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 329);

                                                                
# 5231 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5233 "<previous_module>"
;
                                                        
# 5234 "<previous_module>"
tmain_329: IF(0,329,tmain_330)__CSEQ_removeindent;
                                                        
# 5235 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 5236 "<previous_module>"
tmain_330: IF(0,330,tmain_331)__CSEQ_removeindent;
                                                        
# 5237 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 5239 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 331);
                                                ;
                                                
# 5240 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 5241 "<previous_module>"
;
                                                ;
                                                
# 5242 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 5243 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 5244 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 5245 "<previous_module>"
                                                {
                                                        
# 5246 "<previous_module>"
goto __exit_loop_62;
                                                        ;
                                                }

                                                
# 5248 "<previous_module>"
;
                                        }
                                        
# 5250 "<previous_module>"
;
                                        
# 5251 "<previous_module>"
if (
# 5252 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 5253 "<previous_module>"
                                        {
                                                
# 5254 "<previous_module>"
goto __exit_loop_62;
                                                ;
                                        }

                                        
# 5256 "<previous_module>"
;

# 5257 "<previous_module>"
                                        {
                                                
# 5258 "<previous_module>"
;
                                                ;
                                                
# 5259 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 5260 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 5261 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 5262 "<previous_module>"
                                                {
                                                        
# 5263 "<previous_module>"
tmain_331: IF(0,331,tmain_332)__CSEQ_removeindent;
                                                        
# 5264 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 5265 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 5266 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                                        ;
                                                }

                                                
# 5268 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 332);
                                                ;
                                                
# 5269 "<previous_module>"
tmain_332: IF(0,332,tmain_333)__CSEQ_removeindent;
                                                
# 5270 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 5271 "<previous_module>"
tmain_333: IF(0,333,tmain_334)__CSEQ_removeindent;
                                                
# 5272 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 5273 "<previous_module>"
tmain_334: IF(0,334,tmain_335)__CSEQ_removeindent;
                                                
# 5274 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 5275 "<previous_module>"
tmain_335: IF(0,335,tmain_336)__CSEQ_removeindent;
                                                
# 5276 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 5277 "<previous_module>"
tmain_336: IF(0,336,tmain_337)__CSEQ_removeindent;
                                                
# 5278 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 5279 "<previous_module>"
;
                                                ;
                                                
# 5280 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 5281 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 5282 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 5283 "<previous_module>"
                                                {

# 5284 "<previous_module>"
                                                        {
                                                                
# 5285 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 5286 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5287 "<previous_module>"
                                                                {
                                                                        
# 5288 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5290 "<previous_module>"
;
                                                                
# 5291 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5292 "<previous_module>"
                                                                {
                                                                        
# 5293 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5295 "<previous_module>"
;
                                                                
# 5296 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5297 "<previous_module>"
                                                                {
                                                                        
# 5298 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5300 "<previous_module>"
;
                                                                
# 5301 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 5302 "<previous_module>"
tmain_337: IF(0,337,tmain_338)__CSEQ_removeindent;
                                                                
# 5303 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 5304 "<previous_module>"
__exit_loop_64:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 338);

                                                                
# 5305 "<previous_module>"
;
                                                                ;
                                                                
# 5306 "<previous_module>"
__exit__exponential_backoff_7_21:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 338);

                                                                
# 5307 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5309 "<previous_module>"
;
                                                        
# 5310 "<previous_module>"
tmain_338: IF(0,338,tmain_339)__CSEQ_removeindent;
                                                        
# 5311 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 5312 "<previous_module>"
tmain_339: IF(0,339,tmain_340)__CSEQ_removeindent;
                                                        
# 5313 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 5315 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 340);
                                                ;
                                                
# 5316 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 5317 "<previous_module>"
;
                                                ;
                                                
# 5318 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 5319 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 5320 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 5321 "<previous_module>"
                                                {
                                                        
# 5322 "<previous_module>"
goto __exit_loop_62;
                                                        ;
                                                }

                                                
# 5324 "<previous_module>"
;
                                        }
                                        
# 5326 "<previous_module>"
;
                                        
# 5327 "<previous_module>"
if (
# 5328 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 5329 "<previous_module>"
                                        {
                                                
# 5330 "<previous_module>"
goto __exit_loop_62;
                                                ;
                                        }

                                        
# 5332 "<previous_module>"
;

# 5333 "<previous_module>"
                                        {
                                                
# 5334 "<previous_module>"
;
                                                ;
                                                
# 5335 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 5336 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 5337 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 5338 "<previous_module>"
                                                {
                                                        
# 5339 "<previous_module>"
tmain_340: IF(0,340,tmain_341)__CSEQ_removeindent;
                                                        
# 5340 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 5341 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 5342 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                                        ;
                                                }

                                                
# 5344 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 341);
                                                ;
                                                
# 5345 "<previous_module>"
tmain_341: IF(0,341,tmain_342)__CSEQ_removeindent;
                                                
# 5346 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 5347 "<previous_module>"
tmain_342: IF(0,342,tmain_343)__CSEQ_removeindent;
                                                
# 5348 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 5349 "<previous_module>"
tmain_343: IF(0,343,tmain_344)__CSEQ_removeindent;
                                                
# 5350 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 5351 "<previous_module>"
tmain_344: IF(0,344,tmain_345)__CSEQ_removeindent;
                                                
# 5352 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 5353 "<previous_module>"
tmain_345: IF(0,345,tmain_346)__CSEQ_removeindent;
                                                
# 5354 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 5355 "<previous_module>"
;
                                                ;
                                                
# 5356 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 5357 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 5358 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 5359 "<previous_module>"
                                                {

# 5360 "<previous_module>"
                                                        {
                                                                
# 5361 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 5362 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5363 "<previous_module>"
                                                                {
                                                                        
# 5364 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5366 "<previous_module>"
;
                                                                
# 5367 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5368 "<previous_module>"
                                                                {
                                                                        
# 5369 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5371 "<previous_module>"
;
                                                                
# 5372 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5373 "<previous_module>"
                                                                {
                                                                        
# 5374 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5376 "<previous_module>"
;
                                                                
# 5377 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 5378 "<previous_module>"
tmain_346: IF(0,346,tmain_347)__CSEQ_removeindent;
                                                                
# 5379 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 5380 "<previous_module>"
__exit_loop_65:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 347);

                                                                
# 5381 "<previous_module>"
;
                                                                ;
                                                                
# 5382 "<previous_module>"
__exit__exponential_backoff_7_22:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 347);

                                                                
# 5383 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5385 "<previous_module>"
;
                                                        
# 5386 "<previous_module>"
tmain_347: IF(0,347,tmain_348)__CSEQ_removeindent;
                                                        
# 5387 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 5388 "<previous_module>"
tmain_348: IF(0,348,tmain_349)__CSEQ_removeindent;
                                                        
# 5389 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 5391 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 349);
                                                ;
                                                
# 5392 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 5393 "<previous_module>"
;
                                                ;
                                                
# 5394 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 5395 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 5396 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 5397 "<previous_module>"
                                                {
                                                        
# 5398 "<previous_module>"
goto __exit_loop_62;
                                                        ;
                                                }

                                                
# 5400 "<previous_module>"
;
                                        }
                                        
# 5402 "<previous_module>"
;
                                        
# 5403 "<previous_module>"
if (
# 5404 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 5405 "<previous_module>"
                                        {
                                                
# 5406 "<previous_module>"
goto __exit_loop_62;
                                                ;
                                        }

                                        
# 5408 "<previous_module>"
;

# 5409 "<previous_module>"
                                        {
                                                
# 5410 "<previous_module>"
;
                                                ;
                                                
# 5411 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 5412 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 5413 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 5414 "<previous_module>"
                                                {
                                                        
# 5415 "<previous_module>"
tmain_349: IF(0,349,tmain_350)__CSEQ_removeindent;
                                                        
# 5416 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 5417 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 5418 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                                        ;
                                                }

                                                
# 5420 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 350);
                                                ;
                                                
# 5421 "<previous_module>"
tmain_350: IF(0,350,tmain_351)__CSEQ_removeindent;
                                                
# 5422 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 5423 "<previous_module>"
tmain_351: IF(0,351,tmain_352)__CSEQ_removeindent;
                                                
# 5424 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 5425 "<previous_module>"
tmain_352: IF(0,352,tmain_353)__CSEQ_removeindent;
                                                
# 5426 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 5427 "<previous_module>"
tmain_353: IF(0,353,tmain_354)__CSEQ_removeindent;
                                                
# 5428 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 5429 "<previous_module>"
tmain_354: IF(0,354,tmain_355)__CSEQ_removeindent;
                                                
# 5430 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 5431 "<previous_module>"
;
                                                ;
                                                
# 5432 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 5433 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 5434 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 5435 "<previous_module>"
                                                {

# 5436 "<previous_module>"
                                                        {
                                                                
# 5437 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 5438 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5439 "<previous_module>"
                                                                {
                                                                        
# 5440 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5442 "<previous_module>"
;
                                                                
# 5443 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5444 "<previous_module>"
                                                                {
                                                                        
# 5445 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5447 "<previous_module>"
;
                                                                
# 5448 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5449 "<previous_module>"
                                                                {
                                                                        
# 5450 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5452 "<previous_module>"
;
                                                                
# 5453 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 5454 "<previous_module>"
tmain_355: IF(0,355,tmain_356)__CSEQ_removeindent;
                                                                
# 5455 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 5456 "<previous_module>"
__exit_loop_66:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 356);

                                                                
# 5457 "<previous_module>"
;
                                                                ;
                                                                
# 5458 "<previous_module>"
__exit__exponential_backoff_7_23:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 356);

                                                                
# 5459 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5461 "<previous_module>"
;
                                                        
# 5462 "<previous_module>"
tmain_356: IF(0,356,tmain_357)__CSEQ_removeindent;
                                                        
# 5463 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 5464 "<previous_module>"
tmain_357: IF(0,357,tmain_358)__CSEQ_removeindent;
                                                        
# 5465 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 5467 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 358);
                                                ;
                                                
# 5468 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 5469 "<previous_module>"
;
                                                ;
                                                
# 5470 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 5471 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 5472 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 5473 "<previous_module>"
                                                {
                                                        
# 5474 "<previous_module>"
goto __exit_loop_62;
                                                        ;
                                                }

                                                
# 5476 "<previous_module>"
;
                                        }
                                        
# 5478 "<previous_module>"
;
                                        
# 5479 "<previous_module>"
if (
# 5480 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0))

# 5481 "<previous_module>"
                                        {
                                                
# 5482 "<previous_module>"
goto __exit_loop_62;
                                                ;
                                        }

                                        
# 5484 "<previous_module>"
;

# 5485 "<previous_module>"
                                        {
                                                
# 5486 "<previous_module>"
;
                                                ;
                                                
# 5487 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_11;
                                                
# 5488 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11 = __cs_local_lfds711_stack_pop_original_top[0] == 0;
                                                
# 5489 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_11)

# 5490 "<previous_module>"
                                                {
                                                        
# 5491 "<previous_module>"
tmain_358: IF(0,358,tmain_359)__CSEQ_removeindent;
                                                        
# 5492 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = 0;
                                                        
# 5493 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = 0;
                                                        
# 5494 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                                        ;
                                                }

                                                
# 5496 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 359);
                                                ;
                                                
# 5497 "<previous_module>"
tmain_359: IF(0,359,tmain_360)__CSEQ_removeindent;
                                                
# 5498 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[1] = __cs_local_lfds711_stack_pop_original_top[1] + 1;
                                                
# 5499 "<previous_module>"
tmain_360: IF(0,360,tmain_361)__CSEQ_removeindent;
                                                
# 5500 "<previous_module>"
__cs_local_lfds711_stack_pop_new_top[0] = (*__cs_local_lfds711_stack_pop_original_top[0]).next;
                                                
# 5501 "<previous_module>"
tmain_361: IF(0,361,tmain_362)__CSEQ_removeindent;
                                                
# 5502 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                
# 5503 "<previous_module>"
tmain_362: IF(0,362,tmain_363)__CSEQ_removeindent;
                                                
# 5504 "<previous_module>"
__cs_local_lfds711_stack_pop_result = __CSEQ_atomic_swap_stack_top(&(*__cs_param_lfds711_stack_pop_ss).top[0], &__cs_local_lfds711_stack_pop_original_top[0], &__cs_local_lfds711_stack_pop_new_top[0]);
                                                
# 5505 "<previous_module>"
tmain_363: IF(0,363,tmain_364)__CSEQ_removeindent;
                                                
# 5506 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                
# 5507 "<previous_module>"
;
                                                ;
                                                
# 5508 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_12;
                                                
# 5509 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12 = __cs_local_lfds711_stack_pop_result == 0;
                                                
# 5510 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_12)

# 5511 "<previous_module>"
                                                {

# 5512 "<previous_module>"
                                                        {
                                                                
# 5513 "<previous_module>"
static int __cs_local_exponential_backoff_loop;
                                                                
# 5514 "<previous_module>"
__cs_local_exponential_backoff_loop = 0;

# 5515 "<previous_module>"
                                                                {
                                                                        
# 5516 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5518 "<previous_module>"
;
                                                                
# 5519 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5520 "<previous_module>"
                                                                {
                                                                        
# 5521 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5523 "<previous_module>"
;
                                                                
# 5524 "<previous_module>"
__cs_local_exponential_backoff_loop++;

# 5525 "<previous_module>"
                                                                {
                                                                        
# 5526 "<previous_module>"
;
                                                                        ;
                                                                }
                                                                
# 5528 "<previous_module>"
;
                                                                
# 5529 "<previous_module>"
__cs_local_exponential_backoff_loop++;
                                                                
# 5530 "<previous_module>"
tmain_364: IF(0,364,tmain_365)__CSEQ_removeindent;
                                                                
# 5531 "<previous_module>"
__CPROVER_assume(!(__cs_local_exponential_backoff_loop < 3));
                                                                
# 5532 "<previous_module>"
__exit_loop_67:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 365);

                                                                
# 5533 "<previous_module>"
;
                                                                ;
                                                                
# 5534 "<previous_module>"
__exit__exponential_backoff_7_24:
                                                                __CPROVER_assume(__cs_pc_cs[0] >= 365);

                                                                
# 5535 "<previous_module>"
;
                                                                ;
                                                        }
                                                        
# 5537 "<previous_module>"
;
                                                        
# 5538 "<previous_module>"
tmain_365: IF(0,365,tmain_366)__CSEQ_removeindent;
                                                        
# 5539 "<previous_module>"
__cs_mutex_lock(&library_lock, 0);
                                                        
# 5540 "<previous_module>"
tmain_366: IF(0,366,tmain_367)__CSEQ_removeindent;
                                                        
# 5541 "<previous_module>"
__cs_mutex_unlock(&library_lock, 0);
                                                }

                                                
# 5543 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 367);
                                                ;
                                                
# 5544 "<previous_module>"
__cs_local_lfds711_stack_pop_i++;
                                                
# 5545 "<previous_module>"
;
                                                ;
                                                
# 5546 "<previous_module>"
static _Bool __cs_local_lfds711_stack_pop___cs_tmp_if_cond_13;
                                                
# 5547 "<previous_module>"
__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13 = __cs_local_lfds711_stack_pop_i > 1000;
                                                
# 5548 "<previous_module>"
if (__cs_local_lfds711_stack_pop___cs_tmp_if_cond_13)

# 5549 "<previous_module>"
                                                {
                                                        
# 5550 "<previous_module>"
goto __exit_loop_62;
                                                        ;
                                                }

                                                
# 5552 "<previous_module>"
;
                                        }
                                        
# 5554 "<previous_module>"
;
                                        
# 5555 "<previous_module>"
tmain_367: IF(0,367,tmain_368)__CSEQ_removeindent;
                                        
# 5556 "<previous_module>"
__CPROVER_assume(
# 5557 "<previous_module>"
!(__cs_local_lfds711_stack_pop_result == 0));
                                        
# 5558 "<previous_module>"
__exit_loop_62:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 368);

                                        
# 5559 "<previous_module>"
;
                                        ;
                                        
# 5560 "<previous_module>"
tmain_368: IF(0,368,tmain_369)__CSEQ_removeindent;
                                        
# 5561 "<previous_module>"
*__cs_param_lfds711_stack_pop_se = __cs_local_lfds711_stack_pop_original_top[0];
                                        
# 5562 "<previous_module>"
__cs_retval__lfds711_stack_pop_2 = __cs_local_lfds711_stack_pop_result;
                                        
# 5563 "<previous_module>"
goto __exit__lfds711_stack_pop_2_4;
                                        ;
                                        
# 5564 "<previous_module>"
__exit__lfds711_stack_pop_2_4:
                                        __CPROVER_assume(__cs_pc_cs[0] >= 369);

                                        
# 5565 "<previous_module>"
;
                                        ;
                                }
                                
# 5567 "<previous_module>"
;
                                
# 5568 "<previous_module>"
__cs_local_dump_structure_res = __cs_retval__lfds711_stack_pop_2;
                                
# 5569 "<previous_module>"
;
                                ;
                                
# 5570 "<previous_module>"
static _Bool __cs_local_dump_structure___cs_tmp_if_cond_24;
                                
# 5571 "<previous_module>"
__cs_local_dump_structure___cs_tmp_if_cond_24 = __cs_local_dump_structure_res == 0;
                                
# 5572 "<previous_module>"
if (__cs_local_dump_structure___cs_tmp_if_cond_24)

# 5573 "<previous_module>"
                                {
                                        
# 5574 "<previous_module>"
__cs_retval__dump_structure_1 = __cs_local_dump_structure_data_structure_size;
                                        
# 5575 "<previous_module>"
goto __exit__dump_structure_1;
                                        ;
                                }

                                
# 5577 "<previous_module>"
;
                                
# 5578 "<previous_module>"
__cs_local_dump_structure_data_structure_size = __cs_local_dump_structure_data_structure_size + 1;
                                
# 5579 "<previous_module>"
tmain_369: IF(0,369,tmain_370)__CSEQ_removeindent;
                                
# 5580 "<previous_module>"
__cs_local_dump_structure_data = (*__cs_local_dump_structure_se).value;
                                
# 5581 "<previous_module>"
static unsigned long long int __cs_local_dump_structure_id_found;
                                
# 5582 "<previous_module>"
tmain_370: IF(0,370,tmain_371)__CSEQ_removeindent;
                                
# 5583 "<previous_module>"
__cs_local_dump_structure_id_found = (*__cs_local_dump_structure_data).user_id;
                                
# 5584 "<previous_module>"
tmain_371: IF(0,371,tmain_372)__CSEQ_removeindent;
                                
# 5585 "<previous_module>"
__cs_param_dump_structure_ids[(*__cs_local_dump_structure_data).user_id] = 1;
                                
# 5586 "<previous_module>"
tmain_372: IF(0,372,tmain_373)__CSEQ_removeindent;
                                
# 5587 "<previous_module>"
free(__cs_local_dump_structure_data);
                        }
                        
# 5589 "<previous_module>"
;
                        
# 5590 "<previous_module>"
tmain_373: IF(0,373,tmain_374)__CSEQ_removeindent;
                        
# 5591 "<previous_module>"
__CPROVER_assume(!(__cs_local_dump_structure_res != 0));
                        
# 5592 "<previous_module>"
__exit_loop_27:
                        __CPROVER_assume(__cs_pc_cs[0] >= 374);

                        
# 5593 "<previous_module>"
;
                        ;
                        
# 5594 "<previous_module>"
__cs_retval__dump_structure_1 = __cs_local_dump_structure_data_structure_size;
                        
# 5595 "<previous_module>"
goto __exit__dump_structure_1;
                        ;
                        
# 5596 "<previous_module>"
__exit__dump_structure_1:
                        __CPROVER_assume(__cs_pc_cs[0] >= 374);

                        
# 5597 "<previous_module>"
;
                        ;
                }
                
# 5599 "<previous_module>"
;
                
# 5600 "<previous_module>"
__cs_local_check_size = __cs_retval__dump_structure_1;
                
# 5601 "<previous_module>"
tmain_374: IF(0,374,tmain_375)__CSEQ_removeindent;
                
# 5602 "<previous_module>"
assert(((((__cs_local_check_size == 2) && (__cs_local_check_ids[0] == 1)) && (__cs_local_check_ids[2] == 1)) || (((__cs_local_check_size == 2) && (__cs_local_check_ids[1] == 1)) && (__cs_local_check_ids[2] == 1))) || ((((__cs_local_check_size == 3) && (__cs_local_check_ids[0] == 1)) && (__cs_local_check_ids[1] == 1)) && (__cs_local_check_ids[2] == 1)));
                
# 5603 "<previous_module>"
__exit__check_1:
                __CPROVER_assume(__cs_pc_cs[0] >= 375);

                
# 5604 "<previous_module>"
;
                ;
        }
        
# 5606 "<previous_module>"
;
        
# 5607 "<previous_module>"
goto __exit_main;
        ;
        
# 5608 "<previous_module>"
__exit_main:
        __CPROVER_assume(__cs_pc_cs[0] >= 375);

        
# 5609 "<previous_module>"
;
        ;
        
# 5610 "<previous_module>"
tmain_375: __CSEQ_removeindent;
        
# 5611 "<previous_module>"
__cs_exit(0, 0);
}


# 5613 "<previous_module>"
int main(void)
{
        
# 5614 "<previous_module>"
/* round  0 */__CSEQ_removeindent;
        
# 5615 "<previous_module>"
    /* main */__CSEQ_removeindent;
        
# 5616 "<previous_module>"
unsigned __CPROVER_bitvector[9] __cs_tmp_t0_r0;
        
# 5617 "<previous_module>"
__cs_pc_cs[0] = __cs_tmp_t0_r0;
        
# 5618 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] > 0);
        
# 5619 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 375);
        
# 5620 "<previous_module>"
main_thread();
        
# 5621 "<previous_module>"
__cs_pc[0] = __cs_pc_cs[0];
        
# 5623 "<previous_module>"
    /* thread1_0 */__CSEQ_removeindent;
        
# 5624 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_tmp_t1_r0;
        
# 5625 "<previous_module>"
if (__cs_active_thread[1])
        {
                
# 5626 "<previous_module>"
__cs_pc_cs[1] = __cs_tmp_t1_r0;
                
# 5627 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] <= 121);
                
# 5628 "<previous_module>"
thread1_0(__cs_threadargs[1]);
                
# 5629 "<previous_module>"
__cs_pc[1] = __cs_pc_cs[1];
        }

        
# 5632 "<previous_module>"
    /* thread2_0 */__CSEQ_removeindent;
        
# 5633 "<previous_module>"
unsigned __CPROVER_bitvector[8] __cs_tmp_t2_r0;
        
# 5634 "<previous_module>"
if (__cs_active_thread[2])
        {
                
# 5635 "<previous_module>"
__cs_pc_cs[2] = __cs_tmp_t2_r0;
                
# 5636 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] <= 136);
                
# 5637 "<previous_module>"
thread2_0(__cs_threadargs[2]);
                
# 5638 "<previous_module>"
__cs_pc[2] = __cs_pc_cs[2];
        }

        
# 5641 "<previous_module>"
/* round  1 */__CSEQ_removeindent;
        
# 5642 "<previous_module>"
    /* main */__CSEQ_removeindent;
        
# 5643 "<previous_module>"
unsigned __CPROVER_bitvector[9] __cs_tmp_t0_r1;
        
# 5644 "<previous_module>"
if (__cs_active_thread[0])
        {
                
# 5645 "<previous_module>"
__cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
                
# 5646 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                
# 5647 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 375);
                
# 5648 "<previous_module>"
main_thread();
                
# 5649 "<previous_module>"
__cs_pc[0] = __cs_pc_cs[0];
        }

        
# 5653 "<previous_module>"
    /* thread1_0 */__CSEQ_removeindent;
        
# 5654 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_tmp_t1_r1;
        
# 5655 "<previous_module>"
if (__cs_active_thread[1])
        {
                
# 5656 "<previous_module>"
__cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r1;
                
# 5657 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                
# 5658 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] <= 121);
                
# 5659 "<previous_module>"
thread1_0(__cs_threadargs[1]);
                
# 5660 "<previous_module>"
__cs_pc[1] = __cs_pc_cs[1];
        }

        
# 5663 "<previous_module>"
    /* thread2_0 */__CSEQ_removeindent;
        
# 5664 "<previous_module>"
unsigned __CPROVER_bitvector[8] __cs_tmp_t2_r1;
        
# 5665 "<previous_module>"
if (__cs_active_thread[2])
        {
                
# 5666 "<previous_module>"
__cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r1;
                
# 5667 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
                
# 5668 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] <= 136);
                
# 5669 "<previous_module>"
thread2_0(__cs_threadargs[2]);
                
# 5670 "<previous_module>"
__cs_pc[2] = __cs_pc_cs[2];
        }

        
# 5673 "<previous_module>"
unsigned __CPROVER_bitvector[9] __cs_tmp_t0_r2;
        
# 5674 "<previous_module>"
if (__cs_active_thread[0] == 1)
        {
                
# 5675 "<previous_module>"
__cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r2;
                
# 5676 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                
# 5677 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 375);
                
# 5678 "<previous_module>"
main_thread();
        }

        
# 5680 "<previous_module>"
return 0;
}

