#include <stdio.h>

int main( void ){

	float dividend = 16;
	float divisor = 7;
	
	float quotient = dividend / divisor;

	fprintf( stdout, "dividend: %.13f %a %p\n", dividend, dividend, &dividend );
	
	fprintf( stdout, "divisor : %.13f %a %p\n", divisor,divisor, &divisor );
	
	fprintf( stdout, "quotient : %.13f %a %p\n", quotient, quotient, &quotient );

	return 0;

}
