#include "Form.hpp"

int main() {
    
    try
    {
        Bureaucrat potter("harry", 3);
        cout << potter << endl;

        Form mystery("mysteryss" , 10 , 10);
        cout << mystery << endl;
        potter.signForm(mystery);      
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << endl;
    }
    
}
