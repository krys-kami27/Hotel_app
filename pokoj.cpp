#include "pokoj.h"


bool Pokoj::get_wolny(){
    return wolny;
}


Pokoj::Pokoj(){
    wolny=true;
}

int Pokoj::oblicz_cene()
{
    return rachunek;
}

void Pokoj::set_wolny(bool w){
    wolny = w;
}

std::string Pokoj::get_opis(){
    return "Pokoj";
}

std::ostream& operator<<(std::ostream& os, const Pokoj& pokoj)
{

    os << "Powierzchnia. " << pokoj.powierzchnia << "\n" <<
    "Cena: " << pokoj.cena_s << "\n"
    "Liczba lozek: " << pokoj.liczba_lozek << "\n" <<
    "Rachunek: " << pokoj.rachunek << "\n" <<
    "Wolny? : " << pokoj.wolny << "\n";

    return os;
}
