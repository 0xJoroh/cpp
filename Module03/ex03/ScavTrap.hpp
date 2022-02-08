#ifndef __ScavTrap_H__
#define __ScavTrap_H__

#include "./ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap(string name);
    ScavTrap();
    ~ScavTrap();

    ScavTrap(const ScavTrap &copy);
    ScavTrap &operator=(const ScavTrap &rhs);

    void attack(string const & target);
    void guardGate();
};

#endif
