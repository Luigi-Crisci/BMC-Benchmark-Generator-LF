all: stack_no_while stack_with_while

CC := gcc
CCFLAGS := -g -Wall
LIBS = -llfds711 -lpthread 
PREP = -E -P

.c.o:
	$(CC) $(CCFLAGS) -c $< -o $@

stack_with_while: stack_with_while.o
				$(CC) $(CCFLAGS) -o $@ $? $(LIBS)

stack_no_while: stack_no_while.o
				$(CC) $(CCFLAGS) -o $@ $? $(LIBS)

preprocessed_stack_no_while.c: stack_no_while.c
				$(CC) $(PREP) -o $@ $? $(LIBS)

preprocessed_stack_no_while: preprocessed_stack_no_while.o
				$(CC) $(CCFLAGS) -o $@ $? $(LIBS)

preprocessed_stack_with_while.c: stack_with_while.c
				$(CC) $(PREP) -o $@ $? $(LIBS)

preprocessed_stack_with_while: preprocessed_stack_with_while.o
				$(CC) $(CCFLAGS) -o $@ $? $(LIBS)

clean: 
		rm *.o
		rm stack_no_while
		rm stack_with_while