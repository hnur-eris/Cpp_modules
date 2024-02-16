#include "iter.hpp"


template <typename A>
void iter(A *arr, unsigned long lenght, void (*fun)(A))
{
    for (unsigned long i = 0; i < lenght; i++)
        fun(arr[i]);

}

template <typename A>
void printNumber(A a) {
    cout << a << endl;
}
int main()
{
    int arrInt[] = {1, 2, 3, 4, 5};


    cout << "Integers:  " << endl;
    unsigned long lenght = sizeof(arrInt) / sizeof(int); 
    iter(arrInt, lenght, printNumber);

    double arrDou[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "Double:  "<< endl;
    unsigned long lenght2 = sizeof(arrDou) / sizeof(double); 
    iter(arrDou, lenght2, printNumber);

}