#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *object = new Zombie(name);
	return object;
}
