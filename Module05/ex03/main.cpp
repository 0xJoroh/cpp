#include "./includes/Bureaucrat.hpp"
#include "./includes/Form.hpp"
#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/Intern.hpp"

void lfonksion()
{
    Bureaucrat br("bureaucrat", 1);
    Intern someRandomIntern;
    Form *rrf;
    rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
    if (rrf)
    {
        // cout << *rrf;
        rrf->beSigned(br);
        br.executeForm(*rrf);
        delete rrf;
    }
}

int main(void)
{
    lfonksion();
    // system("leaks Intern");
    return 0;
}