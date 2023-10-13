#ifdef Humains_h
#define Humains_h

#include "Heros.h"

class Humains : public Heros
{
    public:
        void coupDePoing();
    private:
    int m_forcepoing;
};

#endif