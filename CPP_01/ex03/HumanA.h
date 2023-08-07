#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"

class HumanA 
{
    private :
        Weapon *wep;
        string name;
    public :
        HumanA();
        HumanA(string moniker, Weapon &type);
        void attack();
        void setWeapon(Weapon &type);
};

#endif