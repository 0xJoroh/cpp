#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Default name"){
    this->_hitpoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;    
}
ScavTrap::ScavTrap(string name): ClapTrap(name){
    this->_hitpoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;    
}
ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;    
}

ScavTrap::ScavTrap(const ScavTrap &copy){
    std::cout << "ScavTrap Copy constructor called" << std::endl;    
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs){
    std::cout << "ScavTrap Assignment operator called" << std::endl;
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void ScavTrap::attack(string const & target){
    std::cout << "ScavTrap " << this->_name  << " attack "  << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;    
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" <<std::endl;    
}