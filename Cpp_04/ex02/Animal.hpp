#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

class Animal
{
    private :
        Brain *brain;
    protected :
        string type;
    
    public :
        Animal();
        //Animal(const Animal &obj);
        Animal &operator = (const Animal &obj);
        virtual ~Animal();
//Buradaki virtual kelimesi inherit alınan fonklar tarafından aynı işlev tanımlanabilir demek.
//çakışmayı önlemek adına virtual kelimesi eklenmiştir.
//= 0 koydugumuz zaman da tüm miras alan fonklar bunu uygulanmak zorunda demek
        virtual void makeSound() const = 0;
        const string getType() const;
        Brain *getBrain() const;
};

#endif