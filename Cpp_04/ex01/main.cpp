#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Cat *cat = new Cat();
        cat->getBrain()->idea[0] = "I am hungry" ;
        cat->getBrain()->idea[1] = "I am so sleepy I want to go to the my bed";
        cat->getBrain()->idea[2] = "I am thirsty";

    cout << "our cat ideas are that;" << endl;
    for (int i = 0; i < 3; i++)
        cout << i+ 1 << " )"<<cat->getBrain()->idea[i] << endl;
    cout << endl;

    cout << "the second cat is creating" << endl;
    Cat *cat2 = new Cat();

    cout << endl << "the second cat has no idea" << endl;
    for (int i = 0; i < 3; i++)
        cout << "Cats idea : " << cat2->getBrain()->idea[i] << endl;
    
    cout << endl << "now we are making deep copy" << endl;
    //*cat2 = *cat;
    for (int i = 0; i < 3; i++)
        cat2->getBrain()->idea[i] = cat->getBrain()->idea[i];
    cout << endl;
    cout << "the first cats ideas " << endl;

    for (int i = 0; i < 3; i++)
        cout << i+ 1 << " )"<<cat->getBrain()->idea[i] << endl;
    cout << endl;
    cout << "the second cats ideas " << endl;
    for (int i = 0; i < 3; i++)
        cout << "Cats idea : " << cat2->getBrain()->idea[i] << endl;

    cat->getBrain()->idea[0] = "I love music";
    cout << endl << "now we have changed first cat ideas of the first" << endl;

    for (int i = 0; i < 3; i++)
        cout << i+ 1 << " )"<<cat->getBrain()->idea[i] << endl;
    cout << endl;

    cout << "However the second cats thoughts are the same" << endl;
    for (int i = 0; i < 3; i++)
        cout << "Cats idea : " << cat2->getBrain()->idea[i] << endl;    
    cout << endl << "clean all of cats " << endl;

    delete cat;
    delete cat2;

    Animal *animal[6];
    cout << endl << endl<< "*******initializing test animalss********* " << endl;
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
        animal[i]->makeSound();
        cout << endl;
    }

    cout << endl ;
    for (int i = 0; i < 6; i++)
    {
        cout << endl << "deletion processing of each animal is came  " << i << endl;
        delete animal[i];
    }
    //system("leak animal");
    return 0;
}