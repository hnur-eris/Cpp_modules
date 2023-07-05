#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    this->brain = new Brain();
    cout << "Cat default constructor called" << endl;
}
/*

Cat::Cat(const Cat &obj)
{
    type = obj.type;
    cout << " Cat Copy constructor called" << endl;
}
*/


Cat Cat::operator = (const Cat &obj)
{
    if (this != &obj)
    {
        delete this->brain;
        this->brain = new Brain();
        *this->getBrain() = *obj.getBrain();
        type = obj.type;

    }
    return *this;
}

Cat::~Cat()
{
    cout << "Cat destructor called" << endl;
    delete brain;
}

void Cat::makeSound() const
{
    cout << "meaww meaww meaww meaww meaww" << endl;
}

Brain *Cat::getBrain() const
{
    return this->brain;
}