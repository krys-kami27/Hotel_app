#include "kucharz.h"

int Kucharz::licznik = 0;

Kucharz::Kucharz(): Pracownik() {
    licznik++;
    id = licznik;
    pracownik = "kucharz";
}

std::string Kucharz::get_nazwa(){
    return "Kucharz nr " + std::to_string(id);
}

std::string Kucharz::get_pracownik(){
    return pracownik;
}

void Kucharz::set_id(){
    licznik++;
    id = licznik;
}