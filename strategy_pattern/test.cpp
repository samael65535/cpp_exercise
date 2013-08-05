#include "new_duck.h"


int main()
{
  CDuck *new_duck = new MallarDuck();
  IFlyBehavior *new_fly = new FlyWithWings();
  IQuackBehavior *new_quack = new Quack();
  new_duck -> setFlyBehavior(new_fly);
  new_duck -> setQuackBehavior(new_quack);
  new_duck -> performQuack();
  new_duck -> performFly();
  return 0;
}
