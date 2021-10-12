#ifndef __HUMAN_A_H__
#define __HUMAN_A_H__

#include "Weapon.hpp"

class HumanA
{
private:
    Weapon _weapon;
    string _name;

public:
    HumanA();
    ~HumanA();
    void attack();
};
#endif
