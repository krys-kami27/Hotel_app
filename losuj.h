#ifndef LOSUJ_H
#define LOSUJ_H

#include <random>
#include <chrono>

class Losuj{
    public:
        int losowa(int min, int max){
                unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
                std::mt19937 generator(seed);
                std::uniform_int_distribution<int> przedzial(min,max);
                return przedzial(generator);
        }
};

#endif