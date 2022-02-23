#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(string target) : Form("Robotomy", 25, 40), _target(target)
{
}
void RobotomyRequestForm::action(const Bureaucrat &br) const
{
    if (!this->execute(br))
        return;
    try
    {
        if (this->getGradeToExecute() > 45)
            throw Form::GradeTooLowException();
        if (this->getGradeToSign() > 72)
            throw Form::GradeTooLowException();
        srand(time(NULL));
        if (rand() % 2)
            cout << this->_target << " has been robotomized successfully" << endl;
        else
            cout << this->_target << " failed" << endl;
    }
    catch (std::exception &e)
    {
        cerr << e.what() << endl;
    }
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    this->Form::operator=(rhs);
    return *this;
}