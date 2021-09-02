#include <stdio.h>

int main( void ){

	fprintf( stdout, "Hello, World %p %p\n", 
		stdout, &stdout );

	return 0;
}
