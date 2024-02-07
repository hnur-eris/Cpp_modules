#include "Form.hpp"

Form::Form(): name("default") , gradeToSign(150) , gradeToExecute(150) {
    cout << "default constructor called" << endl;
}

Form::Form(const string fName, const int grToSign, const int grToExec) : name(fName) , gradeToSign(grToSign) , gradeToExecute(grToExec)
{
    isSigned = false;
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooHighException();
    else if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooLowException();
    cout << "Form constructor called" << endl;
}

Form::Form(const Form &obj) : name(obj.getName()) , gradeToSign(obj.getGradeToSign()) , gradeToExecute(obj.getGradeToExecute()) {
	isSigned = obj.getIsSigned();
	*this = obj; 
}

Form &Form::operator= (const Form &obj)
{
    isSigned = obj.getIsSigned();
    return *this;
}

Form::~Form()
{
    cout << "Form Destructor is called" << endl;
}

string Form::getName() const {
    return name;
}

bool Form::getIsSigned() const {
    return isSigned;
}

int Form::getGradeToSign() const {
    return gradeToSign;
}

int Form::getGradeToExecute() const {
    return gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() <= this->getGradeToSign()) {
        isSigned = true;
        cout << bureaucrat.getName() << " signed " << name << endl;
    }
    else {
        cout << bureaucrat.getName() << " couldn't sign " << name << " because of grade" << endl;
        throw Form::GradeTooLowException();
    }
}

const char * Form::GradeTooHighException::what() const throw() {
    return "Grade is too high !!\n";
}

const char * Form::GradeTooLowException::what() const throw() {
    return "Grade is too low !!\n";
}


std::ostream &operator<<(std::ostream &out , Form &form){
	out << form.getName() + " form is " << (form.getIsSigned() ? "signed," : "not signed,");
	out << " requires grade " << form.getGradeToSign() << " to sign and grade ";
	out << form.getGradeToExecute() << " to execute";
	return (out);
}
