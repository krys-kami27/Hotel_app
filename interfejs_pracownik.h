#ifndef INTERFEJS_PRACOWNIK_H
#define INTERFEJS_PRACOWNIK_H

#include <string>

class InterfejsPracownik
{
    public:
        virtual void stan_pracy_minus() = 0;

        virtual void set_stan_pracy(int i) = 0;
        virtual void set_gosc(std::string g) = 0;
        virtual void set_praca(std::string p) = 0;

        virtual unsigned int get_stan_pracy() = 0;
        virtual std::string get_nazwa() = 0;
        virtual std::string get_pracownik() = 0;
        virtual bool get_zajety() = 0;
        virtual ~InterfejsPracownik() = 0;
};


#endif
