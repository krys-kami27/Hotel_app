#ifndef WYJATKI_H
#define WYJATKI_H
#include <stdexcept>

class NiepoprawnaLiczbaOsobWPokoju : public std::invalid_argument
{
    public:
        NiepoprawnaLiczbaOsobWPokoju();
};


#endif
