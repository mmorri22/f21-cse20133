#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int size = 13 * sizeof(char);

	void* hello = malloc( size );
	
	fprintf( stdout, "Register %p pointing to address %p on Heap\n", 
			&hello, hello );
	
	return 0;
	
}
