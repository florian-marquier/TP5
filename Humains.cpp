#include <stdio.h>
#include "Humains.h"
#include <string>

using namespace std;

Humains::Humains(string nomheros, int vieheros, string nomarme, int puissancearme) : Heros(nomheros, vieheros, nomarme, puissancearme), m_forcepoing(50)
{

}

Humains::Humains(string nomheros, int vieheros, string nomarme, int puissancearme, int forcepoing) : Heros(nomheros, vieheros, nomarme, puissancearme), m_forcepoing(forcepoing)
{
    
}