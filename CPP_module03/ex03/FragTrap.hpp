#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
        FragTrap( void );
        FragTrap( std::string name );                   // default constructor
        FragTrap( FragTrap const & copy );              // copy constructor
        FragTrap & operator=( FragTrap const & copy );  // copy assignment operator overload
        ~FragTrap( void );                              // destructor

        void    highFivesGuys( void );
};
// std::ostream &  operator<<( std::ostream & o, ClapTrap const & copy );

#endif