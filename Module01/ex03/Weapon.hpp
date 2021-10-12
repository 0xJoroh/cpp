#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <string>
#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::endl

class Weapon
{
private:
    string _type;

public:
    //TODO: Check
	const string getType();
	void setType(string type);
    Weapon();
    ~Weapon();
};

#endif
