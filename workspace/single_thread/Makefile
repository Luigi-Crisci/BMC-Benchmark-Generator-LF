all: single_thread_test

CC := gcc
CCFLAGS := -g -Wall
LIBS = -llfds711
PREP = -E -P
PREP_FILENAME = prep_single_thread_test.c 


.c.o:
	$(CC) $(CCFLAGS) -c $< -o $@

single_thread_test: single_thread_test.o
				$(CC) $(CCFLAGS) -o $@ $? $(LIBS)

preprocessed: single_thread_test.c
			$(CC) $(PREP) $? -o $(PREP_FILENAME)

clean: 
		rm *.o
		rm single_thread_test