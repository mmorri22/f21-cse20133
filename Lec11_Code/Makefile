# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for Lecture 05

# CC is for the gcc compiler for C 
CC := gcc

# CFLAGS are the required compiler flags for the CSE 20133 course 
CFLAGS := -Wall -Wextra -Wconversion -Werror


# Compilation for the maggie_wifey program 
# Command: make maggie_wifey 
maggie_wifey: maggie_wifey.o
	$(CC) $(CFLAGS) -o maggie_is_my_hero maggie_wifey.o

maggie_wifey.o: maggie_wifey.c
	$(CC) $(CFLAGS) -c maggie_wifey.c

clean:
	rm -rf a.out *.o maggie_is_my_hero
