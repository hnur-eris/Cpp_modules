#include "Brain.hpp"

Brain::Brain()
{
    cout << "Brain default constructor called"<< endl;
}


/*
Brain::Brain(const Brain &obj)
{
    *this = obj;
    cout << "Brain copy constructor called" << endl;
}

*/

Brain &Brain::operator = (const Brain &obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 100; i++)
            this->idea[i] = obj.idea[i];

    }
    return *this;
}


Brain::~Brain()
{
    cout << "Brain destructor called" << endl;
}