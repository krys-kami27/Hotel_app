#include "recepcjonista.h"

int Recepcjonista::licznik = 0;

Recepcjonista::Recepcjonista(){
    licznik++;
    id = licznik;
    pracownik = "recepcjonista";
}

std::string Recepcjonista::get_nazwa(){
    return "Recepcjonista nr " + std::to_string(id);
}

std::string Recepcjonista::get_pracownik(){
    return pracownik;
}

void Recepcjonista::set_id(){
    licznik++;
    id = licznik;
}