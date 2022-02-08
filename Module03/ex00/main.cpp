#include "./ClapTrap.hpp"

int main(void)
{
    ClapTrap obj("Joroh");
    ClapTrap test(obj);
    test.attack("Target");
    test.takeDamage(8);
    test.beRepaired(5);

    return 0;
}
