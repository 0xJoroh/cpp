#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(string name):  _hitpoints(10), _energyPoints(10), _attackDamage(0){
    this->_name = name;
    std::cout << "ClapTrap constructor called" << std::endl;    
}

ClapTrap::ClapTrap(): _name("ClapTrap Default Name"), _hitpoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "ClapTrap constructor called" << std::endl;    
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called" << std::endl;    
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs){
    std::cout << "ClapTrap Assignment operator called" << std::endl;
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void ClapTrap::attack(const string &target){
    if (this->_hitpoints < 1 || this->_energyPoints < 1)
    {
        std::cout << "ClapTrap dosen't have Hitpoints or EnergyPoints to attack." << std::endl;
        return;
    }  
    --this->_energyPoints;
    std::cout << "ClapTrap " << this->_name  << " attacks "  << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;    
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->_hitpoints >= amount)
        this->_hitpoints -= amount;
    else
        this->_hitpoints = 0;
    std::cout << "ClapTrap " << this->_name  << " take damage " << amount << " hit points left " << this->_hitpoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->_hitpoints < 1 || this->_energyPoints < 1)
    {
        std::cout << "ClapTrap dosen't have Hitpoints or EnergyPoints to be repaired." << std::endl;
        return;
    }
    --this->_energyPoints;
    this->_hitpoints += amount;
    std::cout << "ClapTrap " << this->_name << " takes back " << amount << " hit points " << std::endl;
}
