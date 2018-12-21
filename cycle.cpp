#include "cycle.h"

Cycle::Cycle(std::string &nfio, std::string &ntype, int nstazh):
    FIO(nfio), type(ntype), stazh(nstazh){
}

void Cycle::print() {
    std::cout << "ФИО:" << this->FIO;
    std::cout << "Тип:" << this->type;
    std::cout << "Стаж:" << this->stazh << "\n";
}