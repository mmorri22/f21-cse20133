#include <stdio.h>

int main( void ){

	int a = 6;
	int b = 5;

	int y = a + b;

	fprintf( stdout, "stdout is at %p and is pointing at %p\n", &stdout, stdout );
	fprintf( stdout, "Register a is at %p and has the value %d\n", &a, a );
	fprintf( stdout, "Register b is at %p and has the value %d\n", &b, b );
	fprintf( stdout, "Register y is at %p and has the value %d\n", &y, y );	 

	return 0;

}
