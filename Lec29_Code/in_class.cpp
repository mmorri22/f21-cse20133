#include <iostream>
#include <cstdlib>
#include <string>

void call_by_ref( int& print_int, double& print_dbl ){
	
	std::cout << print_int << " " << print_dbl << std::endl;

	std::cout << &print_int << " " << &print_dbl << std::endl;	
	
	++print_int;
	
	print_dbl *= 2;
	
}

int main(){
	
	int print_int = 10;
	double print_dbl = -22.7;
	
	std::string static_str = "Go Irish! Beat Navy!";
	
	std::cout << "Hello, World" << std::endl;
	
	std::cout << "Addrs in main: " << &print_int << " " << &print_dbl << std::endl;
	
	call_by_ref( print_int, print_dbl );
	
	call_by_ref( print_int, print_dbl );
	
	for( long unsigned int iter = 0; iter < static_str.size(); ++iter ){
		
		std::cout << static_str.at(iter) << std::endl;
		
	}
	
	return EXIT_SUCCESS;
}