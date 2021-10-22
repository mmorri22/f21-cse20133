# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 - Lecture 25

# G++ is for the GCC compiler for C++
PP := gcc

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Werror 
CXXFLAGS := -std=c11 $(FLAGS)


# Command: make NDFightSongFSM
NDFightSongFSMObjs := NDFightSongFSM.o

NDFightSongFSM: $(NDFightSongFSMObjs)
	$(PP) $(CXXFLAGS) -o NDFightSongFSM $(NDFightSongFSMObjs)

NDFightSongFSM.o: NDFightSongFSM.c
	$(PP) $(CXXFLAGS) -c NDFightSongFSM.c -o $@


# Command: make Moore
MooreObjs := Moore.o

Moore: $(MooreObjs)
	$(PP) $(CXXFLAGS) -o Moore $(MooreObjs)

Moore.o: Moore.c
	$(PP) $(CXXFLAGS) -c Moore.c -o $@
	


# Make all
all: NDFightSongFSM Moore


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize: 
	mkdir objects executables

# Make clean
clean :
	rm -rf *.o NDFightSongFSM Moore
