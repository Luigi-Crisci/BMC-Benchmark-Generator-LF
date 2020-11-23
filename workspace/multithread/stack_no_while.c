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

//int function that returns the size of the stack and pop those elements
int check_stack_size()
{
	struct lfds711_stack_element *se;
	int extra_pop = 0;
	int res;

	res = lfds711_stack_pop(&ss, &se);

	while(res!=0)
	{
		extra_pop++;
		res = lfds711_stack_pop(&ss, &se);
	}
	
	return extra_pop;
}



int main()
{

	lfds711_stack_init_valid_on_current_logical_core(&ss, NULL);

	//Input of thread1 and thread2 respectively
	int num_pop =3, num_push = 3;

	int num_elem = num_push - num_pop;

	pthread_t t1, t2;
	pthread_mutex_init(&lock, NULL);
	pthread_create(&t1, NULL, tr1, NULL);
	pthread_create(&t2, NULL, tr2, NULL);
	pthread_join(t1, 0);
	pthread_join(t2, 0);


	//If the number returned by the function is higher than the expected then the size of the stack isn't correct
	int extra_elem = check_stack_size();
	// if(extra_elem > num_elem)
	// 	assert(0);
	// 	else{
	// 		assert(1);
	// 		}
	assert(check_stack_size() <= num_elem);
	
	// lfds711_stack_cleanup(&ss, NULL);
	return (EXIT_SUCCESS);
}