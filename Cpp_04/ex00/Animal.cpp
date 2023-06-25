#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    cout << "Animal default constructor called" << endl;
}

Animal::Animal(const Animal &obj)
{
    this->type = obj.type;
    cout << "Animal Copy constructor called" << endl;
}

Animal &Animal::operator = (const Animal &obj)
{
    this->type = obj.type;
    return *this;
}

Animal::~Animal()
{
    cout << "Animal destructor called" << endl;
}

void Animal::makeSound() const
{
    cout << "meaw meaw cik cik hav hav " << endl;

}

string Animal::getType() const
{
    return this->type;
}