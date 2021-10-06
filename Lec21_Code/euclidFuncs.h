/**********************************************
* File: euclidFuncs.h
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* Contains the function declarations and structs for the euclid structs example 
**********************************************/

#ifndef EUCLIDFUNCS_H
#define EUCLIDFUNCS_H

#include <stdio.h>

typedef float COORDINATE;

/* Point Struct Definition */
typedef struct point{
	
	COORDINATE x; /* x coordinate */
	COORDINATE y; /* y coordinate */
	
}POINT;

/* Line Struct Definition */
typedef struct line{
	
	POINT origin;
	POINT destin;
	
}LINE;


/********************************************
* Function Name  : ReverseLine
* Pre-conditions : LINE* theLine
* Post-conditions: none
* 
* This function takes in a pointer to a line struct
* and reverses the origin and destination 
********************************************/
void ReverseLine(LINE* theLine);


/********************************************
* Function Name  : PrintGreeting
* Pre-conditions : void
* Post-conditions: none
* 
* Prints a greeting to the user 
********************************************/
void PrintGreeting (void);


/********************************************
* Function Name  : PrintLine
* Pre-conditions : LINE* l
* Post-conditions: none
* 
* Prints the LINE values to the user 
********************************************/
void PrintLine (LINE* l);

#endif

