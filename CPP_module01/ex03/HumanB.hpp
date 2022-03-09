#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB {

	private:
		std::string	_name;
		Weapon		*_weapon;	// ptr as HumanB may not always have a weapon

	public:
		HumanB( std::string name );
		~HumanB( void );
		
		void	attack( void ) const;
		void	setWeapon( Weapon &weapon );
};

#endif
