// DO NOT MODIFY THIS FILE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "/home/luigi/LFDS-LazyCseq-Project/workspace/inteface/stack/stack_interface.c"
#include <assert.h>
#include "checker_1.c"

int volatile ATOMIC_OPERATION = 0;
#define LOCK if(ATOMIC_OPERATION){ pthread_mutex_lock(&lock);}
#define UNLOCK if(ATOMIC_OPERATION){ pthread_mutex_unlock(&lock); }

struct lfds711_stack_state* ss;
pthread_mutex_t lock;

void *thread1(){
 LOCK;
 delete(ss);
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