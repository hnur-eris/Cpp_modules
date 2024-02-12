#include "Data.hpp"

Data::Data() {

}

Data::Data(const Data &obj) {
    *this = obj;
}

Data &Data::operator = (const Data &obj) {
    if (this != &obj)
        *this = obj;
    return *this;
}

Data::~Data() {

}

void Data::setValue(int v) {
    value = v;
}

int Data::getValue() const {
    return value;
}

uintptr_t Data::serialize(Data *ptr) {
    return reinterpret_cast < uintptr_t > (ptr);
}

Data *Data::deserialize(uintptr_t raw) {
    return reinterpret_cast <Data * > (raw);
}