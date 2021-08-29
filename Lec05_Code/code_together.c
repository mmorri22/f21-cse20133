#include <stdio.h>

int main( void ){

	int a = 11; 
	int b = 13;
	int c = 12;

	if( a == c ){
		fprintf( stdout, "a == c\n" );
	}
	else if( a == c + 2 ){
		fprintf( stdout, "a == c + 2\n");
	}
	else if( a != b ){
		fprintf( stdout, "a != b\n" );
	}
	else{
		fprintf( stdout, "None of the conditions work\n" );
	}

	return 0;
}
