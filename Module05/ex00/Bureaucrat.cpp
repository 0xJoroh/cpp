#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const string name, int grade)
    : _name(name)
{
    if (grade < 1 || grade > 150)
        throw "Grade must be between 1 and 150";
    this->_grade = grade;
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
    this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    // check min grad is 150
    this->_grade++;
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

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj)
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << endl;
    return o;
}