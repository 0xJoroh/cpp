#include "./ClapTrap.hpp"

int main(void)
{
    ClapTrap obj("Joroh");
    ClapTrap test(obj); // test Assignment Operator and Copy Constructor
    std::cout << "-----------" << std::endl;
    test.attack("Target");
    test.takeDamage(8);
    test.beRepaired(5);
    std::cout << "-----------" << std::endl;

    return 0;
}
