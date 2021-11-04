#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon)
{
    this->_weapon = &weapon;
    this->_name = name;
}

HumanA::HumanA()
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    cout << this->_name << " attacks with his " << this->_weapon->getType() << endl;
}
