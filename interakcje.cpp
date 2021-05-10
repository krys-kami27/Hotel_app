#include "interakcje.h"

Interakcje::Interakcje(Goscie g, Pracownicy p, Pokoje pok):
goscie(g), pracownicy(p), pokoje(pok){}

void Interakcje::czynnosci_gosci(int i, std::vector < std::vector < std::string > > czynnosci)
{
    std::string typ_pracownika;
    int l;
    int rozmiar = czynnosci.size();
    Pracownik* p;
    std::vector<Gosc*> g_bezc = goscie.brak_czynnosci();
    std::vector<Pracownik*> p_bezc = pracownicy.wolny_prac();

    for (auto gosc_ptr : g_bezc){

        if (i%24 >=23 || i%24 <= 4){
            gosc_ptr -> set_czyn("spi");
            gosc_ptr -> set_stan_czyn(losowa(8,10));
        }
        else
        {
            l = losowa(0,rozmiar);
            gosc_ptr -> set_czyn(czynnosci[l][0]);
            gosc_ptr -> set_stan_czyn(std::stoi(czynnosci[l][1]));

            if (czynnosci[l][2] != "nie")
            {
                typ_pracownika = czynnosci[l][2];
                p = pracownicy.get_pracownik(typ_pracownika);
                p -> set_gosc(gosc_ptr->get_opis());
                p -> set_praca(czynnosci[l][3]);
                p -> set_stan_pracy(std::stoi(czynnosci[l][1]));
                gosc_ptr -> set_prac(p->get_nazwa());
            }

        }
    }
}
void Interakcje::zamelduj(int i){
    std::vector<Gosc*> przyjezdni = goscie.przyjazd(i);
    std::vector<Pokoj*> wolne_p = pokoje.wolne();
    Pokoj* p;
    Pracownik* pr;
    if (!(wolne_p.empty()))
    //wolne pokoje dostępne
    {
        for(auto gosc_ptr : przyjezdni)
        {
            int ile_dni = losowa(1,14);
            ile_dni = ile_dni * 24 + gosc_ptr -> get_przyj();
            gosc_ptr -> set_odja(ile_dni);
            p = wolne_p[losowa(0,wolne_p.size())];
            p -> set_wolny(0);
            gosc_ptr -> set_pok(p -> get_opis());
            gosc_ptr -> set_zamel(1);
            gosc_ptr -> set_czyn("melduje się w hotelu");
            gosc_ptr -> set_stan_czyn(1);
            pr = pracownicy.get_pracownik("recepcjonista");
            gosc_ptr -> set_prac(pr->get_nazwa());
            pr -> set_gosc(gosc_ptr -> get_opis());
            pr -> set_stan_pracy(1);
            pr -> set_praca("melduje");
        }
    }
    else
    //wolne pokoje niedostepne
    {
        for(auto gosc_ptr : przyjezdni)
        {
            int n_termin=gosc_ptr->get_przyj() + losowa(1,8);
            gosc_ptr->set_przy(n_termin);
        }
    }
}

void Interakcje::stan_pracy_dekr(){
    goscie.stan_czynnosci_minus_();
    pracownicy.stan_pracy_minus_();
}

void Interakcje::wymelduj(int i){
    std::vector<Gosc*> odjezdni = goscie.odjazd(i);
    std::vector<Pracownik*> p_bezc = pracownicy.wolny_prac();
    Pracownik* p;
    Pokoj* pok;

    for(auto gosc_ptr : odjezdni){
        if (losowa(1,10)==5){
            gosc_ptr -> set_odja(losowa(1,7)*24);
            gosc_ptr -> set_stan_czyn(1);
            gosc_ptr -> set_czyn("przedluza pobyt");
            p = pracownicy.get_pracownik("recepcjonista");
            p -> set_gosc(gosc_ptr->get_opis());
            p -> set_stan_pracy(1);
            p -> set_praca("przedluza pobyt");
            p -> set_gosc(gosc_ptr ->get_opis());
        }
        else
        {
            gosc_ptr -> set_zamel(0);
            gosc_ptr -> set_stan_czyn(1);
            gosc_ptr -> set_czyn("wymeldowuje sie"); //nie wypisze komunikatu
            pok = pokoje.znajdz_pokoj(gosc_ptr->get_pok());
            pok -> set_wolny(1);
            p = pracownicy.get_pracownik("recepcjonista");
            p -> set_gosc(gosc_ptr->get_opis());
            p -> set_stan_pracy(1);
            p -> set_praca("wymeldowuje");
        }
    }
}

void Interakcje::wypisz_komunikaty(int i){
    std::vector<Gosc*> g = goscie.whotelu();
    std::vector<Pracownik*> p = pracownicy.pracujacy();
    std::string godz = "Godzina: " + std::to_string(i) + ":00\n";
    std::cout << godz;
    std::ofstream plik;
    plik.open("symulacja.txt", std::ofstream::app);
    plik<<godz;

    for (auto gosc_ptr : g){
        std::cout << *gosc_ptr << std::endl;
        plik << *gosc_ptr << std::endl;
    }

    for (auto prac_ptr : p){
        std::cout << *prac_ptr << std::endl;
        plik << *prac_ptr << std::endl;
    }
    plik.close();

}
