#include <stdio.h>
#include <stdlib.h>

int main( const int argc, const char* argv[] ){
	
	if( argc != 2 ){
		
		fprintf( stderr, "Incorrect Number of Inputs\n" );
		
		return EXIT_FAILURE;
	}
	
	FILE* the_input = fopen( argv[1], "r" );
	
	if( the_input == NULL ){
		
		fprintf( stderr, "%s does not exist. Terminating program\n", argv[1] );
		
		return EXIT_FAILURE;
	}
	else{
		
		fprintf( stdout, "%s successfully found\n", argv[1] );
	}
	
	fprintf( stdout, "%p\n", the_input );
	
	while( the_input != NULL ){
		
		char* char_temp = (char *)malloc( 256 * sizeof(char) );
		
		fscanf( the_input, "%s", char_temp );
		
		fprintf( stdout, "%s\n", char_temp );
		
		free( char_temp );
		
		if( the_input->_IO_read_ptr == the_input->_IO_read_end )
			break;
		
	}
	
	fclose( the_input );
	
	return EXIT_SUCCESS;
}