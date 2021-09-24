#include <stdio.h>


void pass_by_value( int the_int, float the_float, double the_double );

void pass_by_ref( int* int_ptr, float* float_ptr, double* double_ptr );

void array( double the_array[] );

void fscanf_pbr( int* int_ptr, float* float_ptr, double* double_ptr );

int main(){

	int the_int;
	float the_float;
	double the_double;
	
	fscanf( stdin, "%d %f %lf", &the_int,  &the_float,  &the_double );

	fprintf( stdout, "Main addr: %p %p %p\n", &the_int,  &the_float,  &the_double );	
	fprintf( stdout, "%d %f %lf\n", the_int,  the_float,  the_double );
	
	pass_by_value( the_int,  the_float,  the_double );
	
	fprintf( stdout, "%d %f %lf\n", the_int,  the_float,  the_double );
	
	pass_by_ref( &the_int,  &the_float,  &the_double );

	fprintf( stdout, "%d %f %lf\n", the_int,  the_float,  the_double );
	
	double the_array[] = {22, 13, 5, -21};
	
	fprintf( stdout, "the_array in main: %p %p\n", &the_array, the_array );
	
	long unsigned int iter;
	for( iter = 0; iter < 4; ++iter ){
		
		fprintf( stdout, "%p %lf\n", &the_array[iter], the_array[iter] );
	}
	
	array( the_array );
	
	fscanf_pbr( &the_int,  &the_float,  &the_double );

	return 0;
}


void pass_by_value( int the_int, float the_float, double the_double ){
	
	the_int++;
	the_float--;
	the_double *= 2;
	
	fprintf( stdout, "%p %p %p\n", &the_int,  &the_float,  &the_double );		
	fprintf( stdout, "%d %f %lf\n", the_int,  the_float,  the_double );
}


void pass_by_ref( int* int_ptr, float* float_ptr, double* double_ptr ){
	
	(*int_ptr)++;
	(*float_ptr)--;
	*double_ptr *= 2;	
	
	fprintf( stdout, "Values in regs: %p %p %p\n", 
				int_ptr, float_ptr, double_ptr );

	fprintf( stdout, "%d %f %lf\n", 
				*int_ptr, *float_ptr, *double_ptr );
	
}

void array( double the_array[] ){
	
	fprintf( stdout, "the_array in array: %p %p\n", &the_array, the_array );
	
	long unsigned int iter;
	double temp = the_array[2];
	for(iter = 0; iter < 100; ++iter )
		temp++;
	
	the_array[2] = temp;
	
	for( iter = 0; iter < 4; ++iter ){
		
		fprintf( stdout, "%p %lf\n", &the_array[iter], the_array[iter] );
	}
	
	
}

void fscanf_pbr( int* int_ptr, float* float_ptr, double* double_ptr ){

	fprintf( stdout, "Pointer values: %p %p %p\n", &int_ptr, &float_ptr, &double_ptr );	

	fprintf( stdout, "Pointer values: %p %p %p\n", int_ptr, float_ptr, double_ptr );	
	
	fscanf( stdin, "%d %f %lf", int_ptr, float_ptr, double_ptr );
	
}