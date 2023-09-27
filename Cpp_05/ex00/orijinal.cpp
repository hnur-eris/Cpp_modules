#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::exception;
using std::ostream;

class Bureaucrat {
    private :
        string name;
        int grade;
    public :
        Bureaucrat() : name("default name"), grade(15) {
        }
        Bureaucrat(const string &_name, int _grade) : name(_name) {
            setGrade(_grade);
            cout << "bureucrat constructor called " << endl;
        }
        Bureaucrat(const Bureaucrat &obj){
            *this = obj;
        }
        ~Bureaucrat() {
            cout << "Bureucrat destructor called" << endl;
        }
        Bureaucrat &operator = (const Bureaucrat &obj)
        {
            if (this != &obj)
            {
                name = obj.name;
                setGrade(grade);
            }
            return *this;
        }
        
        void setName(const string &_name){
            name = _name;
        }
        void setGrade(int _grade) {
            if (_grade < 1)
                throw GradeTooHighException();
            else if (_grade > 150)
                throw GradeTooLowException();
            else {
                grade = _grade;
                cout << this->name <<" has the authority to sign this document " << endl;
            }
        }

        string &getName(){
            return this->name;
        }
        int getGrade() {
            return this->grade;
        }

        void incrementGrade()
        {
            grade--;
            cout << "your grade is updated for incerementing to " << grade << endl;
            setGrade(grade);
        }
            
        
        void decrementGrade()
        {
            grade++;
            cout << "your grade is updated for decrementing to " << grade << endl;
            setGrade(grade);
        }
        class  GradeTooHighException : public exception
        {
            const char *what() const throw () {
                return "Too High level to confirm this form ";
            }
        };
        class GradeTooLowException : public exception
        {
            const char *what() const throw (){
                return "Too Low level to confirm this form ";
            }
        };

};
ostream &operator << (ostream &ou, Bureaucrat &obj) {
    ou << "bureaucrat name => " << obj.getName() << " his grade ==> " << obj.getGrade();
    return ou;
}


int main()
{
    try {
         Bureaucrat b("nur", -25);
         cout << b << endl;
    }
    catch(exception &e) {
        std::cerr << e.what() << endl;
    }
    return 0;
}