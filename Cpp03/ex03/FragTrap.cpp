#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->name = "FragTrap";
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->damage = 30;

    cout << "FragTrap default constructor called" << endl;
}

FragTrap::FragTrap(const string &name)
{
    this->name = name;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->damage = 30;

    cout << "FragTrap name constructor called" << endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    *this = obj;

    cout << " FragTrap Copy constructor called" << endl;
}

FragTrap::~FragTrap()
{
    cout << "FragTrap destructor called" << endl;
}

FragTrap &FragTrap::operator = (const FragTrap &obj)
{
    this->name = obj.name;
    this->hitPoint = obj.hitPoint;
    this->energyPoint = obj.energyPoint;
    this->damage = obj.damage;

    cout << "FragTrap copy assignment operator called" << endl;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    if (this->hitPoint > 0 && this->energyPoint > 0)
        cout << "FragTrap " << this->name << " high fives " << endl;
    else
        cout << "FragTrap " << this->name << " had dead" << endl;
}