#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat: public Animal
{
    public:
        /* default constructor - copy constructor - copy assignment operator overload - destructor */
        Cat( void );
        Cat( std::string type );
        Cat( Cat const & copy );
        Cat & operator=(Cat const & copy);
        ~Cat( void );

        virtual void    makeSound( void ) const;
};

#endif