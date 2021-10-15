# Name: Howard Duck
# Email: ewb@nd.edu
# File Name: Makefile
#
# Date: September 20, 2021
#
# This contains the Make commands for Lecture 24

CC := gcc

FLAGS := -Wall -Wextra -Wconversion -Werror -O2 -g -lm

CFLAGS := $(FLAGS) -std=c11

# make fib 
# Initial Fibonacci Solver
fib.o: fib.c 
	$(CC) $(CFLAGS) -c fib.c 
	
fib_objs := fib.o

fib: $(fib_objs)
	$(CC) $(CFLAGS) -o fib $(fib_objs)

# make fib_memo 
# Fibonacci Solver with Array
fib_memo.o: fib_memo.c 
	$(CC) $(CFLAGS) -c fib_memo.c 
	
fib_memo_objs := fib_memo.o

fib_memo: $(fib_memo_objs)
	$(CC) $(CFLAGS) -o fib_memo $(fib_memo_objs)	
	
# make sllist 
# Final Singly Linked List
sllist.o: sllist.c 
	$(CC) $(CFLAGS) -c sllist.c 
	
sllist_objs := sllist.o

sllist: $(sllist_objs)
	$(CC) $(CFLAGS) -o sllist $(sllist_objs)
	

# make sudoku 
# Final Sudoku Solver
sudoku_func.o: sudoku_func.c 
	$(CC) $(CFLAGS) -c sudoku_func.c 
	
sudoku.o: sudoku.c 
	$(CC) $(CFLAGS) -c sudoku.c 
	
sudoku_objs := sudoku.o sudoku_func.o

sudoku: $(sudoku_objs)
	$(CC) $(CFLAGS) -o sudoku $(sudoku_objs)


# make clean
clean:
	rm -rf *.o fib fib_memo sllist sudoku