void check(struct lfds711_stack_state *ss){
int ids[3];
int size = dump_structure(ss,3,ids);
assert((size == 1 && ids[0]==1) || (size == 1 && ids[2]==1) || (is_empty(ss)));
}
