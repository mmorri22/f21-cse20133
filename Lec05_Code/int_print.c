#include <stdio.h>

int main( void ){

	fprintf( stdout, "Hello, World %p\n", stdout );

	int a = 6;
	int b = 5;

	int y = a + b;

	fprintf( stdout, "a at %p = %d\n", &a, a );
	fprintf( stdout, "b at %p = %d\n", &b, b );
	fprintf( stdout, "y at %p = %d\n", &y, y );

	return 0;

}



