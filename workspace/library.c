#include <liblfds711.h>
#include <pthread.h>

#define bool _Bool
#define true 1
#define false 0
#define UNUSED __attribute__((unused))

struct coppia
{
	int x, y;
};


static bool __atomic_compare_exchange_n(volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, bool weak_p UNUSED, int sm UNUSED, int fm UNUSED)
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

unsigned long __atomic_exchange_n(volatile int long long unsigned *previous, int long long unsigned new, int memorder)
{
	unsigned long int old = *previous;
	*previous = new;
	return old;
}

void __atomic_thread_fence(int i)
{
}


#define LFDS711_BACKOFF_INITIAL_VALUE 0
#define LFDS711_BACKOFF_LIMIT 10

#define LFDS711_BACKOFF_EXPONENTIAL_BACKOFF(backoff_state, backoff_iteration) \
	for (int loop = 0; loop < 10; loop = loop + 1)

#define MAX_IT 100

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
	LFDS711_PAL_ASSERT(ss != NULL);
	LFDS711_PAL_ASSERT((lfds711_pal_uint_t)ss->top % LFDS711_PAL_ATOMIC_ISOLATION_IN_BYTES == 0);
	LFDS711_PAL_ASSERT((lfds711_pal_uint_t)&ss->user_state % LFDS711_PAL_ATOMIC_ISOLATION_IN_BYTES == 0);
	// TRD : user_state can be NULL

	ss->top[POINTER] = NULL;
	ss->top[COUNTER] = 0;

	ss->user_state = user_state;

	lfds711_misc_internal_backoff_init(&ss->pop_backoff);
	lfds711_misc_internal_backoff_init(&ss->push_backoff);

	LFDS711_MISC_BARRIER_STORE;

	lfds711_misc_force_store();

	return;
}


int swap_stack_top(volatile long long int *top, volatile long long int *oldtop,volatile long long int *newtop){
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

	LFDS711_MISC_BARRIER_LOAD;

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

		//IF che va a sostituire la funzione cmpxchg16b in quanto non parsabile in lazycseq
		//TODO: Should be atomic: must be transferred into a __VERIFED function
		result = swap_stack_top(&(ss->top[0]),&(original_top[0]),&(new_top[0]));
		

		//Funzione cmpxchg16b in asm che è stata sostituita dal precedente if
		// LFDS711_PAL_ATOMIC_DWCAS(ss->top, original_top, new_top, LFDS711_MISC_CAS_STRENGTH_WEAK, result);

		if (result == 0)
		{
			// LFDS711_BACKOFF_EXPONENTIAL_BACKOFF(ss->pop_backoff, backoff_iteration)
			LFDS711_MISC_BARRIER_LOAD;
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
	int k = 0;
	long long int indirizzo = se;
	indirizzo = (struct lfds711_stack_element *)new_top;
	int old_value = ((struct coppia *)((struct lfds711_stack_element *)new_top[0])->value)->x;
	while (result == 0)
	{
		se->next = original_top[POINTER];
		LFDS711_MISC_BARRIER_STORE;

		new_top[COUNTER] = original_top[COUNTER] + 1;

		//IF che va a sostituire la funzione cmpxchg16b in quanto non parsabile in lazycseq
		//TODO: Should be atomic: must be transferred into a __VERIFED function
		// if (original_top[0] == ss->top[0])
		// {
		// 	ss->top[0] = new_top[0];
		// 	result = 1;
		// }
		// else
		// {
		// 	original_top[0] = ss->top[0];
		// 	result = 0;
		// }
		result = swap_stack_top(&(ss->top[0]),&(original_top[0]),&(new_top[0]));


		//Funzione cmpxchg16b in asm che è stata sostituita dal precedente if
		// LFDS711_PAL_ATOMIC_DWCAS(ss->top, original_top, new_top, LFDS711_MISC_CAS_STRENGTH_WEAK, result);

		// if (result == 0)
		// 	LFDS711_BACKOFF_EXPONENTIAL_BACKOFF(ss->push_backoff, backoff_iteration);

		if (k > MAX_IT || result == 1)
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
