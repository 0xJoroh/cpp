#include "./Bureaucrat.hpp"

int main(void)
{
    Bureaucrat obj(2);

    cout << obj.getGrade() << endl;
    cout << obj.getName() << endl;

    obj.decrementGrade();
    obj.decrementGrade();
    obj.decrementGrade();

    cout << obj.getGrade() << endl;

    obj.incrementGrade();
    obj.incrementGrade();
    obj.incrementGrade();
    obj.incrementGrade();
    obj.incrementGrade();

    cout << obj.getGrade() << endl;

    return 0;
}
