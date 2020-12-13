#include <assert.h>
void check(void* ss){
	int size = 0;
	assert((size == 1) && (contains(ss,2)) || (size == 1) && (contains(ss,2)));
}
