#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie {

	private:
		std::string	_name;

	public:
		// Zombie( void );
		Zombie( std::string name = "NONAME");
		~Zombie( void );
		void	announce( void );
		void	set_name( std::string name );
		
};

Zombie* newZombie( std::string name );
Zombie* zombieHorde( int n, std::string name );
void	randomChump( std::string name );

#endif
