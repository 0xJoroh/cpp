#ifndef __DiamondTrap_H__
#define __DiamondTrap_H__

#include "./ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    string _name;

public:
    DiamondTrap(string name);
    DiamondTrap();
    ~DiamondTrap();
    void attack(string const & target);
    void whoAmI();
};

#endif
