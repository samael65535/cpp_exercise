#include "Expr_node.h"
#include <ostream>
using namespace std;
// 有一个子节点
class Unary_node : public Expr_node{
  friend class Expr;
  string op;
  Expr_node *opnd;
 Unary_node(const string &a, Expr_node *b): op(a), opnd(b){}
  void print(ostream &o) const
  {
    o << "(" << op << *opnd << ")";
  }
};










