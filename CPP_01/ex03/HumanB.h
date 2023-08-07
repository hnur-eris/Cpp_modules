#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"

class HumanB 
{
    private :
        Weapon *wep;
        string name;
    public :
        HumanB();
        HumanB(string moniker);
        void attack();
        void setWeapon(Weapon &type);
};

#endif