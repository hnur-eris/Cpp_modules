#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->amaterias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    for (int i = 0; i< 4; i++)
        this->amaterias[i] = (obj.amaterias[i]) ? obj.amaterias[i]->clone() : NULL;
}

MateriaSource &MateriaSource::operator = (const MateriaSource &obj)
{
    if (this != &obj)
    {
        this->~MateriaSource();
        for (int i = 0; i < 4; i++)
        {
            this->amaterias[i] = (obj.amaterias[i]) ? obj.amaterias[i]->clone() : NULL;
        }
    }

    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (!this->amaterias[i])
            delete this->amaterias[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (m)
    {
        for (int i = 0; i < 4; i++)
            if (!this->amaterias[i])
            {
                this->amaterias[i] = m;
                break;
            }
    }
}

AMateria *MateriaSource::createMateria(const string &type)
{
    for (int i = 0; i < 4; i++)
        if (this->amaterias[i] && this->amaterias[i]->getType() == type)
            return (this->amaterias[i]->clone());
    return NULL;
}