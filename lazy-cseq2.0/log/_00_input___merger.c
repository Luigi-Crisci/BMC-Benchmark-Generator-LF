#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
<<<<<<< HEAD
#include "../library_barrier.c"
#include <assert.h>
#include "../list.c"
#include <fcntl.h>


<<<<<<< HEAD
#define VALUES 10
//Set ATOMIC_OPERATION to make push and pop atomic
//FIXME: Currently not working because of the presence of locks in push and pop method
#define ATOMIC_OPERATION 0
#define LOCK if(ATOMIC_OPERATION){ pthread_mutex_lock(&lock);}
#define UNLOCK if(ATOMIC_OPERATION){ pthread_mutex_unlock(&lock); }
=======
#define VALUES 1
//Set ATOMIC_OPERATION to make push and pop atomic
//FIXME: Currently not working because of the presence of locks in push and pop method
#define ATOMIC_OPERATION 0
// #define LOCK if(ATOMIC_OPERATION){ pthread_mutex_lock(&lock);}
// #define UNLOCK if(ATOMIC_OPERATION){ pthread_mutex_unlock(&lock); }
>>>>>>> origin/main
=======
>>>>>>> origin/main

//Using the interface
#include "../inteface/interface.c"

#include <assert.h>

#define VALUES 5
//Set ATOMIC_OPERATION to make push and pop atomic
int volatile ATOMIC_OPERATION = 0;
#define LOCK if(ATOMIC_OPERATION){ pthread_mutex_lock(&lock);}
#define UNLOCK if(ATOMIC_OPERATION){ pthread_mutex_unlock(&lock); }

void* ss;
pthread_mutex_t lock;

void *push()
{
	int long long unsigned loop;

	for (loop = 0; loop < VALUES; loop++)
	{
<<<<<<< HEAD
<<<<<<< HEAD
		LOCK;
		td[loop].user_id = loop;
		LFDS711_STACK_SET_VALUE_IN_ELEMENT(td[loop].se, &td[loop]);
		lfds711_stack_push(&ss, &td[loop].se);
		UNLOCK;
=======
		// LOCK;
		td[loop].user_id = loop;
		LFDS711_STACK_SET_VALUE_IN_ELEMENT(td[loop].se, &td[loop]);
		lfds711_stack_push(&ss, &td[loop].se);
		// UNLOCK;
>>>>>>> origin/main
=======
		LOCK;
		insert(ss,loop);
		UNLOCK;
>>>>>>> origin/main
	}
}

void *pop()
{
	int res;
	int count = 0;
	int loop;
	for (loop = 0; loop < VALUES; loop++)
	{
<<<<<<< HEAD
		temp_td = NULL;
<<<<<<< HEAD
		LOCK;
		res = lfds711_stack_pop(&ss, &se);
		UNLOCK;
=======
		// LOCK;
		res = lfds711_stack_pop(&ss, &se);
		// UNLOCK;
>>>>>>> origin/main
		
		if(res == 0)
			continue;
		temp_td = LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*se);
		count++;
		//printf("%llu\n", temp_td->user_id);
	}

	// assert(count==VALUES);
}

//Function to write the content of the list, printed on stdout, into the file
void writeIntofile(char *filename,LIST_NODE_T *listHead)
{
	int filefd = open(filename, O_WRONLY|O_CREAT|O_APPEND, 0666);
	int saved = dup(1);
	close(1);//Close stdout
	dup(filefd);
	PrintListPayloads(listHead);
	close(filefd);
	fflush(stdout);
	dup2(saved, 1);
	close(saved);
}


//Function to copy the actual content of the stack into a linked list
LIST_NODE_T* createList(LIST_NODE_T *listHead)
{
	struct lfds711_stack_element *se;
	struct test_data *temp_td;

	int res;
	res = lfds711_stack_pop(&ss, &se);
	while (res!=0)
	{
		temp_td = LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*se);
		LIST_InsertHeadNode(&listHead,temp_td->se,temp_td->user_id);
		res = lfds711_stack_pop(&ss, &se);
=======
		LOCK;
		delete(ss);
		UNLOCK;
>>>>>>> origin/main
	}
}


int main()
{


<<<<<<< HEAD
	pthread_t t1, t2;
<<<<<<< HEAD
	pthread_mutex_init(&lock, NULL);
=======
	// pthread_mutex_init(&lock, NULL);
>>>>>>> origin/main
=======
	pthread_mutex_init(&lock, NULL);
	ss = init();
	
	pthread_t t1, t2,t3,t4,t5,t6,t7,t8,t9,t10;
>>>>>>> origin/main
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
<<<<<<< HEAD
	pthread_join(t2, 0);

	listHead = createList(listHead);
	readFile("foo.txt",listHead);
	//Commented because cseq is unable to parse it
	// lfds711_stack_cleanup(&ss, NULL);

<<<<<<< HEAD
=======
	// assert(0);
>>>>>>> origin/main
=======
	// pthread_join(t2, 0);
	// pthread_join(t3, 0);
	// pthread_join(t4, 0);
	// pthread_join(t5, 0);
	pthread_join(t6, 0);
	// pthread_join(t7, 0);
	// pthread_join(t8, 0);
	// pthread_join(t9, 0);
	// pthread_join(t10, 0);

	assert(0);
>>>>>>> origin/main
	return (EXIT_SUCCESS);
}