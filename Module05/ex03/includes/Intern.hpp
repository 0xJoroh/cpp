#ifndef _Intern_hpp
#define _Intern_hpp

#include <string>
#include "./Form.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(Intern const &src);
    ~Intern();

    Intern &operator=(Intern const &rhs);
    Form *makeForm(string formName, string target);
};

#endif