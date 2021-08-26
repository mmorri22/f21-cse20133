#include <stdio.h>
#include <stdlib.h>

int main( void ){

	int x = 5;
	int y = 5;

	fprintf( stdout, "Local registers x at %p and y at %p\n", &x, &y );

	if( x == y ){
	
		fprintf( stdout, "%d and %d are equal!\n", x, y ); 

	}

	return 0;

}


