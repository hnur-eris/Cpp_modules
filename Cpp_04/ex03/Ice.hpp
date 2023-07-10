#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(Ice const &obj);
    virtual ~Ice();

    Ice &operator=(Ice const &obj);

    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif
