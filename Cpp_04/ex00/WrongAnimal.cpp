#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    cout << "WrongAnimal default constructor called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    this->type = obj.type;
    cout << "WrongAnimal Copy constructor called" << endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &obj)
{
    this->type = obj.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    cout << "WrongAnimal destructor called" << endl;
}

void WrongAnimal::makeSound() const
{
    cout << "hmmm hmm hmm" << endl;

}

string WrongAnimal::getType() const
{
    return this->type;
}