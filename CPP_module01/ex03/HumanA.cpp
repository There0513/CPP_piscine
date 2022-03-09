#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name),
_weapon(weapon) {
	std::cout << "Constructor HumanA\n";
}

HumanA::~HumanA( void ) {
	std::cout << "Destructor HumanA\n";
}

void	HumanA::attack( void ) const {
	std::cout << this->_name << " attacks with her " << this->_weapon.getType()	<< std::endl;
}
