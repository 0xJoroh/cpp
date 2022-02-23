#ifndef _RobotomyRequestForm_HPP_
#define _RobotomyRequestForm_HPP_

#include "Form.hpp"
#include <time.h>

class RobotomyRequestForm : public Form
{
private:
    const string _target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(string target);
    ~RobotomyRequestForm();

    RobotomyRequestForm(RobotomyRequestForm const &src);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

    void action(const Bureaucrat &br) const;
};

#endif