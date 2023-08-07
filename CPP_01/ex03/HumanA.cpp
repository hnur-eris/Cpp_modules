#include "HumanA.h"

HumanA::HumanA()
{
    this->wep->setType("constructor Type");
    this->name = "constructor Name";
}

HumanA::HumanA(string moniker, Weapon &type )
{
    this->wep = &type;
    this->name = moniker;
}

void HumanA::attack()
{
    cout << this->name << " attacks with their " << this->wep->getType() << endl;
}

void HumanA::setWeapon(Weapon &type)
{
    this->wep = &type;
}