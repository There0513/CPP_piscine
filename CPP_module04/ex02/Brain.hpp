#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
    private:
        std::string     _ideas[100];

    public:
    /* default constructor - copy constructor - copy assignment operator overload - destructor */
        Brain( void );
        Brain( Brain const & copy );
        Brain & operator=(Brain const & copy);
        ~Brain( void );

        std::string *getIdea( void );
};

#endif