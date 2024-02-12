#pragma once

#include <iostream>
#include <cstdint>

class Data {
    private:
        int value;

    public :

        Data();
        Data(const Data &obj);
        Data &operator = (const Data &obj);
        ~Data();

        void setValue(int v);
        int getValue() const;
        uintptr_t   serialize(Data *ptr);
        Data *deserialize(uintptr_t raw);
};