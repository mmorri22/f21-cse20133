#include <stdio.h>

int main(){
	
	int int_array[ 10 ];
	
	fprintf( stdout, "Register %p pointing to address %p on Stack\n", 
			&int_array, int_array );
	
	return 0;	
		
}

