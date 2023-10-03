#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::cerr;

class Serializer {

    public :
        Serializer();
        Serializer(const Serializer &obj);
        ~Serializer();
        Serializer &operator = (const Serializer &obj);

        uintptr_t serialize(Data *ptr);
        Data *deserialize(uintptr_t raw);


};