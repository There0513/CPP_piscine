#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "Constructor for " << this->_name << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & copy ) {
    std::cout << "Copy constructor for " << copy._name << std::endl;
    *this = copy;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & copy ) {
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_attack_damage = copy._attack_damage;
    return *this;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "Destructor for " << this->_name << std::endl;
}

void    ClapTrap::attack( const std::string& target ) {
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

void    ClapTrap::takeDamage( unsigned int amount ) {

    std::cout << this->_name << " takes " << amount << " damage." << std::endl;
    if (this->_hit_points - amount < 0)
        this->_hit_points = 0;
    else
        this->_hit_points -= amount;
    if (this->_hit_points == 0)
        std::cout << this->_name << " is dead!" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount ) {
/* When ClapTrap repairs itself, it gets <amount> hit points back. 
Attacking and repairing cost 1 energy point each. */
    std::cout << "ClapTrap " << this->_name << " is being repaired and gets " << amount << " hit points back"  << std::endl;
    this->_hit_points += amount;
    this->_energy_points--;
}