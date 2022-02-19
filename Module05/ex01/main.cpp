#include "./Form.hpp"

int main(void)
{
    Bureaucrat br;
    Form form;

    cout << form;
    // br.setGrade(55);
    // br.setGrade(-5);
    form.beSigned(br);
    cout << form;

    return 0;
}
