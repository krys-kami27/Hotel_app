#ifndef KELNER_H
#define KELNER_H

#include "pracownik.h"

class Kelner: public Pracownik{
    private:
        static int licznik;
        int id;
    public:
        Kelner();
        std::string get_nazwa();
        std::string get_pracownik();
        void set_id();
};
#endif