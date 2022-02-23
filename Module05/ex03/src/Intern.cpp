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
    (void)rhs;
    return *this;
}
Form *Intern::makeForm(string formName, string target)
{
    string names[3] = {"shrubbery request", "robotomy request", "presidential request"};
    Form *forms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    Form *res = NULL;
    try
    {
        for (int i = 0; i < 3; i++)
            if (formName == names[i])
            {
                res = forms[i];
                cout << "Intern creates " << forms[i]->getName() << endl;
            }
            else
                delete forms[i];
        if (!res)
            throw "this form doesn't exist";
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }
    return res;
}