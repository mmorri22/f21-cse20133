#include <stdio.h>

void update_array( int sample[], int size );

void print_array( int sample[], int size );

int main(){
	
	int sample[5] = {1, 2, 3, 4, 5};
	
	update_array( sample, 5 );
	print_array( sample, 5 );
	
	sample[0] = 10;
	
	update_array( sample, 5 );
	print_array( sample, 5 );
	
	return 0;
	
}

void update_array( int sample[], int size ){
	
	int iter;
	for(iter = 1; iter < size; iter++){
		
		sample[iter] = sample[iter-1] * 5;
		
	}	
	
	fprintf( stdout, "\n");
}


void print_array( int sample[], int size ){
	
	int iter;
	for(iter = 0; iter < size; iter++){
		
		fprintf( stdout, "%d at %p\n", sample[iter], &sample[iter] );
	}	
	
	fprintf( stdout, "\n");
}