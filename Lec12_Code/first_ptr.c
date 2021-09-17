#include <stdio.h>

int main(){
	
	int x = 10;
	int y = 20;
	
	int* x_ptr = &x;
	int* y_ptr = &y;
	
	fprintf( stdout, "%d %p %p\n", x, &x, x_ptr );
	fprintf( stdout, "%d %p %p\n", y, &y, y_ptr );
	
	return 0;
}

