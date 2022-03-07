#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type {
	std::cout << "Constructor\n";
}

Weapon::~Weapon( void ) {
	std::cout << "Destructor\n";
}

std::string	const	&Weapon::getType() const {
	return (_type);
}

void				Weapon::setType(std::string type) {
	this->_type = type;
//	_type = type; // working?!
}
