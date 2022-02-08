#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name): ClapTrap(name +  "_clap_name"), _name(name){
    this->_hitpoints = FragTrap::_hitpoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap constructor called" << std::endl;    
}

DiamondTrap::DiamondTrap(): ClapTrap("DiamondTrap Default Name_clap_name"), _name("DiamondTrap Default Name"){
    this->_hitpoints = FragTrap::_hitpoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap constructor called" << std::endl;    
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor called" << std::endl;    
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy){
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs){
    std::cout << "DiamondTrap Assignment operator called" << std::endl;
    this->ClapTrap::_name = rhs.ClapTrap::_name;
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void DiamondTrap::attack(string const & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
    std::cout << "\nDiamondTrap name \t" << this->_name << "" << std::endl;
    std::cout << "ClapTrap name \t\t" << ClapTrap::_name << "\n" << std::endl;
}
