#include "Zombie.h"

Zombie::Zombie() {
    this->Name = "undefined";
}

Zombie::Zombie(const std::string &name) {
    this->Name = name;
}

void Zombie::announce(void) {
    cout << this->Name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::~Zombie() {
    cout << this->Name << "\t is destroyed" << endl;
}