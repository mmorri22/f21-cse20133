/**********************************************
* File: point.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an initial example of C structrs
* with respect to a point coordinate 
**********************************************/
#include <stdio.h>


/* Point Struct Definition */
struct point{
	
	float x; /* x coordinate */
	float y; /* y coordinate */
	
};

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
	
	fprintf(stdout, "point1 is (%.1f, %.1f)\n", point1.x, point1.y);
	
	fprintf(stdout, "point2 is (%.1f, %.1f)\n", point2.x, point2.y);
	
	fprintf(stdout, "The slope between point2 and point1 is: %f\n",
		(point2.y - point1.y)/(point2.x - point1.x));

	return 0;
}
