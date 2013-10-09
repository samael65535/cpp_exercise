#include "CObserver.h"
bool CObserver::register(CSolider *solider)
{
  nofity_soliders.push_back(solider);
}

bool CObserver::unregister(CSolider *solider)
{
  for(auto p : notify_soliders){
    if(p == solider){
      delete p;
    }
  }
}

void CObserver::notify(float posX, float posY)
{
  for(auto p : notify_soliders){
    p -> doAction(posX, posY);
  }
}


