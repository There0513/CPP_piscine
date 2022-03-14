#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap("no_name") {
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "   FragTrap Constructor for " << this->_name << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name) {
    this->_name = name;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "   FragTrap Constructor for " << this->_name << std::endl;
}

FragTrap::FragTrap( FragTrap const & copy ): ClapTrap(copy) {
    std::cout << "   FragTrap Copy constructor for " << copy._name << std::endl;
    *this = copy;
}

FragTrap & FragTrap::operator=( FragTrap const & copy ) {
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_attack_damage = copy._attack_damage;
    return *this;
}

FragTrap::~FragTrap( void ) {
    std::cout << "   FragTrap Destructor for " << this->_name << std::endl;
}

void    FragTrap::highFivesGuys( void ) {
    std::cout << "   FragTrap: >> Give me a high five! <<" << std::endl;
}