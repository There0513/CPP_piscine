#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "PhoneBook.hpp"
# include <iostream>

class Contact {

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_nbr;
		std::string	_secret;
	public:
		Contact( void );
		~Contact( void );
		void	setData( void );
		void	printContact( void );
};

#endif
