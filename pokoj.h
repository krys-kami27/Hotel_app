#ifndef POKOJ_H
#define POKOJ_H

#include <ostream>
#include "interfejs_pokoj.h"

class Pokoj : InterfejsPokoj{
    protected:
        unsigned int powierzchnia;
        unsigned int cena_s;
        unsigned int liczba_lozek;
        unsigned int rachunek;
        bool wolny = 1;

    public:
        Pokoj();
        int oblicz_cene() override;
        bool get_wolny() override;
        void set_wolny(bool w) override;
        std::string get_opis() override;

        friend std::ostream& operator<<(std::ostream& os, const Pokoj& pokoj);
};


std::ostream& operator<<(std::ostream& os, const Pokoj& pokoj);


#endif