#include <stdio.h>

int main( void ){

	int int_print = 28;

	fprintf( stdout, "%p %d %x\n", &int_print, int_print, int_print );

	return 0;

}
