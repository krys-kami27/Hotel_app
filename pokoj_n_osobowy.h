#ifndef POKOJ_N_OSOB
#define POKOJ_N_OSOB

#include "pokoj.h"

class PokojNOsob: public Pokoj{
    private:
        static int licznik;
        int id;
        unsigned int liczba_osob;
    public:
        PokojNOsob(unsigned int l);
        std::string get_opis() override;
        void set_liczba_osob(int i);
        void set_id();
};
#endif