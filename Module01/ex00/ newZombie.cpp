#include "Zombie.hpp"

Zombie *newZombie(string name)
{
	Zombie *object = new Zombie(name);
	return object;
}
