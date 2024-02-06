#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    cout << "Bureaucrat default constructor called" << endl;
}

Bureaucrat::Bureaucrat(const string name, int gr) : bureName(name) {
    
    if (gr > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (gr < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        grade = gr;
    cout << "Bureaucrat constructor called" << endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : bureName(obj.getName()) , grade(obj.getGrade()) {}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &obj) {
    this->grade = obj.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat(){
    cout << "Bureaucrat Destructor called" << endl;
}

string Bureaucrat::getName() const {
    return this->bureName;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

void Bureaucrat::incrementDegree()
{
    if (grade - 1 <= 0)
        throw Bureaucrat::GradeTooHighException();
    grade--;
    cout << bureName << ", after increaseing bureaucrat grade is " << grade << endl; 

}

void Bureaucrat::decrementDegree() {
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade ++;
    cout << bureName << ", after decreasing bureaucrat grade is " << grade << endl; 

}



const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat grade too high!!\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat grade too low!!\n";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}
