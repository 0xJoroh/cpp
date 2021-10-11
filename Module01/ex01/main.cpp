#include "Zombie.hpp"

int main()
{
    int N = 3;
    Zombie *zombies = zombieHorde(N, "Name");

    for (int i = 0; i < N; i++)
        zombies[i].announce();

	delete [] zombies;
    return 0;
}
