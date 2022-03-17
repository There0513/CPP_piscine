#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: public Animal
{
    private:
        Brain   *_brain;

    public:
        /* default constructor - copy constructor - copy assignment operator overload - destructor */
        Dog( void );
        Dog( std::string type );
        Dog( Dog const & copy );
        Dog & operator=(Dog const & copy);
        ~Dog( void );

        virtual void    makeSound( void ) const;
        Brain   *getBrain( void ) const;
};

#endif