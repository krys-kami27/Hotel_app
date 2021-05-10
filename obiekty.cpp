#include "obiekty.h"

Obiekty::Obiekty(int i): dlugosc_petli(i){}

void Obiekty::utworz_obiekty(){
    PokojNOsob p1(2);
    PokojNOsob p2(2);
    PokojNOsob p3(3);
    PokojNOsob p4(3);
    PokojNOsob p5(4);
    PokojNOsob p6(4);
    PokojNOsob p7(4);
    Apartament a;
    Studio s;
    pok.dodaj(&p1);
    pok.dodaj(&p2);
    pok.dodaj(&p3);
    pok.dodaj(&p4);
    pok.dodaj(&p5);
    pok.dodaj(&p6);
    pok.dodaj(&p7);
    pok.dodaj(&a);
    pok.dodaj(&s);

    int l;
    Gosc g1;
    l = losowa(8,18) + losowa(0,2) * 24;
    g1.set_przy(l);

    Gosc g2;
    l = losowa(8,18) + losowa(0,2) * 24;
    g2.set_przy(l);

    Gosc g3;
    l = losowa(8,18) + losowa(0,2) * 24;
    g3.set_przy(l);

    Gosc g4;
    l = losowa(8,18) + losowa(0,2) * 24;
    g4.set_przy(l);
    
    Gosc g5;
    l = losowa(8,18) + losowa(0,2) * 24;
    g5.set_przy(l);

    g.dodaj(&g1);
    g.dodaj(&g2);
    g.dodaj(&g3);
    g.dodaj(&g4);
    g.dodaj(&g5);
    

    Recepcjonista r1;
    Recepcjonista r2;
    Recepcjonista r3;
    p.dodaj(&r1);
    p.dodaj(&r2);
    p.dodaj(&r3);

    Pokojowka po1;
    Pokojowka po2;
    p.dodaj(&po1);
    p.dodaj(&po1);

    Kucharz ku1;
    Kucharz ku2;
    p.dodaj(&ku1);
    p.dodaj(&ku1);

    Kelner ke1;
    Kelner ke2;
    p.dodaj(&ke1);
    p.dodaj(&ke1);    

}

Pracownicy Obiekty::get_p(){
    return p;
}

Goscie Obiekty::get_g(){
    return g;
}

Pokoje Obiekty::get_pok(){
    return pok;
}

int Obiekty::get_i(){
    return dlugosc_petli;
}