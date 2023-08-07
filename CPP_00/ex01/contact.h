#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <cstdlib>

using std::string;
using std::cout;
using std::endl;
using std::cin;

class Contact {
    private :
        string FirstName;
        string LastName;
        string NickName;
        string Number;
        string Secret;
        int Index;
    public :
        //Contact ();
        //~Contact();
        void SetFirstName(string first_name);
        void SetLastName(string last_name);
        void SetNickName(string nick_name);
        void PhoneNumber(string number);
        void SetDarkSecret(string secret);
        void SetIndex(int index);
        const string &GetFirstName();
        const string &GetLastName();
        const string &GetNickName();
        const string &GetPhoneNumber();
        const string &GetDarkSecret();
        const int &GetIndex();
};

#endif