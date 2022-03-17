#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

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
        virtual ~AMateria( void );    // virtual?! recheck at the end!

        std::string const & getType( void ) const;

        virtual AMateria* clone( void ) const = 0;
        virtual void use(ICharacter& target);
};

#endif