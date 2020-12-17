void check(struct lfds711_stack_state *ss){
int ids[3];
int size = dump_structure(ss,3,ids);
assert((is_empty(ss)));
}
