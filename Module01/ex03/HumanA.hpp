#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"

class HumanA
{
private:
    Weapon *_weapon;
    string _name;

public:
    HumanA();
    ~HumanA();
    HumanA(string name, Weapon &weapon);
    void attack();
};
#endif
