#include "./ScavTrap.hpp"

int main(void)
{
    ScavTrap obj("Joroh");
    ScavTrap test(obj);
    test.attack("Target");
    test.takeDamage(11);
    test.beRepaired(12);
    test.guardGate();

    return 0;
}
