#include "Expr_node.h"
#include <ostream>

class Int_node : public Expr_node{
  friend class Expr;
  int n;

  void print(ostream &os) const { os << n;}
 public :
   Int_node(int k):n(k){}
};
