#include "Zombie.hpp"

Zombie::Zombie( void ) {
//	return ;
}

Zombie::Zombie( std::string name ) : _name(name) {

}

Zombie::~Zombie( void ) {
	std::cout << "Destructor " << _name  << std::endl;
//	return ; 
}

void	Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
