#include "Zombie.hpp"

int main()
{
	randomChump("Joroh");

	Zombie *zHeap;
	zHeap = newZombie("Ada");
	delete zHeap;
	return 0;
}
