#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("ponchik");
    scav.attack("suzy");
    scav.takeDamage(3);
    scav.beRepaired(6);
    scav.guardGate();
    
    return 0;
}