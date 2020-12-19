void check(struct lfds711_stack_state *ss){
int ids[2];
int size = dump_structure(ss,2,ids);
assert((is_empty(ss)));
}
