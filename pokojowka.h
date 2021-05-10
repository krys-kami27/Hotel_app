#ifndef POKOJOWKA_H
#define POKOJOWKA_H

#include "pracownik.h"

class Pokojowka: public Pracownik{
    private:
        static int licznik;
        int id;
    public:
        Pokojowka();
        std::string get_nazwa();
        std::string get_pracownik();
        void set_id();
};
#endif