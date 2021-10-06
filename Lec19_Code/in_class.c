#include <stdio.h>
#include <stdlib.h>

void print_arrays( int stack_array[], int* dyn_array );

int main(){
	
	long unsigned int size = 4;
	
	int stack_array[ ] = {10, -22, 17, 5 };
	
	int* dyn_array = (int *)malloc( size * sizeof(int) );
	*( (int *)( (void *)dyn_array + 0*sizeof(int) ) ) = 10;
	dyn_array[1] = -22;
	*( (int *)( (void *)dyn_array + 2*sizeof(int) ) ) = 17;
	dyn_array[3] = 5;
	
	print_arrays( stack_array, dyn_array );
	
	free( dyn_array );

	
	return 0;
}


void print_arrays( int stack_array[], int* dyn_array ){
	
	long unsigned int iter = 0;
	for( iter = 0; iter < size; ++iter ){
		
		fprintf( stdout, "%p %d, ", &stack_array[iter], stack_array[iter]);
		fprintf( stdout, "%p %d\n", &dyn_array[iter], dyn_array[iter]);
		
	}
	
	dyn_array = realloc( dyn_array, 2*size*sizeof(int) );
	
	dyn_array[4] = 0;
	dyn_array[5] = 1;
	dyn_array[6] = 2;
	dyn_array[7] = 3;
	
	for( iter = 0; iter < 2*size; ++iter ){
		
		fprintf( stdout, "%p %d\n", &dyn_array[iter], dyn_array[iter]);
		
	}	
	
	
}