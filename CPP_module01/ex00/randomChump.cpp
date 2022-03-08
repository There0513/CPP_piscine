#include "Zombie.hpp"

void	randomChump( std::string name ) {
	Zombie newZ = Zombie(name); // stack

//	newZ = Zombie(name);
	//newZ.name = name;// set_name(name);
	newZ.announce();
}
