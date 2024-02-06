#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Bureaucrat {

    private :
        const string bureName;
        int grade;
    public :

        Bureaucrat();
        Bureaucrat(const string name, int gr);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator = (const Bureaucrat &obj);
        ~Bureaucrat();

        string getName() const;
        int getGrade() const;
        
        void incrementDegree();
        void decrementDegree();

        class GradeTooHighException : public std::exception {
            public :
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public :
                virtual const char *what() const throw();
        };
};

std::ostream& operator<<(std::ostream &out, Bureaucrat &bureaucrat);


#endif
