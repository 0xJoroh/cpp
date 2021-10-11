#include "Zombie.hpp"

int main()
{
	// Stuck
	randomChump("Joroh");

	// Heap
	Zombie *zHeap;
	zHeap = newZombie("Ada");
	delete zHeap;
	return 0;
}
