#include "controller.h"

Controller::Controller(){
    rabotayem = true;

}

void Controller::sukapokrugu(){
    int menu_choice;
    std::string nfio, ntype;
    int nstazh;
    int num;
    while (rabotayem) {
        std::cout << "1:Add" << std::endl;
        std::cout << "2:Delete" << std::endl;
        std::cout << "3:Update" << std::endl;
        std::cout << "4:Print list" << std::endl;
        std::cout << "5:Exit" << std::endl;
        std::cin >> menu_choice;
        switch (menu_choice){
            case 1 :
                std::cin >> nfio;
                std::cin >> ntype;
                std::cin >> nstazh;
                std::cout << "\n";
                if (add(nfio, ntype, nstazh)){
                    std::cout << "success";
                } else {
                    std::cout << "fail";
                };
                break;
            case 2 :
                std::cin >> num;
                if (del(num)) {
                    std::cout << "success";
                } else {
                    std::cout << "fail";
                };
                break;
            case 3 :
                std::cin >> num;
                std::cin >> nfio;
                std::cin >> ntype;
                std::cin >> nstazh;
                if (upd(num, nfio, ntype, nstazh)) {
                    std::cout << "success";
                } else {
                    std::cout << "fail";
                };
            break;
            case 4 :
                print_list();
                break;
            case 5 :
                rabotayem = false;
                break;
            
            default:
                std::cout << "obosralsya";
                break;
        }
    }
}

bool Controller::add(std::string &nfio, std::string &ntype, int nstazh){
    clist.push_back(new Cycle(nfio, ntype, nstazh));
    return true;
};
bool Controller::del(int ind){
    clist.erase(clist.begin() + ind - 1);
};

bool Controller::upd(int ind, std::string &nfio, std::string &ntype, int nstazh){
    clist.at(ind - 1) = new Cycle(nfio, ntype, nstazh);

};

void Controller::print_list() {
    int count = 0;
    for (auto & it : clist) {
        count++;
        std::cout << count << ")";
        it->print();
    }
};