#include "CDuck.h"

class MallarDuck : public CDuck
{
 public:
  virtual void display();
};

class FlyWithWings : public IFlyBehavior
{
 public:
  virtual void fly();
};

class Quack : public IQuackBehavior
{
 public:
  virtual void quack();
};
