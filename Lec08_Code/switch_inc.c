#include <stdio.h>

int main( void ) {
	
	int nd_class = 2;
	
	switch( nd_class ){
		
		case 0:
			fprintf( stdout, "0\n" );
			break;

		case 2:
			fprintf( stdout, "You are dismissed!\n" );
			break;
			
		default:
			fprintf( stdout, "Nope\n" );
			break;			
		
	}
	
	
	return 0;
}