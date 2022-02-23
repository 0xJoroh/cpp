#include "./includes/Form.hpp"
#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/Intern.hpp"

void lfonksion()
{
    Intern someRandomIntern;
    Form *rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf)
    {
        cout << *rrf;
        delete rrf;
    }
}

int main(void)
{
    lfonksion();
    // system("leaks Intern");
    return 0;
}