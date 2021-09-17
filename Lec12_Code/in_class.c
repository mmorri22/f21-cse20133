#include <stdio.h>

void swap( int* y, int* z );

void update_array( int the_array[], int size ){
	
	int iter;
	for(iter = 0; iter < size; ++iter ){
		
			the_array[iter] += 25;
			
	}	
	
}

int main( void ){
	
	int the_int = 10;
	int* int_ptr = &the_int;
	
	int y = 20;
	
	fprintf( stdout, "%d at %p\n", the_int, &the_int );
	fprintf( stdout, "%d at %p\n", y, &y );
	fprintf( stdout, "int_ptr: %p at %p %d\n", int_ptr, &int_ptr, *int_ptr );
	
	int_ptr = &y;
	
	fprintf( stdout, "%d at %p\n", the_int, &the_int );
	fprintf( stdout, "%d at %p\n", y, &y );
	fprintf( stdout, "int_ptr: %p at %p %d\n", int_ptr, &int_ptr, *int_ptr );	
	
	int z = *int_ptr;
	
	fprintf( stdout, "x: %d at %p\n", the_int, &the_int );
	fprintf( stdout, "y: %d at %p\n", y, &y );
	fprintf( stdout, "z: %d at %p\n", z, &z );
	fprintf( stdout, "int_ptr: %p at %p %d\n", int_ptr, &int_ptr, *int_ptr );

	*int_ptr = the_int;
	
	fprintf( stdout, "x: %d at %p\n", the_int, &the_int );
	fprintf( stdout, "y: %d at %p\n", y, &y );
	fprintf( stdout, "z: %d at %p\n", z, &z );
	fprintf( stdout, "int_ptr: %p at %p %d\n", int_ptr, &int_ptr, *int_ptr );

	swap( &y, &z );
	
	fprintf( stdout, "y: %d at %p\n", y, &y );
	fprintf( stdout, "z: %d at %p\n", z, &z );
	
	int the_array[] = {1, 3, 5, 7, 9};
	
	int iter;
	for(iter = 0; iter < 5; ++iter ){
		
		fprintf( stdout, "%d %p\n", the_array[iter], &the_array[iter] );
		
	}
	
	update_array( the_array, 5 );
	
	for(iter = 0; iter < 5; ++iter ){
		
		fprintf( stdout, "%d %p\n", the_array[iter], &the_array[iter] );
		
	}

		int new_int;
		float new_float;
		double new_double;
		
		fscanf( stdin, "%d %f %lf", &new_int, &new_float, &new_double );
		
		fprintf( stdout, "%d %f %lf\n", new_int, new_float, new_double );

	
	/*
	float the_float = (float)-22.7;
	double the_double = 13.6;
	
	fprintf( stdout, "%d at %p\n", the_int, &the_int );
	fprintf( stdout, "%f at %p\n", the_float, &the_float );
	fprintf( stdout, "%lf at %p\n", the_double, &the_double );
	
	fprintf( stdout, "stdout, %p\n", stdout );
	fprintf( stderr, "stderr, %p\n", stderr );
	
	*/


	
	return 0;
}

void swap( int* y, int* z ){
	
	int temp = *y;
	*y = *z;
	*z = temp;
	
}