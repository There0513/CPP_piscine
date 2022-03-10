#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <stdlib.h>     /* atoi */
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook( void ) {
//	std::cout << "Constructor called" << std::endl;
	_nbr_of_contacts = 0;
	_total_contacts = 0;
	return;
}

PhoneBook::~PhoneBook( void ) {
//	std::cout << "Destructor called" << std::endl;
	return;
}

void	PhoneBook::add( void ) {
	if (_nbr_of_contacts ==  8)
		_nbr_of_contacts = 0;
	_nbr_of_contacts += 1;
	_total_contacts += 1;
	if (_total_contacts > 8)
		_total_contacts = 8;
	_contacts[_nbr_of_contacts - 1].setData();
	std::cout << "\tContact added." << std::endl;
}

void	PhoneBook::search( void ) {
	std::string	index_str;
	int		index = 0;

	if (_total_contacts == 0)
	{
		std::cout << "No contacts in phonebook." << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "___________________________________________" << std::endl;
	while (index < _total_contacts)
	{
		_contacts[index].printTen(index);
		index++;
	}
	std::cout << "Please enter the index of the contact you want to display: ";
	std::cin >> index_str;
	if (std::isdigit(index_str[0]) == 0)
	{
		std::cout << "Index not valid." << std::endl;
		return;
	}
	index = atoi(index_str.c_str());
	if (index < 0 || index >= _total_contacts)
		std::cout << "Index not valid." << std::endl;
	else
	{
		this->_contacts[index].printContact();
	}
}
