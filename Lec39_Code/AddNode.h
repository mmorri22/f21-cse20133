#ifndef ADDNODE_H
#define ADDNODE_H

#include <iostream>
#include "Node.h"
#include "BinNode.h"
#include "NumNode.h"

class AddNode : public BinNode
{
protected:

public:

  // overload Constructor
  AddNode(Node* node1, Node* node2);

  // destructor
   ~AddNode ();

  // Function
  double Calc() const;
};


#endif
