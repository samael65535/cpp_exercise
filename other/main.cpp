#include "Unary_node.h"
#include "Binary_node.h"
#include "Int_node.h"
#include <iostream>
using namespace std;
int main()
{
  Binary_node * t = new Binary_node("+", new Int_node(5), new Int_node(3));
  cout << *t << endl;
  return 0;
}
