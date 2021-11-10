#include <iostream> 
#include <cstdlib>
#include <string>

#define COUT std::cout
#define ENDL std::endl
#define TWO_PI_TWO_FURIOUS 3.14159

template <class T>
void print_val( T& print_value ){
	
	COUT << print_value << ENDL;
	
}

template <class Notre, class Dame>
void print_two_vals( Notre& print_val_1, Dame& print_val_2){
	
	COUT << print_val_1 << " " << print_val_2 << ENDL;
	
}

void print_int_func( int the_int ){
	
	the_int++;
	
	COUT << the_int << ENDL;
}

void print_int_func( const int& the_int ){
	
	COUT << the_int << ENDL;
}

int main( void ){
	
	int print_int = 10;
	double print_double = -22.7;
	long unsigned int print_lui = 25;
	
	float print_float = (float)13.1;
	
	std::string print_str( "Go Irish!" );
	
	print_val( print_int );
	print_val( print_double );
	print_val( print_lui );
	
	print_val( print_float );
	
	print_val( print_str );
	
	print_two_vals( print_int, print_lui ); 
	
	print_two_vals( print_float, print_str ); 
	
	print_two_vals( print_double, print_int ); 
	
	print_int_func( print_int );


	
	return EXIT_SUCCESS;
}