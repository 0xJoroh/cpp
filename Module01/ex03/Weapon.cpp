#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{
}

void Weapon::setType(string type)
{
    this->_type = type;
}

const string Weapon::getType()
{
    return this->_type;
}