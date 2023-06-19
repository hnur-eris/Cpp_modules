#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap") , hitPoint(10), energyPoint(10), damage(0) {
    cout << "ClapTrap default constructor called" << endl;
}

ClapTrap::ClapTrap(const string &name) : name(name) , hitPoint(10), energyPoint(10), damage(0) {

    cout << "ClapTrap Name constructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	*this = clapTrap;
	cout << "Claptrap copy constructor called" << endl;
}

ClapTrap::~ClapTrap()
{
    cout << "ClapTrap destructor called" << endl;
}

void ClapTrap::attack(const string &target)
{
    if (this->hitPoint > 0 && this->energyPoint > 0)
    {
        cout << "ClapTrap "<<this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << endl;
        this->energyPoint--;
    }
    else
        cout << "ClapTrap " << this->name << " has not enough " << (!this->hitPoint ? " hit point !!" : " hit enegry !!") << endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoint > 0 && this->energyPoint > 0)
    {
        if (this->energyPoint <= (int)amount){
            hitPoint = 0;
            cout << "ClapTrap " << this->name << " is dead" << endl;
        }
        else 
        {
            energyPoint -= amount;
            cout << "ClapTrap " << this->name << " has token " << amount <<  " damage" << endl;
        }

    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoint > 0 && this->energyPoint > 0)//ölen insana ne kadar can versek de boş
    {
        hitPoint += amount;
        cout << "ClapTrap " << this->name << " be repaired " << amount << " points " << endl;
    }
    else
        cout << "ClapTrap " << this->name << " had dead " << endl;
}