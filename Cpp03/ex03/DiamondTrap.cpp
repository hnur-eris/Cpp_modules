#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    cout << "DiamondTrap default constructor called" << endl;
}

DiamondTrap::DiamondTrap(const string &name)
{
    this->name = name;
    cout << "DiamondTrap name constructor called" << endl; 
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
    *this = obj;
    cout << "DiamondTrap copy constructor called" << endl;
}


DiamondTrap &DiamondTrap::operator = (const DiamondTrap &obj)
{
    if (*this != obj)
    {
        this->name = obj.name;

    }
}