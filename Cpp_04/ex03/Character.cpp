#include "Character.hpp"

Character::Character(const string &name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

Character::Character(const Character &obj)
{
    this->name = obj.name;
    for (int i = 0; i < 4; i++)
        this->materias[i] = (obj.materias[i] ) ? obj.materias[i]->clone() : NULL;
}

Character &Character::operator = (const Character &obj)
{
    if (this != &obj)
    {
        this->~Character();
        this->name = obj.name;
        for (int i = 0; i < 4; i++)
            this->materias[i] = (obj.materias[i] ) ? obj.materias[i]->clone() : NULL;
    }

    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (this->materias[i] != NULL)
            delete this->materias[i];
}

string const &Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    if (m)
    {
        for (int i = 0; i < 4; i++)
            if (!this->materias[i])
            {
                this->materias[i] = m;
                break;
            }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
        this->materias[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx <= 3 && this->materias[idx])
        this->materias[idx]->use(target);
}