#include "Point.hpp"

Point::Point() : x(0) , y(0) {}

Point::Point(const float a, const float b) : x(a) , y(b) {}

Point::Point(const Fixed a, const Fixed b) : x(a), y(b) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Fixed Point::getX() const {
    return this->x;
}

Fixed Point::getY() const {
    return this->y;
}

Point &Point::operator = (const Point &obj)
{
    if (this != &obj)
    {
        return *this;
    }
    return *this;
}

Point::~Point() {

}