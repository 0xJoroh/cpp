#include "./FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap Default Name"){
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;    
}
FragTrap::FragTrap(string name) : ClapTrap(name){
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;    
}
FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;    
}

FragTrap::FragTrap(const FragTrap &copy){
    std::cout << "FragTrap Copy constructor called" << std::endl;    
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs){
    std::cout << "FragTrap Assignment operator called" << std::endl;
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void FragTrap::attack(string const & target){
    if (this->_hitpoints < 1 || this->_energyPoints < 1)
    {
        std::cout << "FragTrap dosen't have Hitpoints or EnergyPoints to attack." << std::endl;
        return;
    }  
    --this->_energyPoints;
    std::cout << "FragTrap " << this->_name  << " attack "  << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "High fives from FragTrap " << this->_name << std::endl;    
}