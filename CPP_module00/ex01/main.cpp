#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;

	phonebook.foo = 2;
	std::cout << "phonebook.foo: " << phonebook.foo << std::endl;

	phonebook.bar();
	return 0;
}
