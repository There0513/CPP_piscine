#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA {

	private:
		std::string	_name;
		Weapon		&_weapon;	// REF as HumanA always have a weapon

	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );
		
		void	attack( void ) const;
};

#endif
