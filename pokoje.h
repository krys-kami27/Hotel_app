#ifndef POKOJE_H
#define POKOJE_H

#include <vector>
#include "pokoj.h"

class Pokoje{
    private:
        std::vector<Pokoj*> pokoje;
    public:
        void dodaj(Pokoj* p);
        std::vector<Pokoj*> wolne();
        std::vector<Pokoj*> get_pokoje();
        Pokoj* znajdz_pokoj(std::string opis);
};
#endif
