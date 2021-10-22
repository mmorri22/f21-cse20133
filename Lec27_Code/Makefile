# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 19

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 


# Included in this lecture to show the implications of removing flags 
BADFL := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic 


# First Example of size_t
# Command: make sizeTEx
sizeTEx: sizeTEx.o 
	$(CC) $(CFLAGS) -o sizeTEx sizeTEx.o

sizeTEx.o: sizeTEx.c 
	$(CC) $(CFLAGS) -c sizeTEx.c


# First Example of strcat
# Command: make strcat
strcat: strcat.o 
	$(CC) $(CFLAGS) -o strcat strcat.o

strcat.o: strcat.c 
	$(CC) $(CFLAGS) -c strcat.c	



# First Example of strcpy
# Command: make strcpy
strcpy: strcpy.o 
	$(CC) $(CFLAGS) -o strcpy strcpy.o

strcpy.o: strcpy.c 
	$(CC) $(CFLAGS) -c strcpy.c	



# Second Example of strcpy
# Command: make strcpy2
strcpy2: strcpy2.o 
	$(CC) $(CFLAGS) -o strcpy2 strcpy2.o

strcpy2.o: strcpy2.c 
	$(CC) $(CFLAGS) -c strcpy2.c



# Second Example of strcpy
# Command: make strcpy3
strcpy3: strcpy3.o 
	$(CC) $(CFLAGS) -o strcpy3 strcpy3.o

strcpy3.o: strcpy3.c 
	$(CC) $(CFLAGS) -c strcpy3.c



# Stack Smash Example
# Command: make stackSmash1
stackSmash1: stackSmash1.o 
	$(CC) $(CFLAGS) -o stackSmash1 stackSmash1.o

stackSmash1.o: stackSmash1.c 
	$(CC) $(CFLAGS) -c stackSmash1.c	
	


# Stack Smash Example
# Command: make stackSmash
stackSmash: stackSmash.o 
	$(CC) $(BADFL) -o stackSmash stackSmash.o

stackSmash.o: stackSmash.c 
	$(CC) $(BADFL) -c stackSmash.c	



# Stack Smash Example
# Command: make stackSmashFinal
stackSmashFinal: stackSmashFinal.o 
	$(CC) $(BADFL) -o stackSmashFinal stackSmashFinal.o

stackSmashFinal.o: stackSmashFinal.c 
	$(CC) $(BADFL) -c stackSmashFinal.c	
	


# Stack Smash Example
# Command: make stackSmash
stackSmashPQC: stackSmashPQC.o 
	$(CC) $(CFLAGS) -o stackSmashPQC stackSmashPQC.o

stackSmashPQC.o: stackSmash.c 
	$(CC) $(CFLAGS) -c stackSmash.c	



# Ovaltine Comprehensive Example
# Command: make Ovaltine
Ovaltine: Ovaltine.o 
	$(CC) $(CFLAGS) -o Ovaltine Ovaltine.o

Ovaltine.o: Ovaltine.c 
	$(CC) $(CFLAGS) -c Ovaltine.c	



# Ovaltine Bad 
# Command: make OvaltineBad
OvaltineBad: OvaltineBad.o 
	$(CC) $(CFLAGS) -o OvaltineBad OvaltineBad.o

OvaltineBad.o: OvaltineBad.c 
	$(CC) $(CFLAGS) -c OvaltineBad.c	



# Ovaltine Function Example 
# Command: make OvaltineFunc
OvaltineFunc: OvaltineFunc.o 
	$(CC) $(CFLAGS) -o OvaltineFunc OvaltineFunc.o

OvaltineFunc.o: OvaltineFunc.c 
	$(CC) $(CFLAGS) -c OvaltineFunc.c

	
	


# Make all
all: strcpy strcpy2 strcat stackSmash1 stackSmash stackSmashFinal Ovaltine OvaltineBad OvaltineFunc

# Make clean
clean :
	rm -rf *.o strcpy strcpy2 strcat stackSmash1 stackSmash stackSmashFinal Ovaltine OvaltineBad OvaltineFunc
