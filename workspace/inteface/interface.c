#include "../library_barrier.c"
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

int insert(void *s, int id)
{
	struct test_data *td = malloc(sizeof(struct test_data));
	td->user_id = id;
	LFDS711_STACK_SET_VALUE_IN_ELEMENT(td->se, td);
	lfds711_stack_push((struct lfds711_stack_state *)s, td);
}

int delete (void *s)
{
	struct lfds711_stack_element *se;
	struct test_data *temp_td;
	int res = lfds711_stack_pop((struct lfds711_stack_state *)s, &se);

	//This code exists only for testing, it can be replaced with a single statement "return res;"
	if (res == 0)
		return res;
	temp_td = LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*se);
	int val = temp_td->user_id;
	printf("%llu\n", temp_td->user_id);
}


/**
 * Check if the stack contains an element with the specified *id*
 * This is highly inefficient because the struct is not iterable, so it needs to
 * pop the element from the stack and then push them again
 */
int contains(void *s, int id)
{
	int max_size = 20, actual_size = 0, res = 1, found = 0, dimension = 2;
	struct test_data **datas = malloc(sizeof(struct test_data*) * max_size);
	struct lfds711_stack_element *se;

	while (found == 0 && res != 0)
	{
		if (actual_size == max_size)
		{
			datas = realloc(datas,sizeof(struct test_data*) * max_size * dimension);
			max_size *= dimension;
		}
		
		res = lfds711_stack_pop((struct lfds711_stack_state *)s, &se);
		if (res == 0)
			continue;

		datas[actual_size] = LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*se);
		if (datas[actual_size]->user_id == id)
			found = 1;
		actual_size++;
	}

	//Push the elements bash into the stack
	for (int i = 0; i < actual_size; i++)
		lfds711_stack_push((struct lfds711_stack_state *)s, datas[i]);
	
	free(datas);
	return found;
}
