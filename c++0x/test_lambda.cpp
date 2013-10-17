#include <map>
#include <vector>
#include <iostream>
#include <typeinfo>
using namespace std;
// 测试C++11中的lambda
int main()
{
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }
  for_each(v.begin(), v.end(), [](int n){
      n = 3;
    }
    );
  for_each(v.begin(), v.end(), [](int n){
      cout << n << endl;
    }
    );
  map<int, int> m;
  for (int i = 0; i < 10; ++i){
    m[i] = i+1;
  }
  for_each(m.begin(), m.end(), [&m](pair <int,int> k){
      cout << typeid(m).name() << endl;
      cout << typeid(k).name() << endl;
      cout << typeid(k.first).name() << endl;
      // cout << m.size() << endl;
      // cout << k.first << "\t"<< k.second << endl;
    }
    );
  
  cout << endl;
  for(auto w : m){
    cout << w.second << endl;
  }
}

