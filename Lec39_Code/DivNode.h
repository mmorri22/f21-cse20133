#ifndef DIVNODE_H
#define DIVNODE_H

#include <iostream>
#include "Node.h"
#include "BinNode.h"
#include "NumNode.h"

class DivNode : public BinNode
{
protected:

public:

  // overload Constructor
  DivNode(Node* node1, Node* node2);

  // destructor
   ~DivNode ();

  // Function
  double Calc() const;
};


#endif
