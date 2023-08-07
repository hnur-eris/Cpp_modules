#include "Point.hpp"

Fixed calculateDistance(Point a, Point b)
{   
    Fixed valueY = (b.getY() - a.getY());
    Fixed valueX = (b.getX() - a.getX());
    
    double result = sqrt((valueX.getRawBits() * valueX.getRawBits() + valueY.getRawBits() * valueY.getRawBits()));
    return Fixed(result/256.0);
}

Fixed findMin(Fixed a, Fixed b, Fixed c)
{
    Fixed min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}

Fixed findMax(Fixed a, Fixed b, Fixed c)
{
    Fixed max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

int findZone(Point number)
{
    if (number.getX() > 0 && number.getY() > 0)
        return 1;
    else if (number.getX() < 0 && number.getY() > 0)
        return 2;
    else if (number.getX() < 0 && number.getY() < 0)
        return 3;
    else if (number.getX() > 0 && number.getY() < 0)
        return 4;
    return 0;
}

int isZone(Point a, Point b, Point c, Point point)
{
    int aZone = findZone(a), bZone = findZone(b), cZone = findZone(c);
    int pZone = findZone(point);
    if (pZone == aZone || pZone == bZone || pZone == cZone)
        return 1;
    return 0;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if (!isZone(a, b, c, point))
        return false;
    Fixed side1 = calculateDistance(a, b);
    Fixed side2 = calculateDistance(b,c);
    Fixed side3 = calculateDistance(a,c);
    Fixed ap = calculateDistance(point, a);
    Fixed bp = calculateDistance(point, b);
    Fixed cp = calculateDistance(point, b);

    Fixed region = side1 + side2 + side3;
    Fixed pointDistance = ap + bp + cp;

    Fixed min = findMin(side1, side2, side3);
    Fixed max = findMax(side1, side2, side3);
    Fixed pointMin = findMin(ap, bp, cp);
    Fixed poinMax = findMax(ap, bp, cp);
    
    if ((pointDistance - poinMax) < (region - max) && (pointDistance - pointMin) <= (region - min))
        return true;
    else 
        return false;
}