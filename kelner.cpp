#include "kelner.h"

int Kelner::licznik = 0;

Kelner::Kelner(): Pracownik() {
    licznik++;
    id = licznik;
    pracownik = "kelner";
}

std::string Kelner::get_nazwa(){
    return "Kelener nr " + std::to_string(id);
}

std::string Kelner::get_pracownik(){
    return pracownik;
}

void Kelner::set_id(){
    licznik++;
    id = licznik;
}