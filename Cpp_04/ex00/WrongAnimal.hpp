#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal
{
    protected :
        string type;
    
    public :
        WrongAnimal();
        WrongAnimal(WrongAnimal const &obj);
        WrongAnimal &operator = (const WrongAnimal &obj);
        virtual ~WrongAnimal();

        virtual void makeSound() const;
        virtual string getType() const;
};

#endif