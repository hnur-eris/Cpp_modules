#include "Zombie.h"

Zombie::Zombie() {
    this->Name = "object";
}

Zombie::Zombie(const std::string &name) {
    this->Name = name;
}

void Zombie::announce(void) {
    cout << this->Name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void Zombie::setName(const std::string &name) {
    this->Name = name;
}

Zombie::~Zombie() {
    cout << this->Name << "\tis destroyed" << endl;
}

