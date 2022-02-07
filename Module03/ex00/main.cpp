#include "./ClapTrap.hpp"

int main(void)
{
    ClapTrap obj("Joroh");
    obj.attack("test");
    obj.takeDamage(11);
    obj.beRepaired(11);

    return 0;
}
