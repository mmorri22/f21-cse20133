#include <iostream>
#include <set>
#include <string>

template<class T>
void printInOrder(std::set< T >& printTree){
	
	for(  T& curr : printTree){
		
		std::cout << curr << " ";
	}
	std::cout << std::endl;
	
}

int main(){
	
	std::set< int > intTree;
	
	intTree.insert(40); intTree.insert(30); 
	printInOrder(intTree);
    intTree.insert(60); intTree.insert(20);
	printInOrder(intTree);
	intTree.erase(40);
	printInOrder(intTree);
	// only one 50 will be added to the set 
    intTree.insert(40); intTree.insert(50); intTree.insert(50); 
    intTree.insert(10); 

	printInOrder(intTree);
	
	intTree.erase(30);
	printInOrder(intTree);	
	
	intTree.erase(50);
	printInOrder(intTree);
	
	intTree.erase(20);
	printInOrder(intTree);	
	
    intTree.insert(35); 
	printInOrder(intTree);	
	
	std::set< std::string > strTree;
	strTree.insert("A");
	strTree.insert("Abdcdh");
	strTree.insert("Q");
	strTree.insert("B");
	strTree.insert("R");
	strTree.insert("M");
	printInOrder(strTree);
	
	return 0;
}

