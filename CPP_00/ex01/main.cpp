#include "phone_book.h"

int main()
{
    PhoneBook phone;
    string process;
    string searchI;

    cout << "********* Welcome to my awesome phone book. ******************" << endl << endl;
    while (1)
    {
        cout << "<<<<<<<<<<<<<<<<<<Phone Book>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "Please select your process" << endl;
        getline(cin, process);
        if (process == "ADD")
            phone.AddContact();
        else if (process == "SEARCH")
        {
            if (!phone.IsUser(0)){
                cout << "There is no one in the phone book" << endl;
                continue ;
            }
            phone.ShowUser();
            cout << "Select an number between  0-7\t";
            getline(cin, searchI);
            phone.SearchUser(searchI);
        }
        else if (process == "EXIT")
            break ;
        else
            cout << "The command you entered was not found " << endl;
    }
    return 0;
}