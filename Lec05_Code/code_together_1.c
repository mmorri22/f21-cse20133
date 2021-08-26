#include <stdio.h>

int main( void ){

	int a = 11;
	int b = 13;
	int c = 12;

	if( a == c ){
		fprintf( stdout, "a is equal to c\n" );
	}
	else if( a == c + 2 ){
		fprintf( stdout, "a is equal to c plus 2\n" );
	}
	else if( a != b ){
		fprintf( stdout, "a is not equal to b\n" );
	}
	else{
		fprintf( stdout, "None of the conditions work\n" );
	}

	return 0;
}
