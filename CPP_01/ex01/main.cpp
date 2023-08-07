#include "Zombie.h"

int main()
{
    Zombie *monster;
    
    monster = Zombie().zombieHorde(4, "Monster");

    delete[] monster;
}