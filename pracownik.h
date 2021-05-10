#ifndef PRACOWNIK_H
#define PRACOWNIK_H

#include <iostream>
#include <ostream>
#include "interfejs_pracownik.h"

class Pracownik : public InterfejsPracownik{
    protected:
        bool zajety; // wartosc 0 - wolny, 1 - zajety
        unsigned int stan_pracy=0;
        std::string pracownik = "pracownik";
        std::string praca = "brak";
        std::string gosc = "brak";
    public:
        Pracownik();
        void stan_pracy_minus() override;

        void set_stan_pracy(int i) override;
        void set_gosc(std::string g) override;
        void set_praca(std::string c) override;
        void set_zaj(bool i);
        void set_prac(std::string p);

        unsigned int get_stan_pracy() override; // wartosc 0 - dekrementujemy, 1 inkrementujemy ilosc pracy
        std::string get_nazwa() override;       //zwraca pracownika + id
        std::string get_pracownik() override;   //zwraca pracownika
        bool get_zajety() override;

        friend std::ostream& operator<<(std::ostream& os, const Pracownik& pracownik);
};


std::ostream& operator<<(std::ostream& os, const Pracownik& pracownik);

#endif