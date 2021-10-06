# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 23

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 


# Command: make voidTypes
# Reviewing the initial allocation of memory
voidTypes: voidTypes.o 
	$(CC) $(CFLAGS) -o voidTypes voidTypes.o

voidTypes.o: voidTypes.c 
	$(CC) $(CFLAGS) -c voidTypes.c



# Command: make voidTypes2
# Reviewing the initial allocation of memory
voidTypes2: voidTypes2.o 
	$(CC) $(CFLAGS) -o voidTypes2 voidTypes2.o

voidTypes2.o: voidTypes2.c 
	$(CC) $(CFLAGS) -c voidTypes2.c



# Command: make voidTypes3
# Reviewing the initial allocation of memory
voidTypes3: voidTypes3.o 
	$(CC) $(CFLAGS) -o voidTypes3 voidTypes3.o

voidTypes3.o: voidTypes3.c 
	$(CC) $(CFLAGS) -c voidTypes3.c



# Command: make voidNode
# Reviewing the initial allocation of memory
voidNode: voidNode.o 
	$(CC) $(CFLAGS) -o voidNode voidNode.o

voidNode.o: voidNode.c 
	$(CC) $(CFLAGS) -c voidNode.c



# Command: make voidNodeBad
# Reviewing the initial allocation of memory
voidNodeBad: voidNodeBad.o 
	$(CC) $(CFLAGS) -o voidNodeBad voidNodeBad.o

voidNodeBad.o: voidNodeBad.c 
	$(CC) $(CFLAGS) -c voidNodeBad.c



# Command: make voidNodeBad2
# Reviewing the initial allocation of memory
voidNodeBad2: voidNodeBad2.o 
	$(CC) $(CFLAGS) -o voidNodeBad2 voidNodeBad2.o

voidNodeBad2.o: voidNodeBad2.c 
	$(CC) $(CFLAGS) -c voidNodeBad2.c



# Command: make structSimple
# Reviewing the initial allocation of memory
structSimple: structSimple.o 
	$(CC) $(CFLAGS) -o structSimple structSimple.o

structSimple.o: structSimple.c 
	$(CC) $(CFLAGS) -c structSimple.c
	
	
# Command: make point
# Shows a fundamental case of initializing and 
# accessing a C struct
point: point.o 
	$(CC) $(CFLAGS) -o point point.o

point.o: point.c 
	$(CC) $(CFLAGS) -c point.c
	
	

# Command: make line
# Shows a fundamental case of initializing and 
# accessing a nested C struct
line: line.o 
	$(CC) $(CFLAGS) -o line line.o

line.o: line.c 
	$(CC) $(CFLAGS) -c line.c	
	
	

# Command: make linePtr
# Shows a fundamental case of initializing and 
# accessing a nested C struct using struct pointers
linePtr: linePtr.o 
	$(CC) $(CFLAGS) -o linePtr linePtr.o

linePtr.o: linePtr.c 
	$(CC) $(CFLAGS) -c linePtr.c	
	
	
	
# Command: make typeDef
# Shows a fundamental case of initializing and 
# accessing a nested C struct using struct pointers
# and introduces typedef
typeDef: typeDef.o 
	$(CC) $(CFLAGS) -o typeDef typeDef.o

typeDef.o: typeDef.c 
	$(CC) $(CFLAGS) -c typeDef.c	
	


# Command: make euclid

euclidObjs := euclid.o euclidFuncs.o

euclid: $(euclidObjs)
	$(CC) $(CFLAGS) -o euclid $(euclidObjs)
	
euclid.o: euclid.c euclidFuncs.h
	$(CC) $(CFLAGS) -c euclid.c	

euclidFuncs.o: euclidFuncs.c euclidFuncs.h
	$(CC) $(CFLAGS) -c euclidFuncs.c	


# Make all
all: point line linePtr typeDef euclid

# Make clean
clean :
	rm -rf *.o voidTypes voidTypes2 voidTypes3 voidNodeBad voidNodeBad2 point line linePtr typeDef euclid
