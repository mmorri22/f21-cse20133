#ifndef SUBNODE_H
#define SUBNODE_H

#include <iostream>
#include "Node.h"
#include "BinNode.h"
#include "NumNode.h"

class SubNode : public BinNode
{
protected:

public:

  // overload Constructor
  SubNode(Node* node1, Node* node2);

  // destructor
   ~SubNode ();

  // Function
  double Calc() const;
};


#endif
