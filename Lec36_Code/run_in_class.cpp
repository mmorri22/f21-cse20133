#include "in_class.h"


int main(){
	
	point the_point;
	
	point point_2( 2.1, 3.2 );
	
	const point const_point( 3.3, 4.2 );
	
	the_point.print();
	
	COUT << ENDL;
	
	point_2.print();
	
	COUT << ENDL;
	
	point_2.set_y( -5.4 );
	
	point_2.print();
	
	COUT << ENDL;
	
	const_point.set_y( -5.4 );
	
	const_point.print();
	
	COUT << ENDL;
	
	line new_line( the_point, point_2 );
	
	return EXIT_SUCCESS;
}