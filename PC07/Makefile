# Author: [Your Names]
# E-mail: [Your Email]
#
# This is the Makefile for Programming Challenge 07 - CSE 20133

# gcc is for the compiler for C
PP := gcc

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -Werror -lm
CFLAGS := -std=c11 $(FLAGS)

	
	
# Create the Left Rotate Function Object
bst.o: bst.c
	$(PP) $(CFLAGS) -c bst.c -o $@
	
	
# Create the PC07 object
PC07.o: PC07.c
	$(PP) $(CFLAGS) -c PC07.c -o $@
	
	
# Singly Linked List Objects
PC07_objs := bst.o PC07.o


# Singly Linked List Executable and Run
PC07: $(PC07_objs)
	$(PP) $(CFLAGS) -o PC07 $(PC07_objs)
	
	
# Make clean
clean:
	rm -rf *.o PC07