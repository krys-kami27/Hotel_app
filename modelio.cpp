#include "modelio.h"
#include <iostream>

ModelIO::ModelIO(std::string filename)
{
    this->filename = filename;
}

void ModelIO::write_to_file(std::vector < std::vector < std::string > > data)
{
    std::string linia = "";
    int flag1 = 0;
    int flag2 = 0;
    std::fstream plik;
    plik.open(this->filename, std::ios::out);
    for (auto const& element : data)
    {
        if (flag1 == 1)
        {
            linia += ',';
        }
        flag1 = 1;
        for (auto const& value : element)
        {
            if (flag2 == 1)
            {
                linia += ',';
            }
            flag2 = 1;
            std::cout << value << std::endl;
            linia += value;
        }
        linia += "\n";
    flag1 = 0;
    flag2 = 0;
    }
    std::cout << linia << std::endl;
    plik<<linia<<std::endl;
    plik.close();
}

std::vector < std::vector < std::string > > ModelIO::read_from_file()
{
    std::vector < std::vector < std::string > > wektor;
    std::fstream plik;
    plik.open(this->filename, std::ios::in);
    if (plik.good() == false)
    {std::cout << "Plik nie istnieje" << std::endl;}
    else
    {
        std::string linia;
        int nr_linii=1;
        while (getline(plik, linia))
        {
            std::string str = linia;
            std::vector<std::string> strings;
            size_t start;
            size_t end = 0;
            while ((start = str.find_first_not_of(",", end)) != std::string::npos)
            {
                end = str.find(",", start);
                strings.push_back(str.substr(start, end - start));
            }
            wektor.push_back(strings);
            nr_linii++;
        }
    }
    plik.close();
    return wektor;
}