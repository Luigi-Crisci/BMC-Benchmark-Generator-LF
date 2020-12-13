// DO NOT MODIFY THIS FILE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "checker.c"
#include "/home/luigi/LFDS-LazyCseq-Project/workspace/inteface/stack/stack_interface.c"

int volatile ATOMIC_OPERATION = 1;
#define LOCK if(ATOMIC_OPERATION){ pthread_mutex_lock(&lock);}
#define UNLOCK if(ATOMIC_OPERATION){ pthread_mutex_unlock(&lock); }

void* ss;
pthread_mutex_t lock;

void *thread1(){
 LOCK;
 delete(ss);
 UNLOCK;
 LOCK;
 insert(ss,0);
 UNLOCK;
 }
 void *thread2(){
 LOCK;
 insert(ss,1);
 UNLOCK;
 LOCK;
 delete(ss);
 UNLOCK;
 }

int main()
{
	pthread_mutex_init(&lock, NULL);
	ss = init();
	
pthread_t t1,t2;
pthread_create(&t1, NULL, thread1, NULL);
pthread_create(&t2, NULL, thread2, NULL);
pthread_join(t1, 0);
pthread_join(t2, 0);

	check(ss);
	return (EXIT_SUCCESS);
}