#ifndef __Expr_node_H_
#define __Expr_node_H_
#include <ostream>
#include <iostream>
using namespace std;
class Expr_node{
  friend ostream &operator<<(ostream &os, const Expr_node &e);
 protected:
  virtual void print(ostream &os) const = 0;
  virtual ~Expr_node(){};
};

ostream &operator<< (ostream &os, const Expr_node &e)
{
  e.print(os);
  return os;
}

#endif
