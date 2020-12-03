#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../library_barrier.c"
#include <assert.h>
#include "../list.c"
#include <fcntl.h>


<<<<<<< HEAD
#define VALUES 10
=======
#define VALUES 1
>>>>>>> origin/main
//Set ATOMIC_OPERATION to make push and pop atomic
//FIXME: Currently not working because of the presence of locks in push and pop method
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
	}

	return listHead;
	
}


//Function to generate assert conditions
void readFile(char* filename, LIST_NODE_T *listHead)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	LIST_NODE_T *parent = NULL;
	LIST_NODE_T *curNode = listHead;

	char delim[] = ",";
	int i = 0;

	int size = GetListSize(curNode);



	//Create file that contains the new linked list if it doesn't exist yet	
	FILE *fp = fopen(filename, "r"); 
	if(!fp)
		{
			writeIntofile(filename, listHead);
			assert(0);
			return;
		}

	//Iterate line by line through the file. If it reach the end of the file we already met this assert condition.
	while ((read = getline(&line, &len, fp)) != -1) 
	{
		//Split string for each ","
		char *ptr = strtok(line, delim);

		//While there is a node in the list created compare it with the file
		while(curNode)
      		{
      		if(curNode->payload.user_id != atoi(ptr))
         		break;
			i++;
      		parent = curNode;
      		curNode=curNode->next;
			ptr = strtok(NULL, delim);
      		}
		
		//list already into the file
		if (i == size)
		{
			fclose(fp);         
			return;
		}
		
		i=0;
		
    }    

	//If i!=size then elements didn't match with any line so it's a new assert  
	if(i!=size)
	{
		writeIntofile(filename, listHead);
		assert(0);         
		return;
	}

}



int main()
{
	LIST_NODE_T *listHead = NULL;

	lfds711_stack_init_valid_on_current_logical_core(&ss, NULL);

	pthread_t t1, t2;
	// pthread_mutex_init(&lock, NULL);
	pthread_create(&t1, NULL, push, NULL);
	pthread_create(&t2, NULL, pop, NULL);
	pthread_join(t1, 0);
	pthread_join(t2, 0);

	listHead = createList(listHead);
	readFile("foo.txt",listHead);
	//Commented because cseq is unable to parse it
	// lfds711_stack_cleanup(&ss, NULL);

	// assert(0);
	return (EXIT_SUCCESS);
}