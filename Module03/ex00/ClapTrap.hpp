#ifndef __ClapTrap_H__
#define __ClapTrap_H__

#include <string>
#include <iostream>

#define string std::string

class ClapTrap
{
private:
    string  _name;
    int     _hitpoints;
    int     _energyPoints;
    int     _attackDamage;

public:
    ClapTrap(string name);
    ClapTrap();
    ~ClapTrap();

    ClapTrap(const ClapTrap &copy);
    ClapTrap &operator=(const ClapTrap &rhs);

    void attack(string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
