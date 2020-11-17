all: stack_no_while stack_with_while

CC := gcc
CCFLAGS := -g -Wall
LIBS = -llfds711 -lpthread 


.c.o:
	$(CC) $(CCFLAGS) -c $< -o $@

stack_with_while: stack_with_while.o
				$(CC) $(CCFLAGS) -o $@ $? $(LIBS)

stack_no_while: stack_no_while.o
				$(CC) $(CCFLAGS) -o $@ $? $(LIBS)

clean: 
		rm *.o
		rm stack_no_while
		rm stack_with_while