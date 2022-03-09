#include "sed.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "wrong argument nbr." << std::endl;
		return 0;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	return 0;
}
