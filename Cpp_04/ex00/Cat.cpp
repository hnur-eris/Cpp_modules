#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    cout << "Cat default constructor called" << endl;
}

Cat::Cat(Cat const &obj)
{
    type = obj.type;
    cout << " Cat Copy constructor called" << endl;
}

Cat Cat::operator = (const Cat &obj)
{
    type = obj.type;
    return *this;
}

Cat::~Cat()
{
    cout << "Cat default constructor called" << endl;
}

void Cat::makeSound() const
{
    cout << "meaww meaww meaww meaww meaww" << endl;
}

string Cat::getType()
{
    return this->type;
}