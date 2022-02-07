#ifndef __FragTrap_H__
#define __FragTrap_H__

#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(string name);
    FragTrap();
    ~FragTrap();
    
    void highFivesGuys(void);
};

#endif
