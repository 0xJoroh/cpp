#include "./FragTrap.hpp"

FragTrap::FragTrap(){
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    _name = "Default name";
    std::cout << "New FragTrap created" << std::endl;    
}
FragTrap::FragTrap(string name) : _name(name){
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "New FragTrap created" << std::endl;    
}
FragTrap::~FragTrap(){
    std::cout << "FragTrap " << _name << " Died" << std::endl;    
}

void FragTrap::highFivesGuys(void){
    std::cout << "high fives" << std::endl;    
}