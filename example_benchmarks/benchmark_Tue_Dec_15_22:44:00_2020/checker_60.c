void check(struct lfds711_stack_state *ss){
int ids[2];
int size = dump_structure(ss,2,ids);
assert((size == 1 && ids[1]==1) || (size == 2 && ids[0]==1 && ids[1]==1) || (size == 1 && ids[0]==1) || (is_empty(ss)));
}
