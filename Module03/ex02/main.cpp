#include "./FragTrap.hpp"

int main(void)
{
    FragTrap obj("Joroh");
    FragTrap test(obj); // test Assignment Operator and Copy Constructor
    std::cout << "-----------" << std::endl;
    test.attack("Target");
    test.takeDamage(15);
    test.beRepaired(7);
    test.highFivesGuys();
    std::cout << "-----------" << std::endl;
    return 0;
}
