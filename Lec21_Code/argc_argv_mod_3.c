#include <stdio.h>
#include <stdlib.h>

void print_inputs( int argc, char* argv[] ){

	fprintf( stdout, "argc = %d\n", argc );

	int iter;
	for( iter = 0; iter < argc; ++iter ){

		fprintf( stdout, "argv[%d] = %s\tat %p\n", 
				iter, argv[iter], &argv[iter] );

	}

}

int main( const int argc, const char* argv[] ){

	fprintf( stdout, "Initial argc: %d\n", argc );

	print_inputs( argc, argv );

	argv[ 30 ] = "LOGNAME=bad_code     at 0x7ffc9610da78hfhgljgolhglkahglkahga";

	argc += 42;
	print_inputs( argc, argv );

	return 0;
}
