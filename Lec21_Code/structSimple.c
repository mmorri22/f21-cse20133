/**********************************************
* File: structSimple.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* Taking the code from voidFunc and putting it into
* a C++ struct. voidFunc is the same code, but at 
* a lower level of abstraction. This level is closer
* to object-oriented programming, but does not 
* implement any data hiding.
*
**********************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	
	/* Struct Members */
	double theDbl;
	float theFloat;
	int theInt;
	
} NODE;

/* Struct methods */
void printNodeValues( NODE* theNode ){
	
	fprintf( stdout, "-----------------------------\n");
	fprintf( stdout, "Initial address of the struct: %p\n\n", (void *)theNode );

	// Add 64 bits and print the value and address of the float	
	fprintf( stdout, "Double  : %lf\t at address %p\n", theNode->theDbl, (void *)&(theNode->theDbl) );
	fprintf( stdout, "Float   : %f\t at address %p\n", theNode->theFloat, (void *)&(theNode->theFloat) );
	fprintf( stdout, "Integer : %d\t at address %p\n", theNode->theInt, (void *)&(theNode->theInt) );
	
}

int main(void){
	
	NODE node1 = { -0.625, (float)1.5625, 131 };
	NODE node2 = { -34.77, (float)44.96, 1842 };
	
	// NODE is not a pointer, so we need to use & to get an address
	fprintf( stdout, "NODE 1 is at address %p\n", (void *)&node1 );
	
	// Print Node Values gets a NODE pointer, so we use & to pass by reference
	printNodeValues( &node1 );
	fprintf( stdout, "\n");

	fprintf( stdout, "Node 2 is at address %p\n", (void *)&node2 );

	// Print Node Values gets a NODE pointer, so we use & to pass by reference	
	printNodeValues( &node2 );
	
	return 0;
	
}