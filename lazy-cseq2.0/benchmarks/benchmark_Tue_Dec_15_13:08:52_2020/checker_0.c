void check(struct lfds711_stack_state *ss){
int ids[4];
int size = dump_structure(ss,4,ids);
assert((size == 4 && ids[0]==1 && ids[1]==1 && ids[2]==1 && ids[3]==1));
}
