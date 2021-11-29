#ifndef NUMNODE_H
#define NUMNODE_H

#include <iostream>
#include "Node.h"
#include "BinNode.h"

class NumNode : public BinNode
{
protected:
  double num;

public:

  // overload Constructor
  NumNode(double numIN);

  // destructor
  virtual ~NumNode ();

  // overloaded method
  double Calc() const;
};


#endif
