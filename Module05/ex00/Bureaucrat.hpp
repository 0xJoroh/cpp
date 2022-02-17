#ifndef _Bureaucrat_HPP
#define _Bureaucrat_HPP

#include <iostream>
#include <string>
#include <exception>

#define string std::string
#define cout std::cout
#define endl std::endl
#define cerr std::cerr

class Bureaucrat
{
private:
    string const _name;
    int _grade;
    Bureaucrat();

public:
    Bureaucrat(const string name, int grade);
    Bureaucrat(Bureaucrat const &src);
    ~Bureaucrat();

    Bureaucrat &operator=(Bureaucrat const &rhs);

    const string getName() const;
    int getGrade() const;

    void incrementGrade();
    void decrementGrade();

    // static member function
    static void checkGrade(int grade);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj);

#endif