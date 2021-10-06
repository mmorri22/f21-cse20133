/**********************************************
* File: typeDef.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an initial example of nested C structrs
* with respect to a point coordinate and introduction to typedef
**********************************************/
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
void ReverseLine(LINE* theLine) {
   POINT temp;

   temp = theLine->origin;
   (*theLine).origin = theLine->destin;
   theLine->destin = temp;

}


/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){

	POINT point1 = {(COORDINATE)3.1, (float)6.2};
	POINT point2 = {(float)-1.1, (COORDINATE)5.3};
	
	LINE theLine = {point2, point1};
		
	fprintf(stdout, "point1 is (%.1f, %.1f)\n", theLine.origin.x, theLine.origin.y);
	fprintf(stdout, "point2 is (%.1f, %.1f)\n", theLine.destin.x, theLine.destin.y);
	
	ReverseLine(&theLine);
	
	fprintf(stdout, "point1 is (%.1f, %.1f)\n", theLine.origin.x, theLine.origin.y);
	fprintf(stdout, "point2 is (%.1f, %.1f)\n", theLine.destin.x, theLine.destin.y);

	return 0;
}
