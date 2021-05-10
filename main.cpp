#include <vector>
#include <iostream>
#include <fstream>
#include "modelio.h"
#include <windows.h>
#include <unistd.h>
#include "symulacja.h"
#include "interakcje.h"
#include "obiekty.h"



int main(int argc, char *argv[])
{
    ModelIO m("hh.txt");
    std::vector < std::vector <std::string> > wektor;
    wektor = m.read_from_file();

    Obiekty o(24);
    o.utworz_obiekty();
    //Goscie g = o.get_g();
    //g.pol();
    //Pracownicy p = o.get_p();
    //Pokoje pok = o.get_pok();
    Symulacja symulacja(o.get_i(),o.get_p(),o.get_g(),o.get_pok(),wektor);
    symulacja.start();
    return 0;
}
