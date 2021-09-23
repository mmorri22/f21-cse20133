# Name: Howard Duck
# Email: ewb@nd.edu
# File Name: Makefile
#
# Date: September 20, 2021
#
# This contains the Make commands for Lecture 13

CC := gcc
PP := g++

FLAGS := -Wall -Wextra -Wconversion -Werror -O2 -g -lm

CFLAGS := $(FLAGS) -std=c11
CPPFLAGS := $(FLAGS) -std=c++11 -Weffc++

sudoku.o: sudoku.c
	$(CC) $(CFLAGS) -c sudoku.c
	
main.o: main.c
	$(CC) $(CFLAGS) -c main.c
	
suduko_objs := main.o sudoku.o

sudoku: $(suduko_objs)
	$(CC) $(CFLAGS) -o sudoku $(suduko_objs)
	
	
# main_final.c, sudoku_final.c, sudoku_final.h 

main_final.o: main_final.c 
	$(CC) $(CFLAGS) -c main_final.c 
	
sudoku_final.o: sudoku_final.c 
	$(CC) $(CFLAGS) -c sudoku_final.c 
	
sudoku_final_objs := main_final.o sudoku_final.o

sudoku_final: $(sudoku_final_objs)
	$(CC) $(CFLAGS) -o sudoku_final $(sudoku_final_objs)