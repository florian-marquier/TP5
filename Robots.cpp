#include <stdio.h>
#include "Robots.h"
#include <string>

using namespace std;

Robots::Robots(string nomheros, int vieheros, string nomarme, int puissancearme, int forcegadgets) : Heros(nomheros, vieheros, nomarme, puissancearme), m_forcegagets(20)
{

}

Robots::Robots(string nomheros, int vieheros, string nomarme, int puissancearme, int forcegadgets) : Heros(nomheros, vieheros, nomarme, puissancearme), m_forcegagets(forcegadgets)
{
    
}