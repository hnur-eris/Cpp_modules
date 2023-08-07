#ifndef HARL_H
#define HARL_H

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Harl  {
    private :
        void info(void);
        void debug(void);
        void warning(void);
        void error(void);
    public :
        void complain(string level);
};

#endif