#include "pracownik.h"

Pracownik::Pracownik(){

}

unsigned int Pracownik::get_stan_pracy(){
    return stan_pracy;
}

void Pracownik::stan_pracy_minus(){
    if (stan_pracy>0){
        stan_pracy--;
    }
    if (stan_pracy==0){
        praca= "brak";
        gosc= "brak";
    }
}

std::string Pracownik::get_nazwa()
{
    return "Pracownik";
}

void Pracownik::set_praca(std::string p){
    praca = p;
}

void Pracownik::set_gosc(std::string g){
    gosc = g;
}

void Pracownik::set_zaj(bool i){
    zajety = i;
}

void Pracownik::set_stan_pracy(int i){
    stan_pracy = i;
}

void Pracownik::set_prac(std::string p){
    pracownik = p;
}

bool Pracownik::get_zajety()
{
    return zajety;
}

std::string Pracownik::get_pracownik(){
    return pracownik;
}

std::ostream& operator<<(std::ostream& os, const Pracownik& pracownik)
{

    os << "Status: " << pracownik.zajety << "\n" <<
    "Stan pracy: " << pracownik.stan_pracy << "\n"
    "Praca: " << pracownik.praca << "\n";

    return os;
}
