#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") { }

Cure::Cure(Cure const &obj): AMateria(obj) { }

Cure &Cure::operator = (Cure const &obj)
{
    if (this != &obj)
        this->type = obj.type;

    return *this;
}

Cure::~Cure() {}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    cout << "* heals " << target.getName() << "'s wounds  *" << endl;
}

