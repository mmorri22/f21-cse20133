# Author: [Your Names]
# E-mail: [Your Email]
#
# This is the Makefile for Programming Challenge 08 - CSE 20133

# gcc is for the compiler for C
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -Werror -lm
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)
	
	
# Max Sub Brute Force Approach
max_sub_brute.o: max_sub_brute.cpp
	$(PP) $(CXXFLAGS) -c max_sub_brute.cpp -o $@

# Max Sub Brute Force Approach
max_sub_brute: max_sub_brute.o
	$(PP) $(CXXFLAGS) -o max_sub_brute max_sub_brute.o


# Max Sub Dynamic Force Approach
max_sub_dyn.o: max_sub_dyn.cpp
	$(PP) $(CXXFLAGS) -c max_sub_dyn.cpp -o $@

# Max Sub Dynamic Force Approach
max_sub_dyn: max_sub_dyn.o
	$(PP) $(CXXFLAGS) -o max_sub_dyn max_sub_dyn.o


# Max Product Subarray Approach
max_prod_sub.o: max_prod_sub.cpp
	$(PP) $(CXXFLAGS) -c max_prod_sub.cpp -o $@

# Max Product Subarray Approach
max_prod_sub: max_prod_sub.o
	$(PP) $(CXXFLAGS) -o max_prod_sub max_prod_sub.o
	
# Make clean
clean:
	rm -rf *.o max_prod_sub max_sub_brute max_sub_brute