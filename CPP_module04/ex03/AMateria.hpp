#pragma once
#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string     _type;

    public:
        /* default constructor - copy constructor - copy assignment operator overload - destructor: */
        AMateria( void );
        AMateria( std::string const & type);
        AMateria( AMateria const & copy );
        AMateria & operator=( AMateria const & copy);
        virtual ~AMateria( void );

        std::string const & getType( void ) const;

        virtual AMateria* clone( void ) const = 0;
        virtual void use(ICharacter& target);
};

#endif