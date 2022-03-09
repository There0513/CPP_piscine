#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name ) : _name(name)/*, _weapon(NULL) */ {
	std::cout << "Constructor HumanB\n";
}

HumanB::~HumanB( void ) {
	std::cout << "Destructor HumanB\n";
}

void	HumanB::attack( void ) const {
	std::cout << this->_name << " attacks with her " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon ) {
	this->_weapon = &weapon;
}
