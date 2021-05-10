#include "apartament.h"

int Apartament::licznik = 0;

Apartament::Apartament(){
    //licznik++;
    //id = licznik;
}

std::string Apartament::get_opis(){
    return "apartament nr " + std::to_string(id);
}

void Apartament::set_id(){
    licznik++;
    id = licznik;
}