#include "Expr_node.h"
#include <ostream>
#include <iostream>
using namespace std;
class Binary_node : public Expr_node{
  friend class Expr;
  string op;
  Expr_node *left;
  Expr_node *right;
 public :
 Binary_node(const string &s, Expr_node *l, Expr_node *r):
  op(s), left(l), right(r){}
  void print(ostream &o)const{
    std::cout << "hehe" << endl;
    o << "(" << *left << op << *right << ")";
  }
};
