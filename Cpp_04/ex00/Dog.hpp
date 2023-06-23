#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private : 
        string type;
    public :
        Dog();
        Dog(const Dog &obj);
        ~Dog();
        Dog &operator = (const Dog &obj);
        void makeSound() const;
        string getType(void) const;
};

#endif