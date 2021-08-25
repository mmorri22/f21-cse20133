#include <stdio.h>

int main( void ){

	fprintf( stdout, "Hello, World: Register %p pointing at stack address %p\n", 
		&stdout, stdout );

	return 0;

}
