# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20312 - Lecture 34

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)



# Command: make IrishTest
# Base class for First Inheritance Example
IrishTestObjs := IrishTest.o Irish.o 

IrishTest: $(IrishTestObjs)
	$(PP) $(CXXFLAGS) -o IrishTest $(IrishTestObjs)
	./IrishTest

IrishTest.o: IrishTest.cpp Irish.h
	$(PP) $(CXXFLAGS) -c IrishTest.cpp -o $@

Irish.o: Irish.cpp Irish.h
	$(PP) $(CXXFLAGS) -c Irish.cpp -o $@



# Command: make Inherit 
# Derived Classes for First Inheritance Example 
InheritObjs := Inherit.o Faculty.o Student.o Irish.o

Inherit: $(InheritObjs)
	$(PP) $(CXXFLAGS) -o Inherit $(InheritObjs)
	./Inherit

# Inherit.cpp class both derived classes
Inherit.o: Inherit.cpp Student.h Faculty.h
	$(PP) $(CXXFLAGS) -c Inherit.cpp -o $@

# Faculty inherits Irish
Faculty.o: Faculty.cpp Faculty.h Irish.h
	$(PP) $(CXXFLAGS) -c Faculty.cpp -o $@

# Student inherits Irish
Student.o: Student.cpp Student.h Irish.h
	$(PP) $(CXXFLAGS) -c Student.cpp -o $@

# Irish.o is already created in the Base Class
	


# Command: make Inherit2
# Example of this object in Inheritance Example 
Inherit2Objs := Inherit2.o Faculty.o Student.o Irish.o

Inherit2: $(Inherit2Objs)
	$(PP) $(CXXFLAGS) -o Inherit2 $(Inherit2Objs)
	./Inherit2

# Inherit.cpp class both derived classes
Inherit2.o: Inherit2.cpp Student.h Faculty.h
	$(PP) $(CXXFLAGS) -c Inherit2.cpp -o $@

# Irish.o, Student.o, and Faculty.o are already created in make Inherit
	

# Make all
all: IrishTest Inherit Inherit2


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize: 
	mkdir objects executables

# Make clean
clean :
	rm -rf *.o IrishTest Inherit Inherit2
