#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

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
    const string getType();
    void setType(string type);
    Weapon(string type);
    Weapon();
    ~Weapon();
};

#endif
