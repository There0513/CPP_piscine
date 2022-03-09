#include "Zombie.hpp"

void	randomChump( std::string name ) {
	Zombie newZ = Zombie(name); // allocate on the stack
	newZ.announce();
	// end of function -> Hanne is destroyed
}
