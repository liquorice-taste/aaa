#include <iostream>

class Cycle {
  private:
    std::string FIO;
    std::string type;
    int stazh;
  public:
    Cycle(std::string &nfio, std::string &ntype, int nstazh);
    void print();
};
