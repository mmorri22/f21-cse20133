#include <stdio.h>

void the_func( int* int_ptr, float* flt_ptr, double* dbl_ptr); 
		

int main(){

	int the_int;
	float the_float;
	double the_double;
	
	fprintf( stdout, "In main: %p %p %p\n", &the_int, &the_float, 
		&the_double );
		
	/* the_int = 10;
	the_float = (float)13.7;
	the_double = 22.5; */
	
	the_func( &the_int, &the_float, &the_double );

	fprintf( stdout, "In main: %d %f %lf\n", the_int, the_float, 
		the_double );
		
	fprintf( stdout, "In main: %p %p %p\n", &the_int, &the_float, 
		&the_double );

	return 0;
}

void the_func( int* int_ptr, float* flt_ptr, double* dbl_ptr){

	fprintf( stdout, "In the func: %p %p %p\n", &int_ptr, &flt_ptr, &dbl_ptr );
	fprintf( stdout, "In the func: %p %p %p\n", int_ptr, flt_ptr, dbl_ptr );	
	
	fscanf( stdin, "%d %f %lf", int_ptr, flt_ptr, dbl_ptr );	
	
}

