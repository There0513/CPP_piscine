#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <stdlib.h>     /* atoi */

PhoneBook::PhoneBook( void ) {
	std::cout << "Constructor called" << std::endl;
	_nbr_of_contacts = 0;
	_total_contacts = 0;
	return;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	PhoneBook::add( void ) {
	std::cout << "_nbr_of_contacts = " <<_nbr_of_contacts;
	if (_nbr_of_contacts ==  8)
		_nbr_of_contacts = 0;
	_nbr_of_contacts += 1;
	_total_contacts += 1;
	if (_total_contacts > 8)
		_total_contacts = 8;
	_contacts[_nbr_of_contacts - 1].setData();
}

void	PhoneBook::search( void ) {
	std::string	index_str;
	int		index;

	std::cout << "_total_contacts = " << _total_contacts;
	// first -> print all saved contacts in 4 columns
	// check if phonebook is not empty/ index exists
	std::cout << "Please enter the index of the contact you want to display: ";
	std::cin >> index_str;
	index = atoi(index_str.c_str()); // .c_str ?!
	if (index < 0 || index > _total_contacts)
	//if (index < 0 || index > _nbr_of_contacts)
		std::cout << "Index not valid." << std::endl;
	else
	{
		this->_contacts[index].printContact();
	/*	std::cout << "First name: " << _first_name << std::endl;
		std::cout << "Last name: " << _last_name << std::endl;
		std::cout << "Nickname: " << _nickname << std::endl;
		std::cout << "Phone nbr: " << _phone_nbr << std::endl;
		std::cout << "Darkest secret: " << _secret << std::endl;*/

	}
}
