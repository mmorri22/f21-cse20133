#include <stdio.h>

int main( void ){

	int the_int = -17;

	fprintf( stdout, "the_int: %p %d %x\n",
			&the_int, the_int, the_int );

	unsigned int the_unt = 17;

	fprintf( stdout, "the_unt: %p %u %x\n",
			&the_unt, the_unt, the_unt );


        long unsigned int the_lnt = 17;

        fprintf( stdout, "the_lnt: %p %lu %lx\n",
                        &the_lnt, the_lnt, the_lnt );


	return 0;
}
