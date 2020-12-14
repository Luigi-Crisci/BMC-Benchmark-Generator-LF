void check(struct lfds711_stack_state *ss){
int ids[1];
int size = dump_structure(ss,1,ids);
assert((size == 1 && ids[0]==1));
}
