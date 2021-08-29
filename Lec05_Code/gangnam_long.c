#include <stdio.h>

int main( void ){

	long int gangnam_count = 2147483647;

	fprintf( stdout, "Initial: %ld %lx\n", gangnam_count, gangnam_count );

	++gangnam_count;

	fprintf( stdout, "Final  : %ld %lx\n", gangnam_count, gangnam_count );

	return 0;

}

