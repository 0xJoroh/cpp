#include "./Form.hpp"

Form::Form() : _name("Default Name"), _isSigned(false), _gradeToSign(0), _gradeToExecute(0)
{
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
        // the grade should be between 1 and 10
        if (br.getGrade() < 10)
            this->_isSigned = true;
        else
            throw Form::GradeTooLowException();
    }
    catch (std::exception &e)
    {
        cerr << e.what() << endl;
    }
}

void Form::signForm(Bureaucrat &br)
{
    if (this->_isSigned)
        cout << br.getName() << " signed " << this->_name << endl;
    else
        cout << br.getName() << " couldn’t sign " << this->_name << " because <reason>" << endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "form grade is too hight";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "form grade is too low";
}

std::ostream
    &
    operator<<(std::ostream &o, Form &obj)
{
    o << "Form name:                \t" << obj.getName() << endl;
    o << "Form is signed:           \t" << obj.getIsSigned() << endl;
    o << "Form grade to sign:       \t" << obj.getGradeToSign() << endl;
    o << "Form grade to execute:    \t" << obj.getGradeToExecute() << endl;
    return o;
}