#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: public Animal
{
    public:
        /* default constructor - copy constructor - copy assignment operator overload - destructor */
        Dog( void );
        Dog( std::string type );
        Dog( Dog const & copy );
        Dog & operator=(Dog const & copy);
        ~Dog( void );

        virtual void    makeSound( void ) const;
};

#endif