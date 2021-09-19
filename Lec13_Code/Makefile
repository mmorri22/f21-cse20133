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
	
	
# Make Clean 
# -rf means Recursively Force
clean:
	rm -rf *.o sudoku_01



