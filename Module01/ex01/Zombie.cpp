#include "Zombie.hpp"

// Member functions definitions
void Zombie::announce(void)
{
	cout << this->_name << endl;
}

Zombie::Zombie(string name)
{
	this->_name = name;
	this->announce();
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	cout << this->_name << " Dies" << endl;
}

void Zombie::setName(string name)
{
	this->_name = name;
}