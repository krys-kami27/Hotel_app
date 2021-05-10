#ifndef P_RECEPCJONISTA_H
#define P_RECEPCJONISTA_H

#include "pracownik.h"

class Recepcjonista: public Pracownik{
    private:
        static int licznik;
        
        int id;
    public:
        Recepcjonista();
        std::string get_nazwa();
        std::string get_pracownik();
        void set_id();

};
#endif