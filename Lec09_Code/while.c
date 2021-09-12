#include <stdio.h>

int main( void ){
	
	int counter = 0;
	
	while( counter <= 16384 ){
		
		fprintf( stdout, "%p %d %x\n",
				&counter, counter, counter );
				
		++counter;
		
	}
	
	
	return 0;
}