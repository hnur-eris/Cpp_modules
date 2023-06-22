#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->name = "DiamondTrop";
    ClapTrap::name = this->name + "_clap_name";
    hitPoint = FragTrap::hitPoint;
    energyPoint = ScavTrap::energyPoint;
    damage = FragTrap::damage;

    cout << "DiamondTrap default constructor called" << endl;
}

DiamondTrap::DiamondTrap(const string &name) : ClapTrap(name + "_clap_name")
{
    this->name = name;
    this->hitPoint = FragTrap::hitPoint;
    this->energyPoint = FragTrap::energyPoint;
    this->damage = FragTrap::damage;
    cout << "DiamondTrap name constructor called" << endl; 
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
    *this = obj;
    cout << "DiamondTrap copy constructor called" << endl;
}


DiamondTrap &DiamondTrap::operator = (const DiamondTrap &obj)
{
    if (this == &obj)
        return *this;
    ClapTrap::name = obj.name + "_clap_name";
    ScavTrap::name = obj.name;
    FragTrap::name = obj.name;
    name = obj.name;
    this->energyPoint = obj.energyPoint;
    this->hitPoint = obj.hitPoint;
    this->damage = obj.damage;
    return *this;

}

void DiamondTrap::whoAmI()
{
    cout << "DiamondTrap " << name << " is actually ClapTrap " << ClapTrap::name << endl;
}

DiamondTrap::~DiamondTrap()
{
    cout << "DiamondTrap destructor called " << endl;
}
