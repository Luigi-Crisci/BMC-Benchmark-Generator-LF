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

struct lfds711_stack_state* init()
{
	lfds711_stack_init_valid_on_current_logical_core(&mystack, NULL);
	return &mystack;
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
	int res = lfds711_stack_pop((struct lfds711_stack_state *)s, &se);

	if (res != 0)
		free(LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*se));
	return res;
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

/**
 * Dump the structure: initialize a vector ids with all the id presents in the structure
 * THIS METHOD INVALIDATE THE STRUCTURE
 */
int dump_structure(struct lfds711_stack_state *s, int size, int* ids){
	int res = 1, data_structure_size = 0;
	struct test_data* data;
	struct lfds711_stack_element *se;

	while (res != 0)
	{
		res = lfds711_stack_pop(s, &se);
		if (res == 0)
			return data_structure_size;
		
		data_structure_size = data_structure_size + 1;
		data = LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*se);
		unsigned long long int id_found = data->user_id;
		ids[data->user_id] = 1;
		free(data);
	}

	return data_structure_size;
}