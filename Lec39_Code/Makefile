# This is the Makefile for the CSE 20133 - Lecture 39

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


# Command: make Lab11
PolymorphObjs := Polymorph.o BinNode.o NumNode.o AddNode.o SubNode.o DivNode.o MultNode.o

Polymorph: $(PolymorphObjs)
	$(PP) $(CXXFLAGS) -o Polymorph $(PolymorphObjs)

Polymorph.o: Polymorph.cpp
	$(PP) $(CXXFLAGS) -c Polymorph.cpp -o $@

BinNode.o: BinNode.cpp 
	$(PP) $(CXXFLAGS) -c BinNode.cpp

NumNode.o: NumNode.cpp
	$(PP) $(CXXFLAGS) -c NumNode.cpp

AddNode.o: AddNode.cpp
	$(PP) $(CXXFLAGS) -c AddNode.cpp

SubNode.o: SubNode.cpp
	$(PP) $(CXXFLAGS) -c SubNode.cpp

DivNode.o: DivNode.cpp
	$(PP) $(CXXFLAGS) -c DivNode.cpp

MultNode.o: MultNode.cpp
	$(PP) $(CXXFLAGS) -c MultNode.cpp


# Make all
all: Polymorph


# Make clean
clean :
	rm -rf *.o Polymorph
