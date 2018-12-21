
#include <iostream>
#include <vector>
#include "cycle.h"

class Controller{
  private:
    bool rabotayem;
    std::vector<Cycle*> clist;
  public:
    Controller();
    void sukapokrugu();
    bool add(std::string &nfio, std::string &ntype, int nstazh);
    bool del(int ind);
    bool upd(int ind, std::string &nfio, std::string &ntype, int nstazh);
    void print_list();
};