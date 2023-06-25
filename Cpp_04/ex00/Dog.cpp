#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    cout << "Dog default constructor called" << endl;
}

Dog::Dog(Dog const &obj)
{
    type = obj.type;
    cout << " Dog Copy constructor called" << endl;
}

Dog::~Dog()
{
    cout << "Dog default constructor called" << endl;
}

Dog Dog::operator = (const Dog &obj)
{
    type = obj.type;
    return *this;
}

void Dog::makeSound() const
{
    cout << "hav hav hav hav hav havv" << endl;
}

string Dog::getType()
{
    return this->type;
}