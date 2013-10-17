#include <iostream>
#include <vector>
#include <map>
#include <typeinfo>
#include "libs/cocos2dx/include/cocos2d.h"
using namespace std;
using namespace cocos2d;
int main()
{
  auto a = 1;
  map<string, int> test_map;

  vector<string> array;
  array.push_back("abcdef");
  array.push_back("ghijkl");

  for_each(array.begin(), array.end(), [&test_map](string &str){
      test_map[str] = 1;
    });
  for(auto s : test_map){
    cout << s.first << "   " << s.second << endl;
  }
  CCLayer tmp = CCLayer::create();
  return 0;
}










