#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

#define COUT std::cout
#define ENDL std::endl


template< class Key, class Value >
bool hashArray( std::unordered_map< Key, Value >& theHash, const std::vector<Key>& theArray ) {
	
	for( unsigned int iter = 0; iter < theArray.size(); iter++ ){
		
		if( theHash.count( theArray[iter] ) != 0 ){
			
			return true;
		}
		
		else{
			
			// Hash the value 
			theHash.insert( { theArray[iter], true } );
		}
	}
	
	return false;
	
}


template< class Key >
void printResult( bool theResult, const std::vector<Key>& theArray ){
	
	COUT << "The array: ";
	
	for( long unsigned int iter = 0; iter < theArray.size(); ++iter ){
		
		COUT << theArray.at(iter) << " ";
		
	}
	
	// Hash The Array 
	if( theResult ){
		
		COUT << " contains a duplicate" << ENDL;
	}
	else{
		
		COUT << " does not contain a duplicate" << ENDL;
	}		
	
}


void testIntDup(){
	
	// Create first array
	std::vector<int> theArray;
	theArray.push_back(1); theArray.push_back(2);
	theArray.push_back(3); theArray.push_back(1);	
		
	std::unordered_map<int, bool> theHash;
	
	// Hash The Array 
	printResult( hashArray( theHash, theArray ), theArray );
}


void testIntNoDups(){
	
	// Create first array
	std::vector<int> theArray;
	theArray.push_back(1); theArray.push_back(2);
	theArray.push_back(3); theArray.push_back(4);	
		
	std::unordered_map<int, bool> theHash;
	
	// Hash The Array 
	printResult( hashArray( theHash, theArray ), theArray );
}


void testCharDups(){
	
	// Create first array
	std::vector<char> theArray;
	theArray.push_back('N'); theArray.push_back('o');
	theArray.push_back('t'); theArray.push_back('r');
	theArray.push_back('e'); theArray.push_back(' ');
	theArray.push_back('D'); theArray.push_back('a');
	theArray.push_back('m'); theArray.push_back('e');
		
	std::unordered_map<char, bool> theHash;
	
	// Hash The Array 
	printResult( hashArray( theHash, theArray ), theArray );
}


void testCharNoDups(){
	
	// Longest word in English Language with no duplicates is subdermatoglyphic
	
	// Create first array
	std::vector<char> theArray;
	theArray.push_back('s'); theArray.push_back('u');
	theArray.push_back('b'); theArray.push_back('d');
	theArray.push_back('e'); theArray.push_back('r');
	theArray.push_back('m'); theArray.push_back('a');
	theArray.push_back('t'); theArray.push_back('o');
	theArray.push_back('g');
	theArray.push_back('l'); theArray.push_back('y');
	theArray.push_back('p'); theArray.push_back('h');
	theArray.push_back('i'); theArray.push_back('c');
		
	std::unordered_map<char, bool> theHash;
	
	// Hash The Array 
	printResult( hashArray( theHash, theArray ), theArray );
}


void testStrDups(){
	
	// Create first array
	std::vector< std::string > theArray;
	theArray.push_back("Definition"); theArray.push_back("of");
	theArray.push_back("Recursion"); theArray.push_back(": see");
	theArray.push_back("Recursion");
	
	std::unordered_map<std::string, bool> theHash;
	
	// Hash The Array 
	printResult( hashArray( theHash, theArray ), theArray );	
}


void testStrNoDups(){
	
	// Create first array
	std::vector< std::string > theArray;
	theArray.push_back("Notre"); theArray.push_back("Dame");
	theArray.push_back("Fighting"); theArray.push_back("Irish");
	
	std::unordered_map<std::string, bool> theHash;
	
	// Hash The Array 
	printResult( hashArray( theHash, theArray ), theArray );	
}


int main(){
	
	testIntDup();
	
	testIntNoDups();
	
	testCharDups();
	
	testCharNoDups();
	
	testStrDups();
	
	testStrNoDups();

	return 0;
}
