#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed &par)
{
    cout << "Copy constructor called" << endl;
    *this = par;
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

Fixed &Fixed::operator=(const Fixed &op)
{
    cout << "Copy assignment operator called" << endl;
    if (this != &op)
        this->value = op.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    cout << "getRawBits member function called" << endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    cout << "setRawBits member function called" << endl;
    this->value = raw;
}
