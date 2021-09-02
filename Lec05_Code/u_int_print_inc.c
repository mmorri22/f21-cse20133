#include <stdio.h>

int main( void ){

	unsigned int alice = -28;

	fprintf( stdout, "%p %u %x\n", &alice, alice, alice );

	return 0;

}
