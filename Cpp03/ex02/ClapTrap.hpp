#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
    protected :
        string name;
        int hitPoint;
        int energyPoint;
        int damage;

    public :
        ClapTrap();
        ClapTrap(const string &name);
        ClapTrap(const ClapTrap &clapTrap);
        ClapTrap &operator = (const ClapTrap &obj);
        ~ClapTrap();

        void attack(const string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif