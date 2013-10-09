#include "CSolider.h"
class CObserver{
 public:
  bool register(CSolider *solider);
  bool unregister(CSolider *solider);
  void notify(float posX, float posY);
 private:
  std::vector<CSolider *> notify_soliders;
};

