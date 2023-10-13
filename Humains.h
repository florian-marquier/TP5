#ifndef Humains_h
#define Humains_h

#include "Heros.h"

class Humains : public Heros
{
    public:
        Humains(std::string nomheros, int vieheros, std::string nomarme, int puissancearme);
        Humains(std::string nomheros, int vieheros, std::string nomarme, int puissancearme, int forcepoing);
        void coupDePoing();
    private:
        int m_forcepoing;
};
#include "Humains.cpp"
#endif