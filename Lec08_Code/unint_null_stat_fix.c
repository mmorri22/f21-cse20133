/**********************************************
* File: unintNullFix.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains a FIXED example of an unintentional
* NULL statement to help the new coder troubleshoot 
* Compare to unintNull.c line 19
**********************************************/
#include "stdio.h"

int main(void){

	int i = 10;

	/* an unintentional null statement */
	/* ; Removed from the while statement */
	/* Now performs as expected */
	while (i > 0)	
	{
		fprintf (stdout, "The value of i is %d\n", i);
		i--;
	}

	return 0;
}

