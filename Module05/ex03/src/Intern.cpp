#include "../includes/Intern.hpp"

Intern::Intern()
{
}
Intern::Intern(Intern const &src)
{
    *this = src;
}
Intern::~Intern()
{
}
Intern &Intern::operator=(Intern const &rhs)
{
    if (this != &rhs)
        *this = rhs;
    return *this;
}
Form *Intern::makeForm(string name, string target)
{
    string names[3] = {"shrubbery request", "robotomy request", "presidential request"};
    Form *forms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    Form *res = NULL;
    try
    {
        for (int i = 0; i < 3; i++)
            if (name == names[i])
            {
                res = forms[i];
                cout << "Intern creates " << forms[i]->getName() << endl;
            }
            else
                delete forms[i];
        if (!res)
            throw FormNotFoundException();
    }
    catch (FormNotFoundException &e)
    {
        cout << e.what() << endl;
    }
    return res;
}

const char *Intern::FormNotFoundException::what() const throw()
{
    return "this form doesn't exist";
}