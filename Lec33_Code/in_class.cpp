#include <iostream>
#include <cstdlib>
#include <vector> 

#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector

int main( ){
	
	VECTOR<int> swift_vec(13);
	
	for( int taylor_iter = 0; taylor_iter < 26; ++taylor_iter ){
		
		swift_vec.push_back( taylor_iter );
		
		COUT << swift_vec.size() << " " << swift_vec.capacity() << ENDL;
		
	}
	
	for( long unsigned int iter = 0; iter < swift_vec.size(); ++iter ){
		
		COUT << swift_vec.at(iter) << " " ;
	}
	
	// COUT << ENDL << "The Prof. betrayed me :( No 13!" << ENDL;
	
	
	
	return 0;
	
}