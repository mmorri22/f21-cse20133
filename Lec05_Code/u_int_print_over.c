#include <stdio.h>

int main( void ){

	unsigned int u_int_print = -28;

	fprintf( stdout, "%u %x at %p\n", u_int_print, u_int_print, &u_int_print );

	return 0;

}
