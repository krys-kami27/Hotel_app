#include "pokoje.h"

void Pokoje::dodaj(Pokoj* p){
    pokoje.push_back(p);
}

std::vector<Pokoj*> Pokoje::wolne(){
    std::vector<Pokoj*> w;
    for(auto pokoj_ptr : pokoje){
        if (pokoj_ptr -> get_wolny()== 1)
            w.push_back(pokoj_ptr);
    }
    return w;
}

std::vector<Pokoj*> Pokoje::get_pokoje(){
    return pokoje;
}

Pokoj* Pokoje::znajdz_pokoj(std::string opis){
    for (auto pokoj_ptr : pokoje){
        if(pokoj_ptr ->get_opis() == opis)
            return pokoj_ptr;
    }
}