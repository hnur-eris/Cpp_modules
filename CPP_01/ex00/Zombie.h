#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

using std::cout;
using std::endl;

class Zombie
{
    private :
        std::string Name;

    public :
        Zombie();
        Zombie(const std::string &name);
        void announce(void);
        Zombie *newZombie(std::string name);
        void randomChump(std::string name);
        ~Zombie();
};

#endif