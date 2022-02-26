#ifndef PhoneBook_HPP
# define PhoneBook_HPP
# include "Contact.hpp"

class PhoneBook {

	private:
		Contact _contacts[8];
		int	_nbr_of_contacts;
		int	_total_contacts;
	public:
		PhoneBook( void );
		~PhoneBook( void );
		void	add( void );
		void	search( void); // const?!
};

#endif
