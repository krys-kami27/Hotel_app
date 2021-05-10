#ifndef INTERFEJS_POKOJ_H
#define INTERFEJS_POKOJ_H

#include <iostream>

class InterfejsPokoj
{
    public:
        virtual int oblicz_cene() = 0;
        virtual bool get_wolny() = 0;
        virtual ~InterfejsPokoj() = 0;
        virtual void set_wolny(bool w) = 0;
        virtual std::string get_opis() = 0;
};


#endif
