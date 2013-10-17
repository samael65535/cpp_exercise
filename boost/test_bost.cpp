#include <boost/timer.hpp>
#include <iostream>
#include <string>
using namespace boost;
using namespace std;
int main()
{
  timer t;
  for(auto i = 0; i != 100; i++){
    cout << "hehe" << endl;
  }
  string a;
  
  cout << t.elapsed() << endl;
  return 0;
}

