#pragma once

#include <iostream>
#include <cstdint>
#include "Data.hpp"
class Data;

class Serializer {

    public:
        Serializer();
        Serializer (const Serializer &obj);
        Serializer &operator = (const Serializer &obj);
        ~Serializer();

        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);


};