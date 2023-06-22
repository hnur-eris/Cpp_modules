#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->name = "DiamondTrap";
    hitPoint = FragTrap::hitPoint;
    energyPoint = ScavTrap::energyPoint;
    damage = FragTrap::damage;

    cout << "DiamondTrap default constructor called" << endl;
}

DiamondTrap::DiamondTrap(const string &name)
{
    this->name = name + "_clap_name";
    hitPoint = FragTrap::hitPoint;
    energyPoint = ScavTrap::energyPoint;
    damage = FragTrap::damage;
    cout << "DiamondTrap name constructor called" << endl; 
}

void DiamondTrap::attack(const string &target)
{
    cout << "DiamondTrap attack function called" << endl;
    ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
    *this = obj;
    cout << "DiamondTrap copy constructor called" << endl;
}


DiamondTrap &DiamondTrap::operator = (const DiamondTrap &obj)
{
    cout << "DiamondTrap copy assignment operator "<< endl;

    if (this != &obj)
        return *this;
    ClapTrap::name = obj.name + "_clap_name";
    name = obj.name;
    this->energyPoint = obj.energyPoint;
    this->hitPoint = obj.hitPoint;
    this->damage = obj.damage;

    return *this;
}

void DiamondTrap::whoAmI()
{
    cout << "DiamondTrap " << name << " inherited from " << ClapTrap::name << endl;
}

DiamondTrap::~DiamondTrap()
{
    cout << "DiamondTrap destructor called" << endl;
}
