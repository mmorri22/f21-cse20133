#include <stdio.h>

int main( void ){

	int input_1 = 5;
	int input_2 = 6;

	int product = input_1 * input_2;

	fprintf( stdout, "input_1: %d %x %p\n", input_1, input_1, &input_1 );
	
	fprintf( stdout, "input_2: %d %x %p\n", input_2,input_2, &input_2 );
	
	fprintf( stdout, "product: %d %x %p\n", product, product, &product );

	return 0;

}
