void check(struct lfds711_stack_state *ss){
int ids[6];
int size = dump_structure(ss,6,ids);
assert((size == 6 && ids[0]==1 && ids[1]==1 && ids[2]==1 && ids[3]==1 && ids[4]==1 && ids[5]==1));
}
