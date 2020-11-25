#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "../library.c"



int main(){
	struct lfds711_stack_state stack;	
	struct lfds711_stack_element element,element2,element3;
	struct coppia *c,*c1,*c2;

	lfds711_stack_init_valid_on_current_logical_core(&stack,NULL);

	c = (struct coppia*)malloc(sizeof(struct coppia));
	c->y = 1;
	c->x = 2;
	

	LFDS711_STACK_SET_VALUE_IN_ELEMENT(element,c);
	int aaa = ((struct coppia*)LFDS711_STACK_GET_VALUE_FROM_ELEMENT(element))->x;
	lfds711_stack_push(&stack,&element);

	c1 = (struct coppia*)malloc(sizeof(struct coppia));
	c1->y = 4;
	c1->x = 4;
	

	LFDS711_STACK_SET_VALUE_IN_ELEMENT(element2,c1);
	lfds711_stack_push(&stack,&element2);

	c2 = (struct coppia*)malloc(sizeof(struct coppia));
	c2->y = 6;
	c2->x = 6;
	

	LFDS711_STACK_SET_VALUE_IN_ELEMENT(element3,c2);
	lfds711_stack_push(&stack,&element3);

	struct lfds711_stack_element *e;
	int res = lfds711_stack_pop(&stack,&e);
	struct coppia *result = (struct coppia*)LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*e); 
	printf("Result %d : %d\n",result->x,result->y);

	int s = result->x;
	assert(s == 6);
	//assert(0);
	return 0;

	
}