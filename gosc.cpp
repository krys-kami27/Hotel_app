#include "gosc.h"

int Gosc::licznik = 0;

Gosc::Gosc()
{
    licznik++;
    id = licznik;
}

void Gosc::stan_czynnosci_minus(){
    if (zameldowany == 1 && stan_czynnosci > 0) stan_czynnosci--;
    if (stan_czynnosci==0){
        czynnosc = "brak";
        pracownik = "brak";
    }
}

void Gosc::set_przy(int p){
    przyjazd = p;
}

void Gosc::set_odja(int o){
    odjazd = o;
}

void Gosc::set_czyn(std::string czyn){
    czynnosc = czyn;
}

void Gosc::set_stan_czyn(int i){
    stan_czynnosci = i;
}

void Gosc::set_zamel(bool b){
    zameldowany = b;
}

void Gosc::set_prac(std::string prac){
    pracownik = prac;
}

void Gosc::set_pok(std::string pok){
    pokoj = pok;
}

void Gosc::set_rachunek(int cena){
    rachunek += cena;
}
void Gosc::set_rach(){
    rachunek = 0;
}
void Gosc::set_id(){
    licznik++;
    id = licznik;
}
void Gosc::set_przyjazd(int i){
    przyjazd = i;
}
int Gosc::get_rachunek(){
    return rachunek;
}


int Gosc::get_stan_czyn(){
    return stan_czynnosci;
}

bool Gosc::get_zamel(){
    return zameldowany;
}

int Gosc::get_przyj(){
    return przyjazd;
}

int Gosc::get_odja(){
    return odjazd;
}

int Gosc::get_id(){
    return id;
}

std::string Gosc::get_czyn(){
    return czynnosc;
}

std::string Gosc::get_prac(){
    return pracownik;
}

std::string Gosc::get_pok(){
    return pokoj;
}

std::string Gosc::get_opis(){
    return "Gosc nr " + std::to_string(id);
}


std::ostream& operator<<(std::ostream& os, const Gosc& gosc)
{
    //if (gosc.pracownik=="brak")
    //os << "Gosc nr " << gosc.id << " " << gosc.czynnosc << "przez " << gosc.stan_czynnosci << "godzin";
    os << "ID. " << gosc.id << "\n" <<
    "Stan czynnosci: " << gosc.stan_czynnosci << "\n"
    "Przyjazd: " << gosc.przyjazd << "\n" <<
    "Odjazd: " << gosc.odjazd << "\n" <<
    "Zameldowany? : " << gosc.zameldowany << "\n" <<
    "Stan czynnosci: " << gosc.czynnosc << "\n" <<
    "Pokoj: " << gosc.pokoj << "\n";

    return os;
}
