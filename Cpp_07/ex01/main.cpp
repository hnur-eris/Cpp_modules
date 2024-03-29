#include "iter.hpp"


template <typename T, typename F>
void iter(T *arr, unsigned long lenght, F fun)
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
    iter(arrInt, lenght, printNumber<int>);

    double arrDou[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "Double:  "<< endl;
    unsigned long lenght2 = sizeof(arrDou) / sizeof(double); 
    iter(arrDou, lenght2, printNumber<double>);

}
