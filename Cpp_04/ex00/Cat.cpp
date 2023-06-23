#include "Cat.hpp"

Cat::Cat()
{
    this->type = "cat";
    cout << "Cat default constructor called" << endl;
}

Cat::~Cat()
{
    cout << "Cat destructor called" << endl;
}

Cat::Cat(const Cat &obj)
{
    cout << "Cat copy constructor called" << endl;
    this->type = obj.getType();
}

Cat &Cat::operator = (const Cat &obj)
{
    cout << "Cat copy assignment operator called"<< endl;
    this->type = obj.type;
    return *this;
}

string Cat::getType(void) const
{
    return this->type;
}

void Cat::makeSound() const{
    cout << "miyavvvvvvv" << endl;
}