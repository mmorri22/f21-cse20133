/**********************************************
* File: unintNull.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an example of an unintentional
* NULL statement to help the new coder troubleshoot 
**********************************************/
#include "stdio.h"

int main(void){

	int i = 10;

	/* an unintentional null statement */
	/* This ; is a null statement. */
	/* The actually logic is while i > 0, do nothing */
	/* Coder expects loop, code does absolutely nothing and hangs */
	while (i > 0);  	
	{
		fprintf (stdout, "The value of i is %d\n", i);
		i--;
	}

	return 0;
}

