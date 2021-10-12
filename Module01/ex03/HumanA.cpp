#include "HumanA.hpp"

HumanA::HumanA()
{

}
HumanA::~HumanA()
{

}

void HumanA::attack()
{
    cout << this->_name << " attacks with his " << this->_weapon.getType() << endl;
}
