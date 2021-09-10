#include <stdio.h>

/* Function Declarations */
int factorial(int num);

int main(void){

	fprintf(stdout, "%d\n", factorial(1000000000));

	return 0;
}

int factorial(int num){

	/* Base Case */
	if(num == 0)
		return 1;

	else
		return num * factorial(num - 1);

}
