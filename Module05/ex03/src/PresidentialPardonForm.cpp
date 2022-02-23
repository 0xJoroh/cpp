#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
PresidentialPardonForm::PresidentialPardonForm(string target) : Form("Presidential", 15, 4), _target(target)
{
}
void PresidentialPardonForm::action(const Bureaucrat &br) const
{
    if (!this->execute(br))
        return;
    try
    {
        if (this->getGradeToExecute() > 5)
            throw Form::GradeTooLowException();
        if (this->getGradeToSign() > 25)
            throw Form::GradeTooLowException();
        cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << endl;
    }
    catch (std::exception &e)
    {
        cerr << e.what() << endl;
    }
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    this->Form::operator=(rhs);
    return *this;
}
