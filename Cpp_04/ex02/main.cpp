#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal *animal[6];
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
        cout << endl;
    }


    for (int i = 0; i< 6; i++)
    {
        animal[i]->makeSound();
        cout << endl;
        delete animal[i];
        cout << endl;
    }

    return 0;
}