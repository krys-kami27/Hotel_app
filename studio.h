#ifndef STUDIO_H
#define STUDIO_H

#include "pokoj.h"

class Studio: public Pokoj{
    private:
        static int licznik;
        int id;
        
    public:
        Studio();
        std::string get_opis();
        void set_id();
};
#endif