#include "./Form.hpp"

Form::Form() : _name("(Form Default Name)"), _isSigned(false), _gradeToSign(10), _gradeToExecute(10)
{
}

Form::Form(const string name) : _name(name), _isSigned(false), _gradeToSign(10), _gradeToExecute(10)
{
}

Form::Form(const string name, const int gradeToSign, const int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    try
    {
        if (gradeToSign > 150 || gradeToExecute > 150)
            throw Form::GradeTooLowException();
        if (gradeToSign < 1 || gradeToExecute < 1)
            throw Form::GradeTooHighException();
    }
    catch (std::exception &e)
    {
        cerr << e.what() << endl;
    }
}

Form::~Form()
{
}

const string Form::getName() const
{
    return this->_name;
}
bool Form::getIsSigned() const
{
    return this->_isSigned;
}
int Form::getGradeToSign() const
{
    return this->_gradeToSign;
}
int Form::getGradeToExecute() const
{
    return this->_gradeToExecute;
}

void Form::beSigned(Bureaucrat &br)
{
    try
    {
        if (br.getGrade() <= this->_gradeToSign)
            this->_isSigned = true;
        else
            throw Form::GradeTooLowException();
    }
    catch (std::exception &e)
    {
        cerr << e.what() << endl;
    }
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "form grade is too hight";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "form grade is too low";
}

std::ostream &operator<<(std::ostream &o, Form &obj)
{
    o << "Form name:                \t" << obj.getName() << endl;
    o << "Form is signed:           \t" << obj.getIsSigned() << endl;
    o << "Form grade to sign:       \t" << obj.getGradeToSign() << endl;
    o << "Form grade to execute:    \t" << obj.getGradeToExecute() << endl;
    return o;
}