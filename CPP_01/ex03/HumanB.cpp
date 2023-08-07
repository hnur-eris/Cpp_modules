#include "HumanB.h"

HumanB::HumanB()
{
    this->wep = NULL;
    this->name = "constructor Name";
}

HumanB::HumanB(string moniker)
{
    this->wep = NULL;
    this->name = moniker;
}

void HumanB::attack()
{
    if (this->wep == NULL)
        cout << this->name << "does not have a weapon " << endl;
    else
        cout << this->name << " attacks with their " << this->wep->getType() << endl;
}

void HumanB::setWeapon(Weapon &type)
{
    this->wep = &type;
}