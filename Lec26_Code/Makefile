# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 26

# GCC is for the GCC compiler for C
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Werror -lm
CFLAGS := -std=c11 $(FLAGS)



# Merge Sort - Part 1
# Command: make merge1
merge1Objs := merge1.o

merge1: $(merge1Objs)
	$(CC) $(CFLAGS) -o merge1 $(merge1Objs)

merge1.o: merge1.c
	$(CC) $(CFLAGS) -c merge1.c


# Merge Sort - Part 2
# Command: make merge2
merge2Objs := merge2.o

merge2: $(merge2Objs)
	$(CC) $(CFLAGS) -o merge2 $(merge2Objs)

merge2.o: merge2.c
	$(CC) $(CFLAGS) -c merge2.c



# Merge Sort - Part 3
# Command: make merge3
merge3Objs := merge3.o

merge3: $(merge3Objs)
	$(CC) $(CFLAGS) -o merge3 $(merge3Objs)

merge3.o: merge3.c
	$(CC) $(CFLAGS) -c merge3.c


# Merge Sort - Part 4
# Command: make merge4
merge4Objs := merge4.o

merge4: $(merge4Objs)
	$(CC) $(CFLAGS) -o merge4 $(merge4Objs)

merge4.o: merge4.c
	$(CC) $(CFLAGS) -c merge4.c



# Merge Sort Final
# Command: make merge
mergeObjs := merge.o SortSearch.o

merge: $(mergeObjs)
	$(CC) $(CFLAGS) -o merge $(mergeObjs)

merge.o: merge.c SortSearch.h
	$(CC) $(CFLAGS) -c merge.c

SortSearch.o: SortSearch.c SortSearch.h
	$(CC) $(CFLAGS) -c SortSearch.c


# Search for elements
# Command: make search
searchObjs := search.o SortSearch.o

search: $(searchObjs)
	$(CC) $(CFLAGS) -o search $(searchObjs)

search.o: search.c SortSearch.h
	$(CC) $(CFLAGS) -c search.c

# SortSearch directive already written. No need to re-write


# Make all
all: merge1 merge2 merge3 merge4 merge search

# Make clean
clean :
	rm -rf *.o merge1 merge2 merge3 merge4 merge search
