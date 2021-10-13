/**********************************************
* File: multiple.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file shows that the user that we can read in 
* multiple integers from a file
**********************************************/

#include <stdio.h>
#include <stdlib.h> /* Included for the exit function */

/********************************************
* Function Name  : main
* Pre-conditions : int argc, char** argv
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(int argc, char** argv){
	
	/* Error Checking */
	if(argc != 2){
		fprintf(stderr, "Input Format: ./filePtrPrint [File Name]\n");
		exit(-1);
	}

	/* Find the location of the file names and create pointers */
	FILE *fp1 = fopen(argv[1], "r");

	/* If the FILE pointer is NULL after this, then no file exists */
	if(fp1 == NULL){
		fprintf(stderr, "The file %s does not exist\n", argv[1]);
		exit(-1);
	}
	else{
		
		int height, width;
		
		while( fscanf(fp1, "%d" "%d", &height, &width) != EOF ){
			
			fprintf(stdout, "Height: %d, Width %d, Area %d\n", height, width, height*width);
			
		}
		
		fclose(fp1);
	}

	return 0;
}
