#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(){
    _hitpoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _name = "Default name";
    std::cout << "New ScavTrap created" << std::endl;    
}
ScavTrap::ScavTrap(string name) : _name(name){
    _hitpoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "New ScavTrap created" << std::endl;    
}
ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << _name << " Died" << std::endl;    
}

void ScavTrap::attack(string const & target){
    std::cout << "ScavTrap " << _name  << " attack "  << target << ", causing " << _attackDamage << " points of damage!" << std::endl;    
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << _name <<" have enterred in Gate keeper mode" <<std::endl;    
}