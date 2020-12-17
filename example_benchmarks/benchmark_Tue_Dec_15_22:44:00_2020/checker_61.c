void check(struct lfds711_stack_state *ss){
int ids[1];
int size = dump_structure(ss,1,ids);
assert((is_empty(ss)));
}
