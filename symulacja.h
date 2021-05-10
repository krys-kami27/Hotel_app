#ifndef SYMULACJA_H
#define SYMULACJA_H

#include "pracownicy.h"
#include "goscie.h"
#include "pokoje.h"
#include "interakcje.h"

class Symulacja{
    private:
        int dlugosc_petli;
        Pracownicy pracownicy;
        Goscie goscie;
        Pokoje pokoje;
        std::vector < std::vector < std::string > > czynnosci;
    public:
        Symulacja(int i, Pracownicy p, Goscie g, Pokoje pok, std::vector < std::vector < std::string > > czyn);
        void start();


};

#endif