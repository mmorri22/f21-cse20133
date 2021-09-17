#include <stdio.h>

int main(){
	
	/* Part 1 - Create three variables: int, float, and double */
	int the_int;
	float the_float;
	double the_double;
	
	/* Part 2 - Using pass by reference, get the values using fscanf */
	fscanf( stdin, "%d %f %lf", &the_int, &the_float, &the_double );
	
	/* Part 3 - Using pass by value, print the values using fprintf */
	fprintf( stdout, "%d %f %lf\n", the_int, the_float, the_double );
	
	
	return 0;
	
}