#include "CDuck.h"

using namespace std;

void CDuck::swim()
{
  cout << "swim" << endl;
}

void CDuck::performFly()
{
  this -> flyBehavior -> fly();
}

void CDuck::performQuack()
{
  this -> quackBehavior -> quack();
}
void CDuck::setFlyBehavior(IFlyBehavior *ifly)
{
  this -> flyBehavior = ifly;
}
void CDuck::setQuackBehavior(IQuackBehavior *iquack)
{
  this -> quackBehavior = iquack;
}

