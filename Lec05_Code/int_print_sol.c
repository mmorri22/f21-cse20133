#include <stdio.h>

int main( void ){

	int the_int = 28;

	fprintf( stdout, "%p %d %x\n", &the_int, the_int, the_int );

	return 0;
}
