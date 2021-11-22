#ifndef IN_CLASS_H
#define IN_CLASS_H

#include <iostream>

#define COORDINATE double
#define COUT std::cout
#define ENDL std::endl

class point{
	
	private:
	
		COORDINATE x_coor;
		COORDINATE y_coor;
	
	public:
	
		point();
		
		point( const COORDINATE& x_in, const COORDINATE& y_in );
		
		COORDINATE get_x() const;
		
		void set_y( const COORDINATE& y_in );
		
		void print() const;
	
};

#endif