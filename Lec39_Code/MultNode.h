#ifndef MULTNODE_H
#define MULTNODE_H

#include <iostream>
#include "Node.h"
#include "BinNode.h"
#include "NumNode.h"

class MultNode : public BinNode
{
protected:

public:

  // overload Constructor
  MultNode(Node* node1, Node* node2);

  // destructor
   ~MultNode ();

  // Function
  double Calc() const;
};


#endif
