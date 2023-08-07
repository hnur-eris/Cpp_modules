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
        Fixed(const Fixed &par);
        Fixed(const int number);
        Fixed(const float number);

        Fixed &operator = (const Fixed &op);        
        float toFloat(void) const;
        int toInt(void) const;

        int getRawBits(void) const;
        void setRawBits(int const raw);

        ~Fixed();
};
    ostream &operator << (ostream &ou, Fixed const &obj);

#endif
