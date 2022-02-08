#include "./ScavTrap.hpp"

int main(void)
{
    ScavTrap obj("Joroh");
    ScavTrap test(obj); // test Assignment Operator and Copy Constructor
    std::cout << "-----------" << std::endl;
    test.attack("Target");
    test.takeDamage(11);
    test.beRepaired(12);
    test.guardGate();
    std::cout << "-----------" << std::endl;
    return 0;
}
