#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    name = "Nur";
    grade = 80;
    setGrade(grade);
    cout << "constructor called" << endl;
}

Bureaucrat::Bureaucrat(string names, int grades)
{
    this->name = names;
    this ->grade = grades;
    setGrade(grades);
}

Bureaucrat::~Bureaucrat()
{
    cout << "bureaucrat destructor called" << endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    this->name = obj.name;
    this->grade = obj.grade;
    setGrade(grade);
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &obj)
{
    if (this != &obj)
    {
        this->name = obj.name;
        this->grade = obj.grade;
    }
    setGrade(grade);
    return *this;
}

string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::setGrade(int gradeValue)
{
    if (gradeValue < 1)
    {
        throw GradeTooHighException();
    }
    else if (gradeValue > 150)
        throw GradeTooLowException();
    else
        grade = gradeValue;
}

void Bureaucrat::signForm(Form &obj) const
{
    obj.beSigned(*this);
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &obj)
{
    out << "Bureaucrat name => " << obj.getName() << " | his grade => " << obj.getGrade();
    return out;
}
