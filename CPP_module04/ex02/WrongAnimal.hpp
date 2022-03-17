#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;

    public:
        /* default constructor - copy constructor - copy assignment operator overload - destructor: */
        WrongAnimal( void );
        WrongAnimal( std::string type );
        WrongAnimal( WrongAnimal const & copy );
        WrongAnimal & operator=(WrongAnimal const & copy);
        ~WrongAnimal( void );               // not virtual like Animal.cpp

        std::string     getType( void ) const;
        void            setType( std::string type );

        void    makeSound( void ) const;                // not virtual like Animal.cpp
};

#endif