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
        ~Animal();
        Animal &operator = (Animal const &obj);

        virtual void makeSound() const;
        virtual string getType(void) const;

};

#endif 