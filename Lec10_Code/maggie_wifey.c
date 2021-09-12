#include <stdio.h>

int main( void ){

	unsigned int wedding_date = 8102019;

	fprintf( stdout, "Heart register at %p, and holds %d %x\n",
		&wedding_date, wedding_date, wedding_date );

	return 0;
}
