#include "./DiamondTrap.hpp"

int main(void)
{
    DiamondTrap obj("Joroh");
    DiamondTrap test(obj); // test Assignment Operator and Copy Constructor
    std::cout << "-----------" << std::endl;
    test.attack("Target");
    test.takeDamage(15);
    test.beRepaired(7);
    test.highFivesGuys();
    test.whoAmI();
    std::cout << "-----------" << std::endl;
    return 0;
}
