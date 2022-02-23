#ifndef _Form_cpp
#define _Form_cpp

#include "./Bureaucrat.hpp"

#define string std::string
#define cout std::cout
#define endl std::endl
#define cerr std::cerr

// Forward declaration
class Bureaucrat;
class Form
{
private:
    const string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExecute;

public:
    Form();
    Form(const string name);
    Form(const string name, const int gradeToSign, const int gradeToExecute);
    ~Form();

    Form &operator=(const Form &);
    Form(const Form &);

    const string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(Bureaucrat &br);

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
    class GradeBeSignedException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, Form &obj);

#endif