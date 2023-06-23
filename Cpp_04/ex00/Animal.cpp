#include "Animal.hpp"

Animal::Animal()
{
    cout << "Animal destructor called" << endl;
    this->type = "animal";
}

Animal::~Animal()
{
    cout << "Animal destructor called" << endl;
}

Animal &Animal::operator = (Animal const &obj)
{
    cout << "Animal copy assignment operator called"<< endl;
    this->type = obj.type;
}

Animal::Animal(const Animal &obj)
{
    cout << "Animal copy constructor called" << endl;
    this->type = obj.type;
}

void    Animal::makeSound() const
{
    cout << "Welcome to my zoo" << endl;
}

string Animal::getType(void) const
{
    return this->type;
}
