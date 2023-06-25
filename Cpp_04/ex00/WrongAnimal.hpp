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
        WrongAnimal(const WrongAnimal &obj);
        WrongAnimal &operator = (const WrongAnimal &obj);
        virtual ~WrongAnimal();

        virtual void makeSound() const;
        const string getType() const;
};

#endif