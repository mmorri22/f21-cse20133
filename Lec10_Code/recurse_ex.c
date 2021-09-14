#include <stdio.h>

long int TERMINAL = 6;

/* Function definitions */
void foo( long int iter );

void bar( long int iter );

int main( void ){
	
	long int value = 10;
	
	foo( value );
	
	TERMINAL = 2;
	
	foo( value );
	
	return 0;
}

void foo( long int iter ){
	
	if( iter > TERMINAL ){
	
		fprintf( stdout, "Before in foo %ld\n", iter );
		
		bar( iter - 1);
	
		fprintf( stdout, "After in foo %ld\n", iter );
		
	}
	
}

void bar( long int iter ){
	
	if( iter > TERMINAL ){
	
		fprintf( stdout, "Before in bar %ld\n", iter );
		
		foo( iter - 2 );
	
		fprintf( stdout, "After in bar %ld\n", iter );
		
	}	
	
}

