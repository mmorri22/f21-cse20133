#include <stdio.h>

int main( void ){

	int the_int = 0;

	while( the_int <= 16384 ){

		fprintf( stdout, "the_int at %p = %d %x\n",
			&the_int, the_int, the_int );

		++the_int;

	}

	return 0;

}
