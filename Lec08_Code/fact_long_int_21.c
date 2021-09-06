#include <stdio.h>

int main( void ){

	long time; /* Know C */ 
	long value = 21;
	// long value = 21;
	long factorial = 1;

	for( time = 1; time <= value; ++time ){
	
		factorial *= time;

		fprintf( stdout, "%p %ld %lx\n", &factorial, factorial, factorial );

	}

	return 0;
}
