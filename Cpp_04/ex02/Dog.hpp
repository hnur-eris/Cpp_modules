#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
    private :
        Brain *brain;

    public :
        
        Dog();
        //Dog(const Dog&obj);
        Dog operator = (const Dog &obj);
        ~Dog();

        void makeSound() const;
        Brain *getBrain() const;

};

#endif