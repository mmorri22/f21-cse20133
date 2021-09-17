#include <stdio.h>

int main(){
	
	int x = 10;
	int y = 20;
	
	int* int_ptr = &x;
	
	fprintf( stdout, "x: %d %p, y: %d %p\n", x, &x, y, &y );
	fprintf( stdout, "&int_ptr = %p, int_ptr: %p, *int_ptr = %d\n\n", 
			&int_ptr, int_ptr, *int_ptr );
	
	y = *int_ptr;
	
	fprintf( stdout, "x: %d %p, y: %d %p\n", x, &x, y, &y );
	fprintf( stdout, "&int_ptr = %p, int_ptr: %p, *int_ptr = %d\n\n", 
			&int_ptr, int_ptr, *int_ptr );
	
	
	int_ptr = &y;
	
	fprintf( stdout, "x: %d %p, y: %d %p\n", x, &x, y, &y );
	fprintf( stdout, "&int_ptr = %p, int_ptr: %p, *int_ptr = %d\n\n", 
			&int_ptr, int_ptr, *int_ptr );
	

	y = 30;
	
	fprintf( stdout, "x: %d %p, y: %d %p\n", x, &x, y, &y );
	fprintf( stdout, "&int_ptr = %p, int_ptr: %p, *int_ptr = %d\n\n", 
			&int_ptr, int_ptr, *int_ptr );
	
	return 0;
}

