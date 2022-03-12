#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
// CANONICAL FORM!!!!!
class ClapTrap
{
    private:
        std::string _name;
        int         _hit_points = 10;
        int         _energy_points = 10;
        int         _attack_damage = 0;

    public:
        ClapTrap( std::string _name );
        ~ClapTrap();
};

#endif