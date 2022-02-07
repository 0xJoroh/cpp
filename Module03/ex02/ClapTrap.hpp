#ifndef __ClapTrap_H__
#define __ClapTrap_H__

#include <string>
#include <iostream>

#define string std::string

class ClapTrap
{
protected:
    string  _name;
    int     _hitpoints;
    int     _energyPoints;
    int     _attackDamage;
public:
    ClapTrap(string name);
    ClapTrap();
    ~ClapTrap();

    void attack(string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
