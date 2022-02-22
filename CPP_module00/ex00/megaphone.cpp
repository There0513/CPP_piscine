#include <iostream>

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			std::locale loc;
			std::string str = av[i];
			for (std::string::size_type j = 0; j<str.length(); ++j)
				std::cout << std::toupper(str[j], loc);
			i++;
		}
		std::cout << std::endl;
	}
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
