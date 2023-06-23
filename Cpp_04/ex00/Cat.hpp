#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private : 
        string type;
    public :
        Cat();
        Cat(const Cat &obj);
        ~Cat();
        Cat &operator = (const Cat &obj);
        void makeSound() const;
        string getType(void) const;
};

#endif