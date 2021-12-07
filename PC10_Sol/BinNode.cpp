#include "BinNode.h"

//default constructor
BinNode::BinNode() : leftNode(NULL), rightNode(NULL){}

// destructor
BinNode::~BinNode(){

  delete leftNode;
  delete rightNode;
}

// overload Constructor
BinNode::BinNode(Node* Lnode, Node* Rnode) : leftNode(Lnode), rightNode(Rnode){}

// copy constructor
BinNode::BinNode(const BinNode& copy) : leftNode(copy.leftNode), rightNode(copy.rightNode){}

// assignment Operator
BinNode& BinNode::operator=(const BinNode& assign){

  if(this != &assign){

    this->leftNode = assign.leftNode;
    this->rightNode = assign.rightNode;
	
  }
  return *this;
}
