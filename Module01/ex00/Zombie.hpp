#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__
#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::endl

class Zombie
{
private:
	string name;

public:
	// Member functions declaration
	void announce(void);
	Zombie(string name);
	~Zombie();
};

Zombie *newZombie(string name);
void randomChump(string name);

#endif
