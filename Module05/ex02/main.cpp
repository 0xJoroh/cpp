#include "./includes/Form.hpp"
#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat br("Bureaucrat", 1);
    ShrubberyCreationForm s("Target");
    RobotomyRequestForm r("Robotomy");
    PresidentialPardonForm p("Presidential");

    cout << "************ Shrubbery test ************" << endl;
    s.beSigned(br);
    br.executeForm(s);
    cout << endl;

    cout << "************ Robotomy test ************" << endl;
    r.beSigned(br);
    br.executeForm(r);
    cout << endl;

    cout << "************ Presidential test ************" << endl;
    // p.beSigned(br);
    br.executeForm(p);
    cout << endl;

    // cout << s;
    // cout << r;
    // cout << p;

    return 0;
}