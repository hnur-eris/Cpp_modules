#include "Harl.h"

void Harl::info()
{
    cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << endl;
}

void Harl::debug()
{
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\nI really do!" << endl;
}

void Harl::warning() {
    cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << endl;
}

void Harl::error() {
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}


void Harl::complain(string level) {
    string option[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    void (Harl::*complainArr[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int  i = 0; i < 4; i++) {
        void (Harl::*select) (void) = complainArr[i];
        if (level == option[i])
            (this->*select)();
    }
}