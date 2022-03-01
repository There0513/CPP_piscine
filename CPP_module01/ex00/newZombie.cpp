#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	Zombie *newZ = new Zombie(name);

	//newZ->_name = name;
	return newZ;
}
