class CSolider{
 public:
  virtual void doAction(CSolider *solider) = 0;
 private:
  int m_attack;
  int m_hp;
  float m_scale;
};




