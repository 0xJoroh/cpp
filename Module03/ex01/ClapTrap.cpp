#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(string name):  _hitpoints(10), _energyPoints(10), _attackDamage(0){
    this->_name = name;
    std::cout << "New ClapTrap created" << std::endl;    
}
ClapTrap::ClapTrap(): _name("Default name"), _hitpoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "New ClapTrap created" << std::endl;    
}
ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << _name << " Died" << std::endl;    
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs){
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void ClapTrap::attack(string const & target){
    std::cout << "ClapTrap " << _name  << " attack "  << target << ", causing " << _attackDamage << " points of damage!" << std::endl;    
}
void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << _name  << " take damage : " << amount << " hit points: " << _hitpoints << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "ClapTrap " << _name << " amout : " << amount << " energy points: " << _energyPoints << std::endl;
}
