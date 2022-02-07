#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(){
    _hitpoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    _name = "Name for test";
    std::cout << "New ClapTrap created" << std::endl;    
}
ClapTrap::ClapTrap(string name){
    _hitpoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    this->_name = name + "_clap_name";
    std::cout << "New ClapTrap created" << std::endl;    
}
ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << _name << " Died" << std::endl;    
}
void ClapTrap::attack(string const & target){
    std::cout << "ClapTrap " << _name  << " attack "  << target << ", causing " << _attackDamage << " points of damage!" << std::endl;    
}
void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << _name  << " take damage : " << amount << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "ClapTrap " << _name  << " be repaired : " << amount << std::endl;
}
