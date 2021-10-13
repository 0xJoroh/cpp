#include "HumanB.hpp"

HumanB::HumanB(string name)
{
    this->_name = name;
}

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    cout << this->_name << " attacks with his " << this->_weapon.getType() << endl;
}

void HumanB::setWeapon(Weapon weapon)
{
    this->_weapon = weapon;
}