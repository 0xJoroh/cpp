#include "./ScavTrap.hpp"

int main(void)
{
    ScavTrap obj("Joroh");
    obj.attack("test");
    obj.takeDamage(11);
    obj.beRepaired(12);
    obj.guardGate();

    return 0;
}
