#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double factorial( int fact_num ){
	
	if( fact_num == 1 )
		return 1;
	
	return (double)fact_num * factorial( fact_num - 1 );
	
}

double exponential( double x, int k ){
	
	if( k == 0 )
		return 1;
	
	return pow( x, (double)k ) / factorial( k ) + exponential( x, k-1 );
	
}

int main( void ){
	
	FILE* exp_inputs = fopen( "exp_inputs.txt", "r" );
	
	// Remember Dr. Morrison's Golden Rule of Pointers
	while( exp_inputs != NULL ){
	
		double exponent;
		int summations;
	
		fscanf( exp_inputs, "%lf %d", &exponent, &summations );
		
		fprintf( stdout, "e^%lf = %lf\n", exponent, exponential( exponent, summations ) );

		if( exp_inputs->_IO_read_ptr == exp_inputs->_IO_read_end  )
			break;
	
	}
	
	fclose( exp_inputs );
	
	return EXIT_SUCCESS;
	
}