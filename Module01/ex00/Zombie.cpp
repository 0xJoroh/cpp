#include "Zombie.hpp"

// Member functions definitions
void Zombie::announce(void)
{
	cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(string name)
{
	this->name = name;
	this->announce();
}

Zombie::~Zombie()
{
	cout << this->name << " Dies" << endl;
}
