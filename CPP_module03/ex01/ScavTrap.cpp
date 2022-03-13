#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): ClapTrap(name) {
    this->_name = name;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "ScavTrap Constructor for " << this->_name << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & copy ): ClapTrap(ScavTrap) {
    std::cout << "ScavTrap Copy constructor for " << copy._name << std::endl;
    *this = copy;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & copy ) {
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_attack_damage = copy._attack_damage;
    return *this;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "ScavTrap Destructor for " << this->_name << std::endl;
}

void    ScavTrap::attack( const std::string& target ) {
    if (this->_energy_points > 0 && this->_hit_points > 0)
    {
        std::cout << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
        this->_energy_points--;
    }
    else if (this->_hit_points == 0)
        std::cout << this->_name << " is already dead and can't attack!" << std::endl;
    else
        std::cout << "Sorry, no energy points left to attack someone!" << std::endl;
}

void    ScavTrap::guardGate( void ) {
    std::cout << "ScavTrav is now in Gate keeper mode." << std::endl;
}