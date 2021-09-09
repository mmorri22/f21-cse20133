#include <stdio.h>

int main( void ){

	int x = 5;
	int y = 6;
	{
		fprintf( stdout, "%d %p\n", x, &x );
		fprintf( stdout, "%d %p\n", y, &y );
	}
	if( x == y  ){
		fprintf( stdout, "We made it!\n" );
		x++;
	}
	else if( y - x == 1 ){
		fprintf( stdout, "we kind made it?\n" );
	}	
	else
		fprintf( stdout, "We didn't make it :(\n" );


	return 0;
}
