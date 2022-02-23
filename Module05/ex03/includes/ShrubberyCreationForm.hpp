#ifndef _ShrubberyCreationForm_HPP_
#define _ShrubberyCreationForm_HPP_

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    const string _target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(string target);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

    void action(const Bureaucrat &br) const;
};

#endif