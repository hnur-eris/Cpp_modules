#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

using std::cout;
using std::endl;

class Fixed 
{
    private :
        int value;
        static const int fractionalBit = 8;
    
    public :
        Fixed();
        Fixed(const Fixed &par);
        Fixed &operator = (const Fixed &op);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed();

};

#endif

