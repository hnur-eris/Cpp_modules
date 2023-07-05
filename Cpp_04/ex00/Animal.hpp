#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Animal
{
    protected :
        string type;
    
    public :
        Animal();
        Animal(const Animal &obj);
        Animal &operator = (const Animal &obj);
        virtual ~Animal();

        virtual void makeSound() const;
        const string getType() const;
};

#endif