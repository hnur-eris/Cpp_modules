#include "Zombie.h"

int main()
{
    Zombie zombie;
    Zombie *ptrZombie;

    ptrZombie = zombie.newZombie("hello");
    zombie.announce();
    ptrZombie->announce();
    zombie.randomChump("Zombie");
    
    delete ptrZombie;
}