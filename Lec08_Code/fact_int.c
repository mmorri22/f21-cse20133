#include <stdio.h>

int main( void ){

	int iter; 
	int value = 5;
	int factorial = 1;

	for( iter = 1; iter <= value; ++iter ){
	
		factorial *= iter;

		fprintf( stdout, "%p %d %x\n", &factorial, factorial, factorial );

	}

	return 0;
}
