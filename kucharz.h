#ifndef KUCHARZ_H
#define KUCHARZ_H

#include "pracownik.h"

class Kucharz: public Pracownik{
    private:
        static int licznik;
        int id;
    public:
        Kucharz();
        std::string get_nazwa();
        std::string get_pracownik();
        void set_id();
};
#endif