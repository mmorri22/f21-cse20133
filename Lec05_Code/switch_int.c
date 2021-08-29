#include "stdio.h"

int main(void){
	
	/* Variable Declaration */
	int NDClass = 1;
	
	switch(NDClass){
		
		case 0:
			fprintf(stdout, "Student is a Freshman!\n");
			break;
			
		case 1:
			fprintf(stdout, "Student is a Sophomore!\n");
			break;
			
		case 2:
			fprintf(stdout, "Student is a Junior!\n");
			break;
			
		case 3:
			fprintf(stdout, "Student is a Senior!\n");
			break;
			
		default:
			fprintf(stdout, "Student is a Super-Senior!\n");
			break;
		
	}

	return 0;
}
