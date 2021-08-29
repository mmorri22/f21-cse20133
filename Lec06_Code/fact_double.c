#include <stdio.h>

int main( void ){

	unsigned int time; 
	unsigned int value = 5;
	double factorial = 1;

	for( time = 1; time <= value; ++time ){
	
		factorial *= (double)time;

		fprintf( stdout, "%p %lf %la\n", &factorial, factorial, factorial );

	}

	return 0;
}
