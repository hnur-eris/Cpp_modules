#include <iostream>
#include<cctype>
/*int toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    else
        return c;
}*/

int main(int ac, char **av)
{
    if (ac > 1)
    {
        for (int i = 1; i < ac; i++)
            while (*av[i])
                std::cout << static_cast<char>(toupper(*av[i]++));
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}