#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;

class Form
{
    private :
        const string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;
    
    public :
        Form();
        Form(const Form &obj);
        Form &operator = (const Form &obj);
        ~Form();

        void beSigned(Bureaucrat &person);

        class GradeTooHighException : public std::exception
        {
            public :
                const char *what() const throw() {
                    return "This form sign' grade too high exception";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public :
                const char *what() const throw() {
                    return "This form sign' grade too low exception";
                }
        };
};

#endif