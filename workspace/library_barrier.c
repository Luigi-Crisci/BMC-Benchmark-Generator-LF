#include <liblfds711.h>
#include "../liblfds7.1.1/liblfds711/src/liblfds711_internal.h"
#include <pthread.h>

#define bool _Bool
#define true 1
#define false 0
#define UNUSED __attribute__((unused))
// Change function names, so that they are treated as Atomic by Lazy-Cseq
#define __atomic_compare_exchange_n __VERIFIER_atomic_compare_and_exchange
#define __atomic_exchange_n __VERIFIER_atomic_exchange

static bool __VERIFIER_atomic_compare_and_exchange(volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, bool weak_p UNUSED, int sm UNUSED, int fm UNUSED)
{
	if (*mptr == *eptr)
	{
		*mptr = newval;
		return 1;
	}
	else
	{
		*eptr = newval;
		return 0;
	}
}

unsigned long __VERIFIER_atomic_exchange(volatile int long long unsigned *previous, int long long unsigned new, int memorder)
{
	unsigned long int old = *previous;
	*previous = new;
	return old;
}

void __atomic_thread_fence(int i)
{
}

int __VERIFIER_atomic_swap_stack_top(struct lfds711_stack_element * volatile* top, struct lfds711_stack_element * volatile* oldtop, 
				struct lfds711_stack_element **newtop)
{
	if (*oldtop == *top)
	{
		*top = *newtop;
		return 1;
	}
	else
	{
		*oldtop = *top;
		return 0;
	}
}


#define LFDS711_BACKOFF_INITIAL_VALUE 0
#define LFDS711_BACKOFF_LIMIT 10

void exponential_backoff(){
	int loop;
	for (loop = 0; loop < 10; loop++);     
}

// #define LFDS711_BACKOFF_EXPONENTIAL_BACKOFF(backoff_state, backoff_iteration) \
// 	{                                                                         \
// 		for (int loop = 0; loop < 10; loop++)                                 \
// 			;                                                                 \
// 	}

#define MAX_IT 1000

// typedef unsigned UWORD __attribute__((mode(word)));
// typedef int (__kernel_cmpxchg_t) (UWORD oldval, UWORD newval, UWORD *ptr);
// #define __kernel_cmpxchg (*(__kernel_cmpxchg_t *) 0xffff0fc0)

pthread_mutex_t lock;

void lfds711_misc_internal_backoff_init(struct lfds711_misc_backoff_state *bs)
{
	LFDS711_PAL_ASSERT(bs != NULL);
	LFDS711_PAL_ASSERT((lfds711_pal_uint_t)&bs->lock % LFDS711_PAL_ATOMIC_ISOLATION_IN_BYTES == 0);

	bs->lock = LFDS711_MISC_FLAG_LOWERED;
	bs->backoff_iteration_frequency_counters[0] = 0;
	bs->backoff_iteration_frequency_counters[1] = 0;
	bs->metric = 1;
	bs->total_operations = 0;
	return;
}

void lfds711_stack_init_valid_on_current_logical_core(struct lfds711_stack_state *ss,
													  void *user_state)
{
	pthread_mutex_init(&lock, NULL);

	
	LFDS711_PAL_ASSERT(ss != NULL);
	LFDS711_PAL_ASSERT((lfds711_pal_uint_t)ss->top % LFDS711_PAL_ATOMIC_ISOLATION_IN_BYTES == 0);
	LFDS711_PAL_ASSERT((lfds711_pal_uint_t)&ss->user_state % LFDS711_PAL_ATOMIC_ISOLATION_IN_BYTES == 0);
	// TRD : user_state can be NULL

	pthread_mutex_lock(&lock);
	ss->top[POINTER] = NULL;
	ss->top[COUNTER] = 0;

	ss->user_state = user_state;

	lfds711_misc_internal_backoff_init(&ss->pop_backoff);
	lfds711_misc_internal_backoff_init(&ss->push_backoff);
	// LFDS711_MISC_BARRIER_STORE;

	lfds711_misc_force_store();

	pthread_mutex_unlock(&lock);

	return;
}

int lfds711_stack_pop(struct lfds711_stack_state *ss,
					  struct lfds711_stack_element **se)
{
	char unsigned
		result;

	lfds711_pal_uint_t
		backoff_iteration = LFDS711_BACKOFF_INITIAL_VALUE;

