#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <stdlib.h>

#define string std::string
#define cout std::cout
#define endl std::endl

class Zombie
{
private:
	string _name;

public:
	// Member functions declaration
	Zombie(string name);
	Zombie();
	~Zombie();
	void announce(void);
	void setName(string name);
};

Zombie *zombieHorde(int N, string name);
Zombie *newZombie(string name);
void randomChump(string name);

#endif
