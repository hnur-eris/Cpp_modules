#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { }

Ice::Ice(Ice const &obj): AMateria(obj) { }

Ice &Ice::operator = (Ice const &obj)
{
    if (this != &obj)
        this->type = obj.type;

    return *this;
}

Ice::~Ice() {}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}

