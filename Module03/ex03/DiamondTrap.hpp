#ifndef __DiamondTrap_H__
#define __DiamondTrap_H__

#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    string _name;

public:
    DiamondTrap(string name);
    DiamondTrap();
    ~DiamondTrap();

    DiamondTrap(const DiamondTrap &copy);
    DiamondTrap &operator=(const DiamondTrap &rhs);

    void attack(string const & target);
    void whoAmI();
};

#endif
