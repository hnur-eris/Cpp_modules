#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

using std::string;
using std::cout;
using std::endl;

class Form
{
    private :
        const string name_;
        bool signPos;
        const int gradeToSign;
        const int gradeToExec;
    
    public :
        Form();
        Form(const Form &obj);
        Form(string name, int gradeToSign, int gradeToExec);
        Form &operator = (const Form &obj);
        ~Form();

        void setSigned(bool signPos);
        
        void beSigned(const Bureaucrat &person);

        string getName() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        bool isSigned() const;

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

std::ostream &operator<<(std::ostream &out , const Form &obj);

#endif