	struct lfds711_stack_element LFDS711_PAL_ALIGN(LFDS711_PAL_ALIGN_DOUBLE_POINTER) * new_top[PAC_SIZE],
		*volatile original_top[PAC_SIZE];

	LFDS711_PAL_ASSERT(ss != NULL);
	LFDS711_PAL_ASSERT(se != NULL);

	// LFDS711_MISC_BARRIER_LOAD;
	//This should assure that, if a thread is writing something
	//important, I'll wait until it finish
	//
	pthread_mutex_lock(&lock);
	pthread_mutex_unlock(&lock);

	original_top[COUNTER] = ss->top[COUNTER];
	original_top[POINTER] = ss->top[POINTER];

	int i = 0;

	do
	{
		if (original_top[POINTER] == NULL)
		{
			*se = NULL;
			return 0;
		}

		new_top[COUNTER] = original_top[COUNTER] + 1;
		new_top[POINTER] = original_top[POINTER]->next;

		// LFDS711_PAL_ATOMIC_DWCAS(ss->top, original_top, new_top, LFDS711_MISC_CAS_STRENGTH_WEAK, result);
		pthread_mutex_lock(&lock);
		result = __VERIFIER_atomic_swap_stack_top(&(ss->top[0]), &(original_top[0]), &(new_top[0]));
		pthread_mutex_unlock(&lock);

		if (result == 0)
		{
			// LFDS711_BACKOFF_EXPONENTIAL_BACKOFF(ss->pop_backoff, backoff_iteration);
			exponential_backoff();
			pthread_mutex_lock(&lock);
			pthread_mutex_unlock(&lock);
		}
		i++;
		if (i > MAX_IT)
			break;
	} while (result == 0);

	*se = original_top[POINTER];

	// LFDS711_BACKOFF_AUTOTUNE(ss->pop_backoff, backoff_iteration);

	return 1;
}

void lfds711_stack_push(struct lfds711_stack_state *ss,
						struct lfds711_stack_element *se)
{
	char unsigned
		result;

	lfds711_pal_uint_t
		backoff_iteration = LFDS711_BACKOFF_INITIAL_VALUE;

	struct lfds711_stack_element LFDS711_PAL_ALIGN(LFDS711_PAL_ALIGN_DOUBLE_POINTER) * new_top[PAC_SIZE],
		*volatile original_top[PAC_SIZE];

	LFDS711_PAL_ASSERT(ss != NULL);
	LFDS711_PAL_ASSERT(se != NULL);

	new_top[POINTER] = se;

	original_top[COUNTER] = ss->top[COUNTER];
	original_top[POINTER] = ss->top[POINTER];

	result = 0;
	int i = 0;
	while (result == 0)
	{
		//This should force ss -> next to be written in memory
		pthread_mutex_lock(&lock);
		se->next = original_top[POINTER];
		pthread_mutex_unlock(&lock);
		// LFDS711_MISC_BARRIER_STORE;

		new_top[COUNTER] = original_top[COUNTER] + 1;

		// LFDS711_PAL_ATOMIC_DWCAS(ss->top, original_top, new_top, LFDS711_MISC_CAS_STRENGTH_WEAK, result);
		pthread_mutex_lock(&lock);
		result = __VERIFIER_atomic_swap_stack_top(&(ss->top[0]), &(original_top[0]), &(new_top[0]));
		pthread_mutex_unlock(&lock);

		if (result == 0)
			// LFDS711_BACKOFF_EXPONENTIAL_BACKOFF(ss->push_backoff, backoff_iteration);
			exponential_backoff();
		i++;
		if (i > MAX_IT)
			break;
	}

	// LFDS711_BACKOFF_AUTOTUNE(ss->push_backoff, backoff_iteration);

	return;
}

/****************************************************************************/
void lfds711_stack_cleanup(struct lfds711_stack_state *ss,
						   void (*element_cleanup_callback)(struct lfds711_stack_state *ss, struct lfds711_stack_element *se))
{
	struct lfds711_stack_element
		*se,
		*se_temp;

	LFDS711_PAL_ASSERT(ss != NULL);
	// TRD : element_cleanup_callback can be NULL

	LFDS711_MISC_BARRIER_LOAD;

	if (element_cleanup_callback != NULL)
	{
		se = ss->top[POINTER];

		while (se != NULL)
		{
			se_temp = se;
			se = se->next;

			element_cleanup_callback(ss, se_temp);
		}
	}

	return;
}
