/**********************************************
* File: line.c
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
	
	void printPoint(){
		fprintf(stdout, "(%f, %f")", x, y);
	}
	
};

/* Line Struct Definition */
struct line{
	
	struct point origin;
	struct point destin;
	
	void printLine(){
		fprintf(stdout, "{ ");		
		origin.printPoint();
		fprintf(stdout, ", ");
		destin.printPoint();
		fprintf(stdout, "}\n");
	}
	
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
	
	struct line theLine = {point1, point2};
		
	fprintf(stdout, "point1 is (%.1f, %.1f)\n", theLine.origin.x, theLine.origin.y);
	
	fprintf(stdout, "point2 is (%.1f, %.1f)\n", theLine.destin.x, theLine.destin.y);
	
	theLine.printLine();
	
	fprintf(stdout, "The slope between point2 and point1 is: %f\n",
		(theLine.destin.y - theLine.origin.y)/(theLine.destin.x - theLine.origin.x));

	return 0;
}
