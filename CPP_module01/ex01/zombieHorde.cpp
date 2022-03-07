#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	//Zombie *horde = new Zombie[N](name);
	Zombie *horde;
	int	i = 0;

//	horde = new Zombie[N](name);
	while (i < N)
	{
		horde[i] = new Zombie(name);
		i++;
	}
	return horde;
}
