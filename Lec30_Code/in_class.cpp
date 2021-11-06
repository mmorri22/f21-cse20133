#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main( const int argc, const char* argv[] ){
	
	std::ofstream out_stream( "output.txt" );
	
	out_stream << "Go ND Beat Navy!\n and beat Georgia Tech!" << std::endl;
	
	out_stream << "You don't want your submarine to look like that!\n" << std::endl;
	
	out_stream.close();
	
	if( argc != 2 )
		return EXIT_FAILURE;
	
	std::ifstream connecticut( argv[1] );
	
	if( !connecticut )
		return EXIT_FAILURE;
	
	std::string int_1, int_2;
	
	
	while( connecticut >> int_1 >> int_2 ){
		
		std::cout << int_1 << " " << int_2 << " " << int_1 - int_2 << std::endl;
		
	}
	
	connecticut.close();
	
	return 0;
	
}
