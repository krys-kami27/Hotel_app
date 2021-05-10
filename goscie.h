#ifndef GOSCIE_H
#define GOSCIE_H

#include "gosc.h"
#include "vector"
#include <iostream>

class Goscie{
    private:
        std::vector<Gosc*> goscie;
    public:
        void dodaj(Gosc* g);
        void stan_czynnosci_minus_();
        std::vector<Gosc*> brak_czynnosci();
        std::vector<Gosc*> get_goscie();
        std::vector<Gosc*> przyjazd(int i);
        std::vector<Gosc*> odjazd(int i);
        std::vector<Gosc*> whotelu();
        Goscie& operator=(const Goscie& gos);
        void pol(){
            for(auto ptr:goscie){
                std::cout<<(*ptr);
            }
        }
        friend std::ostream& operator<<(std::ostream& os, const Goscie& goscie);
        
};


std::ostream& operator<<(std::ostream& os, const Goscie& goscie);


#endif