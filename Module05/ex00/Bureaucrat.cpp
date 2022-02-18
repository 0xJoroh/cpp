#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const string name, int grade) : _name(name)
{
    try{
        if (grade < 1 || grade > 150)
            throw "Grade must be between 1 and 150";
        this->_grade = grade;
    }
    catch(const char *e){
        cerr << e << endl;
    }
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->_grade = rhs._grade;
    return *this;
}

const string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    // check max grad is 1
    try{
        if (this->_grade == 1)
            throw "Grade cannot be incremented anymore";
            // throw Bureaucrat::GradeTooHighException();
        this->_grade--;
    }
    catch(const char *e){
        cerr << e << endl;
    }
}

void Bureaucrat::decrementGrade()
{
    // check min grad is 150
    try{
        if (this->_grade == 150)
            throw "Grade cannot be decremented anymore";
            // throw Bureaucrat::GradeTooLowException();
        this->_grade++;
    }
    catch(const char *e){
        cerr << e << endl;
    }
}

void Bureaucrat::checkGrade(int grade)
{
    try
    {
        if (grade < 1 || grade > 150)
            throw "Grade must be between 1 and 150";
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj)
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << endl;
    return o;
}