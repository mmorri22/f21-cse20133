#include <stdio.h>

/* Function declaraions */
void please_dont_execute_the_team( void );

int main( void ){
	
	please_dont_execute_the_team();
	
	return 0;
}

/* Function Definitions */
void please_dont_execute_the_team( void ){
	
	fprintf( stdout, "Holy Toledo!\n" );
	fprintf( stdout, "The football team needs to get their act together\n" );
	fprintf( stdout, "Put please don't execute them, Coach Kelly!\n" );
	
}