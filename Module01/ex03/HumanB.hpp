#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *_weapon;
    string _name;

public:
    HumanB();
    ~HumanB();
    HumanB(string name);
    void attack();
    void setWeapon(Weapon &weapon);
};

#endif
