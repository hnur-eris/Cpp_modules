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

Fixed::Fixed(const int number)
{
    this->value = number * 256;
    cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float number)
{
    this->value = roundf(number * 256.f);
    cout << "Float constructor called" <<endl;
}

Fixed &Fixed::operator = (const Fixed &op)
{
    cout << "Copy assignment operator called" << endl;
    if (this != &op)
        this->value = op.getRawBits();

    return *this;
}

int Fixed::getRawBits(void ) const
{
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

float Fixed::toFloat(void) const
{
    return (this->value / 256.f);
}

int Fixed::toInt(void) const
{
    return this->value / 256;
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

ostream &operator << (ostream &ou, Fixed const &obj)
{
    ou << obj.toFloat();

    return ou;
}
