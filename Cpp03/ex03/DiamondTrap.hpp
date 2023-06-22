#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, FragTrap
{
    private :
        ClapTrap name;
    
    public :
        DiamondTrap();
        DiamondTrap(const string &name);
        DiamondTrap(const DiamondTrap &obj);
        ~DiamondTrap();
        DiamondTrap &operator = (const DiamondTrap &obj);
        void whoAmI();

};

#endif