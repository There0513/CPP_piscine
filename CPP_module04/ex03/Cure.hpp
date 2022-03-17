#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>

class Cure
{
    public:
        Cure( void );
        Cure( Cure const & copy );
        Cure & operator=( Cure const & copy );
        ~Cure( void );

        Cure*   clone( void ); // const?!
        void    use( ICharacter & who ); //display who.name
};

#endif