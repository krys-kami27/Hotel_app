#include "pokoj_n_osobowy.h"
#include "wyjatki.h"

int PokojNOsob::licznik = 0;

PokojNOsob::PokojNOsob(unsigned int l): liczba_osob(l)
{
    licznik++;
    id = licznik;
}

std::string PokojNOsob::get_opis(){
    return "pokoj " + std::to_string(liczba_osob) + " osobowy nr " + std::to_string(id);
}

void PokojNOsob::set_liczba_osob(int i){
    liczba_osob = i;
}

void PokojNOsob::set_id(){
    licznik++;
    id = licznik;
}