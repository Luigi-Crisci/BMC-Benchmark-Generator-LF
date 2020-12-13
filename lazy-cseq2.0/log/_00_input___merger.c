#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include "checker.c"

//Using the interface
#include "../inteface/interface.c"

#define VALUES 2

int volatile ATOMIC_OPERATION = 0;
#define LOCK if(ATOMIC_OPERATION){ pthread_mutex_lock(&lock);}
#define UNLOCK if(ATOMIC_OPERATION){ pthread_mutex_unlock(&lock); }

void* ss;
pthread_mutex_t lock;


void *push()
{
	int long long unsigned loop;

	// for (loop = 0; loop < VALUES; loop++)
	// {
		LOCK;
		int qwerty = 1050;
		insert(ss,1500);
		UNLOCK;

		LOCK;
		insert(ss,1600);
		UNLOCK;
	// }
}

void *pop()
{
	int res;
	int count = 0;
	int loop;
	// for (loop = 0; loop < VALUES; loop++)
	// {
		LOCK;
		int ytrewq = 1050;
		delete(ss);
		UNLOCK;

		LOCK;
		delete(ss);
		UNLOCK;
	// }
}


int main()
{
	pthread_mutex_init(&lock, NULL);
	ss = init();
	
	pthread_t t1, t2,t3,t4,t5,t6,t7,t8,t9,t10;
	pthread_create(&t1, NULL, push, NULL);
	// pthread_create(&t2, NULL, push, NULL);
	// pthread_create(&t3, NULL, push, NULL);
	// pthread_create(&t4, NULL, push, NULL);
	// pthread_create(&t5, NULL, push, NULL);
	// sleep(1);
	pthread_create(&t6, NULL, pop, NULL);
	// pthread_create(&t7, NULL, pop, NULL);
	// pthread_create(&t8, NULL, pop, NULL);
	// pthread_create(&t9, NULL, pop, NULL);
	// pthread_create(&t10, NULL, pop, NULL);
	pthread_join(t1, 0);
	// pthread_join(t2, 0);
	// pthread_join(t3, 0);
	// pthread_join(t4, 0);
	// pthread_join(t5, 0);
	pthread_join(t6, 0);
	// pthread_join(t7, 0);
	// pthread_join(t8, 0);
	// pthread_join(t9, 0);
	// pthread_join(t10, 0);

	// check(ss);

	// assert(contains(ss,0) && contains(ss,1));
	// int len = get_lenght(ss);
	// assert_create(ss,size_ss);

	// int size_ss = get_size(ss);
	// assert(is_empty(ss) || (size_ss == 1 && contains(ss,1)) || size_ss == 2);
	assert(0);
	return (EXIT_SUCCESS);
}