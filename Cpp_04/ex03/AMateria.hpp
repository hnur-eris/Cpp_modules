#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

class AMateria
{
    protected :
        string type;

    public :
        AMateria();
        AMateria(string const &type);
        AMateria(const AMateria &obj);
        virtual ~AMateria();
        AMateria &operator = (const AMateria &obj);


        string const &getType() const;//returns the materia type
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);


};

#endif