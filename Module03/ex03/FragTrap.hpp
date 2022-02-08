#ifndef __FragTrap_H__
#define __FragTrap_H__

#include "./ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(string name);
    FragTrap();
    ~FragTrap();
    
    FragTrap(const FragTrap &copy);
    FragTrap &operator=(const FragTrap &rhs);

    void highFivesGuys(void);
};

#endif
