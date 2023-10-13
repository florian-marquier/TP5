#ifndef Robots_h
#define Robots_h

#include "Heros.h"

class Robats : public Heros
{
    public:
        void utiliserLesGadgets();
    private:
        int m_forcegagets;
};

#endif