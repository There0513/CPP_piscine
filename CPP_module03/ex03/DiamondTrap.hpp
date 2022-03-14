#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap: public ScavTrap, public FragTrap
// class DiamondTrap: public FragTrap, public ScavTrap
{
    private:
        std::string _name;
        DiamondTrap( void );

    public:
        DiamondTrap( std::string name );                   // default constructor
        DiamondTrap( DiamondTrap const & copy );              // copy constructor
        DiamondTrap & operator=( DiamondTrap const & copy );  // copy assignment operator overload
        ~DiamondTrap( void );                              // destructor

		using ScavTrap::attack;
        void    whoAmI( void );

};

#endif