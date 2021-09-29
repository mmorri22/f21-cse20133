#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	long unsigned int size = 13 * sizeof(char);

	void* hello = malloc( size );
	
	fprintf( stdout, "Register %p pointing to address %p on Heap\n", 
			&hello, hello );
			
	fprintf( stdout, "Character pointer %p\n", (char *)hello + 2*sizeof(char) );
	 
	*( (char *)hello + 2*sizeof(char) ) = 'H';
	
	fprintf( stdout, "Character %c\n", *( (char *)hello + 2*sizeof(char) ) );
	
	free( hello );

	return 0;
	
}


