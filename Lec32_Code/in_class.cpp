#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>

#define COUT std::cout
#define ENDL std::endl
#define PAIR std::pair
#define VECTOR std::vector
#define STRING std::string

PAIR< bool, PAIR<double, double> > quadratic( double a, double b, double c ){
	
	double insideSqrt = b*b - 4*a*c;
	
	double denominator = 2 * a;
	
	PAIR< bool, PAIR<double, double> > solutions;
	
	if( insideSqrt < 0 || denominator == 0 ){
		
		solutions.first = false;
		
	}
	else{
		
		solutions.first = true;
		
		solutions.second.first = ( -b + sqrt(insideSqrt) ) / ( 2 * a );
		
		solutions.second.second = ( -b - sqrt(insideSqrt) ) / ( 2 * a );
	
	}
	
	return solutions;
}

void printSolution( PAIR< bool, PAIR<double, double> >& solution ){
	
	if( solution.first ){
		COUT << "{" << solution.second.first << ", " << solution.second.second << "}\n";
	}
	else{
		
		COUT << "Invalid Result." << ENDL;
	}
	
}

template< class Irish >
void print_vector( VECTOR< Irish >& print_vec ){
	
	for( long unsigned int iter = 0; iter < print_vec.size(); ++iter ){
		
		COUT << print_vec.at( iter ) << " ";
		
		
	}
	
	
}


int main() {
	
	PAIR< bool, PAIR<double, double> > solution = quadratic( 2, 4.1, -3.7 );
	
	printSolution( solution );
	
	PAIR< bool, PAIR<double, double> > solution2 = quadratic( 2, 4.1, 3.7 );
	
	printSolution( solution2 );
	
	VECTOR<int> int_vec;
	
	VECTOR< STRING > string_vec( 12, "bob" );
	
	VECTOR< double > dbl_vec( 7, -1.1 );
	
	VECTOR<int> int_vec_2 = { -17, 22, 31, 44 };
	
	return 0;
}