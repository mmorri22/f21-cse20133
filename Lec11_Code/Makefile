# Name: Howard Duck
# Email: duck@nd.edu
#
# This contains the compilation commands for Lecture 11

CC := gcc

CFLAGS := -O2 -g -std=c11 -Wall -Wextra -Wconversion -Werror

ducklib.o : ducklib.c 
	$(CC) $(CFLAGS) -c ducklib.c 
	
ewb.o : ewb.c 
	$(CC) $(CFLAGS) -c ewb.c 
	
ewb_objs := ewb.o ducklib.o

ewb: $(ewb_objs)
	$(CC) $(CFLAGS) -o ewb $(ewb_objs)
	
	
villain.o : villain.c 
	$(CC) $(CFLAGS) -c villain.c 
	
villain_objs := villain.o ducklib.o

villain: $(villain_objs)
	$(CC) $(CFLAGS) -o villain $(villain_objs)
	
	
maggie_wifey.o : maggie_wifey.c 
	$(CC) $(CFLAGS) -c maggie_wifey.c 
	
maggie_wifey: maggie_wifey.o
	$(CC) $(CFLAGS) -o maggie_is_my_hero maggie_wifey.o
	
clean:
	rm -rf *.o ewb maggie_is_my_hero
	