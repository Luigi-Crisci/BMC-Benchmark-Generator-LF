#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../library.c"
#include <pthread.h>
#include <assert.h>

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

#define VALUES 3

void *tr1()
{
	struct test_data *td;

	int long long unsigned
		loop;

	td = malloc(sizeof(struct test_data) * VALUES);
	// sleep(1);

	pthread_mutex_lock(&lock);
	td[0].user_id = 0;
	LFDS711_STACK_SET_VALUE_IN_ELEMENT(td[0].se, &td[0]);
	lfds711_stack_push(&ss, &td[0].se);
	pthread_mutex_unlock(&lock);

	pthread_mutex_lock(&lock);
	td[1].user_id = 1;
	LFDS711_STACK_SET_VALUE_IN_ELEMENT(td[1].se, &td[1]);
	lfds711_stack_push(&ss, &td[1].se);
	pthread_mutex_unlock(&lock);

	pthread_mutex_lock(&lock);
	td[2].user_id = 2;
	LFDS711_STACK_SET_VALUE_IN_ELEMENT(td[2].se, &td[2]);
	lfds711_stack_push(&ss, &td[2].se);
	pthread_mutex_unlock(&lock);

	k = 1;
}


void *tr2()
{
	// while(k==0){} //Sequentializing threads

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
		temp_td = LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*se);
		count++;
		int x = temp_td->user_id;
		// assert(temp_td->user_id==2);
		printf("user_id = %llu\n", temp_td->user_id);
	}

	pthread_mutex_lock(&lock);
	res = lfds711_stack_pop(&ss, &se);
	pthread_mutex_unlock(&lock);
	if (res != 0)
	{
		temp_td = LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*se);
		count++;
		int x = temp_td->user_id;
		// assert(temp_td->user_id==1);
		printf("user_id = %llu\n", temp_td->user_id);
	}

	pthread_mutex_lock(&lock);
	res = lfds711_stack_pop(&ss, &se);
	pthread_mutex_unlock(&lock);
	if (res != 0)
	{
		temp_td = LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*se);
		count++;
		int x = temp_td->user_id;
		// assert(temp_td->user_id==0);
		printf("user_id = %llu\n", temp_td->user_id);
	}

	// assert(count == VALUES);
}

int main()
{

	lfds711_stack_init_valid_on_current_logical_core(&ss, NULL);

	pthread_t t1, t2;
	pthread_mutex_init(&lock, NULL);
	pthread_create(&t1, NULL, tr1, NULL);
	pthread_create(&t2, NULL, tr2, NULL);
	pthread_join(t1, 0);
	pthread_join(t2, 0);

	lfds711_stack_cleanup(&ss, NULL);
	assert(0);
	return (EXIT_SUCCESS);
}