#include "contact.h"

void Contact::SetFirstName(string first_name) {
    this->FirstName = first_name;
}

void Contact::SetLastName(string last_name) {
    this->LastName = last_name;
}

void Contact::SetNickName(string nick_name) {
    this->NickName = nick_name;
}

void Contact::SetDarkSecret(string secret) {
    this->Secret = secret;
}

void Contact::PhoneNumber(string number) {
    this->Number = number;
}

void Contact::SetIndex(int index) {
    this->Index = index;
}

const string &Contact::GetFirstName() {
    return FirstName;
}
const string &Contact::GetLastName()  {
    return LastName;
}

const string &Contact::GetNickName()  {
    return NickName;
}

const string &Contact::GetDarkSecret() {
    return Secret;
}

const string &Contact::GetPhoneNumber() {
    return Number;
}

const int &Contact::GetIndex() {
    return this->Index;
}