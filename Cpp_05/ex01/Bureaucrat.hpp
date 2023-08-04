#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Bureaucrat
{
    private :
        string name;
        int grade;
    public :
        Bureaucrat();
        Bureaucrat(string names, int grades);
        ~Bureaucrat();
        Bureaucrat &operator = (const Bureaucrat &obj);
        Bureaucrat(const Bureaucrat &obj);

        string getName() const;
        int getGrade() const;
        void setGrade(int gradeValue);
        //void signForm();

        class GradeTooHighException : public std::exception 
        {
            public :
                const char *what() const throw() {
                    return "Bureaucrat grade is too high!";
                }
        };
        class GradeTooLowException : public std::exception 
        {
            public :
                const char *what() const throw() {
                    return "Bureaucrat grade is too low!";
                }
        };
};

std::ostream &operator << (std::ostream &out , const Bureaucrat &obj);

#endif