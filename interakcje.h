#ifndef INTERAKCJE_H
#define INTERAKCJE_H

#include <vector>
#include "goscie.h"
#include "pracownicy.h"
#include "pokoje.h"
#include "losuj.h"
#include <iostream>
#include <fstream>

class Interakcje: public Losuj{
    private:
        Goscie goscie;
        Pracownicy pracownicy;
        Pokoje pokoje;
    public:
        Interakcje(Goscie g, Pracownicy p, Pokoje pok);
        void czynnosci_gosci(int i, std::vector < std::vector < std::string > > czynnosci);
        void zamelduj(int i);
        void wymelduj(int i);
        void stan_pracy_dekr();
        void wypisz_komunikaty(int i);
};

#endif