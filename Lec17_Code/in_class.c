#include <stdio.h>
#include <stdlib.h>

int main( void ){
	
	long unsigned int size = 13 * sizeof(char);
	
	void* hello = malloc( size );
	
	fprintf( stdout, "Register %p contains address %p\n",
		&hello, hello );
		
	fprintf( stdout, "Register address %p\n",
		hello + 2*sizeof(char) );
		
	fprintf( stdout, "%p\n", (char *)( hello + 2*sizeof(char) ) );
	
	*( (char *)( hello + 2*sizeof(char) ) ) = 0x6c;
	
	fprintf( stdout, "%c\n", *((char *)( hello + 2*sizeof(char) )) );
	
	free( hello );
	
	return 0;
}