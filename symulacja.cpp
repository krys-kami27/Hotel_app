#include "symulacja.h"

Symulacja::Symulacja(int i, Pracownicy p, Goscie g, Pokoje pok, std::vector < std::vector < std::string > > czyn):
dlugosc_petli(i), pracownicy(p), goscie(g), pokoje(pok), czynnosci(czyn){}

void Symulacja::start(){
    Interakcje inter(goscie,pracownicy,pokoje);
    std::cout<<"cos";
    for(int i=0; i<dlugosc_petli; i++){
        inter.zamelduj(i); //przydziel czas przyjazdu
        //inter.wymelduj(i);
        //inter.czynnosci_gosci(i,czynnosci);
        //inter.wypisz_komunikaty(i);
        //inter.stan_pracy_dekr();

    }
}