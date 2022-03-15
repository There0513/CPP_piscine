#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        /* default constructor - copy constructor - copy assignment operator overload - destructor */
        WrongCat( void );
        WrongCat( std::string type );
        WrongCat( WrongCat const & copy );
        WrongCat & operator=(WrongCat const & copy);
        ~WrongCat( void );

        void    makeSound( void ) const;
};

#endif