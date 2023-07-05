#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal *animal = new Animal;
    cout << "Animal type is " << animal->getType() << ". The animal voices is " ;
    animal->makeSound();
    delete animal;
    cout << endl;
    
    const Animal *dog = new Dog;
    cout << "Animal type is " << dog->getType() << ". The animal voices is " ;
    dog->makeSound();
    delete dog;
    cout << endl;

    const Animal *cat = new Cat;
    cout << "Animal type is " << cat->getType() << ". The animal voices is ";
    cat->makeSound();
    delete cat;
    cout << endl;
        
    const WrongAnimal *wrongAni = new WrongAnimal;
    cout << "Wrong Animal type is " << wrongAni->getType() << ". The wrong animal voices is " ;
    wrongAni->makeSound();
    delete wrongAni;
    cout << endl;
    
    const WrongAnimal *wrongCat = new WrongCat;
    cout << "Wrong Animal type is " << wrongCat->getType() << ". The wrong cat voices is " ;
    wrongCat->makeSound();
    delete wrongCat;
    cout << endl;

    return 0;
}