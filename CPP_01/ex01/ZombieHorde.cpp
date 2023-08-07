#include "Zombie.h"

Zombie *Zombie::zombieHorde(int N, std::string name)
{
    Zombie *monster = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        monster[i].setName(name);
        monster[i].announce();
    }
    return monster;
}