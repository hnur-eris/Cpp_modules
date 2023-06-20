#include "FragTrap.hpp"

int main()
{
    FragTrap frag("ponchik");
    frag.attack("suzy");
    frag.takeDamage(3);
    frag.beRepaired(6);
    frag.highFivesGuys();
    
    return 0;
}