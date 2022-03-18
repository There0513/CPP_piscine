#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include <iostream>

class Cure: public AMateria
{
    public:
        Cure( void );
        Cure( Cure const & copy );
        Cure & operator=( Cure const & copy );
        ~Cure( void );

        Cure*   clone( void ) const;
        void    use( ICharacter & who );
};

#endif