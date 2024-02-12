#include "Data.hpp"
#include "Serializer.hpp"

int main() {
    
    Data *myData = new Data();
    myData->setValue(42);

    uintptr_t serialized = Serializer::serialize(myData);
    Data* deserialized = Serializer::deserialize(serialized);

    if (deserialized == myData) {
        std::cout << "Serialization and deserialization successful." << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed." << std::endl;
    }

    std::cout << "Deserialized value: " << deserialized->getValue() << std::endl;
    delete myData;
    return  0;
}