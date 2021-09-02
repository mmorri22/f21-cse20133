#include <stdio.h>

int main( void ){

	double dividend = 16;
	double divisor = 7;
	
	double quotient = dividend / divisor;

	fprintf( stdout, "dividend: %.23lf %la %p\n", dividend, dividend, &dividend );
	fprintf( stdout, "divisor : %.23lf %la %p\n", divisor,divisor, &divisor );
	fprintf( stdout, "quotient : %.23lf %la %p\n", quotient, quotient, &quotient );

	return 0;

}
