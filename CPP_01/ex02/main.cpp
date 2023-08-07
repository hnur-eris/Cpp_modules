#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string zombie = "HI THIS IS BRAIN";
    string *stringPTR = &zombie;
    string &stringREF = zombie;

    cout << "Zombie Memory Address :  " << &zombie << endl;
    cout << "Pointer Memory Address :  " << stringPTR << endl;
    cout << "Reference Memory Address :  " << &stringREF << endl << endl;

    cout << "Value of Zombie :  " << zombie << endl;
    cout << "Value of Pointer :  " << *stringPTR << endl;
    cout << "Value of Reference :  " << stringREF << endl;


}