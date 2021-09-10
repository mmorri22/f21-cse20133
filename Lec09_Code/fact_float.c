#include <stdio.h>

int main( void ){

	unsigned int time; 
	unsigned int value = 5;
	float factorial = (float)1;

	for( time = 1; time <= value; ++time ){
	
		factorial *= (float)time;

		fprintf( stdout, "%p %f %a\n", &factorial, factorial, factorial );

	}

	return 0;
}
