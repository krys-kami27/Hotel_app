#include "goscie.h"

void Goscie::dodaj(Gosc* g){
    goscie.push_back(g);
}

void Goscie::stan_czynnosci_minus_(){
    for(auto gosc_ptr : goscie){
        gosc_ptr -> stan_czynnosci_minus();
    }
}

std::vector<Gosc*> Goscie::brak_czynnosci(){
    std::vector<Gosc*> bez_c;
    for(auto gosc_ptr : goscie){
        if (gosc_ptr -> get_zamel()==true && gosc_ptr -> get_stan_czyn() == 0)
            bez_c.push_back(gosc_ptr);
    }
    return bez_c;
}

std::vector<Gosc*> Goscie::get_goscie(){
    return goscie;
}
std::vector<Gosc*> Goscie::przyjazd(int i){
    std::vector<Gosc*> przyjezdni;
    for(auto gosc_ptr : goscie){
        if (gosc_ptr->get_przyj()== i)
            przyjezdni.push_back(gosc_ptr);
    }
    return przyjezdni;
}

std::vector<Gosc*> Goscie::odjazd(int i){
    std::vector<Gosc*> odjezdni;
    for(auto gosc_ptr : goscie){
        if (gosc_ptr->get_odja()== i)
            odjezdni.push_back(gosc_ptr);
    }
    return odjezdni;
}

std::vector<Gosc*> Goscie::whotelu(){
    std::vector<Gosc*> wh;
    for(auto gosc_ptr : goscie){
        if (gosc_ptr->get_zamel() == 1)
            wh.push_back(gosc_ptr);
    }
    return wh;
}

Goscie& Goscie::operator=(const Goscie& gos){
    if(this != &gos){
        goscie = gos.goscie;
    }
    return *this;
}