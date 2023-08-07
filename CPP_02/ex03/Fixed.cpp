#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::Fixed(const int number)
{
    this->value = number * 256.0;
}

Fixed::Fixed(const float number)
{
    this->value = roundf(number * 256.0f);
}

Fixed::Fixed(const double number)
{
    this->value = number;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

int Fixed::getRawBits() const
{
    return this->value;
}

float Fixed::toFloat() const
{
    return this->value / 256.0;
}

int Fixed::toInt(void) const
{
    return this->value / 256.0;
}

Fixed &Fixed::operator = (const Fixed &op)
{
    if (this != &op)
        this->value = op.getRawBits();

    return *this;
}

ostream &operator << (ostream &ou, Fixed const &obj)
{
    ou << obj.toFloat();

    return ou;
}

bool Fixed::operator > (const Fixed &obj)
{
    return this->value > obj.value; 
}

bool Fixed::operator < (const Fixed &obj)
{
    return this->value < obj.value; 
}

bool Fixed::operator >= (const Fixed &obj)
{
    return this->value >= obj.value; 
}

bool Fixed::operator <= (const Fixed &obj)
{
    return this->value <= obj.value; 
}

bool Fixed::operator == (const Fixed &obj)
{
    return this->value == obj.value; 
}

bool Fixed::operator != (const Fixed &obj)
{
    return this->value != obj.value; 
}

Fixed Fixed::operator + (const Fixed &obj)
{
    this->value += obj.value;
    return *this;
}

Fixed Fixed::operator - (const Fixed &obj)
{
    this->value -= obj.value;
    return *this;
}

Fixed Fixed::operator * (const Fixed &obj)
{
    this->value = this->value * obj.toInt();
    return *this;
}

Fixed Fixed::operator / (const Fixed &obj)
{
    this->value = this->toFloat() / obj.toFloat();
    return *this;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a.value < b.value ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a.value < b.value ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a.value > b.value ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a.value > b.value ? a : b;
}

Fixed &Fixed::operator ++ ()
{
    ++value;
    return *this;
}

Fixed &Fixed::operator -- ()
{
    --value;
    return *this;
}

Fixed Fixed::operator ++ (int)
{
    Fixed tmp(*this);
    ++value;
    return tmp;
}

Fixed Fixed::operator -- (int)
{
    Fixed tmp(*this);//mevcut değer korunumu
    --value;
    return tmp;
}

Fixed::~Fixed()
{
    
}