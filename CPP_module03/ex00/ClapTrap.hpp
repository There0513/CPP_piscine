#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
    private:
        std::string     _name;
        unsigned int    _hit_points;
        unsigned int    _energy_points;
        unsigned int    _attack_damage;

    public:
        ClapTrap( std::string name );                   // default constructor
        ClapTrap( ClapTrap const & copy );              // copy constructor
        ClapTrap & operator=( ClapTrap const & copy );  // copy assignment operator overload
        ~ClapTrap( void );                              // destructor

        void    attack( const std::string & target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
};

// std::ostream &  operator<<( std::ostream & o, ClapTrap const & copy );

#endif