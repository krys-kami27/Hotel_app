#ifndef GOSC_H
#define GOSC_H

#include <ostream>
#include "interfejs_gosc.h"


class Gosc : public InterfejsGosc{
    private:
        static int licznik;
        int id;
        int stan_czynnosci = 0;
        int przyjazd;
        int odjazd;
        bool zameldowany= false;
        int rachunek = 0;
        std::string czynnosc = "brak";  //przyda sie do komunikatow
        std::string pracownik = "brak";
        std::string pokoj = "brak";
    public:
        Gosc();
        void stan_czynnosci_minus() override;

        void set_przy(int p) override;
        void set_odja(int o) override;
        void set_stan_czyn(int i) override;
        void set_zamel(bool b) override;
        void set_czyn(std::string czyn) override;
        void set_prac(std::string prac) override;
        void set_pok(std::string pok) override;
        void set_rachunek(int cena) override;
        void set_rach();
        void set_id();
        void set_przyjazd(int i);

        int get_id() override;
        int get_stan_czyn() override;
        int get_przyj() override;
        int get_odja() override;
        bool get_zamel() override;
        std::string get_czyn() override;
        std::string get_prac() override;
        std::string get_pok() override;
        std::string get_opis() override;
        int get_rachunek() override;
        friend std::ostream& operator<<(std::ostream& os, const Gosc& gosc);
};


std::ostream& operator<<(std::ostream& os, const Gosc& gosc);


#endif
