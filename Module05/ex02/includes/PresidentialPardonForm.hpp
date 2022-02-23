#ifndef _PresidentialPardonForm_HPP_
#define _PresidentialPardonForm_HPP_

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    const string _target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(string target);
    ~PresidentialPardonForm();

    PresidentialPardonForm(PresidentialPardonForm const &src);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

    void action(const Bureaucrat &br) const;
};

#endif