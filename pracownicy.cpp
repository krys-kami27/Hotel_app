#include "pracownicy.h"

void Pracownicy::dodaj(Pracownik* p){
    pracownicy.push_back(p);
}

std::vector<Pracownik*> Pracownicy::wolny_prac(){
    std::vector<Pracownik*> wolni;
    for(auto pracownik_ptr : pracownicy){
        if(pracownik_ptr -> get_stan_pracy() == 0)
            wolni.push_back(pracownik_ptr);
    }
    return wolni;
}
void Pracownicy::stan_pracy_minus_(){
    for(auto pracownik_ptr : pracownicy){
        pracownik_ptr -> stan_pracy_minus();
    }
}

std::vector<Pracownik*> Pracownicy::get_pracownicy(){
    return pracownicy;
}

Pracownik* Pracownicy::get_pracownik(std::string p){
    for(auto pracownik_ptr: pracownicy){
        if (pracownik_ptr -> get_zajety()==0 && pracownik_ptr -> get_pracownik()==p)
            return pracownik_ptr;
    }
    Pracownik pracownik;
    return &pracownik;
}

std::vector<Pracownik*> Pracownicy::pracujacy(){
    std::vector<Pracownik*> p;
    for(auto pracownik_ptr : pracownicy){
        if(pracownik_ptr -> get_stan_pracy() != 0)
            p.push_back(pracownik_ptr);
    }
    return p;
}