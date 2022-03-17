#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter
{
    private:
        std::string     _name;
        AMateria*       _inventory[4];

    public:
        Character( void );
        Character( std::string name );
        Character( Character const & copy);
        Character & operator=( Character const & copy);
        ~Character( void );

    /* from ICharacter Interface: */
        std::string const & getName( void );
        void equip( AMateria* m );
        void unequip( int idx );
        void use( int idx, ICharacter& target );
};

#endif