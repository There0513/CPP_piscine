#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	buff;

	std::cout << "Please enter ADD SEARCH or EXIT" << std::endl;
	while (1)
	{
		std::cin >> buff;
		if (buff == "EXIT")
			break ;
		if (buff == "ADD")
			phonebook.add();
		if (buff == "SEARCH")
			phonebook.search();
	}
	return 0;
}
