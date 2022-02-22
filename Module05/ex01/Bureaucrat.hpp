#ifndef _Bureaucrat_HPP
#define _Bureaucrat_HPP

#include <iostream>
#include <string>
#include <exception>
#include "./Form.hpp"

#define string std::string
#define cout std::cout
#define endl std::endl
#define cerr std::cerr

// Forward declaration
class Form;
class Bureaucrat
{
private:
    string const _name;
    int _grade;

public:
    Bureaucrat();
    Bureaucrat(int grade);
    Bureaucrat(const string name, int grade);
    Bureaucrat(Bureaucrat const &src);
    ~Bureaucrat();

    Bureaucrat &operator=(Bureaucrat const &rhs);

    const string getName() const;
    int getGrade() const;

    void setGrade(int grade);

    void incrementGrade();
    void decrementGrade();
    void signForm(Form &fr);

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
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj);

#endif