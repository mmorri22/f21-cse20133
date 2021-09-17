#include <stdio.h>

int main(){
	
	int x = 10;
	int y = 20;
	
	int* int_ptr = &x;
	
	fprintf( stdout, "x: %d %p, y: %d %p, int_ptr: %p\n", x, &x, y, &y, int_ptr );
	
	int_ptr = &y;
	
	fprintf( stdout, "x: %d %p, y: %d %p, int_ptr: %p\n", x, &x, y, &y, int_ptr );
	
	return 0;
}

