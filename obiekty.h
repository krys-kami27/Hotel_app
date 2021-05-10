#ifndef OBIEKTY_H
#define OBIEKTY_H

#include "goscie.h"
#include "pokoje.h"
#include "pracownicy.h"
#include "losuj.h"
#include "pokoj_n_osobowy.h"
#include "apartament.h"
#include "studio.h"
#include "recepcjonista.h"
#include "pokojowka.h"
#include "kelner.h"
#include "kucharz.h"
#include "gosc.h"

#include <iostream>
#include <vector>

class Obiekty: public Losuj{
    private:
        std::vector < std::vector < std::string > > dane;
        Pracownicy p;
        Goscie g;
        Pokoje pok;
        int dlugosc_petli;
    public:
        Obiekty(int i);
        void utworz_obiekty();
        Pracownicy get_p();
        Goscie get_g();
        Pokoje get_pok();
        int get_i();
};

#endif