#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class Karen
{
    private:
        void    _debug( void );
        void    _info( void );
        void    _warning( void );
        void    _error( void );

    public:
        Karen( void );
        ~Karen();
        void    complain( std::string level );
};

#endif