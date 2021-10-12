#ifndef __HUMAN_B_H__
#define __HUMAN_B_H__

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon _weapon;
    string _name;

public:
    HumanB();
    ~HumanB();
    void attack();
};

#endif
