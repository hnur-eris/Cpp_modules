#include "phone_book.h"

string PhoneBook::TakeInput()
{
    string str;
    cout << "Please enter the name you have chosen\t";

    getline(cin, str);
    if (str.empty() || (str.find_first_not_of(" \t") == string::npos)){
        cout << "You haven't written anything, please try writing again" <<endl;
        return TakeInput();
    }

    return (str);
}

void PhoneBook::AddContact()
{
    string FirstName, LastName, NickName, PhoneNumber, DarkSecret;
    static int i;
    
    this->people[i % 8].SetIndex(i % 8);
    
    cout << "First Name => ";
    this->people[i % 8].SetFirstName(FirstName = TakeInput());

    cout << "Last Name => ";
    this->people[i % 8].SetLastName(LastName = TakeInput());

    cout << "Nick Name => ";
    this->people[i % 8].SetNickName(NickName = TakeInput());

    cout << "Phone Number => ";
    this->people[i % 8].PhoneNumber(PhoneNumber = TakeInput());

    cout << "Say a dark secret => ";
    this->people[i % 8].SetDarkSecret(DarkSecret = TakeInput());
    i++;
    return ;
}

int PhoneBook::IsUser(int i)
{
    if ((this->people[i].GetFirstName().empty())||(this->people[i].GetFirstName().find_first_not_of(" \t") == string::npos))
        return 0;
    return 1;
}

void PrintUsr(string str)
{
    int len = str.length();
    if (len > 10)
    {
        string tmp;
        tmp = str.substr(0,9);
        tmp.append(".");
        cout << "|" << tmp;
    }
    else
    {
        cout << "|";
        for (int i = 0; i < 10 - len; i++)
            cout << " ";
        cout << str;
    }
}

void PhoneBook::ShowUser()
{
    for (int i = 0; i < 8; i++)
    {
        if (!this->people[i].GetFirstName().empty())
        {
            cout << "|     Index| FirstName|  LastName|  NickName|" << endl;
            cout << "|         " << this->people[i].GetIndex();
            PrintUsr(this->people[i].GetFirstName());
            PrintUsr(this->people[i].GetLastName());
            PrintUsr(this->people[i].GetNickName());
            cout << "|" << endl;
        }
    }
}

int PhoneBook::SearchUser(string index)
{
    int SearchI = std::atoi(index.c_str());
    if (SearchI < 0 || SearchI > 7)
    {
        cout << "the number you entered is out of scope" << endl;
        return 0;
    }
    if (!this->people[SearchI].GetFirstName().empty())
    {
        cout << "Person's Index ==> " << this->people[SearchI].GetIndex() << endl;
        cout << "First Name ==> " << this->people[SearchI].GetFirstName() << endl;
        cout << "Last Name ==> " << this->people[SearchI].GetLastName() << endl;
        cout << "Nick Name ==> " << this->people[SearchI].GetNickName() << endl;
        cout << "Dark Secret ==> " << this->people[SearchI].GetDarkSecret() << endl;
        cout << "Phone Number ==> " << this->people[SearchI].GetPhoneNumber() << endl;
        return 1;
    }
    else
    {
        cout << "The user was not found" << endl;
        return 0;
    }
}