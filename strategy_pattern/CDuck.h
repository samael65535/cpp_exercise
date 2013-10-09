//  使用策略模式生成鸭子
//
//              by samael
//

#include <iostream>
// 鸭子的飞行接口
class IFlyBehavior
{
 public:
  virtual void fly() = 0;
};

// 鸭子的叫声接口
class IQuackBehavior
{
 public:
  virtual void quack() = 0;
};

class CDuck
{
 public :
  void swim();
  virtual void display() = 0;
  void performQuack();
  void performFly();
  void setFlyBehavior(IFlyBehavior *ifly);
  void setQuackBehavior(IQuackBehavior *iquack);
 private:
  IFlyBehavior *flyBehavior;
  IQuackBehavior *quackBehavior;
};
