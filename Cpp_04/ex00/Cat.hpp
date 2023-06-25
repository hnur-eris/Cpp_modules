#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public :
        
        Cat();
        Cat(Cat const &obj);
        Cat operator = (const Cat &obj);
        ~Cat();

        void makeSound() const;
        string getType();
};

#endif