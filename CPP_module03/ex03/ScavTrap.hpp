#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: /*virtual*/ public ClapTrap
{
    public:
        ScavTrap( std::string name );                   // default constructor
        ScavTrap( ScavTrap const & copy );              // copy constructor
        ScavTrap & operator=( ScavTrap const & copy );  // copy assignment operator overload
        ~ScavTrap( void );                              // destructor

        void    attack( const std::string & target );
        void    guardGate( void );
};
// std::ostream &  operator<<( std::ostream & o, ClapTrap const & copy );

#endif