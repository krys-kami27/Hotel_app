#ifndef INTERFEJS_GOSC_H
#define INTERFEJS_GOSC_H

#include <string>


class InterfejsGosc
{
    public:
        virtual void stan_czynnosci_minus() = 0;

        virtual void set_przy(int p) = 0;
        virtual void set_odja(int o) = 0;
        virtual void set_stan_czyn(int i) = 0;
        virtual void set_zamel(bool b) = 0;
        virtual void set_czyn(std::string czyn) = 0;
        virtual void set_prac(std::string prac) = 0;
        virtual void set_pok(std::string pok) = 0;
        virtual void set_rachunek(int cena) = 0;

        virtual int get_id() = 0;
        virtual int get_stan_czyn() = 0;
        virtual int get_przyj() = 0;
        virtual int get_odja() = 0;
        virtual bool get_zamel() = 0;
        virtual std::string get_czyn() = 0;
        virtual std::string get_prac() = 0;
        virtual std::string get_pok() = 0;
        virtual std::string get_opis() = 0;
        virtual int get_rachunek() = 0;
        virtual ~InterfejsGosc() = 0;
};


#endif