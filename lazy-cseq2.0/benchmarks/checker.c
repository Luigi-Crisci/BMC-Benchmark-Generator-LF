#include <assert.h>
void check(void* ss){
unsigned long int size = 14;
long unsigned int c0 = contains(ss,0);
long unsigned int c2 = contains(ss,2);
assert((size == 2 && c0 && c2));
}
