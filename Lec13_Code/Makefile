# Author: Matthew Morrison
# Email: matt.morrison@nd.edu 
# File Name: Makefile
# Date Created: 9/18/2021
#
#
# This file contains the Makefile for
# the Sudoku Combined Concepts lecture(s)
####################################################

CC := gcc 
FLAGS := -Wall -Wextra -Wconversion -Werror -g -O2
CFLAGS := $(FLAGS) -std=c11 

# Make Sudoku 01 Objects 
sudoku_01.o: sudoku_01.c
	$(CC) $(CFLAGS) -c sudoku_01.c
	
# Make main_01 Object
main_01.o: main_01.c
	$(CC) $(CFLAGS) -c main_01.c
	
# Objects for 01 compilation
sudoku_01_objects := main_01.o sudoku_01.o

# Make sudoku_01 Executable
sudoku_01: $(sudoku_01_objects)
	$(CC) $(CFLAGS) -o sudoku_01 $(sudoku_01_objects)



# Make Sudoku 02 Objects 
sudoku_02.o: sudoku_02.c
	$(CC) $(CFLAGS) -c sudoku_02.c
	
# Make main_02 Object
main_02.o: main_02.c
	$(CC) $(CFLAGS) -c main_02.c
	
# Objects for 02 compilation
sudoku_02_objects := main_02.o sudoku_02.o

# Make sudoku_02 Executable
sudoku_02: $(sudoku_02_objects)
	$(CC) $(CFLAGS) -o sudoku_02 $(sudoku_02_objects)


# Make Sudoku 03 Objects 
sudoku_03.o: sudoku_03.c
	$(CC) $(CFLAGS) -c sudoku_03.c
	
# Make main_03 Object
main_03.o: main_03.c
	$(CC) $(CFLAGS) -c main_03.c
	
# Objects for 03 compilation
sudoku_03_objects := main_03.o sudoku_03.o

# Make sudoku_03 Executable
sudoku_03: $(sudoku_03_objects)
	$(CC) $(CFLAGS) -o sudoku_03 $(sudoku_03_objects)



# Make Sudoku 04 Objects 
sudoku_04.o: sudoku_04.c
	$(CC) $(CFLAGS) -c sudoku_04.c
	
# Make main_04 Object
main_04.o: main_04.c
	$(CC) $(CFLAGS) -c main_04.c
	
# Objects for 04 compilation
sudoku_04_objects := main_04.o sudoku_04.o

# Make sudoku_04 Executable
sudoku_04: $(sudoku_04_objects)
	$(CC) $(CFLAGS) -o sudoku_04 $(sudoku_04_objects)



# Make Sudoku 05 Objects 
sudoku_05.o: sudoku_05.c
	$(CC) $(CFLAGS) -c sudoku_05.c
	
# Make main_05 Object
main_05.o: main_05.c
	$(CC) $(CFLAGS) -c main_05.c
	
# Objects for 05 compilation
sudoku_05_objects := main_05.o sudoku_05.o

# Make sudoku_05 Executable
sudoku_05: $(sudoku_05_objects)
	$(CC) $(CFLAGS) -o sudoku_05 $(sudoku_05_objects)
	
	
# Make Clean 
# -rf means Recursively Force
clean:
	rm -rf *.o sudoku_01 sudoku_02 sudoku_03 sudoku_04 sudoku_05



