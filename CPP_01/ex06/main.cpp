#include "Harl.h"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error" << std::endl;
		return (00001);
    }

    Harl harl;
    string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i;
    for (i = 0; i < 4; i++)
    {
        if (av[1] == str[i])
        {
            cout << "[ "  << str[i] << " ]" << endl;
            break;
        }
    }
    switch (i)
    {
        case 0:
            harl.complain("DEBUG");
            break;
        case 1:
            harl.complain("INFO");
            break;
        case 2:
            harl.complain("WARNING");
            break;
        case 3:
            harl.complain("ERROR");
            break;
        case 4:
        cout << "[ Probably complaining about insignificant problems ]" << endl;
    }
    i++;
    for (int j =i; j < 4; j++)
    {
        cout << "[ "  << str[j] << " ]" << endl;
        harl.complain(str[j]);
    }   
    return 0;
}