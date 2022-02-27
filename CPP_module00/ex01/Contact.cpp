#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <sstream>
#include <iomanip>

Contact::Contact( void ) {
//	std::cout << "Contact constructor called" << std::endl;
	return;
}

Contact::~Contact( void ) {
//	std::cout << "Contact destructor called" << std::endl;
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

void	Contact::printTen(int index) {
	//index firstname lastname nickname
	std::cout << std::setw(10);
	std::cout << index;
	std::cout << "|";
	std::cout << std::setw(10);
	if (_first_name.length() >= 10)
	{
		std::cout << std::setw(9);
		std::cout << _first_name.substr(0, 9) << ".";
	}
	else
		std::cout << _first_name;
	std::cout << "|";
	std::cout << std::setw(10);
	if (_last_name.length() >= 10)
	{
		std::cout << std::setw(9);
		std::cout << _last_name.substr(0, 9) << ".";
	}
	else
		std::cout << _last_name;
	std::cout << "|";
	std::cout << std::setw(10);
	if (_nickname.length() >= 10)
	{
		std::cout << std::setw(9);
		std::cout << _nickname.substr(0, 9) << ".";
	}
	else
		std::cout << _nickname;
	std::cout << "|";
	std::cout << "\n";
}
