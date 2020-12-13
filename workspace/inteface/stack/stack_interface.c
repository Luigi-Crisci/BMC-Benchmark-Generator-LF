#include "stack_methods.c"
#include "../../placeholder_library.c"
#include <stdlib.h>

struct lfds711_stack_state mystack;
struct test_data
{
	struct lfds711_stack_element
		se;

	int long long unsigned
		user_id;
};

void *init()
{
	lfds711_stack_init_valid_on_current_logical_core(&mystack, NULL);
	return (void *)&mystack;
}

void insert(struct lfds711_stack_state *s, int long long unsigned id)
{
	struct test_data *td = malloc(sizeof(struct test_data));
	td->user_id = id;
	LFDS711_STACK_SET_VALUE_IN_ELEMENT(td->se, td);
	lfds711_stack_push((struct lfds711_stack_state *)s, &(td->se));
}

int delete (struct lfds711_stack_state *s)
{
	struct lfds711_stack_element *se;
	struct test_data *temp_td;
	int res = lfds711_stack_pop(&mystack, &se);

	if (res != 0)
		free(LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*se));
	return res;
}


/**
 * Check if the stack contains an element with the specified *id*
 * This is highly inefficient because the struct is not iterable, so it needs to
 * pop the element from the stack and then push them again
 */
int contains(struct lfds711_stack_state *s, unsigned long long int id)
{
	int max_size = 2, actual_size = 0, res = 1, found = 0, dimension = 2;
	struct test_data **datas = malloc(sizeof(struct test_data*) * max_size);
	struct lfds711_stack_element *se;

	while (found == 0 && res != 0)
	{
		
		res = lfds711_stack_pop(s, &se);
		if (res == 0){
			break;
		}

		datas[actual_size] = LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*se);
		printf("%d -- %d\n",datas[actual_size]->user_id,actual_size);
		if (datas[actual_size]->user_id == id)
			found = 1;

		actual_size = actual_size + 1;
	}

	//Push the elements bash into the stack
	int i = 0;
	while(i < actual_size){
		lfds711_stack_push(s, &(datas[i]->se));
		i++;
	}

	// free(datas);
	return found;
}

int get_size(struct lfds711_stack_state *s){
	int max_size = 2, actual_size = 0, res = 1, dimension = 2;
	struct test_data **datas = malloc(sizeof(struct test_data*) * max_size);
	struct lfds711_stack_element *se;

	while (res != 0)
	{
		res = lfds711_stack_pop(s, &se);
		datas[actual_size] = LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*se);
		if (res == 0)
			break;

		actual_size = actual_size + 1;
	}

	//Push the elements bash into the stack
	int i = 0;
	while(i < actual_size){
		lfds711_stack_push(s, &(datas[i]->se));
		i++;
	}

	// free(datas);
	return actual_size;
}


int is_empty(struct lfds711_stack_state *s){
	struct lfds711_stack_element *se;
	int res = lfds711_stack_pop(s, &se);
	
	if (res != 0){
		lfds711_stack_push(s, se);
		return 0;
	}

	return 1;
}