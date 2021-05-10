#include "studio.h"

int Studio::licznik = 0;

Studio::Studio(){
    licznik++;
    id = licznik;
}

std::string Studio::get_opis(){
    return "studio nr " + std::to_string(id);
}

void Studio::set_id(){
    licznik++;
    id = licznik;
}