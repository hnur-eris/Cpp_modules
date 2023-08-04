#include "Form.hpp"

Form::Form() : name_("Default name"), signPos(false), gradeToSign(1), gradeToExec(1)
{

    cout << "default constructor called" << endl;
}

Form::Form(string name, int gradeToSign, int gradeToExec) : name_(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{

    cout << "name constructor called" << endl;
}
Form::Form(const Form &obj): name_("Default name"), signPos(false), gradeToSign(1), gradeToExec(1)
{
    *this = obj;
}

Form &Form::operator = (const Form &obj)
{
    if (this != &obj)
    {
        *this = obj;
    }
    return *this;
}

Form::~Form()
{
    cout << "Form Destructor called" << endl;
}

void Form::setSigned(bool signPos)
{
    this->signPos = signPos;
}

string Form::getName() const
{
    return this->name_;
}

int Form::getGradeToSign() const
{
    return this->gradeToSign;
}

int Form::getGradeToExec() const 
{
    return this->gradeToExec;
}

bool Form::isSigned() const
{
    return this->signPos;
}

void Form::beSigned(const Bureaucrat &person)
{
    if (person.getGrade() < 1)
    {
        cout << "this person does not exist in real" << endl;
        throw GradeTooHighException();
    }
    else if (person.getGrade() <= this->gradeToSign)
    {
        this->signPos = true;
        cout << person.getName() << " signed " << this->name_ << endl;
    }
    else
    {
        cout << person.getName() << " couldn't signed because " << this->name_ << " didn't have enough rank to sign "<< endl;
        throw GradeTooLowException();
    }
}

std::ostream &operator << (std::ostream &out , const Form &obj){
	out << obj.getName() + " form is " << (obj.isSigned() ? "is signed," : "is not signed,");
	out << " requires grade " << obj.isSigned() << " to sign and grade ";
	out << obj.getGradeToExec() << " to execute";
	return (out);
}
