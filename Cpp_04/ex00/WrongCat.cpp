#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    cout << "WrongCat default constructor called" << endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    type = obj.type;
    cout << " WrongCat Copy constructor called" << endl;
}


WrongCat::~WrongCat()
{
    cout << "Wrong Cat destructor called" << endl;
}

WrongCat WrongCat::operator = (const WrongCat &obj)
{
    type = obj.type;
    return *this;
}

void WrongCat::makeSound() const
{
    cout << "frogg frogg frog frog frogg frogg" << endl;
}

string WrongCat::getType()
{
    return this->type;
}