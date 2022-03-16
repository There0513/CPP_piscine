#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name"), _name(name) {
    this->_name = name;
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;    // have to hardcode this section as FragTrap overwrites all values
    this->_attack_damage = FragTrap::_attack_damage;
    std::cout << "    DiamondTrap Constructor for " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & copy ): ClapTrap(copy) {
    std::cout << "    DiamondTrap Copy constructor for " << copy._name << std::endl;
    *this = copy;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & copy ) {
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_attack_damage = copy._attack_damage;
    return *this;
}

DiamondTrap::~DiamondTrap( void ) {
    std::cout << "    DiamondTrap Destructor for " << this->_name << std::endl;
}

void    DiamondTrap::whoAmI( void ) {
    std::cout << "Hi, my name is " << DiamondTrap::_name << this->_hit_points << this->_energy_points << this->_attack_damage;
    std::cout << ", ClapTrap's name is " << ClapTrap::_name << std::endl;
}
