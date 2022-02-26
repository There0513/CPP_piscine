#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact( void ) {
	std::cout << "Contact constructor called" << std::endl;
	return;
}

Contact::~Contact( void ) {
	std::cout << "Contact destructor called" << std::endl;
	return;
}

void	Contact::setData( void ) {
	std::cout << "Please enter the following informations:" << std::endl;
	std::cout << "First name: ";
	std::cin >> _first_name;
	std::cout << "Last name: ";
	std::cin >> _last_name;
	std::cout << "Nickname: ";
	std::cin >> _nickname;
	std::cout << "Phone nbr: ";
	std::cin >> _phone_nbr;
	std::cout << "Darkest secret: ";
	std::cin >> _secret;

}

void	Contact::printContact( void ) {
	std::cout << "First name: " << _first_name << std::endl;
	std::cout << "Last name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone nbr: " << _phone_nbr << std::endl;
	std::cout << "Darkest secret: " << _secret << std::endl;
}
