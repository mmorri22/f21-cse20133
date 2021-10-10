#include <stdio.h>
#include <stdlib.h>

int main( int argc, char** argv ){

	fprintf( stdout, "argc: %p %d\n", &argc, argc );
	
	fprintf( stdout, "argv: %p %p\n", &argv, argv );

	int iter;
	for( iter = 1; iter < argc; ++iter ){
		
		int temp = atoi( argv[iter] );
		
		//fprintf( stdout, "%s %p %p\n", argv[iter], &argv[iter], argv[iter] );
		
		fprintf( stdout, "%d\n", temp );
		
	}

	return 0;
}
