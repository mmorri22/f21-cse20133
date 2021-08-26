#include <stdio.h>

int main( void ){

	float the_float = 1.1;

	fprintf( stdout, "%p %f %a\n", 
		&the_float, the_float, the_float );

	return 0;

}
