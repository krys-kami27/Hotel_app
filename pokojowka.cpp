#include "pokojowka.h"

int Pokojowka::licznik = 0;

Pokojowka::Pokojowka(): Pracownik() {
    pracownik = "pokojowka";
    licznik++;
    id = licznik;
}

std::string Pokojowka::get_nazwa(){
    return "Pracownik, pokojowka nr " + std::to_string(id);
}

std::string Pokojowka::get_pracownik(){
    return pracownik;
}

void Pokojowka::set_id(){
    licznik++;
    id = licznik;
}