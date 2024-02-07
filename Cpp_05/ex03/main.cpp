#include "Intern.hpp"

int main() {
    
    try
    {
        Bureaucrat potter("harry", 3);
        
        Intern hermione;

        AForm *Dumbledore;
        Dumbledore = hermione.makeForm("robotomy request", "Bender");
        potter.signForm(*Dumbledore);
        potter.executeForm(*Dumbledore);

        AForm *voldermort = hermione.makeForm("magic", "Bender");
        potter.signForm(*voldermort);
        potter.executeForm(*voldermort);

    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << endl;
    }
    
}
