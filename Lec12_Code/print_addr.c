#include <stdio.h>

int main(){
	
	int the_int = 10;
	
	float the_float = (float)22.7;
	
	double the_double = -19.7;
	
	fprintf( stdout, "%d %p\n", the_int, &the_int );
	fprintf( stdout, "%f %p\n", the_float, &the_float );
	fprintf( stdout, "%lf %p\n", the_double, &the_double );
	
	return 0;
}

