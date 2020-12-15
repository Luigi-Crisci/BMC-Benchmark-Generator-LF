void check(struct lfds711_stack_state *ss){
int ids[0];
int size = dump_structure(ss,0,ids);
assert((is_empty(ss)));
}
