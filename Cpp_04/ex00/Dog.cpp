#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    cout << "Dog default constructor called" << endl;
}

Dog::Dog(const Dog &obj)
{
    cout << "Dog copy constructor called" << endl;
    this->type = obj.getType();
}

Dog::~Dog()
{
    cout <<  "Dog destructor called" << endl;
}

Dog &Dog::operator = (const Dog &obj)
{
    this->type = obj.type;
    cout << "Dog destructor called" << endl;
    return *this;
}

void Dog::makeSound() const
{
    cout << "Hav Haaaavvv Haaavvvv" << endl;
}

string Dog::getType(void) const 
{
    return this->type;
}