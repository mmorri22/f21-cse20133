/**********************************************
* File: euclidFuncs.c
* Author: Matthew Morrisonsta
* Email: matt.morrison@nd.edu
* 
* Contains the function definitions for the euclid structs example 
**********************************************/

#include "euclidFuncs.h"

/********************************************
* Function Name  : PrintGreeting
* Pre-conditions : void
* Post-conditions: none
* 
* Prints a greeting to the user 
********************************************/
void PrintGreeting (void) {
	fprintf(stdout, "This example uses both struct points and struct lines, making\n");
	fprintf(stdout, "use of nested structures to model points & line segments.\n");
	fprintf(stdout, "It also shows functions that take structs as arguments and\n");
	fprintf(stdout, "that return structs.\n\n");
}

/********************************************
* Function Name  : PrintLine
* Pre-conditions : LINE* l
* Post-conditions: none
* 
* Prints the LINE values to the user 
********************************************/
void PrintLine (LINE* l) {
	
	fprintf(stdout, "(%.1f,%.1f)=>(%.1f,%.1f)", 
		l->origin.x, (*l).origin.y, 
		(*l).destin.x, l->destin.y);
		
}


/********************************************
* Function Name  : ReverseLine
* Pre-conditions : LINE* theLine
* Post-conditions: none
* 
* This function takes in a pointer to a line struct
* and reverses the origin and destination 
********************************************/
void ReverseLine(LINE* theLine) {
	
   POINT temp;

   temp = theLine->origin;
   (*theLine).origin = theLine->destin;
   theLine->destin = temp;

}


