# This is the Makefile for the CSE 20133 - HW08

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


# Command: make Lab11
HW08Objs := HW08.o BinNode.o NumNode.o AddNode.o SubNode.o DivNode.o MultNode.o

HW08: $(HW08Objs)
	$(PP) $(CXXFLAGS) -o HW08 $(HW08Objs)

HW08.o: HW08.cpp
	$(PP) $(CXXFLAGS) -c HW08.cpp -o $@

BinNode.o: BinNode.cpp BinNode.h Node.h
	$(PP) $(CXXFLAGS) -c BinNode.cpp

NumNode.o: NumNode.cpp NumNode.h BinNode.h
	$(PP) $(CXXFLAGS) -c NumNode.cpp

AddNode.o: AddNode.cpp AddNode.h
	$(PP) $(CXXFLAGS) -c AddNode.cpp

SubNode.o: SubNode.cpp SubNode.h
	$(PP) $(CXXFLAGS) -c SubNode.cpp

DivNode.o: DivNode.cpp DivNode.h
	$(PP) $(CXXFLAGS) -c DivNode.cpp

MultNode.o: MultNode.cpp MultNode.h
	$(PP) $(CXXFLAGS) -c MultNode.cpp


# Make all
all: HW08


# Make clean
clean :
	rm -rf *.o HW08
