#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(const string &name);
        FragTrap(const FragTrap &obj);
        ~FragTrap();
        FragTrap &operator = (const FragTrap &obj);

        void highFivesGuys(void);
    
};


#endif