#include <stdio.h>

int main( void ){

	float dividend = 16.1;
	float divisor = 7.2;
	
	float quotient = dividend / divisor;

	fprintf( stdout, "dividend: %f %a %p\n", dividend, dividend, &dividend );
	
	fprintf( stdout, "divisor : %f %a %p\n", divisor,divisor, &divisor );
	
	fprintf( stdout, "quotient : %f %a %p\n", quotient, quotient, &quotient );

	return 0;

}
