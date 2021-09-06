#include <stdio.h>

int main( void ){

	float the_float = (float)16.1;
	
	fprintf( stdout, "%f %a %p\n", the_float, the_float, &the_float );

	return 0;

}
