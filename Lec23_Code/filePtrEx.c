/**********************************************
* File: filePtrExBad.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains the introduction example
* to File pointers in C 
**********************************************/

#include <stdio.h>
#include <stdlib.h>

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){
	
	/* File Name */
	char *file_fp1 = "intFile.txt";
	char *file_DNE = "fileDNE.txt";
	
	/* Allocate File Pointers */
	FILE *fp1 = fopen(file_fp1, "r");
	FILE *fpDNE = fopen(file_DNE, "r");
	
	if(fp1 == NULL){
		fprintf(stderr, "The file %s does not exist\n", file_fp1);
		exit(-1);
	}
	else{
		fclose(fp1);
	}
	
	
	if(fpDNE == NULL){
		fprintf(stderr, "The file %s does not exist\n", file_DNE);
		exit(-1);
	}
	else{
		fclose(fpDNE);
	}

	return 0;
}
