#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__
#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	// Member functions declaration
	void announce(void);
	Zombie(std::string name);
	~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
