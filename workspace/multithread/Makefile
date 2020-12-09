all: stack_with_while.out preprocessed_stack_with_while.out

CC := gcc
CCFLAGS := -g -Wall
LIBS = -llfds711 -lpthread 
PREP = -E -P

.c.o:
	$(CC) $(CCFLAGS) -c $< -o $@

stack_with_while.out: stack_with_while.o
				$(CC) $(CCFLAGS) -o $@ $? $(LIBS)

generalized.out: generalized.o
				$(CC) $(CCFLAGS) -o $@ $? $(LIBS)

preprocessed_stack_with_while.out: preprocessed_stack_with_while.o
				$(CC) $(CCFLAGS) -o $@ $? $(LIBS)

preprocessed_stack_with_while.c: stack_with_while.c
				$(CC) $(PREP) -o $@ $? $(LIBS)

# stack_no_while.out: stack_no_while.o
# 				$(CC) $(CCFLAGS) -o $@ $? $(LIBS)

# preprocessed_stack_no_while.c: stack_no_while.c
# 				$(CC) $(PREP) -o $@ $? $(LIBS)

# preprocessed_stack_no_while.out: preprocessed_stack_no_while.o
# 				$(CC) $(CCFLAGS) -o $@ $? $(LIBS)

clean: 
		rm *.o
		rm *.out