#ifndef APARTAMENT_H
#define APARTAMENT_H

#include "pokoj.h"


class Apartament: public Pokoj{
    private:
        static int licznik;
        int id;
    public:
        Apartament();
        std::string get_opis();
        void set_id();
};
#endif