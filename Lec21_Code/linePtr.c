/**********************************************
* File: linePtr.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an initial example of nested C structrs
* with respect to a point coordinate 
**********************************************/
#include <stdio.h>


/* Point Struct Definition */
struct point{
	
	float x; /* x coordinate */
	float y; /* y coordinate */
	
};

/* Line Struct Definition */
struct line{
	
	struct point origin;
	struct point destin;
	
};


/********************************************
* Function Name  : ReverseLine
* Pre-conditions : struct line* theLine
* Post-conditions: none
* 
* This function takes in a pointer to a line struct
* and reverses the origin and destination 
********************************************/
void ReverseLine(struct line* theLine) {
   struct point temp;

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

	struct point point1 = {(float)3.1, (float)6.2};
	struct point point2 = {(float)-1.1, (float)5.3};
	
	struct line theLine = {point1, point2};
		
	fprintf(stdout, "point1 is (%.1f, %.1f)\n", theLine.origin.x, theLine.origin.y);
	fprintf(stdout, "point2 is (%.1f, %.1f)\n", theLine.destin.x, theLine.destin.y);
	
	ReverseLine(&theLine);
	
	fprintf(stdout, "point1 is (%.1f, %.1f)\n", theLine.origin.x, theLine.origin.y);
	fprintf(stdout, "point2 is (%.1f, %.1f)\n", theLine.destin.x, theLine.destin.y);

	return 0;
}
