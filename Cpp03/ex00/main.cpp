#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("First");
    clap.attack("Enemy1");
    clap.takeDamage(3);
    clap.beRepaired(2);

    ClapTrap clap2("Second");
    clap2.attack("Enemy2");
    clap2.takeDamage(10);
    clap2.beRepaired(5);

    return 0;
}
