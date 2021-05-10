#ifndef PRACOWNICY_WEKTOR_H
#define PRACOWNICY_WEKTOR_H

#include <vector>
#include "pracownik.h"

class Pracownicy{
    private:
        std::vector<Pracownik*> pracownicy;
    public:
        void dodaj(Pracownik* p);
        std::vector<Pracownik*> wolny_prac();
        void stan_pracy_minus_();
        std::vector<Pracownik*> get_pracownicy();
        std::vector<Pracownik*> pracujacy();
        Pracownik* get_pracownik(std::string p);

};
#endif