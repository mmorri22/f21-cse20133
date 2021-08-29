# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for Programming Challenge 01

# CC is for the gcc compiler for C
CC := gcc

# CFLAGS are the required compiler flags for the CSE 20133 course
CFLAGS := -Wall -Wextra -Wconversion -Werror -lm


# Compilation for the Prob1 program
# Command: make Prob1
Prob1: Prob1.o
	$(CC) $(CFLAGS) -o Prob1 Prob1.o

Prob1.o: Prob1.c
	$(CC) $(CFLAGS) -c Prob1.c


# Compilation for the Prob2 program
# Command: make Prob2
Prob2: Prob2.o
	$(CC) $(CFLAGS) -o Prob2 Prob2.o

Prob2.o: Prob2.c
	$(CC) $(CFLAGS) -c Prob2.c


# Compilation for the Prob3 program
# Command: make Prob3
Prob3: Prob3.o
	$(CC) $(CFLAGS) -o Prob3 Prob3.o

Prob3.o: Prob3.c
	$(CC) $(CFLAGS) -c Prob3.c


# Compilation for the Prob4 program
# Command: make Prob4
Prob4: Prob4.o
	$(CC) $(CFLAGS) -o Prob4 Prob4.o

Prob4.o: Prob4.c
	$(CC) $(CFLAGS) -c Prob4.c


# Compilation for the Prob5 program
# Command: make Prob5
Prob5: Prob5.o
	$(CC) $(CFLAGS) -o Prob5 Prob5.o

Prob5.o: Prob5.c
	$(CC) $(CFLAGS) -c Prob5.c

clean:
	rm -rf a.out *.o Prob1 Prob2 Prob3 Prob4 Prob5
