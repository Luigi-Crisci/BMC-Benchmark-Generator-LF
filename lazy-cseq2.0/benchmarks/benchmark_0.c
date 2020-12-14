// DO NOT MODIFY THIS FILE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "/home/luigi/lazy-cseq-2.0/workspace/inteface/stack/stack_interface.c"
#include <assert.h>
#include "checker.c"

int volatile ATOMIC_OPERATION = 1;
#define LOCK if(ATOMIC_OPERATION){ pthread_mutex_lock(&lock);}
#define UNLOCK if(ATOMIC_OPERATION){ pthread_mutex_unlock(&lock); }

struct lfds711_stack_state* ss;
pthread_mutex_t lock;

void *thread1(){
 LOCK;
 insert(ss,0);
 UNLOCK;
 }

int main()
{
	pthread_mutex_init(&lock, NULL);
	ss = init();
	
pthread_t t1;
pthread_create(&t1, NULL, thread1, NULL);
pthread_join(t1, 0);

	check(ss);
	return (EXIT_SUCCESS);
}