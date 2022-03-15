#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

// VIRTUAL
class Animal
{
    protected:
        std::string _type;

    public:
        /* default constructor - copy constructor - copy assignment operator overload - destructor: */
        Animal( void );
        Animal( std::string type );
        Animal( Animal const & copy );
        Animal & operator=(Animal const & copy);
        virtual ~Animal( void ); // 'virtual' Destructor, so it can be freed: 'main.cpp:21:5: error: delete called on non-final 'Animal' that has virtual functions but non-virtual destructor [-Werror,-Wdelete-non-abstract-non-virtual-dtor]'

        std::string     getType( void ) const;
        void            setType( std::string type );

        virtual void    makeSound( void ) const; // -> virtual means that the linkage will be dynamic and not static
        /* program checks during compilation which makeSound function to call (Dog or Cat) */
};

#endif