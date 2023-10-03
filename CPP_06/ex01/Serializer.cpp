#include "ScalarConverter.hpp"

Serializer::Serializer()
{
    cout << "constructor called " << endl;
}

Serializer::Serializer(const Serializer &obj)
{
    *this = obj;
    cout << "copy const called " << endl;
}

Serializer::~Serializer()
{
    cout << "destructor " << endl;
}

Serializer &Serializer::operator = (const Serializer &obj)
{
    if (this != &obj)
        *this = obj;

    return *this;
}

uintptr_t Serializer::serialize(Data *ptr)
{
    
}