#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include "contact.h"

class PhoneBook {
    private :
        int size;
        Contact people[8];
    public :
    //PhoneBook();
    //~PhoneBook();
        string TakeInput();
        void AddContact();
        void SearchContact();
        void DisplayContact();
        int IsUser(int i);
        void ShowUser();
        int SearchUser(string index);
};

#endif