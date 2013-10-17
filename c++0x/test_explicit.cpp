#include <iostream>
using namespace std;
class TestClass{
public:
  TestClass(int num1, int num2){
    n1 = num1;
    n2 = 2;
  }
  int n1;
  int n2;
};


int main()
{
  TestClass tc = 1;
  cout << tc.n1 << "  " << tc.n2 << endl;
}
