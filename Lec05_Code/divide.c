#include <stdio.h>

int main( void ){

	int dividend = 16;
	int divisor = 7;

	int quotent = dividend / divisor;

	fprintf( stdout, "dividend: %d %x %p\n", dividend, dividend, &dividend );
	
	fprintf( stdout, "divisor : %d %x %p\n", divisor,divisor, &divisor );
	
	fprintf( stdout, "quotent : %d %x %p\n", quotent, quotent, &quotent );

	return 0;

}
