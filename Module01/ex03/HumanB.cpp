#include "HumanB.hpp"

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