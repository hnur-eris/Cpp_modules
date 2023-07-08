#include "AMateria.hpp"

AMateria::AMateria()
{
    this->type = "Default type";
}

AMateria::AMateria(string const &type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria &obj)
{
    type = obj.type;
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator = (const AMateria &obj)
{
    this->type = obj.type;
    return *this;
}

string const &AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}