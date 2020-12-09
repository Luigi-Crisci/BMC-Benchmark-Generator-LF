#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../library_barrier.c"
#include <assert.h>

<<<<<<< HEAD

<<<<<<< HEAD
#define VALUES 10
=======
#define VALUES 1
>>>>>>> origin/main
=======
#define VALUES 2
>>>>>>> origin/main
//Set ATOMIC_OPERATION to make push and pop atomic
#define ATOMIC_OPERATION 0
// #define LOCK if(ATOMIC_OPERATION){ pthread_mutex_lock(&lock);}
// #define UNLOCK if(ATOMIC_OPERATION){ pthread_mutex_unlock(&lock); }

struct lfds711_stack_state ss;
// pthread_mutex_t lock;

struct test_data
{
	struct lfds711_stack_element
		se;

	int long long unsigned
		user_id;
};


void *push()
{
	struct test_data *td;

	int long long unsigned loop;

	td = malloc(sizeof(struct test_data) * VALUES);

	for (loop = 0; loop < VALUES; loop++)
	{
		// LOCK;
		td[loop].user_id = loop;
		LFDS711_STACK_SET_VALUE_IN_ELEMENT(td[loop].se, &td[loop]);
		lfds711_stack_push(&ss, &td[loop].se);
		// UNLOCK;
	}
	
}

void *pop()
{
	struct lfds711_stack_element *se;
	struct test_data *temp_td;

	int res;
	int count = 0;
	int loop;
	for (loop = 0; loop < VALUES; loop++)
	{
		temp_td = NULL;
		// LOCK;
		res = lfds711_stack_pop(&ss, &se);
		// UNLOCK;
		
		if(res == 0)
			continue;
		temp_td = LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*se);
		int id_popped = temp_td->user_id;
		count++;
		//printf("%llu\n", temp_td->user_id);
	}

	// assert(count==VALUES);
}


int main()
{

	lfds711_stack_init_valid_on_current_logical_core(&ss, NULL);

	pthread_t t1, t2;
	// pthread_mutex_init(&lock, NULL);
	pthread_create(&t1, NULL, push, NULL);
	pthread_create(&t2, NULL, pop, NULL);
	pthread_join(t1, 0);
	pthread_join(t2, 0);

	assert(0);
	return (EXIT_SUCCESS);
}