#include "controller.h"

int main(){
    Controller* c = new Controller();
    //test1
    std::string fio = "hi";
    std::string type = "type";
    int stazh = 7;
    c->add(fio, type, stazh);
    c->add(fio, type, stazh);
    c->add(fio, type, stazh);
    if (c->vec_size() == 3) {
        std::cout << "Success1" << std::endl;
    } else {
        std::cout << "Failure1" << std::endl;
    }
    //test2

    c->add(fio, type, stazh);
    if ((c->last_el()->getFIO() == fio) && (c->last_el()->gettype() == type) && (c->last_el()->getstazh() == stazh) ) {
        std::cout << "Success2" << std::endl;
    } else {
        std::cout << "Failure2" << std::endl;
    }

    

    //test3
    c->del(2);
    if (c->vec_size() < 4) {
        std::cout << "Success3" << std::endl;
    } else {
        std::cout << "Failure3" << std::endl;
    }

    //test4
    c->upd(2, fio, type, stazh);
    if ((c->clist.at(2)->getFIO() == fio) && (c->clist.at(2)->gettype() == type) & (c->clist.at(2)->getstazh() == stazh)) {
        std::cout << "Success4" << std::endl;
    } else {
        std::cout << "Failure4" << std::endl;
    }
    return 0;
}