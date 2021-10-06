/**********************************************
* File: euclid.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This program combines the concepts of structs and typedef
* with header files, our knowledge of floats and the computing 
* device, and pass by value and pass by reference
**********************************************/


#include "euclidFuncs.h"

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main (void) {

   PrintGreeting();

	/* Initialize variables */
   POINT p1 = {(COORDINATE)-1.1, (COORDINATE)-2.2};
   POINT p2 = {(COORDINATE)1.1, (COORDINATE)2.2};
   LINE line1;
   LINE line2;

	/* Print the initial values */
   fprintf(stdout,"Initial values: p1 is (%.1f,%.1f), p2 is (%.1f,%.1f)\n", 
           p1.x, p1.y, p2.x, p2.y);

   p1 = p2;

   fprintf(stdout,"After p1=p2: p1 is (%.1f,%.1f), p2 is (%.1f,%.1f)\n",
           p1.x, p1.y, p2.x, p2.y);

   p2.x = 100;
   p2.y = 200;

   fprintf(stdout,"After modifying p2: p1=(%.1f,%.1f), p2=(%.1f,%.1f)\n",
           p1.x, p1.y, p2.x, p2.y);

   p1.x = -100;
   p1.y = -200;

   fprintf(stdout,"After modifying p1: p1=(%.1f,%.1f), p2=(%.1f,%.1f)\n",
           p1.x, p1.y, p2.x, p2.y);

   fprintf(stdout,"\nLines...\n");

   line1.origin = p1;
   line1.destin = p2;

   ReverseLine(&line1);

   fprintf(stdout,"line1:"); 
   PrintLine(&line1);
   fprintf(stdout," line2:"); 
   PrintLine(&line2);
   fprintf(stdout,"\n");
   
   line2 = line1;

   fprintf(stdout,"After line2 = line1, line1:");
   PrintLine(&line1);
   
   fprintf(stdout," line2:"); 
   PrintLine(&line2);
   
   fprintf(stdout,"\n");

   line2.destin.x = 999;

   fprintf(stdout,"After line2.destin.x = 999,\nline1:");
   PrintLine(&line1);
   fprintf(stdout," line2:"); 
   
   PrintLine(&line2);
   fprintf(stdout,"\n");

   return 0;
}
