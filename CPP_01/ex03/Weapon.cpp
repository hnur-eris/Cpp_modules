#include "Weapon.h"

Weapon::Weapon()
{
    this->type = "Undefined Type";
}

Weapon::Weapon(string form)
{
    this->type = form;
}

string const &Weapon::getType()
{
    return this->type;
}

void Weapon::setType(string form)
{
    this->type = form;
}