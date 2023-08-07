#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::ostream;

class Fixed 
{
    private :
        int value;
        static const int fractional_bits = 8;

    public :
        Fixed();
        Fixed(const int number);
        Fixed(const float number);
        Fixed(const double number);
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);

        Fixed &operator = (const Fixed &obj);

        bool operator > (const Fixed &obj);
        bool operator < (const Fixed &obj);
        bool operator >= (const Fixed &obj);
        bool operator <= (const Fixed &obj);
        bool operator == (const Fixed &obj);
        bool operator != (const Fixed &obj);

        Fixed operator + (const Fixed &obj);
        Fixed operator - (const Fixed &obj);
        Fixed operator * (const Fixed &obj);
        Fixed operator / (const Fixed &obj);

        Fixed &operator ++ ();
        Fixed &operator -- ();
        
        Fixed operator ++ (int);
        Fixed operator -- (int);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        ~Fixed();
        
};
    ostream &operator << (ostream &ou, Fixed const &obj);
    
#endif