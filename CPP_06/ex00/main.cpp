#include "ScalarConverter.hpp"

int main(int ac, char **av){

    ScalarConverter a;
    if (ac == 2)
        a.convert(av[1]);
    
    return 0;
}