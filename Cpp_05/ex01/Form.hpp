#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form {

    private :
        const string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;

    public :
        Form();
        Form(const string fName, const int grToSign, const int grToExec);
        Form(const Form &obj);
        Form &operator = (const Form &obj);
        ~Form();

        string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(Bureaucrat &bureaucrat);

        class GradeTooHighException : public std::exception {
            virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            virtual const char *what() const throw();
        };

};

std::ostream& operator<<(std::ostream &out, Form &form);
