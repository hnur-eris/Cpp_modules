#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    
    try
    {
        Bureaucrat potter("harry", 3);
        ShrubberyCreationForm hogswort("Hogswort");

        potter.signForm(hogswort);
        potter.executeForm(hogswort);

        RobotomyRequestForm wand("wand");
        potter.signForm(wand);
        potter.executeForm(wand);

        PresidentialPardonForm voldermore("voldermore");
        potter.signForm(voldermore);
        potter.executeForm(voldermore);

    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << endl;
    }
    
}