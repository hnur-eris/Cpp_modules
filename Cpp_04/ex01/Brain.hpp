#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Brain 
{   
    public :
        string idea[100];
        Brain();
        //Brain(const Brain &obj);
        Brain &operator = (const Brain &obj);
        virtual ~Brain();
        
};

#endif