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
	

# First Example of Command Line
# Command: make helloCmdLine
helloCmdLine: helloCmdLine.o 
	$(CC) $(CFLAGS) -o helloCmdLine helloCmdLine.o

helloCmdLine.o: helloCmdLine.c 
	$(CC) $(CFLAGS) -c helloCmdLine.c


# Test Suite for helloCmdLine 
testHello:
	make helloCmdLine
	chmod +x hello.sh
	./hello.sh



# Command: make factHeaderEx 
# First example of compilation from multiple folders 

factHeaderObjs := factHeaderEx.o factorial.o 

factHeaderEx: $(factHeaderObjs)
	$(CC) $(CFLAGS) -o factHeaderEx $(factHeaderObjs)

factHeaderEx.o: factHeaderEx.c $(18)/factorial.h
	$(CC) $(CFLAGS) -c factHeaderEx.c
	
	
	
	
# Command: make factCmdLine 
# First example of compilation from multiple folders 
# and using the command line 

factHeaderObjs := factCmdLine.o factorial.o 

factCmdLine: $(factHeaderObjs)
	$(CC) $(CFLAGS) -o factCmdLine $(factHeaderObjs)

factCmdLine.o: factCmdLine.c factorial.h
	$(CC) $(CFLAGS) -c factCmdLine.c

factorial.o: factorial.c factorial.h
	$(CC) $(CFLAGS) -c factorial.c


testFactCmd:
	make factCmdLine
	chmod +x factCmdLine.sh
	./factCmdLine.sh
	

# Command: make filePtrEx
# First example of creating a File pointer
filePtrEx: filePtrEx.o 
	$(CC) $(CFLAGS) -o filePtrEx filePtrEx.o

filePtrEx.o: filePtrEx.c  
	$(CC) $(CFLAGS) -c filePtrEx.c



# Command: make filePtrExBad
# First example of creating a File pointer
# This code will produce a segmentation fault since the 
# file pointer for fileDNE did not exist, so it is NULL
# De-allocating a NULL file ptr will seg fault
filePtrExBad: filePtrExBad.o 
	$(CC) $(CFLAGS) -o filePtrExBad filePtrExBad.o

filePtrExBad.o: filePtrExBad.c 
	$(CC) $(CFLAGS) -c filePtrExBad.c



# Command: make filePtrPrint
# Prints the ASCII values to the screen
# Shows the student what a file actually contains
filePtrPrint: filePtrPrint.o 
	$(CC) $(CFLAGS) -o filePtrPrint filePtrPrint.o

filePtrPrint.o: filePtrPrint.c 
	$(CC) $(CFLAGS) -c filePtrPrint.c
	


# Command: make factSTDIN
# Calculate a factorial using double 
# Reads from the input line stdin
# Using Header Files. Also, student's first use of 
# compiling files from a different directory

# Object Files to be created in this directory 
factSTDINObjs := factSTDIN.o factorial.o 

# Make command 
factSTDIN: $(factSTDINObjs)
	$(CC) $(CFLAGS) -o factSTDIN $(factSTDINObjs) 

# Each object file individually created 
factSTDIN.o: factSTDIN.c $(09)/factorial.h 
	$(CC) $(CFLAGS) -c factSTDIN.c
	
	


# Make all
all: strcpy strcpy2 strcat stackSmash1 stackSmash stackSmashFinal Ovaltine OvaltineBad OvaltineFunc helloCmdLine factCmdLine filePtrEx filePtrExBad factSTDIN

# Make clean
clean :
	rm -rf *.o strcpy strcpy2 strcat stackSmash1 stackSmash stackSmashFinal Ovaltine OvaltineBad OvaltineFunc  helloCmdLine factCmdLine filePtrEx filePtrExBad factSTDIN
