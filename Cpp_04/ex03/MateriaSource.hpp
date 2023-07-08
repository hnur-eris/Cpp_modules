#ifndef MATERIASOURCE_HPP
#define MATERIASOOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private :
        AMateria *amaterias[4];

    public : 
        MateriaSource();
        MateriaSource(MateriaSource const &obj);
        MateriaSource &operator = (MateriaSource const &obj);
        virtual ~MateriaSource();

        void learnMateria(AMateria *m);
        AMateria *createMateria(string const &type);
};

#endif