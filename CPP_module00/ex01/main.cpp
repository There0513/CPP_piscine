#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	buff;

	std::cout << "Please enter ADD SEARCH or EXIT" << std::endl;
	while (std::cin.eof() != 1)
	{
		std::cin >> buff;
		if (buff == "EXIT")
			break ;
		else if (buff == "ADD")
			phonebook.add();
		else if (buff == "SEARCH")
			phonebook.search();
	}
	return 0;
}
