#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>

class Ice
{
    public:
        Ice( void );
        Ice( Ice const & copy );
        Ice & operator=( Ice const & copy );
        ~Ice( void );

        Ice*   clone( void ); // const?!
        void    use( ICharacter & who ); //display who.name
};

#endif