#include <stdio.h>
#include <stdlib.h>	// malloc

int main( void ){

	int array_size = 13 * sizeof(char);

	void* hello = malloc( array_size );

	free( hello );

	return 0; 

}
