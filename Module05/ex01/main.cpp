#include "./Form.hpp"

int main(void)
{
    Bureaucrat br("Bureaucrat", 5);
    Form form("Form");

    // -> Exceptions tests
    cout << br;
    br.setGrade(155);
    cout << br;
    br.setGrade(100);
    cout << br;
    br.setGrade(-5);
    cout << br;

    // -> decrementGrade & incrementGrade tests
    // br.setGrade(149);
    // br.decrementGrade();
    // br.decrementGrade();
    // br.setGrade(2);
    // br.incrementGrade();
    // br.incrementGrade();

    // -> Signe the form tests
    // br.setGrade(5);
    // form.beSigned(br); // will sign the form if the bureaucrat grad between 1 and 10
    // cout << form;

    // -> Bureaucrat Sign form tests
    // br.setGrade(15);
    // form.beSigned(br);
    // br.signForm(form);
    return 0;
}