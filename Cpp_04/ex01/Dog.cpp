#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    cout << "Dog default constructor called" << endl;
}


/*
Dog::Dog(const Dog &obj)
{
    type = obj.type;
    cout << " Dog Copy constructor called" << endl;
}

*/

Dog::~Dog()
{
    delete brain;
    cout << "Dog default constructor called" << endl;
}

Dog Dog::operator = (const Dog &obj)
{
   if (this != &obj)
    {
        delete this->brain;
        this->brain = new Brain();
        *this->brain = *obj.brain;
        type = obj.type;

    }
    return *this;
}

void Dog::makeSound() const
{
    cout << "hav hav hav hav hav havv" << endl;
}

Brain *Dog::getBrain() const
{
    return this->brain;
}