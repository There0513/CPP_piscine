#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class AAnimal
{
    protected:
        std::string _type;

    /* We're making this constructor protected because
       we don't want people creating AAnimal objects directly,
       but we still want derived classes to be able to use it. */
    /* AAnimal(const std::string& name)
           : m_name{ name }
       {
       } */

    public:
        /* default constructor (+ with argument) - copy constructor - copy assignment operator overload - destructor: */
        AAnimal( void );
        AAnimal( std::string type );
        AAnimal( AAnimal const & copy );
        AAnimal & operator=(AAnimal const & copy);
        virtual ~AAnimal( void );

        std::string     getType( void ) const;
        void            setType( std::string type );

        virtual void    makeSound( void ) const = 0; // == pure function -> abstract class AAnimal
};

#endif